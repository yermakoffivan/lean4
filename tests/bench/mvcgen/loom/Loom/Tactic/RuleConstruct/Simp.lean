/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Loom.Tactic.RuleConstruct.Spec

public section

namespace Loom

open Lean Meta Lean.Order Sym Std.Internal.Do

/-!
Construction of backward rules from equality specs.

This module handles `@[spec]` lemmas registered through the simp/unfold side of the spec
database. Such lemmas have the shape `lhs = rhs`; the generated rule rewrites a `wp lhs` goal to a
`wp rhs` premise and lets VCGen continue decomposing `rhs`.
-/

private def preprocessSimpSpecExpr : Expr → SymM Expr :=
  shareCommon <=< liftMetaM ∘ unfoldReducible

/--
Create the proof term for a backward rule built from an equality spec theorem.

Given an instantiated equality spec `lhs = rhs` where both sides have type `m α`, this constructs a
rule proof of the form
```
pre ⊑ wp rhs post epost s₁ ... sₙ →
pre ⊑ wp lhs post epost s₁ ... sₙ
```
The proof rewrites the whole weakest-precondition target using `Eq.mpr` with a `congrArg` proof:
```
motive = fun prog => pre ⊑ wp prog post epost s₁ ... sₙ
Eq.mpr (congrArg motive eqPrf) h
```

The postcondition, exception postcondition and precondition are created as metavariables and then
abstracted by `abstractMVars`, giving a reusable proof term for `mkBackwardRuleFromExpr`.
-/
public def mkSimpSpecBackwardProof
    (m Pred EPred α lhs rhs eqPrf : Expr) (ss : Array Expr) : SymM AbstractMVarsResult := do
  let postTy ← mkArrow α Pred
  let post ← mkFreshExprMVar (userName := `post) postTy
  let epost ← mkFreshExprMVar (userName := `epost) EPred
  let mkWpApplyPostEpost (prog : Expr) : SymM Expr := do
    let wpProg ← mkAppM ``wp #[prog, post, epost]
    return mkAppN wpProg ss
  let lhsWp ← mkWpApplyPostEpost lhs
  let rhsWp ← mkWpApplyPostEpost rhs
  -- let preTy ← preprocessSimpSpecExpr (← Meta.inferType lhsWp)
  let preTy ← Meta.inferType lhsWp
  let pre ← mkFreshExprMVar (userName := `pre) preTy
  -- let premiseType ← preprocessSimpSpecExpr <| ← mkAppM ``PartialOrder.rel #[pre, rhsWp]
  let premiseType ← mkAppM ``PartialOrder.rel #[pre, rhsWp]
  let h ← mkFreshExprMVar (userName := `h) premiseType
  -- let mα ← instantiateMVarsS (mkApp m α)
  let mα := mkApp m α
  let motive ← withLocalDeclD `prog mα fun prog => do
    let progWp ← mkWpApplyPostEpost prog
    let body ← mkAppM ``PartialOrder.rel #[pre, progWp]
    mkLambdaFVars #[prog] body
  let eqProof ← liftMetaM <| Meta.mkCongrArg motive eqPrf
  let prf ← liftMetaM <| Meta.mkEqMPR eqProof h
  abstractMVars prf

/--
Try to build a backward rule from a single equality spec theorem.

This is the equality-spec counterpart of `tryMkBackwardRuleFromSpec`. It instantiates the theorem,
checks that the equation type is definitionally equal to `m α` for the current monad, and checks
that the `Pred` and `WPMonad` instance match the current goal.

After instantiation it tries to synthesize unresolved typeclass metavariables. This is needed for
abstract monad equations such as `Spec.UnfoldLift.get`, where matching a concrete monad like
`ExceptT ε (StateM σ)` leaves dictionary arguments to be filled.

The RHS is normalized by reducing projections and unfolding reducible definitions. For example,
class projection unfold lemmas often produce RHS terms containing projections from instance
dictionaries; reducing them exposes the actual operation that VCGen should continue on.

Finally, excess state arguments are represented by fresh metavariables and
`mkSimpSpecBackwardProof` builds the proof:
```
pre ⊑ wp rhs post epost s₁ ... sₙ →
pre ⊑ wp lhs post epost s₁ ... sₙ
```
-/
public def tryMkBackwardRuleFromSimpSpec (specThm : SpecTheoremNew)
    (m Pred instWP : Expr) (excessArgs : Array Expr) : OptionT SymM BackwardRule := do
  let wpInstTy ← whnfR (← Meta.inferType instWP)
  let_expr WPMonad m' Pred' EPred _monadInst _instAL _instEAL := wpInstTy
    | throwError "expected a WPMonad instance, got {wpInstTy}"
  guard <| ← isDefEqGuarded m m'
  guard <| ← isDefEqGuarded Pred Pred'
  let (xs, _, eqPrf, eqType) ← specThm.instantiate
  let_expr Eq eqα lhs rhs := eqType
    | throwError "simp spec is not an equation: {eqType}"
  let α ← Meta.mkFreshTypeMVar
  guard <| ← isDefEqGuarded eqα (mkApp m α)
  for x in xs do
    if x.isMVar && !(← x.mvarId!.isAssigned) then
      let xType ← Meta.inferType x
      try
        x.mvarId!.assign (← Meta.synthInstance xType)
      catch _ =>
        pure ()
  -- let eqPrf ← instantiateMVarsS eqPrf
  -- let lhs ← instantiateMVarsS lhs
  -- let rhs ← instantiateMVarsS rhs
  -- -- Reduce projections, for example dictionary projections exposed after instance synthesis.
  -- let rhs ← liftMetaM <| Grind.foldProjs rhs
  let rhs ← liftMetaM <| Meta.transform rhs (pre := fun e => do
    if let .proj .. := e then
      if let some r ← withDefault <| Meta.reduceProj? e then return .done r
    return .continue)
  -- let rhs ← preprocessSimpSpecExpr rhs
  let mut ss := #[]
  for arg in excessArgs do
    let ty ← Sym.inferType arg
    ss := ss.push <| ← mkFreshExprMVar (userName := mkStateName ty) ty
  let res ← mkSimpSpecBackwardProof m Pred EPred α lhs rhs eqPrf ss
  mkBackwardRuleFromExpr res.expr res.paramNames.toList

/-! ## Tests for mkSimpSpecBackwardProof -/

section Test

private def testSimpBackwardRule' (declName : Name) (m Pred instWP : Expr)
    (excessArgs : Array Expr) : MetaM Expr := do
  let some specThm ← mkSpecTheoremNewFromSimpDecl? declName (prio := eval_prio default)
    | throwError "mkSpecTheoremNewFromSimpDecl? returned none for {declName}"
  let rule ← SymM.run do
    tryMkBackwardRuleFromSimpSpec specThm m Pred instWP excessArgs
  match rule with
  | some br => inferType br.expr
  | none => throwError "tryMkBackwardRuleFromSimpSpec returned none for {declName}"

private def simp_globalPure_test' (n : Nat) : StateM Nat Nat :=
  pure n

private theorem simp_globalPure_eq_test' (n : Nat) :
    simp_globalPure_test' n = (pure n : StateM Nat Nat) := rfl

/--
info: Test I' (simp equality, StateM Nat, n=1): ∀ (pre : Prop) (n : Nat) (post : Nat → Nat → Prop) (epost : EPost⟨⟩)
  (s : Nat), pre ⊑ wp (pure n) post epost s → pre ⊑ wp (simp_globalPure_test' n) post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let m ← mkAppM ``StateM #[nat]
  let Pred ← mkArrow nat (mkSort 0)
  let errTy := mkConst ``EPost.nil
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) errTy)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, errTy, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``simp_globalPure_eq_test' m Pred instWP #[s]
    logInfo m!"Test I' (simp equality, StateM Nat, n=1): {ty}"

private def simp_etaPure_test' : Nat → StateM Nat Nat :=
  fun n => pure n

private theorem simp_etaPure_eq_test' :
    simp_etaPure_test' = fun n => (pure n : StateM Nat Nat) := rfl

/--
info: Test J' (eta simp equality, StateM Nat, n=1): ∀ (pre : Prop) (a : Nat) (post : Nat → Nat → Prop) (epost : EPost⟨⟩)
  (s : Nat), pre ⊑ wp (pure a) post epost s → pre ⊑ wp (simp_etaPure_test' a) post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let m ← mkAppM ``StateM #[nat]
  let Pred ← mkArrow nat (mkSort 0)
  let errTy := mkConst ``EPost.nil
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) errTy)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, errTy, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``simp_etaPure_eq_test' m Pred instWP #[s]
    logInfo m!"Test J' (eta simp equality, StateM Nat, n=1): {ty}"

/--
info: Test K' (UnfoldLift.get, ExceptT over StateM Nat, n=1): ∀ (pre : Prop) (x_1 : Type) (m : Type → Type _uvar.0)
  (inst : MonadLift m (ExceptT String (StateM Nat))) (inst_1 : MonadStateOf x_1 m) (post : x_1 → Nat → Prop)
  (epost : EPost⟨String → Nat → Prop⟩) (s : Nat),
  pre ⊑ wp (monadLift MonadStateOf.get) post epost s → pre ⊑ wp MonadStateOf.get post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let string := mkConst ``String
  let base ← mkAppM ``StateM #[nat]
  let m ← mkAppM ``ExceptT #[string, base]
  let Pred ← mkArrow nat (mkSort 0)
  let ehead ← mkArrow string Pred
  let EPred ← mkAppM ``EPost.cons #[ehead, mkConst ``EPost.nil]
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) EPred)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, EPred, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``Spec.UnfoldLift.get m Pred instWP #[s]
    logInfo m!"Test K' (UnfoldLift.get, ExceptT over StateM Nat, n=1): {ty}"

/--
info: Test L' (UnfoldLift.set, ExceptT over StateM Nat, n=1): ∀ (pre : Prop) (σ : Type) (m : Type → Type _uvar.0)
  (inst : MonadLift m (ExceptT String (StateM Nat))) (inst_1 : MonadStateOf σ m) (s : σ) (post : PUnit → Nat → Prop)
  (epost : EPost⟨String → Nat → Prop⟩) (s_1 : Nat),
  pre ⊑ wp (monadLift (set s)) post epost s_1 → pre ⊑ wp (set s) post epost s_1
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let string := mkConst ``String
  let base ← mkAppM ``StateM #[nat]
  let m ← mkAppM ``ExceptT #[string, base]
  let Pred ← mkArrow nat (mkSort 0)
  let ehead ← mkArrow string Pred
  let EPred ← mkAppM ``EPost.cons #[ehead, mkConst ``EPost.nil]
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) EPred)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, EPred, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``Spec.UnfoldLift.set m Pred instWP #[s]
    logInfo m!"Test L' (UnfoldLift.set, ExceptT over StateM Nat, n=1): {ty}"

/--
info: Test M' (UnfoldLift.modifyGet, ExceptT over StateM Nat, n=1): ∀ (pre : Prop) (x_1 σ : Type) (m : Type → Type _uvar.0)
  (inst : MonadLift m (ExceptT String (StateM Nat))) (inst_1 : MonadStateOf σ m) (f : σ → x_1 × σ)
  (post : x_1 → Nat → Prop) (epost : EPost⟨String → Nat → Prop⟩) (s : Nat),
  pre ⊑ wp (monadLift (MonadStateOf.modifyGet f)) post epost s → pre ⊑ wp (MonadStateOf.modifyGet f) post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let string := mkConst ``String
  let base ← mkAppM ``StateM #[nat]
  let m ← mkAppM ``ExceptT #[string, base]
  let Pred ← mkArrow nat (mkSort 0)
  let ehead ← mkArrow string Pred
  let EPred ← mkAppM ``EPost.cons #[ehead, mkConst ``EPost.nil]
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) EPred)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, EPred, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``Spec.UnfoldLift.modifyGet m Pred instWP #[s]
    logInfo m!"Test M' (UnfoldLift.modifyGet, ExceptT over StateM Nat, n=1): {ty}"

/--
info: Test N' (UnfoldLift.read, ExceptT over ReaderT Nat Id, n=1): ∀ (pre : Prop) (x_1 : Type) (m : Type → Type _uvar.0)
  (inst : MonadLift m (ExceptT String (ReaderT Nat Id))) (inst_1 : MonadReaderOf x_1 m) (post : x_1 → Nat → Prop)
  (epost : EPost⟨String → Nat → Prop⟩) (s : Nat),
  pre ⊑ wp (monadLift MonadReaderOf.read) post epost s → pre ⊑ wp MonadReaderOf.read post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let string := mkConst ``String
  let reader ← mkAppM ``ReaderT #[nat, mkConst ``Id [.zero]]
  let m ← mkAppM ``ExceptT #[string, reader]
  let Pred ← mkArrow nat (mkSort 0)
  let ehead ← mkArrow string Pred
  let EPred ← mkAppM ``EPost.cons #[ehead, mkConst ``EPost.nil]
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) EPred)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, EPred, monadM, instAL, instEAL])
  withLocalDeclD `s nat fun s => do
    let ty ← testSimpBackwardRule' ``Spec.UnfoldLift.read m Pred instWP #[s]
    logInfo m!"Test N' (UnfoldLift.read, ExceptT over ReaderT Nat Id, n=1): {ty}"

end Test

end Loom

end -- public section
