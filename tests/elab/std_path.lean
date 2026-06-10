import Std.Path

/-!
Tests for `Std.Path` — covers parsing, rendering, structural operations, file-name helpers,
normalization, glob matching, and the `parents` iterator.
-/

open Std

-- Helpers to cut noise
private def posix (s : String) : Path := (Path.ofPosixString s).get!
private def win   (s : String) : Path := (Path.ofWindowsString s).get!


-- ---------------------------------------------------------------------------
-- Section: ofPosixString / toPosixString round-trips
-- ---------------------------------------------------------------------------

section PosixRoundtrip

-- absolute
#guard (posix "/usr/local/bin").toPosixString = "/usr/local/bin"
-- relative
#guard (posix "a/b/c").toPosixString = "a/b/c"
-- root only
#guard (posix "/").toPosixString = "/"
-- single segment
#guard (posix "foo").toPosixString = "foo"
-- current dir
#guard (posix "./foo").toPosixString = "./foo"
-- parent dir
#guard (posix "../bar").toPosixString = "../bar"
-- multiple leading slashes collapsed to one root
#guard (posix "///a/b").toPosixString = "/a/b"
-- trailing slash not preserved (no trailing empty segment)
#guard (posix "a/b/").toPosixString = "a/b"
-- dot segment preserved
#guard (posix "a/./b").toPosixString = "a/./b"
-- double-dot preserved
#guard (posix "a/../b").toPosixString = "a/../b"
-- empty string → none
#guard Path.ofPosixString "" = none

end PosixRoundtrip


-- ---------------------------------------------------------------------------
-- Section: ofWindowsString / toWindowsString round-trips
-- ---------------------------------------------------------------------------

section WindowsRoundtrip

-- absolute drive path
#guard (win "C:\\Users\\foo").toWindowsString = "C:\\Users\\foo"
-- drive + forward slashes
#guard (win "C:/Users/foo").toWindowsString = "C:\\Users\\foo"
-- root-only drive
#guard (win "C:\\").toWindowsString = "C:\\"
-- relative, no drive
#guard (win "a\\b\\c").toWindowsString = "a\\b\\c"
-- mixed separators normalised to backslash
#guard (win "C:\\a/b\\c").toWindowsString = "C:\\a\\b\\c"
-- dot and parent preserved
#guard (win "C:\\a\\.\\..\\b").toWindowsString = "C:\\a\\.\\..\\b"
-- POSIX path through Windows parser: only '/' is also a separator
#guard (win "/foo/bar").toWindowsString = "\\foo\\bar"
-- toPosixString on a Windows path silently drops the drive prefix
#guard (win "C:\\foo").toPosixString = "/foo"

end WindowsRoundtrip


-- ---------------------------------------------------------------------------
-- Section: isAbsolute / isRelative
-- ---------------------------------------------------------------------------

section Absolute

#guard (posix "/usr").isAbsolute = true
#guard (posix "usr").isAbsolute = false
#guard (posix "./a").isAbsolute = false
#guard (posix "../a").isAbsolute = false
#guard (posix "/").isAbsolute = true
#guard (win "C:\\foo").isAbsolute = true
#guard (win "C:foo").isAbsolute = false   -- drive-relative (no root)
#guard (win "\\foo").isAbsolute = true    -- root without drive
#guard (posix "/usr").isRelative = false
#guard (posix "usr").isRelative = true

end Absolute


-- ---------------------------------------------------------------------------
-- Section: drive? / root? / anchor
-- ---------------------------------------------------------------------------

section Anchor

#guard (posix "/usr/bin").drive? = none
#guard (posix "/usr/bin").root? = some "/"
#guard (posix "/usr/bin").anchor = "/"
#guard (posix "a/b").drive? = none
#guard (posix "a/b").root? = none
#guard (posix "a/b").anchor = ""
#guard (win "C:\\foo").drive? = some "C:"
#guard (win "C:\\foo").root? = some "\\"
#guard (win "C:\\foo").anchor = "C:\\"
#guard (win "C:foo").drive? = some "C:"
#guard (win "C:foo").root? = none
#guard (win "C:foo").anchor = "C:"
#guard (win "\\foo").drive? = none
#guard (win "\\foo").root? = some "\\"
#guard (win "\\foo").anchor = "\\"

end Anchor


-- ---------------------------------------------------------------------------
-- Section: join / /
-- ---------------------------------------------------------------------------

section Join

-- relative appended to relative
#guard ((posix "a/b").join (posix "c/d")).toPosixString = "a/b/c/d"
-- absolute right side replaces left
#guard ((posix "a/b").join (posix "/c")).toPosixString = "/c"
-- join with current-dir segment
#guard ((posix "a").join (posix "./b")).toPosixString = "a/./b"
-- operator alias
#guard ((posix "a/b") / (posix "c")).toPosixString = "a/b/c"
-- joining root onto something
#guard ((posix "/usr") / (posix "local")).toPosixString = "/usr/local"
-- empty second path (empty components → same as first)
#guard ((posix "a/b").join (default : Path)).toPosixString = "a/b"
-- Windows: absolute right replaces left
#guard ((win "C:\\foo").join (win "D:\\bar")).toWindowsString = "D:\\bar"

end Join


-- ---------------------------------------------------------------------------
-- Section: normalize
-- ---------------------------------------------------------------------------

section Normalize

-- dot eliminated
#guard (posix "a/./b").normalize.toPosixString = "a/b"
-- double-dot resolved
#guard (posix "a/b/../c").normalize.toPosixString = "a/c"
-- double-dot at root clipped
#guard (posix "/a/../..").normalize.toPosixString = "/"
-- multiple dots
#guard (posix "a/b/c/../../d").normalize.toPosixString = "a/d"
-- pure dots stay as "."
#guard (posix ".").normalize.toPosixString = "."
-- relative path normalizing to nothing → "."
#guard (posix "a/..").normalize.toPosixString = "."
-- no-op on clean path
#guard (posix "/usr/local/bin").normalize.toPosixString = "/usr/local/bin"
-- leading ".." in relative path kept
#guard (posix "../../a").normalize.toPosixString = "../../a"
-- trailing dot
#guard (posix "a/b/.").normalize.toPosixString = "a/b"
-- Windows: normalize resolves .. across drive-rooted path
#guard (win "C:\\a\\..\\b").normalize.toWindowsString = "C:\\b"
-- empty default path normalizes to "."
#guard (default : Path).normalize.toPosixString = "."

end Normalize


-- ---------------------------------------------------------------------------
-- Section: parent
-- ---------------------------------------------------------------------------

section Parent

-- typical case
#guard (posix "/a/b/c").parent.map (·.toPosixString) = some "/a/b"
-- one level from root
#guard (posix "/a").parent.map (·.toPosixString) = some "/"
-- root has no parent
#guard (posix "/").parent = none
-- relative single segment → "."
#guard (posix "a").parent.map (·.toPosixString) = some "."
-- relative two segments
#guard (posix "a/b").parent.map (·.toPosixString) = some "a"
-- "." is its own parent
#guard (posix ".").parent.map (·.toPosixString) = some "."
-- ".." parent
#guard (posix "..").parent.map (·.toPosixString) = some "."
-- empty path has no parent
#guard (default : Path).parent = none
-- Windows drive-relative: parent of "C:foo" is the bare drive "C:"
#guard (win "C:foo").parent.map (·.toWindowsString) = some "C:"

end Parent


-- ---------------------------------------------------------------------------
-- Section: parents iterator
-- ---------------------------------------------------------------------------

section ParentsIter

private def collectParents (p : Path) : List String :=
  p.parents.toList.map (·.toPosixString)

#guard collectParents (posix "/a/b/c") = ["/a/b", "/a", "/"]
#guard collectParents (posix "a/b/c")  = ["a/b", "a", "."]
#guard collectParents (posix "/")      = []
#guard collectParents (posix "a")      = ["."]
-- path with leading ".." components: each ".." is its own parent step
#guard collectParents (posix "../../a") = ["../..", "..", "."]

end ParentsIter


-- ---------------------------------------------------------------------------
-- Section: fileName / fileStem / extension / hasExtension
-- ---------------------------------------------------------------------------

section FileInfo

-- fileName
#guard (posix "/usr/local/bin/lean").fileName = some "lean"
#guard (posix "archive.tar.gz").fileName = some "archive.tar.gz"
#guard (posix "/").fileName = none
#guard (posix "a/..").fileName = none
#guard (posix "a/.").fileName = none
#guard (default : Path).fileName = none

-- fileStem
#guard (posix "Main.lean").fileStem = some "Main"
#guard (posix "archive.tar.gz").fileStem = some "archive.tar"
#guard (posix "Makefile").fileStem = some "Makefile"
#guard (posix ".gitignore").fileStem = some ".gitignore"
#guard (posix ".hidden.lean").fileStem = some ".hidden"
#guard (posix "/").fileStem = none

-- extension
#guard (posix "Main.lean").extension = some "lean"
#guard (posix "archive.tar.gz").extension = some "gz"
#guard (posix "Makefile").extension = none
#guard (posix ".gitignore").extension = none
#guard (posix ".hidden.lean").extension = some "lean"
#guard (posix "/").extension = none

-- hasExtension
#guard (posix "foo.txt").hasExtension = true
#guard (posix "Makefile").hasExtension = false
#guard (posix ".gitignore").hasExtension = false
#guard (posix "/").hasExtension = false

end FileInfo


-- ---------------------------------------------------------------------------
-- Section: suffixes / withStem
-- ---------------------------------------------------------------------------

section Suffixes

#guard (posix "archive.tar.gz").suffixes = #["tar", "gz"]
#guard (posix "foo.txt").suffixes = #["txt"]
#guard (posix "Makefile").suffixes = #[]
#guard (posix ".gitignore").suffixes = #[]
#guard (posix ".hidden.tar.gz").suffixes = #["tar", "gz"]
#guard (posix "/").suffixes = #[]

-- withStem
#guard ((posix "a/archive.tar.gz").withStem "backup").toPosixString = "a/backup.tar.gz"
#guard ((posix "a/foo.txt").withStem "bar").toPosixString = "a/bar.txt"
#guard ((posix "a/Makefile").withStem "GNUmakefile").toPosixString = "a/GNUmakefile"
-- invariant: suffixes unchanged
#guard ((posix "archive.tar.gz").withStem "backup").suffixes =
       (posix "archive.tar.gz").suffixes
-- dotfile: stem is the whole name (including dot), so withStem replaces entirely
#guard ((posix ".gitignore").withStem "profile").toPosixString = "profile"
-- dotfile: withExtension appends since fileStem is the whole name and there's no extension
#guard ((posix ".gitignore").withExtension "bak").toPosixString = ".gitignore.bak"

end Suffixes


-- ---------------------------------------------------------------------------
-- Section: setFileName / withFileName / withExtension / addExtension
-- ---------------------------------------------------------------------------

section Modification

-- setFileName
#guard ((posix "a/b/c").setFileName "d").toPosixString = "a/b/d"
#guard ((posix "/").setFileName "d").toPosixString = "/"  -- no-op on root
#guard ((posix "a/..").setFileName "d").toPosixString = "a/.."  -- no-op on parent component
-- single-segment relative path: result has no parent prefix
#guard ((posix "foo").setFileName "bar").toPosixString = "bar"

-- withFileName
#guard ((posix "a/b/c").withFileName "d").toPosixString = "a/b/d"

-- withExtension
#guard ((posix "a/b.tar.gz").withExtension "xz").toPosixString = "a/b.tar.xz"
#guard ((posix "a/b.txt").withExtension "lean").toPosixString = "a/b.lean"
#guard ((posix "a/Makefile").withExtension "bak").toPosixString = "a/Makefile.bak"
#guard ((posix "/").withExtension "bak").toPosixString = "/"  -- no-op

-- addExtension
#guard ((posix "a/b.tar.gz").addExtension "bak").toPosixString = "a/b.tar.gz.bak"
#guard ((posix "a/Makefile").addExtension "bak").toPosixString = "a/Makefile.bak"
#guard ((posix "/").addExtension "bak").toPosixString = "/"  -- no-op

end Modification


-- ---------------------------------------------------------------------------
-- Section: startsWith / endsWith
-- ---------------------------------------------------------------------------

section StartEnd

#guard (posix "/usr/local/bin").startsWith (posix "/usr/local") = true
#guard (posix "/usr/local/bin").startsWith (posix "/usr") = true
#guard (posix "/usr/local/bin").startsWith (posix "/usr/local/bin") = true
-- not a component-wise prefix
#guard (posix "/usr/local/bin").startsWith (posix "/us") = false
-- relative prefixes
#guard (posix "a/b/c").startsWith (posix "a/b") = true
#guard (posix "a/b/c").startsWith (posix "a") = true
#guard (posix "a/b/c").startsWith (posix "b") = false

#guard (posix "/usr/local/bin").endsWith (posix "local/bin") = true
#guard (posix "/usr/local/bin").endsWith (posix "bin") = true
#guard (posix "/usr/local/bin").endsWith (posix "/usr/local/bin") = true
#guard (posix "/usr/local/bin").endsWith (posix "usr/local/bin") = false  -- root missing
#guard (posix "a/b/c").endsWith (posix "b/c") = true
#guard (posix "a/b/c").endsWith (posix "a") = false
-- anchor blocks matching a relative suffix against a single-segment absolute path
#guard (posix "/a").endsWith (posix "a") = false

end StartEnd


-- ---------------------------------------------------------------------------
-- Section: dropPrefix?
-- ---------------------------------------------------------------------------

section DropPrefix

#guard ((posix "/usr/local/bin").dropPrefix? (posix "/usr")).map (·.toPosixString) = some "local/bin"
#guard ((posix "/usr/local/bin").dropPrefix? (posix "/usr/local/bin")).map (·.toPosixString) = some ""
#guard (posix "/usr/local/bin").dropPrefix? (posix "/etc") = none
#guard ((posix "a/b/c").dropPrefix? (posix "a/b")).map (·.toPosixString) = some "c"
-- not a prefix
#guard (posix "a/b/c").dropPrefix? (posix "b") = none
-- prefix longer than path → none
#guard (posix "a/b").dropPrefix? (posix "a/b/c") = none

end DropPrefix


-- ---------------------------------------------------------------------------
-- Section: relativeTo?
-- ---------------------------------------------------------------------------

section RelativeTo

-- same directory → empty relative path (renders as ""; join with base gives base)
#guard ((posix "/a/b").relativeTo? (posix "/a/b")).map (·.toPosixString) = some ""
-- sibling file
#guard ((posix "/a/b").relativeTo? (posix "/a/c")).map (·.toPosixString) = some "../c"
-- deeper target
#guard ((posix "/a").relativeTo? (posix "/a/b/c")).map (·.toPosixString) = some "b/c"
-- going up
#guard ((posix "/a/b/c").relativeTo? (posix "/a")).map (·.toPosixString) = some "../.."
-- completely different trees
#guard ((posix "/a/b").relativeTo? (posix "/c/d")).map (·.toPosixString) = some "../../c/d"
-- absolute vs relative → none
#guard (posix "/a/b").relativeTo? (posix "a/b") = none
-- both relative
#guard ((posix "a/b").relativeTo? (posix "a/c")).map (·.toPosixString) = some "../c"
-- Windows: different drive → none
#guard (win "C:\\foo").relativeTo? (win "D:\\foo") = none

end RelativeTo


-- ---------------------------------------------------------------------------
-- Section: matchGlob
-- ---------------------------------------------------------------------------

section Glob

-- exact match
#guard (posix "src/Main.lean").matchGlob "src/Main.lean" = true
-- * wildcard within a segment
#guard (posix "src/Main.lean").matchGlob "src/*.lean" = true
#guard (posix "src/Main.lean").matchGlob "src/*.txt" = false
-- * does not cross segment boundaries
#guard (posix "src/sub/Main.lean").matchGlob "src/*.lean" = false
-- ** matches zero segments
#guard (posix "src/Main.lean").matchGlob "**/Main.lean" = true
-- ** matches multiple segments
#guard (posix "a/b/c/Main.lean").matchGlob "**/Main.lean" = true
-- ** matches across root-level
#guard (posix "/a/b/foo.lean").matchGlob "**/*.lean" = true
-- ? wildcard
#guard (posix "src/ab.lean").matchGlob "src/??.lean" = true
#guard (posix "src/abc.lean").matchGlob "src/??.lean" = false
-- character class
#guard (posix "src/a.lean").matchGlob "src/[abc].lean" = true
#guard (posix "src/d.lean").matchGlob "src/[abc].lean" = false
-- character range
#guard (posix "src/b.lean").matchGlob "src/[a-z].lean" = true
#guard (posix "src/B.lean").matchGlob "src/[a-z].lean" = false
-- negated class
#guard (posix "src/d.lean").matchGlob "src/[!abc].lean" = true
#guard (posix "src/a.lean").matchGlob "src/[!abc].lean" = false
-- no match on wrong depth without **
#guard (posix "a/b/c").matchGlob "a/b" = false
-- ** matching zero segments
#guard (posix "foo.lean").matchGlob "**/*.lean" = true
-- ** in the middle: matches multiple segments between fixed anchors
#guard (posix "a/b/c/d").matchGlob "a/**/d" = true
-- ** in the middle: matches zero segments between fixed anchors
#guard (posix "a/d").matchGlob "a/**/d" = true
-- ** on absolute path with single non-root segment (must skip the "" root component)
#guard (posix "/foo.lean").matchGlob "**/foo.lean" = true

end Glob


-- ---------------------------------------------------------------------------
-- Section: empty / isEmpty
-- ---------------------------------------------------------------------------

section EmptyPath

-- empty has no components
#guard Path.empty.components = #[]
-- isEmpty on empty
#guard Path.empty.isEmpty = true
-- Inhabited default is also empty
#guard (default : Path).isEmpty = true
-- non-empty paths
#guard (posix "a").isEmpty = false
#guard (posix "/").isEmpty = false
#guard (posix ".").isEmpty = false
-- joining empty with a path gives that path
#guard (Path.empty.join (posix "a/b")).toPosixString = "a/b"
-- joining a path with empty gives that path
#guard ((posix "a/b").join Path.empty).toPosixString = "a/b"

end EmptyPath


-- ---------------------------------------------------------------------------
-- Section: isRoot
-- ---------------------------------------------------------------------------

section IsRoot

-- POSIX root
#guard (posix "/").isRoot = true
-- Windows drive root
#guard (win "C:\\").isRoot = true
-- Windows root without drive
#guard (win "\\").isRoot = true
-- absolute but not root (has normal components)
#guard (posix "/usr").isRoot = false
#guard (win "C:\\foo").isRoot = false
-- relative paths are never root
#guard (posix "a").isRoot = false
#guard (posix ".").isRoot = false
-- empty path is not root
#guard Path.empty.isRoot = false

end IsRoot

-- ---------------------------------------------------------------------------
-- Section: depth
-- ---------------------------------------------------------------------------

section Depth

-- typical absolute paths
#guard (posix "/usr/local/bin").depth = 3
#guard (posix "/usr").depth = 1
-- root only: no normal components
#guard (posix "/").depth = 0
-- relative paths
#guard (posix "a/b/c").depth = 3
#guard (posix "a").depth = 1
-- special components do not count
#guard (posix "..").depth = 0
#guard (posix ".").depth = 0
-- mixed: "a" and "b" are normal, ".." is not
#guard (posix "a/../b").depth = 2
-- empty path
#guard Path.empty.depth = 0
-- Windows
#guard (win "C:\\Users\\foo\\bar").depth = 3

end Depth


-- ---------------------------------------------------------------------------
-- Section: filePrefix
-- ---------------------------------------------------------------------------

section FilePrefix

-- removes everything from first dot
#guard (posix "foo.tar.gz").filePrefix = some "foo"
-- single extension
#guard (posix "foo.txt").filePrefix = some "foo"
-- no extension: whole name is the prefix
#guard (posix "Makefile").filePrefix = some "Makefile"
-- leading-dot file with no extension: whole name preserved
#guard (posix ".gitignore").filePrefix = some ".gitignore"
-- leading-dot file with extension: leading dot kept, rest up to first dot
#guard (posix ".hidden.tar.gz").filePrefix = some ".hidden"
#guard (posix ".hidden.lean").filePrefix = some ".hidden"
-- no file name → none
#guard (posix "/").filePrefix = none
#guard (posix "a/..").filePrefix = none
#guard Path.empty.filePrefix = none
-- consistency with fileStem: filePrefix drops all extensions, fileStem only last
#guard (posix "a.b.c").filePrefix = some "a"
#guard (posix "a.b.c").fileStem    = some "a.b"

end FilePrefix
