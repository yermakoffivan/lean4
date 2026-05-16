/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Zoned.ZoneRules
public import Std.Time.Zoned.Database.TzIf
import Std.Time.Zoned.Database.PosixTz

public section

namespace Std
namespace Time

set_option linter.all true

/--
A timezone database from which we can read the `ZoneRules` of some area by it's id.
-/
protected class Database (α : Type) where

  /--
  Retrieves the zone rules information (`ZoneRules`) for a given area at a specific point in time.
  -/
  getZoneRules : α → String → IO TimeZone.ZoneRules

  /--
  Retrieves the local zone rules information (`ZoneRules`) at a given timestamp.
  -/
  getLocalZoneRules : α → IO TimeZone.ZoneRules

namespace TimeZone
open Internal

/--
Converts a Boolean value to a corresponding `StdWall` type.
-/
def convertWall : Bool → StdWall
  | true => .standard
  | false => .wall

/--
Converts a Boolean value to a corresponding `UTLocal` type.
-/
def convertUt : Bool → UTLocal
  | true => .ut
  | false => .local

/--
Converts a given time index into a `LocalTimeType` by using a time zone (`tz`) and its identifier.
-/
def convertLocalTimeType (index : Nat) (tz : TZif.TZifV1) (identifier : String) : Option LocalTimeType := do
  let localType ← tz.localTimeTypes[index]?
  let offset := Offset.ofSeconds <| .ofInt localType.gmtOffset
  let abbreviation := tz.abbreviations.getD index (offset.toIsoString true)
  let wallflag := convertWall (tz.stdWallIndicators.getD index true)
  let utLocal := convertUt (tz.utLocalIndicators.getD index true)

  return {
    gmtOffset := offset
    isDst := localType.isDst
    abbreviation
    wall := wallflag
    utLocal
    identifier
  }

/--
Converts a transition.
-/
def convertTransition (times: Array LocalTimeType) (index : Nat) (tz : TZif.TZifV1) : Option Transition := do
  let time := tz.transitionTimes[index]!
  let time := Second.Offset.ofInt time
  let indice := tz.transitionIndices[index]!
  return { time, localTimeType := times[indice.toNat]! }

/--
Converts a `TZif.TZifV1` structure to a `ZoneRules` structure.
-/
def convertTZifV1 (tz : TZif.TZifV1) (id : String) : Except String ZoneRules := do
  let mut times : Array LocalTimeType := #[]

  for i in *...tz.header.typecnt.toNat do
    if let some result := convertLocalTimeType i tz id
      then times := times.push result
      else .error s!"cannot convert local time {i} of the file"

  let mut transitions := #[]

  for i in *...tz.transitionTimes.size do
    if let some result := convertTransition times i tz
      then transitions := transitions.push result
      else .error s!"cannot convert transition {i} of the file"

  -- Local time for timestamps before the first transition is specified by the first time
  -- type (time type 0).

  let initialLocalTimeType ←
    if let some res := convertLocalTimeType 0 tz id
      then .ok res
      else .error s!"empty transitions for {id}"

  .ok { transitions, initialLocalTimeType }

-- POSIX TZ string parsing and future-transition generation.
-- RFC 8536 §3.3: after all stored transitions, the POSIX TZ string (footer) defines the rule.

-- Epoch day of the Mm.w.d occurrence in year `year`.
private def mwdEpochDay (year : Year.Offset) (month : Month.Ordinal) (week : Week.Ordinal) (day : Weekday.Ordinal) : Day.Offset :=
  let date1 := PlainDate.ofYearMonthDayClip year month (Day.Ordinal.ofNat 1)
  let epDay1 := date1.toEpochDay.toInt
  let wd1 := date1.weekday.toOrdinal.val
  let diff := (day.val - wd1 + 7) % 7
  let candidate := epDay1 + diff + (week.val - 1) * 7
  let nextMonthStart := epDay1 + (month.days year.isLeap).val
  Day.Offset.ofInt (if candidate >= nextMonthStart then candidate - 7 else candidate)

-- Epoch day for Jn (1–365): Feb 29 is never counted, so days ≥ 60 shift by 1 in leap years.
private def julianEpochDay (year : Year.Offset) (day : Bounded.LE 1 365) : Day.Offset :=
  let jan1 := (PlainDate.ofYearMonthDayClip year (Month.Ordinal.ofNat 1) (Day.Ordinal.ofNat 1)).toEpochDay
  Day.Offset.ofInt (jan1.toInt + day.val - 1 + if year.isLeap && day.val ≥ 60 then 1 else 0)

-- Epoch day for zero-based n (0–365): Feb 29 is counted in leap years.
private def julian0EpochDay (year : Year.Offset) (day : Bounded.LE 0 365) : Day.Offset :=
  (PlainDate.ofYearMonthDayClip year (Month.Ordinal.ofNat 1) (Day.Ordinal.ofNat 1)).toEpochDay + Day.Offset.ofInt day.val

-- Epoch day for a PosixTransSpec in the given year.
private def specEpochDay (year : Year.Offset) (spec : PosixTransSpec) : Day.Offset :=
  match spec with
  | .mwd month week day => mwdEpochDay year month week day
  | .julian day => julianEpochDay year day
  | .julian0 day => julian0EpochDay year day

-- Transitions produced by the POSIX rule for a single calendar year.
private def posixYearTransitions (year : Year.Offset) (p : PosixTzInfo) (identifier : String) : Array Transition :=
  match p.start, p.end_ with
  | some startRule, some endRule =>
    -- Convert a spec + wall-clock time to a UTC Second.Offset:
    -- WallTime represents civil time; subtracting the UTC offset converts it to UTC.
    let toUtc (spec : PosixTransSpec) (wallTime : Second.Offset) (offset : TimeZone.Offset) : Second.Offset :=
      (WallTime.ofSeconds ((specEpochDay year spec).toSeconds + wallTime)).toSeconds - offset.second

    let startTs := toUtc startRule.spec startRule.time p.stdOffset
    let endTs := toUtc endRule.spec endRule.time p.dstOffset

    let dstLTT : LocalTimeType :=
      { gmtOffset := p.dstOffset, isDst := true,
        abbreviation := p.dstName, wall := .wall, utLocal := .local, identifier }

    let stdLTT : LocalTimeType :=
      { gmtOffset := p.stdOffset, isDst := false,
        abbreviation := p.stdName, wall := .wall, utLocal := .local, identifier }

    -- Keep chronological order (reversed in Southern-Hemisphere zones where end < start).
    if startTs.val ≤ endTs.val
      then #[⟨startTs, dstLTT⟩, ⟨endTs, stdLTT⟩]
      else #[⟨endTs, stdLTT⟩, ⟨startTs, dstLTT⟩]
  | _, _ => #[]

/-
appends POSIX transitions for `n` years starting at `firstYear`.
-/
private def extendForYears (posix : PosixTzInfo) (id : String) (firstYear : Year.Offset) (lastTs : Second.Offset)
    (i n : Nat) (acc : Array Transition) : Array Transition :=
  if i >= n then
    acc
  else
    let year := firstYear + Year.Offset.ofNat i
    let acc' := (posixYearTransitions year posix id).foldl
      (fun a t => if t.time.val > lastTs.val then a.push t else a) acc
    extendForYears posix id firstYear lastTs (i + 1) n acc'

/-
Extend a transition array with POSIX-derived entries for all years beyond the last stored one.
-/
private def extendWithPosix (transitions : Array Transition) (posixStr : String) (id : String) : Array Transition :=
  match parsePosixTz posixStr with
  | none =>
    transitions
  | some posix =>
    if posix.start.isNone then
      transitions
    else
      let lastTs := if h : transitions.size > 0
        then transitions[0]'h |>.time
        else Second.Offset.ofInt 0

      let fromYear := (PlainDate.ofEpochDay (Day.Offset.ofSeconds lastTs)).year
      let numYears := (2200 - fromYear.toInt + 1).toNat

      extendForYears posix id fromYear lastTs 0 numYears transitions

/--
Converts a `TZif.TZifV2` structure to a `ZoneRules` structure, extending transitions beyond
the last stored entry using the POSIX TZ footer string when present.
-/
def convertTZifV2 (tz : TZif.TZifV2) (id : String) : Except String ZoneRules := do
  let rules ← convertTZifV1 tz.toTZifV1 id
  match tz.footer with
  | none =>
    return rules
  | some footer =>
    return { rules with transitions := extendWithPosix rules.transitions footer id }

/--
Converts a `TZif.TZif` structure to a `ZoneRules` structure.
-/
def convertTZif (tz : TZif.TZif) (id : String) : Except String ZoneRules := do
  if let some v2 := tz.v2
    then convertTZifV2 v2 id
    else convertTZifV1 tz.v1 id
