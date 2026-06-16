/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Pool

public section

namespace Std.Http

set_option linter.all true

open Std Async TCP Protocol
open Time

/-!
# Client

A top-level HTTP client backed by a connection pool.
Use `Client.builder` to construct, then call `client.get (URI.parse! "https://...")`.

```lean
let client ← Client.builder
  |>.proxy "proxy.example.com" 8080
  |>.build

let res ← client.get (URI.parse! "https://api.example.com/data")
  |>.header! "Accept" "application/json"
  |>.send
```
-/

/--
A top-level HTTP client backed by a connection pool.
-/
abbrev Client := Client.Agent.Pool

/--
Builder for `Client`. Chain configuration setters then call `.build`.
-/
structure Client.Builder where

  /--
  Configuration applied to all sessions created by this client.
  -/
  config : Config := {}

  /--
  Maximum number of pooled connections per host.
  -/
  maxPerHost : Nat := 1

  /--
  Erased connector function. Set via `.connector`.
  -/
  connect : Client.ConnectFn := Client.ConnectFn.tcp

  /--
  Maximum number of retries on connection-level failures.
  Only idempotent methods are retried.
  -/
  maxRetries : Nat := 1

namespace Client.Builder

/--
Routes all connections through a proxy. Only HTTP proxies are supported.
-/
def proxy (b : Client.Builder) (host : String) (port : UInt16) : Client.Builder :=
  { b with config := { b.config with proxy := some (host, port) } }

/--
Routes all connections through a proxy specified as a URL string. Returns `none` if the URL is
invalid, has no authority component, or uses a scheme other than `http` (HTTPS proxies require
TLS tunnelling, which is not supported).
-/
def proxy? (b : Client.Builder) (url : String) : Option Client.Builder := do
  let uri ← URI.parse? url

  guard (uri.scheme.val == "http")

  let auth ← uri.authority
  let host := toString auth.host

  -- An omitted or empty port falls back to the scheme's default (80 for `http`); never `0`,
  -- which is not a connectable destination.
  let port := uri.port

  pure { b with config := { b.config with proxy := some (host, port) } }

/--
Sets the request timeout (send + receive).
DNS resolution and TCP connect are not covered by this timeout.
Returns `none` if `ms ≤ 0` so callers can detect an invalid value.
-/
def timeout? (b : Client.Builder) (ms : Time.Millisecond.Offset) : Option Client.Builder :=
  if h : 0 < ms then
    some { b with config := { b.config with requestTimeout := ⟨ms, h⟩ } }
  else
    none

/--
Sets the request timeout (send + receive).
DNS resolution and TCP connect are not covered by this timeout.
Values ≤ 0 are ignored and the builder is returned unchanged; use `timeout?` to detect an invalid value.
-/
def timeout (b : Client.Builder) (ms : Time.Millisecond.Offset) (h : 0 < ms := by decide) : Client.Builder :=
  { b with config := { b.config with requestTimeout := ⟨ms, h⟩ } }

/--
Sets the `User-Agent` header sent with every request.
-/
def userAgent (b : Client.Builder) (ua : String) : Client.Builder :=
  { b with config := { b.config with userAgent := Header.Value.ofString? ua } }

/--
Sets the maximum number of pooled connections per host.
-/
def maxConnectionsPerHost (b : Client.Builder) (n : Nat) : Client.Builder :=
  { b with maxPerHost := n }

/--
Sets the maximum number of redirects to follow automatically.
-/
def maxRedirects (b : Client.Builder) (n : Nat) : Client.Builder :=
  { b with config := { b.config with maxRedirects := n } }

/--
Sets a custom connector for opening transport sessions.
Pass any value whose type implements the `Connector` typeclass (e.g. a TLS connector or a mock).
-/
def connector [Client.Connector α] (b : Client.Builder) (c : α) : Client.Builder :=
  { b with connect := Client.ConnectFn.ofConnector c }

/--
Sets the maximum number of retries on connection-level failures.
Only idempotent methods (GET, HEAD, etc.) are retried regardless of this value.
-/
def maxConnectionRetries (b : Client.Builder) (n : Nat) : Client.Builder :=
  { b with maxRetries := n }

/--
Builds the `Client`.
-/
def build (b : Client.Builder) : Async Client :=
  Client.Agent.Pool.new b.config b.maxPerHost (connect := b.connect) (maxRetries := b.maxRetries)

end Builder

/--
Returns a `Builder` with default configuration.
-/
def builder : Builder := { config := {}, maxPerHost := 4, connect := ConnectFn.tcp, maxRetries := 1 }

/--
A request builder bound to a `Client`. Build up headers and query parameters,
then dispatch with one of the `send*` methods.
-/
structure RequestBuilder where

  /--
  The client that will dispatch this request.
  -/
  client : Client

  /--
  URI scheme (`"http"` or `"https"`).
  -/
  scheme : URI.Scheme

  /--
  Target hostname.
  -/
  host : URI.Host

  /--
  Target port.
  -/
  port : UInt16

  /--
  The underlying request builder.
  -/
  builder : Request.Builder

  /--
  A deferred construction error, set when the request could not be built (for example, the URL had
  no host). It is raised when the request is finally sent, mirroring `reqwest`/`fetch`: building the
  request never fails eagerly, the error surfaces at send time.
  -/
  error : Option String := none

namespace RequestBuilder

private def withHostHeader (rb : RequestBuilder) : RequestBuilder :=
  { rb with builder := rb.builder.hostDefault rb.scheme rb.host rb.port }

/--
Resolves the target origin, raising any deferred construction `error`. Every send variant calls this
first so that a request that could not be built fails when it is sent rather than when it is created.
-/
private def origin (rb : RequestBuilder) : Async URI.Origin := do
  if let some e := rb.error then
    throw (.userError e)
  pure (URI.Origin.mk rb.scheme rb.host rb.port)

/--
Adds a typed header to the request.
-/
def header (rb : RequestBuilder) (key : Header.Name) (value : Header.Value) : RequestBuilder :=
  { rb with builder := rb.builder.header key value }

/--
Adds a header to the request. Panics if the name or value is invalid.
-/
def header! (rb : RequestBuilder) (key : String) (value : String) : RequestBuilder :=
  { rb with builder := rb.builder.header! key value }

/--
Adds a header to the request. Returns `none` if the name or value is invalid.
-/
def header? (rb : RequestBuilder) (key : String) (value : String) : Option RequestBuilder := do
  let builder ← rb.builder.header? key value
  pure { rb with builder }

/--
Sets the request URI from a string. Panics if invalid.
-/
def uri! (rb : RequestBuilder) (u : String) : RequestBuilder :=
  { rb with builder := rb.builder.uri! u }

/--
Adds a query parameter to the request URI.
-/
def queryParam (rb : RequestBuilder) (key : String) (value : String) : RequestBuilder :=
  { rb with builder :=
    { rb.builder with line := { rb.builder.line with uri := rb.builder.line.uri.setQueryParam key value } } }

/--
Sends the request with an empty body.
-/
def send (rb : RequestBuilder) : Async (Response Body.Stream) := do
  let origin ← rb.origin
  let rb := rb.withHostHeader
  rb.client.send origin (← rb.builder.empty)

/--
Sends the request with a plain-text body. Sets `Content-Type: text/plain; charset=utf-8`.
-/
def text (rb : RequestBuilder) (content : String) : Async (Response Body.Stream) := do
  let origin ← rb.origin
  let rb := rb.withHostHeader
  rb.client.send origin (← rb.builder.text content)

/--
Sends the request with a JSON body. Sets `Content-Type: application/json`.
-/
def json (rb : RequestBuilder) (content : String) : Async (Response Body.Stream) := do
  let origin ← rb.origin
  let rb := rb.withHostHeader
  rb.client.send origin (← rb.builder.json content)

/--
Sends the request with a raw binary body. Sets `Content-Type: application/octet-stream`.
-/
def bytes (rb : RequestBuilder) (content : ByteArray) : Async (Response Body.Stream) := do
  let origin ← rb.origin
  let rb := rb.withHostHeader
  rb.client.send origin (← rb.builder.bytes content)

/--
Sends the request with a streaming body produced by `gen`.
-/
def stream (rb : RequestBuilder) (gen : Body.Stream → Async Unit) : Async (Response Body.Stream) := do
  let origin ← rb.origin
  let rb := rb.withHostHeader
  rb.client.send origin (← rb.builder.stream gen)

end RequestBuilder

private def mkRequest (method : Request.Builder → Request.Builder) (client : Client) (url : URI) : RequestBuilder :=
  match url.toOriginRequest? with
  | some (scheme, host, port, target) =>
    { client, scheme, host, port, builder := method (Request.new |>.uri target) }
  | none =>

    -- The URL names no host to connect to (RFC 3986 §3.2): defer the failure to send time.
    { client, scheme := default, host := default, port := 0,
      builder := method Request.new, error := some s!"invalid request URL (no host): {url}" }

/--
Creates a GET request builder for `url`.
-/
def get (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .get) client url

/--
Creates a POST request builder for `url`.
-/
def post (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .post) client url

/--
Creates a PUT request builder for `url`.
-/
def put (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .put) client url

/--
Creates a DELETE request builder for `url`.
-/
def delete (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .delete) client url

/--
Creates a PATCH request builder for `url`.
-/
def patch (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .patch) client url

/--
Creates a HEAD request builder for `url`.
-/
def head (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .head) client url

/--
Creates an OPTIONS request builder for `url`.
-/
def options (client : Client) (url : URI) : RequestBuilder :=
  mkRequest (·.method .options) client url

end Std.Http.Client
