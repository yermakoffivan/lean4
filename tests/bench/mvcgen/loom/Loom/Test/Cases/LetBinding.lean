import Lean
import Loom.Test.Driver
import Loom.Tactic.VCGen

/-!
Port of `Sym/Cases/LetBinding` to Loom.

Same add/sub loop as `AddSubCancel` but with a pure `let offset := ...` binding inside `step`.
Exercises the handling of pure `letE` nodes in the elaborated program (let-hoist / let-intro).
-/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace LetBinding

@[spec high] theorem spec_get_StateT {m : Type u → Type v} {Pred EPred : Type u}
    [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {σ : Type u} (post : σ → σ → Pred) (epost : EPred) :
    Triple (fun s => post s s) (get : StateT σ m σ) post epost := by
  lmvcgen

@[spec high] theorem spec_set_StateT' {m : Type u → Type v} {Pred EPred : Type u}
    [Monad m] [Assertion Pred] [Assertion EPred] [WPMonad m Pred EPred]
    {σ : Type u} (s : σ) (post : PUnit → σ → Pred) (epost : EPred) :
    Triple (fun _ => post ⟨⟩ s) (set s : StateT σ m PUnit) post epost := by
  lmvcgen

def step (v : Nat) : StateM Nat Unit := do
  let s ← get
  -- Pure let binding: `let offset := ...` produces a `letE` node in the elaborated term.
  let offset := v + 1
  set (s + offset)
  let s ← get
  set (s - offset)

def loop (n : Nat) : StateM Nat Unit := do
  match n with
  | 0 => pure ()
  | n+1 => step n; loop n

def Goal (n : Nat) : Prop := ∀ post s, post s ⊑ wp (loop n) (fun _ => post) ⟨⟩ s

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post s; lmvcgen with grind))
    `(tactic| fail)


end LetBinding
