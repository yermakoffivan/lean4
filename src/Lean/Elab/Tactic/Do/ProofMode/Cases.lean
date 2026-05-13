/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.MGoal
public import Std.Tactic.Do.Syntax
import Lean.Elab.Tactic.Do.ProofMode.Pure
import Lean.Elab.Tactic.Do.ProofMode.Focus
import Lean.Elab.Tactic.Do.ProofMode.Basic

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic Lean.Parser.Tactic
open Lean Elab Tactic Meta

initialize registerTraceClass `Meta.Tactic.Do.cases

-- Given σs and H, produces H₁, H₂ and a proof that H₁ ∧ H₂ ⊣⊢ₛ H.
def synthIsAnd (u : Level) (σs H : Expr) : OptionT MetaM (Expr × Expr × Expr) := do
  if let some (_u, _σs, H₁, H₂) := parseAnd? H.consumeMData then
    return (H₁, H₂, mkApp2 (mkConst ``SPred.bientails.refl [u]) σs H)
  try
    let H₁ ← mkFreshExprMVar (mkApp (mkConst ``SPred [u]) σs)
    let H₂ ← mkFreshExprMVar (mkApp (mkConst ``SPred [u]) σs)
    let inst ← synthInstance (mkApp4 (mkConst ``IsAnd [u]) σs H H₁ H₂)
    return (H₁, H₂, mkApp5 (mkConst ``IsAnd.to_and [u]) σs H H₁ H₂ inst)
  catch _ => failure

-- Produce a proof for Q ∧ H ⊢ₛ T by opening a new goal P ⊢ₛ T, where P ⊣⊢ₛ Q ∧ H.
def mCasesAddGoal (u : Level) (goals : IO.Ref (Array MVarId)) (σs : Expr) (T : Expr) (Q : Expr) (H : Expr) : MetaM (Unit × MGoal × Expr) := do
  let (P, hand) := SPred.mkAnd u σs Q H
  -- hand : Q ∧ H ⊣⊢ₛ P
  -- Need to produce a proof that P ⊢ₛ T and return res
  let goal : MGoal := { u := u, σs := σs, hyps := P, target := T }
  let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
  goals.modify (·.push m.mvarId!)
  let prf := mkApp7 (mkConst ``Cases.add_goal [u]) σs P Q H T hand m
  let goal := { goal with hyps := SPred.mkAnd! u σs Q H }
  return ((), goal, prf)

private def getQH (goal : MGoal) : MetaM (Expr × Expr) := do
  let some (_, _, Q, H) := parseAnd? goal.hyps | throwError m!"Internal error: Hypotheses not a conjunction {goal.hyps}"
  return (Q, H)

-- Pretty much like sPureCore, but for existential quantifiers.
-- This function receives the hypothesis H=(∃ (x : α), ψ x) to destruct.
-- It will provide a proof for Q ∧ H ⊢ₛ T
-- if `k` produces a proof for Q ∧ ψ n ⊢ₛ T that may range over `name : α`.
-- It calls `k` with name.
def mCasesExists (H : Expr) (name : TSyntax ``binderIdent)
  (k : Expr /-name:α-/ → MetaM (α × MGoal × Expr)) : MetaM (α × MGoal × Expr) := do
  let some (α, σs, ψ) := H.consumeMData.app3? ``SPred.exists | throwError "Not an existential quantifier {H}"
  let (name, ref) ← getFreshHypName name
  withLocalDeclD name α fun x => do
    addLocalVarInfo ref (← getLCtx) x α
    let (r, goal, prf /- : goal.toExpr -/) ← k x
    let (Q, _) ← getQH goal
    let u ← getLevel α
    let prf := mkApp6 (mkConst ``Cases.exists [goal.u, u]) σs α Q ψ goal.target (← mkLambdaFVars #[x] prf)
    let goal := { goal with hyps := SPred.mkAnd! goal.u σs Q H }
    return (r, goal, prf)

-- goal is P ⊢ₛ T
-- The caller focuses on hypothesis H, P ⊣⊢ₛ Q ∧ H.
-- scasesCore on H, pat and k builds H ⊢ₛ H' according to pat, then calls k with H'
-- k knows context Q and builds goal Q ∧ H' ⊢ₛ T and a proof of the goal.
-- (k should not also apply H ⊢ₛ H' or unfocus because that does not work with spureCore which needs the see `P'` and not `Q ∧ _`.)
-- then scasesCore builds a proof for Q ∧ H ⊢ₛ T from P' ⊢ₛ T:
--   Q ∧ H ⊢ₛ Q ∧ H' ⊢ₛ P' ⊢ₛ T
-- and finally the caller builds the proof for
--   P ⊢ₛ Q ∧ H ⊢ₛ T
-- by unfocussing.
partial def mCasesCore (u : Level) (σs : Expr) (H : Expr) (pat : MCasesPat) (k : Expr → MetaM (α × MGoal × Expr)): MetaM (α × MGoal × Expr) :=
  match pat with
  | .clear => do
    let H' := emptyHyp u σs -- H' = ⌜True⌝
    let (a, goal, prf) ← k H'
    let (Q, _H) ← getQH goal
    -- prf : Q ∧ ⌜True⌝ ⊢ₛ T
    -- Then Q ∧ H ⊢ₛ Q ∧ ⌜True⌝ ⊢ₛ T
    let prf := mkApp5 (mkConst ``Cases.clear [u]) σs Q H goal.target prf
    let goal := { goal with hyps := SPred.mkAnd! u σs Q H }
    return (a, goal, prf)
  | .stateful name => do
    let (name, ref) ← getFreshHypName name
    let uniq ← mkFreshId
    let hyp := Hyp.mk name uniq H.consumeMData
    addHypInfo ref σs hyp (isBinder := true)
    k hyp.toExpr
  | .pure name => do
    mPureCore σs H name fun _ _hφ => do
      -- This case is very similar to the clear case, but we need to
      -- return Q ⊢ₛ T, not Q ∧ H ⊢ₛ T.
      let H' := emptyHyp u σs -- H' = ⌜True⌝
      let (a, goal, prf) ← k H'
      let (Q, _H) ← getQH goal
      -- prf : Q ∧ ⌜True⌝ ⊢ₛ T
      -- Then Q ⊢ₛ Q ∧ ⌜True⌝ ⊢ₛ T
      let prf := mkApp4 (mkConst ``Cases.pure [u]) σs Q goal.target prf
      let goal := { goal with hyps := Q }
      return (a, goal, prf)
    -- Now prf : Q ∧ H ⊢ₛ T (where H is ⌜φ⌝). Exactly what is needed.
  | .one name => do
    try
      -- First try to see if H can be introduced as a pure hypothesis
      let φ ← mkFreshExprMVar (mkSort .zero)
      let _ ← synthInstance (mkApp3 (mkConst ``IsPure [u]) σs H φ)
      mCasesCore u σs H (.pure name) k
    catch _ =>
      -- Otherwise introduce it as a stateful hypothesis.
      mCasesCore u σs H (.stateful name) k
  | .tuple [] => mCasesCore u σs H .clear k
  | .tuple [p] => mCasesCore u σs H p k
  | .tuple (p :: ps) => do
    if let some (H₁, H₂, hand) ← synthIsAnd u σs H then
      -- goal is Q ∧ H ⊢ₛ T, where `hand : H ⊣⊢ₛ H₁ ∧ H₂`. Plan:
      -- 1. Recurse on H₁ and H₂.
      -- 2. The inner callback sees H₁' and H₂' and calls k on H₁₂', where H₁₂' = mkAnd H₁' H₂'
      -- 3. The inner callback receives P' ⊢ₛ T, where (P' ⊣⊢ₛ Q ∧ H₁₂').
      -- 4. The inner callback returns (Q ∧ H₁') ∧ H₂' ⊢ₛ T
      -- 5. The outer callback receives (Q ∧ H₁') ∧ H₂ ⊢ₛ T
      -- 6. The outer callback reassociates and returns (Q ∧ H₂) ∧ H₁' ⊢ₛ T
      -- 7. The top-level receives (Q ∧ H₂) ∧ H₁ ⊢ₛ T
      -- 8. Reassociate to Q ∧ (H₁ ∧ H₂) ⊢ₛ T, rebuild Q ∧ H ⊢ₛ T and return it.
      let ((a, Q), goal, prf) ← mCasesCore u σs H₁ p fun H₁' => do
        let ((a, Q), goal, prf) ← mCasesCore u σs H₂ (.tuple ps) fun H₂' => do
          let (H₁₂', hand') := SPred.mkAnd u σs H₁' H₂'
          let (a, goal, prf) ← k H₁₂' -- (2)
          -- (3) prf : Q ∧ H₁₂' ⊢ₛ T
          -- (4) refocus to (Q ∧ H₁') ∧ H₂'
          let (Q, _H) ← getQH goal
          let T := goal.target
          let prf := mkApp8 (mkConst ``Cases.and_1 [u]) σs Q H₁' H₂' H₁₂' T hand' prf
          -- check prf
          let QH₁' := SPred.mkAnd! u σs Q H₁'
          let goal := { goal with hyps := SPred.mkAnd! u σs QH₁' H₂' }
          return ((a, Q), goal, prf)
        -- (5) prf : (Q ∧ H₁') ∧ H₂ ⊢ₛ T
        -- (6) refocus to prf : (Q ∧ H₂) ∧ H₁' ⊢ₛ T
        let prf := mkApp6 (mkConst ``Cases.and_2 [u]) σs Q H₁' H₂ goal.target prf
        let QH₂ := SPred.mkAnd! u σs Q H₂
        let goal := { goal with hyps := SPred.mkAnd! u σs QH₂ H₁' }
        return ((a, Q), goal, prf)
      -- (7) prf : (Q ∧ H₂) ∧ H₁ ⊢ₛ T
      -- (8) rearrange to Q ∧ H ⊢ₛ T
      let prf := mkApp8 (mkConst ``Cases.and_3 [u]) σs Q H₁ H₂ H goal.target hand prf
      let goal := { goal with hyps := SPred.mkAnd! u σs Q H }
      return (a, goal, prf)
    else if let some (_α, σs, ψ) := H.consumeMData.app3? ``SPred.exists then
      let .one n := p
        | throwError "cannot further destruct a term after moving it to the Lean context"
      -- goal is Q ∧ (∃ x, ψ x) ⊢ₛ T. The plan is pretty similar to sPureCore:
      -- 1. Recurse on ψ n where (n : α) is named according to the head pattern p.
      -- 2. Receive a proof for Q ∧ ψ n ⊢ₛ T.
      -- 3. Build a proof for Q ∧ (∃ x, ψ x) ⊢ₛ T from it (in sCasesExists).
      mCasesExists H n fun x => mCasesCore u σs (ψ.betaRev #[x]) (.alts ps) k
    else throwError "Neither a conjunction nor an existential quantifier {H}"
  | .alts [] => throwUnsupportedSyntax
  | .alts [p] => mCasesCore u σs H p k
  | .alts (p :: ps) => do
    let some (σs, H₁, H₂) := H.consumeMData.app3? ``SPred.or | throwError "Not a disjunction {H}"
    -- goal is Q ∧ (H₁ ∨ H₂) ⊢ₛ T. Plan:
    -- 1. Recurse on H₁ and H₂ with the same k.
    -- 2. Receive proofs for Q ∧ H₁ ⊢ₛ T and Q ∧ H₂ ⊢ₛ T.
    -- 3. Build a proof for Q ∧ (H₁ ∨ H₂) ⊢ₛ T from them.
    let (_a, goal₁,  prf₁) ← mCasesCore u σs H₁ p k
    let (a,  _goal₂, prf₂) ← mCasesCore u σs H₂ (.alts ps) k
    let (Q, _H₁) ← getQH goal₁
    let goal := { goal₁ with hyps := SPred.mkAnd! u σs Q (mkApp3 (mkConst ``SPred.or [u]) σs H₁ H₂) }
    let prf := mkApp7 (mkConst ``SPred.and_or_elim_r [u]) σs Q H₁ H₂ goal.target prf₁ prf₂
    return (a, goal, prf)

private theorem assembled_proof {σs} {P P' Q H H' T : SPred σs}
  (hfocus : P ⊣⊢ₛ Q ∧ H) (hcases : H ⊢ₛ H') (hand : Q ∧ H' ⊣⊢ₛ P') (hprf₃ : P' ⊢ₛ T) : P ⊢ₛ T :=
  hfocus.mp.trans ((SPred.and_mono_r hcases).trans (hand.mp.trans hprf₃))

private theorem blah2 {σs} {P Q H R : SPred σs}
  (h₁ : P ⊣⊢ₛ Q ∧ H) (h₂ : Q ∧ H ⊢ₛ R) : P ⊢ₛ R :=
  h₁.mp.trans h₂

private theorem blah3 {σs} {P Q H T : SPred σs}
  (hand : Q ∧ H ⊣⊢ₛ P) (hgoal : P ⊢ₛ T) : Q ∧ H ⊢ₛ T :=
  hand.mp.trans hgoal

def elabMCases : Tactic
  | `(tactic| mcases $hyp:ident with $pat:mcasesPat) => do
    let pat ← liftMacroM <| MCasesPat.parse pat
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do

    let focus ← goal.focusHypWithInfo hyp
    -- goal : P ⊢ₛ T,
    -- hfocus : P ⊣⊢ₛ Q ∧ H
    let Q := focus.restHyps
    let H := focus.focusHyp
    let goals ← IO.mkRef #[]
    let (_, _new_goal, prf) ← mCasesCore goal.u goal.σs H pat (mCasesAddGoal goal.u goals goal.σs goal.target Q)

    -- Now prf : Q ∧ H ⊢ₛ T. Prepend hfocus.mp, done.
    let prf := focus.rewriteHyps goal prf
    -- check prf
    mvar.assign prf
    replaceMainGoal (← goals.get).toList
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Tactic Meta Lean.Parser.Tactic
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice
open Std.Internal.Do.CompleteLattice.Tactic

/-- Given `(l, cl, H)` produces `(H₁, H₂, proof)` where `proof : H = H₁ ⊓ H₂`. -/
def synthIsAnd (uType : Level) (l cl H : Expr) : OptionT MetaM (Expr × Expr × Expr) := do
  try
    let H₁ ← mkFreshExprMVar l
    let H₂ ← mkFreshExprMVar l
    -- IsAnd {l} [cl] (P : l) (Q₁ Q₂ : outParam l) — args: l, cl, P, Q₁, Q₂ (5)
    let inst ← synthInstance (mkApp5 (mkConst ``IsAnd [uType]) l cl H H₁ H₂)
    let H₁ ← instantiateMVars H₁
    let H₂ ← instantiateMVars H₂
    -- IsAnd.to_and : P = Q₁ ⊓ Q₂ — args: l, cl, P, Q₁, Q₂, inst (6)
    return (H₁, H₂, mkApp6 (mkConst ``IsAnd.to_and [uType]) l cl H H₁ H₂ inst)
  catch _ =>
    let some (_u, _l, _cl, H₁, H₂) := parseAnd? H.consumeMData | failure
    -- H is structurally `H₁ ⊓ H₂` already; proof is `Eq.refl`
    return (H₁, H₂, mkApp2 (mkConst ``Eq.refl [.succ uType]) l H)

def mCasesAddGoal (uType : Level) (goals : IO.Ref (Array MVarId))
    (uSort : Level) (l cl T Q H : Expr) : MetaM (Unit × MGoal × Expr) := do
  let (P, hand) := mkAnd uType l cl Q H
  let goal : MGoal := { u := uSort, l, cl, hyps := P, target := T }
  let m ← mkFreshExprSyntheticOpaqueMVar goal.toExpr
  goals.modify (·.push m.mvarId!)
  -- Cases.add_goal {P Q H T} (hand : Q ⊓ H = P) (hgoal : P ⊑ T) : Q ⊓ H ⊑ T
  -- args: l, cl, P, Q, H, T, hand, hgoal (8)
  let prf := mkApp8 (mkConst ``Cases.add_goal [uType]) l cl P Q H T hand m
  let goal := { goal with hyps := mkAnd! uType l cl Q H }
  return ((), goal, prf)

private def getQH (goal : MGoal) : MetaM (Expr × Expr) := do
  let some (_, _, _, Q, H) := parseAnd? goal.hyps
    | throwError m!"Internal error: Hypotheses not a conjunction {goal.hyps}"
  return (Q, H)

def mCasesExists (_uSort uType : Level) (l cl H : Expr) (name : TSyntax ``binderIdent)
    (k : Expr → MetaM (α × MGoal × Expr)) : MetaM (α × MGoal × Expr) := do
  -- Match `Lean.Order.iSup l cl ι ψ`
  let f := H.consumeMData.getAppFn
  unless f.isConstOf ``Lean.Order.iSup do throwError "Not an existential quantifier {H}"
  let args := H.consumeMData.getAppArgs
  unless args.size = 4 do throwError "Not an existential quantifier {H}"
  let α := args[2]!
  let ψ := args[3]!
  let (name, ref) ← getFreshHypName name
  withLocalDeclD name α fun x => do
    addLocalVarInfo ref (← getLCtx) x α
    let (r, goal, prf) ← k x
    let (Q, _) ← getQH goal
    let αSort ← getLevel α
    let αLevel := αSort.dec.getD αSort
    let frameInst ← synthInstance (mkApp2 (mkConst ``Lean.Order.Frame [uType]) l cl)
    -- Cases.exists [Frame l] {Q} {α} {ψ} {T} (h : ∀ a, Q ⊓ ψ a ⊑ T) : Q ⊓ iSup ψ ⊑ T
    -- args: l, cl, frameInst, Q, α, ψ, T, h (8). Universes: [l_uType, α_universe].
    let prf := mkApp8 (mkConst ``Cases.exists [uType, αLevel])
      l cl frameInst Q α ψ goal.target (← mkLambdaFVars #[x] prf)
    let goal := { goal with hyps := mkAnd! uType l cl Q H }
    return (r, goal, prf)

partial def mCasesCore (uSort : Level) (l cl H : Expr) (pat : MCasesPat)
    (k : Expr → MetaM (α × MGoal × Expr)) : MetaM (α × MGoal × Expr) :=
  let uType := uSort.dec.getD uSort
  match pat with
  | .clear => do
    let H' := emptyHyp uType l cl
    let (a, goal, prf) ← k H'
    let (Q, _H) ← getQH goal
    -- Cases.clear {Q H T} (hgoal : Q ⊓ ⊤ ⊑ T) : Q ⊓ H ⊑ T  (args: l, cl, Q, H, T, hgoal = 6)
    let prf := mkApp6 (mkConst ``Cases.clear [uType]) l cl Q H goal.target prf
    let goal := { goal with hyps := mkAnd! uType l cl Q H }
    return (a, goal, prf)
  | .stateful name => do
    let (name, ref) ← getFreshHypName name
    let uniq ← mkFreshId
    let hyp := Hyp.mk name uniq H.consumeMData
    addHypInfo ref uSort l cl hyp (isBinder := true)
    k hyp.toExpr
  | .pure name => do
    mPureCore l cl H name fun _ _hφ => do
      let H' := emptyHyp uType l cl
      let (a, goal, prf) ← k H'
      let (Q, _H) ← getQH goal
      -- Cases.pure {Q T} (hgoal : Q ⊓ ⊤ ⊑ T) : Q ⊑ T  (args: l, cl, Q, T, hgoal = 5)
      let prf := mkApp5 (mkConst ``Cases.pure [uType]) l cl Q goal.target prf
      let goal := { goal with hyps := Q }
      return (a, goal, prf)
  | .one name => do
    try
      let φ ← mkFreshExprMVar (mkSort .zero)
      -- IsPure {l} [cl] (P : l) (φ) — args: l, cl, P, φ (4)
      let _ ← synthInstance (mkApp4 (mkConst ``IsPure [uType]) l cl H φ)
      mCasesCore uSort l cl H (.pure name) k
    catch _ =>
      mCasesCore uSort l cl H (.stateful name) k
  | .tuple [] => mCasesCore uSort l cl H .clear k
  | .tuple [p] => mCasesCore uSort l cl H p k
  | .tuple (p :: ps) => do
    if let some (H₁, H₂, hand) ← synthIsAnd uType l cl H then
      let ((a, _Q), goal, prf) ← mCasesCore uSort l cl H₁ p fun H₁' => do
        let ((a, _Q), goal, prf) ← mCasesCore uSort l cl H₂ (.tuple ps) fun H₂' => do
          let (H₁₂', hand') := mkAnd uType l cl H₁' H₂'
          let (a, goal, prf) ← k H₁₂'
          let (Q, _H) ← getQH goal
          let T := goal.target
          -- Cases.and_1 {Q H₁' H₂' H₁₂' T} (hand) (hgoal) : (Q ⊓ H₁') ⊓ H₂' ⊑ T  (9 args)
          let prf := mkApp9 (mkConst ``Cases.and_1 [uType])
            l cl Q H₁' H₂' H₁₂' T hand' prf
          let QH₁' := mkAnd! uType l cl Q H₁'
          let goal := { goal with hyps := mkAnd! uType l cl QH₁' H₂' }
          return ((a, Q), goal, prf)
        -- Cases.and_2 {Q H₁' H₂ T} (hgoal) : (Q ⊓ H₂) ⊓ H₁' ⊑ T  (7 args)
        let prf := mkApp7 (mkConst ``Cases.and_2 [uType])
          l cl _Q H₁' H₂ goal.target prf
        let QH₂ := mkAnd! uType l cl _Q H₂
        let goal := { goal with hyps := mkAnd! uType l cl QH₂ H₁' }
        return ((a, _Q), goal, prf)
      -- Cases.and_3 {Q H₁ H₂ H T} (hand : H = H₁ ⊓ H₂) (hgoal) : Q ⊓ H ⊑ T  (9 args)
      let prf := mkApp9 (mkConst ``Cases.and_3 [uType])
        l cl _Q H₁ H₂ H goal.target hand prf
      let goal := { goal with hyps := mkAnd! uType l cl _Q H }
      return (a, goal, prf)
    else if let some (_l, _cl, _ι, ψ) := H.consumeMData.app4? ``Lean.Order.iSup then
      let .one n := p
        | throwError "cannot further destruct a term after moving it to the Lean context"
      mCasesExists uSort uType l cl H n fun x =>
        mCasesCore uSort l cl (ψ.betaRev #[x]) (.alts ps) k
    else throwError "Neither a conjunction nor an existential quantifier {H}"
  | .alts [] => throwUnsupportedSyntax
  | .alts [p] => mCasesCore uSort l cl H p k
  | .alts (p :: ps) => do
    -- Match `Lean.Order.join l cl H₁ H₂` (4 args)
    let mkApp4 (.const ``Lean.Order.join _) _l _cl H₁ H₂ := H.consumeMData
      | throwError "Not a disjunction {H}"
    let (_a, goal₁, prf₁) ← mCasesCore uSort l cl H₁ p k
    let (a, _goal₂, prf₂) ← mCasesCore uSort l cl H₂ (.alts ps) k
    let (Q, _H₁) ← getQH goal₁
    let frameInst ← synthInstance (mkApp2 (mkConst ``Lean.Order.Frame [uType]) l cl)
    let joinExpr := mkApp4 (mkConst ``Lean.Order.join [uType]) l cl H₁ H₂
    let goal := { goal₁ with hyps := mkAnd! uType l cl Q joinExpr }
    -- and_or_elim_r [Frame l] (hleft) (hright) : P ⊓ (Q ⊔ R) ⊑ T  (9 args)
    let prf := mkApp9 (mkConst ``Std.Internal.Do.CompleteLattice.and_or_elim_r [uType])
      l cl Q H₁ H₂ goal.target frameInst prf₁ prf₂
    return (a, goal, prf)

def elabMCases : Tactic
  | `(tactic| mcases $hyp:ident with $pat:mcasesPat) => do
    let pat ← liftMacroM <| MCasesPat.parse pat
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do

    let focus ← goal.focusHypWithInfo hyp
    let Q := focus.restHyps
    let H := focus.focusHyp
    let goals ← IO.mkRef #[]
    let (_, _new_goal, prf) ← mCasesCore goal.u goal.l goal.cl H pat
      (mCasesAddGoal goal.uType goals goal.u goal.l goal.cl goal.target Q)

    let prf := focus.rewriteHyps goal prf
    mvar.assign prf
    replaceMainGoal (← goals.get).toList
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic Lean.Parser.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mcases]
def elabMCasesOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMCases stx
  elabMCases stx

end Lean.Elab.Tactic.Do.ProofMode
