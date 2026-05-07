import Lean.Server.Test.Cancel
import Lean
open Lean Meta Elab Term Tactic Try
open Lean.Server.Test.Cancel

/-!
Test that an asynchronous `wrapAsyncAsSnapshot` task spawned from a *term
elaborator* (the pattern `elabEmptyByAsTry` uses for the implicit `try?`) is
properly cancelled when the document is edited.

The test elaborator below mirrors `elabEmptyByAsTry`'s structure: register a
fresh `IO.CancelToken`, spawn a snapshot task via `Term.wrapAsyncAsSnapshot`,
log it with `Core.logSnapshotTask`. Inside the task we poll the cancel token
and resolve a promise (shared via `onceRef` from `Lean.Server.Test.Cancel`)
when cancelled, mirroring `wait_for_cancel_once_async`. The second elaboration
finds the resolved promise and returns immediately. With the wrong cancel
token (e.g. `cancelTk? := none` to `Core.logSnapshotTask`) the file worker's
`cancelRec` cannot fire it, the polling loop runs forever, the second
elaboration's `IO.wait` blocks on the unresolved promise, and the test runner
times out.
-/

syntax (name := testSpawnSnapshot) "test_spawn_snapshot" : term

@[term_elab testSpawnSnapshot]
def elabTestSpawnSnapshot : Lean.Elab.Term.TermElab := fun _ _ => do
  let prom ← IO.Promise.new
  let prior ← onceRef.modifyGet (fun old => (old, old.getD prom.result!))
  if let some t := prior then
    -- Second elaboration: wait on the previous's promise, which the first
    -- elaboration's task should have resolved on cancellation.
    IO.wait t
    return .const ``True.intro []
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
