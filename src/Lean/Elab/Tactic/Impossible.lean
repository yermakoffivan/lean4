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
public import Lean.Meta.Tactic.AuxLemma
public import Lean.Meta.AbstractMVars

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
  if goalType.hasLevelMVar then
    throwErrorAt kw "\
      `impossible`: goal contains universe metavariables{indentExpr goalType}"
  -- Compute the reverted, negated target from a discardable copy of the main
  -- goal, so the original `mainGoal` remains assignable below. We:
  --   * revert all local hypotheses, turning the goal into `∀ xs, body`;
  --   * abstract over remaining expression metavariables, turning the result
  --     into `∀ ms, ∀ xs, body` (so `impossible` can be applied to
  --     under-determined goals like `∃ x, …`); level mvars are left alone
  --     because abstracting them tends to make tactic state hard to read;
  --   * push the negation *under* the universal binders, yielding
  --     `∀ ms, ∀ xs, ¬body` (or `∀ ms, ∀ xs, body → False` when `body` isn't
  --     a proposition). This lets the user prove impossibility by `intro`ing
  --     witnesses for the binders and then deriving `False`.
  let negType ← mainGoal.withContext do
    let dummy ← mkFreshExprSyntheticOpaqueMVar goalType
    let cleaned ← dummy.mvarId!.cleanup
    let (revertedFVars, reverted) ← cleaned.revert
      (clearAuxDeclsInsteadOfRevert := true)
      (← cleaned.getDecl).lctx.getFVarIds
    let revertedType ← reverted.getType
    let abs ← abstractMVars revertedType (levels := false)
    -- `abs.expr` is `fun ms => ∀ xs, body`. Telescope through both the
    -- (lambda) mvar binders and exactly the `revertedFVars.size` (forall)
    -- fvar binders that `revert` added, negate the original `body`, and
    -- re-bind everything as a forall. We avoid peeling into deeper foralls
    -- of the original `body` (e.g. an arrow like `¬X = X → False`), since
    -- pushing the negation past a non-dependent arrow would change the
    -- statement (`¬(A → B)` vs. `A → ¬B`).
    lambdaTelescope abs.expr fun ms revBody => do
      forallBoundedTelescope revBody (some revertedFVars.size) fun xs body => do
        let negBody ← if (← Meta.isProp body) then
          pure (mkNot body)
        else
          mkArrow body (mkConst ``False)
        mkForallFVars (ms ++ xs) negBody
  -- Close the original goal with `sorry` (without adding any axioms) *before*
  -- running the user's tactic. That way, if the inner tactic propagates a
  -- failure, no outer goal is left for the surrounding `by`/`runTactic` to
  -- spuriously report as unsolved on top of the inner error.
  admitGoal mainGoal
  let restGoals ← getUnsolvedGoals
  -- Run the user-supplied tactic against a fresh mvar for the negation, using
  -- an empty local context (the reverted target is closed). We follow the
  -- tactic with `done` so that an unsolved negated goal throws an
  -- "unsolved goals" error (mirroring how `have h := by …` propagates failure
  -- via its `case`/`closeUsingOrAdmit` expansion). Both inner elaboration
  -- errors and unsolved goals therefore propagate naturally to combinators
  -- like `first`, while direct user-facing uses still observe the inner
  -- messages and get a `sorry` from the outer `by`.
  let negMVarId :=
    (← mkFreshExprMVarAt {} {} negType (kind := .syntheticOpaque)).mvarId!
  try
    setGoals [negMVarId]
    withTacticInfoContext byTk do
      evalTactic tacs
      done
    -- The user's tactic produced a proof of the negation. Hand it to the
    -- kernel via a private aux lemma so kernel-level errors (e.g. proof
    -- irrelevance / typechecking issues) surface here rather than being
    -- silently absorbed by the `sorry` we put on the outer goal.
    let proof ← instantiateMVars (mkMVar negMVarId)
    let lvls := (collectLevelParams {} negType).params
    let lemmaLvls := (← Term.getLevelNames).reverse.filter lvls.contains
    discard <| withOptions (Elab.async.set · false) do
      mkAuxLemma lemmaLvls negType proof
  finally
    setGoals restGoals

end Lean.Elab.Tactic
