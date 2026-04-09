import Lean
/-!
# Tests of `Meta.decLevel?`
-/

open Lean Elab Term Command

elab "#dec_level " u:level : command => runTermElabM fun _ => do
  let u ← elabLevel u
  let u' ← Meta.decLevel u
  let u ← instantiateLevelMVars u
  let u' ← instantiateLevelMVars u'
  logInfo m!"({u'}) + 1 = {u}"

/-!
Decrementing constant.
-/
/-- info: (1) + 1 = 2 -/
#guard_msgs in #dec_level 2

/-!
Decrement can assign.
-/
/-- info: (?u.2) + 1 = ?u.2 + 1 -/
#guard_msgs in #dec_level _

/-!
Cannot assign inside `max`.
-/
/-- error: invalid universe level, max ?u.2 ?u.1 is not greater than 0 -/
#guard_msgs in #dec_level max _ _

/-!
Simplifies `max`, allowing assignment.
-/
/-- info: (?u.2) + 1 = ?u.2 + 1 -/
#guard_msgs in #dec_level max 0 _
/-- info: (?u.2) + 1 = ?u.2 + 1 -/
#guard_msgs in #dec_level max _ 0

/-!
Simplifies `imax` if first argument is `0`.
-/
/-- info: (?u.2) + 1 = ?u.2 + 1 -/
#guard_msgs in #dec_level imax 0 _
/-!
Can't decrement `imax _ 0`.
-/
/-- error: invalid universe level, 0 is not greater than 0 -/
#guard_msgs in #dec_level imax 5 0
/-!
Second argument of `imax` is always assignable.
-/
/-- info: (max 4 ?u.2) + 1 = max 5 (?u.2 + 1) -/
#guard_msgs in #dec_level imax 5 _

/-!
Tests of `max` decrementing both arguments.
-/
/-- info: (u) + 1 = u + 1 -/
#guard_msgs in universe u in #dec_level max 1 (u + 1)
/-- info: (max 1 u) + 1 = max 2 (u + 1) -/
#guard_msgs in universe u in #dec_level max 2 (u + 1)

/-!
Failure, since `u` cannot be decremented.
-/
/-- error: invalid universe level, max 1 u is not greater than 0 -/
#guard_msgs in universe u in #dec_level max 1 u
