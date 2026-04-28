/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module
prelude
public import Init.Tactics
public import Init.Grind.Config
public section

namespace Lean.Grind

open Parser Tactic Grind

inductive BenchScope where
  | module
  | submodule
  | transitive

structure BenchConfig where
  grindConfig : Config := {}
  scope : BenchScope := .module
  heartbeats : Nat := 200000
  tasks : Nat := 1

/--
`#grind_bench module "out.csv"` benchmarks `grind` on all theorems in the given module
and writes the results as CSV to the given file.
-/
syntax (name := grindBench) "#grind_bench " optConfig ident str : command

end Lean.Grind
