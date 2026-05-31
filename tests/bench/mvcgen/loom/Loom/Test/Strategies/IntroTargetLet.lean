import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` handles target-level `let` binders before classifying the exposed goal.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace Loom.Test.Strategies.IntroTargetLet

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
⊢ 1 = 1
-/
#guard_msgs in
example : (let n : Nat := 1; n = 1) := by
  test

/--
error: unsolved goals
case vc1
f✝ : Nat → Nat := fun n => n
⊢ f✝ 0 = 0
-/
#guard_msgs in
example : (let f : Nat → Nat := fun n => n; f 0 = 0) := by
  test

/--
error: unsolved goals
case vc1
P✝ : Nat → Bool → Prop := ⊤
s₁✝ : Nat
s₂✝ : Bool
a✝ : P✝ s₁✝ s₂✝
⊢ P✝ s₁✝ s₂✝
-/
#guard_msgs in
example : (let P : Nat → Bool → Prop := ⊤; P ⊑ P) := by
  test

/--
error: unsolved goals
case vc1
P✝ : Nat → Bool → Prop := fun n b => n = n ∧ b = b
s₁✝ : Nat
s₂✝ : Bool
a✝ : P✝ s₁✝ s₂✝
⊢ P✝ s₁✝ s₂✝
-/
#guard_msgs in
example : (let P : Nat → Bool → Prop := fun n b => n = n ∧ b = b; P ⊑ P) := by
  test

example {l : Type} [CompleteLattice l] :
    (let P : Nat → Bool → l := ⊤; P ⊑ P) := by
  lmvcgen -trivial

/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P✝ : Nat → Bool → l := ⊤
s₁✝ : Nat
s₂✝ : Bool
⊢ ⊤ ⊑ P✝ s₁✝ s₂✝
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] :
    (let P : Nat → Bool → l := ⊤; ⊤ ⊑ P) := by
  test


example {l : Type} [CompleteLattice l] :
    (let P : Nat → Bool → l := fun _ _ => (⊤ : l); P ⊑ P) := by
  lmvcgen -trivial

end Loom.Test.Strategies.IntroTargetLet
