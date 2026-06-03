import Lean
import Driver
/-!
Port of `Sym/Cases/PurePrecond` to Loom.

Exercises pure propositional hypotheses in preconditions. `flipp` flips a `Bool` state, but
its specs only apply under a pure precondition fixing the current value (`b = true` / `b = false`),
so VC generation must introduce and discharge these pure preconditions. `step` flips twice,
preserving `b = true`.
-/

open Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace PurePrecond

def flipp (_ : Bool) : StateM Bool Unit := modify not

@[spec]
theorem Spec.flipp_true :
    Triple (fun b => b = true) (flipp true) (fun _ b => b = false) (⟨⟩ : EPost.nil) := by
  simp only [flipp, modify]
  mvcgen' with grind

@[spec]
theorem Spec.flipp_false :
    Triple (fun b => b = false) (flipp false) (fun _ b => b = true) (⟨⟩ : EPost.nil) := by
  simp only [flipp, modify]
  mvcgen' with grind

def step : StateM Bool Unit := do
  flipp true
  flipp false

def loop (n : Nat) : StateM Bool Unit := do
  match n with
  | 0 => pure ()
  | n+1 => step; loop n

def Goal (n : Nat) : Prop :=
  ∀ b, (b = true) ⊑ wp (loop n) (fun _ b => b = true) (⟨⟩ : EPost.nil) b

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro b; mvcgen' with grind))
    `(tactic| fail)

end PurePrecond
