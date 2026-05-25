/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.Exact
import Lean.Meta.Tactic.Assumption

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

partial def MGoal.assumption (goal : MGoal) : OptionT MetaM Expr := do
  if let some _ := parseEmptyHyp? goal.hyps then
    failure
  if let some hyp := parseHyp? goal.hyps then
    guard (← isDefEq hyp.p goal.target)
    return mkApp2 (mkConst ``SPred.entails.refl [goal.u]) goal.σs hyp.p
  if let some (u, σs, lhs, rhs) := parseAnd? goal.hyps then
    -- NB: Need to prefer rhs over lhs, like the goal view (Lean.Elab.Tactic.Do.ProofMode.Display).
    mkApp5 (mkConst ``Assumption.right [u]) σs lhs rhs goal.target <$> assumption { goal with hyps := rhs }
    <|>
    mkApp5 (mkConst ``Assumption.left [u]) σs lhs rhs goal.target <$> assumption { goal with hyps := lhs }
  else
    panic! s!"assumption: hypothesis without proper metadata: {goal.hyps}"

def MGoal.assumptionPure (goal : MGoal) : OptionT MetaM Expr := do
  let φ := mkApp2 (mkConst ``tautological [goal.u]) goal.σs goal.target
  let fvarId ← OptionT.mk (findLocalDeclWithType? φ)
  let inst ← synthInstance? (mkApp3 (mkConst ``PropAsSPredTautology [goal.u]) φ goal.σs goal.target)
  return mkApp6 (mkConst ``Exact.from_tautology [goal.u]) goal.σs φ goal.hyps goal.target inst (.fvar fvarId)

def elabMAssumption : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"

  let some proof ← liftMetaM <|
    goal.assumption <|> goal.assumptionPure
    | throwError "hypothesis not found"
  mvar.assign proof
  replaceMainGoal []

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice.Tactic

partial def MGoal.assumption (goal : MGoal) : OptionT MetaM Expr := do
  if let some _ := parseEmptyHyp? goal.hyps then
    failure
  if let some hyp := parseHyp? goal.hyps then
    guard (← isDefEq hyp.p goal.target)
    let po := mkApp2 (mkConst ``Lean.Order.CompleteLattice.toPartialOrder [goal.u]) goal.l goal.cl
    return mkApp3 (mkConst ``Lean.Order.PartialOrder.rel_refl [goal.u]) goal.l po hyp.p
  if let some (u, l, cl, lhs, rhs) := parseAnd? goal.hyps then
    mkApp6 (mkConst ``Assumption.right [u]) l cl lhs rhs goal.target
      <$> assumption { goal with hyps := rhs }
    <|>
    mkApp6 (mkConst ``Assumption.left [u]) l cl lhs rhs goal.target
      <$> assumption { goal with hyps := lhs }
  else
    panic! s!"assumption: hypothesis without proper metadata: {goal.hyps}"

def MGoal.assumptionPure (goal : MGoal) : OptionT MetaM Expr := do
  let φ := mkApp3 (mkConst ``tautological [goal.uType]) goal.l goal.cl goal.target
  let fvarId ← OptionT.mk (findLocalDeclWithType? φ)
  let inst ← synthInstance?
    (mkApp4 (mkConst ``PropAsCompleteLatticeTautology [goal.uType]) φ goal.l goal.cl goal.target)
  return mkApp7 (mkConst ``Exact.from_tautology [goal.uType])
    goal.l goal.cl goal.hyps goal.target φ inst (.fvar fvarId)

def elabMAssumption : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"

  let some proof ← liftMetaM <|
    goal.assumption <|> goal.assumptionPure
    | throwError "hypothesis not found"
  mvar.assign proof
  replaceMainGoal []

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.massumption]
def elabMAssumptionOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    Lean.Elab.Tactic.Internal.Do.ProofMode.elabMAssumption stx
  else
    elabMAssumption stx

end Lean.Elab.Tactic.Do.ProofMode
