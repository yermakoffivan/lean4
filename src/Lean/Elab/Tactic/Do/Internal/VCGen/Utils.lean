/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Meta.Sym
public import Std.Internal.Do
public import Lean.Elab.Command
public import Lean.Elab.Tactic.Basic
public import Lean.Elab.Tactic.Meta
public import Lean.Elab.Tactic.Simp
public import Lean.Elab.Tactic.Do.Attr
public meta import Lean.Elab.Tactic.Basic
public meta import Lean.Elab.Tactic.Do.Attr
public import Lean.Elab.Tactic.Do.Internal.VCGen.Types
public import Lean.Meta.Sym.Simp.Goal
public section

open Lean Parser Meta Elab Tactic Sym Lean.Order
open Std.Internal.Do

namespace Lean.Elab.Tactic.Do.Internal.VCGen

/-- Introduce one argument from a function-valued predicate relation.

    The state type `σ : Type` and the assertion type `α : Type u` live in independent universes:
    for an abstract monad the assertion type `Pred : Type u` need not share a universe with the
    state type. The state is kept in `Type 0` (always the case for monadic state, e.g. `Nat`) so the
    carrier level `σ → α : Type (max 0 u)` normalizes to `Type u`; a general `σ : Type v` would make
    it `Type (max v u)`, and the `Sym` pattern matcher cannot unify a `max` of two universe
    variables against a concrete level. -/
theorem state_arg_intro' {σ α : Type u} [PartialOrder α] (pre rhs : σ → α) :
    (∀ s, pre s ⊑ rhs s) → pre ⊑ rhs := by
  intro h s
  exact h s

/-- Introduce one argument from a function-valued predicate relation (see `state_arg_intro'` for the
    universe discipline). -/
theorem top_state_arg_intro' {σ α : Type u} [CompleteLattice α] (rhs : σ → α) :
    (∀ s, ⊤ ⊑ rhs s) → ⊤ ⊑ rhs := by
  intro h s
  rw [top_fun_apply]
  exact h s

/-- Introduce an embedded proposition from the left side of a lattice relation. -/
theorem ofProp_pre_intro' {l : Type u} [CompleteLattice l] (p : Prop) (rhs : l) :
    (p → (⊤ : l) ⊑ rhs) → (⌜p⌝ : l) ⊑ rhs := by
  exact (CompleteLattice.ofProp_intro p rhs).mpr

/-! ## VCGen intro procedures

Procedures for introducing variables and hypotheses when unfolding Triples
and handling preconditions in VCGen goals.
-/

/-- Expand `pre ⊑ rhs` when the lattice type is a function type `σ₁ → ... → σₙ → BaseTy`
    into `∀ s₁ ... sₙ, pre s₁ ... sₙ ⊑ rhs s₁ ... sₙ`, then intro the `sᵢ`.
    This is needed after unfolding Triple when `Pred` has excess state arguments. -/
def introsExcessArgs (goal : Grind.Goal) : SymM Grind.Goal := goal.withContext do
  let type ← goal.mvarId.getType
  let_expr PartialOrder.rel α _inst pre rhs := type | return goal
  unless α.isForall do return goal
  -- Build ∀ (s₁ : σ₁) ... (sₙ : σₙ), (pre s₁ ... sₙ) ⊑ (rhs s₁ ... sₙ)
  let newTarget ← liftMetaM <| Meta.forallTelescope α fun ss _baseTy => do
    let preApplied := mkAppN pre ss
    let rhsApplied := mkAppN rhs ss
    let innerRel ← mkAppM ``PartialOrder.rel #[preApplied, rhsApplied]
    mkForallFVars ss innerRel
  let newTarget ← shareCommon newTarget
  let goalMVarId ← goal.mvarId.replaceTargetDefEq newTarget
  let goal := { goal with mvarId := goalMVarId }
  let .goal _ goal' ← goal.intros #[] | return goal
  return goal'

/-- Introduce a single precondition hypothesis, leaving the residual precondition as `⊤`. -/
def introMeetPre (rules : VCGen.IntroRules) (ofProp : Bool)
    (goal : MVarId) : SymM MVarId :=
  goal.withContext do
  let rule :=
    if ofProp then rules.ofPropPreIntro else rules.propPreIntro
  let .goals [goal] ← rule.apply goal
    | throwError "Failed to apply precondition intro rule"
  let .goal _ goal ← Sym.intros goal
    | throwError "Failed to intro precondition hypothesis"
  return goal

/-! ## Simplification and intros -/

inductive SimpGoalResult where
  | closed
  | goal (goal : MVarId)
  | failed

/-- Simplify `goal` with the given `methods`, threading `simpState` through
    `VCGenM`'s state to reuse the persistent cache across calls.
    Returns `none` if simp closes the goal; otherwise returns the (possibly
    unchanged) goal. -/
def VCGenM.simpGoal (goal : MVarId) : VCGenM SimpGoalResult := do
  let some methods := (← read).simpMethods | return .goal goal
  let methods := { methods with pre := Sym.Simp.simpTelescope }
  let decl ← goal.getDecl
  let (result, simpState') ← Sym.Simp.SimpM.run (Sym.Simp.simp decl.type)
    methods {} (← get).simpState
  modify fun s => { s with simpState := simpState' }
  match ← result.toSimpGoalResult goal with
  | .closed     => return .closed
  | .goal goal' => return .goal goal'
  | .noProgress => return .goal goal

/-- Introduce the single leading binder of `goal`, named `override?` when given, otherwise the
    binder's own name. Accessibility is decided by `tactic.hygienic` via `mkFreshBinderNameForTactic`
    (hygienic ⇒ inaccessible `s✝`; otherwise an accessible name unused in the current local context).
    Returns `none` when the goal has no leading binder. The introduction itself is delegated to
    `Sym.intros` (so it keeps the memoized, sharing-correct intro); only the name is chosen here. -/
def introOneHygienic (goal : MVarId) (override? : Option Name := none) : VCGenM (Option MVarId) :=
  goal.withContext do
    let binderName? : Option Name := match ← goal.getType with
      | .forallE n .. => n
      | .letE n .. => n
      | _ => none
    let some binderName := binderName? | return none
    let nm ← Meta.mkFreshBinderNameForTactic (override?.getD binderName)
    let .goal _ goal ← Sym.intros goal #[nm] | return none
    return some goal

/-- Introduce all leading binders of `goal` via `introOneHygienic`, using `overrides[i]?` to name the
    `i`-th binder. Re-reading the (updated) local context per binder gives `getUnusedName` clash
    avoidance in the accessible case. Returns the goal unchanged when there are no leading binders. -/
partial def introsHygienic (goal : MVarId) (overrides : Array Name := #[]) (i : Nat := 0) :
    VCGenM MVarId := do
  match ← introOneHygienic goal overrides[i]? with
  | some goal => introsHygienic goal overrides (i + 1)
  | none      => return goal

/-- Simplify the goal with `Sym.Simp.simpTelescope`
    (if simp methods are configured), then intro forall-bound variables (names preserved + hygiene).
    Returns `none` if simp closes the goal. -/
def VCGenM.introsAndSimp (goal : MVarId) : VCGenM SimpGoalResult := do
  let simpGoal ← VCGenM.simpGoal goal
  let .goal goal := simpGoal | return simpGoal
  let goalType ← goal.getType
  unless goalType.isForall do return .goal goal
  return .goal (← introsHygienic goal)

/--
`VCGenM` wrapper around `BackwardRule.apply`. Behaves identically to
`rule.apply goal` unless the application fails and `Context.debug` is on.
In that case it retries on a fresh metavariable whose type is the
`unfoldReducible`-normalized goal type. If the retry succeeds, an earlier
step forgot a normalization; we throw a hard error pointing at the rule and
the missing reduction.

`ruleDesc?` describes the rule for debug output. When `none`, the description
is reconstructed from `rule.expr.getAppFn` — works for the common case of a
constant rule. Pass a custom message for dynamically-built rules.

Designed for dot notation: `rule.applyChecked goal`. Requires
`open Lean.Elab.Tactic.Do.Internal` in scope so that the dot lookup resolves.
-/
public def _root_.Lean.Meta.Sym.BackwardRule.applyChecked (rule : BackwardRule) (goal : MVarId)
    (ruleDesc? : Option MessageData := none) : VCGenM ApplyResult := do
  let r ← rule.apply goal
  match r with
  | .goals _ => return r
  | .failed =>
    unless (← read).debug do return r
    let originalType ← goal.getType
    let normalized ← unfoldReducible originalType
    if normalized == originalType then return r
    let succeeded ← Lean.Meta.withoutModifyingMCtx do
      let goal' ← Meta.mkFreshExprSyntheticOpaqueMVar normalized
      match ← rule.apply goal'.mvarId! with
      | .goals _ => return true
      | .failed => return false
    if succeeded then
      let ruleDesc := ruleDesc?.getD <|
        match rule.expr.getAppFn with
        | .const declName _ => m!"`{.ofConstName declName}`"
        | _ => m!"<rule constructed from expression>"
      throwError m!"[mvcgen' +debug] BackwardRule {ruleDesc} failed to \
        apply to:{indentExpr originalType}\nbut succeeded after `unfoldReducible`-\
        normalization to:{indentExpr normalized}\nAn earlier step is missing a normalization. \
        Re-run with `set_option pp.all true` to see the structural difference."
    return r

/--
Repeatedly reduces head redexes in `e`, cycling through the following reductions until
no further progress is made:

1. **Beta**: `(fun x₁ ... xₘ => b) a₁ ... aₙ` → `b[a₁/x₁, aₘ/xₘ] aₘ₊₁ ... aₙ`
2. **Iota**: `MyType.casesOn (MyType.ctor args) alts` → `altᵢ args`
   (matcher/recursor applied to a constructor, at reducible transparency)
3. **Proj-reduction**: `⟨a, b, c⟩.1` → `a` (kernel `.proj` nodes)
4. **Projection delta**: `Struct.field x` → `x.5` (unfolds projection *functions*,
   progress only if followed by proj-reduction)

Returns `none` when no reduction was possible. Maintains maximal sharing via `shareCommonInc`.
-/
public partial def reduceHead? (e : Expr) : SymM (Option Expr) :=
  withReducible <| go none e.getAppFn e.getAppRevArgs
  where
    go lastReduction f rargs := do
      match f with
      | .mdata _ f => go lastReduction f rargs
      | .app f a => go lastReduction f (rargs.push a)
      | .lam .. =>
        if rargs.size = 0 then return lastReduction
        let e' := f.betaRev rargs
        let e' ← Sym.shareCommonInc e'
        go (some e') e'.getAppFn e'.getAppRevArgs
      | .const name .. =>
        -- projections
        if ← isProjectionFn name then
          let some e' ← Meta.unfoldDefinition? (mkAppRev f rargs) | return lastReduction
          let e' ← Sym.shareCommonInc e'
          go lastReduction e'.getAppFn e'.getAppRevArgs  -- intentional lastReduction! see docstring
        -- iota reduction: match/recursor with concrete discriminant
        else if let some e' ← liftMetaM <| reduceRecMatcher? (mkAppRev f rargs) then
          let e' ← Sym.shareCommonInc e'
          go (some e') e'.getAppFn e'.getAppRevArgs
        else
          pure lastReduction
      | .proj .. => match ← reduceProj? f with
        | some f' =>
          let e' := mkAppRev f' rargs
          let e' ← Sym.shareCommonInc e'
          go (some e') e'.getAppFn e'.getAppRevArgs
        | none    => pure lastReduction
      | _ => pure lastReduction


public def reduceHead (e : Expr) : SymM Expr :=
  return (← reduceHead? e).getD e

/-- Return a local declaration whose type is definitionally equal to `type`. -/
def findLocalDeclWithType? (type : Expr) : SymM (Option FVarId) := do
  (← getLCtx).findDeclRevM? fun localDecl => do
    if localDecl.isImplementationDetail then
      return none
    else if (← isDefEqS type localDecl.type) then
      return some localDecl.fvarId
    else
      return none

/-- Return `true` if managed to close goal `mvarId` using an assumption. -/
def _root_.Lean.Sym.assumptionCore (mvarId : MVarId) : SymM Bool :=
  mvarId.withContext do
    mvarId.checkNotAssigned `assumption
    let fvarId? ← findLocalDeclWithType? (← mvarId.getType)
    match fvarId? with
    | none => return false
    | some fvarId => mvarId.assign (mkFVar fvarId); return true

/-- Close goal `mvarId` using an assumption. Throw error message if failed. -/
def  _root_.Lean.Sym.assumption (mvarId : MVarId) : SymM Unit :=
  unless (← mvarId.assumptionCore) do
    throwTacticEx `assumption mvarId

/--
Solves conjunctions whose leaves are `True` or `e₁ = e₂`, and returns a residual goal containing
exactly the conjuncts that could not be solved.
This procedure may assign metavariables in `e₁`/`e₂`, for example for `e = ?m` it will assign
`?m := e`.
-/
public partial def repeatAndRfl (goal : MVarId) : VCGenM (Option MVarId) := goal.withContext do
  let ctx ← read
  let ty ← instantiateMVars (← goal.getType)
  if ty.isAppOf ``True then
    goal.assign (mkConst ``True.intro)
    return none
  else if ty.isAppOf ``And then
    let .goals [g₁, g₂] ← ctx.andIntroRule.applyChecked goal
      | throwError "repeatAndRfl: failed to apply {.ofConstName ``And.intro} to{indentExpr ty}"
    match ← repeatAndRfl g₁, ← repeatAndRfl g₂ with
    | none,    none    => return none
    | some g,  none    => return some g
    | none,    some g  => return some g
    | some g₁', some g₂' =>
      let t₁ ← g₁'.getType
      let t₂ ← g₂'.getType
      let combined ← mkFreshExprSyntheticOpaqueMVar (mkApp2 (mkConst ``And) t₁ t₂)
      g₁'.assign (mkApp3 (mkConst ``And.left) t₁ t₂ combined)
      g₂'.assign (mkApp3 (mkConst ``And.right) t₁ t₂ combined)
      return combined.mvarId!
  else if let some (ty, lhs, rhs) := ty.app3? ``Eq then
    let lhs ← reduceHead lhs
    let rhs ← reduceHead rhs
    let u ← Meta.getLevel ty
    let goal ← goal.replaceTargetDefEq (mkApp3 (mkConst ``Eq [u]) ty lhs rhs)
    if ← withAssignableSyntheticOpaque <| isDefEqS lhs rhs then
      goal.assign (mkApp2 (mkConst ``Eq.refl [← Meta.getLevel ty]) ty lhs)
      return none
    else
      return goal
  -- Assumption might be quite costly if context gets large. Maybe we need a special flag for that
  -- else if ← Sym.assumptionCore goal then
  --   return none
  else return goal

end Lean.Elab.Tactic.Do.Internal.VCGen

end -- public section
