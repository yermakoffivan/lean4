/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Std.Internal.Do.Order.Basic

@[expose] public section

namespace Lean.Order

universe u v w

variable {R : Type v} {α : Type u} [CompleteLattice α]

/--
A complete lattice is *residuated for `op : R → α → α`* if every `op r ·` distributes over arbitrary
joins: `op r (sup s) = sup { op r x | x ∈ s }`. This makes each `op r ·` a lower adjoint, so it has a
right adjoint `Residuated.imp op r ·` (its implication). The *resource type* `R` indexes the family
of operators; for the lattice meet `R = α`, but other residuated operators take a simpler resource,
e.g. a cost counter `R = Nat`.

Example: Often the lattice meet, `op = (· ⊓ ·)`, is distributive, in which case the notion of
implication is Heyting implication `himp`.

Another example is separating conjunction `⋆` in separation logic. Here, the corresponding notion of
implication is separating implication `-⋆`.
-/
class Residuated (R : Type v) (α : Type u) [CompleteLattice α] (op : R → α → α) : Prop where
  /-- The operation preserves joins. -/
  op_sup (r : R) (s : α → Prop) :
    op r (CompleteLattice.sup s) = CompleteLattice.sup (fun y => ∃ x, s x ∧ y = op r x)

namespace Residuated

/-- The implication of `op`: the join of all `x` with `op r x ⊑ b`, i.e. the right adjoint of
`op r ·`. For `op = (· ⊓ ·)` this is Heyting implication `himp`. -/
noncomputable def imp (op : R → α → α) (r : R) (b : α) : α :=
  CompleteLattice.sup (fun x => op r x ⊑ b)

/-- `imp op r b` is the least upper bound of `{x | op r x ⊑ b}` by definition. -/
theorem imp_spec (op : R → α → α) (r : R) (b : α) : is_sup (fun x : α => op r x ⊑ b) (imp op r b) :=
  CompleteLattice.sup_spec (fun x : α => op r x ⊑ b)

/-- Unit, free from the definition of `imp`: `op r x ⊑ b → x ⊑ imp op r b`. Needs only
`CompleteLattice`. -/
theorem le_imp (op : R → α → α) {r : R} {b x : α} (h : op r x ⊑ b) : x ⊑ imp op r b :=
  le_sup (c := fun x : α => op r x ⊑ b) h

/-- Counit (modus ponens), from distributivity: `op r (imp op r b) ⊑ b`. -/
theorem imp_le (op : R → α → α) [Residuated R α op] (r : R) (b : α) : op r (imp op r b) ⊑ b := by
  unfold imp
  rw [Residuated.op_sup (op := op)]
  apply sup_le
  rintro y ⟨x, hx, rfl⟩
  exact hx

/-- Monotonicity of `op r ·`, derived from join preservation. -/
theorem op_mono_right (op : R → α → α) [Residuated R α op] (r : R) {b b' : α} (h : b ⊑ b') :
    op r b ⊑ op r b' := by
  have hsup : (CompleteLattice.sup (fun y => y ⊑ b')) = b' :=
    is_sup_unique (CompleteLattice.sup_spec _)
      (fun x => ⟨fun hb' y hy => PartialOrder.rel_trans hy hb',
                 fun hy => hy b' PartialOrder.rel_refl⟩)
  calc op r b ⊑ op r (CompleteLattice.sup (fun y => y ⊑ b')) := by
            rw [Residuated.op_sup (op := op)]; exact le_sup _ ⟨b, h, rfl⟩
    _ = op r b' := by rw [hsup]

/-- The **frame closure** of a post-transformer `k` with respect to a residuated `op`: the meet over
all resources `r` of the `r`-residual of `k` framed by `r`. It internalizes the frame rule into any
`k` (see `frameClosure_frames`), with no assumption on `k`. A weakest precondition built as
`frameClosure op (fun Q => bwp x Q E)` satisfies the `op`-frame rule by construction. -/
noncomputable def frameClosure {β : Type w} (op : R → α → α) (k : (β → α) → α) (Q : β → α) : α :=
  ⨅ r, imp op r (k (fun a => op r (Q a)))

/-- The frame rule, internalized: for any residuated `op` whose resources compose by `comp` with
the action law `op (comp r r') = op r ∘ op r'`, and any post-transformer `k`,
`op F (frameClosure op k Q) ⊑ frameClosure op k (fun a => op F (Q a))`. -/
theorem frameClosure_frames {β : Type w} (op : R → α → α) [Residuated R α op]
    (comp : R → R → R) (hact : ∀ r r' a, op (comp r r') a = op r (op r' a))
    (k : (β → α) → α) (Q : β → α) (F : R) :
    op F (frameClosure op k Q) ⊑ frameClosure op k (fun a => op F (Q a)) := by
  apply le_iInf
  intro F'
  apply le_imp op
  rw [← hact F' F (frameClosure op k Q)]
  refine PartialOrder.rel_trans (op_mono_right op (comp F' F) (iInf_le _ (comp F' F))) ?_
  refine PartialOrder.rel_trans (imp_le op (comp F' F) _) ?_
  apply PartialOrder.rel_of_eq
  congr 1
  funext a
  rw [hact F' F (Q a)]

end Residuated

end Lean.Order

end -- public section
