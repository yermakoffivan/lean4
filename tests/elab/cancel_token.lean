/-! Tests for `IO.CancelToken.onSet` and `IO.CancelToken.task`. -/

/-- `onSet` registered before `set` fires synchronously when `set` is called. -/
def testOnSetBeforeSet : IO Unit := do
  let tk ← IO.CancelToken.new
  let cell ← IO.mkRef false
  tk.onSet (cell.set true)
  if (← cell.get) then panic! "onSet fired too early"
  tk.set
  if !(← cell.get) then panic! "onSet did not fire"
  IO.println "ok"

/-- `onSet` registered after `set` fires immediately at registration time. -/
def testOnSetAfterSet : IO Unit := do
  let tk ← IO.CancelToken.new
  tk.set
  let cell ← IO.mkRef false
  tk.onSet (cell.set true)
  if !(← cell.get) then panic! "onSet did not fire on already-set token"
  IO.println "ok"

/-- Multiple `onSet` callbacks all fire. -/
def testOnSetMultiple : IO Unit := do
  let tk ← IO.CancelToken.new
  let counter ← IO.mkRef 0
  for _ in [0:5] do
    tk.onSet (counter.modify (· + 1))
  tk.set
  let n ← counter.get
  if n != 5 then panic! s!"expected 5 callbacks, got {n}"
  IO.println "ok"

/-- `task` returns a task that resolves once the token is set. -/
def testTask : IO Unit := do
  let tk ← IO.CancelToken.new
  let t := tk.task
  let prom ← IO.Promise.new
  -- Spawn a task that waits for `tk.task` then resolves `prom`
  let _ ← BaseIO.asTask do
    let _ := t.get
    prom.resolve ()
  if (← prom.isResolved) then panic! "promise resolved too early"
  tk.set
  let _ := prom.result?.get
  IO.println "ok"

/--
info: ok
ok
ok
ok
-/
#guard_msgs in
#eval do testOnSetBeforeSet; testOnSetAfterSet; testOnSetMultiple; testTask
