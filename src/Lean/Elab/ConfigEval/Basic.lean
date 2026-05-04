/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.Types
public import Lean.Elab.SyntheticMVars
public import Lean.Meta.CollectMVars

/-!
# Basic interface for configuration evaluation
-/

public section

namespace Lean.Elab.ConfigEval

open Meta Term

/--
Evaluate `stx` using either `evalStx` or `evalExpr`.
-/
def evalTermOrExpr {α : Type} [EvalTerm α] [EvalExpr α] (stx : Term) : TermElabM α :=
  withRef stx do
    let s ← saveState
    catchInternalId unsupportedSyntaxExceptionId
      (Prod.fst <$> evalTerm stx)
      (fun _ => do
        s.restore (restoreInfo := true)
        let ty? := EvalExpr.expectedType? α
        let e ← Term.withSynthesize <| Term.elabTermEnsuringType stx ty?
        let e ← instantiateMVars e
        if e.hasSorry then
          if e.hasSyntheticSorry then
            -- An error has already been logged.
            throwAbortTerm
          throwError "Expression contains `sorry`:{indentExpr e}"
        if (← Term.logUnassignedUsingErrorInfos (← getMVars e)) then
          throwAbortTerm
        catchInternalId unsupportedSyntaxExceptionId
          (evalExpr e)
          (fun _ => do
            -- let lmvars := collectLevelMVars {} e
            -- if (← Term.logUnassignedLevelMVarsUsingErrorInfos lmvars.result) then throwAbortTerm
            let extra := if let some ty := ty? then m!" of type `{ty}`" else m!""
            throwError "The configuration option evaluator could not evaluate the expression{extra}:{indentExpr e}"))

end Lean.Elab.ConfigEval
