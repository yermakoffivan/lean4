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
Former name of `autoTry.onEmptyProof`. Kept as an alias so that `set_option
tactic.tryOnEmptyBy true` in code written against earlier releases continues to enable
the empty-`by` suggestion. Use `autoTry.onEmptyProof` in new code.
-/
register_builtin_option tactic.tryOnEmptyBy : Bool := {
  defValue := false
  descr := "deprecated alias for `autoTry.onEmptyProof`"
  deprecation? := some {
    since := "2026-06-29"
    text? := some "use `autoTry.onEmptyProof` instead"
  }
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
  /-- A proof or subproof that left a goal unsolved (detected by walking the message
  log for `Tactic.unsolvedGoals` errors). `tacticSeq` is the body to append to,
  `insertPos` is the position at which to insert the new tactic, `msgPos` is the
  source position of the underlying error (used as the dedup key). -/
  | unsolvedGoal (tacticSeq : Syntax) (insertPos msgPos : String.Pos.Raw)
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

/-- Build a synthetic atom whose source range matches `range`. Used as the
`addSuggestion ref` argument so the "Try this:" diagnostic appears at exactly the
same source range as the underlying "unsolved goals" error. -/
def mkRangeStx (range : Lean.Syntax.Range) : Syntax :=
  Syntax.atom (.original "".toRawSubstring range.start "".toRawSubstring range.stop) ""

/--
A trigger candidate: enough info for the hook to drive `try?` and emit a suggestion
without re-walking the infotree. `ref` is the "Try this:" diagnostic anchor (for the
`sorry` trigger it is also the syntax the suggestion replaces).
-/
abbrev Candidate := TriggerKind × ContextInfo × Syntax × MetavarContext × MVarId

/--
Walk a `MessageData` tree, collecting each `MessageData.ofGoal mvarId` along with the
`MetavarContext` of the innermost enclosing `withContext`. Used to recover the
`(mctx, mvarId)` pairs from a `Tactic.unsolvedGoals` error message without needing the
producer to push them separately into the info tree. -/
partial def collectGoalsFromMessage (msg : MessageData) :
    Array (MetavarContext × MVarId) := go none msg #[]
where
  go (ctx? : Option MessageDataContext) (msg : MessageData) (acc : Array _) := match msg with
    | .withContext ctx msg       => go (some ctx) msg acc
    | .withNamingContext _ msg   => go ctx? msg acc
    | .nest _ msg | .group msg   => go ctx? msg acc
    | .tagged _ msg              => go ctx? msg acc
    | .compose a b               => go ctx? b (go ctx? a acc)
    | .ofWidget _ alt            => go ctx? alt acc
    | .trace _ msg children      => children.foldl (init := go ctx? msg acc) (fun acc m => go ctx? m acc)
    | .ofGoal mvarId             =>
      if let some ctx := ctx? then acc.push (ctx.mctx, mvarId) else acc
    | _                          => acc

/--
Locate the tactic-sequence body in `cmd` "responsible" for an `unsolved goals` error
at `range`. Returns `(body, insertPos)` where `body` is the null-node holding the
tactics (used for separator computation) and `insertPos` is where to append a new
tactic.

Strategy: descend along the path of nodes whose range contains `range`, then take
the outermost seq-variant in the smallest containing node's subtree -- handling both
the case where the error is logged inside the body (`case h => skip`, `{ skip }`,
`· skip`) and the case where it's logged at an adjacent token (`by` keyword for
`by skip`, the synthetic case-body marker, etc.).

The only syntax-kind knowledge is `tacticSeq1Indented` vs `tacticSeqBracketed`,
needed to read the tactics-container at child index 0 vs 1 and to know that the
empty-body insertion point sits before `}` (for bracketed) or right after the
opening token (for indented -- the message range's `stop` is a reliable proxy). -/
partial def findTacticSeqBody (cmd : Syntax) (range : Lean.Syntax.Range) :
    Option (Syntax × String.Pos.Raw) :=
  walkAndFind cmd
where
  /- Returns the tactics-container null-node together with its parent seq-variant,
     if `stx` is a seq-variant we recognise. -/
  bodyAndKind (stx : Syntax) : Option (Syntax × SyntaxNodeKind) :=
    match stx.getKind with
    | ``Lean.Parser.Tactic.tacticSeq1Indented => some (stx[0], stx.getKind)
    | k@``Lean.Parser.Tactic.tacticSeqBracketed => some (stx[1], k)
    | _ => none
  /- Insertion position. For non-empty bodies it's the body's tail. For empty
     bodies we fall back to a kind-specific position: just before `}` for a
     bracketed body, or the message range's `stop` (just past the opening
     token of the surrounding wrapper) for an indented body. -/
  insertPosOf (body parent : Syntax) (kind : SyntaxNodeKind) : String.Pos.Raw :=
    body.getTailPos?.getD <|
      if kind == ``Lean.Parser.Tactic.tacticSeqBracketed then
        parent[2].getPos?.getD range.stop
      else
        range.stop
  walkAndFind (stx : Syntax) : Option (Syntax × String.Pos.Raw) := Id.run do
    let some r := stx.getRange? | return none
    unless r.includes range do return none
    for child in stx.getArgs do
      if let some result := walkAndFind child then return some result
    outermostSeqInSubtree stx
  outermostSeqInSubtree (stx : Syntax) : Option (Syntax × String.Pos.Raw) := Id.run do
    if let some (body, kind) := bodyAndKind stx then
      return some (body, insertPosOf body stx kind)
    for child in stx.getArgs do
      if let some result := outermostSeqInSubtree child then return some result
    return none

/--
Collect candidate trigger points.

* **Unsolved-goal triggers** are recovered from the command's message log. For each
  `Tactic.unsolvedGoals` error, walk the `MessageData` to pull out each
  `(mctx, mvarId)` pair, then locate the surrounding admit-emitting scope by finding
  the *deepest* `TacticInfo` whose `goalsAfter` still contains `mvarId` and walking
  the command syntax for the enclosing `by` / `{ … }` / `· ` / `case` scope.
* **Sorry triggers** are read directly off `sorry`-tactic info-tree nodes.
-/
def collectTriggerPoints (cmd : Syntax) (opts : Options) (tree : InfoTree)
    (msgs : PersistentArray Message) : CommandElabM (Array Candidate) := do
  let onEmpty := autoTry.onEmptyProof.get opts || tactic.tryOnEmptyBy.get opts
  let onUnsolved := autoTry.onUnsolvedGoal.get opts
  let onSorry := autoTry.onSorry.get opts
  let mut acc : Array Candidate := #[]
  -- Sorry triggers still come from the info tree, since they're per-`sorry`-token.
  if onSorry then
    acc := tree.foldInfo (init := acc) fun ctx info acc => Id.run do
      if let .ofTacticInfo tacInfo := info then
        if isSorryTactic tacInfo.stx then
          if let some goal := tacInfo.goalsBefore.head? then
            return acc.push (.sorryTactic, ctx, tacInfo.stx, tacInfo.mctxBefore, goal)
      return acc
  -- Unsolved-goal triggers come from the message log.
  unless onUnsolved || onEmpty do return acc
  -- Build a per-message lookup: the deepest `ContextInfo` whose info-node syntax range
  -- contains the message range. This picks up scope shifts that land deeper than the
  -- command's outer `CommandContextInfo` -- e.g. term-level `open Foo in by` or the
  -- macro-expanded inner command of `set_option … in <cmd>` -- which otherwise leak
  -- the pre-shift `openDecls` and `options` into the suggester's `runMetaMWithMessages`.
  let allCtxs := tree.foldInfo (init := #[]) fun ctx info acc =>
    if let some r := info.stx.getRange? then acc.push (r, ctx) else acc
  let findCtxFor (range : Lean.Syntax.Range) : Option ContextInfo := Id.run do
    let mut best : Option (Lean.Syntax.Range × ContextInfo) := none
    for (r, c) in allCtxs do
      unless r.includes range do continue
      match best with
      | none => best := some (r, c)
      | some (br, _) =>
        if r.stop.byteIdx - r.start.byteIdx < br.stop.byteIdx - br.start.byteIdx then
          best := some (r, c)
    return best.map (·.2)
  -- Fallback for messages whose range no info node covers (defensive; unexpected
  -- in practice since the error producer's ref is always inside some elab unit).
  let some fallbackCtx := allCtxs[0]?.map (·.2) | return acc
  let fileMap ← getFileMap
  -- `runLintersAsync` accumulates diagnostics both in the command state's message
  -- log and in the snapshot tree it then merges back, so the same `Tactic.unsolvedGoals`
  -- error commonly appears twice in `msgs`. Dedup by source range before processing
  -- so the later `counts > 1` filter doesn't suppress a single legitimate trigger.
  let some cmdRange := cmd.getRange? (canonicalOnly := true) | return acc
  let mut seen : Std.HashMap (String.Pos.Raw × String.Pos.Raw) Unit := {}
  for msg in msgs do
    unless msg.severity matches .error do continue
    unless msg.data.hasTag (· == `Tactic.unsolvedGoals) do continue
    let some endPos := msg.endPos | continue
    let msgRange : Lean.Syntax.Range :=
      { start := fileMap.ofPosition msg.pos, stop := fileMap.ofPosition endPos }
    unless cmdRange.includes msgRange do continue
    if seen.contains (msgRange.start, msgRange.stop) then continue
    seen := seen.insert (msgRange.start, msgRange.stop) ()
    let some (body, insertPos) := findTacticSeqBody cmd msgRange | continue
    let isEmpty := body.getPos?.isNone
    unless onUnsolved || (onEmpty && isEmpty) do continue
    let ref := mkRangeStx msgRange
    let ctx := (findCtxFor msgRange).getD fallbackCtx
    for (mctx, mvarId) in collectGoalsFromMessage msg.data do
      acc := acc.push (.unsolvedGoal body insertPos msgRange.start, ctx, ref, mctx, mvarId)
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
def emitAppendSuggestions (tacticSeq ref : Syntax) (insertPos : String.Pos.Raw)
    (suggs : Array (TSyntax `tactic)) (cmdLine : Nat) : CommandElabM Unit := do
  if suggs.isEmpty then return
  let fileMap ← getFileMap
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
  let onEmpty := autoTry.onEmptyProof.get opts || tactic.tryOnEmptyBy.get opts
  let onUnsolved := autoTry.onUnsolvedGoal.get opts
  let onSorry := autoTry.onSorry.get opts
  unless onEmpty || onUnsolved || onSorry do return
  if ← hasNonUnsolvedGoalError stx then
    trace[autoTry] "skipping: command has non-unsolved-goal errors"
    return
  trace[autoTry] "running: onEmpty={onEmpty} onUnsolved={onUnsolved} onSorry={onSorry}"
  let fileMap := (← read).fileMap
  let cmdLine := (fileMap.toPosition (stx.getPos?.getD 0)).line
  let msgs := (← get).messages.reportedPlusUnreported
  let trees ← getInfoTrees
  for tree in trees do
    let candidates ← collectTriggerPoints stx opts tree msgs
    -- A source position carrying more than one candidate means either: the same scope
    -- was entered multiple times (e.g. the rhs of `<;>` runs once per subgoal), or the
    -- scope left more than one unsolved goal. In both cases a single "Try this"
    -- suggestion can't be replayed there, so skip duplicates by source position.
    -- Dedup key: for unsolved-goal triggers use the underlying message position
     -- (catches the same scope reporting multiple times, e.g. rhs of `<;>`); for
     -- `sorry` use the sorry token's position.
    let keyOf (k : TriggerKind) (ref : Syntax) : Option String.Pos.Raw := match k with
      | .unsolvedGoal _ _ p => some p
      | .sorryTactic        => ref.getPos?
    let mut counts : Std.HashMap String.Pos.Raw Nat := {}
    for (k, _, ref, _, _) in candidates do
      if let some p := keyOf k ref then
        counts := counts.alter p (fun n? => some (n?.getD 0 + 1))
    trace[autoTry] "trigger points: {candidates.size}"
    for (k, ctx, ref, mctx, goal) in candidates do
      let some pos := keyOf k ref | continue
      if counts.getD pos 0 > 1 then continue
      match k with
      | .unsolvedGoal tacticSeq insertPos _ =>
        let suggs ← collectSuggestionsForGoal ctx mctx goal
        emitAppendSuggestions tacticSeq ref insertPos suggs cmdLine
      | .sorryTactic =>
        runReplaceTryOnGoal ctx mctx goal ref

builtin_initialize addLinter autoTryHook

end Lean.Elab.Tactic.AutoTry
