import Lean
import Loom.Test.Driver
import Loom.Tactic.VCGen

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false

namespace ConcreteEPostTwoPreds

abbrev M := ExceptT Nat (Except String)

attribute [spec]
  Spec.throw_Except
  Spec.throw_ExceptT
  Spec.throw_MonadExcept
  Spec.throw_ExceptT_lift

def throwNatOrString (n : Nat) : M PUnit := do
  if n = 30 then
    throwThe Nat 7
  else if n = 239 then
    throwThe String "inner"
  else
    pure ()

@[spec high]
theorem spec_throwNatOrString (n : Nat) :
    Triple ⊤ (throwNatOrString n) (fun _ => ⊤) epost⟨(· = 7), (· = "inner")⟩ := by
  unfold throwNatOrString;
  lmvcgen

def step (n : Nat) : M PUnit := do
  throwNatOrString n
  pure ()

def loop (n : Nat) : M PUnit := do
  match n with
  | 0 => pure ()
  | n + 1 =>
    step n
    loop n

def Goal (n : Nat) : Prop :=
  True ⊑ wp (loop n) (fun _ => True) epost⟨(· = 7), (· = "inner")⟩

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| lmvcgen -trivial with grind)
    `(tactic| sorry)

#eval runTests [1000]

end ConcreteEPostTwoPreds
