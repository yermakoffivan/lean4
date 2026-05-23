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

/--
Given the main goal of `impossible`, compute the closed *negated reverted
target* the user will be asked to inhabit, together with the names under which
the abstracted metavariables should be introduced.

The construction:

* `revert` all local hypotheses, turning the goal into `∀ xs, body`. Cleanup
  first so that aux decls etc. don't get reverted.
* Run `Closure.mkValueTypeClosure` on the reverted type to abstract every
  expression metavariable it mentions. We reuse this builder (rather than
  `Meta.abstractMVars`) because it walks without the single-`mctx`-depth filter
  and correctly eta-expands delayed-assignment metavariables — i.e. the same
  guarantees `grind`'s `mkAuxTheorem` already relies on. The dummy value we
  hand it is irrelevant; we only consume `.type` and `.exprArgs`.
* Substitute the freshly-generated universe parameters back to the originals.
  We don't want the surrounding declaration's universes to be renamed in the
  error messages or the user-facing goal state.
* Push the negation *under* the mvar binders but *over* the reverted-fvar
  binders, yielding `∀ ms, ¬(∀ xs, body)`. The user can then `intro` each
  mvar witness and reason about the existing local context as a universal.

Returns the negated type together with the user-friendly mvar names
(`userName.eraseMacroScopes`, with a fallback to `x` for anonymous ones).

Universe metavariables in the *goal type itself* are rejected by the caller
before this function runs; if they slipped through, `mkValueTypeClosure`
would happily abstract them too (turning them into fresh universe params),
but the resulting goal state with `Sort ?u`-style binders is hard to work
with, hence the upfront check.
-/
private def mkImpossibleNegType (mainGoal : MVarId) (goalType : Expr) :
    MetaM (Expr × Array Name) := mainGoal.withContext do
  let dummy ← mkFreshExprSyntheticOpaqueMVar goalType
  let cleaned ← dummy.mvarId!.cleanup
  let (_, reverted) ← cleaned.revert
    (clearAuxDeclsInsteadOfRevert := true)
    (← cleaned.getDecl).lctx.getFVarIds
  let revertedType ← reverted.getType
  let r ← Closure.mkValueTypeClosure revertedType (mkConst ``True)
    (zetaDelta := false)
  let rType := r.type.instantiateLevelParamsArray r.levelParams r.levelArgs
  let negType ← forallBoundedTelescope rType (some r.exprArgs.size) fun ms revBody => do
    let negBody ← if (← Meta.isProp revBody) then
      pure (mkNot revBody)
    else
      mkArrow revBody (mkConst ``False)
    mkForallFVars ms negBody
  let mvarNames ← r.exprArgs.mapM fun mvarExpr => do
    let .mvar mvarId := mvarExpr | return `x
    let n := (← mvarId.getDecl).userName.eraseMacroScopes
    return if n.isAnonymous then `x else n
  return (negType, mvarNames)

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
  let (negType, mvarNames) ← mkImpossibleNegType mainGoal goalType
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
