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
`autoTry.onEmptyProof`, `autoTry.onUnsolvedGoal`, `autoTry.onSorry`. The infotree walk is
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
Run `try?` on empty proofs and empty subproofs — empty `by`, empty `· `, empty
`case h => `, and so on — and report any suggestions to insert.
-/
register_builtin_option autoTry.onEmptyProof : Bool := {
  defValue := false
  descr := "run `try?` on empty proofs and empty subproofs and report any suggestions"
}

/--
Run `try?` on each proof or subproof that left a goal unsolved -- empty `by`, `by skip`,
empty or unfinished `· `, empty or unfinished `case h => `, and so on -- and report any
suggestions to insert. The suggestion is appended to the existing sequence
(e.g. `by skip` → `by skip; <found>`).
-/
register_builtin_option autoTry.onUnsolvedGoal : Bool := {
  defValue := false
  descr := "run `try?` on each proof or subproof that left a goal unsolved and report \
    any suggestions"
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

/-- Which kind of auto-`try?` trigger this is. -/
inductive TriggerKind
  /-- A proof or subproof that left a goal unsolved (an `AdmittedGoalInfo` leaf pushed
  by `Term.reportUnsolvedGoals`). `tacticSeq` is the body to append to. -/
  | unsolvedGoal (tacticSeq : Syntax)
  /-- A `sorry` tactic. The suggestion *replaces* the `sorry`. -/
  | sorryTactic

/--
Compute the separator string to insert between the existing tail of a `tacticSeq` and a
new appended tactic. Heuristic:
* Empty `tacticSeq`: `" "` (just a space; the parser will normalise leading whitespace).
* Non-empty `tacticSeq` whose first and last tactics live on different source lines:
  newline followed by spaces aligning with the first tactic.
* Otherwise (non-empty single-line `tacticSeq`): `"; "`.

This is a heuristic and gets various edge cases wrong (mixed-indentation bodies, comments
between tactics, etc.). It should be replaced by a proper formatter once one is available.
-/
def computeAppendSep (tacticSeq : Syntax) (fileMap : FileMap) : String := Id.run do
  -- Locate the first tactic of the body; absence means an empty `tacticSeq`.
  let some bodyStart := tacticSeq.getPos? | return " "
  let some bodyEnd := tacticSeq.getTailPos? | return " "
  let startPos := fileMap.toPosition bodyStart
  let endPos := fileMap.toPosition bodyEnd
  if startPos.line == endPos.line then
    return "; "
  return "\n" ++ String.ofList (List.replicate startPos.column ' ')

/--
Build a synthetic atom with zero textual content whose syntactic range is the empty
range `[p, p)`. Used as the `origSpan?` for append-style suggestions so the IDE inserts
the replacement text at `p` without overwriting anything.
-/
def mkEmptyRangeStx (p : String.Pos.Raw) : Syntax :=
  Syntax.atom (.original "".toRawSubstring p "".toRawSubstring p) ""

/--
A trigger candidate: enough info for the hook to drive `try?` and emit a suggestion
without re-walking the infotree. `ref` is the "Try this:" diagnostic anchor (for the
`sorry` trigger it is also the syntax the suggestion replaces).
-/
abbrev Candidate := TriggerKind × ContextInfo × Syntax × MetavarContext × MVarId

/--
Locate the admit-emitting scope enclosing `leafStx` inside the command syntax `cmd`,
and return `(body, ref)` for that scope: `body` is the `tacticSeq` to append to, and
`ref` is the anchor for the "Try this:" diagnostic. Looks for the *smallest* enclosing
node whose kind is one of `byTactic` / `tacticSeqBracketed` / `Lean.cdot` / `case` /
`case'`. Returns `none` if `leafStx` has no source range or no matching scope was found.
-/
partial def findEnclosingAdmitScope (cmd leafStx : Syntax) : Option (Syntax × Syntax) := do
  let leafRange ← leafStx.getRange?
  go cmd leafRange none
where
  bodyAndRef (stx : Syntax) : Option (Syntax × Syntax) :=
    match stx.getKind with
    -- `by tacs`: `tacs` (a `tacticSeq`) is the body; `stx` itself anchors the diagnostic.
    | ``Lean.Parser.Term.byTactic | ``Lean.Parser.Term.byTactic' => some (stx[1], stx)
    -- `{ tacs }`: `stx[1]` is the sepBy body; `stx` anchors the diagnostic.
    | ``Lean.Parser.Tactic.tacticSeqBracketed => some (stx[1], stx)
    -- `· tacs`: `stx[1]` is the body.
    | ``Lean.cdot => some (stx[1], stx)
    -- `case h => tacs` / `case' h => tacs`: body is `stx[3]`.
    | ``Lean.Parser.Tactic.case | ``Lean.Parser.Tactic.case' => some (stx[3], stx)
    | _ => none
  go (stx : Syntax) (leafRange : Lean.Syntax.Range) (best : Option (Syntax × Syntax))
      : Option (Syntax × Syntax) := Id.run do
    let some range := stx.getRange? | return best
    -- Skip subtrees that don't contain the leaf.
    unless range.includes leafRange do return best
    let mut best := if let some hit := bodyAndRef stx then some hit else best
    for child in stx.getArgs do
      best := go child leafRange best
    return best

/--
Collect candidate trigger points from the info tree. Two sources of candidates:

1. `AdmittedGoalInfo` leaves pushed by `Term.reportUnsolvedGoals`. For each leaf we
   walk the surrounding command syntax to find the enclosing `byTactic` /
   `tacticSeqBracketed` / `cdot` / `case` scope and use its body as the append target.
2. `sorry` tactic info-tree nodes (handled inline).
-/
def collectTriggerPoints (cmd : Syntax) (opts : Options) (tree : InfoTree) : Array Candidate :=
  let onEmpty := autoTry.onEmptyProof.get opts
  let onUnsolved := autoTry.onUnsolvedGoal.get opts
  let onSorry := autoTry.onSorry.get opts
  tree.foldInfo (init := #[]) fun ctx info acc => Id.run do
    let mut acc := acc
    if onUnsolved || onEmpty then
      if let .ofCustomInfo ci := info then
        if let some hook := ci.value.get? AdmittedGoalInfo then
          if let some (body, ref) := findEnclosingAdmitScope cmd ci.stx then
            let isEmpty := body.getPos?.isNone
            if onUnsolved || (onEmpty && isEmpty) then
              acc := acc.push (.unsolvedGoal body, ctx, ref, hook.mctx, hook.goal)
    if onSorry then
      if let .ofTacticInfo tacInfo := info then
        if isSorryTactic tacInfo.stx then
          if let some goal := tacInfo.goalsBefore.head? then
            acc := acc.push (.sorryTactic, ctx, tacInfo.stx, tacInfo.mctxBefore, goal)
    return acc

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
      try
        Try.collectTryCoreSuggestions {}
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
def emitAppendSuggestions (tacticSeq ref : Syntax) (suggs : Array (TSyntax `tactic))
    (cmdLine : Nat) : CommandElabM Unit := do
  if suggs.isEmpty then return
  let fileMap ← getFileMap
  -- Insertion point: end of the body if it has tactics, else end of the wrapper's
  -- opening token (after `by` / `·` / `{` / `=>`).
  let insertPos := tacticSeq.getTailPos?.getD <| ref.getTailPos?.getD 0
  let sep := computeAppendSep tacticSeq fileMap
  let origSpan := mkEmptyRangeStx insertPos
  let showEdits := debug.autoTry.showEdits.get (← getOptions)
  let formatted ← suggs.mapM fun tac => do
    let fmt ← liftCoreM <| PrettyPrinter.ppTactic tac
    let cleanText := fmt.pretty
    -- The widget display uses `messageData?` (the bare tactic) while the actual edit
    -- text in `suggestion` carries the leading separator -- this keeps the [apply]
    -- line readable without losing the appending semantics on click.
    let editText := sep ++ cleanText
    if showEdits then
      let pos := fileMap.toPosition insertPos
      let dLine := pos.line - cmdLine + 1  -- match `#guard_msgs (positions := true)`: +N:COL
      logInfoAt ref
        m!"autoTry edit: insert {repr editText} at +{dLine}:{pos.column}"
    return ({
      suggestion := .string editText
      messageData? := some (toMessageData tac)
      toCodeActionTitle? := some (fun _ => "Try this: " ++ cleanText)
    } : Tactic.TryThis.Suggestion)
  liftCoreM <|
    if formatted.size == 1 then
      Tactic.TryThis.addSuggestion ref formatted[0]! (origSpan? := origSpan)
    else
      Tactic.TryThis.addSuggestions ref formatted (origSpan? := origSpan)

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
  return msgs.reportedPlusUnreported.any fun m =>
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
  let onEmpty := autoTry.onEmptyProof.get opts
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
    let candidates := collectTriggerPoints stx opts tree
    -- A source position carrying more than one candidate means either: the same scope
    -- was entered multiple times (e.g. the rhs of `<;>` runs once per subgoal), or the
    -- scope left more than one unsolved goal. In both cases a single "Try this"
    -- suggestion can't be replayed there, so skip duplicates by source position.
    let mut counts : Std.HashMap String.Pos.Raw Nat := {}
    for (_, _, ref, _, _) in candidates do
      if let some p := ref.getPos? then
        counts := counts.alter p (fun n? => some (n?.getD 0 + 1))
    trace[autoTry] "trigger points: {candidates.size}"
    for (k, ctx, ref, mctx, goal) in candidates do
      let some pos := ref.getPos? | continue
      if counts.getD pos 0 > 1 then continue
      match k with
      | .unsolvedGoal tacticSeq =>
        let suggs ← collectSuggestionsForGoal ctx mctx goal
        emitAppendSuggestions tacticSeq ref suggs cmdLine
      | .sorryTactic =>
        runReplaceTryOnGoal ctx mctx goal ref

builtin_initialize addLinter autoTryHook

end Lean.Elab.Tactic.AutoTry
