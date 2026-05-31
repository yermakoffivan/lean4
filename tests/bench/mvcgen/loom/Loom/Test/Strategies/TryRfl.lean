import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` falls back to reflexivity for already-identical entailments.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.TryRfl

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

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
P : Nat → Bool → Prop
s₁✝ : Nat
s₂✝ : Bool
a✝ : P s₁✝ s₂✝
⊢ P s₁✝ s₂✝
-/
#guard_msgs in
example (P : Nat → Bool → Prop) : P ⊑ P := by
  test

example {l : Type} [CompleteLattice l] (P : Nat → Bool → l) : P ⊑ P := by
  lmvcgen -trivial

end Loom.Test.Strategies.TryRfl
