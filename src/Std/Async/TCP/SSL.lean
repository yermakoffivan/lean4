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

public section

namespace Std.Async.TCP.SSL

open Std.Internal.SSL
open Std.Internal.UV.TCP
open Std.Net

/--
Default chunk size used by TLS I/O loops.
-/
def ioChunkSize : UInt64 := 16 * 1024

/--
Feeds an encrypted chunk into the SSL input BIO.
Raises an error if OpenSSL consumed fewer bytes than supplied.
-/
@[inline]
private def feedEncryptedChunk (ssl : Session) (encrypted : ByteArray) : IO Unit := do
  if encrypted.size == 0 then return ()
  let consumed ← ssl.feedEncrypted encrypted
  if consumed.toNat != encrypted.size then
    throw <| IO.userError s!"TLS input short write: consumed {consumed} / {encrypted.size} bytes"

/--
Drains all pending encrypted bytes from the SSL output BIO and sends them over TCP.
-/
private def flushEncrypted (native : Socket) (ssl : Session) : Async Unit := do
  let out ← ssl.drainEncrypted
  if out.size > 0 then
    Async.ofPromise <| native.send #[out]

/--
Runs the TLS handshake loop to completion, interleaving SSL state machine steps
with TCP I/O.
-/
private partial def doHandshake (native : Socket) (ssl : Session) (chunkSize : UInt64) : Async Unit := do
  let want ← ssl.handshake
  flushEncrypted native ssl
  match want with
  | none =>
    return ()
  | some .write =>
    doHandshake native ssl chunkSize
  | some .read =>
    let encrypted? ← Async.ofPromise <| native.recv? chunkSize
    match encrypted? with
    | none =>
      throw <| IO.userError "connection closed during TLS handshake"
    | some encrypted =>
      feedEncryptedChunk ssl encrypted
      doHandshake native ssl chunkSize

-- ## Types

/--
Represents a TLS-enabled TCP server socket. Carries its own server context so
that each accepted connection gets a session configured from the same context.
-/
structure Server where
  private ofNative ::
    native : Socket
    serverCtx : Context.Server

/--
Represents a TLS-enabled TCP connection.
Use `Client` for outgoing connections and `ServerConn` for server-accepted connections.
-/
structure Connection where
  private ofNative ::
    native : Socket
    ssl : Session

/--
An outgoing TLS client connection.
-/
abbrev Client := Connection

/--
An incoming TLS connection accepted by a `Server`.
-/
abbrev ServerConn := Connection

namespace Server

/--
Creates a new TLS-enabled TCP server socket using the given context.
-/
def mk (serverCtx : Context.Server) : IO Server := do
  let native ← Socket.new
  return Server.ofNative native serverCtx

/--
Configures the server context with a PEM certificate and private key.
-/
def configureServer (s : Server) (certFile keyFile : String) : IO Unit :=
  s.serverCtx.configure certFile keyFile

/--
Binds the server socket to the specified address.
-/
def bind (s : Server) (addr : SocketAddress) : IO Unit :=
  s.native.bind addr

/--
Listens for incoming connections with the given backlog.
-/
def listen (s : Server) (backlog : UInt32) : IO Unit :=
  s.native.listen backlog

private def mkServerConn (native : Socket) (ctx : Context.Server) : IO Connection := do
  let ssl ← Session.Server.mk ctx
  return ⟨native, ssl⟩

/--
Accepts an incoming TLS connection and performs the TLS handshake.
-/
def accept (s : Server) (chunkSize : UInt64 := ioChunkSize) : Async ServerConn := do
  let native ← Async.ofPromise <| s.native.accept
  let conn ← mkServerConn native s.serverCtx
  doHandshake conn.native conn.ssl chunkSize
  return conn

/--
Creates a `Selector` that resolves once `s` has a connection available and the TLS handshake
has completed.
-/
def acceptSelector (s : Server) : Selector ServerConn :=
  {
    tryFn := do
      let res ← s.native.tryAccept
      match ← IO.ofExcept res with
      | none => return none
      | some native =>
        let conn ← mkServerConn native s.serverCtx
        doHandshake conn.native conn.ssl ioChunkSize
        return some conn

    registerFn waiter := do
      let connTask ← s.accept.asTask
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
def getSockName (s : Server) : IO SocketAddress :=
  s.native.getSockName

/--
Disables the Nagle algorithm for all client sockets accepted by this server socket.
-/
def noDelay (s : Server) : IO Unit :=
  s.native.noDelay

/--
Enables TCP keep-alive for all client sockets accepted by this server socket.
-/
def keepAlive (s : Server) (enable : Bool) (delay : Std.Time.Second.Offset) (_ : delay.val ≥ 1 := by decide) : IO Unit :=
  s.native.keepAlive enable.toInt8 delay.val.toNat.toUInt32

end Server

namespace Connection

/--
Attempts to write plaintext data into TLS. Returns true when accepted.
Any encrypted TLS output generated is flushed to the socket.
-/
def write (s : Connection) (data : ByteArray) : Async Bool := do
  let want ← s.ssl.write data
  flushEncrypted s.native s.ssl
  return want.isNone

/--
Sends data through a TLS-enabled socket, blocking until accepted.
When OpenSSL reports the write as pending additional I/O (e.g. during a
renegotiation or before the handshake Finished round-trip completes), this
function performs the required socket I/O and retries until the data is
accepted rather than throwing.
-/
partial def send (s : Connection) (data : ByteArray) (chunkSize : UInt64 := ioChunkSize) : Async Unit := do
  match ← s.ssl.write data with
  | none =>
    flushEncrypted s.native s.ssl
  | some .write =>
    flushEncrypted s.native s.ssl
    send s data chunkSize
  | some .read =>
    flushEncrypted s.native s.ssl
    let encrypted? ← Async.ofPromise <| s.native.recv? chunkSize
    match encrypted? with
    | none => throw <| IO.userError "connection closed while flushing TLS write"
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      send s data chunkSize

/--
Sends multiple data buffers through the TLS-enabled socket.
-/
def sendAll (s : Connection) (data : Array ByteArray) : Async Unit :=
  data.forM (s.send ·)

/--
Receives decrypted plaintext data from TLS.
If no plaintext is immediately available, this function performs the required socket I/O
(flush or receive) and retries until data arrives or the connection is closed.
-/
partial def recv? (s : Connection) (size : UInt64) (chunkSize : UInt64 := ioChunkSize) : Async (Option ByteArray) := do
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
    | none => return none
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      recv? s size chunkSize

/--
Tries to receive decrypted plaintext data without blocking.
Returns `some (some data)` if plaintext is available, `some none` if the peer closed,
or `none` if no data is ready yet.
-/
partial def tryRecv (s : Connection) (size : UInt64) (chunkSize : UInt64 := ioChunkSize) : Async (Option (Option ByteArray)) := do
  let pending ← s.ssl.pendingPlaintext

  if pending > 0 then
    return some (← s.recv? size)
  else
    let readableWaiter ← s.native.waitReadable
    flushEncrypted s.native s.ssl
    let pendingAfterFlush ← s.ssl.pendingPlaintext
    if pendingAfterFlush > 0 then
      s.native.cancelRecv
      return some (← s.recv? size)
    else if ← readableWaiter.isResolved then
      let encrypted? ← Async.ofPromise <| s.native.recv? ioChunkSize
      match encrypted? with
      | none => return none
      | some encrypted =>
        feedEncryptedChunk s.ssl encrypted
        tryRecv s size chunkSize
    else
      s.native.cancelRecv
      return none

/--
Feeds encrypted socket data into SSL until plaintext is pending.
Resolves the returned promise once plaintext is available.
-/
partial def waitReadable (s : Connection) : Async Unit := do
  flushEncrypted s.native s.ssl

  let pending ← s.ssl.pendingPlaintext
  if pending > 0 then
    return ()

  match ← s.ssl.read? 0 with
  | .data _ =>
    flushEncrypted s.native s.ssl
    return ()
  | .closed =>
    return ()
  | .wantIO _ =>
    flushEncrypted s.native s.ssl
    let encrypted? ← Async.ofPromise <| s.native.recv? ioChunkSize
    match encrypted? with
    | none => return ()
    | some encrypted =>
      feedEncryptedChunk s.ssl encrypted
      waitReadable s

/--
Creates a `Selector` that resolves once `s` has plaintext data available.
-/
def recvSelector (s : Connection) (size : UInt64) : Selector (Option ByteArray) :=
  {
    tryFn := s.tryRecv size

    registerFn waiter := do
      let readableWaiter ← s.waitReadable.asTask
      discard <| IO.mapTask (t := readableWaiter) fun res => do
        match res with
        | .error _ => return ()
        | .ok _ =>
          let lose := return ()
          let win promise := do
            try
              -- We know that this read should not block.
              let result ← (s.recv? size).block
              promise.resolve (.ok result)
            catch e =>
              promise.resolve (.error e)
          waiter.race lose win

    unregisterFn := s.native.cancelRecv
  }

/--
Shuts down the write side of the socket.
Note: this performs a TCP-level shutdown only; no TLS `close_notify` alert is sent to the peer.
-/
def shutdown (s : Connection) : Async Unit :=
  Async.ofPromise <| s.native.shutdown

/--
Gets the remote address of the socket.
-/
def getPeerName (s : Connection) : IO SocketAddress :=
  s.native.getPeerName

/--
Gets the local address of the socket.
-/
def getSockName (s : Connection) : IO SocketAddress :=
  s.native.getSockName

/--
Returns the X.509 verification result code for this TLS session.
-/
def verifyResult (s : Connection) : IO UInt64 :=
  s.ssl.verifyResult

/--
Returns the human-readable X.509 verification result string for this TLS session,
equivalent to `X509_verify_cert_error_string` in OpenSSL (e.g. `"ok"` or `"certificate has expired"`).
-/
def verifyResultString (s : Connection) : IO String :=
  s.ssl.verifyResultString

/--
Disables the Nagle algorithm for the socket.
-/
def noDelay (s : Connection) : IO Unit :=
  s.native.noDelay

/--
Enables TCP keep-alive with a specified delay for the socket.
-/
def keepAlive (s : Connection) (enable : Bool) (delay : Std.Time.Second.Offset) (_ : delay.val ≥ 1 := by decide) : IO Unit :=
  s.native.keepAlive enable.toInt8 delay.val.toNat.toUInt32

end Connection

-- ## Client (outgoing connection setup)

namespace Client

/--
Creates a new outgoing TLS client connection using the given client context.
-/
def mk (ctx : Context.Client) : IO Client := do
  let native ← Socket.new
  let ssl ← Session.Client.mk ctx
  return ⟨native, ssl⟩

/--
Binds the client socket to the specified address.
-/
def bind (s : Client) (addr : SocketAddress) : IO Unit :=
  s.native.bind addr

/--
Sets SNI server name used during the TLS handshake.
-/
def setServerName (s : Client) (host : String) : IO Unit :=
  s.ssl.setServerName host

/--
Performs the TLS handshake on an established TCP connection.
-/
def handshake (s : Client) (chunkSize : UInt64 := ioChunkSize) : Async Unit :=
  doHandshake (Connection.native s) (Connection.ssl s) chunkSize

/--
Connects the client socket to the given address and performs the TLS handshake.
-/
def connect (s : Client) (addr : SocketAddress) (chunkSize : UInt64 := ioChunkSize) : Async Unit := do
  Async.ofPromise <| (Connection.native s).connect addr
  s.handshake chunkSize

end Std.Async.TCP.SSL.Client
