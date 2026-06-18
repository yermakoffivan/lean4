/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module

prelude
public import Init.Data.Random
public import Std.Async.Basic
import Init.Data.ByteArray.Extra
import Init.Data.Array.Lemmas
import Init.Omega

public section

/-!
This module contains the implementation of a fair and data-loss free IO multiplexing primitive.
The main entrypoint for users is `Selectable.one` and the various functions to produce
`Selector`s from other modules.
-/

namespace Std
namespace Async

/--
The core data structure for racing on winning a `Selectable.one` if multiple event sources are ready
at the same time. A `Task` can try to finish the waiter by calling `Waiter.race`.
-/
structure Waiter (α : Type) where
  private mk ::
    private finished : IO.Ref Bool
    promise : IO.Promise (Except IO.Error α)

/--
Swap out the `IO.Promise` within the `Waiter`. Note that the part which determines whether the
`Waiter` is finished is not swapped out.
-/
@[inline]
def Waiter.withPromise (w : Waiter α) (p : IO.Promise (Except IO.Error β)) : Waiter β :=
  Waiter.mk w.finished p

/--
Try to atomically finish the `Waiter`. If the race for finishing it is won, `win` is executed
with the internal `IO.Promise` of the `Waiter`. This promise must under all circumstances be
resolved by `win`. If the race is lost some cleanup work can be done in `lose`.
-/
@[specialize]
def Waiter.race [Monad m] [MonadLiftT (ST IO.RealWorld) m] (w : Waiter α)
    (lose : m β) (win : IO.Promise (Except IO.Error α) → m β) : m β := do
  let first ← w.finished.modifyGet fun s => (s == false, true)
  if first then
    win w.promise
  else
    lose

/--
Atomically checks whether the `Waiter` has already finished. Note that right after this function
call ends this might have already changed.
-/
@[inline]
def Waiter.checkFinished [Monad m] [MonadLiftT (ST IO.RealWorld) m] (w : Waiter α) : m Bool := do
  w.finished.get

/--
An event source that can be multiplexed using `Selectable.one`, see the documentation of
`Selectable.one` for how the protocol of communicating with a `Selector` works.
-/
structure Selector (α : Type) where
  /--
  Attempts to retrieve a piece of data from the event source in a non-blocking fashion, returning
  `some` if data is available and `none` otherwise.
  -/
  tryFn : Async (Option α)
  /--
  Registers a `Waiter` with the event source. Once data is available, the event source should
  attempt to call `Waiter.race` and resolve the `Waiter`'s promise if it wins. It is crucial that
  data is never actually consumed from the event source unless `Waiter.race` wins in order to
  prevent data loss.
  -/
  registerFn : Waiter α → Async Unit
  /--
  A cleanup function that is called once any `Selector` has won the `Selectable.one` race.
  -/
  unregisterFn : Async Unit

/--
An event source together with a continuation to call on data obtained from that event source,
usually used together in conjunction with `Selectable.one`.
-/
structure Selectable (α : Type) where
  case ::
    {β : Type}
    /--
    The event source.
    -/
    selector : Selector β
    /--
    The continuation that is called on results from the event source.
    -/
    cont : β → Async α

private def shuffleIt {α : Type u} (xs : Array α) (gen : StdGen) : Array α :=
  go xs gen 0
where
  go (xs : Array α) (gen : StdGen) (i : Nat) : Array α :=
    if _ : i < xs.size - 1 then
      let (j, gen) := randNat gen i (xs.size - 1)
      let xs := xs.swapIfInBounds i j
      go xs gen (i + 1)
    else
      xs

/--
Registers a `Waiter`-backed selection over `selectables`: each `Selector` is registered against
the shared `finished` ref until one of them wins the race, and then all `Selector.unregisterFn`s are
called and `target` is resolved with the result of the winning `Selectable.cont`.

This proceeds in two phases. **Phase 1** registers a derived `Waiter` with each still-needed
`Selector` while merely *building* (not running) an observer for each. **Phase 2** runs the observers once
registration is fully complete. Splitting the phases is what makes the protocol safe: because no
observer runs while phase 1 is still in progress, a `Selector` that fires on another thread can
never call `unregisterFn` concurrently with an in-flight `registerFn` of another `Selector`. The
ordering is therefore structural, with no runtime synchronization barrier required.

This is the shared core of `Selectable.one` (which owns `finished` and `target` itself) and
`Selectable.combine` (which threads through the outer waiter's `finished` and `promise`).
-/
private def Selectable.register (selectables : Array (Selectable α)) (finished : IO.Ref Bool)
    (target : IO.Promise (Except IO.Error α)) : Async Unit := do
  -- Phase 1: register selectors until the shared waiter is finished, capturing a type-erased
  -- observer for each. The observers are not started here, so nothing can `unregisterFn` while
  -- registration is still running.
  let mut observers : Array (Async Unit) := #[]

  for selectable in selectables do
    if ← finished.get then
      break

    let waiterPromise ← IO.Promise.new
    let waiter := Waiter.mk finished waiterPromise
    selectable.selector.registerFn waiter

    -- The observer runs with `sync := false` so that when a `Selector` resolves its waiter while
    -- holding its own internal lock (e.g. a zero-capacity channel resolving a consumer inside its
    -- mutex), the observer's `unregisterFn` runs on a separate task rather than synchronously
    -- re-entering that lock. With the two-phase structure above this is the only role the old
    -- synchronization barrier played, so no barrier is needed.
    let observer : Async Unit :=
      discard <| IO.bindTask (t := waiterPromise.result?) fun res? => do
        match res? with
        | none =>
          /-
          If we get `none` that means the waiterPromise was dropped, usually due to cancellation. In
          this situation just do nothing.
          -/
          return (Task.pure (.ok ()))
        | some res =>
          let async : Async _ :=
            try
              let res ← IO.ofExcept res

              for selectable in selectables do
                selectable.selector.unregisterFn

              target.resolve (.ok (← selectable.cont res))
            catch e =>
              target.resolve (.error e)

          async.toBaseIO

    observers := observers.push observer

  -- Phase 2: registration is complete; start observing. The first selector to resolve its waiter
  -- unregisters the rest and resolves `target` with the result of its continuation.
  for observer in observers do
    observer

/--
Performs fair and data-loss free multiplexing on the `Selectable`s in `selectables`.

The protocol for this is as follows:
1. The `selectables` are shuffled randomly.
2. Run `Selector.tryFn` for each element in `selectables`. If any succeed, the corresponding
  `Selectable.cont` is executed and its result is returned immediately.
3. If none succeed, a `Waiter` is registered with each `Selector` using `Selector.registerFn`.
   Once one of them resolves the `Waiter`, all `Selector.unregisterFn` functions are called, and
   the `Selectable.cont` of the winning `Selector` is executed and returned.
-/
partial def Selectable.one (selectables : Array (Selectable α)) : Async α := do
  if selectables.isEmpty then
    throw <| .userError "Selectable.one requires at least one Selectable"

  let seed := UInt64.toNat (ByteArray.toUInt64LE! (← IO.getRandomBytes 8))
  let gen := mkStdGen seed
  let selectables := shuffleIt selectables gen

  for selectable in selectables do
    if let some val ← selectable.selector.tryFn then
      let result ← selectable.cont val
      return result

  let finished ← IO.mkRef false
  let promise ← IO.Promise.new

  Selectable.register selectables finished promise

  let result ← Async.ofPromise (pure promise)
  return result

/--
Performs fair and data-loss free non-blocking multiplexing on the `Selectable`s in `selectables`.

This function only tries the non-blocking `tryFn` for each `Selectable` without registering
waiters or blocking. It returns `some result` if any `Selectable` is immediately available,
or `none` if all would block.

The protocol for this is as follows:
1. The `selectables` are shuffled randomly for fairness.
2. Run `Selector.tryFn` for each element in `selectables`. If any succeed, the corresponding
   `Selectable.cont` is executed and its result is returned as `some result`.
3. If none succeed, `none` is returned immediately without blocking.
-/
def Selectable.tryOne (selectables : Array (Selectable α)) : Async (Option α) := do
  if selectables.isEmpty then
    return none

  let seed := UInt64.toNat (ByteArray.toUInt64LE! (← IO.getRandomBytes 8))
  let gen := mkStdGen seed
  let selectables := shuffleIt selectables gen

  for selectable in selectables do
    if let some val ← selectable.selector.tryFn then
      let result ← selectable.cont val
      return some result

  return none

/--
Creates a `Selector` that performs fair and data-loss free multiplexing on multiple `Selectable`s.
This allows the multiplexing operation to be composed with other selectors.
-/
def Selectable.combine (selectables : Array (Selectable α)) : IO (Selector α) := do
  if selectables.isEmpty then
    throw <| .userError "Selectable.one requires at least one Selectable"

  let seed := UInt64.toNat (ByteArray.toUInt64LE! (← IO.getRandomBytes 8))
  let gen := mkStdGen seed
  let selectables := shuffleIt selectables gen

  return {
    tryFn := do
      for selectable in selectables do
        if let some val ← selectable.selector.tryFn then
          let result ← selectable.cont val
          return some result
      return none

    registerFn := fun waiter =>
      Selectable.register selectables waiter.finished waiter.promise

    unregisterFn := do
      for selectable in selectables do
        selectable.selector.unregisterFn
  }

end Async
end Std
