/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Internal.Http.Client.Agent
import Std.Internal.Async.DNS
import Std.Data.HashMap
import Init.Data.Array

public section

namespace Std
namespace Http
namespace Client

set_option linter.all true

open Std Internal IO Async TCP Protocol
open Time

/-!
# Agent.Pool

A connection pool that maintains multiple reusable sessions per `(host, port)` pair,
enabling parallel request pipelines to the same host.

Use `Pool.new` to create a pool with a shared configuration and cookie jar, then call
`pool.send` to dispatch requests through managed sessions.

```lean
let pool ← Agent.Pool.new (maxPerHost := 4)

-- requests are distributed across up to 4 connections per host
let r1 ← pool.send "api.example.com" 80
  (Request.get (.originForm! "/a") |>.header! "Host" "api.example.com" |>.empty)
```
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

  -- Try each resolved address in order; return on first successful connect.
  -- This handles hosts that resolve to both IPv6 (::1) and IPv4 (127.0.0.1).
  let mut lastErr : IO.Error := IO.userError s!"could not connect to {connectHost.quote}:{connectPort}"

  for ipAddr in addrs do
    let socketAddr : Std.Net.SocketAddress := match ipAddr with
      | .v4 ip => .v4 ⟨ip, connectPort⟩
      | .v6 ip => .v6 ⟨ip, connectPort⟩
    try
      let socket ← Socket.Client.mk
      let _ ← socket.connect socketAddr
      return ← Session.new socket config
    catch err =>
      lastErr := err

  throw lastErr

/--
A connection pool that manages multiple sessions per `(scheme, host, port)` triple.
Each value in the map is an array of live sessions paired with a round-robin counter.
-/
public structure Agent.Pool where
  /--
  Per-origin session lists and round-robin counters, guarded by a mutex.
  The key is `(scheme, host, port)` so that `http://example.com:443` and
  `https://example.com:443` are never mixed in the same pool.
  -/
  state : Mutex (Std.HashMap (String × String × UInt16) (Array (Session Socket.Client) × Nat))

  /--
  Maximum number of sessions (connections) per host.
  -/
  maxPerHost : Nat

  /--
  Configuration used when creating new sessions.
  -/
  config : Config

  /--
  Cookie jar shared across all sessions in the pool.
  -/
  cookieJar : Cookie.Jar

  /--
  Monotonically increasing counter used to assign unique IDs to pooled sessions.
  -/
  nextId : Mutex UInt64

  /--
  Response interceptors applied (in order) after every response from any session in the pool.
  -/
  interceptors : Array (Response Body.Stream → Async (Response Body.Stream)) := #[]

namespace Agent.Pool

/--
Creates a new, empty connection pool.
-/
def new (config : Config := {}) (maxPerHost : Nat := 4) : Async Agent.Pool := do
  let state ← Mutex.new (∅ : Std.HashMap (String × String × UInt16) (Array (Session Socket.Client) × Nat))
  let cookieJar ← Cookie.Jar.new
  let nextId ← Mutex.new (1 : UInt64)
  pure { state, maxPerHost, config, cookieJar, nextId }

/--
Returns a session for `(scheme, host, port)`, reusing an existing one when available or
creating a new one when the pool has room.  Uses round-robin scheduling.
The scheme is part of the key so that `http://example.com:443` and `https://example.com:443`
never share a pool entry.
-/
def getOrCreateSession (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) : Async (Session Socket.Client) := do
  let key := (scheme.val, toString host, port)
  -- Fast path: pick an existing session round-robin.
  let maybeSession ← pool.state.atomically do
    let st ← MonadState.get
    let (sessions, idx) := (st.get? key).getD (#[], 0)
    match sessions[idx % sessions.size]? with
    | none => return none
    | some selected =>
      MonadState.set (st.insert key (sessions, idx + 1))
      return some selected

  if let some session := maybeSession then
    return session

  -- Slow path: create a new session and register it.
  let session ← createTcpSession host port pool.config
  let newId ← pool.nextId.atomically do
    let id ← MonadState.get
    MonadState.set (id + 1)
    return id
  let session := { session with id := newId }
  pool.state.atomically do
    let st ← MonadState.get
    let (sessions, idx) := (st.get? key).getD (#[], 0)
    -- Respect maxPerHost: only register if we are still under the limit.
    if sessions.size < pool.maxPerHost then
      MonadState.set (st.insert key (sessions.push session, idx))
    -- If over the limit (concurrent creation race), this session is still
    -- returned for the current request but not stored for future reuse.
  return session

/--
Removes a single broken session from the pool by its unique ID.
Healthy sibling sessions to the same origin are preserved.
-/
private def evictSession (pool : Agent.Pool) (scheme : URI.Scheme) (host : URI.Host) (port : UInt16) (sessionId : UInt64) : Async Unit := do
  let key := (scheme.val, toString host, port)
  pool.state.atomically do
    let st ← MonadState.get
    match st.get? key with
    | none => pure ()
    | some (sessions, idx) =>
      let sessions' := sessions.filter (fun s => s.id != sessionId)
      MonadState.set (st.insert key (sessions', idx))

/--
Sends a request through a pooled session for `(scheme, host, port)`, injecting cookies from the
shared jar, applying response interceptors, storing any `Set-Cookie` responses, following
redirects up to `config.maxRedirects` hops, and evicting dead sessions on connection
failure (retrying up to `config.maxRetries` times).
-/
def send {β : Type} [Coe β Body.Any]
    (pool : Agent.Pool) (host : URI.Host) (port : UInt16) (scheme : URI.Scheme)
    (request : Request β) : Async (Response Body.Stream) := do
  let session ← pool.getOrCreateSession scheme host port

  Agent.send {
    session
    scheme := scheme
    host := host
    port := port
    cookieJar := pool.cookieJar
    interceptors := pool.interceptors
    connectTo := some (pool.getOrCreateSession · · ·)
    onBrokenSession := fun brokenSession s h p => pool.evictSession s h p brokenSession.id
  } request

end Agent.Pool

namespace Agent

/--
Resolves `host` via DNS and establishes a TCP connection on `port`, returning a new
`Agent Socket.Client`. Throws if DNS resolution returns no addresses.

When `config.proxy` is set every connection (including cross-host redirects) is routed
through the proxy.
-/
def connect (host : URI.Host) (port : UInt16) (config : Config := {}) : Async (Agent Socket.Client) := do
  let session ← createTcpSession host port config
  let cookieJar ← Cookie.Jar.new
  let scheme := URI.Scheme.ofPort port
  pure { session, scheme, host, port, cookieJar, connectTo := some (fun _scheme h p => createTcpSession h p config) }

end Std.Http.Client.Agent
