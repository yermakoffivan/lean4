/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.Types
public import Lean.Elab.SyntheticMVars
import Lean.Elab.ConfigEval.Util

/-!
# Basic interface for configuration evaluation
-/

public section

namespace Lean.Elab.ConfigEval

open Meta Term

def evalTermWithRef {α : Type} [EvalTerm α] (stx : Term) : TermElabM α :=
  withRef stx <| Prod.fst <$> evalTerm stx

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
        let extra := if let some ty := ty? then m!"\nof type `{ty}`" else m!""
        throwError "Could not evaluate the expression{indentExpr e}{extra}")

/--
Evaluate `stx` using either `evalStx` or `evalExpr`.
-/
def evalTermOrExprWithElab {α : Type} [EvalTerm α] [EvalExpr α] (stx : Term) : TermElabM α :=
  withRef stx do
    catchInternalId unsupportedSyntaxExceptionId
      (Prod.fst <$> evalTerm stx)
      (fun _ => do
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
Evaluates `f e`, and if that does `throwUnsupportedExpr`, evaluates `f (← whnf e)`.
If either throw another exception, aborts immediately with that exception.
If both do `throwUnsupportedExpr`, then this generates an exception.
-/
def EvalExpr.withWHNF {α : Type} (f : Expr → MetaM α) (e : Expr) (errMsg : MessageData) : MetaM α := do
  catchInternalId unsupportedExprExceptionId
    (f e)
    (fun _ =>
      catchInternalId unsupportedExprExceptionId
        (do f (← whnf e))
        (fun _ =>
          throwError "Could not evaluate the expression:{indentExpr e}{errMsg}"))

def ConfigItem.isAnonymous (item : ConfigItem) : Bool := item.optionComps.isEmpty

def ConfigItem.root (item : ConfigItem) : Syntax :=
  match item.optionComps with
  | c :: _ => c
  | _      => .missing

def ConfigItem.getRootStr (item : ConfigItem) : String :=
  if let .str _ s := item.root.getId then
    s
  else
    ""

def ConfigItem.prevRoot? (item : ConfigItem) : Option Syntax :=
  item.prevOptionComps[0]?

def ConfigItem.prevRoot (item : ConfigItem) : Syntax :=
  match item.prevOptionComps with
  | c :: _ => c
  | _      => .missing

def ConfigItem.getCurrOptionName (item : ConfigItem) : Name :=
  (item.optionComps.map (·.getId)).foldl (init := .anonymous) Name.appendCore

/--
Drops the first component of the `optionName`, returning the new config item.
The first component is stored at the front of `prevOptionComps`.
-/
def ConfigItem.shift (item : ConfigItem) : ConfigItem :=
  { item with
    optionComps := item.optionComps.tail
    prevOptionComps := item.root :: item.prevOptionComps }

def ConfigItem.checkNotBool (item : ConfigItem) : TermElabM Unit := do
  if item.bool?.isSome then
    throwErrorAt item.option m!"Option is not boolean-valued, so `({item.origOptionName} := ...)` syntax must be used"

def ConfigItem.throwInvalidOption {α} (item : ConfigItem) (structName? : Option Name) : TermElabM α :=
  let forMsg := if let some structName := structName? then m!" for `{.ofConstName structName}`" else m!""
  throwErrorAt item.option "Invalid configuration option `{item.origOptionName}`{forMsg}"

def ConfigItem.addConstInfoForPrevRoot (item : ConfigItem) (n : Name) : TermElabM Unit := do
  if (← getInfoState).enabled then
    addConstInfo item.prevRoot n

open Parser in
/--
Interprets `item` as an option/value pair.
The `item` may be a `Term.configItem`, `Tactic.configItem`, or even `Tactic.config`.
TODO:
In fact, all that is necessary is that the syntax be structured using one of the following schemes:
- `"(" ident/atom ":=" syntax ")"
- "+" ident/atom
- "-" ident/atom
This will be interpreted as the correspnding kind of `configItem`.
The syntax value does not need to be a `Term`.
-/
@[specialize]
def withConfigItem {α} (item : Syntax) (k : ConfigItem → TermElabM α) (err : TermElabM α) : TermElabM α := do
  let doValue (option : Ident) (value : Syntax) : TermElabM α :=
    k { ref := item, option, value }
  let doBool (option : Ident) (b : Bool) : TermElabM α :=
    let value := if b then mkCIdentFrom item ``true else mkCIdentFrom item ``false
    k { ref := item, option, bool? := some b, value }
  match item with
  | `(Term.configItem| ($option:ident := $value)) => doValue option value
  | `(Term.configItem| +$option) => doBool option true
  | `(Term.configItem| -$option) => doBool option false
  | `(Tactic.configItem| ($option:ident := $value)) => doValue option value
  | `(Tactic.configItem| +$option) => doBool option true
  | `(Tactic.configItem| -$option) => doBool option false
  | `(Tactic.config| (config%$tk := $value)) => doValue (mkIdentFrom tk `config) value
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
      trace[Elab.ConfigEval] "setAll: `{item.origOptionName}`"
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
