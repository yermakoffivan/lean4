/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Agent
public import Std.Http.Client.Connector
import Std.Data.HashMap
import Init.Data.Array
import Init.Data.Hashable

public section

/-!
# Agent.Pool

A connection pool that maintains multiple reusable sessions per `(scheme, host, port)` triple.

Sessions are tracked as idle or busy. `getOrCreateSession` picks the first idle session,
creating a new one when none are idle and the cap has not been reached, and round-robins
across all sessions (idle and busy) when at capacity. `releaseSession` returns a session
from busy back to idle.

Use `Pool.new` to create a pool, then call `pool.send` to dispatch requests through managed
sessions. The pool handles redirect following and middlewares.
-/

namespace Std.Http.Client

open Std Async TCP Protocol
open Time

set_option linter.all true

/--
Key identifying a unique `(scheme, host, port)` origin in the pool's state map.
`http://host:443` and `https://host:443` hash to different keys.
-/
structure OriginKey where

  /--
  URI scheme string, e.g. `"http"` or `"https"`.
  -/
  scheme : String

  /--
  Hostname as a string.
  -/
  host : String

  /--
  TCP port.
  -/
  port : UInt16
deriving BEq, Hashable

/--
Per-origin bucket inside the pool's state map.

`idle` holds connections that are free to accept the next request;
`busy` holds connections that currently have an in-flight request/response exchange.
-/
structure Agent.Pool.Entry where

  /--
  Connections currently waiting for a request.
  -/
  idle : Array Session := #[]

  /--
  Connections currently handling a request.
  -/
  busy : Array Session := #[]

namespace Agent.Pool.Entry

/--
Total number of sessions for this origin.
-/
def total (e : Agent.Pool.Entry) : Nat := e.idle.size + e.busy.size

/--
Remove a session from `idle` by ID, returning the updated entry and whether it was found.
-/
def checkoutById (e : Agent.Pool.Entry) (id : UInt64) : Agent.Pool.Entry × Bool :=
  match e.idle.find? (·.id == id) with
  | none => (e, false)
  | some session => ({ e with idle := e.idle.filter (·.id != id), busy := e.busy.push session }, true)

/--
Move a session from `busy` back to `idle` by ID. No-op if not found in `busy`.
-/
def checkinById (e : Agent.Pool.Entry) (id : UInt64) : Agent.Pool.Entry :=
  match e.busy.find? (·.id == id) with
  | none => e
  | some session => { e with busy := e.busy.filter (·.id != id), idle := e.idle.push session }

/--
Remove a session from either bucket by ID. Returns the updated entry.
-/
def removeById (e : Agent.Pool.Entry) (id : UInt64) : Agent.Pool.Entry :=
  { e with idle := e.idle.filter (·.id != id), busy := e.busy.filter (·.id != id) }

end Agent.Pool.Entry

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
A connection pool that manages multiple sessions per `(scheme, host, port)` triple.
-/
structure Agent.Pool where

  /--
  Per-origin buckets guarded by a mutex.
  The key is `(scheme, host, port)` so `http://host:443` and `https://host:443` are separate.
  -/
  state : Mutex (Std.HashMap OriginKey Agent.Pool.Entry)

  /--
  Maximum number of sessions (idle + busy) per host.

  Once the cap is reached, `getOrCreateSession` round-robins over existing sessions
  rather than opening a new socket. Under HTTP/1.1 each session is sequential, so
  any session is equally loaded; the cap purely limits open socket count.
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
  let state ← Mutex.new (∅ : Std.HashMap _ Agent.Pool.Entry)
  let nextId ← Mutex.new (1 : UInt64)
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
Checks out a session for `(scheme, host, port)` and moves it from `idle` to `busy`.

Returns `some session` if an idle session is available, `none` otherwise.
-/
private def tryCheckout (pool : Agent.Pool) (key : OriginKey) : BaseIO (Option Session) :=
  pool.state.atomically <| modifyGet fun st =>
    let entry := (st.get? key).getD {}
    match entry.idle[0]? with
    | none => (none, st)
    | some session => (some session, st.insert key (entry.checkoutById session.id).1)

/--
Returns a session for `(scheme, host, port)`.

Selection strategy:
1. If an idle session exists, check it out and mark it busy.
2. If below `maxPerHost`, dial a new session and mark it busy.
3. At cap, round-robin over all sessions (idle or busy) — under HTTP/1.1 each session
   queues requests internally, so any slot is equally loaded.

**Race-then-evict on new connections.** The cap check and the TCP dial happen outside
the mutex so that connection establishment does not block other callers. Two concurrent
callers can both dial past the cap. The losing caller detects the collision inside the
mutex, closes its socket gracefully, and falls through to the round-robin path. This
costs at most one extra TCP connection under contention.
-/
def getOrCreateSession (pool : Agent.Pool) (origin : URI.Origin) : Async Session := do
  let key : OriginKey := ⟨origin.scheme.val, toString origin.host, origin.port⟩

  -- Fast path: claim an idle session without dialling.
  if let some session ← tryCheckout pool key then
    return session

  -- Slow path: check capacity, then dial.
  let belowCap : Bool ← pool.state.atomically do
    let st ← get
    return ((st.get? key).getD {}).total < pool.maxPerHost

  if belowCap then
    let session ← pool.connect origin.scheme origin.host origin.port pool.config
    let id ← nextSessionId pool
    let session := { session with id }

    -- Re-enter the mutex: register only if still below cap; otherwise round-robin.
    let registered ← pool.state.atomically <| modifyGet fun st =>
      let entry := (st.get? key).getD {}
      if entry.total < pool.maxPerHost then
        (true, st.insert key { entry with busy := entry.busy.push session })
      else
        (false, st)
    if registered then
      return session

    -- Lost the race: close the extra socket and fall through to round-robin.
    discard <| session.close

  -- Round-robin over all sessions (used when at cap or after a lost race).
  -- Prefer an idle slot first; it might have freed up since the fast-path check.
  if let some session ← tryCheckout pool key then
    return session

  -- All slots still busy: pick the first busy one (they queue requests internally).
  let maybeBusy ← pool.state.atomically do
    let st ← get
    return ((st.get? key).getD {}).busy[0]?

  match maybeBusy with
  | some session => return session
  | none => throw (.userError "pool is empty after dial — this is a bug")

/--
Returns a session to the idle pool. Called after a successful request/response cycle.
-/
private def releaseSession (pool : Agent.Pool) (origin : URI.Origin) (session : Session) : Async Unit := do
  let key : OriginKey := ⟨origin.scheme.val, toString origin.host, origin.port⟩

  pool.state.atomically <| modify fun st =>
    match st.get? key with
    | none => st
    | some entry => st.insert key (entry.checkinById session.id)

/--
Removes a broken session from both buckets by its unique ID.
-/
private def evictSession (pool : Agent.Pool) (origin : URI.Origin) (sessionId : UInt64) : Async Unit := do
  let key : OriginKey := ⟨origin.scheme.val, toString origin.host, origin.port⟩

  pool.state.atomically <| modify fun st =>
    match st.get? key with
    | none => st
    | some entry => st.insert key (entry.removeById sessionId)

/--
Sends a request through a pooled session, following redirects and applying middlewares.
On connection failure, evicts the broken session and retries up to `pool.maxRetries` times
on fresh connections.

After each successful hop the session is returned to the idle pool so other callers
can reuse it. Cross-origin redirect swaps return the outgoing session to its origin
pool rather than closing it.
-/
def send {β : Type} [Coe β Body.Any] (pool : Agent.Pool) (origin : URI.Origin) (request : Request β) : Async (Response Body.Stream) := do

  -- Non-idempotent methods (POST, PATCH, …) must never be retried; a connection
  -- failure after partial delivery could cause duplicate side-effects.
  let retries := if request.line.method.isIdempotent then pool.maxRetries else 0

  let attempts := retries + 1
  let mut lastErr : IO.Error := .userError "no attempts"

  for attempt in 0...attempts do
    let session ← pool.getOrCreateSession origin

    try
      let response ← Agent.send {
        session
        origin
        middlewares := pool.middlewares
        sessionRouter := some {
          acquire := fun o => pool.getOrCreateSession o
          release := fun broken o => pool.evictSession o broken.id
          releaseSwapped := fun sess o => pool.releaseSession o sess
        }
      } request

      pool.releaseSession origin session
      return response

    catch err =>
      pool.evictSession origin session.id
      if attempt + 1 < attempts then
        lastErr := err
      else
        throw err

  throw lastErr

end Agent.Pool
end Std.Http.Client
