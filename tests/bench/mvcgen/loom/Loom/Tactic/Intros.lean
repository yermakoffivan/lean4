/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Lean.Elab
public meta import Lean.Elab
public import Loom.Tactic.Types
public import Lean.Meta.Sym.Simp.Goal
public section

open Lean Parser Meta Elab Tactic Sym Lean.Order
open Std.Internal.Do

namespace Loom

/-- Intro the right component of a meet precondition. -/
theorem meet_pre_intro' (a b c : Prop) : (b → a ⊑ c) → a ⊓ b ⊑ c :=
  fun h hab => h ((meet_le_right a b) hab) ((meet_le_left a b) hab)

/-- Eliminate `True` from the left of a meet precondition. -/
theorem true_meet_pre_elim (b c : Prop) : b ⊑ c → True ⊓ b ⊑ c :=
  fun h hab => h ((meet_le_right True b) hab)

/-! ## VCGen intro procedures

Procedures for introducing variables and hypotheses when unfolding Triples
and handling preconditions in VCGen goals.
-/

/-- Expand `pre ⊑ rhs` when the lattice type is a function type `σ₁ → ... → σₙ → BaseTy`
    into `∀ s₁ ... sₙ, pre s₁ ... sₙ ⊑ rhs s₁ ... sₙ`, then intro the `sᵢ`.
    This is needed after unfolding Triple when `Pred` has excess state arguments. -/
def introsExcessArgs (goal : Grind.Goal) : SymM Grind.Goal := goal.withContext do
  let type ← goal.mvarId.getType
  let_expr PartialOrder.rel α _inst pre rhs := type | return goal
  unless α.isForall do return goal
  -- Build ∀ (s₁ : σ₁) ... (sₙ : σₙ), (pre s₁ ... sₙ) ⊑ (rhs s₁ ... sₙ)
  let newTarget ← liftMetaM <| Meta.forallTelescope α fun ss _baseTy => do
    let preApplied := mkAppN pre ss
    let rhsApplied := mkAppN rhs ss
    let innerRel ← mkAppM ``PartialOrder.rel #[preApplied, rhsApplied]
    mkForallFVars ss innerRel
  let newTarget ← shareCommon newTarget
  let goalMVarId ← goal.mvarId.replaceTargetDefEq newTarget
  let goal := { goal with mvarId := goalMVarId }
  let .goal _ goal' ← goal.intros #[] | return goal
  return goal'

/-- Recursively decompose a meet precondition `a ⊓ b ⊑ c` by introducing
    individual components as hypotheses. Uses:
    - `meet_pre_intro`: `(a → b ⊑ c) → a ⊓ b ⊑ c` — intro left component
    - `true_meet_pre_elim`: `b ⊑ c → True ⊓ b ⊑ c` — skip True
    - `prop_pre_intro`: `(x → True ⊑ y) → x ⊑ y` — base case (non-met pre) -/
partial def introMeetPre (rules : VCGen.IntroRules) (goal : MVarId) : SymM MVarId :=
  goal.withContext do
  let type ← goal.getType
  let_expr PartialOrder.rel _α _inst pre _rhs := type | return goal
  -- Check if pre is a meet
  if pre.isAppOf ``meet && pre.getAppNumArgs ≥ 4 then
    let a := pre.getAppArgs[2]!
    if a.isConstOf ``True then
      -- True ⊓ b ⊑ c  →  b ⊑ c
      match ← rules.trueMeetPreElim.apply goal with
      | .goals [goal'] => introMeetPre rules goal'
      | _ => return goal
    else
      -- a ⊓ b ⊑ c  →  a → b ⊑ c
      match ← rules.meetPreIntro.apply goal with
      | .goals [goal'] =>
        let .goal _ goal'' ← Sym.intros goal' | return goal'
        introMeetPre rules goal''
      | _ => return goal
  else if !pre.isConstOf ``True then
    -- Non-meet, non-True pre: apply prop_pre_intro to get `pre → True ⊑ rhs`
    match ← rules.propPreIntro.apply goal with
    | .goals [goal'] =>
      let .goal _ goal'' ← Sym.intros goal' | return goal'
      return goal''
    | _ => return goal
  else
    return goal

/-- Unfold `⦃P⦄ x ⦃Q⦄` into `P ⊑ wp⟦x⟧ Q`, expanding excess state args and introing.
    Returns the original goal if not a Triple. -/
def unfoldTriple (rules : VCGen.IntroRules) (goal : Grind.Goal) : SymM Grind.Goal :=
  goal.withContext do
  let type ← goal.mvarId.getType
  unless type.isAppOf ``Triple do return goal
  match ← goal.apply rules.tripleIntro with
  | .goals [goal'] => introsExcessArgs goal'
  | _ => return goal

/-! ## Simplification and intros -/

/-- Simplify `goal` with the given `methods`, threading `simpState` through
    `VCGenM`'s state to reuse the persistent cache across calls.
    Returns `none` if simp closes the goal; otherwise returns the (possibly
    unchanged) goal. -/
def VCGenM.simpGoal (methods : Sym.Simp.Methods) (goal : Grind.Goal)
    : VCGenM (Option Grind.Goal) := do
  let decl ← goal.mvarId.getDecl
  let (result, simpState') ← Sym.Simp.SimpM.run (Sym.Simp.simp decl.type)
    methods {} (← get).simpState
  modify fun s => { s with simpState := simpState' }
  match ← result.toSimpGoalResult goal.mvarId with
  | .closed       => return none
  | .goal mvarId' => return some { goal with mvarId := mvarId' }
  | .noProgress   => return some goal

/-- Simplify the goal with `Sym.Simp.simpTelescope`
    (if simp methods are configured), then intro forall-bound variables.
    Returns `none` if simp closes the goal. -/
def introsAndSimp (goal : Grind.Goal) : VCGenM (Option Grind.Goal) := do
  let mut goal := goal
  if let some methods := (← read).simpMethods then
    let some goal' ← VCGenM.simpGoal { methods with pre := Sym.Simp.simpTelescope } goal
      | return none
    goal := goal'
  if (← goal.mvarId.getType).isForall then
    let .goal _ goal' ← goal.intros #[] | failure
    goal := goal'
  return some goal

end Loom

end -- public section
