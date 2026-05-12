/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Zoned.ZoneRules
public import Std.Time.Zoned.Database.TzIf

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

private structure PosixTransRule where
  month : Nat  -- 1-12
  week  : Nat  -- 1-5 (5 = last occurrence)
  day   : Nat  -- 0-6 (0 = Sunday, POSIX convention)
  time  : Int  -- seconds from midnight; default 7200 (= 02:00:00)

private structure PosixTzInfo where
  stdName   : String
  stdOffset : Int  -- seconds east of UTC (positive = east)
  dstName   : String
  dstOffset : Int  -- seconds east of UTC
  start     : Option PosixTransRule
  end_      : Option PosixTransRule

private def posixParseNat (cs : Array Char) (i : Nat) : Nat × Nat :=
  let rec go (i acc : Nat) : Nat × Nat :=
    if hi : i < cs.size then
      if cs[i]!.isDigit
        then go (i + 1) (acc * 10 + cs[i]!.toNat - '0'.toNat)
        else (acc, i)
    else (acc, i)
  termination_by cs.size - i
  decreasing_by omega
  go i 0

-- Parse hh[:mm[:ss]] as total seconds.
private def posixParseHMS (cs : Array Char) (i : Nat) : Int × Nat :=
  let (h, i) := posixParseNat cs i
  let (m, i) := if i < cs.size && cs[i]! == ':' then posixParseNat cs (i + 1) else (0, i)
  let (s, i) := if i < cs.size && cs[i]! == ':' then posixParseNat cs (i + 1) else (0, i)
  (Int.ofNat h * 3600 + Int.ofNat m * 60 + Int.ofNat s, i)

-- Parse [+-]hh[:mm[:ss]] as east-positive seconds (POSIX offsets are west-positive, so we negate).
private def posixParseOffset (cs : Array Char) (i : Nat) : Int × Nat :=
  let (sign, i) :=
    if i < cs.size && cs[i]! == '-' then (-1, i + 1)
    else if i < cs.size && cs[i]! == '+' then (1, i + 1)
    else (1, i)
  let (secs, i) := posixParseHMS cs i
  (-sign * secs, i)

-- Parse a timezone name: letters only, or <...> for names with digits/signs.
private def posixParseName (cs : Array Char) (i : Nat) : String × Nat :=
  if i < cs.size && cs[i]! == '<' then
    let rec goAngle (i : Nat) (acc : String) : String × Nat :=
      if hi : i < cs.size then
        if cs[i]! == '>' then (acc, i + 1) else goAngle (i + 1) (acc.push cs[i]!)
      else (acc, i)
    termination_by cs.size - i
    decreasing_by omega
    goAngle (i + 1) ""
  else
    let rec goAlpha (i : Nat) (acc : String) : String × Nat :=
      if hi : i < cs.size then
        if cs[i]!.isAlpha then goAlpha (i + 1) (acc.push cs[i]!) else (acc, i)
      else (acc, i)
    termination_by cs.size - i
    decreasing_by omega
    goAlpha i ""

-- Parse Mm.w.d[/[+-]hh[:mm[:ss]]].
private def posixParseMwd (cs : Array Char) (i : Nat) : Option (PosixTransRule × Nat) := do
  if i >= cs.size || cs[i]! != 'M' then failure
  let i := i + 1
  let (m, i) := posixParseNat cs i
  if i >= cs.size || cs[i]! != '.' then failure
  let (w, i) := posixParseNat cs (i + 1)
  if i >= cs.size || cs[i]! != '.' then failure
  let (d, i) := posixParseNat cs (i + 1)
  let (time, i) :=
    if i < cs.size && cs[i]! == '/' then
      let (sign, i) :=
        if i + 1 < cs.size && cs[i + 1]! == '-' then (-1, i + 2)
        else if i + 1 < cs.size && cs[i + 1]! == '+' then (1, i + 2)
        else (1, i + 1)
      let (t, i) := posixParseHMS cs i
      (sign * t, i)
    else (7200, i)
  return ({ month := m, week := w, day := d, time }, i)

/--
Parses a POSIX TZ string (RFC 8536 §3.3) into a `PosixTzInfo`.
Handles `std offset [dst [offset] [,Mm.w.d[/time],Mm.w.d[/time]]]`.
-/
private def parsePosixTz (s : String) : Option PosixTzInfo := do
  let cs := s.toList.toArray
  let (stdName, i) := posixParseName cs 0
  if stdName.isEmpty then failure
  let (stdOffset, i) := posixParseOffset cs i
  if i >= cs.size then
    return { stdName, stdOffset, dstName := "", dstOffset := stdOffset, start := none, end_ := none }
  let (dstName, i) := posixParseName cs i
  if dstName.isEmpty then
    return { stdName, stdOffset, dstName := "", dstOffset := stdOffset, start := none, end_ := none }
  -- DST offset: optional; default is stdOffset + 3600 (one hour ahead of standard).
  let (dstOffset, i) :=
    if i < cs.size && (cs[i]!.isDigit || cs[i]! == '+' || cs[i]! == '-')
      then posixParseOffset cs i
      else (stdOffset + 3600, i)
  if i >= cs.size || cs[i]! != ',' then
    return { stdName, stdOffset, dstName, dstOffset, start := none, end_ := none }
  let (startRule, i) ← posixParseMwd cs (i + 1)
  if i >= cs.size || cs[i]! != ',' then failure
  let (endRule, _) ← posixParseMwd cs (i + 1)
  return { stdName, stdOffset, dstName, dstOffset, start := some startRule, end_ := some endRule }

-- Epoch day (days since 1970-01-01) of year `y`, month `m`, day 1.
-- Uses the same algorithm as PlainDate.toEpochDay.
private def firstOfMonthEpochDay (y : Int) (m : Nat) : Int :=
  let m' : Int := Int.ofNat m
  let y' := if m' > 2 then y else y - 1
  let era := (if y' ≥ 0 then y' else y' - 399).tdiv 400
  let yoe := y' - era * 400
  let doy := (153 * (m' + (if m' > 2 then -3 else 9)) + 2).tdiv 5
  let doe := yoe * 365 + yoe.tdiv 4 - yoe.tdiv 100 + doy
  era * 146097 + doe - 719468

-- Weekday of an epoch day: 1=Monday … 7=Sunday (same as PlainDate.weekday.toOrdinal).
private def epochDayWeekday (d : Int) : Int :=
  let r := (d + 4) % 7   -- 0-6, where 0 means Monday (epoch day 0 = Thursday → (0+4)%7=4)
  ((r - 1) % 7 + 7) % 7 + 1  -- shift to [1,7]: 0→7(Sun), 1→1(Mon), …, 6→6(Sat)

-- Epoch day of the Mm.w.d occurrence in year `year`.
private def mwdEpochDay (year : Int) (rule : PosixTransRule) : Int :=
  let epDay1 := firstOfMonthEpochDay year rule.month
  let wd1    := epochDayWeekday epDay1
  -- POSIX day 0=Sunday maps to library ordinal 7; days 1-6 map to 1-6.
  let targetWd : Int := if rule.day == 0 then 7 else Int.ofNat rule.day
  let diff      := (targetWd - wd1 + 7) % 7
  let candidate := epDay1 + diff + (Int.ofNat rule.week - 1) * 7
  -- If week=5 pushed past the end of the month, retreat one week.
  let nextM  := if rule.month == 12 then 1  else rule.month + 1
  let nextY  := if rule.month == 12 then year + 1 else year
  let nextEp := firstOfMonthEpochDay nextY nextM
  if candidate >= nextEp then candidate - 7 else candidate

-- Transitions produced by the POSIX rule for a single calendar year.
private def posixYearTransitions (year : Int) (p : PosixTzInfo) (identifier : String) : Array Transition :=
  match p.start, p.end_ with
  | some startRule, some endRule =>
    -- Wall-clock at start is standard time → UTC = epochDay*86400 + wallTime - stdOffset
    -- Wall-clock at end is DST time         → UTC = epochDay*86400 + wallTime - dstOffset
    let startTs := Second.Offset.ofInt (mwdEpochDay year startRule * 86400 + startRule.time - p.stdOffset)
    let endTs   := Second.Offset.ofInt (mwdEpochDay year endRule   * 86400 + endRule.time   - p.dstOffset)
    let dstLTT : LocalTimeType :=
      { gmtOffset := ⟨Second.Offset.ofInt p.dstOffset⟩, isDst := true,
        abbreviation := p.dstName, wall := .wall, utLocal := .local, identifier }
    let stdLTT : LocalTimeType :=
      { gmtOffset := ⟨Second.Offset.ofInt p.stdOffset⟩, isDst := false,
        abbreviation := p.stdName, wall := .wall, utLocal := .local, identifier }
    -- Keep chronological order (reversed in Southern-Hemisphere zones where end < start).
    if startTs.val ≤ endTs.val
      then #[⟨startTs, dstLTT⟩, ⟨endTs, stdLTT⟩]
      else #[⟨endTs, stdLTT⟩, ⟨startTs, dstLTT⟩]
  | _, _ => #[]

-- Recursive accumulator: appends POSIX transitions for `n` years starting at `firstYear`.
private def extendForYears (posix : PosixTzInfo) (id : String) (firstYear lastTs : Int)
    (i n : Nat) (acc : Array Transition) : Array Transition :=
  if i >= n then acc
  else
    let year := firstYear + Int.ofNat i
    let acc' := (posixYearTransitions year posix id).foldl
      (fun a t => if t.time.val > lastTs then a.push t else a) acc
    extendForYears posix id firstYear lastTs (i + 1) n acc'
termination_by n - i
decreasing_by omega

-- Extend a transition array with POSIX-derived entries for all years beyond the last stored one.
private def extendWithPosix (transitions : Array Transition) (posixStr : String) (id : String) : Array Transition :=
  match parsePosixTz posixStr with
  | none => transitions
  | some posix =>
    if posix.start.isNone then transitions
    else
      let lastTs   := if transitions.isEmpty then 0 else transitions.back!.time.val
      let fromYear := lastTs / 31557600 + 1970
      let numYears := (2200 - fromYear + 1).toNat
      extendForYears posix id fromYear lastTs 0 numYears transitions

/--
Converts a `TZif.TZifV2` structure to a `ZoneRules` structure, extending transitions beyond
the last stored entry using the POSIX TZ footer string when present.
-/
def convertTZifV2 (tz : TZif.TZifV2) (id : String) : Except String ZoneRules := do
  let rules ← convertTZifV1 tz.toTZifV1 id
  match tz.footer with
  | none        => return rules
  | some footer =>
    return { rules with transitions := extendWithPosix rules.transitions footer id }

/--
Converts a `TZif.TZif` structure to a `ZoneRules` structure.
-/
def convertTZif (tz : TZif.TZif) (id : String) : Except String ZoneRules := do
  if let some v2 := tz.v2
    then convertTZifV2 v2 id
    else convertTZifV1 tz.v1 id
