/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Std.Tactic.Do.Syntax
public import Lean.Elab.Tactic.Do.ProofMode.MGoal

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab.Tactic Meta

structure MStartResult where
  goal : MGoal
  proof? : Option Expr := none

def mStart (goal : Expr) : MetaM MStartResult := do
  -- check if already in proof mode
  if let some mgoal := parseMGoal? goal then
    return { goal := mgoal }

  let u ← mkFreshLevelMVar
  let σs ← mkFreshExprMVar (TypeList.mkType u)
  let P ← mkFreshExprMVar (mkApp (mkConst ``SPred [u]) σs)
  let inst ← synthInstance (mkApp3 (mkConst ``PropAsSPredTautology [u]) goal σs P)
  let u ← instantiateLevelMVars u
  let prf := mkApp4 (mkConst ``ProofMode.start_entails [u]) σs P goal inst
  let goal : MGoal := { u, σs, hyps := emptyHyp u σs, target := ← instantiateMVars P }
  return { goal, proof? := some prf }

def mStartMVar (mvar : MVarId) : MetaM (MVarId × MGoal) := mvar.withContext do
  let goal ← instantiateMVars <| ← mvar.getType
  unless ← isProp goal do
    throwError "The goal type of `{mkMVar mvar}` is not a proposition. It has type `{← inferType goal}`."

  let result ← mStart goal
  if let some proof := result.proof? then
    let subgoal ←
      mkFreshExprSyntheticOpaqueMVar result.goal.toExpr (← mvar.getTag)
    mvar.assign (mkApp proof subgoal)
    return (subgoal.mvarId!, result.goal)
  else
    return (mvar, result.goal)

def mStartMainGoal : TacticM (MVarId × MGoal) := do
  let (mvar, goal) ← mStartMVar (← getMainGoal)
  replaceMainGoal [mvar]
  return (mvar, goal)

def elabMStart : Tactic | _ => discard mStartMainGoal

def elabMStop : Tactic | _ => do
  -- parse goal
  let mvar ← getMainGoal
  mvar.withContext do
  let goal ← instantiateMVars <| ← mvar.getType

  -- check if already in proof mode
  let some mgoal := parseMGoal? goal | throwError "not in proof mode"
  mvar.setType mgoal.strip

end Lean.Elab.Tactic.Do.ProofMode

/-!
# Proof-mode entry/exit for the new `CompleteLattice`-based metatheory

Mirrors `mStart`/`mStop` above but uses `Std.Internal.Do.CompleteLattice.Tactic`
infrastructure: `PropAsCompleteLatticeTautology` for goal recognition and
`ProofMode.start_entails` for the entailment proof. Tactic registration
(`@[builtin_tactic ...]`) is intentionally omitted — the legacy elaborators
below dispatch to these based on the `new_proof_mode` option.
-/

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order

structure MStartResult where
  goal : MGoal
  proof? : Option Expr := none

def mStart (goal : Expr) : MetaM MStartResult := do
  -- check if already in proof mode
  if let some mgoal := parseMGoal? goal then
    return { goal := mgoal }

  let u ← mkFreshLevelMVar
  let l ← mkFreshExprMVar (mkSort (.succ u))
  let cl ← mkFreshExprMVar (mkApp (mkConst ``Lean.Order.CompleteLattice [.succ u]) l)
  let P ← mkFreshExprMVar l
  let inst ← synthInstance
    (mkApp4 (mkConst ``Std.Internal.Do.CompleteLattice.Tactic.PropAsCompleteLatticeTautology [u])
      goal l cl P)
  let u ← instantiateLevelMVars u
  let l ← instantiateMVars l
  let cl ← instantiateMVars cl
  let P ← instantiateMVars P
  let prf := mkApp5
    (mkConst ``Std.Internal.Do.CompleteLattice.Tactic.ProofMode.start_entails [u])
    l cl P goal inst
  -- The MGoal `u` field stores the SORT universe of `l`; for `l : Type u_type`
  -- that's `succ u_type`.
  let mgoal : MGoal := { u := .succ u, l, cl, hyps := emptyHyp u l cl, target := P }
  return { goal := mgoal, proof? := some prf }

def mStartMVar (mvar : MVarId) : MetaM (MVarId × MGoal) := mvar.withContext do
  let goal ← instantiateMVars <| ← mvar.getType
  unless ← isProp goal do
    throwError "The goal type of `{mkMVar mvar}` is not a proposition. It has type `{← inferType goal}`."

  let result ← mStart goal
  if let some proof := result.proof? then
    let subgoal ←
      mkFreshExprSyntheticOpaqueMVar result.goal.toExpr (← mvar.getTag)
    mvar.assign (mkApp proof subgoal)
    return (subgoal.mvarId!, result.goal)
  else
    return (mvar, result.goal)

def mStartMainGoal : TacticM (MVarId × MGoal) := do
  let (mvar, goal) ← mStartMVar (← getMainGoal)
  replaceMainGoal [mvar]
  return (mvar, goal)

def elabMStart : Tactic | _ => discard mStartMainGoal

def elabMStop : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let goal ← instantiateMVars <| ← mvar.getType
  let some mgoal := parseMGoal? goal | throwError "not in proof mode"
  mvar.setType mgoal.strip

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab.Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mstart]
def elabMStartOpt : Tactic := fun _stx => do
  let opts ← getOptions
  if new_proof_mode.get opts then
    Lean.Elab.Tactic.Internal.Do.ProofMode.elabMStart _stx
  else
    Lean.Elab.Tactic.Do.ProofMode.elabMStart _stx

@[builtin_tactic Lean.Parser.Tactic.mstop]
def elabMStopOpt : Tactic := fun _stx => do
  if new_proof_mode.get (← getOptions) then
    Lean.Elab.Tactic.Internal.Do.ProofMode.elabMStop _stx
  else
    Lean.Elab.Tactic.Do.ProofMode.elabMStop _stx

end Lean.Elab.Tactic.Do.ProofMode
