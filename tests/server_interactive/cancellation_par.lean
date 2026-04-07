import Lean.Server.Test.Cancel
open Lean.Server.Test.Cancel

/-!
Test that parallel subtasks spawned via `TacticM.asTask` (as used by `first_par` and
`attempt_all_par` in `try?`) are cancelled on re-elaboration via snapshot task registration.

The `wait_for_cancel_once_par` tactic spawns two subtasks via `TacticM.asTask`, registers a
snapshot task that bridges server cancellation to the subtask cancel hooks, and blocks the
main thread. When the preceding declaration is edited, the server cancels this command's
elaboration, and the snapshot task mechanism propagates cancellation to the subtasks.
-/

example : True := by
  trivial
       --^ waitFor: blocked
       --^ insert: "; skip"
       --^ collectDiagnostics

theorem t : True := by
  wait_for_cancel_once_par
  trivial
