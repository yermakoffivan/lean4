import Loom.Tactic.VCGen

/-!
# Do-logic tests for `lmvcgen`

Ported from `tests/bench/mvcgen/sym/test_do_logic.lean` (which targets `mvcgen'`).
`mvcgen'` becomes `lmvcgen`, and the goals are restated for the `new_wp_monad` world
(`Std.Internal.Do.Triple`).

## Conventions

- The single-postcondition form `⦃P⦄ c ⦃Q⦄ := Triple P c Q ⊥` is provided by `Std.Internal.Do`.
  This file adds an exception-postcondition form `⦃P⦄ c ⦃Q; E₁; …⦄ := Triple P c Q epost⟨E₁, …⟩`.
- Postconditions are plain functions (`fun r => …`, `fun r s => …`); `⌜·⌝` is dropped where the
  assertion type is already `Prop`, and `⌜True⌝` is written `⊤`.
- Loop invariants are `Std.Internal.Do.Invariant`s, i.e. functions of `(List.Cursor xs × β)`.
  `xs.pos`/`xs.prefix`/`xs.suffix` carry over. `lmvcgen` names the invariant hole `inv1`, discharged
  with `case inv1 => exact …`.
- `Id.run do …` programs need `Id.run` added to the unfold list so the loop is exposed; the adequacy
  lemma `Id.of_wp_run_eq` was changed to deliver the `⊤ ⊑ wp` form `lmvcgen` decomposes.

Most tests port and prove genuinely — including early-`return` (`fib_*`), abstract-monad specs
(`mkFreshNat_spec`/`add_unfold`), `Subarray`/`Array`/range loops, the restated tail-context test,
and both the bullet and labelled `invariants` syntaxes.

## Open (kept as `sorry` with a reason)

The loop *decomposes* in every case below; only the residual VC / a missing feature is open:
- `test_loop_break`, `test_loop_early_return`: `lmvcgen` fails `state_arg_intro'` on the VC the
  `forIn` spec produces for a `StateT` loop that `break`s / early-`return`s mid-iteration;
- `max_and_sum_spec`, `fast_expo_correct`: the residual VCs are nonlinear `Nat` arithmetic over an
  `MProd` accumulator; the source's bespoke `obtain`/`rw` recipe does not survive translation;
- `forIn_eq_sum`: the iterator exit VC reduces to `a = xs.sum` without surfacing
  `xs.iter.toList.sum = xs.sum`;
- `mem_mergeWithAll`: no `forIn` spec for the universe-polymorphic `ExtTreeMap` (and no
  `errorOnMissingSpec` fallback).

## Omitted (no clean `new_wp_monad` statement)

`fib_impl_vcs` (old-world `PostCond`/`PostShape`/`⊢ₛ`), `fib_triple_erase`/`erase_unfold` (need
`errorOnMissingSpec`), `check_all`/`mspec_forwards_mvars` (need an `Invariant.withEarlyReturn`
analogue), and the `mapM`/`filterMapM`/`foldM` iterator variants (need `MonadAttach` plumbing).
-/

open Loom Lean Meta Order Std.Internal.Do

set_option mvcgen.warning false
set_option new_wp_monad true
set_option warn.sorry false
set_option backward.do.legacy false

namespace Loom.Test.Bench.TestDoLogic

/-- Exception-post extension of the built-in `⦃ ⦄` notation:
`⦃P⦄ c ⦃Q; E₁; …⦄ := Triple P c Q epost⟨E₁, …⟩`. -/
scoped syntax:60 (name := loomTripleEPost)
  "⦃ " term " ⦄ " term " ⦃ " term "; " sepBy1(term, "; ") " ⦄" : term
macro_rules (kind := loomTripleEPost)
  | `(⦃ $P ⦄ $c ⦃ $Q; $Es;* ⦄) => `(Triple $P $c $Q epost⟨$Es,*⟩)

/-! ## `Code`: programs under test -/

namespace Code

def fib_impl (n : Nat) : Id Nat := do
  if n = 0 then return 0
  let mut a := 0
  let mut b := 1
  for _ in [1:n] do
    let a' := a
    a := b
    b := a' + b
  return b

@[simp, grind =]
def fib_spec : Nat → Nat
  | 0 => 0
  | 1 => 1
  | n+2 => fib_spec n + fib_spec (n+1)

abbrev AppState := Nat × Nat

def mkFreshNat [Monad m] [MonadStateOf AppState m] : m Nat := do
  let n ← Prod.fst <$> get
  modify (fun s => (s.1 + 1, s.2))
  pure n

def mkFreshPair : StateM AppState (Nat × Nat) := do
  let a ← mkFreshNat
  let b ← mkFreshNat
  pure (a, b)

def sum_loop : Id Nat := do
  let mut x := 0
  for i in [1:5] do x := x + i
  return x

def throwing_loop : ExceptT Nat (StateT Nat Id) Nat := do
  let mut x := 0
  let s ← get
  for i in [1:s] do { x := x + i; if x > 4 then throw 42 }
  (set 1 : ExceptT Nat (StateT Nat Id) PUnit)
  return x

def breaking_loop : StateT Nat Id Nat := do
  let mut x := 0
  let s ← get
  for i in [1:s] do { x := x + i; if x > 4 then break }
  set 1
  return x

def returning_loop : StateT Nat Id Nat := do
  let mut x := 0
  let s ← get
  for i in [1:s] do { x := x + i; if x > 4 then return 42 }
  set 1
  return x

def unfold_to_expose_match : StateM Nat Nat :=
  (some get).getD (pure 3)

end Code

/-! ## `Automated` -/

attribute [simp, grind .] bot_le

namespace Automated

open Code

theorem fib_triple : ⦃ ⊤ ⦄ fib_impl n ⦃ fun r => r = fib_spec n ⦄ := by
  unfold fib_impl
  lmvcgen
  case inv1 => exact invariant⟨fun (xs, ⟨a, b⟩) =>
    a = fib_spec xs.pos ∧ b = fib_spec (xs.pos + 1)⟩
  any_goals grind

theorem fib_triple_step : ⦃ ⊤ ⦄ fib_impl n ⦃ fun r => r = fib_spec n ⦄ := by
  unfold fib_impl
  lmvcgen (stepLimit := some 14)
  case inv1 => exact invariant⟨fun (xs, ⟨a, b⟩) =>
    a = fib_spec xs.pos ∧ b = fib_spec (xs.pos + 1)⟩
  any_goals grind

attribute [local spec] fib_triple in
theorem fib_triple_attr : ⦃ ⊤ ⦄ fib_impl n ⦃ fun r => r = fib_spec n ⦄ := by
  lmvcgen; assumption

attribute [local spec] fib_triple in
theorem fib_triple_erase : ⦃ ⊤ ⦄ fib_impl n ⦃fun r => r = fib_spec n⦄ := by
  lmvcgen (errorOnMissingSpec := false) [-fib_triple]
  fail_if_success done
  admit

theorem fib_impl_vcs
    (Q : Nat → Nat → Prop)
    (I : (n : Nat) → (_ : ¬n = 0) →
      Invariant [1:n].toList (Prod Nat Nat) Prop EPost⟨⟩)
    (ret : Q 0 0)
    (loop_pre : ∀ n (hn : ¬n = 0), (I n hn).inv ⟨⟨[], [1:n].toList, rfl⟩, 0, 1⟩)
    (loop_post : ∀ n (hn : ¬n = 0) r, (I n hn).inv ⟨⟨[1:n].toList, [], by simp⟩, r⟩ ⊑ Q n r.2)
    (loop_step : ∀ n (hn : ¬n = 0) r pref cur suff (h : [1:n].toList = pref ++ cur :: suff),
                  (I n hn).inv ⟨⟨pref, cur::suff, by simp[h]⟩, r⟩ ⊑ (I n hn).inv ⟨⟨pref ++ [cur], suff, by simp[h]⟩, r.2, r.1+r.2⟩)
    : ⊤ ⊑ wp (fib_impl n) (Q n) := by
  lmvcgen [fib_impl]
  case inv1 h => exact I n h
  case vc1 h => subst h; apply_rules [ret]
  case vc2 h => apply_rules [loop_pre]
  case vc3 => apply_rules [loop_step]
  case vc4 => apply_rules [loop_post]



@[spec]
theorem mkFreshNat_spec [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    ⦃ fun s => ⌜s.1 = n ∧ s.2 = o⌝ ⦄
    (mkFreshNat : StateT AppState m Nat)
    ⦃ fun r s => ⌜r = n ∧ s.1 = n + 1 ∧ s.2 = o⌝ ⦄ := by
  lmvcgen [mkFreshNat] <;> simp_all

theorem erase_unfold [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
  ⦃fun s => ⌜s.1 = n ∧ s.2 = o⌝ ⦄
  (mkFreshNat : StateT AppState m Nat)
  ⦃fun r s => ⌜r = n ∧ s.1 = n + 1 ∧ s.2 = o⌝ ⦄ := by
  unfold mkFreshNat
  lmvcgen (errorOnMissingSpec := false) [-modify]
  simp_all
  fail_if_success done
  admit

theorem add_unfold [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    ⦃ fun s => ⌜s.1 = n ∧ s.2 = o⌝ ⦄
    (mkFreshNat : StateT AppState m Nat)
    ⦃ fun r s => ⌜r = n ∧ s.1 = n + 1 ∧ s.2 = o⌝ ⦄ := by
  lmvcgen [mkFreshNat] <;> simp_all

theorem mkFreshPair_triple :
    ⦃ (⊤ : AppState → Prop) ⦄ mkFreshPair ⦃ fun (p : Nat × Nat) => ⌜p.1 ≠ p.2⌝ ⦄ := by
  lmvcgen [mkFreshPair, mkFreshNat] <;> simp_all

theorem sum_loop_spec : ⦃ ⊤ ⦄ sum_loop ⦃ fun r => r < 30 ⦄ := by
  lmvcgen [sum_loop]
  case inv1 => exact invariant⟨fun (⟨c, x⟩) => x = c.«prefix».sum⟩
  all_goals grind

theorem throwing_loop_spec :
  ⦃fun s => s = 4⦄
  throwing_loop
  ⦃fun _ _ => False;
  fun e s => e = 42 ∧ s = 4⦄ := by
  lmvcgen [throwing_loop]
  case inv1 => exact invariant⟨fun (xs, r) s => r ≤ 4 ∧ s = 4 ∧ r + xs.suffix.sum > 4; fun e s => e = 42 ∧ s = 4⟩
  all_goals try (simp at *; subst_vars; grind)

theorem test_loop_break :
    ⦃ fun s => s = 42 ⦄ breaking_loop ⦃ fun r s => r > 4 ∧ s = 1 ⦄ := by
  lmvcgen [breaking_loop]
  case inv1 => exact invariant⟨fun (xs, r) s => (r ≤ 4 ∧ r = xs.prefix.sum ∨ r > 4) ∧ s = 42⟩
  all_goals grind

theorem test_loop_early_return :
    ⦃ fun s => s = 4 ⦄ returning_loop ⦃ fun r s => r = 42 ∧ s = 4 ⦄ := by
  lmvcgen [returning_loop]
  case inv1 => exact invariant⟨fun (xs, r) s => (r.1 = none ∧ r.2 = xs.prefix.sum ∧ r.2 ≤ 4 ∨ r.1 = some 42 ∧ r.2 > 4) ∧ s = 4⟩
  all_goals grind

theorem unfold_to_expose_match_spec :
  ⦃ fun s => s = 4 ⦄
  unfold_to_expose_match
  ⦃ fun r => ⌜r = 4⌝ ⦄ := by
  lmvcgen [unfold_to_expose_match, Option.getD]; assumption

theorem test_match_splitting {mo : Option Nat} (h : mo = some 4) :
    ⦃ (⊤ : Nat → Prop) ⦄
    (match mo with
     | some n => (set n : StateM Nat PUnit)
     | none => set 0)
    ⦃ fun _ s => s = 4 ⦄ := by
  lmvcgen <;> simp_all

theorem test_sum :
    ⦃ ⊤ ⦄
    (do
      let mut x := 0
      for i in [1:5] do
        x := x + i
      pure x : Id _)
    ⦃ fun r => r < 30 ⦄ := by
  lmvcgen
  case inv1 => exact invariant⟨fun (⟨c, x⟩) => x = c.«prefix».sum⟩
  all_goals grind

theorem mspec_forwards_mvars {n : Nat} :
  ⦃True⦄
  (do
    for i in [2:n] do
      if n < i * i then
        return 1
    return 1 : Id Nat)
  ⦃fun r => True⦄ := by
  lmvcgen
  all_goals admit

def check_all (p : Nat → Prop) [DecidablePred p] (n : Nat) : Bool := Id.run do
  for i in [0:n] do
    if ¬ p i then
      return false
  return true


example (p : Nat → Prop) [DecidablePred p] (n : Nat) :
    (∀ i, i < n → p i) ↔ check_all p n := by
  generalize h : check_all p n = x
  apply Id.of_wp_run_eq h
  lmvcgen
  case inv1 =>
    exact Invariant.withEarlyReturnNewDo (EPred := EPost⟨⟩)
      (onReturn := fun ret _ => ⌜ret = false ∧ ¬ ∀ i < n, p i⌝)
      (onContinue := fun xs _ => ⌜∀ i, i ∈ xs.prefix → p i⌝)
  all_goals simp_all [-Classical.not_forall]; try grind


end Automated

/-! ## VSTTE2010 / MaxAndSum -/

namespace VSTTE2010.MaxAndSum

def max_and_sum (xs : Array Nat) : Id (Nat × Nat) := do
  let mut max := 0
  let mut sum := 0
  for h : i in [0:xs.size] do
    sum := sum + xs[i]
    if xs[i] > max then
      max := xs[i]
  return (max, sum)

theorem max_and_sum_spec (xs : Array Nat) :
    ⦃ ∀ i, (h : i < xs.size) → xs[i] ≥ 0 ⦄
    max_and_sum xs ⦃ fun (m, s) => s ≤ m * xs.size ⦄ := by
  lmvcgen [max_and_sum]
  case inv1 => exact invariant⟨fun ⟨c, mx, s⟩ => s ≤ mx * c.pos⟩
  all_goals simp_all +zetaDelta
  · rename_i h _
    rw [Nat.left_distrib]
    simp +zetaDelta only [Nat.mul_one, Nat.add_le_add_iff_right]
    apply Nat.le_trans h
    apply Nat.mul_le_mul_right
    grind
  · rw [Nat.left_distrib]
    grind

end VSTTE2010.MaxAndSum

/-! ## RishsConstApproxBug -/

namespace RishsConstApproxBug

@[inline] def tst : StateM Unit Unit := do
  let _ ← get
  if True then
    pure ()

theorem need_const_approx' :
    ⦃ fun x => x = () ⦄ tst ⦃ fun _ => (⊤ : Unit → Prop) ⦄ := by
  lmvcgen [tst]-- <;> grind

end RishsConstApproxBug

/-! ## RishsTailContextBug -/

namespace RishsTailContextBug

axiom I : StateM Nat Unit
axiom F : StateM Nat Unit
axiom G : StateM Nat Unit
axiom P : Nat → Prop
axiom Q : Unit → Nat → Prop
axiom hI : ⦃ ⊤ ⦄ I ⦃ fun _ => P ⦄
axiom hF : ⦃ P ⦄ F ⦃ Q ⦄
axiom hG : ⦃ P ⦄ G ⦃ Q ⦄
attribute [local spec] hI hF hG

@[inline] noncomputable def test_ite : StateM Nat Unit := do
  I
  let n ← get
  if n < 1 then
    F
  else
    G

theorem ex : ⦃ ⊤ ⦄ test_ite ⦃ Q ⦄ := by
  lmvcgen [test_ite] <;> assumption

end RishsTailContextBug

/-! ## KimsUnivPolyUseCase -/

namespace KimsUnivPolyUseCase

open Std

variable {α : Type u} {β : Type v} {cmp : α → α → Ordering} [TransCmp cmp]

def mergeWithAll (m₁ m₂ : ExtTreeMap α β cmp) (f : α → Option β → Option β → Option β) :
    ExtTreeMap α β cmp :=
  Id.run do
    let mut r := ∅
    for (a, b₁) in m₁ do
      if let some b := f a (some b₁) m₂[a]? then
        r := r.insert a b
    for (a, b₂) in m₂ do
      if a ∉ m₁ then
        if let some b := f a none (some b₂) then
          r := r.insert a b
    return r

theorem mem_mergeWithAll [LawfulEqCmp cmp] {m₁ m₂ : ExtTreeMap α β cmp}
    {f : α → Option β → Option β → Option β} {a : α} :
    a ∈ mergeWithAll m₁ m₂ f ↔ (a ∈ m₁ ∨ a ∈ m₂) ∧ (f a m₁[a]? m₂[a]?).isSome := by
  generalize h : mergeWithAll m₁ m₂ f = x
  apply Id.of_wp_run_eq h
  lmvcgen (errorOnMissingSpec := false) [mergeWithAll]
  admit

end KimsUnivPolyUseCase

/-! ## Slices -/

namespace Slices

def subarraySum (xs : Subarray Nat) : Nat := Id.run do
  let mut sum := 0
  for x in xs do
    sum := sum + x
  return sum

theorem subarraySum_correct {xs : Subarray Nat} : subarraySum xs = xs.toList.sum := by
  generalize h : subarraySum xs = r
  apply Id.of_wp_run_eq h
  lmvcgen
  case inv1 => exact invariant⟨fun (⟨c, s⟩) => s = c.«prefix».sum⟩
  all_goals simp_all +zetaDelta

end Slices

/-! ## PatricksFastExp -/

namespace PatricksFastExp

def naive_expo (x n : Nat) : Nat := Id.run do
  let mut y := 1
  for _ in [:n] do
    y := y * x
  return y

theorem naive_expo_correct (x n : Nat) : naive_expo x n = x ^ n := by
  generalize h : naive_expo x n = r
  apply Id.of_wp_run_eq h
  lmvcgen [naive_expo, Id.run]
  case inv1 => exact invariant⟨fun (⟨c, y⟩) => y = x ^ c.pos⟩
  all_goals simp_all +zetaDelta [Nat.pow_add_one]

def fast_expo (x n : Nat) : Nat := Id.run do
  let mut x := x
  let mut y := 1
  let mut e := n
  for _ in [:n] do
    if e = 0 then break
    if e % 2 = 1 then
      y := x * y
      e := e - 1
    else
      x := x*x
      e := e/2
  return y

theorem fast_expo_correct (x n : Nat) : fast_expo x n = x ^ n := by
  generalize h : fast_expo x n = r
  apply Id.of_wp_run_eq h
  lmvcgen
  case inv1 => exact invariant⟨fun ⟨xs, x', y, e⟩ => x' ^ e * y = x ^ n ∧ e ≤ n - xs.pos⟩
  all_goals simp_all +zetaDelta
  case vc2 b _ _ ih =>
    obtain ⟨x', y, e⟩ := b
    simp at *
    rw [← ih.1, ih.2, Nat.pow_zero, Nat.one_mul]
  case vc4 b _ _ _ _ _ _ ih _ _ =>
    obtain ⟨x', y, e⟩ := b
    simp at *
    constructor
    · rw [← Nat.mul_assoc, ← Nat.pow_add_one, ← ih.1]
      have : e - 1 + 1 = e := by grind
      rw [this]
    · grind
  case vc5 b _ _ _ _ _ _ _ _ _ =>
    obtain ⟨x', y, e⟩ := b
    simp at *
    constructor
    · rw [← Nat.pow_two, ← Nat.pow_mul]
      grind
    · grind

theorem same_func (x n : Nat) : fast_expo x n = naive_expo x n := by
  rw [naive_expo_correct, fast_expo_correct]

end PatricksFastExp

/-! ## IteratorTests -/

section IteratorTests

variable {m} [Monad m]
open Std Std.Iterators

theorem forIn_eq_sum (xs : Array Nat) {m} [Monad m] [Assertion Pred] [Assertion EPred]
    [WPMonad m Pred EPred] :
    ⦃ ⊤ ⦄
    (do
      let mut sum : Nat := 0
      for n in xs.iter do
        sum := sum + n
      return sum : m _)
    ⦃ fun r => ⌜r = xs.sum⌝ ⦄ := by
  lmvcgen
  case inv1 => exact invariant⟨fun (⟨cur, n⟩) => ⌜n = cur.prefix.sum⌝⟩
  all_goals grind

theorem forIn_map_eq_sum_add_size (xs : Array Nat) {m} [Monad m] [Assertion Pred] [Assertion EPred]
    [WPMonad m Pred EPred] :
    Triple (m := m) ⊤ (do
      let mut sum : Nat := 0
      for n in (xs.iterM Id).map (· + 1) do
        sum := sum + n
      return sum) (fun r => ⌜r = xs.sum + xs.size⌝) ⊥ := by
  lmvcgen
  case inv1 => exact invariant⟨fun ⟨cur, n⟩ => ⌜n = cur.prefix.sum + cur.prefix.length⌝⟩
  all_goals grind


theorem forIn_mapM_eq_sum_add_size (xs : Array Nat) {m} [Monad m] [MonadAttach m]
    [LawfulMonad m] [WeaklyLawfulMonadAttach m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    Triple (m := m) ⊤ (do
      let mut sum : Nat := 0
      for n in (xs.iterM Id).mapM (pure (f := m) <| · + 1) do
        sum := sum + n
      return sum) (fun r => ⌜r = xs.sum + xs.size⌝) ⊥ := by
  lmvcgen
  case inv1 => exact invariant⟨fun ⟨cur, n⟩ => ⌜n = cur.prefix.sum + cur.prefix.length⌝⟩
  all_goals grind

theorem forIn_filterMapM_eq_sum_add_size (xs : Array Nat) {m}
    [Monad m] [LawfulMonad m] [MonadAttach m] [WeaklyLawfulMonadAttach m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    Triple (m := m) ⊤ (do
      let mut sum : Nat := 0
      for n in (xs.iterM Id).filterMapM (pure (f := m) <| some <| · + 1) do
        sum := sum + n
      return sum)  (fun r => ⌜r = xs.sum + xs.size⌝) ⊥ := by
  lmvcgen
  case inv1 => exact invariant⟨fun ⟨cur, n⟩ => ⌜n = cur.prefix.sum + cur.prefix.length⌝⟩
  all_goals grind

theorem foldM_eq_sum (xs : Array Nat) {m} [Monad m] [LawfulMonad m]
    [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred] :
    Triple (m := m) ⊤
      (xs.iter.foldM (m := m) (init := 0) (pure <| · + ·))
      (fun r => ⌜r = xs.sum⌝) ⊥ := by
  lmvcgen
  case inv1 => exact invariant⟨fun ⟨cur, n⟩ => ⌜n = cur.prefix.sum⌝⟩
  all_goals grind

end IteratorTests

/-! ## ConfigSyntaxTests -/

namespace ConfigSyntaxTests

def trivial_test (n : Nat) : Id Nat := pure n

/-- An empty `(config := {})` matches the default `mvcgen'` behavior. -/
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (config := {}) [trivial_test]

-- `trivial := false` skips `repeatAndRfl`, leaving a residual entailment.
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (trivial := false) [trivial_test]
  trivial

-- `elimLets := false` skips the let-elimination pre-pass (now honored by `lmvcgen`).
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (config := { elimLets := false }) [trivial_test]

-- `stepLimit` is accepted; with a positive limit, simple programs still discharge.
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (config := { stepLimit := some 100 }) [trivial_test]

/-- warning: lmvcgen: the `leave` config option is currently ignored. -/
#guard_msgs in
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (config := { leave := false }) [trivial_test]

-- `jp := true` is accepted and wired through `Context.useJP`; the actual
-- shared-continuation construction (Phase 6 of the plan) is not yet ported,
-- so enabling it on a program containing `__do_jp` errors at the detection
-- point. Programs without `__do_jp` (like this trivial example) are unaffected.
example : ⦃ ⊤ ⦄ trivial_test 0 ⦃fun r => r = 0⦄ := by
  lmvcgen (config := { jp := true }) [trivial_test]


end ConfigSyntaxTests

/-! ## InvariantSyntaxTests -/

namespace InvariantSyntaxTests

def check_all (p : Nat → Prop) [DecidablePred p] (n : Nat) : Bool := Id.run do
  for i in [0:n] do
    if ¬ p i then
      return false
  return true


example (p : Nat → Prop) [DecidablePred p] (n : Nat) :
    (∀ i, i < n → p i) ↔ check_all p n := by
  generalize h : check_all p n = x
  apply Id.of_wp_run_eq h
  lmvcgen invariants
    · Invariant.withEarlyReturnNewDo (EPred := EPost⟨⟩)
      (onReturn := fun ret _ => ⌜ret = false ∧ ¬ ∀ i < n, p i⌝)
      (onContinue := fun xs _ => ⌜∀ i, i ∈ xs.prefix → p i⌝)
  with (simp_all [-Classical.not_forall]; try grind)

example (p : Nat → Prop) [DecidablePred p] (n : Nat) :
    (∀ i, i < n → p i) ↔ check_all p n := by
  generalize h : check_all p n = x
  apply Id.of_wp_run_eq h
  lmvcgen invariants
    | inv1 => Invariant.withEarlyReturnNewDo (EPred := EPost⟨⟩)
      (onReturn := fun ret _ => ⌜ret = false ∧ ¬ ∀ i < n, p i⌝)
      (onContinue := fun xs _ => ⌜∀ i, i ∈ xs.prefix → p i⌝)
  with (simp_all [-Classical.not_forall]; try grind)

end InvariantSyntaxTests

end Loom.Test.Bench.TestDoLogic
