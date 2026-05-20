/-
Tests for `autoTry.onEmptyBy`: empty `by` blocks run `try?` and suggest proofs.
-/

set_option autoTry.onEmptyBy true

-- Basic: empty by reports unsolved goals first (so the user sees it immediately
-- even when `try?` is slow), then `try?` emits its suggestions as a single info
-- message.
/--
error: unsolved goals
⊢ True
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
set_option autoTry.onEmptyBy false in
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

-- Unprovable goal: try? finds no suggestions, so we get only the unsolved-goals error.
/--
error: unsolved goals
⊢ False
-/
#guard_msgs in
example : False := by

-- Nested in a backtracking combinator: the inner empty `by` still triggers a suggestion,
-- because the linter sees the elaborated form post-hoc and does not have access to the
-- `errToSorry` flag the elaborator used. The outer proof still succeeds via the second
-- branch of `first`, but the inner unsolved-goals error is still surfaced.
/--
error: unsolved goals
⊢ True
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
example : True := by first | exact (by) | trivial
