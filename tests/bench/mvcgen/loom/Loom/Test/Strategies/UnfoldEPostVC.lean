import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` unfolds exception-postcondition verification conditions.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.UnfoldEPostVC

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)
macro "testt" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]))

/--
error: unsolved goals
case vc1
⊢ 0 = 0
-/
#guard_msgs in
example :
    (⊤ : Prop) ⊑ (epost⟨fun e : Nat => e = 0⟩).head 0 := by
  test

/--
error: unsolved goals
case vc1
s₁✝ : Nat
s₂✝ : Bool
⊢ 0 = s₁✝ ∧ s₂✝ = s₂✝
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑
      (epost⟨fun e n b => e = n ∧ b = b⟩).head 0 := by
  test

/--
error: unsolved goals
case vc1
s₁✝ : Nat
s₂✝ : Bool
⊢ 0 = s₁✝
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑
      (epost⟨fun e n b => e = n ∧ b = b⟩).head 0 := by
  testt

-- TODO: make it work for `Pred : Type u`
example (Pred : Type) [Assertion Pred] (P : Nat → Bool → Pred) :
    P ⊑ (epost⟨fun _ n b => P n b⟩).head 0 := by
  lmvcgen -trivial

end Loom.Test.Strategies.UnfoldEPostVC
