/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Lean.Elab
public meta import Lean.Elab

public section

set_option new_wp_monad true in
attribute [spec]
  Std.Internal.Do.Spec.pure
  Std.Internal.Do.Spec.bind
  Std.Internal.Do.Spec.map
  Std.Internal.Do.Spec.seq
  Std.Internal.Do.Spec.monadLift_StateT
  Std.Internal.Do.Spec.monadLift_ReaderT
  Std.Internal.Do.Spec.monadLift_ExceptT
  Std.Internal.Do.Spec.monadLift_OptionT
  Std.Internal.Do.Spec.read_ReaderT
  Std.Internal.Do.Spec.get_StateT
  Std.Internal.Do.Spec.set_StateT
  Std.Internal.Do.Spec.modifyGet_StateT

set_option new_wp_monad true in
attribute [spec]
  Std.Internal.Do.Spec.throw_ExceptT
  Std.Internal.Do.Spec.throw_ExceptT_lift
  Std.Internal.Do.Spec.throw_ReaderT
  Std.Internal.Do.Spec.throw_StateT
  Std.Internal.Do.Spec.throw_MonadExcept

set_option new_wp_monad true in
attribute [spec]
  Std.Internal.Do.Spec.forIn_list
  Std.Internal.Do.Spec.forIn'_list
  Std.Internal.Do.Spec.foldlM_list
  Std.Internal.Do.Spec.forIn_range
  Std.Internal.Do.Spec.forIn'_range
  Std.Internal.Do.Spec.forIn_array
  Std.Internal.Do.Spec.forIn'_array
  Std.Internal.Do.Spec.foldlM_array
  Std.Internal.Do.Spec.forIn_slice
  Std.Internal.Do.Spec.forIn_iter
  Std.Internal.Do.Spec.forIn_iterM_id
  Std.Internal.Do.Spec.foldM_iter
  Std.Internal.Do.Spec.foldM_iterM_id

set_option new_wp_monad true in
attribute [spec high]
  Std.Internal.Do.Spec.IterM.forIn_map
  Std.Internal.Do.Spec.IterM.forIn_mapM
  Std.Internal.Do.Spec.IterM.forIn_filterMapM
  Std.Internal.Do.Spec.IterM.forIn_filterMap
  -- Std.Internal.Do.Spec.IterM.forIn_fol
namespace Loom

open Lean Meta Sym Std.Internal.Do Lean.Order
open Lean.Elab.Tactic.Do.Internal.SpecAttr

/-!
Spec-theorem database used by Loom `lmvcgen`.

The original `@[spec]` attribute database stores the legacy `SpecTheorems`/`SpecProof` entries.
This module migrates them into a `Sym.DiscrTree` keyed by an explicit `Sym.Pattern` for the
program expression. The migrated database records whether an entry is an ordinary `Triple`/`⊑ wp`
spec or an equality spec coming from the simp/unfold side of `@[spec]`.
-/

/--
The kind of a migrated spec theorem.
-/
public inductive SpecTheoremKind where
  /--
  A Hoare/WP spec, either a `Triple` theorem or a theorem already in `⊑ wp` form.
  The pattern is the program expression extracted from the conclusion.
  -/
  | spec
  /--
  A simp/equational spec `lhs = rhs`.
  The pattern is the left-hand side. When matched, VCGen rewrites the program from `lhs` to `rhs`
  and continues decomposition on `rhs`.

  `etaArgs` is the number of extra arguments introduced by eta-expanding function-level equations,
  such as class projection unfold lemmas. These arguments are applied with `congrFun` during
  instantiation.
  -/
  | simp (etaArgs : Nat := 0)
  deriving Inhabited

/--
Spec theorem used by Loom `lmvcgen` after migrating the `new_wp_monad` `@[spec]` database.
The original attribute database stores discrimination keys only; this migrated form stores the
full `Sym.Pattern` used by lookup.
-/
structure SpecTheoremNew where
  /--
  Pattern for matching the program expression.

  If the proof has type `∀ a b c, pre ⊑ wp prog post epost`, then the pattern is
  `prog[a := #2, b := #1, c := #0]`. For equality specs with type `∀ a b c, lhs = rhs`,
  the pattern is `lhs[a := #2, b := #1, c := #0]`.
  -/
  pattern : Sym.Pattern
  /-- The proof for the theorem. -/
  proof : SpecProof
  /-- Whether this entry is an ordinary Hoare/WP spec or an equality spec. -/
  kind : SpecTheoremKind
  priority : Nat := eval_prio default
  deriving Inhabited

instance : BEq SpecTheoremNew where
  beq a b := a.proof == b.proof

/--
Like `SpecProof.instantiate`, but for simp specs also eta-expands function-level equations.

For unfold equations of class projections, the equation after instantiation may still be between
functions rather than monadic values, for example:
```
@modifyGet σ m self = self.3 : {α} → (σ → α × σ) → m α
```
This method introduces fresh metavariables for the extra arguments and applies `congrFun` once per
argument, reducing the theorem to an equality between values of type `m α`. The number of extra
arguments is stored in `SpecTheoremKind.simp etaArgs`.
-/
def SpecTheoremNew.instantiate (specThm : SpecTheoremNew) :
    MetaM (Array Expr × Array BinderInfo × Expr × Expr) := do
  let (xs, bs, eqPrf, eqType) ← specThm.proof.instantiate
  let .simp etaArgs := specThm.kind | return (xs, bs, eqPrf, eqType)
  if etaArgs == 0 then return (xs, bs, eqPrf, eqType)
  let_expr Eq eqα _lhs _rhs := eqType | return (xs, bs, eqPrf, eqType)
  let (extraXs, extraBs, _) ← withReducible <| forallMetaBoundedTelescope eqα etaArgs
  let eqPrf ← extraXs.foldlM (init := eqPrf) Meta.mkCongrFun
  let eqType ← inferType eqPrf
  return (xs ++ extraXs, bs ++ extraBs, eqPrf, eqType)

structure SpecTheoremsNew where
  specs : DiscrTree SpecTheoremNew := DiscrTree.empty
  erased : PHashSet SpecProof := {}
  deriving Inhabited

/-- Extract the program expression from a spec conclusion (`Triple` or `⊑ wp` form). -/
private def selectProg (type : Expr) : MetaM (Expr × Unit) := do
  let type ← whnfR type
  if type.isAppOfArity ``Triple 12 then
    return (type.getArg! 9, ())
  else if type.isAppOfArity ``PartialOrder.rel 4 then
    let rhs := type.getArg! 3
    let_expr wp _m _Pred _EPred _monad _instAL _instEAL _wpInst _α prog _post _epost := rhs
      | throwError "RHS of ⊑ is not a wp application{indentExpr rhs}"
    return (prog, ())
  else
    throwError "expected Triple or ⊑ wp{indentExpr type}"

/-- Create a `Sym.Pattern` for a `SpecTheorem` by extracting the program from the proof type. -/
private def mkSpecPattern (proof : SpecProof) : SymM Sym.Pattern := do
  match proof with
  | .global declName =>
    Prod.fst <$> Sym.mkPatternFromDeclWithKey declName selectProg
  | .local fvarId =>
    let e := mkFVar fvarId
    Prod.fst <$> Sym.mkPatternFromExprWithKey e [] selectProg
  | .stx _ _ proof =>
    Prod.fst <$> Sym.mkPatternFromExprWithKey proof [] selectProg

/--
Migrate an ordinary `@[spec]` theorem to `SpecTheoremNew`.

The generated pattern is keyed by the program extracted from a `Triple` conclusion or from the RHS
of a `pre ⊑ wp prog post epost` conclusion.
-/
def mkSpecTheoremNew (spec : SpecTheorem) : SymM SpecTheoremNew := do
  let pattern ← mkSpecPattern spec.proof
  return { pattern, proof := spec.proof, kind := .spec, priority := spec.priority }

/--
Eta-expand a pattern for a function-level equality.

For unfold equations of class projections, the equation may be between functions rather than
monadic values, for example `@modifyGet σ m self = self.3` with type
`{α} → (σ → α × σ) → m α`. The discrimination tree key includes argument count, so lookup would
fail if the stored pattern were only the bare left-hand side while the goal contains the fully
applied program.

This function takes a pattern keyed on the LHS and the equality type `eqTy`, then:
1. collects leading forall domains of `eqTy`,
2. extends the pattern variable types with those domains,
3. applies fresh bound variables to the pattern expression, lifting existing bound variables.

It returns the eta-expanded pattern and the number of extra arguments. If no expansion is needed,
the count is `0`.
-/
private def etaExpandEqPattern (pattern : Sym.Pattern) (eqTy : Expr) : Sym.Pattern × Nat :=
  if !eqTy.isForall then (pattern, 0)
  else
    -- Collect forall domains from `eqTy`.
    let rec collectDomains (ty : Expr) (acc : Array Expr) : Array Expr :=
      if let .forallE _ d b _ := ty then collectDomains b (acc.push d) else acc
    let extraDomains := collectDomains eqTy #[]
    let k := extraDomains.size
    -- Lift existing bvars by `k`, then apply the new bvars `#(k-1) ... #0`.
    let liftedPattern := pattern.pattern.liftLooseBVars 0 k
    let newBVars := Array.ofFn (n := k) fun i => mkBVar (k - 1 - i)
    let newPatternExpr := mkAppN liftedPattern newBVars
    -- Conservatively reset metadata because the pattern expression and variable telescope changed.
    let newPattern : Sym.Pattern :=
      { pattern with
        varTypes := pattern.varTypes ++ extraDomains
        pattern := newPatternExpr
        varInfos? := none
        checkTypeMask? := none }
    (newPattern, k)

/--
Create a `SpecTheoremNew` from a simp/equational declaration `declName : ∀ xs, lhs = rhs`.

The pattern is keyed on `lhs`. For function-level equations, the pattern is eta-expanded so the
discrimination tree key includes the same argument count as the fully-applied program seen by
VCGen.
-/
def mkSpecTheoremNewFromSimpDecl? (declName : Name) (prio : Nat) :
    MetaM (Option SpecTheoremNew) := do
  let (pattern, (eqTy, rhs)) ← Sym.mkPatternFromDeclWithKey declName fun body => do
    let_expr Eq eqTy lhs rhs := body
      | throwError "conclusion is not an equality{indentExpr body}"
    return (lhs, (eqTy, rhs))
  let (pattern, etaArgs) := etaExpandEqPattern pattern eqTy
  -- Skip no-op equations where LHS and RHS are structurally the same after pattern preprocessing.
  -- This avoids adding equality specs that would only rewrite a program to itself.
  if etaArgs == 0 && pattern.pattern == rhs then return none
  return some { pattern, proof := .global declName, kind := .simp etaArgs, priority := prio }

/--
Migrate a `SpecTheorems` database by computing `Sym.Pattern`s for each spec theorem
and rebuilding the discrimination tree using pattern-derived keys.

In addition to ordinary `Triple`/`⊑ wp` specs, this also migrates equality specs from the simp
theorem set built from `@[spec]` arguments:

- simp theorem declarations registered directly as `@[spec]`,
- unfold entries registered with `attribute [spec] foo`, using stored equation lemmas when
  available and falling back to `Meta.getEqnsFor?`.
-/
def migrateSpecTheoremsDatabase (database : SpecTheorems) (simpThms : SimpTheorems) :
    SymM SpecTheoremsNew := do
  let mut specs : DiscrTree SpecTheoremNew := DiscrTree.empty
  for spec in database.specs.values do
    if database.isErased spec.proof then continue
    try
      let newSpec ← mkSpecTheoremNew spec
      specs := Sym.insertPattern specs newSpec.pattern newSpec
    catch _ =>
      continue
  -- Migrate simp spec theorems: equational lemmas registered through the `@[spec]` simp path.
  for simpThm in simpThms.post.values do
    if let .decl declName .. := simpThm.origin then
      if simpThms.erased.contains simpThm.origin then continue
      try
        if let some newSpec ← mkSpecTheoremNewFromSimpDecl? declName simpThm.priority then
          specs := Sym.insertPattern specs newSpec.pattern newSpec
      catch e =>
        trace[Loom.Tactic.vcgen] "Failed to migrate simp spec {declName}: {e.toMessageData}"
  -- Migrate definitions to unfold, registered via `attribute [spec] foo`.
  for declName in simpThms.toUnfold.toList do
    if simpThms.erased.contains (.decl declName) then continue
    let eqThms ← match simpThms.toUnfoldThms.find? declName with
      | some eqThms => pure eqThms
      | none =>
        -- No explicit equation theorem list was stored; ask Lean for generated equation lemmas.
        let some eqThms ← liftMetaM <| Meta.getEqnsFor? declName | continue
        pure eqThms
    for eqThm in eqThms do
      try
        if let some newSpec ← mkSpecTheoremNewFromSimpDecl? eqThm (prio := eval_prio default) then
          specs := Sym.insertPattern specs newSpec.pattern newSpec
      catch e =>
        trace[Loom.Tactic.vcgen] "Failed to migrate unfold spec {declName}/{eqThm}: {e.toMessageData}"
  return { specs, erased := database.erased }

/--
Look up `SpecTheoremNew`s matching program `e` using pattern-based matching.

Candidates are first fetched from the discrimination tree, erased entries are filtered out, then
the remaining candidates are sorted by descending priority and checked with the stored
`Sym.Pattern`.
-/
def SpecTheoremsNew.findSpecs (database : SpecTheoremsNew) (e : Expr) :
    SymM (Except (Array SpecTheoremNew) SpecTheoremNew) := do
  trace[Loom.Tactic.vcgen] "Finding specs for {e}"
  let e ← instantiateMVars e
  let e ← shareCommon e
  let candidates := Sym.getMatch database.specs e
  trace[Loom.Tactic.vcgen] "Candidates: {candidates.map (·.proof.key)}"
  let candidates := candidates.filter (!database.erased.contains ·.proof)
  if h : candidates.size = 1 then
    have : 0 < candidates.size := h ▸ Nat.zero_lt_one
    return .ok candidates[0]
  let candidates := candidates.insertionSort (·.priority > ·.priority)
  for spec in candidates do
    let some _res ← spec.pattern.match? e | continue
    return .ok spec
  return .error candidates

end Loom

end -- public section
