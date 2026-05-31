import Lean
import Loom.Tactic.VCGen
import Std.Internal.Do.Triple.SpecLemmas

open Loom Lean Meta Order Std.Internal.Do

set_option new_wp_monad true
set_option mvcgen.warning false


namespace EqualitySpecs

attribute [local spec]
  Std.Internal.Do.Spec.UnfoldLift.get
  Std.Internal.Do.Spec.UnfoldLift.set
  Std.Internal.Do.Spec.UnfoldLift.modifyGet
  Std.Internal.Do.Spec.UnfoldLift.read

def globalPure (n : Nat) : StateM Nat Nat :=
  pure n

@[spec]
theorem globalPure_eq (n : Nat) :
    globalPure n = (pure n : StateM Nat Nat) := rfl

example (n s : Nat) :
    (n = n) ⊑ wp (globalPure n) (fun r _ => r = n) ⟨⟩ s := by
  lmvcgen with grind

def unfoldPure (n : Nat) : StateM Nat Nat :=
  pure n

attribute [spec] unfoldPure

example (n s : Nat) :
    (n = n) ⊑ wp (unfoldPure n) (fun r _ => r = n) ⟨⟩ s := by
  lmvcgen with grind

def etaPure : Nat → StateM Nat Nat :=
  fun n => pure n

@[spec]
theorem etaPure_eq :
    etaPure = fun n => (pure n : StateM Nat Nat) := rfl

example (n s : Nat) :
    (n = n) ⊑ wp (etaPure n) (fun r _ => r = n) ⟨⟩ s := by
  lmvcgen with grind

def bracketPure (n : Nat) : StateM Nat Nat :=
  pure n

theorem bracketPure_eq (n : Nat) :
    bracketPure n = (pure n : StateM Nat Nat) := rfl

example (n s : Nat) :
    (n = n) ⊑ wp (bracketPure n) (fun r _ => r = n) ⟨⟩ s := by
  lmvcgen [bracketPure_eq] with grind

example : True := by
  fail_if_success
    have _ : (0 = 0) ⊑ wp (globalPure 0) (fun r _ => r = 0) ⟨⟩ 0 := by
      lmvcgen [-globalPure_eq] with grind
  trivial

abbrev LiftStateM := ExceptT String (StateM Nat)

example (s : Nat) :
    (s = s) ⊑
      wp (MonadStateOf.get : LiftStateM Nat)
        (fun r s => r = s) epost⟨fun _ _ => False⟩ s := by
  lmvcgen with grind

example (s : Nat) :
    (⊤ : Prop) ⊑
      wp (MonadStateOf.set (m := LiftStateM) 5)
        (fun _ s => s = 5) epost⟨fun _ _ => False⟩ s := by
  lmvcgen with grind

example (s : Nat) :
    (⊤ : Prop) ⊑
      wp (MonadStateOf.modifyGet (m := LiftStateM) (fun s => (s, s + 1)))
        (fun r s => s = r + 1) epost⟨fun _ _ => False⟩ s := by
  lmvcgen with grind

abbrev LiftReaderM := ExceptT String (ReaderT Nat Id)

example (r : Nat) :
    (r = r) ⊑
      wp (MonadReaderOf.read : LiftReaderM Nat)
        (fun x r => x = r) epost⟨fun _ _ => False⟩ r := by
  lmvcgen with grind

end EqualitySpecs
