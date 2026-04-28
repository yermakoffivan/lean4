/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module
prelude
import Lean.Meta.Tactic.Grind.Main
import Std.Sync.Channel
public import Init.Grind.Bench
public import Lean.Meta.Basic

namespace Lean.Meta.Grind

open Lean.Grind

structure BenchTarget where
  theoremName : Name
  moduleName : Name
  type : Expr
  deriving BEq, Hashable, Repr

def collectTargets (rootMod : Name) (scope : Grind.BenchScope) : MetaM (Array BenchTarget) := do
  let mut seen : Std.HashSet Name := {}
  let mut targets := #[]
  let mut worklist := #[rootMod]
  while h : 0 < worklist.size do
    let targetMod := worklist.back
    worklist := worklist.pop
    if seen.contains targetMod then
      continue
    seen := seen.insert targetMod

    let env ← getEnv
    let some moduleIdx := env.getModuleIdx? targetMod | throwError m!"Invalid module '{targetMod}'"
    let data := env.header.moduleData[moduleIdx]!
    for constant in data.constants do
      unless (constant.isAxiom && data.isModule) || constant matches .thmInfo .. do
        continue
      if ← isBlackListed constant.name then
        continue
      unless ← Meta.isProp constant.type do
        continue
      targets := targets.push {
        theoremName := constant.name
        moduleName := targetMod
        type := constant.type
      }

    for imp in data.imports do
      match scope with
      | .module => break
      | .submodule =>
        if rootMod.isPrefixOf imp.module then
          worklist := worklist.push imp.module
      | .transitive => worklist := worklist.push imp.module

  return targets
where
  isBlackListed (declName : Name) : MetaM Bool := do
    match ← findDeclarationRanges? declName with
    | some _ =>
      let env ← getEnv
      pure (declName.isInternal)
      <||> (pure <| isAuxRecursor env declName)
      <||> (pure <| isNoConfusion env declName)
      <||> (pure <| declName.isInternalDetail)
      <||> isRec declName
      <||> isMatcher declName
    | none => return true


structure BenchResult where
  theoremName : Name
  moduleName : Name
  success : Bool
  timeMs : Nat

def BenchResult.toCsv (res : BenchResult) : String :=
  s!"{res.theoremName.toString},{res.moduleName.toString},{res.success},{res.timeMs}"

def analyzeTargets (targets : Array BenchTarget) (config : BenchConfig) (out : System.FilePath) :
    MetaM Unit := do
  let params ← Grind.mkDefaultParams config.grindConfig
  let targetChannel ← Std.CloseableChannel.new
  let resultChannel ← Std.CloseableChannel.new
  let coreCtx : Core.Context := { fileName := "<grind_bench>", fileMap := default }
  let coreState : Core.State := { env := (← getEnv) }

  for _ in 0...config.tasks do
    discard <| IO.asTask (prio := .dedicated) do
      worker targetChannel resultChannel params |>.toIO coreCtx coreState

  targets.forM fun target => targetChannel.sync.send target
  targetChannel.close

  let targetSize := targets.size
  let file ← IO.FS.Handle.mk out .write
  file.putStrLn "theorem,module,success,timems"

  let mut results := 0
  while results ≠ targetSize do
    let some result ← resultChannel.sync.recv | break
    results := results + 1
    file.putStrLn result.toCsv
  resultChannel.close
  logInfo m!"Analysis for {results} theorems written to {out}"
where
  worker (targetChannel : Std.CloseableChannel BenchTarget)
      (resultChannel : Std.CloseableChannel BenchResult) (params : Params) : CoreM Unit := do
    while true do
      let some target ← targetChannel.sync.recv | break
      let startMs ← IO.monoMsNow
      let result ← try
        let success ← (analyzeTarget target params) |>.run'
        let endMs ← IO.monoMsNow
        pure {
          theoremName := target.theoremName,
          moduleName := target.moduleName,
          success,
          timeMs := endMs - startMs
        }
      catch _ =>
        let endMs ← IO.monoMsNow
        pure {
          theoremName := target.theoremName,
          moduleName := target.moduleName,
          success := false,
          timeMs := endMs - startMs
        }
      resultChannel.sync.send result

  analyzeTarget (target : BenchTarget) (params : Params) : MetaM Bool := do
    let mvar := (← Meta.mkFreshExprMVar target.type).mvarId!
    tryCatchRuntimeEx
      (withTheReader Core.Context (fun c => { c with maxHeartbeats := config.heartbeats * 1000 }) do
        withCurrHeartbeats do
          let res ← Grind.main mvar params
          return res.failure?.isNone)
      (fun _ => return false)

/--
Run the `#grind_bench` benchmark for the given module, writing results as CSV to `out`.

This is the core entry point that the `#grind_bench` command elaborator dispatches to.
-/
public def runBench (config : BenchConfig) (mod : Name) (out : System.FilePath) : MetaM Unit := do
  let targets ← collectTargets mod config.scope
  analyzeTargets targets config out

end Lean.Meta.Grind
