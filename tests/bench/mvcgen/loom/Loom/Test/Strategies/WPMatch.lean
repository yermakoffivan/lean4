import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` splits match expressions in weakest-precondition programs.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.WPMatch

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
n s n✝ : Nat
x✝ : n = n✝.succ
⊢ True

case vc2
n s : Nat
x✝ : n = 0
⊢ True
-/
#guard_msgs in
example (n s : Nat) :
    (⊤ : Prop) ⊑
      wp (match n with | 0 => (pure 0 : StateM Nat Nat) | _ + 1 => pure 1)
        (fun _ _ => True) ⟨⟩ s := by
  test

/--
error: unsolved goals
case vc1
n s s₁✝ n✝ : Nat
x✝ : n = n✝.succ
⊢ 1 = s

case vc2
n s s₁✝ : Nat
x✝ : n = 0
⊢ 0 = s
-/
#guard_msgs in
example (n : Nat) (s : Nat) :
    (⊤ : Nat → Prop) ⊑
      wp (match n with | 0 => (pure 0 : StateM Nat Nat) | _ + 1 => pure 1)
        (fun x _ => x = s) ⟨⟩ := by
  test

-- TODO
example (Pred EPred : Type) [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] :
    ⊤ ⊑
      wp (match n with | 0 => (pure 0 : StateT Nat m Nat) | _ + 1 => pure 1)
        (fun _ _ => ⊤) ⊥ := by
  lmvcgen -trivial

end Loom.Test.Strategies.WPMatch
