/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Internal.SSL.Context

public section

namespace Std.Internal.SSL

/--
Represents an OpenSSL SSL session.
Use `Session.Server.mk` / `Session.Client.mk` to create role-specific sessions.
-/
opaque Session : Type

/--
Server-side TLS session. Wraps `Session` to prevent mixing server and client roles at the type level.
-/
structure Session.Server where
  private ofSession ::
    toSession : Session

/--
Client-side TLS session. Wraps `Session` to prevent mixing server and client roles at the type level.
-/
structure Session.Client where
  private ofSession ::
    toSession : Session

/--
Indicates what kind of socket I/O OpenSSL needs before the current operation can proceed.
-/
inductive IOWant where

  /--
  OpenSSL needs more encrypted bytes from the socket (`SSL_ERROR_WANT_READ`).
  -/
  | read

  /--
  OpenSSL needs to flush encrypted bytes to the socket (`SSL_ERROR_WANT_WRITE`).
  -/
  | write

/--
Result of a `Session.read?` call.
-/
inductive ReadResult where

  /--
  Plaintext data was successfully decrypted.
  -/
  | data (bytes : ByteArray)

  /--
  OpenSSL needs socket I/O before it can produce plaintext.
  -/
  | wantIO (want : IOWant)

  /--
  The peer closed the TLS session cleanly (`SSL_ERROR_ZERO_RETURN`).
  -/
  | closed

namespace Session

namespace Server

/--
Creates a new server-side SSL session from the given context.
-/
@[extern "lean_uv_ssl_mk_server"]
private opaque mkImpl (ctx : @& Context.Server) : IO Session

/-- Creates a new server-side SSL session from the given context. -/
def mk (ctx : @& Context.Server) : IO Session.Server :=
  return ⟨← mkImpl ctx⟩

end Server

namespace Client

/--
Creates a new client-side SSL session from the given context.
-/
@[extern "lean_uv_ssl_mk_client"]
private opaque mkImpl (ctx : @& Context.Client) : IO Session

/-- Creates a new client-side SSL session from the given context. -/
def mk (ctx : @& Context.Client) : IO Session.Client :=
  return ⟨← mkImpl ctx⟩

end Client

/--
Sets the SNI host name for client-side TLS handshakes.
-/
@[extern "lean_uv_ssl_set_server_name"]
opaque setServerName (ssl : @& Session) (host : @& String) : IO Unit

/--
Gets the X.509 verify result code after handshake.
-/
@[extern "lean_uv_ssl_verify_result"]
opaque verifyResult (ssl : @& Session) : IO UInt64

/--
Gets the human-readable X.509 verify result string after handshake.
Equivalent to `X509_verify_cert_error_string` in OpenSSL.
-/
@[extern "lean_uv_ssl_verify_result_string"]
opaque verifyResultString (ssl : @& Session) : IO String

/--
Runs one handshake step.
Returns `none` when the handshake is complete, or `some w` when OpenSSL needs socket I/O of
kind `w` before the handshake can proceed.
-/
@[extern "lean_uv_ssl_handshake"]
opaque handshake (ssl : @& Session) : IO (Option IOWant)

/--
Attempts to write plaintext application data into SSL.
Returns `none` when the data was accepted and encrypted output is ready to drain.
Returns `some w` when OpenSSL needs socket I/O of kind `w` before the write can
complete; in that case the data has been queued internally and **must not** be
submitted again. Call with an empty `ByteArray` to flush the internal queue after
performing the required I/O.
-/
@[extern "lean_uv_ssl_write"]
opaque write (ssl : @& Session) (data : @& ByteArray) : IO (Option IOWant)

/--
Attempts to read decrypted plaintext data.
-/
@[extern "lean_uv_ssl_read"]
opaque read? (ssl : @& Session) (maxBytes : UInt64) : IO ReadResult

/--
Feeds encrypted TLS bytes into the SSL input BIO.
-/
@[extern "lean_uv_ssl_feed_encrypted"]
opaque feedEncrypted (ssl : @& Session) (data : @& ByteArray) : IO UInt64

/--
Drains encrypted TLS bytes from the SSL output BIO.
-/
@[extern "lean_uv_ssl_drain_encrypted"]
opaque drainEncrypted (ssl : @& Session) : IO ByteArray

/--
Returns the amount of encrypted TLS bytes currently pending in the output BIO.
-/
@[extern "lean_uv_ssl_pending_encrypted"]
opaque pendingEncrypted (ssl : @& Session) : IO UInt64

/--
Returns the amount of decrypted plaintext bytes currently buffered inside the SSL object.
-/
@[extern "lean_uv_ssl_pending_plaintext"]
opaque pendingPlaintext (ssl : @& Session) : IO UInt64

/--
Sends a TLS `close_notify` alert via `SSL_shutdown`.
Returns `none` when the bidirectional shutdown is complete.
Returns `some .read` when our alert has been sent and we are waiting for the
peer's `close_notify` — the caller should drain the output BIO, wait for more
encrypted input, then call `closeNotify` again.
Returns `some .write` when OpenSSL still has encrypted output to drain before
it can finish the shutdown.
-/
@[extern "lean_uv_ssl_close_notify"]
opaque closeNotify (ssl : @& Session) : IO (Option IOWant)

namespace Server

/--
Runs one handshake step on a server session. See `Session.handshake`.
-/
@[inline]
def handshake (s : Session.Server) := Session.handshake s.toSession

/--
Writes plaintext into a server session. See `Session.write`.
-/
@[inline]
def write (s : Session.Server) (data : @& ByteArray) := Session.write s.toSession data

/--
Reads decrypted plaintext from a server session. See `Session.read?`.
-/
@[inline]
def read? (s : Session.Server) (maxBytes : UInt64) := Session.read? s.toSession maxBytes

/--
Feeds encrypted bytes into a server session's input BIO. See `Session.feedEncrypted`.
-/
@[inline]
def feedEncrypted (s : Session.Server) (data : @& ByteArray) := Session.feedEncrypted s.toSession data

/--
Drains encrypted bytes from a server session's output BIO. See `Session.drainEncrypted`.
-/
@[inline]
def drainEncrypted (s : Session.Server) := Session.drainEncrypted s.toSession

/--
Returns encrypted bytes pending in a server session's output BIO. See `Session.pendingEncrypted`.
-/
@[inline]
def pendingEncrypted (s : Session.Server) := Session.pendingEncrypted s.toSession

/--
Returns plaintext bytes buffered in a server session. See `Session.pendingPlaintext`.
-/
@[inline]
def pendingPlaintext (s : Session.Server) := Session.pendingPlaintext s.toSession

/--
Returns the X.509 verification result code for a server session. See `Session.verifyResult`.
-/
@[inline]
def verifyResult (s : Session.Server) := Session.verifyResult s.toSession

/--
Returns the X.509 verification result string for a server session. See `Session.verifyResultString`.
-/
@[inline]
def verifyResultString (s : Session.Server) := Session.verifyResultString s.toSession

/-- Sends a TLS `close_notify` alert on a server session. See `Session.closeNotify`. -/
@[inline]
def closeNotify (s : Session.Server) := Session.closeNotify s.toSession

end Server

namespace Client

/--
Sets the SNI host name on a client session. See `Session.setServerName`.
-/
@[inline]
def setServerName (s : Session.Client) (host : @& String) := Session.setServerName s.toSession host

/--
Runs one handshake step on a client session. See `Session.handshake`.
-/
@[inline]
def handshake (s : Session.Client) := Session.handshake s.toSession

/--
Writes plaintext into a client session. See `Session.write`.
-/
@[inline]
def write (s : Session.Client) (data : @& ByteArray) := Session.write s.toSession data

/--
Reads decrypted plaintext from a client session. See `Session.read?`.
-/
@[inline]
def read? (s : Session.Client) (maxBytes : UInt64) := Session.read? s.toSession maxBytes

/--
Feeds encrypted bytes into a client session's input BIO. See `Session.feedEncrypted`.
-/
@[inline]
def feedEncrypted (s : Session.Client) (data : @& ByteArray) := Session.feedEncrypted s.toSession data

/--
Drains encrypted bytes from a client session's output BIO. See `Session.drainEncrypted`.
-/
@[inline]
def drainEncrypted (s : Session.Client) := Session.drainEncrypted s.toSession

/--
Returns encrypted bytes pending in a client session's output BIO. See `Session.pendingEncrypted`.
-/
@[inline]
def pendingEncrypted (s : Session.Client) := Session.pendingEncrypted s.toSession

/--
Returns plaintext bytes buffered in a client session. See `Session.pendingPlaintext`.
-/
@[inline]
def pendingPlaintext (s : Session.Client) := Session.pendingPlaintext s.toSession

/--
Returns the X.509 verification result code for a client session. See `Session.verifyResult`.
-/
@[inline]
def verifyResult (s : Session.Client) := Session.verifyResult s.toSession

/--
Returns the X.509 verification result string for a client session. See `Session.verifyResultString`.
-/
@[inline]
def verifyResultString (s : Session.Client) := Session.verifyResultString s.toSession

/-- Sends a TLS `close_notify` alert on a client session. See `Session.closeNotify`. -/
@[inline]
def closeNotify (s : Session.Client) := Session.closeNotify s.toSession

end Client
end Session
end Std.Internal.SSL
