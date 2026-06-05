/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Path.Component
public import Std.Path.Basic
public import Std.Path.Posix
public import Std.Path.Windows
public import Std.Path.Pure
public import Std.Path.IO

public section

/-!
# Path

A platform-neutral file system path library for Lean, inspired by Python's `pathlib`
and Rust's `std::path`.

## Design

`Std.Path` replaces `System.FilePath` with a richer representation. Instead of a plain
`String` wrapper, paths are stored as `Array Path.Component` — a sequence of parsed
segments such as `root`, `normal`, `current`, and `parent`. This means:

- All structural operations (`join`, `parent`, `normalize`, `startsWith`, …) are
  **pure**: they work on the component array without OS calls or string scanning.
- Platform-specific behaviour is confined to `IO` actions: `Path.fromString` and
  `Path.toString` use the runtime separator; `Path.resolve` calls into the OS.
- **Posix** and **Windows** string wrappers (`Path.Posix`, `Path.Windows`) are
  available for code that must handle a fixed format regardless of the host OS.

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

## Types

- `Path.Component` — a single parsed path segment (`root`, `normal`, `current`, `parent`, `drivePrefix`)
- `Path` — the canonical `Array Component` representation
- `Path.Posix` — POSIX string wrapper; coerces to `Path`
- `Path.Windows` — Windows string wrapper; coerces to `Path`
-/
