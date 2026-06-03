/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Spec

public section
namespace Lean.Elab.Tactic.Do.Internal.VCGen

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
public def mkSimpBackwardProof
    (info : WPInfo) (α _m lhs rhs eqPrf : Expr) (ss : Array Expr) : SymM AbstractMVarsResult := do
  let postTy ← mkArrow α info.Pred
  let post ← mkFreshExprMVar (userName := `post) postTy
  let epost ← mkFreshExprMVar (userName := `epost) info.EPred
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
  let mα := mkApp info.m α
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
checks that the equation type is definitionally equal to `info.m α` for the current monad, and
checks that `info.Pred` and `info.instWP` match the current goal.

After instantiation it tries to synthesize unresolved typeclass metavariables. This is needed for
abstract monad equations such as `Spec.UnfoldLift.get`, where matching a concrete monad like
`ExceptT ε (StateM σ)` leaves dictionary arguments to be filled.

The RHS is normalized by reducing projections and unfolding reducible definitions. For example,
class projection unfold lemmas often produce RHS terms containing projections from instance
dictionaries; reducing them exposes the actual operation that VCGen should continue on.

Finally, `info.excessArgs` are represented by fresh metavariables and
`mkSimpSpecBackwardProof` builds the proof:
```
pre ⊑ wp rhs post epost s₁ ... sₙ →
pre ⊑ wp lhs post epost s₁ ... sₙ
```
-/
public def tryMkBackwardRuleFromSimp (specThm : SpecTheoremNew) (info : WPInfo)
    : OptionT SymM BackwardRule := do
  let wpInstTy ← whnfR (← Meta.inferType info.instWP)
  let_expr WPMonad m' Pred' _EPred _monadInst _instAL _instEAL := wpInstTy
    | throwError "expected a WPMonad instance, got {wpInstTy}"
  guard <| ← isDefEqGuarded info.m m'
  guard <| ← isDefEqGuarded info.Pred Pred'
  let (xs, _, eqPrf, eqType) ← specThm.instantiate
  let_expr Eq eqα lhs rhs := eqType
    | throwError "simp spec is not an equation: {eqType}"
  let wpType ← liftMetaM <| Meta.inferType info.instWP
  let α ← mkFreshExprMVar (mkSort wpType.getAppFn.constLevels![0]!.succ)
  guard <| ← isDefEqGuarded eqα (mkApp info.m α)
  for x in xs do
    if x.isMVar && !(← x.mvarId!.isAssigned) then
      let xType ← Meta.inferType x
      try
        x.mvarId!.assign (← Meta.synthInstance xType)
      catch _ =>
        pure ()
  -- -- Reduce projections, for example dictionary projections exposed after instance synthesis.
  let rhs ← liftMetaM <| Meta.transform rhs (pre := fun e => do
    if let .proj .. := e then
      if let some r ← withDefault <| Meta.reduceProj? e then return .done r
    return .continue)
  -- let rhs ← preprocessSimpSpecExpr rhs
  let mut ss := #[]
  for arg in info.excessArgs do
    let ty ← Sym.inferType arg
    ss := ss.push <| ← mkFreshExprMVar (userName := mkStateName ty) ty
  let res ← mkSimpBackwardProof info α info.m lhs rhs eqPrf ss
  mkBackwardRuleFromExpr res.expr res.paramNames.toList

/-! ## Tests for mkSimpSpecBackwardProof -/

end Lean.Elab.Tactic.Do.Internal.VCGen

end -- public section
