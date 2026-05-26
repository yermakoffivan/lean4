/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Agent
import Std.Async.DNS
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
Resolves `host` via DNS, opens a TCP socket to `port`, and creates an HTTP session.
When `config.proxy` is set the TCP connection is made to the proxy address instead.
-/
private def createTcpSession (host : URI.Host) (port : UInt16) (config : Config) : Async (Session Socket.Client) := do
  let (connectHost, connectPort) := config.proxy.getD (toString host, port)
  let addrs ← DNS.getAddrInfo connectHost (toString connectPort)

  if addrs.isEmpty then
    throw (IO.userError s!"could not resolve host: {connectHost.quote}")

  let mut lastErr : IO.Error := IO.userError s!"could not connect to {connectHost.quote}:{connectPort}"

  for ipAddr in addrs do
    let socketAddr : Std.Net.SocketAddress := match ipAddr with
      | .v4 ip => .v4 ⟨ip, connectPort⟩
      | .v6 ip => .v6 ⟨ip, connectPort⟩
    try
      let socket ← Socket.Client.mk
      socket.connect socketAddr
      return ← Session.new socket config
    catch err =>
      lastErr := err

  throw lastErr

/--
Per-origin bucket inside the pool's state map.
-/
structure Agent.Pool.Entry where
  /-- Sessions returned after a cross-origin redirect, ready for immediate reuse. -/
  idle : Array (Session Socket.Client)
  /-- All registered sessions, including idle and in-use. -/
  all : Array (Session Socket.Client)
  /-- Monotonically advancing round-robin index. -/
  idx : Nat

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
  /-- Cookie jar shared across all sessions. -/
  cookieJar : Cookie.Jar
  /-- Monotonically increasing counter for unique session IDs. -/
  nextId : Mutex UInt64
  /-- Middlewares applied (outermost-first) around every request/response hop. -/
  middlewares : Array Middleware := #[]

namespace Agent.Pool

/-- Creates a new, empty connection pool. -/
def new (config : Config := {}) (maxPerHost : Nat := 4) : Async Agent.Pool := do
  let state ← Mutex.new (∅ : Std.HashMap (String × String × UInt16) Agent.Pool.Entry)
  let cookieJar ← Cookie.Jar.new
  let nextId ← Mutex.new (1 : UInt64)
  pure { state, maxPerHost, config, cookieJar, nextId, middlewares := #[] }

/--
Returns a session for `(scheme, host, port)`.

Priority: idle session → new session (if under limit) → round-robin.
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

  let session ← createTcpSession host port pool.config
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
Sends a request through a pooled session, following redirects, injecting cookies, and
applying response interceptors.
-/
def send {β : Type} [Coe β Body.Any]
    (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16)
    (request : Request β) : Async (Response Body.Stream) := do
  let session ← pool.getOrCreateSession scheme host port
  Agent.send {
    session
    scheme
    host
    port
    cookieJar := pool.cookieJar
    middlewares := pool.middlewares
    acquire := some (fun s h p => pool.getOrCreateSession s h p)
    release := some (fun broken s h p => pool.evictSession s h p broken.id)
    releaseHealthy := some (fun session s h p => pool.returnToIdle s h p session)
  } request

end Agent.Pool

end Std.Http.Client
