import Std.Async
import Std.Sync.Channel

/-!
Exercises libuv event-loop teardown (`finalize_libuv`) with a `Selectable.one` still pending in a
detached task at process exit. The select's waiter web (waiter promises, chained tasks, closures
capturing the selectors) is mutually referencing, so it is only reclaimed if teardown lets the
select finish: the timer promise must be *resolved* (with `UV_ECANCELED`, not dropped) by
`lean_uv_timer_shutdown`, the losers' `unregisterFn` cancellations must succeed as no-ops on the
finalized loop, and a `registerFn` failing mid-registration must unwind the waiters registered so
far. Regression guard for a leak found by the Linux sanitize CI in #14202; runs under ASan there.
-/

open Std.Async Std

/-- A select that never completes on its own: the channel never receives, the timer sleeps 1h. -/
def pendingSelect : Async Unit := do
  let ch ← Std.Channel.new (α := Nat)
  Selectable.one #[
    .case ch.recvSelector (fun _ => pure ()),
    .case (← Selector.sleep 3600000) (fun _ => pure ())
  ]

#eval Async.block do
  discard <| pendingSelect.asTask
  pure ()
