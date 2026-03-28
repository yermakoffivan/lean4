/-
Copyright (c) 2026 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Sym.Arith.Classify
import Lean.Meta.Sym.SynthInstance
import Lean.Meta.Sym.Canon
public section

namespace Lean.Meta.Sym.Arith

/-!
# Type classes and cached function expressions for arithmetic operators

## Type classes

`MonadCanon`, `MonadRing`, `MonadCommRing`, `MonadSemiring`, `MonadCommSemiring`
abstract over the monad and the ring/semiring state. This allows `Functions.lean`
to work in any monad that provides the right instances — both `SymM` (for the arith
normalizer) and grind's `RingM`/`SemiringM` (once grind is unified).

## Cached functions

Synthesizes and caches the canonical Lean expressions for arithmetic operators
(`+`, `*`, `-`, `^`, `intCast`, `natCast`, etc.). These cached expressions are used
during reification to validate instances via pointer equality (`isSameExpr`).
-/

/-! ### MonadCanon -/

class MonadCanon (m : Type → Type) where
  /-- Canonicalize an expression (types, instances, support arguments). -/
  canonExpr : Expr → m Expr
  /-- Synthesize an instance, returning `none` on failure. -/
  synthInstance? : Expr → m (Option Expr)

export MonadCanon (canonExpr)

@[always_inline]
instance (m n) [MonadLift m n] [MonadCanon m] : MonadCanon n where
  canonExpr e := liftM (canonExpr e : m Expr)
  synthInstance? e := liftM (MonadCanon.synthInstance? e : m (Option Expr))

def MonadCanon.synthInstance [Monad m] [MonadError m] [MonadCanon m] (type : Expr) : m Expr := do
  let some inst ← synthInstance? type
    | throwError "failed to find instance{indentExpr type}"
  return inst

/-! ### MonadRing / MonadCommRing -/

class MonadRing (m : Type → Type) where
  getRing : m Ring
  modifyRing : (Ring → Ring) → m Unit

export MonadRing (getRing modifyRing)

@[always_inline]
instance (m n) [MonadLift m n] [MonadRing m] : MonadRing n where
  getRing    := liftM (getRing : m Ring)
  modifyRing f := liftM (modifyRing f : m Unit)

class MonadCommRing (m : Type → Type) where
  getCommRing : m CommRing
  modifyCommRing : (CommRing → CommRing) → m Unit

export MonadCommRing (getCommRing modifyCommRing)

@[always_inline]
instance (m n) [MonadLift m n] [MonadCommRing m] : MonadCommRing n where
  getCommRing      := liftM (getCommRing : m CommRing)
  modifyCommRing f := liftM (modifyCommRing f : m Unit)

@[always_inline]
instance (m) [Monad m] [MonadCommRing m] : MonadRing m where
  getRing := return (← getCommRing).toRing
  modifyRing f := modifyCommRing fun s => { s with toRing := f s.toRing }

/-! ### MonadSemiring / MonadCommSemiring -/

class MonadSemiring (m : Type → Type) where
  getSemiring : m Semiring
  modifySemiring : (Semiring → Semiring) → m Unit

export MonadSemiring (getSemiring modifySemiring)

@[always_inline]
instance (m n) [MonadLift m n] [MonadSemiring m] : MonadSemiring n where
  getSemiring    := liftM (getSemiring : m Semiring)
  modifySemiring f := liftM (modifySemiring f : m Unit)

class MonadCommSemiring (m : Type → Type) where
  getCommSemiring : m CommSemiring
  modifyCommSemiring : (CommSemiring → CommSemiring) → m Unit

export MonadCommSemiring (getCommSemiring modifyCommSemiring)

@[always_inline]
instance (m n) [MonadLift m n] [MonadCommSemiring m] : MonadCommSemiring n where
  getCommSemiring      := liftM (getCommSemiring : m CommSemiring)
  modifyCommSemiring f := liftM (modifyCommSemiring f : m Unit)

@[always_inline]
instance (m) [Monad m] [MonadCommSemiring m] : MonadSemiring m where
  getSemiring := return (← getCommSemiring).toSemiring
  modifySemiring f := modifyCommSemiring fun s => { s with toSemiring := f s.toSemiring }

/-! ### Cached function getters -/

variable [MonadLiftT MetaM m] [MonadError m] [Monad m] [MonadCanon m]

private def checkInst (declName : Name) (inst inst' : Expr) : MetaM Unit := do
  unless (← withReducibleAndInstances <| isDefEq inst inst') do
    throwError "error while initializing arithmetic operators:\ninstance for `{declName}` {indentExpr inst}\nis not definitionally equal to the expected one {indentExpr inst'}\nwhen only reducible definitions and instances are reduced"

private def mkUnaryFn (type : Expr) (u : Level) (instDeclName : Name) (declName : Name) (expectedInst : Expr) : m Expr := do
  let inst ← MonadCanon.synthInstance <| mkApp (mkConst instDeclName [u]) type
  checkInst declName inst expectedInst
  canonExpr <| mkApp2 (mkConst declName [u]) type inst

private def mkBinHomoFn (type : Expr) (u : Level) (instDeclName : Name) (declName : Name) (expectedInst : Expr) : m Expr := do
  let inst ← MonadCanon.synthInstance <| mkApp3 (mkConst instDeclName [u, u, u]) type type type
  checkInst declName inst expectedInst
  canonExpr <| mkApp4 (mkConst declName [u, u, u]) type type type inst

private def mkPowFn (u : Level) (type : Expr) (semiringInst : Expr) : m Expr := do
  let inst ← MonadCanon.synthInstance <| mkApp3 (mkConst ``HPow [u, 0, u]) type Nat.mkType type
  let inst' := mkApp2 (mkConst ``Grind.Semiring.npow [u]) type semiringInst
  checkInst ``HPow.hPow inst inst'
  canonExpr <| mkApp4 (mkConst ``HPow.hPow [u, 0, u]) type Nat.mkType type inst

private def mkNatCastFn (u : Level) (type : Expr) (semiringInst : Expr) : m Expr := do
  let inst' := mkApp2 (mkConst ``Grind.Semiring.natCast [u]) type semiringInst
  let instType := mkApp (mkConst ``NatCast [u]) type
  let inst ← match (← MonadCanon.synthInstance? instType) with
  | none => pure inst'
  | some inst => checkInst ``NatCast.natCast inst inst'; pure inst
  canonExpr <| mkApp2 (mkConst ``NatCast.natCast [u]) type inst

section RingFns
variable [MonadRing m]

def getAddFn : m Expr := do
  let ring ← getRing
  if let some addFn := ring.addFn? then return addFn
  let expectedInst := mkApp2 (mkConst ``instHAdd [ring.u]) ring.type <| mkApp2 (mkConst ``Grind.Semiring.toAdd [ring.u]) ring.type ring.semiringInst
  let addFn ← mkBinHomoFn ring.type ring.u ``HAdd ``HAdd.hAdd expectedInst
  modifyRing fun s => { s with addFn? := some addFn }
  return addFn

def getMulFn : m Expr := do
  let ring ← getRing
  if let some mulFn := ring.mulFn? then return mulFn
  let expectedInst := mkApp2 (mkConst ``instHMul [ring.u]) ring.type <| mkApp2 (mkConst ``Grind.Semiring.toMul [ring.u]) ring.type ring.semiringInst
  let mulFn ← mkBinHomoFn ring.type ring.u ``HMul ``HMul.hMul expectedInst
  modifyRing fun s => { s with mulFn? := some mulFn }
  return mulFn

def getSubFn : m Expr := do
  let ring ← getRing
  if let some subFn := ring.subFn? then return subFn
  let expectedInst := mkApp2 (mkConst ``instHSub [ring.u]) ring.type <| mkApp2 (mkConst ``Grind.Ring.toSub [ring.u]) ring.type ring.ringInst
  let subFn ← mkBinHomoFn ring.type ring.u ``HSub ``HSub.hSub expectedInst
  modifyRing fun s => { s with subFn? := some subFn }
  return subFn

def getNegFn : m Expr := do
  let ring ← getRing
  if let some negFn := ring.negFn? then return negFn
  let expectedInst := mkApp2 (mkConst ``Grind.Ring.toNeg [ring.u]) ring.type ring.ringInst
  let negFn ← mkUnaryFn ring.type ring.u ``Neg ``Neg.neg expectedInst
  modifyRing fun s => { s with negFn? := some negFn }
  return negFn

def getPowFn : m Expr := do
  let ring ← getRing
  if let some powFn := ring.powFn? then return powFn
  let powFn ← mkPowFn ring.u ring.type ring.semiringInst
  modifyRing fun s => { s with powFn? := some powFn }
  return powFn

def getIntCastFn : m Expr := do
  let ring ← getRing
  if let some intCastFn := ring.intCastFn? then return intCastFn
  let inst' := mkApp2 (mkConst ``Grind.Ring.intCast [ring.u]) ring.type ring.ringInst
  let instType := mkApp (mkConst ``IntCast [ring.u]) ring.type
  let inst ← match (← MonadCanon.synthInstance? instType) with
    | none => pure inst'
    | some inst => checkInst ``Int.cast inst inst'; pure inst
  let intCastFn ← canonExpr <| mkApp2 (mkConst ``IntCast.intCast [ring.u]) ring.type inst
  modifyRing fun s => { s with intCastFn? := some intCastFn }
  return intCastFn

def getNatCastFn : m Expr := do
  let ring ← getRing
  if let some natCastFn := ring.natCastFn? then return natCastFn
  let natCastFn ← mkNatCastFn ring.u ring.type ring.semiringInst
  modifyRing fun s => { s with natCastFn? := some natCastFn }
  return natCastFn

end RingFns

section CommRingFns
variable [MonadCommRing m]

def getInvFn : m Expr := do
  let ring ← getCommRing
  let some fieldInst := ring.fieldInst?
    | throwError "internal error: type is not a field{indentExpr ring.type}"
  if let some invFn := ring.invFn? then return invFn
  let expectedInst := mkApp2 (mkConst ``Grind.Field.toInv [ring.u]) ring.type fieldInst
  let invFn ← mkUnaryFn ring.type ring.u ``Inv ``Inv.inv expectedInst
  modifyCommRing fun s => { s with invFn? := some invFn }
  return invFn

end CommRingFns

section SemiringFns
variable [MonadSemiring m]

def getAddFn' : m Expr := do
  let sr ← getSemiring
  if let some addFn := sr.addFn? then return addFn
  let expectedInst := mkApp2 (mkConst ``instHAdd [sr.u]) sr.type <| mkApp2 (mkConst ``Grind.Semiring.toAdd [sr.u]) sr.type sr.semiringInst
  let addFn ← mkBinHomoFn sr.type sr.u ``HAdd ``HAdd.hAdd expectedInst
  modifySemiring fun s => { s with addFn? := some addFn }
  return addFn

def getMulFn' : m Expr := do
  let sr ← getSemiring
  if let some mulFn := sr.mulFn? then return mulFn
  let expectedInst := mkApp2 (mkConst ``instHMul [sr.u]) sr.type <| mkApp2 (mkConst ``Grind.Semiring.toMul [sr.u]) sr.type sr.semiringInst
  let mulFn ← mkBinHomoFn sr.type sr.u ``HMul ``HMul.hMul expectedInst
  modifySemiring fun s => { s with mulFn? := some mulFn }
  return mulFn

def getPowFn' : m Expr := do
  let sr ← getSemiring
  if let some powFn := sr.powFn? then return powFn
  let powFn ← mkPowFn sr.u sr.type sr.semiringInst
  modifySemiring fun s => { s with powFn? := some powFn }
  return powFn

def getNatCastFn' : m Expr := do
  let sr ← getSemiring
  if let some natCastFn := sr.natCastFn? then return natCastFn
  let natCastFn ← mkNatCastFn sr.u sr.type sr.semiringInst
  modifySemiring fun s => { s with natCastFn? := some natCastFn }
  return natCastFn

end SemiringFns

end Lean.Meta.Sym.Arith
