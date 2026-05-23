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
public import Lean.Meta.AbstractMVars

public section

/-! # `impossible` tactic -/

namespace Lean.Elab.Tactic
open Lean Meta

/--
Like `Meta.abstractMVars` with `levels := false`, but abstracts every
expression metavariable found in `e` regardless of its mctx depth. This is
sound for our use here, where the resulting type is only used as a *type*
(a universally quantified obligation): treating a lower-depth mvar as
universally quantified is a strictly stronger statement than treating it
as a constant, so the impossibility witness still applies whatever value the
parent context might eventually assign.

Level metavariables are deliberately left alone.
-/
private partial def abstractAllMVars (e : Expr) : MetaM AbstractMVarsResult := do
  let e ← instantiateMVars e
  let s : AbstractMVars.State :=
    { mctx           := (← getMCtx)
      lctx           := (← getLCtx)
      ngen           := (← getNGen)
      abstractLevels := false }
  -- We mirror `AbstractMVars.abstractExprMVars`, but with the depth check
  -- elided so mvars from any depth are abstracted.
  let (e, s) := (go e).run s
  setNGen s.ngen
  setMCtx s.mctx
  let lam := s.lctx.mkLambda s.fvars e
  return { paramNames := s.paramNames, mvars := s.mvars, expr := lam }
where
  go (e : Expr) : StateM AbstractMVars.State Expr := do
    if !e.hasMVar then return e
    match e with
    | .lit _ | .bvar _ | .fvar _ | .sort _ | .const _ _ => return e
    | .proj _ _ b      => return e.updateProj! (← go b)
    | .app f a         => return e.updateApp! (← go f) (← go a)
    | .mdata _ b       => return e.updateMData! (← go b)
    | .lam _ d b _     => return e.updateLambdaE! (← go d) (← go b)
    | .forallE _ d b _ => return e.updateForallE! (← go d) (← go b)
    | .letE _ t v b _  => return e.updateLetE! (← go t) (← go v) (← go b)
    | .mvar mvarId =>
      let decl := (← get).mctx.getDecl mvarId
      match (← get).emap[mvarId]? with
      | some e => return e
      | none =>
        let (mctxNew, instType) := Lean.instantiateExprMVarsImp (← get).mctx decl.type
        modify ({ · with mctx := mctxNew })
        let type ← go instType
        let s ← get
        let fresh := s.ngen.curr
        let fvarId : FVarId := { name := fresh }
        let fvar := mkFVar fvarId
        let userName :=
          if decl.userName.isAnonymous then (`x).appendIndexAfter s.fvars.size
          else decl.userName
        set { s with
          ngen  := s.ngen.next
          emap  := s.emap.insert mvarId fvar
          fvars := s.fvars.push fvar
          mvars := s.mvars.push e
          lctx  := s.lctx.mkLocalDecl fvarId userName type }
        return fvar

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
    let abs ← abstractAllMVars revertedType
    -- Pull the abstracted mvars' user names so we can later `intro` them
    -- under those (sanitized) names rather than under the hygienic ones the
    -- mvars carried internally.
    let mvarNames ← abs.mvars.mapM fun mvarExpr => do
      let n := (← mvarExpr.mvarId!.getDecl).userName.eraseMacroScopes
      return if n.isAnonymous then `x else n
    let negType ← lambdaTelescope abs.expr fun ms revBody => do
      let negBody ← if (← Meta.isProp revBody) then
        pure (mkNot revBody)
      else
        mkArrow revBody (mkConst ``False)
      mkForallFVars ms negBody
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
