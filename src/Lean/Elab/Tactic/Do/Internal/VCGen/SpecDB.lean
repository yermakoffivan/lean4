/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Meta.Sym
public import Std.Internal.Do
public import Lean.Elab.Command
public import Lean.Elab.Tactic.Basic
public import Lean.Elab.Tactic.Meta
public import Lean.Elab.Tactic.Simp
public import Lean.Elab.Tactic.Do.Attr
public meta import Lean.Elab.Tactic.Basic
public meta import Lean.Elab.Tactic.Do.Attr
public import Std.Internal.Do.Triple.SpecLemmas

public section

namespace Lean.Elab.Tactic.Do.Internal.VCGen

open Lean Meta Sym Std.Internal.Do Lean.Order
open Lean.Elab.Tactic.Do.Internal.SpecAttr

/-!
Spec-theorem database used by Lean.Elab.Tactic.Do.Internal.VCGen `lmvcgen`.

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
Spec theorem used by Lean.Elab.Tactic.Do.Internal.VCGen `lmvcgen` after migrating the `new_wp_monad` `@[spec]` database.
The original attribute database stores discrimination keys only; this migrated form stores the
full `Sym.Pattern` used by lookup.
-/
structure SpecTheoremNew where
  /--
  Pattern for matching the program expression.

  If the proof has type `∀ a b c, pre ⊑ wp prog post epost`, then the pattern is
  `prog[a := #2, b := #1, c := #0]`, except that binders `prog` does not mention are pruned and the
  remaining de Bruijn indices renumbered (see `eraseUnusedVarsFromPattern`). For equality specs with
  type `∀ a b c, lhs = rhs`, the pattern is `lhs[a := #2, b := #1, c := #0]`.
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

/--
Drops pattern variables that the pattern expression does not depend on.

`Sym.mkPatternFromExprWithKey`/`Sym.mkPatternFromDeclWithKey` turn *every* leading `∀`-binder of the
source type into a pattern variable, even binders the selected key (e.g. the program of a `Triple`
conclusion) never mentions. During matching those variables only ever become fresh metavariables
(see `Sym.mkPreResult`); for instance binders they additionally trigger spurious `trySynthInstance`
calls. This keeps only the variables that the pattern expression references, together with the
transitive closure of variables their types depend on, and renumbers the remaining de Bruijn
indices. `varInfos?` and `checkTypeMask?` are filtered to the surviving telescope; `fnInfos`,
`levelParams`, and the discrimination-tree key are unchanged because the pattern expression's
structure is untouched (bound variables are wildcards in the key).

**Important:** only use this when the matched arguments are *not* reused to rebuild a proof term,
as `Sym.BackwardRule`/`Sym.mkValue` do — dropping variables would drop arguments those need. It is
meant for databases such as `lmvcgen`'s spec table, where the proof is re-elaborated independently
of the pattern.
-/
def eraseUnusedVarsFromPattern (p : Sym.Pattern) : Sym.Pattern := Id.run do
  let n := p.varTypes.size
  -- Variable `j` (0 = outermost binder) is bound variable `#(ctx-1-j)` in a context of `ctx`
  -- binders. `used[j]` becomes `true` once we know variable `j` is reachable from the pattern.
  let mut used := Array.replicate n false
  for j in *...n do
    if p.pattern.hasLooseBVar (n - 1 - j) then
      used := used.set! j true
  -- A variable's type may reference earlier variables, so propagate top-down: when a kept variable
  -- is reached, mark every variable occurring in its type as kept too.
  for j in *...n do
    let i := n - 1 - j
    if used[i]! then
      for k in *...i do
        if p.varTypes[i]!.hasLooseBVar (i - 1 - k) then
          used := used.set! k true
  if used.all (· == true) then return p
  let kept := (Array.range n).filter (used[·]!)
  -- Rebuild the telescope via fvar placeholders to avoid manual de Bruijn arithmetic.
  let fvars := (Array.range n).map fun i => mkFVar ⟨.num `_sym_prune i⟩
  let keptFVars := kept.map (fvars[·]!)
  let newPattern := (p.pattern.instantiateRev fvars).abstract keptFVars
  let newVarTypes := kept.mapIdx fun k i =>
    (p.varTypes[i]!.instantiateRev (fvars.extract 0 i)).abstract (keptFVars.extract 0 k)
  -- `varInfos?`/`checkTypeMask?` are parallel to `varTypes`; their per-variable meaning does not
  -- depend on the de Bruijn numbering, so we simply keep the surviving entries.
  let newVarInfos? := p.varInfos?.bind fun infos =>
    let argsInfo := kept.map (infos.argsInfo[·]!)
    if argsInfo.any fun a => a.isProof || a.isInstance then some { argsInfo } else none
  let newCheckTypeMask? := p.checkTypeMask?.bind fun mask =>
    let newMask := kept.map (mask[·]!)
    if newMask.all (· == false) then none else some newMask
  return { p with
    varTypes := newVarTypes
    pattern := newPattern
    varInfos? := newVarInfos?
    checkTypeMask? := newCheckTypeMask? }

public def mkTriplePatternFromExpr (expr : Expr) (levelParams : List Name := []) : SymM Pattern := do
  let (pattern, _) ← Sym.mkPatternFromExprWithKey expr levelParams fun type => do
    let_expr Triple _m _Pred _EPred _α _monad _instAL _instEAL _wpInst _pre prog _post _epost := type
      | throwError "conclusion is not a Triple {indentExpr type}"
    return (prog, ())
  -- The pattern only matches the program `prog`, so drop binders `prog` does not mention (e.g. the
  -- pre/postconditions and their `Assertion` instances). The proof is rebuilt independently of the
  -- pattern (see `SpecTheoremNew.instantiate`), so this keeps matching cheap without losing args.
  return eraseUnusedVarsFromPattern pattern

/--
Migrate an ordinary `@[spec]` theorem to `SpecTheoremNew`.

The generated pattern is keyed by the program extracted from a `Triple` conclusion or from the RHS
of a `pre ⊑ wp prog post epost` conclusion.
-/
def mkSpecTheoremNew (proof : SpecProof) (prio : Nat) : SymM (Option SpecTheoremNew) := do
  let (levelParams, expr) ← proof.getProof
  let type ← Meta.inferType expr
  let type ← instantiateMVars type
  unless type.getForallBody.getAppFn.isConstOf ``Triple do
    return none
  let pattern ← mkTriplePatternFromExpr expr levelParams
  return some { pattern, proof, kind := .spec, priority := prio }

def SpecTheoremsNew.insert (database : SpecTheoremsNew) (thm : SpecTheoremNew) :
    SpecTheoremsNew :=
  { database with specs := Sym.insertPattern database.specs thm.pattern thm }

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
def migrateSpecTheoremsDatabase (database : Lean.Elab.Tactic.Do.Internal.SpecAttr.SpecTheorems)
    (simpThms : SimpTheorems) :
    SymM SpecTheoremsNew := do
  let mut specs : DiscrTree SpecTheoremNew := DiscrTree.empty
  -- Erased entries are still inserted into `specs` below; `findSpecs` filters them out
  -- at lookup time.
  let erased : PHashSet SpecProof := simpThms.erased.fold (init := database.erased) fun acc o =>
    match SpecProof.ofOrigin o with
    | some p => acc.insert p
    | none => acc
  for spec in database.specs.values do
    try
      let some newSpec ← mkSpecTheoremNew spec.proof spec.priority
        | continue
      specs := Sym.insertPattern specs newSpec.pattern newSpec
    catch _ =>
      continue
  -- Migrate simp spec theorems: equational lemmas registered through the `@[spec]` simp path.
  for simpThm in simpThms.post.values do
    if let .decl declName .. := simpThm.origin then
      try
        if let some newSpec ← mkSpecTheoremNewFromSimpDecl? declName simpThm.priority then
          specs := Sym.insertPattern specs newSpec.pattern newSpec
      catch e =>
        trace[Lean.Elab.Tactic.Do.Internal.VCGen.vcgen] "Failed to migrate simp spec {declName}: {e.toMessageData}"
  -- Migrate definitions to unfold, registered via `attribute [spec] foo`.
  for declName in simpThms.toUnfold.toList do
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
        trace[Lean.Elab.Tactic.Do.Internal.VCGen.vcgen] "Failed to migrate unfold spec {declName}/{eqThm}: {e.toMessageData}"
  return { specs, erased }

/--
Look up `SpecTheoremNew`s matching program `e` using pattern-based matching.

Candidates are first fetched from the discrimination tree, erased entries are filtered out, then
the remaining candidates are sorted by descending priority and checked with the stored
`Sym.Pattern`.
-/
def SpecTheoremsNew.findSpecs (database : SpecTheoremsNew) (e : Expr) :
    SymM (Except (Array SpecTheoremNew) SpecTheoremNew) := do
  trace[Lean.Elab.Tactic.Do.Internal.VCGen.vcgen] "Finding specs for {e}"
  let e ← instantiateMVars e
  let e ← shareCommon e
  let candidates := Sym.getMatch database.specs e
  trace[Lean.Elab.Tactic.Do.Internal.VCGen.vcgen] "Candidates: {candidates.map (·.proof.key)}"
  let candidates := candidates.filter (!database.erased.contains ·.proof)
  if h : candidates.size = 1 then
    have : 0 < candidates.size := h ▸ Nat.zero_lt_one
    return .ok candidates[0]
  let candidates := candidates.insertionSort (·.priority > ·.priority)
  for spec in candidates do
    let some _res ← spec.pattern.match? e | continue
    return .ok spec
  return .error candidates

end Lean.Elab.Tactic.Do.Internal.VCGen

end -- public section
