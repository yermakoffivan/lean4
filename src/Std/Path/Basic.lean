/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.Data.String
public import Init.Data.Array.Basic
public import Init.Data.Option.Basic
public import Init.Data.Repr
public import Init.Data.BEq
public import Init.Data.Hashable
public import Init.Data.ToString.Basic

public section

/-!
# Path.Basic

Core types for `Std.Path`: `Path.Component` and `Path`.
-/

namespace Std

/--
A single parsed segment of a file system path.

Paths are stored as `Array Component`, so all structural operations (parent, join, normalize) work
directly on this array without re-scanning strings.
-/
inductive Path.Component where

  /--
  A Windows drive-letter prefix, e.g. `"C:"` (without the trailing separator).

  Only produced when parsing a Windows-style string. POSIX paths never contain
  this component.
  -/
  | drivePrefix (value : String)

  /--
  The root separator (`/` on POSIX, `\` on Windows).

  Present as the first component of every absolute path. Relative paths never
  start with `root`.
  -/
  | root (s : String)

  /--
  The special `.` segment, meaning "current directory".

  Preserved during parsing so that round-trips are lossless; `Path.normalize`
  removes these.
  -/
  | current

  /--
  The special `..` segment, meaning "parent directory".

  Preserved during parsing; `Path.normalize` resolves these where possible.
  -/
  | parent

  /--
  An ordinary path segment — a file or directory name with no separators.

  The `value` is the raw segment string (e.g. `"src"`, `"Main.lean"`).
  -/
  | normal (value : String)
deriving Inhabited, BEq, Hashable, Repr

end Std
