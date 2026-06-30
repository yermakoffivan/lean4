import Std.Internal.UV
import Std.Net.Addr

/-!
Exercises libuv event-loop teardown (`finalize_libuv`) while operations are still
in flight. Each op below is started and its promise dropped without being awaited
or cancelled; the loop's own reference keeps the wrapper alive, so the handle is
still registered when the runtime finalizer tears the loop down at process exit.
This covers the teardown walk and the `UV_ECANCELED` promise resolutions for
timers, signals, TCP connect/accept/recv/shutdown, and UDP recv. Regression guard
for the libuv handle-finalization work; runs under ASan in the Linux sanitize CI.
-/

open Std.Internal.UV
open Std.Net

def lo (port : UInt16) : SocketAddress :=
  .v4 (SocketAddressV4.mk (.ofParts 127 0 0 1) port)

-- TEST-NET-1 (RFC 5737), unroutable: a connect to it stays pending forever.
def blackhole : SocketAddress :=
  .v4 (SocketAddressV4.mk (.ofParts 192 0 2 1) 80)

def portOf (a : SocketAddress) : UInt16 :=
  match a with
  | .v4 a => a.port
  | .v6 a => a.port

def startInflight : IO Unit := do
  for _ in [0:30] do
    let t ← Timer.mk 3600000 false
    let _ ← t.next

  for _ in [0:8] do
    let s ← Signal.mk 28 true
    let _ ← s.next

  for _ in [0:30] do
    let s ← TCP.Socket.new
    let _ ← s.connect blackhole

  for _ in [0:15] do
    let s ← TCP.Socket.new
    try
      s.bind (lo 0)
      s.listen 16
      let _ ← s.accept
    catch _ => pure ()

  for _ in [0:20] do
    let s ← UDP.Socket.new
    try
      s.bind (lo 0)
      let _ ← s.recv 1024
    catch _ => pure ()

  for _ in [0:8] do
    let server ← TCP.Socket.new
    try
      server.bind (lo 0)
      server.listen 16
      let port := portOf (← server.getSockName)
      let client ← TCP.Socket.new
      let _ ← client.connect (lo port)
      match (← server.accept).result?.get with
      | some (.ok accepted) =>
          let _ ← accepted.recv? 1024
          let _ ← client.shutdown
      | _ => pure ()
    catch _ => pure ()

#eval startInflight
