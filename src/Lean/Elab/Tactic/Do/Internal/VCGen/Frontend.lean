/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.VCGen.SuggestInvariant
public import Lean.Elab.Tactic.Do.VCGen
public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver
public import Lean.Meta.Sym.Simp.Attr
public import Lean.Meta.Sym.Simp.ControlFlow
public import Lean.Meta.Sym.Simp.EvalGround
public import Lean.Meta.Sym.Simp.Forall
public import Lean.Meta.Sym.Simp.Rewrite
public import Lean.Meta.Sym.Simp.Simproc
import Lean.Elab.Tactic.Grind.Main

public section

open Lean Parser Meta Elab Tactic Sym
open Lean.Elab.Tactic.Do
open Lean.Elab.Tactic.Do.Internal.SpecAttr
open Std.Internal.Do

namespace Lean.Elab.Tactic.Do.Internal.VCGen

/-!
`lmvcgen` tactic frontend: parse the user-facing argument syntax into a
`VCGen.Context`, run `VCGen.main`, and replace the main goal with the
resulting invariants and VCs.
-/

namespace VCGen

/--
Parse the optional `[...]` argument list for `lmvcgen`, partitioning entries into
spec theorems and simp lemmas. Each entry is first tried as a spec theorem, and on
failure falls back to a simp/unfold lemma processed via `mkSimpContext`.
-/
public def mkContext (lemmas : Syntax) (ignoreStarArg := false) :
    TacticM (VCGen.Context × VCGen.Scope) := do
  let mut specThms ← Lean.Elab.Tactic.Do.Internal.SpecAttr.getSpecTheorems
  let mut simpStuff := #[]
  let mut starArg := false
  for arg in lemmas[1].getSepArgs do
    if arg.getKind == ``simpErase then
      try
        let specThm ←
          if let some fvar ← Term.isLocalIdent? arg[1] then
            mkSpecTheoremFromLocal fvar.fvarId!
          else
            let id := arg[1]
            if let .ok declName ← observing (realizeGlobalConstNoOverloadWithInfo id) then
              mkSpecTheoremFromConst declName
            else
              withRef id <| throwUnknownConstant id.getId.eraseMacroScopes
        specThms := specThms.erase specThm.proof
      catch _ =>
        simpStuff := simpStuff.push ⟨arg⟩
    else if arg.getKind == ``simpLemma then
      unless arg[0].isNone && arg[1].isNone do
        simpStuff := simpStuff.push ⟨arg⟩
        continue
      let term := arg[2]
      match ← Term.resolveId? term (withInfo := true) <|> Term.elabCDotFunctionAlias? ⟨term⟩ with
      | some (.const declName _) =>
        try
          let thm ← mkSpecTheoremFromConst declName
          specThms := specThms.insert thm
        catch _ =>
          simpStuff := simpStuff.push ⟨arg⟩
      | some (.fvar fvar) =>
        try
          let thm ← mkSpecTheoremFromLocal fvar
          specThms := specThms.insert thm
        catch _ =>
          simpStuff := simpStuff.push ⟨arg⟩
      | _ => withRef term <| throwError "Could not resolve spec theorem `{term}`"
    else if arg.getKind == ``simpStar then
      starArg := true
      simpStuff := simpStuff.push ⟨arg⟩
    else
      throwUnsupportedSyntax
  let stx ← `(tactic| simp +unfoldPartialApp -zeta [$(Syntax.TSepArray.ofElems simpStuff),*])
  let simpCtx ← mkSimpContext stx.raw
    (eraseLocal := false)
    (simpTheorems := Lean.Elab.Tactic.Do.SpecAttr.getSpecSimpTheorems)
    (ignoreStarArg := ignoreStarArg)
  if starArg && !ignoreStarArg then
    let fvars ← getPropHyps
    for fvar in fvars do
      unless specThms.isErased (.local fvar) do
        try
          let thm ← mkSpecTheoremFromLocal fvar
          specThms := specThms.insert thm
        catch _ => continue
  let specSimpThms := simpCtx.ctx.simpTheorems[0]?.getD {}
  let specThmsNew ← SymM.run <| migrateSpecTheoremsDatabase specThms specSimpThms
  let tripleIntro ← mkBackwardRuleFromDecl ``Triple.intro
  let stateArgIntro ← mkBackwardRuleFromDecl ``state_arg_intro'
  let topStateArgIntro ← mkBackwardRuleFromDecl ``top_state_arg_intro'
  let propPreIntro ← mkBackwardRuleFromDecl ``Lean.Order.prop_pre_intro
  let ofPropPreIntro ← mkBackwardRuleFromDecl ``ofProp_pre_intro'
  let elimPreRule ← mkBackwardRuleFromDecl ``Lean.Order.prop_pre_elim
  let andIntroRule ← mkBackwardRuleFromDecl ``And.intro
  return ({
    introRules := { tripleIntro, stateArgIntro, topStateArgIntro, propPreIntro, ofPropPreIntro },
    elimPreRule,
    andIntroRule }, { specs := specThmsNew })

end VCGen


/-- Warn about `mvcgen'` config options that are accepted by the parser but currently ignored. -/
private def warnIgnoredConfig (config : VCGen.Config) : TacticM Unit := do
  let default : VCGen.Config := {}
  if config.leave != default.leave then
    logWarning "mvcgen': the `leave` config option is currently ignored."

/-- Parse grind configuration from the `with grind ...` clause and build `Grind.Params`. -/
private def elabGrindParams (grindStx : Syntax) (goal : MVarId) : TacticM Grind.Params := do
  let `(tactic| grind $config:optConfig $[only%$only]? $[ [$grindParams:grindParam,*] ]? $[=> $_:grindSeq]?) := grindStx
    | throwUnsupportedSyntax
  let grindConfig ← elabGrindConfig config
  mkGrindParams grindConfig only.isSome (grindParams.getD {}).getElems goal

/-- Build `Sym.Simp.Methods` from a variant name and extra theorems. -/
private def elabSymSimpParts
    (variantId? : Option (TSyntax `ident))
    (extraIds? : Option (Array (TSyntax `ident)))
    : TacticM Sym.Simp.Methods := do
  let variantName := variantId?.map (·.getId) |>.getD .anonymous
  if !variantName.isAnonymous then
    throwError "named Sym.simp variants are not yet supported in `mvcgen'`; \
      use `mvcgen' simplifying_assumptions [thm₁, thm₂, ...]` with the default variant instead"
  let mut extraThms : Array Sym.Simp.Theorem := #[]
  if let some ids := extraIds? then
    let lctx ← getLCtx
    for id in ids do
      if let some decl := lctx.findFromUserName? id.getId then
        extraThms := extraThms.push (← Sym.Simp.mkTheoremFromExpr decl.toExpr)
      else
        let declName ← realizeGlobalConstNoOverload id
        extraThms := extraThms.push (← Sym.Simp.mkTheoremFromDecl declName)
  let symThms ← Sym.Simp.getSymSimpTheorems
  let pre := Sym.Simp.simpControl >> Sym.Simp.simpArrowTelescope
  let mut post : Sym.Simp.Simproc := Sym.Simp.evalGround >> symThms.rewrite
  if !extraThms.isEmpty then
    let mut thms : Sym.Simp.Theorems := {}
    for thm in extraThms do
      thms := thms.insert thm
    post := post >> thms.rewrite
  return { pre, post }

private def elabSimplifyingAssumptions (simpClause : Syntax) : TacticM (Option Sym.Simp.Methods) := do
  if simpClause.getNumArgs == 0 then return none
  let variantId? := if simpClause[1].getNumArgs != 0 then some ⟨simpClause[1][0]⟩ else none
  let extraIds? := if simpClause[2].getNumArgs != 0
    then some (simpClause[2][1].getSepArgs.map (⟨·⟩)) else none
  pure (some (← elabSymSimpParts variantId? extraIds?))

private def elabDischargeTactic (goal : MVarId) (withClause : Syntax) :
    TacticM (VCGen.dischargeTactic × Grind.Params) := do
  let mut params ← Grind.mkDefaultParams {}
  if withClause.getNumArgs == 0 then
    return (.none, params)
  let tac := withClause[1]
  let (silent, tac) :=
    if tac.getKind == ``Lean.Parser.Tactic.tacticTry_ then
      (true, tac[1][0][0][0])
    else
      (false, tac)
  if tac.getKind == ``Lean.Parser.Tactic.grind then
    params ← elabGrindParams tac goal
    return (.grind silent, params)
  else
    return (.tactic tac, params)

/--
Pre-parse the optional `invariantAlts` syntax into a map from invariant number to alt syntax.
Returns `none` for the `invariants?` form and when no invariants clause is provided.
-/
private def parseInvariantMap (stx : Syntax) :
    TacticM (Option (Std.HashMap Nat Syntax)) := do
  let some altsStx := stx.getOptional? | return none
  match altsStx with
  | `(invariantAlts| invariants? $_*) => return none
  | _ => pure ()
  let stx' : TSyntax ``invariantAlts := ⟨altsStx⟩
  match stx' with
  | `(invariantAlts| $_invariantsKW $alts*) =>
    if alts.isEmpty then return some {}
    let mut map : Std.HashMap Nat Syntax := {}
    let mut dotOrCase := LBool.undef
    for h : i in 0...alts.size do
      let alt := alts[i]
      match alt with
      | `(invariantDotAlt| · $_rhs) =>
        if dotOrCase matches .false then
          throwErrorAt alt "Alternation between labelled and bulleted invariants is not supported."
        dotOrCase := .true
        map := map.insert (i + 1) alt
      | `(invariantCaseAlt| | $tag $_args* => $_rhs) =>
        if dotOrCase matches .true then
          throwErrorAt alt "Alternation between labelled and bulleted invariants is not supported."
        dotOrCase := .false
        let n? : Option Nat := do
          let `(binderIdent| $tag:ident) := tag | some (i + 1)
          let .str .anonymous s := tag.getId | none
          s.dropPrefix? "inv" >>= String.Slice.toNat?
        let some n := n? | throwErrorAt tag s!"Could not parse invariant label; expected `inv<n>`."
        if map.contains n then
          throwErrorAt tag s!"Duplicate invariant alternative for `inv{n}`."
        map := map.insert n alt
      | _ => throwErrorAt alt "Expected `invariantDotAlt` or `invariantCaseAlt`."
    return some map
  | _ => return none

/-- Elaborate invariant alternatives that were not consumed inline by the driver. -/
private def elabRemainingInvariants (alts : Std.HashMap Nat Syntax)
    (invariants : Array MVarId) (inlineHandled : Std.HashSet Nat) : TacticM Unit := do
  let mut handled := inlineHandled
  for h : i in 0...invariants.size do
    let n := i + 1
    if handled.contains n then continue
    let some alt := alts[n]? | continue
    handled := handled.insert n
    let tac ← match alt with
      | `(invariantDotAlt| · $rhs) => `(tactic| exact $rhs)
      | `(invariantCaseAlt| | $_tag $args* => $rhs) => `(tactic| (rename_i $args*; exact $rhs))
      | _ => continue
    withRef alt <| discard <| evalTacticAt tac invariants[i]
  for (n, alt) in alts.toArray do
    unless handled.contains n do
      logWarningAt alt s!"Invariant alternative `inv{n}` does not match any invariant goal."

@[builtin_tactic Lean.Parser.Tactic.mvcgen']
public def  evalMVCGen' : Tactic := fun stx => withMainContext do
  if mvcgen.warning.get (← getOptions) then
    logWarningAt stx "The `mvcgen'` tactic is experimental and still under development. \
      Avoid using it in production projects."
  let stateArgNames : Array Name := #[]
  let config ← elabConfig stx[1]
  warnIgnoredConfig config
  let goal ← getMainGoal
  let (ctx, scope) ← VCGen.mkContext stx[2]
  let simpMethods ← elabSimplifyingAssumptions stx[4]
  let (disch, params) ← elabDischargeTactic goal stx[5]
  let invariantAlts? ← parseInvariantMap stx[3]
  let ctx := { ctx with
    simpMethods,
    disch,
    trivial := config.trivial,
    assumption := config.assumption,
    useJP := config.jp,
    errorOnMissingSpec := config.errorOnMissingSpec,
    debug := config.debug,
    stateArgNames,
    invariantAlts := invariantAlts?.getD {} }
  let result ← Grind.GrindM.run (VCGen.main goal ctx scope config.stepLimit) params
  if let some alts := invariantAlts? then
    elabRemainingInvariants alts result.invariants result.inlineHandledInvariants
  else
    elabInvariants stx[3] result.invariants (suggestInvariant result.vcs)
  let invariants ← result.invariants.filterM (not <$> ·.isAssigned)
  replaceMainGoal (invariants ++ result.vcs).toList
  if result.dischTacFailed then
    throwError "pre-tactic failed on at least one VC; see errors above"

end Lean.Elab.Tactic.Do.Internal.VCGen

end
