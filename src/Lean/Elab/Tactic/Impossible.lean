/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joachim Breitner
-/
module

prelude
public import Lean.Elab.Tactic.Basic
public import Lean.Elab.SyntheticMVars
public import Lean.Meta.Tactic.Cleanup
public import Lean.Meta.Tactic.Revert

public section

/-! # `impossible` tactic -/

namespace Lean.Elab.Tactic
open Lean Meta

@[builtin_tactic Lean.Parser.Tactic.impossible]
def evalImpossible : Tactic := fun stx => do
  let kw := stx[0]
  let term := stx[1]
  let mainGoal ← getMainGoal
  let goalType ← mainGoal.withContext do instantiateMVars (← mainGoal.getType)
  if goalType.hasExprMVar then
    throwErrorAt kw "\
      `impossible`: goal contains metavariables{indentExpr goalType}"
  if goalType.hasLevelMVar then
    throwErrorAt kw "\
      `impossible`: goal contains universe metavariables{indentExpr goalType}"
  -- Compute the reverted, negated target from a discardable copy of the main
  -- goal, so the original `mainGoal` remains assignable below. We use `Not` on
  -- propositions and fall back to `_ → False` otherwise so the construction is
  -- well-typed at any universe.
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
  -- Elaborate the user-supplied proof of the closed-form negation. Any errors
  -- in the term (including inside a `by` block) are reported normally by the
  -- term elaborator. We discard the resulting expression — we are only checking
  -- that the user can produce a witness of unreachability.
  discard <| Term.elabTermEnsuringType term negType
  -- Force any pending `by` tactic to actually run so its goal info is attached
  -- to the info tree (otherwise hovers inside `by` would show no goals).
  Term.synthesizeSyntheticMVarsNoPostponing
  -- Always close the original goal with `sorry`, without adding any axioms.
  admitGoal mainGoal
  replaceMainGoal []

end Lean.Elab.Tactic
