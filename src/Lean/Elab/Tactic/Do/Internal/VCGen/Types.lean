/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
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
public import Lean.Elab.Tactic.Do.VCGen.Basic
public import Lean.Meta.Sym.Simp.SimpM
public import Lean.Meta.Sym.Apply
public import Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB

open Lean Elab Meta Sym Grind

public section

namespace Lean.Elab.Tactic.Do.Internal.VCGen

/--
Common metadata for a goal whose right-hand side is a weakest-precondition application.
-/
structure WPInfo where
  /-- The `wp` function head, separated from its explicit core arguments. -/
  head : Expr
  /-- For the `wp` application
    ```
    pre ⊑ @wp prog m Pred EPred monadInst instAL instEAL instWP α prog post epost s₁ ... sₙ
    ```
    stores the ordered core arguments:
    `#[m, Pred, EPred, monadInst, instAL, instEAL, instWP, α, prog, post, epost]` -/
  args : Array Expr
  /-- Extra arguments applied after `wp ... prog post epost`, usually concrete state arguments. -/
  excessArgs : Array Expr

namespace WPInfo

variable (info : WPInfo)

/-- Monad type constructor argument of `wp`. -/
def m      : Expr := info.args[0]!
/-- Predicate/lattice type argument of `wp`. -/
def Pred   : Expr := info.args[1]!
/-- Exception postcondition type argument of `wp`. -/
def EPred  : Expr := info.args[2]!
/-- `WPMonad` instance argument of `wp`. -/
def instWP : Expr := info.args[6]!
/-- Program expression classified by VCGen. -/
def prog   : Expr := info.args[8]!

end WPInfo

end Lean.Elab.Tactic.Do.Internal.VCGen

namespace Lean.Elab.Tactic.Do.Internal.VCGen.VCGen

initialize registerTraceClass `Lean.Elab.Tactic.Do.Internal.VCGen.vcgen
initialize registerTraceClass `Lean.Elab.Tactic.Do.Internal.VCGen.vcgen.simp

/-- Discharge tactic to try on each emitted VC before returning it to the user. -/
inductive dischargeTactic where
  /-- No discharge tactic; VCs are returned as-is. -/
  | none
  /-- Use grind with the given hypothesis simplification methods. -/
  | grind (silent : Bool := false)
  /-- Use a user-provided tactic syntax. -/
  | tactic (tactic : Syntax)
  deriving Repr

/-- Check if the discharge tactic is grind. -/
def dischargeTactic.isGrind : dischargeTactic → Bool
  | .grind => true
  | _      => false

/-- Run the discharge tactic on the goal. -/
def dischargeTactic.eval (goal : MVarId) : VCGen.dischargeTactic → MetaM (List MVarId)
  | .none => return [goal]
  | .grind _ => throwError "`grind` discharge should be handled by `emitVC`"
  | .tactic tac => do
    let (goals, _) ← runTactic goal tac
    return goals

/-- Cached backward rules for intro procedures. -/
structure IntroRules where
  /-- Backward rule for intro procedure of `Triple.intro`. -/
  tripleIntro     : BackwardRule
  /-- Backward rule for intro procedure of `state_arg_intro'`. -/
  stateArgIntro   : BackwardRule
  /-- Backward rule for intro procedure of `top_state_arg_intro'`. -/
  topStateArgIntro : BackwardRule
  /-- Backward rule for intro procedure of `prop_pre_intro`. -/
  propPreIntro    : BackwardRule
  /-- Backward rule for intro procedure of `ofProp_pre_intro'`. -/
  ofPropPreIntro  : BackwardRule

/-! ## VCGen monad and caching -/

structure Context where
  /-- Cached backward rules for intro procedures. -/
  introRules   : IntroRules
  /-- Backward rule for `prop_pre_elim`. -/
  elimPreRule  : BackwardRule
  /-- Backward rule for `And.intro`. -/
  andIntroRule : BackwardRule
  /-- User-customizable simp methods used to pre-simplify hypotheses and emitted VCs. -/
  simpMethods  : Option Sym.Simp.Methods := none
  /-- Discharge tactic to try on each emitted VC before returning it to the user. -/
  disch        : dischargeTactic := .none
  /-- The `trivial` config option: when `true` (default), `Driver.emitVC` runs
  `repeatAndRfl` to collapse trivial `And.intro` chains; when `false`, the goal is
  emitted as-is. -/
  trivial : Bool := true
  /-- The `assumption` config option: when `true` (default), `Driver.emitVC` runs
  `Sym.assumption` to close goals that can be solved by an assumption.
  If both `trivial` and `assumption` are `true`, then `Sym.assumption` runs on
  `repeatAndRfl` leafs. -/
  assumption : Bool := false
  /-- The `jp` config option: when `true`, `tryLetIntro` recognises `__do_jp` lets
  whose body is a splitter and sets up shared-continuation handling instead of
  zeta-unfolding. When `false` (default, matching original `mvcgen`), every call
  site of the JP zeta-unfolds, leading to exponential blow-up on nested splits. -/
  useJP : Bool := false
  /-- The `errorOnMissingSpec` config option: when `true` (default), `Driver.work`
  raises a hard error when `solve` returns `.noSpecFoundForProgram`. When `false`,
  the goal is emitted as an unsolved VC for the user to discharge — useful with
  `mvcgen' [-some_spec]` patterns where the user knows the spec is intentionally
  removed and wants to handle the residual goal by hand. -/
  errorOnMissingSpec : Bool := true -- TODO: implement
  /-- The `debug` config option: when `true`, `tryApplyRule` retries failed
  `BackwardRule.apply` calls after `unfoldReducible` and reports an error when the
  retry succeeds, pinpointing missing normalization steps in `mvcgen'`. -/
  debug : Bool := false -- TODO: implement
  /-- Pre-parsed `invariants`/`invariants?` alternatives, indexed by 1-based invariant
  number. Bullet form maps positions to entries (`bullet n+1 → alt`); labelled form maps
  the parsed `inv<n>` numbers (out-of-order labels are supported). Empty when no
  `invariants` clause is provided or in `invariants?` (suggest) mode (handled separately). -/
  invariantAlts : Std.HashMap Nat Syntax := {} -- TODO: implement
  /-- Names supplied via the `lmvcgen (names := [...])` option, used positionally to name the
  introduced excess/state arguments (state arg `i` ← `stateArgNames[i]?`). Where no entry applies,
  the quantifier/lemma binder name is kept. `tactic.hygienic` decides accessibility. -/
  stateArgNames : Array Name := #[]

structure Scope where
  /-- Spec database in scope: globals plus locals from in-scope hypotheses. -/
  specs : SpecTheoremsNew
  /-- Index of the next local declaration to consider for local specs. -/
  nextDeclIdx : Nat := 0
  deriving Inhabited

structure State where
  /--
  A cache mapping registered SpecThms to their backward rule to apply.
  The particular rule depends on the theorem name, the monad and the number of excess state
  arguments that the weakest precondition target is applied to.
  -/
  specBackwardRuleCache  : Std.HashMap (Name × Expr × Nat) BackwardRule := {}
  /--
  A cache mapping matchers to their splitting backward rule to apply.
  The particular rule depends on the matcher name, the monad and the number of excess state
  arguments that the weakest precondition target is applied to.
  -/
  splitBackwardRuleCache : Std.HashMap (Name × Expr × Nat) BackwardRule := {}
  /--
  A cache mapping logic rules to their backward rule to apply.
  The particular rule depends on the rule name, the monad, the number of excess state
  arguments that the weakest precondition target is applied to, and whether the precondition
  is `⊤` (which selects a `⊤`-specialized split lemma).
  -/
  logicBackwardRuleCache : Std.HashMap (Name × Array Expr × Nat × Bool) BackwardRule := {}
  /--
  Holes of type `Invariant` that have been generated so far.
  -/
  invariants : Array MVarId := #[]
  /--
  The verification conditions that have been generated so far.
  -/
  vcs : Array MVarId := #[]
  /--
  Persistent cache for the `Sym.Simp` simplifier used to pre-simplify hypotheses
  before grind internalization. Threading this cache across VCGen iterations avoids
  re-simplifying shared subexpressions (e.g., `s + 1 + 1 + ...` chains).
  -/
  simpState              : Sym.Simp.State := {}
  /-- TDOD: implement and update comment -/
  jps : FVarIdMap Tactic.Do.JumpSiteInfo := {}
  /--
  Remaining VC-generation steps. Initialized from `Context.config.stepLimit` (or
  `.unlimited` when no limit is set). Decremented at each successful program-shape
  step. When exhausted, `solve` short-circuits and emits the current goal as a VC.
  -/
  fuel : Lean.Elab.Tactic.Do.Fuel := .unlimited
  /--
  Set of invariant numbers that have been inline-elaborated by `Driver.emitVC` via
  `tryInlineInvariant`. The post-hoc invariant elaboration in `Frontend` consults
  this to know which user-provided alts have already been consumed (so it doesn't
  warn about them). -/
  inlineHandledInvariants : Std.HashSet Nat := {}
  /-- Set when a pre-tactic failed on some VC; `elabMVCGen'` throws if true. -/
  dischTacFailed : Bool := false

end VCGen

abbrev VCGenM := ReaderT VCGen.Context (StateRefT VCGen.State GrindM)

def VCGen.Scope.insertSpec (scope : VCGen.Scope) (thm : SpecTheoremNew) : VCGen.Scope :=
  { scope with specs := scope.specs.insert thm }

/-- Walk `goal`'s local context from `scope.nextDeclIdx` onward and register any
new spec-shaped hypotheses as local specs. -/
def VCGen.Scope.collectLocalSpecs (scope : VCGen.Scope) (goal : MVarId) : VCGenM VCGen.Scope :=
  goal.withContext do
    let lctx ← getLCtx
    if scope.nextDeclIdx == lctx.decls.size then return scope
    let scope ← lctx.foldlM (init := scope) (start := scope.nextDeclIdx) fun scope decl => do
      if decl.isAuxDecl then return scope
      if let some thm ← mkSpecTheoremNew (.local decl.fvarId) (eval_prio low) then
        return scope.insertSpec thm
      return scope
    return { scope with nextDeclIdx := lctx.decls.size }

/-- True iff fuel has been exhausted (`Fuel.limited 0`). -/
public def VCGen.outOfFuel : VCGenM Bool :=
  return match (← get).fuel with | .limited 0 => true | _ => false

/-- Decrement remaining fuel by one. No-op when fuel is `.unlimited` or already at zero. -/
public def VCGen.burnOne : VCGenM Unit :=
  modify fun s => { s with fuel := match s.fuel with
    | .limited (n+1) => .limited n
    | other => other }

end Lean.Elab.Tactic.Do.Internal.VCGen

end
