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
# Path.Posix Operations

Pure operations on `Path.Posix`, a POSIX-specific string-backed path type.
All functions use `/` as the sole separator and ignore drive-letter prefixes.

These mirror the `Path` pure API but stay in the `Path.Posix` world, making it
easy to work with POSIX paths without going through the `Component` representation.
-/

namespace Std.Path.Path.Posix

/--
Append `segment` to `p`, returning a new `Path.Posix`.

If `segment` starts with `/`, it is treated as an absolute path and replaces `p`
entirely (same semantics as `Path.join`).
-/
def join (p : Path.Posix) (segment : String) : Path.Posix :=
  sorry

/--
Drop the last path component, returning the parent directory.

Returns `none` when `p` is the root (`"/"`) or a bare file name with no parent.
-/
def parent (p : Path.Posix) : Option Path.Posix :=
  sorry

/--
The last normal path component (the file or directory name).

Returns `none` when the path ends with `.`, `..`, or is the root `/`.
-/
def fileName (p : Path.Posix) : Option String :=
  sorry

/--
The filename without its last extension.

Returns `none` when there is no file name (see `fileName`).

Examples:
- `"src/Main.lean"` → `some "Main"`
- `"archive.tar.gz"` → `some "archive.tar"`
- `"."` → `none`
-/
def fileStem (p : Path.Posix) : Option String :=
  sorry

/--
The last file extension, without the leading `.`.

Returns `none` when the file has no extension or there is no file name.

Examples:
- `"Main.lean"` → `some "lean"`
- `"archive.tar.gz"` → `some "gz"`
- `"Makefile"` → `none`
-/
def extension (p : Path.Posix) : Option String :=
  sorry

/-- True if the file name has at least one extension. -/
def hasExtension (p : Path.Posix) : Bool :=
  sorry

/--
Replace the last path component with `fname`.

If `p` has no parent, `fname` is returned as a bare relative path.
-/
def withFileName (p : Path.Posix) (fname : String) : Path.Posix :=
  sorry

/--
Replace the last file extension with `ext` (without leading `.`).

If `ext` is empty, the extension is removed. If there is no extension, `ext` is appended.
-/
def withExtension (p : Path.Posix) (ext : String) : Path.Posix :=
  sorry

/--
Append `ext` (without leading `.`) to the file name without removing any existing extensions.

If `ext` is empty, `p` is returned unchanged.
-/
def addExtension (p : Path.Posix) (ext : String) : Path.Posix :=
  sorry

/--
All file extensions in order, without leading `.`.

Examples:
- `"archive.tar.gz"` → `#["tar", "gz"]`
- `"Makefile"` → `#[]`
-/
def suffixes (p : Path.Posix) : Array String :=
  sorry

/--
Replace the stem (the file name without all extensions) with `stem`, keeping
all existing extensions intact.

Complement of `withExtension`.
-/
def withStem (p : Path.Posix) (stem : String) : Path.Posix :=
  sorry

/--
All ancestors of `p`, from the immediate parent up to the root, in order.

For `"/a/b/c"` this yields `["/a/b", "/a", "/"]`.
-/
def parents (p : Path.Posix) : Array Path.Posix :=
  sorry

/--
True if `p` starts with `prefix` (component-wise, not as a raw string prefix).

`"/usr/local"` starts with `"/usr"` but not with `"/us"`.
-/
def startsWith (p prefx : Path.Posix) : Bool :=
  sorry

/--
True if `p` ends with `suffix` (component-wise).

`"/usr/local/bin"` ends with `"local/bin"` but not with `"ocal/bin"`.
-/
def endsWith (p suffix : Path.Posix) : Bool :=
  sorry

/--
Compute the path from `base` to `target`, both treated as POSIX paths.

Returns `none` if the two paths have different roots (e.g. one is absolute and
the other is relative, or they diverge before any common ancestor).
-/
def relativeTo? (base target : Path.Posix) : Option Path.Posix :=
  sorry

/--
Remove `prefix` from the beginning of `p` (component-wise).

Returns `none` if `p` does not start with `prefix`.
-/
def dropPrefix? (p prefx : Path.Posix) : Option Path.Posix :=
  sorry

/--
Resolve `.` and `..` components, returning a normalized path.

`..` above the root is silently ignored (consistent with POSIX `realpath` semantics
for syntactic normalization). No file system access is performed.
-/
def normalize (p : Path.Posix) : Path.Posix :=
  sorry

/-- True if `p` starts with `/`. -/
def isAbsolute (p : Path.Posix) : Bool :=
  sorry

/-- True if `p` does not start with `/`. -/
def isRelative (p : Path.Posix) : Bool :=
  !p.isAbsolute

/-- Append a segment using the `/` operator (delegates to `join`). -/
instance : HDiv Path.Posix String Path.Posix where
  hDiv := join

end Std.Path.Path.Posix
