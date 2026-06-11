/-!
Tests a `machine` macro for state machines in `do` notation, encoded with the labeled control
flow of `do` blocks: states dispatch on a `mut` variable inside a `repeat` loop, `goto` is a
labeled `continue`, and `(capture := false)` keeps the dispatch loop transparent to user-written
`break`/`continue` and `return` inside state bodies.
-/

open Lean

syntax "goto " ident : doElem
syntax machineState := "state " ident " do " doSeq
syntax "machine " machineState+ : doElem

-- `goto` and `machine` deliberately share the scope-free identifiers `__machineState` and
-- `__machineStep` so that the `goto` expansion binds to the enclosing `machine` expansion.
macro_rules
  | `(doElem| goto $s:ident) =>
    `(doElem| do
        $(mkIdent `__machineState):ident := $(quote s.getId.toString)
        continue (label := $(mkIdent `__machineStep)))

macro_rules
  | `(doElem| machine $states:machineState*) => do
    let stateVar := mkIdent `__machineState
    let mut first? := none
    let mut dispatch ← `(doSeq| unreachable!)
    for s in states.reverse do
      let `(machineState| state $name:ident do $body) := s | Macro.throwUnsupported
      first? := some name
      dispatch ← `(doSeq| if $stateVar == $(quote name.getId.toString) then $body else $dispatch)
    let some first := first? | Macro.throwUnsupported
    `(doElem| do
        let mut $stateVar:ident : String := $(quote first.getId.toString)
        repeat (label := $(mkIdent `__machineStep)) (capture := false)
          $dispatch)

/-- Accepts `(aa)+`. -/
def isAAPlus (str : String) : Id Bool := do
  let mut input := str.toList
  machine
    state start do
      if let some x := input.head? then
        input := input.tail
        if x == 'a' then goto a
      goto nope
    state a do
      if let some x := input.head? then
        input := input.tail
        if x == 'a' then goto aa
      goto nope
    state aa do
      if let some x := input.head? then
        input := input.tail
        if x == 'a' then goto a
        else goto nope
      else return true
    state nope do return false

/-- info: true -/
#guard_msgs in #eval isAAPlus "aa"
/-- info: true -/
#guard_msgs in #eval isAAPlus "aaaa"
/-- info: false -/
#guard_msgs in #eval isAAPlus ""
/-- info: false -/
#guard_msgs in #eval isAAPlus "a"
/-- info: false -/
#guard_msgs in #eval isAAPlus "aaa"
/-- info: false -/
#guard_msgs in #eval isAAPlus "ab"
/-- info: false -/
#guard_msgs in #eval isAAPlus "aab"

/--
The dispatch loop does not capture user control flow: `break` and `continue` in state bodies
target the enclosing `for`.
-/
def collect (xs : List Nat) : Id (Array Nat) := do
  let mut out := #[]
  for x in xs do
    machine
      state start do
        if x == 0 then
          break
        if x % 2 == 1 then goto odd
        out := out.push x
        goto next
      state odd do
        out := out.push (10 * x)
        goto next
      state next do continue
  return out

/-- info: #[10, 2, 30] -/
#guard_msgs in #eval collect [1, 2, 3, 0, 4]
