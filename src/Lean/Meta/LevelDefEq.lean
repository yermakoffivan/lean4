/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Util.CollectMVars
public import Lean.Meta.DecLevel
public import Lean.Meta.HasAssignableMVar

public section

namespace Lean.Meta

/--
  Return true iff `lvl` occurs in `max u_1 ... u_n` and `lvl != u_i` for all `i in [1, n]`.
  That is, `lvl` is a proper level subterm of some `u_i`. -/
private def strictOccursMax (lvl : Level) : Level → Bool
  | Level.max u v => visit u || visit v
  | _             => false
where
  visit : Level → Bool
    | Level.max u v => visit u || visit v
    | u             => u != lvl && lvl.occurs u

/-- `mkMaxArgsDiff mvarId (max u_1 ... (mvar mvarId) ... u_n) v` => `max u_1 ... u_n v` -/
private def mkMaxArgsDiff (mvarId : LMVarId) : Level → Level → Level
  | Level.max u v,     acc => mkMaxArgsDiff mvarId u <| mkMaxArgsDiff mvarId v acc
  | l@(Level.mvar id), acc => if id == mvarId then acc else mkLevelMax' l acc
  | l,                 acc => mkLevelMax' l acc

/--
Solves `?m =?= max ?m v` by creating a fresh metavariable `?n`
and assigning `?m := max ?n v`
-/
private def solveSelfMax (mvarId : LMVarId) (v : Level) : MetaM Unit := do
  assert! v.isMax
  let n ← mkFreshLevelMVar
  let v' := mkMaxArgsDiff mvarId v n
  trace[Meta.isLevelDefEq.step] "SelfMax: {mkLevelMVar mvarId} := {v'}"
  assignLevelMVar mvarId v'

/--
`mkMaxArgsDiff' (max u₁ ... uₘ) (max v₁ ... vₙ)` returns `(s, u', v')`,
where `s` is the max of the shared components, `u'` is the max of the components unique to `u`,
and `v'` is the max of the components unique to `v`.
The result satisfies `u = max s u'` and `v = max s v'`, up to reordering and reassociating.
Assumes `u` and `v` are normalized (components are in sorted order and `max` is right-associated).
-/
private partial def splitMaxArgs (u v : Level) : Level × Level × Level :=
  match u, v with
  | u,           .zero       => (.zero, u, .zero)
  | .zero,       v           => (.zero, .zero, v)
  | .max u₁ u₂,  .max v₁ v₂  => step u₁ u₂ v₁ v₂
  | .max u₁ u₂,  v           => step u₁ u₂ v .zero
  | u,           .max v₁ v₂  => step u .zero v₁ v₂
  | u,           v           => step u .zero v .zero
where
  step (u₁ u₂ v₁ v₂ : Level) : Level × Level × Level :=
    if u₁ == v₁ then
      let (s, u', v') := splitMaxArgs u₂ v₂
      (mkLevelMax' u₁ s, u', v')
    else if Level.normLt u₁ v₁ then
      let (s, u', v') := splitMaxArgs u₂ v
      (s, mkLevelMax' u₁ u', v')
    else
      let (s, u', v') := splitMaxArgs u v₂
      (s, u', mkLevelMax' v₁ v')

/--
Tries applying an approximation, returning `true` on success.

Approximations:
- SelfMax: If `v` is of the form `max u ?m` then solves `u =?= max u ?m` by assigning `?m := u`.
  Note that `u` can be a `max` expression.
  This is an approximation. For example, we ignore the solution `?m := 0`.
- MaxMax: If `u` is of the form `max u₁ u₂` and `v` is of the form `max u₁ ?m`
  then solves `max u₁ u₂ =?= max u₁ ?m` by assigning `?m := u₂`.
  Note that `u₁` can be a `max` expression.
  This is an approximation. For example, we ignore the solution `?w := max u₁ u₂`.

-- TODO: investigate whether we need to improve these approximations.
-/
private def trySolveApprox (u v : Level) : MetaM Bool := do
  if !v.isMax then
    -- All approximations are for the case when `v` is a `max` expression.
    return false
  let (s, u', v') := splitMaxArgs u v
  if let .mvar mvarId := v' then
    assert! !s.isZero
    if (← mvarId.isReadOnly) then
      return false
    else if v'.occurs u then
      return false
    else if u'.isZero then
      -- Thus `u = s` so `v = max u ?m`.
      -- The SelfMax approximation applies.
      trace[Meta.isLevelDefEq.step] "SelfMax approximation: {mkLevelMVar mvarId} := {u}"
      assignLevelMVar mvarId u
      return true
    else
      -- Thus `u = max s u'` and `v = max s ?m`, with `s ≠ 0` and `u' ≠ 0`.
      -- The MaxMax approximation applies.
      trace[Meta.isLevelDefEq.step] "MaxMax approximation: {mkLevelMVar mvarId} := {u'}"
      assignLevelMVar mvarId u'
      return true
  else
    return false

private def postponeIsLevelDefEq (lhs : Level) (rhs : Level) : MetaM Unit := do
  let ref ← getRef
  let ctx ← read
  trace[Meta.isLevelDefEq.stuck] "{lhs} =?= {rhs}"
  modifyPostponed fun postponed => postponed.push { lhs := lhs, rhs := rhs, ref := ref, ctx? := ctx.defEqCtx? }

private def isMVarWithGreaterDepth (v : Level) (mvarId : LMVarId) : MetaM Bool :=
  match v with
  | Level.mvar mvarId' => return (← mvarId'.getLevel) > (← mvarId.getLevel)
  | _ => return false

/--
Decrements both `lhs` and `rhs` so long as they are both successors.
Skips calling `k` if `lhs.getLevelOffset == rhs.getLevelOffset`.
Instantiates metavariables and normalizes.
-/
@[specialize] private partial def isLevelDefEqPreprocess (lhs rhs : Level) (k : Level → Level → MetaM Bool) (instantiated : Bool := false) (trace : Bool := false) : MetaM Bool := do
  match lhs, rhs with
  | Level.succ lhs', Level.succ rhs' => isLevelDefEqPreprocess lhs' rhs' k instantiated (trace := true)
  | lhs, rhs =>
    if lhs.getLevelOffset == rhs.getLevelOffset then
      return lhs.getOffset == rhs.getOffset
    else if instantiated then
      -- `isNeverZero` is a cheap check to see if it is worth trying `decLevel`.
      if lhs.isNeverZero && rhs.isNeverZero then
        if let some lhs' ← Meta.decLevel? lhs (canAssignMVars := false) then
          if let some rhs' ← Meta.decLevel? rhs (canAssignMVars := false) then
            return ← isLevelDefEqPreprocess lhs' rhs' k (instantiated := true) (trace := true)
      if !lhs.isNormalized || !rhs.isNormalized then
        let lhs' := lhs.normalize
        let rhs' := rhs.normalize
        assert! lhs != lhs' || rhs != rhs'
        return ← isLevelDefEqPreprocess lhs' rhs' k (instantiated := true) (trace := true)
      assert! lhs.normalize == lhs
      assert! rhs.normalize == rhs
      if trace then
        withTraceNodeBefore (collapsed := false) `Meta.isLevelDefEq (fun _ => return m!"simplified: {lhs} =?= {rhs}") do
          k lhs rhs
      else
        k lhs rhs
    else
      let lhs' ← instantiateLevelMVars lhs
      let rhs' ← instantiateLevelMVars rhs
      isLevelDefEqPreprocess lhs' rhs' k (instantiated := true) (trace := trace)

set_option compiler.ignoreBorrowAnnotation true in
mutual

  private partial def solve (u v : Level) : MetaM LBool := do
    match u, v with
    | Level.mvar mvarId, _ =>
      if (← mvarId.isReadOnly) then
        return LBool.undef
      else if (← isMVarWithGreaterDepth v mvarId) then
        -- If both `u` and `v` are both metavariables, but depth of v is greater, then we assign `v := u`.
        -- This can only happen when levelAssignDepth is set to a smaller value than depth (e.g. during TC synthesis)
        trace[Meta.isLevelDefEq.step] "{v} := {u}"
        assignLevelMVar v.mvarId! u
        return LBool.true
      else if !u.occurs v then
        trace[Meta.isLevelDefEq.step] "{u} := {v}"
        assignLevelMVar u.mvarId! v
        return LBool.true
      else if v.isMax && !strictOccursMax u v then
        solveSelfMax u.mvarId! v
        return LBool.true
      else
        return LBool.undef
    | _, Level.mvar .. => return LBool.undef -- Let `solve v u` to handle this case
    | Level.zero, Level.max v₁ v₂ =>
      Bool.toLBool <$> (isLevelDefEqAuxImpl Level.zero v₁ <&&> isLevelDefEqAuxImpl Level.zero v₂)
    | Level.zero, Level.imax _ v₂ =>
      Bool.toLBool <$> isLevelDefEqAuxImpl Level.zero v₂
    | Level.zero, Level.succ .. => return LBool.false
    | Level.succ u', v =>
      if v.isParam then
        return LBool.false
      else if u'.isMVar && u'.occurs v then
        return LBool.undef
      else
        match (← Meta.decLevel? v) with
        | some v' => Bool.toLBool <$> isLevelDefEqAuxImpl u' v'
        | none   =>
          if (← read).univApprox then
            if (← trySolveApprox u v) then
              return LBool.true
          return LBool.undef
    | _, _ =>
      if (← read).univApprox then
        if (← trySolveApprox u v) then
          return LBool.true
      return LBool.undef

  @[export lean_is_level_def_eq]
  partial def isLevelDefEqAuxImpl (lhs rhs : Level) : MetaM Bool :=
    withTraceNodeBefore `Meta.isLevelDefEq (fun _ => return m!"{lhs} =?= {rhs}") do
      isLevelDefEqPreprocess lhs rhs fun lhs rhs => do
        if !(← hasAssignableLevelMVar lhs <||> hasAssignableLevelMVar rhs) then
          if lhs == rhs then
            return true
          else
            let cfg ← getConfig
            if cfg.isDefEqStuckEx && (lhs.isMVar || rhs.isMVar) then do
              trace[Meta.isLevelDefEq.stuck] "{lhs} =?= {rhs}"
              Meta.throwIsDefEqStuck
            else
              return false
        else
          let r ← solve lhs rhs
          if r != LBool.undef then
            return r == LBool.true
          else
            let r ← solve rhs lhs
            if r != LBool.undef then
              return r == LBool.true
            else
              postponeIsLevelDefEq lhs rhs
              return true
end

builtin_initialize
  registerTraceClass `Meta.isLevelDefEq
  registerTraceClass `Meta.isLevelDefEq.stuck (inherited := true)

end Lean.Meta
