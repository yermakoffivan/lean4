/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.System.IO
public import Std.Time.Duration

public section

namespace Std
namespace Time

set_option linter.all true

/--
Represents a wall-clock time as a duration since the Unix epoch in local (civil) time. The wall time
starts at 1970-01-01T00:00:00 local time.

Unlike `Timestamp`, which is always UTC, `WallTime` carries no timezone information.
-/
@[ext]
structure WallTime where
  private mk ::

  /--
  Duration since the Unix epoch, measured in local wall-clock time.
  -/
  val : Duration
  deriving Repr, DecidableEq, Inhabited

instance : LE WallTime where
  le x y := x.val ≤ y.val

instance { x y : WallTime } : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.val ≤ y.val))

instance : LT WallTime where
  lt x y := x.val < y.val

instance { x y : WallTime } : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.val < y.val))

instance : Ord WallTime where
  compare := compareOn (·.val)

instance : ToString WallTime where
  toString s := toString s.val.toSeconds

instance : Repr WallTime where
  reprPrec s := Repr.addAppParen ("WallTime.ofNanoseconds " ++ repr s.val.toNanoseconds)

namespace WallTime

/--
Creates a `WallTime` from a `Duration` since the Unix epoch.
-/
@[inline]
def ofDuration (duration : Duration) : WallTime :=
  ⟨duration⟩

/--
Creates a `WallTime` from a `Second.Offset`. The epoch is 1970-01-01 00:00:00 in local
(civil) time, not UTC.
-/
@[inline]
def ofSeconds (secs : Second.Offset) : WallTime :=
  ⟨Duration.ofSeconds secs⟩

/--
Creates a `WallTime` from a `Nanosecond.Offset`. The epoch is 1970-01-01 00:00:00 in local
(civil) time, not UTC.
-/
@[inline]
def ofNanoseconds (nanos : Nanosecond.Offset) : WallTime :=
  ⟨Duration.ofNanoseconds nanos⟩

/--
Converts a `WallTime` to seconds as `Second.Offset`.
-/
@[inline]
def toSeconds (wt : WallTime) : Second.Offset :=
  wt.val.second

/--
Converts a `WallTime` to nanoseconds as `Nanosecond.Offset`.
-/
@[inline]
def toNanoseconds (wt : WallTime) : Nanosecond.Offset :=
  let nanos := wt.toSeconds.mul 1000000000
  let nanos := nanos + (.ofInt wt.val.nano.val)
  nanos

/--
Converts a `WallTime` to minutes as `Minute.Offset`.
-/
@[inline]
def toMinutes (tm : WallTime) : Minute.Offset :=
  tm.val.second.toMinutes

/--
Converts a `WallTime` to days as `Day.Offset`.
-/
@[inline]
def toDays (tm : WallTime) : Day.Offset :=
  tm.val.second.toDays

/--
Creates a `WallTime` from a `Millisecond.Offset`. The epoch is 1970-01-01 00:00:00 in local
(civil) time, not UTC.
-/
@[inline]
def ofMilliseconds (milli : Millisecond.Offset) : WallTime :=
  ⟨Duration.ofNanoseconds milli.toNanoseconds⟩

/--
Converts a `WallTime` to milliseconds as `Millisecond.Offset`.
-/
@[inline]
def toMilliseconds (tm : WallTime) : Millisecond.Offset :=
  tm.toNanoseconds.toMilliseconds

/--
Adds a `Millisecond.Offset` to the given `WallTime`.
-/
@[inline]
def addMilliseconds (t : WallTime) (s : Millisecond.Offset) : WallTime :=
  ⟨t.val + s⟩

/--
Subtracts a `Millisecond.Offset` from the given `WallTime`.
-/
@[inline]
def subMilliseconds (t : WallTime) (s : Millisecond.Offset) : WallTime :=
  ⟨t.val - s⟩

/--
Adds a `Nanosecond.Offset` to the given `WallTime`.
-/
@[inline]
def addNanoseconds (t : WallTime) (s : Nanosecond.Offset) : WallTime :=
  ⟨t.val + s⟩

/--
Subtracts a `Nanosecond.Offset` from the given `WallTime`.
-/
@[inline]
def subNanoseconds (t : WallTime) (s : Nanosecond.Offset) : WallTime :=
  ⟨t.val - s⟩

/--
Adds a `Second.Offset` to the given `WallTime`.
-/
@[inline]
def addSeconds (t : WallTime) (s : Second.Offset) : WallTime :=
  ⟨t.val + s⟩

/--
Subtracts a `Second.Offset` from the given `WallTime`.
-/
@[inline]
def subSeconds (t : WallTime) (s : Second.Offset) : WallTime :=
  ⟨t.val - s⟩

/--
Adds a `Minute.Offset` to the given `WallTime`.
-/
@[inline]
def addMinutes (t : WallTime) (m : Minute.Offset) : WallTime :=
  ⟨t.val + m⟩

/--
Subtracts a `Minute.Offset` from the given `WallTime`.
-/
@[inline]
def subMinutes (t : WallTime) (m : Minute.Offset) : WallTime :=
  ⟨t.val - m⟩

/--
Adds an `Hour.Offset` to the given `WallTime`.
-/
@[inline]
def addHours (t : WallTime) (h : Hour.Offset) : WallTime :=
  ⟨t.val + h⟩

/--
Subtracts an `Hour.Offset` from the given `WallTime`.
-/
@[inline]
def subHours (t : WallTime) (h : Hour.Offset) : WallTime :=
  ⟨t.val - h⟩

/--
Adds a `Day.Offset` to the given `WallTime`.
-/
@[inline]
def addDays (t : WallTime) (d : Day.Offset) : WallTime :=
  ⟨t.val + d⟩

/--
Subtracts a `Day.Offset` from the given `WallTime`.
-/
@[inline]
def subDays (t : WallTime) (d : Day.Offset) : WallTime :=
  ⟨t.val - d⟩

/--
Adds a `Week.Offset` to the given `WallTime`.
-/
@[inline]
def addWeeks (t : WallTime) (d : Week.Offset) : WallTime :=
  ⟨t.val + d⟩

/--
Subtracts a `Week.Offset` from the given `WallTime`.
-/
@[inline]
def subWeeks (t : WallTime) (d : Week.Offset) : WallTime :=
  ⟨t.val - d⟩

/--
Adds a `Duration` to the given `WallTime`.
-/
@[inline]
def addDuration (t : WallTime) (d : Duration) : WallTime :=
  ⟨t.val + d⟩

/--
Subtracts a `Duration` from the given `WallTime`.
-/
@[inline]
def subDuration (t : WallTime) (d : Duration) : WallTime :=
  ⟨t.val - d⟩

/--
Returns the underlying `Duration`.
-/
@[inline]
def toDuration (wt : WallTime) : Duration :=
  wt.val

instance : HAdd WallTime Duration WallTime where
  hAdd := addDuration

instance : HSub WallTime Duration WallTime where
  hSub := subDuration

instance : HAdd WallTime Day.Offset WallTime where
  hAdd := addDays

instance : HSub WallTime Day.Offset WallTime where
  hSub := subDays

instance : HAdd WallTime Week.Offset WallTime where
  hAdd := addWeeks

instance : HSub WallTime Week.Offset WallTime where
  hSub := subWeeks

instance : HAdd WallTime Hour.Offset WallTime where
  hAdd := addHours

instance : HSub WallTime Hour.Offset WallTime where
  hSub := subHours

instance : HAdd WallTime Minute.Offset WallTime where
  hAdd := addMinutes

instance : HSub WallTime Minute.Offset WallTime where
  hSub := subMinutes

instance : HAdd WallTime Second.Offset WallTime where
  hAdd := addSeconds

instance : HSub WallTime Second.Offset WallTime where
  hSub := subSeconds

instance : HAdd WallTime Millisecond.Offset WallTime where
  hAdd := addMilliseconds

instance : HSub WallTime Millisecond.Offset WallTime where
  hSub := subMilliseconds

instance : HAdd WallTime Nanosecond.Offset WallTime where
  hAdd := addNanoseconds

instance : HSub WallTime Nanosecond.Offset WallTime where
  hSub := subNanoseconds

instance : HSub WallTime WallTime Duration where
  hSub x y := x.val - y.val

instance : OfNat WallTime n where
  ofNat := .ofSeconds (Second.Offset.ofNat n)

end WallTime
end Time
end Std
