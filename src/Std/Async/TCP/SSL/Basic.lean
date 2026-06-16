/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module
prelude
public import Std.Time
public import Std.Async.Timer
public import Std.Async.Select
public import Std.Internal.SSL
public import Std.Internal.UV.TCP

/-!
Shared types and internal I/O plumbing for `Std.Async.TCP.SSL`: the `Server`/`Connection`/`Client`
types and the low-level helpers (encrypted feed/flush, the handshake loop) used by the
`Connection`, `Server`, and `Client` operation modules.
-/

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std Net Time

/--
Default chunk size for TLS encrypted I/O (16 KiB). Matches the maximum TLS record payload size
RFC 8449 §4), so a single `recv` call always drains at least one complete TLS record from the socket.
-/
def ioChunkSize : UInt64 := 16 * 1024

/--
Feeds an encrypted chunk into the SSL input BIO.
-/
@[inline]
def feedEncryptedChunk (ssl : Session) (encrypted : ByteArray) : IO Unit := do
  if encrypted.size == 0 then return ()
  discard <| ssl.feedEncrypted encrypted

/--
Drains all pending encrypted bytes from the SSL output BIO and sends them over TCP.
-/
def flushEncrypted (native : Socket) (ssl : Session) : Async Unit := do
  let out ← ssl.drainEncrypted

  if out.size > 0 then
    Async.ofPromise <| native.send #[out]

/--
Creates a `Selector` that resolves with the next bytes received from a raw TCP socket,
or `none` on EOF. Used internally to race socket receives against a deadline.
-/
private def socketRecvSelector (native : Socket) (chunkSize : UInt64) : Selector (Option ByteArray) where
  tryFn := pure none

  registerFn waiter := do
    let readableWaiter ← native.waitReadable
    discard <| IO.mapTask (t := readableWaiter.result?) fun res => do
      match res with
      | none => return ()
      | some res =>
        let lose := return ()
        let win promise := do
          try
            discard <| IO.ofExcept res
            let task ← (Async.ofPromise <| native.recv? chunkSize).asTask
            IO.chainTask task (fun x => promise.resolve x)
          catch e =>
            promise.resolve (.error e)
        waiter.race lose win

  unregisterFn := native.cancelRecv

/--
Receives one encrypted chunk from the TCP socket, racing against `deadline` if present. Throws
`"TLS operation timed out"` if the deadline fires before data arrives.
-/
def recvEncrypted (native : Socket) (chunkSize : UInt64) (deadline : Option Sleep) : Async (Option ByteArray) := do
  match deadline with
  | none => Async.ofPromise <| native.recv? chunkSize
  | some timer =>
    let result ← Selectable.one #[
      .case (selector := socketRecvSelector native chunkSize) (cont := fun v => return some v),
      .case (selector := timer.selector) (cont := fun _ => return none)
    ]
    match result with
    | none => throw <| IO.userError "TLS operation timed out"
    | some v => pure v

/--
Runs the TLS handshake loop to completion, interleaving SSL state machine steps
with TCP I/O. If `deadline` is provided, each TCP receive is raced against it and
the loop throws `"TLS operation timed out"` if the deadline fires.
-/
partial def runHandshake (native : Socket) (ssl : Session) (chunkSize : UInt64) (deadline : Option Sleep := none) : Async Unit := do
  while true do
    let pendingBefore ← ssl.pendingEncrypted
    let want ← ssl.handshake
    let pendingAfter ← ssl.pendingEncrypted
    flushEncrypted native ssl
    match want with
    | none => return ()
    | some .write =>
      if pendingAfter == 0 && pendingBefore == 0 then
        throw <| IO.userError "TLS handshake stalled: WANT_WRITE but output BIO produced no bytes"
    | some .read =>
      let encrypted? ← recvEncrypted native chunkSize deadline
      match encrypted? with
      | none =>
        throw <| IO.userError "connection closed during TLS handshake"
      | some encrypted =>
        feedEncryptedChunk ssl encrypted

-- ## Types

/--
Distinguishes server-accepted and client-initiated TLS connections at the type level.
-/
inductive ConnectionRole where

  /--
  A connection accepted by a `Server` (the local peer is the TLS server).
  -/
  | server

  /--
  A connection initiated by a `Client` (the local peer is the TLS client).
  -/
  | client

/--
Represents a TLS-enabled TCP server socket. Carries its own server context so
that each accepted connection gets a session configured from the same context.
-/
structure Server where
  ofNative ::
    native : Socket
    serverCtx : Context.Server

/--
Represents a TLS-enabled TCP connection, parameterized by `role` to prevent
mixing server and client connections after construction.
Use `Client` for outgoing connections and `ServerConn` for server-accepted connections.
-/
structure Connection (role : ConnectionRole) where
  ofNative ::
    native : Socket
    ssl : Session
    broken : IO.Ref Bool

/--
An outgoing TLS client connection.
-/
abbrev Client := Connection .client

/--
An incoming TLS connection accepted by a `Server`.
-/
abbrev ServerConn := Connection .server

end Std.Async.TCP.SSL

end
