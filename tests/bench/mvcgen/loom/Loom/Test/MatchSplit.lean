import Lean
import Loom.Test.Driver
import Loom.Test.Specs
import Loom.Tactic.VCGen

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

def step (v : Nat) : M Unit := do
  let s ← get
  match v with
  | 0 => throw "v is zero"
  | n+1 => set (s + n + 1); let s ← get; set (s - n)

def loop (n : Nat) : M Unit := do
  match n with
  | 0 => pure ()
  | n+1 => step (n+1); loop n

def Goal (n : Nat) : Prop := ∀ post, post n ⊑ wp (loop n) (fun _ => post) epost⟨fun _ _ => False⟩ 0

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post; lmvcgen -trivial with grind))
    `(tactic| fail)


#eval runTests [1000]

end MatchSplit
