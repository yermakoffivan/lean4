/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module

prelude
public import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic
import Lean.Meta.Sym.Simp.SimpM
import Lean.Meta.Sym.Simp.ControlFlow
import Lean.Meta.Sym.Simp.Forall
import Lean.Meta.Sym.Simp.EvalGround
import Lean.Meta.Sym.Simp.Simproc
import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Simproc
import Lean.Meta.Sym.Simp.Rewrite
import Init.Omega

public section

/-!
This module contains the implementation of the rewriting pass in the fixpoint pipeline, applying
rules from the `bv_normalize` simp set.
-/

namespace Lean.Elab.Tactic.BVDecide
namespace Frontend.Normalize

open Lean.Meta

/--
Responsible for applying the Bitwuzla style rewrite rules.
-/
def rewriteRulesPass : PreProcessPass where
  name := `rewriteRules
  run' goal := goal.withContext do
    let hyps ← getHyps goal
    if hyps.isEmpty then
      return goal
    else
      let cfg ← ConfigT.getConfig
      let config := {
        maxSteps := cfg.maxSteps
      }
      let bvNormalizeThms := (← bvNormalizeExt.getTheorems).rewrite
      -- TODO: replace simpControl
      let methods := {
        pre := Sym.Simp.simpArrowTelescope
        post := Sym.Simp.evalGround >> rewriteSimproc >> bvNormalizeThms
      }
      let (unmodifiedTargets, newTargets) ← Sym.Simp.SimpM.run' (methods := methods) (config := config) do
        let mut newTargets : Array Hypothesis := #[]
        let mut unmodifiedTargets := #[]
        for hyp in hyps do
          let e ← hyp.getType
          match ← Sym.Simp.simp e with
          | .step e' proof .. =>
            newTargets := newTargets.push {
              userName := ← hyp.getUserName,
              type := e'
              value := mkApp4 (mkConst ``Eq.mp [0]) e e' proof (mkFVar hyp)
            }
            if e'.isConstOf ``False then
              break
          | .rfl .. => unmodifiedTargets := unmodifiedTargets.push hyp

        return (unmodifiedTargets, newTargets)

      if h : newTargets.size = 0 then
        return goal
      else if newTargets.back.type.isConstOf ``False then
        let (#[falseFVar], goal) ← goal.assertHypotheses #[newTargets.back] | unreachable!
        goal.assign (mkFVar falseFVar)
        return none
      else
        let (newFVars, goal) ← goal.assertHypotheses newTargets
        goal.withContext do
          PreProcessM.modifyRelevantFVars fun _ => unmodifiedTargets ++ newFVars
          newFVars.forM PreProcessM.rewriteFinished
          return goal
where
  getHyps (goal : MVarId) : PreProcessM (Array FVarId) := do
    let hyps ← PreProcessM.getRelevantFVars
    let filter hyp := do
      return !(← PreProcessM.checkRewritten hyp)
    hyps.filterM filter


end Frontend.Normalize
end Lean.Elab.Tactic.BVDecide
