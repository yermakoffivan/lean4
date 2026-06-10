/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Init.Grind
public import Init.Data.String
public import Init.Data.Repr
public import Init.Data.BEq
public import Init.Data.Hashable
public import Init.Data.Iterators.Producers
public import Init.System.IO
public import Init.System.Platform
public import Std.Path.Internal.Parser
public import Std.Path.Internal.Glob
public import Std.Async.Process
public import Std.Internal.UV.System

public section

/-!
# Path

A platform-neutral file system path library for Lean, inspired by Python's `pathlib` and Rust's
`std::path`.

## Design

`Std.Path` replaces `System.FilePath` with a richer representation. Instead of a plain `String`
wrapper, paths are stored as `Array Path.Component`.

- All structural operations (`join`, `parent`, `normalize`, `startsWith`, …) are **pure**: they work
  on the component array without OS calls or string scanning.

- Platform-specific behaviour is confined to `IO` actions: `Path.fromString` and `Path.toString` use
  the runtime separator; `Path.resolve` calls into the OS.

## Quick Start

```lean
import Std.Path

open Std.Path

-- Pure construction from known-format strings
def p : Path := Path.fromPosixString "/usr/local/bin/lean"

#eval p.fileName    -- some "lean"
#eval p.extension   -- none
#eval p.parent      -- some (Path "/usr/local/bin")

-- Join with /
def q := p / Path.fromPosixString "lib"
#eval q.toPosixPath.raw  -- "/usr/local/bin/lean/lib"

-- Platform-sensitive parsing (IO)
def main : IO Unit := do
  let home ← Path.fromString (← IO.getEnv "HOME" |>.map (·.getD ""))
  let cfg := home / Path.fromPosixString ".config/lean"
  IO.println (← cfg.toString)
```
-/

namespace Std

/--
A platform-neutral, parsed file system path stored as an array of `Component`s.

All structural operations (`join`, `parent`, `normalize`, etc.) work directly on the `components`
array, so they are pure and require no OS calls. Platform-specific behaviour is limited to parsing
(`fromString`) and rendering (`toString`), which are `IO` actions.

Use `Path.fromPosixString` or `Path.fromWindowsString` for pure construction from string literals
when the platform format is known at compile time.
-/
structure Path where
  private mk ::
  /--
  The parsed path components in order (e.g. `#[.root "/", .normal "usr", .normal "bin"]`).
  -/
  components : Array Path.Component
deriving Inhabited, BEq, Hashable, Repr

namespace Path

private def splitAtLastDot (name : String) : Option (String.Slice × String.Slice) :=
  name.revFind? '.' |>.map fun dotPos => (name.extract name.startPos dotPos, name.extract dotPos.next! name.endPos)

@[inline]
private def get (path : Path) (idx : Nat) : Option Path.Component :=
  path.components[idx]?

/--
A valid file name: non-empty, not `.` or `..`, and contains no separator (`/`, `\`) or null byte
characters. Satisfied by `by decide` for string literals.
-/
abbrev ValidFileName (x : String) : Prop :=
  ¬x.isEmpty ∧ x ≠ "." ∧ x ≠ ".." ∧ x.toList.all (not <| · matches '\\' | '/' | '\x00')

/--
A valid file extension: non-empty and contains no separator (`/`, `\`), dot (`.`), or null byte.
Pass without the leading `.` — the dot is added by the caller. Satisfied by `by decide` for string
literals.
-/
abbrev ValidExtension (x : String) : Prop :=
  ¬x.isEmpty ∧ x.toList.all (not <| · matches '\\' | '/' | '\x00' | '.')

/--
The empty path: no components. Joining any path with `empty` yields that path unchanged.
-/
def empty : Path := { components := #[] }

/--
True if `p` has no components.
-/
@[inline]
def isEmpty (p : Path) : Bool :=
  p.components.isEmpty

/--
True if the first component of `p` is `root` (or `drivePrefix` followed by `root`).
-/
def isAbsolute (p : Path) : Bool :=
  match p.get 0, p.get 1 with
  | some (.root _), _ => true
  | some (.drivePrefix _), some (.root _) => true
  | _, _ => false

/--
True if `p` is not absolute.
-/
@[inline]
def isRelative (p : Path) : Bool :=
  ¬p.isAbsolute


/--
Append `other` to `p`.

If `other` is an absolute path (its first component is `root` or `drivePrefix`), `other` replaces
`p` entirely — same semantics as Python's `PurePath.__truediv__` and Rust's `Path::join`.
-/
@[inline]
def join (p p₂ : Path) : Path :=
  if p₂.isAbsolute then p₂
  else { components := p.components ++ p₂.components }

/--
The drive-letter prefix as a string (e.g. `"C:"`).

Returns `none` on POSIX paths and relative Windows paths that have no drive letter.
-/
def drive? (p : Path) : Option String :=
  match p.get 0 with
  | some (.drivePrefix v) => some v
  | _ => none

/--
The root separator string (`"/"` or `"\\"`) if the path is absolute; `none` otherwise.
-/
def root? (p : Path) : Option String :=
  match p.get 0, p.get 1 with
  | some (.drivePrefix _), some (.root root) => some root
  | some (.root root), _ => some root
  | _, _ => none

/--
Drive concatenated with root (e.g. `"C:\\"`, `"/"`, or `""` for a relative path).
-/
def anchor (p : Path) : String :=
  (p.drive?.getD "") ++ (p.root?.getD "")

/--
The number of `normal` components in `p` (drive prefix, root, `.`, and `..` are not counted).

Examples:
- `depth (ofPosixString "/usr/local/bin" |>.get!) = 3`
- `depth (ofPosixString ".." |>.get!) = 0`
-/
def depth (p : Path) : Nat :=
  p.components.foldl (fun acc c => match c with | .normal _ => acc + 1 | _ => acc) 0

/--
Resolve `.` components and eliminate `..` components syntactically.

`..` above a root is silently dropped (no error). No file system access is performed; symlinks are
not resolved.
-/
def normalize (p : Path) : Path where
  components :=
    let acc := p.components.foldl (fun acc c =>
      match c with
      | .current => acc
      | .parent =>
        match acc.back? with
        | some (.normal _) => acc.pop
        | some .parent => acc.push .parent
        | none => acc.push .parent -- relative path: preserve leading ".."
        | _ => acc -- root or drivePrefix: drop ".."
      | other => acc.push other
    ) #[]

    -- A relative path that normalizes to nothing is still ".", not empty.
    if acc.isEmpty && p.isRelative then #[.current] else acc

/--
Drop the last component, returning the parent directory path.

Returns `none` for root paths and empty paths. For a relative path whose parent would be empty
(e.g. `"a"`), returns `some (Path ".")`. `"."` is its own parent. Does not normalize the path first
call `normalize` beforehand if needed.
-/
def parent (path : Path) : Option Path :=
  match path.components.back? with
  | none => none
  | some (.root _) | some (.drivePrefix _) => none
  | _ =>
    let cs := path.components.pop
    if cs.isEmpty then some { components := #[.current] }
    else some { components := cs }

/--
True if `p` is an absolute path with no further components (i.e. only a root, with an optional
drive prefix). Examples: `"/"`, `"C:\\"`.
-/
def isRoot (p : Path) : Bool :=
  p.isAbsolute && p.parent.isNone

/--
The last `normal` component as a string (i.e. the file or directory name).

Returns `none` when the path ends with `root`, `current`, or `parent` components,
or when the path is empty.
-/
def fileName (p : Path) : Option String :=
  match p.components.back? with
  | some (.normal v) => some v
  | _ => none

/--
The filename without the last extension.

Returns `none` when there is no file name (see `fileName`).

Examples:
- `(ofPosixString "src/Main.lean" |>.get!).fileStem = some "Main"`
- `(ofPosixString "archive.tar.gz" |>.get!).fileStem = some "archive.tar"`
-/
def fileStem (p : Path) : Option String := do
  let name ← p.fileName

  let (searchIn, hadLeadingDot) :=
    if name.startsWith "." && name.length > 1 then (String.ofList name.toList.tail, true)
    else (name, false)

  match splitAtLastDot searchIn with
  | none => some name
  | some (stem, _)  => if hadLeadingDot then some <| "." ++ stem else some stem.toString

/--
The filename stem before the first extension (i.e. before the first `.` after any leading dot).

Returns `none` when there is no file name (see `fileName`).

Examples:
- `(ofPosixString "foo.tar.gz" |>.get!).filePrefix = some "foo"`
- `(ofPosixString ".hidden" |>.get!).filePrefix = some ".hidden"`
- `(ofPosixString ".hidden.tar.gz" |>.get!).filePrefix = some ".hidden"`
- `(ofPosixString "Makefile" |>.get!).filePrefix = some "Makefile"`
-/
def filePrefix (p : Path) : Option String :=
  p.fileName.map fun name =>
    let (leadingDot, rest) :=
      if name.startsWith "." && name.length > 1 then (".", name.drop 1 |>.toString)
      else ("", name)

    let parts := rest.split "." |>.toArray
    if parts.isEmpty then name
    else leadingDot ++ parts[0]!.toString

/--
The last file extension, without the leading `.`.

Returns `none` when the filename has no extension or when there is no file name.

Examples:
- `Path.fromPosixString "Main.lean" |>.extension = some "lean"`
- `Path.fromPosixString "archive.tar.gz" |>.extension = some "gz"`
- `Path.fromPosixString "Makefile" |>.extension = none`
-/
def extension (p : Path) : Option String :=
  p.fileName.bind fun name =>
    let searchIn :=
      if name.startsWith "." && name.length > 1 then name.extract name.startPos.next! name.endPos
      else name

    splitAtLastDot searchIn
    |>.map (·.2.toString)

/--
True if the file name has at least one extension.
-/
def hasExtension (p : Path) : Bool :=
  p.extension.isSome

/--
Replace the last path component with `fname`.

If `p` has no parent (e.g. it is a root or empty), `fname` is returned as a bare path preserving any
prefix components.
-/
def setFileName (p : Path) (fname : String) : Path :=
  match p.components.back? with
  | some (.normal _) => { p with components := p.components.pop.push (.normal fname) }
  | _ => p

/--
Replace the last path component with `fname`.

If `p` has no filename component (e.g. it ends with root), `p` is returned unchanged.
-/
def withFileName (p : Path) (fname : String) (_ : ValidFileName fname := by decide) : Path :=
  p.setFileName fname

/--
Replace the last file extension with `ext` (without leading `.`).

If `ext` is empty, the extension is removed. If the filename currently has no extension, `ext` is
appended.
-/
def withExtension (p : Path) (ext : String) (_ : ValidExtension ext := by decide) : Path :=
  match p.fileStem with
  | none => p
  | some stem => p.setFileName (stem ++ "." ++ ext)

/--
Append `ext` (without leading `.`) to the file name, without removing any existing extensions.
-/
def addExtension (p : Path) (ext : String) (_ : ValidExtension ext := by decide) : Path :=
  match p.fileName with
  | none => p
  | some name => p.setFileName (name ++ "." ++ ext)

/--
All file extensions of the last component, in order, without leading `.`.

Examples:
- `Path.fromPosixString "archive.tar.gz" |>.suffixes = #["tar", "gz"]`
- `Path.fromPosixString "Makefile" |>.suffixes = #[]`
-/
def suffixes (p : Path) : Array String :=
  p.fileName.elim #[] fun name =>
    let name' := if name.startsWith "." && name.length > 1 then name.drop 1 else name
    let last := name'.split "." |>.toArray
    if last.size < 2 then #[]
    else last.drop 1 |>.map (·.toString)

/--
Replace the stem (all of the filename before the extensions) with `stem`, keeping every existing
extension intact.

Complement of `withExtension`: `p.withStem s |>.suffixes = p.suffixes`.
-/
def withStem (p : Path) (stem : String) (_ : ValidFileName stem := by decide) : Path :=
  match p.fileName with
  | none => p
  | some _ =>
    let exts := p.suffixes

    let newName :=
      if exts.isEmpty then stem
      else stem ++ "." ++ String.intercalate "." exts.toList

    p.setFileName newName

/--
Implementation detail: iterator state for `Path.parents`.
-/
structure ParentsIterator where

  /--
  The path currently being examined.
  -/
  current : Path

  /--
  Remaining budget; equals the component count of the initial path.
  -/
  fuel : Nat

namespace ParentsIterator

abbrev stateOf (it : IterM (α := ParentsIterator) m Path) : ParentsIterator :=
  match it with | ⟨s⟩ => s

instance instIterator [Pure m] : Iterator ParentsIterator m Path where
  IsPlausibleStep it
    | .yield it' out =>
        (stateOf it).fuel = (stateOf it').fuel + 1 ∧
        (stateOf it).current.parent = some out ∧
        (out == (stateOf it).current) = false ∧
        (stateOf it').current = out
    | .skip _ => False
    | .done => True
  step it :=
    pure (match it with
    | ⟨⟨_, 0⟩⟩ => .deflate ⟨.done, trivial⟩
    | ⟨⟨cur, fuel + 1⟩⟩ =>
      match cur.parent with
      | none => .deflate ⟨.done, trivial⟩
      | some par =>
        match h : (par == cur) with
        | true  => .deflate ⟨.done, trivial⟩
        | false => .deflate ⟨.yield ⟨⟨par, fuel⟩⟩ par, rfl, rfl, h, rfl⟩)

instance [Monad n] : IteratorLoop ParentsIterator Id n := .defaultImplementation

end ParentsIterator

/--
All ancestors of `p`, from the immediate parent up to (and including) the root, in order.

For `Path.fromPosixString "/a/b/c"` this yields an iterator over
`[Path.fromPosixString "/a/b", Path.fromPosixString "/a", Path.fromPosixString "/"]`.
-/
def parents (p : Path) : Iter (α := ParentsIterator) Path :=
  (IterM.mk (m := Id) (β := Path) ⟨p, p.components.size⟩).toIter

/--
True if `p` starts with `prefix` (component-wise, not as a raw string prefix).

`Path.fromPosixString "/usr/local"` starts with
`Path.fromPosixString "/usr"` but not with `Path.fromPosixString "/us"`.
-/
def startsWith (p prefx : Path) : Bool :=
  p.components.extract 0 prefx.components.size == prefx.components

/--
True if `p` ends with `suffix` (component-wise).

`suffix` must be a relative path or a single filename.
-/
def endsWith (p suffix : Path) : Bool :=
  let n := suffix.components.size
  let prefixSize := p.components.size - n
  let anchorCount := (if p.drive?.isSome then 1 else 0) + (if p.root?.isSome then 1 else 0)
  p.components.extract prefixSize p.components.size == suffix.components &&
  (suffix.isAbsolute || prefixSize > anchorCount)

/--
Remove `prefix` from the beginning of `p` (component-wise).

Returns `none` if `p` does not start with `prefix`.
-/
def dropPrefix? (p prefx : Path) : Option Path :=
  if p.startsWith prefx then
    some { components := p.components.extract prefx.components.size p.components.size }
  else
    none

/--
Compute a path from `base` to `target` such that `base.join (base.relativeTo? target) = target`.

Returns `none` if `base` and `target` have different roots (e.g. different drive letters on Windows,
or one absolute and one relative).
-/
def relativeTo? (base target : Path) : Option Path :=
  if base.drive? != target.drive? then
    none
  else if base.isAbsolute != target.isAbsolute then
    none
  else
    let bc := base.components
    let tc := target.components

    -- Count matching components from the front.
    let n :=
      (Array.range (min bc.size tc.size))
      |>.foldl (fun acc i => if acc == i && bc[i]! == tc[i]! then i + 1 else acc) 0

    let upComps : Array Component := (List.replicate (bc.size - n) .parent).toArray
    some { components := upComps ++ tc.extract n tc.size }

/--
Render `p` to a POSIX-style string using `/` as the separator. Pure.

`drivePrefix` components (Windows-only) are silently dropped; all other components are joined with
`/`. A path consisting of just a root renders as `"/"`.
-/
def toPosixString (p : Path) : String :=
  let (result, _) := p.components.foldl (fun (acc, sep) c =>
    match c with
    | .drivePrefix _ => (acc, sep)
    | .root _ => ("/", "")
    | .current => (acc ++ sep ++ ".", "/")
    | .parent => (acc ++ sep ++ "..", "/")
    | .normal v => (acc ++ sep ++ v, "/"))
    ("", "")
  result

/--
Render `p` to a Windows-style string using `\\` as the separator. Pure.

Drive prefixes are written without a trailing separator (the `root` component provides it). All
components are joined with `\\`.
-/
def toWindowsString (p : Path) : String :=
  let (result, _) := p.components.foldl fun (acc, sep) c =>
    match c with
    | .drivePrefix v => (acc ++ v, "")
    | .root _ => (acc ++ "\\", "")
    | .current => (acc ++ sep ++ ".", "\\")
    | .parent => (acc ++ sep ++ "..", "\\")
    | .normal v => (acc ++ sep ++ v, "\\")
    ("", "")
  result

/--
Append `other` to `p`. Infix alias for `join`.
-/
instance : HDiv Path Path Path where
  hDiv := join

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
  let glob := Internal.parseGlob pattern

  let comps : Array String := p.components.filterMap fun
    | .drivePrefix _ => none
    | .root _ => some ""
    | .current => some "."
    | .parent => some ".."
    | .normal v => some v

  Internal.matchSegments glob comps 0 0

/--
Parse a POSIX-formatted string into a `Path`. Pure; uses `/` as the only separator.
-/
def ofPosixString (s : String) : Option Path :=
  if s.isEmpty then none
  else match Internal.posixPathParser.run s with
  | .ok cs => some { components := cs }
  | .error _ => none

/--
Parse a Windows-formatted string into a `Path`. Pure; accepts both `\` and `/`,
and an optional drive-letter prefix such as `"C:"`.
-/
def ofWindowsString (s : String) : Option Path :=
  match Internal.windowsPathParser.run s with
  | .ok cs => some { components := cs }
  | .error _ => none

/--
Append a child name to `p`, treating `name` as a single normal path component.

This is the safe building block for path construction from runtime strings (e.g., file names
returned by `IO.FS.readDir`).  The resulting path is the same as `p / Path.ofPosixString name`
when `name` is a valid single-segment string.

Note: this function is intentionally simple — it does not check whether `name` is a valid file
name. Invalid names (empty string, `..`, containing `/`) result in a malformed path.
-/
def withChild (p : Path) (name : String) : Path :=
  { components := p.components.push (.normal name) }

section IO

/--
The platform path separator character at runtime: `'/'` on POSIX, `'\\'` on Windows.
-/
def pathSeparator : IO Char :=
  return if System.Platform.isWindows then '\\' else '/'

/--
All path separator characters accepted by the current platform.

On POSIX: `['/']`. On Windows: `['\\', '/']`.
-/
def pathSeparators : IO (List Char) :=
  return if System.Platform.isWindows then ['\\', '/'] else ['/']

/--
Parse `s` using the platform-native separator, delegating to
`ofPosixString` on POSIX and `ofWindowsString` on Windows.
-/
def fromString (s : String) : IO Path :=
  let res := if System.Platform.isWindows then ofWindowsString s else ofPosixString s
  res.elim (throw <| .userError s!"invalid path {s.quote}") pure

/--
Render `p` to a string using the platform-native separator and format.
-/
def toString (p : Path) : IO String :=
  return if System.Platform.isWindows then p.toWindowsString else p.toPosixString

/--
Resolve `p` against the process's current working directory if it is relative.

If `p` is already absolute, it is returned unchanged. No symlinks are resolved;
use `resolve` for that.
-/
def toAbsoluteCwd (p : Path) : IO Path := do
  if p.isAbsolute then return p
  let cwdPath ← fromString (← IO.Process.getCwd).toString
  return cwdPath.join p |>.normalize

/--
Make `p` absolute and resolve all symlinks, returning the canonical path.

Fails with an `IO.Error` if any component of the path does not exist on the file system.
Unlike `toAbsoluteCwd`, this performs actual file system access and resolves symlinks.
-/
def resolve (p : Path) : IO Path :=
  fromString =<< Internal.UV.System.realPath =<< p.toString

end IO

/--
Iterator state for `Path.glob`. Each step reads one filesystem entry, loading new directory
entries into the state when the current batch is exhausted.
-/
structure GlobIterator where
  /-- Original string pattern for `matchGlob` checks. -/
  pattern       : String
  /-- True if the pattern contains a `**` segment. -/
  hasDoublestar : Bool
  /-- Maximum recursion depth (= number of segments when there is no `**`). -/
  maxDepth      : Nat
  /-- Stack of `(relDir, absDir, depth)` directories waiting to be explored. -/
  pending       : Array (Path × Path × Nat)
  /-- File names of entries in the directory currently being iterated. -/
  entries       : Array String
  /-- Index of the next entry to process in `entries`. -/
  idx           : Nat
  /-- Relative path (from the base) of the directory whose entries are in `entries`. -/
  relDir        : Path
  /-- Absolute path of the directory whose entries are in `entries`. -/
  absDir        : Path
  /-- Depth of the directory whose entries are in `entries`. -/
  depth         : Nat

-- The `Iterator` instance is defined here (inside `namespace Std.Path`) rather than inside a
-- `namespace GlobIterator` sub-namespace so that `step` can access Path's private constructor.
instance instGlobIterator : Iterator GlobIterator IO Path where
  IsPlausibleStep _ _ := True
  step it := do
    let s := it.internalState
    if h : s.idx < s.entries.size then
      let name := s.entries[s.idx]'h
      let entryRel := s.relDir.withChild name
      let entryAbs := s.absDir.withChild name
      let entryStr ← entryAbs.toString
      let isDir ← (⟨entryStr⟩ : System.FilePath).isDir
      let newPending :=
        if (s.hasDoublestar || s.depth + 1 < s.maxDepth) && isDir then
          s.pending.push (entryRel, entryAbs, s.depth + 1)
        else
          s.pending
      let newIt : IterM (α := GlobIterator) IO Path :=
        ⟨{ s with idx := s.idx + 1, pending := newPending }⟩
      if entryRel.matchGlob s.pattern then
        return .deflate ⟨.yield newIt entryAbs, trivial⟩
      else
        return .deflate ⟨.skip newIt, trivial⟩
    else
      match s.pending.back? with
      | none => return .deflate ⟨.done, trivial⟩
      | some (relDir', absDir', depth') =>
        let dirStr ← absDir'.toString
        let newEntries :=
          (← try (⟨dirStr⟩ : System.FilePath).readDir catch _ => pure #[])
          |>.map IO.FS.DirEntry.fileName
        let newIt : IterM (α := GlobIterator) IO Path :=
          ⟨{ s with
              entries := newEntries
              idx     := 0
              relDir  := relDir'
              absDir  := absDir'
              depth   := depth'
              pending := s.pending.pop }⟩
        return .deflate ⟨.skip newIt, trivial⟩

instance instGlobIteratorLoop [Monad n] : IteratorLoop GlobIterator IO n :=
  .defaultImplementation

/--
Walk `dir` lazily and yield every path (file or directory) whose path relative to `dir` matches
`pattern`. Returns an `IterM IO Path`; use `for p in dir.glob pat do …` or `.toArray` to consume.

Supported wildcards:
- `*` — any characters within a single path segment (does not cross `/`)
- `**` — zero or more segments, enabling recursive descent
- `?` — any single character within a segment
- `[abc]` / `[a-z]` — character class

Directories that cannot be read (e.g., insufficient permissions) are silently skipped.

Examples:
```lean
-- Iterate lazily over all Lean files directly in `dir`
for src in dir.glob "*.lean" do
  IO.println (← src.toString)

-- Collect all Lean files anywhere under `dir` into an array
let srcs ← (dir.glob "**/*.lean").toArray
```
-/
def glob (dir : Path) (pattern : String) : IterM (α := GlobIterator) IO Path :=
  let g := Internal.parseGlob pattern
  ⟨{ pattern       := pattern
     hasDoublestar := g.any (· matches .doublestar)
     maxDepth      := g.size
     pending       := #[(Path.empty, dir, 0)]
     entries       := #[]
     idx           := 0
     relDir        := Path.empty
     absDir        := dir
     depth         := 0 }⟩

end Std.Path
