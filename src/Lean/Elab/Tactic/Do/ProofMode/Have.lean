/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Std.Tactic.Do.Syntax
public import Lean.Elab.Tactic.Basic
import Lean.Elab.Tactic.Do.ProofMode.Focus
import Lean.Elab.Tactic.ElabTerm

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

def elabMDup : Tactic
  | `(tactic| mdup $h:ident => $h₂:ident) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let some res := goal.focusHyp h.raw.getId | throwError m!"Hypothesis {h} not found"
    let P := goal.hyps
    let Q := res.restHyps
    let H := res.focusHyp
    let uniq ← mkFreshId
    let hyp := Hyp.mk h₂.raw.getId uniq H.consumeMData
    addHypInfo h goal.σs hyp (isBinder := true)
    let H' := hyp.toExpr
    let T := goal.target
    let newGoal := { goal with hyps := SPred.mkAnd! goal.u goal.σs P H' }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    mvar.assign (mkApp7 (mkConst ``Have.dup [goal.u]) goal.σs P Q H T res.proof m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

def elabMHave : Tactic
  | `(tactic| mhave $h $[: $ty?]? := $rhs) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let P := goal.hyps
    let spred := mkApp (mkConst ``SPred [goal.u]) goal.σs
    let H ← match ty? with
      | some ty => elabTerm ty spred
      | _       => mkFreshExprMVar spred
    let uniq ← mkFreshId
    let hyp := Hyp.mk h.raw.getId uniq H
    addHypInfo h goal.σs hyp (isBinder := true)
    let H := hyp.toExpr
    let T := goal.target
    let (PH, hand) := SPred.mkAnd goal.u goal.σs P H
    let haveGoal := { goal with target := H }
    let hhave ← elabTermEnsuringType rhs haveGoal.toExpr
    let newGoal := { goal with hyps := PH }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    mvar.assign (mkApp8 (mkConst ``Have.have [goal.u]) goal.σs P H PH T hand hhave m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

def elabMReplace : Tactic
  | `(tactic| mreplace $h $[: $ty?]? := $rhs) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let PH := goal.hyps
    let some res := goal.focusHyp h.raw.getId | throwError m!"Hypothesis {h} not found"
    let P := res.restHyps
    let H := res.focusHyp
    let spred := mkApp (mkConst ``SPred [goal.u]) goal.σs
    let H' ← match ty? with
      | some ty => elabTerm ty spred
      | _       => mkFreshExprMVar spred
    let uniq ← mkFreshId
    let hyp := Hyp.mk h.raw.getId uniq H'
    addHypInfo h goal.σs hyp (isBinder := true)
    let H' := hyp.toExpr
    let haveGoal := { goal with target := H' }
    let hhave ← elabTermEnsuringType rhs haveGoal.toExpr
    let T := goal.target
    let (PH', hand) := SPred.mkAnd goal.u goal.σs P H'
    let newGoal := { goal with hyps := PH' }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    let prf := mkApp (mkApp10 (mkConst ``Have.replace [goal.u]) goal.σs P H H' PH PH' T res.proof hand hhave) m
    mvar.assign prf
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice.Tactic

def elabMDup : Tactic
  | `(tactic| mdup $h:ident => $h₂:ident) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let some res := goal.focusHyp h.raw.getId | throwError m!"Hypothesis {h} not found"
    let P := goal.hyps
    let Q := res.restHyps
    let H := res.focusHyp
    let uniq ← mkFreshId
    let hyp := Hyp.mk h₂.raw.getId uniq H.consumeMData
    addHypInfo h goal.u goal.l goal.cl hyp (isBinder := true)
    let H' := hyp.toExpr
    let T := goal.target
    let newGoal := { goal with hyps := mkAnd! goal.uType goal.l goal.cl P H' }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    -- Have.dup {P Q H T : l} (hfoc : P = Q ⊓ H) (hgoal : P ⊓ H ⊑ T) : P ⊑ T
    -- args: l, cl, P, Q, H, T, hfoc, hgoal (8 args)
    mvar.assign (mkApp8 (mkConst ``Have.dup [goal.uType])
      goal.l goal.cl P Q H T res.proof m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

def elabMHave : Tactic
  | `(tactic| mhave $h $[: $ty?]? := $rhs) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let P := goal.hyps
    let H ← match ty? with
      | some ty => elabTerm ty goal.l
      | _       => mkFreshExprMVar goal.l
    let uniq ← mkFreshId
    let hyp := Hyp.mk h.raw.getId uniq H
    addHypInfo h goal.u goal.l goal.cl hyp (isBinder := true)
    let H := hyp.toExpr
    let T := goal.target
    let (PH, hand) := mkAnd goal.uType goal.l goal.cl P H
    let haveGoal := { goal with target := H }
    let hhave ← elabTermEnsuringType rhs haveGoal.toExpr
    let newGoal := { goal with hyps := PH }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    -- Have.have {P H PH T : l} (hand : P ⊓ H = PH) (hhave : P ⊑ H) (hgoal : PH ⊑ T) : P ⊑ T
    -- args: l, cl, P, H, PH, T, hand, hhave, hgoal (9 args)
    mvar.assign (mkApp9 (mkConst ``Have.have [goal.uType])
      goal.l goal.cl P H PH T hand hhave m)
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

def elabMReplace : Tactic
  | `(tactic| mreplace $h $[: $ty?]? := $rhs) => do
    let (mvar, goal) ← ensureMGoal
    mvar.withContext do
    let PH := goal.hyps
    let some res := goal.focusHyp h.raw.getId | throwError m!"Hypothesis {h} not found"
    let P := res.restHyps
    let H := res.focusHyp
    let H' ← match ty? with
      | some ty => elabTerm ty goal.l
      | _       => mkFreshExprMVar goal.l
    let uniq ← mkFreshId
    let hyp := Hyp.mk h.raw.getId uniq H'
    addHypInfo h goal.u goal.l goal.cl hyp (isBinder := true)
    let H' := hyp.toExpr
    let haveGoal := { goal with target := H' }
    let hhave ← elabTermEnsuringType rhs haveGoal.toExpr
    let T := goal.target
    let (PH', hand) := mkAnd goal.uType goal.l goal.cl P H'
    let newGoal := { goal with hyps := PH' }
    let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
    -- Have.replace {P H H' PH PH' T : l} (hfoc : PH = P ⊓ H) (hand : P ⊓ H' = PH')
    --   (hhave : PH ⊑ H') (hgoal : PH' ⊑ T) : PH ⊑ T
    -- args: l, cl, P, H, H', PH, PH', T, hfoc, hand, hhave, hgoal (12 args)
    let prf := mkAppN (mkConst ``Have.replace [goal.uType])
      #[goal.l, goal.cl, P, H, H', PH, PH', T, res.proof, hand, hhave, m]
    mvar.assign prf
    replaceMainGoal [m.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mdup]
def elabMDupOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMDup stx
  elabMDup stx

@[builtin_tactic Lean.Parser.Tactic.mhave]
def elabMHaveOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMHave stx
  elabMHave stx

@[builtin_tactic Lean.Parser.Tactic.mreplace]
def elabMReplaceOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMReplace stx
  elabMReplace stx

end Lean.Elab.Tactic.Do.ProofMode
