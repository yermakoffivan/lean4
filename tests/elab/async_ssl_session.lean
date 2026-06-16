import Std.Internal.SSL

/-!
Tests for `Std.Internal.SSL.Session`: in-process TLS handshake, data transfer,
and buffering behaviour driven entirely through memory BIOs (no sockets).

This is the session layer split out of #13112 (`TCP.SSL`); it builds on the
`Context` layer and is in turn used by the async `TCP.SSL` socket.
-/

open Std.Internal.SSL

-- ---------------------------------------------------------------------------
-- Helpers
-- ---------------------------------------------------------------------------

def assertEqStr (actual expected : String) : IO Unit := do
  unless actual == expected do
    throw <| IO.userError s!"expected '{expected}', got '{actual}'"

def assertGt (actual : UInt64) (bound : UInt64) (label : String) : IO Unit := do
  unless actual > bound do
    throw <| IO.userError s!"{label}: expected > {bound}, got {actual}"

def assertEqN (actual expected : UInt64) (label : String) : IO Unit := do
  unless actual == expected do
    throw <| IO.userError s!"{label}: expected {expected}, got {actual}"

-- Generate a self-signed certificate for testing (cached: skips generation if files exist).
def setupTestCerts : IO (String × String) := do
  IO.FS.createDirAll "/tmp/lean_ssl_test"
  let keyFile  := "/tmp/lean_ssl_test/key.pem"
  let certFile := "/tmp/lean_ssl_test/cert.pem"

  let keyExists  ← System.FilePath.pathExists keyFile
  let certExists ← System.FilePath.pathExists certFile
  unless keyExists && certExists do
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["genrsa", "-out", keyFile, "2048"]
    }
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["req", "-new", "-x509", "-key", keyFile, "-out", certFile, "-days", "1", "-subj", "/CN=localhost"]
    }

  return (certFile, keyFile)

instance : Coe Session.Client Session := ⟨Session.Client.toSession⟩
instance : Coe Session.Server Session := ⟨Session.Server.toSession⟩

-- Drive one handshake step: advance both state machines and exchange encrypted
-- bytes between their memory BIOs. Returns (clientDone, serverDone).
def handshakeStep (c s : Session) : IO (Bool × Bool) := do
  let cd ← c.handshake
  let cOut ← c.drainEncrypted
  if cOut.size > 0 then
    discard <| s.feedEncrypted cOut
  let sd ← s.handshake
  let sOut ← s.drainEncrypted
  if sOut.size > 0 then
    discard <| c.feedEncrypted sOut
  return (cd.isNone, sd.isNone)

partial def runHandshake (c s : Session) : IO Unit := do
  let (cd, sd) ← handshakeStep c s
  unless cd && sd do runHandshake c s

-- Pipe all pending encrypted output from src into dst's read BIO.
def pipeEncrypted (src dst : Session) : IO Unit := do
  let bytes ← src.drainEncrypted
  if bytes.size > 0 then
    discard <| dst.feedEncrypted bytes

-- ---------------------------------------------------------------------------
-- Test: client configured from an in-memory PEM verifies the server cert.
-- ---------------------------------------------------------------------------

def testConfigureClientFromPEM (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let caPEM ← IO.FS.readFile certFile
  let clientCtx ← Context.Client.mk
  clientCtx.configureFromPEM caPEM true

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  clientSess.setServerName "localhost"

  runHandshake clientSess serverSess

  let code ← clientSess.verifyResult
  assertEqN code 0 "verifyResult after configureFromPEM"

-- ---------------------------------------------------------------------------
-- Test: in-process TLS handshake between two memory-BIO sessions.
-- ---------------------------------------------------------------------------

def testInProcessHandshake (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false  -- skip peer verification

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx

  -- setServerName exercises SSL_set_tlsext_host_name.
  clientSess.setServerName "localhost"

  runHandshake clientSess serverSess

  -- verifyResult: just verify the call succeeds (self-signed cert returns
  -- X509_V_ERR_DEPTH_ZERO_SELF_SIGNED_CERT even with VERIFY_NONE).
  discard <| clientSess.verifyResult

-- ---------------------------------------------------------------------------
-- Test: write / pendingEncrypted / drainEncrypted / feedEncrypted / read?
-- ---------------------------------------------------------------------------

def testDataTransfer (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx

  runHandshake clientSess serverSess

  -- write plaintext → encrypted bytes appear in the write BIO.
  let msg := "hello, tls!".toUTF8
  discard <| clientSess.write msg

  -- pendingEncrypted > 0 before draining.
  let pending ← clientSess.pendingEncrypted
  assertGt pending 0 "pendingEncrypted"

  -- Pipe to server and read back.
  pipeEncrypted clientSess serverSess
  let received ← serverSess.read? 1024
  match received with
  | .data bytes => assertEqStr (String.fromUTF8! bytes) "hello, tls!"
  | _ => throw <| IO.userError "expected data from server session"

  -- After draining, pendingEncrypted drops to 0.
  let pendingAfter ← clientSess.pendingEncrypted
  assertEqN pendingAfter 0 "pendingEncrypted after drain"

  -- read? returns wantIO when no data is available.
  let empty ← clientSess.read? 1024
  match empty with
  | .wantIO _ => return ()
  | _ => throw <| IO.userError "expected wantIO when no data available"

-- ---------------------------------------------------------------------------
-- Test: pendingPlaintext — write 100 bytes, read 10, rest stays buffered.
-- ---------------------------------------------------------------------------

def testPendingPlaintext (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx

  runHandshake clientSess serverSess

  let bigMsg := (String.ofList (List.replicate 100 'x')).toUTF8
  discard <| clientSess.write bigMsg
  pipeEncrypted clientSess serverSess

  -- Read only 10 bytes; the remaining 90 stay in SSL's plaintext buffer.
  discard <| serverSess.read? 10
  let remaining ← serverSess.pendingPlaintext
  assertEqN remaining 90 "pendingPlaintext after partial read"

-- ---------------------------------------------------------------------------
-- Test: empty write returns none.
-- ---------------------------------------------------------------------------

def testEmptyWrite (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  let result ← clientSess.write ByteArray.empty
  unless result.isNone do
    throw <| IO.userError "empty write should return none"

-- ---------------------------------------------------------------------------
-- Test: read? 0 returns wantIO (not .data empty) when no data is buffered.
-- ---------------------------------------------------------------------------

def testReadZero (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  -- No data has been sent; read? 0 must signal wantIO, not return .data empty.
  let result ← serverSess.read? 0
  match result with
  | .wantIO _ => return ()
  | .data b   => throw <| IO.userError s!"read? 0 returned .data (size={b.size}) instead of wantIO"
  | .closed   => throw <| IO.userError "read? 0 returned .closed unexpectedly"

-- ---------------------------------------------------------------------------
-- Test: multiple pending writes flush in order (exercises deque pop_front).
-- ---------------------------------------------------------------------------

def testPendingWriteOrder (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  -- Write three distinct messages through the client session and verify the
  -- server receives them in the same order.  This exercises the pending_writes
  -- deque: each write drains the queue front-to-back before appending.
  let msgs := #["first".toUTF8, "second".toUTF8, "third".toUTF8]
  for m in msgs do
    discard <| clientSess.write m
    pipeEncrypted clientSess serverSess

  let mut received : Array String := #[]
  for _ in msgs do
    let r ← serverSess.read? 1024
    match r with
    | .data b => received := received.push (String.fromUTF8! b)
    | _       => throw <| IO.userError "expected data in pending write order test"

  for i in List.range msgs.size do
    let expected := String.fromUTF8! msgs[i]!
    unless received[i]! == expected do
      throw <| IO.userError s!"write order mismatch at {i}: expected '{expected}', got '{received[i]!}'"

-- ---------------------------------------------------------------------------
-- Test: verifyResultString returns a non-empty string after handshake.
-- ---------------------------------------------------------------------------

def testVerifyResultString (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  let s ← clientSess.verifyResultString
  if s.isEmpty then
    throw <| IO.userError "verifyResultString returned empty string"

-- ---------------------------------------------------------------------------
-- Run all tests
-- ---------------------------------------------------------------------------

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testConfigureClientFromPEM certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testInProcessHandshake certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testDataTransfer certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testPendingPlaintext certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testEmptyWrite certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testReadZero certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testPendingWriteOrder certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testVerifyResultString certFile keyFile

/-- Returns `true` if `act` raised an `IO` exception. -/
def threw (act : IO α) : IO Bool := do
  try
    discard act; return false
  catch _ =>
    return true

#eval do
  let (certFile, keyFile) ← setupTestCerts
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false
  let s ← Session.Server.mk serverCtx
  let c ← Session.Client.mk clientCtx
  runHandshake s.toSession c.toSession

  -- A corrupt encrypted record fed into the server's input BIO.
  let garbage := ByteArray.mk (List.replicate 64 (0x17 : UInt8)).toArray

  -- Normal read raises on the fatal record.
  discard <| s.feedEncrypted garbage
  let threwNormal ← threw (s.read? 1)

  -- The peek path (`read? 0`) must ALSO raise, not silently return `.wantIO`.
  discard <| s.feedEncrypted garbage
  let threwPeek ← threw (s.read? 0)

  unless threwNormal && threwPeek do
    throw <| IO.userError
      s!"read? must raise on a corrupt record: read? 1 threw={threwNormal}, read? 0 threw={threwPeek}"

-- A `read?` larger than one TLS record returns at most one record (16 KiB) per call, and successive
-- calls return the rest with no data loss (regression for the `read?` allocation cap).
#eval do
  let (certFile, keyFile) ← setupTestCerts
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false
  let s ← Session.Server.mk serverCtx
  let c ← Session.Client.mk clientCtx
  runHandshake s.toSession c.toSession

  let payload := ByteArray.mk ((List.replicate 100000 (0x41 : UInt8)).toArray)
  discard <| c.write payload
  pipeEncrypted c.toSession s.toSession

  -- One oversized read returns exactly one record's worth of plaintext.
  let first ← s.read? 1000000
  let firstSize := match first with | .data b => b.size | _ => 0
  assertEqN firstSize.toUInt64 16384 "first oversized read returns one record"

  -- Drain the rest; the total must equal what was written (no data lost to the cap).
  let mut total := firstSize
  let mut go := true
  while go do
    match ← s.read? 1000000 with
    | .data b => total := total + b.size
    | _ => go := false
  assertEqN total.toUInt64 100000 "total plaintext received"

-- When plaintext is already buffered (a partial read left a remainder), a subsequent oversized
-- `read?` returns exactly the buffered remainder (regression for the `SSL_pending`-based sizing).
#eval do
  let (certFile, keyFile) ← setupTestCerts
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false
  let s ← Session.Server.mk serverCtx
  let c ← Session.Client.mk clientCtx
  runHandshake s.toSession c.toSession

  -- One record's worth of plaintext, sent and decrypted via a partial read.
  let msg := "HELLO".toUTF8
  discard <| c.write msg
  pipeEncrypted c.toSession s.toSession

  -- Read only the first 2 bytes; the remaining 3 stay buffered (SSL_pending == 3).
  let part ← s.read? 2
  assertEqN (match part with | .data b => b.size.toUInt64 | _ => 0) 2 "partial read size"
  assertEqN (← s.pendingPlaintext) 3 "buffered remainder after partial read"

  -- An oversized read now returns exactly the 3 buffered bytes.
  let rest ← s.read? 1000000
  assertEqN (match rest with | .data b => b.size.toUInt64 | _ => 0) 3 "oversized read returns buffered remainder"
