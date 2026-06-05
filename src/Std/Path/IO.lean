/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.Data.String.Basic
public import Init.Data.Char
public import Init.Data.List.Basic
public import Init.System.IO
public import Init.System.Platform
public import Std.Path.Pure

public section

/-!
# Path — IO Operations

Platform-sensitive operations that require reading runtime state (OS detection) or
performing file system calls (CWD resolution, symlink expansion).

`Path.fromString` and `Path.toString` are `IO` because the platform separator
(`/` on POSIX, `\` on Windows) is a runtime property, not a compile-time constant.
For code that knows the format at compile time, prefer the pure
`Path.fromPosixString` / `Path.fromWindowsString`.
-/

namespace Std.Path.Path

/--
The platform path separator character at runtime: `'/'` on POSIX, `'\\'` on Windows.

Use `Path.fromPosixString` or `Path.fromWindowsString` when the platform is known
at compile time.
-/
def pathSeparator : IO Char :=
  sorry

/--
All path separator characters accepted by the current platform.

On POSIX: `['/']`. On Windows: `['\\', '/']`.
-/
def pathSeparators : IO (List Char) :=
  sorry

/--
Parse `s` using the platform-native separator, delegating to
`Path.fromPosixString` on POSIX and `Path.fromWindowsString` on Windows.
-/
def fromString (s : String) : IO Path :=
  sorry

/--
Render `p` to a string using the platform-native separator and format.
-/
def toString (p : Path) : IO String :=
  sorry

/--
Resolve `p` against the process's current working directory if it is relative.

If `p` is already absolute, it is returned unchanged. No symlinks are resolved;
use `Path.resolve` for that.
-/
def toAbsoluteCWD (p : Path) : IO Path :=
  sorry

/--
Make `p` absolute and resolve all symlinks in the path.

Fails with an `IO.Error` if any component of the resulting path does not exist on
the file system.
-/
def resolve (p : Path) : IO Path :=
  sorry

/--
Convert `p` to a `file://` URI string.

The result is a valid RFC 8089 file URI. On Windows, drive letters are preserved
(e.g. `"C:\foo"` → `"file:///C:/foo"`).
-/
def toFileUri (p : Path) : IO String :=
  sorry

/--
Parse a `file://` URI into a `Path`.

Returns `none` if `uri` is not a valid file URI or cannot be decoded as a path
on the current platform.
-/
def ofFileUri? (uri : String) : IO (Option Path) :=
  sorry

end Std.Path.Path
