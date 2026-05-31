import Loom.Tactic.VCGen

/-!
Tests the one-step `IntroPre` helper for proposition and `CompleteLattice.ofProp`
preconditions.
-/

open Lean Meta Sym Lean.Order
open Std.Internal.Do

set_option new_wp_monad true

namespace Loom.Test.IntroPre

private def mkIntroRulesForTest : MetaM Loom.VCGen.IntroRules := do
  let tripleIntro ← mkBackwardRuleFromDecl ``Triple.intro
  let stateArgIntro ← mkBackwardRuleFromDecl ``Loom.state_arg_intro'
  let topStateArgIntro ← mkBackwardRuleFromDecl ``Loom.top_state_arg_intro'
  let propPreIntro ← mkBackwardRuleFromDecl ``Lean.Order.prop_pre_intro
  let ofPropPreIntro ← mkBackwardRuleFromDecl ``Loom.ofProp_pre_intro'
  return { tripleIntro, stateArgIntro, topStateArgIntro, propPreIntro, ofPropPreIntro }

private def checkIntro (ofProp : Bool) (target : Expr)
    (checkPre : Expr → MetaM Unit) : MetaM Unit := do
  let rules ← mkIntroRulesForTest
  let goalExpr ← mkFreshExprSyntheticOpaqueMVar target
  let goal := goalExpr.mvarId!
  let before := (← goal.getDecl).lctx.getFVarIds.size
  let goal ← SymM.run <| Loom.introMeetPre rules ofProp goal
  let decl ← goal.getDecl
  unless decl.lctx.getFVarIds.size == before + 1 do
    throwError "expected exactly one introduced hypothesis"
  let some (_, _, pre, _) := (← goal.getType).app4? ``PartialOrder.rel
    | throwError "expected residual target to be a relation"
  checkPre pre

#eval! show MetaM Unit from do
  withLocalDeclD `pre (mkSort 0) fun pre =>
  withLocalDeclD `rhs (mkSort 0) fun rhs => do
    let target ← mkAppM ``PartialOrder.rel #[pre, rhs]
    checkIntro false target fun pre => do
      unless pre.getAppFn.isConstOf ``Lean.Order.top do
        throwError "expected proposition precondition intro to leave `⊤`"

#eval! show MetaM Unit from do
  withLocalDeclD `p (mkSort 0) fun p =>
  withLocalDeclD `rhs (mkSort 0) fun rhs => do
    let pre ← mkAppOptM ``Lean.Order.CompleteLattice.ofProp #[some (mkSort 0), none, some p]
    let target ← mkAppM ``PartialOrder.rel #[pre, rhs]
    checkIntro true target fun pre => do
      unless pre.getAppFn.isConstOf ``Lean.Order.top do
        throwError "expected `ofProp` precondition intro to leave `⊤`"

#eval! show MetaM Unit from do
  withLocalDeclD `a (mkSort 0) fun a =>
  withLocalDeclD `b (mkSort 0) fun b =>
  withLocalDeclD `rhs (mkSort 0) fun rhs => do
    let pre ← mkAppM ``meet #[a, b]
    let target ← mkAppM ``PartialOrder.rel #[pre, rhs]
    checkIntro false target fun pre => do
      unless pre.getAppFn.isConstOf ``Lean.Order.top do
        throwError "expected meet precondition intro to leave `⊤`"

end Loom.Test.IntroPre
