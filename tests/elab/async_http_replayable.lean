import Std.Http.Data.Body

open Std.Async
open Std.Http
open Std.Http.Body

-- replay returns a fresh body that can be read from the start

def fullReplayIndependent : Async Unit := do
  let full ← Body.Full.ofString "hello"
  let copy ← Replayable.replay full
  let r1 ← full.recv
  let r2 ← copy.recv
  assert! r1.isSome
  assert! r2.isSome
  assert! r1.get!.data == "hello".toUTF8
  assert! r2.get!.data == "hello".toUTF8

#eval fullReplayIndependent.block

-- consuming the original does not affect the replayed copy

def fullReplayDoesNotShareState : Async Unit := do
  let full ← Body.Full.ofString "data"
  let _ ← full.recv
  let copy ← Replayable.replay full
  let r ← copy.recv
  assert! r.isSome
  assert! r.get!.data == "data".toUTF8

#eval fullReplayDoesNotShareState.block

-- consuming the replayed copy does not affect the original

def fullReplayCopyExhaustedOriginalIntact : Async Unit := do
  let full ← Body.Full.ofString "abc"
  let copy ← Replayable.replay full
  let _ ← copy.recv
  let r ← full.recv
  assert! r.isSome
  assert! r.get!.data == "abc".toUTF8

#eval fullReplayCopyExhaustedOriginalIntact.block

-- resetInPlace lets a body be read again after being consumed

def fullResetInPlaceAfterRead : Async Unit := do
  let full ← Body.Full.ofString "reset"
  let first ← full.recv
  assert! first.isSome
  assert! (← full.recv).isNone
  Replayable.resetInPlace full
  let second ← full.recv
  assert! second.isSome
  assert! second.get!.data == "reset".toUTF8

#eval fullResetInPlaceAfterRead.block

-- resetInPlace after close restores readability

def fullResetInPlaceAfterClose : Async Unit := do
  let full ← Body.Full.ofString "revive"
  full.close
  assert! (← full.isClosed)
  Replayable.resetInPlace full
  let r ← full.recv
  assert! r.isSome
  assert! r.get!.data == "revive".toUTF8

#eval fullResetInPlaceAfterClose.block

-- resetInPlace on a fresh body is a no-op: body is still readable

def fullResetInPlaceOnFresh : Async Unit := do
  let full ← Body.Full.ofString "fresh"
  Replayable.resetInPlace full
  let r ← full.recv
  assert! r.isSome
  assert! r.get!.data == "fresh".toUTF8

#eval fullResetInPlaceOnFresh.block

-- resetInPlace can be called multiple times

def fullResetInPlaceMultiple : Async Unit := do
  let full ← Body.Full.ofString "multi"
  for _ in List.range 3 do
    let _ ← full.recv
    Replayable.resetInPlace full
  let r ← full.recv
  assert! r.isSome
  assert! r.get!.data == "multi".toUTF8

#eval fullResetInPlaceMultiple.block

-- replay on an empty ByteArray body returns a fresh body that also yields nothing

def fullReplayEmpty : Async Unit := do
  let full ← Body.Full.ofByteArray ByteArray.empty
  let copy ← Replayable.replay full
  assert! (← full.recv).isNone
  assert! (← copy.recv).isNone

#eval fullReplayEmpty.block

/-! ## Body.Empty — Replayable -/

-- Empty.replay returns an identical empty body

def emptyReplay : Async Unit := do
  let e : Body.Empty := {}
  let copy ← Replayable.replay e
  assert! (← copy.recv).isNone
  assert! (← copy.isClosed)

#eval emptyReplay.block

-- Empty.resetInPlace is a no-op; body remains at EOF

def emptyResetInPlace : Async Unit := do
  let e : Body.Empty := {}
  Replayable.resetInPlace e
  assert! (← e.recv).isNone

#eval emptyResetInPlace.block

/-! ## Body.Any — isReplayable flag -/

-- Any wrapping a Full via Coe sets isReplayable = true

def anyFromFullIsReplayable : Async Unit := do
  let full ← Body.Full.ofString "r"
  let any : Body.Any := full
  assert! any.isReplayable

#eval anyFromFullIsReplayable.block

-- Any wrapping a Stream (non-replayable) sets isReplayable = false

def anyFromStreamNotReplayable : Async Unit := do
  let stream ← Body.mkStream
  let any := Body.Any.ofBody stream
  assert! !any.isReplayable

#eval anyFromStreamNotReplayable.block

-- Any wrapping an Empty via Coe sets isReplayable = false
-- (Empty uses ofBody, not ofReplayableBody, so the flag is false)

def anyFromEmptyNotReplayable : Async Unit := do
  let e : Body.Empty := {}
  let any : Body.Any := e
  assert! !any.isReplayable

#eval anyFromEmptyNotReplayable.block

-- Any.ofReplayableBody sets isReplayable = true and resetInPlace works

def anyReplayableResetInPlace : Async Unit := do
  let full ← Body.Full.ofString "via-any"
  let any := Body.Any.ofReplayableBody full
  assert! any.isReplayable
  let r1 ← any.recv
  assert! r1.isSome
  assert! r1.get!.data == "via-any".toUTF8
  any.resetInPlace
  let r2 ← any.recv
  assert! r2.isSome
  assert! r2.get!.data == "via-any".toUTF8

#eval anyReplayableResetInPlace.block

-- Any.resetInPlace on a non-replayable Any is a no-op (default pure ())

def anyNonReplayableResetIsNoop : Async Unit := do
  let stream ← Body.mkStream
  let any := Body.Any.ofBody stream
  any.resetInPlace  -- should not throw
  assert! !any.isReplayable

#eval anyNonReplayableResetIsNoop.block
