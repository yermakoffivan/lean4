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
public import Lean.Meta.Tactic.Intro
public import Lean.Meta.Closure

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
  -- Compute the negated, reverted target. The form we want is
  --   `∀ ms, ¬(∀ xs, body)`,
  -- where `ms` are the (universally-quantified) expression metavariables
  -- abstracted out of the goal and `xs` are the local hypotheses that
  -- `revert` introduced. The negation sits *between* the two layers:
  -- under `ms` (so the user can prove impossibility by case-splitting on
  -- each existential witness) but over `xs` (so they can refute the goal
  -- by exhibiting a counter-witness for the existing local context).
  let (negType, mvarNames) ← mainGoal.withContext do
    let dummy ← mkFreshExprSyntheticOpaqueMVar goalType
    let cleaned ← dummy.mvarId!.cleanup
    let (_, reverted) ← cleaned.revert
      (clearAuxDeclsInsteadOfRevert := true)
      (← cleaned.getDecl).lctx.getFVarIds
    let revertedType ← reverted.getType
    -- Re-use the aux-lemma machinery's closure builder to abstract over every
    -- expression mvar in the reverted goal type. `mkValueTypeClosure` walks
    -- the type without filtering by mctx depth (unlike `Meta.abstractMVars`),
    -- and also correctly eta-expands delayed-assignment mvars — exactly what
    -- `Closure.mkAuxTheorem` does when grind builds its aux lemma. The
    -- `value` we pass is a placeholder; we only care about the abstracted
    -- type and the original mvars (in `exprArgs`).
    let r ← Closure.mkValueTypeClosure revertedType (mkConst ``True)
      (zetaDelta := false)
    -- `mkValueTypeClosure` also re-parameterizes universe parameters into
    -- fresh names. We don't want to rename surrounding declaration's
    -- universes (their original names appear in error messages and elsewhere),
    -- so we substitute the fresh universe parameters back to the originals.
    let rType := r.type.instantiateLevelParamsArray r.levelParams r.levelArgs
    -- `rType` is `∀ ms, revertedType[ms]`. Peel exactly those binders so we
    -- can push the negation under them (yielding `∀ ms, ¬revertedType`).
    let negType ← forallBoundedTelescope rType (some r.exprArgs.size) fun ms revBody => do
      let negBody ← if (← Meta.isProp revBody) then
        pure (mkNot revBody)
      else
        mkArrow revBody (mkConst ``False)
      mkForallFVars ms negBody
    -- Pull the abstracted mvars' user names from `r.exprArgs` so we can
    -- later `intro` them under those (sanitized) names rather than under
    -- the anonymous `_x.N`s the closure builder uses internally.
    let mvarNames ← r.exprArgs.mapM fun mvarExpr => do
      let .mvar mvarId := mvarExpr | return `x
      let n := (← mvarId.getDecl).userName.eraseMacroScopes
      return if n.isAnonymous then `x else n
    return (negType, mvarNames)
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
  -- Intro the abstracted-mvar binders so the user's tactic sees them as
  -- local hypotheses rather than as a leading `∀`. We pass cleaned-up
  -- names (with hygiene scopes erased) so the introduced fvars are
  -- accessible to the user by name.
  let (_, innerMVarId) ← negMVarId.introN mvarNames.size mvarNames.toList
  try
    setGoals [innerMVarId]
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
