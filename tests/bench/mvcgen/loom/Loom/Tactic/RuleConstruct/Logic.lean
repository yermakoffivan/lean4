/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Lean.Elab
public meta import Lean.Elab
public section

open Lean Meta Sym Sym.Internal Lean.Order
open Std.Internal.Do

namespace Loom

initialize registerTraceClass `Loom.RuleConstruct.Logic

/-- Proving `pre ⊑ ⌜p⌝` reduces to proving `p`. -/
theorem le_ofProp {l : Type u} [CompleteLattice l] (x : l) (p : Prop) : p → x ⊑ ⌜p⌝ :=
  fun hp => by
    rw [Std.Internal.Do.CompleteLattice.pure_true hp, CompleteLattice.ofProp_true]
    exact le_top x

inductive LogicOp where
  | And
  | Imp
  | Pure
  /-- The lattice top `⊤`. Has no operands; the split lemma `le_top` has no premise, so this
      closes the goal (it is the nullary analogue of `Pure`). -/
  | Top
  -- Temporarily disabled:
  -- | Forall (n : Name)

/-- Map lattice connective declaration names to supported `LogicOp`s. -/
def _root_.Lean.Name.toLogicOp? : Name → Option LogicOp
  | ``meet => some .And
  | ``himp => some .Imp
  | ``Lean.Order.CompleteLattice.ofProp => some .Pure
  | ``Lean.Order.top => some .Top
  | _ => none

def LogicOp.mkLatticeExpr (as : Array Expr) (resultType? : Option Expr := none) : LogicOp → MetaM Expr
  | .And => mkAppM ``meet as
  | .Imp => mkAppM ``himp as
  | .Pure => mkAppOptM ``Lean.Order.CompleteLattice.ofProp #[resultType?, none, some as[0]!]
  | .Top => mkAppOptM ``Lean.Order.top #[resultType?, none]

/-- Map a logic operator to its corresponding `*_fun_apply` lemma. -/
def LogicOp.toApplyLemma : LogicOp → Name
  | .And => ``meet_fun_apply
  | .Imp => ``himp_fun_apply
  | .Pure => ``Lean.Order.CompleteLattice.ofProp_fun_apply
  | .Top => ``Lean.Order.top_fun_apply

/-- Map a logic operator to its corresponding proposition-level equivalence lemma. -/
def LogicOp.toPropLemma : LogicOp → Name
  | .And => ``meet_prop_eq_and
  | .Imp => ``himp_prop_eq_imp
  | .Pure => ``Lean.Order.CompleteLattice.ofProp_intro
  | .Top => ``le_top -- unused placeholder: there is no `⊤`-Prop equivalence lemma and this is dead code

/-- Whether the operands of this logic operator are functions of the excess (state)
    arguments, and so must be applied to each excess argument when descending one
    lattice level during `mkApplyEq`.

    For `meet`/`himp` the operands are themselves elements of the function lattice
    (`(a ⊓ b) s = a s ⊓ b s`), so each operand `a` becomes `a s`. For `ofProp`/`top` the
    operand is reused unchanged (`(⌜p⌝ : σ→β) s = (⌜p⌝ : β)`, `(⊤ : σ→β) s = (⊤ : β)`), so it must
    *not* be applied to `s`. -/
def LogicOp.needApplyArgs : LogicOp → Bool
  | .And => true
  | .Imp => true
  | .Pure => false
  | .Top => false

/-- Map a logic operator to its `⊑`-form splitting lemma.

    When `preIsTop` is set, the precondition is `⊤`, so `.Imp` uses the `⊤`-specialized lemma
    `himp_complete_top` (`a ⊑ b → ⊤ ⊑ a ⇨ b`) instead of `himp_complete`, dropping the redundant
    `⊓ ⊤`. `.And`/`.Pure` already produce `⊓ ⊤`-free subgoals, so they are unaffected. -/
def LogicOp.toRelLemma (preIsTop : Bool) : LogicOp → Name
  | .And => ``le_meet       -- le_meet (x y z) : x ⊑ y → x ⊑ z → x ⊑ y ⊓ z
  | .Imp => if preIsTop then ``himp_complete_top -- himp_complete_top (a b) : a ⊑ b → ⊤ ⊑ a ⇨ b
            else ``himp_complete                 -- himp_complete (x a b) : a ⊓ x ⊑ b → x ⊑ a ⇨ b
  | .Pure => ``Loom.le_ofProp -- le_ofProp (x p) : p → x ⊑ ⌜p⌝
  | .Top => ``le_top          -- le_top (x) : x ⊑ ⊤  (no premise ⇒ closes the goal)

/-- Lift an equality `lhs = rhs` to `(lhs args...) = (rhs args...)`. -/
private def liftEqByArgs (eqPrf : Expr) (args : List Expr) : MetaM Expr := do
  if args.isEmpty then
    return eqPrf
  let eqTy ← inferType eqPrf
  let some (_, lhs, _rhs) := eqTy.eq?
    | throwError "Expected equality proof, got {indentExpr eqTy}"
  let lhsTy ← inferType lhs
  let context ← withLocalDecl `x .default lhsTy fun x => do
    let app := mkAppN x args.toArray
    mkLambdaFVars #[x] app
  mkCongrArg context eqPrf

/--
Apply a function-extensional lemma (`*_fun_apply`) repeatedly over all excess
arguments, producing an equality at the fully applied level.

Example (`lop = .And`, `stepThm = ``meet_fun_apply`, `as = #[a, b]`,
`ss = [s₁, s₂]`): the resulting proof has type
`((a ⊓ b) s₁ s₂) = (a s₁ s₂ ⊓ b s₁ s₂)`.
-/
partial def LogicOp.mkApplyEq
    (stepThm : Name) (lop : LogicOp)
    (as : Array Expr) (ss : List Expr) (resultType? : Option Expr := none) : MetaM Expr := do
  match ss with
  | [] => mkEqRefl =<< lop.mkLatticeExpr as resultType?
  | s :: ss' =>
    let args := as.push s |>.map some
    let rt := resultType?.map .bindingBody!
    let step ← mkAppOptM stepThm <| #[none, rt, none] ++ args
    if ss'.isEmpty then
      return step
    let stepLift ← liftEqByArgs step ss'
    -- Descend one lattice level: only operators whose operands depend on the excess
    -- arguments (see `LogicOp.needApplyArgs`) get their operands applied to `s`.
    let as := if lop.needApplyArgs then as.map (mkApp · s) else as
    let rest ← lop.mkApplyEq stepThm as ss' rt
    mkEqTrans stepLift rest

/-- Like `mkGoalPremiseEq` but only distributes through function applications
    via `*_fun_apply` lemmas, staying at the lattice level (no Prop simplification).
    Returns `((a ⊓ b) s₁...sₙ, (a s₁...sₙ ⊓ b s₁...sₙ), eq)`. -/
def LogicOp.mkDistributeEq
    (lop : LogicOp) (as ss : Array Expr) (resultType? : Option Expr := none) : SymM (Expr × Expr) := do
  let applyLemma := lop.toApplyLemma
  let lat ← lop.mkLatticeExpr as resultType?
  let goal ← mkAppNS lat ss
  let eqFun ← lop.mkApplyEq applyLemma as ss.toList resultType?
  return (goal, eqFun)

-- #check forallMeta

/--
Creates a reusable backward rule for a lattice logic expression in `⊑` form.
Chains distribution (`*_fun_apply`) with the split lemma (`le_meet`/`himp_complete`).

For `And`, produces:
```
∀ (a b : l) (s₁ : σ₁) ... (sₙ : σₙ) (pre : l'),
  pre ⊑ a s₁...sₙ → pre ⊑ b s₁...sₙ → pre ⊑ (a ⊓ b) s₁...sₙ
```
For `Imp`, produces:
```
∀ (a b : l) (s₁ : σ₁) ... (sₙ : σₙ) (pre : l'),
  a s₁...sₙ ⊓ pre ⊑ b s₁...sₙ → pre ⊑ (a ⇨ b) s₁...sₙ
```
Works for any `CompleteLattice`, not just `Prop`.

When `preIsTop` is set, the precondition `pre` is fixed to `⊤` (rather than abstracted as a
parameter) and `Imp` uses the `⊤`-specialized split lemma `himp_complete_top`, so the `Imp` rule
becomes
```
∀ (a b : l) (s₁ : σ₁) ... (sₙ : σₙ),
  a s₁...sₙ ⊑ b s₁...sₙ → ⊤ ⊑ (a ⇨ b) s₁...sₙ
```
dropping the redundant `⊓ ⊤`.
-/
def LogicOp.mkBackwardRule
    (lop : LogicOp) (as : Array Expr) (excessArgs : Array Expr)
    (resultType? : Option Expr := none) (preIsTop : Bool := false)
    : SymM BackwardRule := do
  let as ← as.mapM fun arg => do
    mkFreshExprMVar (userName := `a) (← Sym.inferType arg)
  -- dbg_trace "as"
  let ss ← excessArgs.mapM fun arg => do
    mkFreshExprMVar (userName := `s) (← Sym.inferType arg)

  let (goal, eqGoalDistributed) ← lop.mkDistributeEq as ss resultType?

  let goalTy ← Meta.inferType goal
  -- When the precondition is `⊤`, bake it into the rule (and use a `⊤`-specialized split lemma
  -- below) so the resulting subgoals avoid the redundant `⊓ ⊤`. Otherwise the precondition is a
  -- fresh metavariable that becomes a universally quantified parameter of the rule.
  let pre ← if preIsTop then
      mkAppOptM ``Lean.Order.top #[goalTy, none]
    else
      mkFreshExprMVar (userName := `pre) goalTy

  -- Lift equality through `pre ⊑ ·`: (pre ⊑ goal) = (pre ⊑ distributed)
  -- Use partial application (not lambda) to avoid beta redexes
  let relPreGoal ← mkAppM ``PartialOrder.rel #[pre]
  let relEq ← mkCongrArg relPreGoal eqGoalDistributed
  let relEqSymm ← mkEqSymm relEq
  -- eqMp : (pre ⊑ distributed) → (pre ⊑ goal)
  let eqMp ← mkAppM ``Eq.mp #[relEqSymm]

  -- Instantiate the split lemma (le_meet / himp_complete / himp_complete_top) via telescope
  let splitLemma ← mkConstWithFreshMVarLevels (lop.toRelLemma preIsTop)
  let (xs, _, body) ← forallMetaTelescope (← Meta.inferType splitLemma)
  -- Unify conclusion with eqMp's domain to assign param mvars
  unless ← isDefEq body (← Meta.inferType eqMp).bindingDomain! do
    throwError "Expected {← Meta.inferType eqMp}.bindingDomain! = {← Meta.inferType body}"
  -- Compose (abstractMVars handles instantiation of assigned mvars)
  let prf := mkApp eqMp (mkAppN splitLemma xs)

  let res ← abstractMVars prf
  mkBackwardRuleFromExpr res.expr res.paramNames.toList

/-! ## Tests -/

section Test

/-- Test helper: run `mkBackwardRuleForLogicRel` and return the generated rule type. -/
def testLogicBackwardRuleRel
    (lop : LogicOp)
    (as excessArgs : Array Expr) (resultType? : Option Expr := none)
    (preIsTop : Bool := false) : MetaM Expr := do
  let rule ← SymM.run do lop.mkBackwardRule as excessArgs resultType? preIsTop
  inferType rule.expr

-- Test 1: And on Nat → Prop, n = 1 excess arg
/--
info: Test Rel-And (Nat→Prop, n=1): ∀ (pre : Prop) (a : Nat → Prop) (s : Nat) (a_1 : Nat → Prop),
  pre ⊑ a s → pre ⊑ a_1 s → pre ⊑ (a ⊓ a_1) s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      withLocalDeclD `s nat fun s => do
        let ty ← testLogicBackwardRuleRel .And #[a, b] #[s]
        logInfo m!"Test Rel-And (Nat→Prop, n=1): {ty}"

-- Test 2: Imp on Nat → Prop, n = 1 excess arg
/--
info: Test Rel-Imp (Nat→Prop, n=1): ∀ (pre : Prop) (a : Nat → Prop) (s : Nat) (a_1 : Nat → Prop),
  a s ⊓ pre ⊑ a_1 s → pre ⊑ (a ⇨ a_1) s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      withLocalDeclD `s nat fun s => do
        let ty ← testLogicBackwardRuleRel .Imp #[a, b] #[s]
        logInfo m!"Test Rel-Imp (Nat→Prop, n=1): {ty}"

-- Test 2b: Imp on Nat → Prop, n = 1 excess arg, with `⊤` precondition.
-- Uses `himp_complete_top`, so there is no `pre` binder and the hypothesis drops `⊓ ⊤`.
/-- info: Test Rel-Imp-Top (Nat→Prop, n=1): ∀ (a : Nat → Prop) (s : Nat) (a_1 : Nat → Prop), a s ⊑ a_1 s → ⊤ ⊑ (a ⇨ a_1) s -/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      withLocalDeclD `s nat fun s => do
        let ty ← testLogicBackwardRuleRel .Imp #[a, b] #[s] (preIsTop := true)
        logInfo m!"Test Rel-Imp-Top (Nat→Prop, n=1): {ty}"

-- Test 3: And on Prop, n = 0 excess args
/-- info: Test Rel-And (Prop, n=0): ∀ (pre a a_1 : Prop), pre ⊑ a → pre ⊑ a_1 → pre ⊑ a ⊓ a_1 -/
#guard_msgs in
#eval! show MetaM Unit from do
  let l := mkSort 0
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      let ty ← testLogicBackwardRuleRel .And #[a, b] #[]
      logInfo m!"Test Rel-And (Prop, n=0): {ty}"

-- Test 4: End-to-end And rule application
/--
info: Test 4 subgoal: ⊤ ⊑ a s
---
info: Test 4 subgoal: ⊤ ⊑ b s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      withLocalDeclD `s nat fun s => do
        let rule ← SymM.run do LogicOp.mkBackwardRule .And #[a, b] #[s]
        let meetAB ← mkAppM ``meet #[a, b]
        let top ← mkAppOptM ``Lean.Order.top #[some (mkSort 0), none]
        let target ← mkAppM ``PartialOrder.rel #[top, mkApp meetAB s]
        let goalExpr ← mkFreshExprSyntheticOpaqueMVar target
        let .mvar goal := goalExpr | throwError "expected mvar"
        let .goals goals ← SymM.run do rule.apply goal
          | throwError "Test 4: rule application failed"
        for g in goals do
          logInfo m!"Test 4 subgoal: {← g.getType}"

-- Test 5: End-to-end Imp rule application with pre = ⊤ (uses the `⊤`-specialized lemma,
-- so the subgoal drops the redundant `⊓ ⊤`).
/-- info: Test 5 subgoal: a s ⊑ b s -/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `a l fun a => do
    withLocalDeclD `b l fun b => do
      withLocalDeclD `s nat fun s => do
        let rule ← SymM.run do LogicOp.mkBackwardRule .Imp #[a, b] #[s] (preIsTop := true)
        let himpAB ← mkAppM ``himp #[a, b]
        let top ← mkAppOptM ``Lean.Order.top #[some (mkSort 0), none]
        let target ← mkAppM ``PartialOrder.rel #[top, mkApp himpAB s]
        let goalExpr ← mkFreshExprSyntheticOpaqueMVar target
        let .mvar goal := goalExpr | throwError "expected mvar"
        let .goals goals ← SymM.run do rule.apply goal
          | throwError "Test 5: rule application failed"
        for g in goals do
          logInfo m!"Test 5 subgoal: {← g.getType}"

-- Test 6: Pure on Nat → Prop, n = 1 excess arg
/-- info: Test Rel-Pure (Nat→Prop, n=1): ∀ (pre a : Prop) (s : Nat), a → pre ⊑ ⌜a⌝ s -/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `p (mkSort 0) fun p => do
    withLocalDeclD `s nat fun s => do
      let ty ← testLogicBackwardRuleRel .Pure #[p] #[s] (some l)
      logInfo m!"Test Rel-Pure (Nat→Prop, n=1): {ty}"

-- Test 7: Pure on Prop, n = 0 excess args
/-- info: Test Rel-Pure (Prop, n=0): ∀ (pre a : Prop), a → pre ⊑ ⌜a⌝ -/
#guard_msgs in
#eval! show MetaM Unit from do
  withLocalDeclD `p (mkSort 0) fun p => do
    let ty ← testLogicBackwardRuleRel .Pure #[p] #[] (some (mkSort 0))
    logInfo m!"Test Rel-Pure (Prop, n=0): {ty}"

-- Test 8: End-to-end Pure rule application
/-- info: Test Pure subgoal: p -/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let l ← mkArrow nat (mkSort 0)
  withLocalDeclD `p (mkSort 0) fun p => do
    withLocalDeclD `s nat fun s => do
      let rule ← SymM.run do LogicOp.mkBackwardRule .Pure #[p] #[s] (some l)
      let pureP ← mkAppOptM ``Lean.Order.CompleteLattice.ofProp #[some l, none, some p]
      let top ← mkAppOptM ``Lean.Order.top #[some (mkSort 0), none]
      let target ← mkAppM ``PartialOrder.rel #[top, mkApp pureP s]
      let goalExpr ← mkFreshExprSyntheticOpaqueMVar target
      let .mvar goal := goalExpr | throwError "expected mvar"
      let .goals goals ← SymM.run do rule.apply goal
        | throwError "Test Pure: rule application failed"
      for g in goals do
        logInfo m!"Test Pure subgoal: {← g.getType}"

end Test

end Loom

end -- public section
