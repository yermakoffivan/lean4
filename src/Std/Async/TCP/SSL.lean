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
TLS-over-TCP socket API built on top of `Std.Internal.SSL` (OpenSSL) and `Std.Internal.UV.TCP` (libuv).
Provides `Server`, `Client`, `ServerConn`, and the shared `Connection` type with
send/recv/selector/shutdown operations.
-/

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std Net Time

/--
Default chunk size for TLS encrypted I/O (16 KiB).
Matches the maximum TLS record payload size (RFC 8449 §4), so a single `recv` call
always drains at least one complete TLS record from the socket.
-/
def ioChunkSize : UInt64 := 16 * 1024

/--
Feeds an encrypted chunk into the SSL input BIO.
-/
@[inline]
private def feedEncryptedChunk (ssl : Session) (encrypted : ByteArray) : IO Unit := do
  if encrypted.size == 0 then return ()
  -- BIO_s_mem (memory BIO) never produces a short write; a non-positive return is always fatal.
  discard <| ssl.feedEncrypted encrypted

/--
Drains all pending encrypted bytes from the SSL output BIO and sends them over TCP.
-/
private def flushEncrypted (native : Socket) (ssl : Session) : Async Unit := do
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
private def recvEncrypted (native : Socket) (chunkSize : UInt64) (deadline : Option Sleep) : Async (Option ByteArray) := do
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
private partial def runHandshake (native : Socket) (ssl : Session) (chunkSize : UInt64) (deadline : Option Sleep := none) : Async Unit := do
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
  | server
  | client

/--
Represents a TLS-enabled TCP server socket. Carries its own server context so
that each accepted connection gets a session configured from the same context.
-/
structure Server where
  private ofNative ::
    native : Socket
    serverCtx : Context.Server

/--
Represents a TLS-enabled TCP connection, parameterized by `role` to prevent
mixing server and client connections after construction.
Use `Client` for outgoing connections and `ServerConn` for server-accepted connections.
-/
structure Connection (role : ConnectionRole) where
  private ofNative ::
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

namespace Server

/--
Creates a new TLS-enabled TCP server socket using the given context.
-/
@[inline]
def mk (serverCtx : Context.Server) : IO Server := do
  let native ← Socket.new
  return Server.ofNative native serverCtx

/--
Configures the server context with a PEM certificate and private key.
-/
@[inline]
def configure (s : Server) (certFile keyFile : String) : IO Unit :=
  s.serverCtx.configure certFile keyFile

/--
Binds the server socket to the specified address.
-/
@[inline]
def bind (s : Server) (addr : SocketAddress) : IO Unit :=
  s.native.bind addr

/--
Listens for incoming connections with the given backlog.
-/
@[inline]
def listen (s : Server) (backlog : UInt32) : IO Unit :=
  s.native.listen backlog

private def mkServerConn (native : Socket) (ctx : Context.Server) : IO ServerConn := do
  let ssl ← Session.Server.mk ctx
  let broken ← IO.mkRef false
  return ⟨native, ssl.toSession, broken⟩

/--
Accepts an incoming TLS connection and performs the TLS handshake.

If `timeout` is provided, each round-trip of the TLS handshake must complete
within that duration or the connection is dropped with `"TLS operation timed out"`.
Without a timeout, a stalled or malicious peer can cause this function to block
indefinitely.
-/
def accept (s : Server) (chunkSize : UInt64 := ioChunkSize) (timeout : Option Millisecond.Offset := none) : Async ServerConn := do
  let native ← Async.ofPromise <| s.native.accept
  let conn ← mkServerConn native s.serverCtx
  let deadline ← timeout.mapM Sleep.mk
  runHandshake conn.native conn.ssl chunkSize deadline
  return conn

/--
Creates a `Selector` that resolves once `s` has a connection available and the TLS handshake
has completed.

If `timeout` is provided, each round-trip of the TLS handshake must complete within that
duration or the connection attempt is abandoned with `"TLS operation timed out"`.

If this selector is cancelled after a TCP connection is accepted but before the TLS handshake
completes, the in-progress handshake task is dropped and the child socket is closed by its
finalizer when the task is garbage collected.
-/
def acceptSelector (s : Server) (timeout : Option Millisecond.Offset := none) : Selector ServerConn := {
  tryFn := pure none

  registerFn waiter := do
    let connTask ← s.accept (timeout := timeout) |>.asTask

    discard <| IO.mapTask (t := connTask) fun res => do
      let lose := return ()
      let win promise := do
        try
          let conn ← IO.ofExcept res
          promise.resolve (.ok conn)
        catch e =>
          promise.resolve (.error e)
      waiter.race lose win

  unregisterFn := s.native.cancelAccept
}

/--
Gets the local address of the server socket.
-/
@[inline]
def getSockName (s : Server) : IO SocketAddress :=
  s.native.getSockName

/--
Disables the Nagle algorithm for all client sockets accepted by this server socket.
-/
@[inline]
def noDelay (s : Server) : IO Unit :=
  s.native.noDelay

/--
Enables TCP keep-alive for all client sockets accepted by this server socket.
`delay` must be at least 1 second.
-/
@[inline]
def keepAlive (s : Server) (enable : Bool) (delay : Std.Time.Second.Offset)
    (_ : delay.val ≥ 1 := by decide) : IO Unit :=
  s.native.keepAlive enable.toInt8 delay.val.toNat.toUInt32

end Server

namespace Connection

/--
Flushes any internally-queued plaintext writes by calling `ssl.write` with an
empty buffer, which does not queue additional data.
-/
private partial def drainPendingWrites (s : Connection role) : Async Unit := do
  match ← s.ssl.write ByteArray.empty with
  | none =>
    -- The queue is drained; still flush any encrypted bytes the SSL engine
    -- may have placed in the output BIO during the final write step.
    flushEncrypted s.native s.ssl

  | some .write =>
    flushEncrypted s.native s.ssl
    drainPendingWrites s

  | some .read =>
    flushEncrypted s.native s.ssl
    let encrypted? ← Async.ofPromise <| s.native.recv? ioChunkSize

    match encrypted? with
    | none =>
      throw <| IO.userError "connection closed while flushing TLS write"
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      drainPendingWrites s

/--
Sends data through a TLS-enabled socket until accepted. When OpenSSL reports the write as
pending additional I/O (e.g. during a renegotiation or before the handshake Finished
round-trip completes), this function performs the required socket I/O and retries until the
data is accepted rather than throwing.

Throws if the connection is in a broken state from a previous failed operation; in that
case the `Connection` must be discarded.
-/
def send (s : Connection role) (data : ByteArray) : Async Unit := do
  if ← s.broken.get then throw <| IO.userError "TLS connection is in a broken state"
  try
    match ← s.ssl.write data with
    | none => flushEncrypted s.native s.ssl
    | some _ =>
      -- drainPendingWrites ends with flushEncrypted in its base case; no need
      -- to flush again afterwards.
      drainPendingWrites s
  catch e =>
    s.broken.set true
    throw e

/--
Sends multiple data buffers through the TLS-enabled socket.
-/
@[inline] def sendAll (s : Connection role) (data : Array ByteArray) : Async Unit :=
  data.forM (s.send ·)

private partial def recvLoop (s : Connection role) (size : UInt64) (chunkSize : UInt64) : Async (Option ByteArray) := do
  match ← s.ssl.read? size with
  | .data plain =>
    flushEncrypted s.native s.ssl
    return some plain
  | .closed =>
    return none
  | .wantIO _ =>
    flushEncrypted s.native s.ssl
    let encrypted? ← Async.ofPromise <| s.native.recv? chunkSize
    match encrypted? with
    | none =>
      -- TCP closed without a TLS close_notify alert. This is indistinguishable
      -- from a truncation attack (a MITM severing the connection mid-stream),
      -- so we throw rather than silently returning none.
      throw <| IO.userError "TLS connection closed without close_notify (possible truncation attack)"
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      recvLoop s size chunkSize

/--
Receives decrypted plaintext data from TLS. If no plaintext is immediately available, this function
performs the required socket I/O (flush or receive) and retries until data arrives or the connection
is closed.

Returns `none` only on a clean TLS close (the peer sent a `close_notify` alert).

**Throws** if the underlying TCP connection closes without a `close_notify`; this
distinguishes a truncation attack from a legitimate close. Also throws if the connection is
in a broken state from a previous failed operation; in that case the `Connection` must be
discarded.
-/
def recv? (s : Connection role) (size : UInt64) : Async (Option ByteArray) := do
  if ← s.broken.get then throw <| IO.userError "TLS connection is in a broken state"
  try
    recvLoop s size ioChunkSize
  catch e =>
    s.broken.set true
    throw e

/--
Non-blocking receive of decrypted plaintext data.

- Returns `some (some data)` if plaintext is available.
- Returns `some none` if the peer closed the TLS session cleanly.
- Returns `none` if no plaintext is ready yet — the caller should wait and retry, not
  block. This is the non-blocking counterpart to `recv?`.

Checks both the OpenSSL plaintext buffer (`SSL_pending`) and the input BIO
(`BIO_pending`) via a non-consuming `ssl.read?`. Checking only `SSL_pending` would miss
encrypted bytes already pulled from the socket into the BIO but not yet decrypted,
causing `recvSelector` to incorrectly wait for new TCP data that will never arrive.
-/
def tryRecv (s : Connection role) (size : UInt64) : Async (Option (Option ByteArray)) := do
  match ← s.ssl.read? size with
  | .data plain =>
    flushEncrypted s.native s.ssl
    return some (some plain)
  | .closed =>
    return some none
  | .wantIO _ =>
    flushEncrypted s.native s.ssl
    return none

/--
Feeds encrypted socket data into SSL until plaintext (or close) is pending.

Uses `ssl.read? 0` as a non-consuming peek to check whether plaintext is already
available before doing any I/O. `chunkSize` controls how many encrypted bytes are read
from the socket per iteration; it defaults to `ioChunkSize` (16 KiB).
-/
partial def waitReadable (s : Connection role) (chunkSize : UInt64 := ioChunkSize) : Async Unit := do
  flushEncrypted s.native s.ssl
  match ← s.ssl.read? 0 with
  | .data _ | .closed => return ()
  | .wantIO _ =>
    let encrypted? ← Async.ofPromise <| s.native.recv? chunkSize
    match encrypted? with
    | none => return ()
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      waitReadable s chunkSize

/--
Creates a `Selector` that resolves once `s` has plaintext data available.
-/
def recvSelector (s : Connection role) (size : UInt64) : Selector (Option ByteArray) := {
  tryFn := s.tryRecv size

  registerFn waiter := do
    let readableWaiter ← s.native.waitReadable
    -- If we get cancelled the promise will be dropped so prepare for that.
    discard <| IO.mapTask (t := readableWaiter.result?) fun res => do
      match res with
      | none => return ()
      | some res =>
        let lose := return ()
        let win promise := do
          try
            discard <| IO.ofExcept res
            let task ← s.recv? size |>.asTask
            IO.chainTask task (fun x => promise.resolve x)
          catch e =>
            promise.resolve (.error e)
        waiter.race lose win

  unregisterFn := s.native.cancelRecv
}

private partial def tlsShutdownLoop (s : Connection role) (chunkSize : UInt64)
    (deadline : Option Sleep) : Async Unit := do
  match ← s.ssl.closeNotify with
  | none =>
    flushEncrypted s.native s.ssl
    Async.ofPromise <| s.native.shutdown
  | some .write =>
    flushEncrypted s.native s.ssl
    tlsShutdownLoop s chunkSize deadline
  | some .read =>
    flushEncrypted s.native s.ssl
    let encrypted? ← recvEncrypted s.native chunkSize deadline
    match encrypted? with
    | none =>
      -- Peer closed TCP before sending close_notify; still close our side.
      Async.ofPromise <| s.native.shutdown
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      tlsShutdownLoop s chunkSize deadline

/--
Sends a TLS `close_notify` alert and waits for the peer's reply, then
performs a TCP-level half-close on the write side.

This is the correct way to close a TLS connection. It ensures the peer
receives the alert and can distinguish a clean close from a truncation attack.
After this call, `recv?` will eventually return `none`.

If `timeout` is provided, each round-trip while waiting for the peer's
`close_notify` must complete within that duration or the function throws
`"TLS operation timed out"`. Without a timeout, a stalled or malicious peer
can cause this function to block indefinitely.
-/
def tlsShutdown (s : Connection role) (chunkSize : UInt64 := ioChunkSize)
    (timeout : Option Std.Time.Millisecond.Offset := none) : Async Unit := do
  let deadline ← timeout.mapM Sleep.mk
  tlsShutdownLoop s chunkSize deadline

/--
Shuts down the write side of the socket at the TCP level only.

**WARNING:** No TLS `close_notify` alert is sent. The peer's `recv?` will throw a
truncation error instead of returning `none` cleanly. Prefer `tlsShutdown` unless
you deliberately want a hard TCP-level close (e.g. after an error path where the
TLS session is already in an inconsistent state).
-/
@[inline]
def shutdown (s : Connection role) : Async Unit :=
  Async.ofPromise <| s.native.shutdown

/--
Gets the remote address of the socket.
-/
@[inline]
def getPeerName (s : Connection role) : IO SocketAddress :=
  s.native.getPeerName

/--
Gets the local address of the socket.
-/
@[inline]
def getSockName (s : Connection role) : IO SocketAddress :=
  s.native.getSockName

/--
Returns the raw X.509 verification result code for this TLS session.
The value `0` means success (`X509_V_OK`). Use `verifyResultString` for a human-readable
description. These codes are OpenSSL-internal values defined in `<openssl/x509_vfy.h>`.
-/
@[inline]
def verifyResult (s : Connection role) : IO UInt64 :=
  s.ssl.verifyResult

/--
Returns the human-readable X.509 verification result string for this TLS session,
equivalent to `X509_verify_cert_error_string` in OpenSSL (e.g. `"ok"` or `"certificate has expired"`).
-/
@[inline]
def verifyResultString (s : Connection role) : IO String :=
  s.ssl.verifyResultString

/--
Returns the negotiated TLS protocol version string, e.g. `"TLSv1.3"` or `"TLSv1.2"`.
Returns `"unknown"` if called before the handshake completes.
-/
@[inline]
def negotiatedVersion (s : Connection role) : IO String :=
  s.ssl.negotiatedVersion

/--
Disables the Nagle algorithm for the socket.
-/
@[inline]
def noDelay (s : Connection role) : IO Unit :=
  s.native.noDelay

/--
Enables TCP keep-alive with a specified delay for the socket.
`delay` must be at least 1 second.
-/
@[inline]
def keepAlive (s : Connection role) (enable : Bool) (delay : Std.Time.Second.Offset)
    (_ : delay.val ≥ 1 := by decide) : IO Unit :=
  s.native.keepAlive enable.toInt8 delay.val.toNat.toUInt32

end Connection

-- ## Client (outgoing connection setup)

namespace Client

/--
Creates a new outgoing TLS client connection using the given client context.
-/
@[inline]
def mk (ctx : Context.Client) : IO Client := do
  let native ← Socket.new
  let ssl ← Session.Client.mk ctx
  let broken ← IO.mkRef false
  return ⟨native, ssl.toSession, broken⟩

/--
Binds the client socket to the specified address.
-/
@[inline]
def bind (s : Client) (addr : SocketAddress) : IO Unit :=
  s.native.bind addr

/--
Sets the server name for the TLS connection.

**Must be called before `connect`** to take effect. Calling it after `connect`
is a no-op with respect to both the SNI extension and hostname verification —
the handshake will have already completed without them.

This sets both the SNI extension in the ClientHello and enables post-handshake
hostname verification against the certificate CN/SAN. Without this call,
OpenSSL will verify the certificate chain but will not check that the
certificate belongs to the host you connected to.
-/
@[inline]
def setServerName (s : Client) (host : String) : IO Unit :=
  s.ssl.setServerName host

/--
Performs the TLS handshake on an established TCP connection.

If `timeout` is provided, each round-trip of the handshake must complete within
that duration or the function throws `"TLS operation timed out"`. Without a
timeout, a stalled or malicious peer can cause this function to block indefinitely.
-/
def handshake (s : Client) (chunkSize : UInt64 := ioChunkSize)
    (timeout : Option Std.Time.Millisecond.Offset := none) : Async Unit := do
  let deadline ← timeout.mapM Sleep.mk
  runHandshake (Connection.native s) (Connection.ssl s) chunkSize deadline

/--
Connects the client socket to the given address and performs the TLS handshake.
Call `setServerName` before this function if SNI is required.

If `timeout` is provided, each TCP round-trip of the TLS handshake must complete
within that duration or the function throws `"TLS operation timed out"`. Note: the
initial TCP connect itself is not covered by this timeout.
-/
def connect (s : Client) (addr : SocketAddress) (chunkSize : UInt64 := ioChunkSize)
    (timeout : Option Std.Time.Millisecond.Offset := none) : Async Unit := do
  Async.ofPromise <| (Connection.native s).connect addr
  s.handshake chunkSize timeout

end Client

end Std.Async.TCP.SSL

end
