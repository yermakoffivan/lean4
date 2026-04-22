/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Internal.Http.Client.Session
public import Std.Internal.Http.Data.Cookie
import Init.Data.Array

public section

namespace Std
namespace Http
namespace Client

set_option linter.all true

open Std Internal IO Async TCP Protocol
open Time

/-!
# Agent

This module defines `Client.Agent`, a transport-agnostic HTTP user-agent that wraps a `Session`
and adds automatic redirect following, cookie jar support, response interceptors, and configurable
retries.

`Agent` is parameterized by the transport type `α` and contains no TCP-specific code.
Use `Agent.ofTransport` to create an `Agent` from any connected transport. Pass a `connectTo`
factory to enable cross-host redirect following and automatic reconnection on error.

On each redirect the `Location` header is parsed as a URI. If the redirect targets a different
host or port the agent closes the current session and opens a new one using `connectTo` (when
available). A `Array URI` tracks every URI visited in the current redirect chain so that cycles
are detected and broken immediately.

When crossing to a different host the `Authorization` header is stripped from the redirected
request to prevent credential leakage.
-/

/--
An HTTP user-agent that manages a connection to a host. It follows redirects, maintains a cookie
jar for automatic cookie handling, applies response interceptors, and retries on connection errors.
-/
structure Agent (α : Type) where
  /--
  The underlying HTTP session over the transport.
  -/
  session : Session α

  /--
  URI scheme for this connection (e.g., `"http"` or `"https"`).
  Used when constructing absolute-form request URIs for proxy requests and some redirects.
  -/
  scheme : URI.Scheme

  /--
  The hostname this agent is currently connected to.
  -/
  host : URI.Host

  /--
  The port this agent is currently connected to.
  -/
  port : UInt16

  /--
  Cookie jar shared across all requests and redirects through this agent.
  -/
  cookieJar : Cookie.Jar

  /--
  Response interceptors applied (in order) after every response, including intermediate
  redirect responses.  Each interceptor receives the response and returns a (possibly
  modified) response.  Interceptors run before cookie processing and redirect evaluation
  so they can, e.g., unwrap envelopes or transparently decompress bodies.
  -/
  interceptors : Array (Response Body.Stream → Async (Response Body.Stream)) := #[]

  /--
  Optional factory for opening a new session to `(scheme, host, port)`. Used for:
  * Automatic retry after connection errors (`maxRetries`): reconnects to the same origin.
  * Cross-host redirects: connects to the new origin.
  The scheme is included so that http→https redirects open the correct pool entry.
  `none` for agents created via `Agent.ofTransport` without a factory; cross-host redirects
  are not followed and connection errors are not retried automatically for such agents.
  -/
  connectTo : Option (URI.Scheme → URI.Host → UInt16 → Async (Session α)) := none

  /--
  Called when a connection error is confirmed (i.e., `session.send` threw and all retries
  are committed to using a fresh session).  Receives the broken session together with the
  scheme, host, and port so the caller can:
  * For pool agents: evict the session from the pool so the next retry gets a fresh one.
  * For standalone agents: close the session's request channel so the background loop exits.
  The default closes the session channel; pool agents set this to an eviction function.
  -/
  onBrokenSession : Session α → URI.Scheme → URI.Host → UInt16 → Async Unit :=
    fun s _ _ _ => discard <| s.close

namespace Agent

/--
Creates an `Agent` from an already-connected transport `socket`.
Pass a `connectTo` factory to enable automatic reconnection on error and cross-host redirect
following; omit it (or pass `none`) to disable both.
-/
def ofTransport [Transport α] (socket : α) (scheme : URI.Scheme)
    (host : URI.Host) (port : UInt16)
    (connectTo : Option (URI.Scheme → URI.Host → UInt16 → Async (Session α)) := none)
    (config : Config := {}) : Async (Agent α) := do

  let session ← Session.new socket config
  let cookieJar ← Cookie.Jar.new
  pure { session, scheme, host, port, cookieJar, connectTo }

/--
Injects matching cookies from `cookieJar` into the request headers for `host`.
Does nothing if the jar contains no matching cookies.
-/
def injectCookies (cookieJar : Cookie.Jar) (host : URI.Host) (scheme : URI.Scheme)
    (request : Request Body.Any) : Async (Request Body.Any) := do

  -- Respect an explicit Cookie header set by the caller.
  if request.line.headers.contains .cookie then return request

  let path := RequestTarget.pathOrRoot request.line.uri

  match ← cookieJar.cookiesFor host path (secure := scheme.val == "https") with
  | none => return request
  | some cookieValue =>
    let newHeaders := request.line.headers.insert .cookie cookieValue
    return { request with line := { request.line with headers := newHeaders } }

/--
Reads all `Set-Cookie` headers from `responseHeaders` and stores the cookies in `cookieJar`.
-/
def processCookies (cookieJar : Cookie.Jar) (host : URI.Host)
    (responseHeaders : Headers) : IO Unit := do
  if let some values := responseHeaders.getAll? Header.Name.setCookie then
    for v in values do
      cookieJar.processSetCookie host v.value

/--
Applies all response interceptors to `response` in order, returning the final result.
-/
def applyInterceptors
    (interceptors : Array (Response Body.Stream → Async (Response Body.Stream)))
    (response : Response Body.Stream) : Async (Response Body.Stream) :=
  interceptors.foldlM (init := response) (fun r f => f r)

/--
Drains the response body up to `drainLimit` bytes so the underlying connection can be
reused after a redirect. Failures are swallowed after closing the body — the caller
has already committed to following the redirect by this point.
-/
private def drainRedirectBody (response : Response Body.Stream) (drainLimit : Nat) : Async Unit := do
  discard <| ContextAsync.run do
    try
      discard <| response.body.readAll (α := ByteArray) (maximumSize := some drainLimit.toUInt64)
    catch _ =>
      response.body.close

/--
Builds the redirected request from a `RedirectPlan`. For `.replay` body actions
the original body is reset in place; for `.empty` actions a fresh empty body is
attached. Does not drain the redirect response body — the caller must do that
once it has decided the redirect will actually be followed.
-/
private def followRedirect (plan : Std.Http.RedirectPlan)
    (request : Request Body.Any) : Async (Request Body.Any) := do
  let newBody : Body.Any ← match plan.bodyAction with
    | .empty =>
      pure (Body.Any.ofBody Body.Empty.mk)
    | .replay => do
      request.body.resetInPlace
      pure request.body
  return {
    line := { request.line with
      uri := plan.target
      method := plan.method
      headers := plan.headers }
    body := newBody
    extensions := request.extensions
  }

private partial def sendWithRedirects [Transport α]
    (agent : Agent α) (request : Request Body.Any)
    (remaining : Nat) (retriesLeft : Nat)
    (history : Array (URI.Host × UInt16 × String) := #[]) : Async (Response Body.Stream) := do

  -- Record the current URL in the history and detect redirect cycles.
  let currentKey := (agent.host, agent.port, toString request.line.uri)
  let history := history.push currentKey

  -- Rewrite to absolute-form when a proxy is configured.
  let request :=
    if agent.session.config.proxy.isSome then
      request.toAbsoluteForm agent.scheme agent.host agent.port
    else
      request

  let request ← injectCookies agent.cookieJar agent.host agent.scheme request

  let response ← try agent.session.send request
    catch err => do
      agent.onBrokenSession agent.session agent.scheme agent.host agent.port

      -- Refuse to retry when the body is non-replayable (e.g. `Body.Stream`):
      -- re-sending would silently ship a partial or empty payload, masking the
      -- connection failure. Idempotent methods with a replayable body are
      -- reset and retried via the `connectTo` factory.
      if retriesLeft > 0 && request.line.method.isIdempotent && request.body.isReplayable then
        if let some factory := agent.connectTo then
          let attempt := agent.session.config.maxRetries - retriesLeft
          let delay : Time.Millisecond.Offset := ⟨min (agent.session.config.retryDelay.val * (2 : Int) ^ attempt) 32000⟩
          sleep delay
          request.body.resetInPlace
          let newSession ← factory agent.scheme agent.host agent.port
          return ← sendWithRedirects { agent with session := newSession } request remaining (retriesLeft - 1) history

      throw err

  let response ← applyInterceptors agent.interceptors response
  processCookies agent.cookieJar agent.host response.line.headers

  -- Pure planner: decide whether the response is a follow-able redirect.
  -- Gates (policy, cycle detection, missing factory) run BEFORE the body
  -- drain so a rejected redirect still hands the caller a readable 3xx body.
  match Std.Http.decideRedirect remaining agent.host agent.port agent.scheme
      request.line request.body.isReplayable response.line.status response.line.headers with
  | .done =>
    if let some validate := agent.session.config.validateStatus then
      if !validate response.line.status then
        throw (.userError s!"unexpected HTTP status: {response.line.status.toCode}")
    return response

  | .follow plan =>
    -- Gate 1: caller-supplied redirect policy.
    if let some policy := agent.session.config.redirectPolicy then
      if !policy plan.host plan.port then return response

    -- Gate 2: cycle detection.
    let nextKey := (plan.host, plan.port, toString plan.target)
    if history.contains nextKey then return response

    -- A scheme change (http ↔ https) on the same host+port still requires a
    -- fresh transport because the TLS handshake differs: reusing the existing
    -- session would send the redirected request over the wrong wire protocol
    -- (e.g. an `https://` follow-up emitted in plaintext).
    let isCrossOrigin :=
      plan.host != agent.host || plan.port != agent.port || plan.scheme != agent.scheme

    -- Gate 3: cross-origin redirects need a `connectTo` factory.
    if isCrossOrigin then
      let some _ := agent.connectTo | return response

    -- All gates passed; safe to drain and follow.
    drainRedirectBody response agent.session.config.redirectBodyDrainLimit
    let newRequest ← followRedirect plan request

    if isCrossOrigin then
      let factory := agent.connectTo.get!
      let newSession ← factory plan.scheme plan.host plan.port
      sendWithRedirects
        { session := newSession
          scheme := plan.scheme
          host := plan.host
          port := plan.port
          cookieJar := agent.cookieJar
          interceptors := agent.interceptors
          connectTo := some factory
          onBrokenSession := agent.onBrokenSession }
        newRequest (remaining - 1) retriesLeft history
    else
      sendWithRedirects agent newRequest (remaining - 1) retriesLeft history

/--
Send a request, automatically following redirects up to `config.maxRedirects` hops and
retrying on connection errors up to `config.maxRetries` times.
For cross-host redirects the agent reconnects using its `connectTo` factory (if set).
Cookies are automatically injected from the jar and `Set-Cookie` responses are stored.
Response interceptors are applied after every response.
-/
def send {β : Type} [Coe β Body.Any] [Transport α] (agent : Agent α) (request : Request β) : Async (Response Body.Stream) :=
  sendWithRedirects
    agent
    { line := request.line, body := (request.body : Body.Any), extensions := request.extensions }
    agent.session.config.maxRedirects
    agent.session.config.maxRetries

end Agent

/-!
# Agent.RequestBuilder

A fluent builder that attaches an `Agent` to a `Request.Builder`, letting callers chain header
and query-parameter setters before dispatching with a typed `send*` terminal.

```lean
let response ←
  agent.get "/api/items"
  |>.header! "Accept" "application/json"
  |>.queryParam "page" "2"
  |>.send
```
-/

/--
A `Request.Builder` bound to a specific `Agent`.  Build up headers, query parameters, and body,
then call one of the `send*` methods to dispatch the request.
-/
structure Agent.RequestBuilder (α : Type) where
  /--
  The agent that will send this request.
  -/
  agent : Agent α

  /--
  The underlying request builder.
  -/
  builder : Request.Builder


namespace Agent.RequestBuilder

/--
Injects a `Host` header derived from the agent's `host` and `port` if no `Host` header
is already present.
-/
private def withHostHeader [Transport α] (rb : Agent.RequestBuilder α) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.hostDefault rb.agent.scheme rb.agent.host rb.agent.port }

/--
Prepares the builder by injecting the `Host` header, then calls `f` to build and send the
request. Cookie injection is handled by `Agent.injectCookies` inside `sendWithRedirects`.
-/
private def prepare [Transport α] (rb : Agent.RequestBuilder α)
    (f : Agent.RequestBuilder α → Async (Response Body.Stream)) : Async (Response Body.Stream) :=
  f rb.withHostHeader

/--
Adds a typed header to the request.
-/
def header [Transport α] (rb : Agent.RequestBuilder α) (key : Header.Name) (value : Header.Value) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.header key value }

/--
Adds a header to the request. Panics if the name or value is invalid.
-/
def header! [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.header! key value }

/--
Adds a header to the request. Returns `none` if the name or value is invalid.
-/
def header? [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Option (Agent.RequestBuilder α) := do
  let builder ← rb.builder.header? key value
  pure { rb with builder }

/--
Sets the request URI from a string. Panics if the string is not a valid request target.
-/
def uri! [Transport α] (rb : Agent.RequestBuilder α) (u : String) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.uri! u }

/--
Adds a query parameter to the request URI.
Works for both origin-form (e.g. set by `agent.get "/path"`) and absolute-form targets.
-/
def queryParam [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Agent.RequestBuilder α :=
  { rb with builder :=
    { rb.builder with line :=
      { rb.builder.line with uri := rb.builder.line.uri.setQueryParam key value } } }

/--
Sends the request with an empty body.
-/
def send [Transport α] (rb : Agent.RequestBuilder α) : Async (Response Body.Stream) :=
  rb.prepare fun rb => do rb.agent.send (← rb.builder.empty)

/--
Sends the request with a plain-text body.
Sets `Content-Type: text/plain; charset=utf-8`.
-/
def text [Transport α] (rb : Agent.RequestBuilder α) (content : String) : Async (Response Body.Stream) :=
  rb.prepare fun rb => do rb.agent.send (← rb.builder.text content)

/--
Sends the request with a JSON body.
Sets `Content-Type: application/json`.
-/
def json [Transport α] (rb : Agent.RequestBuilder α) (content : String) : Async (Response Body.Stream) :=
  rb.prepare fun rb => do rb.agent.send (← rb.builder.json content)

/--
Sends the request with a raw binary body.
Sets `Content-Type: application/octet-stream`.
-/
def bytes [Transport α] (rb : Agent.RequestBuilder α) (content : ByteArray) : Async (Response Body.Stream) :=
  rb.prepare fun rb => do rb.agent.send (← rb.builder.bytes content)

/--
Sends the request with a streaming body produced by `gen`.
-/
def sendStream [Transport α]
    (rb : Agent.RequestBuilder α)
    (gen : Body.Stream → Async Unit) : Async (Response Body.Stream) :=
  rb.prepare fun rb => do rb.agent.send (← rb.builder.stream gen)

end Agent.RequestBuilder

namespace Agent

/--
Creates a GET request builder for the given path or URL
-/
def get [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.get (RequestTarget.parse! path) }

/--
Creates a POST request builder for the given path or URL
-/
def post [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.post (RequestTarget.parse! path) }

/--
Creates a PUT request builder for the given path or URL
-/
def put [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.put (RequestTarget.parse! path) }

/--
Creates a DELETE request builder for the given path or URL
-/
def delete [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.delete (RequestTarget.parse! path) }

/--
Creates a PATCH request builder for the given path or URL
-/
def patch [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.patch (RequestTarget.parse! path) }

/--
Creates a HEAD request builder for the given path or URL
-/
def headReq [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.head (RequestTarget.parse! path) }

/--
Creates an OPTIONS request builder for the given path or URL.
-/
def options [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.options (RequestTarget.parse! path) }

end Std.Http.Client.Agent
