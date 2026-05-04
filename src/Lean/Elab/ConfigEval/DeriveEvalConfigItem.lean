/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.DeriveEvalTerm
public import Lean.Elab.ConfigEval.DeriveEvalExpr
import Lean.Elab.ConfigEval.Util
public import Lean.Elab.ConfigEval.Basic

public section

namespace Lean.Elab.ConfigEval

open Meta Term Command


structure EvalConfigItemHandler where
  /-- Ref for the key. -/
  ref : Syntax
  /-- The key that's handled. -/
  key : Name
  /-- If true, only accepts an exact match of the key. -/
  exact : Bool
  /-- A function `fun cfg item => ...`. -/
  body : Term
  /-- Constant to use for terminfo -/
  projFn? : Option Name := none

structure EvalConfigItemView where
  exceptFields : Array Name
  handlers : Array EvalConfigItemHandler

private structure HandlerTrie where
  exact? : Option EvalConfigItemHandler := none
  children : Array (String × HandlerTrie) := #[]
  nonexact? : Option EvalConfigItemHandler := none
  /-- Constant to use for terminfo -/
  projFn? : Option Name := none
  deriving Inhabited

private partial def HandlerTrie.find? (trie : HandlerTrie) (key : Name) (exact : Bool := true) : Option (Name × EvalConfigItemHandler) :=
  let root := key.getRoot
  if root.isAnonymous then
    ((.anonymous, ·)) <$> ((guard exact *> trie.exact?) <|> trie.nonexact?)
  else
    let s := root.getString!
    let res? :=
      if let some (_, child) := trie.children.find? (·.1 == s) then
        if let some (key', h) := child.find? (key.replacePrefix root .anonymous) then
          (root.appendCore key', h)
        else
          none
      else
        none
    res? <|> ((key, ·) <$> trie.nonexact?)

private partial def HandlerTrie.insert (trie : HandlerTrie) (h : EvalConfigItemHandler) :
    HandlerTrie :=
  let root := h.key.getRoot
  if root.isAnonymous then
    if h.exact then
      { trie with exact? := some h, projFn? := trie.projFn? <|> h.projFn? }
    else
      { trie with nonexact? := some h, projFn? := trie.projFn? <|> h.projFn? }
  else
    let s := root.getString!
    let key' := h.key.replacePrefix root .anonymous
    if let some idx := trie.children.findIdx? (·.1 == s) then
      let (_, child) := trie.children[idx]!
      let child := child.insert { h with key := key' }
      { trie with children := trie.children.set! idx (s, child)}
    else
      let child := HandlerTrie.insert {} { h with key := key' }
      { trie with children := trie.children.push (s, child)}

/--
Makes an `EvalConfigItem` for the structure.
Supports structures with no parameters or universes.
-/
partial def defEvalConfigItem
    (vis? : Option (TSyntax `Lean.Parser.Command.visibility))
    (tk : Syntax)
    (struct : Ident)
    (fnIdent : Ident)
    (extraBinders : TSyntaxArray ``Parser.Term.bracketedBinder)
    (view : EvalConfigItemView) :
    CommandElabM Unit := do
  let cmd ← liftTermElabM do withRef tk mkCmd
  elabCommand cmd
where
  hasEvalTermInstance (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalTerm #[ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  tryEnsureEvalTermInstance (ty : Expr) : MetaM Bool := do
    if ← hasEvalTermInstance ty then
      return true
    else
      Option.isSome <$> observing? do
        liftCommandElabM <| ensureEvalTerm vis? (← `(attrKind| local )) tk struct ty
        resetSynthInstanceCache
        guard <| ← hasEvalTermInstance ty
  hasEvalExprInstance (ty : Expr) : MetaM Bool :=
    try
      let cls ← mkAppM ``EvalExpr #[ty]
      return (← synthInstance? cls).isSome
    catch _ =>
      return false
  tryEnsureEvalExprInstance (ty : Expr) : MetaM Bool := do
    if ← hasEvalExprInstance ty then
      return true
    else
      Option.isSome <$> observing? do
        liftCommandElabM <| ensureEvalExpr vis? (← `(attrKind| local )) tk struct ty
        resetSynthInstanceCache
        guard <| ← hasEvalExprInstance ty
  checkStruct (structName : Name) : MetaM Unit := do
    let env ← getEnv
    unless isStructure env structName do
      throwErrorAt struct "`{.ofConstName structName}` is not a structure"
    let .inductInfo val ← getConstInfo structName
      | throwErrorAt struct "`{.ofConstName structName}` is not a structure"
    unless val.levelParams.isEmpty && val.numIndices == 0 && val.numParams == 0 do
      throwErrorAt struct "`{.ofConstName structName}` must not have parameters, indices, or universe parameters"
  visitStruct (trie : HandlerTrie) (keyPrefix : Name) (structName : Name) : TermElabM HandlerTrie := do
    checkStruct structName
    let fields := getStructureFieldsFlattened (← getEnv) structName (includeSubobjectFields := false)
    withLocalDeclD `self (Expr.const structName []) fun self => do
      let mut trie := trie
      for field in fields do
        if view.exceptFields.contains field then
          continue
        let key := keyPrefix ++ field
        let mut reportErrorForKey := true
        -- let mut body ← `(item.throwCannotSetOption)
        let proj ← mkProjection self field
        let some projFn := proj.getAppFn.constName?
          | throwError "(Internal error) Invalid projection {inlineExpr proj}"
        let fieldTy ← inferType proj
        let exactKeyExists := if let some (_, h) := trie.find? field then h.exact else false
        if !exactKeyExists then
          let hasEvalTerm ← tryEnsureEvalTermInstance fieldTy
          let hasEvalExpr ← tryEnsureEvalExprInstance fieldTy
          trace[Elab.ConfigEval] "field `{.ofConstName projFn}`, hasEvalTerm: {hasEvalTerm}, hasEvalExpr: {hasEvalExpr}"
          if hasEvalTerm || hasEvalExpr then
            reportErrorForKey := false
            let eval ←
              match hasEvalTerm, hasEvalExpr with
              | true, true  => `(evalTermOrExprWithElab item.value)
              | true, false => `(evalExprWithElab item.value)
              | _,    _     => `(evalTerm item.value)
            let mut body ← `(do
              let value ← $eval:term
              return { config with $(mkIdent key):ident := value })
            unless ← withReducible <| isDefEq fieldTy (mkConst ``Bool) do
              body ← `(checkNotBool () >>= fun _ => $body:term)
            trie := trie.insert { ref := struct, key, exact := true, body, projFn? := projFn }
        let nonexactKeyExists := if let some (_, h) := trie.find? field (exact := false) then !h.exact else false
        if !nonexactKeyExists then
          if let some structName' := (← whnfR fieldTy).constName? then
            if (← observing? (checkStruct structName')).isSome then
              reportErrorForKey := false
              trie ← visitStruct trie key structName'
        if reportErrorForKey then
          throwErrorAt struct (m!"Field `{field}` of type{inlineExpr fieldTy}is missing an `{.ofConstName ``EvalTerm}` or `{.ofConstName ``EvalExpr}` instance."
              ++ .note m!"The `ensure_eval_term_instance` and `ensure_eval_expr_instance` commands can be used to attempt to derive such instances.")
      return trie
  assemble (trie : HandlerTrie) (onFail : Term) : TermElabM Term := do
    let { exact?, children, nonexact?, projFn? } := trie
    let mut onFail' := onFail
    let mut body := onFail
    let doNonexact := mkIdent (← Core.mkFreshUserName `doNonexact)
    if let some _ := nonexact? then
      onFail' ← `($doNonexact ())
      body := onFail'
    unless children.isEmpty do
      let children ← children.mapM fun (s, trie') => return (s, ← assemble trie' onFail')
      body ← makeStringMatcher (← `(ident|rootName)) children onFail'
      body ← `(
        let rootName := item.getRootOptionName
        let (itemRoot, item) := item.shift
        withRef itemRoot $body
      )
    if let some h := nonexact? then
      body ← `(have $doNonexact (_ : Unit) := if item.isAnonymous then $onFail else withRef item.option $h.body
               $body)
    if let some h := exact? then
      let mut h' := h.body
      body ← `(if item.isAnonymous then $h' else $body)
    if let some projFn := projFn? then
      body ← `(addConstInfo' itemRoot $(quote projFn) >>= fun _ => $body)
    return body
  mkCmd : TermElabM Command := do
    let structName ← realizeGlobalConstNoOverloadWithInfo struct
    let mut trie : HandlerTrie := {}
    for handler in view.handlers do
      if handler.key.isAnonymous then
        throwErrorAt handler.ref "Unexpected empty key for handler"
      if let some (key, h) := trie.find? handler.key (exact := handler.exact) then
        if h.exact == handler.exact then
          throwErrorAt handler.ref "Duplicate handler for key `{key}`"
      let body ← `(($handler.body : $struct → ConfigItem → TermElabM $struct) config item)
      trie := trie.insert { handler with body }
    trie ← visitStruct trie .anonymous structName
    unless view.exceptFields.contains `config || (trie.find? `config).isSome do
      if ← tryEnsureEvalExprInstance (mkConst structName) then
        let cfgBody ← `(evalExprWithElab item.value)
        trie := trie.insert { ref := tk, key := `config, exact := true, body := cfgBody }
    let body ← assemble trie (← `(invalidOption ()))
    `($[$vis?:visibility]? def $fnIdent $[$extraBinders]* : EvalConfigItem $struct where
        set (config : $struct) (item : ConfigItem) : TermElabM $struct := do
          addCompletionInfo (CompletionInfo.fieldId item.option item.optionName {} $(quote structName))
          withRef item.ref <|
            have invalidOption (_ : Unit) : TermElabM $struct := item.throwInvalidOption (some $(quote structName))
            have checkNotBool (_ : Unit) : TermElabM Unit := item.checkNotBool
            have addConstInfo' (ref : Syntax) (projFn : Name) : TermElabM Unit := do
              if (← getInfoState).enabled then addConstInfo ref projFn
            $body)

end Lean.Elab.ConfigEval
