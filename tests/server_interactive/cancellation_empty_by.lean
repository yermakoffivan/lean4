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
invocation it allocates a promise, stores `prom.result!` in
`cmdOnceRef`, and registers an `onSet` callback on `T_outer` that
resolves the promise. The returned candidate `wait_for_t_outer`
`IO.wait`s on that stored task. The wait returns iff `T_outer` has
fired or been dropped.

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
-/

namespace TestEmptyBy

opaque UnsolvableProp : Prop

/-- Tactic that blocks until the shared promise fires. -/
syntax "wait_for_t_outer" : tactic
elab_rules : tactic
| `(tactic| wait_for_t_outer) => do
  let some t ← cmdOnceRef.get
    | throwError "wait_for_t_outer: cmdOnceRef not initialised"
  IO.wait t

@[try_suggestion]
def tracerSuggestion (_goal : MVarId) (_info : Try.Info) :
    MetaM (Array (TSyntax `tactic)) := do
  let prom ← IO.Promise.new
  -- Use `prom.result!` here despite the general footgun (it panics if
  -- the promise is dropped without being resolved): in this specific
  -- setup the only way the promise reaches `IO.wait` is via the
  -- `cancelTk.onSet` callback below resolving it when `T_outer` fires.
  -- The closure capturing `prom` keeps it alive as long as `T_outer`
  -- is alive, and `T_outer` is held by the snapshot task's `wrapAsync`
  -- ctx until the task body completes -- which it can't, because it's
  -- the one waiting on this promise. So a dropped-without-resolved
  -- promise can't occur. `result?`-derived alternatives were tried
  -- (`Task.map (·.getD ())`, `BaseIO.bindTask` with a `none` branch
  -- that prints) but turned out either flaky (`Task.map`) or unable
  -- to detect the `cancelTk? := none` bug case at all
  -- (`BaseIO.bindTask`). `result!` wins on both correctness and
  -- stability here.
  let inserted ← cmdOnceRef.modifyGet fun old =>
    match old with
    | some _ => (false, old)
    | none   => (true, some prom.result!)
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


