/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Joachim Breitner
-/
module

prelude
public import Lean.Elab.Tactic.Basic

namespace Lean.Elab.Tactic.AutoTryHook

/--
Info-tree marker pushed by elaborators at sites where the user has left an unsolved
proof site that `autoTry` should suggest extensions for.

The marker is created at the *exact* point where the proof is admitted (or detected
unsolved), so the captured `goal` carries the user-visible local context (including
hypotheses added by surrounding `have`, `intro`, focusing tactics, etc.). The
`tacticSeq` field is the body to extend; the new tactic is appended there. The
`Lean.Elab.Info`'s `stx` carries the ref for the "Try this:" diagnostic anchor.
-/
public structure HookInfo where
  /-- Metavariable context in which `goal` is well-defined. -/
  mctx : MetavarContext
  /-- The unsolved goal we want `try?` to attempt to close. -/
  goal : MVarId
  /-- The tactic sequence whose end the new tactic should be appended to. May be
  empty (e.g. for an empty `by`, empty `{ }`, empty `· `, …). -/
  tacticSeq : Syntax
  deriving TypeName

/--
Push an `AutoTryHook.HookInfo` info-tree leaf at the current point. `tacticSeq` is the
sequence the suggestion will extend; `ref` is the syntax to anchor the "Try this:"
diagnostic at (typically the surrounding `by` / `·` / `case` syntax). `goal` is the
unsolved goal at this site.
-/
public def push {m : Type → Type} [Monad m] [MonadInfoTree m]
    (tacticSeq ref : Syntax) (goal : MVarId) (mctx : MetavarContext) : m Unit := do
  let info : HookInfo := { mctx, goal, tacticSeq }
  pushInfoLeaf <| .ofCustomInfo {
    stx := ref
    value := Dynamic.mk info
  }

end Lean.Elab.Tactic.AutoTryHook
