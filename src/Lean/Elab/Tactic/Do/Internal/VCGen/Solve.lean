/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Meta.Tactic.Grind.Types
public import Lean.Meta.Sym
public import Std.Internal.Do
public import Lean.Elab.Command
public import Lean.Elab.Tactic.Basic
public import Lean.Elab.Tactic.Meta
public import Lean.Elab.Tactic.Simp
public import Lean.Elab.Tactic.Do.Attr
public meta import Lean.Elab.Tactic.Basic
public meta import Lean.Elab.Tactic.Do.Attr
public import Lean.Meta.Sym.AlphaShareBuilder
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache
public import Lean.Elab.Tactic.Do.Internal.VCGen.Utils
public import Lean.Elab.Tactic.Do.Internal.VCGen.EPost

open Lean Meta Elab Tactic Sym Internal
open Std.Internal.Do Lean.Order
open Grind (GrindM)

public section

initialize registerTraceClass `Lean.Elab.Tactic.Do.Internal.VCGen.VCGen.solve
namespace Lean.Elab.Tactic.Do.Internal.VCGen.VCGen

/-!
The main `solve` step. Runs once per worklist iteration and either fully
decomposes the current goal into subgoals, or reports why no further
progress is possible (`SolveResult`).
-/

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
  /-- Successfully decomposed the goal. These are the subgoals, sharing `scope`. -/
  | goals (scope : VCGen.Scope) (subgoals : List MVarId)

/-! ## Private helpers -/

private def _root_.Lean.Expr.isDuplicable (e : Expr) : Bool := match e with
  | .bvar .. | .mvar .. | .fvar .. | .const .. | .lit .. | .sort .. => true
  | .mdata _ e | .proj _ _ e => e.isDuplicable
  | .lam .. | .forallE .. | .letE .. => false
  | .app .. => e.isAppOf ``OfNat.ofNat

section Strategies

variable (goal : MVarId)

/-! ### Strategy control flow

Each `try...` function below is a small strategy that checks whether the current
target/program has the shape it understands. If it does not apply, it returns
normally and `runStrategies` gives the next strategy a chance.

`StrategyM` carries the current `Scope` in a `StateRefT`; strategies that add local
specs update that state before later strategies consult the spec database. The
`ExceptT SolveResult` layer is used for non-local control flow, not for failure:
`returnGoals` and `returnSolveResult` throw the final result to stop the strategy
chain as soon as one strategy makes progress or decides no further progress is
possible.
-/

abbrev StrategyM := StateRefT VCGen.Scope (ExceptT SolveResult VCGenM)

/-- A single strategy step. Normal return means "I did not apply"; a thrown
`SolveResult` means "stop the chain and return this result". -/
abbrev Strategy := StrategyM Unit

/-- Finish the strategy chain with subgoals that inherit the current strategy scope. -/
def returnGoals (goals : List MVarId) : Strategy := do
  throwThe SolveResult <| .goals (← get) goals

/-- Finish the strategy chain with a final classification or spec-application result. -/
def returnSolveResult (slv : SolveResult) : StrategyM α := do
  throwThe SolveResult slv

def introForall : VCGenM (List MVarId) := do
  match ← VCGenM.introsAndSimp goal with
  | .closed    => return []
  | .goal goal => return [goal]
  | .failed    => throwError "Failed to intro forall target"

/-- Strategy 1: introduce binders if the target is a `∀`. -/
def tryForallIntro (target : Expr) : Strategy := do
  if target.isForall then returnGoals (← introForall goal)

def throwIfUnsupportedJP (name : Name) (val : Expr) : VCGenM Unit := do
  if (← read).useJP && Lean.Elab.Tactic.Do.isJP name && val.isLambda then
    throwError "mvcgen': shared-continuation handling for `__do_jp` is not yet \
      implemented. Detection point reached at {name}; the upstream \
      `Lean.Elab.Tactic.Do.onJoinPoint` (`src/Lean/Elab/Tactic/Do/VCGen.lean:215`) \
      needs to be ported to the worklist style. Drop `(jp := true)` to fall back \
      to the default zeta-unfold behaviour."

def introOrSubstTargetLet (val body : Expr) : VCGenM MVarId := do
  -- throwIfUnsupportedJP name val
  if val.isDuplicable then
    let target ← Sym.instantiateRevBetaS body #[val]
    return (← goal.replaceTargetDefEq target)
  else
    let .goal _ goal ← Sym.intros goal
      | throwError "Failed to intro let target"
    return goal

/-- Strategy 2: zeta-substitute duplicable top-level target lets, otherwise introduce them. -/
def tryTargetLetIntro (target : Expr) : Strategy := do
  if let .letE _ _ val body _ := target then
    returnGoals [← introOrSubstTargetLet goal val body]

def unfoldTriple : VCGenM MVarId := do
  let .goals [goal] ← (← read).introRules.tripleIntro.applyChecked goal
    | throwError "Failed to unfold Triple target"
  return goal

/-- Strategy 3: unfold a `Triple` target into the underlying lattice entailment. -/
def tryTripleUnfold (target : Expr) : Strategy := do
  if target.isAppOf ``Triple then returnGoals [← unfoldTriple goal]

/-- Count the leading (syntactic) `∀`/`→` binders of a function-valued lattice carrier
    `σ₁ → … → σₙ → Base` — i.e. the number of excess state arguments to introduce. -/
private partial def numLeadingForalls : Expr → Nat
  | .forallE _ _ b _ => numLeadingForalls b.consumeMData + 1
  | _ => 0

def introStateArg (preIsTop : Bool) (α : Expr) : VCGenM MVarId := do
  let ctx ← read
  let rule :=
    if preIsTop then ctx.introRules.topStateArgIntro else ctx.introRules.stateArgIntro
  -- Peel *all* excess state args at once: their count is the number of leading binders in the
  -- entailment carrier `α`. Each is named positionally from `(names := […])` (else the lemma's
  -- binder name), accessibility per `tactic.hygienic`.
  let depth := numLeadingForalls α
  let mut goal := goal
  for i in [0:depth] do
    let .goals [g] ← rule.applyChecked goal
      | throwError
      "Failed to introduce state argument using {if preIsTop then ``top_state_arg_intro' else ``state_arg_intro'} in goal:{goal}"
    let some g ← introOneHygienic g ctx.stateArgNames[i]?
      | throwError "Failed to intro state argument"
    goal := g
  return goal

def introPre (ofProp : Bool) : VCGenM MVarId := do
  let goal ← introMeetPre (← read).introRules ofProp goal
  return goal

/-- Strategy 4a: introduce an embedded proposition from the precondition side.

This is tried before state-argument introduction because `ofProp_pre_intro'` works for function
lattices, while peeling state arguments first would leave `⌜p⌝` applied to excess arguments. -/
def tryOfPropPreIntro (pre : Expr) : Strategy := do
  if pre.isAppOf ``CompleteLattice.ofProp then
    returnGoals [← introPre goal (ofProp := true)]

/-- Strategy 4b: introduce state arguments for function-valued lattice entailments. -/
def tryStateArgIntro (α : Expr) (preIsTop : Bool) : Strategy := do
  if α.isForall then returnGoals [← introStateArg goal preIsTop α]

/-- Strategy 4c: introduce a non-trivial propositional precondition from the left side of `⊑`. -/
def tryPropPreIntro (α : Expr) (preIsTop : Bool) : Strategy := do
  if !preIsTop ∧ α.isProp then returnGoals [← introPre goal (ofProp := false)]

def applyLattice (target : Expr) (lop : LogicOp) (as excessArgs : Array Expr)
    (resultType? : Option Expr) (preIsTop : Bool) : VCGenM (List MVarId) := do
  let rule ← mkBackwardRuleForLogicCached lop as excessArgs resultType? preIsTop
  let .goals goals ← rule.applyChecked goal
    | throwError "Failed to applyChecked logic rule at {indentExpr target}"
  return goals

/-- Strategy 5: decompose supported lattice RHS connectives (`⊓`, `⇨`, `⌜p⌝`, and `⊤`). -/
def tryLattice (target rhs : Expr) (preIsTop : Bool) : Strategy :=
  rhs.withApp fun head args => do
    match_expr head with
    | meet =>
      let excessArgs := args.drop 4
      let as := args.extract 2 4
      returnGoals =<< applyLattice goal target .And as excessArgs none preIsTop
    | himp =>
      let excessArgs := args.drop 4
      let as := args.extract 2 4
      returnGoals =<< applyLattice goal target .Imp as excessArgs none preIsTop
    /- We don't want to drop `pre` in `⊢ pre ⊑ ⌜p⌝`, turning the goal into `⊢ p`.
      If `pre` is not `⊤`, we might lose information and the goal might become unprovable.
      In practice this can occur if the RHS was not fully reduced before solving or is
      an join/meet of embedded propositions. -/
    | CompleteLattice.ofProp => if preIsTop then
      let excessArgs := args.drop 3
      let as := args.extract 2 3
      returnGoals =<< applyLattice goal target .Pure as excessArgs
        (resultType? := args[0]!) (preIsTop := preIsTop)
    | top =>
      let excessArgs := args.drop 2
      returnGoals =<< applyLattice goal target .Top #[] excessArgs
        (resultType? := args[0]!) (preIsTop := preIsTop)
    | _ => return ()

/-- Strategy 6: unfold a concrete exception-postcondition component into an ordinary VC. -/
def tryEPostVC (target α inst pre rhs : Expr) : Strategy :=
  rhs.withApp fun head args => do
    if head.isConstOf ``EPost.cons.head then
      let some epostArg := args[2]? | return ()
      -- `⊥.head x₁ … xₙ` is propositionally `⊥`; reduce it to a clean `pre ⊑ ⊥` VC.
      if epostArg.isAppOf ``Lean.Order.bot then
        if let some goal' ← replaceEPostHeadBot? goal target head args then
          returnGoals [goal']
        return ()
      let (epostTarget, index) := peelEPostTailChain epostArg
      let some epost ← mkEPostAtIndex epostTarget index | return ()
      let excessArgs := args.drop 3
      let rhs ← betaS epost excessArgs
      let newTarget ← mkAppNS target.getAppFn #[α, inst, pre, rhs]
      returnGoals [← goal.replaceTargetDefEq newTarget]

def replaceProgDefEq (target : Expr) (info : WPInfo) (prog : Expr) : VCGenM MVarId := do
  let wp ← mkAppNS info.head <| info.args.set! 8 prog
  let rhs ← mkAppNS wp info.excessArgs
  let relArgs := target.getAppArgs
  let newTarget ← mkAppNS target.getAppFn (relArgs.set! (relArgs.size - 1) rhs)
  goal.replaceTargetDefEq newTarget

def substOrHoistLet (target : Expr) (info : WPInfo)
    (name : Name) (type val body : Expr) (nondep : Bool)
    (appArgs : Array Expr) : VCGenM MVarId := do
  throwIfUnsupportedJP name val
  if val.isDuplicable then
    let body' ← Sym.instantiateRevBetaS body #[val]
    let prog ← mkAppRevS body' appArgs
    return (← replaceProgDefEq goal target info prog)
  else
    let prog ← mkAppRevS body appArgs
    let wp ← mkAppNS info.head <| info.args.set! 8 prog
    let rhs ← mkAppNS wp info.excessArgs
    let relArgs := target.getAppArgs
    let target ← mkAppNS target.getAppFn (relArgs.set! (relArgs.size - 1) rhs)
    let target := Expr.letE name type val target nondep
    let goal ← goal.replaceTargetDefEq target
    let .goal _ goal ← Sym.intros goal
      | throwError "Failed to intro hoisted let"
    return goal

/-- Strategy 7a: hoist or zeta-substitute a `let` from the program head. -/
def tryWPLet (target : Expr) (info : WPInfo) : Strategy := do
  if let .letE name type val body nondep := info.prog.getAppFn then
    returnGoals [← substOrHoistLet goal target info name type val body nondep info.prog.getAppRevArgs]

/-- Strategy 7b: split an `ite`/`dite`/match program, or iota-reduce a concrete matcher. -/
def tryWPMatch (target : Expr) (info : WPInfo) : Strategy := do
  if let some splitInfo ← Do.getSplitInfo? info.prog then
    if splitInfo matches .matcher .. then
      if let some prog ← reduceRecMatcher? info.prog then
        let prog ← shareCommon prog
        returnGoals [← replaceProgDefEq goal target info prog]
    let rule ← mkBackwardRuleForSplitCached splitInfo info
    let .goals goals ← rule.applyChecked goal
      | throwError "Failed to applyChecked split rule for {indentExpr info.prog}"
    let mut simpGoals := #[]
    for goal in goals do
      match ← VCGenM.simpGoal goal with
      | .goal goal => simpGoals := simpGoals.push goal
      | .closed => continue
      | .failed => throwError "Failed to simp split goal"
    returnGoals simpGoals.toList

def substFvarZeta (target : Expr) (info : WPInfo) (val : Expr)
    (appArgs : Array Expr) : VCGenM MVarId := do
  let prog ← shareCommon <| val.betaRev appArgs
  return (← replaceProgDefEq goal target info prog)

/-- Strategy 7c: zeta-unfold a local let-bound fvar used as the program head. -/
def tryWPFVarZeta (target : Expr) (info : WPInfo) : Strategy := do
  let f := info.prog.getAppFn
  if let some val ← f.fvarId?.bindM (·.getValue?) then
    returnGoals [← substFvarZeta goal target info val info.prog.getAppRevArgs]

def applySpec (scope : VCGen.Scope) (target : Expr) (info : WPInfo) : VCGenM SolveResult := do
  match ← scope.specs.findSpecs info.prog with
  | .error thms => return .noSpecFoundForProgram info.prog info.m thms
  | .ok thm =>
  let some rule ←
    try
      mkBackwardRuleFromSpecCached thm info |>.run
    catch ex =>
      throwError "Failed to construct rule {thm.proof} for {indentExpr info.prog}\n\
        error: {ex.toMessageData}\n\
        target:{indentExpr target}\n\
        Pred:{indentExpr info.Pred}\n\
        excessArgs: {info.excessArgs}"
    | return .noSpecFoundForProgram info.prog info.m #[thm]
  let .goals goals ← rule.applyChecked goal
    | do
      let ruleType ← Meta.inferType rule.expr
      throwError "Failed to applyChecked rule {thm.proof} for {indentExpr info.prog}\n\
        target:{indentExpr target}\n\
        Pred:{indentExpr info.Pred}\n\
        excessArgs: {info.excessArgs}\n\
        rule type:{indentExpr ruleType}"
  return .goals scope goals

/-- Strategy 7d: reduce a projection head in the program. -/
def tryWPHeadReduce (target : Expr) (info : WPInfo) : Strategy := do
  let f := info.prog.getAppFn
  if f matches .proj .. then
    let some f' ← withReducibleAndInstances (reduceProj? f) | return
    let f' ← shareCommon <| ← unfoldReducible f'
    let prog ← betaRevS f' info.prog.getAppRevArgs
    returnGoals [← replaceProgDefEq goal target info prog]

/-- Strategy 7e: apply a registered spec for a constant or local function program head. -/
def tryWPCallSpec (target : Expr) (info : WPInfo) :
    Strategy := do
  let f := info.prog.getAppFn
  if f.isConst || f.isFVar then
    returnSolveResult =<< applySpec goal (← get) target info

/-- Extract the weakest-precondition metadata from the RHS of a lattice entailment. -/
def getWPInfo? (rhs : Expr) : VCGenM (Option WPInfo) :=
  rhs.withApp fun head args => do
    unless (head.isConstOf ``wp && args.size >= 11) do return none
    return some { head, args := args.take 11, excessArgs := args.drop 11 }

/-- Strategy 7: decompose a `wp` RHS by trying each program-shape strategy in order. -/
def tryWP (target rhs : Expr) : Strategy := do
  if let some info ← getWPInfo? rhs then
    burnOne
    tryWPLet      goal target info
    tryWPMatch    goal target info
    tryWPFVarZeta goal target info
    tryWPHeadReduce goal target info
    tryWPCallSpec goal target info
    returnSolveResult <| .noStrategyForProgram info.prog

/-- Strategy 8: close an already-reflexive lattice entailment. -/
def tryRfl (target : Expr) : Strategy := do
  let_expr PartialOrder.rel α inst pre rhs := target | return
  if ← withAssignableSyntheticOpaque <| isDefEqS pre rhs then
    let refl := mkConst ``PartialOrder.rel_refl target.getAppFn.constLevels!
    let proof := mkAppN refl #[α, inst, pre]
    goal.assign proof
    returnGoals []

end Strategies

/--
The main VC generation step. Operates on a plain `MVarId` with no knowledge of grind.
Returns `.goals subgoals` when the goal was decomposed, or a classification result
(`.noEntailment`, `.noProgramFoundInTarget`, etc.) when no further decomposition is possible.

The function performs the following steps in order:

1. **Forall introduction**: introduce leading `∀` binders.
2. **Target-let handling**: zeta-substitute duplicable top-level lets, otherwise introduce them.
3. **Triple unfolding**: unfold `Triple` into the underlying lattice entailment.
4. **Precondition/state introduction**: the goal of this strategy is to reduce the goal to
  `⊤ ⊑ rhs` where `rhs` is a proposition if possible. This is not possible if assertion type `Pred`
  is not of the form `σ₁ → ... → σₙ → Prop`. In the latter case, we will at least try to get `⊤` in
  LHS. To do this, we employ the following sub-strategies:
  4a. **Introduce pure embedded propositions**: If LHS is `⌜p⌝`, introduce the proposition, turning
  LHS into `⊤ ⊑ ⌜p⌝`.
  4b. **Introduce excess state arguments**: If assertion type `Pred` is of the form `σ₁ → ... → σₙ → _`,
  introduce state arguments `s₁ : σ₁`, ..., `sₙ : σₙ`.
  4c. **Introduce propositional preconditions**: If assertion type `Pred` is `Prop`, we can just
  introduce the LHS into the Lean context, turning the goal into `⊤ ⊑ ⌜p⌝`.
5. **EPost VC unfolding**: If RHS is an `i`ᵗʰ projection of a concrete  `epost⟨p₁, ..., pₙ⟩` reduce
  RHS to `pᵢ`.
6. **Lattice decomposition**: If RHS is a lattice operation `⊓`, `⇨`, `⌜p⌝`, or `⊤`, apply a
  corresponding logic rule.
7. **WP decomposition**: If RHS is a weakest precondition of a program term `Prog`, try:
  7a. **Let hoisting**: If `Prog` is a `let`, hoist the let-bound variable to the LHS.
  7b. **Match splitting**: If `Prog` is a `match`, split the match-cases.
  7c. **Fvar zeta**: If `Prog` is a local fvar, zeta-unfold it.
  7d. **Head reduction**: If `Prog` is a projection, reduce it.
  7e. **Spec lookup**: If `Prog` is a constant or local function, lookup a corresponding spec.
8. **Syntactic rfl**: If RHS is not a `wp`, try closing by `PartialOrder.rel_refl`.
-/
def runStrategies (goal : MVarId) : StrategyM SolveResult := do
  let mut goal := goal
  let mut target ← goal.getType

  if target.hasExprMVar then
    target ← instantiateMVars target
    goal ← goal.replaceTargetDefEq target

  tryForallIntro goal target
  tryTargetLetIntro goal target
  tryTripleUnfold goal target

  let_expr PartialOrder.rel α inst pre rhs := target | returnSolveResult <| .noEntailment target
  let preIsTop := pre.isAppOf ``Lean.Order.top && pre.getAppNumArgs = 2

  tryOfPropPreIntro goal pre
  tryStateArgIntro goal α preIsTop
  tryPropPreIntro goal α preIsTop
  tryEPostVC goal target α inst pre rhs

  -- Collect new local specs before any strategy that may emit multiple subgoals
  -- (`trySplit`) or apply a registered spec (`applySpec`). Single-goal strategies
  -- above this point don't need the updated scope.
  set =<< (← get).collectLocalSpecs goal

  tryLattice goal target rhs preIsTop
  tryWP goal target rhs
  tryRfl goal target
  return .noProgramOrLatticeFoundInTarget rhs

def solve (scope : VCGen.Scope) (goal : MVarId) : VCGenM SolveResult := goal.withContext do
  runStrategies goal |>.run' scope |>.runCatch
