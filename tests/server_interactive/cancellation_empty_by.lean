import Lean.Server.Test.Cancel
import Lean.Elab.Tactic.Try
open Lean Lean.Meta Lean.Elab Lean.Elab.Term Lean.Elab.Tactic
open Lean.Server.Test.Cancel

/-!
Test cancellation propagation through `elabEmptyByAsTry`. With
`tactic.tryOnEmptyBy true` an empty `by` (the proof `:= by` with nothing
following) spawns a `wrapAsyncAsSnapshot` task that runs `try?`. The
outer snapshot's cancel token (`T_outer`) is registered with
`Core.logSnapshotTask`; on re-elaboration `cancelRec` walks the
snapshot tree and sets it.

The `[try_suggestion]` generator runs in MetaM inside the empty-`by`
snapshot task, so `(← read).cancelTk?` is `T_outer`. On the first
invocation it allocates a promise, stores `prom.result?` in
`tracerPromRef`, and registers an `onSet` callback on `T_outer` that
resolves the promise. The returned candidate `wait_for_t_outer`
`IO.wait`s on that stored task. The wait returns iff `T_outer` has
fired (`some ()`) or `prom` was dropped without resolution (`none`).
The `none` branch logs a clear failure rather than silently passing,
so accidental drops don't masquerade as success.

`t1`'s `wait_for_cancel_once_async` is used purely to publish the
`"blocked"` diagnostic the runner waits for. On re-elaboration
`cancelRec` walks both `t1`'s tree and the empty-`by` example's
tree; firing `T_outer` resolves the shared promise and the snapshot
task body completes. The second elaboration's invocation finds the
already-resolved task and returns immediately.

If `elabEmptyByAsTry` passes `cancelTk? := none` to
`Core.logSnapshotTask`, `cancelRec` cannot reach `T_outer`. The
snapshot task body's `IO.wait` blocks until `T_outer` is dropped;
since the body holds `T_outer` alive (via `wrapAsync`'s ctx) until it
returns, `T_outer` does not drop, the wait does not return, and the
runner times out.

Implementation note: we store `prom.result?` (not `result!`) so we can
handle the dropped-without-resolved case explicitly. We deliberately
avoid going through `Task.map (·.getD ())` to reach the same shape
as `result!`: that map would default to `sync := false` and queue the
post-resolve hop on a worker thread, which (under elaboration load)
introduces scheduling latency and made earlier versions of this test
flaky. `IO.wait prom.result?` blocks the current thread directly with
no extra task hop, matching `result!`'s `(sync := true)` timing.
-/

namespace TestEmptyBy

opaque UnsolvableProp : Prop

/-- Tactic that blocks until the shared promise fires; on a dropped-without-resolved
promise, prints to stderr to force test failure. The tactic runs inside `try?`, which
catches `throwError`, so we surface the failure via `IO.eprintln` instead. -/
syntax "wait_for_t_outer" : tactic
elab_rules : tactic
| `(tactic| wait_for_t_outer) => do
  let some t ← tracerPromRef.get
    | throwError "wait_for_t_outer: tracerPromRef not initialised"
  match (← IO.wait t) with
  | some _ => return
  | none   => IO.eprintln "wait_for_t_outer: promise dropped without resolution"

@[try_suggestion]
def tracerSuggestion (_goal : MVarId) (_info : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := do
  let prom ← IO.Promise.new
  let inserted ← tracerPromRef.modifyGet fun old =>
    match old with
    | some _ => (false, old)
    | none   => (true, some prom.result?)
  if inserted then
    if let some cancelTk := (← readThe Core.Context).cancelTk? then
      cancelTk.onSet (do prom.resolve ())
  let stx ← `(tactic| wait_for_t_outer)
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


