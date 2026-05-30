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
Server-side TLS session.
-/
def Session.Server := Session

/--
Client-side TLS session.
-/
def Session.Client := Session

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
opaque mk (ctx : @& Context.Server) : IO Session

end Server

namespace Client

/--
Creates a new client-side SSL session from the given context.
-/
@[extern "lean_uv_ssl_mk_client"]
opaque mk (ctx : @& Context.Client) : IO Session

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
Returns `none` when the data was accepted, or `some w` when OpenSSL needs socket I/O of kind
`w` before the write can complete (the data is queued internally and retried after the next read).
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

end Session

end Std.Internal.SSL
