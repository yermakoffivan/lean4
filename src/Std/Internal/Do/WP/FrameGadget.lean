/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Std.Internal.Do.WP.Frame
universe u v w z r
@[expose] public section

set_option linter.missingDocs true

open Lean.Order

namespace Std.Internal.Do.Gadget

variable {Prog : Type u} {Value : Type v} {Pred : Type w} {EPred : Type z}
  [Assertion Pred] [Assertion EPred] [WP Prog Value Pred EPred]

/-- Marks an already-framed program so `frames` patterns do not re-match it.
Stripped by `vcgen` before the real spec applies. -/
def skipFrame {α : Sort u} (a : α) : α := a

/-- `meet_wp_imp_le_wp` with the program wrapped in `skipFrame`, the per-call spec `vcgen`
applies for a framed program. The frame `F` is the first explicit argument so that `vcgen` can
partially apply it (pinning `F`) and feed the result through the ordinary spec machinery, leaving
`x`, `epost`, `Q`, and `hframe` schematic. -/
theorem meet_wp_imp_le_wp_skipFrame [∀ a : Pred, PreservesSup (meet a)] (F : Pred) (x : Prog)
  (E : EPred) (Q : Value → Pred)
    (hframes : WP.Frames meet x F) :
    F ⊓ wp (skipFrame x) (fun a => F ⇨ Q a) E ⊑ wp x Q E := by
  refine PartialOrder.rel_trans (hframes.conj_wp_le_wp_conj (fun a => F ⇨ Q a) E) ?_
  apply WP.wp_consequence
  intro a
  exact meet_himp_le

/-- `meet_wp_imp_le_wp_skipFrame` for an arbitrary frame operator `conj` whose slices preserve `Sup`,
the per-call spec `vcgen` applies for a program framed with a non-meet operator. `conj` is the first
explicit argument so that `vcgen` can pin it (to the inferred frame operator) while leaving `F`, `x`,
`E`, `Q`, and `hframes` schematic. -/
theorem wp_imp_le_wp_skipFrame {R : Type r} (conj : R → Pred → Pred) [∀ r, PreservesSup (conj r)]
  (F : R) (x : Prog) (E : EPred) (Q : Value → Pred)
    (hframes : WP.Frames conj x F) :
    conj F (wp (skipFrame x) (fun a => PreservesSup.upperAdjoint (conj F) (Q a)) E) ⊑ wp x Q E :=
  hframes.conj_wp_imp_le_wp _ _ _

end Std.Internal.Do.Gadget
