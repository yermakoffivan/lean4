/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.ProofMode.Basic

public section

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

partial def mIntro [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal) (ident : TSyntax ``binderIdent) (k : MGoal → m Expr) : m Expr := do
  if let some (σs, H, T) := goal.target.app3? ``SPred.imp then
    let (name, ref) ← liftMetaM <| getFreshHypName ident
    let uniq ← liftMetaM mkFreshId
    let hyp := Hyp.mk name uniq H
    addHypInfo ref σs hyp (isBinder := true)
    let Q := goal.hyps
    let H := hyp.toExpr
    let (P, hand) := SPred.mkAnd goal.u goal.σs goal.hyps H
    let prf ← k { goal with hyps := P, target := T }
    let prf := mkApp7 (mkConst ``Intro.intro [goal.u]) σs P Q H T hand prf
    return prf
  else if let .letE name type val body _nondep := goal.target then
    let name ← match ident with
    | `(binderIdent| $name:ident) => pure name.getId
    | `(binderIdent| $_) => liftMetaM <| mkFreshUserName name
    -- Even if `_nondep = true` we want to retain the value of the let binding for the proof.
    withLetDecl name type val (nondep := false) fun val => do
      let prf ← k { goal with target := body.instantiate1 val }
      let prf ← liftMetaM <| mkLetFVars #[val] prf
      return prf
  else
    liftMetaM <| throwError "Target not an implication or let-binding {goal.target}"

-- This is regular MVar.intro, but it takes care not to leave the proof mode by preserving metadata
partial def mIntroForall [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal) (ident : TSyntax ``binderIdent) (k : MGoal → m Expr) : m Expr :=
  controlAt MetaM fun map => do
  let some (_type, σ, σs') := (← whnf goal.σs).app3? ``List.cons | liftMetaM <| throwError "Ambient state list not a cons {goal.σs}"
  let name ← match ident with
  | `(binderIdent| $name:ident) => pure name.getId
  | `(binderIdent| $_) => liftMetaM <| mkFreshUserName `s
  withLocalDeclD name σ fun s => do
    addLocalVarInfo ident (← getLCtx) s σ (isBinder := true)
    let H := pushForallContextIntoHyps σs' (mkApp goal.hyps s)
    let T := goal.target.betaRev #[s]
    map do
      let prf ← k { u := goal.u, σs:=σs', hyps:=H, target:=T }
      let prf ← mkLambdaFVars #[s] prf
      return mkApp5 (mkConst ``SPred.entails_cons_intro [goal.u]) σs' σ goal.hyps goal.target prf

def mIntroForallN [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal) (n : Nat) (k : MGoal → m Expr) : m Expr :=
  match n with
  | 0 => k goal
  | n+1 => do mIntroForall goal (← liftMetaM `(binderIdent| _)) fun g =>
              mIntroForallN g n k

macro_rules
  | `(tactic| mintro $pat₁ $pat₂ $pats:mintroPat*) => `(tactic| mintro $pat₁; mintro $pat₂ $pats*)
  | `(tactic| mintro $pat:mintroPat) => do
    match pat with
    | `(mintroPat| $_:binderIdent) => Macro.throwUnsupported -- handled by an elaborator below
    | `(mintroPat| ∀$_:binderIdent) => Macro.throwUnsupported -- handled by an elaborator below
    | `(mintroPat| $pat:mcasesPat) => `(tactic| mintro h; mcases h with $pat)
    | _ => Macro.throwUnsupported -- presently unreachable

def elabMIntro : Tactic
  | `(tactic| mintro $ident:binderIdent) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let goals ← IO.mkRef []
    mvar.assign (← mIntro goal ident fun newGoal => do
      let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
      goals.modify (m.mvarId! :: ·)
      return m)
    replaceMainGoal (← goals.get)
  | `(tactic| mintro ∀$ident:binderIdent) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let goals ← IO.mkRef []
    mvar.assign (← mIntroForall goal ident fun newGoal => do
      let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
      goals.modify (m.mvarId! :: ·)
      return m)
    replaceMainGoal (← goals.get)
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Do.ProofMode

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab.Tactic Meta
open Std.Internal.Tactic.Do
open Lean.Order
open Std.Internal.Do.CompleteLattice.Tactic

partial def mIntro [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal)
    (ident : TSyntax ``binderIdent) (k : MGoal → m Expr) : m Expr := do
  if let some (_l, _cl, H, T) := goal.target.app4? ``Lean.Order.himp then
    let (name, ref) ← liftMetaM <| getFreshHypName ident
    let uniq ← liftMetaM mkFreshId
    let hyp := Hyp.mk name uniq H
    addHypInfo ref goal.u goal.l goal.cl hyp (isBinder := true)
    let Q := goal.hyps
    let Hexpr := hyp.toExpr
    let (P, hand) := mkAnd goal.uType goal.l goal.cl goal.hyps Hexpr
    let prf ← k { goal with hyps := P, target := T }
    let frameInst ← liftMetaM <|
      synthInstance (mkApp2 (mkConst ``Lean.Order.Frame [goal.uType]) goal.l goal.cl)
    let prf := mkApp9 (mkConst ``Intro.intro [goal.uType]) goal.l goal.cl frameInst P Q Hexpr T hand prf
    return prf
  else if let .letE name type val body _nondep := goal.target then
    let name ← match ident with
    | `(binderIdent| $name:ident) => pure name.getId
    | `(binderIdent| $_) => liftMetaM <| mkFreshUserName name
    withLetDecl name type val (nondep := false) fun val => do
      let prf ← k { goal with target := body.instantiate1 val }
      let prf ← liftMetaM <| mkLetFVars #[val] prf
      return prf
  else
    liftMetaM <| throwError "Target not an implication or let-binding {goal.target}"

partial def mIntroForall [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal)
    (ident : TSyntax ``binderIdent) (k : MGoal → m Expr) : m Expr :=
  controlAt MetaM fun map => do
  let .forallE _binderName σ lBody _binderInfo ← whnf goal.l
    | liftMetaM <| throwError "Ambient lattice type not a Pi {goal.l}"
  let name ← match ident with
  | `(binderIdent| $name:ident) => pure name.getId
  | `(binderIdent| $_) => liftMetaM <| mkFreshUserName `s
  withLocalDeclD name σ fun s => do
    addLocalVarInfo ident (← getLCtx) s σ (isBinder := true)
    let l' := lBody.instantiate1 s
    let cl' ← synthInstance (mkApp (mkConst ``Lean.Order.CompleteLattice [goal.uType]) l')
    let H := pushForallContextIntoHyps l' cl' (mkApp goal.hyps s)
    let T := goal.target.betaRev #[s]
    map do
      let prf ← k { u := goal.u, l := l', cl := cl', hyps := H, target := T }
      let prf ← mkLambdaFVars #[s] prf
      return prf

def mIntroForallN [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m] (goal : MGoal) (n : Nat)
    (k : MGoal → m Expr) : m Expr :=
  match n with
  | 0 => k goal
  | n+1 => do mIntroForall goal (← liftMetaM `(binderIdent| _)) fun g =>
              mIntroForallN g n k

def elabMIntro : Tactic
  | `(tactic| mintro $ident:binderIdent) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let goals ← IO.mkRef []
    mvar.assign (← mIntro goal ident fun newGoal => do
      let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
      goals.modify (m.mvarId! :: ·)
      return m)
    replaceMainGoal (← goals.get)
  | `(tactic| mintro ∀$ident:binderIdent) => do
    let (mvar, goal) ← mStartMainGoal
    mvar.withContext do
    let goals ← IO.mkRef []
    mvar.assign (← mIntroForall goal ident fun newGoal => do
      let m ← mkFreshExprSyntheticOpaqueMVar newGoal.toExpr
      goals.modify (m.mvarId! :: ·)
      return m)
    replaceMainGoal (← goals.get)
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic.Internal.Do.ProofMode

namespace Lean.Elab.Tactic.Do.ProofMode
open Std.Do SPred.Tactic
open Lean Elab Tactic Meta

@[builtin_tactic Lean.Parser.Tactic.mintro]
def elabMIntroOpt : Tactic := fun stx => do
  if new_proof_mode.get (← getOptions) then
    return ← Lean.Elab.Tactic.Internal.Do.ProofMode.elabMIntro stx
  elabMIntro stx

end Lean.Elab.Tactic.Do.ProofMode
