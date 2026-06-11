/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.BuiltinDo.Basic
meta import Lean.Parser.Do
import Lean.Elab.BuiltinDo.For

public section

namespace Lean.Elab.Do

open Lean.Parser.Term

/--
Builtin do-element elaborator for `repeat` (syntax kind `Lean.Parser.Term.doRepeat`).

Expands to `for _ in Loop.mk do ...`. When the body cannot `break`, the loop's own expression
type is fixed to `PUnit`, yet the surrounding do block may require a different result type;
we append an `unreachable!` so the continuation has a polymorphic value of any type. The
`unreachable!` is never actually executed (the loop never terminates normally), and any
dead-code warning that fires on the surrounding continuation is actionable — the user can
remove the following code without breaking the do block's type.
-/
@[builtin_doElem_elab Lean.Parser.Term.doRepeat] def elabDoRepeat : DoElab := fun stx dec => do
  -- "repeat " >> optConfig >> doSeq
  -- The node is accessed by index because old-shape syntax from quotations compiled against
  -- stage0 lacks the `optConfig` child.
  let (cfg?, shift) := getDoOptConfig stx.raw 1
  checkNoDoConfig cfg?
  let tk := stx.raw[0]
  let seq : TSyntax ``doSeq := ⟨stx.raw[1 + shift]⟩
  let mut expanded ← `(doElem| for%$tk _ in Loop.mk do $seq)
  if let some cfg := cfg? then
    -- Forward the configuration onto the generated `for` loop, which the quotation above
    -- constructed without the `optConfig` child.
    expanded := ⟨setDoOptConfig expanded.raw 1 cfg⟩
  let info ← inferControlInfoSeq seq
  if !info.breaks then
    if !(← Meta.isDefEqGuarded dec.resultType (← mkPUnit)) then
      expanded ← `(doElem| do $expanded:doElem; unreachable!)
  Term.withMacroExpansion stx expanded <|
    withRef expanded <| elabDoElem ⟨expanded⟩ dec

@[builtin_macro Lean.Parser.Term.doWhile] def expandDoWhile : Macro := fun stx => do
  -- "while " >> optConfig >> withForbidden "do" doIfCond >> " do " >> doSeq
  let tk := stx[0]
  let (cfg?, shift) := getDoOptConfig stx 1
  let cond : TSyntax ``doIfCond := ⟨stx[1 + shift]⟩
  let seq : TSyntax ``doSeq := ⟨stx[3 + shift]⟩
  let expanded ← `(doElem| repeat%$tk if $cond:doIfCond then $seq else break)
  let some cfg := cfg? | return expanded
  -- Forward the configuration onto the generated `repeat`, which the quotation above constructed
  -- without the `optConfig` child.
  return setDoOptConfig expanded.raw 1 cfg

@[builtin_macro Lean.Parser.Term.doRepeatUntil] def expandDoRepeatUntil : Macro := fun stx => do
  -- "repeat " >> optConfig >> doSeq >> "until " >> termParser
  let tk := stx[0]
  let (cfg?, shift) := getDoOptConfig stx 1
  let seq : TSyntax ``doSeq := ⟨stx[1 + shift]⟩
  let cond : Term := ⟨stx[3 + shift]⟩
  let expanded ← `(doElem| repeat%$tk do $seq:doSeq; if $cond then break)
  let some cfg := cfg? | return expanded
  -- Forward the configuration onto the generated `repeat`, which the quotation above constructed
  -- without the `optConfig` child.
  return setDoOptConfig expanded.raw 1 cfg

end Lean.Elab.Do
