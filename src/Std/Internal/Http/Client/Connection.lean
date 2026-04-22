/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Internal.Async.TCP
public import Std.Internal.Async.ContextAsync
public import Std.Internal.Http.Transport
public import Std.Internal.Http.Protocol.H1
public import Std.Internal.Http.Client.Config
public import Std.Sync.Watch

public section

namespace Std.Http.Client

open Std Internal IO Async TCP Protocol
open Time

/--
Type-erased body operations for use in the request pipeline.
Captures `Reader` and `Writer` methods as closures so the connection state
is not parameterized by the body type.
-/
structure Body.Operations where
  /--
  Selector that resolves when a chunk is available or the body reaches EOF.
  -/
  recvSelector : Selector (Option Chunk)

  /--
  Returns `true` when the body is closed for reading.
  -/
  isClosed : Async Bool

  /--
  Closes the body for reading.
  -/
  close : Async Unit

  /--
  Returns the known content length if available.
  -/
  getKnownSize : Async (Option Body.Length)

namespace Body.Operations

/--
Creates a `Body.Operations` from any type with a `Body` instance.
-/
def of [Body β] (body : β) : Body.Operations where
  recvSelector := Body.recvSelector body
  isClosed := Body.isClosed body
  close := Body.close body
  getKnownSize := Body.getKnownSize body

end Body.Operations

/-!
# Connection

This module defines the `Connection.handle` loop, used to manage one persistent HTTP/1.1 client
connection and handle sequential request/response exchanges over it.
-/

set_option linter.all true

/--
A request packet queued to the background connection loop.
-/
structure RequestPacket where
  /--
  The request to send.
  -/
  request : Request Body.Operations

  /--
  Promise resolved with the eventual response.
  -/
  responsePromise : IO.Promise (Except Error (Response Body.Stream))

  /--
  Watch channel updated with the cumulative number of request-body bytes sent.
  `none` when the caller does not need upload-progress tracking.
  -/
  uploadProgress : Option (Watch UInt64) := none

  /--
  Watch channel updated with the cumulative number of response bytes received.
  `none` when the caller does not need download-progress tracking.
  -/
  downloadProgress : Option (Watch UInt64) := none

namespace RequestPacket

/--
Resolve the packet with an error.
-/
def onError (packet : RequestPacket) (error : Error) : BaseIO Unit :=
  discard <| packet.responsePromise.resolve (.error error)

/--
Resolve the packet with a response.
-/
def onResponse (packet : RequestPacket) (response : Response Body.Stream) : BaseIO Unit :=
  discard <| packet.responsePromise.resolve (.ok response)

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
The set of I/O sources to wait on during a single poll iteration.
Each `Option` field is `none` when that source is not currently active.
-/
private structure PollSources (α : Type) where
  socket : Option α
  expect : Option Nat
  requestBody : Option Body.Operations
  requestChannel : Option (Std.CloseableChannel RequestPacket)
  responseBody : Option Body.Stream
  timeout : Millisecond.Offset
  keepAliveTimeout : Option Millisecond.Offset
  connectionContext : CancellationContext

/--
All mutable state carried through the connection processing loop.
Bundled into a struct so it can be passed to and returned from helper functions.
-/
private structure ConnectionState where
  machine : H1.Machine .sending
  currentTimeout : Millisecond.Offset
  keepAliveTimeout : Option Millisecond.Offset
  currentRequest : Option RequestPacket
  requestBody : Option Body.Operations
  responseStream : Option Body.Stream
  requiresData : Bool
  expectData : Option Nat
  waitingForRequest : Bool
  isInformationalResponse : Bool
  waitingForContinue : Bool
  pendingRequestBody : Option Body.Operations
  uploadProgress : Option (Watch UInt64) := none
  uploadBytes : UInt64 := 0
  downloadProgress : Option (Watch UInt64) := none
  downloadBytes : UInt64 := 0
  downloadBodyBytes : UInt64 := 0

@[inline]
private def requestHasExpectContinue (request : Request Body.Operations) : Bool :=
  match request.line.headers.getAll? Header.Name.expect with
  | some #[value] => Header.Expect.parse value |>.isSome
  | _ => false

/--
Side effect queued by a pure state transition to be executed later by
`runEffects`. Keeping these as data instead of inline `Async` actions lets
every transition in this module stay pure and `#eval`-testable.
-/
private inductive ConnectionEffect where
  /-- Publish a response body chunk to the caller's stream. -/
  | sendResponseChunk (body : Body.Stream) (chunk : Chunk) (incomplete : Bool)
  /-- Close the response body. Idempotent downstream. -/
  | closeResponseStream (body : Body.Stream)
  /-- Close the response body, surfacing `err` on any pending read. -/
  | closeResponseStreamWithError (body : Body.Stream) (err : IO.Error)
  /-- Attach the known content length before the stream reaches the caller. -/
  | setResponseKnownSize (body : Body.Stream) (size : Body.Length)
  /-- Close a request body reader. -/
  | closeRequestBody (body : Body.Operations)
  /-- Close an upload/download progress watch. -/
  | closeWatch (w : Watch UInt64)
  /-- Publish an upload/download progress value. -/
  | sendWatch (w : Watch UInt64) (bytes : UInt64)
  /-- Resolve the caller's promise with a response. -/
  | resolveResponse (packet : RequestPacket) (response : Response Body.Stream)
  /-- Resolve the caller's promise with an error. -/
  | rejectResponse (packet : RequestPacket) (err : IO.Error)

/--
Interprets the effects produced by a pure transition, running them in order.
Each effect is idempotent: bodies ignore double-close, `Body.send` to a closed
stream is swallowed because the connection must stay readable, and watches
tolerate double-close and post-close sends.
-/
private def runEffects (effects : Array ConnectionEffect) : Async Unit := do
  for effect in effects do
    match effect with
    | .sendResponseChunk body chunk incomplete =>
      try body.send chunk incomplete catch _ => pure ()
    | .closeResponseStream body =>
      if ¬(← Body.isClosed body) then Body.close body
    | .closeResponseStreamWithError body err =>
      if ¬(← Body.isClosed body) then body.closeWithError err
    | .setResponseKnownSize body size =>
      Body.setKnownSize body (some size)
    | .closeRequestBody body =>
      if ¬(← body.isClosed) then body.close
    | .closeWatch w => Watch.close w
    | .sendWatch w bytes => Watch.send w bytes
    | .resolveResponse packet response => packet.onResponse response
    | .rejectResponse packet err => packet.onError err

/--
Result of a pure transition step: the updated state, the effects that must be
executed to take the transition, and a boolean marker: for `processH1Events`
this is `sawFailure`, for `handleRecvEvent` it is `shouldClose`.
-/
private structure Transition where
  state : ConnectionState
  effects : Array ConnectionEffect := #[]
  flag : Bool := false

/--
Waits for the next I/O event across all active sources described by `sources`.
Computes the socket recv size from `config`, then races all active selectables.
Returns `.close` on transport errors.
-/
private def pollNextEvent
    [Transport α]
    (config : Config) (sources : PollSources α) : Async Recv := do

  let expectedBytes := sources.expect
    |>.getD config.defaultRequestBufferSize
    |>.min config.maxRecvChunkSize
    |>.toUInt64

  let mut selectables : Array (Selectable Recv) := #[
    .case sources.connectionContext.doneSelector (fun _ => do
      let reason ← sources.connectionContext.getCancellationReason
      match reason with
      | some .deadline => pure .timeout
      | _ => pure .shutdown)
  ]

  if let some socket := sources.socket then
    selectables := selectables.push (.case (Transport.recvSelector socket expectedBytes) (Recv.bytes · |> pure))

    if let some keepAliveTimeout := sources.keepAliveTimeout then
      selectables := selectables.push (.case (← Selector.sleep keepAliveTimeout) (fun _ => pure .timeout))
    else
      selectables := selectables.push (.case (← Selector.sleep sources.timeout) (fun _ => pure .timeout))

  if let some requestBody := sources.requestBody then
    selectables := selectables.push (.case requestBody.recvSelector (Recv.requestBody · |> pure))

  if let some requestChannel := sources.requestChannel then
    selectables := selectables.push (.case requestChannel.recvSelector (Recv.packet · |> pure))

  if let some responseBody := sources.responseBody then
    selectables := selectables.push (.case (responseBody.interestSelector) (Recv.bodyInterest · |> pure))

  try Selectable.one selectables catch _ => pure .close

/--
Processes all H1 events from a single machine step. Pure: returns the updated
state, the effects to execute, and `true` if a parse failure was encountered.
Handles keep-alive resets, body-size tracking, `Expect: 100-continue`, and
parse errors.
-/
private def processH1Events
    (config : Config)
    (events : Array (H1.Event .sending))
    (state : ConnectionState) : Transition := Id.run do

  let mut st := state
  let mut fx : Array ConnectionEffect := #[]
  let mut sawFailure := false

  for event in events do
    match event with
    | .needMoreData expect =>
      st := { st with requiresData := true, expectData := expect }

    -- `.needAnswer` is emitted by processWrite when the writer is in `waitingHeaders`
    -- state in `.sending` mode, signalling that the client machine needs the next request.
    -- The client loop tracks this through `waitingForRequest` instead, so this event
    -- is intentionally a no-op here.
    | .needAnswer => pure ()

    | .endHeaders head =>
      if head.status.isInformational then
        -- Informational (1xx) responses are interim; do not resolve the caller's
        -- promise. The machine loops back to read the real response.
        st := { st with isInformationalResponse := true }

        -- A `100 Continue` response authorises the body: move it from the
        -- pending slot into `requestBody` so the pump loop starts sending.
        if head.status == .continue && st.waitingForContinue then
          st := { st with
            requestBody := st.pendingRequestBody
            pendingRequestBody := none
            waitingForContinue := false
          }
      else
        st := { st with
          isInformationalResponse := false
          currentTimeout := config.readTimeout
          keepAliveTimeout := none
        }

        -- A non-informational response while we were still waiting for
        -- `100 Continue`: the server rejected (or bypassed) the expectation.
        -- Discard the pending body — it must not be sent.
        if st.waitingForContinue then
          if let some body := st.pendingRequestBody then
            fx := fx.push (.closeRequestBody body)
          st := { st with pendingRequestBody := none, waitingForContinue := false }

        if let some body := st.responseStream then
          if let some length := head.getSize true then
            fx := fx.push (.setResponseKnownSize body length)

        if let some packet := st.currentRequest then
          if let some incoming := st.responseStream then
            fx := fx.push (.resolveResponse packet { line := head, body := incoming })

    | .closeBody =>
      -- Skip closing for informational (1xx) responses; the channel stays
      -- open for the real response body that follows.
      if !st.isInformationalResponse then
        if let some body := st.responseStream then
          fx := fx.push (.closeResponseStream body)

    | .next =>
      -- Reset all per-request state for the next pipelined request.
      if let some body := st.requestBody then
        fx := fx.push (.closeRequestBody body)
      if let some body := st.pendingRequestBody then
        fx := fx.push (.closeRequestBody body)
      if let some body := st.responseStream then
        fx := fx.push (.closeResponseStream body)
      if let some w := st.uploadProgress then fx := fx.push (.closeWatch w)
      if let some w := st.downloadProgress then fx := fx.push (.closeWatch w)

      st := { st with
        requestBody := none
        pendingRequestBody := none
        waitingForContinue := false
        responseStream := none
        currentRequest := none
        isInformationalResponse := false
        waitingForRequest := true
        keepAliveTimeout := some config.keepAliveTimeout.val
        currentTimeout := config.keepAliveTimeout.val
        uploadProgress := none
        uploadBytes := 0
        downloadProgress := none
        downloadBytes := 0
        downloadBodyBytes := 0
      }

    | .failed err =>
      let errString := toString err
      if let some packet := st.currentRequest then
        fx := fx.push (.rejectResponse packet (.userError errString))
      -- If the response body was already handed off to the caller, surface the
      -- error through the stream so a pending `recv`/`readAll` sees it instead
      -- of silently truncating at whatever bytes happened to arrive.
      if let some body := st.responseStream then
        fx := fx.push (.closeResponseStreamWithError body (.userError errString))
      sawFailure := true

    | .«continue» => pure ()

    | .close => pure ()

  return { state := st, effects := fx, flag := sawFailure }

/--
Pure decision logic for `buildPollSources`: given whether the response stream
is currently closed, pick the set of I/O sources to wait on this tick.
-/
private def buildPollSourcesPure
    [Transport α]
    (socket : α) (requestChannel : Std.CloseableChannel RequestPacket)
    (connectionContext : CancellationContext) (state : ConnectionState)
    (responseStreamClosed : Bool) : PollSources α :=
  -- Always include an active request body, even if already closed.
  -- A closed body's recvSelector resolves immediately with `none`, which
  -- triggers `userClosedBody` so the H1 machine can finalize chunked encoding.
  let requestBodySource := state.requestBody

  let responseBodySource :=
    if state.machine.canPullBodyNow then
      match state.responseStream with
      | some body => if responseStreamClosed then none else some body
      | none => none
    else none

  let pollSocket :=
    state.requiresData ∨
    state.machine.writer.sentMessage ∨
    !state.waitingForRequest ∨
    requestBodySource.isSome ∨
    state.machine.canPullBody

  {
    socket := if pollSocket then some socket else none
    expect := state.expectData
    requestBody := requestBodySource
    requestChannel := if state.waitingForRequest then some requestChannel else none
    responseBody := responseBodySource
    timeout := state.currentTimeout
    keepAliveTimeout := state.keepAliveTimeout
    connectionContext := connectionContext
  }

/--
Computes the active `PollSources` for the current connection state.
Reads the response-body closed flag once, then defers to the pure
`buildPollSourcesPure` for the decision.
-/
private def buildPollSources
    [Transport α]
    (socket : α) (requestChannel : Std.CloseableChannel RequestPacket)
    (connectionContext : CancellationContext) (state : ConnectionState)
    : Async (PollSources α) := do
  let responseStreamClosed ← match state.responseStream with
    | some body => Body.isClosed body
    | none => pure true
  return buildPollSourcesPure socket requestChannel connectionContext state responseStreamClosed

/--
Pure transition applied when a caller-facing problem forces the connection to
terminate (request timeout, shutdown signal, response body limit exceeded).
Rejects any in-flight request, closes the response stream, closes progress
watches, and parks the H1 machine.
-/
private def abortState (state : ConnectionState) (err : IO.Error) : Transition := Id.run do
  let mut fx : Array ConnectionEffect := #[]
  if let some packet := state.currentRequest then
    fx := fx.push (.rejectResponse packet err)
  if let some body := state.responseStream then
    fx := fx.push (.closeResponseStream body)
  if let some w := state.uploadProgress then fx := fx.push (.closeWatch w)
  if let some w := state.downloadProgress then fx := fx.push (.closeWatch w)
  return {
    state := { state with
      machine := state.machine.closeWriter.closeReader.noMoreInput
      currentRequest := none
      responseStream := none
      uploadProgress := none
      downloadProgress := none
    }
    effects := fx
  }

/--
Pure transition for a new request packet that has already had its known body
size resolved and its response stream allocated by the async caller.
-/
private def onNewPacket
    (config : Config) (packet : RequestPacket) (knownSize : Option Body.Length)
    (responseStream : Body.Stream) (state : ConnectionState) : Transition :=
  let machine0 := state.machine.send packet.request.line
  let hasExpect := requestHasExpectContinue packet.request
  let machine1 := match knownSize with
    | some size => machine0.setKnownSize size
    | none => machine0
  let requestBody : Option Body.Operations :=
    if hasExpect then none else some packet.request.body
  let pendingRequestBody : Option Body.Operations :=
    if hasExpect then some packet.request.body else none
  {
    state := { state with
      machine := machine1
      currentRequest := some packet
      waitingForRequest := false
      currentTimeout := config.requestTimeout.val
      keepAliveTimeout := none
      requestBody := requestBody
      pendingRequestBody := pendingRequestBody
      waitingForContinue := hasExpect
      responseStream := some responseStream
      uploadProgress := packet.uploadProgress
      uploadBytes := 0
      downloadProgress := packet.downloadProgress
      downloadBytes := 0
    }
  }

/--
Pure transition for a `.bodyInterest true` event: pulls the next chunk out of
the H1 machine, enforces `maxResponseBodySize`, and queues the chunk write.
-/
private def onBodyInterest
    (config : Config) (state : ConnectionState) : Transition := Id.run do
  let (newMachine, pulledChunk) := state.machine.pullBody
  let mut st := { state with machine := newMachine }
  let mut fx : Array ConnectionEffect := #[]

  if let some pulled := pulledChunk then
    let newBodyBytes := st.downloadBodyBytes + pulled.chunk.data.size.toUInt64
    st := { st with downloadBodyBytes := newBodyBytes }

    -- Enforce the response body size limit before writing data to the caller.
    if let some maxSize := config.maxResponseBodySize then
      if newBodyBytes > maxSize.toUInt64 then
        let err : IO.Error := .userError "response body exceeds maximum allowed size"
        -- Header stage already resolved `packet`, so rejecting here is typically a
        -- no-op. The caller is listening on the response stream; surface the error
        -- through `closeResponseStreamWithError` so a pending `recv`/`readAll` sees
        -- it instead of a silent truncated EOF.
        if let some packet := st.currentRequest then
          fx := fx.push (.rejectResponse packet err)
        if let some body := st.responseStream then
          fx := fx.push (.closeResponseStreamWithError body err)
        if let some w := st.downloadProgress then fx := fx.push (.closeWatch w)
        return {
          state := { st with
            machine := st.machine.closeWriter.closeReader.noMoreInput
            currentRequest := none
            responseStream := none
            downloadProgress := none
          }
          effects := fx
        }

    if let some body := st.responseStream then
      -- If the caller has dropped/closed the incoming side, the write fails.
      -- Silently swallowing the error is correct: the loop must continue pulling
      -- wire bytes to keep the connection in a valid state for reuse.
      fx := fx.push (.sendResponseChunk body pulled.chunk pulled.incomplete)
      if pulled.final then
        fx := fx.push (.closeResponseStream body)
        st := { st with responseStream := none }

  return { state := st, effects := fx }

/--
Pure transition for every `Recv` case except the arrival of a fresh request
packet, which must pre-fetch the body size and allocate a response stream in
async context. Returns `none` for the packet-arrival case so the async
dispatcher can handle it.
-/
private def handleRecvEventPure
    (config : Config)
    (event : Recv) (state : ConnectionState) : Option Transition :=
  match event with
  | .bytes (some bytes) =>
    let newDownloadBytes := state.downloadBytes + bytes.size.toUInt64
    let fx : Array ConnectionEffect := match state.downloadProgress with
      | some w => #[.sendWatch w newDownloadBytes]
      | none => #[]
    some {
      state := { state with
        machine := state.machine.feed bytes
        downloadBytes := newDownloadBytes }
      effects := fx
    }

  | .bytes none =>
    some { state := { state with machine := state.machine.noMoreInput } }

  | .requestBody (some chunk) =>
    let newUploadBytes := state.uploadBytes + chunk.data.size.toUInt64
    let fx : Array ConnectionEffect := match state.uploadProgress with
      | some w => #[.sendWatch w newUploadBytes]
      | none => #[]
    some {
      state := { state with
        machine := state.machine.sendData #[chunk]
        uploadBytes := newUploadBytes }
      effects := fx
    }

  | .requestBody none =>
    let fx : Array ConnectionEffect := match state.requestBody with
      | some body => #[.closeRequestBody body]
      | none => #[]
    some {
      state := { state with machine := state.machine.userClosedBody, requestBody := none }
      effects := fx
    }

  | .bodyInterest interested =>
    if interested then some (onBodyInterest config state) else some { state := state }

  | .packet (some _) => none -- async dispatcher pre-fetches size + stream

  | .packet none => some { state := state, flag := true }
  | .close => some { state := state, flag := true }

  | .timeout => some (abortState state (.userError "request timeout"))
  | .shutdown => some (abortState state (.userError "connection shutdown"))

/--
Processes a single async I/O event and updates the connection state. Async
wrapper around the pure `handleRecvEventPure`; only the `.packet (some _)`
case requires async work (known-size probe and response-stream allocation).
Returns the updated state, the effects to execute, and `true` if the
connection should be closed immediately.
-/
private def handleRecvEvent
    (config : Config)
    (event : Recv) (state : ConnectionState) : Async Transition := do
  match event with
  | .packet (some packet) =>
    let knownSize ← packet.request.body.getKnownSize
    let responseStream ← Body.mkStream
    return onNewPacket config packet knownSize responseStream state
  | _ =>
    match handleRecvEventPure config event state with
    | some t => pure t
    | none => pure { state := state }

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
    currentRequest := none
    requestBody := none
    responseStream := none
    requiresData := false
    expectData := none
    waitingForRequest := true
    isInformationalResponse := false
    waitingForContinue := false
    pendingRequestBody := none
  }

  while ¬state.machine.halted do

    -- Phase 1: close any reader that the user has signalled is done.
    if let some body := state.requestBody then
      if ← body.isClosed then
        state := { state with machine := state.machine.userClosedBody, requestBody := none }

    -- Phase 2: advance the state machine and flush any output.
    let (newMachine, step) := state.machine.step
    state := { state with machine := newMachine }

    if step.output.size > 0 then
      try Transport.sendAll socket #[step.output.toByteArray]
      catch _ =>
        if let some packet := state.currentRequest then
          packet.onError (.userError "connection write failed")
        if let some body := state.responseStream then
          if ¬(← Body.isClosed body) then Body.close body
        state := { state with
          machine := state.machine.closeWriter.closeReader.noMoreInput
          currentRequest := none
          responseStream := none
        }
        break

    -- Phase 3: process all events emitted by this step.
    let t := processH1Events config step.events state
    state := t.state
    runEffects t.effects
    if t.flag then break

    -- Phase 4: wait for the next IO event when any source needs attention.
    if state.requiresData ∨ state.waitingForRequest ∨ state.currentRequest.isSome ∨ state.requestBody.isSome ∨ state.machine.canPullBody then
      let sources ← buildPollSources socket requestChannel connectionContext state
      state := { state with requiresData := false }
      let event ← pollNextEvent config sources
      let t ← handleRecvEvent config event state
      state := t.state
      runEffects t.effects
      if t.flag then break

  -- Clean up: notify any in-flight request and close all open streams.
  if let some packet := state.currentRequest then
    packet.onError (.userError "connection closed")

  if let some w := state.uploadProgress then
    Watch.close w

  if let some w := state.downloadProgress then
    Watch.close w

  if let some body := state.responseStream then
    if ¬(← Body.isClosed body) then Body.close body

  if let some body := state.requestBody then
    if ¬(← body.isClosed) then body.close

  if let some body := state.pendingRequestBody then
    if ¬(← body.isClosed) then body.close

  discard <| EIO.toBaseIO requestChannel.close

  -- Drain any remaining queued packets.
  repeat do
    match ← requestChannel.tryRecv with
    | some packet => packet.onError (.userError "connection closed")
    | none => break

  Transport.close socket

end Connection

end Std.Http.Client
