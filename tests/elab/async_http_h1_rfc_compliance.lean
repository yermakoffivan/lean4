import Std.Internal.Http

open Std Http
open Std.Http.Protocol.H1

/-!
`MachineTester (dir : Direction)` is a direction-parameterized, chainable builder for exercising
`Machine dir`. Operations return a new tester; failures accumulate and are thrown as a single
`IO.userError` by `run`.

Use `MachineTester.receiving` for server-side (request parsing) tests and
`MachineTester.sending` for client-side (response parsing) tests.
-/

private structure MachineTester (dir : Direction) where

  /--
  Human-readable name used in error messages.
  -/
  name : String

  /--
  The machine under test.
  -/
  machine : Machine dir

  /--
  Events and output produced by the most recent `step` or `pullBody`.
  -/
  lastStep : Option (StepResult dir) := none

  /--
  Body chunks collected by `drainBody` / `pullBody`.
  -/
  pulled : Array PulledChunk := #[]

  /--
  Cumulative wire output across all `step` calls.
  -/
  allOutput : ByteArray := .empty

  /--
  Accumulated assertion failures; `run` throws if non-empty.
  -/
  errors : Array String := #[]

namespace MachineTester

private def addError (t : MachineTester dir) (msg : String) : MachineTester dir :=
  { t with errors := t.errors.push s!"[{t.name}] {msg}" }

private def withLastStep
    (t : MachineTester dir) (ctx : String)
    (k : MachineTester dir → StepResult dir → MachineTester dir) : MachineTester dir :=
  match t.lastStep with
  | none => t.addError s!"{ctx}: no step result (call .step first)"
  | some step => k t step

/-- Create a new tester for the given direction. -/
def new (name : String) (config : Config := {}) : MachineTester dir :=
  { name, machine := { config } }

/-- Create a new server-side tester (receives requests, sends responses). -/
def receiving (name : String) (config : Config := {}) : MachineTester .receiving :=
  { name, machine := { config } }

/-- Create a new client-side tester (sends requests, receives responses). -/
def sending (name : String) (config : Config := {}) : MachineTester .sending :=
  { name, machine := { config } }

/-- Feed a UTF-8 string to the machine. -/
def feed (t : MachineTester dir) (data : String) : MachineTester dir :=
  { t with machine := t.machine.feed data.toUTF8, lastStep := none }

/-- Feed raw bytes to the machine. -/
def feedBytes (t : MachineTester dir) (data : ByteArray) : MachineTester dir :=
  { t with machine := t.machine.feed data, lastStep := none }

/-- Run one step of the state machine and record the result. -/
def step (t : MachineTester dir) : MachineTester dir :=
  let (machine, stepResult) := t.machine.step
  let allOutput := t.allOutput ++ stepResult.output.toByteArray
  { t with machine, lastStep := some stepResult, allOutput }

def debug (t : MachineTester dir) : MachineTester dir :=
  dbg_trace "resp: {repr <| t.lastStep.map (StepResult.events)}";
  t

/--
Pull at most one body chunk. Updates `pulled` and replaces `lastStep` with the
events emitted during the pull.
-/
def pullBody (t : MachineTester dir) : MachineTester dir :=
  let (machine, chunk?) := t.machine.pullBody
  let (machine, pullEvents) := machine.takeEvents
  let pulled := match chunk? with
    | some chunk => t.pulled.push chunk
    | none => t.pulled
  { t with machine, pulled, lastStep := some { events := pullEvents } }

/--
Drain all immediately-available body chunks.

The loop exits when `canPullBodyNow` becomes false (either the body is complete
or the machine stalls waiting for more data). The stall flag is set internally
by `pullBody`, so no explicit `remainingBytes` guard is needed.
-/
def drainBody (t : MachineTester dir) (fuel : Nat := 4096) : MachineTester dir := Id.run do
  let mut t := t
  let mut remaining := fuel
  while remaining > 0 && t.machine.canPullBodyNow do
    remaining := remaining - 1
    t := t.pullBody
  t

/-- Set the known outgoing body size (forwarded to the writer). -/
def setKnownSize (t : MachineTester dir) (size : Body.Length) : MachineTester dir :=
  { t with machine := t.machine.setKnownSize size }

/-- Signal EOF on the reader input (no more socket bytes will arrive). -/
def noMoreInput (t : MachineTester dir) : MachineTester dir :=
  { t with machine := t.machine.noMoreInput }

/-- Send a message head (request for `.sending`, response for `.receiving`). -/
def send (t : MachineTester dir) (head : Message.Head dir.swap) : MachineTester dir :=
  { t with machine := t.machine.send head }

/-- Signal that the application has finished writing the message body. -/
def userClosedBody (t : MachineTester dir) : MachineTester dir :=
  { t with machine := t.machine.userClosedBody }

/-- Resolve an `Expect: 100-continue` decision. No-op for `.sending` direction. -/
def canContinue (t : MachineTester dir) (status : Status) : MachineTester dir :=
  { t with machine := t.machine.canContinue status }

/-- Send an error response with `Connection: close` and shut down input. Only valid for `.receiving`. -/
def closeWithError (t : MachineTester .receiving) (status : Status) : MachineTester .receiving :=
  { t with machine := t.machine.closeWithError status }

/-- Enqueue body chunks into the writer buffer. -/
def sendData (t : MachineTester dir) (chunks : Array Chunk) : MachineTester dir :=
  { t with machine := t.machine.sendData chunks }

/-- Enqueue raw bytes as a single body chunk into the writer buffer. -/
def sendBytes (t : MachineTester dir) (data : ByteArray) : MachineTester dir :=
  t.sendData #[{ data, extensions := #[] }]

/-- Assert a predicate on the current machine. -/
def assert (t : MachineTester dir) (pred : Machine dir → Bool) (msg : String) : MachineTester dir :=
  if pred t.machine then t else t.addError msg

/--
Assert that the machine has not failed (reader state ≠ `.failed`).

**Note:** `machine.failed` returns `false` after any `step` call because `step` transitions
the reader from `.failed` to `.closed`. Use `assertNoError` for post-step success checks.
-/
def assertNoFailure (t : MachineTester dir) : MachineTester dir :=
  t.assert (fun m => !m.failed)
    s!"machine should not fail, got error: {repr t.machine.error}"

/-- Assert that `machine.error` is `none`. -/
def assertNoError (t : MachineTester dir) : MachineTester dir :=
  t.assert (fun m => m.error == none)
    s!"machine should have no error, got: {repr t.machine.error}"

/-- Assert that the machine has failed with the given error. -/
def assertFailedWith (t : MachineTester dir) (expected : Error) : MachineTester dir :=
  t.assert (fun m => m.error == some expected)
    s!"expected error {repr expected}, got {repr t.machine.error}"

/-- Assert that `canPullBody` is true. -/
def assertCanPullBody (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.canPullBody) "expected canPullBody = true"

/-- Assert that `canPullBodyNow` is true. -/
def assertCanPullBodyNow (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.canPullBodyNow) "expected canPullBodyNow = true"

/-- Assert that the reader is in the `complete` state. -/
def assertReaderComplete (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.isReaderComplete)
    s!"expected reader to be complete, state: {repr t.machine.reader.state}"

/-- Assert that the reader is in the `closed` state. -/
def assertReaderClosed (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.isReaderClosed)
    s!"expected reader to be closed, state: {repr t.machine.reader.state}"

/-- Assert that `keepAlive` is true on the machine. -/
def assertKeepAlive (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.keepAlive) "expected keepAlive = true"

/-- Assert that `keepAlive` is false on the machine. -/
def assertNotKeepAlive (t : MachineTester dir) : MachineTester dir :=
  t.assert (fun m => !m.keepAlive) "expected keepAlive = false"

/-- Assert that `isWaitingMessage` is true (writer in `waitingHeaders`, `!sentMessage`). -/
def assertIsWaitingMessage (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.isWaitingMessage) "expected isWaitingMessage = true"

/-- Assert that `halted` is true (both reader and writer closed, no output). -/
def assertHalted (t : MachineTester dir) : MachineTester dir :=
  t.assert (·.halted) "expected machine to be halted"

/-- Assert that at least one event in the last step matches `pred`. -/
def assertHasEvent
    (t : MachineTester dir) (pred : Event dir → Bool) (msg : String) : MachineTester dir :=
  t.withLastStep "assertHasEvent" fun t step =>
    if step.events.any pred then t
    else t.addError s!"{msg}\n  events: {repr step.events}"

/-- Assert that no event in the last step matches `pred`. -/
def assertNoEvent
    (t : MachineTester dir) (pred : Event dir → Bool) (msg : String) : MachineTester dir :=
  t.withLastStep "assertNoEvent" fun t step =>
    if step.events.any pred then
      t.addError s!"{msg}\n  events: {repr step.events}"
    else t

/-- Assert that the last step contains an `endHeaders` event. -/
def assertHasEndHeaders (t : MachineTester dir) : MachineTester dir :=
  t.assertHasEvent (fun | .endHeaders _ => true | _ => false) "expected endHeaders event"

/-- Assert that the last step contains a `failed` event for the given error. -/
def assertHasFailedEvent (t : MachineTester dir) (expected : Error) : MachineTester dir :=
  t.assertHasEvent (fun | .failed err => err == expected | _ => false)
    s!"expected failed event with {repr expected}"

/-- Assert that the last step contains a `closeBody` event. -/
def assertHasCloseBody (t : MachineTester dir) : MachineTester dir :=
  t.assertHasEvent (fun | .closeBody => true | _ => false) "expected closeBody event"

/-- Assert that the last step contains a `next` event. -/
def assertHasNext (t : MachineTester dir) : MachineTester dir :=
  t.assertHasEvent (fun | .next => true | _ => false) "expected next event"

/-- Assert that the last step contains a `continue` event. -/
def assertHasContinue (t : MachineTester dir) : MachineTester dir :=
  t.assertHasEvent (fun | .«continue» => true | _ => false) "expected continue event"

/-- Inspect the `endHeaders` payload in the last step. -/
def onEndHeaders
    (t : MachineTester dir)
    (f : MachineTester dir → Message.Head dir → MachineTester dir) : MachineTester dir :=
  t.withLastStep "onEndHeaders" fun t step =>
    match step.events.findSome? (fun | .endHeaders h => some h | _ => none) with
    | none => t.addError "onEndHeaders: no endHeaders event in last step"
    | some head => f t head

/-- Assert that the cumulative output starts with the given ASCII string. -/
def assertOutputStartsWith (t : MachineTester dir) (pfx : String) (msg : String) : MachineTester dir :=
  let s := String.fromUTF8! t.allOutput
  if s.startsWith pfx then t
  else
    let preview := String.fromUTF8! (t.allOutput.extract 0 (min t.allOutput.size 120))
    t.addError s!"{msg}: expected output to start with {repr pfx}\n  got: {repr preview}"

/-- Assert that the cumulative output contains the given ASCII substring. -/
def assertOutputContains (t : MachineTester dir) (needle : String) (msg : String) : MachineTester dir :=
  let haystack := t.allOutput
  let nb := needle.toUTF8
  let found :=
    if nb.isEmpty then true
    else if nb.size > haystack.size then false
    else (Array.range (haystack.size - nb.size + 1)).any fun i =>
      (Array.range nb.size).all fun j => haystack.get! (i + j) == nb.get! j
  if found then t
  else
    let preview := String.fromUTF8! (haystack.extract 0 (min haystack.size 160))
    t.addError s!"{msg}: expected output to contain {repr needle}\n  output: {repr preview}"

/-- Assert that the cumulative output does not contain the given ASCII substring. -/
def assertOutputNotContains (t : MachineTester dir) (needle : String) (msg : String) : MachineTester dir :=
  let haystack := t.allOutput
  let nb := needle.toUTF8
  let found :=
    if nb.isEmpty then true
    else if nb.size > haystack.size then false
    else (Array.range (haystack.size - nb.size + 1)).any fun i =>
      (Array.range nb.size).all fun j => haystack.get! (i + j) == nb.get! j
  if found then
    let preview := String.fromUTF8! (haystack.extract 0 (min haystack.size 160))
    t.addError s!"{msg}: expected output NOT to contain {repr needle}\n  output: {repr preview}"
  else t

/-- Assert that the total bytes pulled so far equal `expected`. -/
def assertPulledBody (t : MachineTester dir) (expected : ByteArray) : MachineTester dir :=
  let got := t.pulled.foldl (fun acc c => acc ++ c.chunk.data) ByteArray.empty
  if got == expected then t
  else t.addError
    s!"body mismatch:\n  expected={String.fromUTF8! expected |>.quote}\n  got={String.fromUTF8! got |>.quote}"

/-- Assert that at least one chunk was pulled and the last one is `final`. -/
def assertLastChunkFinal (t : MachineTester dir) : MachineTester dir :=
  match t.pulled.back? with
  | none => t.addError "assertLastChunkFinal: no chunks pulled yet"
  | some chunk =>
    if chunk.final then t
    else t.addError "expected last pulled chunk to be final"

/-- Run a custom check on the current machine state. -/
def onMachine (t : MachineTester dir) (f : MachineTester dir → Machine dir → MachineTester dir) : MachineTester dir :=
  f t t.machine

/-- Throw if any assertion has failed; otherwise succeed. -/
def run (t : MachineTester dir) : IO Unit :=
  unless t.errors.isEmpty do
    throw <| IO.userError <| "\n".intercalate t.errors.toList

end MachineTester

----------------------------------------------------------------------------------------------------

private def mkGet (path : String := "/") (extra : String := "") : String :=
  s!"GET {path} HTTP/1.1\r\nHost: example.com\r\n{extra}\r\n"

private def mkGet10 (path : String := "/") : String :=
  s!"GET {path} HTTP/1.0\r\n\r\n"

private def mkPost (path : String) (bodyLen : Nat) (extra : String := "") : String :=
  s!"POST {path} HTTP/1.1\r\nHost: example.com\r\nContent-Length: {bodyLen}\r\n{extra}\r\n"

private def mkChunkedPost (path : String) (extra : String := "") : String :=
  s!"POST {path} HTTP/1.1\r\nHost: example.com\r\nTransfer-Encoding: chunked\r\n{extra}\r\n"

----------------------------------------------------------------------------------------------------

private def minimalGetRequest : Request.Head :=
  { method := .get, version := .v11, uri := RequestTarget.originForm! "/",
    headers := Headers.empty.insert! "Host" "example.com" }

----------------------------------------------------------------------------------------------------

#eval show IO Unit from do
  -- RFC 9112 §2.2: a server SHOULD accept leading CRLF lines before a request-line.
  MachineTester.receiving "RFC 9112 §2.2: leading CRLF ignored before request-line" (config := { maxLeadingEmptyLines := 8 })
    |>.feed "\r\n\r\nGET / HTTP/1.1\r\nHost: example.com\r\n\r\n"
    |>.step
    |>.assertNoError
    |>.assertHasEndHeaders
    |>.run

  -- RFC 9112 §2.2: a server SHOULD accept leading CRLF lines before a request-line.
  MachineTester.receiving "RFC 9112 §2.2: leading CRLF ignored before request-line" (config := { maxLeadingEmptyLines := 8 })
    |>.feed "\r\n\r\nGET / HTTP/1.1\r\nHost: example.com\r\n\r\n"
    |>.step
    |>.assertNoError
    |>.assertHasEndHeaders
    |>.run

#eval show IO Unit from do
  -- RFC 9112 §2: unsupported HTTP version → unsupported version error.
  MachineTester.receiving "RFC 9112 §2.5: HTTP/2.0 → unsupportedVersion"
    |>.feed "GET / HTTP/2.0\r\nHost: example.com\r\n\r\n"
    |>.step
    |>.assertFailedWith .unsupportedVersion
    |>.run

  -- RFC 9112 §3 — Request line, methods, and request targets
  MachineTester.receiving "RFC 9112 §3 GET: method and version"
    |>.feed "GET /path HTTP/1.1\r\nHost: example.com\r\n\r\n"
    |>.step
    |>.assertNoError
    |>.onEndHeaders (fun t head =>
      if head.method != .get then t.addError s!"expected method GET, got {repr head.method}"
      else if head.version != .v11 then t.addError s!"expected HTTP/1.1, got {repr head.version}"
      else t)
    |>.run
