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

/-!
# Connector

A `Connector` abstracts DNS resolution and TCP/transport connection establishment for the
connection pool.

The default `TcpConnector` resolves via the system DNS and dials a raw TCP socket.
-/

namespace Std.Http.Client

open Std Async TCP
open Time

set_option linter.all true

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
  connect : α → URI.Scheme → URI.Host → UInt16 → Config → Async Session

/--
The default connector: resolves `host` via the system DNS, iterates over the returned
addresses, and opens a TCP socket to the first one that succeeds.

When `config.proxy` is set, the TCP connection is made to the proxy address instead
and the original `host`/`port` are left for the HTTP layer to handle.
-/
structure TcpConnector where

instance : Connector TcpConnector where
  connect _ scheme host port config := do

    if scheme.val == "https" then
      throw (IO.userError "default TCP connector does not support https.")

    if scheme.val != "http" then
      throw (IO.userError s!"default TCP connector only supports http, got scheme {scheme.val.quote}")

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
A runtime-erased connector function used internally by the pool.
-/
abbrev ConnectFn := URI.Scheme → URI.Host → UInt16 → Config → Async Session

/--
Erase a `Connector` instance into a `ConnectFn`.
-/
def ConnectFn.ofConnector [Connector α] (c : α) : ConnectFn :=
  fun scheme host port config => Connector.connect c scheme host port config

/--
The default TCP connector, erased.
-/
def ConnectFn.tcp : ConnectFn := ConnectFn.ofConnector TcpConnector.mk

end Std.Http.Client
