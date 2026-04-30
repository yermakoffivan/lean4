/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.Data.Vector.Extract
public import Std.Time.Date.Unit.Weekday

public section

namespace Std
namespace Time

set_option linter.all true

/--
`LocaleSymbols` contains locale-specific strings needed for date/time formatting and parsing.

Arrays are 0-indexed: `monthLong[0]` = January, `weekdayLong[0]` = Monday, `eraShort[0]` = BC.
-/
structure LocaleSymbols where

  /--
  Full month names (12 elements, index 0 = January).
  -/
  monthLong : Vector String 12

  /--
  Abbreviated month names (12 elements, index 0 = Jan).
  -/
  monthShort : Vector String 12

  /--
  Narrow month names (12 elements, index 0 = J).
  -/
  monthNarrow : Vector String 12

  /--
  Full weekday names (7 elements, index 0 = Monday).
  -/
  weekdayLong : Vector String 7

  /--
  Abbreviated weekday names (7 elements, index 0 = Mon).
  -/
  weekdayShort : Vector String 7

  /--
  Narrow weekday names (7 elements, index 0 = M).
  -/
  weekdayNarrow : Vector String 7

  /--
  Short era names (2 elements: index 0 = BC, index 1 = AD).
  -/
  eraShort : Vector String 2

  /--
  Full era names (2 elements: index 0 = Before Christ, index 1 = Anno Domini).
  -/
  eraLong : Vector String 2

  /--
  Narrow era names (2 elements: index 0 = B, index 1 = A).
  -/
  eraNarrow : Vector String 2

  /--
  Short quarter names (4 elements, index 0 = Q1).
  -/
  quarterShort : Vector String 4

  /--
  Full quarter names (4 elements, index 0 = 1st quarter).
  -/
  quarterLong : Vector String 4

  /--
  Narrow quarter names (4 elements, index 0 = 1).
  -/
  quarterNarrow : Vector String 4

  /--
  Short AM marker.
  -/
  amShort : String

  /--
  Short PM marker.
  -/
  pmShort : String

  /--
  Full AM marker.
  -/
  amLong : String

  /--
  Full PM marker.
  -/
  pmLong : String

  /--
  Narrow AM marker.
  -/
  amNarrow : String

  /--
  Narrow PM marker.
  -/
  pmNarrow : String

  /--
  Two-letter abbreviated weekday names (7 elements, index 0 = Monday).
  -/
  weekdayTwoLetterShort : Vector String 7

  /--
  Short day period names (4 elements: index 0 = am, 1 = pm, 2 = noon, 3 = midnight).
  -/
  dayPeriodShort : Vector String 4

  /--
  Full day period names (4 elements: index 0 = am, 1 = pm, 2 = noon, 3 = midnight).
  -/
  dayPeriodLong : Vector String 4

  /--
  Narrow day period names (4 elements: index 0 = am, 1 = pm, 2 = noon, 3 = midnight).
  -/
  dayPeriodNarrow : Vector String 4

  /--
  Short extended day period names (6 elements: 0 = midnight, 1 = night, 2 = morning, 3 = noon, 4 = afternoon, 5 = evening).
  -/
  extendedDayPeriodShort : Vector String 6

  /--
  Narrow extended day period names (6 elements: 0 = midnight, 1 = night, 2 = morning, 3 = noon, 4 = afternoon, 5 = evening).
  -/
  extendedDayPeriodNarrow : Vector String 6

namespace LocaleSymbols

/--
English (US) locale symbols.
-/
def enUS : LocaleSymbols where
  monthLong := Vector.mk #["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"] (by decide)
  monthShort := Vector.mk #["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"] (by decide)
  monthNarrow := Vector.mk #["J", "F", "M", "A", "M", "J", "J", "A", "S", "O", "N", "D"] (by decide)
  weekdayLong := Vector.mk #["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"] (by decide)
  weekdayShort := Vector.mk #["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"] (by decide)
  weekdayNarrow := Vector.mk #["M", "T", "W", "T", "F", "S", "S"] (by decide)
  eraShort := Vector.mk #["BC", "AD"] (by decide)
  eraLong := Vector.mk #["Before Christ", "Anno Domini"] (by decide)
  eraNarrow := Vector.mk #["B", "A"] (by decide)
  quarterShort := Vector.mk #["Q1", "Q2", "Q3", "Q4"] (by decide)
  quarterLong := Vector.mk #["1st quarter", "2nd quarter", "3rd quarter", "4th quarter"] (by decide)
  quarterNarrow := Vector.mk #["1", "2", "3", "4"] (by decide)
  amShort := "AM"
  pmShort := "PM"
  amLong := "AM"
  pmLong := "PM"
  amNarrow := "a"
  pmNarrow := "p"
  weekdayTwoLetterShort := Vector.mk #["Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"] (by decide)
  dayPeriodShort := Vector.mk #["AM", "PM", "noon", "midnight"] (by decide)
  dayPeriodLong := Vector.mk #["AM", "PM", "noon", "midnight"] (by decide)
  dayPeriodNarrow := Vector.mk #["a", "p", "n", "mi"] (by decide)
  extendedDayPeriodShort := Vector.mk #["midnight", "at night", "in the morning", "noon", "in the afternoon", "in the evening"] (by decide)
  extendedDayPeriodNarrow := Vector.mk #["mi", "at night", "in the morning", "n", "in the afternoon", "in the evening"] (by decide)

end LocaleSymbols

/--
`Locale` contains locale-specific configuration for date/time formatting and parsing,
combining calendar conventions (e.g. first day of week) with locale symbols.
-/
structure Locale where

  /--
  The first day of the week for this locale (e.g., `Weekday.sunday` for US, `Weekday.monday` for ISO 8601).
  -/
  firstDayOfWeek : Weekday := .sunday

  /--
  Locale-specific symbols used for formatting and parsing text fields.
  -/
  symbols : LocaleSymbols := LocaleSymbols.enUS

namespace Locale

/--
English (US) locale.
-/
def enUS : Locale where
  firstDayOfWeek := .sunday
  symbols := LocaleSymbols.enUS

end Locale

end Time
end Std
