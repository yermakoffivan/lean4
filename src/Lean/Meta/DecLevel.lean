/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Meta.InferType

public section

namespace Lean.Meta

structure DecLevelContext where
  /--
   If `true`, then `decAux? ?m` returns a fresh metavariable `?n` s.t.
   `?m := ?n+1`.
   -/
  canAssignMVars : Bool := true

private partial def decAux? : Level → ReaderT DecLevelContext MetaM (Option Level)
  | Level.zero        => return none
  | Level.succ u      => return u
  | Level.param _     => return none
  | Level.mvar mvarId => do
    match (← getLevelMVarAssignment? mvarId) with
    | some u => decAux? u
    | none   =>
      if (← mvarId.isReadOnly) || !(← read).canAssignMVars then
        return none
      else
        let u ← mkFreshLevelMVar
        trace[Meta.isLevelDefEq.step] "decAux?, {mkLevelMVar mvarId} := {mkLevelSucc u}"
        assignLevelMVar mvarId (mkLevelSucc u)
        return u
  | Level.max u v     => do
    /- Remark: this code uses the fact that `max (u+1) (v+1) = (max u v)+1`.
       `decAux? (max (u+1) (v+1)) := max (decAux? (u+1)) (decAux? (v+1))`
       However, we must *not* assign metavariables in the recursive calls since the equation
       `max ?u 1 = (max ?v 0) + 1`, where `?v` is a fresh metavariable, does *not* force `?u := ?v+1`.
     -/
    withReader (fun _ => { canAssignMVars := false }) do
      match (← decAux? u) with
      | none    => return none
      | some u' => do
        match (← decAux? v) with
        | none    => return none
        | some v' => return mkLevelMax' u' v'
  | Level.imax u v    => do
    /- Remark: for `imax u v` to be nonzero, `v` *must* be nonzero, so assigning metavariables in `v` is permissible. -/
    match (← decAux? v) with
    | none    => return none
    | some v' =>
      /- Remark: If `decAux? v` returns `some ...`, then `imax u v` is equivalent to `max u v`.
         Like for `max`, the equation `imax ?u 1 = (max ?v 0) + 1` does *not* force `?u := ?v + 1`.
       -/
      withReader (fun _ => { canAssignMVars := false }) do
        match (← decAux? u) with
        | none => return none
        | some u' => return mkLevelMax' u' v'

def decLevel? (u : Level) : MetaM (Option Level) := do
  /- Normalize so that levels such as `max (u + 1) 0` can be decremented. -/
  let u := (← instantiateLevelMVars u).normalize
  let mctx ← getMCtx
  match (← decAux? u |>.run {}) with
  | some v => return some v
  | none   => do
    modify fun s => { s with mctx := mctx }
    return none

def decLevel (u : Level) : MetaM Level := do
  match (← decLevel? u) with
  | some u => return u
  | none   => throwError "invalid universe level, {u} is not greater than 0"

/-- This method is useful for inferring universe level parameters for function that take arguments such as `{α : Type u}`.
   Recall that `Type u` is `Sort (u+1)` in Lean. Thus, given `α`, we must infer its universe level,
   and then decrement 1 to obtain `u`. -/
def getDecLevel (type : Expr) : MetaM Level := do
  decLevel (← getLevel type)

def getDecLevel? (type : Expr) : MetaM (Option Level) := do
  decLevel? (← getLevel type)

builtin_initialize
  registerTraceClass `Meta.isLevelDefEq.step

end Lean.Meta
