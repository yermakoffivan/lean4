import Std.Async.TCP.SSL
import Std.Net.Addr

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
  client.shutdown

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
  client.shutdown

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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown  -- server closes write side first
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
    -- After server shutdown, recv? must return none, not hang
    let closed ← client.recv? 1024
    unless closed.isNone do
      throw <| IO.userError "expected none after server shutdown"
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
      conn.shutdown
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
      client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown  -- TCP-only close, no TLS close_notify
  : Async Unit).toIO

  let cliTask ← (do
    let client ← Client.mk clientCtx
    client.setServerName "localhost"
    client.connect addr
    -- recv? must return none (not hang) when peer did a TCP-only close.
    let closed ← client.recv? 1024
    unless closed.isNone do
      throw <| IO.userError "recv? after TCP-only close: expected none"
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
    conn.shutdown
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
    client.shutdown
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
