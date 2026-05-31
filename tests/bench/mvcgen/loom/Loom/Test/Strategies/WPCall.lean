import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` applies cached WP call specifications.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.WPCall

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
s : Nat
⊢ 1 = 1
-/
#guard_msgs in
example (s : Nat) :
    (⊤ : Prop) ⊑
      wp (pure 1 : StateM Nat Nat)
        (fun r _ => r = 1) ⟨⟩ s := by
  test

/--
error: unsolved goals
case vc1
b : Bool
s₁✝ : Nat
⊢ 1 = 1 ∧ b = b
-/
#guard_msgs in
example (b : Bool) :
    (⊤ : Nat → Prop) ⊑
      wp (pure 1 : StateM Nat Nat)
        (fun r _ => r = 1 ∧ b = b) ⟨⟩ := by
  test

-- TODO: make it work for `Pred EPred : Type u`
example (Pred EPred : Type) [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] :
    ⊤ ⊑
      wp (pure 1 : StateT Nat m Nat)
        (fun _ _ => ⊤) ⊥ := by
  lmvcgen

end Loom.Test.Strategies.WPCall
