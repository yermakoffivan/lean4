/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
import Init.Data.String.Basic
import Init.Data.Array.Basic
import Init.Data.Option.Basic
import Init.Data.Repr
import Init.Data.BEq
import Init.Data.Hashable
import Init.Data.ToString.Basic
public import Std.Path.Component

public section

/-!
# Path, Path.Posix, Path.Windows

Core path types for `Std.Path`.

- `Path` is the canonical representation: a parsed `Array Component` that is
  platform-neutral and supports pure manipulation without touching the file system.
- `Path.Posix` is a thin `String` wrapper whose operations always use `/` as the
  separator, regardless of the host OS.
- `Path.Windows` is a thin `String` wrapper whose operations handle `\`, `/`,
  drive-letter prefixes (`C:`), and UNC paths (`\\server\share`).

Both `Path.Posix` and `Path.Windows` coerce to `Path` via their respective `toPath`
functions, so they can be used wherever a `Path` is expected.
-/

namespace Std.Path

/--
A platform-neutral, parsed file system path stored as an array of `Component`s.

All structural operations (`join`, `parent`, `normalize`, etc.) work directly on
the `components` array, so they are pure and require no OS calls. Platform-specific
behaviour is limited to parsing (`fromString`) and rendering (`toString`), which are
`IO` actions.

Use `Path.fromPosixString` or `Path.fromWindowsString` for pure construction from
string literals when the platform format is known at compile time.
-/
structure Path where

  /--
  The parsed path components in order (e.g. `#[.root, .normal "usr", .normal "bin"]`).
  -/
  components : Array Component
deriving Inhabited, BEq, Hashable, Repr

namespace Path

/--
A POSIX file system path stored as a raw `String`.

Operations on `Path.Posix` always use `/` as the separator and never interpret
drive-letter prefixes or backslashes. This makes them suitable for use on any host OS
when the path is known to follow POSIX conventions (e.g. paths inside a ZIP archive,
URLs, or Lean source roots).

`Path.Posix` coerces to `Path` via `Path.Posix.toPath`.
-/
structure Posix where
  /--
  The underlying POSIX path string
  -/
  raw : String
deriving Inhabited, BEq, Hashable, Repr

instance : ToString Posix where
  toString p := p.raw

/--
A Windows file system path stored as a raw `String`.

Operations on `Windows` handle both `\` and `/` as separators, drive-letter
prefixes (`C:\`), and UNC paths (`\\server\share\...`). This makes them suitable for
representing paths exchanged with Windows APIs or embedded in cross-platform tooling.

`Windows` coerces to `Path` via `Windows.toPath`.
-/
structure Windows where
  /--
  The underlying Windows path string
  -/
  raw : String
  deriving Inhabited, BEq, Hashable, Repr

instance : ToString Windows where
  toString p := p.raw

/--
Parse a POSIX-formatted string into a `Path`. Pure; uses `/` as the only separator.
-/
def fromPosixString (s : String) : Path :=
  sorry

/--
Parse a Windows-formatted string into a `Path`. Pure; accepts both `\` and `/`,
and an optional drive-letter prefix such as `"C:"`.
-/
def fromWindowsString (s : String) : Path :=
  sorry

/--
Convert a `Posix` to a `Path` by parsing its underlying string.
-/
def Posix.toPath (p : Posix) : Path :=
  fromPosixString p.raw

/--
Convert a `Windows` to a `Path` by parsing its underlying string.
-/
def Windows.toPath (p : Windows) : Path :=
  fromWindowsString p.raw

/--
Lift a `Path` back to its canonical POSIX string representation (`/`-separated).
-/
def toPosixPath (p : Path) : Posix :=
  sorry

/--
Lift a `Path` back to its canonical Windows string representation (`\`-separated,
with drive prefix if present).
-/
def toWindowsPath (p : Path) : Windows :=
  sorry

/--
Alias for `Posix.toPath`.
-/
abbrev ofPosixPath (p : Posix) : Path := p.toPath

/--
Alias for `Windows.toPath`.
-/
abbrev ofWindowsPath (p : Windows) : Path := p.toPath

end Path

instance : Coe Path.Posix Path where
  coe := Path.Posix.toPath

instance : Coe Path.Windows Path where
  coe := Path.Windows.toPath

/--
Join two paths with the `/` operator (delegates to `Path.join`).
-/
instance : Div Path where
  div := fun a b => sorry

end Std.Path
