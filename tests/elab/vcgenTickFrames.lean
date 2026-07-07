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
weakest precondition that **bakes the frame rule in**. The cost is tracked by the transformer
`TickT m := StateT Nat m` over an arbitrary base monad `m` (with `TickM := TickT Id`): `tick` incurs
one unit of cost. Cost assertions are `Nat → L` for an arbitrary assertion lattice `L`, predicates on
the accumulated cost valued in `L`.

The frame operator takes a plain **cost** as its resource: `costConj r b = fun n => ⌜r ≤ n⌝ ⊓ b (n - r)`
holds the budget `r` aside and runs `b` on the remaining cost `n - r`. This is the separation-logic
`⋆` for the resource type `R = Nat`, and its residual `PreservesSup.upperAdjoint (costConj r) b = fun m => b (m + r)`
is the corresponding magic wand `-⋆`, a plain cost shift.

Part 1 is the reusable core, generic over any `[CompleteLattice L]`: `instance (r) : PreservesSup (costConj r)`,
together with the additive action law `costConj_add` that composes two budgets.

Part 2 builds the frame-internalizing wp `TickT.wp` as the `PreservesSup.frameClosure` of `costConj`
over the base wp, generic in the base monad `m` and its assertion lattice. Its point characterization
`TickT.wp_eq_iInf` is
`TickT.wp x Q E n = ⨅ r, WP.wp x.run (fun a m => ⌜r ≤ m⌝ ⊓ Q a (m - r)) E (n + r)`: every program must
thread the held budget `r` through untouched, so on the `Id` base `TickM.wp tick Q n = Q () (n + 1)`
while a cost-discarding program has `TickM.wp _ Q n = False` for every postcondition.

Part 3 is the payoff: since `TickT.wp` is a `frameClosure`, *every* program frames *every* budget
`F : Nat` with respect to `costConj`, with no cost-additivity hypothesis (`frames_costConj`).

Part 5 registers a `@[frameproc]` so plain `vcgen` infers the budget from the current cost and frames
`TickM` calls automatically; Part 6 chains two loops and frames the second by the cost the first
accrued.
-/

open Lean Order Meta Elab Tactic Sym Std Internal.Do Std.Internal.Do.CompleteLattice

/-! ## Part 1: the cost `PreservesSup` instance (reusable core) -/

variable {L : Type} [CompleteLattice L]

/-- The cost frame operator: hold the budget `r` aside and run `b` on the remaining cost.
`costConj r b n` is `⌜r ≤ n⌝ ⊓ b (n - r)`: at least `r` cost available and `b` holds of the rest.
This is separating conjunction for the `Nat` resource, over any assertion lattice. -/
noncomputable def costConj (r : Nat) (b : Nat → L) : Nat → L := fun n => ⌜r ≤ n⌝ ⊓ b (n - r)

@[inherit_doc costConj] local infixr:67 " ⋆ " => costConj

/-- Pointwise unfolding of `costConj`, so `grind` discharges a point-framed frame condition
`costConj r (fun u => ⌜u = k⌝ ⊓ P) ⊑ Q`: `costConj r` shifts the point-mass `k` to `k + r`. -/
@[grind =] theorem costConj_apply (r : Nat) (b : Nat → L) (n : Nat) :
    costConj r b n = ⌜r ≤ n⌝ ⊓ b (n - r) := rfl

/-- The guard `⌜p⌝ ⊓ ·` preserves arbitrary sups, for any complete lattice, because `⌜p⌝` is `⊤`/`⊥`. -/
theorem ofProp_meet_sup (p : Prop) (X : L → Prop) :
    ⌜p⌝ ⊓ CompleteLattice.sup X
      = CompleteLattice.sup (fun y => ∃ x, X x ∧ y = ⌜p⌝ ⊓ x) := by
  apply PartialOrder.rel_antisymm
  · by_cases hp : p
    · apply PartialOrder.rel_trans (meet_le_right _ _)
      apply sup_le
      intro x hx
      refine PartialOrder.rel_trans ?_ (le_sup _ (y := ⌜p⌝ ⊓ x) ⟨x, hx, rfl⟩)
      exact le_meet _ _ _ (le_ofProp x p hp) PartialOrder.rel_refl
    · refine PartialOrder.rel_trans (meet_le_left _ _) ?_
      simp only [CompleteLattice.ofProp, hp, ↓reduceIte]
      exact bot_le _
  · apply sup_le
    rintro y ⟨x, hx, rfl⟩
    exact le_meet _ _ _ (meet_le_left _ _) (PartialOrder.rel_trans (meet_le_right _ _) (le_sup _ hx))

instance (r : Nat) : PreservesSup (costConj (L := L) r) where
  map_sup s := by
    funext n
    show ⌜r ≤ n⌝ ⊓ (CompleteLattice.sup s) (n - r)
      = CompleteLattice.sup (fun y => ∃ x, s x ∧ y = costConj r x) n
    simp only [sup_apply]
    rw [ofProp_meet_sup]
    congr 1
    funext z
    apply propext
    constructor
    · rintro ⟨w, ⟨f, hf, rfl⟩, rfl⟩
      exact ⟨costConj r f, ⟨f, hf, rfl⟩, rfl⟩
    · rintro ⟨g, ⟨f, hf, rfl⟩, rfl⟩
      exact ⟨f (n - r), ⟨f, hf, rfl⟩, rfl⟩

/-- The cost magic wand: the upper adjoint of the slice `costConj r`, a plain shift
`r -⋆ b = fun m => b (m + r)`. -/
local notation:60 lhs:61 " -⋆ " rhs:61 => Lean.Order.PreservesSup.upperAdjoint (costConj lhs) rhs

/-- Sanity check: the upper adjoint of `costConj r` is the cost magic wand `fun m => b (m + r)`, a
plain shift of the budget back onto the counter. -/
@[grind =]
theorem costConj_imp (r : Nat) (b : Nat → L) :
    r -⋆ b = (fun m => b (m + r)) := by
  apply PartialOrder.rel_antisymm
  · unfold PreservesSup.upperAdjoint
    apply sup_le
    intro x hx m
    have := hx (m + r)
    simp only [costConj, show m + r - r = m by omega] at this
    exact PartialOrder.rel_trans (le_meet _ _ _ (le_ofProp _ _ (by omega)) PartialOrder.rel_refl) this
  · refine PreservesSup.le_upperAdjoint (costConj r) (b := b) (x := fun m => b (m + r)) ?_
    intro n
    show (⌜r ≤ n⌝ ⊓ b (n - r + r)) ⊑ b n
    rw [CompleteLattice.ofProp_intro_r]
    intro hle
    rw [show n - r + r = n by omega]

/-- The additive action law of `costConj`: composing two budgets `r` and `r'` is the same as holding
them one after the other. -/
theorem costConj_add (r r' : Nat) (a : Nat → L) :
    costConj (r + r') a = costConj r (costConj r' a) := by
  funext n
  show ⌜r + r' ≤ n⌝ ⊓ a (n - (r + r')) = ⌜r ≤ n⌝ ⊓ (⌜r' ≤ n - r⌝ ⊓ a (n - r - r'))
  rw [Nat.sub_sub, ← meet_assoc, ofProp_and,
    show (r ≤ n ∧ r' ≤ n - r) = (r + r' ≤ n) from
      propext ⟨fun ⟨_, _⟩ => by omega, fun h => ⟨by omega, by omega⟩⟩]

/-! ## Part 2: the cost monad transformer `TickT` and the frame-internalizing `TickT.wp` -/

/-- A cost-tracking monad transformer: adds an accumulated cost counter over a base monad. A `def`
wrapper (not an `abbrev`) so the `Id` base carries its own frame-internalizing `WP` interpretation,
distinct from the plain `StateT` one, and so `vcgen` reasons about `TickM.wp`. -/
def TickT (m : Type → Type) (α : Type) : Type := StateT Nat m α

abbrev TickM := TickT Id

instance [Monad m] : Monad (TickT m) := inferInstanceAs (Monad (StateT Nat m))
instance [Monad m] [LawfulMonad m] : LawfulMonad (TickT m) :=
  inferInstanceAs (LawfulMonad (StateT Nat m))
/-- `TickT` lifts base-monad effects; the cost counter is *not* exposed as `MonadStateOf`, only
threaded by `tick` and the frame machinery. State effects reach the base via this lift, so the generic
`MonadStateOf σ (TickT m)` (from `MonadLift` + `MonadStateOf σ m`) forwards to `m`. -/
instance [Monad m] : MonadLift m (TickT m) := inferInstanceAs (MonadLift m (StateT Nat m))

/-- A `TickT` program as the underlying `StateT` program, whose `WP` is the base (non-framed) wp. -/
def TickT.run [Monad m] {α : Type} (x : TickT m α) : StateT Nat m α := x

/-- The cost primitive: incur one unit of cost by incrementing the counter. -/
def tick [Monad m] : TickT m Unit := show StateT Nat m Unit from modify (· + 1)

/-- The **frame-internalizing** cost weakest precondition: the `PreservesSup.frameClosure` of `costConj`
over the base `StateT` wp `WP.wp x.run · E`, generic in the base monad and its assertion lattice. The
frame rule is internal by construction (`tickFrames`). The point characterization is `TickT.wp_eq_iInf`. -/
noncomputable def TickT.wp [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) (Q : α → Nat → Pred) (E : EPred) : Nat → Pred :=
  PreservesSup.frameClosure costConj (WP.wp x.run · E) Q

/-- The point characterization: the meet over *all* budgets collapses to running the base wp under the
held-budget postcondition `⌜r ≤ m⌝ ⊓ Q a (m - r)`, offset by `r`. -/
theorem TickT.wp_eq_iInf [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) (Q : α → Nat → Pred) (E : EPred) (n : Nat) :
    TickT.wp x Q E n = ⨅ r, WP.wp x.run (fun a m => ⌜r ≤ m⌝ ⊓ Q a (m - r)) E (n + r) := by
  simp only [TickT.wp, PreservesSup.frameClosure, iInf_apply, costConj_imp]
  rfl

/-- Point evaluation of the base wp on `tick`: `tick` scores the post on the incremented counter. -/
theorem wp_tick_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    WP.wp (tick (m := Id)).run Q E n = Q () (n + 1) := by
  simp only [TickT.run, tick, StateT.wp_apply_eq, StateT.run_modify]; rfl

/-- `TickM.wp tick` scores the post on the incremented counter, independent of the held budget. -/
theorem TickM.wp_tick_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    TickT.wp (tick : TickM Unit) Q E n = Q () (n + 1) := by
  rw [TickT.wp_eq_iInf, iInf_prop_eq_forall]
  simp only [_root_.wp_tick_apply_eq, meet_prop_eq_and, ofProp_prop_eq]
  apply propext
  constructor
  · intro h
    have h0 := h 0
    simpa using h0.2
  · intro hQ r
    exact ⟨by omega, by simpa [show n + r + 1 - r = n + 1 by omega] using hQ⟩

/-! ### A cost-discarding program has an unsatisfiable `TickM.wp` -/

/-- A cost-*discarding* program: it throws away the accumulated cost, resetting the counter to `0`. -/
def dropCost : TickM Unit := show StateM Nat Unit from set 0

theorem wp_dropCost_apply_eq (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) :
    WP.wp dropCost.run Q E n = Q () 0 := by
  simp only [TickT.run, dropCost, StateT.wp_apply_eq, StateT.run_set]; rfl

/-- The cost-discarding program `dropCost` has `TickM.wp _ Q n = False` for **every** postcondition
`Q`: holding a budget of `1` leaves `1 ≤ 0`, unsatisfiable. `TickM.wp` rejects programs that lose
held cost. -/
example (Q : Unit → Nat → Prop) (E : EPost.Nil) (n : Nat) : TickT.wp dropCost Q E n = False := by
  rw [TickT.wp_eq_iInf, iInf_prop_eq_forall]
  simp only [wp_dropCost_apply_eq, meet_prop_eq_and, ofProp_prop_eq]
  apply propext
  constructor
  · intro h
    have := h 1
    exact absurd this.1 (by omega)
  · exact False.elim

/-! ## Part 3: the internalized frame rule for `TickT.wp` -/

variable {m : Type → Type} [Monad m]

/-- Consequence rule for `TickT.wp`: weakening the postcondition weakens the precondition. -/
theorem TickT.wp_consequence [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) {Q Q' : α → Nat → Pred} {E E' : EPred} (n : Nat)
    (hE : E ⊑ E') (h : ∀ a n', Q a n' ⊑ Q' a n') : TickT.wp x Q E n ⊑ TickT.wp x Q' E' n := by
  rw [TickT.wp_eq_iInf, TickT.wp_eq_iInf]
  apply le_iInf
  intro r
  refine PartialOrder.rel_trans (iInf_le _ r) ?_
  refine WP.wp_consequence_econs x.run _ _ E E' (fun a m => ?_) hE (n + r)
  exact meet_mono_right (h a (m - r))

/-- The `WP` interpretation of `TickT m` is the frame-internalizing `TickT.wp`. Kept a `def` (the `WP`
instance is derived from the `WPMonad` instance below) so there is a single `WP (TickT m α)`, letting
the generic `bind`/`pure` specs unify against `TickT` goals. -/
@[reducible] noncomputable def TickT.instWP [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} : WP (TickT m α) α (Nat → Pred) EPred where
  wpTrans x := ⟨fun Q E => TickT.wp x Q E⟩
  wp_trans_monotone x post post' epost epost' hepost hpost := by
    apply le_of_forall_le
    intro n
    exact TickT.wp_consequence x n hepost (fun a n' => hpost a n')

/-- `TickT m` is a `WPMonad`: `pure`/`bind` are sound for `TickT.wp`. The held budget `r` threads
through both: `pure` keeps it, and `bind` passes the same `r` to the continuation. -/
noncomputable instance TickT.instWPMonad [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    WPMonad (TickT m) (Nat → Pred) EPred where
  toWP _ := TickT.instWP
  pure_le_wp_pure x post E := by
    show post x ⊑ TickT.wp (pure x) post E
    apply le_of_forall_le
    intro n
    rw [TickT.wp_eq_iInf]
    apply le_iInf
    intro r
    refine PartialOrder.rel_trans ?_ (WPMonad.pure_le_wp_pure (m := StateT Nat m) x _ E (n + r))
    exact le_meet _ _ _ (le_ofProp _ _ (by omega))
      (PartialOrder.rel_of_eq (by rw [show n + r - r = n by omega]))
  bind_le_wp_bind x f post E := by
    show TickT.wp x (fun a => TickT.wp (f a) post E) E ⊑ TickT.wp (x >>= f) post E
    apply le_of_forall_le
    intro n
    rw [TickT.wp_eq_iInf (x := x >>= f)]
    apply le_iInf
    intro r
    have hbind := WPMonad.bind_le_wp_bind (m := StateT Nat m) x.run (fun a => (f a).run)
      (fun b mm => ⌜r ≤ mm⌝ ⊓ post b (mm - r)) E (n + r)
    refine PartialOrder.rel_trans ?_ hbind
    rw [TickT.wp_eq_iInf]
    refine PartialOrder.rel_trans (iInf_le _ r) ?_
    refine WP.wp_consequence x.run _ _ E (fun a mm => ?_) (n + r)
    rw [CompleteLattice.ofProp_intro_r]
    intro hle
    rw [TickT.wp_eq_iInf]
    refine PartialOrder.rel_trans (iInf_le _ r) ?_
    exact PartialOrder.rel_of_eq (by rw [show mm - r + r = mm by omega])

/-- **The frame rule, internalized**, as a corollary of `WP.Frames.of_frameClosure`: since `TickT.wp`
is a `PreservesSup.frameClosure`, *every* program `x` frames *every* budget `F` with respect to
`costConj`. No cost-additivity hypothesis is required. -/
@[grind .]
theorem frames_costConj [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) (F : Nat) : WP.Frames costConj x F :=
  WP.Frames.of_frameClosure costConj (· + ·) costConj_add
    ⟨fun y E Q' => WP.wp y.run Q' E, fun _ _ _ => rfl⟩

theorem tickFrames [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) (F : Nat) (Q : α → Nat → Pred) (E : EPred) :
    F ⋆ TickT.wp x Q E ⊑ TickT.wp x (fun a => F ⋆ Q a) E :=
  (frames_costConj x F).conj_wp_le_wp_conj Q E

/-- The framed-spec corollary, mirroring `WP.Frames.op_wp_upperAdjoint_le_wp`: running `x` under the magic
wand `F -⋆ Q` and re-conjoining the budget `F` is a precondition for running `x` under `Q`. -/
theorem tickFrames_imp [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {α : Type} (x : TickT m α) (F : Nat) (Q : α → Nat → Pred) (E : EPred) :
    F ⋆ TickT.wp x (fun a => F -⋆ Q a) E ⊑ TickT.wp x Q E := by
  refine PartialOrder.rel_trans (tickFrames x F _ E) ?_
  apply le_of_forall_le
  intro n
  refine TickT.wp_consequence x n PartialOrder.rel_refl (fun a n' => ?_)
  exact PreservesSup.upperAdjoint_le (costConj F) (Q a) n'

/-- A *lossy* cost spec for `tick`: from any input it only asserts the post at the incremented
counter, dropping the bound relating the output cost to the input. -/
theorem tick_spec_lossy (Q : Unit → Nat → Prop) (n : Nat)
    (h : ∀ m, Q () (m + 1)) : TickT.wp (tick : TickM Unit) Q EPost.Nil.mk n := by
  rw [TickM.wp_tick_apply_eq]
  exact h n

/-- The budget `F = n` ("hold the whole input cost") recovers the sharp output cost `m = n + 1` that
the lossy spec drops. `tickFrames_imp` reduces it to running `tick` under the wand `n -⋆ Q`: the
budget holds the input cost, the wand discharges the residual. -/
theorem recovers_cost (n : Nat) :
    (fun m => m = n) ⊑ TickT.wp (tick : TickM Unit) (fun _ m => m = n + 1) EPost.Nil.mk := by
  refine PartialOrder.rel_trans ?_ (tickFrames_imp tick n (fun _ m => m = n + 1) EPost.Nil.mk)
  intro m hm
  simp only [costConj_apply, meet_prop_eq_and, ofProp_prop_eq]
  refine ⟨by omega, ?_⟩
  rw [show m - n = 0 by omega, TickM.wp_tick_apply_eq, costConj_imp]
  omega

-- The lossy spec is genuinely lossy: dropping the budget and applying `tick_spec_lossy` directly
-- leaves the false obligation `∀ m, m + 1 = n + 1`. The budget `tickFrames_imp` carries the input
-- cost into the post.
example (n : Nat) : (fun m => m = n) ⊑ TickT.wp (tick : TickM Unit) (fun _ m => m = n + 1) EPost.Nil.mk := by
  fail_if_success
    (refine PartialOrder.rel_trans (le_top _) ?_
     intro m _
     exact tick_spec_lossy _ _ (by intro k; omega))
  exact recovers_cost n

/-! ## Part 5: end-to-end `vcgen` via a registered `@[frameproc]`

`tickFrameProc` infers the budget from the current cost (the first excess state argument). Registered
with `@[frameproc]`, it drives `vcgen` framing on `TickM` programs with no `frames` clause: `vcgen`
applies the `costConj` gadget, the registered `costSplit` decomposes `pre ⊑ costConj c R n` into a
budget side goal and a cost-shifted residual, and the meet machinery finishes. -/

open Lean.Elab.Tactic.Do.Internal Lean.Elab.Tactic.Do.Internal.VCGen

/-- The applied (`Prop`-level) budget split, used as a direct (`applyEq := none`) lattice split: to
prove `pre ⊑ costConj c R n`, prove `pre ⊑ (c ≤ n) ⊓ R (n - c)`. The residual `R` runs with the
budget `c` removed; the leftover meet is decomposed by the meet machinery. -/
theorem le_costConj_point_apply {pre : Prop} (c n : Nat) (R : Nat → Prop)
    (h : pre ⊑ ((c ≤ n) ⊓ R (n - c))) :
    pre ⊑ costConj c R n := by
  rw [costConj_apply, ofProp_prop_eq]
  exact h

/-- Exact spec for `tick`, registered so `vcgen` can decompose `tick` calls. -/
@[spec] theorem tick_spec (post : Unit → Nat → Prop) :
    ⦃ fun n => post () (n + 1) ⦄ (tick : TickM Unit) ⦃ post ⦄ := by
  constructor
  intro n h
  show TickT.wp (tick : TickM Unit) post _ n
  rw [TickM.wp_tick_apply_eq]
  exact h

/-- The frame inference procedure for `TickM`: hold the budget given by the current cost (the first
excess state argument). -/
def tickFrameProc : FrameInferenceProc := fun _R _pre info => do
  -- `costConj` frames only the `Nat → Prop` cost lattice (the `Id` base). Other base monads keep the
  -- plain `StateT` wp, so skip framing when the assertion type is not `Nat → Prop`.
  let natProp := .forallE `n (mkConst ``Nat) (mkSort .zero) .default
  unless ← isDefEq info.Pred natProp do return none
  let some cost := info.excessArgs[0]? | return none
  return some cost

/-- The direct lattice split for `costConj`, decomposing `pre ⊑ costConj c R n` via
`le_costConj_point_apply` (no pointwise distribution). -/
def costSplit : LatticeSplit := { introThm := ``le_costConj_point_apply }

/-- Register the cost frame inference procedure for `vcgen`, indexed by the `TickM` program type. -/
@[frameproc] def tickFP : FrameProc where
  prog := ``TickT
  proc := tickFrameProc
  conj := ``costConj
  op := fun _ => Meta.mkAppOptM ``costConj #[some (mkSort .zero), none]
  split := costSplit

/-- End-to-end: plain `vcgen` infers the budget, applies the `costConj` gadget, fires the registered
`costSplit`, and the meet machinery closes the residual. -/
example : ⦃ (⊤ : Nat → Prop) ⦄ (tick : TickM Unit) ⦃ fun _ => (⊤ : Nat → Prop) ⦄ := by
  vcgen with finish [top_apply]

/-! ## Part 6: a loop over a list, framed automatically across calls -/

/-- Tick once per list element. -/
def tickList {α : Type} (xs : List α) : TickM Unit := do
  for _ in xs do
    tick

/-- A *stopwatch* spec: from zero accumulated cost, `prog` ends at cost `n`. -/
local syntax:60 term:61 " ⏱ " term:61 : term
local macro_rules
  | `($prog:term ⏱ $n:term) => `(⦃ (⌜· = 0⌝) ⦄ $prog ⦃ fun _ m => ⌜m = $n⌝ ⦄)

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

/-- The same goal, framed **explicitly**: the `frames` clause names the budget for each call. The
registered `@[frameproc]` supplies the `costConj` operator, so these are `costConj` frames, not meet. -/
example {α : Type} (xs ys : List α) :
    (do tickList xs; tickList ys : TickM Unit) ⏱ (xs.length + ys.length) := by
  vcgen frames
  | tickList xs => 0
  | tickList ys => xs.length
  with finish

/-! ## The transformer over a non-`Id` base

`TickT` forwards state effects to its base monad; the cost counter is threaded only by `tick` and the
frame machinery. `foo` modifies the *base* `StateM Nat` state (not the cost), so `vcgen` decomposes it
through the base's state spec while the frame-internalizing wp leaves the cost untouched. -/

/-- Lifting a base-monad program into `TickT` leaves the cost untouched, so its frame-internalizing wp
is the base wp with the cost `n` held fixed. Registered so `vcgen` decomposes lifted base effects. -/
@[spec] theorem Spec.monadLift_TickT [Assertion Pred] [Assertion EPred]
    [WPMonad m Pred EPred] {α : Type} (x : m α) (Q : α → Nat → Pred) (E : EPred) :
    ⦃fun n => WP.wp x (fun a => Q a n) E⦄ (MonadLift.monadLift x : TickT m α) ⦃Q; E⦄ := by
  constructor
  intro n
  show WP.wp x (fun a => Q a n) E ⊑ TickT.wp (MonadLift.monadLift x) Q E n
  rw [TickT.wp_eq_iInf]
  apply le_iInf
  intro r
  refine PartialOrder.rel_trans ?_
    ((WPMonad.le_wp_monadLift_StateT_apply x (fun a m => ⌜r ≤ m⌝ ⊓ Q a (m - r))) (n + r))
  refine WP.wp_consequence x (fun a => Q a n) _ E (fun a => ?_)
  rw [show n + r - r = n by omega]
  exact le_meet _ _ _ (le_ofProp _ _ (by omega)) PartialOrder.rel_refl

def foo : TickT (StateM Nat) Unit := modify (fun x => x + 1)

@[spec] theorem fooSpec :
    ⦃ fun _ base => base = 0 ⦄
    foo
    ⦃ fun _ _ base => base = 1 ⦄ := by
  vcgen [foo] with finish

@[spec] theorem fooTick :
    foo ⏱ 0 := by
  vcgen [foo] with finish
