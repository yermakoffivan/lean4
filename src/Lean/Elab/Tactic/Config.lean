/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Kyle Miller
-/
module

prelude
public import Lean.Meta.Eval
public import Lean.Elab.Command
meta import Lean.Elab.Command
public meta import Lean.Elab.DeclNameGen
public import Lean.Elab.Tactic.ElabTerm
import Lean.Linter.MissingDocs
public import Lean.Elab.DeprecatedSyntax  -- shake: skip (workaround for command elaborators failing to interpret `deprecatedSyntaxExt`, to be fixed #13108)

public section

namespace Lean.Elab.Tactic
open Meta Parser.Tactic Command

/--
Evaluator for a tactic configuration item.

The `optionKey` parameter allows tactics to override the ways items are evaluated for specific options.
For example, if `Lean.Meta.Simp.Config` has a `foo` option that wants a special evaluator, then
adding an instance for `Lean.Meta.Simp.Config.foo` communicates the desire to override.
(Note: the instances are checked in the meta phase. Overriding instances does not work after a
tactic configuration evaluator is generated.)

Use `Tactic.EvalConfigItem.eval` to evaluate using these instances.
-/
class EvalConfigItem (optionKey : Name) (α : Type) where
  /-- Direct evaluation of syntax. Produces an expression as well if `mkExpr` is true, for terminfo.
  `EvalConfigItem` instances should call `EvalConfigItem.evalStxWithTermInfo` instead of this. -/
  evalStx : Term → (mkExpr : Bool) → TermElabM (α × Expr)
  /-- Evaluation of elaborated expression, if `evalStx` fails. The expression does not
  contain expression metavariables or `sorry`. Level metavariables may be present.
  The type of the expression might not be `typeExpr?`. -/
  evalExpr : Expr → MetaM α
  /-- The expected type when elaborating `Term` to run `evalExpr`.
  Also used for terminfo when evaluating using `evalStx`. -/
  typeExpr? : Option Expr
  deriving Inhabited

namespace EvalConfigItem

private def rethrowIfNotUnsupportedSyntax (ex : Exception) : TermElabM Unit := do
  if let .internal id := ex then
    if id == unsupportedSyntaxExceptionId then
      return ()
  throw ex

private def orElse {α : Type} (m1 m2 : TermElabM α) := do
  let s ← saveState
  try
    return ← m1
  catch ex =>
    rethrowIfNotUnsupportedSyntax ex
  s.restore
  m2

/--
Frontend for `evalStx` that adds terminfo.
Instances should call this function instead of `evalStx` so that terminfo is applied on subterms.
-/
def evalStxWithTermInfo (optionKey : Name) {α : Type} [EvalConfigItem optionKey α] (stx : Term) (mkExpr : Bool) : TermElabM (α × Expr) := do
  let (v, e) ← evalStx optionKey stx mkExpr
  if mkExpr then
    Term.addTermInfo' stx e (expectedType? := EvalConfigItem.typeExpr? optionKey α)
  return (v, e)

/--
Evaluate `stx` using either `evalStx` or `evalExpr`.
-/
def eval (optionName : String) (optionKey : Name) {α : Type} [EvalConfigItem optionKey α] (stx : Term) : TermElabM α :=
  withRef stx do
    orElse
      (do
        let (v, _) ← EvalConfigItem.evalStxWithTermInfo optionKey stx (← getInfoState).enabled
        return v)
      (do
        let ty? := EvalConfigItem.typeExpr? optionKey α
        let mut e ← Term.withSynthesize <| Term.elabTerm stx ty?
        -- Coerce after elaborating and synthesizing, so that way we get a nicer error if,
        -- for example, we elaborate `2` with expected type `Bool`.
        if let some ty := ty? then
          unless ← isDefEqGuarded ty (← inferType e) do
            match (← coerce? e ty) with
            | .some e' => e := e'
            | _ => pure ()
        e ← instantiateMVars e
        if e.hasSorry then
          if e.hasSyntheticSorry then
            -- An error has already been logged.
            throwAbortTerm
          throwError "Cannot evaluate configuration option `{optionName}`, contains `sorry`:{indentExpr e}"
        if (← Term.logUnassignedUsingErrorInfos (← getMVars e)) then throwAbortTerm
        try
          EvalConfigItem.evalExpr optionKey e
        catch ex =>
          let lmvars := collectLevelMVars {} e
          if (← Term.logUnassignedLevelMVarsUsingErrorInfos lmvars.result) then throwAbortTerm
          rethrowIfNotUnsupportedSyntax ex
          if let some ty := ty? then
            let eType ← inferType e
            unless ← isDefEqGuarded ty eType do
              throwError "Type mismatch. Provided value{inlineExpr e}for option `{optionName}`{← mkHasTypeButIsExpectedMsg eType ty}"
          let extra := if let some ty := ty? then m!" of type `{ty}`" else m!""
          throwError "Could not evaluate configuration option `{optionName}`{extra}:{indentExpr e}")

section BasicEvaluators

/--
Evaluates `f` on both `e` and `whnf e`. Assumes `e` has no metavariables.
If `f` throws `throwUnsupportedSyntax`, then aborts.
Throws `throwUnsupportedSyntax` if neither succeeds.
-/
def withWHNF {α : Type} (f : Expr → MetaM α) (e : Expr) : MetaM α := do
  try
    f e
  catch ex =>
    if let .internal id := ex then
      if id == unsupportedSyntaxExceptionId then
        throw ex
    f (← whnf e) <|> throwUnsupportedSyntax

def evalBoolExprCore (e : Expr) : MetaM Bool :=
  match_expr e with
  | Bool.true => return true
  | Bool.false => return false
  | _ => failure

def evalBoolExpr : Expr → MetaM Bool :=
  withWHNF evalBoolExprCore

def evalNatExprCore (e : Expr) : MetaM Nat :=
  (e.nat? <|> e.rawNatLit?).getM

def evalNatExpr : Expr → MetaM Nat :=
  withWHNF evalNatExprCore

def evalIntExprCore (e : Expr) : MetaM Int :=
  e.int?.getM <|> Int.ofNat <$> evalNatExprCore e <|>
    match_expr e with
    | Int.ofNat e' => Int.ofNat <$> evalNatExpr e'
    | Int.negSucc e' => Int.negSucc <$> evalNatExpr e'
    | _ => failure

def evalIntExpr : Expr → MetaM Int :=
  withWHNF evalIntExprCore

def evalStringExprCore : Expr → MetaM String
  | .lit (.strVal s) => return s
  | _ => failure

def evalStringExpr : Expr → MetaM String :=
  withWHNF evalStringExprCore

def evalNameExprCore (e : Expr) : MetaM Name :=
  e.name?.getM

def evalNameExpr : Expr → MetaM Name :=
  withWHNF evalNameExprCore

def evalOptionExprCore {α : Type} (ev : Expr → MetaM α) (e : Expr) : MetaM (Option α) :=
  match_expr e with
  | Option.none _ => return none
  | Option.some _ x => some <$> ev x
  | _ => failure

def evalOptionExpr {α : Type} (ev : Expr → MetaM α) (e : Expr) : MetaM (Option α) :=
  withWHNF (evalOptionExprCore ev) e <|> some <$> ev e

partial def evalListExpr {α : Type} (ev : Expr → MetaM α) (e : Expr) (didWHNF : Bool := false) : MetaM (List α) := do
  match_expr (meta := false) e with
  | List.nil => return []
  | List.cons _ x xs =>
    let v ← ev x
    let vs ← evalListExpr ev xs
    return v :: vs
  | _ =>
    if didWHNF then
      throwUnsupportedSyntax
    else
      evalListExpr ev (← whnf e) (didWHNF := true)

def evalDataValueExprCore (e : Expr) : MetaM DataValue :=
  match_expr e with
  | DataValue.ofBool e => DataValue.ofBool <$> evalBoolExpr e
  | DataValue.ofNat e => DataValue.ofNat <$> evalNatExpr e
  | DataValue.ofInt e => DataValue.ofInt <$> evalIntExpr e
  | DataValue.ofString e => DataValue.ofString <$> evalStringExpr e
  | DataValue.ofName e => DataValue.ofName <$> evalNameExpr e
  | _ =>
    (DataValue.ofBool <$> evalBoolExprCore e)
    <|> (DataValue.ofNat <$> evalNatExprCore e)
    <|> (DataValue.ofInt <$> evalIntExprCore e)
    <|> (DataValue.ofString <$> evalStringExprCore e)
    <|> (DataValue.ofName <$> evalNameExprCore e)
    -- skipping `DataValue.ofSyntax`
    <|> failure

def evalDataValueExpr : Expr → MetaM DataValue :=
  withWHNF evalDataValueExprCore

@[macro_inline] private def mkExpr? (mkExpr : Bool) (e : Expr) : Expr :=
  if mkExpr then e else default

@[macro_inline] private def mkExprM? (mkExpr : Bool) (me : TermElabM Expr) : TermElabM Expr :=
  if mkExpr then me else return default

def evalBoolStx : Term → Bool → TermElabM (Bool × Expr)
  | `(true), _  => return (true,  Expr.const ``Bool.true  [])
  | `(false), _ => return (false, Expr.const ``Bool.false [])
  | _, _ => throwUnsupportedSyntax

def evalNatStx : Term → Bool → TermElabM (Nat × Expr)
  | `($n:num), mkExpr => let n := n.getNat; return (n, mkExpr? mkExpr <| mkNatLit n)
  | _, _ => throwUnsupportedSyntax

def evalIntStx : Term → Bool → TermElabM (Int × Expr)
  | `($n:num), mkExpr => let n : Int := n.getNat; return (n, mkExpr? mkExpr <| mkIntLit n)
  | `(-$n:num), mkExpr => let m : Int := -n.getNat; return (m, mkExpr? mkExpr <| mkIntLit m)
  | _, _ => throwUnsupportedSyntax

def evalStringStx : Term → Bool → TermElabM (String × Expr)
  | `($s:str), mkExpr => let s := s.getString; return (s, mkExpr? mkExpr <| mkStrLit s)
  | _, _ => throwUnsupportedSyntax

def evalNameStx (stx : Term) (mkExpr : Bool) : TermElabM (Name × Expr) :=
  if let some n := stx.raw.isNameLit? then
    return (n, mkExpr? mkExpr (toExpr n))
  else
    throwUnsupportedSyntax

def evalOptionStx {α : Type} (ty : Expr) (ev : Term → Bool → TermElabM (α × Expr)) : Term → Bool → TermElabM (Option α × Expr)
  | `(none), mkExpr => return (none, ← mkExprM? mkExpr (mkNone ty))
  | `(some $v), mkExpr
  | `($v), mkExpr => do let (r, e) ← ev v mkExpr; return (some r, ← mkExprM? mkExpr (mkSome ty e))

def evalListStx {α : Type} (ty : Expr) (ev : Term → Bool → TermElabM (α × Expr)) : Term → Bool → TermElabM (List α × Expr)
  | `([$[$xs],*]), mkExpr => do
    let (vs, es) := (← xs.mapM (ev · mkExpr)).unzip
    return (vs.toList, ← mkExprM? mkExpr (mkListLit ty es.toList))
  | _, _ => throwUnsupportedSyntax

def evalDataValueStx (stx : Term) (mkExpr : Bool) : TermElabM (DataValue × Expr) :=
  let mk {α} (f : α → DataValue) (x : α × Expr) := (f x.1, x.2)
  (mk DataValue.ofBool <$> evalBoolStx stx mkExpr)
  <|> (mk DataValue.ofNat <$> evalNatStx stx mkExpr)
  <|> (mk DataValue.ofInt <$> evalIntStx stx mkExpr)
  <|> (mk DataValue.ofString <$> evalStringStx stx mkExpr)
  <|> (mk DataValue.ofName <$> evalNameStx stx mkExpr)
  -- skipping `DataValue.ofSyntax`
  <|> throwUnsupportedSyntax

instance (priority := low) {o} : EvalConfigItem o Bool where
  evalExpr := evalBoolExpr
  evalStx := evalBoolStx
  typeExpr? := Expr.const ``Bool []

instance (priority := low) {o} : EvalConfigItem o Nat where
  evalExpr := evalNatExpr
  evalStx := evalNatStx
  typeExpr? := Expr.const ``Nat []

instance (priority := low) {o} : EvalConfigItem o Int where
  evalExpr := evalIntExpr
  evalStx := evalIntStx
  typeExpr? := Expr.const ``Int []

instance (priority := low) {o} : EvalConfigItem o String where
  evalExpr := evalStringExpr
  evalStx := evalStringStx
  typeExpr? := Expr.const ``String []

instance (priority := low) {o} : EvalConfigItem o Name where
  evalExpr := evalNameExpr
  evalStx := evalNameStx
  typeExpr? := Expr.const ``Name []

instance (priority := low) {o} {α : Type} [EvalConfigItem o α] : EvalConfigItem o (Option α) where
  evalExpr := evalOptionExpr (evalExpr o)
  evalStx stx mkExpr :=
    if let some ty := typeExpr? o α then
      evalOptionStx ty (evalStxWithTermInfo o) stx mkExpr
    else
      throwUnsupportedSyntax
  typeExpr? := typeExpr? o α |>.map (Expr.app (Expr.const ``Option [0]) ·)

instance (priority := low) {o} {α : Type} [EvalConfigItem o α] : EvalConfigItem o (List α) where
  evalExpr := evalListExpr (evalExpr o)
  evalStx stx mkExpr :=
    if let some ty := typeExpr? o α then
      evalListStx ty (evalStxWithTermInfo o) stx mkExpr
    else
      throwUnsupportedSyntax
  typeExpr? := typeExpr? o α |>.map (Expr.app (Expr.const ``List [0]) ·)

instance (priority := low) {o} : EvalConfigItem o DataValue where
  evalExpr := evalDataValueExpr
  evalStx := evalDataValueStx
  typeExpr? := none -- don't want to elaborate with an expected type, since numeric literals will fail

unsafe def evalMetaEval (α : Type) (typeName : Name) (e : Expr) : MetaM α := do
  unless (← getEnv).contains typeName do
    throwError m!"Error evaluating configuration: Environment does not yet contain type `{typeName}`"
  recordExtraModUseFromDecl (isMeta := true) typeName
  let eType ← inferType e
  unless ← isDefEqGuarded (mkConst typeName) eType do
    throwError "Type mismatch. Option value{inlineExpr e}{← mkHasTypeButIsExpectedMsg eType (mkConst typeName)}"
  try
    Meta.evalExpr' α typeName e (safety := .partial)
  catch ex =>
    throwError m!"Error evaluating{indentExpr e}\n\nException: {ex.toMessageData}"

/--
`derive_meta_eval_config_item_instance type` defines an `EvalConfigItem _ type` instance
that uses `Meta.evalExpr'` to evaluate expressions. This sort of item evaluator is a reasonable
backup strategy for infrequently used configuration options.

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
macro vis?:(visibility)? kind:attrKind tk:"derive_meta_eval_config_item_instance " type:ident : command => do
  let [(typeName, [])] ← Macro.resolveGlobalName type.getId
    | Macro.throwErrorAt type "Could not resolve `{type}`"
  let typeId := mkCIdentFrom type typeName (canonical := true)
  `($[$vis?:visibility]? $kind:attrKind instance%$tk (priority := low) (o : Name) : EvalConfigItem o @$typeId where
      evalExpr := unsafe evalMetaEval @$typeId $(quote typeName)
      evalStx := fun _ _ => throwUnsupportedSyntax
      typeExpr? := mkConst @$(quote typeName))

end BasicEvaluators

end EvalConfigItem

/--
Resolves `id` then makes sure that the constant `c` is a prefix, checks that the resolution is
of the form `Name.str c s` and then returns `s`.
-/
private def resolveAtomicNameForConstNamespace (c : Name) (id : Ident) : TermElabM String := do
  let n ← realizeGlobalConstNoOverloadWithInfo id
  if !n.hasMacroScopes && n.getPrefix == c then
    if let Name.str _ s := n then
      return s
  throwUnsupportedSyntax

/--
Resolves `id` as if it were a dotted identifier for `c`,
and then applies `resolveAtomicNameForConstNamespace`.
-/
private def resolveDottedAtomicNameForConstNamespace (c : Name) (id : Ident) : TermElabM String := do
  let n := id.getId
  if let Name.str Name.anonymous s := n then
    addCompletionInfo <| CompletionInfo.dotId id n {} (← mkConstWithLevelParams c)
    resolveAtomicNameForConstNamespace c (mkIdentFrom id (Name.str c s))
  else
    throwUnsupportedSyntax

/--
Wrapper to handle atomic identifiers and dotted identifiers.
-/
def EvalConfigItem.withSimpleEvalStx {α} (indTypeName : Name) (evalStxImpl : String → TermElabM (α × Expr)) : Term → Bool → TermElabM (α × Expr)
  | `($f:ident), _ => do
    let ctorName ← resolveAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName
  | `(.$f:ident), _ => do
    let ctorName ← resolveDottedAtomicNameForConstNamespace indTypeName f
    evalStxImpl ctorName
  | _, _ => throwUnsupportedSyntax

/--
Creates a decision tree to implement `match discr with $cases* | _ => onFail`.
-/
private meta partial def makeStringMatcher (discr : Ident) (cases : Array (String × Term)) (onFail : Term) :
    TermElabM Term := do
  let cases := Array.qsort cases (fun c c' => c.1 < c'.1)
  build 0 cases.size cases
where
  build (start stop : Nat) (cases : Array (String × Term)) : TermElabM Term := do
    if stop - start ≤ 5 then
      -- Switch to if/else chains once we get to a small number of options.
      cases[start:stop].foldrM (init := onFail) fun (s, body) res =>
        `(if $discr == $(quote s) then $body else $res)
    else
      let mid := (start + stop) / 2
      let (s, _) := cases[mid]!
      let low ← build start mid cases
      let high ← build mid stop cases
      `(if $discr < $(quote s) then $low else $high)

/--
Derives an `EvalConfigItem` instance for nonrecursive inductive types without universes, parameters, or indices.
Creates syntax matchers for only those constructors with zero fields (the common case for tactics).
-/
meta def deriveEvalConfigItem
    (vis? : Option (TSyntax `Lean.Parser.Command.visibility))
    (kind : TSyntax `Lean.Parser.Term.attrKind)
    (tk : Syntax) (indType : Ident) : CommandElabM Unit :=
  withFreshMacroScope <| withRef indType do
    let cmd ← liftTermElabM mkCmd
    withEnableInfoTree false <| withRef tk <| elabCommand cmd
where
  mkCmd : TermElabM Command := do
    let indTypeName ← realizeGlobalConstNoOverloadWithInfo indType
    let .inductInfo ival ← getConstInfo indTypeName
      | throwError "`{.ofConstName indTypeName}` is not an inductive type"
    unless ival.levelParams.isEmpty && ival.numParams == 0 && ival.numIndices == 0 do
      throwError "`{.ofConstName indTypeName}` must not have universe parameters, parameters, or indices"
    if ival.isRec then
      throwError "`{.ofConstName indTypeName}` must not be recursive"
    let option ← mkIdent <$> mkFreshUserName `o
    let mut exprAlts : TSyntaxArray ``Parser.Term.matchAlt := #[]
    let mut stxCases : Array (String × Term) := #[]
    -- let mut stxAlts : TSyntaxArray ``Parser.Term.matchAlt := #[]
    for ctorName in ival.ctors do
      let (xs, bis, _) ← forallMetaTelescopeReducing (← inferType (mkConst ctorName))
      unless bis.all (·.isExplicit) do
        throwError "Every field of `{.ofConstName ctorName}` must be explicit"
      let mut exprPatt ← ``(Expr.const $(quote ctorName) _)
      let mut exprResultArgs := #[]
      for i in [0:xs.size] do
        let x ← mkIdent <$> mkFreshUserName `x
        exprPatt ← ``(Expr.app $exprPatt $x)
        exprResultArgs := exprResultArgs.push <| ← `((← EvalConfigItem.evalExpr $option $x))
      exprAlts := exprAlts.push <| ← `(Parser.Term.matchAltExpr| | $exprPatt => return $(mkCIdent ctorName) $exprResultArgs*)
      if xs.size == 0 && !ctorName.hasMacroScopes && !isPrivateName ctorName && ctorName.getPrefix == indTypeName then
        if let .str _ ctorName' := ctorName then
          let val ← `(pure ($(mkCIdent ctorName), Expr.const $(quote ctorName) []))
          stxCases := stxCases.push (ctorName', val)
    let instName ← NameGen.mkBaseNameWithSuffix' "inst" #[] <| ← ``(EvalConfigItem _ $indType)
    let evalExprDef := mkIdent (instName ++ Name.mkSimple "auxEvalExpr")
    let evalStxDef := mkIdent (instName ++ Name.mkSimple "auxEvalStx")
    let stxMatcher ← makeStringMatcher (← `(ident| stx)) stxCases (← `(throwUnsupportedSyntax))
    `($[$vis?:visibility]? def $evalExprDef ($option : Name) : Expr → MetaM $indType :=
        EvalConfigItem.withWHNF fun
          $exprAlts:matchAlt*
          | _ => failure
      $[$vis?:visibility]? def $evalStxDef : Term → Bool → TermElabM ($indType × Expr) :=
        EvalConfigItem.withSimpleEvalStx $(quote indTypeName) fun stx => $stxMatcher
      $[$vis?:visibility]? $kind:attrKind instance%$tk $(mkIdentFrom tk instName (canonical := true)):ident {$option : Name} : EvalConfigItem $option $indType where
        evalExpr := $evalExprDef $option
        evalStx := $evalStxDef
        typeExpr? := some (Expr.const $(quote indTypeName) []))

/-!
`derive_eval_config_item_instance indType` derives an `EvalConfigItem _ indType` instance
for nonrecursive inductive types without universes, parameters, or indices.
Creates syntax matchers for only those constructors with zero fields (the common case for tactics).

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
elab vis?:(visibility)? kind:attrKind tk:"derive_eval_config_item_instance " indType:ident : command => do
  deriveEvalConfigItem vis? kind tk indType

derive_eval_config_item_instance ApplyNewGoals
derive_eval_config_item_instance EtaStructMode
derive_eval_config_item_instance TransparencyMode
derive_eval_config_item_instance Occurrences

structure ConfigItemView where
  ref : Syntax
  option : Ident
  optionName : Name := option.getId.eraseMacroScopes
  value : Term
  /-- Whether this was using `+`/`-`, to be able to give a better error message on type mismatch. -/
  bool : Bool := false

def ConfigItemView.getRootOptionName (item : ConfigItemView) : String :=
  if let .str _ s := item.optionName.getRoot then
    s
  else
    ""

def ConfigItemView.isAtomic (item : ConfigItemView) : Bool := item.optionName.isAtomic

/-- Drops the first component of the `optionName`. -/
def ConfigItemView.shift (item : ConfigItemView) : ConfigItemView :=
  let optionName' := item.optionName.replacePrefix item.optionName.getRoot Name.anonymous
  { item with
    optionName := optionName' }

def ConfigItemView.checkNotBool (item : ConfigItemView) : TermElabM Unit := do
  if item.bool then
    throwErrorAt item.ref m!"Option is not boolean-valued, so `({item.optionName} := ...)` syntax must be used"

/-- Interprets `item` as an option/value pair. -/
@[specialize]
def withConfigItemView {α} (item : TSyntax ``configItem) (k : ConfigItemView → TermElabM α) : TermElabM α := do
  match item with
  | `(configItem| ($option:ident := $value)) => k { ref := item, option, value }
  | `(configItem| +$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``true }
  | `(configItem| -$option) => k { ref := item, option, bool := true, value := mkCIdentFrom item ``false }
  | `(config| (config%$tk := $value)) => k { ref := item, option := mkCIdentFrom tk `config, optionName := `config, value := value }
  | _ => throwUnsupportedSyntax

/-- Interprets `items` as an array of option/value pairs, updating `x`. -/
@[specialize]
def foldConfigItemsM {α} (x : α) (items : TSyntaxArray ``configItem) (k : α → ConfigItemView → TermElabM α) : TermElabM α := do
  items.foldlM (init := x) (fun x item => withConfigItemView item (k x))

/--
Interface for tactic configuration updates.

The `configKey` parameter is used for recursive uses of `EvalSetConfigItem`.
It allows tactics to override the ways subitems are set for specific options.
For example, if `Lean.Meta.Simp.Config` has a `foo : Options` option that wants a special evaluator, then
adding an instance for `Lean.Meta.Simp.Config.foo` communicates the desire to override.
(Note: the instances are checked in the meta phase. Overriding instances does not work after a
tactic configuration evaluator is generated.)
-/
class EvalSetConfigItem (configKey : Name) (α : Type) where
  /--
  Evaluates setting the configuration item `item` in `config`.
  -/
  evalSet (c : α) (item : ConfigItemView) : TermElabM α

def ConfigItemView.throwInvalidOption {α} (item : ConfigItemView) (structName? : Option Name) : TermElabM α :=
  let forMsg := if let some structName := structName? then m!" for `{.ofConstName structName}`" else m!""
  throwErrorAt item.option "Invalid configuration option `{item.optionName}`{forMsg}"

def ConfigItemView.throwCannotSetOption {α} (item : ConfigItemView) : TermElabM α := do
  throwErrorAt item.option "Cannot set configuration option `{item.optionName}` using tactic configuration syntax."

def EvalSetConfigItem.evalSetAll (configKey : Name) {α} [EvalSetConfigItem configKey α]
    (config : α) (items : TSyntaxArray ``configItem)
    (logExceptions : Bool) : TermElabM α :=
  foldConfigItemsM config items fun config item => withRef item.ref do
    try
      EvalSetConfigItem.evalSet configKey config item
    catch ex =>
      if logExceptions then
        logException ex
        return config
      else
        throw ex

/--
Derives an `EvalSetConfigItem` instance for the structure.
Supports structures with no parameters or universes.
-/
meta def deriveEvalSetConfigItem
    (vis? : Option (TSyntax `Lean.Parser.Command.visibility))
    (kind : TSyntax `Lean.Parser.Term.attrKind)
    (tk : Syntax)
    (struct : Ident)
    (exceptFields : Array Name) :
    CommandElabM Unit :=
  withFreshMacroScope <| withRef struct do
    let cmd ← liftTermElabM mkCmd
    withEnableInfoTree false <| withRef tk <| elabCommand cmd
where
  hasEvalConfigItemInstance (optionKey : Name) (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalConfigItem #[toExpr optionKey, ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  hasEvalSetConfigItemInstance (configKey : Name) (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalSetConfigItem #[toExpr configKey, ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  mkCmd : TermElabM Command := do
    let structName ← realizeGlobalConstNoOverloadWithInfo struct
    let env ← getEnv
    unless isStructure env structName do
      throwError "`{.ofConstName structName}` is not a structure"
    let .inductInfo val ← getConstInfo structName
      | throwError "`{.ofConstName structName}` is not a structure"
    unless val.levelParams.isEmpty && val.numIndices == 0 && val.numParams == 0 do
      throwError "`{.ofConstName structName}` must not have parameters, indices, or universe parameters"
    let fields := getStructureFieldsFlattened env structName (includeSubobjectFields := false)
    withLocalDeclD `self (Expr.const structName []) fun self => do
      let mut cases : Array (String × Term) := #[]
      for field in fields do
        let Name.str .anonymous fieldStr := field | throwError "(Internal error) Invalid field name `{field}`"
        let optionKey := Name.str structName fieldStr
        let proj ← mkProjection self field
        let some projFn := proj.getAppFn.constName?
          | throwError "(Internal error) Invalid projection {inlineExpr proj}"
        let fieldTy ← inferType proj
        let mut defaultBody := true
        let mut body ← `(item.throwCannotSetOption)
        unless exceptFields.contains field do
          if ← hasEvalConfigItemInstance optionKey fieldTy then
            defaultBody := false
            body ← `(do
              let value ← EvalConfigItem.eval rootName $(quote optionKey) item.value
              return { config with $(mkIdent field):ident := value })
            unless ← withReducible <| isDefEq fieldTy (mkConst ``Bool) do
              body ← `(item.checkNotBool *> $body:term)
            body ← `(if item.isAtomic then $body else throwFieldNotStructure ())
          if ← hasEvalSetConfigItemInstance optionKey fieldTy then
            if defaultBody then
              body ← `(throwErrorAt item.option "Field `{$(quote fieldStr)}` cannot be set directly. You can use `({$(quote fieldStr)}.keyName := ...)` notation to set subfields.")
            defaultBody := false
            body ← `(if item.isAtomic then $body else do
              let value ← EvalSetConfigItem.evalSet $(quote optionKey) config.$(mkIdent field):ident item.shift
              return { config with $(mkIdent field):ident := value })
          if defaultBody then
            throwError (m!"Field `{fieldStr}` of type{inlineExpr fieldTy}is missing an `{.ofConstName ``EvalConfigItem}` or `{.ofConstName ``EvalSetConfigItem}` instance."
              ++ .note m!"The `derive_eval_config_item_instance` and `derive_eval_set_config_item_instance` commands can be used to attempt to derive such instances.")
        body ← `((do Term.addTermInfo' item.option (← mkConstWithLevelParams $(quote projFn))) *> $body)
        cases := cases.push (fieldStr, body)
      unless fields.contains `config do
        if ← hasEvalConfigItemInstance Name.anonymous (mkConst structName) then
          let cfgBody ←
            `(if item.isAtomic then
                EvalConfigItem.eval "config" Name.anonymous item.value
              else
                item.throwInvalidOption (some $(quote structName)))
          cases := cases.push ("config", cfgBody)
      let matcher ← makeStringMatcher (← `(ident|rootName)) cases (← `(invalidOption ()))
      let instName ← NameGen.mkBaseNameWithSuffix' "inst" #[] <| ← ``(EvalConfigItem _ $struct)
      let evalSetDef := mkIdent (instName ++ Name.mkSimple "auxEvalSet")
      `($[$vis?:visibility]? def $evalSetDef (config : $struct) (item : ConfigItemView) : TermElabM $struct := do
          addCompletionInfo (CompletionInfo.fieldId item.option item.optionName {} $(quote structName))
          withRef item.ref <|
            let rootName := item.getRootOptionName
            let invalidOption (_ : Unit) : TermElabM _ := item.throwInvalidOption (some $(quote structName))
            let throwFieldNotStructure (_ : Unit) : TermElabM _ := throwErrorAt item.option m!"Field `{rootName}` of structure `{.ofConstName $(quote structName)}` is not a structure."
            $matcher
        $[$vis?:visibility]? $kind:attrKind instance%$tk $(mkIdentFrom tk instName (canonical := true)):ident {configKey : Name} : EvalSetConfigItem configKey $struct where
          evalSet := $evalSetDef)

meta def exceptField := leading_parser " -" >> Parser.ident

/-!
`derive_eval_set_config_item_instance indType` derives an `EvalSetConfigItem _ indType` instance
for nonrecursive inductive types without universes, parameters, or indices.
Creates syntax matchers for only those constructors with zero fields (the common case for tactics).

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
elab vis?:(visibility)? kind:attrKind tk:"derive_eval_set_config_item_instance " indType:ident exceptFields:exceptField* : command => do
  let exceptFieldNames ← exceptFields.mapM fun (stx : TSyntax ``exceptField) =>
    match stx with
    | `(exceptField| -$field:ident) => pure field.getId.eraseMacroScopes
    | _ => throwUnsupportedSyntax
  deriveEvalSetConfigItem vis? kind tk indType exceptFieldNames

/--
Uses global option declarations with the prefix `optionPrefix` when setting `Options`.
-/
def EvalSetConfigItem.evalSetOptions (optionPrefix : Name) (opts : Options) (item : ConfigItemView) : TermElabM Options := do
  let optName := optionPrefix ++ item.optionName
  addCompletionInfo <| CompletionInfo.option (mkIdentFrom item.option optName (canonical := true))
  let decl ← IO.toEIO (fun (ex : IO.Error) => Exception.error item.option ex.toString) (getOptionDecl optName)
  pushInfoLeaf <| .ofOptionInfo { stx := item.option, optionName := optName, declName := decl.declName }
  let set (α : Type) [EvalConfigItem Name.anonymous α] [KVMap.Value α] : TermElabM Options := do
    let value : α ← EvalConfigItem.eval item.optionName.toString Name.anonymous item.value
    return opts.set optName value
  match decl.defValue with
  | .ofBool _   => set Bool
  | .ofNat _    => item.checkNotBool; set Nat
  | .ofInt _    => item.checkNotBool; set Int
  | .ofString _ => item.checkNotBool; set String
  | .ofName _   => item.checkNotBool; set Name
  | .ofSyntax _ => throwErrorAt item.option "Cannot set `Syntax` option `{optName}`"

/--
`derive_eval_set_config_options_field_instance type field optionPrefix` enables using `(field.foo := val)`
syntax to set options in the `Options` field `field` of `type`.
It uses global option names of the form `optionPrefix.foo` to validate the option values.

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
elab vis?:(visibility)? kind:attrKind tk:"derive_eval_set_config_options_field_instance " type:ident field:ident optionPrefix:ident : command =>
  withRef type do
    let fieldName := field.getId.eraseMacroScopes
    unless fieldName.isAtomic do
      throwErrorAt field "Expecting atomic field name"
    let optionPrefixName := optionPrefix.getId.eraseMacroScopes
    addCompletionInfo <| CompletionInfo.option optionPrefix
    let cmd ← liftTermElabM do
      let typeName ← realizeGlobalConstNoOverloadWithInfo type
      let env ← getEnv
      unless isStructure env typeName do
        throwError "`{.ofConstName typeName}` is not a structure"
      let some proj ← observing? do mkProjection (← mkFreshExprMVar (← mkConstWithLevelParams typeName)) fieldName
        | throwErrorAt field "Unknown field `{fieldName}` of structure `{.ofConstName typeName}`"
      Term.addTermInfo' field proj.getAppFn
      let configKey := typeName ++ fieldName
      `($[$vis?:visibility]? $kind:attrKind instance%$tk : EvalSetConfigItem $(quote configKey) Options where
          evalSet := EvalSetConfigItem.evalSetOptions $(quote optionPrefixName))
    withRef tk <| elabCommand cmd

elab tk:"disable_eval_set_config_item_field " type:ident field:ident : command =>
  withRef type do
    let fieldName := field.getId.eraseMacroScopes
    unless fieldName.isAtomic do
      throwErrorAt field "Expecting atomic field name"
    let cmd ← liftTermElabM do
      let typeName ← realizeGlobalConstNoOverloadWithInfo type
      let env ← getEnv
      unless isStructure env typeName do
        throwError "`{.ofConstName typeName}` is not a structure"
      let some proj ← observing? do mkProjection (← mkFreshExprMVar (← mkConstWithLevelParams typeName)) fieldName
        | throwErrorAt field "Unknown field `{fieldName}` of structure `{.ofConstName typeName}`"
      Term.addTermInfo' field proj.getAppFn
      let optionKey := typeName ++ fieldName
      `(private local instance%$tk {α} : EvalConfigItem $(quote optionKey) α where
          evalStx := fun _ _ => throwError "Cannot set field `{$(quote fieldName)}` using tactic option syntax."
          evalExpr := fun _ => failure
          typeExpr? := none)
    withRef tk <| elabCommand cmd

def runEvalSetConfigItems {α : Type} [EvalSetConfigItem Name.anonymous α]
    (initConfig : α) (items : Array (TSyntax `Lean.Parser.Tactic.configItem)) (logExceptions : Bool) : TermElabM α :=
  withLCtx {} {} <| withoutModifyingStateWithInfoAndMessages <| withSaveInfoContext do
    EvalSetConfigItem.evalSetAll .anonymous initConfig items logExceptions

def runEvalSetConfigItems' {α : Type} [EvalSetConfigItem Name.anonymous α]
    (initConfig : α) (optConfig : Syntax) (logExceptions : Bool) : TermElabM α :=
  withRef optConfig do
    let items := getConfigItems optConfig
    runEvalSetConfigItems initConfig items logExceptions

/-
`declare_config_elab elabName TypeName` declares a function
```
elabName (optConfig : Syntax) (initConfig : TypeName := {}) : TacticM TypeName
```
that elaborates a tactic configuration, while deriving an `EvalSetConfigItem` instance to support it.
The tactic configuration can be from `Lean.Parser.Tactic.optConfig` or `Lean.Parser.Tactic.config`,
and these can also be wrapped in null nodes (for example, from `(config)?`).

The elaborator responds to the current recovery state. When recovery is enabled, then invalid configuration
options are skipped, while logging errors. Otherwise invalid configurations result in exceptions.

For defining elaborators for commands, use `declare_command_config_elab`.
-/
macro (name := elabDeclareTacticConfig) doc?:(docComment)? tk:"declare_config_elab" elabName:ident type:ident exceptFields:exceptField* : command =>
  withRef (mkNullNode #[tk, elabName, type]) do
    `(private local derive_meta_eval_config_item_instance $type in
      private local derive_eval_set_config_item_instance $type $exceptFields* in
      $[$doc?:docComment]?
      def $elabName (optConfig : Lean.Syntax) (initConfig : $type := {}) : $(mkCIdent ``TacticM) $type := do
        let recover := (← read).recover
        Tactic.runTermElab do runEvalSetConfigItems' initConfig optConfig (logExceptions := recover))

open Linter.MissingDocs in
@[builtin_missing_docs_handler Elab.Tactic.elabDeclareTacticConfig]
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
macro (name := elabDeclareCommandConfig) doc?:(docComment)? tk:"declare_command_config_elab" elabName:ident type:ident : command =>
  withRef (mkNullNode #[tk, elabName, type]) do
  `(private local derive_meta_eval_config_item_instance $type
    derive_eval_set_config_item_instance $type
    $[$doc?:docComment]?
    def $elabName (optConfig : Lean.Syntax) (initConfig : $type := {}) (logExceptions : Bool := true) : $(mkCIdent ``CommandElabM) $type := do
      liftTermElabM <| runEvalSetConfigItems' initConfig optConfig (logExceptions := logExceptions))

open Linter.MissingDocs in
@[builtin_missing_docs_handler Elab.Tactic.elabDeclareCommandConfig]
private def checkCommandConfigElab : SimpleHandler := mkSimpleHandler "config elab"

section Legacy

/--
Expands a field access into full field access like `toB.toA.x`.
Returns that and the last projection function for `x` itself.
-/
private def expandFieldName (structName : Name) (fieldName : Name) : MetaM (Name × Name) := do
  let env ← getEnv
  unless isStructure env structName do throwError "`{.ofConstName structName}` is not a structure"
  let some baseStructName := findField? env structName fieldName
    | throwError "Structure `{.ofConstName structName}` does not have a field named `{fieldName}`"
  let some path := getPathToBaseStructure? env baseStructName structName
    | throwError "Internal error: Failed to access field `{fieldName}` in parent structure"
  let field := path.foldl (init := .anonymous) (fun acc s => Name.appendCore acc <| Name.mkSimple s.getString!) ++ fieldName
  let fieldInfo := (getFieldInfo? env baseStructName fieldName).get!
  return (field, fieldInfo.projFn)


/--
Given a hierarchical name `field`, returns the fully resolved field access, the base struct name, and the last projection function.
-/
private partial def expandField (structName : Name) (field : Name) : MetaM (Name × Name) := do
  match field with
  | .num .. | .anonymous => throwError m!"Invalid configuration field"
  | .str .anonymous fieldName => expandFieldName structName (Name.mkSimple fieldName)
  | .str field' fieldName =>
    let (field', projFn) ← expandField structName field'
    let notStructure {α} : MetaM α := throwError "Field `{field'}` of structure `{.ofConstName structName}` is not a structure"
    let .const structName' _ := (← getConstInfo projFn).type.getForallBody | notStructure
    unless isStructure (← getEnv) structName' do notStructure
    let (field'', projFn) ← expandFieldName structName' (Name.mkSimple fieldName)
    return (field' ++ field'', projFn)

/-- Elaborates a tactic configuration. -/
def elabConfig (recover : Bool) (structName : Name) (items : Array ConfigItemView) : TermElabM Expr :=
  withoutModifyingStateWithInfoAndMessages <| withLCtx {} {} <| withSaveInfoContext do
    let mkStructInst (source? : Option Term) (fields : TSyntaxArray ``Parser.Term.structInstField) : TermElabM Term :=
      match source? with
      | some source => `({$source with $fields* : $(mkCIdent structName)})
      | none        => `({$fields* : $(mkCIdent structName)})
    let mut source? : Option Term := none
    let mut seenFields : NameSet := {}
    let mut fields : TSyntaxArray ``Parser.Term.structInstField := #[]
    for item in items do
      try
        let option := item.option.getId.eraseMacroScopes
        if option == `config then
          unless fields.isEmpty do
            -- Flush fields. Even though these values will not be used, we still want to elaborate them.
            source? ← mkStructInst source? fields
            seenFields := {}
            fields := #[]
          let valSrc ← withRef item.value `(($item.value : $(mkCIdent structName)))
          if let some source := source? then
            source? ← withRef item.value `({$valSrc, $source with : $(mkCIdent structName)})
          else
            source? := valSrc
        else
          addCompletionInfo <| CompletionInfo.fieldId item.option option {} structName
          let (path, projFn) ← withRef item.option <| expandField structName option
          if item.bool then
            -- Verify that the type is `Bool`
            unless (← getConstInfo projFn).type.bindingBody! == .const ``Bool [] do
              throwErrorAt item.ref m!"Option is not boolean-valued, so `({option} := ...)` syntax must be used"
          let value ←
            match item.value with
            | `(by $seq:tacticSeq) =>
              -- Special case: `(opt := by tacs)` uses the `tacs` syntax itself
              withRef item.value <| `(Unhygienic.run `(tacticSeq| $seq))
            | value => pure value
          if seenFields.contains path then
            -- Flush fields. There is a duplicate, but we still want to elaborate both.
            source? ← mkStructInst source? fields
            seenFields := {}
            fields := #[]
          fields := fields.push <| ← `(Parser.Term.structInstField|
            $(mkCIdentFrom item.option path (canonical := true)):ident := $value)
          seenFields := seenFields.insert path
      catch ex =>
        if recover then
          logException ex
        else
          throw ex
    let stx : Term ← mkStructInst source? fields
    let e ← Term.withSynthesize <| Term.elabTermEnsuringType stx (mkConst structName)
    instantiateMVars e

private def mkConfigItemView (item : TSyntax ``configItem) : ConfigItemView :=
  match item with
  | `(configItem| ($option:ident := $value)) => { ref := item, option, value }
  | `(configItem| +$option) => { ref := item, option, bool := true, value := mkCIdentFrom item ``true }
  | `(configItem| -$option) => { ref := item, option, bool := true, value := mkCIdentFrom item ``false }
  | `(config| (config%$tk := $value)) => { ref := item, option := mkCIdentFrom tk `config, value := value }
  | _ => { ref := item, option := ⟨Syntax.missing⟩, value := ⟨Syntax.missing⟩ }

def mkConfigItemViews (c : TSyntaxArray ``configItem) : Array ConfigItemView :=
  c.map mkConfigItemView

section
-- We automatically disable the following option for `macro`s but the subsequent `def` both contains
-- a quotation and is called only by `macro`s, so we disable the option for it manually. Note that
-- we can't use `in` as it is parsed as a single command and so the option would not influence the
-- parser.
set_option internal.parseQuotWithCurrentStage false

private meta def mkConfigElaborator
    (doc? : Option (TSyntax ``Parser.Command.docComment)) (elabName type monadName : Ident)
    (adapt recover : Term) : MacroM (TSyntax `command) := do
  let empty ← withRef type `({ : $type})
  `(unsafe def evalUnsafe (e : Expr) : TermElabM $type :=
      Meta.evalExpr' (safety := .unsafe) $type ``$type e
    @[implemented_by evalUnsafe] opaque eval (e : Expr) : TermElabM $type
    $[$doc?:docComment]?
    def $elabName (optConfig : Syntax) : $monadName $type := $adapt do
      let recover := $recover
      let go : TermElabM $type := withRef optConfig do
        let items := mkConfigItemViews (getConfigItems optConfig)
        if items.isEmpty then
          return $empty
        unless (← getEnv).contains ``$type do
          throwError m!"Error evaluating configuration: Environment does not yet contain type {``$type}"
        recordExtraModUseFromDecl (isMeta := true) ``$type
        let c ← elabConfig recover ``$type items
        if c.hasSyntheticSorry then
          -- An error is already logged, return the default.
          return $empty
        if c.hasSorry then
          throwError m!"Configuration contains `sorry`"
        try
          let res ← eval c
          return res
        catch ex =>
          let msg := m!"Error evaluating configuration\n{indentD c}\n\nException: {ex.toMessageData}"
          if false then
            logError msg
            return $empty
          else
            throwError msg
      go)

end

/-!
`declare_config_elab_old elabName TypeName` declares a function `elabName : Syntax → TacticM TypeName`
that elaborates a tactic configuration.
The tactic configuration can be from `Lean.Parser.Tactic.optConfig` or `Lean.Parser.Tactic.config`,
and these can also be wrapped in null nodes (for example, from `(config)?`).

The elaborator responds to the current recovery state.

For defining elaborators for commands, use `declare_command_config_elab`.
-/
macro (name := configElabOld) doc?:(docComment)? "declare_config_elab_old" elabName:ident type:ident : command => do
  mkConfigElaborator doc? elabName type (mkCIdent ``TacticM) (mkCIdent ``id) (← `((← read).recover))

open Linter.MissingDocs in
@[builtin_missing_docs_handler Elab.Tactic.configElabOld]
private def checkConfigElab : SimpleHandler := mkSimpleHandler "config elab"

/-!
`declare_command_config_elab elabName TypeName` declares a function `elabName : Syntax → CommandElabM TypeName`
that elaborates a command configuration.
The configuration can be from `Lean.Parser.Tactic.optConfig` or `Lean.Parser.Tactic.config`,
and these can also be wrapped in null nodes (for example, from `(config)?`).

The elaborator has error recovery enabled.
-/
macro (name := commandConfigElabOld) doc?:(docComment)? "declare_command_config_elab_old" elabName:ident type:ident : command => do
  mkConfigElaborator doc? elabName type (mkCIdent ``CommandElabM) (mkCIdent ``liftTermElabM) (mkCIdent ``true)

open Linter.MissingDocs in
@[builtin_missing_docs_handler Elab.Tactic.commandConfigElabOld]
private def checkCommandConfigElabOld : SimpleHandler := mkSimpleHandler "config elab"

end Legacy

end Lean.Elab.Tactic
