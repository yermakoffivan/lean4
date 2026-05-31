import Lean
import Loom.Test.Driver
import Std.Internal.Do.Triple.Gadget
import Loom.Tactic.VCGen

open Loom Lean Meta Order Lean.Order Std.Internal.Do

namespace AssertGadgetStep

set_option new_wp_monad true
set_option mvcgen.warning false

attribute [spec high] Spec.assertGadget

axiom FrameFun : Frame (Nat → Prop)
instance : Frame (Nat → Prop) := FrameFun

def step (n : Nat) : StateM Nat Unit := do
  let x ← get
  set (x + n + 1)
  assertGadget (name := `hx) (· >= x)

def loop (n : Nat) : StateM Nat Unit := do
  match n with
  | 0 => pure ()
  | n + 1 => step n; loop n

def Goal (n : Nat) : Prop :=
  ∀ s, (⊤ : Prop) ⊑ wp (loop n) (fun _ _ => True) ⟨⟩ s

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro s; lmvcgen))
    `(tactic| sorry)

#eval runTests [1000]

end AssertGadgetStep
