/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Async.TCP
public import Std.Async.ContextAsync
public import Std.Http.Transport
public import Std.Http.Protocol.H1
public import Std.Http.Client.Config

public section

/-!
# Connection

This module defines the `Connection.handle` loop, used to manage one persistent HTTP/1.1 client
connection and handle sequential request/response exchanges over it.
-/

namespace Std.Http.Client

open Std Async TCP Protocol
open Time

set_option linter.all true

/--
A request packet queued to the background connection loop.
-/
structure RequestPacket where
  /--
  The request to send.
  -/
  request : Request Body.Any

  /--
  Promise resolved with the eventual response.
  -/
  responsePromise : IO.Promise (Except IO.Error (Response Body.Stream))

  /--
  Promise resolved when the connection finishes this exchange and is ready for the next request,
  or when the exchange fails after the response headers were delivered.
  -/
  completionPromise : IO.Promise (Except IO.Error Unit)

namespace RequestPacket

/--
Resolve the packet with an error.
-/
def onError (packet : RequestPacket) (error : IO.Error) : BaseIO Unit := do
  discard <| packet.responsePromise.resolve (.error error)
  discard <| packet.completionPromise.resolve (.error error)

/--
Resolve the packet with a response.
-/
def onResponse (packet : RequestPacket) (response : Response Body.Stream) : BaseIO Unit :=
  discard <| packet.responsePromise.resolve (.ok response)

/--
Resolve the packet as completed successfully.
-/
def onComplete (packet : RequestPacket) : BaseIO Unit :=
  discard <| packet.completionPromise.resolve (.ok ())

end RequestPacket

namespace Connection

/--
Events produced by the async select loop in `pollNextEvent`.
Each variant corresponds to one possible outcome of waiting for I/O.
-/
private inductive Recv
  | bytes (x : Option ByteArray)
  | requestBody (x : Option Chunk)
  | bodyInterest (x : Bool)
  | packet (x : Option RequestPacket)
  | timeout
  | shutdown
  | close

/--
Mutable state that belongs to a single in-flight request/response exchange.
Kept in one struct so a `.next` transition can reset every per-request field
at once (impossible to forget one) and so `closeAll` has a self-contained target.
-/
structure InFlightState where
  /--
  The request packet whose promise is pending (or just resolved).
  -/
  packet : RequestPacket

  /--
  Body the writer pump is currently consuming. `none` while waiting for
  `100 Continue` (the body is stashed in `pendingRequestBody` until the
  server permits it).
  -/
  requestBody : Option Body.Any

  /--
  Body parked while waiting for a `100 Continue`.
  -/
  pendingRequestBody : Option Body.Any

  /--
  The outgoing response-body stream handed to the caller.
  -/
  responseStream : Option Body.Stream

  /--
  `true` while the machine is waiting for `100 Continue`.
  -/
  waitingForContinue : Bool

  /--
  `true` if the most recent `endHeaders` event was an informational 1xx.
  -/
  isInformationalResponse : Bool

  /--
  Cumulative response-body bytes pulled from the machine. Used to enforce `maxResponseBodySize`.
  -/
  downloadBodyBytes : UInt64 := 0

namespace InFlightState

/--
Builds the initial `InFlightState` for a packet that has just arrived, given
its pre-fetched body-size probe and the stream allocated for the response.
-/
def ofPacket (packet : RequestPacket) (responseStream : Body.Stream) (hasExpect : Bool) : InFlightState where
  packet := packet
  requestBody := if hasExpect then none else some packet.request.body
  pendingRequestBody := if hasExpect then some packet.request.body else none
  responseStream := some responseStream
  waitingForContinue := hasExpect
  isInformationalResponse := false

/--
Closes every open resource tied to this in-flight exchange: both request
body handles and the response stream. Each close is guarded by an `isClosed`
check so this is idempotent.
-/
def closeAll (s : InFlightState) : Async Unit := do
  if let some body := s.requestBody then
    if ¬(← body.isClosed) then body.close

  if let some body := s.pendingRequestBody then
    if ¬(← body.isClosed) then body.close

  if let some body := s.responseStream then
    if ¬(← body.isClosed) then body.close

end InFlightState

/--
All mutable state carried through the connection processing loop.

Connection-level fields (`machine`, timeouts, read-pump flags) live here
directly; per-exchange fields are wrapped in `inFlight : Option InFlightState`
so that every transition to or from idle is a single field update that cannot
accidentally leave a stale per-request value behind.
-/
structure ConnectionState where
  /--
  The HTTP/1.1 state machine driving reads, writes, and parser events for
  this socket.
  -/
  machine : H1.Machine .sending

  /--
  The timeout currently armed for the next blocking wait.
  -/
  currentTimeout : Millisecond.Offset

  /--
  The idle keep-alive timeout to use between requests, or `none` while a
  request/response exchange is active.
  -/
  keepAliveTimeout : Option Millisecond.Offset

  /--
  Set when the H1 machine has requested more socket input.
  -/
  requiresData : Bool

  /--
  Preferred socket recv size from the most recent `.needMoreData` event.
  -/
  expectData : Option Nat

  /--
  `none` when the connection is idle (waiting for the next request).
  -/
  inFlight : Option InFlightState

  /--
  Absolute wall-clock deadline for the in-flight request/response exchange, or `none` while idle.
  Enforces `config.requestTimeout` as a bound on the *whole* exchange (send + receive), unlike
  `currentTimeout`, which only bounds the idle gap between successive I/O events. Set when a request
  goes in-flight and cleared on completion.
  -/
  requestDeadline : Option Timestamp := none

namespace ConnectionState

/--
`true` when the connection is waiting for the next request packet.
-/
@[inline] def waitingForRequest (s : ConnectionState) : Bool :=
  s.inFlight.isNone

/--
Applies `f` to the current in-flight state, if any.
-/
@[inline] def mapInFlight (s : ConnectionState) (f : InFlightState → InFlightState) : ConnectionState :=
  { s with inFlight := s.inFlight.map f }

/--
The packet currently bound to the in-flight exchange, if any.
-/
@[inline] def currentRequest (s : ConnectionState) : Option RequestPacket :=
  s.inFlight.map (·.packet)

/--
The request body currently being pumped to the wire, if any.
-/
@[inline] def requestBody (s : ConnectionState) : Option Body.Any :=
  s.inFlight.bind (·.requestBody)

/--
The request body parked behind `Expect: 100-continue`, if any.
-/
@[inline] def pendingRequestBody (s : ConnectionState) : Option Body.Any :=
  s.inFlight.bind (·.pendingRequestBody)

/--
The response stream currently exposed to the caller, if any.
-/
@[inline] def responseStream (s : ConnectionState) : Option Body.Stream :=
  s.inFlight.bind (·.responseStream)

/--
`true` when the in-flight request is still waiting for `100 Continue`
before its body may be sent.
-/
@[inline] def waitingForContinue (s : ConnectionState) : Bool :=
  s.inFlight.map (·.waitingForContinue) |>.getD false

/--
`true` when the most recent header block was informational (1xx).
-/
@[inline] def isInformationalResponse (s : ConnectionState) : Bool :=
  s.inFlight.map (·.isInformationalResponse) |>.getD false

end ConnectionState

@[inline]
private def requestHasExpectContinue (request : Request Body.Any) : Bool :=
  match request.line.headers.getAll? Header.Name.expect with
  | some values => values.any (fun v => Header.Expect.parse v |>.isSome)
  | none => false

/--
Closes every open per-request resource held by `state`. Idempotent.
-/
private def closeAllRequestState (state : ConnectionState) : Async Unit :=
  match state.inFlight with
  | some f => f.closeAll
  | none => pure ()

/--
Waits for the next I/O event across all sources relevant to `state`. Computes
the socket recv size from `config`, then races all active selectables. Returns
`.close` on transport errors.
-/
private def pollNextEvent
    [Transport α]
    (config : Config) (socket : α)
    (requestChannel : Std.CloseableChannel RequestPacket)
    (connectionContext : CancellationContext)
    (state : ConnectionState) : Async Recv := do

  let responseStreamClosed ← match state.responseStream with
    | some body => Body.isClosed body
    | none => pure true

  let responseBodySource :=
    if state.machine.canPullBodyNow then
      match state.responseStream with
      | some body => if responseStreamClosed then none else some body
      | none => none
    else none

  let pollSocket :=
    !state.machine.reader.noMoreInput ∧ (
    state.requiresData ∨
    state.machine.writer.sentMessage ∨
    !state.waitingForRequest ∨
    state.requestBody.isSome ∨
    state.machine.canPullBody)

  let expectedBytes := state.expectData
    |>.getD config.defaultRequestBufferSize
    |>.min config.maxRecvChunkSize
    |>.toUInt64

  -- The connection context is an external shutdown hook; the client never cancels it with a
  -- `.deadline` reason (request timeouts are enforced via `requestDeadline` below), so any
  -- cancellation is treated as a shutdown.
  let mut selectables : Array (Selectable Recv) := #[
    .case connectionContext.doneSelector (fun _ => pure .shutdown)
  ]

  if pollSocket then
    selectables := selectables.push (.case (Transport.recvSelector socket expectedBytes) (Recv.bytes · |> pure))

    let timeout := state.keepAliveTimeout.getD state.currentTimeout
    selectables := selectables.push (.case (← Selector.sleep timeout) (fun _ => pure .timeout))

    -- Bound the whole exchange, not just the idle gap: `currentTimeout` is re-armed on every
    -- event, so on its own it never caps total duration (a server that dribbles bytes could keep
    -- the exchange alive indefinitely). The absolute `requestDeadline` closes that gap.
    if let some deadline := state.requestDeadline then
      selectables := selectables.push
        (.case (← Selector.sleep (deadline - (← Timestamp.now)).toMilliseconds) (fun _ => pure .timeout))

  else if let some idleTimeout := state.keepAliveTimeout then
      selectables := selectables.push (.case (← Selector.sleep idleTimeout) (fun _ => pure .timeout))

  if let some requestBody := state.requestBody then
    selectables := selectables.push (.case requestBody.recvSelector (Recv.requestBody · |> pure))

  if state.waitingForRequest then
    selectables := selectables.push (.case requestChannel.recvSelector (Recv.packet · |> pure))

  if let some responseBody := responseBodySource then
    selectables := selectables.push (.case responseBody.interestSelector (Recv.bodyInterest · |> pure))

    -- When body data is fully buffered (noMoreInput) but no consumer has arrived,
    -- add a timeout so an abandoned body does not stall the connection indefinitely.
    if state.machine.reader.noMoreInput && !pollSocket then
      selectables := selectables.push (.case (← Selector.sleep state.currentTimeout) (fun _ => pure .timeout))

  try Selectable.one selectables catch _ => pure .close

/--
Processes all H1 events from a single machine step, executing side effects
inline and returning the updated state together with a `sawFailure` flag
that tells the main loop to exit. Handles keep-alive resets, body-size
tracking, `Expect: 100-continue`, and parse errors.
-/
private def processH1Events
    (config : Config)
    (events : Array (H1.Event .sending))
    (state : ConnectionState) : Async (ConnectionState × Bool) := do

  let mut st := state
  let mut sawFailure := false

  for event in events do
    match event with
    | .needMoreData expect =>
      st := { st with requiresData := true, expectData := expect }

    | .needAnswer =>
      pure ()

    | .endHeaders head =>
      if head.status.isInformational then
        st := st.mapInFlight ({ · with isInformationalResponse := true })

        -- A `100 Continue` response authorises the body: move it from the
        -- pending slot into `requestBody` so the pump loop starts sending.
        if head.status == .continue && st.waitingForContinue then
          st := st.mapInFlight fun flight =>
            { flight with
              requestBody := flight.pendingRequestBody
              pendingRequestBody := none
              waitingForContinue := false
            }
      else
        st := { st with
          currentTimeout := config.readTimeout
          keepAliveTimeout := none
        }
        st := st.mapInFlight fun flight =>
          { flight with
            isInformationalResponse := false
          }

        -- A non-informational response while we were still waiting for
        -- `100 Continue`: the server rejected (or bypassed) the expectation.
        -- Discard the pending body — it must not be sent.
        if st.waitingForContinue then
          if let some body := st.pendingRequestBody then
            if ¬(← body.isClosed) then body.close
          st := st.mapInFlight fun flight =>
            { flight with pendingRequestBody := none, waitingForContinue := false }

        if let some body := st.responseStream then
          if let some length := head.getSize true then
            Body.setKnownSize body (some length)

        if let some packet := st.currentRequest then
          if let some incoming := st.responseStream then
            packet.onResponse { line := head, body := incoming, extensions := Extensions.empty }

    | .closeBody =>
      -- Skip closing for informational (1xx) responses; the channel stays
      -- open for the real response body that follows.
      if !st.isInformationalResponse then
        if let some body := st.responseStream then
          if ¬(← Body.isClosed body) then Body.close body
          st := st.mapInFlight fun flight => { flight with responseStream := none }

    | .next =>
      -- Reset all per-request state for the next pipelined request.
      if let some packet := st.currentRequest then
        packet.onComplete
      closeAllRequestState st
      st := { st with
        inFlight := none
        requestDeadline := none
        keepAliveTimeout := some config.keepAliveTimeout.val
        currentTimeout := config.keepAliveTimeout.val
      }

    | .failed err =>
      let ioErr : IO.Error := .userError (toString err)
      if let some packet := st.currentRequest then
        packet.onError ioErr

      if let some body := st.responseStream then
        if ¬(← Body.isClosed body) then body.closeWithError ioErr
      sawFailure := true

    | .«continue» => pure ()
    | .close => pure ()

  return (st, sawFailure)

/--
Terminal transition applied when a caller-facing problem forces the connection
to end (request timeout, shutdown signal, response body limit exceeded).
Rejects any in-flight request, closes all per-request resources, and parks
the H1 machine.
-/
private def abortState (state : ConnectionState) (err : IO.Error) : Async ConnectionState := do
  if let some packet := state.currentRequest then
    packet.onError err

  -- Close the response stream with the error so that a caller blocked in
  -- `readAll` receives a thrown exception rather than a silent short read.
  if let some body := state.responseStream then
    if ¬(← Body.isClosed body) then body.closeWithError err

  closeAllRequestState state
  return { state with
    machine := state.machine.closeWriter.closeReader.noMoreInput
    inFlight := none
    requestDeadline := none }

/--
Pure transition for a new request packet that has already had its known body
size resolved and its response stream allocated by the async caller.
-/
private def onNewPacket
    (config : Config) (packet : RequestPacket) (knownSize : Option Body.Length)
    (responseStream : Body.Stream) (state : ConnectionState) : ConnectionState :=
  let machine0 := state.machine.send packet.request.line
  let hasExpect := requestHasExpectContinue packet.request
  let machine1 := match knownSize with
    | some size => machine0.setKnownSize size
    | none => machine0
  { state with
    machine := machine1
    currentTimeout := config.requestTimeout.val
    keepAliveTimeout := none
    inFlight := some <| InFlightState.ofPacket packet responseStream hasExpect
  }

/--
Transition for a `.bodyInterest true` event: pulls the next chunk out of
the H1 machine, enforces `maxResponseBodySize`, and publishes the chunk.
-/
private def onBodyInterest
    (config : Config) (state : ConnectionState) : Async ConnectionState := do
  let (newMachine, pulledChunk) := state.machine.pullBody
  let mut st := { state with machine := newMachine }

  if let some pulled := pulledChunk then
    match config.maxResponseBodySize with
    | some maxSize => do
      let chunkSize : UInt64 := pulled.chunk.data.size.toUInt64
      let prevBytes : UInt64 := st.inFlight.map (fun (f : InFlightState) => f.downloadBodyBytes) |>.getD 0
      let newBodyBytes : UInt64 := prevBytes + chunkSize
      st := st.mapInFlight fun flight => { flight with downloadBodyBytes := newBodyBytes }
      if newBodyBytes > maxSize.toUInt64 then
        let err : IO.Error := .userError "response body exceeds maximum allowed size"
        if let some body := st.responseStream then
          if ¬(← Body.isClosed body) then body.closeWithError err
        return ← abortState (st.mapInFlight fun flight => { flight with responseStream := none }) err
    | none => pure ()

    if let some body := st.responseStream then
      -- If the caller has dropped/closed the incoming side, the write fails.
      -- Silently swallowing the error is correct: the loop must continue pulling
      -- wire bytes to keep the connection in a valid state for reuse.
      try body.send pulled.chunk pulled.incomplete catch _ => pure ()

      if pulled.final then
        if ¬(← Body.isClosed body) then Body.close body
        st := st.mapInFlight fun flight => { flight with responseStream := none }

  return st

/--
Processes a single async I/O event, returning the updated state and a `shouldClose` flag
that tells the main loop to exit.
-/
private def handleRecvEvent (config : Config) (state : ConnectionState) : Recv → Async (ConnectionState × Bool)
  | .bytes (some bytes) => do
    return ({ state with machine := state.machine.feed bytes }, false)

  | .bytes none => do

    -- Signal EOF to the machine so it can finish parsing any buffered data.
    -- The end-of-loop guard `reader.noMoreInput && !canPullBodyNow` will exit
    -- the loop once the machine drains; do NOT set shouldClose here or we skip
    -- the Phase 2/3 drain that delivers the final body chunk to the caller.
    return ({ state with machine := state.machine.noMoreInput }, false)

  | .requestBody (some chunk) => do
    return ({ state with machine := state.machine.sendData #[chunk] }, false)

  | .requestBody none => do
    if let some body := state.requestBody then
      if ¬(← body.isClosed) then body.close
    let st := { state with machine := state.machine.userClosedBody }
    return (st.mapInFlight ({ · with requestBody := none }), false)

  | .bodyInterest interested => do
    return (← if interested then onBodyInterest config state else pure state, false)

  | .packet (some packet) => do
    let knownSize ← packet.request.body.getKnownSize
    let responseStream ← Body.mkStream
    let deadline := (← Timestamp.now) + config.requestTimeout.val
    let state := onNewPacket config packet knownSize responseStream state
    return ({ state with requestDeadline := some deadline }, false)

  | .packet none => do
    return (state, true)

  | .close => do
    return (state, true)

  | .timeout => do
    return (← abortState state (.userError "request timeout"), true)

  | .shutdown => do
    return (← abortState state (.userError "connection shutdown"), true)

/--
Runs the main request/response processing loop for a single connection.
Drives the HTTP/1.1 state machine through four phases each iteration:
close finished readers, send buffered output, process H1 events, poll for I/O.
-/
protected def handle
    [Transport α]
    (socket : α)
    (machine : H1.Machine .sending)
    (config : Config)
    (connectionContext : CancellationContext)
    (requestChannel : Std.CloseableChannel RequestPacket) : Async Unit := do

  let mut state : ConnectionState := {
    machine := machine
    currentTimeout := config.keepAliveTimeout.val
    keepAliveTimeout := some config.keepAliveTimeout.val
    requiresData := false
    expectData := none
    inFlight := none
  }

  while ¬state.machine.halted do

    -- Phase 1: close any reader that the user has signalled is done.
    if let some body := state.requestBody then
      if ← body.isClosed then
        let newState := { state with machine := state.machine.userClosedBody }
        state := newState.mapInFlight fun flight => { flight with requestBody := none }

    -- Phase 1b: Auto-drain buffered response body bytes when the caller closed
    -- the response stream without consuming them. Without this, `canPullBody`
    -- stays true, `pollSocket` stays true, and the connection never reaches
    -- the idle keep-alive state needed to fire the idle timeout.
    let responseBodyClosed ← match state.responseStream with
      | some body => Body.isClosed body
      | none => pure true
    if state.machine.canPullBodyNow && responseBodyClosed then
      let mut m := state.machine
      while m.canPullBodyNow do
        let (m', _) := m.pullBody
        m := m'
      state := { state with machine := m }

    -- Phase 2: advance the state machine and flush any output.
    let (newMachine, step) := state.machine.step
    state := { state with machine := newMachine }

    if step.output.size > 0 then
      try Transport.sendAll socket #[step.output.toByteArray]
      catch _ =>
        state ← abortState state (.userError "connection write failed")
        break

    -- Phase 3: process all events emitted by this step.
    let (newState, sawFailure) ← processH1Events config step.events state

    state := newState

    if sawFailure then
      break

    -- Phase 4: wait for the next IO event.
    -- Skip if the machine has already halted or if the transport is closed and
    -- there is nothing left to wait for (no body to consume, no new requests).
    if state.machine.halted || (state.machine.reader.noMoreInput && !state.machine.canPullBodyNow) then
      break

    state := { state with requiresData := false }
    let event ← pollNextEvent config socket requestChannel connectionContext state
    let (newState, shouldClose) ← handleRecvEvent config state event
    state := newState
    if shouldClose then break

    if state.machine.halted || (state.machine.reader.noMoreInput && !state.machine.canPullBodyNow) then
      break

  -- Clean up: notify any in-flight request and close all open streams.
  discard <| abortState state (.userError "connection closed")

  discard <| EIO.toBaseIO requestChannel.close

  -- Drain any remaining queued packets.
  repeat do
    match ← requestChannel.tryRecv with
    | some packet => packet.onError (.userError "connection closed")
    | none => break

  Transport.close socket

end Connection

end Std.Http.Client
