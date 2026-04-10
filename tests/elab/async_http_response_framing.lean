import Std.Internal.Http.Test.Helpers

open Std.Internal.IO Async
open Std Http Test

-- Shared fixtures

private def ok200Head : String :=
  "HTTP/1.1 200 OK\x0d\nContent-Type: text/plain; charset=utf-8\x0d\nServer: LeanHTTP/1.1\x0d\nConnection: close\x0d\nContent-Length: 2\x0d\n\x0d\n"

-- RFC 9110 §9.3.2: HEAD

#eval runGroup "RFC 9110 §9.3.2: HEAD response framing" do
  check "HEAD omits body bytes, preserves headers"
    (raw := "HEAD / HTTP/1.1\x0d\nHost: example.com\x0d\nConnection: close\x0d\n\x0d\n")
    (handler := okHandler)
    (expect := fun r => assertExact r ok200Head)

  check "GET and HEAD produce identical header sections"
    (raw := "GET /frame HTTP/1.1\x0d\nHost: example.com\x0d\nConnection: close\x0d\n\x0d\n")
    (handler := fun _ => Response.ok |>.text "hello")
    (expect := fun getResp => do
      -- Run HEAD against the same handler
      let (client2, server2) ← Mock.new
      let headResp ← Async.block do
        client2.send "HEAD /frame HTTP/1.1\x0d\nHost: example.com\x0d\nConnection: close\x0d\n\x0d\n".toUTF8
        Std.Http.Server.serveConnection server2 (show TestHandler from fun _ => Response.ok |>.text "hello") defaultConfig |>.run
        return (← client2.recv?).getD .empty

      let getHeaders := (String.fromUTF8! getResp).splitOn "\x0d\n\x0d\n" |>.headD ""
      let headHeaders := (String.fromUTF8! headResp).splitOn "\x0d\n\x0d\n" |>.headD ""
      unless getHeaders == headHeaders do
        throw <| IO.userError s!"headers differ:\nGET: {getHeaders.quote}\nHEAD: {headHeaders.quote}"
      assertContains getResp "hello" *>
      assertAbsent headResp "hello")

-- RFC 9110 §15.4: 304 and 204 response framing

#eval runGroup "RFC 9110 §15.4: 304 Not Modified preserves explicit Content-Length" do
  -- Direct machine test: write a 304 head with Content-Length: 5 and verify it is preserved
  let request := "GET /cache HTTP/1.1\x0d\nHost: example.com\x0d\nConnection: close\x0d\n\x0d\n".toUTF8
  let machine0 : Protocol.H1.Machine .receiving := { config := {} }
  let (machine1, _) := (machine0.feed request).step
  let headers304 := Headers.empty.insert Header.Name.contentLength (Header.Value.ofString! "5")
  let (_, step304) := (machine1.send ({ status := .notModified, headers := headers304 } : Response.Head)).step
  let text304 := String.fromUTF8! step304.output.toByteArray
  unless text304.contains "HTTP/1.1 304 Not Modified" do
    throw <| IO.userError s!"expected 304 status in output:\n{text304.quote}"
  unless text304.contains "Content-Length: 5" do
    throw <| IO.userError s!"expected Content-Length: 5 preserved:\n{text304.quote}"
  if text304.contains "Content-Length: 0" then
    throw <| IO.userError s!"unexpected rewritten Content-Length: 0:\n{text304.quote}"

#eval runGroup "RFC 9110 §15.3.5: 204 No Content strips framing headers" do
  let request := "GET /empty HTTP/1.1\x0d\nHost: example.com\x0d\nConnection: close\x0d\n\x0d\n".toUTF8
  let machine0 : Protocol.H1.Machine .receiving := { config := {} }
  let (machine1, _) := (machine0.feed request).step
  let headers204 := Headers.empty.insert Header.Name.contentLength (Header.Value.ofString! "9")
  let (_, step204) := (machine1.send ({ status := .noContent, headers := headers204 } : Response.Head)).step
  let text204 := String.fromUTF8! step204.output.toByteArray
  unless step204.output.size > 0 do
    throw <| IO.userError "expected serialized response output"
  unless text204.contains "HTTP/1.1 204 No Content" do
    throw <| IO.userError s!"expected 204 status:\n{text204.quote}"
  if text204.contains "Content-Length:" || text204.contains "Transfer-Encoding:" then
    throw <| IO.userError s!"unexpected framing headers in 204:\n{text204.quote}"

-- RFC 9112 §9.6: Client-mode — parsing responses

#eval runGroup "RFC 9112 §9.6: client-mode response parsing" do
  -- Parse a 200 response with headers
  let machineA : Protocol.H1.Machine .sending := { config := {}, reader := { state := .needStartLine } }
  let rawA := "HTTP/1.1 200 OK\x0d\nContent-Length: 0\x0d\nConnection: close\x0d\n\x0d\n"
  let (machineA', stepA) := (machineA.feed rawA.toUTF8).step
  if stepA.events.any (fun | .failed _ => true | _ => false) then
    throw <| IO.userError s!"unexpected failure parsing 200 response: {repr stepA.events}"
  unless stepA.events.any (fun | .endHeaders _ => true | _ => false) do
    throw <| IO.userError s!"missing endHeaders event: {repr stepA.events}"
  unless machineA'.reader.messageHead.status == .ok do
    throw <| IO.userError s!"unexpected status: {repr machineA'.reader.messageHead.status}"
  unless machineA'.reader.messageHead.headers.hasEntry Header.Name.contentLength (Header.Value.ofString! "0") do
    throw <| IO.userError "missing Content-Length header in parsed response"

  -- Parse headerless 204
  let machineB : Protocol.H1.Machine .sending := { config := {}, reader := { state := .needStartLine } }
  let rawB := "HTTP/1.1 204 No Content\x0d\n\x0d\n"
  let (_, stepB) := (machineB.feed rawB.toUTF8).step
  if stepB.events.any (fun | .failed _ => true | _ => false) then
    throw <| IO.userError s!"unexpected failure parsing 204: {repr stepB.events}"
  if stepB.events.any (fun | .needMoreData _ => true | _ => false) then
    throw <| IO.userError s!"unexpected needMoreData for 204: {repr stepB.events}"
  unless stepB.events.any (fun | .endHeaders _ => true | _ => false) do
    throw <| IO.userError s!"missing endHeaders for 204: {repr stepB.events}"

  -- 204 with Content-Length in response: body framing should be ignored
  let machineC : Protocol.H1.Machine .sending := { config := {}, reader := { state := .needStartLine } }
  let rawC := "HTTP/1.1 204 No Content\x0d\nContent-Length: 5\x0d\n\x0d\nHELLO"
  let (machineC', stepC) := (machineC.feed rawC.toUTF8).step
  if stepC.events.any (fun | .failed _ => true | _ => false) then
    throw <| IO.userError s!"unexpected failure for 204 with framing: {repr stepC.events}"
  -- The 5 bytes of "HELLO" should remain unread
  unless machineC'.reader.input.remainingBytes == 5 do
    throw <| IO.userError s!"expected 5 unread bytes, got {machineC'.reader.input.remainingBytes}"
