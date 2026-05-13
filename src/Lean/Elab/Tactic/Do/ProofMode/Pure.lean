/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.MGoal
import Lean.Elab.Tactic.Meta
import Lean.Elab.Tactic.Do.ProofMode.Basic
import Lean.Elab.Tactic.Do.ProofMode.Focus
import Lean.Meta.Tactic.Rfl

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

-- NB: We do not use MVarId.intro because that would mean we require all callers to supply an MVarId.
-- This function only knows about the hypothesis H=⌜φ⌝ to destruct.
-- It will provide a proof for Q ∧ H ⊢ₛ T
-- if `k` produces a proof for Q ⊢ₛ T that may range over a pure proof h : φ.
-- It calls `k` with the φ in H = ⌜φ⌝ and a proof `h : φ` thereof.
def mPureCore
  [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (σs : Expr) (hyp : Expr) (name : TSyntax ``binderIdent)
  (k : Expr /-φ:Prop-/ → Expr /-h:φ-/ → m (α × MGoal × Expr)) : m (α × MGoal × Expr) := do
  let u ← mkFreshLevelMVar
  let φ ← mkFreshExprMVar (mkSort .zero)
  let inst ← synthInstance (mkApp3 (mkConst ``IsPure [u]) σs hyp φ)
  let (name, ref) ← liftMetaM <| getFreshHypName name
  withLocalDeclD name φ fun h => do
    addLocalVarInfo ref (← liftMetaM <| getLCtx) h φ
    let (a, goal, prf /- : goal.toExpr -/) ← k φ h
    let prf ← mkLambdaFVars #[h] prf
    let prf := mkApp7 (mkConst ``Pure.thm [u]) σs goal.hyps hyp goal.target φ inst prf
    let goal := { goal with hyps := SPred.mkAnd! u σs goal.hyps hyp }
    return (a, goal, prf)

def elabMPure : Tactic
  | `(tactic| mpure $hyp) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let res ← goal.focusHypWithInfo hyp
    let (m, _new_goal, prf) ← mPureCore goal.σs res.focusHyp (← `(binderIdent| $hyp:ident)) fun _ _ => do
      let goal := res.restGoal goal
      let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
      return (m, goal, m)
    let prf := res.rewriteHyps goal prf
    mvar.assign prf
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

-- NB: We do not use MVarId.intro because that would mean we require all callers to supply an MVarId.
-- This function only knows about the hypothesis H=⌜φ⌝ to destruct.
-- It will provide a proof for Q ∧ H ⊢ₛ T
-- if `k` produces a proof for Q ⊢ₛ T that may range over a pure proof h : φ.
-- It calls `k` with the φ in H = ⌜φ⌝ and a proof `h : φ` thereof.
def mPureIntroCore [Monad m] [MonadLiftT MetaM m]
  (goal : MGoal)
  (k : Expr /-φ:Prop-/ → m (α × Expr)) : m (α × Expr) := do
  let φ ← mkFreshExprMVar (mkSort .zero)
  let inst ← synthInstance (mkApp3 (mkConst ``IsPure [goal.u]) goal.σs goal.target φ)
  let (a, hφ) ← k φ
  let prf := mkApp6 (mkConst ``Pure.intro [goal.u]) goal.σs goal.hyps goal.target φ inst hφ
  return (a, prf)

def elabMPureIntro : Tactic
  | `(tactic| mpure_intro) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let (mv, prf) ← mPureIntroCore goal fun φ => do
      let m ← mkFreshExprSyntheticOpaqueMVar φ (← mvar.getTag)
      return (m.mvarId!, m)
    mvar.assign prf
    replaceMainGoal [mv]
  | _ => throwUnsupportedSyntax

private def extractPureProp (e : Expr) : MetaM (Option Expr) := do
  let e ← instantiateMVarsIfMVarApp e
  let some (_, e) := e.app2? ``ULift.down | return none
  let f := e.getAppFn
  unless f.isConstOf ``SPred.pure do return none
  let args := e.getAppArgs
  if args.size < 2 then return none
  let σs := args[0]!
  let n ← TypeList.length σs
  unless n = args.size - 2 do return none
  let p := args[1]!
  return p

partial def _root_.Lean.MVarId.applyRflAndAndIntro (mvar : MVarId) : MetaM Unit := do
  -- The target might look like `(⌜nₛ = ?n ∧ ?m = b⌝ s).down`, which we reduce to
  -- `nₛ = ?n ∧ ?m = b` with `extractPureProp`.
  -- (Recall that `⌜s = 4⌝ s` is `SPred.pure (σs:=[Nat]) (s = 4) s` and `SPred.pure` is
  -- semi-reducible.)
  let ty ← mvar.getType >>= instantiateMVarsIfMVarApp
  let ty ← (·.getD ty) <$> extractPureProp ty
  trace[Elab.Tactic.Do.spec] "pure Prop: {ty}"
  if ty.isAppOf ``True then
    mvar.assign (mkConst ``True.intro)
  else if let some (lhs, rhs) := ty.app2? ``And then
    let hlhs ← mkFreshExprMVar lhs
    let hrhs ← mkFreshExprMVar rhs
    applyRflAndAndIntro hlhs.mvarId!
    applyRflAndAndIntro hrhs.mvarId!
    mvar.assign (mkApp4 (mkConst ``And.intro) lhs rhs hlhs hrhs)
  else
    mvar.setType ty
    mvar.applyRfl

def MGoal.pureRflAndAndIntro (goal : MGoal) : OptionT MetaM Expr := do
  trace[Elab.Tactic.Do.spec] "pureRflAndAndIntro: {goal.target}"
  try
    let (_, prf) ← mPureIntroCore goal fun φ => do
      trace[Elab.Tactic.Do.spec] "discharge? {φ}"
      let m ← mkFreshExprMVar φ
      m.mvarId!.applyRflAndAndIntro
      trace[Elab.Tactic.Do.spec] "discharged: {φ}"
      return ((), m)
    return prf
  catch _ => failure

def MGoal.pureTrivial (goal : MGoal) : OptionT MetaM Expr := do
  try
    let (_, prf) ← mPureIntroCore goal fun φ => do
      let m ← mkFreshExprMVar φ
      try
        -- First try to use rfl and And.intro directly.
        -- This is more efficient than to elaborate the `trivial` tactic.
        m.mvarId!.applyRflAndAndIntro
      catch _ =>
        let ([], _) ← runTactic m.mvarId! (← `(tactic| trivial))
          | failure
      return ((), m)
    return prf
  catch _ => failure

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice
open Std.Internal.Do.CompleteLattice.Tactic

/-- Count the number of leading `Pi` binders in `l` via `whnfR`. Replaces the old
`TypeList.length` for the new foundation. -/
private def countFunctionTypes (l : Expr) : MetaM Nat := do
  let mut l := l
  let mut n := 0
  while true do
    let l' ← whnfR l
    let .forallE _ _ body _ := l' | break
    n := n + 1
    l := body
  return n

/-- Provides a proof of `Q ⊓ H ⊑ T` if `k` produces a proof for `Q ⊑ T` that may
range over a pure proof `h : φ`, where `H = ⌜φ⌝` (via `IsPure H φ`). -/
def mPureCore
  [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (l cl : Expr) (hyp : Expr) (name : TSyntax ``binderIdent)
  (k : Expr /-φ:Prop-/ → Expr /-h:φ-/ → m (α × MGoal × Expr)) : m (α × MGoal × Expr) := do
  let u ← mkFreshLevelMVar
  let φ ← mkFreshExprMVar (mkSort .zero)
  -- IsPure {l} [cl] (P : l) (φ : Prop) — args: l, cl, P, φ (4 args)
  let inst ← synthInstance (mkApp4 (mkConst ``IsPure [u]) l cl hyp φ)
  let (name, ref) ← liftMetaM <| getFreshHypName name
  withLocalDeclD name φ fun h => do
    addLocalVarInfo ref (← liftMetaM <| getLCtx) h φ
    let (a, goal, prf) ← k φ h
    let prf ← mkLambdaFVars #[h] prf
    -- Pure.thm {P Q T : l} {φ : Prop} [IsPure Q φ] (h : φ → P ⊑ T) : P ⊓ Q ⊑ T
    -- args: l, cl, P, Q, T, φ, inst, prf (8 args)
    let prf := mkApp8 (mkConst ``Pure.thm [u]) l cl goal.hyps hyp goal.target φ inst prf
    let goal := { goal with hyps := mkAnd! goal.uType l cl goal.hyps hyp }
    return (a, goal, prf)

def elabMPure : Tactic
  | `(tactic| mpure $hyp) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let res ← goal.focusHypWithInfo hyp
    let (m, _new_goal, prf) ← mPureCore goal.l goal.cl res.focusHyp
      (← `(binderIdent| $hyp:ident)) fun _ _ => do
        let goal := res.restGoal goal
        let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
        return (m, goal, m)
    let prf := res.rewriteHyps goal prf
    mvar.assign prf
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

def mPureIntroCore [Monad m] [MonadLiftT MetaM m]
  (goal : MGoal)
  (k : Expr /-φ:Prop-/ → m (α × Expr)) : m (α × Expr) := do
  let φ ← mkFreshExprMVar (mkSort .zero)
  -- IsPure {l} [cl] (P : l) (φ) — args: l, cl, P, φ (4 args)
  let inst ← synthInstance (mkApp4 (mkConst ``IsPure [goal.uType]) goal.l goal.cl goal.target φ)
  let (a, hφ) ← k φ
  -- Pure.intro {P Q : l} {φ : Prop} [IsPure Q φ] (hφ : φ) : P ⊑ Q
  -- args: l, cl, P, Q, φ, inst, hφ (7 args)
  let prf := mkApp7 (mkConst ``Pure.intro [goal.uType])
    goal.l goal.cl goal.hyps goal.target φ inst hφ
  return (a, prf)

def elabMPureIntro : Tactic
  | `(tactic| mpure_intro) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let (mv, prf) ← mPureIntroCore goal fun φ => do
      let m ← mkFreshExprSyntheticOpaqueMVar φ (← mvar.getTag)
      return (m.mvarId!, m)
    mvar.assign prf
    replaceMainGoal [mv]
  | _ => throwUnsupportedSyntax

/-- Extract the underlying proposition from `(⌜φ⌝ : Prop)` (after function-space
applications). Replaces the old `extractPureProp` which navigated the `ULift.down` /
`SPred.pure` representation. -/
private def extractPureProp (e : Expr) : MetaM (Option Expr) := do
  let e ← instantiateMVarsIfMVarApp e
  -- Strip leading function applications until we find a `CompleteLattice.ofProp _ _ p`.
  -- Form: `CompleteLattice.ofProp l cl p (s₁) (s₂) ...` where l = σ → ... → β.
  let f := e.getAppFn
  unless f.isConstOf ``Lean.Order.CompleteLattice.ofProp do return none
  let args := e.getAppArgs
  -- args[0] = l, args[1] = cl, args[2] = p, args[3..] = additional state args (irrelevant for
  -- extracting the proposition, since `⌜φ⌝ s = ⌜φ⌝` definitionally via `ofProp_fun_apply`).
  if args.size < 3 then return none
  return args[2]!

/-- New-foundation analogue of `Lean.MVarId.applyRflAndAndIntro` — uses the
new `extractPureProp` (which navigates `CompleteLattice.ofProp` rather than
`ULift.down ∘ SPred.pure`). Lives in the namespace, not on `MVarId`. -/
partial def applyRflAndAndIntro (mvar : MVarId) : MetaM Unit := do
  let ty ← mvar.getType >>= instantiateMVarsIfMVarApp
  let ty ← (·.getD ty) <$> extractPureProp ty
  trace[Elab.Tactic.Do.spec] "pure Prop: {ty}"
  if ty.isAppOf ``True then
    mvar.assign (mkConst ``True.intro)
  else if let some (lhs, rhs) := ty.app2? ``And then
    let hlhs ← mkFreshExprMVar lhs
    let hrhs ← mkFreshExprMVar rhs
    applyRflAndAndIntro hlhs.mvarId!
    applyRflAndAndIntro hrhs.mvarId!
    mvar.assign (mkApp4 (mkConst ``And.intro) lhs rhs hlhs hrhs)
  else
    mvar.setType ty
    mvar.applyRfl

def MGoal.pureRflAndAndIntro (goal : MGoal) : OptionT MetaM Expr := do
  trace[Elab.Tactic.Do.spec] "pureRflAndAndIntro: {goal.target}"
  try
    let (_, prf) ← mPureIntroCore goal fun φ => do
      trace[Elab.Tactic.Do.spec] "discharge? {φ}"
      let m ← mkFreshExprMVar φ
      applyRflAndAndIntro m.mvarId!
      trace[Elab.Tactic.Do.spec] "discharged: {φ}"
      return ((), m)
    return prf
  catch _ => failure

def MGoal.pureTrivial (goal : MGoal) : OptionT MetaM Expr := do
  try
    let (_, prf) ← mPureIntroCore goal fun φ => do
      let m ← mkFreshExprMVar φ
      try
        applyRflAndAndIntro m.mvarId!
      catch _ =>
        let ([], _) ← runTactic m.mvarId! (← `(tactic| trivial))
          | failure
      return ((), m)
    return prf
  catch _ => failure

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mpure]
def elabMPureOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMPure stx
  elabMPure stx

@[builtin_tactic Lean.Parser.Tactic.mpureIntro]
def elabMPureIntroOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMPureIntro stx
  elabMPureIntro stx

end Lean.Elab.Tactic.Do.ProofMode
