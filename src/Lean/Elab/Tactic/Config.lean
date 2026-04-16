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

Use `Tactic.EvalConfigItem.eval` to evaluate using these instances.
-/
class EvalConfigItem (α : Type) where
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
def evalStxWithTermInfo {α : Type} [EvalConfigItem α] (stx : Term) (mkExpr : Bool) : TermElabM (α × Expr) := do
  let (v, e) ← evalStx stx mkExpr
  if mkExpr then
    Term.addTermInfo' stx e (expectedType? := EvalConfigItem.typeExpr? α)
  return (v, e)

/--
Evaluate `stx` using either `evalStx` or `evalExpr`.
-/
def eval (optionName : String) {α : Type} [EvalConfigItem α] (stx : Term) : TermElabM α :=
  withRef stx do
    orElse
      (do
        let (v, _) ← EvalConfigItem.evalStxWithTermInfo stx (← getInfoState).enabled
        return v)
      (do
        let ty? := EvalConfigItem.typeExpr? α
        let e ← Term.withSynthesize <| Term.elabTermEnsuringType stx ty?
        let e ← instantiateMVars e
        if e.hasSorry then
          if e.hasSyntheticSorry then
            -- An error has already been logged.
            throwAbortTerm
          throwError "Cannot evaluate configuration option `{optionName}`, contains `sorry`:{indentExpr e}"
        if (← Term.logUnassignedUsingErrorInfos (← getMVars e)) then throwAbortTerm
        try
          EvalConfigItem.evalExpr e
        catch ex =>
          let lmvars := collectLevelMVars {} e
          if (← Term.logUnassignedLevelMVarsUsingErrorInfos lmvars.result) then throwAbortTerm
          rethrowIfNotUnsupportedSyntax ex
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

instance (priority := low) : EvalConfigItem Bool where
  evalExpr := evalBoolExpr
  evalStx := evalBoolStx
  typeExpr? := Expr.const ``Bool []

instance (priority := low) : EvalConfigItem Nat where
  evalExpr := evalNatExpr
  evalStx := evalNatStx
  typeExpr? := Expr.const ``Nat []

instance (priority := low) : EvalConfigItem Int where
  evalExpr := evalIntExpr
  evalStx := evalIntStx
  typeExpr? := Expr.const ``Int []

instance (priority := low) : EvalConfigItem String where
  evalExpr := evalStringExpr
  evalStx := evalStringStx
  typeExpr? := Expr.const ``String []

instance (priority := low) : EvalConfigItem Name where
  evalExpr := evalNameExpr
  evalStx := evalNameStx
  typeExpr? := Expr.const ``Name []

instance (priority := low) {α : Type} [EvalConfigItem α] : EvalConfigItem (Option α) where
  evalExpr := evalOptionExpr evalExpr
  evalStx stx mkExpr :=
    if let some ty := typeExpr? α then
      evalOptionStx ty evalStxWithTermInfo stx mkExpr
    else
      throwUnsupportedSyntax
  typeExpr? := typeExpr? α |>.map (Expr.app (Expr.const ``Option [0]) ·)

instance (priority := low) {α : Type} [EvalConfigItem α] : EvalConfigItem (List α) where
  evalExpr := evalListExpr evalExpr
  evalStx stx mkExpr :=
    if let some ty := typeExpr? α then
      evalListStx ty evalStxWithTermInfo stx mkExpr
    else
      throwUnsupportedSyntax
  typeExpr? := typeExpr? α |>.map (Expr.app (Expr.const ``List [0]) ·)

instance (priority := low) : EvalConfigItem DataValue where
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
  `($[$vis?:visibility]? $kind:attrKind instance%$tk (priority := low) : EvalConfigItem @$typeId where
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
  withFreshMacroScope <| withRef tk do
    let cmd ← liftTermElabM mkCmd
    elabCommand cmd
where
  mkCmd : TermElabM Command := do
    let indTypeName ← realizeGlobalConstNoOverloadWithInfo indType
    let .inductInfo ival ← getConstInfo indTypeName
      | throwErrorAt indType "`{.ofConstName indTypeName}` is not an inductive type"
    unless ival.levelParams.isEmpty && ival.numParams == 0 && ival.numIndices == 0 do
      throwErrorAt indType "`{.ofConstName indTypeName}` must not have universe parameters, parameters, or indices"
    if ival.isRec then
      throwErrorAt indType "`{.ofConstName indTypeName}` must not be recursive"
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
        exprResultArgs := exprResultArgs.push <| ← `((← EvalConfigItem.evalExpr $x))
      exprAlts := exprAlts.push <| ← `(Parser.Term.matchAltExpr| | $exprPatt => return $(mkCIdent ctorName) $exprResultArgs*)
      if xs.size == 0 && !ctorName.hasMacroScopes && !isPrivateName ctorName && ctorName.getPrefix == indTypeName then
        if let .str _ ctorName' := ctorName then
          let val ← `(pure ($(mkCIdent ctorName), Expr.const $(quote ctorName) []))
          stxCases := stxCases.push (ctorName', val)
    let instName ← NameGen.mkBaseNameWithSuffix' "inst" #[] <| ← ``(EvalConfigItem _ $indType)
    let evalExprDef := mkIdent (instName ++ Name.mkSimple "auxEvalExpr")
    let evalStxDef := mkIdent (instName ++ Name.mkSimple "auxEvalStx")
    let stxMatcher ← makeStringMatcher (← `(ident| stx)) stxCases (← `(throwUnsupportedSyntax))
    `($[$vis?:visibility]? def $evalExprDef : Expr → MetaM $indType :=
        EvalConfigItem.withWHNF fun
          $exprAlts:matchAlt*
          | _ => failure
      $[$vis?:visibility]? def $evalStxDef : Term → Bool → TermElabM ($indType × Expr) :=
        EvalConfigItem.withSimpleEvalStx $(quote indTypeName) fun stx => $stxMatcher
      $[$vis?:visibility]? $kind:attrKind instance%$tk $(mkIdentFrom tk instName (canonical := true)):ident : EvalConfigItem $indType where
        evalExpr := $evalExprDef
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
class EvalSetConfigItem (α : Type) where
  /--
  Evaluates setting the configuration item `item` in `config`.
  -/
  evalSet (c : α) (item : ConfigItemView) : TermElabM α

def ConfigItemView.throwInvalidOption {α} (item : ConfigItemView) (structName? : Option Name) : TermElabM α :=
  let forMsg := if let some structName := structName? then m!" for `{.ofConstName structName}`" else m!""
  throwErrorAt item.option "Invalid configuration option `{item.optionName}`{forMsg}"

def ConfigItemView.throwCannotSetOption {α} (item : ConfigItemView) : TermElabM α := do
  throwErrorAt item.option "Cannot set configuration option `{item.optionName}` using tactic configuration syntax."

def EvalSetConfigItem.evalSetAll {α} [EvalSetConfigItem α]
    (config : α) (items : TSyntaxArray ``configItem)
    (logExceptions : Bool) : TermElabM α :=
  foldConfigItemsM config items fun config item => withRef item.ref do
    try
      EvalSetConfigItem.evalSet config item
    catch ex =>
      if logExceptions then
        logException ex
        return config
      else
        throw ex

structure ConfigItemHandlerView where
  ref : Syntax
  key : String
  atomic : Bool
  body : Term

/--
Derives an `EvalSetConfigItem` instance for the structure.
Supports structures with no parameters or universes.
-/
meta def deriveEvalSetConfigItem
    (vis? : Option (TSyntax `Lean.Parser.Command.visibility))
    (kind : TSyntax `Lean.Parser.Term.attrKind)
    (tk : Syntax)
    (struct : Ident)
    (exceptFields : Array Name)
    (handlers : Array ConfigItemHandlerView) :
    CommandElabM Unit :=
  withFreshMacroScope <| withRef tk do
    let cmd ← liftTermElabM mkCmd
    elabCommand cmd
where
  hasEvalConfigItemInstance (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalConfigItem #[ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  hasEvalSetConfigItemInstance (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalSetConfigItem #[ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  mkCmd : TermElabM Command := do
    let structName ← realizeGlobalConstNoOverloadWithInfo struct
    let env ← getEnv
    unless isStructure env structName do
      throwErrorAt struct "`{.ofConstName structName}` is not a structure"
    let .inductInfo val ← getConstInfo structName
      | throwErrorAt struct "`{.ofConstName structName}` is not a structure"
    unless val.levelParams.isEmpty && val.numIndices == 0 && val.numParams == 0 do
      throwErrorAt struct "`{.ofConstName structName}` must not have parameters, indices, or universe parameters"
    let fields := getStructureFieldsFlattened env structName (includeSubobjectFields := false)
    withLocalDeclD `self (Expr.const structName []) fun self => do
      let mut handled : Std.HashSet String := {}
      let mut cases : Array (String × Term) := #[]
      for handler in handlers do
        if handled.contains handler.key then
          throwErrorAt handler.ref "Duplicate handler name"
        handled := handled.insert handler.key
        let mut body ← `(($handler.body : $struct → ConfigItemView → TermElabM $struct) config item)
        if handler.atomic then
          body ← `(if item.isAtomic then $body else throwErrorAt item.option "Option `{$(quote handler.key)}` has no sub-options.")
        cases := cases.push (handler.key, body)
      for field in fields do
        let Name.str .anonymous fieldStr := field | throwError "(Internal error) Invalid field name `{field}`"
        if handled.contains fieldStr then
          continue
        handled := handled.insert fieldStr
        let proj ← mkProjection self field
        let some projFn := proj.getAppFn.constName?
          | throwError "(Internal error) Invalid projection {inlineExpr proj}"
        let fieldTy ← inferType proj
        let mut defaultBody := true
        let mut body ← `(item.throwCannotSetOption)
        unless exceptFields.contains field do
          if ← hasEvalConfigItemInstance fieldTy then
            defaultBody := false
            body ← `(do
              let value ← EvalConfigItem.eval rootName item.value
              return { config with $(mkIdent field):ident := value })
            unless ← withReducible <| isDefEq fieldTy (mkConst ``Bool) do
              body ← `(item.checkNotBool *> $body:term)
            body ← `(if item.isAtomic then $body else throwFieldNotStructure ())
          if ← hasEvalSetConfigItemInstance fieldTy then
            if defaultBody then
              body ← `(throwErrorAt item.option "Field `{$(quote fieldStr)}` cannot be set directly. You can use `({$(quote fieldStr)}.keyName := ...)` notation to set subfields.")
            defaultBody := false
            body ← `(if item.isAtomic then $body else do
              let value ← EvalSetConfigItem.evalSet config.$(mkIdent field):ident item.shift
              return { config with $(mkIdent field):ident := value })
          if defaultBody then
            throwErrorAt struct (m!"Field `{fieldStr}` of type{inlineExpr fieldTy}is missing an `{.ofConstName ``EvalConfigItem}` or `{.ofConstName ``EvalSetConfigItem}` instance."
              ++ .note m!"The `derive_eval_config_item_instance` and `derive_eval_set_config_item_instance` commands can be used to attempt to derive such instances.")
        body ← `((do Term.addTermInfo' item.option (← mkConstWithLevelParams $(quote projFn))) *> $body)
        cases := cases.push (fieldStr, body)
      unless handled.contains "config" do
        if ← hasEvalConfigItemInstance (mkConst structName) then
          let cfgBody ←
            `(if item.isAtomic then
                EvalConfigItem.eval "config" item.value
              else
                invalidOption ())
          cases := cases.push ("config", cfgBody)
      let matcher ← makeStringMatcher (← `(ident|rootName)) cases (← `(invalidOption ()))
      let instName ← NameGen.mkBaseNameWithSuffix' "inst" #[] <| ← ``(EvalConfigItem _ $struct)
      let evalSetDef := mkIdent (instName ++ Name.mkSimple "auxEvalSet")
      `($[$vis?:visibility]? def $evalSetDef (config : $struct) (item : ConfigItemView) : TermElabM $struct := do
          addCompletionInfo (CompletionInfo.fieldId item.option item.optionName {} $(quote structName))
          withRef item.ref <|
            let rootName := item.getRootOptionName
            let invalidOption (_ : Unit) : TermElabM $struct := item.throwInvalidOption (some $(quote structName))
            let throwFieldNotStructure (_ : Unit) : TermElabM $struct := throwErrorAt item.option m!"Field `{rootName}` of structure `{.ofConstName $(quote structName)}` has no sub-options."
            $matcher
        $[$vis?:visibility]? $kind:attrKind instance%$tk $(mkIdentFrom tk instName (canonical := true)):ident : EvalSetConfigItem $struct where
          evalSet := $evalSetDef)

open Parser in
meta def exceptFields := leading_parser
  atomic (" (" >> nonReservedSymbol "except") >> " := " >> sepBy1 ident ", " >> ")"

open Parser in
meta def extraHandler := leading_parser
  atomic (" (" >> nonReservedSymbol "option") >> optional "*" >> ppSpace >> ident >> " := " >> termParser >> ")"

/-!
`derive_eval_set_config_item_instance indType` derives an `EvalSetConfigItem _ indType` instance
for nonrecursive inductive types without universes, parameters, or indices.
Creates syntax matchers for only those constructors with zero fields (the common case for tactics).

The syntax supports `public`/`private` modifiers as well as `scoped`/`local`.
-/
elab vis?:(visibility)? kind:attrKind tk:"derive_eval_set_config_item_instance " indType:ident
    exceptFields?:(exceptFields)? handlers:(extraHandler)* : command => do
  let exceptFieldNames ←
    if let some except := exceptFields? then
      match except with
      | `(exceptFields| (except := $[$fields],*)) =>
        pure <| fields.map (·.getId.eraseMacroScopes)
      | _ => throwUnsupportedSyntax
    else
      pure #[]
  let handlers : Array ConfigItemHandlerView ← handlers.mapM fun
    | `(extraHandler| (option$[*%$star]? $opt:ident := $body)) =>
      let optName := opt.getId.eraseMacroScopes
      if let Name.str .anonymous s := optName then
        pure { ref := opt.raw, key := s, body := body, atomic := star.isNone }
      else
        throwErrorAt opt "Option handlers must be for atomic strings"
    | _ => throwUnsupportedSyntax
  deriveEvalSetConfigItem vis? kind tk indType exceptFieldNames handlers

/--
Uses global option declarations with the prefix `optionPrefix` when setting `Options`.
-/
def EvalSetConfigItem.evalSetOptions (optionPrefix : Name) (opts : Options) (item : ConfigItemView) : TermElabM Options := do
  let optName := optionPrefix ++ item.optionName
  addCompletionInfo <| CompletionInfo.option (mkIdentFrom item.option optName (canonical := true))
  let decl ← IO.toEIO (fun (ex : IO.Error) => Exception.error item.option ex.toString) (getOptionDecl optName)
  pushInfoLeaf <| .ofOptionInfo { stx := item.option, optionName := optName, declName := decl.declName }
  let set (α : Type) [EvalConfigItem α] [KVMap.Value α] : TermElabM Options := do
    let value : α ← EvalConfigItem.eval item.optionName.toString item.value
    return opts.set optName value
  match decl.defValue with
  | .ofBool _   => set Bool
  | .ofNat _    => item.checkNotBool; set Nat
  | .ofInt _    => item.checkNotBool; set Int
  | .ofString _ => item.checkNotBool; set String
  | .ofName _   => item.checkNotBool; set Name
  | .ofSyntax _ => throwErrorAt item.option "Cannot set `Syntax` option `{optName}`"

def runEvalSetConfigItems {α : Type} [EvalSetConfigItem α]
    (initConfig : α) (items : Array (TSyntax `Lean.Parser.Tactic.configItem)) (logExceptions : Bool) : TermElabM α :=
  withLCtx {} {} <| withoutModifyingStateWithInfoAndMessages <| withSaveInfoContext do
    EvalSetConfigItem.evalSetAll initConfig items logExceptions

def runEvalSetConfigItems' {α : Type} [EvalSetConfigItem α]
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
macro (name := elabDeclareTacticConfig) doc?:(docComment)? tk:"declare_config_elab" elabName:ident type:ident
    exceptFields?:(exceptFields)? handlers:(extraHandler)* : command =>
  withRef (mkNullNode #[tk, elabName, type]) do
    `(private local derive_meta_eval_config_item_instance $type in
      private local derive_eval_set_config_item_instance $type $[$exceptFields?]? $[$handlers]* in
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

end Lean.Elab.Tactic
