import Std.Internal.Do
import Std.Tactic.Do

/-!
Tests that the backward rule built from an equality `@[spec]` generalizes over the program's explicit
arguments. The rule is cached per spec theorem, so a rule built for one argument must not be reused
for a different argument. A `@[spec] def` matching on a state read, invoked at two distinct literal
arguments, exercises this.
-/

open Std.Internal.Do Lean.Order

set_option mvcgen.warning false

abbrev M := StateT (String → Option Nat) Id

@[spec] def rd (x : String) : M Nat := do
  match (← get) x with
  | some n => pure n
  | none => pure 0

example : ⦃fun _ => True⦄ (do let _ ← rd "a"; rd "b" : M Nat) ⦃fun _ _ => True⦄ := by
  vcgen [rd] with finish

abbrev N := StateT Nat Id

@[spec] def rdN (x : Nat) : N Nat := do
  match (← get) with
  | 0 => pure x
  | n+1 => pure n

example : ⦃fun _ => True⦄ (do let _ ← rdN 1; rdN 2 : N Nat) ⦃fun _ _ => True⦄ := by
  vcgen [rdN] with finish
