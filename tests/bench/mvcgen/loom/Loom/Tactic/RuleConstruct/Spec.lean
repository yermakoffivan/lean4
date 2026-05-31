/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

public import Loom.Tactic.Types
public import Loom.Tactic.SpecDB

public section

namespace Loom

open Lean Meta Lean.Order Sym Std.Internal.Do
open Lean.Elab.Tactic.Do.Internal.SpecAttr
open Loom

/-! ## Backward rule construction from specs -/

/- TODO: what would be the proper way? -/
def mkStateName (_ty : Expr) : Name := `s
  -- match ty.const?.map (·.1) with
  -- | some name => "state" ++ name.toString |>.toName
  -- | none => `s

/-- Build the explicit pointwise implication premise used to weaken a concrete `post`.
    State binders are named positionally from `stateArgNames` (else `mkStateName`); their names ride
    on the premise and are later introduced (by `introForall`) with the right user-facing names. -/
def mkPostPointwisePremise (postSpec postTarget postTy : Expr) (ssTypes : Array Expr)
    (stateArgNames : Array Name := #[]) : SymM Expr := do
  let .forallE _ α _ _ := postTy
    | throwError "expected a postcondition function, got {indentExpr postTy}"
  withLocalDeclD `a α fun a => do
    let ssNamesTypes := ssTypes.mapIdx fun i ty => (stateArgNames[i]?.getD (mkStateName ty), ty)
    withLocalDeclsDND ssNamesTypes fun ss' => do
      let lhs := postSpec.betaRev <| ss'.reverse.push a
      let rhs := mkAppN (mkApp postTarget a) ss'
      mkForallFVars (#[a] ++ ss') (← mkAppM ``PartialOrder.rel  #[lhs, rhs])

/-- Recursively decompose `epostSpec ⊑ epostAbstract` into per-component proofs.
    - `EPost.cons.mk head tail` → mvar for `head ⊑ epostAbstract.head`, recurse on tail
    - `EPost.nil.mk` → trivial via `EPost.nil_rel`
    - Otherwise, if `EPred` is `EPost.cons`, project `epostSpec.head`/`.tail` and decompose those
    - Otherwise → single mvar for `epostSpec ⊑ epostAbstract` -/
partial def decomposeEPostRel (EPred epostSpec epostAbstract : Expr)
    (stateArgNames : Array Name := #[]) : SymM Expr := do
  match_expr epostSpec with
  | EPost.cons.mk ehTy _etTy head tail =>
    let absHead ← mkAppM ``EPost.cons.head #[epostAbstract]
    let absTail ← mkAppM ``EPost.cons.tail #[epostAbstract]
    let headTy ← Sym.inferType head
    -- Collect state types: e.g. String → Nat → Prop → skip first (exc type), rest are state types
    let ssTypes ← forallTelescope ehTy fun xs _ => do
      xs.drop 1 |>.mapM (Meta.inferType ·)
    let hHeadTy ← mkPostPointwisePremise head absHead headTy ssTypes stateArgNames
    let hHead ← mkFreshExprMVar (userName := `epostImpl) hHeadTy
    let hTail ← decomposeEPostRel _etTy tail absTail stateArgNames
    mkAppM ``EPost.cons_rel #[head, tail, epostAbstract, hHead, hTail]
  | EPost.nil.mk =>
    mkAppM ``EPost.nil_rel #[epostAbstract]
  | _ =>
    match_expr EPred.consumeMData with
    | EPost.cons ehTy etTy =>
      let specHead ← mkAppM ``EPost.cons.head #[epostSpec]
      let specTail ← mkAppM ``EPost.cons.tail #[epostSpec]
      let absHead ← mkAppM ``EPost.cons.head #[epostAbstract]
      let absTail ← mkAppM ``EPost.cons.tail #[epostAbstract]
      let headTy ← Sym.inferType specHead
      -- Collect state types: e.g. String → Nat → Prop → skip first (exc type), rest are state types
      let ssTypes ← forallTelescope ehTy fun xs _ => do
        xs.drop 1 |>.mapM (Meta.inferType ·)
      let hHeadTy ← mkPostPointwisePremise specHead absHead headTy ssTypes stateArgNames
      let hHead ← mkFreshExprMVar (userName := `epostImpl) hHeadTy
      let hTail ← decomposeEPostRel etTy specTail absTail stateArgNames
      mkAppM ``EPost.cons_rel #[specHead, specTail, epostAbstract, hHead, hTail]
    | EPost.nil =>
      mkAppM ``EPost.nil_rel #[epostAbstract]
    | _ =>
      let hTy ← mkAppM ``PartialOrder.rel #[epostSpec, epostAbstract]
      let h ← mkFreshExprMVar (userName := `epostImpl) hTy
      return h

/--
Create the proof term for the backward rule built from an instantiated spec theorem.
In order for the backward rule to apply, the concrete precondition, postcondition and exception
postcondition appearing in the spec may need to be generalized into rule parameters, emitting
verification conditions for the generalization.

### General idea

Consider the spec theorem `WPMonad.wp_bind`:
```
WPMonad.wp_bind :
  wp x (fun a => wp (f a) post epost) epost ⊑ wp (x >>= f) post epost
```
This theorem is already in WP-form, so `post` and `epost` are schematic. However, its precondition
`wp x (fun a => wp (f a) post epost) epost` is not. Hence we must emit a VC for the precondition:
```
prf : ∀ {α β} (x : m α) (f : α → m β) (post : β → Pred) (epost : EPred)
  (pre : Pred) (hpre : pre ⊑ wp x (fun a => wp (f a) post epost) epost),
  pre ⊑ wp (x >>= f) post epost
```
The proof term is constructed with `PartialOrder.rel_trans hpre WPMonad.wp_bind`.

#### Postcondition VCs

Similarly, a VC is generated for the postcondition if it is not schematic. For example, a
hypothetical restrictive spec for `pure` could be:
```
myPure.spec (n : Nat) : (⊤ : Prop) ⊑ wp (myPure n) (fun r => r = n) epost
```
This yields a backward rule of the form:
```
prf : ∀ (n : Nat) (pre : Prop) (hpre : pre ⊑ True)
  (post : Nat → Prop) (hpost : ∀ r, r = n ⊑ post r) (epost : EPost⟨⟩),
  pre ⊑ wp (myPure n) post epost
```
The postcondition VC is pointwise over the return value and over any excess state arguments. The
proof is generalized with `WPMonad.wp_consequence_rel`.

#### Exception postcondition VCs

A VC is also generated for the exception postcondition if it is not schematic. For an `EPost.cons`
value, the relation `epostSpec ⊑ epost` is decomposed component by component:
```
∀ e s₁ ... sₙ, epostSpec.head e s₁ ... sₙ ⊑ epost.head e s₁ ... sₙ
```
and recursively for the tail. `decomposeEPostRel` assembles these component VCs using
`EPost.cons_rel` and `EPost.nil_rel`; the proof is then generalized with `WPMonad.wp_econs_rel`.
When the spec exception postcondition is `⊥` (or of type `EPost.nil`), no VC is needed and
`WPMonad.wp_econs_bot_rel` (or `WPMonad.wp_econs_nil_rel`) is used instead.

#### Excess state arguments

Furthermore, when there are excess state arguments `[s₁, ..., sₙ]` involved, the proof is
specialized to those arguments:
```
... :
  pre ⊑ wp x (fun a => wp (f a) post epost) epost s₁ ... sₙ →
  pre ⊑ wp (x >>= f) post epost s₁ ... sₙ
```
The precondition and all generated pointwise postcondition premises are applied to these same state
arguments.

### Caching

It turns out we can cache backward rules for the cache key
`(specThm.proof.key, instWP, excessArgs.size)`. This is important for performance and helps avoid
rebuilding the same rule for every goal that uses the same spec theorem, `WPMonad` instance and
number of excess state arguments. We do that in the `VCGenM` wrapper
`mkBackwardRuleFromSpecCached`.

The rule is built from the abstracted proof returned here via `mkBackwardRuleFromExpr`. This keeps
the proof construction reusable even when the proof still contains free variables from the goal
context, such as generic monad or WP instance parameters.

### Specialization and unfolding of `Std.Internal.Do` abbreviations and defs

It is unnecessary to use the `bind` rule in full generality. It is much more efficient to specialize
it for the particular predicate type, exception postcondition type and `WPMonad` instance.
`tryMkBackwardRuleFromSpec` does that by instantiating the spec theorem and checking that its
`Pred` and `WPMonad` arguments match the ones from the use site.

For `StateM Nat` and one excess state arg `s`, the type produced for `WPMonad.wp_bind` becomes
```
prf : ∀ (pre : Prop) (α : Type) (x : StateT Nat Id α) (β : Type)
  (f : α → StateT Nat Id β) (post : β → Nat → Prop) (epost : EPost⟨⟩) (s : Nat),
  pre ⊑ wp x (fun a => wp (f a) post epost) epost s →
  pre ⊑ wp (x >>= f) post epost s
```

This construction works with the explicit `wp` application obtained from the instantiated theorem.
`tryMkBackwardRuleFromSpec` extracts the program and concrete postconditions from that application
before calling `mkSpecBackwardProof`; this helper does not inspect the full `wp` term itself. At the
moment it does not perform additional `unfoldReducible` preprocessing on the forall telescope; any
unfolding of `Std.Do` abbreviations and reducible definitions has to happen before or around this
construction step.

The result stays in `⊑` form. After the generated metavariables are abstracted, the returned proof
has the shape expected by `mkBackwardRuleFromExpr`.
-/
def mkSpecBackwardProof
    (pre prog postSpec epostSpec specProof EPred : Expr) (ss ssTypes : Array Expr)
    (stateArgNames : Array Name := #[]) : SymM AbstractMVarsResult := do
  /- we start with `pre ⊑ wp prog post epost` where
  1. `pre` represents the Lean expression for `pre`
  2. `prog`, `postSpec`, and `epostSpec` are the selected arguments of the spec's `wp` RHS
  3. `specProof` is the proof of the spec `pre ⊑ wp prog postSpec epostSpec`
  4. `ss` represents the Lean expressions for the state variables `s1`, `s2`, ..., `sn`
  5. `ssTypes` represents the Lean types for the state variables `s1`, `s2`, ..., `sn` -/
  let mut postAbstract := postSpec.consumeMData
  let mut epostAbstract := epostSpec.consumeMData
  let mut specApplied := specProof

  /- abstract concrete `post` if it is not already abstract -/
  unless postAbstract.isMVar do
    /- `α → Pred`: type of `post` -/
    let postTy ← Sym.inferType postSpec
    /- mvar `postAbstract` for new abstract `post` -/
    postAbstract ← mkFreshExprMVar (userName := `post) postTy
    /- premise type `∀ (a : α) (s₁ : σ₁) ... (sₙ : σₙ), postSpec a s₁ ... sₙ → postAbstract a s₁ ... sₙ` -/
    let hpostTy ← mkPostPointwisePremise postSpec postAbstract postTy ssTypes stateArgNames
    /- mvar `?postImpl` for the proof of the premise -/
    let hpost ← mkFreshExprMVar (userName := `postImpl) hpostTy
    /- `wp_consequence_rel` expects its premise at the *function-lattice* order `postSpec ⊑ postAbstract`,
       whereas `hpost` is stated pointwise (`∀ a s…, postSpec a s… ⊑ postAbstract a s…`). The two are
       defeq, but unfolding the function-lattice `⊑` instance is blocked when the post's domain is a
       metavariable (e.g. the accumulator `β` of a `forIn` loop spec). Cast `hpost` to the function
       order here so the defeq is forced at this depth, keeping the user-facing VC pointwise. -/
    let relTy ← mkAppM ``PartialOrder.rel #[postSpec, postAbstract]
    let hpostRel ← mkExpectedTypeHint hpost relTy
    /- get the proof of `pre ⊑ wp prog postAbstract epostSpec`, where `post` is abstracted.
       Uses wp_consequence_rel: post ⊑ post' → pre ⊑ wp x post epost → pre ⊑ wp x post' epost -/
    specApplied ← mkAppM ``WPMonad.wp_consequence_rel #[prog, postSpec, postAbstract, epostSpec, hpostRel, specApplied]

  /- abstract concrete `epost` if it is not already abstract -/
  unless epostAbstract.isMVar do
    /- `EPost⟨t₁, t₂, ..., tₙ⟩`: type of `epost` -/
    let epostTy ← Sym.inferType epostSpec
    /- mvar `epostAbstract` for new abstract `epost` -/
    epostAbstract ← mkFreshExprMVar (userName := `epost) epostTy
    /- if `epost` is `⊥`, then `epost ⊑ epostAbstract` holds trivially and
      abstracting `epost` can be simply done by `WPMonad.wp_econs_bot_rel` without
      introducing a new premise. This case is quite common, that's why we handle
      it specially. -/
    if epostSpec.isAppOf ``bot then
      /- get the proof of `pre ⊑ wp prog postAbstract epostAbstract`, where `epost (= ⊥)` is abstracted.
        This proof DOES NOT have a `?epostImpl` premise -/
      specApplied ← mkAppM ``WPMonad.wp_econs_bot_rel #[prog, postAbstract, epostAbstract, specApplied]
    else if EPred.isConstOf ``EPost.nil then
      /- get the proof of `pre ⊑ wp prog postAbstract epostAbstract`, where `epost` is of type `EPost.nil`
        is abstracted. This proof DOES NOT have a `?epostImpl` premise -/
      specApplied ← mkAppM ``WPMonad.wp_econs_nil_rel #[prog, postAbstract, epostAbstract, specApplied]
    else
      /- Decompose `epostSpec ⊑ epostAbstract` into per-component proofs
        using `EPost.cons_rel` and `EPost.nil_rel` -/
      let hepost ← decomposeEPostRel EPred epostSpec epostAbstract stateArgNames
      specApplied ← mkAppM ``WPMonad.wp_econs_rel #[prog, postAbstract, epostSpec, epostAbstract, hepost, specApplied]



  /- By default we always abstract `pre`, since in most of the specifications
    `pre` is not schematic. In exceptional cases, where `pre` is schematic, it
    is redundant, but we still do that to keep the code simple.

    Here we also apply the excess state arguments to `pre` and `wp prog postAbstract epostAbstract` -/
  /- use `betaRevS` to create `pre s₁ ... sₙ`  to avoid creating beta redexes when `pre` is a lambda -/
  let preApplied ← betaRevS pre ss.reverse
  /- proof of the original theorem with abstracted `post` and `epost` specialized to the excess state arguments -/
  specApplied := mkAppN specApplied ss
  /- `wp prog postAbstract epostAbstract s₁ ... sₙ` -/
  let wpTy ← mkAppM ``wp <| #[prog, postAbstract, epostAbstract] ++ ss
  let specAppliedTy ← mkAppM ``PartialOrder.rel #[preApplied, wpTy]
  /- later when the whole proof is type checked, we want to help the kernel by providing the expected type -/
  specApplied ← mkExpectedTypeHint specApplied specAppliedTy
  let preAppliedTy ← Meta.inferType preApplied
  /- create a new mvar for the abstracted `pre` -/
  let preAbstract ← mkFreshExprMVar (userName := `pre) preAppliedTy
  let specAbstractTy ← mkAppM ``PartialOrder.rel #[preAbstract, preApplied]
  /- create a new mvar for the proof of the abstracted `pre` -/
  let specAbstract ← mkFreshExprMVar (userName := `vc) specAbstractTy
  /- use `PartialOrder.rel_trans` to compose the abstracted `pre` and the proof of the original theorem -/
  specApplied ← mkAppM ``PartialOrder.rel_trans #[specAbstract, specApplied]

  abstractMVars specApplied

/--
Try to build a backward rule from a single spec theorem in `⊑` form.

Given a spec `pre ⊑ wp prog post epost` where the lattice type is
`info.Pred = σ1 → ... → σn → Prop`, produces an auxiliary lemma.

- `info.Pred`: the goal's lattice type (e.g. `Nat → Prop`)
- `info.instWP`: the `WPMonad` instance for the goal monad
- `info.excessArgs`: free variables representing state args from
  `info.Pred = σ1 → ... → σn → Prop`
-/
public def tryMkBackwardRuleFromSpec (specThm : SpecTheoremNew) (info : WPInfo)
  (stateArgNames : Array Name := #[]) : OptionT SymM BackwardRule := do
  -- Instantiate the spec theorem, creating metavars for all universally quantified params
  let (_xs, _bs, specProof, specType) ← specThm.instantiate
  let_expr PartialOrder.rel Pred' _cl' pre rhs := specType
    | throwError "target not a partial order ⊑ application {specType}"
  guard <| ← isDefEqGuarded info.Pred Pred'
  let_expr wp _m' _Pred' _EPred' _monadInst' _instAL' _instEAL' instWP' _α prog postSpec epostSpec := rhs
    | throwError "target not a wp application {rhs}"
  guard <| ← isDefEqGuarded info.instWP instWP'
  -- Use local excess-state binders so explicit post premises can be re-lifted to `⊑`.
  -- Name them positionally from `stateArgNames` (else `s`) so the rule's binders carry good names.
  let mut ss := #[]
  let mut ssTypes := #[]
  for h : i in [0:info.excessArgs.size] do
    let ty ← Sym.inferType info.excessArgs[i]
    ssTypes := ssTypes.push ty
    ss := ss.push <| ← mkFreshExprMVar (userName := stateArgNames[i]?.getD `s) ty
  let res ← mkSpecBackwardProof pre prog postSpec epostSpec specProof info.EPred ss ssTypes stateArgNames
  mkBackwardRuleFromExpr res.expr res.paramNames.toList

/-! ## Tests for mkSpecBackwardProof -/

section Test

/-- Test helper: call mkSpecBackwardProof directly and return the type of the result.
    Mirrors `testSpecBackwardProofType` from VCGen.lean but for the new ⊑-form output. -/
private def testSpecBackwardProofType' (declName : Name)
    (excessArgTypes : Array Expr) : MetaM Expr := do
  let specThm ← mkSpecTheoremFromConst declName
  let (_xs, _bs, specProof, specType) ← specThm.proof.instantiate
  let_expr PartialOrder.rel _ _ pre rhs := specType
    | throwError "not a partial order ⊑ application {specType}"
  let_expr wp _m _Pred EPred _monadInst _instAL _instEAL _instWP _α prog postSpec epostSpec := rhs
    | throwError "target not a wp application {rhs}"
  let excessArgNamesTypes := excessArgTypes.map fun ty => (`s, ty)
  let stateArgNames := excessArgTypes.map fun _ => `s
  let spec ← withLocalDeclsDND excessArgNamesTypes fun ss => do
    let res ← SymM.run <|
      mkSpecBackwardProof pre prog postSpec epostSpec specProof EPred ss excessArgTypes stateArgNames
    mkLambdaFVars ss res.expr
  instantiateMVars (← inferType spec)

/-- Test helper: build the `WPInfo` needed by `tryMkBackwardRuleFromSpec` and return the rule type. -/
private def testBackwardRule' (declName : Name) (Pred instWP : Expr)
    (excessArgs : Array Expr) : MetaM Expr := do
  let specThm ← mkSpecTheoremFromConst declName
  let specThm ← SymM.run <| mkSpecTheoremNew specThm
  let wpInstTy ← whnfR (← Meta.inferType instWP)
  let_expr WPMonad m _Pred EPred monadInst instAL instEAL := wpInstTy
    | throwError "expected a WPMonad instance, got {wpInstTy}"
  let info : WPInfo := {
    head := mkConst ``wp [.zero, .zero, .zero, .zero]
    args := #[m, Pred, EPred, monadInst, instAL, instEAL, instWP]
    excessArgs
  }
  let rule ← SymM.run do
    tryMkBackwardRuleFromSpec specThm info
  match rule with
  | some br => inferType br.expr
  | none => throwError "tryMkBackwardRuleFromSpec returned none for {declName}"

-- Test 1': wp_bind for Id, n=0 excess args (abstract pre/post/epost)
/--
info: Test 1' (Id, n=0): ∀ (pre : Prop) (α : Type) (x : Id α) (β : Type) (f : α → Id β) (post : β → Prop) (epost : EPost⟨⟩),
  pre ⊑ wp x (fun x => wp (f x) post epost) epost → pre ⊑ wp (x >>= f) post epost
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let m := mkConst ``Id [.zero]
  let Pred := mkSort 0
  let errTy := mkConst ``EPost.nil
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) errTy)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero]) #[m, Pred, errTy, monadM, instAL, instEAL])
  let ty ← testBackwardRule' ``WPMonad.wp_bind Pred instWP #[]
  logInfo m!"Test 1' (Id, n=0): {ty}"

-- Test 2': wp_bind for StateM Nat, n=1 excess arg
/--
info: Test 2' (StateM Nat, n=1): ∀ (pre : Prop) (α : Type) (x : StateT Nat Id α) (β : Type) (f : α → StateT Nat Id β)
  (post : β → Nat → Prop) (epost : EPost⟨⟩) (s : Nat),
  pre ⊑ wp x (fun x => wp (f x) post epost) epost s → pre ⊑ wp (x >>= f) post epost s
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
    let ty ← testBackwardRule' ``WPMonad.wp_bind Pred instWP #[s]
    logInfo m!"Test 2' (StateM Nat, n=1): {ty}"

-- Test A': concrete post, 1 excess arg
@[local spec high]
theorem spec_set_concretePost_test' (epost : EPost.nil) :
    wp (set (m := StateM Nat) 7) (fun _ _ => True) epost ⊑
      wp (set (m := StateM Nat) 7) (fun _ _ => True) epost := by
  exact PartialOrder.rel_refl

/--
info: Test A' (concrete post, n=1): ∀ (s : Nat) (pre : Prop) (epost : EPost⟨⟩) (post : PUnit → Nat → Prop),
  pre ⊑ wp (set 7) (fun x x_1 => True) epost s →
    (∀ (a : PUnit) (s : Nat), True ⊑ post a s) → pre ⊑ wp (set 7) post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let ty ← testSpecBackwardProofType' ``spec_set_concretePost_test' #[nat]
  logInfo m!"Test A' (concrete post, n=1): {ty}"

-- Test B': concrete epost (non-⊥), 0 excess args
@[local spec high]
theorem spec_throw_concreteEPost_test' (post : PUnit → Prop) :
    wp (MonadExceptOf.throw "boom" : Except String PUnit) post epost⟨fun _ => True⟩ ⊑
      wp (MonadExceptOf.throw "boom" : Except String PUnit) post epost⟨fun _ => True⟩ := by
  exact PartialOrder.rel_refl

/--
info: Test B' (concrete epost, n=0): ∀ (pre : Prop) (post : PUnit → Prop) (epost : EPost⟨String → Prop⟩),
  pre ⊑ wp (MonadExceptOf.throw "boom") post epost⟨fun x => True⟩ →
    (∀ (a : String), True ⊑ epost.head a) → pre ⊑ wp (MonadExceptOf.throw "boom") post epost
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let ty ← testSpecBackwardProofType' ``spec_throw_concreteEPost_test' #[]
  logInfo m!"Test B' (concrete epost, n=0): {ty}"

-- Test C': concrete post + epost, 0 excess args
@[local spec high]
theorem spec_throw_concretePostEPost_test' :
    wp (MonadExceptOf.throw "boom" : Except String PUnit) (fun _ => True) epost⟨fun _ => True⟩ ⊑
      wp (MonadExceptOf.throw "boom" : Except String PUnit) (fun _ => True) epost⟨fun _ => True⟩ := by
  exact PartialOrder.rel_refl

/--
info: Test C' (concrete post+epost, n=0): ∀ (pre : Prop) (post : PUnit → Prop) (epost : EPost⟨String → Prop⟩),
  pre ⊑ wp (MonadExceptOf.throw "boom") (fun x => True) epost⟨fun x => True⟩ →
    (∀ (a : String), True ⊑ epost.head a) →
      (∀ (a : PUnit), True ⊑ post a) → pre ⊑ wp (MonadExceptOf.throw "boom") post epost
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let ty ← testSpecBackwardProofType' ``spec_throw_concretePostEPost_test' #[]
  logInfo m!"Test C' (concrete post+epost, n=0): {ty}"

-- Test D': nested concrete epost, 0 excess args
@[local spec high]
theorem spec_throw_nestedConcreteEPost_test' (post : PUnit → Prop) :
    wp (MonadExceptOf.throw 7 : ExceptT Nat (Except String) PUnit) post
      epost⟨fun n => n = 7, fun s => s = "inner"⟩ ⊑
    wp (MonadExceptOf.throw 7 : ExceptT Nat (Except String) PUnit) post
      epost⟨fun n => n = 7, fun s => s = "inner"⟩ := by
  exact PartialOrder.rel_refl

/--
info: Test D' (nested epost, n=0): ∀ (pre : Prop) (post : PUnit → Prop) (epost : EPost⟨Nat → Prop, String → Prop⟩),
  pre ⊑ wp (MonadExceptOf.throw 7) post epost⟨fun n => n = 7, fun s => s = "inner"⟩ →
    (∀ (a : Nat), (a = 7) ⊑ epost.head a) →
      (∀ (a : String), (a = "inner") ⊑ epost.tail.head a) → pre ⊑ wp (MonadExceptOf.throw 7) post epost
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let ty ← testSpecBackwardProofType' ``spec_throw_nestedConcreteEPost_test' #[]
  logInfo m!"Test D' (nested epost, n=0): {ty}"

-- Projected epost: `epostSpec` is not syntactically `EPost.cons.mk`, but its type is `EPost.cons`.
@[local spec high]
theorem spec_throw_projectedEPost_test' (post : PUnit → Prop)
    (epost0 : EPost⟨Nat → Prop, String → Prop⟩) :
    wp (MonadExceptOf.throw "boom" : Except String PUnit) post epost0.tail ⊑
      wp (MonadExceptOf.throw "boom" : Except String PUnit) post epost0.tail := by
  exact PartialOrder.rel_refl

#eval! show MetaM Unit from do
  let _ ← testSpecBackwardProofType' ``spec_throw_projectedEPost_test' #[]
  pure ()

-- Test E': ⊥ epost, 0 excess args (should have no epost premise)
@[local spec high]
theorem spec_throw_botEPost_test' (post : PUnit → Prop) :
    wp (MonadExceptOf.throw "boom" : Except String PUnit) post (⊥ : EPost⟨String → Prop⟩) ⊑
      wp (MonadExceptOf.throw "boom" : Except String PUnit) post (⊥ : EPost⟨String → Prop⟩) := by
  exact PartialOrder.rel_refl

/--
info: Test E' (bot epost, n=0): ∀ (pre : Prop) (post : PUnit → Prop) (epost : EPost⟨String → Prop⟩),
  pre ⊑ wp (MonadExceptOf.throw "boom") post ⊥ → pre ⊑ wp (MonadExceptOf.throw "boom") post epost
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let ty ← testSpecBackwardProofType' ``spec_throw_botEPost_test' #[]
  logInfo m!"Test E' (bot epost, n=0): {ty}"

-- Test F': Spec.get_StateT for StateM Nat (abstract post/epost, concrete pre)
@[local spec high]
theorem spec_get_StateM_test' (post : Nat → Nat → Prop) (epost : EPost.nil) :
    (fun s => post s s) ⊑ wp (MonadStateOf.get : StateM Nat Nat) post epost :=
  Triple.iff.mp (Spec.get_StateT post)

/--
info: Test F' (get_StateT, StateM Nat, n=1): ∀ (pre : Prop) (post : Nat → Nat → Prop) (s : Nat) (epost : EPost⟨⟩),
  pre ⊑ post s s → pre ⊑ wp MonadStateOf.get post epost s
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
    let ty ← testBackwardRule' ``spec_get_StateM_test' Pred instWP #[s]
    logInfo m!"Test F' (get_StateT, StateM Nat, n=1): {ty}"

-- Test G': Spec.set_StateT for StateM Nat (abstract post/epost, concrete pre)
@[local spec high]
theorem spec_set_StateM_test' (v : Nat) (post : PUnit → Nat → Prop) (epost : EPost.nil) :
    (fun _ => post ⟨⟩ v) ⊑ wp (set v : StateM Nat PUnit) post epost :=
  Triple.iff.mp (Spec.set_StateT v post)

/--
info: Test G' (set_StateT, StateM Nat, n=1): ∀ (pre : Prop) (post : PUnit → Nat → Prop) (v : Nat) (epost : EPost⟨⟩) (s : Nat),
  pre ⊑ post PUnit.unit v → pre ⊑ wp (set v) post epost s
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
    let ty ← testBackwardRule' ``spec_set_StateM_test' Pred instWP #[s]
    logInfo m!"Test G' (set_StateT, StateM Nat, n=1): {ty}"

-- Test H': nested epost with state args (exercises ssTypes in decomposeEPostRel)
abbrev M_test := ExceptT Nat (ExceptT String (StateM Nat))

@[local spec high]
theorem spec_throw_nestedEPostWithState_test' (post : PUnit → Nat → Prop) :
    wp (MonadExceptOf.throw 7 : M_test PUnit) post
      epost⟨fun n s => n = 7 ∧ s = 0, fun e s => e = "inner" ∧ s = 0⟩ ⊑
    wp (MonadExceptOf.throw 7 : M_test PUnit) post
      epost⟨fun n s => n = 7 ∧ s = 0, fun e s => e = "inner" ∧ s = 0⟩ := by
  exact PartialOrder.rel_refl

/--
info: Test H' (nested epost with state, n=1): ∀ (s : Nat) (pre : Prop) (post : PUnit → Nat → Prop)
  (epost : EPost⟨Nat → Nat → Prop, String → Nat → Prop⟩),
  pre ⊑ wp (MonadExceptOf.throw 7) post epost⟨fun n s => n = 7 ∧ s = 0, fun e s => e = "inner" ∧ s = 0⟩ s →
    (∀ (a s : Nat), (a = 7 ∧ s = 0) ⊑ epost.head a s) →
      (∀ (a : String) (s : Nat), (a = "inner" ∧ s = 0) ⊑ epost.tail.head a s) →
        pre ⊑ wp (MonadExceptOf.throw 7) post epost s
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let nat := mkConst ``Nat
  let ty ← testSpecBackwardProofType' ``spec_throw_nestedEPostWithState_test' #[nat]
  logInfo m!"Test H' (nested epost with state, n=1): {ty}"

/-- Build the `Id`-monad `WPInfo` (n=0 excess args) shared by the loop-spec tests below. -/
private def idWPInfoForLoopTests (declName : Name) : MetaM Expr := do
  let m := mkConst ``Id [.zero]
  let Pred := mkSort 0
  let errTy := mkConst ``EPost.nil
  let monadM ← synthInstance (← mkAppM ``Monad #[m])
  let instAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) Pred)
  let instEAL ← synthInstance (mkApp (mkConst ``Assertion [.zero]) errTy)
  let instWP ← synthInstance (mkAppN (mkConst ``WPMonad [.zero, .zero, .zero, .zero])
    #[m, Pred, errTy, monadM, instAL, instEAL])
  testBackwardRule' declName Pred instWP #[]

-- Baseline: constant invariant (`{inv : β → Pred}` is schematic ⇒ `post = ?inv` is a bare mvar).
/--
info: Test I' (forIn_list_const_inv, Id, n=0): ∀ (pre : Prop) (β : Type) (inv : β → Prop) (init : β) (α : Type) (xs : List α)
  (f : α → β → Id (ForInStep β)) (einvc : EPost⟨⟩),
  pre ⊑ inv init →
    (∀ (hd : α) (b : β),
        Triple (inv b) (f hd b)
          (fun r =>
            match r with
            | ForInStep.yield b' => inv b'
            | ForInStep.done b' => inv b')
          einvc) →
      pre ⊑ wp (forIn xs init f) inv einvc
-/
#guard_msgs in
#eval! show MetaM Unit from do
  let ty ← idWPInfoForLoopTests ``Std.Internal.Do.Spec.forIn_list_const_inv
  logInfo m!"Test I' (forIn_list_const_inv, Id, n=0): {ty}"

-- Cursor-dependent bundled invariant (`inv : Invariant …`): the invariant rides as one hole, so the
-- rule's `pre`/`post`/`epost` are `Invariant.inv ?s …` / `Invariant.einv ?s` (projections of the
-- hole). The generated rule type carries a use-site `EPred` metavariable (pinned only at apply
-- time), so these smoke-test that construction *succeeds* rather than `#guard_msgs`-pinning a
-- non-deterministic type. End-to-end coverage is in `Loom/Test/Bench/{ForInLoop,TestDoLogic}.lean`.
#eval! show MetaM Unit from do
  let _ ← idWPInfoForLoopTests ``Std.Internal.Do.Spec.forIn_list
  let _ ← idWPInfoForLoopTests ``Std.Internal.Do.Spec.forIn_range
  pure ()

end Test

end Loom

end -- public section
