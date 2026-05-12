import Std.Time
open Std.Time TimeZone

/-!
Tests for `Transition.findTransitionIndexForTimestamp` and `findTransitionForTimestamp`,
covering boundary conditions: timestamps exactly at a transition, one second before/after,
before all transitions, after all transitions, and an empty array.
-/

private def mkLTT (abb : String) (offsetSecs : Int) : LocalTimeType :=
  { gmtOffset := ⟨Second.Offset.ofInt offsetSecs⟩, isDst := false, abbreviation := abb,
    wall := .standard, utLocal := .ut, identifier := abb }

private def mkT (time : Int) (abb : String) (offsetSecs : Int) : Transition :=
  { time := Second.Offset.ofInt time, localTimeType := mkLTT abb offsetSecs }

-- Three transitions at t=100, t=200, t=300
private def trans3 : Array Transition :=
  #[mkT 100 "T0" 3600, mkT 200 "T1" 7200, mkT 300 "T2" 10800]

private def ts (n : Int) : Timestamp :=
  Timestamp.ofSecondsSinceUnixEpoch (Second.Offset.ofInt n)

private def idxAt (n : Int) : Option Nat :=
  Transition.findTransitionIndexForTimestamp trans3 (ts n)

private def abbrevAt (n : Int) : Option String :=
  (Transition.findTransitionForTimestamp trans3 (ts n)) |>.map (·.localTimeType.abbreviation)

-- 1. Before all transitions → none
/-- info: none -/
#guard_msgs in #eval idxAt 50

-- 2. One second before first transition → none
/-- info: none -/
#guard_msgs in #eval idxAt 99

-- 3. Exactly at first transition → some 0
/-- info: some 0 -/
#guard_msgs in #eval idxAt 100

-- 4. One second after first transition → some 0
/-- info: some 0 -/
#guard_msgs in #eval idxAt 101

-- 5. One second before second transition → some 0
/-- info: some 0 -/
#guard_msgs in #eval idxAt 199

-- 6. Exactly at second transition → some 1
/-- info: some 1 -/
#guard_msgs in #eval idxAt 200

-- 7. Between second and third transition → some 1
/-- info: some 1 -/
#guard_msgs in #eval idxAt 250

-- 8. Exactly at last transition → some 2
/-- info: some 2 -/
#guard_msgs in #eval idxAt 300

-- 9. After all transitions → some 2 (last)
/-- info: some 2 -/
#guard_msgs in #eval idxAt 400

-- 10. Empty array → none
/-- info: none -/
#guard_msgs in #eval Transition.findTransitionIndexForTimestamp #[] (ts 100)

-- Verify the correct LocalTimeType is returned in each case

-- Before all transitions → none
/-- info: none -/
#guard_msgs in #eval abbrevAt 50

-- Exactly at first transition → "T0"
/-- info: some "T0" -/
#guard_msgs in #eval abbrevAt 100

-- One second before second transition → "T0"
/-- info: some "T0" -/
#guard_msgs in #eval abbrevAt 199

-- Exactly at second transition → "T1"
/-- info: some "T1" -/
#guard_msgs in #eval abbrevAt 200

-- After all transitions → "T2"
/-- info: some "T2" -/
#guard_msgs in #eval abbrevAt 400

-- Negative timestamp (pre-epoch): before first transition → none
/-- info: none -/
#guard_msgs in #eval Transition.findTransitionIndexForTimestamp trans3 (ts (-1))
