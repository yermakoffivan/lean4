/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Elab.Term

public section

namespace Lean.Elab.Term

/--
Auxiliary inductive datatype for combining unelaborated syntax
and already elaborated expressions. It is used to elaborate applications.
-/
inductive Arg where
  | stx  (val : Syntax)
  | expr (val : Expr)
  deriving Inhabited

instance : ToString Arg where
  toString
    | .stx stx => toString stx
    | .expr e  => toString e

instance : ToMessageData Arg where
  toMessageData
    | .stx stx => toMessageData stx
    | .expr e  => toMessageData e

inductive NamedArgParam where
  /-- Named argument using a parameter name. -/
  | name (ref : Syntax) (n : Name)
  /-- Named argument using a parameter index, 0-indexed. -/
  | index (ref : Syntax) (explicit : Bool) (idx : Nat)
  deriving Inhabited

def NamedArgParam.ref : NamedArgParam → Syntax
  | .name ref ..  => ref
  | .index ref .. => ref

def NamedArgParam.eqv : NamedArgParam → NamedArgParam → Bool
  | .name _ n, .name _ n' => n == n'
  | .index _ explicit idx, .index _ explicit' idx' => explicit == explicit' && idx == idx'
  | _, _ => false

instance : ToString NamedArgParam where
  toString
    | .name _ n => toString n
    | .index _ false idx => toString (idx + 1)
    | .index _ true idx => "@" ++ toString (idx + 1)

/-- Named arguments created using the notation `(x := val)`. -/
structure NamedArg where
  ref  : Syntax := Syntax.missing
  param : NamedArgParam
  val  : Arg
  /-- Overrides the binder infos for the first `numImplicitParams` parameters
  to make them be implicit if they were explicit.
  This is used for expanding projection notation. The primary motivation for this field
  is that class projections may feature explicit structure parameters.
  See the note at `Lean.Elab.Term.ElabAppArgs.processExplicitArg`. -/
  numImplicitParams : Nat := 0
  deriving Inhabited

instance : ToString NamedArg where
  toString s := s!"({s.param} := {s.val})"

instance : ToMessageData NamedArg where
  toMessageData s := m!"({toString s.param} := {s.val})"

/--
  Add a new named argument to `namedArgs`, and throw an error if it already contains a named argument
  with the same name. -/
def addNamedArg (namedArgs : Array NamedArg) (namedArg : NamedArg) : MetaM (Array NamedArg) := do
  if namedArgs.any (namedArg.param.eqv ·.param) then
    throwErrorAt namedArg.param.ref "Argument `{toString namedArg.param}` was already set"
  return namedArgs.push namedArg

partial def expandArgs (args : Array Syntax) : MetaM (Array NamedArg × Array Arg × Bool) := do
  let (args, ellipsis) :=
    if args.isEmpty then
      (args, false)
    else if args.back!.isOfKind ``Lean.Parser.Term.ellipsis then
      (args.pop, true)
    else
      (args, false)
  let (namedArgs, args) ← args.foldlM (init := (#[], #[])) fun (namedArgs, args) stx => do
    if stx.getKind == ``Lean.Parser.Term.namedArgument then
      -- def namedArgument := leading_parser "(" >> (ident <|> namedArgumentIndexParam) >> " := " >> termParser >> ")"
      -- def namedArgumentIndexParam := leading_parser optional "@" >> num
      let val := stx[3]
      if stx[1].isOfKind ``Lean.Parser.Term.namedArgumentIndexParam then
        let explicit := stx[1][0].matchesNull 1
        let idx := stx[1][1].toNat
        if idx == 0 then
          throwErrorAt stx[1][1] "argument indices must be positive"
        let namedArgs ← addNamedArg namedArgs { ref := stx, param := .index stx[1] explicit (idx - 1), val := Arg.stx val }
        return (namedArgs, args)
      else
        let name := stx[1].getId.eraseMacroScopes
        let namedArgs ← addNamedArg namedArgs { ref := stx, param := .name stx[1] name, val := Arg.stx val }
        return (namedArgs, args)
    else if stx.getKind == ``Lean.Parser.Term.ellipsis then
      throwErrorAt stx "unexpected '..'"
    else
      return (namedArgs, args.push $ Arg.stx stx)
  return (namedArgs, args, ellipsis)

def expandApp (stx : Syntax) : MetaM (Syntax × Array NamedArg × Array Arg × Bool) := do
  let (namedArgs, args, ellipsis) ← expandArgs stx[1].getArgs
  return (stx[0], namedArgs, args, ellipsis)

def NamedArgParam.applies (paramIdx : Nat) (paramExplicitIdx? : Option Nat) (paramName : Name) (p : NamedArgParam) : Bool :=
  match p, paramExplicitIdx? with
  | .name _ n,          _                     => n == paramName
  | .index _ true idx,  _                     => idx == paramIdx
  | .index _ false idx, some paramExplicitIdx => idx == paramExplicitIdx
  | _,                  _                     => false

/--
Finds a named argument that applies to a given parameter. Throws an error if more than one argument applies.

Arguments:
- `paramIdx` is the parameter index (0-indexed)
- `paramExplicitCount` is the number of explicit parameters before this parameter
- `isExplicit` is whether the current parameter is explicit (if `false`, then `paramExplicitCount` is ignored)
- `paramName` is the name of the parameter
-/
def findNamedArgFinIdx? (paramIdx : Nat) (paramExplicitCount : Nat) (isExplicit : Bool) (paramName : Name) (namedArgs : Array NamedArg) : MetaM (Option (Fin namedArgs.size)) := do
  let paramExplicitIdx? := if isExplicit then some paramExplicitCount else none
  let mut idx? : Option (Fin namedArgs.size) := none
  for h : i in [0:namedArgs.size] do
    let namedArg := namedArgs[i]
    if namedArg.param.applies paramIdx paramExplicitIdx? paramName then
      if idx?.isSome then
        throwErrorAt namedArg.param.ref "Argument `{toString namedArg.param}` was already set"
      else
        idx? := some ⟨i, by get_elem_tactic⟩
  return idx?

end Lean.Elab.Term
