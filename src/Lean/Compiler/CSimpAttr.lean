/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.ScopedEnvExtension
public import Lean.Util.Recognizers

public section

namespace Lean.Compiler
namespace CSimp

structure Entry where
  fromDeclName : Name
  toDeclName   : Name
  deriving Inhabited

abbrev State := PHashMap Name Name

builtin_initialize ext : SimplePersistentEnvExtension Entry State ←
  registerSimplePersistentEnvExtension {
    addEntryFn s e := s.insert e.fromDeclName e.toDeclName
    addImportedFn _ := default
    toArrayFn es := es.toArray.qsort (·.fromDeclName.quickLt ·.fromDeclName)
  }

private def isConstantReplacement? (declName : Name) : CoreM (Option Entry) := do
  let info ← getConstVal declName
  match info.type.eq? with
  | some (_, Expr.const fromDeclName us, Expr.const toDeclName vs) =>
    let set := Std.HashSet.ofList us
    if set.size == us.length && set.all Level.isParam && us == vs then
      return some { fromDeclName, toDeclName }
    else
      return none
  | _ => return none

def add (declName : Name) : CoreM Unit := do
  if let some entry ← isConstantReplacement? declName then
    modifyEnv (ext.addEntry · entry)
  else
    throwError "invalid 'csimp' theorem, only constant replacement theorems (e.g., `@f = @g`) are currently supported."

/--
Tags compiler simplification theorems, which allow one value to be replaced by another equal value
in compiled code. This is typically used to replace a slow function whose definition is convenient
in proofs with a faster equivalent or to make noncomputable functions computable. In particular,
many operations on lists and arrays are replaced by tail-recursive equivalents.

A compiler simplification theorem cannot take any parameters and must prove a statement `@f = @g`
where `f` and `g` may be arbitrary constants. In functions defined after the theorem tagged
`@[csimp]`, any occurrence of `f` is replaced with `g` in compiled code, but not in the type
theory. In this sense, `@[csimp]` is a safer alternative to `@[implemented_by]`.

However it is still possible to register unsound `@[csimp]` lemmas by using `unsafe` or unsound
axioms (like `sorryAx`).
-/
@[builtin_init, builtin_doc]
private def initFn :=
  registerBuiltinAttribute {
    name  := `csimp
    descr := "simplification theorem for the compiler"
    add   := fun declName stx attrKind => do
      Attribute.Builtin.ensureNoArgs stx
      ensureAttrDeclIsPublic `csimp declName attrKind
      if attrKind != .global then
        throwAttrMustBeGlobal `csimp attrKind
      discard <| add declName
  }

def replaceConstants (env : Environment) (e : Expr) : Expr :=
  e.replace fun e =>
    if e.isConst then
      let declNameNew? := match env.getModuleIdxFor? e.constName! with
        | some modIdx => ext.getModuleEntries env modIdx |>.binSearch { fromDeclName := e.constName!, toDeclName := .anonymous } (·.fromDeclName.quickLt ·.fromDeclName) |>.map (·.toDeclName)
        | none => ext.getState env |>.find? e.constName!
      match declNameNew? with
      | some declNameNew => some (mkConst declNameNew e.constLevels!)
      | none => none
    else
      none

end CSimp

end Lean.Compiler
