import Std.Async
import Std.Sync.Channel

/-!
Regression tests for `Selectable.combine` (#14090).

`Selectable.combine` used to hang and panic with
`Promise.result!: promise has been dropped without ever being resolved` when the underlying event
fired *after* selection had started waiting. The `registerFn` created its synchronization barrier
inside the registration loop and never resolved it, so the winning waiter's continuation blocked on
`await barrier` forever and the caller's promise was dropped unresolved.

These tests exercise both the immediately-ready (`tryFn`) path and the deferred (`registerFn`) path,
for single and multiple combined selectables.
-/

open Std.Async
open Std (CloseableChannel)

namespace Combine14090

/- The minimal issue-shaped reproducer: `combine` must resolve when the event fires after the
outer selection has started waiting. -/
/-- info: some 1 -/
#guard_msgs in
#eval show IO _ from do
  let ch ← CloseableChannel.new (α := Nat)
  discard <| IO.asTask (prio := .dedicated) do
    IO.sleep 50
    ch.send 1
  let sel ← Selectable.combine #[.case ch.recvSelector fun n? => return n?]
  Async.block do
    Selectable.one #[.case sel fun n? => return n?]

/-- The exact reproducer from #14090: a single combined selectable whose event fires after the
selection is already waiting. -/
def deferredSingle : Async (Option Nat) := do
  let ch ← CloseableChannel.new (α := Nat)
  discard <| IO.asTask (prio := .dedicated) do
    IO.sleep 50
    ch.send 1
  let sel ← Selectable.combine #[.case ch.recvSelector fun n? => return n?]
  Selectable.one #[.case sel fun n? => return n?]

/-- info: some 1 -/
#guard_msgs in
#eval deferredSingle.block

/-- A combined selectable whose value is already available should take the non-blocking `tryFn`
path and return immediately. -/
def readySingle : Async (Option Nat) := do
  let ch ← CloseableChannel.new (α := Nat)
  ch.sync.send 7
  let sel ← Selectable.combine #[.case ch.recvSelector fun n? => return n?]
  Selectable.one #[.case sel fun n? => return n?]

/-- info: some 7 -/
#guard_msgs in
#eval readySingle.block

/-- Multiple combined selectables, with the winning event fired after waiting starts. -/
def deferredMulti : Async (Option Nat) := do
  let ch1 ← CloseableChannel.new (α := Nat)
  let ch2 ← CloseableChannel.new (α := Nat)
  discard <| IO.asTask (prio := .dedicated) do
    IO.sleep 50
    ch2.send 42
  let sel ← Selectable.combine #[
    .case ch1.recvSelector fun n? => return n?,
    .case ch2.recvSelector fun n? => return n?
  ]
  Selectable.one #[.case sel fun n? => return n?]

/-- info: some 42 -/
#guard_msgs in
#eval deferredMulti.block

/-- A combined selectable raced against a directly-selected channel: the combined branch wins after
the direct branch has already registered and is waiting. -/
def combineAgainstDirect : Async Nat := do
  let inner ← CloseableChannel.new (α := Nat)
  let direct ← CloseableChannel.new (α := Nat)
  discard <| IO.asTask (prio := .dedicated) do
    IO.sleep 50
    inner.send 100
  let sel ← Selectable.combine #[.case inner.recvSelector fun n? => return n?.getD 0]
  Selectable.one #[
    .case sel fun n => return n,
    .case direct.recvSelector fun n? => return n?.getD 0
  ]

/-- info: 100 -/
#guard_msgs in
#eval combineAgainstDirect.block

/-- Stress the register/unregister hot path through `combine`: route many messages across two
channels wrapped in a combined selector that is itself selected against a third channel. This
exercises the gate/barrier + `break` ordering that prevents registering a selector after the
winning branch has already unregistered. -/
def stress (capacity : Option Nat) : Async Bool := do
  let amount := 1000
  let messages := Array.range amount
  let ch1 ← Std.CloseableChannel.new capacity
  let ch2 ← Std.CloseableChannel.new capacity
  let ch3 ← Std.CloseableChannel.new capacity

  let recv : Async Nat := do
    let rec go (acc : Nat) (count : Nat) : Async Nat := do
      match count with
      | 0 => return acc
      | count + 1 =>
        let combined ← Selectable.combine #[
          .case ch1.recvSelector fun n? => return n?.getD 0,
          .case ch2.recvSelector fun n? => return n?.getD 0
        ]
        let data ← Selectable.one #[
          .case combined fun n => return n,
          .case ch3.recvSelector fun n? => return n?.getD 0
        ]
        go (acc + data) count
    go 0 amount

  let recvTask ← async recv

  for msg in messages do
    match ← IO.rand 0 2 with
    | 0 => ch1.sync.send msg
    | 1 => ch2.sync.send msg
    | _ => ch3.sync.send msg

  let acc ← await recvTask
  ch1.close
  ch2.close
  ch3.close
  return acc == messages.sum

/-- info: true -/
#guard_msgs in
#eval stress none |>.block

/-- info: true -/
#guard_msgs in
#eval stress (some 0) |>.block

/-- info: true -/
#guard_msgs in
#eval stress (some 1) |>.block

/-- info: true -/
#guard_msgs in
#eval stress (some 128) |>.block

end Combine14090
