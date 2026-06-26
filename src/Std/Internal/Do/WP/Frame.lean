/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Std.Internal.Do.WP.Basic
public import Std.Internal.Do.WP.Conjunctive
public import Std.Internal.Do.Order.Instances
universe u v w z
@[expose] public section

set_option linter.missingDocs true

open Lean.Order Std.Internal.Do

namespace Std.Internal.Do

variable {Prog : Type u} {Value : Type v} {Pred : Type w} {EPred : Type z}
  [Assertion Pred] [Assertion EPred] [WP Prog Value Pred EPred]

/--
`x` frames `F` with respect to the conjunction `conj`: `conj F ·` commutes into the postcondition of
`wp x` for every postcondition.

For the meet `conj = (· ⊓ ·)` and stateful `Pred`, this means running `x` preserves the state
identified by `F`.
-/
structure WP.Frames (conj : Pred → Pred → Pred) (x : Prog) (F : Pred) : Prop where
  /-- When `x` frames `(conj F ·)`, `(conj F ·)` commutes into the postcondition of `wp x`. -/
  conj_wp_le_wp_conj : ∀ (Q : Value → Pred) (E : EPred),
    conj F (wp x Q E) ⊑ wp x (fun a => conj F (Q a)) E

/-- The framed spec `vcgen` applies for `x`, for any residuated `conj`: framing `x` by `F` makes
`conj F (wp x (fun a => Residuated.imp conj F (Q a)))` a precondition for `wp x Q`. -/
theorem WP.Frames.conj_wp_imp_le_wp (conj : Pred → Pred → Pred) [Residuated Pred conj]
    {x : Prog} {F : Pred} (hframes : WP.Frames conj x F) :
    ∀ Q E, conj F (wp x (fun a => Residuated.imp conj F (Q a)) E) ⊑ wp x Q E := by
  intros
  apply PartialOrder.rel_trans
  apply hframes.conj_wp_le_wp_conj
  apply WP.wp_consequence
  intro
  apply Residuated.imp_le

/-- If `wp` is built as `Residuated.frameClosure op` over a base post-transformer `f x E` (the frame
rule internalized into `wp`), then every program frames every `F` with respect to `op`. -/
theorem WP.Frames.of_frameClosure (op : Pred → Pred → Pred) [Residuated Pred op]
    [Std.Commutative op] [Std.Associative op] {x : Prog} {F : Pred}
    (h : ∃ f : Prog → EPred → (Value → Pred) → Pred,
      ∀ (x : Prog) (Q : Value → Pred) (E : EPred),
        wp x Q E = Residuated.frameClosure op (f x E) Q) :
    WP.Frames op x F := by
  obtain ⟨f, hf⟩ := h
  constructor
  intro Q E
  rw [hf x Q E, hf x (fun a => op F (Q a)) E]
  exact Residuated.frameClosure_frames op (f x E) Q F

/-- If `wp x` is conjunctive, then `x` frames `(F ⊓ ·)` when `F` holds before and after running `x`. -/
theorem WP.Frames.of_wp_conjunctive {Prog : Type u} {Value : Type v} {Pred : Type w} {EPred : Type z}
    [Assertion Pred] [Assertion EPred] [WP Prog Value Pred EPred]
    [WPConjunctive Prog Value Pred EPred] {x : Prog} {F : Pred} (h : ∀ E, F ⊑ wp x (fun _ => F) E) :
    WP.Frames (· ⊓ ·) x F := by
  constructor
  intro Q E
  refine PartialOrder.rel_trans (y := wp x (fun _ => F) E ⊓ wp x Q E) ?_ ?_
  · exact le_meet _ _ _ (PartialOrder.rel_trans (meet_le_left _ _) (h E)) (meet_le_right _ _)
  · refine PartialOrder.rel_trans (WPConjunctive.wp_meet_wp_le x (fun _ => F) Q E)
      (WP.wp_consequence _ _ _ _ ?_)
    intro a
    simp only [meet_apply]
    exact PartialOrder.rel_refl
