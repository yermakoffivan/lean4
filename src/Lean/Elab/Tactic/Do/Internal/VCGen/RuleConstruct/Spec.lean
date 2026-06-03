/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.Internal.VCGen.Types
public import Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB

public section

namespace Lean.Elab.Tactic.Do.Internal.VCGen

open Lean Meta Lean.Order Sym Std.Internal.Do
open Lean.Elab.Tactic.Do.Internal.SpecAttr
open Lean.Elab.Tactic.Do.Internal.VCGen

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

end Lean.Elab.Tactic.Do.Internal.VCGen

end -- public section
