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
public import Loom.Tactic.Utils

open Lean Meta Elab Tactic Sym Internal
open Std.Internal.Do Lean.Order
open Grind (GrindM)

public section

initialize registerTraceClass `Loom.VCGen.solve
namespace Loom.VCGen

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

/-- Get the `index`-th component from an `EPost` target. -/
private def mkEPostAtIndex (target : Expr) (index : Nat) : SymM (Option Expr) := do
  let mut curr := target
  for _ in [:index] do
    let_expr EPost.cons.mk _ _ _ tail := curr | return none
    curr := tail
  let_expr EPost.cons.mk _ _ head _ := curr | return none
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

section Strategies

variable (goal : MVarId)

def introForall (scope : VCGen.Scope) : VCGenM SolveResult := do
  match ← VCGenM.introsAndSimp goal with
  | .closed => return .goals scope []
  | .goal goal => return .goals scope [goal]
  | .failed => throwError "Failed to intro forall target"

/-- Strategy 1: introduce binders if the target is a `∀`. -/
def tryForallIntro (scope : VCGen.Scope) (target : Expr) : VCGenM (Option SolveResult) := do
  unless target.isForall do return none
  return some (← introForall goal scope)

def throwIfUnsupportedJP (name : Name) (val : Expr) : VCGenM Unit := do
  if (← read).useJP && Lean.Elab.Tactic.Do.isJP name && val.isLambda then
    throwError "mvcgen': shared-continuation handling for `__do_jp` is not yet \
      implemented. Detection point reached at {name}; the upstream \
      `Lean.Elab.Tactic.Do.onJoinPoint` (`src/Lean/Elab/Tactic/Do/VCGen.lean:215`) \
      needs to be ported to the worklist style. Drop `(jp := true)` to fall back \
      to the default zeta-unfold behaviour."

def introOrSubstTargetLet (scope : VCGen.Scope) (val body : Expr) : VCGenM SolveResult := do
  -- throwIfUnsupportedJP name val
  if val.isDuplicable then
    let target ← Sym.instantiateRevBetaS body #[val]
    return .goals scope [← goal.replaceTargetDefEq target]
  else
    let .goal _ goal ← Sym.intros goal
      | throwError "Failed to intro let target"
    return .goals scope [goal]

/-- Strategy 2: zeta-substitute duplicable top-level target lets, otherwise introduce them. -/
def tryTargetLetIntro (scope : VCGen.Scope) (target : Expr) : VCGenM (Option SolveResult) := do
  let .letE _ _ val body _ := target | return none
  return some (← introOrSubstTargetLet goal scope val body)

def unfoldTriple (scope : VCGen.Scope) : VCGenM SolveResult := do
  let .goals [goal] ← (← read).introRules.tripleIntro.applyChecked goal
    | throwError "Failed to unfold Triple target"
  return .goals scope [goal]

/-- Strategy 3: unfold a `Triple` target into the underlying lattice entailment. -/
def tryTripleUnfold (scope : VCGen.Scope) (target : Expr) : VCGenM (Option SolveResult) := do
  unless target.isAppOf ``Triple do return none
  return some (← unfoldTriple goal scope)

/-- Count the leading (syntactic) `∀`/`→` binders of a function-valued lattice carrier
    `σ₁ → … → σₙ → Base` — i.e. the number of excess state arguments to introduce. -/
private partial def numLeadingForalls : Expr → Nat
  | .forallE _ _ b _ => numLeadingForalls b.consumeMData + 1
  | _ => 0

def introStateArg (scope : VCGen.Scope) (preIsTop : Bool) (α : Expr) : VCGenM SolveResult := do
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
  return .goals scope [goal]

def introPre (scope : VCGen.Scope) (ofProp : Bool) : VCGenM SolveResult := do
  let goal ← introMeetPre (← read).introRules ofProp goal
  return .goals scope [goal]

/-- Strategy 4a: introduce an embedded proposition from the precondition side.

This is tried before state-argument introduction because `ofProp_pre_intro'` works for function
lattices, while peeling state arguments first would leave `⌜p⌝` applied to excess arguments. -/
def tryOfPropPreIntro (scope : VCGen.Scope) (pre : Expr) : VCGenM (Option SolveResult) := do
  unless pre.isAppOf ``CompleteLattice.ofProp do return none
  return some (← introPre goal scope (ofProp := true))

/-- Strategy 4b: introduce state arguments for function-valued lattice entailments. -/
def tryStateArgIntro (scope : VCGen.Scope) (α : Expr) (preIsTop : Bool) :
    VCGenM (Option SolveResult) := do
  unless α.isForall do return none
  return some (← introStateArg goal scope preIsTop α)

/-- Strategy 4c: introduce a non-trivial propositional precondition from the left side of `⊑`. -/
def tryPropPreIntro (scope : VCGen.Scope) (α : Expr) (preIsTop : Bool) :
    VCGenM (Option SolveResult) := do
  unless !preIsTop ∧ α.isProp do return none
  some <$> introPre goal scope (ofProp := false)

def applyLattice (scope : VCGen.Scope) (target : Expr) (lop : LogicOp) (as excessArgs : Array Expr)
    (resultType? : Option Expr) (preIsTop : Bool) : VCGenM SolveResult := do
  let rule ← mkBackwardRuleForLogicCached lop as excessArgs resultType? preIsTop
  let .goals goals ← rule.applyChecked goal
    | throwError "Failed to applyChecked logic rule at {indentExpr target}"
  return .goals scope goals

/-- Strategy 5: decompose supported lattice RHS connectives (`⊓`, `⇨`, `⌜p⌝`, and `⊤`). -/
def tryLattice (scope : VCGen.Scope) (target rhs : Expr) (preIsTop : Bool) :
    VCGenM (Option SolveResult) :=
  rhs.withApp fun head args => do
    match_expr head with
    | meet =>
      let excessArgs := args.drop 4
      let as := args.extract 2 4
      return some (← applyLattice goal scope target .And as excessArgs none preIsTop)
    | himp =>
      let excessArgs := args.drop 4
      let as := args.extract 2 4
      return some (← applyLattice goal scope target .Imp as excessArgs none preIsTop)
    | CompleteLattice.ofProp =>
      /- We don't want to drop `pre` in `⊢ pre ⊑ ⌜p⌝`, turning the goal into `⊢ p`.
        If `pre` is not `⊤`, we might lose information and the goal might become unprovable.
        In practice this can occur if the RHS was not fully reduced before solving or is
        an join/meet of embedded propositions. -/
      unless preIsTop do return none
      let excessArgs := args.drop 3
      let as := args.extract 2 3
      return some (← applyLattice goal scope target .Pure as excessArgs
        (resultType? := args[0]!) (preIsTop := preIsTop))
    | top =>
      -- `pre ⊑ ⊤` closes via `le_top`; `top` has no operands.
      let excessArgs := args.drop 2
      some <$> applyLattice goal scope target .Top #[] excessArgs
        (resultType? := args[0]!) (preIsTop := preIsTop)
    | _ => return none

def unfoldEPostVC (scope : VCGen.Scope) (relConst α inst pre epost : Expr) (excessArgs : Array Expr) :
    VCGenM SolveResult := do
  let rhs ← betaRevS epost excessArgs.reverse
  let newTarget ← mkAppNS relConst #[α, inst, pre, rhs]
  let goal ← goal.replaceTargetDefEq newTarget
  return .goals scope [goal]

/-- Strategy 6: unfold a concrete exception-postcondition component into an ordinary VC. -/
def tryEPostVC (scope : VCGen.Scope) (target α inst pre rhs : Expr) :
    VCGenM (Option SolveResult) :=
  rhs.withApp fun head args => do
    unless head.isConstOf ``EPost.cons.head do return none
    let some epostArg := args[2]? | return none
    let (epostTarget, index) := peelEPostTailChain epostArg
    let some epost ← mkEPostAtIndex epostTarget index | return none
    return some (← unfoldEPostVC goal scope target.getAppFn α inst pre epost (args.extract 3 args.size))

def replaceProgDefEq (target : Expr) (info : WPInfo) (prog : Expr) :
    VCGenM MVarId := do
  let wp ← mkAppNS info.head <| info.args.set! 8 prog
  let rhs ← mkAppNS wp info.excessArgs
  let relArgs := target.getAppArgs
  let newTarget ← mkAppNS target.getAppFn (relArgs.set! (relArgs.size - 1) rhs)
  goal.replaceTargetDefEq newTarget

def substOrHoistLet (scope : VCGen.Scope) (target : Expr) (info : WPInfo)
    (name : Name) (type val body : Expr) (nondep : Bool)
    (appArgs : Array Expr) : VCGenM SolveResult := do
  throwIfUnsupportedJP name val
  if val.isDuplicable then
    let body' ← Sym.instantiateRevBetaS body #[val]
    let prog ← mkAppRevS body' appArgs
    return .goals scope [← replaceProgDefEq goal target info prog]
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
    return .goals scope [goal]

/-- Strategy 7a: hoist or zeta-substitute a `let` from the program head. -/
def tryWPLet (scope : VCGen.Scope) (target : Expr) (info : WPInfo) :
    VCGenM (Option SolveResult) := do
  let .letE name type val body nondep := info.prog.getAppFn | return none
  some <$> substOrHoistLet goal scope target info name type val body nondep info.prog.getAppRevArgs

def splitMatch (scope : VCGen.Scope) (target : Expr) (info : WPInfo) (splitInfo : Do.SplitInfo) :
    VCGenM SolveResult := do
  -- For matchers, try reduceRecMatcher? to reduce known discriminants.
  if let .matcher .. := splitInfo then
    if let some prog ← reduceRecMatcher? info.prog then
      let prog ← shareCommon prog
      return .goals scope [← replaceProgDefEq goal target info prog]
  let rule ← mkBackwardRuleForSplitCached splitInfo info
  let .goals goals ← rule.applyChecked goal
    | throwError "Failed to applyChecked split rule for {indentExpr info.prog}"
  let goals ← goals.mapM fun g => do
    let .goal _ g ← Sym.intros g
      | throwError "Failed to intro split parameters"
    return g
  return .goals scope goals

/-- Strategy 7b: split an `ite`/`dite`/match program, or iota-reduce a concrete matcher. -/
def tryWPMatch (scope : VCGen.Scope) (target : Expr) (info : WPInfo) :
    VCGenM (Option SolveResult) := do
  let some splitInfo ← Do.getSplitInfo? info.prog | return none
  some <$> splitMatch goal scope target info splitInfo

def substFvarZeta (scope : VCGen.Scope) (target : Expr) (info : WPInfo) (val : Expr)
    (appArgs : Array Expr) : VCGenM SolveResult := do
  let prog ← shareCommon <| val.betaRev appArgs
  return .goals scope [← replaceProgDefEq goal target info prog]

/-- Strategy 7c: zeta-unfold a local let-bound fvar used as the program head. -/
def tryWPFVarZeta (scope : VCGen.Scope) (target : Expr) (info : WPInfo) :
    VCGenM (Option SolveResult) := do
  let f := info.prog.getAppFn
  let some val ← f.fvarId?.bindM (·.getValue?) | return none
  some <$> substFvarZeta goal scope target info val info.prog.getAppRevArgs

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

/-- Strategy 7d: apply a registered spec for a constant or local function program head. -/
def tryWPCallSpec (scope : VCGen.Scope) (target : Expr) (info : WPInfo) :
    VCGenM (Option SolveResult) := do
  let f := info.prog.getAppFn
  unless f.isConst || f.isFVar do return none
  some <$> applySpec goal scope target info

/-- Extract the weakest-precondition metadata from the RHS of a lattice entailment. -/
def getWPInfo? (rhs : Expr) : VCGenM (Option WPInfo) :=
  rhs.withApp fun head args => do
    unless (head.isConstOf ``wp && args.size >= 11) do return none
    return some { head, args := args.take 11, excessArgs := args.drop 11 }

/-- Strategy 7: decompose a `wp` RHS by trying each program-shape strategy in order. -/
def tryWP (scope : VCGen.Scope) (target rhs : Expr) : VCGenM (Option SolveResult) := do
  let some info ← getWPInfo? rhs | return none
  let scope ← scope.collectLocalSpecs goal
  burnOne
  if let some res ← tryWPLet goal scope target info then return some res
  if let some res ← tryWPMatch goal scope target info then return some res
  if let some res ← tryWPFVarZeta goal scope target info then return some res
  if let some res ← tryWPCallSpec goal scope target info then return some res
  return some (.noStrategyForProgram info.prog)

/-- Strategy 8: close an already-reflexive lattice entailment. -/
def tryRfl (scope : VCGen.Scope) (target : Expr) : VCGenM (Option SolveResult) := do
  let_expr PartialOrder.rel α inst pre rhs := target
    | return none
  unless ← withAssignableSyntheticOpaque <| isDefEqS pre rhs do
    return none
  let refl := mkConst ``PartialOrder.rel_refl target.getAppFn.constLevels!
  let proof := mkAppN refl #[α, inst, pre]
  goal.assign proof
  return some (.goals scope [])

end Strategies

/--
The main VC generation step. Operates on one worklist goal and either decomposes it into
subgoals or reports why no strategy applies.

The function performs the following steps in order:

1. **Forall introduction**: introduce leading `∀` binders.
2. **Target-let handling**: zeta-substitute duplicable top-level lets, otherwise introduce them.
3. **Triple unfolding**: unfold `Triple` into the underlying lattice entailment.
4. **Precondition/state introduction**: introduce `⌜p⌝` preconditions, state arguments, or plain
   propositional preconditions from the left side of `⊑`.
5. **Lattice decomposition**: split supported lattice RHS connectives.
6. **EPost VC unfolding**: select a concrete exception postcondition component.
7. **WP decomposition**: try program-let hoisting, match splitting, fvar zeta, then spec lookup.
8. **Reflexivity**: close already-reflexive lattice entailments.
-/
def solve (scope : VCGen.Scope) (goal : MVarId) : VCGenM SolveResult := goal.withContext do
  let mut goal := goal
  let mut target ← goal.getType
  if target.hasExprMVar then
    target ← instantiateMVars target
    goal ← goal.replaceTargetDefEq target
  if let some res ← tryForallIntro goal scope target then return res
  if let some res ← tryTargetLetIntro goal scope target then return res
  if let some res ← tryTripleUnfold goal scope target then return res

  let_expr PartialOrder.rel α inst pre rhs := target | return .noEntailment target
  let preIsTop := pre.isAppOf ``Lean.Order.top && pre.getAppNumArgs = 2

  if let some res ← tryOfPropPreIntro goal scope pre then return res
  if let some res ← tryStateArgIntro goal scope α preIsTop then return res
  if let some res ← tryPropPreIntro goal scope α preIsTop then return res
  if let some res ← tryLattice goal scope target rhs preIsTop then return res
  if let some res ← tryEPostVC goal scope target α inst pre rhs then return res
  if let some res ← tryWP goal scope target rhs then return res
  if let some res ← tryRfl goal scope target then return res
  return .noProgramOrLatticeFoundInTarget target
