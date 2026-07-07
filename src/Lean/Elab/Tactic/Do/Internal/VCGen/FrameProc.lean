/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Lean.Meta.Sym.SymM

/-!
The metadata a frame inference procedure operates on: the `wp` application metadata `WPInfo`, the
lattice `LatticeSplit` decomposing a frame operator, and the `FrameProc` bundling an inference
procedure with its operator. `@[frameproc]` registration lives in `FrameProcAttr`.
-/

open Lean Meta Sym

namespace Lean.Elab.Tactic.Do.Internal

/--
Common metadata for a goal whose right-hand side is a weakest-precondition application
`pre ⊑ wp Prog Value Pred EPred instAL instEAL instWP prog post epost s₁ ... sₙ`.
-/
public structure VCGen.WPInfo where
  /-- The `wp` function head, separated from its explicit core arguments. -/
  head : Expr
  /-- The ordered core arguments of the `wp` application:
  `#[Prog, Value, Pred, EPred, instAL, instEAL, instWP, prog, post, epost]`. -/
  args : Array Expr
  /-- Extra arguments applied after `wp … prog post epost`, usually concrete state arguments. -/
  excessArgs : Array Expr

namespace VCGen.WPInfo

/-- Program type argument of `wp` (e.g. `m α` or a non-monadic program type). -/
public def progTy (info : WPInfo) : Expr := info.args[0]!
/-- The monad of an `m α`-shaped program type, obtained by dropping the value type `α`. For a
non-monadic program type the type itself is returned. -/
public def m (info : WPInfo) : Expr :=
  if info.args[0]!.isApp then info.args[0]!.appFn! else info.args[0]!
/-- Result/value type argument of `wp`. -/
public def Value (info : WPInfo) : Expr := info.args[1]!
/-- Predicate/lattice type argument of `wp`. -/
public def Pred (info : WPInfo) : Expr := info.args[2]!
/-- Exception postcondition type argument of `wp`. -/
public def EPred (info : WPInfo) : Expr := info.args[3]!
/-- `WP` instance argument of `wp`. -/
public def instWP (info : WPInfo) : Expr := info.args[6]!
/-- Program expression classified by VCGen. -/
public def prog (info : WPInfo) : Expr := info.args[7]!

end VCGen.WPInfo

/-- A frame inference procedure: given the resource type `R` of the applicable frame operator
`op : R → Pred → Pred`, the goal's precondition, and the `wp` metadata of a spec-ready program,
optionally produce a frame `F : R` to apply. -/
public abbrev VCGen.FrameInferenceProc := Expr → Expr → VCGen.WPInfo → SymM (Option Expr)

/-- A decomposition of a lattice operator on the RHS of an entailment `pre ⊑ op … s⃗`. A custom frame
operator registers its own split through the `FrameProc` selected in `Context.selectedFrameProc?`.

The operator's `⊑`-introduction rule `introThm` concludes `x ⊑ op` at the function level. How the
excess (state) arguments `s⃗` are handled follows the shape of the split:

- `applyEq := some _`: distribute `op … s⃗` pointwise through the state arguments via the `_apply`
  equation, then apply `introThm`. Used by `⊓`/`⇨`/`⌜·⌝`/`⊤`.
- `applyEq := none` with operands: point-frame the state arguments, gating the precondition to
  `⌜·⃗ = s⃗⌝ ⊓ pre`, then apply `introThm` at the function level. Used by `PreservesSup.upperAdjoint`.
- `applyEq := none` without operands: apply `introThm` directly as a backward rule; the remaining
  fields are unused. -/
public structure VCGen.LatticeSplit where
  /-- The `⊑`-form introduction rule decomposing `pre ⊑ op`: it concludes `_ ⊑ op` with the operand
  subgoals as premises. -/
  introThm : Name
  /-- The pointwise `_apply` equation distributing the operator through function application, or
  `none` to point-frame the state arguments (with operands) or apply `introThm` directly (without). -/
  applyEq : Option Name := none
  /-- Rebuild the operator from its fixed parameters `params`, its operands `as`, and the optional
  lattice carrier type. Unused when `applyEq` is `none` and there are no operands. -/
  mkOperator : Array Expr → Array Expr → Option Expr → MetaM Expr := fun _ _ _ =>
    throwError "LatticeSplit.mkOperator is unavailable for a direct split (applyEq := none)"
  /-- The number of fixed parameters before the operands: `0` for `⊓`/`⌜·⌝`/`⊤`/`upperAdjoint`. -/
  numParams : Nat := 0
  /-- The number of explicit operands the operator takes after its carrier type, instance, and
  parameters: `2` for `⊓`/`⇨`/`upperAdjoint`, `1` for `⌜·⌝`, `0` for `⊤`. -/
  numOperands : Nat := 0

/-- A frame inference procedure registered with `@[frameproc]`, together with its frame operator. The
`vcgen` frontend selects the one whose `prog` matches the goal program's monad and stores it in
`Context.selectedFrameProc?`. -/
public structure VCGen.FrameProc where
  /-- Head constant of the program type (the monad) whose `wp` this procedure frames. Keys the
  procedure in the registry; `vcgen` consults it for a program with that head. -/
  prog : Name
  /-- The frame inference metaprogram. -/
  proc : VCGen.FrameInferenceProc
  /-- Head constant of the frame operator framed with; keys `split` for `splitLatticeOp?`. -/
  conj : Name
  /-- Builds the frame operator (head constant `conj`) for the goal's assertion type. -/
  op : VCGen.WPInfo → MetaM Expr
  /-- The lattice split decomposing `conj F R` on the RHS of an entailment. -/
  split : VCGen.LatticeSplit

end Lean.Elab.Tactic.Do.Internal
