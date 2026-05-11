import Lean.Server.Test.Cancel
import Lean.Elab.Tactic.Try
open Lean Lean.Meta Lean.Elab Lean.Elab.Term Lean.Elab.Tactic
open Lean.Server.Test.Cancel

/-!
Test that `cancelRec` reaches the snapshot task spawned by
`elabEmptyByAsTry` on re-elaboration.

Chronological flow:
1. Empty-`by` example elaborates; `elabEmptyByAsTry` spawns a snapshot
   task with its own cancel token and returns.
2. The snapshot task's `try?` calls `tracerSuggestion`, which:
   - registers test task `"cancelTokenSet"`,
   - registers `cancelTk.onSet` to resolve it,
   - resolves sync promise `"tracerSuggestion"`,
   - returns `wait_for_test_task "cancelTokenSet"` as the candidate.
3. `try?` evaluates the candidate; it blocks on the test task.
4. `t1` elaborates: `wait_for_sync "tracerSuggestion"` returns
   immediately, `trace "blocked"` emits the diagnostic.
5. Runner inserts `; skip`, triggers re-elab; `cancelRec` sets the
   cancel token; `onSet` resolves the test task; the candidate's wait
   returns; the snapshot task body completes.

Failure modes:
- `cancelTk? := none` to `Core.logSnapshotTask`: `cancelRec` cannot
  reach the cancel token, the wait blocks, runner times out.
- `cancelTk? := none` to `wrapAsyncAsSnapshot`: `tracerSuggestion`
  sees no cancel token, doesn't register `onSet`; the promise drops;
  `wait_for_test_task` surfaces a `task dropped` diagnostic.

Ordering note: the empty-`by` example must precede `t1` because `try?`
inside the snapshot task library-searches the environment in a way
that synchronously waits on prior pending async theorem bodies. With
`t1` first, its `wait_for_sync` would block the snapshot's `try?`,
deadlocking. Likely a separate upstream issue.

CI tracing: CI has reported `Timeout 1500s` failures for this test
with no captured stderr output at all. The `#eval`-driven progress
markers below (`test: imports done`, `test: empty-by command
returned`) anchor "did the file worker process this command at all?"
checkpoints, independent of the snapshot task and `t1`'s async body.
The companion `cancellation_empty_by.lean.init.sh` clamps
`LEAN_NUM_THREADS` to reduce parallelism on CI, in case the symptom
is a task-scheduling issue.

The observed output order does not match the causal order above:
`cancelTokenSet` appears before `tracerSuggestion ready` in the
captured `2>&1` log even though, causally, the `onSet` callback can
only fire after `tracerSuggestion` has registered it. We don't have
a definitive explanation -- likely some interaction between
buffered stderr writes from the snapshot worker thread and the
direct writes from the thread that calls `cancelTk.set`. The order
is stable across hundreds of local runs at 6-way parallelism, so we
encode it as-is.
-/

#eval (IO.eprintln "test: imports done" : IO Unit)

namespace TestEmptyBy

opaque UnsolvableProp : Prop

@[try_suggestion]
def tracerSuggestion (_goal : MVarId) (_info : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := do
  if let some prom ← mkTestTask "cancelTokenSet" then
    if let some cancelTk := (← readThe Core.Context).cancelTk? then
      cancelTk.onSet do
        dbg_trace "cancelTokenSet"
        prom.resolve ()
    else
      dbg_trace "tracerSuggestion: no cancel token (unexpected -- test setup wrong?)"
    dbg_trace "tracerSuggestion ready"
  resolveSyncPromise "tracerSuggestion"
  return #[← `(tactic| wait_for_test_task "cancelTokenSet")]

end TestEmptyBy

set_option tactic.tryOnEmptyBy true

example : True := by
  trivial
       --^ waitFor: blocked
       --^ insert: "; skip"
       --^ sync

example : TestEmptyBy.UnsolvableProp := by

#eval (IO.eprintln "test: empty-by command returned" : IO Unit)

theorem t1 : True := by
  wait_for_sync "tracerSuggestion"
  dbg_trace "sync received"
  trace "blocked"
  trivial
