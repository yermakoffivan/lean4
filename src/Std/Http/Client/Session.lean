/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Http.Client.Connection

public section

/-!
# Session

This module defines `Session`, an HTTP/1.1 client session that manages a single
persistent connection and dispatches sequential request/response exchanges over it.
A background task drives the `Connection` loop; callers interact through a channel.

`Session` is transport-agnostic at the type level: the transport type is consumed at
construction time (`Session.new`) but is not stored in the struct. All pooling and
redirect logic works with plain `Session` values regardless of the underlying socket type.
-/

namespace Std.Http.Client

open Std Async TCP Protocol
open Time

set_option linter.all true

/--
An HTTP client session that sends sequential requests over a persistent connection.
-/
structure Session where

  /--
  Queue of requests sent by callers.
  -/
  requestChannel : Std.CloseableChannel RequestPacket

  /--
  Resolves when the background loop exits.
  -/
  shutdown : IO.Promise Unit

  /--
  Configuration for this session.
  -/
  config : Config

  /--
  Cancellation context driving the background connection loop. Cancelling it aborts any in-flight
  exchange (the loop treats cancellation as a shutdown), which is how `close` interrupts a request
  that is blocked waiting on the socket rather than parked on the request channel.
  -/
  context : CancellationContext

  /--
  Unique identifier assigned by the pool when this session is registered.
  Zero for sessions created outside a pool.
  -/
  id : UInt64 := 0

namespace Session

/--
Queue a request and await its response, together with a completion promise that
resolves when the connection is ready for the next request.
-/
def sendTracked {β : Type} [Body β] (session : Session) (request : Request β) :
    Async (Response Body.Stream × IO.Promise (Except IO.Error Unit)) := do
  let responsePromise ← IO.Promise.new
  let completionPromise ← IO.Promise.new
  let request := { request with body := Body.Any.ofBody request.body }

  let task ← session.requestChannel.send { request, responsePromise, completionPromise }

  let .ok _ ← await task
    | throw (.userError "connection closed before request could be sent")

  let response ← Async.ofExcept (← await responsePromise.result!)
  return (response, completionPromise)

/--
Queue a request and await its response.
-/
def send {β : Type} [Body β] (session : Session) (request : Request β) : Async (Response Body.Stream) := do
  return (← session.sendTracked request).1

/--
Wait for the background loop to exit.
-/
def waitShutdown (session : Session) : Async Unit :=
  let res := session.shutdown.result!.map (sync := true) (fun _ => .ok ())
  .mk <| pure (MaybeTask.ofTask res)

/--
Close the session: cancels the background loop's context (aborting any in-flight exchange) and
closes the request channel so queued and future sends fail promptly.
-/
def close (session : Session) : Async Unit := do
  session.context.cancel .shutdown
  discard <| EIO.toBaseIO session.requestChannel.close

/--
Creates an HTTP client session over the given transport and starts its background loop.
The transport type `t` is used only during construction and is not stored in `Session`.
-/
def new [Transport t] (client : t) (config : Config := {}) : Async Session := do
  let requestChannel ← Std.CloseableChannel.new
  let shutdown ← IO.Promise.new
  let context ← CancellationContext.new

  background do
    try
      Std.Http.Client.Connection.handle client
        ({ config := config.toH1Config } : H1.Machine .sending)
        config context requestChannel
    finally
      discard <| shutdown.resolve ()

  pure { requestChannel, shutdown, config, context }

end Std.Http.Client.Session
