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

universe u v

variable {α : Type u} [CompleteLattice α]

/--
A complete lattice is *residuated for `op`* if `op a ·` distributes over arbitrary joins:
`op a (sup s) = sup { op a x | x ∈ s }`. This makes each `op a ·` a lower adjoint, so it has a right
adjoint `Residuated.imp op a ·` (its implication).

Example: Often the lattice meet, `op = (· ⊓ ·)`, is distributive, in which case the notion of
implication is Heyting implication `himp`.

Another example is separating conjunction `⋆` in separation logic. Here, the corresponding notion of
implication is separating implication `-⋆`.
-/
class Residuated (α : Type u) [CompleteLattice α] (op : α → α → α) : Prop where
  /-- The operation preserves joins. -/
  op_sup (a : α) (s : α → Prop) :
    op a (CompleteLattice.sup s) = CompleteLattice.sup (fun y => ∃ x, s x ∧ y = op a x)

namespace Residuated

/-- The implication of `op`: the join of all `x` with `op a x ⊑ b`, i.e. the right adjoint of
`op a ·`. For `op = (· ⊓ ·)` this is Heyting implication `himp`. -/
noncomputable def imp (op : α → α → α) (a b : α) : α := CompleteLattice.sup (fun x => op a x ⊑ b)

/-- `imp op a b` is the least upper bound of `{x | op a x ⊑ b}` by definition. -/
theorem imp_spec (op : α → α → α) (a b : α) : is_sup (fun x : α => op a x ⊑ b) (imp op a b) :=
  CompleteLattice.sup_spec (fun x : α => op a x ⊑ b)

/-- Unit, free from the definition of `imp`: `op a x ⊑ b → x ⊑ imp op a b`. Needs only
`CompleteLattice`. -/
theorem le_imp (op : α → α → α) {a b x : α} (h : op a x ⊑ b) : x ⊑ imp op a b :=
  le_sup (c := fun x : α => op a x ⊑ b) h

/-- Counit (modus ponens), from distributivity: `op a (imp op a b) ⊑ b`. -/
theorem imp_le (op : α → α → α) [Residuated α op] (a b : α) : op a (imp op a b) ⊑ b := by
  unfold imp
  rw [Residuated.op_sup (op := op)]
  apply sup_le
  rintro y ⟨x, hx, rfl⟩
  exact hx

/-- Monotonicity of `op a ·`, derived from join preservation. -/
theorem op_mono_right (op : α → α → α) [Residuated α op] (a : α) {b b' : α} (h : b ⊑ b') :
    op a b ⊑ op a b' := by
  have hsup : (CompleteLattice.sup (fun y => y ⊑ b')) = b' :=
    is_sup_unique (CompleteLattice.sup_spec _)
      (fun x => ⟨fun hb' y hy => PartialOrder.rel_trans hy hb',
                 fun hy => hy b' PartialOrder.rel_refl⟩)
  calc op a b ⊑ op a (CompleteLattice.sup (fun y => y ⊑ b')) := by
            rw [Residuated.op_sup (op := op)]; exact le_sup _ ⟨b, h, rfl⟩
    _ = op a b' := by rw [hsup]

/-- The **frame closure** of a post-transformer `k` with respect to a residuated `op`: the meet over
all frames `F` of the `F`-residual of `k` framed by `F`. It internalizes the frame rule into any `k`
(see `frameClosure_frames`), with no assumption on `k`. A weakest precondition built as
`frameClosure op (fun Q => bwp x Q E)` satisfies the `op`-frame rule by construction. -/
noncomputable def frameClosure {β : Type v} (op : α → α → α) (k : (β → α) → α) (Q : β → α) : α :=
  ⨅ F, imp op F (k (fun a => op (Q a) F))

/-- The frame rule, internalized: for any commutative, associative, residuated `op` and any
post-transformer `k`, `op F (frameClosure op k Q) ⊑ frameClosure op k (fun a => op F (Q a))`. -/
theorem frameClosure_frames {β : Type v} (op : α → α → α) [Residuated α op]
    [Std.Commutative op] [Std.Associative op] (k : (β → α) → α) (Q : β → α) (F : α) :
    op F (frameClosure op k Q) ⊑ frameClosure op k (fun a => op F (Q a)) := by
  apply le_iInf
  intro F'
  apply le_imp op
  rw [show op F' (op F (frameClosure op k Q)) = op (op F' F) (frameClosure op k Q) from
    (Std.Associative.assoc F' F (frameClosure op k Q)).symm]
  refine PartialOrder.rel_trans (op_mono_right op (op F' F) (iInf_le _ (op F' F))) ?_
  refine PartialOrder.rel_trans (imp_le op (op F' F) _) ?_
  apply PartialOrder.rel_of_eq
  have hpost : (fun a => op (Q a) (op F' F)) = (fun a => op (op F (Q a)) F') := by
    funext a
    rw [show op F' F = op F F' from Std.Commutative.comm (op := op) F' F]
    rw [← Std.Associative.assoc (op := op) (Q a) F F']
    rw [show op (Q a) F = op F (Q a) from Std.Commutative.comm (op := op) (Q a) F]
  rw [hpost]

end Residuated

end Lean.Order

end -- public section
