/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/
module

prelude
public import Init.System.Promise

public section

set_option linter.missingDocs true

namespace IO

/--
Cancellation token for cooperative task cancellation: request cancellation with
`CancelToken.set` and check for it with `CancelToken.isSet`.

This is a more flexible alternative to `Task.cancel` as the token can be shared between multiple
tasks. The underlying `Promise` allows waiting for cancellation via `CancelToken.task` without
polling.
-/
structure CancelToken where
  private promise : IO.Promise Unit
deriving Nonempty

namespace CancelToken

/-- Creates a new cancellation token. -/
def new : BaseIO CancelToken :=
  CancelToken.mk <$> IO.Promise.new

/-- Activates a cancellation token. Idempotent. -/
def set (tk : CancelToken) : BaseIO Unit :=
  tk.promise.resolve ()

/-- Checks whether the cancellation token has been activated. -/
def isSet (tk : CancelToken) : BaseIO Bool :=
  tk.promise.isResolved

/--
A task that completes when the cancellation token is set. Useful for waiting on cancellation
without polling.
-/
def task (tk : CancelToken) : Task Unit :=
  tk.promise.result!

/--
Registers a callback to run when the cancellation token is set. The callback runs as a
synchronous task dependency, so it executes inline when the token is set.
Returns a task that completes after the callback runs. The underlying `BaseIO.bindTask`
uses `keep_alive = true`, so the task won't be GC'd before it fires.
-/
def onSet (tk : CancelToken) (action : Unit → BaseIO Unit) : BaseIO (Task (Option Unit)) :=
  BaseIO.bindTask tk.promise.result? (sync := true) fun _ => do
    action ()
    return .pure (some ())

-- separate definition as otherwise no unboxed version is generated
@[export lean_io_cancel_token_is_set]
private def isSetExport := @isSet

end CancelToken
