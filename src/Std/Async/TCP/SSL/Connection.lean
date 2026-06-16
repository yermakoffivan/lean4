/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module
prelude
public import Std.Async.TCP.SSL.Basic

/-!
Operations on a TLS `Connection`: plaintext send/receive, the non-blocking `tryRecv`/`recvSelector`,
the TLS `close_notify` shutdown sequence, and the socket-level accessors shared by both client and
server connections.
-/

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std Net Time

namespace Connection

/--
Flushes any internally-queued plaintext writes by calling `ssl.write` with an empty buffer, which
does not queue additional data.
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
Sends data through a TLS-enabled socket until accepted. When OpenSSL reports the write as ending
additional I/O (e.g. during a renegotiation or before the handshake Finished round-trip completes),
this function performs the required socket I/O and retries until the data is accepted rather than throwing.

Throws if the connection is in a broken state from a previous failed operation; in that case the
`Connection` must be discarded.
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

end Std.Async.TCP.SSL

end
