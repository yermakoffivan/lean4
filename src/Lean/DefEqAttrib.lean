/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joachim Breitner
-/
module

prelude

public import Lean.Meta.Basic
import Lean.Meta.Check
import Lean.Meta.WHNF

public section

namespace Lean
open Meta

/--
We only add an automatic `[defeq]` if the equality holds by `rfl` at `implicit_reducible`
transparency.
-/
private def isDefEqCareful (e1 e2 : Expr) : MetaM Bool := do
  withOptions (smartUnfolding.set · false) <| do
    withTransparency .instances (isDefEq e1 e2)

def validateDefEqAttr (declName : Name) : AttrM Unit := do
  let info ← getConstVal declName
  MetaM.run' do
    withTransparency .all do -- we want to look through defs in `info.type` all the way to `Eq`
      forallTelescopeReducing info.type fun _ type => do
        let type ← whnf type
        -- NB: The warning wording should work both for explicit uses of `@[defeq]` as well as the implicit `:= rfl`.
        let some (_, lhs, rhs) := type.eq? |
          throwError m!"Not a definitional equality: the conclusion should be an equality, but is{inlineExpr type}"
        let ok ← isDefEqCareful lhs rhs
        unless ok do
          let explanation := MessageData.ofLazyM (es := #[lhs, rhs]) do
            let (lhs, rhs) ← addPPExplicitToExposeDiff lhs rhs
            let mut msg := m!"Not a definitional equality: the left-hand side{indentExpr lhs}\nis \
              not definitionally equal at implicit reducibility to the right-hand side{indentExpr rhs}"
            if (← getEnv).isExporting then
              let okPrivately ← withoutExporting <| isDefEqCareful lhs rhs
              if okPrivately then
                msg := msg ++ .note m!"This theorem is exported from the current module. \
                  This requires that all definitions that need to be unfolded to prove this \
                  theorem must be exposed."
            let okSemireducible ← withDefault <| isDefEq lhs rhs
            if okSemireducible then
              msg := msg ++ .note m!"This theorem is a definitional equality at default
                transparency. It may be a valid `[defeq]` theorem if some definitions were marked
                as an abbreviation or `@[implicit_reducible]`."
            pure msg
          throwError explanation

/--
Marks the theorem as a definitional equality.

The theorem must be an equality that holds by `rfl`. This allows `dsimp` to use this theorem
when rewriting.

A theorem with a definition that is (syntactically) `:= rfl` is implicitly marked `@[defeq]`.
To avoid this behavior, write `:= (rfl)` instead.

The attribute should be given before a `@[simp]` attribute to have effect.

When using the module system, an exported theorem can only be `@[defeq]` if all definitions that
need to be unfolded to prove the theorem are exported and exposed.
-/
@[builtin_doc]
builtin_initialize defeqAttr : TagAttribute ←
  registerTagAttribute `defeq "mark theorem as a definitional equality, to be used by `dsimp`"
    (validate := validateDefEqAttr) (applicationTime := .afterTypeChecking)
    (asyncMode := .async .mainEnv)

private partial def isRflProofCore (type : Expr) (proof : Expr) : CoreM Bool := do
  match type with
  | .forallE _ _ type _ =>
    if let .lam _ _ proof _ := proof then
      isRflProofCore type proof
    else
      return false
  | _ =>
    if type.isAppOfArity ``Eq 3 then
      if proof.isAppOfArity ``Eq.refl 2 || proof.isAppOfArity ``rfl 2 then
        return true
      else if proof.isAppOfArity ``Eq.symm 4 then
        -- `Eq.symm` of rfl proof is a rfl proof
        isRflProofCore type proof.appArg! -- small hack: we don't need to set the exact type
      else if proof.getAppFn.isConst then
        -- The application of a `defeq` theorem is a `rfl` proof
        return defeqAttr.hasTag (← getEnv) proof.getAppFn.constName!
      else
        return false
    else
      return false

/--
Infers the `[defeq]` attribute, when
* the proof is `rfl`
* it holds at `implicit_reducible` transparency (i.e. we’d accept `[defeq]` on it).
This is used for
* automatically generated theorems (equational theorems etc.)
* theorems that are syntactically `:= rfl`
-/
def inferDefEqAttr (declName : Name) : MetaM Unit := do
  withoutExporting do
    let info ← getConstInfo declName
    let some value := info.value? (allowOpaque := true) | return
    let .true ← isRflProofCore info.type value | return
    try
      withExporting (isExporting := !isPrivateName declName) do
        validateDefEqAttr declName -- sanity-check: would we have accepted `@[defeq]` on this?
    catch _ =>
      -- not allowed as a [defeq]
      return
    defeqAttr.setTag declName

/--
Marks the theorem as a definitional equality if it is valid. This is implicitly used by equational
theorems for recursive functions and on theorems that are syntactically `:= rfl`. Write `:= (rfl)`
to avoid this behavior.
-/
@[builtin_init, builtin_doc]
private def init :=
  registerBuiltinAttribute {
    name := `infer_defeq
    descr := "mark theorem as a definitional equality if possible, by checking if it is `rfl`"
    applicationTime := .afterTypeChecking
    add := fun declName stx kind => do
      Attribute.Builtin.ensureNoArgs stx
      unless kind == AttributeKind.global do throwAttrMustBeGlobal `infer_defeq kind
      (inferDefEqAttr declName).run'
  }
