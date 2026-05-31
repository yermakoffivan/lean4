import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` introduces state arguments for function-valued lattice entailments.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.IntroStateArg

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
s₁✝ : Nat
⊢ s₁✝ = s₁✝
-/
#guard_msgs in
example :
    (⊤ : Nat → Prop) ⊑ fun n => n = n := by
  test

/--
error: unsolved goals
case vc1
s₁✝ : Nat
s₂✝ : Bool
⊢ s₁✝ = s₁✝ ∧ s₂✝ = s₂✝
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑ fun n b => n = n ∧ b = b := by
  test

example {l : Type} [CompleteLattice l] :
    (⊤ : Nat → Bool → l) ⊑ (⊤ : Nat → Bool → l) := by
  lmvcgen -trivial

/-! ## Naming introduced state arguments via `(names := [...])` -/

-- `tactic.hygienic false`: the state args take the accessible names from the list.
set_option tactic.hygienic false in
/--
error: unsolved goals
case vc1
x : Nat
y : Bool
⊢ x = x ∧ y = y
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑ fun n b => n = n ∧ b = b := by
  lmvcgen (names := [x, y]) -trivial

-- Default hygiene: the list still supplies the base name, but binders stay inaccessible.
/--
error: unsolved goals
case vc1
x✝ : Nat
y✝ : Bool
⊢ x✝ = x✝ ∧ y✝ = y✝
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑ fun n b => n = n ∧ b = b := by
  lmvcgen (names := [x, y]) -trivial

-- Fewer names than args: the extra arg falls back to the rule's binder name (`s`).
set_option tactic.hygienic false in
/--
error: unsolved goals
case vc1
x : Nat
s : Bool
⊢ x = x ∧ s = s
-/
#guard_msgs in
example :
    (⊤ : Nat → Bool → Prop) ⊑ fun n b => n = n ∧ b = b := by
  lmvcgen (names := [x]) -trivial

end Loom.Test.Strategies.IntroStateArg
