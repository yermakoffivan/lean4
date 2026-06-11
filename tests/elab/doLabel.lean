/-!
Tests parsing of `optConfig` on `do`-related syntax, e.g. `do (label := blk)` and
`return (label := blk)`. Elaboration of the configuration items is not implemented yet;
each use reports an error.
-/

-- Top-level `do`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Nat := do (label := blk)
  return 1

-- Nested `do`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Nat := do
  let x ← do (label := blk)
    pure 1
  return x

-- `for`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  for (label := loop) _x in [1, 2, 3] do
    pure ()

-- Multi-collection `for` (forwarded through `expandDoFor`)
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  for (label := loop) _x in [1, 2, 3], _y in [4, 5] do
    pure ()

-- `while` (forwarded through `expandDoWhile`)
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  let mut n := 0
  while (label := loop) n < 3 do
    n := n + 1

-- `repeat`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  repeat (label := loop)
    break

-- `repeat ... until` (forwarded through `expandDoRepeatUntil`)
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  let mut n := 0
  repeat (label := loop)
    n := n + 1
  until n > 3

-- `return`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Nat := do
  return (label := blk) 1

-- `return` without a value
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  return (label := blk)

-- `break`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  for _x in [1, 2, 3] do
    break (label := loop)

-- `continue`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Unit := do
  for _x in [1, 2, 3] do
    continue (label := loop)

-- Term-level `return`
/-- error: Configuration options in `do` notation are not yet supported. -/
#guard_msgs in
example : IO Nat :=
  return (label := blk) 1

-- Legacy elaborator rejects configuration items
/-- error: Configuration options in `do` notation are not supported by the legacy `do` elaborator. -/
#guard_msgs in
set_option backward.do.legacy true in
example : IO Nat := do (label := blk)
  return 1

/-!
Syntax that must keep parsing as before: parenthesized terms after `do`/`return` are not
configuration items.
-/

#guard_msgs in
example : IO Nat := do
  return (1 + 1)

#guard_msgs in
example : IO (Nat × Nat) := do
  return (1, 2)

#guard_msgs in
example : IO Nat := do
  (pure 1 : IO Nat)

def g (n : Nat) (label : Nat := 0) : Nat := n + label

-- Named arguments named `label` in a returned application still parse as terms
#guard_msgs in
example : IO Nat := do
  return g 1 (label := 2)

#guard_msgs in
example : IO Nat := do (pure 3 : IO Nat)
