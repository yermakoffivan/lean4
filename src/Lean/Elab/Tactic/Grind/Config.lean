/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Elab.Tactic.Grind.Basic
import Lean.Elab.Tactic.Config

public section
namespace Lean.Elab.Tactic.Grind

private local derive_eval_set_config_item_instance Grind.Config

def elabConfigItems (init : Grind.Config) (items : Array (TSyntax `Lean.Parser.Tactic.configItem))
    : TermElabM Grind.Config := do
  runEvalSetConfigItems init items (logExceptions := false)

def withConfigItems (items : Array (TSyntax ``Lean.Parser.Tactic.configItem))
    (k : GrindTacticM α) : GrindTacticM α := do
  if items.isEmpty then
    k
  else
    let config := (← read).ctx.config
    let config ← elabConfigItems config items
    withReader (fun c => { c with ctx.config := config }) do k

end Lean.Elab.Tactic.Grind
