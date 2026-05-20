/-
Tests for the `autoTry.*` post-elab hook options:
  - `autoTry.onEmptyBy`      -- run `try?` on empty `by` blocks
  - `autoTry.onUnsolvedGoal` -- run `try?` on tactics that left goals unsolved
  - `autoTry.onSorry`        -- run `try?` on `sorry` tactics

Note: the linter walks info trees and skips subtrees that are inside multi-elab
combinators (`first | ...`, `<;>` via `all_goals`, `try ...`, `attempt_all`,
`repeat`/`repeat'`, `iterate`, etc.) -- so e.g. `first | exact (by) | trivial`
does not report a suggestion for the speculatively-elaborated failing branch.
-/

/-! ## `autoTry.onEmptyBy` -/

set_option autoTry.onEmptyBy true

-- Basic: empty by reports unsolved goals first, then `try?` emits its suggestions.
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

-- Disabled: empty by gives just unsolved goals
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
set_option autoTry.onEmptyBy false in
example : True := by

-- Non-empty by is not affected
example : True := by trivial

-- `by { }` (empty braces) parses differently and the detector does not match it.
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
example : True := by { }

-- Unprovable goal: try? finds no suggestions, so the hook is fully silent.
/--
error: unsolved goals
⊢ False
-/
#guard_msgs in
example : False := by

-- Inside `first | ... | ...` the empty `by` still triggers a suggestion: the heuristic
-- only suppresses tactics whose syntax was elaborated against multiple proof states (rhs
-- of `<;>`, body of `repeat`, etc.), and each branch of `first` is elaborated against the
-- same single state -- the speculative branches are not "multi-elab" in that sense.
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

-- Inside `<;>` (which expands to `focus / all_goals`), the rhs runs once per goal so the
-- heuristic correctly suppresses the per-goal suggestions.
/--
error: unsolved goals
case left
⊢ True

case right
⊢ True
-/
#guard_msgs in
example : True ∧ True := by
  constructor <;> skip

set_option autoTry.onEmptyBy false

/-! ## `autoTry.onSorry` -/

set_option autoTry.onSorry true

-- Tactic-form `sorry` triggers; the suggestion anchors at the `sorry` token.
/--
warning: declaration uses `sorry`
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs in
example : True := by sorry

-- Term-form `sorry` does NOT trigger: by design we only fire on the tactic form.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : True := sorry

-- A `sorry` tactic nested in `first | ... | ...` still triggers, same reasoning as for
-- the nested empty-`by` case above.
/--
warning: declaration uses `sorry`
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs in
example : True := by first | sorry | trivial

set_option autoTry.onSorry false

/-! ## `autoTry.onUnsolvedGoal` -/

set_option autoTry.onUnsolvedGoal true

-- A tactic that left a goal unsolved triggers a suggestion at the tactic.
/--
error: unsolved goals
⊢ True
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs in
example : True := by skip

-- A successful proof leaves no unsolved goals, so no trigger.
example : True := by trivial

-- An unsolved-goal trigger inside `first | ...` fires at the outer `first` tactic, not at
-- the individual branches: the branches are speculatively elaborated and we don't want a
-- suggestion at each. (Here `skip` "succeeds" without making progress, so `first` picks
-- it and the second branch is never tried -- but `first` itself is the outer tactic that
-- left goals open.)
/--
error: unsolved goals
⊢ True
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs in
example : True := by first | skip | trivial

set_option autoTry.onUnsolvedGoal false

/-! ## Error gate

When a command logs any *non-`unsolved goals`* error, the auto-`try?` hook stays silent
entirely. The user is presumed to be in the middle of fixing a broken proof; suggestions
for the unsolved-goal site are noise until the other errors are addressed.
-/

-- A non-`unsolved goals` error inside the same command suppresses every autoTry trigger
-- in that command. Here the `sorry` would normally fire `onSorry`, but it is silenced.
/--
error: Unknown identifier `this_undefined_name`
---
error: No goals to be solved
-/
#guard_msgs in
set_option autoTry.onSorry true in
example : True := by
  exact this_undefined_name
  sorry
