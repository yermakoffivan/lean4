import Lean
import Loom.Test.Driver
import Loom.Tactic.VCGen

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false
namespace AddSubCancel

-- Spec for MonadStateOf.get (defined in VCGen.lean's test section, replicated here)
@[spec high] theorem spec_get_StateT {m : Type u → Type v} {Pred EPred : Type u}
    [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {σ : Type u} (post : σ → σ → Pred) (epost : EPred) :
    Triple (fun s => post s s) (get : StateT σ m σ) post epost := by
  lmvcgen

-- -- Specs for the standalone `get`/`set` functions (which elaborate to MonadState.get/set,
-- -- a different head constant from MonadStateOf.get/set used above).
@[spec high] theorem spec_set_StateT' {m : Type u → Type v} {Pred EPred : Type u}
    [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {σ : Type u} (s : σ) (post : PUnit → σ → Pred) (epost : EPred) :
    Triple (fun _ => post ⟨⟩ s) (set s : StateT σ m PUnit) post epost := by
  lmvcgen

def step (v : Nat) : StateM Nat Unit := do
  let s ← get
  set (s + v)
  let s ← get
  set (s - v)

def loop (n : Nat) : StateM Nat Unit := do
  match n with
  | 0 => pure ()
  | n+1 => step n; loop n

def Goal (n : Nat) : Prop := ∀ post s, post s ⊑ wp (loop n) (fun _ => post) ⟨⟩ s

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

-- set_option trace.Loom.Tactic.vcgen true

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post; lmvcgen with grind))
    `(tactic| fail)


#eval
  runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post s; lmvcgen with grind))
    `(tactic| fail)
    [1000]

-- #eval
--   runBenchUsingTactic
--     ``Goal [``loop, ``step]
--     `(tactic| (intro post s; lmvcgen simplifying_assumptions))
--     `(tactic| grind)
--     [1000]

end AddSubCancel
