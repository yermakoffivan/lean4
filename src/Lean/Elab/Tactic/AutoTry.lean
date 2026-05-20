/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Joachim Breitner
-/
module

prelude
import Init.Try
import Lean.Linter.Basic
import Lean.Server.InfoUtils
import Lean.Elab.Tactic.Try
import Lean.Elab.Tactic.Meta
import Lean.Elab.BuiltinTerm

/-! # Auto-`try?`

After a command is elaborated, walk its info trees and run `try?` at positions of interest --
empty `by` blocks, terminal tactics that left goals unsolved, and `sorry` tactics -- to
surface suggestions for completing the proof. Each trigger is gated by its own option:
`autoTry.onEmptyBy`, `autoTry.onUnsolvedGoal`, `autoTry.onSorry`. The infotree walk is
attached to the linter hook (`addLinter`), but the feature is not a "linter" in the user-
facing sense; it just borrows that hook to find a convenient post-elaboration entry point.

Two heuristics decide when *not* to fire:

1. Tactic positions that were elaborated against more than one proof state are skipped:
   a single "Try this" suggestion can't replay against multiple goals. This catches the rhs
   of `<;>` (run once per subgoal via the `focus / all_goals` expansion), `repeat`/`repeat'`,
   `iterate`, and similar.

2. The whole hook stays silent on commands that logged any error other than an "unsolved
   goals" error. If the user is in the middle of fixing a broken proof we don't want to
   distract them with suggestions.
-/

namespace Lean.Elab.Tactic.AutoTry

open Lean Elab Term Tactic Command Try

/--
Run `try?` on empty `by` blocks (`by` followed by nothing) and report any suggestions. The
suggestion is anchored at the `by` keyword's position.
-/
register_builtin_option autoTry.onEmptyBy : Bool := {
  defValue := false
  descr := "after a command is elaborated, run `try?` on each empty `by` block and report \
    any suggestions"
}

/--
Run `try?` on each tactic that left goals unsolved. Fires for every such tactic in a `by`
sequence; in practice the suggestion at the terminal (rightmost) tactic is the relevant one.
-/
register_builtin_option autoTry.onUnsolvedGoal : Bool := {
  defValue := false
  descr := "after a command is elaborated, run `try?` on each tactic that left goals unsolved \
    and report any suggestions"
}

/--
Run `try?` on each `sorry` tactic and report any suggestions.
-/
register_builtin_option autoTry.onSorry : Bool := {
  defValue := false
  descr := "after a command is elaborated, run `try?` on each `sorry` tactic and report any \
    suggestions"
}

builtin_initialize registerTraceClass `autoTry

/--
Run a `MetaM` computation in the context saved in `ctx`, with the given `lctx` and `mctx`,
propagating any messages and traces produced back into the surrounding `CommandElabM` state.
The surrounding `CommandElabM` cancel token is forwarded so that long-running `try?` calls
get cancelled when the linter snapshot is cancelled.
-/
def runMetaMWithMessages (ctx : ContextInfo) (lctx : LocalContext)
    (mctx : MetavarContext) (x : MetaM α) : CommandElabM α := do
  let cmdCtx ← read
  let cmdOpts ← getOptions
  -- `try?` may create temporary auxiliary declarations during library search; running with
  -- a non-exporting environment keeps any such declarations from leaking out as exports.
  let env := ctx.env.setExporting false
  -- Merge `ctx.options` (frozen at the saved infotree point) on top of the surrounding
  -- `CommandElabM` options: file-/command-scope knobs from `cmdOpts` provide the base, and
  -- any `set_option ... in` applied at the saved infotree point wins where it disagrees.
  let mergedOpts := cmdOpts.mergeBy (fun _ _ v => v) ctx.options
  let core : CoreM α := Prod.fst <$> x.run { lctx } { mctx }
  let (res, newCoreState) ←
    (withOptions (fun _ => mergedOpts) core).toIO
      { currNamespace := ctx.currNamespace, openDecls := ctx.openDecls
        fileName := cmdCtx.fileName, fileMap := cmdCtx.fileMap
        cancelTk? := cmdCtx.cancelTk? }
      { env, ngen := ctx.ngen }
  modify fun s => { s with
    messages := s.messages ++ newCoreState.messages
    traceState.traces := s.traceState.traces ++ newCoreState.traceState.traces }
  return res

/--
Run `try?` against the first remaining goal in `goals`. `mctx` must be a metavariable context
in which `goal` is declared. `wrapWithBy` controls whether suggestions are wrapped in `by`
(term mode, used for empty-`by` triggers).
-/
def runTryOnGoals (ctx : ContextInfo) (mctx : MetavarContext)
    (goals : List MVarId) (tk : Syntax) (wrapWithBy : Bool := false) : CommandElabM Unit := do
  let some goal := goals.head? | return
  let some decl := mctx.decls.find? goal | return
  runMetaMWithMessages ctx decl.lctx mctx do
    try
      let tryStx ← if wrapWithBy then
        `(tactic| try? (wrapWithBy := true))
      else
        `(tactic| try?)
      withRef tk do
        discard <| Lean.Elab.runTactic goal tryStx
    catch e =>
      -- Re-raise control-flow exceptions (cancellation, max-recursion); only swallow
      -- ordinary `try?` failures, which are expected and just mean "no suggestion".
      if e.isInterrupt || e.isMaxRecDepth then throw e
      trace[autoTry] "try? raised: {e.toMessageData}"

def isSorryTactic (stx : Syntax) : Bool :=
  match stx.getKind with
  | `Lean.Parser.Tactic.tacticSorry | `Lean.Parser.Tactic.tacticAdmit => true
  | _ => false

/-- Tactic info nodes whose syntax kind is a sequencing/structural construct rather than a
real user-written tactic. We skip these when looking for "unsolved goal" positions. -/
def isStructuralTacticKind (kind : SyntaxNodeKind) : Bool :=
  match kind with
  | `Lean.Parser.Term.byTactic
  | `Lean.Parser.Tactic.tacticSeq
  | `Lean.Parser.Tactic.tacticSeq1Indented
  | `by => true
  | _ => false

/-- Which kind of auto-`try?` trigger this is. -/
inductive TriggerKind
  /-- An empty `by` block. Run `try?` on `goalsBefore` of the `byTactic`, with suggestions
  wrapped in `by` for term-mode insertion. -/
  | emptyBy
  /-- A `sorry` tactic. Run `try?` on `goalsBefore`. -/
  | sorryTactic
  /-- A non-structural tactic that left non-empty `goalsAfter`. Run `try?` on `goalsAfter`. -/
  | unsolvedGoal

/--
Collect candidate trigger points from the info tree. Each candidate carries its trigger
kind, context, the `TacticInfo` it was found at, and the syntax token to use as the
suggestion anchor.

Per-kind criteria are applied inline. Cross-kind filtering -- in particular suppressing
candidates that share a source position because the elaborator ran the syntax against
multiple proof states (rhs of `<;>`, body of `repeat`/`iterate`) -- is left to a separate
pass over the returned candidates.

Known blind spot: `repeat tac` where `tac` fails on the first attempt elaborates `tac`
exactly once, so the position-uniqueness check doesn't suppress it. The cost of the
false positive is judged acceptable.
-/
def collectTriggerPoints (opts : Options) (tree : InfoTree) :
    CommandElabM (Array (TriggerKind × ContextInfo × Info × Syntax)) :=
  tree.foldInfoM (init := #[]) fun ctx info acc => do
    match info with
    | .ofTacticInfo tacInfo =>
      let kind := tacInfo.stx.getKind
      let mut acc := acc
      let onEmpty := autoTry.onEmptyBy.get opts
      let onUnsolved := autoTry.onUnsolvedGoal.get opts
      let onSorry := autoTry.onSorry.get opts
      -- Only emit a candidate if the anchor syntax has a real source range; without one,
      -- the code action has no document range to apply against.
      let push (kind : TriggerKind) (anchor : Syntax) (acc : Array _) :=
        if anchor.getPos?.isSome then
          acc.push (kind, ctx, .ofTacticInfo tacInfo, anchor)
        else acc
      if onEmpty && kind == `Lean.Parser.Term.byTactic && isEmptyByBlock tacInfo.stx then
        acc := push .emptyBy tacInfo.stx[0] acc
      if onSorry && isSorryTactic tacInfo.stx then
        acc := push .sorryTactic tacInfo.stx acc
      -- Only trigger on a single remaining goal: with 2+ goals the user needs to
      -- shape the proof with `·`/`case` first, and a `try?` suggestion at the outer
      -- tactic would not be applicable as a single replacement.
      if onUnsolved && !isStructuralTacticKind kind && tacInfo.goalsAfter.length == 1 then
        acc := push .unsolvedGoal tacInfo.stx acc
      return acc
    | _ => return acc

/--
Drop candidates that share a source position with any other candidate. The elaborator
running the same syntax against multiple proof states (rhs of `<;>`, body of looping
combinators) produces multiple candidates at the same `pos`; a single "Try this"
suggestion can't be replayed against multiple goals, so we suppress all of them.
-/
def dropMultiElabCandidates
    (candidates : Array (TriggerKind × ContextInfo × Info × Syntax)) :
    Array (TriggerKind × ContextInfo × Info × Syntax) := Id.run do
  let mut counts : Std.HashMap String.Pos.Raw Nat := {}
  for (_, _, _, tk) in candidates do
    if let some p := tk.getPos? then
      counts := counts.alter p (fun n? => some (n?.getD 0 + 1))
  return candidates.filter fun (_, _, _, tk) =>
    match tk.getPos? with
    | some p => counts.getD p 0 == 1
    | none => true

/--
Returns `true` if the message log contains any error within `stxRange` that is *not* an
"unsolved goals" error. Used to skip the auto-`try?` hook on commands the user is in the
middle of fixing -- suggestions for the unsolved goal are not useful while other errors
need to be addressed first.
-/
def hasNonUnsolvedGoalError (stx : Syntax) : CommandElabM Bool := do
  let some range := stx.getRange? | return false
  let fileMap := (← read).fileMap
  let msgs := (← get).messages
  return msgs.toArray.any fun m =>
    let inRange := range.contains (fileMap.ofPosition m.pos) (includeStop := true)
    let isError := m.severity matches .error
    let isUnsolved := m.data.hasTag (· == `Tactic.unsolvedGoals)
    inRange && isError && !isUnsolved

/-- The auto-`try?` post-elaboration hook.

Plugged into the linter machinery (`addLinter`) because that's a convenient post-command-elab
entry point with infotree access. The feature itself is *not* a linter: it does not bail on
`messages.hasErrors`, since the triggers we care about (empty `by`, unsolved goals, `sorry`)
all produce errors or warnings of their own. -/
def autoTryHook : Linter where run := withSetOptionIn fun stx => do
  let opts ← getOptions
  let onEmpty := autoTry.onEmptyBy.get opts
  let onUnsolved := autoTry.onUnsolvedGoal.get opts
  let onSorry := autoTry.onSorry.get opts
  unless onEmpty || onUnsolved || onSorry do return
  if ← hasNonUnsolvedGoalError stx then
    trace[autoTry] "skipping: command has non-unsolved-goal errors"
    return
  trace[autoTry] "running: onEmpty={onEmpty} onUnsolved={onUnsolved} onSorry={onSorry}"
  let trees ← getInfoTrees
  for tree in trees do
    let candidates ← collectTriggerPoints opts tree
    let points := dropMultiElabCandidates candidates
    trace[autoTry] "trigger points: {points.size}"
    -- Dedupe by (trigger-kind, source-position) and by the goal mvar being considered.
    -- The position-dedupe handles overlapping triggers at the same site (e.g. an
    -- unsolved-goal tactic that's also a `sorry`). The goal-mvar dedupe handles nested
    -- tactics that share the same unsolved goal -- in `by first | skip | trivial`, both
    -- `first` and `skip` have the same `True`-typed mvar in `goalsAfter`, and we keep
    -- only the first (outer) trigger thanks to the infotree's depth-first traversal.
    let mut seenPos : Std.HashSet String.Pos.Raw := {}
    let mut seenGoal : Std.HashSet MVarId := {}
    for (k, ctx, info, tk) in points do
      let pos := tk.getPos?.getD 0
      if seenPos.contains pos then continue
      seenPos := seenPos.insert pos
      let goal? : Option MVarId := match k, info with
        | .emptyBy,      .ofTacticInfo tacInfo => tacInfo.goalsBefore.head?
        | .sorryTactic,  .ofTacticInfo tacInfo => tacInfo.goalsBefore.head?
        | .unsolvedGoal, .ofTacticInfo tacInfo => tacInfo.goalsAfter.head?
        | _, _                                  => none
      if let some g := goal? then
        if seenGoal.contains g then continue
        seenGoal := seenGoal.insert g
      match k, info with
      | .emptyBy,      .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxBefore tacInfo.goalsBefore tk (wrapWithBy := true)
      | .sorryTactic,  .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxBefore tacInfo.goalsBefore tk
      | .unsolvedGoal, .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxAfter tacInfo.goalsAfter tk
      | _, _ => pure ()

builtin_initialize addLinter autoTryHook

end Lean.Elab.Tactic.AutoTry
