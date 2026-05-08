import Lean.Server.Test.Cancel
import Lean.Elab.Tactic.Try
open Lean Lean.Meta Lean.Elab Lean.Elab.Term Lean.Elab.Tactic
open Lean.Server.Test.Cancel

/-!
Test cancellation propagation through `elabEmptyByAsTry`. With
`tactic.tryOnEmptyBy true` an empty `by` (the proof `:= by` with nothing
following) spawns a `wrapAsyncAsSnapshot` task that runs `try?` against
the expected type. The outer snapshot's cancel token (`T_outer`) is
registered with `Core.logSnapshotTask`; on re-elaboration `cancelRec`
walks the snapshot tree and sets it.

A `[try_suggestion]` generator runs in `MetaM` inside the empty-by
snapshot task, where `(← read).cancelTk?` is `T_outer`. The generator
registers an `onSet` callback that prints `"T_outer fired"` to stderr
when the cancel token is set, and returns a placeholder `skip` tactic.
The runner waits for the outer command's `wait_for_cancel_once_async`
diagnostic, edits the preceding example, and the resulting
`cancelRec` walk should fire `T_outer`. Seeing `"T_outer fired"` in
stderr confirms cancellation reaches the empty-by snapshot.

Without the cancellation propagating, the test runner times out.
-/

namespace TestEmptyBy

opaque UnsolvableProp : Prop

/-- Generator that registers a cancel-token observer on the empty-by
snapshot task's `cancelTk?` (= `T_outer`). Returns a placeholder
`skip` tactic; we don't care about the actual `try?` suggestion. -/
@[try_suggestion]
def tracerSuggestion (_goal : MVarId) (_info : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := do
  if let some cancelTk := (← readThe Core.Context).cancelTk? then
    cancelTk.onSet (do
      let _ ← (IO.eprintln "T_outer fired").toBaseIO)
  let stx ← `(tactic| skip)
  return #[stx]

end TestEmptyBy

set_option tactic.tryOnEmptyBy true

example : True := by
  trivial
       --^ waitFor: blocked
       --^ insert: "; skip"
       --^ sync

theorem t1 : True := by
  wait_for_cancel_once_async
  trivial

example : TestEmptyBy.UnsolvableProp := by
