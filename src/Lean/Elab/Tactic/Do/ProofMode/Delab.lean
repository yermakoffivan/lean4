/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.MGoal

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do
open Std.Tactic.Do
open Lean Expr Meta PrettyPrinter Delaborator SubExpr

@[builtin_delab app.Std.Tactic.Do.MGoalEntails]
private partial def delabMGoal : Delab := do
  -- Std.Tactic.Do.MGoalEntails.{u} : ∀ {σs : List (Type u)}, SPred σs → SPred σs → Prop
  -- only accept when there are at least 3 arguments.
  let e ← getExpr
  guard <| e.getAppNumArgs >= 3
  let (_, _, hyps) ← withAppFn <| withAppArg <| delabHypotheses ({}, {}, #[])
  let target ← SPred.Notation.unpack (← withAppArg <| delab)

  -- build syntax
  return ⟨← `(Std.Tactic.Do.mgoalStx| $hyps.reverse* ⊢ₛ $target:term)⟩
where
  delabHypotheses
      (acc : NameMap Nat × NameMap Nat × Array (TSyntax ``mgoalHyp)) :
      DelabM (NameMap Nat × NameMap Nat × Array (TSyntax ``mgoalHyp)) := do
    let hyps ← getExpr
    if let some _ := parseEmptyHyp? hyps then
      return acc
    if let some hyp := parseHyp? hyps then
      let mut (accessibles, inaccessibles, lines) := acc
      let name := hyp.name.eraseMacroScopes
      -- `mintro _ _` will give fresh inaccessible names `h✝` and `h✝₁` to the hypotheses.
      -- Note that we want to mirror `intro _ _` where it's actually displayed as `h✝₁` and `h✝`.
      -- Since neither name equates to the other, we erase the macro scopes here and look up `h` in
      -- a separate map, adding back the default `✝` suffix by unconditionally starting from idx 0.
      let mIdx :=
        if hyp.name.hasMacroScopes then
          -- NB: inaccessibles always start with 0 for the initial ✝
          .some (inaccessibles.getD name 0)
        else
          accessibles.find? name
      let (idx, name') :=
        if let some idx := mIdx then
          (idx + 1, name.appendAfter <| if idx == 0 then "✝" else "✝" ++ idx.toSuperscriptString)
        else
          (0, name)
      let name' := mkIdent name'
      let stx ← `(Std.Tactic.Do.mgoalHyp| $name' : $(← SPred.Notation.unpack (← withMDataExpr <| delab)))
      if hyp.name.hasMacroScopes then
        inaccessibles := inaccessibles.insert name idx
      else
        accessibles := accessibles.insert name idx
      return (accessibles, inaccessibles, lines.push stx)
    if (parseAnd? hyps).isSome then
      -- SPred.and : ∀ {σs : List Type}, SPred σs → SPred σs → SPred σs
      -- first delab `rhs` in `SPred.and σs lhs rhs`, then `lhs`.
      let acc_rhs ← withAppArg <| delabHypotheses acc
      let acc_lhs ← withAppFn <| withAppArg <| delabHypotheses acc_rhs
      return acc_lhs
    else
      failure

@[builtin_delab app.Std.Tactic.Do.MGoalHypMarker]
private def delabHypMarker : Delab := do SPred.Notation.unpack (← withAppArg delab)

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Expr Meta PrettyPrinter Delaborator SubExpr
open Std.Internal.Tactic.Do
open Std.Tactic.Do  -- for `mgoalHyp`/`mgoalOrderStx` notations (shared with old foundation)

@[builtin_delab app.Std.Internal.Tactic.Do.MGoalEntails]
private partial def delabMGoal : Delab := do
  -- Std.Internal.Tactic.Do.MGoalEntails : ∀ {α} [PartialOrder α], α → α → Prop
  let e ← getExpr
  guard <| e.getAppNumArgs >= 4
  let (_, _, hyps) ← withAppFn <| withAppArg <| delabHypotheses ({}, {}, #[])
  let target ← withAppArg <| delab

  return ⟨← `(Std.Tactic.Do.mgoalOrderStx| $hyps.reverse* ⊑ $target:term)⟩
where
  delabHypotheses
      (acc : NameMap Nat × NameMap Nat × Array (TSyntax ``mgoalHyp)) :
      DelabM (NameMap Nat × NameMap Nat × Array (TSyntax ``mgoalHyp)) := do
    let hyps ← getExpr
    if let some _ := parseEmptyHyp? hyps then
      return acc
    if let some hyp := parseHyp? hyps then
      let mut (accessibles, inaccessibles, lines) := acc
      let name := hyp.name.eraseMacroScopes
      let mIdx :=
        if hyp.name.hasMacroScopes then
          .some (inaccessibles.getD name 0)
        else
          accessibles.find? name
      let (idx, name') :=
        if let some idx := mIdx then
          (idx + 1, name.appendAfter <| if idx == 0 then "✝" else "✝" ++ idx.toSuperscriptString)
        else
          (0, name)
      let name' := mkIdent name'
      let stx ← `(Std.Tactic.Do.mgoalHyp| $name' : $(← withMDataExpr <| delab))
      if hyp.name.hasMacroScopes then
        inaccessibles := inaccessibles.insert name idx
      else
        accessibles := accessibles.insert name idx
      return (accessibles, inaccessibles, lines.push stx)
    if (parseAnd? hyps).isSome then
      -- meet l cl lhs rhs (4 args). delab `rhs` first, then `lhs`.
      let acc_rhs ← withAppArg <| delabHypotheses acc
      let acc_lhs ← withAppFn <| withAppArg <| delabHypotheses acc_rhs
      return acc_lhs
    else
      failure

@[builtin_delab app.Std.Internal.Tactic.Do.MGoalHypMarker]
private def delabHypMarker : Delab := do delab (← withAppArg getExpr)

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
