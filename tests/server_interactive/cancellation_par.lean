import Lean.Server.Test.Cancel
open Lean.Server.Test.Cancel

/-!
End-to-end test that parallel subtasks spawned by `try? => attempt_all_par` are cancelled
on re-elaboration. The `slow_10s` tactic sleeps for 10s checking `Core.checkInterrupted`;
if the cancellation monitoring in `registerParCancelSnapshotTask` works, the subtask is
interrupted swiftly and "leaked!" never appears in stderr.

`wait_for_cancel_once_async` sends the "blocked" diagnostic and returns immediately,
then `try?` spawns `slow_10s` as a parallel subtask that blocks until cancelled.
-/

example : True := by
  trivial
       --^ waitFor: blocked
       --^ insert: "; skip"
       --^ collectDiagnostics

theorem t : True := by
  wait_for_cancel_once_async
  try? => attempt_all_par
    | slow_10s
