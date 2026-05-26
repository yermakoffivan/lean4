/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Session
import Std.Async.DNS

public section

namespace Std.Http.Client

open Std Async TCP
open Time

set_option linter.all true

/-!
# Connector

A `Connector` abstracts DNS resolution and TCP/transport connection establishment for the
connection pool, mirroring the role of `http.Agent` in Node.js.

The default `TcpConnector` resolves via the system DNS and dials a raw TCP socket.
Alternatives — a TLS connector, a Unix-socket connector, a mock for testing — implement
the same interface and can be plugged in at pool construction time.
-/

/--
Type class for creating an HTTP session given a target `(scheme, host, port)` and a `Config`.

Implement this to customize DNS resolution, transport selection (plain TCP, TLS, Unix socket),
or connection pooling behaviour at the socket level.
-/
class Connector (α : Type) where
  /--
  Open a new transport connection and wrap it in a `Session`.

  `scheme` is provided so implementations can dispatch between plain and encrypted
  transports. `config.proxy` is available for proxy routing.
  -/
  connect : α → URI.Scheme → URI.Host → UInt16 → Config → Async (Session Socket.Client)

/--
The default connector: resolves `host` via the system DNS, iterates over the returned
addresses, and opens a TCP socket to the first one that succeeds.

When `config.proxy` is set, the TCP connection is made to the proxy address instead
and the original `host`/`port` are left for the HTTP layer to handle.
-/
structure TcpConnector where

instance : Connector TcpConnector where
  connect _ _scheme host port config := do
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

end Std.Http.Client
