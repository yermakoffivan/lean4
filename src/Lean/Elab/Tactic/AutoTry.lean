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

Triggers are suppressed for tactics nested inside combinators that elaborate their
arguments multiple times or in a backtracking context (`first`, `attempt_all`, `<;>`'s
expansion via `all_goals`, `any_goals`, `repeat`/`repeat'`, `try`, etc.). Without this,
e.g. `by first | exact (by) | trivial` would report a suggestion for the failed `(by)`
branch even though the outer proof goes through fine.
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
Tactic combinators that elaborate their arguments multiple times or in a backtracking
context. Triggers inside any of these are suppressed: we don't want to spam suggestions for
the speculatively-elaborated branches of `first`, or for the rhs of `<;>` that is elaborated
once per goal, or for `try ...` that may succeed via the implicit `skip` fallback.

`<;>` doesn't appear by this name in the info tree -- the macro at `Init/Tactics.lean:401`
expands to `focus / all_goals`, so it is `Lean.Parser.Tactic.allGoals` (the expanded form)
that we have to mark. Likewise `try t` expands to `first | t | skip`, but the original
`tacticTry_` node is still recorded by the elaborator above the expansion.
-/
private def isMultiElabCombinator (kind : SyntaxNodeKind) : Bool :=
  match kind with
  | `Lean.Parser.Tactic.first
  | `Lean.Parser.Tactic.firstPar
  | `Lean.Parser.Tactic.attemptAll
  | `Lean.Parser.Tactic.attemptAllPar
  | `Lean.Parser.Tactic.tryTrace
  | `Lean.Parser.Tactic.tryTraceWith
  | `Lean.Parser.Tactic.allGoals
  | `Lean.Parser.Tactic.anyGoals
  | `Lean.Parser.Tactic.tacticRepeat_
  | `Lean.Parser.Tactic.tacticRepeat'_
  | `Lean.Parser.Tactic.tacticIterate____
  | `Lean.Parser.Tactic.tacticTry_ => true
  | _ => false

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
Recursively walk an `InfoTree` collecting trigger points, skipping any subtree that lies
inside a multi-elaboration combinator (`first`/`<;>`/`try`/…). `depth` counts how many
combinators we are currently nested inside.
-/
private partial def collectTriggerPoints (opts : Options) :
    (depth : Nat) → (ctx? : Option ContextInfo) →
    Array (TriggerKind × ContextInfo × Info × Syntax) → InfoTree →
    CommandElabM (Array (TriggerKind × ContextInfo × Info × Syntax))
  | depth, ctx?, acc, .context ctx t =>
    collectTriggerPoints opts depth (ctx.mergeIntoOuter? ctx?) acc t
  | _, _, acc, .hole _ => pure acc
  | depth, ctx?, acc, .node info cs => do
    let some ctx := ctx? | pure acc
    let kind := info.stx.getKind
    let depth' := if isMultiElabCombinator kind then depth + 1 else depth
    let mut acc := acc
    -- Emit triggers from THIS node only when not nested in a multi-elab combinator.
    if depth == 0 then
      match info with
      | .ofTacticInfo tacInfo =>
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
      acc ← collectTriggerPoints opts depth' (info.updateContext? ctx) acc c
    pure acc

/-- The auto-`try?` post-elaboration hook.

Plugged into the linter machinery (`addLinter`) because that's a convenient post-command-elab
entry point with infotree access. The feature itself is *not* a linter: it does not bail on
`messages.hasErrors`, since the triggers we care about (empty `by`, unsolved goals, `sorry`)
all produce errors or warnings of their own. -/
def autoTryHook : Linter where run := withSetOptionIn fun _stx => do
  let opts ← getOptions
  let onEmpty := autoTry.onEmptyBy.get opts
  let onUnsolved := autoTry.onUnsolvedGoal.get opts
  let onSorry := autoTry.onSorry.get opts
  unless onEmpty || onUnsolved || onSorry do return
  trace[autoTry] "running: onEmpty={onEmpty} onUnsolved={onUnsolved} onSorry={onSorry}"
  let trees ← getInfoTrees
  for tree in trees do
    let points ← collectTriggerPoints opts 0 none #[] tree
    trace[autoTry] "trigger points: {points.size}"
    -- Dedupe by source position: a tactic might be reported by multiple triggers at the
    -- same location (e.g. an unsolved-goal tactic that's also a `sorry`).
    let mut seen : Std.HashSet String.Pos.Raw := {}
    for (k, ctx, info, tk) in points do
      let pos := tk.getPos?.getD 0
      if seen.contains pos then continue
      seen := seen.insert pos
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
