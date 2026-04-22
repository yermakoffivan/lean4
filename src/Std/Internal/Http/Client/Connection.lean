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
  request : Request Body.Any

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
All mutable state carried through the connection processing loop.
Bundled into a struct so it can be passed to and returned from helper functions.
-/
private structure ConnectionState where
  machine : H1.Machine .sending
  currentTimeout : Millisecond.Offset
  keepAliveTimeout : Option Millisecond.Offset
  currentRequest : Option RequestPacket
  requestBody : Option Body.Any
  responseStream : Option Body.Stream
  requiresData : Bool
  expectData : Option Nat
  waitingForRequest : Bool
  isInformationalResponse : Bool
  waitingForContinue : Bool
  pendingRequestBody : Option Body.Any
  currentResponseIsRedirect : Bool := false
  uploadProgress : Option (Watch UInt64) := none
  uploadBytes : UInt64 := 0
  downloadProgress : Option (Watch UInt64) := none
  downloadBytes : UInt64 := 0
  downloadBodyBytes : UInt64 := 0

@[inline]
private def requestHasExpectContinue (request : Request Body.Any) : Bool :=
  match request.line.headers.getAll? Header.Name.expect with
  | some #[value] => Header.Expect.parse value |>.isSome
  | _ => false

/--
Closes every open per-request resource held by `state`: both request body
handles, the response stream, and the upload/download progress watches.
Each close is guarded by an `isClosed` check so this is idempotent.
-/
private def closeAllRequestState (state : ConnectionState) : Async Unit := do
  if let some body := state.requestBody then
    if ¬(← body.isClosed) then body.close
  if let some body := state.pendingRequestBody then
    if ¬(← body.isClosed) then body.close
  if let some body := state.responseStream then
    if ¬(← Body.isClosed body) then Body.close body
  if let some w := state.uploadProgress then Watch.close w
  if let some w := state.downloadProgress then Watch.close w

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
    state.requiresData ∨
    state.machine.writer.sentMessage ∨
    !state.waitingForRequest ∨
    state.requestBody.isSome ∨
    state.machine.canPullBody

  let expectedBytes := state.expectData
    |>.getD config.defaultRequestBufferSize
    |>.min config.maxRecvChunkSize
    |>.toUInt64

  let mut selectables : Array (Selectable Recv) := #[
    .case connectionContext.doneSelector (fun _ => do
      let reason ← connectionContext.getCancellationReason
      match reason with
      | some .deadline => pure .timeout
      | _ => pure .shutdown)
  ]

  if pollSocket then
    selectables := selectables.push (.case (Transport.recvSelector socket expectedBytes) (Recv.bytes · |> pure))

    let timeout := state.keepAliveTimeout.getD state.currentTimeout
    selectables := selectables.push (.case (← Selector.sleep timeout) (fun _ => pure .timeout))

  -- Always include an active request body, even if already closed. A closed
  -- body's recvSelector resolves immediately with `none`, which triggers
  -- `userClosedBody` so the H1 machine can finalize chunked encoding.
  if let some requestBody := state.requestBody then
    selectables := selectables.push (.case requestBody.recvSelector (Recv.requestBody · |> pure))

  if state.waitingForRequest then
    selectables := selectables.push (.case requestChannel.recvSelector (Recv.packet · |> pure))

  if let some responseBody := responseBodySource then
    selectables := selectables.push (.case responseBody.interestSelector (Recv.bodyInterest · |> pure))

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
          currentResponseIsRedirect := head.status.isRedirection
        }

        -- A non-informational response while we were still waiting for
        -- `100 Continue`: the server rejected (or bypassed) the expectation.
        -- Discard the pending body — it must not be sent.
        if st.waitingForContinue then
          if let some body := st.pendingRequestBody then
            if ¬(← body.isClosed) then body.close
          st := { st with pendingRequestBody := none, waitingForContinue := false }

        if let some body := st.responseStream then
          if let some length := head.getSize true then
            Body.setKnownSize body (some length)

        if let some packet := st.currentRequest then
          if let some incoming := st.responseStream then
            packet.onResponse { line := head, body := incoming }

    | .closeBody =>
      -- Skip closing for informational (1xx) responses; the channel stays
      -- open for the real response body that follows.
      if !st.isInformationalResponse then
        if let some body := st.responseStream then
          if ¬(← Body.isClosed body) then Body.close body

    | .next =>
      -- Reset all per-request state for the next pipelined request.
      closeAllRequestState st
      st := { st with
        requestBody := none
        pendingRequestBody := none
        waitingForContinue := false
        responseStream := none
        currentRequest := none
        isInformationalResponse := false
        currentResponseIsRedirect := false
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
      let ioErr : IO.Error := .userError (toString err)
      if let some packet := st.currentRequest then
        packet.onError ioErr
      -- If the response body was already handed off to the caller, surface the
      -- error through the stream so a pending `recv`/`readAll` sees it instead
      -- of silently truncating at whatever bytes happened to arrive.
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
private def abortState
    (state : ConnectionState) (err : IO.Error) : Async ConnectionState := do
  if let some packet := state.currentRequest then
    packet.onError err
  closeAllRequestState state
  return { state with
    machine := state.machine.closeWriter.closeReader.noMoreInput
    currentRequest := none
    requestBody := none
    pendingRequestBody := none
    responseStream := none
    uploadProgress := none
    downloadProgress := none
  }

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
    currentRequest := some packet
    waitingForRequest := false
    currentTimeout := config.requestTimeout.val
    keepAliveTimeout := none
    requestBody := if hasExpect then none else some packet.request.body
    pendingRequestBody := if hasExpect then some packet.request.body else none
    waitingForContinue := hasExpect
    responseStream := some responseStream
    uploadProgress := packet.uploadProgress
    uploadBytes := 0
    downloadProgress := packet.downloadProgress
    downloadBytes := 0
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
    let newBodyBytes := st.downloadBodyBytes + pulled.chunk.data.size.toUInt64
    st := { st with downloadBodyBytes := newBodyBytes }

    -- Enforce a body size limit. The cap depends on which response we are
    -- pulling: intermediate redirect bodies use `redirectBodyDrainLimit` (so a
    -- small caller-set `maxResponseBodySize` cannot break the redirect-follow
    -- loop) while still bounding memory if a server sends a huge 3xx body.
    -- Final responses use the caller's `maxResponseBodySize` as before.
    let maxSize? : Option UInt64 :=
      if st.currentResponseIsRedirect then
        some config.redirectBodyDrainLimit.toUInt64
      else
        config.maxResponseBodySize.map (·.toUInt64)
    if let some maxSize := maxSize? then
      if newBodyBytes > maxSize then
        let err : IO.Error :=
          if st.currentResponseIsRedirect then
            .userError "redirect response body exceeds redirectBodyDrainLimit"
          else
            .userError "response body exceeds maximum allowed size"
        -- Header stage already resolved `packet`, so rejecting here is typically a
        -- no-op. The caller is listening on the response stream; surface the error
        -- through `closeWithError` so a pending `recv`/`readAll` sees it instead
        -- of a silent truncated EOF.
        if let some body := st.responseStream then
          if ¬(← Body.isClosed body) then body.closeWithError err
        return ← abortState { st with responseStream := none } err

    if let some body := st.responseStream then
      -- If the caller has dropped/closed the incoming side, the write fails.
      -- Silently swallowing the error is correct: the loop must continue pulling
      -- wire bytes to keep the connection in a valid state for reuse.
      try body.send pulled.chunk pulled.incomplete catch _ => pure ()
      if pulled.final then
        if ¬(← Body.isClosed body) then Body.close body
        st := { st with responseStream := none }

  return st

/--
Processes a single async I/O event, returning the updated state and a
`shouldClose` flag that tells the main loop to exit.
-/
private def handleRecvEvent
    (config : Config)
    (event : Recv) (state : ConnectionState) : Async (ConnectionState × Bool) := do
  match event with
  | .bytes (some bytes) =>
    let newDownloadBytes := state.downloadBytes + bytes.size.toUInt64
    if let some w := state.downloadProgress then Watch.send w newDownloadBytes
    return ({ state with
      machine := state.machine.feed bytes
      downloadBytes := newDownloadBytes }, false)

  | .bytes none =>
    return ({ state with machine := state.machine.noMoreInput }, false)

  | .requestBody (some chunk) =>
    let newUploadBytes := state.uploadBytes + chunk.data.size.toUInt64
    if let some w := state.uploadProgress then Watch.send w newUploadBytes
    return ({ state with
      machine := state.machine.sendData #[chunk]
      uploadBytes := newUploadBytes }, false)

  | .requestBody none =>
    if let some body := state.requestBody then
      if ¬(← body.isClosed) then body.close
    return ({ state with machine := state.machine.userClosedBody, requestBody := none }, false)

  | .bodyInterest interested =>
    if interested then
      return (← onBodyInterest config state, false)
    else
      return (state, false)

  | .packet (some packet) =>
    let knownSize ← packet.request.body.getKnownSize
    let responseStream ← Body.mkStream
    return (onNewPacket config packet knownSize responseStream state, false)

  | .packet none => return (state, true)
  | .close => return (state, true)

  | .timeout => return (← abortState state (.userError "request timeout"), false)
  | .shutdown => return (← abortState state (.userError "connection shutdown"), false)

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
        state ← abortState state (.userError "connection write failed")
        break

    -- Phase 3: process all events emitted by this step.
    let (newState, sawFailure) ← processH1Events config step.events state
    state := newState
    if sawFailure then break

    -- Phase 4: wait for the next IO event when any source needs attention.
    if state.requiresData ∨ state.waitingForRequest ∨ state.currentRequest.isSome ∨ state.requestBody.isSome ∨ state.machine.canPullBody then
      state := { state with requiresData := false }
      let event ← pollNextEvent config socket requestChannel connectionContext state
      let (newState, shouldClose) ← handleRecvEvent config event state
      state := newState
      if shouldClose then break

  -- Clean up: notify any in-flight request and close all open streams.
  if let some packet := state.currentRequest then
    packet.onError (.userError "connection closed")
  closeAllRequestState state

  discard <| EIO.toBaseIO requestChannel.close

  -- Drain any remaining queued packets.
  repeat do
    match ← requestChannel.tryRecv with
    | some packet => packet.onError (.userError "connection closed")
    | none => break

  Transport.close socket

end Connection

end Std.Http.Client
