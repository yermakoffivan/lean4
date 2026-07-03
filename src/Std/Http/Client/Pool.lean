/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Agent
public import Std.Http.Client.Connector
import Init.Data.Array

public section

/-!
# Agent.Pool

A simple connection pool that keeps at most one reusable session.

If the next request targets the current session's origin, the session is reused. If the origin
changes, the current session is retired and a new session is opened for the new origin.

Use `Pool.new` to create a pool, then call `pool.send` to dispatch requests through managed
sessions. The pool handles redirect following and middlewares.
-/

namespace Std.Http.Client

open Std Async TCP Protocol
open Time

set_option linter.all true

/--
The single reusable session currently held by the pool.
-/
structure Agent.Pool.Slot where

  /--
  Origin this session is connected to.
  -/
  origin : URI.Origin

  /--
  The current session.
  -/
  session : Session

/--
Maximum number of times to retry a failed request on a fresh connection.

Retries only apply to connection-level failures (the session died before a response
was received). Application-level errors (4xx, 5xx) are never retried automatically.
Set to `0` to disable retries (the default).

**Only idempotent methods are retried.** Requests whose method returns `false` from
`Method.isIdempotent` (e.g. `POST`, `PATCH`) are never retried regardless of this
value, to prevent unintended duplicate side-effects.
-/
abbrev MaxRetries := Nat

/--
A connection pool that manages one reusable session at a time.
-/
structure Agent.Pool where

  /--
  Current reusable session, if any.
  -/
  state : Mutex (Option Agent.Pool.Slot)

  /--
  Compatibility setting retained for the builder API. The simplified pool always keeps
  at most one session, and this value is clamped to at least `1`.
  -/
  maxPerHost : Nat

  /--
  Configuration used when creating new sessions.
  -/
  config : Config

  /--
  Monotonically increasing counter for unique session IDs.
  -/
  nextId : Mutex UInt64

  /--
  Middlewares applied (outermost-first) around every request/response hop.
  -/
  middlewares : Array Middleware := #[]

  /--
  Function used to open new transport sessions. Stored as an erased function internally;
  supply a `Connector` instance via `Pool.new`.
  -/
  connect : ConnectFn := ConnectFn.tcp

  /--
  Maximum number of retries on connection-level failures. `0` disables retries.
  -/
  maxRetries : MaxRetries := 0

namespace Agent.Pool

/-- Creates a pool using an internal `ConnectFn`. Used by `Client.Builder.build`. -/
def new (config : Config := {}) (maxPerHost : Nat := 1) (connect : ConnectFn := ConnectFn.tcp)
    (maxRetries : MaxRetries := 0) : Async Agent.Pool := do
  let state ← Mutex.new (none : Option Agent.Pool.Slot)
  let nextId ← Mutex.new (1 : UInt64)
  let maxPerHost := if maxPerHost == 0 then 1 else maxPerHost
  pure { state, maxPerHost, config, nextId, middlewares := #[], connect, maxRetries }

/--
Creates a new, empty connection pool using a custom `Connector`.

Supply any value whose type implements `Connector` (e.g. a TLS connector or a mock).
-/
def newWith [Connector α] (connector : α) (config : Config := {}) (maxPerHost : Nat := 1) : Async Agent.Pool :=
  Agent.Pool.new config maxPerHost (ConnectFn.ofConnector connector)

/--
Acquires a fresh unique session ID.
-/
private def nextSessionId (pool : Agent.Pool) : Async UInt64 :=
  pool.nextId.atomically <| modifyGet fun id => (id, id + 1)

/--
Opens a new session for `origin` and assigns it a pool-local ID.
-/
private def openSession (pool : Agent.Pool) (origin : URI.Origin) : Async Session := do
  let session ← pool.connect origin.scheme origin.host origin.port pool.config
  let id ← nextSessionId pool
  return { session with id }

/--
Returns the pool's single session for `origin`.

If the current session has the same origin, it is checked out again; HTTP/1.1 requests
queue on the session. If the origin differs, the current session is retired and replaced.

A new session is opened *outside* the state mutex: DNS resolution and the TCP connect can block,
and holding the lock across them would serialize every other pool operation (including the
background completion handler's `retireSession`). The lock is taken only for the brief fast-path
check and to install the freshly opened session.
-/
def getOrCreateSession (pool : Agent.Pool) (origin : URI.Origin) : Async Session := do
  -- Fast path: reuse an existing same-origin session without opening anything.
  let existing ← pool.state.atomically do
    match ← get with
    | some slot => pure (if slot.origin == origin then some slot.session else none)
    | none => pure none
  if let some session := existing then
    return session

  -- Slow path: open a new session with the lock released.
  let session ← pool.openSession origin

  -- Install it, retiring whatever is parked. If another task installed a same-origin session while
  -- we were connecting, keep theirs and discard ours so the pool never holds two live sessions.
  let (chosen, evicted) ← pool.state.atomically do
    match ← get with
    | some slot =>
      if slot.origin == origin then
        pure (slot.session, some session)
      else
        set (some ({ origin, session } : Agent.Pool.Slot))
        pure (session, some slot.session)
    | none =>
      set (some ({ origin, session } : Agent.Pool.Slot))
      pure (session, none)
  if let some evictedSession := evicted then
    discard <| evictedSession.close
  return chosen

/--
Removes a session from the pool and closes its request channel.
-/
private def retireSession (pool : Agent.Pool) (origin : URI.Origin) (session : Session) : Async Unit := do
  pool.state.atomically <| modify fun
    | some slot =>
      if slot.origin == origin && slot.session.id == session.id then none else some slot
    | none => none
  discard <| session.close

/--
Sends a request through the pooled session, following redirects and applying middlewares.
On connection failure, evicts the broken session and retries up to `pool.maxRetries` times
on fresh connections.

After the connection reports an error for the final response body, the session is retired.
Cross-origin redirect swaps retire the outgoing session before acquiring the next origin, keeping
the pool to one live origin at a time.
-/
def send {β : Type} [Coe β Body.Any] (pool : Agent.Pool) (origin : URI.Origin) (request : Request β) : Async (Response Body.Stream) := do

  -- Non-idempotent methods (POST, PATCH, …) must never be retried; a connection
  -- failure after partial delivery could cause duplicate side-effects.
  let retries := if request.line.method.isIdempotent then pool.maxRetries else 0

  let attempts := retries + 1

  for attempt in 0...attempts do
    let session ← pool.getOrCreateSession origin

    try
      let exchange ← Agent.exchange {
        session
        origin
        middlewares := pool.middlewares
        sessionRouter := some {
          acquire := fun o => pool.getOrCreateSession o
          release := fun broken o => pool.retireSession o broken
          releaseSwapped := fun sess o => pool.retireSession o sess
        }
      } request

      background do
        match ← await exchange.completion.result! with
        | .ok _ => pure ()
        | .error _ => pool.retireSession exchange.origin exchange.session

      return exchange.response

    catch err =>
      pool.retireSession origin session
      -- Re-raise on the final attempt; earlier failures fall through to the next retry.
      if attempt + 1 ≥ attempts then
        throw err

  -- Unreachable: the loop runs at least once and the final attempt always returns or throws.
  throw (IO.userError "HTTP client retry loop exhausted without returning")

end Agent.Pool
end Std.Http.Client
