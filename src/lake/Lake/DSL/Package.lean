/-
Copyright (c) 2021 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
module

prelude
public import Lake.DSL.Syntax
import Lake.Config.Package  -- shake: keep (builtin macro output dependency)
import Lake.DSL.Extensions

open Lean Parser Elab Command

namespace Lake.DSL

/-! # Package Declarations
DSL definitions for packages and hooks.
-/

@[builtin_command_elab packageCommand]
def elabPackageCommand : CommandElab := fun stx => do
  let `(packageCommand|$(doc?)? $(attrs?)? package%$kw $[$nameStx?]? $cfg) := stx
    | throwErrorAt stx "ill-formed package declaration"
  withRef kw do
  let configId : Ident ← `(pkgConfig)
  let id ← mkConfigDeclIdent nameStx?
  let origName := Name.quoteFrom id id.getId
  let ⟨wsIdx, name⟩ := nameExt.getState (← getEnv)
  let baseName := match name with
    | .anonymous => origName
    | name => Name.quoteFrom id name
  let wsIdx := quote wsIdx
  let keyName := Syntax.mkCApp ``Name.num #[baseName, wsIdx]
  let ty := Syntax.mkCApp ``PackageConfig #[keyName, origName]
  elabConfig ``PackageConfig configId ty cfg
  let attr ← `(Term.attrInstance| «package»)
  let attrs := #[attr] ++ expandAttrs attrs?
  let id := mkIdentFrom id packageDeclName
  let decl ← `({baseName := $baseName, origName := $origName, keyName := $keyName, config := $configId})
  let cmd ← `($[$doc?]? @[$attrs,*] abbrev $id : PackageDecl := $decl)
  withMacroExpansion stx cmd <| elabCommand cmd
  let nameId := mkIdentFrom id <| packageDeclName.str "name"
  elabCommand <| ← `(
    @[deprecated "Use `__name__` instead." (since := "2025-09-18")]
    abbrev $nameId := __name__
  )

@[builtin_macro postUpdateDecl]
def expandPostUpdateDecl : Macro := fun stx => do
  match stx with
  | `($[$doc?]? $[$attrs?]? post_update%$kw $[$pkg?]? $dv:declValDo) =>
    -- declValDo := ppSpace Term.do (Term.whereDecls)?
    -- The `do` term is taken as a whole so that this arm does not depend on its child layout,
    -- which differs between stage0 and the current parser.
    let defn : Term := ⟨dv.raw[0]⟩
    let wds? : Option (TSyntax ``Term.whereDecls) := dv.raw[1].getOptional?.map (⟨·⟩)
    `($[$doc?]? $[$attrs?]? post_update%$kw $[$pkg?]? := $defn $[$wds?:whereDecls]?)
  | `($[$doc?]? $[$attrs?]? post_update%$kw $[$pkg?]? := $defn $[$wds?:whereDecls]?) => withRef kw do
    let pkg ← expandOptSimpleBinder pkg?
    let attr ← `(Term.attrInstance| «post_update»)
    let attrs := #[attr] ++ expandAttrs attrs?
    `($[$doc?]? @[$attrs,*] def postUpdateHook : PostUpdateHookDecl :=
      {pkg := __name__, fn := fun $pkg => $defn} $[$wds?:whereDecls]?)
  | stx => Macro.throwErrorAt stx "ill-formed post_update declaration"
