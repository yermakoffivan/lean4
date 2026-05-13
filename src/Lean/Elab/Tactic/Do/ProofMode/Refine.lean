/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.Assumption
import Std.Internal.Do.Order.Lemmas

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic Lean.Parser.Tactic
open Lean Elab Tactic Meta

def patAsTerm (pat : MRefinePat) (expected : Option Expr := none) : OptionT TacticM Expr := do
  match pat with
  | .pure t => elabTerm t expected
  | .one name =>
    if let `(binderIdent| $name:ident) := name then
      elabTerm (← `($name)) expected
    else failure
  | _ => failure

partial def mRefineCore (goal : MGoal) (pat : MRefinePat) (k : MGoal → TSyntax ``binderIdent → TacticM Expr) : TacticM Expr := do
  match pat with
  | .stateful name => liftMetaM do
    match name with
    | `(binderIdent| $name:ident) => do
      let some prf ← goal.exact name | throwError "unknown hypothesis `{repr name}`"
      return prf
    | _ => do
      let some prf ← goal.assumption | throwError "could not solve {goal.target} by assumption"
      return prf
  | .pure t => do
    goal.exactPure t
  | .one name =>
      if let `(binderIdent| $_:ident) := name then
        mRefineCore goal (.pure ⟨name.raw⟩) k <|> mRefineCore goal (.stateful name) k
      else
        mRefineCore goal (.stateful name) k
  | .hole name => k goal name
  | .tuple [] => throwUnsupportedSyntax
  | .tuple [p] => mRefineCore goal p k
  | .tuple (p::ps) => do
    let T ← whnfR goal.target
    let f := T.getAppFn'
    let args := T.getAppArgs
    trace[Meta.debug] "f: {f}, args: {args}"
    if f.isConstOf ``SPred.and && args.size >= 3 then
      let T₁ := args[1]!.beta args[3...*]
      let T₂ := args[2]!.beta args[3...*]
      let prf₁ ← mRefineCore { goal with target := T₁ } p k
      let prf₂ ← mRefineCore { goal with target := T₂ } (.tuple ps) k
      return mkApp6 (mkConst ``SPred.and_intro [goal.u]) goal.σs goal.hyps T₁ T₂ prf₁ prf₂
    else if f.isConstOf ``SPred.exists && args.size >= 3 then
      let α := args[0]!
      let ψ := args[2]!
      let some witness ← patAsTerm p (some α) | throwError "pattern does not elaborate to a term to instantiate ψ"
      let prf ← mRefineCore { goal with target := ψ.beta (#[witness] ++ args[3...*]) } (.tuple ps) k
      let u ← getLevel α
      return mkApp6 (mkConst ``SPred.exists_intro' [u, goal.u]) α goal.σs goal.hyps ψ witness prf
    else throwError "Neither a conjunction nor an existential quantifier {T}"

def elabMRefine : Tactic
  | `(tactic| mrefine $pat:mrefinePat) => do
    let pat ← liftMacroM <| MRefinePat.parse pat
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do

    let goals ← IO.mkRef #[]
    let prf ← mRefineCore goal pat fun goal name => do
      let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr name.raw.getId
      goals.modify (·.push m.mvarId!)
      return m
    mvar.assign prf
    replaceMainGoal (← goals.get).toList
  | _ => throwUnsupportedSyntax

def elabMExists : Tactic
  | `(tactic| mexists $args,*) => do
    let pats ← args.getElems.mapM fun t => `(mrefinePat| ⌜$t⌝)
    let pat ← pats.foldrM (fun pat acc => `(mrefinePat| ⟨$pat, $acc⟩)) (← `(mrefinePat| ?_))
    evalTactic (← `(tactic| (mrefine $pat; try massumption)))
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Tactic Meta Lean.Parser.Tactic
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice
open Std.Internal.Do.CompleteLattice.Tactic

def patAsTerm (pat : MRefinePat) (expected : Option Expr := none) :
    OptionT TacticM Expr := do
  match pat with
  | .pure t => elabTerm t expected
  | .one name =>
    if let `(binderIdent| $name:ident) := name then
      elabTerm (← `($name)) expected
    else failure
  | _ => failure

/-- Given `(l, cl, T)` produces `(T₁, T₂, proof)` where `proof : T = T₁ ⊓ T₂`. -/
private def synthTargetIsAnd (uType : Level) (l cl T : Expr) : OptionT MetaM (Expr × Expr × Expr) := do
  try
    let T₁ ← mkFreshExprMVar l
    let T₂ ← mkFreshExprMVar l
    let inst ← synthInstance (mkApp5 (mkConst ``IsAnd [uType]) l cl T T₁ T₂)
    let T₁ ← instantiateMVars T₁
    let T₂ ← instantiateMVars T₂
    return (T₁, T₂, mkApp6 (mkConst ``IsAnd.to_and [uType]) l cl T T₁ T₂ inst)
  catch _ =>
    let some (_u, _l, _cl, T₁, T₂) := parseAnd? T.consumeMData | failure
    return (T₁, T₂, mkApp2 (mkConst ``Eq.refl [.succ uType]) l T)

partial def mRefineCore (goal : MGoal) (pat : MRefinePat)
    (k : MGoal → TSyntax ``binderIdent → TacticM Expr) : TacticM Expr := do
  match pat with
  | .stateful name => liftMetaM do
    match name with
    | `(binderIdent| $name:ident) => do
      let some prf ← goal.exact name | throwError "unknown hypothesis `{repr name}`"
      return prf
    | _ => do
      let some prf ← goal.assumption | throwError "could not solve {goal.target} by assumption"
      return prf
  | .pure t => do
    goal.exactPure t
  | .one name =>
      if let `(binderIdent| $_:ident) := name then
        mRefineCore goal (.pure ⟨name.raw⟩) k <|> mRefineCore goal (.stateful name) k
      else
        mRefineCore goal (.stateful name) k
  | .hole name => k goal name
  | .tuple [] => throwUnsupportedSyntax
  | .tuple [p] => mRefineCore goal p k
  | .tuple (p::ps) => do
    let T ← whnfR goal.target
    let f := T.getAppFn'
    let args := T.getAppArgs
    let decomp? ← liftMetaM <| (synthTargetIsAnd goal.uType goal.l goal.cl T).run
    if let some (T₁, T₂, hand) := decomp? then
      let prf₁ ← mRefineCore { goal with target := T₁ } p k
      let prf₂ ← mRefineCore { goal with target := T₂ } (.tuple ps) k
      return mkApp9 (mkConst ``Std.Internal.Do.CompleteLattice.and_intro_eq [goal.uType])
        goal.l goal.cl goal.hyps T₁ T₂ T hand prf₁ prf₂
    else if f.isConstOf ``Lean.Order.iSup && args.size >= 4 then
      let ι := args[2]!
      let ψ := args[3]!
      let some witness ← patAsTerm p (some ι)
        | throwError "pattern does not elaborate to a term to instantiate ψ"
      let prf ← mRefineCore { goal with target := ψ.beta (#[witness] ++ args[4...*]) } (.tuple ps) k
      let ιSort ← getLevel ι
      let ιLevel := ιSort.dec.getD ιSort
      return mkApp7 (mkConst ``Std.Internal.Do.CompleteLattice.exists_intro' [goal.uType, ιLevel])
        goal.l goal.cl goal.hyps ι ψ witness prf
    else throwError "Neither a conjunction nor an existential quantifier {T}"

def elabMRefine : Tactic
  | `(tactic| mrefine $pat:mrefinePat) => do
    let pat ← liftMacroM <| MRefinePat.parse pat
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do

    let goals ← IO.mkRef #[]
    let prf ← mRefineCore goal pat fun goal name => do
      let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr name.raw.getId
      goals.modify (·.push m.mvarId!)
      return m
    mvar.assign prf
    replaceMainGoal (← goals.get).toList
  | _ => throwUnsupportedSyntax

def elabMExists : Tactic
  | `(tactic| mexists $args,*) => do
    let pats ← args.getElems.mapM fun t => `(mrefinePat| ⌜$t⌝)
    let pat ← pats.foldrM (fun pat acc => `(mrefinePat| ⟨$pat, $acc⟩)) (← `(mrefinePat| ?_))
    evalTactic (← `(tactic| (mrefine $pat; try massumption)))
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic Lean.Parser.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mrefine]
def elabMRefineOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMRefine stx
  elabMRefine stx

@[builtin_tactic Lean.Parser.Tactic.mexists]
def elabMExistsOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMExists stx
  elabMExists stx

end Lean.Elab.Tactic.Do.ProofMode
