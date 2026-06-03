/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich, Mac Malone, Siddharth Bhat
-/
module

prelude
public import Lake.Util.Log
import Lake.Util.Proc
import Lake.Util.FilePath
import Lake.Util.IO
import Init.Data.String.Search
import Init.Data.String.TakeDrop
import Init.System.Platform
import Lean.CoreM
import Lean.Compiler.Options

/-! # Common Build Actions
Low level actions to build common Lean artifacts via the Lean toolchain.
-/

open System
open Lean hiding SearchPath

namespace Lake

/--
Per-module sandbox directories: a private `scratch` directory that a sandboxed
`lean`/`leanir` subprocess is permitted to write to, and a `tmp` subdirectory
for the subprocess's temporary files.
-/
structure SandboxDirs where
  scratch : FilePath
  tmp : FilePath

@[inline] def SandboxDirs.ofScratch (scratch : FilePath) : SandboxDirs where
  scratch := scratch
  tmp := scratch / "tmp"

/-- Empty the scratch and tmp directories, ready for a fresh sandboxed run. -/
def SandboxDirs.reset (d : SandboxDirs) : IO Unit := do
  removeDirAllIfExists d.scratch
  IO.FS.createDirAll d.scratch
  IO.FS.createDirAll d.tmp

/-- Where a sandboxed subprocess should write the artifact whose real path is `real`. -/
@[inline] def SandboxDirs.outPath (d : SandboxDirs) (real : FilePath) : FilePath :=
  d.scratch / real.fileName.getD real.toString

/--
Spawn arguments for running `cmd args` with `LEAN_PATH` set to `leanPath`.
When `sandbox?` is set, the command is wrapped as
`lean --sandbox-exec --rw <scratch> --rw <tmp> -- cmd args`, which applies a
Landlock policy permitting filesystem writes only beneath the scratch and tmp
directories, and `TMPDIR`/`TMP`/`TEMP`/`XDG_CACHE_HOME` are pointed at `tmp`.
-/
def mkLeanSpawn (lean cmd : FilePath) (args : Array String)
    (leanPath : SearchPath) (sandbox? : Option SandboxDirs) : IO.Process.SpawnArgs :=
  let leanPathEnv : String × Option String := ("LEAN_PATH", leanPath.toString)
  match sandbox? with
  | none => { cmd := cmd.toString, args, env := #[leanPathEnv] }
  | some d =>
    { cmd := lean.toString
      args :=
        #["--sandbox-exec", "--rw", d.scratch.toString, "--rw", d.tmp.toString,
          "--", cmd.toString] ++ args
      env := #[leanPathEnv,
        ("TMPDIR", some d.tmp.toString), ("TMP", some d.tmp.toString),
        ("TEMP", some d.tmp.toString), ("XDG_CACHE_HOME", some d.tmp.toString)] }

/--
Move a sandboxed output from the scratch directory to its real path `real`.
The scratch contents are produced by an untrusted build, so anything that is not
a plain regular file (a symlink, FIFO, device node, ...) is rejected rather than
installed into the trusted build tree. Does nothing if the file was not produced.
-/
def relocateSandboxOutput (d : SandboxDirs) (real : FilePath) : LogIO Unit := do
  let sp := d.outPath real
  unless (← sp.pathExists) do return
  let md ← sp.symlinkMetadata
  unless md.type == .file do
    error s!"sandbox produced a non-regular file for '{real}'; refusing to install it"
  createParentDirs real
  IO.FS.rename sp real

public def compileLeanModule
  (leanFile relLeanFile : FilePath)
  (setup : ModuleSetup) (setupFile : FilePath)
  (arts : ModuleArtifacts)
  (leanArgs : Array String := #[])
  (leanPath : SearchPath := [])
  (lean : FilePath := "lean")
  (leanir : FilePath := "leanir")
  (sandboxDir? : Option FilePath := none)
: LogIO Unit := do
  let sandbox? := sandboxDir?.map SandboxDirs.ofScratch
  if let some d := sandbox? then d.reset
  -- Effective output path for an artifact: redirected into the scratch dir when
  -- sandboxing, so the untrusted subprocess never writes the real build tree.
  let outArt (real : FilePath) : FilePath :=
    match sandbox? with | some d => d.outPath real | none => real
  let mut args := leanArgs.push leanFile.toString
  if let some oleanFile := arts.olean? then
    let o := outArt oleanFile
    createParentDirs o
    args := args ++ #["-o", o.toString]
  if let some ileanFile := arts.ilean? then
    let i := outArt ileanFile
    createParentDirs i
    args := args ++ #["-i", i.toString]
  let opts := setup.options.toOptions
  let postponeCompile := setup.isModule && Compiler.compiler.postponeCompile.get opts
  if !postponeCompile then
    if let some cFile := arts.c? then
      let c := outArt cFile
      createParentDirs c
      args := args ++ #["-c", c.toString]
  if let some bcFile := arts.bc? then
    let b := outArt bcFile
    createParentDirs b
    args := args ++ #["-b", b.toString]
  createParentDirs setupFile
  IO.FS.writeFile setupFile (toJson setup).pretty
  args := args ++ #["--setup", setupFile.toString]
  args := args.push "--json"
  withLogErrorPos do
  let out ← rawProc (mkLeanSpawn lean lean args leanPath sandbox?)
  unless out.stdout.isEmpty do
    let txt ← out.stdout.split '\n' |>.foldM (init := "") fun (txt : String) ln => do
      let ln := ln.copy
      if let .ok (msg : SerialMessage) := Json.parse ln >>= fromJson? then
        unless txt.isEmpty do
          logInfo s!"stdout:\n{txt}"
        let msg := {msg with fileName := mkRelPathString relLeanFile}
        logSerialMessage msg
        return txt
      else if txt.isEmpty && ln.isEmpty then
        return txt
      else
        return txt ++ ln ++ "\n"
    unless txt.isEmpty do
      logInfo s!"stdout:\n{txt}"
  unless out.stderr.isEmpty do
    logInfo s!"stderr:\n{out.stderr.trimAscii}"
  if out.exitCode ≠ 0 then
    error s!"Lean exited with code {out.exitCode}"
  -- Relocate the artifacts the sandboxed `lean` produced into the real build tree.
  -- (In postpone-compile mode `.c`/`.ir` are produced later by `leanir` and are
  -- simply absent from the scratch dir here, so they are skipped.)
  if let some d := sandbox? then
    for real in #[arts.olean?, arts.oleanServer?, arts.oleanPrivate?,
        arts.ilean?, arts.ir?, arts.c?, arts.bc?].filterMap id do
      relocateSandboxOutput d real
  if postponeCompile then
    if let (some irFile, some cFile) := (arts.ir?, arts.c?) then
      createParentDirs irFile
      createParentDirs cFile
      try
        match sandbox? with
        | some d =>
          d.reset
          proc <| mkLeanSpawn lean leanir
            #[setupFile.toString, (d.outPath irFile).toString, (d.outPath cFile).toString]
            leanPath sandbox?
          relocateSandboxOutput d irFile
          relocateSandboxOutput d cFile
        | none =>
          proc {
            cmd := leanir.toString
            args := #[setupFile.toString, irFile.toString, cFile.toString]
            env := #[
              ("LEAN_PATH", leanPath.toString)
            ]
          }
      catch e =>
        if let some oleanFile := arts.olean? then
          removeFileIfExists oleanFile
        throw e

public def compileO
  (oFile srcFile : FilePath)
  (moreArgs : Array String := #[]) (compiler : FilePath := "cc")
: LogIO Unit := do
  createParentDirs oFile
  proc {
    cmd := compiler.toString
    args := #["-c", "-o", oFile.toString, srcFile.toString] ++ moreArgs
  }

public def mkArgs (basePath : FilePath) (args : Array String) : LogIO (Array String) := do
  -- Use response file to avoid potentially exceeding CLI length limits.
  -- On Windows this is always needed; on macOS/Linux this is needed for large
  -- projects like Mathlib where the number of object files exceeds ARG_MAX.
  let rspFile := basePath.addExtension "rsp"
  let h ← IO.FS.Handle.mk rspFile .write
  args.forM fun arg =>
    -- Escape special characters
    let arg := arg.foldl (init := "") fun s c =>
      if c == '\\' || c == '"' then
        s.push '\\' |>.push c
      else
        s.push c
    h.putStr s!"\"{arg}\"\n"
  return #[s!"@{rspFile}"]

public def compileStaticLib
  (libFile : FilePath) (oFiles : Array FilePath)
  (ar : FilePath := "ar") (thin := false)
: LogIO Unit := do
  createParentDirs libFile
  -- `ar rcs` does not remove old files from the archive, so it must be deleted first
  removeFileIfExists libFile
  let args := #["rcs"]
  let args := if thin then args.push "--thin" else args
  let args := args.push libFile.toString ++ (← mkArgs libFile <| oFiles.map toString)
  proc {cmd := ar.toString, args}

def getMacOSXDeploymentEnv : BaseIO (Array (String × Option String)) := do
  -- It is difficult to identify the correct minor version here, leading to linking warnings like:
  -- `ld64.lld: warning: /usr/lib/system/libsystem_kernel.dylib has version 13.5.0, which is newer than target minimum of 13.0.0`
  -- In order to suppress these we set the MACOSX_DEPLOYMENT_TARGET variable into the far future.
  if System.Platform.isOSX then
    match (← IO.getEnv "MACOSX_DEPLOYMENT_TARGET") with
    | some _ => return #[]
    | none => return #[("MACOSX_DEPLOYMENT_TARGET", some "99.0")]
  else
    return #[]

public def compileSharedLib
  (libFile : FilePath) (linkArgs : Array String) (linker : FilePath := "cc")
: LogIO Unit := do
  createParentDirs libFile
  proc {
    cmd := linker.toString
    args := #["-shared", "-o", libFile.toString] ++ (← mkArgs libFile linkArgs)
    env := ← getMacOSXDeploymentEnv
  }

public def compileExe
  (binFile : FilePath) (linkArgs : Array String) (linker : FilePath := "cc")
: LogIO Unit := do
  createParentDirs binFile
  proc {
    cmd := linker.toString
    args := #["-o", binFile.toString] ++ (← mkArgs binFile linkArgs)
    env := ← getMacOSXDeploymentEnv
  }

/-- Download a file using `curl`, clobbering any existing file. -/
public def download
  (url : String) (file : FilePath) (headers : Array String := #[])
: LogIO PUnit := do
  if (← file.pathExists) then
    IO.FS.removeFile file
  else
    createParentDirs file
  let args := #["-s", "-S", "-f", "-o", file.toString, "-L", url]
  let args := headers.foldl (init := args) (· ++ #["-H", ·])
  proc (quiet := true) {cmd := "curl", args}

/-- Unpack an archive `file` using `tar` into the directory `dir`. -/
public def untar (file : FilePath) (dir : FilePath) (gzip := true) : LogIO PUnit := do
  IO.FS.createDirAll dir
  let mut opts := "-xvv"
  if gzip then
    opts := opts.push 'z'
  proc (quiet := true) {
    cmd := "tar",
    args := #[opts, "-f", file.toString, "-C", dir.toString]
  }

/-- Pack a directory `dir` using `tar` into the archive `file`. -/
public def tar
  (dir : FilePath) (file : FilePath)
  (gzip := true) (excludePaths : Array FilePath := #[])
: LogIO PUnit := do
  createParentDirs file
  let mut args := #["-cvv"]
  if gzip then
    args := args.push "-z"
  for path in excludePaths do
    args := args.push s!"--exclude={path}"
  proc (quiet := true) {
    cmd := "tar"
    args := args ++ #["-f", file.toString, "-C", dir.toString, "."]
    -- don't pack `._` files on MacOS
    env := if Platform.isOSX then #[("COPYFILE_DISABLE", "true")] else #[]
  }
