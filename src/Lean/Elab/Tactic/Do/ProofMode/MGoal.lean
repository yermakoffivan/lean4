/-
Copyright (c) 2022 Lars König. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lars König, Mario Carneiro, Sebastian Graf, Vladimir Gladshtein
-/
module

prelude
public import Std.Do.SPred.DerivedLaws
public import Std.Tactic.Do.ProofMode
public import Std.Internal.Do.Order.Lemmas
public import Lean.Elab.Tactic.Basic
public import Lean.Elab.Tactic.Do.Options

public section

namespace Lean.Elab.Tactic.Do.ProofMode

open Lean Elab Meta
open Std.Do Std.Tactic.Do

@[match_pattern] private def nameAnnotation := `name
@[match_pattern] private def uniqAnnotation := `uniq

structure Hyp where
  name : Name
  uniq : Name -- for display purposes only
  p : Expr

def parseHyp? : Expr → Option Hyp
  | .mdata ⟨[(nameAnnotation, .ofName name), (uniqAnnotation, .ofName uniq)]⟩ p =>
    some ⟨name, uniq, p⟩ -- NB: mdatas are transparent to SubExpr; hence no pos.push
  | _ => none

def Hyp.toExpr (hyp : Hyp) : Expr :=
  .mdata ⟨[(nameAnnotation, .ofName hyp.name), (uniqAnnotation, .ofName hyp.uniq)]⟩ hyp.p

def SPred.mkType (u : Level) (σs : Expr) : Expr :=
  mkApp (mkConst ``SPred [u]) σs

-- set_option pp.all true in
-- #check ⌜True⌝
def SPred.mkPure (u : Level) (σs : Expr) (p : Expr) : Expr :=
  mkApp2 (mkConst ``SPred.pure [u]) σs p

def SPred.isPure? : Expr → Option (Level × Expr × Expr)
  | mkApp2 (.const ``SPred.pure [u]) σs p => some (u, σs, p)
  | _ => none

def emptyHypName := `emptyHyp

def emptyHyp (u : Level) (σs : Expr) : Expr := -- ⌜True⌝ standing in for an empty conjunction of hypotheses
  Hyp.toExpr { name := emptyHypName, uniq := emptyHypName, p := SPred.mkPure u σs (mkConst ``True) }

def parseEmptyHyp? (e : Expr) : Option (Level × Expr) := do
  let h ← parseHyp? e
  unless h.name == emptyHypName || h.name.hasMacroScopes do
    -- Interpret empty hyps when they are not named `emptyHyp` or have macro scopes
    -- (= introduced inaccessibly). Otherwise we want to treat it as a regular hypothesis.
    failure
  let (u, σs, p) ← SPred.isPure? h.p
  match p with
  | .const ``True _ => return (u, σs)
  | _ => failure

def pushLeftConjunct (pos : SubExpr.Pos) : SubExpr.Pos :=
  pos.pushNaryArg 3 1

def pushRightConjunct (pos : SubExpr.Pos) : SubExpr.Pos :=
  pos.pushNaryArg 3 2

/-- Combine two hypotheses into a conjunction.
Precondition: Neither `lhs` nor `rhs` is empty (`parseEmptyHyp?`). -/
def SPred.mkAnd! (u : Level) (σs lhs rhs : Expr) : Expr :=
  mkApp3 (mkConst ``SPred.and [u]) σs lhs rhs

/-- Smart constructor that cancels away empty hypotheses,
along with a proof that `lhs ∧ rhs ⊣⊢ₛ result`. -/
def SPred.mkAnd (u : Level) (σs lhs rhs : Expr) : Expr × Expr :=
  if let some _ := parseEmptyHyp? lhs then
    (rhs, mkApp2 (mkConst ``SPred.true_and [u]) σs rhs)
  else if let some _ := parseEmptyHyp? rhs then
    (lhs, mkApp2 (mkConst ``SPred.and_true [u]) σs lhs)
  else
    let result := SPred.mkAnd! u σs lhs rhs
    (result, mkApp2 (mkConst ``SPred.bientails.refl [u]) σs result)

def TypeList.mkType (u : Level) : Expr := mkApp (mkConst ``List [.succ u]) (mkSort (.succ u))
def TypeList.mkNil (u : Level) : Expr := mkApp (mkConst ``List.nil [.succ u]) (mkSort (.succ u))
def TypeList.mkCons (u : Level) (hd tl : Expr) : Expr := mkApp3 (mkConst ``List.cons [.succ u]) (mkSort (.succ u)) hd tl
def TypeList.length (σs : Expr) : MetaM Nat := do
  let mut σs ← whnfR σs
  let mut n := 0
  while σs.isAppOfArity ``List.cons 3 do
    n := n+1
    σs ← whnfR (σs.getArg! 2)
  return n

def parseAnd? (e : Expr) : Option (Level × Expr × Expr × Expr) :=
  (e.getAppFn.constLevels![0]!, ·) <$> e.app3? ``SPred.and

structure MGoal where
  u : Level
  σs : Expr -- Q(List Type)
  hyps : Expr -- A conjunction of hypotheses in `SPred σs`, each carrying a name and uniq as metadata (`parseHyp?`)
  target : Expr -- Q(SPred $σs)
  deriving Inhabited

def parseMGoal? (expr : Expr) : Option MGoal := do
  let some (σs, hyps, target) := expr.consumeMData.app3? ``MGoalEntails | none
  some { u := expr.getAppFn'.constLevels![0]!, σs, hyps, target }

open Tactic in
def ensureMGoal : TacticM (MVarId × MGoal) := do
  let mvar ← getMainGoal
  let goal ← instantiateMVars <| (← mvar.getType)
  if let some goal := parseMGoal? goal then
    return (mvar, goal)
  else
    throwError "Not in proof mode"

def MGoal.strip (goal : MGoal) : Expr := -- omits the .mdata wrapper
  mkApp3 (mkConst ``SPred.entails [goal.u]) goal.σs goal.hyps goal.target

/-- Roundtrips with `parseMGoal?`. -/
def MGoal.toExpr (goal : MGoal) : Expr :=
  mkApp3 (mkConst ``MGoalEntails [goal.u]) goal.σs goal.hyps goal.target

partial def MGoal.findHyp? (goal : MGoal) (name : Name) : Option (SubExpr.Pos × Hyp) := go goal.hyps SubExpr.Pos.root
  where
    go (e : Expr) (p : SubExpr.Pos) : Option (SubExpr.Pos × Hyp) := do
      if let some hyp := parseHyp? e then
        if hyp.name = name then
          return (p, hyp)
        else
          none
      else if let some (_, _, lhs, rhs) := parseAnd? e then
        -- NB: Need to prefer rhs over lhs, like the goal view (Lean.Elab.Tactic.Do.ProofMode.Delab).
        go rhs (pushLeftConjunct p) <|> go lhs (pushRightConjunct p)
      else if let some _ := parseEmptyHyp? e then
        none
      else
        panic! "MGoal.findHyp?: hypothesis without proper metadata: {e}"

def checkHasType (expr : Expr) (expectedType : Expr) (suppressWarning : Bool := false) : MetaM Unit := do
  check expr
  check expectedType
  let exprType ← inferType expr
  unless ← isDefEqGuarded exprType expectedType do
    throwError "checkHasType: the expression's inferred type and its expected type did not match.\n
      expr: {indentExpr expr}\n
      has inferred type: {indentExpr exprType}\n
      but the expected type was: {indentExpr expectedType}"
  unless suppressWarning do
    logWarning m!"stray checkHasType {expr} : {expectedType}"

def MGoal.checkProof (goal : MGoal) (prf : Expr) (suppressWarning : Bool := false) : MetaM Unit := do
  checkHasType prf goal.toExpr suppressWarning

def getFreshHypName : TSyntax ``binderIdent → CoreM (Name × Syntax)
  | `(binderIdent| $name:ident) => pure (name.getId, name)
  | stx => return (← mkFreshUserName `h, stx)

partial def pushForallContextIntoHyps (σs hyps : Expr) : Expr := go #[] #[] hyps
  where
    wrap (revLams : Array (Name × Expr × BinderInfo)) (revAppArgs : Array Expr) (body : Expr) : Expr :=
      revLams.foldr (fun (x, ty, info) e => .lam x ty e info) (body.betaRev revAppArgs)

    go (revLams : Array (Name × Expr × BinderInfo)) (revAppArgs : Array Expr) (e : Expr) : Expr :=
      if let some (u, _σs) := parseEmptyHyp? e then
        emptyHyp u σs
      else if let some hyp := parseHyp? e then
        { hyp with p := wrap revLams revAppArgs hyp.p }.toExpr
      else if let some (u, _σs, lhs, rhs) := parseAnd? e then
        SPred.mkAnd! u σs (go revLams revAppArgs lhs) (go revLams revAppArgs rhs)
      else if let .lam x ty body info := e then
        if let some a := revAppArgs.back? then
          go revLams revAppArgs.pop (body.instantiate1 a)
        else
          go (revLams.push (x, ty, info)) revAppArgs body
      else if let .app f a := e then
        go revLams (revAppArgs.push a) f
      else
        wrap revLams revAppArgs e

def betaPreservingHypNames (σs' e : Expr) (args : Array Expr) : Expr :=
  pushForallContextIntoHyps σs' (mkAppN e args)

def dropStateList (σs : Expr) (n : Nat) : MetaM Expr := do
  let mut σs := σs
  for _ in *...n do
    let some (_type, _σ, σs') := (← whnfR σs).app3? ``List.cons | throwError "Ambient state list not a cons {σs}"
    σs := σs'
  return σs

partial def MGoal.renameInaccessibleHyps (goal : MGoal) (idents : Array (TSyntax ``binderIdent)) : MetaM MGoal := do
  let (hyps, (_, idents)) ← StateT.run (go goal.hyps) ({}, idents) -- NB: idents in reverse order
  unless idents.isEmpty do
    throwError "mrename_i: Could not find inaccessible hypotheses for {idents} in {goal.toExpr}"
  return { goal with hyps := hyps }
  where
    go (H : Expr) : StateT (NameSet × Array (TSyntax ``binderIdent)) MetaM Expr := do
      let mut (shadowed, idents) ← StateT.get
      if idents.isEmpty then
        return H
      if let some _ := parseEmptyHyp? H then
        return H
      if let some hyp := parseHyp? H then
        if hyp.name.hasMacroScopes || shadowed.contains hyp.name then
          if let `(binderIdent| $name:ident) := idents.back! then
            let hyp := { hyp with name := name.getId }
            StateT.set (shadowed, idents.pop)
            return hyp.toExpr
          idents := idents.pop
        StateT.set (shadowed.insert hyp.name, idents)
        return H
      if let some (u, σs, lhs, rhs) := parseAnd? H then
        let rhs ← go rhs -- NB: First go right because those are the "most recent" hypotheses
        let lhs ← go lhs
        return SPred.mkAnd! u σs lhs rhs
      return H

def addLocalVarInfo (stx : Syntax) (lctx : LocalContext)
    (expr : Expr) (expectedType? : Option Expr) (isBinder := false) : MetaM Unit := do
  Elab.withInfoContext' (pure ())
    (fun _ =>
      return .inl <| .ofTermInfo
        { elaborator := .anonymous, lctx, expr, stx, expectedType?, isBinder })
    (return .ofPartialTermInfo { elaborator := .anonymous, lctx, stx, expectedType? })

def addHypInfo (stx : Syntax) (σs : Expr) (hyp : Hyp) (isBinder := false) : MetaM Unit := do
  let lctx ← getLCtx
  let ty := mkApp2 (← mkConstWithFreshMVarLevels ``MGoalHypMarker) σs hyp.p
  addLocalVarInfo stx (lctx.mkLocalDecl ⟨hyp.uniq⟩ hyp.name ty) (.fvar ⟨hyp.uniq⟩) ty isBinder

end Lean.Elab.Tactic.Do.ProofMode

/-!
# Proof-mode helpers for the new `CompleteLattice`-based metatheory

Mirrors the helpers above but operates on a generic `(l : Type u, [CompleteLattice l])`
in place of `(σs : List Type)`. Goals are recognised via
`Std.Internal.Tactic.Do.MGoalEntails`, hypotheses are conjoined with `Lean.Order.meet`,
and pure facts use `Lean.Order.CompleteLattice.ofProp`.
-/

namespace Lean.Elab.Tactic.Internal.Do.ProofMode

open Lean Elab Meta
open Std.Internal.Tactic.Do
open Lean.Order

@[match_pattern] private def nameAnnotation := `name
@[match_pattern] private def uniqAnnotation := `uniq

structure Hyp where
  name : Name
  uniq : Name -- for display purposes only
  p : Expr

def parseHyp? : Expr → Option Hyp
  | .mdata ⟨[(nameAnnotation, .ofName name), (uniqAnnotation, .ofName uniq)]⟩ p =>
    some ⟨name, uniq, p⟩
  | _ => none

def Hyp.toExpr (hyp : Hyp) : Expr :=
  .mdata ⟨[(nameAnnotation, .ofName hyp.name), (uniqAnnotation, .ofName hyp.uniq)]⟩ hyp.p

/-- Build `⌜p⌝ : l` where `u` is the type universe of `l` (i.e. `l : Type u`). -/
def mkPure (u : Level) (l cl p : Expr) : Expr :=
  mkApp3 (mkConst ``Lean.Order.CompleteLattice.ofProp [u]) l cl p

/-- Recognise an embedded proposition `⌜p⌝ : l`. Returns `(u, l, cl, p)`. -/
def isPure? : Expr → Option (Level × Expr × Expr × Expr)
  | mkApp3 (.const ``Lean.Order.CompleteLattice.ofProp [u]) l cl p => some (u, l, cl, p)
  | _ => none

def emptyHypName := `emptyHyp

/-- The empty conjunction of hypotheses, represented as a marked `⊤`. -/
def emptyHyp (u : Level) (l cl : Expr) : Expr :=
  Hyp.toExpr { name := emptyHypName, uniq := emptyHypName,
               p := mkApp2 (mkConst ``Lean.Order.top [u]) l cl }

def parseEmptyHyp? (e : Expr) : Option (Level × Expr × Expr) := do
  let h ← parseHyp? e
  unless h.name == emptyHypName || h.name.hasMacroScopes do
    failure
  match h.p with
  | mkApp2 (.const ``Lean.Order.top [u]) l cl => return (u, l, cl)
  | _ => failure

/-- `meet` has the shape `meet α [CompleteLattice α] x y` (4 args), so the conjuncts
sit at argIdx 2 and 3 respectively (with the type/instance at 0 and 1). -/
def pushLeftConjunct (pos : SubExpr.Pos) : SubExpr.Pos :=
  pos.pushNaryArg 4 2

def pushRightConjunct (pos : SubExpr.Pos) : SubExpr.Pos :=
  pos.pushNaryArg 4 3

/-- Combine two hypotheses into a `meet`. Precondition: neither is empty. -/
def mkAnd! (u : Level) (l cl lhs rhs : Expr) : Expr :=
  mkApp4 (mkConst ``Lean.Order.meet [u]) l cl lhs rhs

/-- Smart constructor that cancels away empty hypotheses. Returns `(result, eqProof)`
where `eqProof : lhs ⊓ rhs = result`. -/
def mkAnd (u : Level) (l cl lhs rhs : Expr) : Expr × Expr :=
  if let some _ := parseEmptyHyp? lhs then
    (rhs, mkApp3 (mkConst ``Std.Internal.Do.CompleteLattice.true_and [u]) l cl rhs)
  else if let some _ := parseEmptyHyp? rhs then
    (lhs, mkApp3 (mkConst ``Std.Internal.Do.CompleteLattice.and_true [u]) l cl lhs)
  else
    let result := mkAnd! u l cl lhs rhs
    (result, mkApp2 (mkConst ``Eq.refl [.succ u]) l result)

/-- Match a `meet α [CompleteLattice α] lhs rhs`, returning `(u, l, cl, lhs, rhs)`. -/
def parseAnd? (e : Expr) : Option (Level × Expr × Expr × Expr × Expr) :=
  (e.getAppFn.constLevels![0]!, ·) <$> e.app4? ``Lean.Order.meet

/-- A proof-mode goal `MGoalEntails l cl hyps target`. The universe `u` is the
SORT universe of `l` (matching the parsed `MGoalEntails` level). The TYPE universe
needed for `meet`/`ofProp`/etc. is exposed as `MGoal.uType`. -/
structure MGoal where
  u : Level
  l : Expr -- Q(Type uType), where uType = u.dec
  cl : Expr -- Q(CompleteLattice l)
  hyps : Expr -- Q(l)
  target : Expr -- Q(l)
  deriving Inhabited

/-- Type universe of `l`. Equals `u.dec` for `l : Type uType`; falls back to `u`
when the level is not of the form `succ _` (e.g. when `l = Prop`). -/
@[inline] def MGoal.uType (g : MGoal) : Level := g.u.dec.getD g.u

def parseMGoal? (expr : Expr) : Option MGoal := do
  let some (l, cl, hyps, target) := expr.consumeMData.app4? ``MGoalEntails | none
  some { u := expr.getAppFn'.constLevels![0]!, l, cl, hyps, target }

open Tactic in
def ensureMGoal : TacticM (MVarId × MGoal) := do
  let mvar ← getMainGoal
  let goal ← instantiateMVars <| (← mvar.getType)
  if let some goal := parseMGoal? goal then
    return (mvar, goal)
  else
    throwError "Not in proof mode"

/-- Strips the `MGoalEntails` marker, producing the raw `PartialOrder.rel` application. -/
def MGoal.strip (goal : MGoal) : Expr :=
  let po := mkApp2 (mkConst ``Lean.Order.CompleteLattice.toPartialOrder [goal.u]) goal.l goal.cl
  mkApp4 (mkConst ``Lean.Order.PartialOrder.rel [goal.u]) goal.l po goal.hyps goal.target

/-- Roundtrips with `parseMGoal?`. -/
def MGoal.toExpr (goal : MGoal) : Expr :=
  mkApp4 (mkConst ``MGoalEntails [goal.u]) goal.l goal.cl goal.hyps goal.target

partial def MGoal.findHyp? (goal : MGoal) (name : Name) : Option (SubExpr.Pos × Hyp) :=
  go goal.hyps SubExpr.Pos.root
  where
    go (e : Expr) (p : SubExpr.Pos) : Option (SubExpr.Pos × Hyp) := do
      if let some hyp := parseHyp? e then
        if hyp.name = name then
          return (p, hyp)
        else
          none
      else if let some (_, _, _, lhs, rhs) := parseAnd? e then
        go rhs (pushLeftConjunct p) <|> go lhs (pushRightConjunct p)
      else if let some _ := parseEmptyHyp? e then
        none
      else
        panic! "MGoal.findHyp?: hypothesis without proper metadata: {e}"

def checkHasType (expr : Expr) (expectedType : Expr) (suppressWarning : Bool := false) : MetaM Unit := do
  check expr
  check expectedType
  let exprType ← inferType expr
  unless ← isDefEqGuarded exprType expectedType do
    throwError "checkHasType: the expression's inferred type and its expected type did not match.\n
      expr: {indentExpr expr}\n
      has inferred type: {indentExpr exprType}\n
      but the expected type was: {indentExpr expectedType}"
  unless suppressWarning do
    logWarning m!"stray checkHasType {expr} : {expectedType}"

def MGoal.checkProof (goal : MGoal) (prf : Expr) (suppressWarning : Bool := false) : MetaM Unit := do
  checkHasType prf goal.toExpr suppressWarning

def getFreshHypName : TSyntax ``binderIdent → CoreM (Name × Syntax)
  | `(binderIdent| $name:ident) => pure (name.getId, name)
  | stx => return (← mkFreshUserName `h, stx)

partial def pushForallContextIntoHyps (l cl hyps : Expr) : Expr := go #[] #[] hyps
  where
    wrap (revLams : Array (Name × Expr × BinderInfo)) (revAppArgs : Array Expr) (body : Expr) : Expr :=
      revLams.foldr (fun (x, ty, info) e => .lam x ty e info) (body.betaRev revAppArgs)

    go (revLams : Array (Name × Expr × BinderInfo)) (revAppArgs : Array Expr) (e : Expr) : Expr :=
      if let some (u, _l, _cl) := parseEmptyHyp? e then
        emptyHyp u l cl
      else if let some hyp := parseHyp? e then
        { hyp with p := wrap revLams revAppArgs hyp.p }.toExpr
      else if let some (u, _l, _cl, lhs, rhs) := parseAnd? e then
        mkAnd! u l cl (go revLams revAppArgs lhs) (go revLams revAppArgs rhs)
      else if let .lam x ty body info := e then
        if let some a := revAppArgs.back? then
          go revLams revAppArgs.pop (body.instantiate1 a)
        else
          go (revLams.push (x, ty, info)) revAppArgs body
      else if let .app f a := e then
        go revLams (revAppArgs.push a) f
      else
        wrap revLams revAppArgs e

def betaPreservingHypNames (l' cl' e : Expr) (args : Array Expr) : Expr :=
  pushForallContextIntoHyps l' cl' (mkAppN e args)

/-- Peel `n` `Pi`/arrow types from the lattice element type `l`. Replaces the old
`dropStateList` which peeled `List.cons` cells from `σs`. -/
def dropFunctionTypes (l : Expr) (n : Nat) : MetaM Expr := do
  let mut l := l
  for _ in *...n do
    let l' ← whnfR l
    let .forallE _ _ body _ := l' | throwError "Ambient lattice type not a Pi {l}"
    l := body
  return l

partial def MGoal.renameInaccessibleHyps (goal : MGoal) (idents : Array (TSyntax ``binderIdent)) : MetaM MGoal := do
  let (hyps, (_, idents)) ← StateT.run (go goal.hyps) ({}, idents) -- NB: idents in reverse order
  unless idents.isEmpty do
    throwError "mrename_i: Could not find inaccessible hypotheses for {idents} in {goal.toExpr}"
  return { goal with hyps := hyps }
  where
    go (H : Expr) : StateT (NameSet × Array (TSyntax ``binderIdent)) MetaM Expr := do
      let mut (shadowed, idents) ← StateT.get
      if idents.isEmpty then
        return H
      if let some _ := parseEmptyHyp? H then
        return H
      if let some hyp := parseHyp? H then
        if hyp.name.hasMacroScopes || shadowed.contains hyp.name then
          if let `(binderIdent| $name:ident) := idents.back! then
            let hyp := { hyp with name := name.getId }
            StateT.set (shadowed, idents.pop)
            return hyp.toExpr
          idents := idents.pop
        StateT.set (shadowed.insert hyp.name, idents)
        return H
      if let some (u, l, cl, lhs, rhs) := parseAnd? H then
        let rhs ← go rhs -- NB: First go right because those are the "most recent" hypotheses
        let lhs ← go lhs
        return mkAnd! u l cl lhs rhs
      return H

def addLocalVarInfo (stx : Syntax) (lctx : LocalContext)
    (expr : Expr) (expectedType? : Option Expr) (isBinder := false) : MetaM Unit := do
  Elab.withInfoContext' (pure ())
    (fun _ =>
      return .inl <| .ofTermInfo
        { elaborator := .anonymous, lctx, expr, stx, expectedType?, isBinder })
    (return .ofPartialTermInfo { elaborator := .anonymous, lctx, stx, expectedType? })

/-- Render a hypothesis as a local variable with the `MGoalHypMarker` decorating type.
The `u` argument is the SORT universe of `l` (i.e. `goal.u`). -/
def addHypInfo (stx : Syntax) (u : Level) (l cl : Expr) (hyp : Hyp) (isBinder := false) : MetaM Unit := do
  let lctx ← getLCtx
  let ty := mkApp3 (mkConst ``MGoalHypMarker [u]) l cl hyp.p
  addLocalVarInfo stx (lctx.mkLocalDecl ⟨hyp.uniq⟩ hyp.name ty) (.fvar ⟨hyp.uniq⟩) ty isBinder

end Lean.Elab.Tactic.Internal.Do.ProofMode
