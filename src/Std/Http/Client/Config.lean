/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time
public import Std.Http.Protocol.H1

public section

/-!
# Config

This module exposes the `Config` structure describing timeouts, connection,
and header configurations for an HTTP client.
-/

namespace Std.Http.Client

set_option linter.all true

/--
Client connection configuration.
-/
structure Config where
  /--
  Maximum number of requests per connection (for keep-alive).
  -/
  maxRequestsPerConnection : Nat := 1000

  /--
  Maximum number of headers allowed per response.
  -/
  maxResponseHeaders : Nat := 200

  /--
  Maximum size of a single header name in bytes.
  -/
  maxHeaderNameSize : Nat := 256

  /--
  Maximum size of a single header value in bytes.
  -/
  maxHeaderValueSize : Nat := 16384

  /--
  Maximum time to wait for the next chunk of data on an open connection before
  declaring it stale. This is a per-read idle timeout, not a wall-clock limit
  on the total request duration; use `requestTimeout` to bound the full exchange.
  -/
  readTimeout : Time.Millisecond.Offset := 30000

  /--
  How long an idle connection may sit in the pool before it is closed.
  Only relevant when `enableKeepAlive` is `true`. This is distinct from
  `readTimeout`: `readTimeout` fires mid-read; `keepAliveTimeout` fires while
  the connection is parked waiting for the next request.
  -/
  keepAliveTimeout : { x : Time.Millisecond.Offset // 0 < x } := ⟨4000, by decide⟩

  /--
  Timeout for the request lifecycle (send + receive) per connection.
  DNS resolution and TCP connect are not covered by this timeout.
  -/
  requestTimeout : { x : Time.Millisecond.Offset // 0 < x } := ⟨120000, by decide⟩

  /--
  Whether to enable keep-alive connections.
  -/
  enableKeepAlive : Bool := true

  /--
  Maximum number of bytes to receive in a single read call.
  -/
  maxRecvChunkSize : Nat := 16384

  /--
  Default buffer size for request payloads.
  -/
  defaultRequestBufferSize : Nat := 16384

  /--
  The user-agent string to send by default.
  -/
  userAgent : Option Header.Value := some (.mk "lean-http/1.1")

  /--
  Maximum number of redirects to follow automatically.
  Set to `0` to disable automatic redirect following.
  -/
  maxRedirects : Nat := 10

  /--
  When `true`, automatic redirect following is restricted to requests whose
  original method is safe (RFC 9110 §9.2.1: GET, HEAD, OPTIONS, TRACE).
  Redirects for unsafe methods (POST, PUT, DELETE, PATCH, …) are not followed
  automatically — the response is returned as-is for the caller to handle.

  Defaults to `false` so that the standard 301/302 POST→GET downgrade and
  307/308 method-preserving redirects work out of the box.
  -/
  onlySafeRedirects : Bool := false

  /--
  Optional HTTP proxy address as `(host, port)`.
  When set, all TCP connections are routed through this proxy and
  request URIs are rewritten to absolute-form (`GET http://host/path HTTP/1.1`).
  -/
  proxy : Option (String × UInt16) := none

  /--
  Maximum number of bytes allowed in a single response body.
  When `some n`, reading more than `n` bytes from the body resolves the current
  request with an error and closes the connection.
  `none` (default) imposes no limit.
  -/
  maxResponseBodySize : Option Nat := none

  /--
  Maximum number of bytes drained from an intermediate redirect response body
  before the redirected request is sent.
  -/
  redirectBodyDrainLimit : Nat := 1024 * 1024

namespace Config

/--
Converts to HTTP/1.1 protocol configuration.
-/
def toH1Config (config : Config) : Std.Http.Protocol.H1.Config where
  maxMessages := config.maxRequestsPerConnection
  maxHeaders := config.maxResponseHeaders
  maxHeaderNameLength := config.maxHeaderNameSize
  maxHeaderValueLength := config.maxHeaderValueSize
  enableKeepAlive := config.enableKeepAlive
  agentName := config.userAgent


end Config

end Std.Http.Client
