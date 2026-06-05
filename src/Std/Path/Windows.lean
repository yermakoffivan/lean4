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
# Path.Windows Operations

Pure operations on `Path.Windows`, a Windows-specific string-backed path type.
All functions accept both `\` and `/` as separators and handle drive-letter
prefixes (`C:`) and UNC paths (`\\server\share`).

These mirror the `Path` pure API but stay in the `Path.Windows` world, making it
easy to work with Windows paths without going through the `Component` representation.
-/

namespace Std.Path.Path.Windows

/--
Append `segment` to `p`, returning a new `Path.Windows`.

If `segment` is an absolute path (starts with `\`, `/`, or a drive prefix),
it replaces `p` entirely.
-/
def join (p : Path.Windows) (segment : String) : Path.Windows :=
  sorry

/--
Drop the last path component, returning the parent directory.

Returns `none` when `p` is a root path (e.g. `"C:\"`, `"\\"`) or a bare file name.
-/
def parent (p : Path.Windows) : Option Path.Windows :=
  sorry

/--
The last normal path component (the file or directory name).

Returns `none` when the path ends with `.`, `..`, is a drive root, or a UNC share root.
-/
def fileName (p : Path.Windows) : Option String :=
  sorry

/--
The filename without its last extension.

Returns `none` when there is no file name (see `fileName`).
-/
def fileStem (p : Path.Windows) : Option String :=
  sorry

/--
The last file extension, without the leading `.`.

Returns `none` when the file has no extension or there is no file name.
-/
def extension (p : Path.Windows) : Option String :=
  sorry

/-- True if the file name has at least one extension. -/
def hasExtension (p : Path.Windows) : Bool :=
  sorry

/--
Replace the last path component with `fname`.

If `p` has no parent, `fname` is returned as a bare path preserving any drive prefix.
-/
def withFileName (p : Path.Windows) (fname : String) : Path.Windows :=
  sorry

/--
Replace the last file extension with `ext` (without leading `.`).

If `ext` is empty, the extension is removed. If there is no extension, `ext` is appended.
-/
def withExtension (p : Path.Windows) (ext : String) : Path.Windows :=
  sorry

/--
Append `ext` (without leading `.`) to the file name without removing any existing extensions.

If `ext` is empty, `p` is returned unchanged.
-/
def addExtension (p : Path.Windows) (ext : String) : Path.Windows :=
  sorry

/--
All file extensions in order, without leading `.`.

Examples:
- `"archive.tar.gz"` → `#["tar", "gz"]`
- `"Makefile"` → `#[]`
-/
def suffixes (p : Path.Windows) : Array String :=
  sorry

/--
Replace the stem (the file name without all extensions) with `stem`, keeping
all existing extensions intact.
-/
def withStem (p : Path.Windows) (stem : String) : Path.Windows :=
  sorry

/--
All ancestors of `p`, from the immediate parent up to the root, in order.

For `"C:\a\b\c"` this yields `["C:\a\b", "C:\a", "C:\"]`.
-/
def parents (p : Path.Windows) : Array Path.Windows :=
  sorry

/--
True if `p` starts with `prefix` (component-wise, not as a raw string prefix).
-/
def startsWith (p prefx : Path.Windows) : Bool :=
  sorry

/--
True if `p` ends with `suffix` (component-wise).
-/
def endsWith (p suffix : Path.Windows) : Bool :=
  sorry

/--
Compute the path from `base` to `target`, both treated as Windows paths.

Returns `none` if the two paths have different roots or drive letters.
-/
def relativeTo? (base target : Path.Windows) : Option Path.Windows :=
  sorry

/--
Remove `prefix` from the beginning of `p` (component-wise).

Returns `none` if `p` does not start with `prefix`.
-/
def dropPrefix? (p prefx : Path.Windows) : Option Path.Windows :=
  sorry

/--
The drive-letter prefix (e.g. `"C:"`), if present.

Returns `none` for UNC paths and paths without a drive letter.
-/
def drive? (p : Path.Windows) : Option String :=
  sorry

/--
The root separator string after the drive prefix (`"\\"` or `"/"`), if the path
is absolute. Returns `none` for relative paths.
-/
def root? (p : Path.Windows) : Option String :=
  sorry

/--
The drive concatenated with the root separator (e.g. `"C:\\"`, `"\\"`, or `""` for
a relative path with no drive).
-/
def anchor (p : Path.Windows) : String :=
  (p.drive?.getD "") ++ (p.root?.getD "")

/--
True if `p` is a UNC path of the form `\\server\share\...`.
-/
def isUNC (p : Path.Windows) : Bool :=
  sorry

/--
Resolve `.` and `..` components, returning a normalized path.

`..` above a root is silently dropped. No file system access is performed.
-/
def normalize (p : Path.Windows) : Path.Windows :=
  sorry

/--
True if `p` starts with `\`, `/`, or a drive-letter prefix (`C:\`, `C:/`).
-/
def isAbsolute (p : Path.Windows) : Bool :=
  sorry

/-- True if `p` does not satisfy `isAbsolute`. -/
def isRelative (p : Path.Windows) : Bool :=
  !p.isAbsolute

/-- Append a segment using the `/` operator (delegates to `join`). -/
instance : HDiv Path.Windows String Path.Windows where
  hDiv := join

end Std.Path.Path.Windows
