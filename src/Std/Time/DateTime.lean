/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.DateTime.WallTime
public import Std.Time.DateTime.Timestamp
public import Std.Time.DateTime.PlainDateTime
import all Std.Time.Date.Unit.Month

public section

namespace Std
namespace Time

set_option linter.all true

namespace PlainDate

/--
Converts a `PlainDate` to a `WallTime`.
-/
@[inline]
def toWallTime (pd : PlainDate) : WallTime :=
  WallTime.ofSeconds pd.toEpochDay.toSeconds

/--
Converts a `WallTime` to a `PlainDate`.
-/
@[inline]
def ofWallTime (wt : WallTime) : PlainDate :=
  PlainDate.ofEpochDay wt.toDays

instance : HSub PlainDate PlainDate Duration where
  hSub x y := x.toWallTime - y.toWallTime

end PlainDate
namespace PlainTime

/--
Converts a `PlainTime` to a `WallTime`.
-/
@[inline]
def toWallTime (pt : PlainTime) : WallTime :=
  WallTime.ofNanoseconds pt.toNanoseconds

/--
Converts a `WallTime` to a `PlainTime`.
-/
@[inline]
def ofWallTime (wt : WallTime) : PlainTime :=
  PlainTime.ofNanoseconds wt.toNanoseconds

end PlainTime
namespace PlainDateTime

/--
Wraps a `PlainDate` in a `PlainDateTime` with midnight as the time component.
-/
@[inline]
def ofPlainDate (date : PlainDate) : PlainDateTime :=
  { date, time := PlainTime.midnight }

/--
Extracts the `PlainDate` component from a `PlainDateTime`.
-/
@[inline]
def toPlainDate (pdt : PlainDateTime) : PlainDate :=
  pdt.date

/--
Wraps a `PlainTime` in a `PlainDateTime` with year 1, month 1, day 1 as the date component.
-/
@[inline]
def ofPlainTime (time : PlainTime) : PlainDateTime :=
  { date := ⟨1, 1, 1, by decide⟩, time }

/--
Extracts the `PlainTime` component from a `PlainDateTime`.
-/
@[inline]
def toPlainTime (pdt : PlainDateTime) : PlainTime :=
  pdt.time

instance : HSub PlainDateTime PlainDateTime Duration where
  hSub x y := x.toWallTime - y.toWallTime

end PlainDateTime
