/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module
prelude
public import Lean.Elab.Command
import Init.Grind.Bench
import Lean.Elab.Tactic.Grind.Main
import Lean.Meta.Tactic.Grind.Bench
namespace Lean.Elab.Tactic.Grind

open Command Meta Lean.Grind

declare_command_config_elab elabGrindBenchConfig Grind.BenchConfig

@[builtin_command_elab Lean.Grind.grindBench]
def elabGrindBench : CommandElab := fun stx => do
  let `(#grind_bench $cfg:optConfig $mod:ident $out:str) := stx | throwUnsupportedSyntax
  let cfg ← elabGrindBenchConfig cfg
  liftTermElabM <| Meta.Grind.runBench cfg mod.getId out.getString

end Lean.Elab.Tactic.Grind
