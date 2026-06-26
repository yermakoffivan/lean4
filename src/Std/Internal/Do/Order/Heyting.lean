/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Std.Internal.Do.Order.Residuated

public section

namespace Lean.Order

universe u

variable {α : Type u} [CompleteLattice α]

instance : Residuated Prop Prop (· ⊓ ·) where
  op_sup a s := by
    show a ⊓ CompleteLattice.sup s = CompleteLattice.sup (fun y => ∃ x, s x ∧ y = a ⊓ x)
    have sup_eq_propSup (c : Prop → Prop) : CompleteLattice.sup c = propSup c := by
      apply propext
      constructor
      · exact sup_le c (fun y hy hyTrue => ⟨y, hy, hyTrue⟩)
      · intro ⟨y, hy, hyTrue⟩
        exact le_sup (c := c) hy hyTrue
    rw [sup_eq_propSup s, sup_eq_propSup (fun y => ∃ x, s x ∧ y = a ⊓ x)]
    apply propext
    simp only [propSup, meet_prop_eq_and]
    constructor
    · rintro ⟨ha, x, hsx, hx⟩
      exact ⟨a ∧ x, ⟨x, hsx, rfl⟩, ha, hx⟩
    · rintro ⟨p, ⟨x, hsx, hp_eq⟩, hp⟩
      subst p
      exact ⟨hp.1, x, hsx, hp.2⟩

instance {σ : Type v} {β : σ → Type u} [∀ s, CompleteLattice (β s)]
    [∀ s, Residuated (β s) (β s) (· ⊓ ·)] : Residuated (∀ s, β s) (∀ s, β s) (· ⊓ ·) where
  op_sup a s := by
    show a ⊓ CompleteLattice.sup s = CompleteLattice.sup (fun y => ∃ x, s x ∧ y = a ⊓ x)
    funext t
    rw [meet_apply, sup_apply, sup_apply, Residuated.op_sup (op := (· ⊓ ·))]
    congr 1
    funext w
    apply propext
    constructor
    · rintro ⟨v, ⟨f, hf, hft⟩, rfl⟩
      exact ⟨a ⊓ f, ⟨f, hf, rfl⟩, by rw [meet_apply, hft]⟩
    · rintro ⟨g, ⟨x, hx, rfl⟩, hgt⟩
      exact ⟨x t, ⟨x, hx, rfl⟩, by rw [← hgt, meet_apply]⟩

/-- Heyting implication in a frame: the implication of the meet operator. -/
scoped infixr:60 " ⇨ " => Residuated.imp (· ⊓ ·)

@[simp] theorem himp_prop_eq_imp (a b : Prop) : ((a ⇨ b : Prop) = (a → b)) := by
  apply propext
  constructor
  · intro hab
    have hs : (a ⇨ b : Prop) ⊑ (a → b) := by
      unfold Residuated.imp
      apply sup_le
      intro x hx hxTrue haTrue
      have hax : a ⊓ x := by
        simpa [meet_prop_eq_and] using (And.intro haTrue hxTrue)
      exact hx hax
    exact hs hab
  · intro hab
    have hx : a ⊓ (a → b) ⊑ b := by
      intro hax
      have hax' : a ∧ (a → b) := by
        simpa [meet_prop_eq_and] using hax
      exact hax'.right hax'.left
    exact (Residuated.le_imp (· ⊓ ·) (r := a) (b := b) (x := (a → b)) hx) hab

/-- Pointwise characterization of Heyting implication on function lattices. -/
@[simp] theorem himp_apply
    {σ : Type v} {β : Type u} [CompleteLattice β]
    (a b : σ → β) (s : σ) :
    (a ⇨ b) s = (a s ⇨ b s) := by
  classical
  unfold Residuated.imp
  rw [sup_apply]
  apply PartialOrder.rel_antisymm
  · apply sup_le
    intro y ⟨f, hf, hfs⟩
    rw [← hfs]
    have hsf : a s ⊓ f s ⊑ b s := by
      simpa [meet_apply] using (hf s)
    exact le_sup (c := fun z : β => a s ⊓ z ⊑ b s) hsf
  · apply sup_le
    intro y hy
    let f : σ → β := fun t => if t = s then y else ⊥
    have hf : a ⊓ f ⊑ b := by
      intro t
      simp only [meet_apply, f]
      split
      · next h => subst h; exact hy
      · exact PartialOrder.rel_trans (meet_le_right ..) (bot_le ..)
    have hs : f s = y := by simp [f]
    exact le_sup (c := fun z => ∃ g, (a ⊓ g ⊑ b) ∧ g s = z) ⟨f, hf, hs⟩

end Lean.Order

end -- public section
