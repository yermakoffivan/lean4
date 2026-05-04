/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.Types
public import Lean.Elab.ConfigEval.Util
public import Lean.Elab.Command
public import Lean.Elab.DeclNameGen

public section

namespace Lean.Elab.ConfigEval

open Meta Term Command

/--
Resolves `id`, making sure the result is in namespace `c`.
Returns `s` if the resolved name is of the form of the form `Name.str c s`.
-/
private def resolveAtomicNameForConstNamespace (c : Name) (id : Ident) : TermElabM String := do
  let n := id.getId.eraseMacroScopes
  -- For atomic names, resolve them as if `c` is the namespace.
  if let Name.str Name.anonymous s := n then
    let n' := Name.str c s
    if (← getEnv).contains n' then
      if (← getInfoState).enabled then
        addConstInfo id n'
      return s
  let n ← realizeGlobalConstNoOverloadWithInfo id
  if !n.hasMacroScopes && n.getPrefix == c then
    if let Name.str _ s := n then
      return s
  throwUnsupportedSyntax

/--
Resolves `id` as if it were a dotted identifier for namespace `c`,
and returns `s` if the resolved name is of the form `Name.str c s`.
-/
private def resolveDottedAtomicNameForConstNamespace (c : Name) (id : Ident) : TermElabM String := do
  let n := id.getId.eraseMacroScopes
  if let Name.str Name.anonymous s := n then
    addCompletionInfo <| CompletionInfo.dotId id n {} (← mkConstWithLevelParams c)
    let n' := Name.str c s
    if (← getEnv).contains n' then
      if (← getInfoState).enabled then
        addConstInfo id n'
      return s
    else
      resolveAtomicNameForConstNamespace c (mkIdentFrom id n')
  else
    throwUnsupportedSyntax

/--
Wrapper to handle atomic identifiers and dotted identifiers.
-/
partial def EvalConfigItem.withSimpleEvalStx {α} (indTypeName : Name) (evalStxImpl : String → Array Term → TermElabM (α × Expr)) : Term → TermElabM (α × Expr)
  | `($f:ident) => do
    let ctorName ← resolveAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName #[]
  | `($f:ident $args*) => do
    let ctorName ← resolveAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName args
  | `(.$f:ident) => do
    let ctorName ← resolveDottedAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName #[]
  | `(.$f:ident $args*) => do
    let ctorName ← resolveDottedAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName args
  | `(($stx)) => withSimpleEvalStx indTypeName evalStxImpl stx
  | _ => throwUnsupportedSyntax

/--
Ensures an `EvalTerm` instance exists for the given type by deriving one if necessary.
Derivation can handle `EvalTerm` instance for nonrecursive inductive types without universes, parameters, or indices.
Creates syntax matchers for only those constructors with zero fields (the common case for tactics).
-/
def ensureEvalTerm
    (vis? : Option (TSyntax `Lean.Parser.Command.visibility))
    (kind : TSyntax `Lean.Parser.Term.attrKind)
    (cmdRef typeRef : Syntax) (type : Expr) : CommandElabM Unit := do
  withClassInstDeps ``EvalTerm type extraDeps fun type => withRef cmdRef do
    let ival ← getIndType type
    let mut stxCases : Array (String × Term) := #[]
    for ctorName in ival.ctors do
      if useCtor ival ctorName then
        let (xs, _, _) ← forallMetaTelescopeReducing (← inferType (mkConst ctorName))
        let .str _ ctorName' := ctorName | unreachable!
        let vs ← xs.mapM fun _ => mkIdent <$> Core.mkFreshUserName `v
        let es ← xs.mapM fun _ => mkIdent <$> Core.mkFreshUserName `e
        let expr ← `(Expr.const $(quote ctorName) [])
        let expr ← es.foldlM (init := expr) fun expr e =>
          `(Expr.app $expr $e)
        let val ← `(pure ($(mkCIdent ctorName) $vs*, $expr))
        let val ← ((Array.range xs.size).zip (es.zip vs)).foldrM (init := val) fun (idx, e, v) val =>
          `(EvalTerm.evalTerm args[$(quote idx)]! >>= fun ($e, $v) => $val)
        stxCases := stxCases.push (ctorName', val)
    let indTypeIdent := mkIdentFrom typeRef ival.name
    let instName ← NameGen.mkBaseNameWithSuffix' "inst" #[] <| ← ``(EvalConfigItem $indTypeIdent)
    let evalStxDef := mkIdent (instName ++ Name.mkSimple "auxEvalStx")
    let stxMatcher ← makeStringMatcher (← `(ident| stx)) stxCases (← `(throwUnsupportedSyntax))
    `($[$vis?:visibility]? def $evalStxDef : Term → TermElabM ($indTypeIdent × Expr) :=
        EvalConfigItem.withSimpleEvalStx $(quote ival.name) fun stx args => $stxMatcher
      $[$vis?:visibility]? $kind:attrKind instance%$cmdRef $(mkIdentFrom cmdRef instName (canonical := true)):ident : EvalTerm $indTypeIdent where
        evalTerm := $evalStxDef
        typeExpr := Expr.const $(quote ival.name) [])
where
  getIndType (type : Expr) : TermElabM InductiveVal := withRef typeRef do
    let some indTypeName := (← whnf type).constName?
      | throwError "`{type}` is not an inductive type"
    let .inductInfo ival ← getConstInfo indTypeName
      | throwError "`{.ofConstName indTypeName}` is not an inductive type"
    unless ival.levelParams.isEmpty && ival.numParams == 0 && ival.numIndices == 0 do
      throwError "`{.ofConstName indTypeName}` must not have universe parameters, parameters, or indices"
    if ival.isRec then
      throwError "`{.ofConstName indTypeName}` must not be recursive"
    return ival
  useCtor (ival : InductiveVal) (ctorName : Name) : Bool :=
    ctorName.isStr && !ctorName.hasMacroScopes && !isPrivateName ctorName && ctorName.getPrefix == ival.name
  extraDeps (type : Expr) : TermElabM (Array Expr) := withRef typeRef do
    let ival ← getIndType type
    let mut deps := #[]
    for ctorName in ival.ctors do
      if useCtor ival ctorName then
        let (xs, bis, _) ← forallMetaTelescopeReducing (← inferType (mkConst ctorName))
        unless bis.all (·.isExplicit) do
          throwError "Every field of `{.ofConstName ctorName}` must be explicit"
        for x in xs do
          let xTy ← inferType x
          if xTy.hasMVar then
            throwError "Field `{x}` of `{.ofConstName ctorName}` is dependent"
          deps := deps.push xTy
    return deps

end Lean.Elab.ConfigEval
