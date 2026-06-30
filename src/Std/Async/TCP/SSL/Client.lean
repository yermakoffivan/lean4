/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module
prelude
public import Std.Async.TCP.SSL.Basic

/-!
TLS client connection setup: creating a `Client`, configuring SNI/hostname verification, and
establishing the connection (`connect` / `handshake`).
-/

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std Net Time
open Internal

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
  runHandshake s.native s.ssl chunkSize deadline

/--
Connects the client socket to the given address and performs the TLS handshake.
Call `setServerName` before this function if SNI is required.

If `timeout` is provided, each TCP round-trip of the TLS handshake must complete
within that duration or the function throws `"TLS operation timed out"`. Note: the
initial TCP connect itself is not covered by this timeout.
-/
def connect (s : Client) (addr : SocketAddress) (chunkSize : UInt64 := ioChunkSize)
    (timeout : Option Std.Time.Millisecond.Offset := none) : Async Unit := do
  Async.ofPromise <| s.native.connect addr
  s.handshake chunkSize timeout

end Client

end Std.Async.TCP.SSL

end
