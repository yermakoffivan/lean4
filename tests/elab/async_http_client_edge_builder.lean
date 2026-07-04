module

public meta import Std.Http.Client
import Std.Http.Test.Helpers

open Std.Async
open Std Http Internal
open Test.ClientHelpers

/-! HTTP client builder, proxy, connector, and default-header edge cases. -/

-- ============================================================
-- Section — Proxy URL parsing
-- ============================================================

-- A proxy URL whose authority omits the port must fall back to the scheme's default
-- port (80 for `http`), never `0`, which is not a connectable destination.
#guard
  (Client.builder.proxy? "http://proxy.example.com").map (·.config.proxy)
    == some (some ("proxy.example.com", 80))

-- An explicit proxy port is preserved as-is.
#guard
  (Client.builder.proxy? "http://proxy.example.com:8080").map (·.config.proxy)
    == some (some ("proxy.example.com", 8080))

-- Non-`http` proxy schemes are rejected (HTTPS proxies need TLS tunnelling).
#guard (Client.builder.proxy? "https://proxy.example.com").isNone

-- Dynamic timeout validation rejects non-positive values and accepts positive ones.
#guard (Client.builder.timeout? (0 : Time.Millisecond.Offset)).isNone
#guard (Client.builder.timeout? (1 : Time.Millisecond.Offset)).isSome

-- `Client.builder` inherits the structure defaults rather than restating values that can drift.
#guard Client.builder.maxRetries == 1

-- ============================================================
-- Section — Client builder and connector validation
-- ============================================================

-- The default TCP connector must not silently send HTTPS requests as plaintext
-- HTTP over port 443.
#eval show IO _ from runWithTimeout "default TCP connector rejects https" 3000 <| Async.block do
  let url := URI.parse! "https://127.0.0.1:1/"
  let client ← Client.builder.build
  let result ← try
      let _ ← Client.get client url |>.send
      pure (Except.ok ())
    catch e => pure (Except.error (toString e))
  match result with
  | Except.ok _ => throw (IO.userError "HTTPS request unexpectedly succeeded with default TCP connector")
  | Except.error e =>
    unless e.contains "default TCP connector does not support https" do
      throw (IO.userError s!"expected clear HTTPS rejection, got: {e}")

-- Unsupported direct request schemes are rejected before the connector is
-- called. Redirects already apply this restriction; direct requests should too.
#eval show IO _ from runWithTimeout "direct request rejects unsupported scheme before connector" 3000 <| Async.block do
  let calls ← IO.mkRef 0
  let connect : Client.ConnectFn := fun _ _ _ config => do
    calls.modify (· + 1)
    let (_mockClient, mockServer) ← Mock.new
    Client.Session.new mockServer (config := config)

  let client ← Client.Agent.Pool.new {} connect
  let result ← try
      let _ ← Client.get client (URI.parse! "ftp://example.com/file") |>.send
      pure (Except.ok ())
    catch e => pure (Except.error (toString e))

  unless (← calls.get) == 0 do
    throw (IO.userError "connector was called for unsupported ftp URL")
  match result with
  | Except.ok _ => throw (IO.userError "unsupported ftp URL unexpectedly succeeded")
  | Except.error e =>
    unless e.contains "unsupported request URL scheme" do
      throw (IO.userError s!"expected unsupported scheme error, got: {e}")

-- Custom connectors may opt into HTTPS; only the default raw TCP connector
-- rejects it.
#eval show IO _ from runWithTimeout "custom connector can handle https" 3000 <| Async.block do
  let (mockClient, mockServer) ← Mock.new
  let connect : Client.ConnectFn := fun scheme _host _port config => do
    unless scheme.val == "https" do
      throw (IO.userError s!"expected https scheme, got {scheme.val}")
    Client.Session.new mockServer (config := config)

  let client ← Client.Agent.Pool.new {} connect
  let p : IO.Promise (Except String (Response Body.Stream)) ← IO.Promise.new
  background do
    let result ← try
        let resp ← Client.get client (URI.parse! "https://example.com/secure") |>.send
        pure (Except.ok resp)
      catch e => pure (Except.error (toString e))
    discard <| p.resolve result

  let reqBytes ← drainRequest mockClient
  mockClient.send (rawResp "200 OK"
    #[("Content-Length", "2"), ("Connection", "close")] "ok")

  match ← await p.result! with
  | Except.error e => throw (IO.userError s!"custom HTTPS connector request failed: {e}")
  | Except.ok resp =>
    let body ← resp.body.readAll (α := String)
    unless body == "ok" do
      throw (IO.userError s!"expected body 'ok', got {body.quote}")

  let reqText := String.fromUTF8! reqBytes
  unless reqText.startsWith "GET /secure" do
    throw (IO.userError s!"unexpected HTTPS request target:\n{reqText.quote}")

-- The pool opens exactly one connection for a single origin (one session per origin).
#eval show IO _ from runWithTimeout "pool opens one connection per origin" 3000 <| Async.block do
  let (_mockClient, mockServer) ← Mock.new
  let calls ← IO.mkRef 0
  let connect : Client.ConnectFn := fun _ _ _ config => do
    calls.modify (· + 1)
    Client.Session.new mockServer (config := config)

  let pool ← Client.Agent.Pool.new {} connect
  let some domain := URI.DomainName.ofString? "example.com"
    | throw (IO.userError "DomainName parse failed")
  let origin : URI.Origin := {
    scheme := URI.Scheme.ofString! "http"
    host := .name domain
    port := 80
  }

  let session ← pool.getOrCreateSession origin
  session.close

  unless (← calls.get) == 1 do
    throw (IO.userError "expected exactly one connection for a single origin")
