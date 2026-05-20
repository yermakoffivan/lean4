/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Joachim Breitner
-/
module

prelude
public meta import Init.Try
public meta import Lean.Linter.Basic
public meta import Lean.Server.InfoUtils
public meta import Lean.Elab.Tactic.Try
public meta import Lean.Elab.Tactic.Meta
public meta import Lean.Elab.BuiltinTerm

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

public meta section

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
private def runMetaMWithMessages (ctx : ContextInfo) (lctx : LocalContext)
    (mctx : MetavarContext) (x : MetaM α) : CommandElabM α := do
  let cmdCtx ← read
  let cmdOpts ← getOptions
  let env := ctx.env.setExporting false
  -- Merge `ctx.options` (frozen at the saved infotree point) with the surrounding
  -- `CommandElabM` options so linter-time-only knobs like `trace.autoTry` apply inside.
  let mergedOpts := ctx.options.mergeBy (fun _ _ v => v) cmdOpts
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
private def runTryOnGoals (ctx : ContextInfo) (mctx : MetavarContext)
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
    catch e => trace[autoTry] "try? raised: {e.toMessageData}"

private def isSorryTactic (stx : Syntax) : Bool :=
  match stx.getKind with
  | `Lean.Parser.Tactic.tacticSorry | `Lean.Parser.Tactic.tacticAdmit => true
  | _ => false

/-- Tactic info nodes whose syntax kind is a sequencing/structural construct rather than a
real user-written tactic. We skip these when looking for "unsolved goal" positions. -/
private def isStructuralTacticKind (kind : SyntaxNodeKind) : Bool :=
  match kind with
  | `Lean.Parser.Term.byTactic
  | `Lean.Parser.Tactic.tacticSeq
  | `Lean.Parser.Tactic.tacticSeq1Indented
  | `by => true
  | _ => false

-- Trigger kind encoded as `Nat` to avoid declaring an inductive in a meta context.
-- 0 = emptyBy (goalsBefore of a byTactic TacticInfo, wrapped with `by`)
-- 1 = sorryTactic (goalsBefore)
-- 2 = unsolvedGoal (goalsAfter)
private abbrev TriggerKind := Nat

/--
First pass: count how many `TacticInfo` nodes carry each syntax-tail position. Positions
that appear more than once correspond to tactics that the elaborator ran in multiple proof
states (e.g. the rhs of `<;>`, the body of `repeat`/`iterate`); we'll skip triggers there
because a single "Try this" suggestion can't be replayed against multiple goals.
-/
private partial def countTacticInfoPositions
    (acc : Std.HashMap (SyntaxNodeKind × String.Pos.Raw) Nat) :
    InfoTree → Std.HashMap (SyntaxNodeKind × String.Pos.Raw) Nat
  | .context _ t => countTacticInfoPositions acc t
  | .hole _ => acc
  | .node info cs =>
    let acc := match info with
      | .ofTacticInfo tac =>
        -- Key by `(kind, pos)` -- not just `pos` -- so that macro expansions of the same
        -- syntax (e.g. `sorry` -> `exact sorry`, which produces a `tacticSorry` and an
        -- `exact` `TacticInfo` at identical positions) don't get mis-counted as
        -- multi-elaboration. We're after the `<;>`-style "same syntax elaborated repeatedly"
        -- pattern, where kind and position both coincide.
        if isStructuralTacticKind tac.stx.getKind then
          acc
        else if let some p := tac.stx.getPos? then
          acc.alter (tac.stx.getKind, p) (fun n? => some (n?.getD 0 + 1))
        else acc
      | _ => acc
    cs.foldl (init := acc) fun acc c => countTacticInfoPositions acc c

/--
Second pass: collect trigger points from the info tree, given a multiplicity map produced
by `countTacticInfoPositions`. Trigger points at positions with multiplicity > 1 are dropped.
-/
private partial def collectTriggerPoints (opts : Options)
    (counts : Std.HashMap (SyntaxNodeKind × String.Pos.Raw) Nat) :
    (ctx? : Option ContextInfo) →
    Array (TriggerKind × ContextInfo × Info × Syntax) → InfoTree →
    CommandElabM (Array (TriggerKind × ContextInfo × Info × Syntax))
  | ctx?, acc, .context ctx t =>
    collectTriggerPoints opts counts (ctx.mergeIntoOuter? ctx?) acc t
  | _, acc, .hole _ => pure acc
  | ctx?, acc, .node info cs => do
    let some ctx := ctx? | pure acc
    let mut acc := acc
    match info with
    | .ofTacticInfo tacInfo =>
      let kind := tacInfo.stx.getKind
      -- Skip tactics elaborated against multiple proof states.
      let multi : Bool :=
        if let some p := tacInfo.stx.getPos? then
          (counts.get? (kind, p)).getD 0 > 1
        else
          false
      unless multi do
        let onEmpty := autoTry.onEmptyBy.get opts
        let onUnsolved := autoTry.onUnsolvedGoal.get opts
        let onSorry := autoTry.onSorry.get opts
        if onEmpty && kind == `Lean.Parser.Term.byTactic && isEmptyByBlock tacInfo.stx then
          acc := acc.push (0, ctx, .ofTacticInfo tacInfo, tacInfo.stx[0])
        if onSorry && isSorryTactic tacInfo.stx then
          acc := acc.push (1, ctx, .ofTacticInfo tacInfo, tacInfo.stx)
        if onUnsolved && !isStructuralTacticKind kind && !tacInfo.goalsAfter.isEmpty then
          acc := acc.push (2, ctx, .ofTacticInfo tacInfo, tacInfo.stx)
    | _ => pure ()
    for c in cs do
      acc ← collectTriggerPoints opts counts (info.updateContext? ctx) acc c
    pure acc

/--
Returns `true` if the message log contains any error within `stxRange` that is *not* an
"unsolved goals" error. Used to skip the auto-`try?` hook on commands the user is in the
middle of fixing -- suggestions for the unsolved goal are not useful while other errors
need to be addressed first.
-/
private def hasNonUnsolvedGoalError (stx : Syntax) : CommandElabM Bool := do
  let some startPos := stx.getPos? | return false
  let some endPos := stx.getTailPos? | return false
  let fileMap := (← read).fileMap
  let startLine := (fileMap.toPosition startPos).line
  let endLine := (fileMap.toPosition endPos).line
  let msgs := (← get).messages
  return msgs.toArray.any fun m =>
    let inRange := m.pos.line ≥ startLine && m.pos.line ≤ endLine
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
    let counts := countTacticInfoPositions {} tree
    let points ← collectTriggerPoints opts counts none #[] tree
    trace[autoTry] "trigger points: {points.size}"
    -- Dedupe by (trigger-kind, source-position) and by the goal mvar being considered.
    -- The position-dedupe handles overlapping triggers at the same site (e.g. an
    -- unsolved-goal tactic that's also a `sorry`). The goal-mvar dedupe handles nested
    -- tactics that share the same unsolved goal -- in `by first | skip | trivial`, both
    -- `first` and `skip` have the same `True`-typed mvar in `goalsAfter`, and we keep
    -- only the first (outer) trigger thanks to the infotree's depth-first traversal.
    let mut seenPos : Std.HashSet String.Pos.Raw := {}
    let mut seenGoal : Std.HashSet Name := {}
    for (k, ctx, info, tk) in points do
      let pos := tk.getPos?.getD 0
      if seenPos.contains pos then continue
      seenPos := seenPos.insert pos
      let goal? : Option MVarId := match k, info with
        | 0, .ofTacticInfo tacInfo => tacInfo.goalsBefore.head?
        | 1, .ofTacticInfo tacInfo => tacInfo.goalsBefore.head?
        | 2, .ofTacticInfo tacInfo => tacInfo.goalsAfter.head?
        | _, _                     => none
      if let some g := goal? then
        if seenGoal.contains g.name then continue
        seenGoal := seenGoal.insert g.name
      match k, info with
      | 0, .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxBefore tacInfo.goalsBefore tk (wrapWithBy := true)
      | 1, .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxBefore tacInfo.goalsBefore tk
      | 2, .ofTacticInfo tacInfo =>
        runTryOnGoals ctx tacInfo.mctxAfter tacInfo.goalsAfter tk
      | _, _ => pure ()

builtin_initialize addLinter autoTryHook

end Lean.Elab.Tactic.AutoTry
