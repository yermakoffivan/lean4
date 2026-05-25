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
open Std.Do
open Lean Elab Tactic Meta

def mLeftRightCore (right : Bool) (mvar : MVarId) : MetaM MVarId := do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"

  let mkApp3 (.const ``SPred.or _) σs L R := goal.target | throwError "target is not SPred.or"

  let (thm, keep) := if right then (``SPred.or_intro_r', R) else (``SPred.or_intro_l', L)

  let newGoal ← mkFreshExprSyntheticOpaqueMVar {goal with target := keep}.toExpr
  mvar.assign (mkApp5 (mkConst thm [goal.u]) σs goal.hyps L R newGoal)
  return newGoal.mvarId!

def elabMLeft : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let newGoal ← mLeftRightCore (right := false) mvar
  replaceMainGoal [newGoal]

def elabMRight : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let newGoal ← mLeftRightCore (right := true) mvar
  replaceMainGoal [newGoal]

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice

def mLeftRightCore (right : Bool) (mvar : MVarId) : MetaM MVarId := do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"

  let mkApp4 (.const ``Lean.Order.join _) _l _cl L R := goal.target
    | throwError "target is not Lean.Order.join"

  let (thm, keep) :=
    if right then
      (``Std.Internal.Do.CompleteLattice.or_intro_r', R)
    else
      (``Std.Internal.Do.CompleteLattice.or_intro_l', L)

  let newGoal ← mkFreshExprSyntheticOpaqueMVar {goal with target := keep}.toExpr
  mvar.assign (mkApp6 (mkConst thm [goal.uType]) goal.l goal.cl goal.hyps L R newGoal)
  return newGoal.mvarId!

def elabMLeft : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let newGoal ← mLeftRightCore (right := false) mvar
  replaceMainGoal [newGoal]

def elabMRight : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let newGoal ← mLeftRightCore (right := true) mvar
  replaceMainGoal [newGoal]

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mleft]
def elabMLeftOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMLeft stx
  elabMLeft stx

@[builtin_tactic Lean.Parser.Tactic.mright]
def elabMRightOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMRight stx
  elabMRight stx

end Lean.Elab.Tactic.Do.ProofMode
