/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Lean.Elab
public meta import Lean.Elab
public import Lean.Meta.Sym.AlphaShareBuilder
public import Loom.Tactic.RuleCache
public import Loom.Tactic.Intros

open Lean Meta Elab Tactic Sym Internal
open Std.Internal.Do Lean.Order
open Grind (GrindM)

public section

namespace Loom.VCGen

/-!
The main `solve` step. Runs once per worklist iteration and either fully
decomposes the current goal into subgoals, or reports why no further
progress is possible (`SolveResult`).
-/

/-! ## Goal classification -/

/-- Result of trying to solve a single goal of the form `pre ⊑ wp prog post epost`. -/
inductive SolveResult where
  /-- `target` was not of the form `pre ⊑ post`. -/
  | noEntailment (target : Expr)
  /-- The RHS was neither a WP goal nor a supported lattice goal. -/
  | noProgramOrLatticeFoundInTarget (rhs : Expr)
  /-- Don't know how to handle `e` in `pre ⊑ wp e post epost`. -/
  | noStrategyForProgram (e : Expr)
  /-- Did not find a spec for `e` in `pre ⊑ wp e post epost`. -/
  | noSpecFoundForProgram (e : Expr) (monad : Expr) (thms : Array SpecTheoremNew)
  /-- Successfully decomposed the goal. These are the subgoals. -/
  | goals (subgoals : List MVarId)

/-- Program classifier for the `e` inside a `pre ⊑ @wp ... e post epost` goal. -/
inductive ProgKind where
  /-- The program is a non-dependent `let`. -/
  | Let (val body : Expr) (appArgs : Array Expr)
  /-- The program is `ite`/`dite`/`match`. -/
  | Match (splitInfo : Do.SplitInfo)
  /-- The program is headed by a call to a function. -/
  | Call
  /-- The program has no supported decomposition strategy. -/
  | Unknown

/-- High-level classifier for a goal. -/
inductive GoalKind where
  /-- RHS is `True`; dischargeable via `le_top` or similar. -/
  | TrivialTrue
  /-- RHS is a concrete EPost component; stores selected component and its excess args. -/
  | EPostVC (relConst : Expr) (α inst : Expr) (pre : Expr) (epost : Expr) (excessArgs : Array Expr)
  /-- RHS is a lattice connective application (`meet`/`himp`/`pure`) with optional excess args. -/
  | Lattice (lop : LogicOp) (as : Array Expr) (excessArgs : Array Expr) (resultType? : Option Expr := none)
  /-- RHS is a WP application, with a separate classification for the program. -/
  | WP (info : WPInfo) (prog : ProgKind)
  /-- Lattice type is Prop and precondition is not `True`; intro the pre. -/
  | IntroPre
  /-- RHS is neither a recognized WP nor a recognized lattice connective. -/
  | Unknown

/-! ## Private helpers -/

/-- Get the `index`-th component from an `EPost` target. -/
private def mkEPostAtIndex (target : Expr) (index : Nat) : SymM Expr := do
  let mut curr := target
  for _ in [:index] do
    let_expr EPost.cons.mk _ _ _ tail := curr
      | throwError "Expected EPost.cons.mk, got {curr}"
    curr := tail
  let_expr EPost.cons.mk _ _ head _ := curr
    | throwError "Expected EPost.cons.mk, got {curr}"
  return head

/-- Peel a chain of `.tail` projections, returning the base `EPost` and the number of tails. -/
private partial def peelEPostTailChain (curr : Expr) (idx : Nat := 0) : Expr × Nat :=
  curr.consumeMData.withApp fun fn args =>
    if fn.isConstOf ``EPost.cons.tail && args.size > 0 then
      peelEPostTailChain args[args.size - 1]! (idx + 1)
    else
      (curr, idx)

private def _root_.Lean.Expr.isDuplicable (e : Expr) : Bool := match e with
  | .bvar .. | .mvar .. | .fvar .. | .const .. | .lit .. | .sort .. => true
  | .mdata _ e | .proj _ _ e => e.isDuplicable
  | .lam .. | .forallE .. | .letE .. => false
  | .app .. => e.isAppOf ``OfNat.ofNat

/-! ## Core logic -/

/-- Classify the program inside a `pre ⊑ @wp ... e post epost` goal. -/
def classifyProg (e : Expr) : VCGenM ProgKind := do
  if let .letE _x _ty val body _nonDep := e.getAppFn then
    return .Let val body e.getAppRevArgs
  if let some info ← Do.getSplitInfo? e then
    return .Match info
  if e.getAppFn.isConst || e.getAppFn.isFVar then
    return .Call
  return .Unknown

/-- Classify the RHS of a `pre ⊑ rhs` goal. If the target is not in `⊑` form,
    falls back to classifying the target directly. -/
def classifyGoal (target : Expr) : VCGenM GoalKind := do
  match_expr target with
  | PartialOrder.rel α inst pre rhs =>

    -- TODO: Also check if it is ⌜·⌝
    if !pre.isConstOf ``True && α.isProp then return .IntroPre

    rhs.withApp fun head args => do
      match_expr head with
      | meet =>
        let excessArgs := args.drop 4
        let as := args.extract 2 4
        return .Lattice .And as excessArgs
      | himp =>
        let excessArgs := args.drop 4
        let as := args.extract 2 4
        return .Lattice .Imp as excessArgs
      | CompleteLattice.ofProp =>
        let excessArgs := args.drop 3
        let as := args.extract 2 3
        return .Lattice .Pure as excessArgs args[0]!
      | EPost.cons.head =>
        let some epostArg := args[2]?
          | return .Unknown
        let (epostTarget, index) := peelEPostTailChain epostArg
        let epost ← mkEPostAtIndex epostTarget index
        return .EPostVC target.getAppFn α inst pre epost (args.extract 3 args.size)
      | wp =>
        let_expr wp _m _Pred _EPred _monadInst _instAL _instEAL _instWP _α prog _post _epost :=
          mkAppN head <| args.take 11
          | return .Unknown
        let excessArgs := args.drop 11
        .WP { head, args, excessArgs } <$> classifyProg prog
      | _ => return .Unknown
  | _ => return .Unknown

/-- Main solve step for a goal of the form `pre ⊑ rhs`. -/
def solve (goal : MVarId) : VCGenM SolveResult := goal.withContext do
  let mut goal := goal
  let mut target ← goal.getType
  if target.hasExprMVar then
    target ← instantiateMVars target
    goal ← goal.replaceTargetDefEq target
  let kind ← classifyGoal target
  match kind with
  | .TrivialTrue => do
      throwError "TrivialTrue not yet implemented in VCGen'"
  | .IntroPre => do
      goal ← introMeetPre (← read).introRules goal
      return .goals [goal]
  | .Lattice lop as excessArgs resultType? => do
      let rule ← mkBackwardRuleForLogicCached lop as excessArgs resultType?
      let .goals goals ← rule.apply goal
        | throwError "Failed to apply logic rule at {indentExpr target}"
      return .goals goals
  | .EPostVC relConst α inst pre epost excessArgs => do
      let rhs ← betaRevS epost excessArgs.reverse
      let newTarget ← mkAppNS relConst #[α, inst, pre, rhs]
      goal ← goal.replaceTargetDefEq newTarget
      return .goals [goal]
  | .WP info prog => do
      match prog with
      | .Let val body appArgs =>
          let body' ← Sym.instantiateRevBetaS body #[val]
          let e' ← mkAppRevS body' appArgs
          -- We should not use mkAppM
          let wp ← mkAppNS info.head <| info.args.set! 8 e'
          let rhs ← mkAppNS wp info.excessArgs
          -- We should not use isDefEq!
          let_expr PartialOrder.rel l cl pre _rhs := target
            | throwError "expected ⊑ goal but got {target}"
          let newTarget ← mkAppNS (mkConst ``PartialOrder.rel) #[l, cl, pre, rhs]
          goal ← goal.replaceTargetDefEq newTarget
          return .goals [goal]
      | .Match splitInfo =>
          -- For matchers, try reduceRecMatcher? to reduce known discriminants
          if let .matcher .. := splitInfo then
            if let some e' ← reduceRecMatcher? info.prog then
              let e' ← shareCommon e'
              let rhs ← mkAppNS info.head <| info.args.set! 8 e'
              let relArgs := target.getAppArgs
              let newTarget ← mkAppNS target.getAppFn (relArgs.set! (relArgs.size - 1) rhs)
              goal ← goal.replaceTargetDefEq newTarget
              return .goals [goal]
          let rule ← mkBackwardRuleForSplitCached splitInfo info
          let .goals goals ← rule.apply goal
            | throwError "Failed to apply split rule for {indentExpr info.prog}"
          let goals ← goals.mapM fun g => do
            let .goal _ g ← Sym.intros g
              | throwError "Failed to intro split parameters"
            return g
          return .goals goals
      | .Call =>
          match ← (← read).specThms.findSpecs info.prog with
          | .error thms => return .noSpecFoundForProgram info.prog info.m thms
          | .ok thm =>
          let some rule ← mkBackwardRuleFromSpecCached thm info |>.run
            | return .noSpecFoundForProgram info.prog info.m #[thm]
          let .goals goals ← rule.apply goal
            | throwError "Failed to apply rule {thm.proof} for {indentExpr info.prog}"
          return .goals goals
      | .Unknown =>
          return .noStrategyForProgram info.prog
  | _ =>
    return .noProgramOrLatticeFoundInTarget target
