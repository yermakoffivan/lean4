/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kyle Miller
-/
module

prelude
public import Lean.Elab.ConfigEval.Types

/-!
# Evaluator instances for built-in types

Some of these instances are hand-written instead of being derived, since the syntax may be special,
or they might make special assumptions on the type (e.g. for `Bool`, we assume the identifiers
`true` and `false` always refer to `Bool`'s constructors).
-/

public section

namespace Lean.Elab.ConfigEval

open Meta Term

/-!
## `EvalTerm` instances
-/

partial def stripParens : Term → Term
  | `(($t)) => stripParens t
  | t => t

@[inline] def evalTermWithInfo {α : Type}
    (expectedType? : Option Expr) (f : Term → TermElabM (α × Expr)) (stx : Term) :
    TermElabM (α × Expr) := do
  let (v, e) ← f (stripParens stx)
  if (← getInfoState).enabled then
    addTermInfo' stx e (expectedType? := expectedType?)
  return (v, e)

/-- Like `evalTermWithInfo`, but uses an existing `ToExpr` instance
for `expectedType?` and for constructing the expression. -/
@[inline] def evalTermWithInfo' {α : Type} [ToExpr α]
    (f : Term → TermElabM α) :
    Term → TermElabM (α × Expr) :=
  evalTermWithInfo (toTypeExpr α) (fun stx => do
    let v ← f stx
    return (v, toExpr v))

def evalBoolStx : Term → TermElabM (Bool × Expr) :=
  evalTermWithInfo' fun stx =>
    let id := stx.raw.getId.eraseMacroScopes
    if id == `true then
      return true
    else if id == `false then
      return false
    else
      match stx with
      | `(.true)  => return true
      | `(.false) => return false
      | _ => throwUnsupportedSyntax

def evalNatStx : Term → TermElabM (Nat × Expr) :=
  evalTermWithInfo' fun
    | `($n:num) => return n.getNat
    | _ => throwUnsupportedSyntax

def evalIntStx : Term → TermElabM (Int × Expr) :=
  evalTermWithInfo' fun
  | `($n:num) => return n.getNat
  | `(-$n:num) => return -n.getNat
  | _ => throwUnsupportedSyntax

def evalStringStx : Term → TermElabM (String × Expr) :=
  evalTermWithInfo' fun
  | `($s:str) => return s.getString
  | _ => throwUnsupportedSyntax

def evalNameStx : Term → TermElabM (Name × Expr) :=
  evalTermWithInfo' fun stx => do
    if stx.raw.isOfKind ``Parser.Term.quotedName then
      if let some n := stx.raw[0].isNameLit? then
        return n
    if stx.raw.isOfKind ``Parser.Term.doubleQuotedName then
      -- Always allow quoting private names.
      return ← withoutExporting do
        let n ← realizeGlobalConstNoOverloadWithInfo stx.raw[2]
        recordExtraModUseFromDecl (isMeta := false) n
        return n
    throwUnsupportedSyntax

def evalOptionStx {α : Type} (typeExpr : Expr) (ev : Term → TermElabM (α × Expr)) : Term → TermElabM (Option α × Expr) :=
  evalTermWithInfo (Expr.app (Expr.const ``Option [0]) typeExpr) fun
  | `(none) | `(.none) => return (none, Expr.app (Expr.const ``Option.none [0]) typeExpr)
  | `(some $stx) | `(.some $stx) | stx => do
    let (v, e) ← ev stx
    return (some v, mkApp2 (Expr.const ``Option.some [0]) typeExpr e)

def evalListStx {α : Type} (typeExpr : Expr) (ev : Term → TermElabM (α × Expr)) : Term → TermElabM (List α × Expr) :=
  evalTermWithInfo (Expr.app (Expr.const ``List [0]) typeExpr) fun
  | `([$[$xs],*]) => do
    let (vs, es) := (← xs.mapM ev).unzip
    let e := es.foldr (init := Expr.app (Expr.const ``List.nil [0]) typeExpr) fun x e =>
      mkApp3 (Expr.const ``List.cons [0]) typeExpr x e
    return (vs.toList, e)
  | _ => throwUnsupportedSyntax

def evalArrayStx {α : Type} (typeExpr : Expr) (ev : Term → TermElabM (α × Expr)) : Term → TermElabM (Array α × Expr) :=
  evalTermWithInfo (Expr.app (Expr.const ``Array [0]) typeExpr) fun
  | `(#[$[$xs],*]) => do
    let (vs, es) := (← xs.mapM ev).unzip
    let e := es.foldr (init := Expr.app (Expr.const ``List.nil [0]) typeExpr) fun x e =>
      mkApp3 (Expr.const ``List.cons [0]) typeExpr x e
    return (vs, mkApp2 (Expr.const ``List.toArray [0]) typeExpr e)
  | _ => throwUnsupportedSyntax

def evalDataValueStx (stx : Term) : TermElabM (DataValue × Expr) :=
  let mk {α} (c : Name) (f : α → DataValue) (x : α × Expr) := (f x.1, Expr.app (.const c []) x.2)
  (mk ``DataValue.ofBool DataValue.ofBool <$> evalBoolStx stx)
  <|> (mk ``DataValue.ofNat DataValue.ofNat <$> evalNatStx stx)
  <|> (mk ``DataValue.ofInt DataValue.ofInt <$> evalIntStx stx)
  <|> (mk ``DataValue.ofString DataValue.ofString <$> evalStringStx stx)
  <|> (mk ``DataValue.ofName DataValue.ofName <$> evalNameStx stx)
  -- skipping `DataValue.ofSyntax` for now
  <|> throwUnsupportedSyntax

instance : EvalTerm Bool where
  evalTerm := evalBoolStx
  typeExpr := toTypeExpr Bool

instance : EvalTerm Nat where
  evalTerm := evalNatStx
  typeExpr := toTypeExpr Nat

instance : EvalTerm Int where
  evalTerm := evalIntStx
  typeExpr := toTypeExpr Int

instance : EvalTerm String where
  evalTerm := evalStringStx
  typeExpr := toTypeExpr String

instance : EvalTerm Name where
  evalTerm := evalNameStx
  typeExpr := toTypeExpr Name

instance {α : Type} [EvalTerm α] : EvalTerm (Option α) where
  evalTerm := evalOptionStx (EvalTerm.typeExpr α) evalTerm
  typeExpr := Expr.app (Expr.const ``Option [0]) (EvalTerm.typeExpr α)

instance {α : Type} [EvalTerm α] : EvalTerm (List α) where
  evalTerm := evalListStx (EvalTerm.typeExpr α) evalTerm
  typeExpr := Expr.app (Expr.const ``List [0]) (EvalTerm.typeExpr α)

instance {α : Type} [EvalTerm α] : EvalTerm (Array α) where
  evalTerm := evalArrayStx (EvalTerm.typeExpr α) evalTerm
  typeExpr := Expr.app (Expr.const ``Array [0]) (EvalTerm.typeExpr α)

instance : EvalTerm DataValue where
  evalTerm := evalDataValueStx
  typeExpr := Expr.const ``DataValue []

/-!
## `EvalExpr` instances
-/

/--
Evaluates `f e`, and if that fails, evaluates `f (← whnf e)`.
However, if `f e` throws `throwUnsupportedSyntax`, then aborts without trying `whnf`.
Throws `throwUnsupportedSyntax` if neither succeeds.
-/
def withWHNF {α : Type} (f : Expr → MetaM α) (e : Expr) : MetaM α := do
  try
    f e
  catch ex =>
    if let .internal id := ex then
      if id == unsupportedSyntaxExceptionId then
        throw ex
    f (← whnf e) <|> throwUnsupportedSyntax

def evalBoolExprCore (e : Expr) : MetaM Bool :=
  match_expr e with
  | Bool.true => return true
  | Bool.false => return false
  | _ => failure

def evalBoolExpr : Expr → MetaM Bool :=
  withWHNF evalBoolExprCore

def evalNatExprCore (e : Expr) : MetaM Nat :=
  (e.nat? <|> e.rawNatLit?).getM

def evalNatExpr : Expr → MetaM Nat :=
  withWHNF evalNatExprCore

def evalIntExprCore (e : Expr) : MetaM Int :=
  e.int?.getM <|> Int.ofNat <$> evalNatExprCore e <|>
    match_expr e with
    | Int.ofNat e' => Int.ofNat <$> evalNatExpr e'
    | Int.negSucc e' => Int.negSucc <$> evalNatExpr e'
    | _ => failure

def evalIntExpr : Expr → MetaM Int :=
  withWHNF evalIntExprCore

def evalStringExprCore : Expr → MetaM String
  | .lit (.strVal s) => return s
  | _ => failure

def evalStringExpr : Expr → MetaM String :=
  withWHNF evalStringExprCore

def evalNameExprCore (e : Expr) : MetaM Name :=
  e.name?.getM

def evalNameExpr : Expr → MetaM Name :=
  withWHNF evalNameExprCore

def evalOptionExprCore {α : Type} (ev : Expr → MetaM α) (e : Expr) : MetaM (Option α) :=
  match_expr e with
  | Option.none _ => return none
  | Option.some _ x => some <$> ev x
  | _ => failure

def evalOptionExpr {α : Type} (ev : Expr → MetaM α) (e : Expr) : MetaM (Option α) :=
  withWHNF (evalOptionExprCore ev) e <|> some <$> ev e

partial def evalListExpr {α : Type} (ev : Expr → MetaM α) (e : Expr) (didWHNF : Bool := false) : MetaM (List α) := do
  match_expr (meta := false) e with
  | List.nil _ => return []
  | List.cons _ x xs =>
    let v ← ev x
    let vs ← evalListExpr ev xs (didWHNF := false)
    return v :: vs
  | _ =>
    if didWHNF then
      throwUnsupportedSyntax
    else
      evalListExpr ev (← whnf e) (didWHNF := true)

partial def evalArrayExpr {α : Type} (ev : Expr → MetaM α) : Expr → MetaM (Array α) :=
  withWHNF fun e =>
    match_expr e with
    | List.toArray _ e' => List.toArray <$> evalListExpr ev e'
    | Array.mk _ e' => List.toArray <$> evalListExpr ev e'
    | _ => failure

def evalDataValueExprCore (e : Expr) : MetaM DataValue :=
  match_expr e with
  | DataValue.ofBool e => DataValue.ofBool <$> evalBoolExpr e
  | DataValue.ofNat e => DataValue.ofNat <$> evalNatExpr e
  | DataValue.ofInt e => DataValue.ofInt <$> evalIntExpr e
  | DataValue.ofString e => DataValue.ofString <$> evalStringExpr e
  | DataValue.ofName e => DataValue.ofName <$> evalNameExpr e
  | _ =>
    (DataValue.ofBool <$> evalBoolExprCore e)
    <|> (DataValue.ofNat <$> evalNatExprCore e)
    <|> (DataValue.ofInt <$> evalIntExprCore e)
    <|> (DataValue.ofString <$> evalStringExprCore e)
    <|> (DataValue.ofName <$> evalNameExprCore e)
    -- skipping `DataValue.ofSyntax` for now
    <|> failure

def evalDataValueExpr : Expr → MetaM DataValue :=
  withWHNF evalDataValueExprCore

instance : EvalExpr Bool where
  evalExpr := evalBoolExpr
  expectedType? := toTypeExpr Bool

instance : EvalExpr Nat where
  evalExpr := evalNatExpr
  expectedType? := toTypeExpr Nat

instance : EvalExpr Int where
  evalExpr := evalIntExpr
  expectedType? := toTypeExpr Int

instance : EvalExpr String where
  evalExpr := evalStringExpr
  expectedType? := toTypeExpr String

instance : EvalExpr Name where
  evalExpr := evalNameExpr
  expectedType? := toTypeExpr Name

instance {α : Type} [EvalExpr α] : EvalExpr (Option α) where
  evalExpr := evalOptionExpr evalExpr
  expectedType? := Expr.app (Expr.const ``Option [0]) <$> EvalExpr.expectedType? α

instance {α : Type} [EvalExpr α] : EvalExpr (List α) where
  evalExpr := evalListExpr evalExpr
  expectedType? := Expr.app (Expr.const ``List [0]) <$> EvalExpr.expectedType? α

instance {α : Type} [EvalExpr α] : EvalExpr (Array α) where
  evalExpr := evalArrayExpr evalExpr
  expectedType? := Expr.app (Expr.const ``Array [0]) <$> EvalExpr.expectedType? α

instance : EvalExpr DataValue where
  evalExpr := evalDataValueExpr
  expectedType? := none -- don't want to elaborate with an expected type, since numeric literals will fail

end Lean.Elab.ConfigEval
