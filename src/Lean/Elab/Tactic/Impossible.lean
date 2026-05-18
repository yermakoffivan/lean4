/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joachim Breitner
-/
module

prelude
public import Lean.Elab.Tactic.Basic
public import Lean.Meta.Tactic.Cleanup
public import Lean.Meta.Tactic.Revert

public section

/-! # `impossible` tactic -/

namespace Lean.Elab.Tactic
open Lean Meta

@[builtin_tactic Lean.Parser.Tactic.impossible]
def evalImpossible : Tactic := fun stx => do
  let kw := stx[0]
  let byTk := stx[1]
  let tacs := stx[2]
  let mainGoal ← getMainGoal
  let goalType ← mainGoal.withContext do instantiateMVars (← mainGoal.getType)
  if goalType.hasExprMVar then
    throwErrorAt kw "\
      `impossible`: goal contains metavariables{indentExpr goalType}"
  if goalType.hasLevelMVar then
    throwErrorAt kw "\
      `impossible`: goal contains universe metavariables{indentExpr goalType}"
  -- Compute the reverted, negated target from a discardable copy of the main
  -- goal, so the original `mainGoal` remains assignable below. We use `Not`
  -- on propositions and fall back to `_ → False` otherwise so the construction
  -- is well-typed at any universe.
  let negType ← mainGoal.withContext do
    let dummy ← mkFreshExprSyntheticOpaqueMVar goalType
    let cleaned ← dummy.mvarId!.cleanup
    let (_, reverted) ← cleaned.revert (clearAuxDeclsInsteadOfRevert := true)
      (← cleaned.getDecl).lctx.getFVarIds
    let revertedType ← reverted.getType
    if (← Meta.isProp revertedType) then
      pure (mkNot revertedType)
    else
      mkArrow revertedType (mkConst ``False)
  -- Close the original goal with `sorry` (without adding any axioms) *before*
  -- running the user's tactic. That way, if the inner tactic propagates a
  -- failure, no outer goal is left for the surrounding `by`/`runTactic` to
  -- spuriously report as unsolved on top of the inner error.
  admitGoal mainGoal
  let restGoals ← getUnsolvedGoals
  -- Run the user-supplied tactic against a fresh mvar for the negation. We
  -- follow it with `done` so that an unsolved negated goal throws an
  -- "unsolved goals" error (mirroring how `have h := by …` propagates failure
  -- via its `case`/`closeUsingOrAdmit` expansion). Both inner elaboration
  -- errors and unsolved goals therefore propagate naturally to combinators
  -- like `first`, while direct user-facing uses still observe the inner
  -- messages and get a `sorry` from the outer `by`.
  let negMVarId := (← mkFreshExprSyntheticOpaqueMVar negType).mvarId!
  try
    setGoals [negMVarId]
    withTacticInfoContext byTk do
      evalTactic tacs
      done
  finally
    setGoals restGoals

end Lean.Elab.Tactic
