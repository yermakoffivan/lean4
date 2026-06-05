import Std.Async.TCP.SSL
import Std.Net.Addr

/-!
Tests for `Std.Async.TCP.SSL`: TLS context creation, in-process memory-BIO handshake,
data transfer, shutdown sequences, and full TCP round-trips using the SSL socket API.
-/

open Std Async TCP.SSL
open Std.Net
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
-- Test 1: Context creation and configuration (smoke test)
-- ---------------------------------------------------------------------------

def testContextCreation (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  -- Configuring with a CA file path (non-empty) exercises the other branch.
  let clientCtx2 ← Context.Client.mk
  clientCtx2.configure certFile false

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
-- Test 2: In-process TLS handshake between two memory-BIO sessions
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
-- Test 3: write / pendingEncrypted / drainEncrypted / feedEncrypted / read?
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
-- Test 4: pendingPlaintext — write 100 bytes, read 10, rest stays buffered
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
-- Test 5: Full TCP/TLS round-trip
-- ---------------------------------------------------------------------------

def serverTask (server : TCP.SSL.Server) : Async Unit := do
  let client ← server.accept
  let msg ← client.recv? 1024
  client.send (msg.getD ByteArray.empty)  -- echo
  Async.ofPromise client.native.shutdown

def clientTask (addr : SocketAddress) (clientCtx : Context.Client) : Async Unit := do
  let client ← Client.mk clientCtx
  client.setServerName "localhost"
  client.connect addr
  client.noDelay
  client.send "hello over tls".toUTF8
  let resp ← client.recv? 1024
  let got := String.fromUTF8! (resp.getD ByteArray.empty)
  unless got == "hello over tls" do
    throw <| IO.userError s!"round-trip mismatch: '{got}'"
  let _ ← client.getPeerName
  let _ ← client.getSockName
  let _ ← client.verifyResult
  Async.ofPromise client.native.shutdown

def testTCPSSL (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let _ ← server.getSockName

  let srvTask ← (serverTask server).toIO
  let cliTask ← (clientTask addr clientCtx).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 6: Multiple sequential round-trips (no hang between messages)
-- ---------------------------------------------------------------------------

def testMultipleRoundTrips (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    for _ in List.range 5 do
      let msg ← conn.recv? 1024
      conn.send (msg.getD ByteArray.empty)
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    for i in List.range 5 do
      let payload := s!"msg{i}".toUTF8
      client.send payload
      let resp ← client.recv? 1024
      let got := String.fromUTF8! (resp.getD ByteArray.empty)
      unless got == s!"msg{i}" do
        throw <| IO.userError s!"round-trip {i} mismatch: '{got}'"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 7: Large payload (> one TLS record = 16 KB), no hang on fragmentation
-- ---------------------------------------------------------------------------

def testLargePayload (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let payloadSize := 64 * 1024  -- 64 KB: spans multiple TLS records
  let payload := ByteArray.mk (List.replicate payloadSize 0x42).toArray

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    -- Accumulate until we have all bytes, then echo back.
    let mut buf := ByteArray.empty
    while buf.size < payloadSize do
      let chunk ← conn.recv? (payloadSize - buf.size).toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    conn.send buf
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.send payload
    let mut buf := ByteArray.empty
    while buf.size < payloadSize do
      let chunk ← client.recv? (payloadSize - buf.size).toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    unless buf.size == payloadSize do
      throw <| IO.userError s!"large payload size mismatch: {buf.size}"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 8: recv? returns none after peer shutdown (no hang on closed conn)
-- ---------------------------------------------------------------------------

def testRecvAfterShutdown (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    let msg ← conn.recv? 1024
    conn.send (msg.getD ByteArray.empty)
    Async.ofPromise conn.native.shutdown  -- server closes write side first
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.send "ping".toUTF8
    -- Receive the echo
    let resp ← client.recv? 1024
    let got := String.fromUTF8! (resp.getD ByteArray.empty)
    unless got == "ping" do
      throw <| IO.userError s!"echo mismatch: '{got}'"
    -- After server TCP-only shutdown (no close_notify), recv? must throw a
    -- truncation error, not silently return none.
    try
      let _ ← client.recv? 1024
      throw <| IO.userError "expected truncation error after server TCP-only shutdown"
    catch e =>
      let msg := toString e
      unless msg.contains "truncation" || msg.contains "close_notify" do
        throw e
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 9: acceptSelector delivers a fully-handshaked connection
-- ---------------------------------------------------------------------------

def testAcceptSelector (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← Selectable.one #[
      .case (selector := server.acceptSelector) (cont := fun c => return c)
    ]
    let msg ← conn.recv? 1024
    conn.send (msg.getD ByteArray.empty)
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.send "via selector".toUTF8
    let resp ← client.recv? 1024
    let got := String.fromUTF8! (resp.getD ByteArray.empty)
    unless got == "via selector" do
      throw <| IO.userError s!"selector round-trip mismatch: '{got}'"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 10: sendAll — multiple buffers are fully delivered and echoed
-- ---------------------------------------------------------------------------

def testSendAll (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  -- Three chunks whose concatenation we can verify.
  let chunks  := #["alpha".toUTF8, "beta".toUTF8, "gamma".toUTF8]
  let expected := "alphabetagamma"
  let total    := expected.length

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    let mut buf := ByteArray.empty
    while buf.size < total do
      let chunk ← conn.recv? total.toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    conn.send buf
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.sendAll chunks
    let mut buf := ByteArray.empty
    while buf.size < total do
      let chunk ← client.recv? total.toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    assertEqStr (String.fromUTF8! buf) expected
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 11: recvSelector — server pushes data, client receives via selector
-- ---------------------------------------------------------------------------

def testRecvSelector (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    conn.send "pushed".toUTF8
    let ack ← conn.recv? 1024
    let got := String.fromUTF8! (ack.getD ByteArray.empty)
    unless got == "ack" do
      throw <| IO.userError s!"server: expected 'ack', got '{got}'"
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- Block until the server's push arrives, using recvSelector.
    let result ← Selectable.one #[
      .case (selector := client.recvSelector 1024) (cont := fun r => return r)
    ]
    let got := String.fromUTF8! (result.getD ByteArray.empty)
    unless got == "pushed" do
      throw <| IO.userError s!"recvSelector mismatch: '{got}'"
    client.send "ack".toUTF8
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 12: Sequential reuse — same server socket handles N clients in a row
-- ---------------------------------------------------------------------------

def testSequentialConnections (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  for i in List.range 3 do
    let srvTask ← (do
      let conn ← server.accept
      let msg ← conn.recv? 1024
      conn.send (msg.getD ByteArray.empty)
      Async.ofPromise conn.native.shutdown
    : Async Unit).toIO

    let cliTask ← (do
      let client ← Client.mk clientCtx
      client.setServerName "localhost"
      client.connect addr
      let payload := s!"conn-{i}".toUTF8
      client.send payload
      let resp ← client.recv? 1024
      let got := String.fromUTF8! (resp.getD ByteArray.empty)
      unless got == s!"conn-{i}" do
        throw <| IO.userError s!"connection {i} echo mismatch: '{got}'"
      Async.ofPromise client.native.shutdown
    : Async Unit).toIO

    srvTask.block
    cliTask.block

-- ---------------------------------------------------------------------------
-- Test 13: Simultaneous bidirectional — both sides send before either reads,
--          verifying no deadlock occurs.
-- ---------------------------------------------------------------------------

def testBidirectional (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    conn.send "from-server".toUTF8        -- send without waiting for client first
    let msg ← conn.recv? 1024
    let got := String.fromUTF8! (msg.getD ByteArray.empty)
    unless got == "from-client" do
      throw <| IO.userError s!"server recv mismatch: '{got}'"
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.send "from-client".toUTF8      -- send without waiting for server first
    let msg ← client.recv? 1024
    let got := String.fromUTF8! (msg.getD ByteArray.empty)
    unless got == "from-server" do
      throw <| IO.userError s!"client recv mismatch: '{got}'"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 14: write ByteArray.empty returns none without touching the SSL engine
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
-- Test 15: read? 0 returns wantIO (not .data empty) when no data is buffered
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
-- Test 16: multiple pending writes flush in order (exercises deque pop_front)
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
-- Test 17: verifyResultString returns a non-empty string after handshake
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
  testContextCreation certFile keyFile

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
  testTCPSSL (SocketAddressV4.mk (.ofParts 127 0 0 1) 18443) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testTCPSSL (SocketAddressV6.mk (.ofParts 0 0 0 0 0 0 0 1) 18444) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testMultipleRoundTrips (SocketAddressV4.mk (.ofParts 127 0 0 1) 18445) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testLargePayload (SocketAddressV4.mk (.ofParts 127 0 0 1) 18446) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testRecvAfterShutdown (SocketAddressV4.mk (.ofParts 127 0 0 1) 18447) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testAcceptSelector (SocketAddressV4.mk (.ofParts 127 0 0 1) 18448) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testSendAll (SocketAddressV4.mk (.ofParts 127 0 0 1) 18449) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testRecvSelector (SocketAddressV4.mk (.ofParts 127 0 0 1) 18450) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testSequentialConnections (SocketAddressV4.mk (.ofParts 127 0 0 1) 18451) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testBidirectional (SocketAddressV4.mk (.ofParts 127 0 0 1) 18452) certFile keyFile

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

-- ---------------------------------------------------------------------------
-- Test 18: tlsShutdown — both sides exchange close_notify over TCP
-- ---------------------------------------------------------------------------

def testTLSShutdown (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    let msg ← conn.recv? 1024
    conn.send (msg.getD ByteArray.empty)
    conn.tlsShutdown  -- proper TLS close
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.send "shutdown-test".toUTF8
    let resp ← client.recv? 1024
    let got := String.fromUTF8! (resp.getD ByteArray.empty)
    unless got == "shutdown-test" do
      throw <| IO.userError s!"shutdown round-trip mismatch: '{got}'"
    client.tlsShutdown  -- proper TLS close on client too
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 19: in-process closeNotify — drain and feed close_notify bytes directly
-- ---------------------------------------------------------------------------

def testCloseNotify (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  -- Initiate shutdown from the client side.
  -- SSL_shutdown (rc=0) means our close_notify was sent; waiting for peer's.
  discard <| Session.closeNotify clientSess
  -- Deliver client's close_notify bytes to the server.
  pipeEncrypted clientSess serverSess
  -- Server calls SSL_shutdown; since it already received the client's
  -- close_notify and now sends its own, rc should be 1 (bidirectional done).
  discard <| Session.closeNotify serverSess
  -- Deliver server's close_notify back to the client.
  pipeEncrypted serverSess clientSess
  -- A second client closeNotify should now return none (done).
  discard <| Session.closeNotify clientSess

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testTLSShutdown (SocketAddressV4.mk (.ofParts 127 0 0 1) 18453) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testCloseNotify certFile keyFile

-- ---------------------------------------------------------------------------
-- Test 21: exact-size read — send N bytes, read? N returns exactly N bytes
-- ---------------------------------------------------------------------------

def testExactSizeRead (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  let payload := "exactread".toUTF8   -- 9 bytes
  discard <| clientSess.write payload
  pipeEncrypted clientSess serverSess

  let result ← serverSess.read? 9
  match result with
  | .data bytes =>
    unless bytes.size == 9 do
      throw <| IO.userError s!"exact-size read: expected 9 bytes, got {bytes.size}"
    unless bytes == payload do
      throw <| IO.userError "exact-size read: content mismatch"
  | _ => throw <| IO.userError "exact-size read: expected .data"

-- ---------------------------------------------------------------------------
-- Test 22: zero-byte send — send ByteArray.empty, no hang, no state corruption
-- ---------------------------------------------------------------------------

def testZeroByteSend (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    -- Zero-byte send before and after a real message must not corrupt framing.
    conn.send ByteArray.empty
    conn.send "real".toUTF8
    conn.send ByteArray.empty
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- The real message must still arrive intact.
    let resp ← client.recv? 1024
    let got := String.fromUTF8! (resp.getD ByteArray.empty)
    unless got == "real" do
      throw <| IO.userError s!"zero-byte send: expected 'real', got '{got}'"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 23: verifyResult and verifyResultString are consistent after handshake
-- Under VERIFY_NONE with a self-signed cert, OpenSSL still evaluates the
-- chain internally. The exact code (0 = ok, 18 = self-signed, etc.) depends
-- on the OpenSSL version and cert store, so we only check that the string
-- returned by verifyResultString matches what X509_verify_cert_error_string
-- would produce for the same code (i.e. it is non-empty and consistent).
-- ---------------------------------------------------------------------------

def testVerifyResultCode (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false   -- VERIFY_NONE

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  -- verifyResult returns a numeric code; verifyResultString returns its description.
  -- We just check that the call succeeds and returns a non-empty string.
  let s ← Session.verifyResultString clientSess
  unless s.length > 0 do
    throw <| IO.userError "verifyResult: verifyResultString returned empty string after handshake"

-- ---------------------------------------------------------------------------
-- Test 24: recv? returns none after peer TCP-only shutdown (no TLS close_notify)
-- When the peer calls shutdown without sending a TLS close_notify, the client's
-- recv? must return none rather than hanging.
-- ---------------------------------------------------------------------------

def testRecvAfterTCPClose (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    Async.ofPromise conn.native.shutdown  -- TCP-only close, no TLS close_notify
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- recv? must throw a truncation error (not silently return none) when the
    -- peer closes TCP without sending a close_notify alert.
    try
      let _ ← client.recv? 1024
      throw <| IO.userError "recv? after TCP-only close: expected truncation error, got none"
    catch e =>
      let msg := toString e
      unless msg.contains "truncation" || msg.contains "close_notify" do
        throw e
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 27: sendAll with empty array — no hang, connection still usable
-- ---------------------------------------------------------------------------

def testSendAllEmpty (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    let msg ← conn.recv? 1024
    conn.send (msg.getD ByteArray.empty)
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    client.sendAll #[]          -- empty array: should be a no-op
    client.send "after-empty".toUTF8
    let resp ← client.recv? 1024
    let got := String.fromUTF8! (resp.getD ByteArray.empty)
    unless got == "after-empty" do
      throw <| IO.userError s!"sendAll empty: expected 'after-empty', got '{got}'"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 28: many small messages — 50 one-byte writes arrive in order and complete
-- ---------------------------------------------------------------------------

def testManySmallMessages (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let n := 50
  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    -- Accumulate all n bytes.
    let mut buf := ByteArray.empty
    while buf.size < n do
      let chunk ← conn.recv? (n - buf.size).toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    conn.send buf
    Async.ofPromise conn.native.shutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- Send n individual one-byte messages.
    for i in List.range n do
      client.send (ByteArray.mk #[i.toUInt8])
    -- Receive all n bytes back.
    let mut buf := ByteArray.empty
    while buf.size < n do
      let chunk ← client.recv? (n - buf.size).toUInt64
      buf := buf ++ chunk.getD ByteArray.empty
    unless buf.size == n do
      throw <| IO.userError s!"many small messages: expected {n} bytes, got {buf.size}"
    for i in List.range n do
      unless buf[i]! == i.toUInt8 do
        throw <| IO.userError s!"many small messages: byte {i} mismatch"
    Async.ofPromise client.native.shutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 29: tlsShutdown then recv? returns none
-- After both sides call tlsShutdown, a subsequent recv? must return none
-- rather than hanging or returning stale data.
-- ---------------------------------------------------------------------------

def testRecvAfterTLSShutdown (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    conn.send "before-close".toUTF8
    conn.tlsShutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- Consume the message sent before shutdown.
    let msg ← client.recv? 1024
    let got := String.fromUTF8! (msg.getD ByteArray.empty)
    unless got == "before-close" do
      throw <| IO.userError s!"recv after tlsShutdown: expected 'before-close', got '{got}'"
    -- After the server's tlsShutdown, recv? must return none.
    let closed ← client.recv? 1024
    unless closed.isNone do
      throw <| IO.userError "recv after tlsShutdown: expected none after server tlsShutdown"
    client.tlsShutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testExactSizeRead certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testZeroByteSend (SocketAddressV4.mk (.ofParts 127 0 0 1) 18454) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testVerifyResultCode certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testRecvAfterTCPClose (SocketAddressV4.mk (.ofParts 127 0 0 1) 18456) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testSendAllEmpty (SocketAddressV4.mk (.ofParts 127 0 0 1) 18457) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testManySmallMessages (SocketAddressV4.mk (.ofParts 127 0 0 1) 18458) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testRecvAfterTLSShutdown (SocketAddressV4.mk (.ofParts 127 0 0 1) 18459) certFile keyFile

-- ---------------------------------------------------------------------------
-- Test 30: in-process close_notify exchange using memory BIOs — verifies the
-- two-phase SSL_shutdown sequence: client sends alert, server receives and
-- replies, final client shutdown returns none.
-- ---------------------------------------------------------------------------

def testCloseNotifySequenceBIO (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  -- Phase 1: client initiates shutdown.
  discard <| clientSess.closeNotify
  pipeEncrypted clientSess serverSess

  -- Phase 2: server receives client close_notify and sends its own.
  let w2 ← serverSess.closeNotify
  pipeEncrypted serverSess clientSess

  -- Phase 3: client receives server close_notify → bidirectional done.
  let w3 ← clientSess.closeNotify

  match w2 with
  | some _ => throw <| IO.userError "closeNotify sequence: server returned Some after receiving client alert"
  | none   => pure ()
  match w3 with
  | some _ => throw <| IO.userError "closeNotify sequence: client returned Some after bidirectional shutdown"
  | none   => pure ()

-- ---------------------------------------------------------------------------
-- Test 31: in-process read after write — verifies the normal SSL_read path
-- delivers all bytes written by the peer session.
-- ---------------------------------------------------------------------------

def testReadWithPendingData (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  let msg := "no-want-write".toUTF8
  discard <| clientSess.write msg
  pipeEncrypted clientSess serverSess

  match ← serverSess.read? 1024 with
  | .data bytes =>
    unless String.fromUTF8! bytes == "no-want-write" do
      throw <| IO.userError "readWithPendingData: data mismatch"
  | .wantIO _ => throw <| IO.userError "readWithPendingData: WANT_IO with data in BIO"
  | .closed   => throw <| IO.userError "readWithPendingData: unexpected closed"

-- ---------------------------------------------------------------------------
-- Test 32: plaintext delivered before close_notify — feeds data records and a
-- close_notify alert into the BIO simultaneously, then reads in 50-byte chunks.
-- All bytes must arrive before .closed.
-- ---------------------------------------------------------------------------

def testPlaintextBeforeCloseNotify (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let serverSess ← Session.Server.mk serverCtx
  let clientSess ← Session.Client.mk clientCtx
  runHandshake clientSess serverSess

  let payload := ByteArray.mk ((Array.range 200).map (fun i => (i % 256).toUInt8))
  discard <| serverSess.write payload
  let encData  ← serverSess.drainEncrypted

  discard <| serverSess.closeNotify
  let encClose ← serverSess.drainEncrypted

  -- Feed both chunks at once so close_notify is already queued when reading starts.
  discard <| clientSess.feedEncrypted encData
  discard <| clientSess.feedEncrypted encClose

  let mut total := 0
  let mut stop  := false
  while !stop do
    match ← clientSess.read? 50 with
    | .data b   => total := total + b.size
    | .closed   => stop := true
    | .wantIO _ => stop := true
  unless total == 200 do
    throw <| IO.userError s!"plaintextBeforeCloseNotify: received {total}/200 bytes before .closed"

-- ---------------------------------------------------------------------------
-- Test 33: recvSelector with timeout — server sends data and the selector
-- delivers it within the timeout window.
-- ---------------------------------------------------------------------------

def testRecvSelectorWithTimeout (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    conn.send "selector-data".toUTF8
    conn.tlsShutdown
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr

    let timeout ← Sleep.mk (Std.Time.Millisecond.Offset.ofInt 2000)
    let result ← Selectable.one #[
      .case (selector := client.recvSelector 1024) (cont := fun r => return (some r)),
      .case (selector := timeout.selector)         (cont := fun _ => return none)
    ]
    match result with
    | none =>
      throw <| IO.userError "recvSelectorWithTimeout: timed out after 2 s"
    | some resp =>
      let got := String.fromUTF8! (resp.getD ByteArray.empty)
      unless got == "selector-data" do
        throw <| IO.userError s!"recvSelectorWithTimeout: expected 'selector-data', got '{got}'"
    client.tlsShutdown
  : Async Unit).toIO

  srvTask.block
  cliTask.block

-- ---------------------------------------------------------------------------
-- Test 34: hostname mismatch fails handshake — SNI 'evil.example.com' does not
-- match server cert CN=localhost, so TLS fails after setServerName is fixed to
-- call SSL_set1_host.
-- ---------------------------------------------------------------------------

def testHostnameMismatchFails (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  let clientCtx ← Context.Client.mk
  clientCtx.configure certFile true   -- our self-signed cert as CA; chain verifies

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    try
      let conn ← server.accept
      conn.tlsShutdown
    catch _ => pure ()
  : Async Unit).toIO

  let connectSucceeded ← IO.mkRef false

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "evil.example.com"   -- does NOT match CN=localhost
    client.connect addr
    connectSucceeded.set true
    client.tlsShutdown
  : Async Unit).toIO

  try cliTask.block catch _ => pure ()
  try srvTask.block catch _ => pure ()

  if ← connectSucceeded.get then
    throw <| IO.userError
      "testHostnameMismatchFails: handshake succeeded with SNI='evil.example.com' \
       but server cert CN=localhost — hostname check did not fire"

-- ---------------------------------------------------------------------------
-- Test 35: Context.Client.mk defaults to SSL_VERIFY_PEER — connecting to a
-- server with an untrusted self-signed cert must fail even without configure.
-- ---------------------------------------------------------------------------

def testDefaultVerifiesPeer (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile

  -- Deliberately do NOT call clientCtx.configure.
  let clientCtx ← Context.Client.mk

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    try
      let conn ← server.accept
      conn.tlsShutdown
    catch _ => pure ()
  : Async Unit).toIO

  let connectSucceeded ← IO.mkRef false

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    connectSucceeded.set true
    client.tlsShutdown
  : Async Unit).toIO

  try cliTask.block catch _ => pure ()
  try srvTask.block catch _ => pure ()

  if ← connectSucceeded.get then
    throw <| IO.userError
      "testDefaultVerifiesPeer: handshake succeeded without configure — \
       Context.Client.mk should default to SSL_VERIFY_PEER with system trust anchors"

-- ---------------------------------------------------------------------------
-- Test 36: verifyResult and verifyResultString are correct:
--   Part 1 — failed verification (system anchors, self-signed cert) → code > 0
--   Part 2 — successful verification (cert explicitly trusted)      → code == 0
-- ---------------------------------------------------------------------------

def testVerifyResultValues (addrFail addrOk : SocketAddress) (certFile keyFile : String) : IO Unit := do
  -- Part 1: cert verification FAILURE — code must be > 0.
  do
    let serverCtx ← Context.Server.mk
    serverCtx.configure certFile keyFile
    let clientCtx ← Context.Client.mk
    clientCtx.configure "" true   -- system anchors; self-signed cert is NOT trusted

    let server ← Server.mk serverCtx
    server.bind addrFail
    server.listen 128

    let srvTask ← (do
      try
        let conn ← server.accept
        (try conn.tlsShutdown catch _ => pure ())
      catch _ => pure ()
    : Async Unit).toIO

    let cliTask ← (do
      let client ← Client.mk clientCtx
      client.setServerName "localhost"
      try client.connect addrFail catch _ => pure ()
      let code ← client.verifyResult
      let msg  ← client.verifyResultString
      if code == 0 then
        throw <| IO.userError
          s!"testVerifyResultValues failure path: got code=0 (X509_V_OK) after a \
             handshake that should have failed certificate verification"
      if msg.isEmpty then
        throw <| IO.userError
          s!"testVerifyResultValues: verifyResultString empty for code={code}"
      if msg == "ok" then
        throw <| IO.userError
          s!"testVerifyResultValues: code={code} but string is 'ok' (mismatch)"
    : Async Unit).toIO

    srvTask.block
    cliTask.block

  -- Part 2: cert verification SUCCESS — code must be 0.
  do
    let serverCtx ← Context.Server.mk
    serverCtx.configure certFile keyFile
    let clientCtx ← Context.Client.mk
    clientCtx.configure certFile true   -- use the cert itself as the trust anchor

    let server ← Server.mk serverCtx
    server.bind addrOk
    server.listen 128

    let srvTask ← (do
      let conn ← server.accept
      conn.tlsShutdown
    : Async Unit).toIO

    let cliTask ← (do
      let client ← Client.mk clientCtx
      client.setServerName "localhost"
      client.connect addrOk
      let code ← client.verifyResult
      let msg  ← client.verifyResultString
      if code != 0 then
        throw <| IO.userError
          s!"testVerifyResultValues success path: got code={code} (expected 0 / X509_V_OK), msg='{msg}'"
      if msg != "ok" then
        throw <| IO.userError
          s!"testVerifyResultValues: code=0 but string is '{msg}', expected 'ok'"
      client.tlsShutdown
    : Async Unit).toIO

    srvTask.block
    cliTask.block

-- ---------------------------------------------------------------------------
-- Test 37: TCP close without close_notify raises a truncation error — server
-- sends data then calls TCP-only shutdown; the second recv? must throw.
-- ---------------------------------------------------------------------------

def testTCPTruncationDetection (addr : SocketAddress) (certFile keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure "" false

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    let conn ← server.accept
    conn.send "hello".toUTF8
    Async.ofPromise conn.native.shutdown   -- TCP-only close, no TLS close_notify
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    let _ ← client.recv? 1024
    -- Second recv? must throw (truncation), not silently return none.
    let threw ← try
      let _ ← client.recv? 1024
      pure false
    catch _ =>
      pure true
    unless threw do
      throw <| IO.userError
        "testTCPTruncationDetection: recv? returned none after TCP-only shutdown — \
         truncation was not detected"
  : Async Unit).toIO

  srvTask.block
  cliTask.block

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testCloseNotifySequenceBIO certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testReadWithPendingData certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testPlaintextBeforeCloseNotify certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testRecvSelectorWithTimeout (SocketAddressV4.mk (.ofParts 127 0 0 1) 18460) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testHostnameMismatchFails (SocketAddressV4.mk (.ofParts 127 0 0 1) 18461) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testDefaultVerifiesPeer (SocketAddressV4.mk (.ofParts 127 0 0 1) 18462) certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testVerifyResultValues
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18463)
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18464)
    certFile keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testTCPTruncationDetection (SocketAddressV4.mk (.ofParts 127 0 0 1) 18465) certFile keyFile

-- ---------------------------------------------------------------------------
-- Helpers: generate a wildcard cert and a multi-SAN cert (shared key)
-- ---------------------------------------------------------------------------

/-- Generate a cert with a wildcard SAN `DNS:*.test.local,DNS:test.local`. -/
def setupWildcardCert (keyFile : String) : IO String := do
  let certFile := "/tmp/lean_ssl_test/wildcard_cert.pem"
  let alreadyExists ← System.FilePath.pathExists certFile
  unless alreadyExists do
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["req", "-new", "-x509", "-key", keyFile, "-out", certFile, "-days", "1",
                "-subj", "/CN=*.test.local",
                "-addext", "subjectAltName=DNS:*.test.local,DNS:test.local"]
    }
  return certFile

/-- Generate a cert with two explicit SANs: `DNS:alpha.test.local` and `DNS:beta.test.local`. -/
def setupMultiSANCert (keyFile : String) : IO String := do
  let certFile := "/tmp/lean_ssl_test/multisan_cert.pem"
  let alreadyExists ← System.FilePath.pathExists certFile
  unless alreadyExists do
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["req", "-new", "-x509", "-key", keyFile, "-out", certFile, "-days", "1",
                "-subj", "/CN=alpha.test.local",
                "-addext", "subjectAltName=DNS:alpha.test.local,DNS:beta.test.local"]
    }
  return certFile

-- ---------------------------------------------------------------------------
-- Test 38: Wildcard SAN — `*.test.local` matches `sub.test.local` but not
-- `sub.other.local`. Exercises SSL_set1_host against wildcard SAN entries.
-- ---------------------------------------------------------------------------

/--
Verifies that `SSL_set1_host` correctly matches wildcard SAN entries:
`sub.test.local` must match `*.test.local` (success), and `sub.other.local`
must not (failure with a cert verification error).
-/
def testWildcardSAN (addrOk addrFail : SocketAddress) (wildcardCert keyFile : String) :
    IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure wildcardCert keyFile

  -- Client context trusts the wildcard cert as its only CA.
  let clientCtxOk ← Context.Client.mk
  clientCtxOk.configure wildcardCert true
  let clientCtxFail ← Context.Client.mk
  clientCtxFail.configure wildcardCert true

  -- Part A: sub.test.local should match *.test.local → handshake succeeds.
  let serverA ← Server.mk serverCtx
  serverA.bind addrOk
  serverA.listen 128

  let srvA ← (do discard <| serverA.accept : Async Unit).toIO
  let cliA ← (do
    let client ← Client.mk clientCtxOk
    client.setServerName "sub.test.local"
    client.connect addrOk
  : Async Unit).toIO
  srvA.block
  cliA.block

  -- Part B: sub.other.local should NOT match *.test.local → handshake fails.
  let serverB ← Server.mk serverCtx
  serverB.bind addrFail
  serverB.listen 128

  let srvB ← (do
    try discard <| serverB.accept
    catch _ => pure ()
  : Async Unit).toIO
  let cliB ← (do
    let client ← Client.mk clientCtxFail
    client.setServerName "sub.other.local"
    let threw ← try
      client.connect addrFail
      pure false
    catch _ =>
      pure true
    unless threw do
      throw <| IO.userError
        "testWildcardSAN: handshake succeeded for sub.other.local — wildcard mismatch not detected"
  : Async Unit).toIO
  srvB.block
  cliB.block

-- ---------------------------------------------------------------------------
-- Test 39: Multi-SAN — cert has two explicit SANs. Both match; a third name
-- does not. Exercises SSL_set1_host against multiple SAN entries.
-- ---------------------------------------------------------------------------

/--
Verifies `SSL_set1_host` against a cert with two explicit SANs:
`alpha.test.local` and `beta.test.local` both match; `gamma.test.local` does not.
-/
def testMultiSAN (addrAlpha addrBeta addrGamma : SocketAddress)
    (multiCert keyFile : String) : IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure multiCert keyFile

  let mkClient : IO Context.Client := do
    let ctx ← Context.Client.mk
    ctx.configure multiCert true
    return ctx

  -- alpha.test.local → matches first SAN → success.
  let serverAlpha ← Server.mk serverCtx
  serverAlpha.bind addrAlpha
  serverAlpha.listen 128
  let srvAlpha ← (do discard <| serverAlpha.accept : Async Unit).toIO
  let cliAlpha ← (do
    let client ← Client.mk (← mkClient)
    client.setServerName "alpha.test.local"
    client.connect addrAlpha
  : Async Unit).toIO
  srvAlpha.block
  cliAlpha.block

  -- beta.test.local → matches second SAN → success.
  let serverBeta ← Server.mk serverCtx
  serverBeta.bind addrBeta
  serverBeta.listen 128
  let srvBeta ← (do discard <| serverBeta.accept : Async Unit).toIO
  let cliBeta ← (do
    let client ← Client.mk (← mkClient)
    client.setServerName "beta.test.local"
    client.connect addrBeta
  : Async Unit).toIO
  srvBeta.block
  cliBeta.block

  -- gamma.test.local → not in SAN list → fail.
  let serverGamma ← Server.mk serverCtx
  serverGamma.bind addrGamma
  serverGamma.listen 128
  let srvGamma ← (do
    try discard <| serverGamma.accept
    catch _ => pure ()
  : Async Unit).toIO
  let cliGamma ← (do
    let client ← Client.mk (← mkClient)
    client.setServerName "gamma.test.local"
    let threw ← try
      client.connect addrGamma
      pure false
    catch _ =>
      pure true
    unless threw do
      throw <| IO.userError
        "testMultiSAN: handshake succeeded for gamma.test.local — SAN mismatch not detected"
  : Async Unit).toIO
  srvGamma.block
  cliGamma.block

-- ---------------------------------------------------------------------------
-- Test 40: Concurrent Context.Client reuse — 3 tasks share the same
-- Context.Client and connect simultaneously. Verifies that SSL_CTX reference
-- counting and per-connection SSL object allocation are safe under concurrency.
--
-- All three client tasks are launched before any `.block` call so they race
-- the handshake concurrently. The server accepts them sequentially (each in
-- its own loop iteration) which is fine because the send buffer satisfies
-- the client recv without waiting for the server loop to advance.
-- ---------------------------------------------------------------------------

/--
Verifies that a single `Context.Client` can be safely shared across three
concurrent `Client.mk` calls and simultaneous TLS handshakes, exercising
`SSL_CTX` reference counting and per-connection `SSL` object allocation.
-/
def testConcurrentContextReuse (addr : SocketAddress) (certFile keyFile : String) :
    IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure certFile keyFile
  let clientCtx ← Context.Client.mk
  clientCtx.configure certFile true

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    for _ in List.range 3 do
      let conn ← server.accept
      conn.send "hi".toUTF8
  : Async Unit).toIO

  -- Start all three client tasks before blocking on any, so the handshakes
  -- race concurrently and share the same SSL_CTX.
  let cli1 ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    discard <| client.recv? 1024
  : Async Unit).toIO
  let cli2 ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    discard <| client.recv? 1024
  : Async Unit).toIO
  let cli3 ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    discard <| client.recv? 1024
  : Async Unit).toIO

  srvTask.block
  cli1.block
  cli2.block
  cli3.block

-- ---------------------------------------------------------------------------
-- Test 41: Expired certificate — server presents a cert whose validity window
-- ended in the past; the client must reject it even when the cert is trusted
-- as a CA. Exercises OpenSSL's validity-period check inside SSL_VERIFY_PEER.
--
-- The cert is created with `openssl x509 -startdate/-enddate` so that the
-- validity window is in the year 2020, well before the current date.
-- ---------------------------------------------------------------------------

def setupExpiredCert (keyFile : String) : IO String := do
  let csrFile  := "/tmp/lean_ssl_test/expired_csr.pem"
  let certFile := "/tmp/lean_ssl_test/expired_cert.pem"
  let alreadyExists ← System.FilePath.pathExists certFile
  unless alreadyExists do
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["req", "-new", "-key", keyFile, "-out", csrFile, "-subj", "/CN=localhost"]
    }
    discard <| IO.Process.output {
      cmd  := "openssl"
      args := #["x509", "-req", "-in", csrFile, "-signkey", keyFile,
                "-out", certFile, "-set_serial", "99",
                "-not_before", "20200101000000Z", "-not_after", "20200102000000Z"]
    }
  return certFile

/--
Verifies that `SSL_VERIFY_PEER` rejects a certificate whose validity window
has passed. The cert is signed by itself (trusted as CA) so only the validity
period check can fail; the test confirms the handshake throws rather than
succeeding with an expired cert.
-/
def testExpiredCertRejected (addr : SocketAddress) (expiredCert keyFile : String) :
    IO Unit := do
  let serverCtx ← Context.Server.mk
  serverCtx.configure expiredCert keyFile
  -- The client trusts the expired cert as its only CA; the chain verifies but
  -- the validity period check must still fail.
  let clientCtx ← Context.Client.mk
  clientCtx.configure expiredCert true

  let server ← Server.mk serverCtx
  server.bind addr
  server.listen 128

  let srvTask ← (do
    try discard <| server.accept
    catch _ => pure ()
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    let threw ← try
      client.connect addr
      pure false
    catch _ =>
      pure true
    unless threw do
      throw <| IO.userError
        "testExpiredCertRejected: handshake succeeded with an expired certificate"
  : Async Unit).toIO

  srvTask.block
  cliTask.block

#eval do
  let (_, keyFile) ← setupTestCerts
  let wildcardCert ← setupWildcardCert keyFile
  testWildcardSAN
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18466)
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18467)
    wildcardCert keyFile

#eval do
  let (_, keyFile) ← setupTestCerts
  let multiCert ← setupMultiSANCert keyFile
  testMultiSAN
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18468)
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18469)
    (SocketAddressV4.mk (.ofParts 127 0 0 1) 18470)
    multiCert keyFile

#eval do
  let (certFile, keyFile) ← setupTestCerts
  testConcurrentContextReuse (SocketAddressV4.mk (.ofParts 127 0 0 1) 18471) certFile keyFile

#eval do
  let (_, keyFile) ← setupTestCerts
  let expiredCert ← setupExpiredCert keyFile
  testExpiredCertRejected (SocketAddressV4.mk (.ofParts 127 0 0 1) 18472) expiredCert keyFile

-- ---------------------------------------------------------------------------
-- Revoked certificate test
-- ---------------------------------------------------------------------------

/--
Creates a CA, issues a server cert signed by that CA, revokes it, and returns
`(caCert, serverCert, serverKey, crlFile)`. Uses a minimal `openssl.cnf` in
`/tmp/lean_ssl_test/ca/` so that `openssl ca -gencrl` can generate the CRL.
-/
def setupRevokedCert (_ : String) : IO (String × String × String × String) := do
  let caDir      := "/tmp/lean_ssl_test/ca"
  let caKey      := caDir ++ "/ca_key.pem"
  let caCert     := caDir ++ "/ca_cert.pem"
  let serverKey  := caDir ++ "/server_key.pem"
  let serverCsr  := caDir ++ "/server_csr.pem"
  let serverCert := caDir ++ "/server_cert.pem"
  let crlFile    := caDir ++ "/ca.crl.pem"
  let cnfFile    := caDir ++ "/openssl.cnf"
  let indexFile  := caDir ++ "/index.txt"
  let serialFile := caDir ++ "/serial"
  let newCertsDir := caDir ++ "/newcerts"

  let alreadyExists ← System.FilePath.pathExists crlFile
  unless alreadyExists do
    IO.FS.createDirAll newCertsDir
    -- Minimal openssl CA config
    IO.FS.writeFile cnfFile s!"[ ca ]\ndefault_ca = CA_default\n\
      [ CA_default ]\ndir = {caDir}\ndatabase = $dir/index.txt\n\
      new_certs_dir = $dir/newcerts\ncertificate = $dir/ca_cert.pem\n\
      serial = $dir/serial\nprivate_key = $dir/ca_key.pem\n\
      default_md = sha256\ndefault_crl_days = 30\npolicy = policy_anything\n\
      [ policy_anything ]\ncommonName = supplied\n"
    IO.FS.writeFile indexFile ""
    IO.FS.writeFile serialFile "01\n"
    -- CA key + self-signed cert
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["genrsa", "-out", caKey, "2048"] }
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["req", "-new", "-x509", "-key", caKey, "-out", caCert,
                "-days", "1", "-subj", "/CN=TestCA"] }
    -- Server key + cert signed by the CA
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["genrsa", "-out", serverKey, "2048"] }
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["req", "-new", "-key", serverKey, "-out", serverCsr, "-subj", "/CN=localhost"] }
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["x509", "-req", "-in", serverCsr, "-CA", caCert, "-CAkey", caKey,
                "-out", serverCert, "-days", "1", "-set_serial", "1"] }
    -- Revoke the server cert and generate a CRL
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["ca", "-config", cnfFile, "-revoke", serverCert, "-keyfile", caKey,
                "-cert", caCert, "-batch"] }
    discard <| IO.Process.output {
      cmd := "openssl"
      args := #["ca", "-config", cnfFile, "-gencrl", "-keyfile", caKey,
                "-cert", caCert, "-out", crlFile, "-batch"] }

  return (caCert, serverCert, serverKey, crlFile)
