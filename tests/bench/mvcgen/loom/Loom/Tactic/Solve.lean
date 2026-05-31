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
  | Let (name : Name) (type val body : Expr) (nondep : Bool) (appArgs : Array Expr)
  /-- The program is `ite`/`dite`/`match`. -/
  | Match (splitInfo : Do.SplitInfo)
  /-- The program head is a local let-bound fvar that can be zeta-expanded. -/
  | FVarZeta (val : Expr) (appArgs : Array Expr)
  /-- The program is headed by a call to a function. -/
  | Call
  /-- The program has no supported decomposition strategy. -/
  | Unknown

/-- High-level classifier for a goal. -/
inductive GoalKind where
  /-- Target is a forall and should be introduced. -/
  | Forall
  /-- Target is a let and should be zeta-substituted or introduced. -/
  | Let (val body : Expr)
  /-- Target is a `Triple` and should be unfolded to `⊑ wp`. -/
  | Triple
  /-- Target is a relation over a function-valued predicate type. -/
  | StateArgIntro (preIsTop : Bool) (α : Expr)
  /-- RHS is a concrete EPost component; stores selected component and its excess args. -/
  | EPostVC (relConst : Expr) (α inst : Expr) (pre : Expr) (epost : Expr) (excessArgs : Array Expr)
  /-- RHS is a lattice connective application (`meet`/`himp`/`pure`) with optional excess args.
      `preIsTop` is `true` when the precondition is `⊤`, selecting a `⊤`-specialized split lemma. -/
  | Lattice (lop : LogicOp) (as : Array Expr) (excessArgs : Array Expr)
      (resultType? : Option Expr := none) (preIsTop : Bool := false)
  /-- RHS is a WP application, with a separate classification for the program. -/
  | WP (info : WPInfo) (prog : ProgKind)
  /-- Introduce a non-trivial precondition from the left side of `⊑`.
      The flag is `true` when the precondition is `CompleteLattice.ofProp`. -/
  | IntroPre (isOfProp : Bool)
  /-- RHS is neither a recognized WP nor a recognized lattice connective. -/
  | Unknown

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

/-! ## Core logic -/

/-- Classify the program inside a `pre ⊑ @wp ... e post epost` goal. -/
def classifyProg (e : Expr) : VCGenM ProgKind := do
  let f := e.getAppFn
  if let .letE name type val body nondep := f then
    return .Let name type val body nondep e.getAppRevArgs
  else if let some info ← Do.getSplitInfo? e then
    return .Match info
  else if let some val ← f.fvarId?.bindM (·.getValue?) then
    return .FVarZeta val e.getAppRevArgs
  else if f.isConst || f.isFVar then
    return .Call
  return .Unknown

/-- Classify the RHS of a `pre ⊑ rhs` goal. If the target is not in `⊑` form,
    falls back to classifying the target directly. -/
def classifyGoal (target : Expr) : VCGenM GoalKind := do
  if target.isForall then return .Forall
  if let .letE _ _ val body _ := target then return .Let val body
  if target.isAppOf ``Triple then return .Triple
  match_expr target with
  | PartialOrder.rel α inst pre rhs =>

    let preIsTop := pre.isAppOf ``Lean.Order.top && pre.getAppNumArgs = 2
    -- An `ofProp` precondition is introduced directly: `ofProp_pre_intro'` holds for any
    -- `CompleteLattice` (including function lattices), so route it to `IntroPre` *before* state-arg
    -- peeling. Peeling first would leave `⌜p⌝` applied to excess state args, a shape the intro rule
    -- cannot match.
    if pre.isAppOf ``CompleteLattice.ofProp then
      return .IntroPre (isOfProp := true)
    if α.isForall then return .StateArgIntro preIsTop α
    if !preIsTop && α.isProp then
      return .IntroPre (isOfProp := false)

    rhs.withApp fun head args => do
      match_expr head with
      | meet =>
        let excessArgs := args.drop 4
        let as := args.extract 2 4
        return .Lattice .And as excessArgs (preIsTop := preIsTop)
      | himp =>
        let excessArgs := args.drop 4
        let as := args.extract 2 4
        return .Lattice .Imp as excessArgs (preIsTop := preIsTop)
      | CompleteLattice.ofProp =>
        /- This will drop `pre` in `⊢ pre ⊑ ⌜p⌝`, turning the goal into `⊢ p`.
          If `pre` is not `⊤`, we might loose information and goal might become unprovable.
          In practive it might occur if our goal is a `⊓` of `ofProp`'s and other assertions, or
          if the goal was not fully reduced to `ofProp` before.  -/
        unless preIsTop do return .Unknown
        let excessArgs := args.drop 3
        let as := args.extract 2 3
        return .Lattice .Pure as excessArgs (resultType? := args[0]!) (preIsTop := preIsTop)
      | top =>
        -- `pre ⊑ ⊤` closes via `le_top` (no premise). `top` takes (type, inst); the rest are
        -- excess state args, and `top` has no operands (`as := #[]`).
        let excessArgs := args.drop 2
        return .Lattice .Top #[] excessArgs (resultType? := args[0]!) (preIsTop := preIsTop)
      | EPost.cons.head =>
        let some epostArg := args[2]? | return .Unknown
        let (epostTarget, index) := peelEPostTailChain epostArg
        let some epost ← mkEPostAtIndex epostTarget index | return .Unknown
        return .EPostVC target.getAppFn α inst pre epost (args.extract 3 args.size)
      | wp =>
        unless args.size >= 11 do return .Unknown
        let (args, excessArgs, prog) := (args.take 11, args.drop 11, args[8]!)
        .WP { head, args, excessArgs } <$> classifyProg prog
      | _ => return .Unknown
  | _ => return .Unknown

section Strategies

variable (goal : MVarId)

def introForall : VCGenM SolveResult := do
  match ← VCGenM.introsAndSimp goal with
  | .closed => return .goals []
  | .goal goal => return .goals [goal]
  | .failed => throwError "Failed to intro forall target"

def throwIfUnsupportedJP (name : Name) (val : Expr) : VCGenM Unit := do
  if (← read).useJP && Lean.Elab.Tactic.Do.isJP name && val.isLambda then
    throwError "mvcgen': shared-continuation handling for `__do_jp` is not yet \
      implemented. Detection point reached at {name}; the upstream \
      `Lean.Elab.Tactic.Do.onJoinPoint` (`src/Lean/Elab/Tactic/Do/VCGen.lean:215`) \
      needs to be ported to the worklist style. Drop `(jp := true)` to fall back \
      to the default zeta-unfold behaviour."

def introOrSubstTargetLet (val body : Expr) : VCGenM SolveResult := do
  -- throwIfUnsupportedJP name val
  if val.isDuplicable then
    let target ← Sym.instantiateRevBetaS body #[val]
    return .goals [← goal.replaceTargetDefEq target]
  else
    let .goal _ goal ← Sym.intros goal
      | throwError "Failed to intro let target"
    return .goals [goal]

def unfoldTriple : VCGenM SolveResult := do
  let .goals [goal] ← (← read).introRules.tripleIntro.applyChecked goal
    | throwError "Failed to unfold Triple target"
  return .goals [goal]

/-- Count the leading (syntactic) `∀`/`→` binders of a function-valued lattice carrier
    `σ₁ → … → σₙ → Base` — i.e. the number of excess state arguments to introduce. -/
private partial def numLeadingForalls : Expr → Nat
  | .forallE _ _ b _ => numLeadingForalls b.consumeMData + 1
  | _ => 0

def introStateArg (preIsTop : Bool) (α : Expr) : VCGenM SolveResult := do
  let ctx ← read
  let rule := if preIsTop then
    ctx.introRules.topStateArgIntro else ctx.introRules.stateArgIntro
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
  return .goals [goal]

-- TODO: change
def introPre (ofProp : Bool) : VCGenM SolveResult := do
  let goal ← introMeetPre (← read).introRules ofProp goal
  return .goals [goal]

def applyLattice (target : Expr) (lop : LogicOp) (as excessArgs : Array Expr)
    (resultType? : Option Expr) (preIsTop : Bool) : VCGenM SolveResult := do
  let rule ← mkBackwardRuleForLogicCached lop as excessArgs resultType? preIsTop
  let .goals goals ← rule.applyChecked goal
    | throwError "Failed to applyChecked logic rule at {indentExpr target}"
  return .goals goals

def unfoldEPostVC (relConst α inst pre epost : Expr) (excessArgs : Array Expr) :
    VCGenM SolveResult := do
  let rhs ← betaRevS epost excessArgs.reverse
  let newTarget ← mkAppNS relConst #[α, inst, pre, rhs]
  let goal ← goal.replaceTargetDefEq newTarget
  return .goals [goal]

def replaceProgDefEq (target : Expr) (info : WPInfo) (prog : Expr) :
    VCGenM MVarId := do
  let wp ← mkAppNS info.head <| info.args.set! 8 prog
  let rhs ← mkAppNS wp info.excessArgs
  let relArgs := target.getAppArgs
  let newTarget ← mkAppNS target.getAppFn (relArgs.set! (relArgs.size - 1) rhs)
  goal.replaceTargetDefEq newTarget

def substOrHoistLet (target : Expr) (info : WPInfo)
    (name : Name) (type val body : Expr) (nondep : Bool)
    (appArgs : Array Expr) : VCGenM SolveResult := do
  throwIfUnsupportedJP name val
  if val.isDuplicable then
    let body' ← Sym.instantiateRevBetaS body #[val]
    let prog ← mkAppRevS body' appArgs
    return .goals [← replaceProgDefEq goal target info prog]
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
    return .goals [goal]

def splitMatch (target : Expr) (info : WPInfo) (splitInfo : Do.SplitInfo) :
    VCGenM SolveResult := do
  -- For matchers, try reduceRecMatcher? to reduce known discriminants.
  if let .matcher .. := splitInfo then
    if let some prog ← reduceRecMatcher? info.prog then
      let prog ← shareCommon prog
      return .goals [← replaceProgDefEq goal target info prog]
  let rule ← mkBackwardRuleForSplitCached splitInfo info
  let .goals goals ← rule.applyChecked goal
    | throwError "Failed to applyChecked split rule for {indentExpr info.prog}"
  let goals ← goals.mapM fun g => do
    let .goal _ g ← Sym.intros g
      | throwError "Failed to intro split parameters"
    return g
  return .goals goals

def substFvarZeta (target : Expr) (info : WPInfo) (val : Expr)
    (appArgs : Array Expr) : VCGenM SolveResult := do
  let prog ← shareCommon <| val.betaRev appArgs
  return .goals [← replaceProgDefEq goal target info prog]

def applySpec (target : Expr) (info : WPInfo) : VCGenM SolveResult := do
  match ← (← read).specThms.findSpecs info.prog with
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
  return .goals goals

def tryRfl (target : Expr) : VCGenM SolveResult := do
  let_expr PartialOrder.rel α inst pre rhs := target
    | return .noProgramOrLatticeFoundInTarget target
  unless ← withAssignableSyntheticOpaque <| isDefEqS pre rhs do
    return .noProgramOrLatticeFoundInTarget target
  let refl := mkConst ``PartialOrder.rel_refl target.getAppFn.constLevels!
  let proof := mkAppN refl #[α, inst, pre]
  goal.assign proof
  return .goals []

end Strategies

/-- Main solve step for a goal of the form `pre ⊑ rhs`. -/
def solve (goal : MVarId) : VCGenM SolveResult := goal.withContext do
  let mut goal := goal
  let mut target ← goal.getType
  if target.hasExprMVar then
    target ← instantiateMVars target
    goal ← goal.replaceTargetDefEq target
  let kind ← classifyGoal target
  match kind with
  | .Forall                           => introForall goal
  | .Let val body                     => introOrSubstTargetLet goal val body
  | .Triple                           => unfoldTriple goal
  | .StateArgIntro preIsTop α         => introStateArg goal preIsTop α
  | .IntroPre ofProp                  => introPre goal ofProp
  | .Lattice lop as eas resTy? preIsTop => applyLattice goal target lop as eas resTy? preIsTop
  | .EPostVC rel α inst pre epost eas => unfoldEPostVC goal rel α inst pre epost eas
  | .WP info prog =>
    burnOne
    match prog with
    | .Let name type val body nondep appArgs => substOrHoistLet goal target info name type val body nondep appArgs
    | .Match splitInfo      => splitMatch goal target info splitInfo
    | .FVarZeta val appArgs => substFvarZeta goal target info val appArgs
    | .Call                 => applySpec goal target info
    | .Unknown              => return .noStrategyForProgram info.prog
  | .Unknown => tryRfl goal target
