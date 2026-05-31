import Lean
import Loom.Test.Driver
import Loom.Test.Specs
import Loom.Tactic.VCGen

/-!
Port of `Sym/Cases/MatchSplit` to Loom.

Pattern matching where the discriminant *is* the symbolic state (`match s with ...` after
`let s ← get`). Unlike `MatchIota`, the discriminant is not a literal, so VC generation must
perform a genuine match split. The initial state is kept symbolic (via `s = n`) so the split
is not iota-reduced away. Starting at `s = n`, each `step` decrements the state by one, ending
at `0` after exactly `n` steps without ever throwing.
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace MatchSplit

abbrev M := ExceptT String <| StateM Nat

@[spec high] theorem spec_throw (e : String) {post : α → Nat → Prop} {epost : EPost⟨String → Nat → Prop⟩} :
    Triple (epost.head e) (throw (m := M) e) post epost := ⟨PartialOrder.rel_refl⟩

@[spec high] theorem spec_set (x : Nat) {post : PUnit → Nat → Prop} {epost : EPost⟨String → Nat → Prop⟩} :
    Triple (fun _ => post ⟨⟩ x) (set (m := M) x) post epost := ⟨PartialOrder.rel_refl⟩

@[spec high] theorem spec_get (post : Nat → Nat → Prop) {epost : EPost⟨String → Nat → Prop⟩} :
    Triple (fun s => post s s) (get (m := M)) post epost := ⟨PartialOrder.rel_refl⟩

/-- Matches on state `s` — the discriminant IS the excess state arg. -/
def step : M Unit := do
  let s ← get
  match s with
  | 0 => throw "s is zero"
  | n+1 => set n

def loop (n : Nat) : M Unit := do
  match n with
  | 0 => pure ()
  | n+1 => step; loop n

def Goal (n : Nat) : Prop :=
  ∀ post s, s = n → post 0 ⊑ wp (loop n) (fun _ => post) epost⟨fun _ _ => False⟩ s

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post s hsn; lmvcgen with grind))
    `(tactic| fail)

end MatchSplit
