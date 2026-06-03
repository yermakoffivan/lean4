import Lean
import Driver
/-!
Port of `Sym/Cases/AddSubCancelSimp` to Loom.

Same benchmark as `AddSubCancel` but using equality (`simp`) specs for `get` and `set`
instead of triple specs. Exercises the simp/equality spec rule-construction path.
-/

open Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace AddSubCancelSimp

@[spec high]
theorem Spec.MonadState_get {m : Type u → Type v} [Monad m] {σ : Type u} :
    (get : StateT σ m σ) = fun s => pure (s, s) := by
  rfl

@[spec high]
theorem Spec.MonadStateOf_set {m : Type u → Type v} [Monad m] {σ : Type u} {s : σ} :
    (set s : StateT σ m PUnit) = fun _ => pure (⟨⟩, s) := by
  rfl

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

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro post s; mvcgen' with grind))
    `(tactic| fail)

end AddSubCancelSimp
