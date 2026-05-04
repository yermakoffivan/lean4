/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.Term.TermElabM
public import Lean.Parser.Term

/-!
# Types for configuration elaboration
-/

public section

namespace Lean.Elab.ConfigEval

open Term

/--
Class for evaluation of `Term` syntax directly to a runtime value.
-/
class EvalTerm (α : Type) where
  /--
  Direct evaluation of `Term` syntax, avoiding term elaboration.
  Instances should use `throwUnsupportedSyntax` to signal that the syntax is not recognized.
  Instances shouldn't generally throw other exceptions.

  Evaluation is allowed to imagine that certain coercions are implicitly inserted.
  For example, the `Option Int` instance is allowed to recognize `1` as an `Option Int`
  even though term elaboration would fail here. This allowance should be used lightly,
  since generally `EvalTerm` is used as the fast path, and when using the `EvalExpr`
  backup, such expressions will no longer be recognized.

  Implementations should add `TermInfo` when the info is enabled.
  The `Expr` return value is to support constructing such expressions in combinators.
  -/
  evalTerm : Term → TermElabM (α × Expr)
  /--
  A type that can be used when constructing expression for the `TermInfo`.
  -/
  typeExpr : Expr

export EvalTerm (evalTerm)

/--
Class for evaluation of an expression to a runtime value.
-/
class EvalExpr (α : Type) where
  /--
  Evaluation of an elaborated expression.
  If the expression is not recognizable, then the instance may throw an exception.
  They can throw `throwUnsupportedSyntax` to signal that a generic error should be reported.

  The provided expression does not contain expression metavariables or `sorry`, but
  level metavariables may be present. We assume these do not affect evaluation.
  If `expectedType?` is provided, then the expression is coerced as necessary to have this type.
  -/
  evalExpr : Expr → MetaM α
  /--
  The expected type to use when elaborating a term for use with this `EvalExpr` instance.
  If present, the expression will be coerced to this type.
  -/
  expectedType? : Option Expr

export EvalExpr (evalExpr)

/--
A view of a `Lean.Parser.Term.configItem`.
-/
structure ConfigItem where
  /-- Ref for the entire configuration item -/
  ref : Syntax
  /-- Ref for the option name itself. -/
  option : Ident
  /-- The option name as a `Name`, without macro scopes. -/
  optionName : Name := option.getId.eraseMacroScopes
  /-- The configuration value. For `+`/`-` booleans, this syntax is synthetic. -/
  value : Term
  /-- Whether this was using `+`/`-`, to be able to give a better error message on type mismatch. -/
  bool : Bool := false

/--
An evaluator for updating a configuration object using configuration items.

This is not a class. In practice, it might be composed out of evaluators or otherwise parameterized in a number of ways.
-/
structure EvalConfigItem (α : Type) where
  /--
  Evaluates setting the configuration item described by `item` in `config`.
  -/
  set (config : α) (item : ConfigItem) : TermElabM α

structure ReflectConfigItems (α : Type) where
  /--
  Given a configuration, produces an array of configuration items representing it.
  -/
  reflect (config : α) : TermElabM (TSyntaxArray ``Parser.Term.configItem)

end Lean.Elab.ConfigEval
