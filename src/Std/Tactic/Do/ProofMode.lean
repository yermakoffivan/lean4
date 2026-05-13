/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Std.Do.SPred.SPred
public import Init.Internal.Order

@[expose] public section


namespace Std.Tactic.Do

open Std.Do

syntax mgoalHyp := ident " : " term

syntax mgoalStx := ppDedent(ppLine mgoalHyp)* ppDedent(ppLine "⊢ₛ " term)
syntax mgoalOrderStx := ppDedent(ppLine mgoalHyp)* ppDedent(ppLine "⊑ " term)

/-- This is the same as `SPred.entails`.
This constant is used to detect `SPred` proof mode goals. -/
abbrev MGoalEntails := @SPred.entails

/-- This is only used for delaboration purposes, so that we can render context variables that appear
to have type `A : PROP` even though `PROP` is not a type. -/
def MGoalHypMarker {σs : List (Type u)} (_A : SPred σs) : Prop := True

end Std.Tactic.Do

namespace Std.Internal.Tactic.Do

/-- This is the same as `PartialOrder.rel` for the partial order induced by `CompleteLattice`.
This constant is used to detect `Assertion` proof mode goals. -/
abbrev MGoalEntails {l : Sort u} [self : Lean.Order.CompleteLattice l] :=
  @Lean.Order.PartialOrder.rel l self.toPartialOrder

/-- This is only used for delaboration purposes, so that we can render context variables that appear
to have type `A : PROP` even though `PROP` is not a type. -/
def MGoalHypMarker {l : Sort u} [Lean.Order.CompleteLattice l] (_A : l) : Prop := True

end Std.Internal.Tactic.Do
