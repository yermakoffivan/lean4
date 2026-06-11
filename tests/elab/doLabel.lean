/-!
Tests for labeled `do` blocks and labeled `return`/`break`/`continue`:
`do (label := blk)` names a block or loop, `return (label := blk) v` exits the labeled block
with value `v`, and `break (label := loop)`/`continue (label := loop)` jump to the labeled loop.
-/

/-! Labeled `return` to the top-level `do` block behaves like plain `return`. -/

def topLevel (b : Bool) : Id Nat := do (label := blk)
  if b then
    return (label := blk) 1
  return 2

/-- info: 1 -/
#guard_msgs in #eval topLevel true
/-- info: 2 -/
#guard_msgs in #eval topLevel false

/-! A labeled nested `do` block is a value-producing block with early exit. -/

def nestedVal (b : Bool) : Id Nat := do
  let x ← do (label := blk)
    if b then
      return (label := blk) 1
    pure 2
  return x + 10

/-- info: 11 -/
#guard_msgs in #eval nestedVal true
/-- info: 12 -/
#guard_msgs in #eval nestedVal false

/-! Unlabeled `return` inside a labeled nested `do` still exits the whole function. -/

def unlabeledThrough (b : Bool) : Id Nat := do
  let x ← do (label := blk)
    if b then
      return 100
    pure 2
  return x

/-- info: 100 -/
#guard_msgs in #eval unlabeledThrough true
/-- info: 2 -/
#guard_msgs in #eval unlabeledThrough false

/-! Multiple labeled returns and mut reassignment across the join point. -/

def mutJoin (n : Nat) : Id Nat := do
  let mut acc := 0
  let r ← do (label := blk)
    acc := acc + 1
    if n == 0 then
      return (label := blk) 10
    acc := acc + 1
    if n == 1 then
      return (label := blk) 20
    pure 30
  return acc * 100 + r

/-- info: 110 -/
#guard_msgs in #eval mutJoin 0
/-- info: 220 -/
#guard_msgs in #eval mutJoin 1
/-- info: 230 -/
#guard_msgs in #eval mutJoin 2

/-! Labeled `break` on the innermost loop behaves like plain `break`. -/

def breakSelf : Id Nat := do
  let mut n := 0
  for (label := l) i in [0:10] do
    if i == 3 then
      break (label := l)
    n := n + 1
  return n

/-- info: 3 -/
#guard_msgs in #eval breakSelf

/-! Labeled `break` out of a nested loop terminates the outer loop. -/

def breakOuter : Id (Array (Nat × Nat)) := do
  let mut out := #[]
  for (label := outer) i in [0:3] do
    for j in [0:3] do
      if j == 2 then
        break
      if i == 1 && j == 1 then
        break (label := outer)
      out := out.push (i, j)
  return out

/-- info: #[(0, 0), (0, 1), (1, 0)] -/
#guard_msgs in #eval breakOuter

/-! Labeled `continue` out of a nested loop skips to the next iteration of the outer loop. -/

def continueOuter : Id (Array (Nat × Nat)) := do
  let mut out := #[]
  for (label := outer) i in [0:3] do
    for j in [0:3] do
      if j == 1 then
        continue (label := outer)
      out := out.push (i, j)
    out := out.push (i, 99)
  return out

/-- info: #[(0, 0), (1, 0), (2, 0)] -/
#guard_msgs in #eval continueOuter

/-! Labeled `return` tunnels through loops. -/

def returnThroughLoop (k : Nat) : Id Nat := do
  let x ← do (label := blk)
    for i in [0:10] do
      if i == k then
        return (label := blk) i
    pure 99
  return x + 1

/-- info: 5 -/
#guard_msgs in #eval returnThroughLoop 4
/-- info: 100 -/
#guard_msgs in #eval returnThroughLoop 42

/-! Labels on `while`, `repeat`, `repeat ... until`, and multi-collection `for`. -/

def whileLabel : Id Nat := do
  let mut n := 0
  while (label := w) true do
    n := n + 1
    if n == 5 then
      break (label := w)
  return n

/-- info: 5 -/
#guard_msgs in #eval whileLabel

def repeatLabel : Id Nat := do
  let mut n := 0
  repeat (label := r)
    n := n + 1
    if n == 4 then
      break (label := r)
  return n

/-- info: 4 -/
#guard_msgs in #eval repeatLabel

def repeatUntilLabel : Id Nat := do
  let mut n := 0
  repeat (label := r)
    n := n + 1
    if n == 3 then
      -- Skips the rest of the body including the `until` check, like unlabeled `continue`.
      continue (label := r)
    n := n + 1
  until n ≥ 6
  return n

/-- info: 7 -/
#guard_msgs in #eval repeatUntilLabel

def multiFor : Id Nat := do
  let mut n := 0
  for (label := m) i in [0:5], j in [10, 20, 30] do
    if i == 2 then
      break (label := m)
    n := n + j
  return n

/-- info: 30 -/
#guard_msgs in #eval multiFor

/-! Labeled jumps work in `IO` and other monads, not just `Id`. -/

def ioLabel : IO Nat := do
  let x ← do (label := blk)
    for i in [0:10] do
      if i == 3 then
        return (label := blk) i
    pure 0
  return x * 2

/-- info: 6 -/
#guard_msgs in #eval ioLabel

/-! Error cases. -/

/-- error: Unknown label `nope` -/
#guard_msgs in
example : Id Nat := do
  return (label := nope) 1

/-- error: Unknown label `nope` -/
#guard_msgs in
example : Id Unit := do
  for _x in [1, 2] do
    break (label := nope)

/-- error: Cannot `return` to label `l`: it names a loop, not a `do` block -/
#guard_msgs in
example : Id Unit := do
  for (label := l) _x in [1, 2] do
    return (label := l) ()

/-- error: Cannot `break` to label `blk`: it names a `do` block, not a loop -/
#guard_msgs in
example : Id Nat := do (label := blk)
  for _x in [1, 2] do
    break (label := blk)
  return 1

/-- error: Cannot `continue` to label `blk`: it names a `do` block, not a loop -/
#guard_msgs in
example : Id Nat := do (label := blk)
  for _x in [1, 2] do
    continue (label := blk)
  return 1

/-- error: Label `l` is already in scope -/
#guard_msgs in
example : Id Unit := do
  for (label := l) _x in [1, 2] do
    for (label := l) _y in [1, 2] do
      pure ()

/-- error: Labeled jumps out of `try` blocks are not yet supported -/
#guard_msgs in
example : EIO String Nat := do (label := blk)
  try
    return (label := blk) 1
  catch _ =>
    pure ()
  return 2

/-- error: Unsupported `do` configuration option `foo` -/
#guard_msgs in
example : Id Nat := do (foo := blk)
  return 1

/-- error: Configuration options in `do` notation are not supported by the legacy `do` elaborator. -/
#guard_msgs in
set_option backward.do.legacy true in
example : Id Nat := do (label := blk)
  return 1

/-!
Syntax that must keep parsing as before: parenthesized terms after `do`/`return` are not
configuration items.
-/

#guard_msgs in
example : Id Nat := do
  return (1 + 1)

#guard_msgs in
example : Id (Nat × Nat) := do
  return (1, 2)

def g (n : Nat) (label : Nat := 0) : Nat := n + label

#guard_msgs in
example : Id Nat := do
  return g 1 (label := 2)

#guard_msgs in
example : IO Nat := do (pure 3 : IO Nat)
