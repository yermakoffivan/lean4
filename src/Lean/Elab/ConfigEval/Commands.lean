/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.DeriveEvalTerm
public meta import Lean.Elab.ConfigEval.DeriveEvalTerm
public import Lean.Elab.ConfigEval.DeriveEvalExpr
public meta import Lean.Elab.ConfigEval.DeriveEvalExpr
public import Lean.Elab.ConfigEval.DeriveEvalConfigItem
public meta import Lean.Elab.ConfigEval.DeriveEvalConfigItem
public import Lean.Elab.Tactic.ElabTerm
import Lean.Linter.MissingDocs

public section

namespace Lean.Elab.ConfigEval

open Meta Term Command

scoped elab vis?:(visibility)? kind:attrKind tk:"ensure_eval_term_instance " t:term : command => do
  let type ← liftTermElabM do withoutErrToSorry <| elabTermAndSynthesize t none
  ensureEvalTerm vis? kind tk t type

scoped elab vis?:(visibility)? kind:attrKind tk:"ensure_eval_expr_instance " t:term : command => do
  let type ← liftTermElabM do withoutErrToSorry <| elabTermAndSynthesize t none
  ensureEvalExpr vis? kind tk t type
/--
`ensure_eval_term_expr_instances t` ensures there are `EvalTerm t` and `EvalExpr t` instances,
deriving them if necessary.
-/
scoped macro vis?:(visibility)? kind:attrKind tk:"ensure_eval_term_expr_instances " t:term : command =>
  `($[$vis?]? $kind ensure_eval_term_instance%$tk $t
    $[$vis?]? $kind ensure_eval_expr_instance%$tk $t)

/--
`derive_eval_expr_instance_using_meta_eval type` defines an `EvalExpr type` instance
using `Meta.evalExpr'` to evaluate expressions. This sort of item evaluator is a reasonable
backup strategy for infrequently used configuration options.
-/
scoped elab vis?:(visibility)? kind:attrKind tk:"derive_eval_expr_instance_using_meta_eval " t:term : command => do
  let type ← liftTermElabM do withoutErrToSorry <| elabTermAndSynthesize t none
  deriveEvalExprUsingMetaEval vis? kind tk t type

section
open Parser
meta def configEntryExcept := leading_parser
  nonReservedSymbol "except " >> sepBy1 ident ", "
meta def configEntryHandler := leading_parser
  nonReservedSymbol "option " >> ident >> optional "*" >> " := " >> termParser
meta def configEntry := leading_parser
  configEntryExcept <|> configEntryHandler
meta def configEntries := leading_parser
  "where" >> (sepByIndent configEntry "; " (allowTrailingSep := true))
end

meta def mkEvalConfigItemView (entries? : Option (TSyntax ``configEntries)) :
    CommandElabM EvalConfigItemView := do
  let mut exceptFields : Array Name := #[]
  let mut handlers : Array EvalConfigItemHandler := #[]
  if let some entries := entries? then
    match entries with
    | `(configEntries| where $[$entries:configEntry];*) =>
      for entry in entries do
        match entry with
        | `(configEntry| except $[$fields],*) =>
          exceptFields := exceptFields ++ fields.map (·.getId.eraseMacroScopes)
        | `(configEntry| option $opt:ident$[*%$star]? := $body) =>
          let optName := opt.getId.eraseMacroScopes
          handlers := handlers.push { ref := opt.raw, key := optName, body := body, exact := star.isNone }
        | _ => throwUnsupportedSyntax
    | _ => throwUnsupportedSyntax
  return { exceptFields, handlers }

/-!
`def_eval_set_config_item f binders* for struct` defines an `EvalConfigItem struct` structure named `f`.

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
elab vis?:(visibility)? tk:"def_eval_config_item " fn:ident binders:(bracketedBinder)* " for " struct:ident
    entries?:(configEntries)? : command => do
  let view ← mkEvalConfigItemView entries?
  defEvalConfigItem vis? tk struct fn binders view


open Lean.Parser.Term in
private meta def getBracketedBinderArgs (stx : Syntax) : MacroM (Array Term) :=
  match stx with
  | `(bracketedBinderF|($ids:ident* $[: $ty?]? $(_annot?)?)) => return ids
  | `(bracketedBinderF|{$ids:ident* $[: $_]?})               => return ids
  | `(bracketedBinderF|⦃$ids:ident* : $_⦄)                    => return ids
  | `(bracketedBinderF|[$id:ident : $_])                     => return #[id]
  | `(bracketedBinderF|[$_])                                 => return #[mkHole stx]
  | _                                                        => Macro.throwErrorAt stx "Unsupported binder"

macro (name := elabDeclareCoreConfigElab) doc?:(docComment)?
    tk:"declare_core_config_elab" elabName:ident type:ident binders:(bracketedBinder)*
    entries?:(configEntries)? : command => do
  let fnName := mkIdentFrom elabName (elabName.getId ++ `evalConfigItem)
  let binderArgs ← binders.foldlM (init := #[]) fun args binder => do
    pure <| args ++ (← getBracketedBinderArgs binder)
  withRef (mkNullNode #[tk, elabName, type]) do
    `(section
      private def_eval_config_item $fnName $[$binders]* for $type $[$entries?:configEntries]?
      $[$doc?:docComment]?
      def $elabName $[$binders]* (optConfig : Lean.Syntax) (initConfig : $type := {}) (logExceptions : Bool := false) : CoreM $type := do
        let eval : EvalConfigItem $type := @$fnName $binderArgs*
        eval.runEval' initConfig optConfig (logExceptions := logExceptions)
      end)

open Linter.MissingDocs in
@[builtin_missing_docs_handler elabDeclareCoreConfigElab]
private def checkDeclareCoreConfigElab : SimpleHandler := mkSimpleHandler "config elab"

macro (name := elabDeclareTermConfigElab) doc?:(docComment)?
    tk:"declare_term_config_elab" elabName:ident type:ident binders:(bracketedBinder)*
    entries?:(configEntries)? : command => do
  let fnName := mkIdentFrom elabName (elabName.getId ++ `evalConfigItem)
  let binderArgs ← binders.foldlM (init := #[]) fun args binder => do
    pure <| args ++ (← getBracketedBinderArgs binder)
  withRef (mkNullNode #[tk, elabName, type]) do
    `(section
      private def_eval_config_item $fnName $[$binders]* for $type $[$entries?:configEntries]?
      $[$doc?:docComment]?
      def $elabName $[$binders]* (optConfig : Lean.Syntax) (initConfig : $type := {}) : TermElabM $type := do
        let eval : EvalConfigItem $type := @$fnName $binderArgs*
        eval.runEval' initConfig optConfig (logExceptions := (← read).errToSorry)
      end)

open Linter.MissingDocs in
@[builtin_missing_docs_handler elabDeclareTermConfigElab]
private def checkDeclareTermConfigElab : SimpleHandler := mkSimpleHandler "config elab"

/-
`declare_config_elab elabName TypeName binders*` declares a function
```
elabName binders* (optConfig : Syntax) (initConfig : TypeName := {}) : TermElabM TypeName
```
that elaborates a tactic configuration, while deriving an `EvalSetConfigItem` instance to support it.
The configuration can be from `Lean.Parser.Term.optConfig`, `Lean.Parser.Tactic.optConfig` or `Lean.Parser.Tactic.config`,
and these can also be wrapped in null nodes (for example, from `(config)?`).

The elaborator responds to the current recovery state. When recovery is enabled, then invalid configuration
options are skipped, while logging errors. Otherwise invalid configurations result in exceptions.

For defining elaborators for commands, use `declare_command_config_elab`.
-/
macro (name := elabDeclareTacticConfig) doc?:(docComment)?
    tk:"declare_config_elab" elabName:ident type:ident binders:(bracketedBinder)*
    entries?:(configEntries)? : command => do
  let fnName := mkIdentFrom elabName (elabName.getId ++ `evalConfigItem)
  let binderArgs ← binders.foldlM (init := #[]) fun args binder => do
    pure <| args ++ (← getBracketedBinderArgs binder)
  withRef (mkNullNode #[tk, elabName, type]) do
    `(section
      private def_eval_config_item $fnName $[$binders]* for $type $[$entries?:configEntries]?
      $[$doc?:docComment]?
      def $elabName $[$binders]* (optConfig : Lean.Syntax) (initConfig : $type := {}) : $(mkCIdent ``Tactic.TacticM) $type := do
        let recover := (← read).recover
        let eval : EvalConfigItem $type := @$fnName $binderArgs*
        Tactic.runTermElab <| eval.runEval' initConfig optConfig (logExceptions := recover)
      end)

open Linter.MissingDocs in
@[builtin_missing_docs_handler elabDeclareTacticConfig]
private def checkDeclareTacticConfig : SimpleHandler := mkSimpleHandler "config elab"

/-!
`declare_command_config_elab elabName TypeName` declares a function
```
elabName (optConfig : Syntax) (initConfig : TypeName := {}) (logExceptions : Bool := true) : CommandElabM TypeName
```
that elaborates a command configuration.
The configuration can be from `Lean.Parser.Tactic.optConfig` or `Lean.Parser.Tactic.config`,
and these can also be wrapped in null nodes (for example, from `(config)?`).

The elaborator has error recovery enabled.
-/
macro (name := elabDeclareCommandConfig) doc?:(docComment)? tk:"declare_command_config_elab" elabName:ident type:ident binders:(bracketedBinder)*
    entries?:(configEntries)? : command => do
  let fnName := mkIdentFrom elabName (elabName.getId ++ `evalConfigItem)
  let binderArgs ← binders.foldlM (init := #[]) fun args binder => do
    pure <| args ++ (← getBracketedBinderArgs binder)
  withRef (mkNullNode #[tk, elabName, type]) do
    `(section
      private def_eval_config_item $fnName $[$binders]* for $type $[$entries?:configEntries]?
      $[$doc?:docComment]?
      def $elabName $[$binders]* (optConfig : Lean.Syntax) (initConfig : $type := {}) (logExceptions : Bool := true) : $(mkCIdent ``CommandElabM) $type := do
        let eval : EvalConfigItem $type := @$fnName $binderArgs*
        Command.liftTermElabM <| eval.runEval' initConfig optConfig (logExceptions := logExceptions)
      end)

open Linter.MissingDocs in
@[builtin_missing_docs_handler elabDeclareCommandConfig]
private def checkCommandConfigElab : SimpleHandler := mkSimpleHandler "config elab"


end Lean.Elab.ConfigEval
