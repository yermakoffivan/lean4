/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
import Lean
import Std.Internal
import Std.Tactic.Do

set_option mvcgen.warning false
set_option grind.warning false

/-!
# A frame-internalizing cost weakest precondition

This file demonstrates a *residuated* frame operator that is **not** the lattice meet, and a cost
weakest precondition that **bakes the frame rule in**. The monad is `TickM`, Cslib's cost-counting
monad: `tick` incurs one unit of cost. Assertions are `Nat → Prop`, predicates on the accumulated
cost.

The frame conjunction splits a cost additively:
`costConj a b = fun n => ∃ i j, i + j = n ∧ a i ∧ b j`, the convolution of two cost assertions over
the counter. This is the separation-logic-style `⋆` for the resource `Nat`, and its residual
`Residuated.imp costConj a b = fun j => ∀ i, a i → b (i + j)` is the corresponding magic wand `-⋆`.

Part 1 is the reusable core, `instance : Residuated (Nat → Prop) costConj`, together with the
additive `Std.Commutative`/`Std.Associative` structure.

Part 2 builds the cost monad `TickM := StateM Nat` and the frame-internalizing wp `TickM.wp`.
Inlining the base `StateM` wp, `TickM.wp x Q n = ∀ d, wp x (fun a n' => ∃ k, n' = k + d ∧ Q a k)
EPost.Nil.mk (n + d)`. The universally quantified offset `d` and the constraint `n' = k + d` demand
that the cost grow by *exactly* `d` beyond what the program itself incurs: every program must thread
the frame cost `d` through untouched. Consequences: `TickM.wp tick Q n = Q () (n + 1)` (the shift is
independent of `d`), while a cost-discarding program has `TickM.wp _ Q n = False` for every
postcondition (instantiating `d := 1` makes `∃ k, 0 = k + 1` unsatisfiable).

Part 3 is the payoff: `tickFrames` proves `costConj F (TickM.wp x Q) ⊑ TickM.wp x (fun a =>
costConj F (Q a))` for **every** program `x` and frame `F`, with no cost-additivity hypothesis. The
frame rule is internal to `TickM.wp`. A recovery example then sharpens a lossy `tick` spec to
`m ≤ n + 1` using the frame `fun m => m ≤ n`, mirroring `tests/elab/vcgenFrames.lean`.

Part 4 generalizes: `frameWp op bwp x Q E` internalizes the frame rule for **any** residuated operator
`op` and base wp `bwp`, as the meet `⨅ F, Residuated.imp op F (bwp x (fun a => op (Q a) F) E)` over all
frames `F`. `TickM.wp` is the point-frame specialization at `op = costConj` with frames
`F = (· = d)`, and `frameWp_frames` is the general internalized frame rule.
-/

open Lean Order Meta Elab Tactic Sym Std Internal.Do

/-! ## Part 1: the cost `Residuated` instance (reusable core) -/

/-- `⨆` over a `Prop`-valued predicate is the existential `∃ p, c p ∧ p`. -/
theorem sup_prop_eq (c : Prop → Prop) : ((CompleteLattice.sup c) : Prop) = ∃ p, c p ∧ p :=
  Lean.Order.is_sup_unique (CompleteLattice.sup_spec c) (propSup_is_sup c)

/-- Pointwise membership in `CompleteLattice.sup s` on the `Nat → Prop` lattice. -/
theorem sup_fun_apply (s : (Nat → Prop) → Prop) (n : Nat) :
    (CompleteLattice.sup s) n = ∃ f, s f ∧ f n := by
  rw [sup_apply, sup_prop_eq]
  apply propext
  constructor
  · rintro ⟨p, ⟨f, hf, rfl⟩, hp⟩; exact ⟨f, hf, hp⟩
  · rintro ⟨f, hf, hfn⟩; exact ⟨f n, ⟨f, hf, rfl⟩, hfn⟩

/-- Additive convolution of two cost assertions over the cost counter: `op a b n` holds iff the
cost `n` splits as `i + j` with `a i` and `b j`. This is separating conjunction for the `Nat`
resource. -/
def costConj (a b : Nat → Prop) : Nat → Prop := fun n => ∃ i j, i + j = n ∧ a i ∧ b j

@[inherit_doc costConj] local infixr:67 " ⋆ " => costConj

/-- The cost magic wand: the residual of `costConj`, `a -⋆ b = fun j => ∀ i, a i → b (i + j)`. -/
local infixr:60 " -⋆ " => Lean.Order.Residuated.imp costConj

instance : Std.Commutative costConj := ⟨by
  intro a b
  funext n
  apply propext
  constructor
  · rintro ⟨i, j, rfl, ha, hb⟩; exact ⟨j, i, Nat.add_comm j i, hb, ha⟩
  · rintro ⟨i, j, rfl, hb, ha⟩; exact ⟨j, i, Nat.add_comm j i, ha, hb⟩⟩

/-- Additive associativity of `costConj`: regrouping the cost split. -/
instance : Std.Associative costConj := ⟨by
  intro a b c
  funext n
  apply propext
  constructor
  · rintro ⟨ij, k, rfl, ⟨i, j, rfl, ha, hb⟩, hc⟩
    exact ⟨i, j + k, by omega, ha, j, k, rfl, hb, hc⟩
  · rintro ⟨i, jk, rfl, ha, ⟨j, k, rfl, hb, hc⟩⟩
    exact ⟨i + j, k, by omega, ⟨i, j, rfl, ha, hb⟩, hc⟩⟩

instance : Residuated (Nat → Prop) costConj where
  op_sup a s := by
    funext n
    -- LHS: `costConj a (CompleteLattice.sup s) n`, RHS: `(CompleteLattice.sup { costConj a x | x ∈ s }) n`.
    show costConj a (CompleteLattice.sup s) n = _
    rw [sup_fun_apply]
    apply propext
    constructor
    · rintro ⟨i, j, hij, ha, hsup⟩
      -- `hsup : (CompleteLattice.sup s) j`, i.e. there is `f ∈ s` with `f j`.
      rw [sup_fun_apply] at hsup
      obtain ⟨f, hf, hfj⟩ := hsup
      refine ⟨costConj a f, ⟨f, hf, rfl⟩, ?_⟩
      exact ⟨i, j, hij, ha, hfj⟩
    · rintro ⟨g, ⟨f, hf, rfl⟩, i, j, hij, ha, hfj⟩
      refine ⟨i, j, hij, ha, ?_⟩
      rw [sup_fun_apply]
      exact ⟨f, hf, hfj⟩

/-- Sanity check: the residual of `costConj` is the cost magic wand
`fun j => ∀ i, a i → b (i + j)`. -/
@[grind =]
theorem costConj_imp (a b : Nat → Prop) :
    a -⋆ b = (fun j => ∀ i, a i → b (i + j)) := by
  apply PartialOrder.rel_antisymm
  · -- `imp ⊑ wand`: the residual is below any upper bound of `{x | op a x ⊑ b}`.
    intro j hj i hai
    -- `Residuated.imp costConj a b j` holds; unfold the sup pointwise.
    rw [Residuated.imp, sup_fun_apply] at hj
    obtain ⟨x, hx, hxj⟩ := hj
    -- `hx : costConj a x ⊑ b`, `hxj : x j`.
    exact hx (i + j) ⟨i, j, rfl, hai, hxj⟩
  · -- `wand ⊑ imp`: the wand is in the set `{x | op a x ⊑ b}`, hence below the sup.
    refine Residuated.le_imp costConj (a := a) (b := b) (x := fun j => ∀ i, a i → b (i + j)) ?_
    intro n
    rintro ⟨i, j, rfl, hai, hwand⟩
    exact hwand i hai

/-- The point-frame cost split, the `costConj` backward rule for `vcgen`: to prove
`pre ⊑ costConj (· = c) R`, prove `pre ⊑ fun n => c ≤ n ∧ R (n - c)`. The residual `R` runs with the
frame cost `c` removed; the leftover `∧` is decomposed by the meet machinery. -/
theorem le_costConj_point (c : Nat) (R : Nat → Prop) {pre : Nat → Prop}
    (h : pre ⊑ fun n => c ≤ n ∧ R (n - c)) :
    pre ⊑ costConj (· = c) R := by
  intro n hpre
  obtain ⟨hle, hR⟩ := h n hpre
  exact ⟨c, n - c, by omega, rfl, hR⟩

/-! ## Part 2: the cost monad `TickM` and the frame-internalizing `TickM.wp` -/

/-- A cost-tracking monad: a state monad whose state is the accumulated cost counter. A `def` wrapper
(not an `abbrev`) so it carries its own frame-internalizing `WP` interpretation, distinct from the
`StateM` one it is built from, and so `vcgen` reasons about `TickM.wp`. -/
def TickM (α : Type) : Type := StateM Nat α

instance : Monad TickM := inferInstanceAs (Monad (StateM Nat))

/-- A `TickM` program as the underlying `StateM` program, whose `WP` is the base (non-framed) wp. -/
@[reducible] def TickM.run {α : Type} (x : TickM α) : StateM Nat α := x

/-- The cost primitive: incur one unit of cost by incrementing the counter. -/
def tick : TickM Unit := show StateM Nat Unit from modify (· + 1)

/-- The **frame-internalizing** cost weakest precondition: the `Residuated.frameClosure` of `costConj`
over the base `StateM` wp `WP.wp x.run · E`. The frame rule is internal by construction (`tickFrames`).
The point-frame characterization is `TickM.wp_eq_forall`. -/
def TickM.wp {α : Type} (x : TickM α) (Q : α → Nat → Prop) (E : EPost.Nil) : Nat → Prop :=
  Residuated.frameClosure costConj (WP.wp x.run · E) Q

/-- The point-frame characterization: the meet over *all* frames collapses to the point frames
`F = (· = d)`, so the cost grows by exactly the frame offset `d` beyond the program's own. -/
theorem TickM.wp_eq_forall {α : Type} (x : TickM α) (Q : α → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    TickM.wp x Q E n ↔ ∀ d, WP.wp x.run (fun a n' => ∃ k, n' = k + d ∧ Q a k) E (n + d) := by
  simp only [TickM.wp, Residuated.frameClosure, iInf_apply, iInf_prop_eq_forall, costConj_imp]
  constructor
  · -- `frameClosure → ∀d`: instantiate the universal frame at the point frame `(· = d)`.
    intro h d
    have hd := h (· = d) d rfl
    rw [show d + n = n + d by omega] at hd
    refine WP.wp_consequence x.run _ _ E (fun a n' => ?_) (n + d) hd
    rintro ⟨s, t, rfl, hQ, rfl⟩
    exact ⟨s, by omega, hQ⟩
  · -- `∀d → frameClosure`: a point frame `F` at the offset `i := d` discharges the obligation.
    intro h F i hFi
    have hi := h i
    rw [show n + i = i + n by omega] at hi
    refine WP.wp_consequence x.run _ _ E (fun a n' => ?_) (i + n) hi
    rintro ⟨k, rfl, hQ⟩
    exact ⟨k, i, by omega, hQ, hFi⟩

/-- Point evaluation of the base wp on `tick`: `tick` scores the post on the incremented counter. -/
theorem wp_tick_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    WP.wp tick.run Q E n = Q () (n + 1) := by
  simp only [TickM.run, tick, StateT.wp_apply_eq, StateT.run_modify]; rfl

/-- `TickM.wp tick` scores the post on the incremented counter, independent of the frame offset `d`:
the constraint `n + d + 1 = k + d` forces `k = n + 1`. -/
theorem TickM.wp_tick_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    TickM.wp tick Q E n = Q () (n + 1) := by
  apply propext
  rw [TickM.wp_eq_forall]
  constructor
  · intro h
    have h0 := h 0
    rw [_root_.wp_tick_apply_eq] at h0
    obtain ⟨k, hk, hQ⟩ := h0
    simpa [show k = n + 1 by omega] using hQ
  · intro hQ d
    rw [_root_.wp_tick_apply_eq]
    exact ⟨n + 1, by omega, hQ⟩

/-! ### A cost-discarding program has an unsatisfiable `TickM.wp` -/

/-- A cost-*discarding* program: it throws away the accumulated cost, resetting the counter to `0`. -/
def dropCost : TickM Unit := show StateM Nat Unit from set 0

theorem wp_dropCost_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    WP.wp dropCost.run Q E n = Q () 0 := by
  simp only [TickM.run, dropCost, StateT.wp_apply_eq, StateT.run_set]; rfl

/-- The non-additive program `dropCost` has `TickM.wp _ Q n = False` for **every** postcondition
`Q`: instantiating the frame offset at `d := 1` leaves `∃ k, 0 = k + 1`, which is unsatisfiable. This is
the "cost-discarding ⟹ `False` wp" point: `TickM.wp` rejects programs that lose frame cost. -/
example (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) : TickM.wp dropCost Q E n = False := by
  apply propext
  rw [TickM.wp_eq_forall]
  constructor
  · intro h
    have := h 1
    rw [wp_dropCost_apply_eq] at this
    obtain ⟨k, hk, _⟩ := this
    omega
  · exact False.elim

/-! ## Part 3: the internalized frame rule for `TickM.wp` -/

/-- Consequence rule for `TickM.wp`: weakening the postcondition weakens the precondition. -/
theorem TickM.wp_consequence {α : Type} (x : TickM α) {Q Q' : α → Nat → Prop} (E : EPost.Nil) (n : Nat)
    (h : ∀ a n', Q a n' → Q' a n') (hx : TickM.wp x Q E n) : TickM.wp x Q' E n := by
  rw [TickM.wp_eq_forall] at hx ⊢
  intro d
  refine WP.wp_consequence x.run _ _ E (fun a n' => ?_) (n + d) (hx d)
  rintro ⟨k, hk, hQ⟩
  exact ⟨k, hk, h a k hQ⟩

/-- `TickM.wp` is the `Residuated.frameClosure` of `costConj` over the base `StateM` wp, by
definition. -/
theorem TickM.wp_eq_frameClosure {α : Type} (x : TickM α) (Q : α → Nat → Prop) (E : EPost.Nil) :
    TickM.wp x Q E = Residuated.frameClosure costConj (WP.wp x.run · E) Q := rfl

/-- The `WP` interpretation of `TickM` is the frame-internalizing `TickM.wp`. Kept a `def` (the `WP`
instance is derived from the `WPMonad` instance below) so there is a single `WP (TickM α)`, letting
the generic `bind`/`pure` specs unify against `TickM` goals. -/
@[reducible] def TickM.instWP {α : Type} : WP (TickM α) α (Nat → Prop) EPost.Nil where
  wpTrans x := ⟨fun Q E => TickM.wp x Q E⟩
  wp_trans_monotone x post post' epost epost' _ hpost := by
    intro n hn
    exact TickM.wp_consequence x epost n (fun a n' => hpost a n') hn

instance : LawfulMonad TickM := inferInstanceAs (LawfulMonad (StateM Nat))

/-- `TickM` is a `WPMonad`: `pure`/`bind` are sound for `TickM.wp`. The cost frame `d` threads
through both: `pure` keeps it, and `bind` passes the same `d` to the continuation. -/
instance TickM.instWPMonad : WPMonad TickM (Nat → Prop) EPost.Nil where
  toWP _ := TickM.instWP
  pure_le_wp_pure x post E := by
    intro n h
    show TickM.wp (pure x) post E n
    rw [TickM.wp_eq_forall]
    intro d
    exact WPMonad.pure_le_wp_pure (m := StateM Nat) x _ E (n + d) ⟨n, rfl, h⟩
  bind_le_wp_bind x f post E := by
    intro n hn
    have hn' := (TickM.wp_eq_forall x (fun a => TickM.wp (f a) post E) E n).mp hn
    show TickM.wp (x >>= f) post E n
    rw [TickM.wp_eq_forall]
    intro d
    refine WPMonad.bind_le_wp_bind (m := StateM Nat) x.run (fun a => (f a).run)
      (fun b n' => ∃ k, n' = k + d ∧ post b k) E (n + d) ?_
    refine WP.wp_consequence x.run _ _ E (fun a n1 => ?_) (n + d) (hn' d)
    rintro ⟨k, rfl, hk⟩
    rw [TickM.wp_eq_forall] at hk
    exact hk d

/-- **The frame rule, internalized**, as a corollary of `WP.Frames.of_frameClosure`: since `TickM.wp`
is a `Residuated.frameClosure`, *every* program `x` frames *every* `F` with respect to `costConj`.
No cost-additivity hypothesis is required. -/
@[grind .]
theorem frames_costConj {α : Type} (x : TickM α) (F : Nat → Prop) : WP.Frames costConj x F :=
  WP.Frames.of_frameClosure costConj ⟨fun y E Q' => WP.wp y.run Q' E, fun _ _ _ => rfl⟩

theorem tickFrames {α : Type} (x : TickM α) (F : Nat → Prop) (Q : α → Nat → Prop) :
    F ⋆ TickM.wp x Q EPost.Nil.mk ⊑ TickM.wp x (fun a => F ⋆ Q a) EPost.Nil.mk :=
  (frames_costConj x F).conj_wp_le_wp_conj Q EPost.Nil.mk

/-- The framed-spec corollary, mirroring `WP.Frames.conj_wp_imp_le_wp`: running `x` under the magic
wand `F -⋆ Q` and re-conjoining the frame `F` is a precondition for running `x` under `Q`. -/
theorem tickFrames_imp {α : Type} (x : TickM α) (F : Nat → Prop) (Q : α → Nat → Prop) :
    F ⋆ TickM.wp x (fun a => F -⋆ Q a) EPost.Nil.mk ⊑ TickM.wp x Q EPost.Nil.mk := by
  refine PartialOrder.rel_trans (tickFrames x F _) ?_
  intro n hn
  refine TickM.wp_consequence x EPost.Nil.mk n (fun a n' => ?_) hn
  -- `F ⋆ (F -⋆ Q a) ⊑ Q a` by the residual counit.
  exact Residuated.imp_le costConj F (Q a) n'

/-- A *lossy* cost spec for `tick`: from any input it only asserts the post at the incremented
counter, dropping the bound relating the output cost to the input. -/
theorem tick_spec_lossy (Q : Unit → Nat → Prop) (n : Nat)
    (h : ∀ m, Q () (m + 1)) : TickM.wp tick Q EPost.Nil.mk n := by
  rw [TickM.wp_tick_apply_eq]
  exact h n

/-- The frame `fun m => m ≤ n` ("cost at most `n` so far") recovers the sharp cost bound
`m ≤ n + 1` that the lossy spec drops. `tickFrames_imp` reduces it to running `tick` under the wand
`F -⋆ Q`: the frame holds the whole input cost, and the wand discharges the residual. -/
theorem recovers_cost (n : Nat) :
    (fun m => m ≤ n) ⊑ TickM.wp tick (fun _ m => m ≤ n + 1) EPost.Nil.mk := by
  refine PartialOrder.rel_trans ?_ (tickFrames_imp tick (fun m => m ≤ n) (fun _ m => m ≤ n + 1))
  -- Precondition `m ≤ n` is `(· ≤ n) ⋆ TickM.wp tick (F -⋆ Q)`: the frame holds the whole cost.
  intro m hm
  refine ⟨m, 0, by omega, hm, ?_⟩
  rw [TickM.wp_tick_apply_eq, costConj_imp]
  intro i hi
  omega

-- The lossy spec is genuinely lossy: dropping the frame and applying `tick_spec_lossy` directly leaves
-- the false obligation `∀ m, m + 1 ≤ n + 1` (with no bound on `m`). The frame `tickFrames_imp` is
-- what carries the input cost into the post.
example (n : Nat) : (fun m => m ≤ n) ⊑ TickM.wp tick (fun _ m => m ≤ n + 1) EPost.Nil.mk := by
  fail_if_success
    (refine PartialOrder.rel_trans (le_top _) ?_
     intro m _
     exact tick_spec_lossy _ _ (by intro k; omega))
  exact recovers_cost n

/-! ## Part 5: end-to-end `vcgen` via a registered `@[frameproc]`

`tickFrameProc` infers the point frame `(· = n)` from the first excess state argument (the cost
counter `n`) on the `Nat → Prop` lattice. Registered with `@[frameproc]`, it drives `vcgen` framing
on `TickM` programs with no `frames` clause: `vcgen` applies the `costConj` gadget, the registered
`costSplit` decomposes `pre ⊑ costConj (· = n) R n` into a budget side goal and a cost-shifted
residual, and the meet machinery finishes. -/

open Lean.Elab.Tactic.Do.Internal Lean.Elab.Tactic.Do.Internal.VCGen

/-- The applied (`Prop`-level) point-frame split, used as a direct (`applyLemma := none`) lattice
split: to prove `pre ⊑ costConj (· = c) R n`, prove `pre ⊑ (c ≤ n) ⊓ R (n - c)`. The residual `R`
runs with the frame cost `c` removed; the leftover meet is decomposed by the meet machinery. -/
theorem le_costConj_point_apply {pre : Prop} (c n : Nat) (R : Nat → Prop)
    (h : pre ⊑ ((c ≤ n) ⊓ R (n - c))) :
    pre ⊑ costConj (· = c) R n := by
  intro hpre
  have hm := h hpre
  rw [meet_prop_eq_and] at hm
  obtain ⟨hle, hR⟩ := hm
  exact ⟨c, n - c, by omega, rfl, hR⟩

/-- The applied point-frame split for the cost magic wand, the `costConj` *residual* backward rule:
to prove `pre ⊑ ((· = c) -⋆ R) n`, prove `pre ⊑ R (n + c)`. The framed continuation runs with the
frame cost `c` added back. -/
theorem le_imp_costConj_point_apply {pre : Prop} (c n : Nat) (R : Nat → Prop)
    (h : pre ⊑ R (n + c)) :
    pre ⊑ Residuated.imp costConj (· = c) R n := by
  intro hpre
  simp only [costConj_imp]
  intro i hi
  subst hi
  rw [Nat.add_comm]
  exact h hpre

/-- Exact spec for `tick`, registered so `vcgen` can decompose `tick` calls. -/
@[spec] theorem tick_spec (post : Unit → Nat → Prop) :
    ⦃ fun n => post () (n + 1) ⦄ tick ⦃ post ⦄ := by
  constructor
  intro n h
  show TickM.wp tick post _ n
  rw [TickM.wp_tick_apply_eq]
  exact h

/-- The frame inference procedure for `TickM`: return the point frame `(· = n)` where `n` is the
first excess state argument (the available cost). -/
def tickFrameProc : FrameInferenceProc := fun _pre info => do
  let some cost := info.excessArgs[0]? | return none
  let frame ← Meta.withLocalDeclD `c (mkConst ``Nat) fun c => do
    Meta.mkLambdaFVars #[c] (← Meta.mkEq c cost)
  return some frame

/-- The direct lattice split for `costConj`, decomposing `pre ⊑ costConj (· = c) R n` via
`le_costConj_point_apply` (no pointwise distribution). -/
def costSplit : LatticeSplit := { relLemma := ``le_costConj_point_apply }

/-- The direct lattice split for the `costConj` residual wand, decomposing
`pre ⊑ Residuated.imp costConj (· = c) R n` via `le_imp_costConj_point_apply`. -/
def costImpSplit : LatticeSplit := { relLemma := ``le_imp_costConj_point_apply }

/-- Register the cost frame inference procedure for `vcgen`, indexed by the `TickM` program type. -/
@[frameproc] def tickFP : FrameProc where
  prog := ``TickM
  proc := tickFrameProc
  conj := ``costConj
  op := fun _ => pure (mkConst ``costConj)
  split := costSplit
  impSplit := costImpSplit

/-- End-to-end: plain `vcgen` infers the cost frame `(· = n)`, applies the `costConj` gadget, fires
the registered `costSplit`, and the meet machinery closes the residual. -/
example : ⦃ (⊤ : Nat → Prop) ⦄ tick ⦃ fun _ => (⊤ : Nat → Prop) ⦄ := by
  vcgen with finish [top_apply]

/-! ## Part 6: a loop over a list, framed automatically across calls -/

/-- Tick once per list element. -/
def tickList {α : Type} (xs : List α) : TickM Unit := do
  for _ in xs do
    tick

/-- A *stopwatch* spec: from zero accumulated cost, `prog` ends at cost `n`. -/
local syntax:60 term:61 " ⏱ " term:61 : term
local macro_rules
  | `($prog:term ⏱ $n:term) => `(⦃ (· = 0) ⦄ $prog ⦃ fun _ m => m = $n ⦄)

/-- The stopwatch spec for `tickList`: timed from zero, it costs exactly `xs.length`. Concrete (not
schematic in the post), so `vcgen` only frames it where the start cost is not zero. -/
@[spec] theorem tickList_spec {α : Type} (xs : List α) : tickList xs ⏱ xs.length := by
  unfold tickList
  vcgen invariants
  | inv1 => fun cursor _ n => n = cursor.pos
  with finish

/-- Two loops in sequence, timed from zero: plain `vcgen` frames the second call by the cost the first
accrued (the first starts at zero, so it is not framed), with no `frames` annotation. -/
example {α : Type} (xs ys : List α) :
    (do tickList xs; tickList ys : TickM Unit) ⏱ (xs.length + ys.length) := by
  vcgen with finish

/-- The same goal, framed **explicitly**: the `frames` clause names the cost frame for each call. The
registered `@[frameproc]` supplies the `costConj` operator, so these are `costConj` frames, not meet. -/
example {α : Type} (xs ys : List α) :
    (do tickList xs; tickList ys : TickM Unit) ⏱ (xs.length + ys.length) := by
  vcgen frames
  | tickList xs => (· = 0)
  | tickList ys => (· = xs.length)
  with finish
