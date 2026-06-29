/-
Tests for the `autoTry.*` post-elab hook options:
  - `autoTry.onEmptyProof` -- run `try?` on *empty* tactic-sequence containers; rendered
    as an *append* (a strict subset of `autoTry.onUnsolvedGoal`).
  - `autoTry.onUnsolvedGoal` -- run `try?` on each tactic-sequence container whose body
    left exactly one unsolved goal; rendered as an *append* to the sequence.
  - `autoTry.onSorry` -- run `try?` on `sorry` tactics; rendered as a *replacement* of
    the `sorry`.

Tests use opaque propositions `P`, `Q`, and a user-registered `@[try_suggestion]` that
returns one deterministic suggestion per goal type. `debug.tactic.try.onlyUserSuggestions`
disables the expensive built-in branches of `try?` (`simp` / `grind` / `exact?` / …) so
the test output stays small and stable.
-/
import Lean
import Lean.Elab.Tactic.Try
open Lean Meta Elab Tactic

opaque P : Prop
axiom Pintro : P

opaque Q : Prop
axiom Qintro : Q

opaque UnsolvableProp : Prop

/-- Deterministic single-suggestion generator. Returns one tactic per recognised goal
type; on `P` it prefers a local `h` of the right type, otherwise the introduction
axiom. Goals it doesn't recognise (e.g. `UnsolvableProp`) get no suggestion. -/
@[try_suggestion]
def autoTryTestSuggestion (goal : MVarId) (_info : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := goal.withContext do
  let ty := (← instantiateMVars (← goal.getType)).consumeMData
  if ty.isConstOf ``P then
    if (← getLCtx).findFromUserName? `h |>.isSome then
      return #[← `(tactic| exact $(mkIdent `h))]
    return #[← `(tactic| exact $(mkIdent ``Pintro))]
  if ty.isConstOf ``Q then
    return #[← `(tactic| exact $(mkIdent ``Qintro))]
  return #[]

set_option debug.tactic.try.onlyUserSuggestions true

/-! ## `autoTry.onEmptyProof` -- empty tactic-sequence containers

Despite the name, this option fires on any tactic-sequence container whose body has no
tactics yet — empty `by`, empty `· `, empty `case h => `, empty `{ }`. -/

set_option autoTry.onEmptyProof true

-- Empty `by`: fires.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by

-- Non-empty `by skip`: `onEmptyProof` does *not* fire (the block isn't empty).
/--
error: unsolved goals
⊢ P
-/
#guard_msgs in
example : P := by skip

-- Empty `· `: the cdot's body is empty, so the trigger fires there. The enclosing
-- `by ·` is *not* empty (its body has the cdot), so no second suggestion fires.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by ·

set_option autoTry.onEmptyProof false

/-! ## `autoTry.onUnsolvedGoal` -- empty `by` -/

set_option autoTry.onUnsolvedGoal true

-- Empty `by`: trigger fires.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by

-- Disabled: empty `by` gives just the unsolved-goals error.
/--
error: unsolved goals
⊢ P
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal false in
example : P := by

-- Successful proof: no trigger.
example : P := by exact Pintro

-- `by { }` (bracketed empty body) still triggers: the inner `tacticSeq` is empty even
-- though the braces give the `by` block a non-zero width on the source.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by { }

-- Unrecognised goal: the suggester returns no candidates, the hook is silent.
/--
error: unsolved goals
⊢ UnsolvableProp
-/
#guard_msgs in
example : UnsolvableProp := by

/-! ## `autoTry.onUnsolvedGoal` -- non-empty `by`, append behaviour -/

-- `by skip` is single-line non-empty; the suggestion is appended after `skip`.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by skip

-- `by skip; skip` appends *after* the second `skip`, not in place of the first.
/--
error: unsolved goals
⊢ P
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by skip; skip

-- Multiple unsolved goals: the hook is silent at the outer block (one suggestion
-- can't replay against multiple goals). The user is expected to structure the proof
-- with `·` / `case` so a per-goal scope fires its own suggestion.
/--
error: unsolved goals
case left
⊢ P

case right
⊢ P
-/
#guard_msgs in
example : P ∧ P := by constructor

-- Inside `<;>` the rhs is elaborated against multiple proof states; the trigger is
-- correctly suppressed.
/--
error: unsolved goals
case left
⊢ P

case right
⊢ P
-/
#guard_msgs in
example : P ∧ P := by
  constructor <;> skip

-- `case h => …`: the trigger fires on the case scope and also on the enclosing `by`
-- block (which still has the sibling goal open). The two "Try this" messages share
-- the suggestion text (both goals are `P`); `positions := true` makes them
-- distinguishable by source range.
/--
@ +3:12...19
error: unsolved goals
⊢ P
---
@ +1:19...+3:19
error: unsolved goals
case right
⊢ P
---
@ +3:12...19
info: Try this:
  [apply] exact Pintro
---
@ +1:19...+3:19
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs (positions := true) in
example : P ∧ P := by
  constructor
  case left => skip

-- `· …` (cdot focus): same shape as `case`, but anchored at the cdot scope.
/--
@ +3:2...8
error: unsolved goals
case left
⊢ P
---
@ +1:19...+3:8
error: unsolved goals
case right
⊢ P
---
@ +3:2...8
info: Try this:
  [apply] exact Pintro
---
@ +1:19...+3:8
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs (positions := true) in
example : P ∧ P := by
  constructor
  · skip

-- `case' h => …` (prime variant): `case'` does *not* emit an "unsolved goals" error
-- when its body doesn't close the focused goal -- it just leaves it open silently.
-- The error-gated trigger stays quiet on the `case'` scope. Suggestions still fire on
-- the inner `case right => skip` (which does emit the error) and on the enclosing
-- `by` block for the still-open `left` sibling -- but *not* on the `case' left` scope.
/--
error: unsolved goals
⊢ P
---
error: unsolved goals
case left
⊢ P
---
info: Try this:
  [apply] exact Pintro
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P ∧ P := by
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
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by sorry

-- Term-form `sorry`: not a tactic, no trigger.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : P := sorry

-- `sorry` inside `first | ... | ...` still triggers -- the branches of `first` are
-- elaborated against the same single state.
/--
warning: declaration uses `sorry`
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P := by first | sorry | exact Pintro

set_option autoTry.onSorry false

/-! ## Admit-wrapped bodies see the surrounding local context

When an admit-emitting wrapper (`{ }`, `· `, `case h => …`, …) leaves its body
unsolved, the suggestion runs `try?` against the focused goal *as the wrapper sees
it after its body ran* -- including any hypotheses the body introduced.

The tests below introduce a hypothesis `h : P`; the suggester prefers `exact h` when
`h` is in scope, so the visible suggestion text changes from `exact Pintro` to
`exact h` when the hypothesis is correctly threaded through. -/

set_option autoTry.onUnsolvedGoal true

-- Setup runs in the *outer* by-block, then `{ }` admits with `h` already in context.
/--
error: unsolved goals
h : P
⊢ P
---
info: Try this:
  [apply] exact h
-/
#guard_msgs in
example : P := by
  have h : P := Pintro
  { }

-- Setup runs *inside* the bracketed body. Verifies the wrapper captures the
-- post-tac state (with `h`), not the entry state (without `h`).
/--
error: unsolved goals
h : P
⊢ P
---
info: Try this:
  [apply] exact h
-/
#guard_msgs in
example : P := by { have h : P := Pintro }

-- Same, inside `· `.
/--
error: unsolved goals
h : P
⊢ P
---
info: Try this:
  [apply] exact h
-/
#guard_msgs in
example : P := by · have h : P := Pintro

-- Same, inside `case left => …`. The case binder strips the `case left` tag from the
-- goal, so the error shows `⊢ P` and the suggestion picks up the `h` introduced by
-- the body.
/--
error: unsolved goals
h : P
⊢ P
---
error: unsolved goals
case right
⊢ P
---
info: Try this:
  [apply] exact h
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : P ∧ P := by
  constructor
  case left => have h : P := Pintro

set_option autoTry.onUnsolvedGoal false

/-! ## Focused goals on `case`

`case right => …` focuses on the `right` subgoal, not the head of the parent goal list.
The suggestion at the case scope must run `try?` against the *focused* goal -- otherwise
e.g. `case right => skip` in a `Q ∧ P` proof would mistakenly suggest tactics for
closing `Q` (the head of the parent's goal list) at the right-side case scope.
-/

set_option autoTry.onUnsolvedGoal true

-- Goal `Q ∧ P`. After `constructor`, the goals are `[left: Q, right: P]`. The case-left
-- scope sees `Q` (its suggestion is `exact Qintro`), the enclosing `by` block sees
-- the still-unsolved `right` (`P`, suggestion `exact Pintro`) — different types,
-- different suggestions.
/--
error: unsolved goals
⊢ Q
---
error: unsolved goals
case right
⊢ P
---
info: Try this:
  [apply] exact Qintro
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example : Q ∧ P := by
  constructor
  case left => skip

set_option autoTry.onUnsolvedGoal false

/-! ## Composite tactics with multiple embedded tacticSequences

`induction n with | zero => … | succ n ih => …` is a single tactic whose syntax
embeds one `tacticSeq` per branch. Each branch that leaves its goal unsolved should
fire its own suggestion, anchored at the branch's `=> …` body. -/

set_option autoTry.onUnsolvedGoal true

/--
error: unsolved goals
case zero
⊢ P
---
error: unsolved goals
case succ
n : Nat
ih : P
⊢ P
---
info: Try this:
  [apply] exact Pintro
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
example (n : Nat) : P := by
  induction n with
  | zero => skip
  | succ n ih => skip

set_option autoTry.onUnsolvedGoal false

/-! ## Nested-scope error isolation

An unsolved-goals error nested inside another scope (e.g. from a `have := by …`) must
*not* fire the outer scope's trigger. Below, the outer `by` block is closed by
`exact Pintro`, but the inner `by skip` proof of `Q` emits an unsolved-goals error.
We expect a suggestion only at the inner `by`, never at the outer one.
-/

set_option autoTry.onUnsolvedGoal true

/--
error: unsolved goals
⊢ Q
---
info: Try this:
  [apply] exact Qintro
-/
#guard_msgs in
example : P := by
  have h : Q := by skip
  exact Pintro

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
example : P := by
  exact this_undefined_name
  sorry

/-! ## Suggester context matches the elaboration scope at log time

The hook recovers the suggester's elaboration context for unsolved-goal triggers from
the `MessageData.withContext` (env, mctx, lctx, opts) and `MessageData.withNamingContext`
(currNamespace, openDecls) wrappers that the standard log machinery attaches to every
logged message. Those values come from the active `Core.Context` at log time, so every
scope shift in effect when `Term.reportUnsolvedGoals` fired -- command-level
`open … in <cmd>`, term-level `open … in <term>`, the macro-expanded inner command of
`set_option … in`, plain `withTheReader Core.Context` overrides in custom elaborators
-- is captured automatically with no InfoTree round-trip.

The suggester below builds the witness as an `Expr` and delaborates it with
`PrettyPrinter.delab`, so the rendered identifier goes through the real
openDecls-aware delaborator -- the same path `exact?` uses to format its hits. -/

namespace AutoTryCtxBugRepro

opaque MyUniqueProp : Prop
axiom myUniqueAxiom : MyUniqueProp

end AutoTryCtxBugRepro

@[try_suggestion]
def autoTryDelabSuggester (goal : MVarId) (_ : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := goal.withContext do
  let ty := (← instantiateMVars (← goal.getType)).consumeMData
  unless ty.isConstOf ``AutoTryCtxBugRepro.MyUniqueProp do return #[]
  let term ← PrettyPrinter.delab (mkConst ``AutoTryCtxBugRepro.myUniqueAxiom)
  return #[← `(tactic| exact $term)]

set_option autoTry.onEmptyProof true

-- Control: no local `open`. Full name expected.
/--
error: unsolved goals
⊢ AutoTryCtxBugRepro.MyUniqueProp
---
info: Try this:
  [apply] exact AutoTryCtxBugRepro.myUniqueAxiom
-/
#guard_msgs in
example : AutoTryCtxBugRepro.MyUniqueProp := by

-- `open … in <term>` wraps the empty `by`. The term-level `elabOpen` uses
-- `withTheReader Core.Context` to install the local open; the message's
-- `withNamingContext` wrapper captures the resulting `openDecls`, so the suggester
-- sees them and renders the short name.
/--
error: unsolved goals
⊢ MyUniqueProp
---
info: Try this:
  [apply] exact myUniqueAxiom
-/
#guard_msgs in
example : AutoTryCtxBugRepro.MyUniqueProp := open AutoTryCtxBugRepro in by

-- `open … in <command>` form: same shape, same recovery via the message wrappers.
/--
error: unsolved goals
⊢ MyUniqueProp
---
info: Try this:
  [apply] exact myUniqueAxiom
-/
#guard_msgs in
open AutoTryCtxBugRepro in
example : AutoTryCtxBugRepro.MyUniqueProp := by

-- `set_option … in <example>` (command-level in-form) expands to a `section` block
-- whose inner command captures a fresh `commandCtx` with the override. The deepest-
-- enclosing-ctx walk picks it up. With `open AutoTryCtxBugRepro` at section scope so
-- the goal type's `MyUniqueProp` resolves, and `pp.fullNames true` flipped only inside
-- the in-form, the goal display shows the fully-qualified type and the suggester also
-- sees the override and renders the fully-qualified `AutoTryCtxBugRepro.myUniqueAxiom`.
section
open AutoTryCtxBugRepro

/--
error: unsolved goals
⊢ AutoTryCtxBugRepro.MyUniqueProp
---
info: Try this:
  [apply] exact AutoTryCtxBugRepro.myUniqueAxiom
-/
#guard_msgs in
set_option pp.fullNames true in
example : MyUniqueProp := by

end

set_option autoTry.onEmptyProof false

/-! ## Edit-text verification

The [apply] widget hides the separator characters that the edit inserts. Setting
`debug.autoTry.showEdits` makes the linter emit an info message per suggestion describing
the literal replacement text and the (zero-width) insertion position. This is the same
data the widget hands to the IDE when [apply] is clicked. -/

-- Empty `by` -> insertion right after `by`, leading space.
/--
error: unsolved goals
⊢ P
---
info: autoTry edit: insert " exact Pintro" at +1:17
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : P := by

-- Single-line non-empty `by` -> insertion right after `skip`, leading `"; "`.
/--
error: unsolved goals
⊢ P
---
info: autoTry edit: insert "; exact Pintro" at +1:22
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : P := by skip

-- Single-tactic `by` body across multiple source lines: we still use `; ` (newline +
-- indent is reserved for bodies that *already* have more than one tactic on separate
-- lines).
/--
error: unsolved goals
⊢ P
---
info: autoTry edit: insert "; exact Pintro" at +2:6
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : P := by
  skip

/-! ### Empty-body insertion positions

For an empty `tacticSeq1Indented` the body has no `getPos?`/`getTailPos?`, so
`findTacticSeqBody` falls back to `range.stop` -- the stop position of the underlying
`Tactic.unsolvedGoals` message. That's "just past the opener" (`by`, `·`, `=>`)
*only because* `Term.reportUnsolvedGoals` happens to log the error at the surrounding
`byTactic` / `cdot` / `case` syntax, whose total width equals the opener's width when
the body is empty. The tests below pin those positions so any future change that widens
the producer's `ref` (e.g. logging at an enclosing term ref) shows up as a test
failure rather than as a silent off-by-many-characters insertion. -/

-- Empty `· ` (cdot) inside an outer `by` block: insert just past `·`.
/--
error: unsolved goals
⊢ P
---
info: autoTry edit: insert " exact Pintro" at +1:19
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : P := by ·

-- Empty `by { }` (bracketed): insert just before `}` (uses `parent[2].getPos?`,
-- not `range.stop`, so this exercises a separate code path).
/--
error: unsolved goals
⊢ P
---
info: autoTry edit: insert " exact Pintro" at +1:20
---
info: Try this:
  [apply] exact Pintro
-/
#guard_msgs in
set_option autoTry.onUnsolvedGoal true in
set_option debug.autoTry.showEdits true in
example : P := by { }
