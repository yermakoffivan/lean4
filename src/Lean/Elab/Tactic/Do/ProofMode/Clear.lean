/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf
-/
module

prelude
public import Std.Tactic.Do.Syntax
public import Lean.Elab.Tactic.Do.ProofMode.Focus

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

def elabMClear : Tactic
  | `(tactic| mclear $hyp:ident) => do
    let mvar ← getMainGoal
    mvar.withContext do
    let g ← instantiateMVars <| ← mvar.getType
    let some goal := parseMGoal? g | throwError "not in proof mode"
    let res ← goal.focusHypWithInfo hyp
    let m ← mkFreshExprSyntheticOpaqueMVar (res.restGoal goal).toExpr

    mvar.assign (mkApp7 (mkConst ``Clear.clear [goal.u]) goal.σs goal.hyps
      res.restHyps res.focusHyp goal.target res.proof m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice.Tactic

def elabMClear : Tactic
  | `(tactic| mclear $hyp:ident) => do
    let mvar ← getMainGoal
    mvar.withContext do
    let g ← instantiateMVars <| ← mvar.getType
    let some goal := parseMGoal? g | throwError "not in proof mode"
    let res ← goal.focusHypWithInfo hyp
    let m ← mkFreshExprSyntheticOpaqueMVar (res.restGoal goal).toExpr
    -- Clear.clear {P P' A Q} (hfocus : P = P' ⊓ A) (h : P' ⊑ Q) : P ⊑ Q
    -- args: l cl P P' A Q hfocus h (8 args)
    mvar.assign (mkApp8 (mkConst ``Clear.clear [goal.uType]) goal.l goal.cl goal.hyps
      res.restHyps res.focusHyp goal.target res.proof m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mclear]
def elabMClearOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    Lean.Elab.Tactic.Internal.Do.ProofMode.elabMClear stx
  else
    elabMClear stx

end Lean.Elab.Tactic.Do.ProofMode
