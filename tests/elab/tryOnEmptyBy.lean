/-
Tests for `tactic.tryOnEmptyBy`: empty `by` blocks run `try?` and suggest proofs.
-/

-- Basic: empty by suggests a proof (info message + "Try these")
/--
info: empty `by` running `try?`; disable with `set_option tactic.tryOnEmptyBy false`
---
info: Try these:
  [apply] by solve_by_elim
  [apply] by simp
  [apply] by simp only
  [apply] by grind
  [apply] by grind only
  [apply] by simp_all
-/
#guard_msgs in
example : True := by

-- Disabled: empty by gives unsolved goals
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
set_option tactic.tryOnEmptyBy false in
example : True := by

-- Non-empty by is not affected
example : True := by
  trivial

-- by { } (braces) is not affected
example : True := by { trivial }

-- by { } (empty braces) does not trigger try?
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
example : True := by { }

-- Nested in overloaded resolution (errToSorry = false): should not run try?
-- This is effectively tested by the build succeeding — if try? ran during
-- overloaded resolution it would cause spurious failures.
