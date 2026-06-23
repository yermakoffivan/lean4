/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Session
public import Std.Http.Protocol.H1.Redirect
import Init.Data.Array

public section

/-!
# Agent

A transport-agnostic HTTP user-agent that wraps a `Session` and adds automatic redirect
following.

`Agent` contains no TCP-specific code. Use `Agent.ofTransport` to create an `Agent` from
any connected transport.

Cross-origin redirect following is controlled by `CrossOriginPolicy`. A pool supplies
`.follow` callbacks; a standalone agent uses `.stop` (cross-origin redirects stop at the
first hop to a different origin).

When crossing to a different host the `Authorization` header is stripped from the redirected
request to prevent credential leakage.
-/

namespace Std.Http.Client

open Std Async TCP Protocol H1
open Time

set_option linter.all true

/--
A middleware intercepts every request/response hop performed by an `Agent`.

The function receives the outgoing request and a `next` continuation that performs
the actual send (including error handling). Call `next req` to forward the (possibly
modified) request downstream, or return a response directly to short-circuit the chain.

Middlewares are composed outermost-first: the first element in the array wraps all
subsequent ones. Each middleware must call `next` exactly once per invocation.
-/
abbrev Middleware :=
  Request Body.Any → (Request Body.Any → Async (Response Body.Stream)) → Async (Response Body.Stream)

/--
Callbacks that `Agent` uses to acquire and release sessions when following a
cross-origin redirect. Supplied by the pool; absent for standalone agents.

* `acquire` — opens (or borrows from the pool) a session to the new origin.
* `release` — evicts a broken session (connection-level error during `send`).
* `releaseSwapped` — disposes of a session that was swapped out for a cross-origin hop.
-/
structure SessionRouter where

  /--
  Opens (or borrows from the pool) a session to the new origin.
  -/
  acquire : URI.Origin → Async Session

  /--
  Evicts a broken session (connection-level error during `send`).
  -/
  release : Session → URI.Origin → Async Unit

  /--
  Disposes of a session that was swapped out during a cross-origin redirect.
  -/
  releaseSwapped : Session → URI.Origin → Async Unit

/--
An HTTP user-agent that manages a connection to a host and follows redirects.
-/
structure Agent where
  /--
  The underlying HTTP session.
  -/
  session : Session

  /--
  The origin (scheme, host, port) this agent is currently connected to.
  -/
  origin : URI.Origin
  /--
  Pool callbacks for acquiring and releasing sessions when following a cross-origin redirect.
  `none` for standalone agents — cross-origin redirects stop at the first hop.
  -/
  sessionRouter : Option SessionRouter := none

  /--
  Middlewares applied (outermost-first) around every request/response hop.
  An empty array means no interception.
  -/
  middlewares : Array Middleware := #[]

/--
Response plus the session/origin and completion signal for the hop that produced it.
Used by the pool to release a session only after the connection is ready for reuse.
-/
structure Agent.Exchange where
  /--
  The response returned to the caller.
  -/
  response : Response Body.Stream

  /--
  The session that produced `response`.
  -/
  session : Session

  /--
  The origin associated with `session`.
  -/
  origin : URI.Origin

  /--
  Resolves when `session` has finished the response-body exchange and is ready for reuse,
  or with an error if the exchange fails.
  -/
  completion : IO.Promise (Except IO.Error Unit)

-- Implementation helpers live here in `namespace Client` so that `Agent` unambiguously
-- refers to the struct above, not to the `namespace Agent` opened below.
namespace Agent.Impl

private def buildRedirectRequest (plan : RedirectPlan)
    (request : Request Body.Any) : Async (Request Body.Any) := do
  let newBody : Body.Any ← match plan.bodyAction with
    | .empty => pure (Body.Any.ofBody Body.Empty.mk)
    | .replay => do
      request.body.reset?.getD (pure ())
      pure request.body
  return {
    line := { request.line with uri := plan.target, method := plan.method, headers := plan.headers }
    body := newBody
    extensions := request.extensions
  }

private def toAbsoluteForm {t : Type} (request : Request t)
    (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) : Request t :=
  match request.line.uri with
  | .originForm path query =>
    { request with
        line := { request.line with uri := .absoluteForm {
          scheme,
          path,
          query := query.getD URI.Query.empty,
          authority := some { host, port := .value port }
          fragment := none
        }
      }
    }
  | _ => request

-- Normalize absolute-form URIs back to origin-form for direct (non-proxy) connections.
-- RFC 9112 §3.2.2: servers for direct connections expect origin-form; absolute-form is
-- only required when sending through an HTTP proxy.
private def toOriginForm {t : Type} (request : Request t) : Request t :=
  match request.line.uri with
  | .absoluteForm af =>
    let query := if af.query.isEmpty then none else some af.query
    { request with line := { request.line with uri := .originForm af.path query } }
  | _ => request

private def rewriteForProxy (agent : Agent) (request : Request Body.Any) : Request Body.Any :=
  if agent.session.config.proxy.isSome then
    toAbsoluteForm request agent.origin.scheme agent.origin.host agent.origin.port
  else
    toOriginForm request

private def completedPromise : Async (IO.Promise (Except IO.Error Unit)) := do
  let p ← IO.Promise.new
  discard <| p.resolve (.ok ())
  return p

private def dispatchHop (agent : Agent) (request : Request Body.Any) :
    Async Agent.Exchange := do
  let completionRef ← IO.mkRef (none : Option (IO.Promise (Except IO.Error Unit)))
  let inner : Request Body.Any → Async (Response Body.Stream) := fun req => do
    let (response, completion) ← try
      agent.session.sendTracked req
    catch err =>
      match agent.sessionRouter with
      | some router => router.release agent.session agent.origin
      | none => discard <| agent.session.close
      throw err
    completionRef.set (some completion)
    return response
  let chain := agent.middlewares.foldr (fun mw next req => mw req next) inner
  let response ← chain request
  let completion ← match ← completionRef.get with
    | some completion => pure completion
    | none => completedPromise
  return { response, session := agent.session, origin := agent.origin, completion }

private inductive RedirectStep where
  | final
  | stop
  | follow (plan : RedirectPlan)

private def evaluateRedirect
    (agent : Agent) (request : Request Body.Any)
    (response : Response Body.Stream) (remaining : Nat)
    (history : Array (URI.Origin × String)) : RedirectStep := Id.run do

  if remaining = 0 then
    .final
  else
    let decide :=
      decideRedirect agent.origin
        request.line request.body.reset?.isSome agent.session.config.onlySafeRedirects
          response.line.version response.line.status response.line.headers

    match decide with
    | .done => return .final
    | .follow plan =>

      -- Gate 1: cycle detection.
      let nextKey := (plan.origin, toString plan.target)

      if history.contains nextKey then
        return .stop

      -- Gate 2: cross-origin redirects need a sessionRouter.
      if plan.isCrossOrigin && agent.sessionRouter.isNone then
        return .stop

      return .follow plan

private def advanceAgent (agent : Agent) (plan : RedirectPlan) : Async Agent := do
  if !plan.isCrossOrigin then return agent

  let some router := agent.sessionRouter
    | return agent

  router.releaseSwapped agent.session agent.origin
  let newSession ← router.acquire plan.origin
  return {
    session := newSession
    origin := plan.origin
    middlewares := agent.middlewares
    sessionRouter := agent.sessionRouter
  }

private partial def sendWithRedirects
    (agent : Agent) (request : Request Body.Any)
    (remaining : Nat)
    (history : Array (URI.Origin × String) := #[]) : Async Agent.Exchange := do

  let history := history.push (agent.origin, toString request.line.uri)
  let request := rewriteForProxy agent request
  let tracked ← dispatchHop agent request

  match evaluateRedirect agent request tracked.response remaining history with
  | .final =>
    return tracked
  | .stop =>
    return tracked
  | .follow plan =>
    tracked.response.body.drain (drainLimit := some agent.session.config.redirectBodyDrainLimit.toUInt64)
      (closeStream := tracked.response.body.close)
    let newRequest ← buildRedirectRequest plan request
    let agent ← advanceAgent agent plan
    sendWithRedirects agent newRequest (remaining - 1) history

end Agent.Impl

namespace Agent

/--
Creates an `Agent` from an already-connected transport `socket`.
-/
def ofTransport [Transport α] (socket : α) (origin : URI.Origin)
    (config : Config := {}) : Async Agent := do
  let session ← Session.new socket config
  pure { session, origin }

/--
Sends a request, automatically following redirects up to `config.maxRedirects` hops.
Middlewares are applied around every hop.
-/
def send {β : Type} [Coe β Body.Any] (agent : Agent) (request : Request β) : Async (Response Body.Stream) :=
  return (← Agent.Impl.sendWithRedirects agent { request with } agent.session.config.maxRedirects).response

/--
Sends a request and returns the response together with the session completion signal
for the final hop. This is used by the pool to manage session ownership.
-/
def exchange {β : Type} [Coe β Body.Any] (agent : Agent) (request : Request β) :
    Async Agent.Exchange :=
  Agent.Impl.sendWithRedirects agent { request with } agent.session.config.maxRedirects

end Std.Http.Client.Agent
