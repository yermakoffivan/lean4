/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Meta
public import Loom.Tactic.Solve
public import Lean.Meta.Sym.Grind

open Lean Meta Elab Tactic Sym
open Lean.Elab.Tactic.Do.SpecAttr
open Std.Internal.Do Lean.Order
open Grind (GrindM)

public section

namespace Loom.VCGen

/-!
Worklist driver for `mvcgen'`. Wraps `solve` with a queue of pending goals,
emits VCs (or invariant holes) for those `solve` cannot decompose further,
and runs the user-configured `preTac` on each emitted VC.
-/

/--
Runs the `dischargeTactic` on the VC:
- `.grind`: tries to solve the VC using the accumulated `Grind.Goal` state via `Grind.Goal.grind`.
  Reports failure via `Lean.logError` unless `silent` is set.
- `.tactic`: runs the user-provided tactic on the VC, potentially emitting multiple subgoals.
- `.none`: returns the VC as-is.
-/
def dischargeTactic.run (goal : Grind.Goal) : dischargeTactic → VCGenM (List MVarId)
  | .none => return [goal.mvarId]
  | .grind silent => do
    let savedMCtx ← getMCtx
    let goal ← goal.internalizeAll
    match ← goal.grind with
    | .closed => return []
    | .failed .. =>
      setMCtx savedMCtx
      unless silent do
        goal.mvarId.withContext do
          Lean.logError m!"`grind` failed on goal:{indentD (MessageData.ofGoal goal.mvarId)}"
        modify fun s => { s with dischTacFailed := true }
      return [goal.mvarId]
  | .tactic tac => do
    let (goals, _) ← Lean.Elab.runTactic goal.mvarId tac {} {}
    pure goals

/--
Try to elaborate the user's invariant alt for invariant number `n` inline,
discharging `mv` if successful. Looks up `Context.invariantAlts[n]?` (pre-parsed
in `Frontend`) and dispatches to `exact $rhs` for bullet form or
`rename_i $args*; exact $rhs` for labelled form. Returns whether elaboration
succeeded. Numbering is 1-based; out-of-order labelled forms (e.g. `| inv2 => …`
before `| inv1 => …`) are supported because the map is keyed by parsed number,
not position.
-/
private def tryInlineInvariant (n : Nat) (mv : MVarId) : VCGenM Bool := do
  let some alt := (← read).invariantAlts[n]? | return false
  try
    let tac ← match alt with
      | `(Lean.Parser.Tactic.invariantDotAlt| · $rhs) => `(tactic| exact $rhs)
      | `(Lean.Parser.Tactic.invariantCaseAlt| | $_tag $args* => $rhs) =>
          `(tactic| (rename_i $args*; exact $rhs))
      | _ => return false
    let _ ← Lean.Elab.runTactic mv tac {} {}
    -- The tactic runs without throwing even when it fails to close the goal;
    -- check explicitly that the MVar got assigned.
    if ← mv.isAssigned then
      -- Preprocess the assignment to `mv` because it will interact with the `SymM` world
      if let some val ← getExprMVarAssignment? mv then
        let val ← unfoldReducible val
        let val ← shareCommon val
        mv.assign val
      return true
    else
      return false
  catch _ =>
    return false

/-- Pull invariant subgoals out of `subgoals` and handle them eagerly: register
each in `State.invariants` (1-based stable index) and try to inline-elaborate
its matching user alt. Returns the remaining non-invariant subgoals for `work`
to enqueue. Eager handling here ensures dependent VCs see `?inv` assigned by
the time they reach `emitVC`/`preTac`. -/
private def handleInvariantSubgoals (subgoals : List MVarId) : VCGenM (List MVarId) := do
  let env ← getEnv
  let mut others := []
  for sg in subgoals do
    if isSpecInvariantType env (← sg.getType) then
      let n := (← get).invariants.size + 1
      modify fun s => { s with invariants := s.invariants.push sg }
      if ← tryInlineInvariant n sg then
        modify fun s => { s with inlineHandledInvariants := s.inlineHandledInvariants.insert n }
      else
        sg.setKind .syntheticOpaque
    else
      others := sg :: others
  return others

private structure WorkItem where
  goal : Grind.Goal
  scope : VCGen.Scope

/--
Called when decomposing the goal further did not succeed; in this case we emit a VC for the goal.
Invariant subgoals are handled separately by `handleInvariantSubgoals` directly inside `work`,
so they never reach this path.
If the goal is `(⊤ : Prop) ⊑ x`, first eliminate the `⊤ ⊑` wrapper.
-/
def emitVC (goal : Grind.Goal) : VCGenM Unit := do
  let mut goal := goal
  let ty ← goal.mvarId.getType
  if let some (.sort .zero, _, pre, _) := ty.app4? ``PartialOrder.rel then
    if pre.isAppOf ``Lean.Order.top then
      let rule := (← read).elimPreRule
      let .goals [goal'] ← goal.apply rule
        | throwError "Failed to apply elim_pre rule"
      goal := goal'
  if (← read).trivial then
    let some goal' ← repeatAndRfl goal.mvarId | return
    goal := { goal with mvarId := goal' }
  let goals ← (← read).disch.run goal
  for g in goals do g.setKind .syntheticOpaque
  modify fun s => { s with vcs := s.vcs ++ goals }

/-- Main work loop: decompose the goal repeatedly. -/
def work (scope : VCGen.Scope) (goal : MVarId) : VCGenM Unit := do
  let goal ← Grind.mkGoal goal
  let mut worklist := (Std.Queue.empty : Std.Queue WorkItem).enqueue { goal, scope }
  repeat do
    let some (item, worklist') := worklist.dequeue? | break
    worklist := worklist'
    let goal := item.goal
    let res ← Loom.VCGen.solve item.scope goal.mvarId
    match res with
    | .noEntailment .. | .noProgramOrLatticeFoundInTarget .. =>
        emitVC goal
    | .noSpecFoundForProgram prog monad thms =>
      if (← read).errorOnMissingSpec then goal.mvarId.withContext do
        if thms.isEmpty then
          throwError "No spec found for program {prog}."
        else
          throwError "No spec matching the monad {monad} found for program {prog}. Candidates were {thms.map (·.proof)}."
      else
        emitVC goal
    | .noStrategyForProgram prog =>
      throwError "Did not know how to decompose weakest precondition for {prog}"
    | .goals scope subgoals =>
      -- if we have multiple subgoals, before running the VCGen
      -- we need to share the grind context first.
      let subgoals ← handleInvariantSubgoals subgoals
      let mut grindSharedGoal := goal
      if (← read).disch.isGrind && subgoals.length > 1 then
        grindSharedGoal ← goal.internalizeAll
      worklist := worklist.enqueueAll <| subgoals.map fun mv =>
        { goal := { grindSharedGoal with mvarId := mv }, scope }

structure Result where
  /-- All invariant goals emitted during VC generation, in emit order. The MVarId at
  index `i` carries tag `inv{i+1}`, so callers can treat the array index as the
  invariant number. Some entries may already be assigned (inline-elaborated by
  `Driver.emitVC`); the caller is responsible for filtering before discharging. -/
  invariants : Array MVarId
  /-- Unassigned VCs. -/
  vcs : Array MVarId
  /-- Invariant numbers handled inline by `Driver.emitVC`. Used by `Frontend` to
  avoid spurious "alt does not match any invariant" warnings for inline-consumed
  alts. -/
  inlineHandledInvariants : Std.HashSet Nat := {}
  /-- True iff some non-silent pre-tactic failed during VC generation. -/
  dischTacFailed : Bool := false


/-- Generate VCs for a goal of the form `Triple pre e post epost`, keeping subgoals in `⊑` form. -/
partial def main (goal : MVarId) (ctx : VCGen.Context) (scope : VCGen.Scope)
    (stepLimit? : Option Nat := none)
  : GrindM Result := do
  let initState : State := { fuel := match stepLimit? with | some n => .limited n | none => .unlimited }
  let ((), state) ← StateRefT'.run (ReaderT.run (work scope goal) ctx) initState
  for h : idx in [:state.invariants.size] do
    let mv := state.invariants[idx]
    mv.setTag (Name.mkSimple ("inv" ++ toString (idx + 1)))
  for h : idx in [:state.vcs.size] do
    let mv := state.vcs[idx]
    mv.setTag (Name.mkSimple ("vc" ++ toString (idx + 1)) ++ (← mv.getTag).eraseMacroScopes)
  let vcs ← state.vcs.filterM (not <$> ·.isAssigned)
  return {
    invariants := state.invariants,
    vcs := state.vcs,
    inlineHandledInvariants := state.inlineHandledInvariants,
    dischTacFailed := state.dischTacFailed }
