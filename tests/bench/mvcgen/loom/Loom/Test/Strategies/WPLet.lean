import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` reduces `let` expressions in weakest-precondition programs.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.WPLet

macro "testt" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]))

/--
error: unsolved goals
case vc1
s : Nat
⊢ False
-/
#guard_msgs in
example (s : Nat) :
    (⊤ : Prop) ⊑
      wp (let x : Nat := 1; (pure x : StateM Nat Nat))
        (fun r _ => False) ⟨⟩ s := by
  testt

/--
error: unsolved goals
case vc1
s : Nat
f✝ : Nat → Nat := fun n => n
⊢ f✝ 1 = 1
-/
#guard_msgs in
example (s : Nat) :
    (⊤ : Prop) ⊑
      wp (let f : Nat → Nat := fun n => n; (pure (f 1) : StateM Nat Nat))
        (fun r _ => r = 1) ⟨⟩ s := by
  testt

example (b : Bool) :
    ⊤ ⊑
      wp (let x : Nat := 1; (pure x : StateM Nat Nat))
        (fun r _ => r = 1 ∧ b = b) ⟨⟩ := by
  lmvcgen

-- TODO
example (Pred EPred : Type) [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] :
    ⊤ ⊑
      wp (let x : Nat := 1; (pure x : StateT Nat m Nat))
        (fun _ _ => ⊤) ⊥ := by
  lmvcgen -trivial

end Loom.Test.Strategies.WPLet
