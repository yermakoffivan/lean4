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

open Lean Elab Term Tactic Command Try Meta

/--
Run `try?` on empty `by` blocks and report any suggestions as a tactic to insert.
Strictly a subset of `autoTry.onUnsolvedGoal`: fires only when the `by` block has no
tactics yet. Use this to get suggestions only for "start of proof" sites without the
noise of in-progress proofs.
-/
register_builtin_option autoTry.onEmptyBy : Bool := {
  defValue := false
  descr := "run `try?` on each empty `by` block and report any suggestions"
}

/--
Run `try?` on each tactic-sequence scope that still has unsolved goals — `by` blocks
(including empty `by`), focused-goal `·` blocks, `case` blocks, and similar — and report
any suggestions as an *append* to the sequence rather than a replacement of any existing
tactic. Triggers only when exactly one goal remains, so e.g. `by constructor` (two open
subgoals) stays silent; the user is expected to shape the proof with `·`/`case` first.

Strictly broader than `autoTry.onEmptyBy`; enabling both is equivalent to enabling
only `onUnsolvedGoal`.
-/
register_builtin_option autoTry.onUnsolvedGoal : Bool := {
  defValue := false
  descr := "run `try?` on each tactic-sequence scope (`by`, `·`, `case`, …) that left \
    exactly one unsolved goal and report any suggestions as an append"
}

/--
Run `try?` on each `sorry` tactic and report any suggestions; the suggestion replaces
the `sorry`.
-/
register_builtin_option autoTry.onSorry : Bool := {
  defValue := false
  descr := "run `try?` on each `sorry` tactic and report any suggestions"
}

/--
When enabled, autoTry logs an info message for each emitted suggestion describing the
text-edit it represents: the source range to replace and the literal replacement text.
Intended for tests: the [apply] widget normally hides the separator characters that the
edit inserts, so without this option there is no way for `#guard_msgs` to verify the
exact text being inserted on click.
-/
register_builtin_option debug.autoTry.showEdits : Bool := {
  defValue := false
  descr := "if set, autoTry logs an info message per emitted suggestion showing the edit's \
    source range and the literal replacement text (for testing the widget data)"
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
  -- `try?` may create temporary auxiliary declarations during library search; running with
  -- a non-exporting environment keeps any such declarations from leaking out as exports.
  let env := ctx.env.setExporting false
  let core : CoreM α := Prod.fst <$> x.run { lctx } { mctx }
  let (res, newCoreState) ←
    (withOptions (fun _ => ctx.options) core).toIO
      { currNamespace := ctx.currNamespace, openDecls := ctx.openDecls
        fileName := cmdCtx.fileName, fileMap := cmdCtx.fileMap
        cancelTk? := cmdCtx.cancelTk? }
      { env, ngen := ctx.ngen }
  modify fun s => { s with
    messages := s.messages ++ newCoreState.messages
    traceState.traces := s.traceState.traces ++ newCoreState.traceState.traces }
  return res

def isSorryTactic (stx : Syntax) : Bool :=
  match stx.getKind with
  | `Lean.Parser.Tactic.tacticSorry | `Lean.Parser.Tactic.tacticAdmit => true
  | _ => false

/-- The first `tacticSeq` child of `stx`, if any. Used to identify "tactic-sequence
containers" (`by`, `· …`, `case … => …`, `focus …`, `(…)`, `try …`, etc.) generically,
without hardcoding a list of kinds. -/
def findBodySeq (stx : Syntax) : Option Syntax :=
  stx.getArgs.findSome? fun arg =>
    if arg.isOfKind ``Lean.Parser.Tactic.tacticSeq then some arg else none

/-- Which kind of auto-`try?` trigger this is. -/
inductive TriggerKind
  /-- A `by` block whose tactic sequence left exactly one unsolved goal (this includes the
  empty-`by` case). The suggestion is rendered as an *append* to the existing sequence. -/
  | unsolvedGoal
  /-- A `sorry` tactic. The suggestion *replaces* the `sorry`. -/
  | sorryTactic

/--
Compute the separator string to insert between the existing tail of a tactic-sequence
container (`by`, `·`, `case h =>`, …) and the new appended suggestion. The rule:
* Empty body, single-line: `" "`.
* Non-empty body, single-line: `"; "`.
* Multi-line: newline followed by spaces aligning with the first tactic in the body, or
  with the container head's column + 2 if the body is empty.

This is a heuristic and gets various edge cases wrong (mixed-indentation bodies, comments
between tactics, etc.). It should be replaced by a proper formatter once one is available.
-/
def computeAppendSep (containerStx : Syntax) (fileMap : FileMap) : String := Id.run do
  let some bp := containerStx.getPos? | return "; "
  let some bt := containerStx.getTailPos? | return "; "
  let bpPos := fileMap.toPosition bp
  let btPos := fileMap.toPosition bt
  let bodyStart? := findBodySeq containerStx >>= (·.getPos?)
  let isEmpty := bodyStart?.isNone
  if bpPos.line == btPos.line then
    return if isEmpty then " " else "; "
  let indentCol : Nat :=
    if let some bodyStart := bodyStart? then
      (fileMap.toPosition bodyStart).column
    else
      bpPos.column + 2
  return "\n" ++ String.ofList (List.replicate indentCol ' ')

/--
Build a synthetic atom with zero textual content whose syntactic range is the empty
range `[p, p)`. Used as the `origSpan?` for append-style suggestions so the IDE inserts
the replacement text at `p` without overwriting anything.
-/
def mkEmptyRangeStx (p : String.Pos.Raw) : Syntax :=
  Syntax.atom (.original "".toRawSubstring p "".toRawSubstring p) ""

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
    CommandElabM (Array (TriggerKind × ContextInfo × TacticInfo)) :=
  tree.foldInfoM (init := #[]) fun ctx info acc => do
    match info with
    | .ofTacticInfo tacInfo =>
      -- Only emit candidates whose anchor has a real source range; otherwise the code
      -- action has no document range to apply against.
      if tacInfo.stx.getPos?.isNone then return acc
      let kind := tacInfo.stx.getKind
      let onEmpty := autoTry.onEmptyBy.get opts
      let onUnsolved := autoTry.onUnsolvedGoal.get opts
      let onSorry := autoTry.onSorry.get opts
      let mut acc := acc
      if (findBodySeq tacInfo.stx).isSome && tacInfo.goalsAfter.length == 1 then
        -- `onUnsolved` fires for any tactic-sequence container (`by`, `·`, `case`, …,
        -- identified generically as a tactic whose syntax has a `tacticSeq` child) whose
        -- body left exactly one unsolved goal. `onEmpty` is a narrower variant that
        -- fires only on empty `by` blocks.
        if onUnsolved ||
            (onEmpty && kind == `Lean.Parser.Term.byTactic && isEmptyByBlock tacInfo.stx) then
          acc := acc.push (.unsolvedGoal, ctx, tacInfo)
      if onSorry && isSorryTactic tacInfo.stx then
        acc := acc.push (.sorryTactic, ctx, tacInfo)
      return acc
    | _ => return acc

/--
Drive `try?` from CommandElabM, returning the suggestion array. Sets up TacticM/TermElabM
around the saved infotree state and runs `Try.collectTryCoreSuggestions` on `goal`.
Returns `#[]` on error or interruption (control-flow exceptions are re-raised).
-/
def collectSuggestionsForGoal (ctx : ContextInfo) (mctx : MetavarContext) (goal : MVarId) :
    CommandElabM (Array (TSyntax `tactic)) := do
  let some decl := mctx.decls.find? goal | return #[]
  runMetaMWithMessages ctx decl.lctx mctx do
    let tacticAct : TacticM (Array (TSyntax `tactic)) := do
      try Try.collectTryCoreSuggestions {}
      catch e =>
        if e.isInterrupt || e.isMaxRecDepth then throw e
        trace[autoTry] "try? raised: {e.toMessageData}"
        return #[]
    -- Unfold `TacticM` (= `ReaderT Context (StateRefT State TermElabM)`) by hand to
    -- run `tacticAct` and recover its return value; `Tactic.run` would only let us
    -- get the leftover goals, not the `α`.
    let term : TermElabM (Array (TSyntax `tactic)) := withSynthesize do
      goal.withContext <|
        (tacticAct.run { elaborator := .anonymous }).run' { goals := [goal] }
    try Prod.fst <$> term.run {} {}
    catch e =>
      if e.isInterrupt || e.isMaxRecDepth then throw e
      trace[autoTry] "term elab raised: {e.toMessageData}"
      return #[]

/--
Emit a "Try these:" message whose code-action edits *append* each suggestion to the end
of `byStx`'s tactic sequence (or just after `by` for an empty body). The `messageData?`
override keeps the rendered widget text clean (no leading separator). `cmdLine` is the
1-based line of the enclosing command's start, used to render edit positions relative to
the command (so tests are robust to moving the example up or down the file).
-/
def emitAppendSuggestions
    (byStx : Syntax) (suggs : Array (TSyntax `tactic)) (cmdLine : Nat) : CommandElabM Unit := do
  if suggs.isEmpty then return
  let some byTail := byStx.getTailPos? | return
  let fileMap ← getFileMap
  let sep := computeAppendSep byStx fileMap
  let origSpan := mkEmptyRangeStx byTail
  let showEdits := debug.autoTry.showEdits.get (← getOptions)
  let formatted ← suggs.mapM fun tac => do
    let fmt ← liftCoreM <| PrettyPrinter.ppTactic tac
    let cleanText := fmt.pretty
    -- The widget display uses `messageData?` (the bare tactic) while the actual edit
    -- text in `suggestion` carries the leading separator -- this keeps the [apply]
    -- line readable without losing the appending semantics on click.
    let editText := sep ++ cleanText
    if showEdits then
      let pos := fileMap.toPosition byTail
      let dLine := pos.line - cmdLine + 1  -- match `#guard_msgs (positions := true)`: +N:COL
      logInfoAt byStx
        m!"autoTry edit: insert {repr editText} at +{dLine}:{pos.column}"
    return ({
      suggestion := .string editText
      messageData? := some (toMessageData tac)
      toCodeActionTitle? := some (fun _ => "Try this: " ++ cleanText)
    } : Tactic.TryThis.Suggestion)
  liftCoreM <|
    if formatted.size == 1 then
      Tactic.TryThis.addSuggestion byStx formatted[0]! (origSpan? := origSpan)
    else
      Tactic.TryThis.addSuggestions byStx formatted (origSpan? := origSpan)

/--
Run `try?` by elaborating its tactic syntax against `goal` and letting `try?` emit its
own "Try this:" message anchored at `tk`. `try?`'s default emission replaces the syntax
at the current ref, which is exactly what we want for the `sorry` trigger.
-/
def runReplaceTryOnGoal (ctx : ContextInfo) (mctx : MetavarContext)
    (goal : MVarId) (tk : Syntax) : CommandElabM Unit := do
  let some decl := mctx.decls.find? goal | return
  runMetaMWithMessages ctx decl.lctx mctx do
    try
      let tryStx ← `(tactic| try?)
      withRef tk do
        discard <| Lean.Elab.runTactic goal tryStx
    catch e =>
      if e.isInterrupt || e.isMaxRecDepth then throw e
      trace[autoTry] "try? raised: {e.toMessageData}"

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

/--
The auto-`try?` post-elaboration hook.

Plugged into the linter machinery (`addLinter`) because that's a convenient post-command-
elab entry point with infotree access. The feature itself is *not* a linter: it does not
bail on `messages.hasErrors`, since the triggers we care about (empty `by`, unsolved
goals, `sorry`) all produce errors or warnings of their own.
-/
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
  let fileMap := (← read).fileMap
  let cmdLine := (fileMap.toPosition (stx.getPos?.getD 0)).line
  let trees ← getInfoTrees
  for tree in trees do
    let candidates ← collectTriggerPoints opts tree
    -- A source position carrying more than one candidate means the elaborator ran the
    -- same syntax against multiple proof states (rhs of `<;>`, body of `repeat`, ...);
    -- a single "Try this" suggestion can't be replayed there, so skip such positions.
    let mut counts : Std.HashMap String.Pos.Raw Nat := {}
    for (_, _, ti) in candidates do
      if let some p := ti.stx.getPos? then
        counts := counts.alter p (fun n? => some (n?.getD 0 + 1))
    trace[autoTry] "trigger points: {candidates.size}"
    for (k, ctx, ti) in candidates do
      let some pos := ti.stx.getPos? | continue
      if counts.getD pos 0 > 1 then continue
      match k with
      | .unsolvedGoal =>
        let some goal := ti.goalsAfter.head? | continue
        let suggs ← collectSuggestionsForGoal ctx ti.mctxAfter goal
        emitAppendSuggestions ti.stx suggs cmdLine
      | .sorryTactic =>
        let some goal := ti.goalsBefore.head? | continue
        runReplaceTryOnGoal ctx ti.mctxBefore goal ti.stx

builtin_initialize addLinter autoTryHook

end Lean.Elab.Tactic.AutoTry
