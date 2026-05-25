/-
Copyright (c) 2025 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Std.Tactic.Do.Syntax
public import Lean.Elab.Tactic.Do.ProofMode.Focus
public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

-- #synth ∀ {w x P Q y z}, HasFrame spred(⌜w = 2⌝ ∧ ⌜x = 3⌝ ∧ P ∧ ⌜y = 4⌝ ∧ Q ∧ ⌜z=6⌝) _ _

/-- If `P'` is a conjunction of unnamed hypotheses that are a subset of the named hypotheses of `P`,
transfer the names of the hypotheses of `P` to the hypotheses of `P'`. -/
partial def transferHypNames (P P' : Expr) : MetaM Expr := (·.snd) <$> label (collectHyps P) P'
  where
    collectHyps (P : Expr) (acc : List Hyp := []) : List Hyp :=
      if let some hyp := parseHyp? P then
        hyp :: acc
      else if let some (_, _, L, R) := parseAnd? P then
        collectHyps L (collectHyps R acc)
      else
        acc

    label (Ps : List Hyp) (P' : Expr) : MetaM (List Hyp × Expr) := do
      let P' ← instantiateMVarsIfMVarApp P'
      if let some _ := parseEmptyHyp? P' then
        return (Ps, P')
      if let some (u, σs, L, R) := parseAnd? P' then
        let (Ps, L') ← label Ps L
        let (Ps, R') ← label Ps R
        return (Ps, SPred.mkAnd! u σs L' R')
      else
        let mut Ps' := Ps
        repeat
          -- If we cannot find the hyp, it might be in a nested conjunction.
          -- Just pick a default name for it.
          let name ← mkFreshUserName `h
          let uniq ← mkFreshId
          let P :: Ps'' := Ps' | return (Ps, { name, uniq, p := P' : Hyp }.toExpr)
          Ps' := Ps''
          if ← isDefEq P.p P' then
            return (Ps, { P with p := P' }.toExpr)
        unreachable!

def mFrameCore [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (goal : MGoal) (kFail : m Expr) (kSuccess : Expr /-φ:Prop-/ → Expr /-h:φ-/ → MGoal → m Expr) : m Expr := do
  let P := goal.hyps
  let φ ← mkFreshExprMVar (mkSort .zero)
  let P' ← mkFreshExprMVar (mkApp (mkConst ``SPred [goal.u]) goal.σs)
  if let .some inst ← trySynthInstance (mkApp4 (mkConst ``HasFrame [goal.u]) goal.σs P P' φ) then
    if ← isDefEq (mkConst ``True) φ then return (← kFail)
    -- copy the name of P to P' if it is a named hypothesis
    let P' ← transferHypNames P P'
    let goal := { goal with hyps := P' }
    withLocalDeclD (← liftMetaM <| mkFreshUserName `h) φ fun hφ => do
      let prf ← kSuccess φ hφ goal
      let prf ← mkLambdaFVars #[hφ] prf
      let prf := mkApp7 (mkConst ``Frame.frame [goal.u]) goal.σs P P' goal.target φ inst prf
      return prf
  else
    kFail

def mTryFrame [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (goal : MGoal) (k : MGoal → m Expr) : m Expr :=
  mFrameCore goal (k goal) (fun _ _ goal => k goal)

def elabMFrame : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"
  let prf ← mFrameCore goal (fun _ => throwError "Could not infer frame") fun _ _ goal => do
    let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
    replaceMainGoal [m.mvarId!]
    return m
  mvar.assign prf

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice.Tactic

/-- Transfer hypothesis names from `P` (which has named hyps) to `P'` (the residual). -/
partial def transferHypNames (P P' : Expr) : MetaM Expr := (·.snd) <$> label (collectHyps P) P'
  where
    collectHyps (P : Expr) (acc : List Hyp := []) : List Hyp :=
      if let some hyp := parseHyp? P then
        hyp :: acc
      else if let some (_, _, _, L, R) := parseAnd? P then
        collectHyps L (collectHyps R acc)
      else
        acc

    label (Ps : List Hyp) (P' : Expr) : MetaM (List Hyp × Expr) := do
      let P' ← instantiateMVarsIfMVarApp P'
      if let some _ := parseEmptyHyp? P' then
        return (Ps, P')
      if let some (u, l, cl, L, R) := parseAnd? P' then
        let (Ps, L') ← label Ps L
        let (Ps, R') ← label Ps R
        return (Ps, mkAnd! u l cl L' R')
      else
        let mut Ps' := Ps
        repeat
          let name ← mkFreshUserName `h
          let uniq ← mkFreshId
          let P :: Ps'' := Ps' | return (Ps, { name, uniq, p := P' : Hyp }.toExpr)
          Ps' := Ps''
          if ← isDefEq P.p P' then
            return (Ps, { P with p := P' }.toExpr)
        unreachable!

def mFrameCore [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (goal : MGoal) (kFail : m Expr) (kSuccess : Expr → Expr → MGoal → m Expr) : m Expr := do
  let P := goal.hyps
  let φ ← mkFreshExprMVar (mkSort .zero)
  let P' ← mkFreshExprMVar goal.l
  -- HasFrame {l} [cl] (P) (P' : outParam l) (φ : outParam Prop) — args: l, cl, P, P', φ (5)
  if let .some inst ← trySynthInstance
      (mkApp5 (mkConst ``HasFrame [goal.uType]) goal.l goal.cl P P' φ) then
    if ← isDefEq (mkConst ``True) φ then return (← kFail)
    let P' ← transferHypNames P P'
    let goal := { goal with hyps := P' }
    withLocalDeclD (← liftMetaM <| mkFreshUserName `h) φ fun hφ => do
      let prf ← kSuccess φ hφ goal
      let prf ← mkLambdaFVars #[hφ] prf
      -- Frame.frame {P Q T} {φ} [HasFrame P Q φ] (h : φ → Q ⊑ T) : P ⊑ T
      -- args: l, cl, P, Q, T, φ, inst, h (8)
      let prf := mkApp8 (mkConst ``Frame.frame [goal.uType])
        goal.l goal.cl P P' goal.target φ inst prf
      return prf
  else
    kFail

def mTryFrame [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
  (goal : MGoal) (k : MGoal → m Expr) : m Expr :=
  mFrameCore goal (k goal) (fun _ _ goal => k goal)

def elabMFrame : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"
  let prf ← mFrameCore goal (fun _ => throwError "Could not infer frame") fun _ _ goal => do
    let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
    replaceMainGoal [m.mvarId!]
    return m
  mvar.assign prf

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mframe]
def elabMFrameOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMFrame stx
  elabMFrame stx

end Lean.Elab.Tactic.Do.ProofMode
