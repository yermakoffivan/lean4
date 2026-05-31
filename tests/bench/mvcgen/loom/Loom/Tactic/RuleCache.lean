/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Loom.Tactic.Types
public import Loom.Tactic.RuleConstruct.Logic
public import Loom.Tactic.RuleConstruct.Match
public import Loom.Tactic.RuleConstruct.Spec
public import Loom.Tactic.RuleConstruct.Simp

public section

namespace Loom

open Lean Meta Sym

/-! ## Cached backward rule construction -/

/--
Cached version of ordinary and equality spec rule construction.

Ordinary `Triple`/`⊑ wp` entries are sent to `tryMkBackwardRuleFromSpec`; equality entries are sent
to `tryMkBackwardRuleFromSimpSpec`. The caller supplies the full `wp` metadata because equality
specs must check that their equation type is definitionally equal to `m α`.

Cache key: `(proof key, instWP, excessArgs.size)`.
-/
public def mkBackwardRuleFromSpecCached (specThm : SpecTheoremNew) (info : WPInfo)
  : OptionT VCGenM BackwardRule := do
  let key := (specThm.proof.key, info.instWP, info.excessArgs.size)
  let s := (← get).specBackwardRuleCache
  if let some rule := s[key]? then return rule
  let stateArgNames := (← read).stateArgNames
  let some rule ← withNewMCtxDepth <| match specThm.kind with
      | .spec   => tryMkBackwardRuleFromSpec specThm info stateArgNames |>.run
      | .simp _ => tryMkBackwardRuleFromSimp specThm info |>.run
    | failure
  modify fun st => { st with specBackwardRuleCache := st.specBackwardRuleCache.insert key rule }
  return rule

open Lean.Elab.Tactic.Do in
/--
Cached version of `mkBackwardRuleForSplit`.

Cache key: `(splitter name, instWP, excessArgs.size)`.
-/
public def mkBackwardRuleForSplitCached (splitInfo : SplitInfo) (info : WPInfo)
  : VCGenM BackwardRule := do
  let cacheKey := match splitInfo with
    | .ite .. => ``ite
    | .dite .. => ``dite
    | .matcher matcherApp => matcherApp.matcherName
  let key := (cacheKey, info.instWP, info.excessArgs.size)
  let s := (← get).splitBackwardRuleCache
  if let some rule := s[key]? then return rule
  let rule ← mkBackwardRuleForSplit splitInfo info
  modify fun st =>
    { st with splitBackwardRuleCache := st.splitBackwardRuleCache.insert key rule }
  return rule

/--
Cached version of `LogicOp.mkBackwardRule`.

Cache key: `(logic rule lemma, argument types, excessArgs.size, preIsTop)`. The `preIsTop` flag is
part of the key because a `⊤` precondition produces a `⊤`-specialized rule whose type differs from
the general one.
-/
public def mkBackwardRuleForLogicCached (lop : LogicOp) (as excessArgs : Array Expr)
  (resultType? : Option Expr := none) (preIsTop : Bool := false) : VCGenM BackwardRule := do
  let s := (← get).logicBackwardRuleCache
  let asTypes ← (as.mapM Sym.inferType : SymM (Array Expr))
  let key := (lop.toApplyLemma, asTypes, excessArgs.size, preIsTop)
  if let some rule := s[key]? then return rule
  let rule ← LogicOp.mkBackwardRule lop as excessArgs resultType? preIsTop
  modify fun st => { st with logicBackwardRuleCache := st.logicBackwardRuleCache.insert key rule }
  return rule

end Loom

end
