/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.Command

/-!
# `forward_type_reference%`

`forward_type_reference% T a b` elaborates to an opaque stand-in `T.FwdRef a b` for a type `T a b`
whose definition comes later in the file. Once `T` is defined, casts `T.toFwdRef` and
`T.FwdRef.fromFwdRef` bridging `T` and `T.FwdRef` are generated automatically. Routing a negative
self-occurrence through `T.FwdRef` lets a type carry it, mechanizing the hand-written
`Simp.MethodsRef` pattern.
-/

public section

namespace Lean.Elab.Term
open Meta

/-- A pending `forward_type_reference%` awaiting its target's definition. -/
structure ForwardRefEntry where
  /-- Anticipated name of the referenced type. -/
  base : Name
  /-- Reference syntax, for reporting an unresolved reference at end of file. -/
  ref  : Syntax

/-- Per-file registry of pending `forward_type_reference%` stand-ins. `mainOnly` suffices: the
elaborator writes it only while elaborating a definition signature, which runs on the main branch. -/
builtin_initialize forwardRefExt : EnvExtension (Array ForwardRefEntry) ←
  registerEnvExtension (pure #[])

/-- Result universe of a type whose expected type is `Sort (u+1)`; falls back to `0`. -/
def fwdRefUniverse (expectedType? : Option Expr) : TermElabM Level := do
  let some t := expectedType? | return .zero
  match (← instantiateMVars (← whnf t)) with
  | .sort l => match (← instantiateLevelMVars l) with
               | .succ l' => return if l'.hasMVar then .zero else l'
               | _ => return .zero
  | _ => return .zero

private partial def withArgTelescopeAux [Inhabited α] (argEs : Array Expr)
    (k : Array Expr → TermElabM α) (i : Nat) (xs : Array Expr) : TermElabM α := do
  if i < argEs.size then
    let ty ← (List.range i).foldlM (init := ← inferType argEs[i]!) fun ty j =>
      return (← kabstract ty argEs[j]!).instantiate1 xs[j]!
    withLocalDeclD (.mkSimple s!"x{i}") ty fun x => withArgTelescopeAux argEs k (i+1) (xs.push x)
  else k xs

/-- Abstract `argEs` into a dependent telescope of fresh fvars, capturing dependencies between the
arguments so a later `a : α` sees the earlier `α`. -/
def withArgTelescope [Inhabited α] (argEs : Array Expr) (k : Array Expr → TermElabM α) :
    TermElabM α :=
  withArgTelescopeAux argEs k 0 #[]

/-- The names generated for a forward reference to `base`: the stand-in family, its witness, and the
two casts with their `implemented_by` shims. -/
def fwdRefNames (base : Name) : Array Name :=
  #[base ++ `FwdRefPointed, base ++ `FwdRef,
    base ++ `toFwdRefImpl, base ++ `toFwdRef,
    base ++ `FwdRef ++ `fromFwdRefImpl, base ++ `FwdRef ++ `fromFwdRef]

/-- Lazily declare a `base.FwdRef` family abstracting the use-site argument telescope and returning
`Type u`, backed by an opaque `base.FwdRefPointed : NonemptyType.{u}`. -/
def mkFwdRefFamily (base : Name) (argEs : Array Expr) (u : Level) : TermElabM Name := do
  let refName := base ++ `FwdRef
  let pointedName := base ++ `FwdRefPointed
  if (← getEnv).contains refName then
    -- reuse only our own family, marked by the opaque witness; a bare `base.FwdRef` is a collision
    if (← getEnv).contains pointedName then return refName
    else throwError "`forward_type_reference%` cannot create `{refName}`: a declaration with that \
      name already exists"
  for n in fwdRefNames base do
    if (← getEnv).contains n then
      throwError "`forward_type_reference%` cannot create `{n}`: a declaration with that name \
        already exists"
  withArgTelescope argEs fun xs => do
    -- generalize the telescope's universe mvars (e.g. an enclosing auto-bound universe) to params
    let famType ← instantiateMVars (← levelMVarToParam (← mkForallFVars xs (mkSort (.succ u))))
    let lvls := (collectLevelParams {} famType).params.toList
    let nonemptyU := Lean.mkConst ``NonemptyType [u]
    let inst ← synthInstance (← mkAppM ``Inhabited #[nonemptyU])
    let witness ← mkAppOptM ``Inhabited.default #[nonemptyU, inst]
    addDecl <| .opaqueDecl {
      name := pointedName, levelParams := lvls, type := nonemptyU, value := witness, isUnsafe := false
    }
    let body := mkApp (Lean.mkConst ``NonemptyType.type [u]) (Lean.mkConst pointedName (lvls.map .param))
    addDecl <| .defnDecl {
      name := refName, levelParams := lvls, type := famType,
      value := ← instantiateMVars (← mkLambdaFVars xs body), hints := .regular 0, safety := .safe
    }
    return refName

/-- Record `base` as an unresolved forward reference, unless already bridged or already pending. -/
def registerForwardRef (base : Name) (ref : Syntax) : TermElabM Unit := do
  if (← getEnv).contains (base ++ `toFwdRef) then return
  modifyEnv fun env => forwardRefExt.modifyState env fun s =>
    if s.any (·.base == base) then s else s.push { base, ref }

@[builtin_term_elab Parser.Term.forwardTypeReference]
def elabForwardTypeReference : TermElab := fun stx expectedType? => do
  let argStxs := stx[2].getArgs
  let argEs ← argStxs.mapM (elabTerm · none)
  let base := (← getCurrNamespace) ++ stx[1].getId
  let refName ← mkFwdRefFamily base argEs (← fwdRefUniverse expectedType?)
  registerForwardRef base stx
  -- re-elaborate as an ordinary application so universe unification is handled normally
  let args : Array Term := argStxs.map (⟨·⟩)
  elabTerm (← `($(mkIdent refName) $args*)) expectedType?

end Lean.Elab.Term

namespace Lean.Elab.Command
open Lean.Elab.Term (forwardRefExt)

/-- Number of telescope binders of the `refName` family. -/
def fwdRefArity (refName : Name) : CommandElabM Nat :=
  liftTermElabM do Meta.forallTelescopeReducing (← getConstInfo refName).type fun xs _ =>
    return xs.size

/-- Bridge `base.FwdRef` to a now-defined `base`: a `Nonempty` instance plus the two opaque casts,
re-deriving the shared telescope as autobound implicits. `refStx` locates a collision report. -/
def bridgeForwardRef (base : Name) (refStx : Syntax) : CommandElabM Unit := do
  for n in #[base ++ `toFwdRefImpl, base ++ `toFwdRef,
             base ++ `FwdRef ++ `fromFwdRefImpl, base ++ `FwdRef ++ `fromFwdRef] do
    if (← getEnv).contains n then
      logErrorAt refStx m!"`forward_type_reference%` cannot generate `{n}`: a declaration with \
        that name already exists"
      return
  let ref := base ++ `FwdRef
  let n ← fwdRefArity ref
  -- name declarations relative to the current namespace so they land at `base.*`
  let rel := base.replacePrefix (← getCurrNamespace) .anonymous
  let relRef := rel ++ `FwdRef
  let ps : Array Term := (Array.range n).map fun i => (mkIdent (.mkSimple s!"p{i+1}") : Term)
  let bApp ← `($(mkIdent base) $ps*)
  let rApp ← `($(mkIdent ref) $ps*)
  let pointed := mkIdent (base ++ `FwdRefPointed)
  let toImpl := mkIdent (rel ++ `toFwdRefImpl); let toRef := mkIdent (rel ++ `toFwdRef)
  let frImpl := mkIdent (relRef ++ `fromFwdRefImpl); let frRef := mkIdent (relRef ++ `fromFwdRef)
  elabCommand <| ← `(command| instance : Nonempty $rApp := ($pointed).property)
  elabCommand <| ← `(command| unsafe def $toImpl (x : $bApp) : $rApp := unsafeCast x)
  elabCommand <| ← `(command| @[implemented_by $toImpl] opaque $toRef (x : $bApp) : $rApp)
  elabCommand <| ← `(command| unsafe def $frImpl [Nonempty $bApp] (x : $rApp) : $bApp := unsafeCast x)
  elabCommand <| ← `(command| @[implemented_by $frImpl] opaque $frRef [Nonempty $bApp] (x : $rApp) : $bApp)

/-- Bridge every pending `forward_type_reference%` whose target is now defined; at end of file,
report references that were never defined. -/
def resolveForwardTypeReferences (stx : Syntax) : CommandElabM Unit := do
  let entries := forwardRefExt.getState (← getEnv)
  if entries.isEmpty then return
  let mut remaining : Array Lean.Elab.Term.ForwardRefEntry := #[]
  let mut toBridge : Array Lean.Elab.Term.ForwardRefEntry := #[]
  for entry in entries do
    if (← getEnv).contains entry.base then toBridge := toBridge.push entry
    else remaining := remaining.push entry
  -- drop the now-defined references before bridging, so a bridge error is not retried per command
  modifyEnv (forwardRefExt.setState · remaining)
  for entry in toBridge do
    bridgeForwardRef entry.base entry.ref
  if Parser.isTerminalCommand stx then
    for entry in remaining do
      logErrorAt entry.ref m!"unresolved `forward_type_reference%`: '{entry.base}' is never defined"

builtin_initialize forwardRefResolverRef.set resolveForwardTypeReferences

end Lean.Elab.Command
