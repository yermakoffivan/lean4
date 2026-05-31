import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` zeta-reduces free-variable program aliases before WP call handling.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.WPFVarZeta

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
s : Nat
action✝ : StateT Nat Id Nat := pure 1
⊢ 1 = 1
-/
#guard_msgs in
example (s : Nat) :
    (let action : StateM Nat Nat := pure 1;
      (⊤ : Prop) ⊑ wp action (fun r _ => r = 1) ⟨⟩ s) := by
  test

/--
error: unsolved goals
case vc1
b : Bool
action✝ : StateT Nat Id Nat := pure 1
s₁✝ : Nat
⊢ 1 = 1
-/
#guard_msgs in
example (b : Bool) :
    (let action : StateM Nat Nat := pure 1;
      (⊤ : Nat → Prop) ⊑ wp action (fun r _ => r = 1) ⟨⟩) := by
  test

-- TODO: make it work for `Pred EPred : Type u`
example (Pred EPred : Type) [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] :
    (let action : StateT Nat m Nat := pure 1;
      ⊤ ⊑ wp action (fun _ _ => ⊤) ⊥) := by
  lmvcgen -trivial

end Loom.Test.Strategies.WPFVarZeta
