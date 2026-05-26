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

public section

namespace Std
namespace Http
namespace Client

set_option linter.all true

open Std Async TCP Protocol
open Time

/-!
# Agent.Pool

A connection pool that maintains multiple reusable sessions per `(scheme, host, port)` triple,
enabling connection reuse and parallel pipelines to the same host.

Use `Pool.new` to create a pool, then call `pool.send` to dispatch requests through managed
sessions. The pool handles cookie injection, redirect following, and middlewares.
-/

/--
Per-origin bucket inside the pool's state map.
-/
structure Agent.Pool.Entry where
  /-- Sessions returned after a cross-origin redirect, ready for immediate reuse. -/
  idle : Array (Session Socket.Client)
  /-- All registered sessions, including idle and in-use. -/
  all : Array (Session Socket.Client)
  /--
  Monotonically advancing round-robin index.

  Round-robin is correct for HTTP/1.1 because each connection is fully sequential —
  no connection is "less loaded" than another while in use. If HTTP/2 multiplexing
  is added in the future, switch to least-requests-in-flight selection instead.
  -/
  idx : Nat

/--
Policy controlling whether a failed request should be retried on a fresh connection.

Retries only apply to connection-level failures (the session died before a response
was received). Application-level errors (4xx, 5xx) are never retried automatically.
-/
structure RetryPolicy where
  /--
  Called before evicting a broken session and re-dispatching.
  `err` is the transport error; `attempt` is 0-based (0 = first failure).
  Return `true` to retry on a new connection, `false` to propagate the error.
  -/
  shouldRetry : IO.Error → Nat → Bool
  /-- Hard cap on the number of retries regardless of `shouldRetry`. -/
  maxRetries : Nat

namespace RetryPolicy

/-- Never retries — the default. Mirrors Finch's explicit caller-responsibility approach. -/
def never : RetryPolicy := { shouldRetry := fun _ _ => false, maxRetries := 0 }

/--
Retries once on any connection error. Safe for idempotent methods (GET, HEAD, PUT,
DELETE); callers must take care with non-idempotent methods (POST, PATCH).
-/
def once : RetryPolicy := { shouldRetry := fun _ _ => true, maxRetries := 1 }

end RetryPolicy

/--
A connection pool that manages multiple sessions per `(scheme, host, port)` triple.
-/
structure Agent.Pool where
  /--
  Per-origin buckets guarded by a mutex.
  The key is `(scheme, host, port)` so `http://host:443` and `https://host:443` are separate.
  -/
  state : Mutex (Std.HashMap (String × String × UInt16) Agent.Pool.Entry)
  /-- Maximum number of sessions per host. -/
  maxPerHost : Nat
  /-- Configuration used when creating new sessions. -/
  config : Config
  /--
  Cookie jar shared across all sessions.

  The jar is decoupled from construction: pass an existing jar to `Pool.new` to share
  cookies across multiple pools (e.g. a default pool and a TLS pool), or omit it to
  get a fresh, isolated jar.
  -/
  cookieJar : Cookie.Jar
  /-- Monotonically increasing counter for unique session IDs. -/
  nextId : Mutex UInt64
  /-- Middlewares applied (outermost-first) around every request/response hop. -/
  middlewares : Array Middleware := #[]
  /-- Connector used to open new transport sessions. Defaults to plain TCP. -/
  connector : TcpConnector := {}
  /-- Retry policy for connection-level failures. Defaults to no retries. -/
  retryPolicy : RetryPolicy := RetryPolicy.never

namespace Agent.Pool

/--
Creates a new, empty connection pool.

Pass `cookieJar` to share an existing jar across pools; omit it for a fresh isolated jar.
-/
def new (config : Config := {}) (maxPerHost : Nat := 4) (cookieJar : Option Cookie.Jar := none) : Async Agent.Pool := do
  let state ← Mutex.new (∅ : Std.HashMap (String × String × UInt16) Agent.Pool.Entry)
  let cookieJar ← match cookieJar with
    | some jar => pure jar
    | none     => Cookie.Jar.new
  let nextId ← Mutex.new (1 : UInt64)
  pure { state, maxPerHost, config, cookieJar, nextId, middlewares := #[] }

/--
Returns a session for `(scheme, host, port)`.

Priority: idle session → new session (if under limit) → round-robin across all sessions.
-/
def getOrCreateSession (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) : Async (Session Socket.Client) := do
  let key := (scheme.val, toString host, port)

  let maybeSession ← pool.state.atomically do
    let st ← MonadState.get
    let entry := (st.get? key).getD ⟨#[], #[], 0⟩

    if let some s := entry.idle[0]? then
      let entry' := { entry with idle := entry.idle.extract 1 entry.idle.size, idx := entry.idx + 1 }
      MonadState.set (st.insert key entry')
      return some s

    if entry.all.size < pool.maxPerHost then
      return none

    match entry.all[entry.idx % entry.all.size]? with
    | none => return none
    | some selected =>
      MonadState.set (st.insert key { entry with idx := entry.idx + 1 })
      return some selected

  if let some session := maybeSession then
    return session

  let session ← Connector.connect pool.connector scheme host port pool.config
  let newId ← pool.nextId.atomically do
    let id ← MonadState.get
    MonadState.set (id + 1)
    return id
  let session := { session with id := newId }
  pool.state.atomically do
    let st ← MonadState.get
    let entry := (st.get? key).getD ⟨#[], #[], 0⟩
    if entry.all.size < pool.maxPerHost then
      MonadState.set (st.insert key { entry with all := entry.all.push session })
  return session

/-- Removes a broken session from the pool by its unique ID. -/
private def evictSession (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) (sessionId : UInt64) : Async Unit := do
  let key := (scheme.val, toString host, port)
  pool.state.atomically do
    let st ← MonadState.get
    match st.get? key with
    | none => pure ()
    | some entry =>
      let entry' := { entry with
        all  := entry.all.filter  (fun s => s.id != sessionId)
        idle := entry.idle.filter (fun s => s.id != sessionId) }
      MonadState.set (st.insert key entry')

/-- Returns a healthy session to the idle list after a cross-origin redirect. -/
private def returnToIdle (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) (session : Session Socket.Client) : Async Unit := do
  let key := (scheme.val, toString host, port)
  pool.state.atomically do
    let st ← MonadState.get
    let entry := (st.get? key).getD ⟨#[], #[], 0⟩
    if entry.all.any (fun s => s.id == session.id) then
      MonadState.set (st.insert key { entry with idle := entry.idle.push session })

/--
Sends a request through a pooled session, following redirects, injecting cookies,
and applying middlewares. On connection failure, evicts the broken session and retries
according to `pool.retryPolicy`.
-/
def send {β : Type} [Coe β Body.Any]
    (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16)
    (request : Request β) : Async (Response Body.Stream) := do
  let attempts := pool.retryPolicy.maxRetries + 1
  let mut lastErr : IO.Error := .userError "no attempts"
  for attempt in List.range attempts do
    let session ← pool.getOrCreateSession scheme host port
    try
      return ← Agent.send {
        session
        scheme
        host
        port
        cookieJar := pool.cookieJar
        middlewares := pool.middlewares
        acquire := some (fun s h p => pool.getOrCreateSession s h p)
        release := some (fun broken s h p => pool.evictSession s h p broken.id)
        releaseHealthy := some (fun sess s h p => pool.returnToIdle s h p sess)
      } request
    catch err =>
      pool.evictSession scheme host port session.id
      if pool.retryPolicy.shouldRetry err attempt then
        lastErr := err
      else
        throw err
  throw lastErr

end Agent.Pool

end Std.Http.Client
