import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` introduces outer `forall` binders before solving the residual goal.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.IntroForall

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
n✝ : Nat
⊢ n✝ = n✝
-/
#guard_msgs in
example : ∀ n : Nat, n = n := by
  test

/--
error: unsolved goals
case vc1
P✝ : Nat → Bool → Prop
s₁✝ : Nat
s₂✝ : Bool
a✝ : P✝ s₁✝ s₂✝
⊢ P✝ s₁✝ s₂✝
-/
#guard_msgs in
example : ∀ P : Nat → Bool → Prop, P ⊑ P := by
  test

example {l : Type} [CompleteLattice l] :
    ∀ P : Nat → Bool → l, P ⊑ P := by
  lmvcgen -trivial

end Loom.Test.Strategies.IntroForall
