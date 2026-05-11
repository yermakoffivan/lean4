/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Siddharth Bhat, Henrik Böving
-/
module

prelude
public import Lean.Compiler.LCNF.CompilerM
import Lean.Compiler.LCNF.EmitUtil
import Lean.Compiler.NameMangling
import Lean.Compiler.LCNF.PhaseExt
import Lean.Compiler.ExportAttr
import Lean.Compiler.ModPkgExt
import Lean.Compiler.LCNF.LLVMBindings
import Lean.Compiler.LCNF.Internalize
import Lean.Compiler.LCNF.SimpCase
import Lean.Compiler.LCNF.SimpleGroundExpr
import Lean.Compiler.LCNF.PrettyPrinter
import Lean.Compiler.ClosedTermCache
import Lean.Compiler.InitAttr
import Lean.Runtime
import Init.Data.Range.Polymorphic.Iterators

namespace Lean.Compiler.LCNF

/-
TODO: At the time of writing this our CI for LLVM is dysfunctional so this code is not actually
tested. The following ABI features are still missing relative to EmitC and should be ported once
LLVM CI is restored:
- closed term static initializers (`emitFnDeclClosed`, `lean_*_once`, `lean_once_cell_t`)
- simple ground decl emission (`emitGroundDecl` / static const lean_..._object literals)
- two-alt `isIf` fast path in `emitCases`
-/

def leanMainFn := "_lean_main"

namespace LLVM
-- TODO(bollu): instantiate target triple and find out what size_t is.
def size_tType (llvmctx : LLVM.Context) : BaseIO (LLVM.LLVMType llvmctx) :=
  LLVM.i64Type llvmctx

-- TODO(bollu): instantiate target triple and find out what unsigned is.
def unsignedType (llvmctx : LLVM.Context) : BaseIO (LLVM.LLVMType llvmctx) :=
  LLVM.i32Type llvmctx

-- Helper to add a function if it does not exist, and to return the function handle if it does.
def getOrAddFunction (m : LLVM.Module ctx) (name : String) (type : LLVM.LLVMType ctx) : BaseIO (LLVM.Value ctx) := do
  match (← LLVM.getNamedFunction m name) with
  | some fn => return fn
  | none =>
    /-
    By the evidence shown in: https://github.com/leanprover/lean4/issues/2373#issuecomment-1658743284
    this is how clang implements `-fstack-clash-protection` in the LLVM IR, we want this feature
    for robust stack overflow detection.
    -/
    let fn ← LLVM.addFunction m name type
    let attr ← LLVM.createStringAttribute "probe-stack" "inline-asm"
    LLVM.addAttributeAtIndex fn LLVM.AttributeIndex.AttributeFunctionIndex attr
    return fn

def getOrAddGlobal (m : LLVM.Module ctx) (name : String) (type : LLVM.LLVMType ctx) : BaseIO (LLVM.Value ctx) := do
  match (← LLVM.getNamedGlobal m name) with
  | some g => return g
  | none   => LLVM.addGlobal m name type

end LLVM

open ImpureType

structure Context (llvmctx : LLVM.Context) where
  /--
  Declarations from the current module in topologically sorted order.
  -/
  localDecls : Array (Decl .impure)
  /--
  Signatures of declarations from other modules.
  -/
  otherModuleDecls : Array (Signature .impure)
  /--
  The name of the current module.
  -/
  modName : Name
  /--
  The function that is currently being emitted.
  -/
  currFn : Name := default
  /--
  The parameters of the function that is currently being emitted.
  -/
  currParams : Array (Param .impure) := #[]
  /--
  The LLVM module we are emitting into.
  -/
  llvmmodule : LLVM.Module llvmctx

structure State (llvmctx : LLVM.Context) where
  var2val : Std.HashMap FVarId (LLVM.LLVMType llvmctx × LLVM.Value llvmctx) := {}
  jp2bb   : Std.HashMap FVarId (LLVM.BasicBlock llvmctx) := {}
  funMangleCache : Std.HashMap Name String := {}
  funInitMangleCache : Std.HashMap Name String := {}

abbrev EmitM (llvmctx : LLVM.Context) :=
  ReaderT (Context llvmctx) (StateRefT (State llvmctx) CompilerM)

instance : Inhabited (EmitM llvmctx α) where
  default := throwError "uninhabited LLVM emission"

@[inline] def getModName : EmitM llvmctx Name := return (← read).modName

@[inline] def getModInitFn (phases : IRPhases) : EmitM llvmctx String := do
  let pkg? := (← getEnv).getModulePackage?
  return mkModuleInitializationFunctionName (phases := phases) (← getModName) pkg?

@[inline] def getCurrFn : EmitM llvmctx Name := return (← read).currFn

@[inline] def getCurrParams : EmitM llvmctx (Array (Param .impure)) := return (← read).currParams

@[inline] def getLocalDecls : EmitM llvmctx (Array (Decl .impure)) := return (← read).localDecls

@[inline] def getOtherModuleDecls : EmitM llvmctx (Array (Signature .impure)) :=
  return (← read).otherModuleDecls

@[inline] def getLLVMModule : EmitM llvmctx (LLVM.Module llvmctx) := return (← read).llvmmodule

def addVarToState (x : FVarId) (v : LLVM.Value llvmctx) (ty : LLVM.LLVMType llvmctx) :
    EmitM llvmctx Unit :=
  modify fun s => { s with var2val := s.var2val.insert x (ty, v) }

def emitLhsSlot_ (x : FVarId) : EmitM llvmctx (LLVM.LLVMType llvmctx × LLVM.Value llvmctx) := do
  let some v := (← get).var2val[x]? | unreachable!
  return v

def emitLhsVal (builder : LLVM.Builder llvmctx)
    (x : FVarId) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let (xty, xslot) ← emitLhsSlot_ x
  LLVM.buildLoad2 builder xty xslot name

def emitLhsSlotStore (builder : LLVM.Builder llvmctx)
    (x : FVarId) (v : LLVM.Value llvmctx) : EmitM llvmctx Unit := do
  let (_, slot) ← emitLhsSlot_ x
  LLVM.buildStore builder v slot

def addJpToState (jp : FVarId) (bb : LLVM.BasicBlock llvmctx) : EmitM llvmctx Unit :=
  modify fun s => { s with jp2bb := s.jp2bb.insert jp bb }

def findJpBB? (jp : FVarId) : EmitM llvmctx (Option (LLVM.BasicBlock llvmctx)) :=
  return (← get).jp2bb[jp]?

def constInt8 (n : Nat) : EmitM llvmctx (LLVM.Value llvmctx) :=
  LLVM.constInt8 llvmctx (UInt64.ofNat n)

def constInt64 (n : Nat) : EmitM llvmctx (LLVM.Value llvmctx) :=
  LLVM.constInt64 llvmctx (UInt64.ofNat n)

def constIntSizeT (n : Nat) : EmitM llvmctx (LLVM.Value llvmctx) :=
  LLVM.constIntSizeT llvmctx (UInt64.ofNat n)

def constIntUnsigned (n : Nat) : EmitM llvmctx (LLVM.Value llvmctx) :=
  LLVM.constIntUnsigned llvmctx (UInt64.ofNat n)

def getOrCreateFunctionPrototype (mod : LLVM.Module llvmctx)
    (retty : LLVM.LLVMType llvmctx) (name : String)
    (args : Array (LLVM.LLVMType llvmctx)) : EmitM llvmctx (LLVM.Value llvmctx) := do
  LLVM.getOrAddFunction mod name <| ← LLVM.functionType retty args (isVarArg := false)

def throwInvalidExportName (n : Name) : EmitM llvmctx α :=
  throwError s!"invalid export name '{n}'"

def toCName (n : Name) : EmitM llvmctx String := do
  if let some cached := (← get).funMangleCache[n]? then
    return cached
  let mangled ← go
  modify fun s => { s with funMangleCache := s.funMangleCache.insert n mangled }
  return mangled
where
  go : EmitM llvmctx String := do
    let env ← getEnv
    match getExportNameFor? env n with
    | some (.str .anonymous s) => return s
    | some _                   => throwInvalidExportName n
    | none                     => return if n == `main then leanMainFn else getSymbolStem env n

def toCInitName (n : Name) : EmitM llvmctx String := do
  if let some cached := (← get).funInitMangleCache[n]? then
    return cached
  let mangled ← go
  modify fun s => { s with funInitMangleCache := s.funInitMangleCache.insert n mangled }
  return mangled
where
  go : EmitM llvmctx String := do
    let env ← getEnv
    match getExportNameFor? env n with
    | some (.str .anonymous s) => return "_init_" ++ s
    | some _                   => throwInvalidExportName n
    | none                     => return "_init_" ++ getSymbolStem env n

/--
Indicates whether the API for building the blocks for then/else should
forward the control flow to the merge block.
-/
inductive ShouldForwardControlFlow where
  | yes | no

-- Get the function we are currently inserting into.
def builderGetInsertionFn (builder : LLVM.Builder llvmctx) : EmitM llvmctx (LLVM.Value llvmctx) := do
  let builderBB ← LLVM.getInsertBlock builder
  LLVM.getBasicBlockParent builderBB

def builderAppendBasicBlock (builder : LLVM.Builder llvmctx) (name : String) :
    EmitM llvmctx (LLVM.BasicBlock llvmctx) := do
  let fn ← builderGetInsertionFn builder
  LLVM.appendBasicBlockInContext llvmctx fn name

/--
Add an alloca to the first BB of the current function. The builder's final position
will be the end of the BB that we came from.

If it is possible to put an alloca in the first BB this approach is to be preferred
over putting it in other BBs. This is because `mem2reg` only inspects allocas in the first BB,
leading to missed optimizations for allocas in other BBs.
-/
def buildPrologueAlloca (builder : LLVM.Builder llvmctx) (ty : LLVM.LLVMType llvmctx)
    (name : @&String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let origBB ← LLVM.getInsertBlock builder
  let fn ← builderGetInsertionFn builder
  if (← LLVM.countBasicBlocks fn) == 0 then
    unreachable!
  let entryBB ← LLVM.getEntryBasicBlock fn
  match ← LLVM.getFirstInstruction entryBB with
  | some instr => LLVM.positionBuilderBefore builder instr
  | none       => LLVM.positionBuilderAtEnd builder entryBB
  let alloca ← LLVM.buildAlloca builder ty name
  LLVM.positionBuilderAtEnd builder origBB
  return alloca

def buildWhile_ (builder : LLVM.Builder llvmctx) (name : String)
    (condcodegen : LLVM.Builder llvmctx → EmitM llvmctx (LLVM.Value llvmctx))
    (bodycodegen : LLVM.Builder llvmctx → EmitM llvmctx Unit) : EmitM llvmctx Unit := do
  let fn ← builderGetInsertionFn builder
  let headerbb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "header")
  let _ ← LLVM.buildBr builder headerbb
  let bodybb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "body")
  let mergebb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "merge")

  LLVM.positionBuilderAtEnd builder headerbb
  let cond ← condcodegen builder
  let _ ← LLVM.buildCondBr builder cond bodybb mergebb

  LLVM.positionBuilderAtEnd builder bodybb
  bodycodegen builder
  let _ ← LLVM.buildBr builder headerbb

  LLVM.positionBuilderAtEnd builder mergebb

def buildIfThen_ (builder : LLVM.Builder llvmctx) (name : String) (brval : LLVM.Value llvmctx)
    (thencodegen : LLVM.Builder llvmctx → EmitM llvmctx ShouldForwardControlFlow) :
    EmitM llvmctx Unit := do
  let fn ← builderGetInsertionFn builder
  let thenbb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Then")
  let elsebb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Else")
  let mergebb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Merge")
  let _ ← LLVM.buildCondBr builder brval thenbb elsebb
  LLVM.positionBuilderAtEnd builder thenbb
  match (← thencodegen builder) with
  | .yes => let _ ← LLVM.buildBr builder mergebb
  | .no  => pure ()
  LLVM.positionBuilderAtEnd builder elsebb
  let _ ← LLVM.buildBr builder mergebb
  LLVM.positionBuilderAtEnd builder mergebb

def buildIfThenElse_ (builder : LLVM.Builder llvmctx) (name : String) (brval : LLVM.Value llvmctx)
    (thencodegen : LLVM.Builder llvmctx → EmitM llvmctx ShouldForwardControlFlow)
    (elsecodegen : LLVM.Builder llvmctx → EmitM llvmctx ShouldForwardControlFlow) :
    EmitM llvmctx Unit := do
  let fn ← LLVM.getBasicBlockParent (← LLVM.getInsertBlock builder)
  let thenbb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Then")
  let elsebb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Else")
  let mergebb ← LLVM.appendBasicBlockInContext llvmctx fn (name ++ "Merge")
  let _ ← LLVM.buildCondBr builder brval thenbb elsebb
  LLVM.positionBuilderAtEnd builder thenbb
  match (← thencodegen builder) with
  | .yes => let _ ← LLVM.buildBr builder mergebb
  | .no  => pure ()
  LLVM.positionBuilderAtEnd builder elsebb
  match (← elsecodegen builder) with
  | .yes => let _ ← LLVM.buildBr builder mergebb
  | .no  => pure ()
  LLVM.positionBuilderAtEnd builder mergebb

-- Recall that lean uses `i8` for booleans, not `i1`, so we need to compare with `true`.
def buildLeanBoolTrue? (builder : LLVM.Builder llvmctx)
    (b : LLVM.Value llvmctx) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  LLVM.buildICmp builder LLVM.IntPredicate.NE b (← constInt8 0) name

-- `lean_{inc, dec}_{ref?}_{1,n}`
inductive RefcountKind where
  | inc | dec

instance : ToString RefcountKind where
  toString
    | .inc => "inc"
    | .dec => "dec"

def callLeanBox (builder : LLVM.Builder llvmctx)
    (arg : LLVM.Value llvmctx) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.size_tType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_box" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[arg] name

def callLeanMarkPersistentFn (builder : LLVM.Builder llvmctx) (arg : LLVM.Value llvmctx) :
    EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_mark_persistent" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[arg]

def callLeanRefcountFn (builder : LLVM.Builder llvmctx)
    (kind : RefcountKind) (checkRef? : Bool) (arg : LLVM.Value llvmctx)
    (delta : Option (LLVM.Value llvmctx) := none) : EmitM llvmctx Unit := do
  let fnName := s!"lean_{kind}{if checkRef? then "" else "_ref"}{if delta.isNone then "" else "_n"}"
  let retty ← LLVM.voidType llvmctx
  let argtys ← if delta.isNone then pure #[← LLVM.voidPtrType llvmctx]
               else pure #[← LLVM.voidPtrType llvmctx, ← LLVM.size_tType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
  let fnty ← LLVM.functionType retty argtys
  match delta with
  | none   => let _ ← LLVM.buildCall2 builder fnty fn #[arg]
  | some n => let _ ← LLVM.buildCall2 builder fnty fn #[arg, n]

-- Do NOT attempt to merge this code with `callLeanRefcountFn`, because of the uber-confusing
-- semantics of 'ref?'. If 'ref?' is true, it calls the version that is `lean_dec`.
def callLeanDecRef (builder : LLVM.Builder llvmctx) (res : LLVM.Value llvmctx) :
    EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.i8PtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_dec_ref" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[res]

def callLeanUnsignedToNatFn (builder : LLVM.Builder llvmctx)
    (n : Nat) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let argtys := #[← LLVM.i32Type llvmctx]
  let retty ← LLVM.voidPtrType llvmctx
  let f ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_unsigned_to_nat" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty f #[← constIntUnsigned n] name

def callLeanMkStringUncheckedFn (builder : LLVM.Builder llvmctx)
    (strPtr nBytes nChars : LLVM.Value llvmctx) (name : String) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.size_tType llvmctx, ← LLVM.size_tType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_mk_string_unchecked" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[strPtr, nBytes, nChars] name

def callLeanMkString (builder : LLVM.Builder llvmctx)
    (strPtr : LLVM.Value llvmctx) (name : String) : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_mk_string" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[strPtr] name

def callLeanCStrToNatFn (builder : LLVM.Builder llvmctx)
    (n : Nat) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_cstr_to_nat" argtys
  let fnty ← LLVM.functionType retty argtys
  let s ← LLVM.buildGlobalString builder (value := toString n)
  LLVM.buildCall2 builder fnty fn #[s] name

def callLeanIOMkWorld (builder : LLVM.Builder llvmctx) : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_io_mk_world" #[]
  let fnty ← LLVM.functionType retty #[]
  LLVM.buildCall2 builder fnty fn #[] "mk_io_out"

def callLeanIOResultIsError (builder : LLVM.Builder llvmctx)
    (arg : LLVM.Value llvmctx) (name : String := "") : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i1Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_io_result_is_error" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[arg] name

def callLeanAllocCtor (builder : LLVM.Builder llvmctx)
    (tag num_objs scalar_sz : Nat) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let i32 ← LLVM.i32Type llvmctx
  let argtys := #[i32, i32, i32]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_alloc_ctor" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn
    #[← constIntUnsigned tag, ← constIntUnsigned num_objs, ← constIntUnsigned scalar_sz] name

def callLeanCtorSet (builder : LLVM.Builder llvmctx)
    (o i v : LLVM.Value llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let voidptr ← LLVM.voidPtrType llvmctx
  let unsigned ← LLVM.unsignedType llvmctx
  let argtys := #[voidptr, unsigned, voidptr]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_set" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[o, i, v]

def callLeanIOResultMKOk (builder : LLVM.Builder llvmctx)
    (v : LLVM.Value llvmctx) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let voidptr ← LLVM.voidPtrType llvmctx
  let argtys := #[voidptr]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) voidptr "lean_io_result_mk_ok" argtys
  let fnty ← LLVM.functionType voidptr argtys
  LLVM.buildCall2 builder fnty fn #[v] name

def callLeanAllocClosureFn (builder : LLVM.Builder llvmctx)
    (f arity nys : LLVM.Value llvmctx) (retName : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, ← LLVM.unsignedType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_alloc_closure" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[f, arity, nys] retName

def callLeanClosureSetFn (builder : LLVM.Builder llvmctx)
    (closure ix arg : LLVM.Value llvmctx) (retName : String := "") : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, ← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_closure_set" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[closure, ix, arg] retName

def callLeanObjTag (builder : LLVM.Builder llvmctx)
    (closure : LLVM.Value llvmctx) (retName : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i32Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_obj_tag" argtys
  let fnty ← LLVM.functionType retty argtys
  let out ← LLVM.buildCall2 builder fnty fn #[closure] retName
  LLVM.buildSextOrTrunc builder out (← LLVM.i64Type llvmctx)

def callLeanIOResultGetValue (builder : LLVM.Builder llvmctx)
    (v : LLVM.Value llvmctx) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_io_result_get_value" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[v] name

def callLeanCtorRelease (builder : LLVM.Builder llvmctx)
    (closure i : LLVM.Value llvmctx) (retName : String := "") : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_release" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[closure, i] retName

def callLeanCtorSetTag (builder : LLVM.Builder llvmctx)
    (closure i : LLVM.Value llvmctx) (retName : String := "") : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.i8Type llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_set_tag" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[closure, i] retName

def callLeanCtorGet (builder : LLVM.Builder llvmctx)
    (x i : LLVM.Value llvmctx) (retName : String) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.i32Type llvmctx]
  let fnty ← LLVM.functionType retty argtys
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_get" argtys
  let i ← LLVM.buildSextOrTrunc builder i (← LLVM.i32Type llvmctx)
  LLVM.buildCall2 builder fnty fn #[x, i] retName

def callLeanCtorGetUsize (builder : LLVM.Builder llvmctx)
    (x i : LLVM.Value llvmctx) (retName : String) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.size_tType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx]
  let fnty ← LLVM.functionType retty argtys
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_get_usize" argtys
  LLVM.buildCall2 builder fnty fn #[x, i] retName

def callLeanIsExclusive (builder : LLVM.Builder llvmctx)
    (closure : LLVM.Value llvmctx) (retName : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i1Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_is_exclusive" argtys
  let fnty ← LLVM.functionType retty argtys
  let out ← LLVM.buildCall2 builder fnty fn #[closure] retName
  LLVM.buildSextOrTrunc builder out (← LLVM.i8Type llvmctx)

def callLeanIsScalar (builder : LLVM.Builder llvmctx)
    (closure : LLVM.Value llvmctx) (retName : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i8Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_is_scalar" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[closure] retName

def emitArgSlot_ (builder : LLVM.Builder llvmctx)
    (x : Arg .impure) : EmitM llvmctx (LLVM.LLVMType llvmctx × LLVM.Value llvmctx) := do
  match x with
  | .fvar fvarId => emitLhsSlot_ fvarId
  | .erased =>
    let slotty ← LLVM.voidPtrType llvmctx
    let slot ← buildPrologueAlloca builder slotty "erased_slot"
    let v ← callLeanBox builder (← constIntSizeT 0) "erased_val"
    let _ ← LLVM.buildStore builder v slot
    return (slotty, slot)

def emitArgVal (builder : LLVM.Builder llvmctx)
    (x : Arg .impure) (name : String := "") :
    EmitM llvmctx (LLVM.LLVMType llvmctx × LLVM.Value llvmctx) := do
  let (xty, xslot) ← emitArgSlot_ builder x
  let xval ← LLVM.buildLoad2 builder xty xslot name
  return (xty, xval)

/--
Translate an impure LCNF type to its LLVM representation. The result lives in `EmitM` rather than a
pure function because LLVM type construction is monadic; the catch-all `unreachable!` therefore
needs the `Inhabited (EmitM _)` instance provided above.
-/
def toLLVMType (t : Expr) : EmitM llvmctx (LLVM.LLVMType llvmctx) := do
  match t with
  | ImpureType.float   => LLVM.doubleTypeInContext llvmctx
  | ImpureType.float32 => LLVM.floatTypeInContext llvmctx
  | ImpureType.uint8   => LLVM.intTypeInContext llvmctx 8
  | ImpureType.uint16  => LLVM.intTypeInContext llvmctx 16
  | ImpureType.uint32  => LLVM.intTypeInContext llvmctx 32
  | ImpureType.uint64  => LLVM.intTypeInContext llvmctx 64
  -- TODO: how to cleanly size_t in LLVM? We can do eg. instantiate the current target and query for size.
  | ImpureType.usize   => LLVM.size_tType llvmctx
  | ImpureType.object | ImpureType.tagged | ImpureType.tobject | ImpureType.erased
  | ImpureType.void    => LLVM.pointerType (← LLVM.i8Type llvmctx)
  | _                  => unreachable!

def emitOffset (builder : LLVM.Builder llvmctx) (n : Nat) (offset : Nat) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  -- TODO(bollu): replace 8 with sizeof(void*)
  let out ← constIntUnsigned 8
  let out ← LLVM.buildMul builder out (← constIntUnsigned n) ""
  LLVM.buildAdd builder out (← constIntUnsigned offset) ""

def emitNumLit (builder : LLVM.Builder llvmctx)
    (t : Expr) (v : Nat) : EmitM llvmctx (LLVM.Value llvmctx) := do
  if t.isObj then
    if v < UInt32.size then
      callLeanUnsignedToNatFn builder v
    else
      callLeanCStrToNatFn builder v
  else
    LLVM.constInt (← toLLVMType t) (UInt64.ofNat v)

def unboxForType (builder : LLVM.Builder llvmctx)
    (t : Expr) (v : LLVM.Value llvmctx) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let (fnName, retty) ←
    match t with
    | ImpureType.usize   => pure ("lean_unbox_usize", ← toLLVMType t)
    | ImpureType.uint32  => pure ("lean_unbox_uint32", ← toLLVMType t)
    | ImpureType.uint64  => pure ("lean_unbox_uint64", ← toLLVMType t)
    | ImpureType.float   => pure ("lean_unbox_float", ← toLLVMType t)
    | ImpureType.float32 => pure ("lean_unbox_float32", ← toLLVMType t)
    | _                  => pure ("lean_unbox", ← LLVM.size_tType llvmctx)
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[v] name

def emitSimpleExternalCall (builder : LLVM.Builder llvmctx) (f : String)
    (ps : Array (Param .impure)) (ys : Array (Arg .impure)) (retty : Expr) (name : String) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let mut args := #[]
  let mut argTys := #[]
  for (p, y) in ps.zip ys do
    if !(p.type.isVoid || p.type.isErased) then
      let (_, yv) ← emitArgVal builder y ""
      argTys := argTys.push (← toLLVMType p.type)
      args := args.push yv
  let fnty ← LLVM.functionType (← toLLVMType retty) argTys
  let fn ← LLVM.getOrAddFunction (← getLLVMModule) f fnty
  LLVM.buildCall2 builder fnty fn args name

@[inline]
def paramsWithoutVoid (ps : Array (Param .impure)) :=
  ps.filter (!·.type.isVoid)

@[inline]
def paramsWithoutErased (ps : Array (Param .impure)) :=
  ps.filter (!·.type.isErased)

def getFunIdTy (sig : Signature .impure) : EmitM llvmctx (LLVM.LLVMType llvmctx) := do
  let retty ← toLLVMType sig.type
  let argtys ← (paramsWithoutVoid sig.params).mapM (fun p => toLLVMType p.type)
  LLVM.functionType retty argtys

/--
Look up a declaration as a callable LLVM value.
If the declaration takes arguments, return the function value; otherwise load from a global.
-/
def getOrAddFunIdValue (builder : LLVM.Builder llvmctx) (f : Name) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let some sig ← getImpureSignature? f | unreachable!
  let fcname ← toCName f
  let retty ← toLLVMType sig.type
  if sig.params.isEmpty then
    let gslot ← LLVM.getOrAddGlobal (← getLLVMModule) fcname retty
    LLVM.buildLoad2 builder retty gslot
  else
    let argtys ← (paramsWithoutVoid sig.params).mapM (fun p => toLLVMType p.type)
    let fnty ← LLVM.functionType retty argtys
    LLVM.getOrAddFunction (← getLLVMModule) fcname fnty

def emitFnDecls : EmitM llvmctx Unit := do
  (← getOtherModuleDecls).forM fun sig => do
    match getExternNameFor (← getEnv) `c sig.name with
    | some externName => emitExternDecl sig externName
    | none            => emitFnDeclStandard sig true
  (← getLocalDecls).forM fun decl => do
    match getExternNameFor (← getEnv) `c decl.name with
    | some externName => emitExternDecl decl.toSignature externName
    | none            => emitFnDecl decl false
where
  emitExternDecl (sig : Signature .impure) (externName : String) : EmitM llvmctx Unit := do
    let env ← getEnv
    let extC := isExternC env sig.name
    emitFnDeclAux sig externName extC

  emitFnDecl (decl : Decl .impure) (isExternal : Bool) : EmitM llvmctx Unit := do
    -- TODO: dispatch to `emitGroundDecl` for `isSimpleGroundDecl` and `emitFnDeclClosed` for
    -- `isClosedTermName` once closed-term static initializers are implemented (see file TODO).
    emitFnDeclStandard decl.toSignature isExternal

  emitFnDeclStandard (sig : Signature .impure) (isExternal : Bool) : EmitM llvmctx Unit := do
    let cppBaseName ← toCName sig.name
    emitFnDeclAux sig cppBaseName isExternal

  emitFnDeclAux (sig : Signature .impure) (cppBaseName : String) (isExternal : Bool) :
      EmitM llvmctx Unit := do
    let mod ← getLLVMModule
    let env ← getEnv
    let ps := sig.params
    let global ←
      if ps.isEmpty then
        let retty ← toLLVMType sig.type
        let global ← LLVM.getOrAddGlobal mod cppBaseName retty
        if !isExternal then
          LLVM.setInitializer global (← LLVM.getUndef retty)
        pure global
      else
        let retty ← toLLVMType sig.type
        -- We omit void parameters; note that they are guaranteed not to occur in boxed functions.
        let ps := paramsWithoutVoid ps
        -- We omit erased parameters for extern constants.
        let ps := if isExternC env sig.name then paramsWithoutErased ps else ps
        let mut argtys ← ps.mapM fun p => toLLVMType p.type
        if argtys.size > closureMaxArgs && isBoxedName sig.name then
          argtys := #[← LLVM.pointerType (← LLVM.voidPtrType llvmctx)]
        let fnty ← LLVM.functionType retty argtys (isVarArg := false)
        LLVM.getOrAddFunction mod cppBaseName fnty
    if ps.isEmpty then
      if isClosedTermName env sig.name then
        LLVM.setVisibility global LLVM.Visibility.hidden -- static
      else if isExternal then
        pure () -- extern (C/LLVM funcs are extern linkage by default)
      else
        LLVM.setDLLStorageClass global LLVM.DLLStorageClass.export -- LEAN_EXPORT
    else if !isExternal then
      -- An extern decl might be linked in from a different translation unit, so we only export
      -- non-external definitions.
      LLVM.setDLLStorageClass global LLVM.DLLStorageClass.export

def isTailCall (code : Code .impure) : EmitM llvmctx Bool :=
  match code with
  | .let { fvarId := fvarId, value := .fap declName _, .. } (.return fvarId') =>
    return fvarId == fvarId' && (← getCurrFn) == declName
  | _ => return false

partial def declareVars (builder : LLVM.Builder llvmctx) (code : Code .impure) :
    EmitM llvmctx Unit := do
  match code with
  | .let decl k =>
    if ← isTailCall code then
      return ()
    declareVar decl.fvarId decl.type
    declareVars builder k
  | .jp decl k =>
    for p in decl.params do
      declareVar p.fvarId p.type
    declareVars builder k
  | .inc (k := k) .. | .dec (k := k) .. | .del (k := k) .. | .setTag (k := k) ..
  | .oset (k := k) .. | .uset (k := k) .. | .sset (k := k) .. => declareVars builder k
  | .cases .. | .return .. | .jmp .. | .unreach .. => return ()
where
  declareVar (x : FVarId) (t : Expr) : EmitM llvmctx Unit := do
    let llvmty ← toLLVMType t
    let alloca ← buildPrologueAlloca builder llvmty "varx"
    addVarToState x alloca llvmty

def emitLetDecl (builder : LLVM.Builder llvmctx) (decl : LetDecl .impure) :
    EmitM llvmctx Unit := do
  match decl.value with
  | .ctor info args => emitCtor info args
  | .reset n fvarId => emitReset n fvarId
  | .reuse fvarId info update args => emitReuse fvarId info update args
  | .oproj i fvarId => emitOproj i fvarId
  | .uproj i fvarId => emitUproj i fvarId
  | .sproj n offset fvarId => emitSproj n offset fvarId
  | .fap fn args => emitFap fn args
  | .pap fn args => emitPap fn args
  | .fvar fvarId args => emitAp fvarId args
  | .box ty fvarId => emitBox ty fvarId
  | .unbox fvarId => emitUnbox fvarId
  | .isShared fvarId => emitIsShared fvarId
  | .lit v => emitLit v
  | .erased => emitErased
where
  emitAllocCtor (info : CtorInfo) : EmitM llvmctx (LLVM.Value llvmctx) := do
    -- TODO(bollu): find the correct size, don't assume 'void*' size is 8
    let hackSizeofVoidPtr := 8
    let scalarSize := hackSizeofVoidPtr * info.usize + info.ssize
    callLeanAllocCtor builder info.cidx info.size scalarSize "lean_alloc_ctor_out"

  emitCtorSetArgs (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    for h : i in 0...args.size do
      let zv ← emitLhsVal builder decl.fvarId
      let (_, yv) ← emitArgVal builder args[i]
      callLeanCtorSet builder zv (← constIntUnsigned i) yv
      emitLhsSlotStore builder decl.fvarId zv

  emitCtor (info : CtorInfo) (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    let (_, slot) ← emitLhsSlot_ decl.fvarId
    if info.size == 0 && info.usize == 0 && info.ssize == 0 then
      let v ← callLeanBox builder (← constIntSizeT info.cidx) "lean_box_outv"
      let _ ← LLVM.buildStore builder v slot
    else
      let v ← emitAllocCtor info
      let _ ← LLVM.buildStore builder v slot
      emitCtorSetArgs args

  emitReset (n : Nat) (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId
    let isExclusive ← callLeanIsExclusive builder xv
    let isExclusive ← buildLeanBoolTrue? builder isExclusive
    buildIfThenElse_ builder "isExclusive" isExclusive
      (fun builder => do
        let xv ← emitLhsVal builder fvarId
        for i in *...n do
          callLeanCtorRelease builder xv (← constIntUnsigned i)
        emitLhsSlotStore builder decl.fvarId xv
        return .yes)
      (fun builder => do
        let xv ← emitLhsVal builder fvarId
        callLeanDecRef builder xv
        let box0 ← callLeanBox builder (← constIntSizeT 0) "box0"
        emitLhsSlotStore builder decl.fvarId box0
        return .yes)

  emitReuse (fvarId : FVarId) (info : CtorInfo) (update : Bool) (args : Array (Arg .impure)) :
      EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId
    let isScalar ← callLeanIsScalar builder xv
    let isScalar ← buildLeanBoolTrue? builder isScalar
    buildIfThenElse_ builder "isScalar" isScalar
      (fun builder => do
        let cv ← emitAllocCtor info
        emitLhsSlotStore builder decl.fvarId cv
        return .yes)
      (fun builder => do
        let xv ← emitLhsVal builder fvarId
        emitLhsSlotStore builder decl.fvarId xv
        if update then
          let zv ← emitLhsVal builder decl.fvarId
          callLeanCtorSetTag builder zv (← constInt8 info.cidx)
        return .yes)
    emitCtorSetArgs args

  emitOproj (i : Nat) (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xval ← emitLhsVal builder fvarId
    let zval ← callLeanCtorGet builder xval (← constIntUnsigned i) ""
    emitLhsSlotStore builder decl.fvarId zval

  emitUproj (i : Nat) (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xval ← emitLhsVal builder fvarId
    let zval ← callLeanCtorGetUsize builder xval (← constIntUnsigned i) ""
    emitLhsSlotStore builder decl.fvarId zval

  emitSproj (n : Nat) (offset : Nat) (fvarId : FVarId) : EmitM llvmctx Unit := do
    let (fnName, retty) ←
      match decl.type with
      | ImpureType.float   => pure ("lean_ctor_get_float", ← LLVM.doubleTypeInContext llvmctx)
      | ImpureType.float32 => pure ("lean_ctor_get_float32", ← LLVM.floatTypeInContext llvmctx)
      | ImpureType.uint8   => pure ("lean_ctor_get_uint8", ← LLVM.i8Type llvmctx)
      | ImpureType.uint16  => pure ("lean_ctor_get_uint16", ← LLVM.i16Type llvmctx)
      | ImpureType.uint32  => pure ("lean_ctor_get_uint32", ← LLVM.i32Type llvmctx)
      | ImpureType.uint64  => pure ("lean_ctor_get_uint64", ← LLVM.i64Type llvmctx)
      | _                  => throwError s!"invalid type for lean_ctor_get: '{decl.type}'"
    let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx]
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
    let xval ← emitLhsVal builder fvarId
    let offsetv ← emitOffset builder n offset
    let fnty ← LLVM.functionType retty argtys
    let zval ← LLVM.buildCall2 builder fnty fn #[xval, offsetv]
    emitLhsSlotStore builder decl.fvarId zval

  emitFap (fn : Name) (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    let some sig ← getImpureSignature? fn | unreachable!
    let (_, zslot) ← emitLhsSlot_ decl.fvarId
    match getExternAttrData? (← getEnv) fn |>.bind (getExternEntryFor · `c) with
    | some (.standard _ extFn) =>
      let zv ← emitSimpleExternalCall builder extFn sig.params args sig.type ""
      LLVM.buildStore builder zv zslot
    | some (.inline `llvm _) => throwError "unimplemented codegen of inline LLVM"
    | some (.inline _ pat)   => throwError s!"cannot codegen non-LLVM inline code '{pat}'"
    | some .opaque | none =>
      if args.size > 0 then
        let fv ← getOrAddFunIdValue builder fn
        let (_, args) := sig.params.zip args |>.filter (fun (p, _) => !p.type.isVoid) |>.unzip
        let llvmArgs ← args.mapM (fun a => do
          let (yty, yslot) ← emitArgSlot_ builder a
          LLVM.buildLoad2 builder yty yslot)
        let zv ← LLVM.buildCall2 builder (← getFunIdTy sig) fv llvmArgs
        LLVM.buildStore builder zv zslot
      else
        let zv ← getOrAddFunIdValue builder fn
        LLVM.buildStore builder zv zslot
    | _ => throwError s!"failed to emit extern application '{fn}'"

  emitPap (fn : Name) (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    let some sig ← getImpureSignature? fn | unreachable!
    let fv ← getOrAddFunIdValue builder fn
    let arity := sig.params.size
    let (_, zslot) ← emitLhsSlot_ decl.fvarId
    let zval ← callLeanAllocClosureFn builder fv
      (← constIntUnsigned arity) (← constIntUnsigned args.size)
    LLVM.buildStore builder zval zslot
    for h : i in 0...args.size do
      let (yty, yslot) ← emitArgSlot_ builder args[i]
      let yval ← LLVM.buildLoad2 builder yty yslot
      callLeanClosureSetFn builder zval (← constIntUnsigned i) yval

  emitAp (fvarId : FVarId) (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    if args.size > closureMaxArgs then
      let aargs ← buildPrologueAlloca builder
        (← LLVM.arrayType (← LLVM.voidPtrType llvmctx) (UInt64.ofNat args.size)) "aargs"
      for h : i in 0...args.size do
        let (yty, yv) ← emitArgVal builder args[i]
        let aslot ← LLVM.buildInBoundsGEP2 builder yty aargs
          #[← constIntUnsigned 0, ← constIntUnsigned i] s!"param_{i}_slot"
        LLVM.buildStore builder yv aslot
      let retty ← LLVM.voidPtrType llvmctx
      let llvmArgs := #[← emitLhsVal builder fvarId, ← constIntUnsigned args.size, aargs]
      let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, ← LLVM.voidPtrType llvmctx]
      let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_apply_m" argtys
      let fnty ← LLVM.functionType retty argtys
      let zv ← LLVM.buildCall2 builder fnty fn llvmArgs
      emitLhsSlotStore builder decl.fvarId zv
    else
      let fnName := s!"lean_apply_{args.size}"
      let retty ← LLVM.voidPtrType llvmctx
      let llvmArgs : Array (LLVM.Value llvmctx) :=
        #[← emitLhsVal builder fvarId] ++ (← args.mapM (fun y => Prod.snd <$> emitArgVal builder y))
      let argtys := (List.replicate (1 + args.size) (← LLVM.voidPtrType llvmctx)).toArray
      let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
      let fnty ← LLVM.functionType retty argtys
      let zv ← LLVM.buildCall2 builder fnty fn llvmArgs
      emitLhsSlotStore builder decl.fvarId zv

  emitBox (ty : Expr) (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId
    let (fnName, argTy, xv) ←
      match ty with
      | ImpureType.usize   => pure ("lean_box_usize", ← LLVM.size_tType llvmctx, xv)
      | ImpureType.uint32  => pure ("lean_box_uint32", ← LLVM.i32Type llvmctx, xv)
      | ImpureType.uint64  => pure ("lean_box_uint64", ← LLVM.size_tType llvmctx, xv)
      | ImpureType.float   => pure ("lean_box_float", ← LLVM.doubleTypeInContext llvmctx, xv)
      | ImpureType.float32 => pure ("lean_box_float32", ← LLVM.floatTypeInContext llvmctx, xv)
      | _ =>
        let xv ← LLVM.buildSext builder xv (← LLVM.size_tType llvmctx)
        pure ("lean_box", ← LLVM.size_tType llvmctx, xv)
    let retty ← LLVM.voidPtrType llvmctx
    let argtys := #[argTy]
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
    let fnty ← LLVM.functionType retty argtys
    let zv ← LLVM.buildCall2 builder fnty fn #[xv]
    emitLhsSlotStore builder decl.fvarId zv

  emitUnbox (fvarId : FVarId) : EmitM llvmctx Unit := do
    let zval ← unboxForType builder decl.type (← emitLhsVal builder fvarId)
    let zval ←
      if decl.type.isScalar then
        LLVM.buildSextOrTrunc builder zval (← toLLVMType decl.type)
      else
        pure zval
    emitLhsSlotStore builder decl.fvarId zval

  emitIsShared (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId
    let exclusive? ← callLeanIsExclusive builder xv
    let exclusive? ← LLVM.buildSextOrTrunc builder exclusive? (← LLVM.i1Type llvmctx)
    let shared? ← LLVM.buildNot builder exclusive?
    let shared? ← LLVM.buildSext builder shared? (← LLVM.i8Type llvmctx)
    emitLhsSlotStore builder decl.fvarId shared?

  emitLit (v : LitValue) : EmitM llvmctx Unit := do
    let (_, zslot) ← emitLhsSlot_ decl.fvarId
    let zv ← match v with
      | .nat v    => emitNumLit builder decl.type v
      | .uint8 v  => emitNumLit builder decl.type v.toNat
      | .uint16 v => emitNumLit builder decl.type v.toNat
      | .uint32 v => emitNumLit builder decl.type v.toNat
      | .uint64 v => emitNumLit builder decl.type v.toNat
      | .usize v  => emitNumLit builder decl.type v.toNat
      | .str v    =>
        let zero ← constIntUnsigned 0
        let str_global ← LLVM.buildGlobalString builder v
        let strPtr ← LLVM.buildInBoundsGEP2 builder
          (← LLVM.opaquePointerTypeInContext llvmctx) str_global #[zero] ""
        let nbytes ← constIntSizeT v.utf8ByteSize
        let nchars ← constIntSizeT v.length
        callLeanMkStringUncheckedFn builder strPtr nbytes nchars ""
    LLVM.buildStore builder zv zslot

  emitErased : EmitM llvmctx Unit := do
    let (_, zslot) ← emitLhsSlot_ decl.fvarId
    let zv ← callLeanBox builder (← constIntSizeT 0) "erased_val"
    LLVM.buildStore builder zv zslot

def emitTailCall (builder : LLVM.Builder llvmctx) (decl : LetDecl .impure) :
    EmitM llvmctx Unit := do
  let .fap _ args := decl.value | unreachable!
  let ps ← getCurrParams
  assert! ps.size == args.size
  let (_, args) := ps.zip args |>.filter (fun (p, _) => !p.type.isVoid) |>.unzip
  let llvmArgs ← args.mapM (fun a => Prod.snd <$> emitArgVal builder a)
  let some currSig ← getImpureSignature? (← getCurrFn) | unreachable!
  let fn ← builderGetInsertionFn builder
  let call ← LLVM.buildCall2 builder (← getFunIdTy currSig) fn llvmArgs
  -- TODO(bollu): add 'musttail' attribute using the C API.
  LLVM.setTailCall call true
  let _ ← LLVM.buildRet builder call

mutual

partial def emitBasicBlock (builder : LLVM.Builder llvmctx) (code : Code .impure) :
    EmitM llvmctx Unit := do
  match code with
  | .jp (k := k) .. => emitBasicBlock builder k
  | .let decl k =>
    if ← isTailCall code then
      emitTailCall builder decl
    else
      emitLetDecl builder decl
      emitBasicBlock builder k
  | .inc fvarId n check persistent k =>
    unless persistent do emitInc fvarId n check
    emitBasicBlock builder k
  | .dec fvarId n check persistent k =>
    unless persistent do emitDec fvarId n check
    emitBasicBlock builder k
  | .del fvarId k =>
    emitDel fvarId
    emitBasicBlock builder k
  | .setTag fvarId cidx k =>
    emitSetTag fvarId cidx
    emitBasicBlock builder k
  | .oset fvarId i y k =>
    emitOset fvarId i y
    emitBasicBlock builder k
  | .uset fvarId i y k =>
    emitUset fvarId i y
    emitBasicBlock builder k
  | .sset fvarId i offset y ty k =>
    emitSset fvarId i offset y ty
    emitBasicBlock builder k
  | .cases cs => emitCases cs
  | .return fvarId => emitReturn fvarId
  | .jmp fvarId args => emitJmp fvarId args
  | .unreach .. => emitUnreach
where
  emitInc (fvarId : FVarId) (n : Nat) (check : Bool) : EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId
    if n != 1 then
      let nv ← constIntSizeT n
      callLeanRefcountFn builder (kind := .inc) (checkRef? := check) (delta := nv) xv
    else
      callLeanRefcountFn builder (kind := .inc) (checkRef? := check) xv

  emitDec (fvarId : FVarId) (n : Nat) (check : Bool) : EmitM llvmctx Unit := do
    -- Anything else is unsupported at the moment
    assert! n == 1
    let xv ← emitLhsVal builder fvarId
    callLeanRefcountFn builder (kind := .dec) (checkRef? := check) xv

  emitDel (fvarId : FVarId) : EmitM llvmctx Unit := do
    let argtys := #[← LLVM.voidPtrType llvmctx]
    let retty ← LLVM.voidType llvmctx
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_del_object" argtys
    let xv ← emitLhsVal builder fvarId
    let fnty ← LLVM.functionType retty argtys
    let _ ← LLVM.buildCall2 builder fnty fn #[xv]

  emitSetTag (fvarId : FVarId) (cidx : Nat) : EmitM llvmctx Unit := do
    let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.i8Type llvmctx]
    let retty ← LLVM.voidType llvmctx
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_set_tag" argtys
    let xv ← emitLhsVal builder fvarId
    let fnty ← LLVM.functionType retty argtys
    let _ ← LLVM.buildCall2 builder fnty fn #[xv, ← constInt8 cidx]

  emitOset (fvarId : FVarId) (i : Nat) (y : Arg .impure) : EmitM llvmctx Unit := do
    let retty ← LLVM.voidType llvmctx
    let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, ← LLVM.voidPtrType llvmctx]
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_set" argtys
    let fnty ← LLVM.functionType retty argtys
    let _ ← LLVM.buildCall2 builder fnty fn
      #[← emitLhsVal builder fvarId, ← constIntUnsigned i, (← emitArgVal builder y).2]

  emitUset (fvarId : FVarId) (i : Nat) (y : FVarId) : EmitM llvmctx Unit := do
    let retty ← LLVM.voidType llvmctx
    let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, ← LLVM.size_tType llvmctx]
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_ctor_set_usize" argtys
    let fnty ← LLVM.functionType retty argtys
    let _ ← LLVM.buildCall2 builder fnty fn
      #[← emitLhsVal builder fvarId, ← constIntUnsigned i, ← emitLhsVal builder y]

  emitSset (fvarId : FVarId) (n : Nat) (offset : Nat) (y : FVarId) (t : Expr) :
      EmitM llvmctx Unit := do
    let (fnName, setty) ←
      match t with
      | ImpureType.float   => pure ("lean_ctor_set_float", ← LLVM.doubleTypeInContext llvmctx)
      | ImpureType.float32 => pure ("lean_ctor_set_float32", ← LLVM.floatTypeInContext llvmctx)
      | ImpureType.uint8   => pure ("lean_ctor_set_uint8", ← LLVM.i8Type llvmctx)
      | ImpureType.uint16  => pure ("lean_ctor_set_uint16", ← LLVM.i16Type llvmctx)
      | ImpureType.uint32  => pure ("lean_ctor_set_uint32", ← LLVM.i32Type llvmctx)
      | ImpureType.uint64  => pure ("lean_ctor_set_uint64", ← LLVM.i64Type llvmctx)
      | _                  => throwError s!"invalid type for 'lean_ctor_set': '{t}'"
    let argtys := #[← LLVM.voidPtrType llvmctx, ← LLVM.unsignedType llvmctx, setty]
    let retty ← LLVM.voidType llvmctx
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
    let xv ← emitLhsVal builder fvarId
    let offsetv ← emitOffset builder n offset
    let yv ← emitLhsVal builder y
    let fnty ← LLVM.functionType retty argtys
    let _ ← LLVM.buildCall2 builder fnty fn #[xv, offsetv, yv]

  emitTag (fvarId : FVarId) : EmitM llvmctx (LLVM.Value llvmctx) := do
    let type ← getType fvarId
    if type.isObj then
      let xval ← emitLhsVal builder fvarId
      callLeanObjTag builder xval
    else if type.isScalar then
      emitLhsVal builder fvarId
    else
      unreachable!

  emitCases (cs : Cases .impure) : EmitM llvmctx Unit := do
    let oldBB ← LLVM.getInsertBlock builder
    -- We perform a zero extend so that one-bit tags of `0/-1` actually extend to `0/1` in 64-bit space.
    let tag ← emitTag cs.discr
    let tag ← LLVM.buildZext builder tag (← LLVM.i64Type llvmctx)
    let alts := ensureHasDefault cs.alts
    let defaultBB ← builderAppendBasicBlock builder "case_default"
    let switch ← LLVM.buildSwitch builder tag defaultBB (UInt64.ofNat alts.size)
    alts.forM fun alt => do
      match alt with
      | .ctorAlt info k _ =>
        let destbb ← builderAppendBasicBlock builder s!"case_{info.name}_{info.cidx}"
        LLVM.addCase switch (← constIntSizeT info.cidx) destbb
        LLVM.positionBuilderAtEnd builder destbb
        emitCode builder k
      | .default k =>
        LLVM.positionBuilderAtEnd builder defaultBB
        emitCode builder k
    LLVM.clearInsertionPosition builder
    LLVM.positionBuilderAtEnd builder oldBB

  emitReturn (fvarId : FVarId) : EmitM llvmctx Unit := do
    let xv ← emitLhsVal builder fvarId "ret_val"
    let _ ← LLVM.buildRet builder xv

  emitJmp (fvarId : FVarId) (args : Array (Arg .impure)) : EmitM llvmctx Unit := do
    let some jpDecl ← findFunDecl? (pu := .impure) fvarId | unreachable!
    let ps := jpDecl.params
    if args.size != ps.size then
      throwError "invalid jump"
    for arg in args, p in ps do
      let (_, xv) ← emitArgVal builder arg
      emitLhsSlotStore builder p.fvarId xv
    let bb ← getOrCreateJpBB fvarId
    let _ ← LLVM.buildBr builder bb

  emitUnreach : EmitM llvmctx Unit := do
    let retty ← LLVM.voidType llvmctx
    let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty
      "lean_internal_panic_unreachable" #[]
    let fnty ← LLVM.functionType retty #[]
    let _ ← LLVM.buildCall2 builder fnty fn #[]
    let _ ← LLVM.buildUnreachable builder

  getOrCreateJpBB (jp : FVarId) : EmitM llvmctx (LLVM.BasicBlock llvmctx) := do
    if let some bb ← findJpBB? jp then return bb
    let bb ← builderAppendBasicBlock builder s!"jp_{(← getBinderName jp)}"
    addJpToState jp bb
    return bb

partial def emitJoinPoints (builder : LLVM.Builder llvmctx) (code : Code .impure) :
    EmitM llvmctx Unit := do
  match code with
  | .jp decl k =>
    let bb ←
      match (← findJpBB? decl.fvarId) with
      | some bb => pure bb
      | none =>
        let bb ← builderAppendBasicBlock builder s!"jp_{decl.binderName}"
        addJpToState decl.fvarId bb
        pure bb
    let oldBB ← LLVM.getInsertBlock builder
    LLVM.positionBuilderAtEnd builder bb
    emitCode builder decl.value
    LLVM.positionBuilderAtEnd builder oldBB
    emitJoinPoints builder k
  | .let (k := k) .. | .del (k := k) .. | .dec (k := k) .. | .inc (k := k) .. | .setTag (k := k) ..
  | .sset (k := k) .. | .uset (k := k) .. | .oset (k := k) .. => emitJoinPoints builder k
  | .cases .. | .return .. | .jmp .. | .unreach .. => return ()

partial def emitCode (builder : LLVM.Builder llvmctx) (code : Code .impure) :
    EmitM llvmctx Unit := do
  declareVars builder code
  emitBasicBlock builder code
  emitJoinPoints builder code

end

def emitFnArgs (builder : LLVM.Builder llvmctx)
    (needsPackedArgs? : Bool) (llvmfn : LLVM.Value llvmctx) (params : Array (Param .impure)) :
    EmitM llvmctx Unit := do
  if needsPackedArgs? then
    -- All params (incl. void) are stored in the packed args array;
    -- void params are guaranteed not to occur in boxed functions.
    let argsp ← LLVM.getParam llvmfn 0
    for h : i in *...params.size do
      let param := params[i]
      let argsi ← LLVM.buildGEP2 builder (← LLVM.voidPtrType llvmctx) argsp
        #[← constIntUnsigned i] s!"packed_arg_{i}_slot"
      let llvmty ← toLLVMType param.type
      let pv ← LLVM.buildLoad2 builder llvmty argsi
      let alloca ← buildPrologueAlloca builder llvmty s!"arg_{i}"
      LLVM.buildStore builder pv alloca
      addVarToState param.fvarId alloca llvmty
  else
    -- The LLVM signature drops void params; iterate the filtered list to match.
    let filtered := paramsWithoutVoid params
    for h : i in *...filtered.size do
      let param := filtered[i]
      let llvmty ← toLLVMType param.type
      let alloca ← buildPrologueAlloca builder llvmty s!"arg_{i}"
      let arg ← LLVM.getParam llvmfn (UInt64.ofNat i)
      let _ ← LLVM.buildStore builder arg alloca
      addVarToState param.fvarId alloca llvmty

def emitDecl (builder : LLVM.Builder llvmctx) (decl : Decl .impure) :
    EmitM llvmctx Unit := do
  let env ← getEnv
  if hasInitAttr env decl.name then return ()
  match decl.value with
  | .extern .. => return ()
  | .code code =>
    let baseName ← toCName decl.name
    let ps := decl.params
    let name := if ps.size > 0 then baseName else "_init_" ++ baseName
    let retty ← toLLVMType decl.type
    let needsPackedArgs? := ps.size > closureMaxArgs && isBoxedName decl.name
    -- The LLVM signature drops void params; the param list we thread as `currParams` keeps them
    -- so call sites can filter and tail-call assertion still matches the user-visible arity.
    let argtys ←
      if needsPackedArgs? then
        pure #[← LLVM.pointerType (← LLVM.voidPtrType llvmctx)]
      else
        (paramsWithoutVoid ps).mapM fun p => toLLVMType p.type
    let fnty ← LLVM.functionType retty argtys (isVarArg := false)
    let llvmfn ← LLVM.getOrAddFunction (← getLLVMModule) name fnty
    if ps.size == 0 then
      LLVM.setVisibility llvmfn LLVM.Visibility.hidden -- "static"
    else
      -- make the symbol visible to the interpreter for native execution
      LLVM.setDLLStorageClass llvmfn LLVM.DLLStorageClass.export
    withReader (fun ctx => { ctx with currFn := decl.name, currParams := ps }) do
      modify fun s => { s with var2val := {}, jp2bb := {} }
      let bb ← LLVM.appendBasicBlockInContext llvmctx llvmfn "entry"
      LLVM.positionBuilderAtEnd builder bb
      emitFnArgs builder needsPackedArgs? llvmfn ps
      emitCode builder code

def emitFns (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  (← getLocalDecls).forM go
where
  go (decl : Decl .impure) : EmitM llvmctx Unit := do
    let decl ← decl.internalize (uniqueIdents := true)
    try
      emitDecl builder decl
    catch err =>
      throwError m!"{err.toMessageData}\ncompiling:\n{decl.name}"

def emitMarkPersistent (builder : LLVM.Builder llvmctx) (decl : Decl .impure)
    (dval : LLVM.Value llvmctx) : EmitM llvmctx Unit := do
  if decl.type.isObj then
    callLeanMarkPersistentFn builder dval

def callIODeclInitFn (builder : LLVM.Builder llvmctx)
    (initFnName : String) : EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.voidPtrType llvmctx
  -- The IR-level world parameter is `void` and gets dropped during void elimination, so the C/LLVM
  -- ABI of a decl init function takes no arguments.
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty initFnName #[]
  let fnty ← LLVM.functionType retty #[]
  LLVM.buildCall2 builder fnty fn #[]

def callPureDeclInitFn (builder : LLVM.Builder llvmctx)
    (initFnName : String) (retty : LLVM.LLVMType llvmctx) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty initFnName #[]
  let fnty ← LLVM.functionType retty #[]
  LLVM.buildCall2 builder fnty fn #[]

def emitDeclInit (builder : LLVM.Builder llvmctx)
    (parentFn : LLVM.Value llvmctx) (decl : Decl .impure) (isBuiltin : Bool) :
    EmitM llvmctx Unit := do
  let env ← getEnv
  if (isBuiltin && isIOUnitBuiltinInitFn env decl.name) || isIOUnitInitFn env decl.name then
    let resv ← callIODeclInitFn builder (← toCName decl.name)
    let err? ← callLeanIOResultIsError builder resv "is_error"
    buildIfThen_ builder s!"init_{decl.name}_isError" err?
      (fun builder => do
        let _ ← LLVM.buildRet builder resv
        return .no)
    -- TODO(bollu): emit lean_dec_ref. For now, it does not matter.
  else if decl.params.isEmpty then
    if let some initFn := (guard isBuiltin *> getBuiltinInitFnNameFor? env decl.name)
        <|> getInitFnNameFor? env decl.name then
      let llvmty ← toLLVMType decl.type
      let dslot ← LLVM.getOrAddGlobal (← getLLVMModule) (← toCName decl.name) llvmty
      LLVM.setInitializer dslot (← LLVM.getUndef llvmty)
      let initBB ← builderAppendBasicBlock builder s!"do_{decl.name}_init"
      let restBB ← builderAppendBasicBlock builder s!"post_{decl.name}_init"
      let checkBuiltin? := (getBuiltinInitFnNameFor? env decl.name).isSome
      if checkBuiltin? then
        let builtinParam ← LLVM.getParam parentFn 0
        let cond ← buildLeanBoolTrue? builder builtinParam "is_builtin_true"
        let _ ← LLVM.buildCondBr builder cond initBB restBB
      else
        let _ ← LLVM.buildBr builder initBB
      LLVM.positionBuilderAtEnd builder initBB
      let resv ← callIODeclInitFn builder (← toCName initFn)
      let err? ← callLeanIOResultIsError builder resv s!"{decl.name}_is_error"
      buildIfThen_ builder s!"init_{decl.name}_isError" err?
        (fun builder => do
          let _ ← LLVM.buildRet builder resv
          return .no)
      if decl.type.isScalar then
        let dval ← callLeanIOResultGetValue builder resv s!"{decl.name}_res"
        let dval ← unboxForType builder decl.type dval
        LLVM.buildStore builder dval dslot
      else
        let dval ← callLeanIOResultGetValue builder resv s!"{decl.name}_res"
        LLVM.buildStore builder dval dslot
        emitMarkPersistent builder decl dval
      let _ ← LLVM.buildBr builder restBB
      LLVM.positionBuilderAtEnd builder restBB
    else if !(isClosedTermName env decl.name || isSimpleGroundDecl env decl.name) then
      let llvmty ← toLLVMType decl.type
      let dslot ← LLVM.getOrAddGlobal (← getLLVMModule) (← toCName decl.name) llvmty
      LLVM.setInitializer dslot (← LLVM.getUndef llvmty)
      let dval ← callPureDeclInitFn builder (← toCInitName decl.name) llvmty
      LLVM.buildStore builder dval dslot
      emitMarkPersistent builder decl dval

def callModInitFn (builder : LLVM.Builder llvmctx)
    (modName : Name) (pkg? : Option PkgId) (phases : IRPhases)
    (input : LLVM.Value llvmctx) (retName : String) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let fnName := mkModuleInitializationFunctionName modName pkg? phases
  let retty ← LLVM.voidPtrType llvmctx
  let argtys := #[← LLVM.i8Type llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty fnName argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[input] retName

def emitInitFn (builder : LLVM.Builder llvmctx) (phases : IRPhases) :
    EmitM llvmctx Unit := do
  let env ← getEnv
  let mod ← getLLVMModule
  let initFnTy ← LLVM.functionType (← LLVM.voidPtrType llvmctx)
    #[← LLVM.i8Type llvmctx] (isVarArg := false)
  let initFn ← LLVM.getOrAddFunction mod (← getModInitFn phases) initFnTy
  LLVM.setDLLStorageClass initFn LLVM.DLLStorageClass.export
  let entryBB ← LLVM.appendBasicBlockInContext llvmctx initFn "entry"
  LLVM.positionBuilderAtEnd builder entryBB
  let ginit?ty ← LLVM.i1Type llvmctx
  let ginit?slot ← LLVM.getOrAddGlobal mod
    s!"_G_{mkModuleInitializationPrefix phases}initialized" ginit?ty
  -- `static bool` in EmitC; the LLVM equivalent is internal linkage so that linking multiple
  -- modules together does not collide on the same `_G_*_initialized` name.
  LLVM.setLinkage ginit?slot LLVM.Linkage.internal
  LLVM.setVisibility ginit?slot LLVM.Visibility.hidden
  LLVM.setInitializer ginit?slot (← LLVM.constFalse llvmctx)
  let ginit?v ← LLVM.buildLoad2 builder ginit?ty ginit?slot "init_v"
  buildIfThen_ builder "isGInitialized" ginit?v
    (fun builder => do
      let box0 ← callLeanBox builder (← constIntSizeT 0) "box0"
      let out ← callLeanIOResultMKOk builder box0 "retval"
      let _ ← LLVM.buildRet builder out
      return .no)
  LLVM.buildStore builder (← LLVM.constTrue llvmctx) ginit?slot
  env.imports.forM fun import_ => do
    if phases != .all && import_.isMeta != (phases == .comptime) then
      return ()
    let builtin ← LLVM.getParam initFn 0
    let some idx := env.getModuleIdx? import_.module
      | throwError "(internal) import without module index" -- should be unreachable
    let pkg? := env.getModulePackageByIdx? idx
    let importPhases := if phases == .all then .all else if import_.isMeta then .runtime else phases
    let res ← callModInitFn builder import_.module pkg? importPhases builtin
      ("res_" ++ import_.module.mangle)
    let err? ← callLeanIOResultIsError builder res ("res_is_error_" ++ import_.module.mangle)
    buildIfThen_ builder ("IsError" ++ import_.module.mangle) err?
      (fun builder => do
        let _ ← LLVM.buildRet builder res
        return .no)
    callLeanDecRef builder res
  for decl in (← getLocalDecls) do
    if phases == .all || (phases == .comptime) == isMarkedMeta env decl.name then
      emitDeclInit builder initFn decl (isBuiltin := phases != .comptime)
  let box0 ← callLeanBox builder (← constIntSizeT 0) "box0"
  let out ← callLeanIOResultMKOk builder box0 "retval"
  let _ ← LLVM.buildRet builder out

/-- Init function used before phase split under module system; kept for compatibility. -/
def emitLegacyInitFn (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let env ← getEnv
  let mod ← getLLVMModule
  let initFnTy ← LLVM.functionType (← LLVM.voidPtrType llvmctx)
    #[← LLVM.i8Type llvmctx] (isVarArg := false)
  let initFn ← LLVM.getOrAddFunction mod (← getModInitFn .all) initFnTy
  LLVM.setDLLStorageClass initFn LLVM.DLLStorageClass.export
  let entryBB ← LLVM.appendBasicBlockInContext llvmctx initFn "entry"
  LLVM.positionBuilderAtEnd builder entryBB
  let ginit?ty ← LLVM.i1Type llvmctx
  let ginit?slot ← LLVM.getOrAddGlobal mod "_G_initialized" ginit?ty
  LLVM.setLinkage ginit?slot LLVM.Linkage.internal
  LLVM.setVisibility ginit?slot LLVM.Visibility.hidden
  LLVM.setInitializer ginit?slot (← LLVM.constFalse llvmctx)
  let ginit?v ← LLVM.buildLoad2 builder ginit?ty ginit?slot "init_v"
  buildIfThen_ builder "isGInitialized" ginit?v
    (fun builder => do
      let box0 ← callLeanBox builder (← constIntSizeT 0) "box0"
      let out ← callLeanIOResultMKOk builder box0 "retval"
      let _ ← LLVM.buildRet builder out
      return .no)
  LLVM.buildStore builder (← LLVM.constTrue llvmctx) ginit?slot
  env.imports.forM fun import_ => do
    let builtin ← LLVM.getParam initFn 0
    let some idx := env.getModuleIdx? import_.module
      | throwError "(internal) import without module index" -- should be unreachable
    let pkg? := env.getModulePackageByIdx? idx
    let res ← callModInitFn builder import_.module pkg? .all builtin
      ("res_" ++ import_.module.mangle)
    let err? ← callLeanIOResultIsError builder res ("res_is_error_" ++ import_.module.mangle)
    buildIfThen_ builder ("IsError" ++ import_.module.mangle) err?
      (fun builder => do
        let _ ← LLVM.buildRet builder res
        return .no)
    callLeanDecRef builder res
  let runPhase (phases : IRPhases) (retName : String) : EmitM llvmctx Unit := do
    let builtin ← LLVM.getParam initFn 0
    let res ← callModInitFn builder (← getModName) env.getModulePackage? phases builtin retName
    let err? ← callLeanIOResultIsError builder res s!"{retName}_is_error"
    buildIfThen_ builder s!"{retName}_isError" err?
      (fun builder => do
        let _ ← LLVM.buildRet builder res
        return .no)
    callLeanDecRef builder res
  runPhase .runtime "res_runtime"
  runPhase .comptime "res_comptime"
  let builtin ← LLVM.getParam initFn 0
  let final ← callModInitFn builder (← getModName) env.getModulePackage? .all builtin "res_all"
  let _ ← LLVM.buildRet builder final

def callLeanInitialize (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_initialize" #[]
  let fnty ← LLVM.functionType retty #[]
  let _ ← LLVM.buildCall2 builder fnty fn #[]

def callLeanSetupLibUV (builder : LLVM.Builder llvmctx) (argc argv : LLVM.Value llvmctx) :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let intTy ← LLVM.i32Type llvmctx
  let charPtrPtrTy ← LLVM.pointerType (← LLVM.pointerType (← LLVM.i8Type llvmctx))
  let argtys := #[intTy, charPtrPtrTy]
  let fnty ← LLVM.functionType charPtrPtrTy argtys
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) intTy "lean_setup_args" argtys
  LLVM.buildCall2 builder fnty fn #[argc, argv]

def callLeanInitializeRuntimeModule (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty
    "lean_initialize_runtime_module" #[]
  let fnty ← LLVM.functionType retty #[]
  let _ ← LLVM.buildCall2 builder fnty fn #[]

def callLeanSetPanicMessages (builder : LLVM.Builder llvmctx) (enable? : LLVM.Value llvmctx) :
    EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.i1Type llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_set_panic_messages" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[enable?]

def callLeanIOMarkEndInitialization (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty
    "lean_io_mark_end_initialization" #[]
  let fnty ← LLVM.functionType retty #[]
  let _ ← LLVM.buildCall2 builder fnty fn #[]

def callLeanIOResultIsOk (builder : LLVM.Builder llvmctx)
    (arg : LLVM.Value llvmctx) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i1Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_io_result_is_ok" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[arg] name

def callLeanInitTaskManager (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_init_task_manager" #[]
  let fnty ← LLVM.functionType retty #[]
  let _ ← LLVM.buildCall2 builder fnty fn #[]

def callLeanFinalizeTaskManager (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  let retty ← LLVM.voidPtrType llvmctx
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty
    "lean_finalize_task_manager" #[]
  let fnty ← LLVM.functionType retty #[]
  let _ ← LLVM.buildCall2 builder fnty fn #[]

def callLeanUnboxUint32 (builder : LLVM.Builder llvmctx)
    (v : LLVM.Value llvmctx) (name : String := "") :
    EmitM llvmctx (LLVM.Value llvmctx) := do
  let retty ← LLVM.i32Type llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_unbox_uint32" argtys
  let fnty ← LLVM.functionType retty argtys
  LLVM.buildCall2 builder fnty fn #[v] name

def callLeanIOResultShowError (builder : LLVM.Builder llvmctx)
    (v : LLVM.Value llvmctx) (name : String := "") : EmitM llvmctx Unit := do
  let retty ← LLVM.voidType llvmctx
  let argtys := #[← LLVM.voidPtrType llvmctx]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty "lean_io_result_show_error" argtys
  let fnty ← LLVM.functionType retty argtys
  let _ ← LLVM.buildCall2 builder fnty fn #[v] name

def callLeanMainFn (builder : LLVM.Builder llvmctx)
    (argv? : Option (LLVM.Value llvmctx))
    (name : String) : EmitM llvmctx (LLVM.Value llvmctx) := do
  -- The IR-level world parameter is `void` and gets dropped during void elimination.
  let retty ← LLVM.voidPtrType llvmctx
  let voidptr ← LLVM.voidPtrType llvmctx
  let argtys := if argv?.isSome then #[voidptr] else #[]
  let fn ← getOrCreateFunctionPrototype (← getLLVMModule) retty leanMainFn argtys
  let fnty ← LLVM.functionType retty argtys
  let args := match argv? with
    | some argv => #[argv]
    | none      => #[]
  LLVM.buildCall2 builder fnty fn args name

def emitMainFnIfNeeded (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  if let some mainDecl ← hasMainFn then
    emitMainFn mainDecl
where
  hasMainFn : EmitM llvmctx (Option (Decl .impure)) := do
    return (← getLocalDecls).find? (·.name == `main)

  emitMainFn (mainDecl : Decl .impure) : EmitM llvmctx Unit := do
    let .code .. := mainDecl.value | throwError "Expected Lean function declaration as `main`"
    let ps := mainDecl.params
    unless ps.size == 1 || ps.size == 2 do
      throwError "invalid main function, incorrect arity when generating code"
    let env ← getEnv
    let usesLeanAPI := usesModuleFrom env `Lean
    let mod ← getLLVMModule
    let mainTy ← LLVM.functionType (← LLVM.i64Type llvmctx)
      #[← LLVM.i64Type llvmctx, ← LLVM.pointerType (← LLVM.voidPtrType llvmctx)]
    let main ← LLVM.getOrAddFunction mod "main" mainTy
    let entry ← LLVM.appendBasicBlockInContext llvmctx main "entry"
    LLVM.positionBuilderAtEnd builder entry
    let inty ← LLVM.voidPtrType llvmctx
    let inslot ← buildPrologueAlloca builder (← LLVM.pointerType inty) "in"
    let resty ← LLVM.voidPtrType llvmctx
    let res ← buildPrologueAlloca builder (← LLVM.pointerType resty) "res"

    let argcval ← LLVM.getParam main 0
    let argvval ← LLVM.getParam main 1
    let truncArgcval ← LLVM.buildSextOrTrunc builder argcval (← LLVM.i32Type llvmctx)
    let argvval ← callLeanSetupLibUV builder truncArgcval argvval

    if usesLeanAPI then callLeanInitialize builder else callLeanInitializeRuntimeModule builder
    /- We disable panic messages because they do not mesh well with extracted closed terms.
       See issue #534. We can remove this workaround after we implement issue #467. -/
    callLeanSetPanicMessages builder (← LLVM.constFalse llvmctx)
    let initPhases := if env.header.isModule then .runtime else .all
    let resv ← callModInitFn builder (← getModName) env.getModulePackage? initPhases
      (← constInt8 1) ((← getModName).toString ++ "_init_out")
    let _ ← LLVM.buildStore builder resv res

    callLeanSetPanicMessages builder (← LLVM.constTrue llvmctx)
    callLeanIOMarkEndInitialization builder

    let resv ← LLVM.buildLoad2 builder resty res "resv"
    let res_is_ok ← callLeanIOResultIsOk builder resv "res_is_ok"
    buildIfThen_ builder "resIsOkBranches" res_is_ok
      (fun builder => do
        callLeanDecRef builder resv
        callLeanInitTaskManager builder
        if ps.size == 2 then
          let inv ← callLeanBox builder (← constIntSizeT 0) "inv"
          let _ ← LLVM.buildStore builder inv inslot
          let ity ← LLVM.size_tType llvmctx
          let islot ← buildPrologueAlloca builder ity "islot"
          LLVM.buildStore builder argcval islot
          buildWhile_ builder "argv"
            (condcodegen := fun builder => do
              let iv ← LLVM.buildLoad2 builder ity islot "iv"
              LLVM.buildICmp builder LLVM.IntPredicate.UGT iv (← constIntSizeT 1) "i_gt_1")
            (bodycodegen := fun builder => do
              let iv ← LLVM.buildLoad2 builder ity islot "iv"
              let iv_next ← LLVM.buildSub builder iv (← constIntSizeT 1) "iv.next"
              LLVM.buildStore builder iv_next islot
              let nv ← callLeanAllocCtor builder 1 2 0 "nv"
              let argv_i_next_slot ← LLVM.buildGEP2 builder (← LLVM.voidPtrType llvmctx)
                argvval #[iv_next] "argv.i.next.slot"
              let argv_i_next_val ← LLVM.buildLoad2 builder (← LLVM.voidPtrType llvmctx)
                argv_i_next_slot "argv.i.next.val"
              let argv_i_next_val_str ← callLeanMkString builder argv_i_next_val
                "arg.i.next.val.str"
              callLeanCtorSet builder nv (← constIntUnsigned 0) argv_i_next_val_str
              let inv ← LLVM.buildLoad2 builder inty inslot "inv"
              callLeanCtorSet builder nv (← constIntUnsigned 1) inv
              LLVM.buildStore builder nv inslot)
          let inv ← LLVM.buildLoad2 builder inty inslot "inv"
          let resv ← callLeanMainFn builder (argv? := some inv) "resv"
          let _ ← LLVM.buildStore builder resv res
          return .yes
        else
          let resv ← callLeanMainFn builder (argv? := none) "resv"
          let _ ← LLVM.buildStore builder resv res
          return .yes)

    -- `IO _`
    let retTy := env.find? `main |>.get! |>.type |>.getForallBody
    -- either `UInt32` or `(P)Unit`
    let retTy := retTy.appArg!
    let hasExitCode := retTy.isConstOf ``UInt32
    -- finalize at least the task manager to avoid leak sanitizer false positives from tasks
    -- outliving the main thread
    callLeanFinalizeTaskManager builder
    let resv ← LLVM.buildLoad2 builder resty res "resv"
    let res_is_ok ← callLeanIOResultIsOk builder resv "res_is_ok"
    buildIfThenElse_ builder "res.is.ok" res_is_ok
      (fun builder =>
        if hasExitCode then do
          let resv ← LLVM.buildLoad2 builder resty res "resv"
          let retv ← callLeanUnboxUint32 builder
            (← callLeanIOResultGetValue builder resv "io_val") "retv"
          let retv ← LLVM.buildSext builder retv (← LLVM.i64Type llvmctx) "retv_sext"
          callLeanDecRef builder resv
          let _ ← LLVM.buildRet builder retv
          return .no
        else do
          callLeanDecRef builder resv
          let _ ← LLVM.buildRet builder (← constInt64 0)
          return .no)
      (fun builder => do
        let resv ← LLVM.buildLoad2 builder resty res "resv"
        callLeanIOResultShowError builder resv
        callLeanDecRef builder resv
        let _ ← LLVM.buildRet builder (← constInt64 1)
        return .no)
    let _ ← LLVM.buildUnreachable builder

def main (builder : LLVM.Builder llvmctx) : EmitM llvmctx Unit := do
  emitFnDecls
  emitFns builder
  if (← getEnv).header.isModule then
    emitInitFn builder .runtime
    emitInitFn builder .comptime
    emitLegacyInitFn builder
  else
    emitInitFn builder .all
  emitMainFnIfNeeded builder

def getLeanHBcPath : IO System.FilePath := do
  return (← getLibDir (← getBuildDir)) / "lean.h.bc"

/-- Walk the LLVM global list. -/
partial def getModuleGlobals (mod : LLVM.Module llvmctx) : IO (Array (LLVM.Value llvmctx)) := do
  let rec go (v : LLVM.Value llvmctx) (acc : Array (LLVM.Value llvmctx)) :
      IO (Array (LLVM.Value llvmctx)) := do
    if v.isNull then return acc
    else go (← LLVM.getNextGlobal v) (acc.push v)
  go (← LLVM.getFirstGlobal mod) #[]

/-- Walk the LLVM function list. -/
partial def getModuleFunctions (mod : LLVM.Module llvmctx) :
    IO (Array (LLVM.Value llvmctx)) := do
  let rec go (v : LLVM.Value llvmctx) (acc : Array (LLVM.Value llvmctx)) :
      IO (Array (LLVM.Value llvmctx)) := do
    if v.isNull then return acc
    else go (← LLVM.getNextFunction v) (acc.push v)
  go (← LLVM.getFirstFunction mod) #[]

/-- Link the Lean runtime bitcode into `mod`, marking the linked symbols as internal. -/
def linkRuntimeModule (llvmctx : LLVM.Context) (mod : LLVM.Module llvmctx) : IO Unit := do
  let membuf ← LLVM.createMemoryBufferWithContentsOfFile (← getLeanHBcPath).toString
  let modruntime ← LLVM.parseBitcode llvmctx membuf
  -- Extract names here because pointers into `modruntime` get invalidated by `linkModules`.
  let runtimeGlobals ← (← getModuleGlobals modruntime).mapM (·.getName)
  let filter func := do
    -- Do not insert internal linkage for intrinsics such as `@llvm.umul.with.overflow.i64`
    -- which clang generates, or for declarations such as `lean_inc_ref_cold` which are externally
    -- defined.
    if (← LLVM.isDeclaration func) then return none
    else return some (← func.getName)
  let runtimeFunctions ← (← getModuleFunctions modruntime).filterMapM filter
  LLVM.linkModules (dest := mod) (src := modruntime)
  for name in runtimeGlobals do
    let some global ← LLVM.getNamedGlobal mod name
      | throw <| IO.Error.userError
          s!"ERROR: linked module must have global from runtime module: '{name}'"
    LLVM.setLinkage global LLVM.Linkage.internal
  for name in runtimeFunctions do
    let some fn ← LLVM.getNamedFunction mod name
      | throw <| IO.Error.userError
          s!"ERROR: linked module must have function from runtime module: '{name}'"
    LLVM.setLinkage fn LLVM.Linkage.internal

/--
LLVM code generation entry point parameterized over the set of declarations to emit.
-/
public def emitLLVMForDecls (modName : Name) (filepath : String) (decls : Array Name) :
    CoreM Unit := do
  let (localDecls, otherModuleDecls) ← collectUsedDecls decls
  let env ← getEnv
  let indexMap := getImpureDeclIndices env decls
  let localDecls := localDecls.qsort fun l r => indexMap[l.name]! < indexMap[r.name]!
  LLVM.llvmInitializeTargetInfo
  let llvmctx ← LLVM.createContext
  let module ← LLVM.createModule llvmctx modName.toString
  let builder ← LLVM.createBuilderInContext llvmctx
  let _ ←
    main builder
      |>.run { localDecls, otherModuleDecls, modName, llvmmodule := module }
      |>.run {}
      |>.run (phase := .impure)
  linkRuntimeModule llvmctx module
  if let some err ← LLVM.verifyModule module then
    throwError err
  LLVM.writeBitcodeToFile module filepath
  LLVM.disposeModule module

/-- `emitLLVM` is the entry point invoked from the Lean shell to emit LLVM bitcode. -/
public def emitLLVM (modName : Name) (filepath : String) : CoreM Unit := do
  emitLLVMForDecls modName filepath (← getLocalImpureDecls)

/--
IO-based wrapper around `emitLLVM` exported for the C shim (`lean_emit_llvm` in
`library/llvm.cpp`).
-/
@[export lean_lcnf_emit_llvm]
def emitLLVMExport (env : Environment) (modName : Name) (filepath : String) : IO Unit :=
  emitLLVM modName filepath |>.toIO'
    { fileName := "<emitLLVM>", fileMap := default } { env }

end Lean.Compiler.LCNF
