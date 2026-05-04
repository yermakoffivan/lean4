/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.Types
public import Lean.Elab.SyntheticMVars
public import Lean.Meta.CollectMVars
import Lean.Elab.ConfigEval.Util

/-!
# Basic interface for configuration evaluation
-/

public section

namespace Lean.Elab.ConfigEval

open Meta Term

/--
Evaluate `stx` using either `evalExpr`.
-/
def evalExprWithElab {α : Type} [EvalExpr α] (stx : Term) : TermElabM α :=
  withRef stx do
    let ty? := EvalExpr.expectedType? α
    let e ← Term.withSynthesize <| Term.elabTermEnsuringType stx ty?
    let e ← instantiateMVars e
    if e.hasSorry then
      if e.hasSyntheticSorry then
        -- An error has already been logged.
        throwAbortTerm
      throwError "Expression contains `sorry`:{indentExpr e}"
    if (← Term.logUnassignedUsingErrorInfos (← getMVars e)) then
      throwAbortTerm
    catchInternalId unsupportedSyntaxExceptionId
      (evalExpr e)
      (fun _ => do
        -- let lmvars := collectLevelMVars {} e
        -- if (← Term.logUnassignedLevelMVarsUsingErrorInfos lmvars.result) then throwAbortTerm
        let extra := if let some ty := ty? then m!"\nof type `{ty}`" else m!""
        throwError "Could not evaluate the expression{indentExpr e}{extra}")

/--
Evaluate `stx` using either `evalStx` or `evalExpr`.
-/
def evalTermOrExprWithElab {α : Type} [EvalTerm α] [EvalExpr α] (stx : Term) : TermElabM α :=
  withRef stx do
    -- let s ← saveState
    catchInternalId unsupportedSyntaxExceptionId
      (Prod.fst <$> evalTerm stx)
      (fun _ => do
        -- s.restore (restoreInfo := true)
        evalExprWithElab stx)

private partial def stripParens : Term → Term
  | `(($t)) => stripParens t
  | t => t

@[inline] def EvalTerm.evalTermWithInfo {α : Type}
    (expectedType? : Option Expr) (f : Term → TermElabM (α × Expr)) (stx : Term) :
    TermElabM (α × Expr) := do
  let (v, e) ← withRef stx <| f (stripParens stx)
  if (← getInfoState).enabled then
    addTermInfo' stx e (expectedType? := expectedType?)
  return (v, e)

/-- Like `evalTermWithInfo`, but uses an existing `ToExpr` instance
for `expectedType?` and for constructing the expression. -/
@[inline] def EvalTerm.evalTermWithInfo' {α : Type} [ToExpr α]
    (f : Term → TermElabM α) :
    Term → TermElabM (α × Expr) :=
  evalTermWithInfo (toTypeExpr α) (fun stx => do
    let v ← f stx
    return (v, toExpr v))

/--
Evaluates `f e`, and if that `throwsUnsupportedExpr`, evaluates `f (← whnf e)`.
If either throw another exception, aborts immediately with that exception.
If both use `throwsUnsupportedExpr`, then this generates an exception.
-/
def EvalExpr.withWHNF {α : Type} (f : Expr → MetaM α) (e : Expr) (errMsg : MessageData) : MetaM α := do
  catchInternalId unsupportedExprExceptionId
    (f e)
    (fun _ =>
      catchInternalId unsupportedExprExceptionId
        (do f (← whnf e))
        (fun _ =>
          throwError "Could not evaluate the expression:{indentExpr e}{errMsg}"))

def ConfigItem.getRootOptionName (item : ConfigItem) : String :=
  if let .str _ s := item.optionName.getRoot then
    s
  else
    ""

def ConfigItem.isAtomic (item : ConfigItem) : Bool := item.optionName.isStr

def ConfigItem.isAnonymous (item : ConfigItem) : Bool := item.optionName.isAnonymous

/-- Given a non-atomic `Ident` `a.b.c`, returns idents `a` and `b.c`, inheriting
original source info, if present. See `Lean.Syntax.identComponents`. -/
private def splitIdentRoot (stx : Ident) : Ident × Ident :=
  match stx.raw with
  | .ident si rawStr val _ => Id.run do
    let val := val.eraseMacroScopes
    if val.isAtomic then
      return (stx, mkIdent .anonymous)
    let nameComp₀ := val.getRoot
    let nameComp₁ := val.replacePrefix nameComp₀ Name.anonymous
    -- With original info, we assume that `rawStr` represents `val`.
    if let SourceInfo.original lead pos trail endPos := si then
      let rawComps := Syntax.splitNameLit rawStr
      if rawComps.length ≥ 2 && val.getNumParts == rawComps.length then
        let rawComps₀ := rawComps[0]!
        let rawComps₁ := { rawStr with startPos := rawComps[1]!.startPos }
        let info₀ : SourceInfo := .original lead pos "".toRawSubstring rawComps₀.stopPos
        let info₁ : SourceInfo := .original "".toRawSubstring rawComps[1]!.startPos trail endPos
        return (⟨.ident info₀ rawComps₀ nameComp₀ []⟩, ⟨.ident info₁ rawComps₁ nameComp₁ []⟩)
    -- if re-parsing failed, or non-original info: just give them all the same span
    return (⟨.ident si nameComp₀.toString.toRawSubstring nameComp₀ []⟩,
            ⟨.ident si nameComp₁.toString.toRawSubstring nameComp₁ []⟩)
  | _ => (stx, mkIdent .anonymous)

/-- Drops the first component of the `optionName`, returning it and the new config item. -/
def ConfigItem.shift (item : ConfigItem) : Ident × ConfigItem :=
  let (root, option') := splitIdentRoot item.option
  (root,
    { item with
      option := option', optionName := option'.getId,
      prevOptionComps := item.prevOptionComps.push root })

def ConfigItem.checkNotBool (item : ConfigItem) : TermElabM Unit := do
  if item.bool then
    throwErrorAt item.ref m!"Option is not boolean-valued, so `({item.optionName} := ...)` syntax must be used"

def ConfigItem.throwInvalidOption {α} (item : ConfigItem) (structName? : Option Name) : TermElabM α :=
  let forMsg := if let some structName := structName? then m!" for `{.ofConstName structName}`" else m!""
  throwErrorAt item.option "Invalid configuration option `{item.optionName}`{forMsg}"

def ConfigItem.throwCannotSetOption {α} (item : ConfigItem) : TermElabM α := do
  throwErrorAt item.option "Cannot set configuration option `{item.optionName}` using tactic configuration syntax."


open Parser in
/--
Interprets `item` as an option/value pair.
The `item` may be a `Term.configItem`, `Tactic.configItem`, or even `Tactic.config`.
-/
@[specialize]
def withConfigItem {α} (item : Syntax) (k : ConfigItem → TermElabM α) (err : TermElabM α) : TermElabM α := do
  match item with
  | `(Term.configItem| ($option:ident := $value)) => k { ref := item, option, value }
  | `(Term.configItem| +$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``true }
  | `(Term.configItem| -$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``false }
  | `(Tactic.configItem| ($option:ident := $value)) => k { ref := item, option, value }
  | `(Tactic.configItem| +$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``true }
  | `(Tactic.configItem| -$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``false }
  | `(Tactic.config| (config%$tk := $value)) => k { ref := item, option := mkCIdentFrom tk `config, optionName := `config, value := value }
  | _ => err


/-- Interprets `items` as an array of option/value pairs, updating `x`. -/
@[specialize]
def foldConfigItemsM {α} (x : α) (items : Array Syntax) (k : α → ConfigItem → TermElabM α) (err : α → TermElabM α) : TermElabM α := do
  items.foldlM (init := x) (fun x item => withConfigItem item (k x) (err x))

def EvalConfigItem.setAll {α} (eval : EvalConfigItem α)
    (config : α) (items : Array Syntax) (err : α → TermElabM α)
    (logExceptions : Bool) : TermElabM α :=
  foldConfigItemsM config items
    (fun config item => withRef item.ref do
      trace[Elab.ConfigEval] "'{item.optionName}'"
      try
        eval.set config item
      catch ex =>
        if logExceptions then
          logException ex
          return config
        else
          throw ex)
    err

def EvalConfigItem.runEval {α : Type} (eval : EvalConfigItem α)
    (initConfig : α) (items : TSyntaxArray `Lean.Parser.Tactic.configItem) (logExceptions : Bool) : CoreM α :=
  MetaM.run' <| TermElabM.run' (ctx := { errToSorry := logExceptions }) <| withSaveInfoContext do
    eval.setAll initConfig items (fun _ => throwUnsupportedSyntax) logExceptions

def EvalConfigItem.runEval' {α : Type} (eval : EvalConfigItem α)
    (initConfig : α) (optConfig : Syntax) (logExceptions : Bool) : CoreM α :=
  withRef optConfig do
    let items := Parser.Tactic.getConfigItems optConfig
    eval.runEval initConfig items logExceptions

end Lean.Elab.ConfigEval
