import Loom.Tactic.VCGen

/-! End-to-end `lmvcgen` test for `for`-loops (cursor-dependent invariant specs). -/

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false
set_option maxRecDepth 10000

namespace Loom.Test.Bench.ForInLoop

def sum_loop : Id Nat := do
  let mut x := 0
  for i in [1:5] do
    x := x + i
  return x

-- The loop invariant `x = prefix.sum` discharges the entry/exit/step VCs.
example : Triple (⌜True⌝ : Prop) sum_loop (fun r => ⌜r < 30⌝) ⊥ := by
  lmvcgen [sum_loop] invariants
    · invariant⟨fun (⟨c, x⟩) => x = c.«prefix».sum⟩
  with grind

-- A `StateM` loop (excess state arg `s`): the invariant ties the state to the prefix sum.
def sum_state : StateM Nat Unit := do
  for i in [1:5] do
    modify (· + i)

example : Triple (fun s => ⌜s = 0⌝) sum_state (fun _ s => ⌜s = 10⌝) ⊥ := by
  lmvcgen [sum_state, modify] invariants
    · invariant⟨fun (⟨c, _⟩) s => s = c.«prefix».sum⟩
  with grind

end Loom.Test.Bench.ForInLoop
