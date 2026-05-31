import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` introduces plain proposition and `ofProp` preconditions.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.IntroPre

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)
macro "testt" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]))

/--
error: unsolved goals
case vc1
P : Prop
a✝ : P
⊢ P
-/
#guard_msgs in
example (P : Prop) : P ⊑ P := by
  test

/--
error: unsolved goals
case vc1
P : Prop
a✝ : P
⊢ P
-/
#guard_msgs in
example (P : Prop) : (⌜P⌝ : Prop) ⊑ P := by
  test

/--
error: unsolved goals
case vc1
P Q : Prop
a✝ : P ⊓ Q
⊢ P
-/
#guard_msgs in
example (P Q : Prop) : P ⊓ Q ⊑ P := by
  testt

/--
error: unsolved goals
case vc1
P : Nat → Bool → Prop
s₁✝ : Nat
s₂✝ : Bool
a✝ : P s₁✝ s₂✝
⊢ P s₁✝ s₂✝
-/
#guard_msgs in
example (P : Nat → Bool → Prop) : P ⊑ P := by
  test

/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P : Prop
a✝ : P
s₁✝ : Nat
s₂✝ : Bool
⊢ P
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] (P : Prop) :
    (⌜P⌝ : Nat → Bool → l) ⊑ (⌜P⌝ : Nat → Bool → l) := by
  test

end Loom.Test.Strategies.IntroPre
