/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.Data.String.Basic
public import Init.Data.Array.Basic
public import Init.Data.Option.Basic
public import Init.Data.Bool
public import Std.Path.Basic

public section

/-!
# Path — Pure Operations

Structural operations on `Path` that work directly on the `Array Component`
representation. All functions here are pure — no OS calls, no file system access.

Note: functions that accept a `String` segment (e.g. `join`, `withFileName`) do NOT
split that string on separators. `"src/Main.lean"` is treated as a single segment
on Windows but as two components on POSIX. Use `Path.fromPosixString` or
`Path.fromWindowsString` to parse a multi-component string first.
-/

namespace Std.Path.Path

/--
Append `other` to `p`.

If `other` is an absolute path (its first component is `root` or `drivePrefix`),
`other` replaces `p` entirely — same semantics as Python's `PurePath.__truediv__`
and Rust's `Path::join`.
-/
def join (p other : Path) : Path :=
  sorry

/-- True if the first component of `p` is `root` (or `drivePrefix` followed by `root`). -/
def isAbsolute (p : Path) : Bool :=
  sorry

/-- True if `p` is not absolute. -/
def isRelative (p : Path) : Bool :=
  !p.isAbsolute

/--
The drive-letter prefix as a string (e.g. `"C:"`).

Returns `none` on POSIX paths and relative Windows paths that have no drive letter.
-/
def drive? (p : Path) : Option String :=
  sorry

/--
The root separator string (`"/"` or `"\\"`) if the path is absolute; `none` otherwise.
-/
def root? (p : Path) : Option String :=
  sorry

/--
Drive concatenated with root (e.g. `"C:\\"`, `"/"`, or `""` for a relative path).
-/
def anchor (p : Path) : String :=
  (p.drive?.getD "") ++ (p.root?.getD "")

/--
Drop the last non-root component, returning the parent directory path.

Returns `none` for root paths, empty paths, and bare `.` paths.
-/
def parent (p : Path) : Option Path :=
  sorry

/--
The last `normal` component as a string (i.e. the file or directory name).

Returns `none` when the path ends with `root`, `current`, or `parent` components,
or when the path is empty.
-/
def fileName (p : Path) : Option String :=
  sorry

/--
The filename without the last extension.

Returns `none` when there is no file name (see `fileName`).

Examples:
- `Path.fromPosixString "src/Main.lean" |>.fileStem = some "Main"`
- `Path.fromPosixString "archive.tar.gz" |>.fileStem = some "archive.tar"`
-/
def fileStem (p : Path) : Option String :=
  sorry

/--
The last file extension, without the leading `.`.

Returns `none` when the filename has no extension or when there is no file name.

Examples:
- `Path.fromPosixString "Main.lean" |>.extension = some "lean"`
- `Path.fromPosixString "archive.tar.gz" |>.extension = some "gz"`
- `Path.fromPosixString "Makefile" |>.extension = none`
-/
def extension (p : Path) : Option String :=
  sorry

/-- True if the file name has at least one extension. -/
def hasExtension (p : Path) : Bool :=
  p.extension.isSome

/--
Replace the last path component with `fname`.

If `p` has no parent (e.g. it is a root or empty), `fname` is returned as a bare
path preserving any prefix components.
-/
def withFileName (p : Path) (fname : String) : Path :=
  sorry

/--
Replace the last file extension with `ext` (without leading `.`).

If `ext` is empty, the extension is removed. If the filename currently has no
extension, `ext` is appended.
-/
def withExtension (p : Path) (ext : String) : Path :=
  sorry

/--
Append `ext` (without leading `.`) to the file name, without removing any
existing extensions.

If `ext` is empty, `p` is returned unchanged.
-/
def addExtension (p : Path) (ext : String) : Path :=
  sorry

/--
All file extensions of the last component, in order, without leading `.`.

Examples:
- `Path.fromPosixString "archive.tar.gz" |>.suffixes = #["tar", "gz"]`
- `Path.fromPosixString "Makefile" |>.suffixes = #[]`
-/
def suffixes (p : Path) : Array String :=
  sorry

/--
Replace the stem (all of the filename before the extensions) with `stem`,
keeping every existing extension intact.

Complement of `withExtension`: `p.withStem s |>.suffixes = p.suffixes`.
-/
def withStem (p : Path) (stem : String) : Path :=
  sorry

/--
All ancestors of `p`, from the immediate parent up to (and including) the root,
in order.

For `Path.fromPosixString "/a/b/c"` this yields
`[Path.fromPosixString "/a/b", Path.fromPosixString "/a", Path.fromPosixString "/"]`.
-/
def parents (p : Path) : Array Path :=
  sorry

/--
True if `p` starts with `prefix` (component-wise, not as a raw string prefix).

`Path.fromPosixString "/usr/local"` starts with
`Path.fromPosixString "/usr"` but not with `Path.fromPosixString "/us"`.
-/
def startsWith (p prefx : Path) : Bool :=
  sorry

/--
True if `p` ends with `suffix` (component-wise).

`suffix` must be a relative path or a single filename.
-/
def endsWith (p suffix : Path) : Bool :=
  sorry

/--
Remove `prefix` from the beginning of `p` (component-wise).

Returns `none` if `p` does not start with `prefix`.
-/
def dropPrefix? (p prefx : Path) : Option Path :=
  sorry

/--
Compute a path from `base` to `target` such that `base.join (base.relativeTo? target) = target`.

Returns `none` if `base` and `target` have different roots (e.g. different drive
letters on Windows, or one absolute and one relative).
-/
def relativeTo? (base target : Path) : Option Path :=
  sorry

/--
Resolve `.` components and eliminate `..` components syntactically.

`..` above a root is silently dropped (no error). No file system access is performed;
symlinks are not resolved.
-/
def normalize (p : Path) : Path :=
  sorry

/--
Test `p` against a glob pattern.

Supported wildcards:
- `*` — matches any sequence of characters within a single component (not `/`)
- `**` — matches zero or more components (path segments)
- `?` — matches any single character (not `/`)
- `[abc]` / `[a-z]` — character class, matches one character in the set

Returns `true` if the pattern matches the full path.
-/
def matchGlob (p : Path) (pattern : String) : Bool :=
  sorry

/--
Iterate over the components of a path in order.
-/
def iter (p : Path) : Array Component :=
  p.components

/--
Build a `Path` from an array of components.
-/
def ofIter (cs : Array Component) : Path :=
  { components := cs }

end Std.Path.Path
