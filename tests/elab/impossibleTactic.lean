import Lean
/-! # Tests for the `impossible` tactic combinator -/

-- Closed goal: the user proves the plain negation.

/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : 0 = 1 := by
  impossible by decide

-- When the user's tactic fails to close the negation, the normal `unsolved goals`
-- error is reported (no error suppression).
/--
error: unsolved goals
⊢ ¬0 = 0
-/
#guard_msgs in
example : 0 = 0 := by
  impossible by skip

-- The tactic reverts all hypotheses, producing a closed-form negation.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example (n : Nat) : n = n + 1 := by
  impossible by
    intro h
    exact Nat.succ_ne_zero _ ((h 0).symm)

-- Goal `False`: `¬False` is `False → False`, which is closed by `exact id`.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : False := by
  impossible by exact id

-- The tactic works at any universe, including non-`Prop` goals: it falls back
-- to `_ → False` instead of `Not _` so the construction is well-typed.
/--
error: unsolved goals
⊢ ∀ (x : Nat), False
-/
#guard_msgs in
example : Nat := by
  impossible by skip

-- Universe parameters of the surrounding declaration are not abstracted: the
-- negated target inherits them as fixed `Type u` / `Type v` binders rather than
-- universe mvars.
/--
error: unsolved goals
⊢ ¬∀ (α : Type u) (β : Type v), ¬ULift α = ULift β
-/
#guard_msgs in
example (α : Type u) (β : Type v) : ¬(ULift.{v} α = ULift.{u} β) := by
  impossible by skip

-- The proof of the negation is registered as a private aux lemma, which means
-- the kernel re-checks it. A tactic that produces a syntactically well-formed
-- but ill-typed mvar assignment (here, a `Nat` literal where a proof is
-- expected) is therefore rejected by the kernel rather than silently absorbed.
open Lean Lean.Elab Lean.Elab.Tactic in
elab "_fake_close" : tactic => do
  let mvar ← getMainGoal
  mvar.assign (mkNatLit 0)
/--
error: (kernel) declaration type mismatch, '_example._proof_1' has type
  ¬True → Nat
but it is expected to have type
  ¬¬True
-/
#guard_msgs in
example : ¬True := by
  impossible by
    intro _
    _fake_close

-- The tactic should complain if the goal contains expression metavariables.
section
opaque P : Nat → Prop
opaque h : ∀ {n : Nat}, P n → True
/--
@ +3:2...12
error: `impossible`: goal contains metavariables
  P ?n
-/
#guard_msgs (positions := true) in
example : True := by
  apply h
  impossible by intro h; exact h
end

-- The tactic should complain if the goal contains universe metavariables. We
-- have to inject one manually since user-level `Sort _` is auto-bound.
section
open Lean Lean.Elab.Tactic in
elab "with_level_mvar_goal" : tactic => do
  let lvl ← Lean.Meta.mkFreshLevelMVar
  let ty := mkApp (mkConst ``Subsingleton [lvl]) (mkSort lvl)
  let g ← Lean.Meta.mkFreshExprSyntheticOpaqueMVar ty
  setGoals [g.mvarId!]
set_option pp.mvars false in
/--
error: `impossible`: goal contains universe metavariables
  Subsingleton (Sort _)
-/
#guard_msgs in
example : True := by
  with_level_mvar_goal
  impossible by skip
end

-- Errors in the user's term/tactic are surfaced normally.
/--
error: Unknown identifier `this_identifier_does_not_exist`
-/
#guard_msgs in
example (n : Nat) : n = 0 := by
  impossible by exact this_identifier_does_not_exist

-- `impossible` plays well with surrounding tactic combinators.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : 0 = 1 := by
  first | impossible by decide | exact rfl

-- `impossible` fails when there is no goal.
/--
error: No goals to be solved
-/
#guard_msgs in
example : True := by
  trivial
  impossible by skip

-- With multiple goals, `impossible` only admits the first; the second is left
-- for the next tactic.
/--
warning: declaration uses `sorry`
-/
#guard_msgs in
example : 0 = 1 ∧ True := by
  constructor
  impossible by decide
  trivial
