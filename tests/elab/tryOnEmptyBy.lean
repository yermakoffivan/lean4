/-
Tests for `tactic.tryOnEmptyBy`: empty `by` blocks run `try?` and suggest proofs.
-/

-- Basic: empty by suggests proofs and still reports unsolved goals.
-- The implicit `try?` is informational only — it must not solve the goal.
/--
info: Try these:
  [apply] by solve_by_elim
  [apply] by simp
  [apply] by simp only
  [apply] by grind
  [apply] by grind only
  [apply] by simp_all
empty `by` ran `try?`; disable with `set_option tactic.tryOnEmptyBy false`
---
error: unsolved goals
⊢ True
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

-- Nested in a backtracking combinator (`errToSorry = false`): try? must stay silent.
-- We only assert the absence of the try? info message; the unsolved-goals error is expected
-- because `exact (by)` succeeds at term-elab time (the empty tactic block fails later).
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
example : True := by first | exact (by) | trivial
