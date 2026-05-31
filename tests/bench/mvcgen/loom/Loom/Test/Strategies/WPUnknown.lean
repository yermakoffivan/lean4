import Loom.Tactic.VCGen

/-!
Tests that unsupported WP program shapes remain rejected by `lmvcgen`.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.WPUnknown

def hiddenPure (n : Nat) : StateM Nat Nat := pure n
def hiddenPureT [Monad m] (n : Nat) : StateT Nat m Nat := pure n

example : True := by
  fail_if_success
    have _ :
        (⊤ : Prop) ⊑ wp (hiddenPure 1) (fun _ _ => True) ⟨⟩ 0 := by
      lmvcgen
  trivial

example : True := by
  fail_if_success
    have _ :
        (⊤ : Prop) ⊑ wp (hiddenPure 1) (fun _ _ _ => True) ⟨⟩ 0 true := by
      lmvcgen
  trivial

example [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] : True := by
  fail_if_success
    have _ :
        ⊤ ⊑ wp (hiddenPureT (m := m) 1) (fun _ _ => ⊤) (⊥ : EPred) := by
      lmvcgen
  trivial

end Loom.Test.Strategies.WPUnknown
