/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Session
public import Std.Http.Data.Cookie
public import Std.Http.Data.Redirect
import Init.Data.Array

public section

namespace Std
namespace Http
namespace Client

set_option linter.all true

open Std Async TCP Protocol
open Time

/-!
# Agent

A transport-agnostic HTTP user-agent that wraps a `Session` and adds automatic redirect
following and cookie jar support.

`Agent` is parameterized by the transport type `α` and contains no TCP-specific code.
Use `Agent.ofTransport` to create an `Agent` from any connected transport.

Cross-origin redirect following requires `acquire`/`release`/`releaseHealthy` callbacks.
A pool supplies these; a standalone agent omits them (cross-origin redirects then stop at the
first hop to a different origin).

When crossing to a different host the `Authorization` header is stripped from the redirected
request to prevent credential leakage.
-/

/--
A middleware function that wraps an HTTP request/response cycle.

`run request next` receives the outgoing request and a `next` continuation that
performs the actual send. The middleware may modify the request before calling
`next`, inspect or modify the response afterward, or short-circuit entirely.

Middlewares are applied in order: the first middleware in the array is the outermost
wrapper. Cookie injection and response-body interceptors are both expressible as
middlewares, so this single list replaces the previous separate `interceptors` field.

Example — add an `Authorization` header to every request:
```lean
let authMiddleware : Middleware := {
  run := fun req next => do
    let req := req |>.header! "Authorization" "Bearer token"
    next req
}
```
-/
structure Middleware where
  /-- Runs this middleware: modify `request`, call `next`, and/or modify the response. -/
  run : Request Body.Any
      → (Request Body.Any → Async (Response Body.Stream))
      → Async (Response Body.Stream)

/--
An HTTP user-agent that manages a connection to a host. It follows redirects and maintains a
cookie jar for automatic cookie handling.
-/
structure Agent (α : Type) where
  /-- The underlying HTTP session. -/
  session : Session α
  /-- URI scheme for this connection (`"http"` or `"https"`). -/
  scheme : URI.Scheme
  /-- The hostname this agent is currently connected to. -/
  host : URI.Host
  /-- The port this agent is currently connected to. -/
  port : UInt16
  /-- Cookie jar shared across all requests and redirects. -/
  cookieJar : Cookie.Jar
  /--
  Middlewares applied (outermost-first) around every request/response hop, including
  intermediate redirect hops. Each middleware can modify the request, inspect or modify
  the response, or short-circuit the call entirely.
  -/
  middlewares : Array Middleware := #[]
  /--
  Opens a session for the given origin. Used for cross-origin redirects.
  `none` disables cross-origin redirect following.
  -/
  acquire : Option (URI.Scheme → URI.Host → UInt16 → Async (Session α)) := none
  /--
  Disposes of a session whose `send` has just failed (evict from pool or close).
  `none` falls back to closing the session's request channel.
  -/
  release : Option (Session α → URI.Scheme → URI.Host → UInt16 → Async Unit) := none
  /--
  Called when a cross-origin redirect replaces the current session. Defaults to closing
  the replaced session. A pool overrides this to return the session to the idle list.
  -/
  releaseHealthy : Option (Session α → URI.Scheme → URI.Host → UInt16 → Async Unit) := none

namespace Agent

/--
Creates an `Agent` from an already-connected transport `socket`.
-/
def ofTransport [Transport α] (socket : α) (scheme : URI.Scheme)
    (host : URI.Host) (port : UInt16)
    (config : Config := {}) : Async (Agent α) := do
  let session ← Session.new socket config
  let cookieJar ← Cookie.Jar.new
  pure { session, scheme, host, port, cookieJar }

/--
Injects matching cookies from `cookieJar` into the request headers for `host`.
Skips injection when an explicit `Cookie` header is already present.
-/
def injectCookies (cookieJar : Cookie.Jar) (host : URI.Host) (scheme : URI.Scheme)
    (request : Request Body.Any) : Async (Request Body.Any) := do
  if request.line.headers.contains .cookie then return request
  let path := RequestTarget.pathOrRoot request.line.uri
  match ← cookieJar.cookiesFor host path (secure := scheme.val == "https") with
  | none => return request
  | some cookieValue =>
    return { request with line := { request.line with headers := request.line.headers.insert .cookie cookieValue } }

/--
Reads all `Set-Cookie` headers from `responseHeaders` and stores them in `cookieJar`.
-/
def processCookies (cookieJar : Cookie.Jar) (host : URI.Host)
    (requestPath : URI.Path) (responseHeaders : Headers) : IO Unit := do
  if let some values := responseHeaders.getAll? Header.Name.setCookie then
    for v in values do
      cookieJar.processSetCookie host requestPath v.value

/--
Runs `middlewares` (outermost-first) around `inner`. Each middleware receives the
current request and a `next` continuation; calling `next` invokes the next middleware
(or `inner` when the stack is exhausted).
-/
def runMiddlewares
    (middlewares : Array Middleware) (inner : Request Body.Any → Async (Response Body.Stream))
    (request : Request Body.Any) : Async (Response Body.Stream) :=
  let rec go (i : Nat) (req : Request Body.Any) : Async (Response Body.Stream) :=
    if h : i < middlewares.size then
      (middlewares[i]).run req (go (i + 1))
    else
      inner req
  go 0 request

/--
Drains the response body up to `drainLimit` bytes so the connection can be reused.
-/
private def drainBodyForReuse (response : Response Body.Stream) (drainLimit : Nat) : Async Unit := do
  discard <| ContextAsync.run do
    try
      discard <| response.body.readAll (α := ByteArray) (maximumSize := some drainLimit.toUInt64)
    catch _ =>
      response.body.close

/-- Builds the redirected request from a `RedirectPlan`. -/
private def buildRedirectRequest (plan : Std.Http.RedirectPlan)
    (request : Request Body.Any) : Async (Request Body.Any) := do
  let newBody : Body.Any ← match plan.bodyAction with
    | .empty => pure (Body.Any.ofBody Body.Empty.mk)
    | .replay => do
      request.body.resetInPlace
      pure request.body
  return { line := { request.line with uri := plan.target, method := plan.method, headers := plan.headers }
           body := newBody, extensions := request.extensions }

/-- Rewrites `request` to absolute-form when `config.proxy` is set. -/
private def rewriteForProxy (agent : Agent α)
    (request : Request Body.Any) : Request Body.Any :=
  if agent.session.config.proxy.isSome then
    request.toAbsoluteForm agent.scheme agent.host agent.port
  else
    request

/--
One HTTP round-trip: run middlewares (outermost-first) around cookie injection and send.
Cookie injection always runs innermost (after all request-modifying middlewares).
On connection failure, disposes of the session via `release` (or closes it directly).
-/
private def dispatchHop [Transport α] (agent : Agent α)
    (request : Request Body.Any) : Async (Response Body.Stream) := do
  let inner : Request Body.Any → Async (Response Body.Stream) := fun req => do
    let req ← injectCookies agent.cookieJar agent.host agent.scheme req
    let response ← try
      agent.session.send req
    catch err =>
      match agent.release with
      | some f => f agent.session agent.scheme agent.host agent.port
      | none   => discard <| agent.session.close
      throw err
    processCookies agent.cookieJar agent.host (RequestTarget.pathOrRoot req.line.uri) response.line.headers
    return response
  runMiddlewares agent.middlewares inner request

private inductive RedirectStep where
  | final
  | stop
  | follow (plan : Std.Http.RedirectPlan) (isCrossOrigin : Bool)

private def evaluateRedirect (agent : Agent α) (request : Request Body.Any)
    (response : Response Body.Stream) (remaining : Nat)
    (history : Array (URI.Host × UInt16 × String)) : RedirectStep := Id.run do
  match Std.Http.decideRedirect remaining agent.host agent.port agent.scheme
      request.line request.body.isReplayable response.line.status response.line.headers with
  | .done => return .final
  | .follow plan =>
    -- Gate 1: cycle detection.
    let nextKey := (plan.host, plan.port, toString plan.target)
    if history.contains nextKey then return .stop
    -- Gate 2: cross-origin redirects need `acquire`.
    let isCrossOrigin := plan.host != agent.host || plan.port != agent.port || plan.scheme != agent.scheme
    if isCrossOrigin && agent.acquire.isNone then return .stop
    return .follow plan isCrossOrigin

/--
Advances to the redirect target. For cross-origin redirects, swaps the session using
`acquire` and releases the old one via `releaseHealthy`.
-/
private def advanceAgent [Transport α] (agent : Agent α)
    (plan : Std.Http.RedirectPlan) (isCrossOrigin : Bool) : Async (Agent α) := do
  if !isCrossOrigin then return agent
  match agent.acquire with
  | none => return agent  -- unreachable — evaluateRedirect gated on this
  | some acq =>
    let newSession ← acq plan.scheme plan.host plan.port
    match agent.releaseHealthy with
    | some f => f agent.session agent.scheme agent.host agent.port
    | none   => discard <| agent.session.close
    return { session  := newSession
             scheme   := plan.scheme
             host     := plan.host
             port     := plan.port
             cookieJar    := agent.cookieJar
             middlewares  := agent.middlewares
             acquire      := agent.acquire
             release      := agent.release
             releaseHealthy := agent.releaseHealthy }

/-- Top-level recursive redirect loop. -/
private partial def sendWithRedirects [Transport α]
    (agent : Agent α) (request : Request Body.Any)
    (remaining : Nat)
    (history : Array (URI.Host × UInt16 × String) := #[]) : Async (Response Body.Stream) := do
  let history := history.push (agent.host, agent.port, toString request.line.uri)
  let request := rewriteForProxy agent request
  let response ← dispatchHop agent request

  match evaluateRedirect agent request response remaining history with
  | .final => return response
  | .stop  => return response
  | .follow plan isCrossOrigin =>
    drainBodyForReuse response agent.session.config.redirectBodyDrainLimit
    let newRequest ← buildRedirectRequest plan request
    let agent ← advanceAgent agent plan isCrossOrigin
    sendWithRedirects agent newRequest (remaining - 1) history

/--
Sends a request, automatically following redirects up to `config.maxRedirects` hops.
Cookies are automatically injected and `Set-Cookie` responses are stored.
Response interceptors are applied after every response.
-/
def send {β : Type} [Coe β Body.Any] [Transport α] (agent : Agent α) (request : Request β) : Async (Response Body.Stream) :=
  sendWithRedirects agent
    { line := request.line, body := (request.body : Body.Any), extensions := request.extensions }
    agent.session.config.maxRedirects

end Agent

/-!
## Agent.RequestBuilder

A fluent builder that attaches an `Agent` to a `Request.Builder`.
-/

/-- A `Request.Builder` bound to a specific `Agent`. -/
structure Agent.RequestBuilder (α : Type) where
  /-- The agent that will send this request. -/
  agent : Agent α
  /-- The underlying request builder. -/
  builder : Request.Builder

namespace Agent.RequestBuilder

private def withHostHeader [Transport α] (rb : Agent.RequestBuilder α) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.hostDefault rb.agent.scheme rb.agent.host rb.agent.port }

/-- Adds a typed header to the request. -/
def header [Transport α] (rb : Agent.RequestBuilder α) (key : Header.Name) (value : Header.Value) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.header key value }

/-- Adds a header to the request. Panics if the name or value is invalid. -/
def header! [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.header! key value }

/-- Adds a header to the request. Returns `none` if the name or value is invalid. -/
def header? [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Option (Agent.RequestBuilder α) := do
  let builder ← rb.builder.header? key value
  pure { rb with builder }

/-- Sets the request URI from a string. Panics if the string is not a valid request target. -/
def uri! [Transport α] (rb : Agent.RequestBuilder α) (u : String) : Agent.RequestBuilder α :=
  { rb with builder := rb.builder.uri! u }

/-- Adds a query parameter to the request URI. -/
def queryParam [Transport α] (rb : Agent.RequestBuilder α) (key : String) (value : String) : Agent.RequestBuilder α :=
  { rb with builder :=
    { rb.builder with line := { rb.builder.line with uri := rb.builder.line.uri.setQueryParam key value } } }

/-- Sends the request with an empty body. -/
def send [Transport α] (rb : Agent.RequestBuilder α) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader; rb.agent.send (← rb.builder.empty)

/-- Sends the request with a plain-text body. Sets `Content-Type: text/plain; charset=utf-8`. -/
def text [Transport α] (rb : Agent.RequestBuilder α) (content : String) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader; rb.agent.send (← rb.builder.text content)

/-- Sends the request with a JSON body. Sets `Content-Type: application/json`. -/
def json [Transport α] (rb : Agent.RequestBuilder α) (content : String) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader; rb.agent.send (← rb.builder.json content)

/-- Sends the request with a raw binary body. Sets `Content-Type: application/octet-stream`. -/
def bytes [Transport α] (rb : Agent.RequestBuilder α) (content : ByteArray) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader; rb.agent.send (← rb.builder.bytes content)

/-- Sends the request with a streaming body produced by `gen`. -/
def sendStream [Transport α] (rb : Agent.RequestBuilder α) (gen : Body.Stream → Async Unit) : Async (Response Body.Stream) := do
  let rb := rb.withHostHeader; rb.agent.send (← rb.builder.stream gen)

end Agent.RequestBuilder

namespace Agent

/-- Creates a GET request builder for the given path or URL. -/
def get [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.get (RequestTarget.parse! path) }

/-- Creates a POST request builder for the given path or URL. -/
def post [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.post (RequestTarget.parse! path) }

/-- Creates a PUT request builder for the given path or URL. -/
def put [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.put (RequestTarget.parse! path) }

/-- Creates a DELETE request builder for the given path or URL. -/
def delete [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.delete (RequestTarget.parse! path) }

/-- Creates a PATCH request builder for the given path or URL. -/
def patch [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.patch (RequestTarget.parse! path) }

/-- Creates a HEAD request builder for the given path or URL. -/
def headReq [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.head (RequestTarget.parse! path) }

/-- Creates an OPTIONS request builder for the given path or URL. -/
def options [Transport α] (agent : Agent α) (path : String) : Agent.RequestBuilder α :=
  { agent, builder := Request.options (RequestTarget.parse! path) }

end Agent

end Std.Http.Client
