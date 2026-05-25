/-
Tests for the `autoTry.*` post-elab hook options:
  - `autoTry.onEmptyProof` -- run `try?` on *empty* `by` blocks; rendered as an *append*
    (a strict subset of `autoTry.onUnsolvedGoal`).
  - `autoTry.onUnsolvedGoal` -- run `try?` on each `by` block (incl. empty `by`) whose
    sequence left exactly one unsolved goal; rendered as an *append* to the sequence.
  - `autoTry.onSorry` -- run `try?` on `sorry` tactics; rendered as a *replacement* of
    the `sorry`.

The [apply] widget shows the bare tactic for readability; the actual edit text (separator
+ tactic) is verified via `trace[autoTry]` in the dedicated section below.

The linter skips candidates whose syntax was elaborated against multiple proof states
(rhs of `<;>`, body of `repeat`/`iterate`, etc.) -- a single suggestion can't replay
against multiple goals.
-/

/-! ## `autoTry.onEmptyProof` -- empty tactic-sequence containers

Despite the name, this option fires on any tactic-sequence container whose body has no
tactics yet — empty `by`, empty `· `, empty `case h => `, etc. -/

set_option autoTry.onEmptyProof true

-- Empty `by`: fires.
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
example : True := by

-- Non-empty `by` with unsolved goals: `onEmptyBy` does not fire (the block isn't empty).
-- This is the difference from `onUnsolvedGoal`, which would fire here.
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
example : True := by skip

-- Empty `· `: the cdot's body is empty, so the trigger fires at the cdot. The enclosing
-- `by ·` is *not* empty (its body has the cdot), so no second suggestion fires there.
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
example : True := by ·

set_option autoTry.onEmptyProof false

/-! ## `autoTry.onUnsolvedGoal` -- empty `by` -/

set_option autoTry.onUnsolvedGoal true

-- Empty `by`: trigger fires (one unsolved goal); the widget shows the tactic to apply.
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
example : True := by

-- Disabled: empty `by` gives just the unsolved-goals error.
/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal false in
example : True := by

-- Successful proof: no trigger.
example : True := by trivial

-- `by { }` (bracketed empty body) still triggers: the inner `tacticSeq` is empty even
-- though the braces give the `by` block a non-zero width on the source.
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
example : True := by { }

-- Unprovable goal: try? finds nothing, the hook is silent. We use an opaque Prop so the
-- default branches (including `impossible by decide | impossible by simp | impossible by
-- grind`) cannot dispatch it.
opaque OpaqueProp : Prop
/--
error: unsolved goals
⊢ OpaqueProp
-/
#guard_msgs in
example : OpaqueProp := by

/-! ## `autoTry.onUnsolvedGoal` -- non-empty `by`, append behaviour -/

-- `by skip` is single-line non-empty; the suggestion is appended after `skip`.
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

-- `by skip; skip` appends *after* the second `skip`, not in place of the first.
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
example : True := by skip; skip

-- Multiple unsolved goals: the hook is silent. The user is expected to structure the
-- proof with `·` / `case` so a per-goal byTactic fires its own suggestion.
/--
error: unsolved goals
case left
⊢ True

case right
⊢ True
-/
#guard_msgs in
example : True ∧ True := by constructor

-- Inside `<;>` the rhs is elaborated against multiple proof states; the trigger is
-- correctly suppressed.
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

-- `case h => …`: the trigger fires on the case scope when it left an unsolved goal,
-- and *also* on the enclosing `by` block (which still has the sibling goal `right`
-- open). Each scope gets its own suggestion at its own append point. `positions := true`
-- makes the two "Try these" messages distinguishable: the case anchors at `case left =>
-- skip` (line +2:2-2:20) while the outer `by` anchors at the whole block.
/--
@ +3:12...19
error: unsolved goals
⊢ True
---
@ +1:25...+3:19
error: unsolved goals
case right
⊢ True
---
@ +1:25...+3:19
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
---
@ +3:2...19
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs (positions := true) in
example : True ∧ True := by
  constructor
  case left => skip

-- `· …` (cdot focus): the trigger fires on the cdot scope when its body left an
-- unsolved goal, and on the outer `by` block for the sibling goal.
/--
@ +3:2...8
error: unsolved goals
case left
⊢ True
---
@ +1:25...+3:8
error: unsolved goals
case right
⊢ True
---
@ +1:25...+3:8
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
---
@ +3:2...8
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
-/
#guard_msgs (positions := true) in
example : True ∧ True := by
  constructor
  · skip

-- `case' h => …` (prime variant): `case'` does *not* emit an "unsolved goals" error
-- when its body doesn't close the focused goal -- it just leaves it open silently.
-- The error-gated trigger stays quiet on the `case'` scope. Suggestions still fire on
-- the inner `case right => skip` (which does emit the error) and on the enclosing
-- `by` block for the still-open `left` sibling -- but *not* on the `case' left` scope.
/--
error: unsolved goals
⊢ True
---
error: unsolved goals
case left
⊢ True
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
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
example : True ∧ True := by
  constructor
  case' left => skip
  case right => skip

set_option autoTry.onUnsolvedGoal false

/-! ## `autoTry.onSorry` -- `sorry` replacement -/

set_option autoTry.onSorry true

-- Tactic-form `sorry`: the suggestion replaces the `sorry` (no separator prefix).
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

-- Term-form `sorry`: not a tactic, no trigger.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : True := sorry

-- `sorry` inside `first | ... | ...` still triggers -- the branches of `first` are
-- elaborated against the same single state.
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

/-! ## Limitation: admit-wrapped bodies with prior setup

When a `by` block runs setup tactics (e.g. `have h := …`) and then has its body admitted
by a wrapper (`{ … }` empty, `( … )` empty, `· `, or any user macro that calls
`closeUsingOrAdmit`), our `goalsBefore` fallback in `findFirstBodyGoal` reads off the
state at the *start* of the by-block's body -- before the setup ran -- rather than the
state at the wrapper's body. Two consequences:

* The suggestion is computed in the wrong local context (missing the hypotheses the
  setup introduced).
* The append point is *after* the admit wrapper, so pasting the suggestion adds a
  tactic that runs against "no goals to be solved" (the wrapper already closed the
  goal with `sorry`).

The proper fix is for admit-emitting elaborators (`tacticSeqBracketed`, `cdot`, etc.)
to push an explicit autoTry info-tree marker carrying the precise `(mctx, goal,
insertPos)` triple. Until then, we just document the surprising behaviour below.
-/

set_option autoTry.onUnsolvedGoal true

-- `{ }` admits the focused goal with `sorry`; pasting any of the suggested tactics
-- below would actually break the proof (`trivial` etc. would run against "no goals to
-- be solved"). The suggestion is also computed without `h` in the local context,
-- because the fallback reads off the by-block's entry state.
/--
error: unsolved goals
h : True
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
example : True := by
  have h : True := True.intro
  { }

set_option autoTry.onUnsolvedGoal false

/-! ## Focused goals on `case`

`case right => …` focuses on the `right` subgoal, not the head of the parent goal list.
The suggestion at the case scope must run `try?` against the *focused* goal -- otherwise
e.g. `case right => skip` in a `False ∧ True` proof would mistakenly suggest tactics
that close `False` (the head of the parent's goal list).
-/

set_option autoTry.onUnsolvedGoal true

-- Goal `False ∧ True`. After `constructor`, the goals are `[left: False, right: True]`.
-- `case left => skip` admits left with sorry and emits an unsolved-goals error for left.
-- The two scopes (case and the enclosing `by`) get suggestions for *their own* focused
-- goal: the case scope for `False` (`try?` only finds `impossible by …`), the outer
-- `by` for the still-unsolved `right` (True) — `solve_by_elim` etc.
/--
error: unsolved goals
⊢ False
---
error: unsolved goals
case right
⊢ True
---
info: Try these:
  [apply] solve_by_elim
  [apply] simp
  [apply] simp only
  [apply] grind
  [apply] grind only
  [apply] simp_all
---
info: Try this:
  [apply] impossible by simp
-/
#guard_msgs in
example : False ∧ True := by
  constructor
  case left => skip

set_option autoTry.onUnsolvedGoal false

/-! ## Nested-scope error isolation

An unsolved-goals error nested inside another scope (e.g. from a `have := by …`) must
*not* fire the outer scope's trigger. Below, the outer `by` block is closed by
`trivial`, but the inner `by skip` proof of `False` emits an unsolved-goals error.
We expect a suggestion only at the inner `by`, never at the outer one.
-/

set_option autoTry.onUnsolvedGoal true

/--
error: unsolved goals
⊢ False
-/
#guard_msgs in
example : True := by
  have h : False := by skip
  trivial

set_option autoTry.onUnsolvedGoal false

/-! ## Error gate

When a command logs any *non-`unsolved goals`* error, the auto-`try?` hook stays silent
entirely. The user is presumed to be in the middle of fixing a broken proof; suggestions
for the unsolved-goal site are noise until the other errors are addressed. -/

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

/-! ## Edit-text verification

The [apply] widget hides the separator characters that the edit inserts. Setting
`debug.autoTry.showEdits` makes the linter emit an info message per suggestion describing
the literal replacement text and the (zero-width) insertion position. This is the same
data the widget hands to the IDE when [apply] is clicked. -/

-- Empty `by` -> insertion right after `by`, leading space.
/--
error: unsolved goals
⊢ True
---
info: autoTry edit: insert " solve_by_elim" at +1:20
---
info: autoTry edit: insert " simp" at +1:20
---
info: autoTry edit: insert " simp only" at +1:20
---
info: autoTry edit: insert " grind" at +1:20
---
info: autoTry edit: insert " grind only" at +1:20
---
info: autoTry edit: insert " simp_all" at +1:20
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
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : True := by

-- Single-line non-empty `by` -> insertion right after `skip`, leading `"; "`.
/--
error: unsolved goals
⊢ True
---
info: autoTry edit: insert "; solve_by_elim" at +1:25
---
info: autoTry edit: insert "; simp" at +1:25
---
info: autoTry edit: insert "; simp only" at +1:25
---
info: autoTry edit: insert "; grind" at +1:25
---
info: autoTry edit: insert "; grind only" at +1:25
---
info: autoTry edit: insert "; simp_all" at +1:25
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
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : True := by skip

-- Multi-line `by` -> insertion after the last tactic on its own line, leading newline +
-- indent matching the body's column (2 here, matching `skip`).
/--
error: unsolved goals
⊢ True
---
info: autoTry edit: insert "\n  solve_by_elim" at +2:6
---
info: autoTry edit: insert "\n  simp" at +2:6
---
info: autoTry edit: insert "\n  simp only" at +2:6
---
info: autoTry edit: insert "\n  grind" at +2:6
---
info: autoTry edit: insert "\n  grind only" at +2:6
---
info: autoTry edit: insert "\n  simp_all" at +2:6
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
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : True := by
  skip
