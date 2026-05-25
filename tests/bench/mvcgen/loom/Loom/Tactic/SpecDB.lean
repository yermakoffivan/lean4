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
attribute [spec high]
  Std.Internal.Do.Spec.throw_ExceptT
  Std.Internal.Do.Spec.throw_ExceptT_lift
  Std.Internal.Do.Spec.throw_ReaderT
  Std.Internal.Do.Spec.throw_StateT

namespace Loom

open Lean Meta Sym Std.Internal.Do Lean.Order
open Lean.Elab.Tactic.Do.Internal.SpecAttr

/- TODO: handle equality specs -/

/--
Spec theorem used by Loom `lmvcgen` after migrating the `new_wp_monad` `@[spec]` database.
The original attribute database stores discrimination keys only; this migrated form stores the
full `Sym.Pattern` used by lookup.
-/
structure SpecTheoremNew where
  /-- Pattern for matching the program expression. -/
  pattern : Sym.Pattern
  /-- The proof for the theorem. -/
  proof : SpecProof
  priority : Nat := eval_prio default
  deriving Inhabited

instance : BEq SpecTheoremNew where
  beq a b := a.proof == b.proof

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

def mkSpecTheoremNew (spec : SpecTheorem) : SymM SpecTheoremNew := do
  let pattern ← mkSpecPattern spec.proof
  return { pattern, proof := spec.proof, priority := spec.priority }

/--
Migrate a `SpecTheorems` database by computing `Sym.Pattern`s for each spec theorem
and rebuilding the discrimination tree using pattern-derived keys.
-/
def migrateSpecTheoremsDatabase (database : SpecTheorems) : SymM SpecTheoremsNew := do
  let mut specs : DiscrTree SpecTheoremNew := DiscrTree.empty
  for spec in database.specs.values do
    if database.isErased spec.proof then continue
    try
      let newSpec ← mkSpecTheoremNew spec
      specs := Sym.insertPattern specs newSpec.pattern newSpec
    catch _ =>
      continue
  return { specs, erased := database.erased }

/--
Look up spec theorems matching program `e` using pattern-based matching.
Returns `.ok spec` on the first match, or `.error candidates` if no spec matches.
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
