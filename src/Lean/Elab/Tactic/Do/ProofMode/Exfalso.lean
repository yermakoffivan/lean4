/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.Basic

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do
open Lean Elab Tactic Meta


-- set_option pp.all true in
-- #check ⌜False⌝
private def falseProp (u : Level) (σs : Expr) : Expr := -- ⌜False⌝ standing in for an empty conjunction of hypotheses
  SPred.mkPure u σs (mkConst ``False)

def elabMExfalso : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"
  let newGoal := { goal with target := falseProp goal.u goal.σs }
  let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
  let prf := mkApp4 (mkConst ``SPred.exfalso [goal.u]) goal.σs goal.hyps goal.target m
  mvar.assign prf
  replaceMainGoal [m.mvarId!]

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice

/-- The `⊥ : l` representing an empty conjunction of hypotheses (false target). -/
private def botExpr (u : Level) (l : Expr) : MetaM Expr := do
  let ccpo ← synthInstance (mkApp (mkConst ``Lean.Order.CCPO [u]) l)
  return mkApp2 (mkConst ``Lean.Order.bot [u]) l ccpo

def elabMExfalso : Tactic | _ => do
  let mvar ← getMainGoal
  mvar.withContext do
  let g ← instantiateMVars <| ← mvar.getType
  let some goal := parseMGoal? g | throwError "not in proof mode"
  let newGoal := { goal with target := ← botExpr goal.u goal.l }
  let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
  -- exfalso {P Q : l} (h : P ⊑ ⊥) : P ⊑ Q
  -- args: l cl P Q h (5 args)
  let prf := mkApp5 (mkConst ``Std.Internal.Do.CompleteLattice.exfalso [goal.uType])
    goal.l goal.cl goal.hyps goal.target m
  mvar.assign prf
  replaceMainGoal [m.mvarId!]

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mexfalso]
def elabMExfalsoOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMExfalso stx
  elabMExfalso stx

end Lean.Elab.Tactic.Do.ProofMode
