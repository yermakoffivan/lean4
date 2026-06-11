/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.Do.Basic
meta import Lean.Parser.Do

public section

namespace Lean.Elab.Do

open Lean.Parser.Term
open Lean.Meta

@[builtin_doElem_elab Lean.Parser.Term.doReturn] def elabDoReturn : DoElab := fun stx dec => do
  let `(doReturn| return $cfg:optConfig $[$e?]?) := stx | throwUnsupportedSyntax
  let config ← elabDoConfig cfg
  -- When using the ControlLifter framework, `returnCont.resultType` can be different than the
  -- result type of the `do` block. That's why we track it separately.
  -- trace[Elab.do] "return e: {e} with type {returnCont.resultType}"
  let returnCont ← match config.label? with
    | none => getReturnCont
    | some l => match ← getLabeledTarget? l.getId with
      | none => throwErrorAt l "Unknown label `{l}`"
      | some (.loop ..) =>
        throwErrorAt l "Cannot `return` to label `{l}`: it names a loop, not a `do` block"
      | some (.block returnCont) => pure returnCont
  let e ← match e? with
    | none   => Term.ensureHasType returnCont.resultType (← mkPUnitUnit)
    | some e => Term.elabTermEnsuringType e returnCont.resultType
  dec.elabAsSyntacticallyDeadCode -- emit dead code warnings
  returnCont.k e

@[builtin_doElem_elab Lean.Parser.Term.doBreak] def elabDoBreak : DoElab := fun stx dec => do
  let `(doBreak| break $cfg:optConfig) := stx | throwUnsupportedSyntax
  let config ← elabDoConfig cfg
  let breakCont ← match config.label? with
    | none => (← getBreakCont).getDM (throwError "`break` must be nested inside a loop")
    | some l => match ← getLabeledTarget? l.getId with
      | none => throwErrorAt l "Unknown label `{l}`"
      | some (.block ..) =>
        throwErrorAt l "Cannot `break` to label `{l}`: it names a `do` block, not a loop"
      | some (.loop breakCont _) => pure breakCont
  dec.elabAsSyntacticallyDeadCode -- emit dead code warnings
  breakCont

@[builtin_doElem_elab Lean.Parser.Term.doContinue] def elabDoContinue : DoElab := fun stx dec => do
  let `(doContinue| continue $cfg:optConfig) := stx | throwUnsupportedSyntax
  let config ← elabDoConfig cfg
  let continueCont ← match config.label? with
    | none => (← getContinueCont).getDM (throwError "`continue` must be nested inside a loop")
    | some l => match ← getLabeledTarget? l.getId with
      | none => throwErrorAt l "Unknown label `{l}`"
      | some (.block ..) =>
        throwErrorAt l "Cannot `continue` to label `{l}`: it names a `do` block, not a loop"
      | some (.loop _ continueCont) => pure continueCont
  dec.elabAsSyntacticallyDeadCode -- emit dead code warnings
  continueCont
