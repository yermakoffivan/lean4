import Loom.Tactic.VCGen

/-!
Tests that `lmvcgen` applies lattice rules for meet, implication, and `ofProp`.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

set_option trace.Loom.RuleConstruct.Logic true
namespace Loom.Test.Strategies.ApplyLattice

macro "test" : tactic => `(tactic| lmvcgen (names := [s₁, s₂]) -trivial)

/--
error: unsolved goals
case vc1
P Q : Prop
⊢ P

case vc2
P Q : Prop
⊢ Q
-/
#guard_msgs in
example (P Q : Prop) :
    (⊤ : Prop) ⊑ P ⊓ Q := by
  test

/--
error: unsolved goals
case vc1
P Q : Prop
h : P → Q
a✝ : P
⊢ Q
-/
#guard_msgs in
example (P Q : Prop) (h : P → Q) :
    (⊤ : Prop) ⊑ P ⇨ Q := by
  test

/--
error: unsolved goals
case vc1
P : Prop
⊢ P
-/
#guard_msgs in
example (P : Prop) :
    (⊤ : Prop) ⊑ (⌜P⌝ : Prop) := by
  test


/--
error: unsolved goals
case vc1
P Q : Nat → Bool → Prop
h : ∀ (n : Nat) (b : Bool), P n b → Q n b
n✝ : Nat
b✝ : Bool
a✝ : P n✝ b✝
⊢ Q n✝ b✝
-/
#guard_msgs in
example (P Q : Nat → Bool → Prop)
    (h : ∀ n b, P n b → Q n b) :
    (⊤ : Nat → Bool → Prop) ⊑ P ⇨ Q := by
  lmvcgen (names := [n, b]) -trivial

/--
error: unsolved goals
case vc1
P Q : Nat → Bool → Prop
h : ∀ (n : Nat) (b : Bool), P n b → Q n b
s₁✝ : Nat
s₂✝ : Bool
a✝ : P s₁✝ s₂✝
⊢ Q s₁✝ s₂✝
-/
#guard_msgs in
example (P Q : Nat → Bool → Prop)
    (h : ∀ n b, P n b → Q n b) :
    (⊤ : Nat → Bool → Prop) ⊑ (fun n => P n) ⇨ Q := by
  test

/--
error: unsolved goals
case vc1
P : Prop
s₁✝ : Nat
s₂✝ : Bool
⊢ P
-/
#guard_msgs in
example (P : Prop) :
    (⊤ : Nat → Bool → Prop) ⊑ (⌜P⌝ : Nat → Bool → Prop) := by
  test

/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P Q : Nat → Bool → l
s₁✝ : Nat
s₂✝ : Bool
⊢ ⊤ ⊑ P s₁✝ s₂✝

case vc2
l : Type
inst : CompleteLattice l
P Q : Nat → Bool → l
s₁✝ : Nat
s₂✝ : Bool
⊢ ⊤ ⊑ Q s₁✝ s₂✝
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] (P Q : Nat → Bool → l) :
    (⊤ : Nat → Bool → l) ⊑ P ⊓ Q := by
  test


/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P Q : Nat → Bool → l
s₁✝ : Nat
s₂✝ : Bool
⊢ P s₁✝ s₂✝ ⊑ Q s₁✝ s₂✝
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] (P Q : Nat → Bool → l) :
    (⊤ : Nat → Bool → l) ⊑ P ⇨ Q := by
  test


/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P Q : Nat → Bool → l
s₁✝ : Nat
s₂✝ : Bool
⊢ P s₁✝ s₂✝ ⊑ Q s₁✝ s₂✝
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] (P Q : Nat → Bool → l) :
    (⊤ : Nat → Bool → l) ⊑ (fun n => P n) ⇨ Q := by
  test

/--
error: unsolved goals
case vc1
l : Type
inst : CompleteLattice l
P : Prop
s₁✝ : Nat
s₂✝ : Bool
⊢ P
-/
#guard_msgs in
example {l : Type} [CompleteLattice l] (P : Prop) :
    (⊤ : Nat → Bool → l) ⊑ (⌜P⌝ : Nat → Bool → l) := by
  test

/-! `⊤` on the RHS: `pre ⊑ ⊤` is discharged by `le_top`, so these goals close completely
    (even with `-trivial`, since `le_top` is applied structurally rather than by the discharger). -/

example : (⊤ : Prop) ⊑ (⊤ : Prop) := by
  lmvcgen -trivial

example {l : Type} [CompleteLattice l] :
    (⊤ : Nat → Bool → l) ⊑ (⊤ : Nat → Bool → l) := by
  lmvcgen -trivial

example {l : Type} [CompleteLattice l] (P : Nat → Bool → l) :
    P ⊑ (⊤ : Nat → Bool → l) := by
  lmvcgen -trivial

end Loom.Test.Strategies.ApplyLattice
