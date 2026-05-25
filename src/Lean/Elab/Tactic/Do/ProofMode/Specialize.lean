/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Lean.Elab.Tactic.ElabTerm
public import Lean.Elab.Tactic.Do.ProofMode.MGoal
import Lean.Elab.Tactic.Do.ProofMode.Basic
import Lean.Elab.Tactic.Do.ProofMode.Focus

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

initialize registerTraceClass `Meta.Tactic.Do.specialize

def mSpecializeImpStateful (P : Expr) (QR : Expr) (arg : TSyntax `term) : OptionT TacticM (Expr × Expr) := do
  guard (arg.raw.isIdent)
  let some specHyp := parseHyp? QR | failure
  let mkApp3 (.const ``SPred.imp [u]) σs Q' R := specHyp.p | failure
  let some argRes := focusHyp u σs (SPred.mkAnd! u σs P QR) arg.raw.getId | failure
  let some hyp := parseHyp? argRes.focusHyp | failure
  addHypInfo arg σs hyp
  OptionT.mk do -- no OptionT failure after this point
  -- The goal is P ∧ (Q → R)
  -- argRes.proof : P ∧ (Q → R) ⊣⊢ₛ P' ∧ Q
  -- we want to return (R, (proof : P ∧ (Q → R) ⊢ₛ P ∧ R))
  let P' := argRes.restHyps
  let Q := argRes.focusHyp
  let hrefocus := argRes.proof -- P ∧ (Q → R) ⊣⊢ₛ P' ∧ Q
  let proof := mkApp6 (mkConst ``Specialize.imp_stateful [u]) σs P P' Q R hrefocus
  -- check proof
  trace[Meta.Tactic.Do.specialize] "Statefully specialize {specHyp.p} with {Q}. New Goal: {SPred.mkAnd! u σs P R}"
  unless ← isDefEq Q Q' do
    throwError "failed to specialize {specHyp.p} with {Q}"

  return ({ specHyp with p := R }.toExpr, proof)

def mSpecializeImpPure (P : Expr) (QR : Expr) (arg : TSyntax `term) : OptionT TacticM (Expr × Expr) := do
  let some specHyp := parseHyp? QR | panic! "Precondition of specializeImpPure violated"
  let mkApp3 (.const ``SPred.imp [u]) σs Q R := specHyp.p | failure
  let mut φ ← mkFreshExprMVar (mkSort .zero)
  let mut (hφ, mvarIds) ← try
    elabTermWithHoles arg.raw φ `specialize (allowNaturalHoles := true)
    catch _ => failure
  -- We might have hφ : φ and Q = ⌜φ⌝. In this case, convert hφ to a proof of ⊢ₛ ⌜φ⌝,
  -- so that we can infer an instance of `PropAsSPredTautology`.
  -- NB: PropAsSPredTautology φ ⌜φ⌝ is unfortunately impossible because ⊢ₛ ⌜φ⌝ does not imply φ.
  -- Hence this additional (lossy) conversion.
  if let some inst ← synthInstance? (mkApp3 (mkConst ``IsPure [u]) σs Q φ) then
    hφ := mkApp5 (mkConst ``Specialize.pure_taut [u]) σs φ Q inst hφ
    φ := mkApp2 (mkConst ``tautological [u]) σs Q

  let some inst ← synthInstance? (mkApp3 (mkConst ``PropAsSPredTautology [u]) φ σs Q)
    | failure

  OptionT.mk do -- no OptionT failure after this point
  -- The goal is P ∧ (Q → R)
  -- we want to return (R, (proof : P ∧ (Q → R) ⊢ₛ P ∧ R))
  pushGoals mvarIds
  let proof := mkApp7 (mkConst ``Specialize.imp_pure [u]) σs φ P Q R inst hφ
  -- check proof
  trace[Meta.Tactic.Do.specialize] "Purely specialize {specHyp.p} with {Q}. New Goal: {SPred.mkAnd! u σs P R}"
  -- logInfo m!"proof: {← inferType proof}"
  return ({ specHyp with p := R }.toExpr, proof)

def mSpecializeForall (P : Expr) (Ψ : Expr) (arg : TSyntax `term) : OptionT TacticM (Expr × Expr) := do
  let some specHyp := parseHyp? Ψ | panic! "Precondition of specializeForall violated"
  let mkApp3 (.const ``SPred.forall [uα, u]) α σs αR := specHyp.p | failure
  let (a, mvarIds) ← try
    elabTermWithHoles arg.raw α `specialize (allowNaturalHoles := true)
    catch _ => failure
  OptionT.mk do -- no OptionT failure after this point
  pushGoals mvarIds
  let proof := mkApp5 (mkConst ``Specialize.forall [uα, u]) α σs αR P a
  let R := αR.beta #[a]
  -- check proof
  trace[Meta.Tactic.Do.specialize] "Instantiate {specHyp.p} with {a}. New Goal: {SPred.mkAnd! u σs P R}"
  return ({ specHyp with p := R }.toExpr, proof)

def elabMSpecialize : Tactic
  | `(tactic| mspecialize $hyp $args*) => do
  let (mvar, goal) ← mStartMainGoal
  mvar.withContext do

  -- Want to prove goal P ⊢ T, where hyp occurs in P.
  -- So we
  -- 1. focus on hyp (referred to as H):  P ⊣⊢ₛ P' ∧ H. Prove P' ∧ H ⊢ₛ T
  -- 2. Produce a (transitive chain of) proofs
  --      P' ∧ H ⊢ P' ∧ H₁ ⊢ₛ P' ∧ H₂ ⊢ₛ ...
  --    One for each arg; end up with goal P' ∧ H' ⊢ₛ T
  -- 3. Recombine with SPred.mkAnd (NB: P' might be empty), compose with P' ∧ H' ⊣⊢ₛ SPred.mkAnd P' H'.
  -- 4. Make a new MVar for goal `SPred.mkAnd P' H' ⊢ T` and assign the transitive chain.
  let some specFocus := goal.focusHyp hyp.getId | throwError "unknown identifier `{hyp}`"
  let u := goal.u
  let σs := goal.σs
  let P := specFocus.restHyps
  let mut H := specFocus.focusHyp
  let some hyp' := parseHyp? H | panic! "Invariant of specialize violated"
  addHypInfo hyp σs hyp'
  -- invariant: proof (_ : { goal with hyps := SPred.mkAnd! σs P H }.toExpr) fills the mvar
  let mut proof : Expr → Expr :=
    mkApp7 (mkConst ``Specialize.focus [u]) σs goal.hyps P H goal.target specFocus.proof

  for arg in args do
    let res? ← OptionT.run
      (mSpecializeImpStateful P H arg
        <|> mSpecializeImpPure P H arg
        <|> mSpecializeForall P H arg)
    match res? with
    | some (H', H2H') =>
      -- logInfo m!"H: {H}, proof: {← inferType H2H'}"
      proof := fun hgoal => proof (mkApp6 (mkConst ``SPred.entails.trans [u]) σs (SPred.mkAnd! u σs P H) (SPred.mkAnd! u σs P H') goal.target H2H' hgoal)
      H := H'
    | none =>
      throwError "Could not specialize {H} with {arg}"

  let newMVar ← mkFreshExprSyntheticOpaqueMVar { goal with hyps := SPred.mkAnd! u σs P H }.toExpr
  mvar.assign (proof newMVar)
  replaceMainGoal [newMVar.mvarId!]

  | _ => throwUnsupportedSyntax

def elabMspecializePure : Tactic
  | `(tactic| mspecialize_pure $head $args* => $hyp) => do
  -- "mspecialize_pure" >> term >> many (ppSpace >> checkColGt "irrelevant" >> termParser (eval_prec max)) >> "as" >> ident
  let (mvar, goal) ← mStartMainGoal
  mvar.withContext do

  -- Want to prove goal P ⊢ₛ T. `head` is a pure proof of type `φ` that turns into `⊢ₛ H` via `start_entails`.
  -- So we
  -- 1. Introduce `head` via `PropAsEntails` as stateful hypothesis named `hyp`, P ∧ (hyp : H) ⊢ₛ T
  -- 2. (from here on it's the same as `mspecialize`.)
  --    Produce a (transitive chain of) proofs
  --      P ∧ H ⊢ P ∧ H₁ ⊢ₛ P ∧ H₂ ⊢ₛ ...
  --    One for each arg; end up with goal P ∧ H' ⊢ₛ T
  -- 3. Recombine with SPred.mkAnd (NB: P' might be empty), compose with P' ∧ H' ⊣⊢ₛ SPred.mkAnd P' H'.
  -- 4. Make a new MVar for goal `SPred.mkAnd P' H' ⊢ T` and assign the transitive chain.
  let u := goal.u
  let σs := goal.σs
  let P := goal.hyps
  let T := goal.target
  let hφ ← elabTerm head none
  let φ ← inferType hφ
  let H ← mkFreshExprMVar (mkApp (mkConst ``SPred [u]) σs)
  let inst ← synthInstance (mkApp3 (mkConst ``PropAsSPredTautology [u]) φ σs H)
  let uniq ← mkFreshId
  let mut H := (Hyp.mk hyp.getId uniq (← instantiateMVars H)).toExpr

  let goal : MGoal := { goal with hyps := SPred.mkAnd! u σs P H }
  -- invariant: proof (_ : { goal with hyps := SPred.mkAnd! u σs P H }.toExpr) fills the mvar
  let mut proof : Expr → Expr :=
    mkApp8 (mkConst ``Specialize.pure_start [u]) σs φ H P T inst hφ

  for arg in args do
    let res? ← OptionT.run
      (mSpecializeImpStateful P H ⟨arg⟩
        <|> mSpecializeImpPure P H ⟨arg⟩
        <|> mSpecializeForall P H ⟨arg⟩)
    match res? with
    | some (H', H2H') =>
      -- logInfo m!"H: {H}, proof: {← inferType H2H'}"
      proof := fun hgoal => proof (mkApp6 (mkConst ``SPred.entails.trans [u]) σs (SPred.mkAnd! u σs P H) (SPred.mkAnd! u σs P H') goal.target H2H' hgoal)
      H := H'
    | none =>
      throwError "Could not specialize {H} with {arg}"

  let some hyp' := parseHyp? H | panic! "Invariant of specialize_pure violated"
  addHypInfo hyp σs hyp'

  let newMVar ← mkFreshExprSyntheticOpaqueMVar { goal with hyps := SPred.mkAnd! u σs P H }.toExpr
  mvar.assign (proof newMVar)
  replaceMainGoal [newMVar.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice
open Std.Internal.Do.CompleteLattice.Tactic

/-- Build the PartialOrder instance from a CompleteLattice instance via projection. -/
private def toPartialOrder (uType : Level) (l cl : Expr) : Expr :=
  mkApp2 (mkConst ``Lean.Order.CompleteLattice.toPartialOrder [.succ uType]) l cl

def mSpecializeImpStateful (uType : Level) (l cl P : Expr) (QR : Expr) (arg : TSyntax `term) :
    OptionT TacticM (Expr × Expr) := do
  guard (arg.raw.isIdent)
  let some specHyp := parseHyp? QR | failure
  let mkApp4 (.const ``Lean.Order.himp _) _l _cl Q' R := specHyp.p | failure
  let some argRes := focusHyp uType l cl (mkAnd! uType l cl P QR) arg.raw.getId | failure
  let some hyp := parseHyp? argRes.focusHyp | failure
  addHypInfo arg (.succ uType) l cl hyp
  OptionT.mk do
  let P' := argRes.restHyps
  let Q := argRes.focusHyp
  let hrefocus := argRes.proof
  -- Specialize.imp_stateful [Frame l] {P P' Q R} (hrefocus) : P ⊓ (Q ⇨ R) ⊑ P ⊓ R
  -- args: l, cl, frameInst, P, P', Q, R, hrefocus (8 args)
  let frameInst ← synthInstance (mkApp2 (mkConst ``Lean.Order.Frame [uType]) l cl)
  let proof := mkApp8 (mkConst ``Specialize.imp_stateful [uType])
    l cl frameInst P P' Q R hrefocus
  trace[Meta.Tactic.Do.specialize] "Statefully specialize {specHyp.p} with {Q}."
  unless ← isDefEq Q Q' do
    throwError "failed to specialize {specHyp.p} with {Q}"
  return ({ specHyp with p := R }.toExpr, proof)

def mSpecializeImpPure (uType : Level) (l cl P : Expr) (QR : Expr) (arg : TSyntax `term) :
    OptionT TacticM (Expr × Expr) := do
  let some specHyp := parseHyp? QR | panic! "Precondition of specializeImpPure violated"
  let mkApp4 (.const ``Lean.Order.himp _) _l _cl Q R := specHyp.p | failure
  let mut φ ← mkFreshExprMVar (mkSort .zero)
  let mut (hφ, mvarIds) ← try
    elabTermWithHoles arg.raw φ `specialize (allowNaturalHoles := true)
    catch _ => failure
  -- If hφ : φ and Q = ⌜φ⌝ via IsPure, lift hφ to a top-entailment via Specialize.pure_taut
  if let some inst ← synthInstance? (mkApp4 (mkConst ``IsPure [uType]) l cl Q φ) then
    -- Specialize.pure_taut : args l, cl, φ, P, isPureInst, h (6 args)
    hφ := mkApp6 (mkConst ``Specialize.pure_taut [uType]) l cl φ Q inst hφ
    φ := mkApp3 (mkConst ``tautological [uType]) l cl Q
  let some inst ←
    synthInstance? (mkApp4 (mkConst ``PropAsCompleteLatticeTautology [uType]) φ l cl Q)
    | failure
  OptionT.mk do
  pushGoals mvarIds
  -- Specialize.imp_pure [Frame l] {P Q R} {φ} [tautInst] (h : φ) : P ⊓ (Q ⇨ R) ⊑ P ⊓ R
  -- args: l, cl, frameInst, P, Q, R, φ, tautInst, h (9 args)
  let frameInst ← synthInstance (mkApp2 (mkConst ``Lean.Order.Frame [uType]) l cl)
  let proof := mkApp9 (mkConst ``Specialize.imp_pure [uType])
    l cl frameInst P Q R φ inst hφ
  trace[Meta.Tactic.Do.specialize] "Purely specialize {specHyp.p} with {Q}."
  return ({ specHyp with p := R }.toExpr, proof)

def mSpecializeForall (uType : Level) (l cl P : Expr) (Ψ : Expr) (arg : TSyntax `term) :
    OptionT TacticM (Expr × Expr) := do
  let some specHyp := parseHyp? Ψ | panic! "Precondition of specializeForall violated"
  -- Match `Lean.Order.iInf l cl ι ψ` (4 args)
  let f := specHyp.p.getAppFn
  unless f.isConstOf ``Lean.Order.iInf do failure
  let levels := f.constLevels!
  let args := specHyp.p.getAppArgs
  unless args.size = 4 do failure
  let α := args[2]!
  let ψ := args[3]!
  let (a, mvarIds) ← try
    elabTermWithHoles arg.raw α `specialize (allowNaturalHoles := true)
    catch _ => failure
  OptionT.mk do
  pushGoals mvarIds
  -- Specialize.forall {α} {ψ} {P} (a : α) : P ⊓ iInf ψ ⊑ P ⊓ ψ a
  -- args: l, cl, P, α, ψ, a (6 args). Universes: [lTypeUniv, αTypeUniv]
  let proof := mkApp6 (mkConst ``Specialize.forall (levels.tail ++ [uType])) l cl P α ψ a
  let R := ψ.beta #[a]
  trace[Meta.Tactic.Do.specialize] "Instantiate {specHyp.p} with {a}."
  return ({ specHyp with p := R }.toExpr, proof)

def elabMSpecialize : Tactic
  | `(tactic| mspecialize $hyp $args*) => do
  let (mvar, goal) ← mStartMainGoal
  mvar.withContext do

  let some specFocus := goal.focusHyp hyp.getId | throwError "unknown identifier `{hyp}`"
  let uT := goal.uType
  let l := goal.l
  let cl := goal.cl
  let P := specFocus.restHyps
  let mut H := specFocus.focusHyp
  let some hyp' := parseHyp? H | panic! "Invariant of specialize violated"
  addHypInfo hyp goal.u l cl hyp'
  -- Specialize.focus {P P' Q R} (hfocus : P = P' ⊓ Q) (hnew : P' ⊓ Q ⊑ R) : P ⊑ R
  -- 8 args fully; 7 partially (leaving hnew) yields Expr → Expr.
  let mut proof : Expr → Expr :=
    mkApp8 (mkConst ``Specialize.focus [uT]) l cl goal.hyps P H goal.target specFocus.proof

  for arg in args do
    let res? ← OptionT.run
      (mSpecializeImpStateful uT l cl P H arg
        <|> mSpecializeImpPure uT l cl P H arg
        <|> mSpecializeForall uT l cl P H arg)
    match res? with
    | some (H', H2H') =>
      let prevH := H
      let prevHand := mkAnd! uT l cl P prevH
      let newHand := mkAnd! uT l cl P H'
      let po := toPartialOrder uT l cl
      proof := fun hgoal =>
        proof (mkApp7 (mkConst ``Lean.Order.PartialOrder.rel_trans [goal.u])
          l po prevHand newHand goal.target H2H' hgoal)
      H := H'
    | none =>
      throwError "Could not specialize {H} with {arg}"

  let newMVar ← mkFreshExprSyntheticOpaqueMVar
    { goal with hyps := mkAnd! uT l cl P H }.toExpr
  mvar.assign (proof newMVar)
  replaceMainGoal [newMVar.mvarId!]
  | _ => throwUnsupportedSyntax

def elabMspecializePure : Tactic
  | `(tactic| mspecialize_pure $head $args* => $hyp) => do
  let (mvar, goal) ← mStartMainGoal
  mvar.withContext do
  let uT := goal.uType
  let l := goal.l
  let cl := goal.cl
  let P := goal.hyps
  let T := goal.target
  let hφ ← elabTerm head none
  let φ ← inferType hφ
  let H ← mkFreshExprMVar l
  let inst ← synthInstance
    (mkApp4 (mkConst ``PropAsCompleteLatticeTautology [uT]) φ l cl H)
  let uniq ← mkFreshId
  let mut H := (Hyp.mk hyp.getId uniq (← instantiateMVars H)).toExpr

  let goal : MGoal := { goal with hyps := mkAnd! uT l cl P H }
  -- Specialize.pure_start {φ} {H P T} [tautInst] (hpure) (hgoal) : P ⊑ T
  -- args: l, cl, φ, H, P, T, tautInst, hpure, hgoal (9 args)
  let mut proof : Expr → Expr :=
    mkApp9 (mkConst ``Specialize.pure_start [uT]) l cl φ H P T inst hφ

  for arg in args do
    let res? ← OptionT.run
      (mSpecializeImpStateful uT l cl P H ⟨arg⟩
        <|> mSpecializeImpPure uT l cl P H ⟨arg⟩
        <|> mSpecializeForall uT l cl P H ⟨arg⟩)
    match res? with
    | some (H', H2H') =>
      let prevHand := mkAnd! uT l cl P H
      let newHand := mkAnd! uT l cl P H'
      let po := toPartialOrder uT l cl
      proof := fun hgoal =>
        proof (mkApp7 (mkConst ``Lean.Order.PartialOrder.rel_trans [goal.u])
          l po prevHand newHand goal.target H2H' hgoal)
      H := H'
    | none =>
      throwError "Could not specialize {H} with {arg}"

  let some hyp' := parseHyp? H | panic! "Invariant of specialize_pure violated"
  addHypInfo hyp goal.u l cl hyp'

  let newMVar ← mkFreshExprSyntheticOpaqueMVar
    { goal with hyps := mkAnd! uT l cl P H }.toExpr
  mvar.assign (proof newMVar)
  replaceMainGoal [newMVar.mvarId!]
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mspecialize]
def elabMSpecializeOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMSpecialize stx
  elabMSpecialize stx

@[builtin_tactic Lean.Parser.Tactic.mspecializePure]
def elabMspecializePureOpt : Tactic := fun stx => do
  if new_wp_monad.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMspecializePure stx
  elabMspecializePure stx

end Lean.Elab.Tactic.Do.ProofMode
