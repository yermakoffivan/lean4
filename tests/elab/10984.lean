/-!
# Dotted function notation can handle `@` and universe levels
-/

set_option warn.sorry false
set_option pp.mvars.anonymous false

/-!
Explicit `@`
-/
/-- info: [] : List Nat -/
#guard_msgs in #check (@.nil Nat : List _)

/-!
Universe levels.
-/
example : List Nat := .nil.{0}

/--
error: Type mismatch
  []
has type
  List.{1} ?_
of sort `Type 1` but is expected to have type
  List.{0} Nat
of sort `Type`
-/
#guard_msgs in
example : List Nat := .nil.{1}

/-- error: too many explicit universe levels for `List.nil` -/
#guard_msgs in
example : List Nat := .nil.{0,0}

/-!
Example of `@` from Floris van Doorn at https://github.com/leanprover/lean4/issues/10984
-/
example {α : Type} (f : ∀ {α}, List α → List α) : f (@.nil α) = .nil := sorry

/-!
Example of `@` plus universe levels adapated from https://github.com/leanprover/lean4/issues/10984
-/
example {α : Type u} (f : ∀ {α}, List α → List α) : f (@.nil.{u} α) = .nil := sorry

/-!
Example from Arthur Adjedj at https://github.com/leanprover/lean4/issues/8743
-/
/-- info: [2] : List Nat -/
#guard_msgs in #check (List.cons.{0} 2 [] : List Nat)
/-- info: [2] : List Nat -/
#guard_msgs in #check (.cons.{0} 2 [] : List Nat)

/--
error: Type mismatch
  [2]
has type
  List.{1} ?_
of sort `Type 1` but is expected to have type
  List.{0} Nat
of sort `Type`
-/
#guard_msgs in #check (.cons.{1} 2 [] : List Nat)
