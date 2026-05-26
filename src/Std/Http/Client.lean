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

/-- A top-level HTTP client backed by a connection pool. -/
abbrev Client := Client.Agent.Pool

/--
Builder for `Client`. Chain configuration setters then call `.build`.
-/
structure Client.Builder where
  /-- Configuration applied to all sessions created by this client. -/
  config : Config := {}
  /-- Maximum number of pooled connections per host. -/
  maxPerHost : Nat := 4

namespace Client.Builder

/--
Routes all connections through a proxy.
Only HTTP proxies are supported.
-/
def proxy (b : Client.Builder) (host : String) (port : UInt16) : Client.Builder :=
  { b with config := { b.config with proxy := some (host, port) } }

/--
Routes all connections through a proxy specified as a URL string.
Returns `none` if the URL is invalid or has no authority component.
-/
def proxy? (b : Client.Builder) (url : String) : Option Client.Builder := do
  let uri ← URI.parse? url
  let auth ← uri.authority
  let host := toString auth.host
  let port := uri.port
  pure { b with config := { b.config with proxy := some (host, port) } }

/--
Sets the request timeout (send + receive).
DNS resolution and TCP connect are not covered by this timeout.
-/
def timeout (b : Client.Builder) (ms : Time.Millisecond.Offset) : Client.Builder :=
  if h : 0 < ms then
    { b with config := { b.config with requestTimeout := ⟨ms, h⟩ } }
  else b

/-- Sets the `User-Agent` header sent with every request. -/
def userAgent (b : Client.Builder) (ua : String) : Client.Builder :=
  { b with config := { b.config with userAgent := Header.Value.ofString? ua } }

/-- Sets the maximum number of pooled connections per host. -/
def maxConnectionsPerHost (b : Client.Builder) (n : Nat) : Client.Builder :=
  { b with maxPerHost := n }

/-- Sets the maximum number of redirects to follow automatically. -/
def maxRedirects (b : Client.Builder) (n : Nat) : Client.Builder :=
  { b with config := { b.config with maxRedirects := n } }

/-- Builds the `Client`. -/
def build (b : Client.Builder) : Async Client :=
  Client.Agent.Pool.new b.config b.maxPerHost

end Client.Builder

/-- Returns a `Client.Builder` with default configuration. -/
def Client.new : Client.Builder := {}

/--
A request builder bound to a `Client`. Build up headers and query parameters,
then dispatch with one of the `send*` methods.
-/
structure Client.RequestBuilder where
  /-- The client that will dispatch this request. -/
  client : Client
  /-- URI scheme (`"http"` or `"https"`). -/
  scheme : URI.Scheme
  /-- Target hostname. -/
  host : URI.Host
  /-- Target port. -/
  port : UInt16
  /-- The underlying request builder. -/
  builder : Request.Builder

namespace Client.RequestBuilder

private def withHostHeader (rb : Client.RequestBuilder) : Client.RequestBuilder :=
  { rb with builder := rb.builder.hostDefault rb.scheme rb.host rb.port }

/-- Adds a typed header to the request. -/
def header (rb : Client.RequestBuilder) (key : Header.Name) (value : Header.Value) : Client.RequestBuilder :=
  { rb with builder := rb.builder.header key value }

/-- Adds a header to the request. Panics if the name or value is invalid. -/
def header! (rb : Client.RequestBuilder) (key : String) (value : String) : Client.RequestBuilder :=
  { rb with builder := rb.builder.header! key value }

/-- Adds a header to the request. Returns `none` if the name or value is invalid. -/
def header? (rb : Client.RequestBuilder) (key : String) (value : String) : Option Client.RequestBuilder := do
  let builder ← rb.builder.header? key value
  pure { rb with builder }

/-- Sets the request URI from a string. Panics if invalid. -/
def uri! (rb : Client.RequestBuilder) (u : String) : Client.RequestBuilder :=
  { rb with builder := rb.builder.uri! u }

/-- Adds a query parameter to the request URI. -/
def queryParam (rb : Client.RequestBuilder) (key : String) (value : String) : Client.RequestBuilder :=
  { rb with builder :=
    { rb.builder with line := { rb.builder.line with uri := rb.builder.line.uri.setQueryParam key value } } }

/-- Sends the request with an empty body. -/
def send (rb : Client.RequestBuilder) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader
  rb.client.send rb.scheme rb.host rb.port (← rb.builder.empty)

/-- Sends the request with a plain-text body. Sets `Content-Type: text/plain; charset=utf-8`. -/
def text (rb : Client.RequestBuilder) (content : String) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader
  rb.client.send rb.scheme rb.host rb.port (← rb.builder.text content)

/-- Sends the request with a JSON body. Sets `Content-Type: application/json`. -/
def json (rb : Client.RequestBuilder) (content : String) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader
  rb.client.send rb.scheme rb.host rb.port (← rb.builder.json content)

/-- Sends the request with a raw binary body. Sets `Content-Type: application/octet-stream`. -/
def bytes (rb : Client.RequestBuilder) (content : ByteArray) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader
  rb.client.send rb.scheme rb.host rb.port (← rb.builder.bytes content)

/-- Sends the request with a streaming body produced by `gen`. -/
def stream (rb : Client.RequestBuilder) (gen : Body.Stream → Async Unit) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader
  rb.client.send rb.scheme rb.host rb.port (← rb.builder.stream gen)

end Client.RequestBuilder

private def mkRequest
    (method : Request.Builder → Request.Builder)
    (client : Client) (url : URI) : Client.RequestBuilder :=
  let (scheme, host, port, target) := url.toOriginRequest
  { client, scheme, host, port, builder := method (Request.new |>.uri target) }

/-- Creates a GET request builder for `url`. -/
def Client.get (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .get) client url

/-- Creates a POST request builder for `url`. -/
def Client.post (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .post) client url

/-- Creates a PUT request builder for `url`. -/
def Client.put (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .put) client url

/-- Creates a DELETE request builder for `url`. -/
def Client.delete (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .delete) client url

/-- Creates a PATCH request builder for `url`. -/
def Client.patch (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .patch) client url

/-- Creates a HEAD request builder for `url`. -/
def Client.head (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .head) client url

/-- Creates an OPTIONS request builder for `url`. -/
def Client.options (client : Client) (url : URI) : Client.RequestBuilder :=
  mkRequest (·.method .options) client url

end Http
end Std
