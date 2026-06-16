/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module
prelude
public import Std.Async.TCP.SSL.Basic

/-!
TLS server socket operations: creating and configuring a `Server`, binding/listening, and accepting
incoming connections (`accept` / `acceptSelector`) with the TLS handshake driven to completion.
-/

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std Net Time

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

end Std.Async.TCP.SSL

end
