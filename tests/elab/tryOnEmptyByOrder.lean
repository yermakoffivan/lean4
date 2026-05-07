/-
Tests that `try?` triggered by an empty `by` does not block the unsolved-goals
diagnostic: even with a slow user-registered suggestion generator, the user must
see the unsolved-goals error before any `try?` output.
-/
module
public import Lean
public meta import Lean.Elab.Tactic.Try

open Lean Meta Elab Tactic Try

set_option tactic.tryOnEmptyBy true

opaque CustomProp : Prop
axiom _customPropHolds : CustomProp

-- Slow user-registered generator (200ms IO sleep). Built-in tactics cannot solve
-- `CustomProp`, so this user generator is the one that produces a suggestion.
@[local try_suggestion]
meta def slowSolver (_goal : MVarId) (_info : Try.Info) : MetaM (Array (TSyntax `tactic)) := do
  IO.sleep 200
  return #[← `(tactic| exact _customPropHolds)]

-- The unsolved-goals error must come before the `Try this` message. `#guard_msgs`
-- enforces ordering, so this test fails if `try?` is run before the diagnostic
-- is emitted.
/--
error: unsolved goals
⊢ CustomProp
---
info: Try this:
  [apply] by exact _customPropHolds✝

(Disable this with `set_option tactic.tryOnEmptyBy false`.)
-/
#guard_msgs in
example : CustomProp := by
