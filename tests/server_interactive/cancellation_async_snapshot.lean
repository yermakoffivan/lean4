import Lean.Server.Test.Cancel
import Lean
open Lean Meta Elab Term Tactic Try
open Lean.Server.Test.Cancel

/-!
Unit test for the *async-snapshot-from-term-elab* pattern that `elabEmptyByAsTry`
relies on: register a fresh `IO.CancelToken`, spawn a snapshot task via
`Term.wrapAsyncAsSnapshot`, log it with `Core.logSnapshotTask`, and verify that
the server's `cancelRec` reaches the spawned task on re-elaboration.

This is similar in spirit to `cancellation_try_plain.lean`, but more involved
because cancellation here flows through an asynchronously-spawned snapshot task
(not a synchronous `[try_suggestion]` candidate running on the main elaboration
thread). The test must therefore stand up the snapshot task itself, including
the polling loop that exits on `cancelTk.isSet`.

Compared to `cancellation_empty_by.lean`, which tests `elabEmptyByAsTry`
end-to-end via `set_option tactic.tryOnEmptyBy true` and a `[try_suggestion]`,
this file is a *self-contained* unit test of the spawn-pattern. It uses a
custom term elaborator that mirrors `elabEmptyByAsTry`'s structure, so it would
keep catching regressions in `Term.wrapAsyncAsSnapshot` / `Core.logSnapshotTask`
even if `elabEmptyByAsTry` itself were removed or restructured. The integration
test covers `elabEmptyByAsTry`'s specific plumbing on top.

If the test elaborator passes `cancelTk? := none` to `Core.logSnapshotTask`,
the file worker's `cancelRec` cannot fire `cancelTk`, the polling loop runs
forever, the second elaboration's wait on the task hangs, and the runner times
out.
-/

syntax (name := testSpawnSnapshot) "test_spawn_snapshot" : term

@[term_elab testSpawnSnapshot]
def elabTestSpawnSnapshot : Lean.Elab.Term.TermElab := fun _ _ => do
  match (← mkTestTask "test_spawn") with
  | none =>
    -- Subsequent elaboration: wait on the task registered by the first one,
    -- which the spawned snapshot task is expected to resolve on cancellation.
    let some t := (← testTasksRef.get).get? "test_spawn" | unreachable!
    discard <| IO.wait t
    return .const ``True.intro []
  | some prom =>
    let cancelTk ← IO.CancelToken.new
    let act ← Term.wrapAsyncAsSnapshot (cancelTk? := cancelTk) fun (_ : Unit) => do
      let some innerTk := (← readThe Core.Context).cancelTk? | unreachable!
      while true do
        if (← innerTk.isSet) then
          IO.eprintln "test_spawn: cancelled"
          prom.resolve ()
          return
        IO.sleep 30
    let t ← BaseIO.asTask (act ())
    Core.logSnapshotTask { stx? := none, reportingRange := .skip, task := t, cancelTk? := cancelTk }
    Lean.logInfo "blocked"
    return .const ``True.intro []

example : True := by
  trivial
       --^ waitFor: blocked
       --^ insert: "; skip"
       --^ sync

example : True := test_spawn_snapshot
