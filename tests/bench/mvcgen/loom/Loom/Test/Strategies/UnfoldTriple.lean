import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` unfolds `Triple` goals into weakest-precondition obligations.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.UnfoldTriple

example :
    Triple (⊤ : Nat → Prop)
      (pure () : StateM Nat Unit)
      (fun _ => (⊤ : Nat → Prop)) ⟨⟩ := by
  lmvcgen -trivial

example :
    Triple (⊤ : Nat → Bool → Prop)
      (pure () : StateT Nat (StateM Bool) Unit)
      (fun _ => (⊤ : Nat → Bool → Prop)) ⟨⟩ := by
  lmvcgen -trivial

example [Assertion Pred] [Assertion EPred] [Monad m]
    [WPMonad m Pred EPred] :
    Triple (⊤ : Nat → Pred)
      (pure () : StateT Nat m Unit)
      (fun _ _ => ⊤) ⊥ := by
  lmvcgen -trivial

end Loom.Test.Strategies.UnfoldTriple
