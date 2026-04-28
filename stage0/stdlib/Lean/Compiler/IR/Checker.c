// Lean compiler output
// Module: Lean.Compiler.IR.Checker
// Imports: public import Lean.Compiler.IR.CompilerM
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_IR_Alt_body(lean_object*);
uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isParam(lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_isRef(lean_object*);
uint8_t l_Lean_IR_IRType_isObj(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_IR_LocalContext_getType(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_IR_instBEqIRType_beq(lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
lean_object* l_Lean_IR_findEnvDecl_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Lean_IR_LocalContext_addLocal(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addParam(lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isJP(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_get_max_ctor_fields(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorFields___boxed(lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_maxCtorFields___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_maxCtorFields___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_maxCtorFields;
lean_object* lean_get_max_ctor_scalars_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorScalarsSize___boxed(lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_maxCtorScalarsSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_maxCtorScalarsSize___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_maxCtorScalarsSize;
lean_object* lean_get_max_ctor_tag(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorTag___boxed(lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_maxCtorTag___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_maxCtorTag___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_maxCtorTag;
lean_object* lean_get_usize_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getUSizeSize___boxed(lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_usizeSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_usizeSize___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_usizeSize;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_throwCheckerError___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_throwCheckerError___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_throwCheckerError___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___closed__2;
static lean_once_cell_t l_Lean_IR_Checker_throwCheckerError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_markIndex___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_markIndex___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_markIndex___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_markIndex___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markIndex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_getDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_getDecl___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_getDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_getDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkVar___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkVar___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_checkVar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkVar___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkJP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkJP___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkJP___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkJP___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkEqTypes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkEqTypes___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkEqTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkEqTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkType___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkType___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkObjType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkObjType___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkScalarType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkScalarType___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkFullApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkFullApp___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkFullApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkFullApp___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_checkFullApp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkFullApp___closed__2;
static lean_once_cell_t l_Lean_IR_Checker_checkFullApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkFullApp___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFullApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFullApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkPartialApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkPartialApp___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkPartialApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkPartialApp___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_checkPartialApp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkPartialApp___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkPartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkPartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__2;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__3;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__4;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__5;
static lean_once_cell_t l_Lean_IR_Checker_checkExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_checkExpr___closed__6;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_Checker_withParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_withParams___closed__0;
static lean_once_cell_t l_Lean_IR_Checker_withParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_withParams___closed__1;
static lean_once_cell_t l_Lean_IR_Checker_withParams___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_withParams___closed__2;
static lean_once_cell_t l_Lean_IR_Checker_withParams___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_withParams___closed__3;
static lean_once_cell_t l_Lean_IR_Checker_withParams___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Checker_withParams___closed__4;
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFnBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFnBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_checkDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_checkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_checkDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_checkDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorFields___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_get_max_ctor_fields(v_a_00___x40___internal___hyg_2_);
return v_res_3_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorFields___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_get_max_ctor_fields(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorFields(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_IR_Checker_maxCtorFields___closed__0, &l_Lean_IR_Checker_maxCtorFields___closed__0_once, _init_l_Lean_IR_Checker_maxCtorFields___closed__0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorScalarsSize___boxed(lean_object* v_a_00___x40___internal___hyg_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lean_get_max_ctor_scalars_size(v_a_00___x40___internal___hyg_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorScalarsSize___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_box(0);
v___x_11_ = lean_get_max_ctor_scalars_size(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorScalarsSize(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_IR_Checker_maxCtorScalarsSize___closed__0, &l_Lean_IR_Checker_maxCtorScalarsSize___closed__0_once, _init_l_Lean_IR_Checker_maxCtorScalarsSize___closed__0);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getMaxCtorTag___boxed(lean_object* v_a_00___x40___internal___hyg_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lean_get_max_ctor_tag(v_a_00___x40___internal___hyg_14_);
return v_res_15_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorTag___closed__0(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_get_max_ctor_tag(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorTag(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_IR_Checker_maxCtorTag___closed__0, &l_Lean_IR_Checker_maxCtorTag___closed__0_once, _init_l_Lean_IR_Checker_maxCtorTag___closed__0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getUSizeSize___boxed(lean_object* v_a_00___x40___internal___hyg_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lean_get_usize_size(v_a_00___x40___internal___hyg_20_);
return v_res_21_;
}
}
static lean_object* _init_l_Lean_IR_Checker_usizeSize___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_get_usize_size(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_IR_Checker_usizeSize(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Lean_IR_Checker_usizeSize___closed__0, &l_Lean_IR_Checker_usizeSize___closed__0_once, _init_l_Lean_IR_Checker_usizeSize___closed__0);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_25_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__0);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1);
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
lean_ctor_set(v___x_30_, 2, v___x_29_);
lean_ctor_set(v___x_30_, 3, v___x_29_);
lean_ctor_set(v___x_30_, 4, v___x_28_);
lean_ctor_set(v___x_30_, 5, v___x_28_);
lean_ctor_set(v___x_30_, 6, v___x_28_);
lean_ctor_set(v___x_30_, 7, v___x_28_);
lean_ctor_set(v___x_30_, 8, v___x_28_);
lean_ctor_set(v___x_30_, 9, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_unsigned_to_nat(32u);
v___x_32_ = lean_mk_empty_array_with_capacity(v___x_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_34_ = ((size_t)5ULL);
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = lean_unsigned_to_nat(32u);
v___x_37_ = lean_mk_empty_array_with_capacity(v___x_36_);
v___x_38_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__3);
v___x_39_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___x_35_);
lean_ctor_set(v___x_39_, 3, v___x_35_);
lean_ctor_set_usize(v___x_39_, 4, v___x_34_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_40_ = lean_box(1);
v___x_41_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__4);
v___x_42_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__1);
v___x_43_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___x_40_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0(lean_object* v_msgData_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v___x_48_; lean_object* v_env_49_; lean_object* v_options_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_48_ = lean_st_ref_get(v___y_46_);
v_env_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc_ref(v_env_49_);
lean_dec(v___x_48_);
v_options_50_ = lean_ctor_get(v___y_45_, 2);
v___x_51_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__2);
v___x_52_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_50_);
v___x_53_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_53_, 0, v_env_49_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
lean_ctor_set(v___x_53_, 2, v___x_52_);
lean_ctor_set(v___x_53_, 3, v_options_50_);
v___x_54_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v_msgData_44_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0___boxed(lean_object* v_msgData_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0(v_msgData_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg(lean_object* v_msg_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_ref_65_; lean_object* v___x_66_; lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_75_; 
v_ref_65_ = lean_ctor_get(v___y_62_, 5);
v___x_66_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0_spec__0(v_msg_61_, v___y_62_, v___y_63_);
v_a_67_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_75_ == 0)
{
v___x_69_ = v___x_66_;
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v___x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
lean_inc(v_ref_65_);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v_ref_65_);
lean_ctor_set(v___x_71_, 1, v_a_67_);
if (v_isShared_70_ == 0)
{
lean_ctor_set_tag(v___x_69_, 1);
lean_ctor_set(v___x_69_, 0, v___x_71_);
v___x_73_ = v___x_69_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg___boxed(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg(v_msg_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
return v_res_80_;
}
}
static lean_object* _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__0(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_mk_string_unchecked("failed to compile definition, compiler IR check failed at `", 59, 59);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__1(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_obj_once(&l_Lean_IR_Checker_throwCheckerError___redArg___closed__0, &l_Lean_IR_Checker_throwCheckerError___redArg___closed__0_once, _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__0);
v___x_83_ = l_Lean_stringToMessageData(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__2(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("`. Error: ", 10, 10);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__3(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_obj_once(&l_Lean_IR_Checker_throwCheckerError___redArg___closed__2, &l_Lean_IR_Checker_throwCheckerError___redArg___closed__2_once, _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__2);
v___x_86_ = l_Lean_stringToMessageData(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___redArg(lean_object* v_msg_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_currentDecl_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_currentDecl_93_ = lean_ctor_get(v_a_88_, 1);
v___x_94_ = l_Lean_IR_Decl_name(v_currentDecl_93_);
v___x_95_ = lean_obj_once(&l_Lean_IR_Checker_throwCheckerError___redArg___closed__1, &l_Lean_IR_Checker_throwCheckerError___redArg___closed__1_once, _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__1);
v___x_96_ = 0;
v___x_97_ = l_Lean_MessageData_ofConstName(v___x_94_, v___x_96_);
v___x_98_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_95_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_obj_once(&l_Lean_IR_Checker_throwCheckerError___redArg___closed__3, &l_Lean_IR_Checker_throwCheckerError___redArg___closed__3_once, _init_l_Lean_IR_Checker_throwCheckerError___redArg___closed__3);
v___x_100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = l_Lean_stringToMessageData(v_msg_87_);
v___x_102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg(v___x_102_, v_a_90_, v_a_91_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___redArg___boxed(lean_object* v_msg_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError(lean_object* v_00_u03b1_111_, lean_object* v_msg_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_throwCheckerError___boxed(lean_object* v_00_u03b1_119_, lean_object* v_msg_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_IR_Checker_throwCheckerError(v_00_u03b1_119_, v_msg_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0(lean_object* v_00_u03b1_127_, lean_object* v_msg_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___redArg(v_msg_128_, v___y_131_, v___y_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0___boxed(lean_object* v_00_u03b1_135_, lean_object* v_msg_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_throwError___at___00Lean_IR_Checker_throwCheckerError_spec__0(v_00_u03b1_135_, v_msg_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_142_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(lean_object* v_k_143_, lean_object* v_t_144_){
_start:
{
if (lean_obj_tag(v_t_144_) == 0)
{
lean_object* v_k_145_; lean_object* v_l_146_; lean_object* v_r_147_; uint8_t v___x_148_; 
v_k_145_ = lean_ctor_get(v_t_144_, 1);
v_l_146_ = lean_ctor_get(v_t_144_, 3);
v_r_147_ = lean_ctor_get(v_t_144_, 4);
v___x_148_ = lean_nat_dec_lt(v_k_143_, v_k_145_);
if (v___x_148_ == 0)
{
uint8_t v___x_149_; 
v___x_149_ = lean_nat_dec_eq(v_k_143_, v_k_145_);
if (v___x_149_ == 0)
{
v_t_144_ = v_r_147_;
goto _start;
}
else
{
return v___x_149_;
}
}
else
{
v_t_144_ = v_l_146_;
goto _start;
}
}
else
{
uint8_t v___x_152_; 
v___x_152_ = 0;
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg___boxed(lean_object* v_k_153_, lean_object* v_t_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(v_k_153_, v_t_154_);
lean_dec(v_t_154_);
lean_dec(v_k_153_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(lean_object* v_k_157_, lean_object* v_v_158_, lean_object* v_t_159_){
_start:
{
if (lean_obj_tag(v_t_159_) == 0)
{
lean_object* v_size_160_; lean_object* v_k_161_; lean_object* v_v_162_; lean_object* v_l_163_; lean_object* v_r_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_445_; 
v_size_160_ = lean_ctor_get(v_t_159_, 0);
v_k_161_ = lean_ctor_get(v_t_159_, 1);
v_v_162_ = lean_ctor_get(v_t_159_, 2);
v_l_163_ = lean_ctor_get(v_t_159_, 3);
v_r_164_ = lean_ctor_get(v_t_159_, 4);
v_isSharedCheck_445_ = !lean_is_exclusive(v_t_159_);
if (v_isSharedCheck_445_ == 0)
{
v___x_166_ = v_t_159_;
v_isShared_167_ = v_isSharedCheck_445_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_r_164_);
lean_inc(v_l_163_);
lean_inc(v_v_162_);
lean_inc(v_k_161_);
lean_inc(v_size_160_);
lean_dec(v_t_159_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_445_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
uint8_t v___x_168_; 
v___x_168_ = lean_nat_dec_lt(v_k_157_, v_k_161_);
if (v___x_168_ == 0)
{
uint8_t v___x_169_; 
v___x_169_ = lean_nat_dec_eq(v_k_157_, v_k_161_);
if (v___x_169_ == 0)
{
lean_object* v_impl_170_; lean_object* v___x_171_; 
lean_dec(v_size_160_);
v_impl_170_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(v_k_157_, v_v_158_, v_r_164_);
v___x_171_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_163_) == 0)
{
lean_object* v_size_172_; lean_object* v_size_173_; lean_object* v_k_174_; lean_object* v_v_175_; lean_object* v_l_176_; lean_object* v_r_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v_size_172_ = lean_ctor_get(v_l_163_, 0);
v_size_173_ = lean_ctor_get(v_impl_170_, 0);
lean_inc(v_size_173_);
v_k_174_ = lean_ctor_get(v_impl_170_, 1);
lean_inc(v_k_174_);
v_v_175_ = lean_ctor_get(v_impl_170_, 2);
lean_inc(v_v_175_);
v_l_176_ = lean_ctor_get(v_impl_170_, 3);
lean_inc(v_l_176_);
v_r_177_ = lean_ctor_get(v_impl_170_, 4);
lean_inc(v_r_177_);
v___x_178_ = lean_unsigned_to_nat(3u);
v___x_179_ = lean_nat_mul(v___x_178_, v_size_172_);
v___x_180_ = lean_nat_dec_lt(v___x_179_, v_size_173_);
lean_dec(v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
lean_dec(v_r_177_);
lean_dec(v_l_176_);
lean_dec(v_v_175_);
lean_dec(v_k_174_);
v___x_181_ = lean_nat_add(v___x_171_, v_size_172_);
v___x_182_ = lean_nat_add(v___x_181_, v_size_173_);
lean_dec(v_size_173_);
lean_dec(v___x_181_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_impl_170_);
lean_ctor_set(v___x_166_, 0, v___x_182_);
v___x_184_ = v___x_166_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_185_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_185_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_185_, 4, v_impl_170_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_249_; 
v_isSharedCheck_249_ = !lean_is_exclusive(v_impl_170_);
if (v_isSharedCheck_249_ == 0)
{
lean_object* v_unused_250_; lean_object* v_unused_251_; lean_object* v_unused_252_; lean_object* v_unused_253_; lean_object* v_unused_254_; 
v_unused_250_ = lean_ctor_get(v_impl_170_, 4);
lean_dec(v_unused_250_);
v_unused_251_ = lean_ctor_get(v_impl_170_, 3);
lean_dec(v_unused_251_);
v_unused_252_ = lean_ctor_get(v_impl_170_, 2);
lean_dec(v_unused_252_);
v_unused_253_ = lean_ctor_get(v_impl_170_, 1);
lean_dec(v_unused_253_);
v_unused_254_ = lean_ctor_get(v_impl_170_, 0);
lean_dec(v_unused_254_);
v___x_187_ = v_impl_170_;
v_isShared_188_ = v_isSharedCheck_249_;
goto v_resetjp_186_;
}
else
{
lean_dec(v_impl_170_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_249_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_size_189_; lean_object* v_k_190_; lean_object* v_v_191_; lean_object* v_l_192_; lean_object* v_r_193_; lean_object* v_size_194_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v_size_189_ = lean_ctor_get(v_l_176_, 0);
v_k_190_ = lean_ctor_get(v_l_176_, 1);
v_v_191_ = lean_ctor_get(v_l_176_, 2);
v_l_192_ = lean_ctor_get(v_l_176_, 3);
v_r_193_ = lean_ctor_get(v_l_176_, 4);
v_size_194_ = lean_ctor_get(v_r_177_, 0);
v___x_195_ = lean_unsigned_to_nat(2u);
v___x_196_ = lean_nat_mul(v___x_195_, v_size_194_);
v___x_197_ = lean_nat_dec_lt(v_size_189_, v___x_196_);
lean_dec(v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_225_; 
lean_inc(v_r_193_);
lean_inc(v_l_192_);
lean_inc(v_v_191_);
lean_inc(v_k_190_);
v_isSharedCheck_225_ = !lean_is_exclusive(v_l_176_);
if (v_isSharedCheck_225_ == 0)
{
lean_object* v_unused_226_; lean_object* v_unused_227_; lean_object* v_unused_228_; lean_object* v_unused_229_; lean_object* v_unused_230_; 
v_unused_226_ = lean_ctor_get(v_l_176_, 4);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_l_176_, 3);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_l_176_, 2);
lean_dec(v_unused_228_);
v_unused_229_ = lean_ctor_get(v_l_176_, 1);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_l_176_, 0);
lean_dec(v_unused_230_);
v___x_199_ = v_l_176_;
v_isShared_200_ = v_isSharedCheck_225_;
goto v_resetjp_198_;
}
else
{
lean_dec(v_l_176_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_225_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___y_204_; lean_object* v___y_205_; lean_object* v___y_206_; lean_object* v___y_215_; 
v___x_201_ = lean_nat_add(v___x_171_, v_size_172_);
v___x_202_ = lean_nat_add(v___x_201_, v_size_173_);
lean_dec(v_size_173_);
if (lean_obj_tag(v_l_192_) == 0)
{
lean_object* v_size_223_; 
v_size_223_ = lean_ctor_get(v_l_192_, 0);
lean_inc(v_size_223_);
v___y_215_ = v_size_223_;
goto v___jp_214_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_unsigned_to_nat(0u);
v___y_215_ = v___x_224_;
goto v___jp_214_;
}
v___jp_203_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_nat_add(v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec(v___y_205_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 4, v_r_177_);
lean_ctor_set(v___x_199_, 3, v_r_193_);
lean_ctor_set(v___x_199_, 2, v_v_175_);
lean_ctor_set(v___x_199_, 1, v_k_174_);
lean_ctor_set(v___x_199_, 0, v___x_207_);
v___x_209_ = v___x_199_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_k_174_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_v_175_);
lean_ctor_set(v_reuseFailAlloc_213_, 3, v_r_193_);
lean_ctor_set(v_reuseFailAlloc_213_, 4, v_r_177_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 4, v___x_209_);
lean_ctor_set(v___x_187_, 3, v___y_204_);
lean_ctor_set(v___x_187_, 2, v_v_191_);
lean_ctor_set(v___x_187_, 1, v_k_190_);
lean_ctor_set(v___x_187_, 0, v___x_202_);
v___x_211_ = v___x_187_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_k_190_);
lean_ctor_set(v_reuseFailAlloc_212_, 2, v_v_191_);
lean_ctor_set(v_reuseFailAlloc_212_, 3, v___y_204_);
lean_ctor_set(v_reuseFailAlloc_212_, 4, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_216_ = lean_nat_add(v___x_201_, v___y_215_);
lean_dec(v___y_215_);
lean_dec(v___x_201_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_l_192_);
lean_ctor_set(v___x_166_, 0, v___x_216_);
v___x_218_ = v___x_166_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_222_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_222_, 4, v_l_192_);
v___x_218_ = v_reuseFailAlloc_222_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_219_; 
v___x_219_ = lean_nat_add(v___x_171_, v_size_194_);
if (lean_obj_tag(v_r_193_) == 0)
{
lean_object* v_size_220_; 
v_size_220_ = lean_ctor_get(v_r_193_, 0);
lean_inc(v_size_220_);
v___y_204_ = v___x_218_;
v___y_205_ = v___x_219_;
v___y_206_ = v_size_220_;
goto v___jp_203_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___y_204_ = v___x_218_;
v___y_205_ = v___x_219_;
v___y_206_ = v___x_221_;
goto v___jp_203_;
}
}
}
}
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
lean_del_object(v___x_166_);
v___x_231_ = lean_nat_add(v___x_171_, v_size_172_);
v___x_232_ = lean_nat_add(v___x_231_, v_size_173_);
lean_dec(v_size_173_);
v___x_233_ = lean_nat_add(v___x_231_, v_size_189_);
lean_dec(v___x_231_);
lean_inc_ref(v_l_163_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 4, v_l_176_);
lean_ctor_set(v___x_187_, 3, v_l_163_);
lean_ctor_set(v___x_187_, 2, v_v_162_);
lean_ctor_set(v___x_187_, 1, v_k_161_);
lean_ctor_set(v___x_187_, 0, v___x_233_);
v___x_235_ = v___x_187_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_248_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_248_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_248_, 4, v_l_176_);
v___x_235_ = v_reuseFailAlloc_248_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
v_isSharedCheck_242_ = !lean_is_exclusive(v_l_163_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; lean_object* v_unused_244_; lean_object* v_unused_245_; lean_object* v_unused_246_; lean_object* v_unused_247_; 
v_unused_243_ = lean_ctor_get(v_l_163_, 4);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_l_163_, 3);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_l_163_, 2);
lean_dec(v_unused_245_);
v_unused_246_ = lean_ctor_get(v_l_163_, 1);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_l_163_, 0);
lean_dec(v_unused_247_);
v___x_237_ = v_l_163_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_dec(v_l_163_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 4, v_r_177_);
lean_ctor_set(v___x_237_, 3, v___x_235_);
lean_ctor_set(v___x_237_, 2, v_v_175_);
lean_ctor_set(v___x_237_, 1, v_k_174_);
lean_ctor_set(v___x_237_, 0, v___x_232_);
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_k_174_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v_v_175_);
lean_ctor_set(v_reuseFailAlloc_241_, 3, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_241_, 4, v_r_177_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_255_; 
v_l_255_ = lean_ctor_get(v_impl_170_, 3);
lean_inc(v_l_255_);
if (lean_obj_tag(v_l_255_) == 0)
{
lean_object* v_r_256_; lean_object* v_k_257_; lean_object* v_v_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_281_; 
v_r_256_ = lean_ctor_get(v_impl_170_, 4);
v_k_257_ = lean_ctor_get(v_impl_170_, 1);
v_v_258_ = lean_ctor_get(v_impl_170_, 2);
v_isSharedCheck_281_ = !lean_is_exclusive(v_impl_170_);
if (v_isSharedCheck_281_ == 0)
{
lean_object* v_unused_282_; lean_object* v_unused_283_; 
v_unused_282_ = lean_ctor_get(v_impl_170_, 3);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v_impl_170_, 0);
lean_dec(v_unused_283_);
v___x_260_ = v_impl_170_;
v_isShared_261_ = v_isSharedCheck_281_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_r_256_);
lean_inc(v_v_258_);
lean_inc(v_k_257_);
lean_dec(v_impl_170_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_281_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_k_262_; lean_object* v_v_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_277_; 
v_k_262_ = lean_ctor_get(v_l_255_, 1);
v_v_263_ = lean_ctor_get(v_l_255_, 2);
v_isSharedCheck_277_ = !lean_is_exclusive(v_l_255_);
if (v_isSharedCheck_277_ == 0)
{
lean_object* v_unused_278_; lean_object* v_unused_279_; lean_object* v_unused_280_; 
v_unused_278_ = lean_ctor_get(v_l_255_, 4);
lean_dec(v_unused_278_);
v_unused_279_ = lean_ctor_get(v_l_255_, 3);
lean_dec(v_unused_279_);
v_unused_280_ = lean_ctor_get(v_l_255_, 0);
lean_dec(v_unused_280_);
v___x_265_ = v_l_255_;
v_isShared_266_ = v_isSharedCheck_277_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_v_263_);
lean_inc(v_k_262_);
lean_dec(v_l_255_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_277_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_267_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_256_, 2);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 4, v_r_256_);
lean_ctor_set(v___x_265_, 3, v_r_256_);
lean_ctor_set(v___x_265_, 2, v_v_162_);
lean_ctor_set(v___x_265_, 1, v_k_161_);
lean_ctor_set(v___x_265_, 0, v___x_171_);
v___x_269_ = v___x_265_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_276_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_276_, 3, v_r_256_);
lean_ctor_set(v_reuseFailAlloc_276_, 4, v_r_256_);
v___x_269_ = v_reuseFailAlloc_276_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_271_; 
lean_inc(v_r_256_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 3, v_r_256_);
lean_ctor_set(v___x_260_, 0, v___x_171_);
v___x_271_ = v___x_260_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_k_257_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v_v_258_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v_r_256_);
lean_ctor_set(v_reuseFailAlloc_275_, 4, v_r_256_);
v___x_271_ = v_reuseFailAlloc_275_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_273_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v___x_271_);
lean_ctor_set(v___x_166_, 3, v___x_269_);
lean_ctor_set(v___x_166_, 2, v_v_263_);
lean_ctor_set(v___x_166_, 1, v_k_262_);
lean_ctor_set(v___x_166_, 0, v___x_267_);
v___x_273_ = v___x_166_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_k_262_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v_v_263_);
lean_ctor_set(v_reuseFailAlloc_274_, 3, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_274_, 4, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
}
else
{
lean_object* v_r_284_; 
v_r_284_ = lean_ctor_get(v_impl_170_, 4);
lean_inc(v_r_284_);
if (lean_obj_tag(v_r_284_) == 0)
{
lean_object* v_k_285_; lean_object* v_v_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_297_; 
v_k_285_ = lean_ctor_get(v_impl_170_, 1);
v_v_286_ = lean_ctor_get(v_impl_170_, 2);
v_isSharedCheck_297_ = !lean_is_exclusive(v_impl_170_);
if (v_isSharedCheck_297_ == 0)
{
lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; 
v_unused_298_ = lean_ctor_get(v_impl_170_, 4);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_impl_170_, 3);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_impl_170_, 0);
lean_dec(v_unused_300_);
v___x_288_ = v_impl_170_;
v_isShared_289_ = v_isSharedCheck_297_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_v_286_);
lean_inc(v_k_285_);
lean_dec(v_impl_170_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_297_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_290_ = lean_unsigned_to_nat(3u);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 4, v_l_255_);
lean_ctor_set(v___x_288_, 2, v_v_162_);
lean_ctor_set(v___x_288_, 1, v_k_161_);
lean_ctor_set(v___x_288_, 0, v___x_171_);
v___x_292_ = v___x_288_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_296_, 3, v_l_255_);
lean_ctor_set(v_reuseFailAlloc_296_, 4, v_l_255_);
v___x_292_ = v_reuseFailAlloc_296_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_294_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_r_284_);
lean_ctor_set(v___x_166_, 3, v___x_292_);
lean_ctor_set(v___x_166_, 2, v_v_286_);
lean_ctor_set(v___x_166_, 1, v_k_285_);
lean_ctor_set(v___x_166_, 0, v___x_290_);
v___x_294_ = v___x_166_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_k_285_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_v_286_);
lean_ctor_set(v_reuseFailAlloc_295_, 3, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_295_, 4, v_r_284_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_301_ = lean_unsigned_to_nat(2u);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_impl_170_);
lean_ctor_set(v___x_166_, 3, v_r_284_);
lean_ctor_set(v___x_166_, 0, v___x_301_);
v___x_303_ = v___x_166_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_304_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_304_, 3, v_r_284_);
lean_ctor_set(v_reuseFailAlloc_304_, 4, v_impl_170_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
else
{
lean_object* v___x_306_; 
lean_dec(v_v_162_);
lean_dec(v_k_161_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 2, v_v_158_);
lean_ctor_set(v___x_166_, 1, v_k_157_);
v___x_306_ = v___x_166_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_size_160_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_k_157_);
lean_ctor_set(v_reuseFailAlloc_307_, 2, v_v_158_);
lean_ctor_set(v_reuseFailAlloc_307_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_307_, 4, v_r_164_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
else
{
lean_object* v_impl_308_; lean_object* v___x_309_; 
lean_dec(v_size_160_);
v_impl_308_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(v_k_157_, v_v_158_, v_l_163_);
v___x_309_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_164_) == 0)
{
lean_object* v_size_310_; lean_object* v_size_311_; lean_object* v_k_312_; lean_object* v_v_313_; lean_object* v_l_314_; lean_object* v_r_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_size_310_ = lean_ctor_get(v_r_164_, 0);
v_size_311_ = lean_ctor_get(v_impl_308_, 0);
lean_inc(v_size_311_);
v_k_312_ = lean_ctor_get(v_impl_308_, 1);
lean_inc(v_k_312_);
v_v_313_ = lean_ctor_get(v_impl_308_, 2);
lean_inc(v_v_313_);
v_l_314_ = lean_ctor_get(v_impl_308_, 3);
lean_inc(v_l_314_);
v_r_315_ = lean_ctor_get(v_impl_308_, 4);
lean_inc(v_r_315_);
v___x_316_ = lean_unsigned_to_nat(3u);
v___x_317_ = lean_nat_mul(v___x_316_, v_size_310_);
v___x_318_ = lean_nat_dec_lt(v___x_317_, v_size_311_);
lean_dec(v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
lean_dec(v_r_315_);
lean_dec(v_l_314_);
lean_dec(v_v_313_);
lean_dec(v_k_312_);
v___x_319_ = lean_nat_add(v___x_309_, v_size_311_);
lean_dec(v_size_311_);
v___x_320_ = lean_nat_add(v___x_319_, v_size_310_);
lean_dec(v___x_319_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 3, v_impl_308_);
lean_ctor_set(v___x_166_, 0, v___x_320_);
v___x_322_ = v___x_166_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v_impl_308_);
lean_ctor_set(v_reuseFailAlloc_323_, 4, v_r_164_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
else
{
lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_389_; 
v_isSharedCheck_389_ = !lean_is_exclusive(v_impl_308_);
if (v_isSharedCheck_389_ == 0)
{
lean_object* v_unused_390_; lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; lean_object* v_unused_394_; 
v_unused_390_ = lean_ctor_get(v_impl_308_, 4);
lean_dec(v_unused_390_);
v_unused_391_ = lean_ctor_get(v_impl_308_, 3);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_impl_308_, 2);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_impl_308_, 1);
lean_dec(v_unused_393_);
v_unused_394_ = lean_ctor_get(v_impl_308_, 0);
lean_dec(v_unused_394_);
v___x_325_ = v_impl_308_;
v_isShared_326_ = v_isSharedCheck_389_;
goto v_resetjp_324_;
}
else
{
lean_dec(v_impl_308_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_389_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_size_327_; lean_object* v_size_328_; lean_object* v_k_329_; lean_object* v_v_330_; lean_object* v_l_331_; lean_object* v_r_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v_size_327_ = lean_ctor_get(v_l_314_, 0);
v_size_328_ = lean_ctor_get(v_r_315_, 0);
v_k_329_ = lean_ctor_get(v_r_315_, 1);
v_v_330_ = lean_ctor_get(v_r_315_, 2);
v_l_331_ = lean_ctor_get(v_r_315_, 3);
v_r_332_ = lean_ctor_get(v_r_315_, 4);
v___x_333_ = lean_unsigned_to_nat(2u);
v___x_334_ = lean_nat_mul(v___x_333_, v_size_327_);
v___x_335_ = lean_nat_dec_lt(v_size_328_, v___x_334_);
lean_dec(v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_364_; 
lean_inc(v_r_332_);
lean_inc(v_l_331_);
lean_inc(v_v_330_);
lean_inc(v_k_329_);
v_isSharedCheck_364_ = !lean_is_exclusive(v_r_315_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; lean_object* v_unused_366_; lean_object* v_unused_367_; lean_object* v_unused_368_; lean_object* v_unused_369_; 
v_unused_365_ = lean_ctor_get(v_r_315_, 4);
lean_dec(v_unused_365_);
v_unused_366_ = lean_ctor_get(v_r_315_, 3);
lean_dec(v_unused_366_);
v_unused_367_ = lean_ctor_get(v_r_315_, 2);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_r_315_, 1);
lean_dec(v_unused_368_);
v_unused_369_ = lean_ctor_get(v_r_315_, 0);
lean_dec(v_unused_369_);
v___x_337_ = v_r_315_;
v_isShared_338_ = v_isSharedCheck_364_;
goto v_resetjp_336_;
}
else
{
lean_dec(v_r_315_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_364_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___x_352_; lean_object* v___y_354_; 
v___x_339_ = lean_nat_add(v___x_309_, v_size_311_);
lean_dec(v_size_311_);
v___x_340_ = lean_nat_add(v___x_339_, v_size_310_);
lean_dec(v___x_339_);
v___x_352_ = lean_nat_add(v___x_309_, v_size_327_);
if (lean_obj_tag(v_l_331_) == 0)
{
lean_object* v_size_362_; 
v_size_362_ = lean_ctor_get(v_l_331_, 0);
lean_inc(v_size_362_);
v___y_354_ = v_size_362_;
goto v___jp_353_;
}
else
{
lean_object* v___x_363_; 
v___x_363_ = lean_unsigned_to_nat(0u);
v___y_354_ = v___x_363_;
goto v___jp_353_;
}
v___jp_341_:
{
lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_345_ = lean_nat_add(v___y_342_, v___y_344_);
lean_dec(v___y_344_);
lean_dec(v___y_342_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 4, v_r_164_);
lean_ctor_set(v___x_337_, 3, v_r_332_);
lean_ctor_set(v___x_337_, 2, v_v_162_);
lean_ctor_set(v___x_337_, 1, v_k_161_);
lean_ctor_set(v___x_337_, 0, v___x_345_);
v___x_347_ = v___x_337_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_351_, 3, v_r_332_);
lean_ctor_set(v_reuseFailAlloc_351_, 4, v_r_164_);
v___x_347_ = v_reuseFailAlloc_351_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_349_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 4, v___x_347_);
lean_ctor_set(v___x_325_, 3, v___y_343_);
lean_ctor_set(v___x_325_, 2, v_v_330_);
lean_ctor_set(v___x_325_, 1, v_k_329_);
lean_ctor_set(v___x_325_, 0, v___x_340_);
v___x_349_ = v___x_325_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_k_329_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_v_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 3, v___y_343_);
lean_ctor_set(v_reuseFailAlloc_350_, 4, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
v___jp_353_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_nat_add(v___x_352_, v___y_354_);
lean_dec(v___y_354_);
lean_dec(v___x_352_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_l_331_);
lean_ctor_set(v___x_166_, 3, v_l_314_);
lean_ctor_set(v___x_166_, 2, v_v_313_);
lean_ctor_set(v___x_166_, 1, v_k_312_);
lean_ctor_set(v___x_166_, 0, v___x_355_);
v___x_357_ = v___x_166_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_k_312_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_v_313_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_l_314_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v_l_331_);
v___x_357_ = v_reuseFailAlloc_361_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; 
v___x_358_ = lean_nat_add(v___x_309_, v_size_310_);
if (lean_obj_tag(v_r_332_) == 0)
{
lean_object* v_size_359_; 
v_size_359_ = lean_ctor_get(v_r_332_, 0);
lean_inc(v_size_359_);
v___y_342_ = v___x_358_;
v___y_343_ = v___x_357_;
v___y_344_ = v_size_359_;
goto v___jp_341_;
}
else
{
lean_object* v___x_360_; 
v___x_360_ = lean_unsigned_to_nat(0u);
v___y_342_ = v___x_358_;
v___y_343_ = v___x_357_;
v___y_344_ = v___x_360_;
goto v___jp_341_;
}
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
lean_del_object(v___x_166_);
v___x_370_ = lean_nat_add(v___x_309_, v_size_311_);
lean_dec(v_size_311_);
v___x_371_ = lean_nat_add(v___x_370_, v_size_310_);
lean_dec(v___x_370_);
v___x_372_ = lean_nat_add(v___x_309_, v_size_310_);
v___x_373_ = lean_nat_add(v___x_372_, v_size_328_);
lean_dec(v___x_372_);
lean_inc_ref(v_r_164_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 4, v_r_164_);
lean_ctor_set(v___x_325_, 3, v_r_315_);
lean_ctor_set(v___x_325_, 2, v_v_162_);
lean_ctor_set(v___x_325_, 1, v_k_161_);
lean_ctor_set(v___x_325_, 0, v___x_373_);
v___x_375_ = v___x_325_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_388_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_388_, 3, v_r_315_);
lean_ctor_set(v_reuseFailAlloc_388_, 4, v_r_164_);
v___x_375_ = v_reuseFailAlloc_388_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_isSharedCheck_382_ = !lean_is_exclusive(v_r_164_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; lean_object* v_unused_384_; lean_object* v_unused_385_; lean_object* v_unused_386_; lean_object* v_unused_387_; 
v_unused_383_ = lean_ctor_get(v_r_164_, 4);
lean_dec(v_unused_383_);
v_unused_384_ = lean_ctor_get(v_r_164_, 3);
lean_dec(v_unused_384_);
v_unused_385_ = lean_ctor_get(v_r_164_, 2);
lean_dec(v_unused_385_);
v_unused_386_ = lean_ctor_get(v_r_164_, 1);
lean_dec(v_unused_386_);
v_unused_387_ = lean_ctor_get(v_r_164_, 0);
lean_dec(v_unused_387_);
v___x_377_ = v_r_164_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_dec(v_r_164_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 4, v___x_375_);
lean_ctor_set(v___x_377_, 3, v_l_314_);
lean_ctor_set(v___x_377_, 2, v_v_313_);
lean_ctor_set(v___x_377_, 1, v_k_312_);
lean_ctor_set(v___x_377_, 0, v___x_371_);
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_k_312_);
lean_ctor_set(v_reuseFailAlloc_381_, 2, v_v_313_);
lean_ctor_set(v_reuseFailAlloc_381_, 3, v_l_314_);
lean_ctor_set(v_reuseFailAlloc_381_, 4, v___x_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_395_; 
v_l_395_ = lean_ctor_get(v_impl_308_, 3);
lean_inc(v_l_395_);
if (lean_obj_tag(v_l_395_) == 0)
{
lean_object* v_r_396_; lean_object* v_k_397_; lean_object* v_v_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_409_; 
v_r_396_ = lean_ctor_get(v_impl_308_, 4);
v_k_397_ = lean_ctor_get(v_impl_308_, 1);
v_v_398_ = lean_ctor_get(v_impl_308_, 2);
v_isSharedCheck_409_ = !lean_is_exclusive(v_impl_308_);
if (v_isSharedCheck_409_ == 0)
{
lean_object* v_unused_410_; lean_object* v_unused_411_; 
v_unused_410_ = lean_ctor_get(v_impl_308_, 3);
lean_dec(v_unused_410_);
v_unused_411_ = lean_ctor_get(v_impl_308_, 0);
lean_dec(v_unused_411_);
v___x_400_ = v_impl_308_;
v_isShared_401_ = v_isSharedCheck_409_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_r_396_);
lean_inc(v_v_398_);
lean_inc(v_k_397_);
lean_dec(v_impl_308_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_409_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_402_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_396_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 3, v_r_396_);
lean_ctor_set(v___x_400_, 2, v_v_162_);
lean_ctor_set(v___x_400_, 1, v_k_161_);
lean_ctor_set(v___x_400_, 0, v___x_309_);
v___x_404_ = v___x_400_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_r_396_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v_r_396_);
v___x_404_ = v_reuseFailAlloc_408_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_406_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v___x_404_);
lean_ctor_set(v___x_166_, 3, v_l_395_);
lean_ctor_set(v___x_166_, 2, v_v_398_);
lean_ctor_set(v___x_166_, 1, v_k_397_);
lean_ctor_set(v___x_166_, 0, v___x_402_);
v___x_406_ = v___x_166_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_k_397_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_v_398_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_l_395_);
lean_ctor_set(v_reuseFailAlloc_407_, 4, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v_r_412_; 
v_r_412_ = lean_ctor_get(v_impl_308_, 4);
lean_inc(v_r_412_);
if (lean_obj_tag(v_r_412_) == 0)
{
lean_object* v_k_413_; lean_object* v_v_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_437_; 
v_k_413_ = lean_ctor_get(v_impl_308_, 1);
v_v_414_ = lean_ctor_get(v_impl_308_, 2);
v_isSharedCheck_437_ = !lean_is_exclusive(v_impl_308_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; lean_object* v_unused_439_; lean_object* v_unused_440_; 
v_unused_438_ = lean_ctor_get(v_impl_308_, 4);
lean_dec(v_unused_438_);
v_unused_439_ = lean_ctor_get(v_impl_308_, 3);
lean_dec(v_unused_439_);
v_unused_440_ = lean_ctor_get(v_impl_308_, 0);
lean_dec(v_unused_440_);
v___x_416_ = v_impl_308_;
v_isShared_417_ = v_isSharedCheck_437_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_v_414_);
lean_inc(v_k_413_);
lean_dec(v_impl_308_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_437_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v_k_418_; lean_object* v_v_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_433_; 
v_k_418_ = lean_ctor_get(v_r_412_, 1);
v_v_419_ = lean_ctor_get(v_r_412_, 2);
v_isSharedCheck_433_ = !lean_is_exclusive(v_r_412_);
if (v_isSharedCheck_433_ == 0)
{
lean_object* v_unused_434_; lean_object* v_unused_435_; lean_object* v_unused_436_; 
v_unused_434_ = lean_ctor_get(v_r_412_, 4);
lean_dec(v_unused_434_);
v_unused_435_ = lean_ctor_get(v_r_412_, 3);
lean_dec(v_unused_435_);
v_unused_436_ = lean_ctor_get(v_r_412_, 0);
lean_dec(v_unused_436_);
v___x_421_ = v_r_412_;
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_v_419_);
lean_inc(v_k_418_);
lean_dec(v_r_412_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_unsigned_to_nat(3u);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 4, v_l_395_);
lean_ctor_set(v___x_421_, 3, v_l_395_);
lean_ctor_set(v___x_421_, 2, v_v_414_);
lean_ctor_set(v___x_421_, 1, v_k_413_);
lean_ctor_set(v___x_421_, 0, v___x_309_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_k_413_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v_v_414_);
lean_ctor_set(v_reuseFailAlloc_432_, 3, v_l_395_);
lean_ctor_set(v_reuseFailAlloc_432_, 4, v_l_395_);
v___x_425_ = v_reuseFailAlloc_432_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 4, v_l_395_);
lean_ctor_set(v___x_416_, 2, v_v_162_);
lean_ctor_set(v___x_416_, 1, v_k_161_);
lean_ctor_set(v___x_416_, 0, v___x_309_);
v___x_427_ = v___x_416_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_431_, 3, v_l_395_);
lean_ctor_set(v_reuseFailAlloc_431_, 4, v_l_395_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v___x_427_);
lean_ctor_set(v___x_166_, 3, v___x_425_);
lean_ctor_set(v___x_166_, 2, v_v_419_);
lean_ctor_set(v___x_166_, 1, v_k_418_);
lean_ctor_set(v___x_166_, 0, v___x_423_);
v___x_429_ = v___x_166_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_k_418_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_v_419_);
lean_ctor_set(v_reuseFailAlloc_430_, 3, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_430_, 4, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
}
}
else
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = lean_unsigned_to_nat(2u);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 4, v_r_412_);
lean_ctor_set(v___x_166_, 3, v_impl_308_);
lean_ctor_set(v___x_166_, 0, v___x_441_);
v___x_443_ = v___x_166_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_k_161_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_v_162_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_impl_308_);
lean_ctor_set(v_reuseFailAlloc_444_, 4, v_r_412_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set(v___x_447_, 1, v_k_157_);
lean_ctor_set(v___x_447_, 2, v_v_158_);
lean_ctor_set(v___x_447_, 3, v_t_159_);
lean_ctor_set(v___x_447_, 4, v_t_159_);
return v___x_447_;
}
}
}
static lean_object* _init_l_Lean_IR_Checker_markIndex___closed__0(void){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_mk_string_unchecked("variable / join point index ", 28, 28);
return v___x_448_;
}
}
static lean_object* _init_l_Lean_IR_Checker_markIndex___closed__1(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = lean_mk_string_unchecked(" has already been used", 22, 22);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markIndex(lean_object* v_i_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_459_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_470_ = lean_st_ref_get(v_a_454_);
lean_dec(v___x_470_);
v___x_471_ = lean_st_ref_get(v_a_452_);
v___x_472_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(v_i_450_, v___x_471_);
lean_dec(v___x_471_);
if (v___x_472_ == 0)
{
v___y_463_ = v_a_452_;
v___y_464_ = v_a_454_;
goto v___jp_462_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_473_ = lean_obj_once(&l_Lean_IR_Checker_markIndex___closed__0, &l_Lean_IR_Checker_markIndex___closed__0_once, _init_l_Lean_IR_Checker_markIndex___closed__0);
v___x_474_ = l_Nat_reprFast(v_i_450_);
v___x_475_ = lean_string_append(v___x_473_, v___x_474_);
lean_dec_ref(v___x_474_);
v___x_476_ = lean_obj_once(&l_Lean_IR_Checker_markIndex___closed__1, &l_Lean_IR_Checker_markIndex___closed__1_once, _init_l_Lean_IR_Checker_markIndex___closed__1);
v___x_477_ = lean_string_append(v___x_475_, v___x_476_);
v___x_478_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_477_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
return v___x_478_;
}
v___jp_456_:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_st_ref_set(v___y_458_, v___y_459_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v___y_457_);
return v___x_461_;
}
v___jp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_465_ = lean_st_ref_get(v___y_464_);
lean_dec(v___x_465_);
v___x_466_ = lean_st_ref_take(v___y_463_);
v___x_467_ = lean_box(0);
v___x_468_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(v_i_450_, v___x_466_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; 
v___x_469_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(v_i_450_, v___x_467_, v___x_466_);
v___y_457_ = v___x_467_;
v___y_458_ = v___y_463_;
v___y_459_ = v___x_469_;
goto v___jp_456_;
}
else
{
lean_dec(v_i_450_);
v___y_457_ = v___x_467_;
v___y_458_ = v___y_463_;
v___y_459_ = v___x_466_;
goto v___jp_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markIndex___boxed(lean_object* v_i_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_IR_Checker_markIndex(v_i_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec(v_a_481_);
lean_dec_ref(v_a_480_);
return v_res_485_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0(lean_object* v_00_u03b2_486_, lean_object* v_k_487_, lean_object* v_t_488_){
_start:
{
uint8_t v___x_489_; 
v___x_489_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___redArg(v_k_487_, v_t_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0___boxed(lean_object* v_00_u03b2_490_, lean_object* v_k_491_, lean_object* v_t_492_){
_start:
{
uint8_t v_res_493_; lean_object* v_r_494_; 
v_res_493_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_Checker_markIndex_spec__0(v_00_u03b2_490_, v_k_491_, v_t_492_);
lean_dec(v_t_492_);
lean_dec(v_k_491_);
v_r_494_ = lean_box(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1(lean_object* v_00_u03b2_495_, lean_object* v_k_496_, lean_object* v_v_497_, lean_object* v_t_498_, lean_object* v_hl_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_Checker_markIndex_spec__1___redArg(v_k_496_, v_v_497_, v_t_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markVar(lean_object* v_x_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_IR_Checker_markIndex(v_x_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markVar___boxed(lean_object* v_x_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lean_IR_Checker_markVar(v_x_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
lean_dec(v_a_512_);
lean_dec_ref(v_a_511_);
lean_dec(v_a_510_);
lean_dec_ref(v_a_509_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markJP(lean_object* v_j_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_IR_Checker_markIndex(v_j_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_markJP___boxed(lean_object* v_j_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_IR_Checker_markJP(v_j_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
return v_res_528_;
}
}
static lean_object* _init_l_Lean_IR_Checker_getDecl___closed__0(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_mk_string_unchecked("depends on declaration '", 24, 24);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_IR_Checker_getDecl___closed__1(void){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lean_mk_string_unchecked("', which has no executable code; consider marking definition as 'noncomputable'", 79, 79);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getDecl(lean_object* v_c_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v___x_537_; lean_object* v_env_538_; lean_object* v_decls_539_; lean_object* v___x_540_; 
v___x_537_ = lean_st_ref_get(v_a_535_);
v_env_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc_ref(v_env_538_);
lean_dec(v___x_537_);
v_decls_539_ = lean_ctor_get(v_a_532_, 2);
lean_inc(v_c_531_);
v___x_540_ = l_Lean_IR_findEnvDecl_x27(v_env_538_, v_c_531_, v_decls_539_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v___x_541_; uint8_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_541_ = lean_obj_once(&l_Lean_IR_Checker_getDecl___closed__0, &l_Lean_IR_Checker_getDecl___closed__0_once, _init_l_Lean_IR_Checker_getDecl___closed__0);
v___x_542_ = 1;
v___x_543_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_531_, v___x_542_);
v___x_544_ = lean_string_append(v___x_541_, v___x_543_);
lean_dec_ref(v___x_543_);
v___x_545_ = lean_obj_once(&l_Lean_IR_Checker_getDecl___closed__1, &l_Lean_IR_Checker_getDecl___closed__1_once, _init_l_Lean_IR_Checker_getDecl___closed__1);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
v___x_547_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_546_, v_a_532_, v_a_533_, v_a_534_, v_a_535_);
return v___x_547_;
}
else
{
lean_object* v_val_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec(v_c_531_);
v_val_548_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_540_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_val_548_);
lean_dec(v___x_540_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set_tag(v___x_550_, 0);
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_val_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getDecl___boxed(lean_object* v_c_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_IR_Checker_getDecl(v_c_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
return v_res_562_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkVar___closed__0(void){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_mk_string_unchecked("unknown variable '", 18, 18);
return v___x_563_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkVar___closed__1(void){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_mk_string_unchecked("x_", 2, 2);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkVar___closed__2(void){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVar(lean_object* v_x_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
uint8_t v___y_573_; lean_object* v_localCtx_584_; uint8_t v___x_585_; 
v_localCtx_584_ = lean_ctor_get(v_a_567_, 0);
v___x_585_ = l_Lean_IR_LocalContext_isLocalVar(v_localCtx_584_, v_x_566_);
if (v___x_585_ == 0)
{
uint8_t v___x_586_; 
v___x_586_ = l_Lean_IR_LocalContext_isParam(v_localCtx_584_, v_x_566_);
v___y_573_ = v___x_586_;
goto v___jp_572_;
}
else
{
v___y_573_ = v___x_585_;
goto v___jp_572_;
}
v___jp_572_:
{
if (v___y_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_574_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__0, &l_Lean_IR_Checker_checkVar___closed__0_once, _init_l_Lean_IR_Checker_checkVar___closed__0);
v___x_575_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__1, &l_Lean_IR_Checker_checkVar___closed__1_once, _init_l_Lean_IR_Checker_checkVar___closed__1);
v___x_576_ = l_Nat_reprFast(v_x_566_);
v___x_577_ = lean_string_append(v___x_575_, v___x_576_);
lean_dec_ref(v___x_576_);
v___x_578_ = lean_string_append(v___x_574_, v___x_577_);
lean_dec_ref(v___x_577_);
v___x_579_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
v___x_581_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_580_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_581_;
}
else
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec(v_x_566_);
v___x_582_ = lean_box(0);
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVar___boxed(lean_object* v_x_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_IR_Checker_checkVar(v_x_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_);
lean_dec(v_a_591_);
lean_dec_ref(v_a_590_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
return v_res_593_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkJP___closed__0(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = lean_mk_string_unchecked("unknown join point '", 20, 20);
return v___x_594_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkJP___closed__1(void){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = lean_mk_string_unchecked("block_", 6, 6);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkJP(lean_object* v_j_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_localCtx_602_; uint8_t v___x_603_; 
v_localCtx_602_ = lean_ctor_get(v_a_597_, 0);
v___x_603_ = l_Lean_IR_LocalContext_isJP(v_localCtx_602_, v_j_596_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_604_ = lean_obj_once(&l_Lean_IR_Checker_checkJP___closed__0, &l_Lean_IR_Checker_checkJP___closed__0_once, _init_l_Lean_IR_Checker_checkJP___closed__0);
v___x_605_ = lean_obj_once(&l_Lean_IR_Checker_checkJP___closed__1, &l_Lean_IR_Checker_checkJP___closed__1_once, _init_l_Lean_IR_Checker_checkJP___closed__1);
v___x_606_ = l_Nat_reprFast(v_j_596_);
v___x_607_ = lean_string_append(v___x_605_, v___x_606_);
lean_dec_ref(v___x_606_);
v___x_608_ = lean_string_append(v___x_604_, v___x_607_);
lean_dec_ref(v___x_607_);
v___x_609_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v___x_610_ = lean_string_append(v___x_608_, v___x_609_);
v___x_611_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_610_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
return v___x_611_;
}
else
{
lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec(v_j_596_);
v___x_612_ = lean_box(0);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkJP___boxed(lean_object* v_j_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lean_IR_Checker_checkJP(v_j_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_);
lean_dec(v_a_618_);
lean_dec_ref(v_a_617_);
lean_dec(v_a_616_);
lean_dec_ref(v_a_615_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArg(lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_){
_start:
{
if (lean_obj_tag(v_a_621_) == 0)
{
lean_object* v_id_627_; lean_object* v___x_628_; 
v_id_627_ = lean_ctor_get(v_a_621_, 0);
lean_inc(v_id_627_);
lean_dec_ref(v_a_621_);
v___x_628_ = l_Lean_IR_Checker_checkVar(v_id_627_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
return v___x_628_;
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_box(0);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArg___boxed(lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_IR_Checker_checkArg(v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0(lean_object* v_as_638_, size_t v_i_639_, size_t v_stop_640_, lean_object* v_b_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
uint8_t v___x_647_; 
v___x_647_ = lean_usize_dec_eq(v_i_639_, v_stop_640_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_array_uget_borrowed(v_as_638_, v_i_639_);
lean_inc(v___x_648_);
v___x_649_ = l_Lean_IR_Checker_checkArg(v___x_648_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; size_t v___x_651_; size_t v___x_652_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref(v___x_649_);
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_639_, v___x_651_);
v_i_639_ = v___x_652_;
v_b_641_ = v_a_650_;
goto _start;
}
else
{
return v___x_649_;
}
}
else
{
lean_object* v___x_654_; 
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v_b_641_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0___boxed(lean_object* v_as_655_, lean_object* v_i_656_, lean_object* v_stop_657_, lean_object* v_b_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
size_t v_i_boxed_664_; size_t v_stop_boxed_665_; lean_object* v_res_666_; 
v_i_boxed_664_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_stop_boxed_665_ = lean_unbox_usize(v_stop_657_);
lean_dec(v_stop_657_);
v_res_666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0(v_as_655_, v_i_boxed_664_, v_stop_boxed_665_, v_b_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec_ref(v_as_655_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArgs(lean_object* v_as_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_673_ = lean_unsigned_to_nat(0u);
v___x_674_ = lean_array_get_size(v_as_667_);
v___x_675_ = lean_box(0);
v___x_676_ = lean_nat_dec_lt(v___x_673_, v___x_674_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_675_);
return v___x_677_;
}
else
{
uint8_t v___x_678_; 
v___x_678_ = lean_nat_dec_le(v___x_674_, v___x_674_);
if (v___x_678_ == 0)
{
if (v___x_676_ == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_675_);
return v___x_679_;
}
else
{
size_t v___x_680_; size_t v___x_681_; lean_object* v___x_682_; 
v___x_680_ = ((size_t)0ULL);
v___x_681_ = lean_usize_of_nat(v___x_674_);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0(v_as_667_, v___x_680_, v___x_681_, v___x_675_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_682_;
}
}
else
{
size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((size_t)0ULL);
v___x_684_ = lean_usize_of_nat(v___x_674_);
v___x_685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkArgs_spec__0(v_as_667_, v___x_683_, v___x_684_, v___x_675_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkArgs___boxed(lean_object* v_as_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_IR_Checker_checkArgs(v_as_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec_ref(v_as_686_);
return v_res_692_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkEqTypes___closed__0(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_mk_string_unchecked("unexpected type '{ty₁}' != '{ty₂}'", 38, 34);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkEqTypes(lean_object* v_ty_u2081_694_, lean_object* v_ty_u2082_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_){
_start:
{
uint8_t v___x_701_; 
v___x_701_ = l_Lean_IR_instBEqIRType_beq(v_ty_u2081_694_, v_ty_u2082_695_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_obj_once(&l_Lean_IR_Checker_checkEqTypes___closed__0, &l_Lean_IR_Checker_checkEqTypes___closed__0_once, _init_l_Lean_IR_Checker_checkEqTypes___closed__0);
v___x_703_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_702_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
return v___x_703_;
}
else
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_box(0);
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkEqTypes___boxed(lean_object* v_ty_u2081_706_, lean_object* v_ty_u2082_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_IR_Checker_checkEqTypes(v_ty_u2081_706_, v_ty_u2082_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_ty_u2082_707_);
lean_dec(v_ty_u2081_706_);
return v_res_713_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkType___closed__0(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_mk_string_unchecked("unexpected type '", 17, 17);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkType___closed__1(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkType(lean_object* v_ty_716_, lean_object* v_p_717_, lean_object* v_suffix_x3f_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v___x_724_; uint8_t v___x_725_; 
lean_inc(v_ty_716_);
v___x_724_ = lean_apply_1(v_p_717_, v_ty_716_);
v___x_725_ = lean_unbox(v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v_msg_733_; 
v___x_726_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_727_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_716_);
v___x_728_ = l_Std_Format_defWidth;
v___x_729_ = lean_unsigned_to_nat(0u);
v___x_730_ = l_Std_Format_pretty(v___x_727_, v___x_728_, v___x_729_, v___x_729_);
v___x_731_ = lean_string_append(v___x_726_, v___x_730_);
lean_dec_ref(v___x_730_);
v___x_732_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_733_ = lean_string_append(v___x_731_, v___x_732_);
if (lean_obj_tag(v_suffix_x3f_718_) == 1)
{
lean_object* v_val_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_msg_737_; lean_object* v___x_738_; 
v_val_734_ = lean_ctor_get(v_suffix_x3f_718_, 0);
v___x_735_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_736_ = lean_string_append(v_msg_733_, v___x_735_);
v_msg_737_ = lean_string_append(v___x_736_, v_val_734_);
v___x_738_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_737_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
return v___x_738_;
}
else
{
lean_object* v___x_739_; 
v___x_739_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_733_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
return v___x_739_;
}
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v_ty_716_);
v___x_740_ = lean_box(0);
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkType___boxed(lean_object* v_ty_742_, lean_object* v_p_743_, lean_object* v_suffix_x3f_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_IR_Checker_checkType(v_ty_742_, v_p_743_, v_suffix_x3f_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_suffix_x3f_744_);
return v_res_750_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkObjType___closed__0(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_mk_string_unchecked("object expected", 15, 15);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjType(lean_object* v_ty_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
uint8_t v___x_758_; 
v___x_758_ = l_Lean_IR_IRType_isObj(v_ty_752_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v_msg_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v_msg_770_; lean_object* v___x_771_; 
v___x_759_ = lean_obj_once(&l_Lean_IR_Checker_checkObjType___closed__0, &l_Lean_IR_Checker_checkObjType___closed__0_once, _init_l_Lean_IR_Checker_checkObjType___closed__0);
v___x_760_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_761_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_752_);
v___x_762_ = l_Std_Format_defWidth;
v___x_763_ = lean_unsigned_to_nat(0u);
v___x_764_ = l_Std_Format_pretty(v___x_761_, v___x_762_, v___x_763_, v___x_763_);
v___x_765_ = lean_string_append(v___x_760_, v___x_764_);
lean_dec_ref(v___x_764_);
v___x_766_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_767_ = lean_string_append(v___x_765_, v___x_766_);
v___x_768_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_769_ = lean_string_append(v_msg_767_, v___x_768_);
v_msg_770_ = lean_string_append(v___x_769_, v___x_759_);
v___x_771_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_770_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
return v___x_771_;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; 
lean_dec(v_ty_752_);
v___x_772_ = lean_box(0);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjType___boxed(lean_object* v_ty_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_IR_Checker_checkObjType(v_ty_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_);
lean_dec(v_a_778_);
lean_dec_ref(v_a_777_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
return v_res_780_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkScalarType___closed__0(void){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = lean_mk_string_unchecked("scalar expected", 15, 15);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarType(lean_object* v_ty_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
uint8_t v___x_788_; 
v___x_788_ = l_Lean_IR_IRType_isScalar(v_ty_782_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v_msg_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v_msg_800_; lean_object* v___x_801_; 
v___x_789_ = lean_obj_once(&l_Lean_IR_Checker_checkScalarType___closed__0, &l_Lean_IR_Checker_checkScalarType___closed__0_once, _init_l_Lean_IR_Checker_checkScalarType___closed__0);
v___x_790_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_791_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_782_);
v___x_792_ = l_Std_Format_defWidth;
v___x_793_ = lean_unsigned_to_nat(0u);
v___x_794_ = l_Std_Format_pretty(v___x_791_, v___x_792_, v___x_793_, v___x_793_);
v___x_795_ = lean_string_append(v___x_790_, v___x_794_);
lean_dec_ref(v___x_794_);
v___x_796_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_797_ = lean_string_append(v___x_795_, v___x_796_);
v___x_798_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_799_ = lean_string_append(v_msg_797_, v___x_798_);
v_msg_800_ = lean_string_append(v___x_799_, v___x_789_);
v___x_801_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_800_, v_a_783_, v_a_784_, v_a_785_, v_a_786_);
return v___x_801_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec(v_ty_782_);
v___x_802_ = lean_box(0);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarType___boxed(lean_object* v_ty_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_IR_Checker_checkScalarType(v_ty_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getType(lean_object* v_x_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_localCtx_817_; lean_object* v___x_818_; 
v_localCtx_817_ = lean_ctor_get(v_a_812_, 0);
v___x_818_ = l_Lean_IR_LocalContext_getType(v_localCtx_817_, v_x_811_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_819_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__0, &l_Lean_IR_Checker_checkVar___closed__0_once, _init_l_Lean_IR_Checker_checkVar___closed__0);
v___x_820_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__1, &l_Lean_IR_Checker_checkVar___closed__1_once, _init_l_Lean_IR_Checker_checkVar___closed__1);
v___x_821_ = l_Nat_reprFast(v_x_811_);
v___x_822_ = lean_string_append(v___x_820_, v___x_821_);
lean_dec_ref(v___x_821_);
v___x_823_ = lean_string_append(v___x_819_, v___x_822_);
lean_dec_ref(v___x_822_);
v___x_824_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v___x_825_ = lean_string_append(v___x_823_, v___x_824_);
v___x_826_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_825_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
return v___x_826_;
}
else
{
lean_object* v_val_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v_x_811_);
v_val_827_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_818_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_val_827_);
lean_dec(v___x_818_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 0);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_val_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_getType___boxed(lean_object* v_x_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_IR_Checker_getType(v_x_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVarType(lean_object* v_x_842_, lean_object* v_p_843_, lean_object* v_suffix_x3f_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lean_IR_Checker_getType(v_x_842_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_875_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_875_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_875_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_875_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; uint8_t v___x_856_; 
lean_inc(v_a_851_);
v___x_855_ = lean_apply_1(v_p_843_, v_a_851_);
v___x_856_ = lean_unbox(v___x_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_msg_864_; 
lean_del_object(v___x_853_);
v___x_857_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_858_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_851_);
v___x_859_ = l_Std_Format_defWidth;
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = l_Std_Format_pretty(v___x_858_, v___x_859_, v___x_860_, v___x_860_);
v___x_862_ = lean_string_append(v___x_857_, v___x_861_);
lean_dec_ref(v___x_861_);
v___x_863_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_864_ = lean_string_append(v___x_862_, v___x_863_);
if (lean_obj_tag(v_suffix_x3f_844_) == 1)
{
lean_object* v_val_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v_msg_868_; lean_object* v___x_869_; 
v_val_865_ = lean_ctor_get(v_suffix_x3f_844_, 0);
v___x_866_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_867_ = lean_string_append(v_msg_864_, v___x_866_);
v_msg_868_ = lean_string_append(v___x_867_, v_val_865_);
v___x_869_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_868_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
return v___x_869_;
}
else
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_864_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
return v___x_870_;
}
}
else
{
lean_object* v___x_871_; lean_object* v___x_873_; 
lean_dec(v_a_851_);
v___x_871_ = lean_box(0);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_871_);
v___x_873_ = v___x_853_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref(v_p_843_);
v_a_876_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_850_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_850_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkVarType___boxed(lean_object* v_x_884_, lean_object* v_p_885_, lean_object* v_suffix_x3f_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_IR_Checker_checkVarType(v_x_884_, v_p_885_, v_suffix_x3f_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_);
lean_dec(v_a_890_);
lean_dec_ref(v_a_889_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec(v_suffix_x3f_886_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjVar(lean_object* v_x_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_IR_Checker_getType(v_x_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_922_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_922_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_922_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_922_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
uint8_t v___x_904_; 
v___x_904_ = l_Lean_IR_IRType_isObj(v_a_900_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_msg_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v_msg_916_; lean_object* v___x_917_; 
lean_del_object(v___x_902_);
v___x_905_ = lean_obj_once(&l_Lean_IR_Checker_checkObjType___closed__0, &l_Lean_IR_Checker_checkObjType___closed__0_once, _init_l_Lean_IR_Checker_checkObjType___closed__0);
v___x_906_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_907_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_900_);
v___x_908_ = l_Std_Format_defWidth;
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = l_Std_Format_pretty(v___x_907_, v___x_908_, v___x_909_, v___x_909_);
v___x_911_ = lean_string_append(v___x_906_, v___x_910_);
lean_dec_ref(v___x_910_);
v___x_912_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_913_ = lean_string_append(v___x_911_, v___x_912_);
v___x_914_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_915_ = lean_string_append(v_msg_913_, v___x_914_);
v_msg_916_ = lean_string_append(v___x_915_, v___x_905_);
v___x_917_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_916_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
return v___x_917_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_920_; 
lean_dec(v_a_900_);
v___x_918_ = lean_box(0);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 0, v___x_918_);
v___x_920_ = v___x_902_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_918_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_899_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_899_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkObjVar___boxed(lean_object* v_x_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_IR_Checker_checkObjVar(v_x_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarVar(lean_object* v_x_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lean_IR_Checker_getType(v_x_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_967_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_967_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_967_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_967_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
uint8_t v___x_949_; 
v___x_949_ = l_Lean_IR_IRType_isScalar(v_a_945_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_msg_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_msg_961_; lean_object* v___x_962_; 
lean_del_object(v___x_947_);
v___x_950_ = lean_obj_once(&l_Lean_IR_Checker_checkScalarType___closed__0, &l_Lean_IR_Checker_checkScalarType___closed__0_once, _init_l_Lean_IR_Checker_checkScalarType___closed__0);
v___x_951_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_952_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_945_);
v___x_953_ = l_Std_Format_defWidth;
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = l_Std_Format_pretty(v___x_952_, v___x_953_, v___x_954_, v___x_954_);
v___x_956_ = lean_string_append(v___x_951_, v___x_955_);
lean_dec_ref(v___x_955_);
v___x_957_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_958_ = lean_string_append(v___x_956_, v___x_957_);
v___x_959_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__1, &l_Lean_IR_Checker_checkType___closed__1_once, _init_l_Lean_IR_Checker_checkType___closed__1);
v___x_960_ = lean_string_append(v_msg_958_, v___x_959_);
v_msg_961_ = lean_string_append(v___x_960_, v___x_950_);
v___x_962_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_961_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
return v___x_962_;
}
else
{
lean_object* v___x_963_; lean_object* v___x_965_; 
lean_dec(v_a_945_);
v___x_963_ = lean_box(0);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 0, v___x_963_);
v___x_965_ = v___x_947_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
v_a_968_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_944_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_944_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkScalarVar___boxed(lean_object* v_x_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_IR_Checker_checkScalarVar(v_x_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
return v_res_982_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkFullApp___closed__0(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_mk_string_unchecked("incorrect number of arguments to '", 34, 34);
return v___x_983_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkFullApp___closed__1(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = lean_mk_string_unchecked("', ", 3, 3);
return v___x_984_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkFullApp___closed__2(void){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = lean_mk_string_unchecked(" provided, ", 11, 11);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkFullApp___closed__3(void){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = lean_mk_string_unchecked(" expected", 9, 9);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFullApp(lean_object* v_c_987_, lean_object* v_ys_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
lean_object* v___x_994_; 
lean_inc(v_c_987_);
v___x_994_ = l_Lean_IR_Checker_getDecl(v_c_987_, v_a_989_, v_a_990_, v_a_991_, v_a_992_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; uint8_t v___x_999_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref(v___x_994_);
v___x_996_ = lean_array_get_size(v_ys_988_);
v___x_997_ = l_Lean_IR_Decl_params(v_a_995_);
lean_dec(v_a_995_);
v___x_998_ = lean_array_get_size(v___x_997_);
lean_dec_ref(v___x_997_);
v___x_999_ = lean_nat_dec_eq(v___x_996_, v___x_998_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1000_ = lean_obj_once(&l_Lean_IR_Checker_checkFullApp___closed__0, &l_Lean_IR_Checker_checkFullApp___closed__0_once, _init_l_Lean_IR_Checker_checkFullApp___closed__0);
v___x_1001_ = 1;
v___x_1002_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_987_, v___x_1001_);
v___x_1003_ = lean_string_append(v___x_1000_, v___x_1002_);
lean_dec_ref(v___x_1002_);
v___x_1004_ = lean_obj_once(&l_Lean_IR_Checker_checkFullApp___closed__1, &l_Lean_IR_Checker_checkFullApp___closed__1_once, _init_l_Lean_IR_Checker_checkFullApp___closed__1);
v___x_1005_ = lean_string_append(v___x_1003_, v___x_1004_);
v___x_1006_ = l_Nat_reprFast(v___x_996_);
v___x_1007_ = lean_string_append(v___x_1005_, v___x_1006_);
lean_dec_ref(v___x_1006_);
v___x_1008_ = lean_obj_once(&l_Lean_IR_Checker_checkFullApp___closed__2, &l_Lean_IR_Checker_checkFullApp___closed__2_once, _init_l_Lean_IR_Checker_checkFullApp___closed__2);
v___x_1009_ = lean_string_append(v___x_1007_, v___x_1008_);
v___x_1010_ = l_Nat_reprFast(v___x_998_);
v___x_1011_ = lean_string_append(v___x_1009_, v___x_1010_);
lean_dec_ref(v___x_1010_);
v___x_1012_ = lean_obj_once(&l_Lean_IR_Checker_checkFullApp___closed__3, &l_Lean_IR_Checker_checkFullApp___closed__3_once, _init_l_Lean_IR_Checker_checkFullApp___closed__3);
v___x_1013_ = lean_string_append(v___x_1011_, v___x_1012_);
v___x_1014_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1013_, v_a_989_, v_a_990_, v_a_991_, v_a_992_);
return v___x_1014_;
}
else
{
lean_object* v___x_1015_; 
lean_dec(v_c_987_);
v___x_1015_ = l_Lean_IR_Checker_checkArgs(v_ys_988_, v_a_989_, v_a_990_, v_a_991_, v_a_992_);
return v___x_1015_;
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_c_987_);
v_a_1016_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_994_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_994_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFullApp___boxed(lean_object* v_c_1024_, lean_object* v_ys_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_IR_Checker_checkFullApp(v_c_1024_, v_ys_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
lean_dec_ref(v_ys_1025_);
return v_res_1031_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkPartialApp___closed__0(void){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = lean_mk_string_unchecked("too many arguments to partial application '", 43, 43);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkPartialApp___closed__1(void){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_mk_string_unchecked("', num. args: ", 14, 14);
return v___x_1033_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkPartialApp___closed__2(void){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_mk_string_unchecked(", arity: ", 9, 9);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkPartialApp(lean_object* v_c_1035_, lean_object* v_ys_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v___x_1042_; 
lean_inc(v_c_1035_);
v___x_1042_ = l_Lean_IR_Checker_getDecl(v_c_1035_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = lean_array_get_size(v_ys_1036_);
v___x_1045_ = l_Lean_IR_Decl_params(v_a_1043_);
lean_dec(v_a_1043_);
v___x_1046_ = lean_array_get_size(v___x_1045_);
lean_dec_ref(v___x_1045_);
v___x_1047_ = lean_nat_dec_lt(v___x_1044_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; uint8_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1048_ = lean_obj_once(&l_Lean_IR_Checker_checkPartialApp___closed__0, &l_Lean_IR_Checker_checkPartialApp___closed__0_once, _init_l_Lean_IR_Checker_checkPartialApp___closed__0);
v___x_1049_ = 1;
v___x_1050_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_1035_, v___x_1049_);
v___x_1051_ = lean_string_append(v___x_1048_, v___x_1050_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = lean_obj_once(&l_Lean_IR_Checker_checkPartialApp___closed__1, &l_Lean_IR_Checker_checkPartialApp___closed__1_once, _init_l_Lean_IR_Checker_checkPartialApp___closed__1);
v___x_1053_ = lean_string_append(v___x_1051_, v___x_1052_);
v___x_1054_ = l_Nat_reprFast(v___x_1044_);
v___x_1055_ = lean_string_append(v___x_1053_, v___x_1054_);
lean_dec_ref(v___x_1054_);
v___x_1056_ = lean_obj_once(&l_Lean_IR_Checker_checkPartialApp___closed__2, &l_Lean_IR_Checker_checkPartialApp___closed__2_once, _init_l_Lean_IR_Checker_checkPartialApp___closed__2);
v___x_1057_ = lean_string_append(v___x_1055_, v___x_1056_);
v___x_1058_ = l_Nat_reprFast(v___x_1046_);
v___x_1059_ = lean_string_append(v___x_1057_, v___x_1058_);
lean_dec_ref(v___x_1058_);
v___x_1060_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1059_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
return v___x_1060_;
}
else
{
lean_object* v___x_1061_; 
lean_dec(v_c_1035_);
v___x_1061_ = l_Lean_IR_Checker_checkArgs(v_ys_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
return v___x_1061_;
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec(v_c_1035_);
v_a_1062_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1042_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1042_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkPartialApp___boxed(lean_object* v_c_1070_, lean_object* v_ys_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_IR_Checker_checkPartialApp(v_c_1070_, v_ys_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec_ref(v_ys_1071_);
return v_res_1077_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__0(void){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_mk_string_unchecked("constructor '", 13, 13);
return v___x_1078_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__1(void){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_mk_string_unchecked("' has too many scalar fields", 28, 28);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__2(void){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_mk_string_unchecked("' has too many fields", 21, 21);
return v___x_1080_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__3(void){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_mk_string_unchecked("tag for constructor '", 21, 21);
return v___x_1081_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__4(void){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = lean_mk_string_unchecked("' is too big, this is a limitation of the current runtime", 57, 57);
return v___x_1082_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__5(void){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_mk_string_unchecked("invalid proj index", 18, 18);
return v___x_1083_;
}
}
static lean_object* _init_l_Lean_IR_Checker_checkExpr___closed__6(void){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_mk_string_unchecked("unexpected IR type '", 20, 20);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkExpr(lean_object* v_ty_1085_, lean_object* v_e_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_){
_start:
{
switch(lean_obj_tag(v_e_1086_))
{
case 0:
{
lean_object* v_i_1092_; lean_object* v_ys_1093_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v_name_1104_; lean_object* v_cidx_1105_; lean_object* v_size_1106_; lean_object* v_usize_1107_; lean_object* v_ssize_1108_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; uint8_t v___y_1139_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v_i_1092_ = lean_ctor_get(v_e_1086_, 0);
lean_inc_ref(v_i_1092_);
v_ys_1093_ = lean_ctor_get(v_e_1086_, 1);
lean_inc_ref(v_ys_1093_);
lean_dec_ref(v_e_1086_);
v_name_1104_ = lean_ctor_get(v_i_1092_, 0);
v_cidx_1105_ = lean_ctor_get(v_i_1092_, 1);
v_size_1106_ = lean_ctor_get(v_i_1092_, 2);
v_usize_1107_ = lean_ctor_get(v_i_1092_, 3);
v_ssize_1108_ = lean_ctor_get(v_i_1092_, 4);
v___x_1146_ = l_Lean_IR_Checker_maxCtorTag;
v___x_1147_ = lean_nat_dec_lt(v___x_1146_, v_cidx_1105_);
if (v___x_1147_ == 0)
{
v___y_1139_ = v___x_1147_;
goto v___jp_1138_;
}
else
{
uint8_t v___x_1148_; 
v___x_1148_ = l_Lean_IR_CtorInfo_isRef(v_i_1092_);
v___y_1139_ = v___x_1148_;
goto v___jp_1138_;
}
v___jp_1094_:
{
uint8_t v___x_1099_; 
v___x_1099_ = l_Lean_IR_CtorInfo_isRef(v_i_1092_);
lean_dec_ref(v_i_1092_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec_ref(v_ys_1093_);
lean_dec(v_ty_1085_);
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v___x_1103_; 
lean_dec_ref(v___x_1102_);
v___x_1103_ = l_Lean_IR_Checker_checkArgs(v_ys_1093_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec_ref(v_ys_1093_);
return v___x_1103_;
}
else
{
lean_dec_ref(v_ys_1093_);
return v___x_1102_;
}
}
}
v___jp_1109_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1114_ = l_Lean_IR_Checker_maxCtorScalarsSize;
v___x_1115_ = l_Lean_IR_Checker_usizeSize;
v___x_1116_ = lean_nat_mul(v_usize_1107_, v___x_1115_);
v___x_1117_ = lean_nat_add(v_ssize_1108_, v___x_1116_);
lean_dec(v___x_1116_);
v___x_1118_ = lean_nat_dec_lt(v___x_1114_, v___x_1117_);
lean_dec(v___x_1117_);
if (v___x_1118_ == 0)
{
v___y_1095_ = v___y_1110_;
v___y_1096_ = v___y_1111_;
v___y_1097_ = v___y_1112_;
v___y_1098_ = v___y_1113_;
goto v___jp_1094_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_inc(v_name_1104_);
lean_dec_ref(v_ys_1093_);
lean_dec_ref(v_i_1092_);
lean_dec(v_ty_1085_);
v___x_1119_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__0, &l_Lean_IR_Checker_checkExpr___closed__0_once, _init_l_Lean_IR_Checker_checkExpr___closed__0);
v___x_1120_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1104_, v___x_1118_);
v___x_1121_ = lean_string_append(v___x_1119_, v___x_1120_);
lean_dec_ref(v___x_1120_);
v___x_1122_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__1, &l_Lean_IR_Checker_checkExpr___closed__1_once, _init_l_Lean_IR_Checker_checkExpr___closed__1);
v___x_1123_ = lean_string_append(v___x_1121_, v___x_1122_);
v___x_1124_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1123_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
return v___x_1124_;
}
}
v___jp_1125_:
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = l_Lean_IR_Checker_maxCtorFields;
v___x_1131_ = lean_nat_dec_lt(v___x_1130_, v_size_1106_);
if (v___x_1131_ == 0)
{
v___y_1110_ = v___y_1126_;
v___y_1111_ = v___y_1127_;
v___y_1112_ = v___y_1128_;
v___y_1113_ = v___y_1129_;
goto v___jp_1109_;
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_inc(v_name_1104_);
lean_dec_ref(v_ys_1093_);
lean_dec_ref(v_i_1092_);
lean_dec(v_ty_1085_);
v___x_1132_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__0, &l_Lean_IR_Checker_checkExpr___closed__0_once, _init_l_Lean_IR_Checker_checkExpr___closed__0);
v___x_1133_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1104_, v___x_1131_);
v___x_1134_ = lean_string_append(v___x_1132_, v___x_1133_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__2, &l_Lean_IR_Checker_checkExpr___closed__2_once, _init_l_Lean_IR_Checker_checkExpr___closed__2);
v___x_1136_ = lean_string_append(v___x_1134_, v___x_1135_);
v___x_1137_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1136_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
return v___x_1137_;
}
}
v___jp_1138_:
{
if (v___y_1139_ == 0)
{
v___y_1126_ = v_a_1087_;
v___y_1127_ = v_a_1088_;
v___y_1128_ = v_a_1089_;
v___y_1129_ = v_a_1090_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_inc(v_name_1104_);
lean_dec_ref(v_ys_1093_);
lean_dec_ref(v_i_1092_);
lean_dec(v_ty_1085_);
v___x_1140_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__3, &l_Lean_IR_Checker_checkExpr___closed__3_once, _init_l_Lean_IR_Checker_checkExpr___closed__3);
v___x_1141_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1104_, v___y_1139_);
v___x_1142_ = lean_string_append(v___x_1140_, v___x_1141_);
lean_dec_ref(v___x_1141_);
v___x_1143_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__4, &l_Lean_IR_Checker_checkExpr___closed__4_once, _init_l_Lean_IR_Checker_checkExpr___closed__4);
v___x_1144_ = lean_string_append(v___x_1142_, v___x_1143_);
v___x_1145_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1144_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1145_;
}
}
}
case 1:
{
lean_object* v_x_1149_; lean_object* v___x_1150_; 
v_x_1149_ = lean_ctor_get(v_e_1086_, 1);
lean_inc(v_x_1149_);
lean_dec_ref(v_e_1086_);
v___x_1150_ = l_Lean_IR_Checker_checkObjVar(v_x_1149_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v___x_1151_; 
lean_dec_ref(v___x_1150_);
v___x_1151_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1151_;
}
else
{
lean_dec(v_ty_1085_);
return v___x_1150_;
}
}
case 2:
{
lean_object* v_x_1152_; lean_object* v_ys_1153_; lean_object* v___x_1154_; 
v_x_1152_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_x_1152_);
v_ys_1153_ = lean_ctor_get(v_e_1086_, 2);
lean_inc_ref(v_ys_1153_);
lean_dec_ref(v_e_1086_);
v___x_1154_ = l_Lean_IR_Checker_checkObjVar(v_x_1152_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v___x_1155_; 
lean_dec_ref(v___x_1154_);
v___x_1155_ = l_Lean_IR_Checker_checkArgs(v_ys_1153_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec_ref(v_ys_1153_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v___x_1156_; 
lean_dec_ref(v___x_1155_);
v___x_1156_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1156_;
}
else
{
lean_dec(v_ty_1085_);
return v___x_1155_;
}
}
else
{
lean_dec_ref(v_ys_1153_);
lean_dec(v_ty_1085_);
return v___x_1154_;
}
}
case 3:
{
lean_object* v_i_1157_; lean_object* v_x_1158_; lean_object* v___x_1159_; 
v_i_1157_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_i_1157_);
v_x_1158_ = lean_ctor_get(v_e_1086_, 1);
lean_inc(v_x_1158_);
lean_dec_ref(v_e_1086_);
v___x_1159_ = l_Lean_IR_Checker_getType(v_x_1158_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1205_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1205_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1205_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
switch(lean_obj_tag(v_a_1160_))
{
case 7:
{
lean_object* v___x_1164_; 
lean_del_object(v___x_1162_);
lean_dec(v_i_1157_);
v___x_1164_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1164_;
}
case 8:
{
lean_object* v___x_1165_; 
lean_del_object(v___x_1162_);
lean_dec(v_i_1157_);
v___x_1165_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1165_;
}
case 10:
{
lean_object* v_types_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v_types_1166_ = lean_ctor_get(v_a_1160_, 1);
lean_inc_ref(v_types_1166_);
lean_dec_ref(v_a_1160_);
v___x_1167_ = lean_array_get_size(v_types_1166_);
v___x_1168_ = lean_nat_dec_lt(v_i_1157_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec_ref(v_types_1166_);
lean_del_object(v___x_1162_);
lean_dec(v_i_1157_);
lean_dec(v_ty_1085_);
v___x_1169_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__5, &l_Lean_IR_Checker_checkExpr___closed__5_once, _init_l_Lean_IR_Checker_checkExpr___closed__5);
v___x_1170_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1169_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1170_;
}
else
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = lean_array_fget(v_types_1166_, v_i_1157_);
lean_dec(v_i_1157_);
lean_dec_ref(v_types_1166_);
v___x_1172_ = l_Lean_IR_instBEqIRType_beq(v___x_1171_, v_ty_1085_);
lean_dec(v_ty_1085_);
lean_dec(v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
lean_del_object(v___x_1162_);
v___x_1173_ = lean_obj_once(&l_Lean_IR_Checker_checkEqTypes___closed__0, &l_Lean_IR_Checker_checkEqTypes___closed__0_once, _init_l_Lean_IR_Checker_checkEqTypes___closed__0);
v___x_1174_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1173_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1174_;
}
else
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_box(0);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1175_);
v___x_1177_ = v___x_1162_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
case 11:
{
lean_object* v_types_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v_types_1179_ = lean_ctor_get(v_a_1160_, 1);
lean_inc_ref(v_types_1179_);
lean_dec_ref(v_a_1160_);
v___x_1180_ = lean_array_get_size(v_types_1179_);
v___x_1181_ = lean_nat_dec_lt(v_i_1157_, v___x_1180_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
lean_dec_ref(v_types_1179_);
lean_del_object(v___x_1162_);
lean_dec(v_i_1157_);
lean_dec(v_ty_1085_);
v___x_1182_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__5, &l_Lean_IR_Checker_checkExpr___closed__5_once, _init_l_Lean_IR_Checker_checkExpr___closed__5);
v___x_1183_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1182_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1183_;
}
else
{
lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1184_ = lean_array_fget(v_types_1179_, v_i_1157_);
lean_dec(v_i_1157_);
lean_dec_ref(v_types_1179_);
v___x_1185_ = l_Lean_IR_instBEqIRType_beq(v___x_1184_, v_ty_1085_);
lean_dec(v_ty_1085_);
lean_dec(v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_del_object(v___x_1162_);
v___x_1186_ = lean_obj_once(&l_Lean_IR_Checker_checkEqTypes___closed__0, &l_Lean_IR_Checker_checkEqTypes___closed__0_once, _init_l_Lean_IR_Checker_checkEqTypes___closed__0);
v___x_1187_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1186_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1187_;
}
else
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1188_ = lean_box(0);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1188_);
v___x_1190_ = v___x_1162_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
case 12:
{
lean_object* v___x_1192_; lean_object* v___x_1194_; 
lean_dec(v_i_1157_);
lean_dec(v_ty_1085_);
v___x_1192_ = lean_box(0);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1192_);
v___x_1194_ = v___x_1162_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
default: 
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_del_object(v___x_1162_);
lean_dec(v_i_1157_);
lean_dec(v_ty_1085_);
v___x_1196_ = lean_obj_once(&l_Lean_IR_Checker_checkExpr___closed__6, &l_Lean_IR_Checker_checkExpr___closed__6_once, _init_l_Lean_IR_Checker_checkExpr___closed__6);
v___x_1197_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_1160_);
v___x_1198_ = l_Std_Format_defWidth;
v___x_1199_ = lean_unsigned_to_nat(0u);
v___x_1200_ = l_Std_Format_pretty(v___x_1197_, v___x_1198_, v___x_1199_, v___x_1199_);
v___x_1201_ = lean_string_append(v___x_1196_, v___x_1200_);
lean_dec_ref(v___x_1200_);
v___x_1202_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v___x_1203_ = lean_string_append(v___x_1201_, v___x_1202_);
v___x_1204_ = l_Lean_IR_Checker_throwCheckerError___redArg(v___x_1203_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1204_;
}
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec(v_i_1157_);
lean_dec(v_ty_1085_);
v_a_1206_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1159_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1159_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
case 4:
{
lean_object* v_x_1214_; lean_object* v___x_1215_; 
v_x_1214_ = lean_ctor_get(v_e_1086_, 1);
lean_inc(v_x_1214_);
lean_dec_ref(v_e_1086_);
v___x_1215_ = l_Lean_IR_Checker_checkObjVar(v_x_1214_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1234_; 
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v___x_1215_, 0);
lean_dec(v_unused_1235_);
v___x_1217_ = v___x_1215_;
v_isShared_1218_ = v_isSharedCheck_1234_;
goto v_resetjp_1216_;
}
else
{
lean_dec(v___x_1215_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1234_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = lean_box(5);
v___x_1220_ = l_Lean_IR_instBEqIRType_beq(v_ty_1085_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_msg_1228_; lean_object* v___x_1229_; 
lean_del_object(v___x_1217_);
v___x_1221_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_1222_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_1085_);
v___x_1223_ = l_Std_Format_defWidth;
v___x_1224_ = lean_unsigned_to_nat(0u);
v___x_1225_ = l_Std_Format_pretty(v___x_1222_, v___x_1223_, v___x_1224_, v___x_1224_);
v___x_1226_ = lean_string_append(v___x_1221_, v___x_1225_);
lean_dec_ref(v___x_1225_);
v___x_1227_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_1228_ = lean_string_append(v___x_1226_, v___x_1227_);
v___x_1229_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_1228_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1229_;
}
else
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
lean_dec(v_ty_1085_);
v___x_1230_ = lean_box(0);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1230_);
v___x_1232_ = v___x_1217_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
else
{
lean_dec(v_ty_1085_);
return v___x_1215_;
}
}
case 5:
{
lean_object* v_x_1236_; lean_object* v___x_1237_; 
v_x_1236_ = lean_ctor_get(v_e_1086_, 2);
lean_inc(v_x_1236_);
lean_dec_ref(v_e_1086_);
v___x_1237_ = l_Lean_IR_Checker_checkObjVar(v_x_1236_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v___x_1238_; 
lean_dec_ref(v___x_1237_);
v___x_1238_ = l_Lean_IR_Checker_checkScalarType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1238_;
}
else
{
lean_dec(v_ty_1085_);
return v___x_1237_;
}
}
case 6:
{
lean_object* v_c_1239_; lean_object* v_ys_1240_; lean_object* v___x_1241_; 
lean_dec(v_ty_1085_);
v_c_1239_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_c_1239_);
v_ys_1240_ = lean_ctor_get(v_e_1086_, 1);
lean_inc_ref(v_ys_1240_);
lean_dec_ref(v_e_1086_);
v___x_1241_ = l_Lean_IR_Checker_checkFullApp(v_c_1239_, v_ys_1240_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec_ref(v_ys_1240_);
return v___x_1241_;
}
case 7:
{
lean_object* v_c_1242_; lean_object* v_ys_1243_; lean_object* v___x_1244_; 
v_c_1242_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_c_1242_);
v_ys_1243_ = lean_ctor_get(v_e_1086_, 1);
lean_inc_ref(v_ys_1243_);
lean_dec_ref(v_e_1086_);
v___x_1244_ = l_Lean_IR_Checker_checkPartialApp(v_c_1242_, v_ys_1243_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec_ref(v_ys_1243_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v___x_1245_; 
lean_dec_ref(v___x_1244_);
v___x_1245_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1245_;
}
else
{
lean_dec(v_ty_1085_);
return v___x_1244_;
}
}
case 8:
{
lean_object* v_x_1246_; lean_object* v_ys_1247_; lean_object* v___x_1248_; 
v_x_1246_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_x_1246_);
v_ys_1247_ = lean_ctor_get(v_e_1086_, 1);
lean_inc_ref(v_ys_1247_);
lean_dec_ref(v_e_1086_);
v___x_1248_ = l_Lean_IR_Checker_checkObjVar(v_x_1246_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v___x_1249_; 
lean_dec_ref(v___x_1248_);
v___x_1249_ = l_Lean_IR_Checker_checkArgs(v_ys_1247_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec_ref(v_ys_1247_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v___x_1250_; 
lean_dec_ref(v___x_1249_);
v___x_1250_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1250_;
}
else
{
lean_dec(v_ty_1085_);
return v___x_1249_;
}
}
else
{
lean_dec_ref(v_ys_1247_);
lean_dec(v_ty_1085_);
return v___x_1248_;
}
}
case 9:
{
lean_object* v_ty_1251_; lean_object* v_x_1252_; lean_object* v___x_1253_; 
v_ty_1251_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_ty_1251_);
v_x_1252_ = lean_ctor_get(v_e_1086_, 1);
lean_inc(v_x_1252_);
lean_dec_ref(v_e_1086_);
v___x_1253_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v___x_1254_; 
lean_dec_ref(v___x_1253_);
lean_inc(v_x_1252_);
v___x_1254_ = l_Lean_IR_Checker_checkScalarVar(v_x_1252_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v___x_1255_; 
lean_dec_ref(v___x_1254_);
v___x_1255_ = l_Lean_IR_Checker_getType(v_x_1252_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1274_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1274_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1274_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
uint8_t v___x_1260_; 
v___x_1260_ = l_Lean_IR_instBEqIRType_beq(v_a_1256_, v_ty_1251_);
lean_dec(v_ty_1251_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_msg_1268_; lean_object* v___x_1269_; 
lean_del_object(v___x_1258_);
v___x_1261_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_1262_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_a_1256_);
v___x_1263_ = l_Std_Format_defWidth;
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = l_Std_Format_pretty(v___x_1262_, v___x_1263_, v___x_1264_, v___x_1264_);
v___x_1266_ = lean_string_append(v___x_1261_, v___x_1265_);
lean_dec_ref(v___x_1265_);
v___x_1267_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
v___x_1269_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_1268_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1269_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_dec(v_a_1256_);
v___x_1270_ = lean_box(0);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1270_);
v___x_1272_ = v___x_1258_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec(v_ty_1251_);
v_a_1275_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1255_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1255_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_dec(v_x_1252_);
lean_dec(v_ty_1251_);
return v___x_1254_;
}
}
else
{
lean_dec(v_x_1252_);
lean_dec(v_ty_1251_);
return v___x_1253_;
}
}
case 10:
{
lean_object* v_x_1283_; lean_object* v___x_1284_; 
v_x_1283_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_x_1283_);
lean_dec_ref(v_e_1086_);
v___x_1284_ = l_Lean_IR_Checker_checkScalarType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v___x_1285_; 
lean_dec_ref(v___x_1284_);
v___x_1285_ = l_Lean_IR_Checker_checkObjVar(v_x_1283_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1285_;
}
else
{
lean_dec(v_x_1283_);
return v___x_1284_;
}
}
case 11:
{
lean_object* v_v_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1295_; 
v_v_1286_ = lean_ctor_get(v_e_1086_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_e_1086_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1288_ = v_e_1086_;
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_v_1286_);
lean_dec(v_e_1086_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
if (lean_obj_tag(v_v_1286_) == 1)
{
lean_object* v___x_1290_; 
lean_dec_ref(v_v_1286_);
lean_del_object(v___x_1288_);
v___x_1290_ = l_Lean_IR_Checker_checkObjType(v_ty_1085_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1293_; 
lean_dec_ref(v_v_1286_);
lean_dec(v_ty_1085_);
v___x_1291_ = lean_box(0);
if (v_isShared_1289_ == 0)
{
lean_ctor_set_tag(v___x_1288_, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1291_);
v___x_1293_ = v___x_1288_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
default: 
{
lean_object* v_x_1296_; lean_object* v___x_1297_; 
v_x_1296_ = lean_ctor_get(v_e_1086_, 0);
lean_inc(v_x_1296_);
lean_dec_ref(v_e_1086_);
v___x_1297_ = l_Lean_IR_Checker_checkObjVar(v_x_1296_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1316_; 
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v___x_1297_, 0);
lean_dec(v_unused_1317_);
v___x_1299_ = v___x_1297_;
v_isShared_1300_ = v_isSharedCheck_1316_;
goto v_resetjp_1298_;
}
else
{
lean_dec(v___x_1297_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1316_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = lean_box(1);
v___x_1302_ = l_Lean_IR_instBEqIRType_beq(v_ty_1085_, v___x_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v_msg_1310_; lean_object* v___x_1311_; 
lean_del_object(v___x_1299_);
v___x_1303_ = lean_obj_once(&l_Lean_IR_Checker_checkType___closed__0, &l_Lean_IR_Checker_checkType___closed__0_once, _init_l_Lean_IR_Checker_checkType___closed__0);
v___x_1304_ = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(v_ty_1085_);
v___x_1305_ = l_Std_Format_defWidth;
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = l_Std_Format_pretty(v___x_1304_, v___x_1305_, v___x_1306_, v___x_1306_);
v___x_1308_ = lean_string_append(v___x_1303_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = lean_obj_once(&l_Lean_IR_Checker_checkVar___closed__2, &l_Lean_IR_Checker_checkVar___closed__2_once, _init_l_Lean_IR_Checker_checkVar___closed__2);
v_msg_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
v___x_1311_ = l_Lean_IR_Checker_throwCheckerError___redArg(v_msg_1310_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
return v___x_1311_;
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1314_; 
lean_dec(v_ty_1085_);
v___x_1312_ = lean_box(0);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1312_);
v___x_1314_ = v___x_1299_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_dec(v_ty_1085_);
return v___x_1297_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkExpr___boxed(lean_object* v_ty_1318_, lean_object* v_e_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_IR_Checker_checkExpr(v_ty_1318_, v_e_1319_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___lam__0(lean_object* v_ctx_1326_, lean_object* v_p_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_x_1333_; lean_object* v___x_1334_; 
v_x_1333_ = lean_ctor_get(v_p_1327_, 0);
lean_inc(v_x_1333_);
v___x_1334_ = l_Lean_IR_Checker_markIndex(v_x_1333_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1342_; 
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v___x_1334_, 0);
lean_dec(v_unused_1343_);
v___x_1336_ = v___x_1334_;
v_isShared_1337_ = v_isSharedCheck_1342_;
goto v_resetjp_1335_;
}
else
{
lean_dec(v___x_1334_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1342_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___x_1338_ = l_Lean_IR_LocalContext_addParam(v_ctx_1326_, v_p_1327_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1338_);
v___x_1340_ = v___x_1336_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_dec_ref(v_p_1327_);
lean_dec(v_ctx_1326_);
v_a_1344_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1334_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1334_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___lam__0___boxed(lean_object* v_ctx_1352_, lean_object* v_p_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_IR_Checker_withParams___lam__0(v_ctx_1352_, v_p_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1359_;
}
}
static lean_object* _init_l_Lean_IR_Checker_withParams___closed__0(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_instMonadEIO(lean_box(0));
return v___x_1360_;
}
}
static lean_object* _init_l_Lean_IR_Checker_withParams___closed__1(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_obj_once(&l_Lean_IR_Checker_withParams___closed__0, &l_Lean_IR_Checker_withParams___closed__0_once, _init_l_Lean_IR_Checker_withParams___closed__0);
v___x_1362_ = l_StateRefT_x27_instMonad___redArg(v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l_Lean_IR_Checker_withParams___closed__2(void){
_start:
{
lean_object* v___f_1363_; 
v___f_1363_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1363_;
}
}
static lean_object* _init_l_Lean_IR_Checker_withParams___closed__3(void){
_start:
{
lean_object* v___f_1364_; 
v___f_1364_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1364_;
}
}
static lean_object* _init_l_Lean_IR_Checker_withParams___closed__4(void){
_start:
{
lean_object* v___f_1365_; 
v___f_1365_ = lean_alloc_closure((void*)(l_Lean_IR_Checker_withParams___lam__0___boxed), 7, 0);
return v___f_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams(lean_object* v_ps_1366_, lean_object* v_k_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v___x_1373_; lean_object* v_toApplicative_1374_; lean_object* v_toFunctor_1375_; lean_object* v_toSeq_1376_; lean_object* v_toSeqLeft_1377_; lean_object* v_toSeqRight_1378_; lean_object* v___f_1379_; lean_object* v___f_1380_; lean_object* v___f_1381_; lean_object* v___f_1382_; lean_object* v___x_1383_; lean_object* v___f_1384_; lean_object* v___f_1385_; lean_object* v___f_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v_localCtx_1391_; lean_object* v_currentDecl_1392_; lean_object* v_decls_1393_; lean_object* v_a_1395_; lean_object* v___y_1399_; lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; 
v___x_1373_ = lean_obj_once(&l_Lean_IR_Checker_withParams___closed__1, &l_Lean_IR_Checker_withParams___closed__1_once, _init_l_Lean_IR_Checker_withParams___closed__1);
v_toApplicative_1374_ = lean_ctor_get(v___x_1373_, 0);
v_toFunctor_1375_ = lean_ctor_get(v_toApplicative_1374_, 0);
v_toSeq_1376_ = lean_ctor_get(v_toApplicative_1374_, 2);
v_toSeqLeft_1377_ = lean_ctor_get(v_toApplicative_1374_, 3);
v_toSeqRight_1378_ = lean_ctor_get(v_toApplicative_1374_, 4);
v___f_1379_ = lean_obj_once(&l_Lean_IR_Checker_withParams___closed__2, &l_Lean_IR_Checker_withParams___closed__2_once, _init_l_Lean_IR_Checker_withParams___closed__2);
v___f_1380_ = lean_obj_once(&l_Lean_IR_Checker_withParams___closed__3, &l_Lean_IR_Checker_withParams___closed__3_once, _init_l_Lean_IR_Checker_withParams___closed__3);
lean_inc_ref_n(v_toFunctor_1375_, 2);
v___f_1381_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1381_, 0, v_toFunctor_1375_);
v___f_1382_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1382_, 0, v_toFunctor_1375_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___f_1381_);
lean_ctor_set(v___x_1383_, 1, v___f_1382_);
lean_inc(v_toSeqRight_1378_);
v___f_1384_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1384_, 0, v_toSeqRight_1378_);
lean_inc(v_toSeqLeft_1377_);
v___f_1385_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1385_, 0, v_toSeqLeft_1377_);
lean_inc(v_toSeq_1376_);
v___f_1386_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1386_, 0, v_toSeq_1376_);
v___x_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1383_);
lean_ctor_set(v___x_1387_, 1, v___f_1379_);
lean_ctor_set(v___x_1387_, 2, v___f_1386_);
lean_ctor_set(v___x_1387_, 3, v___f_1385_);
lean_ctor_set(v___x_1387_, 4, v___f_1384_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
lean_ctor_set(v___x_1388_, 1, v___f_1380_);
v___x_1389_ = l_StateRefT_x27_instMonad___redArg(v___x_1388_);
v___x_1390_ = l_ReaderT_instMonad___redArg(v___x_1389_);
v_localCtx_1391_ = lean_ctor_get(v_a_1368_, 0);
v_currentDecl_1392_ = lean_ctor_get(v_a_1368_, 1);
v_decls_1393_ = lean_ctor_get(v_a_1368_, 2);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_array_get_size(v_ps_1366_);
v___x_1411_ = lean_nat_dec_lt(v___x_1409_, v___x_1410_);
if (v___x_1411_ == 0)
{
lean_dec_ref(v___x_1390_);
lean_dec_ref(v_ps_1366_);
lean_inc(v_localCtx_1391_);
v_a_1395_ = v_localCtx_1391_;
goto v___jp_1394_;
}
else
{
lean_object* v___f_1412_; uint8_t v___x_1413_; 
v___f_1412_ = lean_obj_once(&l_Lean_IR_Checker_withParams___closed__4, &l_Lean_IR_Checker_withParams___closed__4_once, _init_l_Lean_IR_Checker_withParams___closed__4);
v___x_1413_ = lean_nat_dec_le(v___x_1410_, v___x_1410_);
if (v___x_1413_ == 0)
{
if (v___x_1411_ == 0)
{
lean_dec_ref(v___x_1390_);
lean_dec_ref(v_ps_1366_);
lean_inc(v_localCtx_1391_);
v_a_1395_ = v_localCtx_1391_;
goto v___jp_1394_;
}
else
{
size_t v___x_1414_; size_t v___x_1415_; lean_object* v___x_1045__overap_1416_; lean_object* v___x_1417_; 
v___x_1414_ = ((size_t)0ULL);
v___x_1415_ = lean_usize_of_nat(v___x_1410_);
lean_inc(v_localCtx_1391_);
v___x_1045__overap_1416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1390_, v___f_1412_, v_ps_1366_, v___x_1414_, v___x_1415_, v_localCtx_1391_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
v___x_1417_ = lean_apply_5(v___x_1045__overap_1416_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, lean_box(0));
v___y_1399_ = v___x_1417_;
goto v___jp_1398_;
}
}
else
{
size_t v___x_1418_; size_t v___x_1419_; lean_object* v___x_1050__overap_1420_; lean_object* v___x_1421_; 
v___x_1418_ = ((size_t)0ULL);
v___x_1419_ = lean_usize_of_nat(v___x_1410_);
lean_inc(v_localCtx_1391_);
v___x_1050__overap_1420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1390_, v___f_1412_, v_ps_1366_, v___x_1418_, v___x_1419_, v_localCtx_1391_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
v___x_1421_ = lean_apply_5(v___x_1050__overap_1420_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, lean_box(0));
v___y_1399_ = v___x_1421_;
goto v___jp_1398_;
}
}
v___jp_1394_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_inc_ref(v_decls_1393_);
lean_inc_ref(v_currentDecl_1392_);
v___x_1396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1396_, 0, v_a_1395_);
lean_ctor_set(v___x_1396_, 1, v_currentDecl_1392_);
lean_ctor_set(v___x_1396_, 2, v_decls_1393_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
v___x_1397_ = lean_apply_5(v_k_1367_, v___x_1396_, v_a_1369_, v_a_1370_, v_a_1371_, lean_box(0));
return v___x_1397_;
}
v___jp_1398_:
{
if (lean_obj_tag(v___y_1399_) == 0)
{
lean_object* v_a_1400_; 
v_a_1400_ = lean_ctor_get(v___y_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref(v___y_1399_);
v_a_1395_ = v_a_1400_;
goto v___jp_1394_;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v_k_1367_);
v_a_1401_ = lean_ctor_get(v___y_1399_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___y_1399_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___y_1399_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___y_1399_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_withParams___boxed(lean_object* v_ps_1422_, lean_object* v_k_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_IR_Checker_withParams(v_ps_1422_, v_k_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
lean_dec(v_a_1425_);
lean_dec_ref(v_a_1424_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(lean_object* v_as_1430_, size_t v_i_1431_, size_t v_stop_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
uint8_t v___x_1439_; 
v___x_1439_ = lean_usize_dec_eq(v_i_1431_, v_stop_1432_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; lean_object* v_x_1441_; lean_object* v___x_1442_; 
v___x_1440_ = lean_array_uget_borrowed(v_as_1430_, v_i_1431_);
v_x_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_x_1441_);
v___x_1442_ = l_Lean_IR_Checker_markIndex(v_x_1441_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v___x_1443_; size_t v___x_1444_; size_t v___x_1445_; 
lean_dec_ref(v___x_1442_);
lean_inc(v___x_1440_);
v___x_1443_ = l_Lean_IR_LocalContext_addParam(v_b_1433_, v___x_1440_);
v___x_1444_ = ((size_t)1ULL);
v___x_1445_ = lean_usize_add(v_i_1431_, v___x_1444_);
v_i_1431_ = v___x_1445_;
v_b_1433_ = v___x_1443_;
goto _start;
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec(v_b_1433_);
v_a_1447_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1442_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1442_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1455_, 0, v_b_1433_);
return v___x_1455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0___boxed(lean_object* v_as_1456_, lean_object* v_i_1457_, lean_object* v_stop_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
size_t v_i_boxed_1465_; size_t v_stop_boxed_1466_; lean_object* v_res_1467_; 
v_i_boxed_1465_ = lean_unbox_usize(v_i_1457_);
lean_dec(v_i_1457_);
v_stop_boxed_1466_ = lean_unbox_usize(v_stop_1458_);
lean_dec(v_stop_1458_);
v_res_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_as_1456_, v_i_boxed_1465_, v_stop_boxed_1466_, v_b_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec_ref(v_as_1456_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFnBody(lean_object* v_fnBody_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_x_1475_; lean_object* v_b_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; 
switch(lean_obj_tag(v_fnBody_1468_))
{
case 0:
{
lean_object* v_x_1483_; lean_object* v_ty_1484_; lean_object* v_e_1485_; lean_object* v_b_1486_; lean_object* v___x_1487_; 
v_x_1483_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1483_);
v_ty_1484_ = lean_ctor_get(v_fnBody_1468_, 1);
lean_inc_n(v_ty_1484_, 2);
v_e_1485_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc_ref_n(v_e_1485_, 2);
v_b_1486_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc(v_b_1486_);
lean_dec_ref(v_fnBody_1468_);
v___x_1487_ = l_Lean_IR_Checker_checkExpr(v_ty_1484_, v_e_1485_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v___x_1488_; 
lean_dec_ref(v___x_1487_);
lean_inc(v_x_1483_);
v___x_1488_ = l_Lean_IR_Checker_markIndex(v_x_1483_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_localCtx_1489_; lean_object* v_currentDecl_1490_; lean_object* v_decls_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec_ref(v___x_1488_);
v_localCtx_1489_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_localCtx_1489_);
v_currentDecl_1490_ = lean_ctor_get(v_a_1469_, 1);
lean_inc_ref(v_currentDecl_1490_);
v_decls_1491_ = lean_ctor_get(v_a_1469_, 2);
lean_inc_ref(v_decls_1491_);
lean_dec_ref(v_a_1469_);
v___x_1492_ = l_Lean_IR_LocalContext_addLocal(v_localCtx_1489_, v_x_1483_, v_ty_1484_, v_e_1485_);
v___x_1493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
lean_ctor_set(v___x_1493_, 1, v_currentDecl_1490_);
lean_ctor_set(v___x_1493_, 2, v_decls_1491_);
v_fnBody_1468_ = v_b_1486_;
v_a_1469_ = v___x_1493_;
goto _start;
}
else
{
lean_dec(v_b_1486_);
lean_dec_ref(v_e_1485_);
lean_dec(v_ty_1484_);
lean_dec(v_x_1483_);
lean_dec_ref(v_a_1469_);
return v___x_1488_;
}
}
else
{
lean_dec(v_b_1486_);
lean_dec_ref(v_e_1485_);
lean_dec(v_ty_1484_);
lean_dec(v_x_1483_);
lean_dec_ref(v_a_1469_);
return v___x_1487_;
}
}
case 1:
{
lean_object* v_j_1495_; lean_object* v_xs_1496_; lean_object* v_v_1497_; lean_object* v_b_1498_; lean_object* v___x_1499_; 
v_j_1495_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc_n(v_j_1495_, 2);
v_xs_1496_ = lean_ctor_get(v_fnBody_1468_, 1);
lean_inc_ref(v_xs_1496_);
v_v_1497_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc(v_v_1497_);
v_b_1498_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc(v_b_1498_);
lean_dec_ref(v_fnBody_1468_);
v___x_1499_ = l_Lean_IR_Checker_markIndex(v_j_1495_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_localCtx_1500_; lean_object* v_currentDecl_1501_; lean_object* v_decls_1502_; lean_object* v_a_1504_; lean_object* v___y_1511_; lean_object* v___x_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
lean_dec_ref(v___x_1499_);
v_localCtx_1500_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_localCtx_1500_);
v_currentDecl_1501_ = lean_ctor_get(v_a_1469_, 1);
lean_inc_ref(v_currentDecl_1501_);
v_decls_1502_ = lean_ctor_get(v_a_1469_, 2);
lean_inc_ref(v_decls_1502_);
v___x_1521_ = lean_unsigned_to_nat(0u);
v___x_1522_ = lean_array_get_size(v_xs_1496_);
v___x_1523_ = lean_nat_dec_lt(v___x_1521_, v___x_1522_);
if (v___x_1523_ == 0)
{
lean_dec_ref(v_a_1469_);
lean_inc(v_localCtx_1500_);
v_a_1504_ = v_localCtx_1500_;
goto v___jp_1503_;
}
else
{
uint8_t v___x_1524_; 
v___x_1524_ = lean_nat_dec_le(v___x_1522_, v___x_1522_);
if (v___x_1524_ == 0)
{
if (v___x_1523_ == 0)
{
lean_dec_ref(v_a_1469_);
lean_inc(v_localCtx_1500_);
v_a_1504_ = v_localCtx_1500_;
goto v___jp_1503_;
}
else
{
size_t v___x_1525_; size_t v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = ((size_t)0ULL);
v___x_1526_ = lean_usize_of_nat(v___x_1522_);
lean_inc(v_localCtx_1500_);
v___x_1527_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1496_, v___x_1525_, v___x_1526_, v_localCtx_1500_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
v___y_1511_ = v___x_1527_;
goto v___jp_1510_;
}
}
else
{
size_t v___x_1528_; size_t v___x_1529_; lean_object* v___x_1530_; 
v___x_1528_ = ((size_t)0ULL);
v___x_1529_ = lean_usize_of_nat(v___x_1522_);
lean_inc(v_localCtx_1500_);
v___x_1530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1496_, v___x_1528_, v___x_1529_, v_localCtx_1500_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
v___y_1511_ = v___x_1530_;
goto v___jp_1510_;
}
}
v___jp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_inc_ref(v_decls_1502_);
lean_inc_ref(v_currentDecl_1501_);
v___x_1505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1505_, 0, v_a_1504_);
lean_ctor_set(v___x_1505_, 1, v_currentDecl_1501_);
lean_ctor_set(v___x_1505_, 2, v_decls_1502_);
lean_inc(v_v_1497_);
v___x_1506_ = l_Lean_IR_Checker_checkFnBody(v_v_1497_, v___x_1505_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec_ref(v___x_1506_);
v___x_1507_ = l_Lean_IR_LocalContext_addJP(v_localCtx_1500_, v_j_1495_, v_xs_1496_, v_v_1497_);
v___x_1508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v_currentDecl_1501_);
lean_ctor_set(v___x_1508_, 2, v_decls_1502_);
v_fnBody_1468_ = v_b_1498_;
v_a_1469_ = v___x_1508_;
goto _start;
}
else
{
lean_dec_ref(v_decls_1502_);
lean_dec_ref(v_currentDecl_1501_);
lean_dec(v_localCtx_1500_);
lean_dec(v_b_1498_);
lean_dec(v_v_1497_);
lean_dec_ref(v_xs_1496_);
lean_dec(v_j_1495_);
return v___x_1506_;
}
}
v___jp_1510_:
{
if (lean_obj_tag(v___y_1511_) == 0)
{
lean_object* v_a_1512_; 
v_a_1512_ = lean_ctor_get(v___y_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref(v___y_1511_);
v_a_1504_ = v_a_1512_;
goto v___jp_1503_;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v_decls_1502_);
lean_dec_ref(v_currentDecl_1501_);
lean_dec(v_localCtx_1500_);
lean_dec(v_b_1498_);
lean_dec(v_v_1497_);
lean_dec_ref(v_xs_1496_);
lean_dec(v_j_1495_);
v_a_1513_ = lean_ctor_get(v___y_1511_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___y_1511_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___y_1511_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___y_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
else
{
lean_dec(v_b_1498_);
lean_dec(v_v_1497_);
lean_dec_ref(v_xs_1496_);
lean_dec(v_j_1495_);
lean_dec_ref(v_a_1469_);
return v___x_1499_;
}
}
case 2:
{
lean_object* v_x_1531_; lean_object* v_y_1532_; lean_object* v_b_1533_; lean_object* v___x_1534_; 
v_x_1531_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1531_);
v_y_1532_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc(v_y_1532_);
v_b_1533_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc(v_b_1533_);
lean_dec_ref(v_fnBody_1468_);
v___x_1534_ = l_Lean_IR_Checker_checkVar(v_x_1531_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v___x_1535_; 
lean_dec_ref(v___x_1534_);
v___x_1535_ = l_Lean_IR_Checker_checkArg(v_y_1532_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_dec_ref(v___x_1535_);
v_fnBody_1468_ = v_b_1533_;
goto _start;
}
else
{
lean_dec(v_b_1533_);
lean_dec_ref(v_a_1469_);
return v___x_1535_;
}
}
else
{
lean_dec(v_b_1533_);
lean_dec(v_y_1532_);
lean_dec_ref(v_a_1469_);
return v___x_1534_;
}
}
case 3:
{
lean_object* v_x_1537_; lean_object* v_b_1538_; lean_object* v___x_1539_; 
v_x_1537_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1537_);
v_b_1538_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc(v_b_1538_);
lean_dec_ref(v_fnBody_1468_);
v___x_1539_ = l_Lean_IR_Checker_checkVar(v_x_1537_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_dec_ref(v___x_1539_);
v_fnBody_1468_ = v_b_1538_;
goto _start;
}
else
{
lean_dec(v_b_1538_);
lean_dec_ref(v_a_1469_);
return v___x_1539_;
}
}
case 4:
{
lean_object* v_x_1541_; lean_object* v_y_1542_; lean_object* v_b_1543_; lean_object* v___x_1544_; 
v_x_1541_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1541_);
v_y_1542_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc(v_y_1542_);
v_b_1543_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc(v_b_1543_);
lean_dec_ref(v_fnBody_1468_);
v___x_1544_ = l_Lean_IR_Checker_checkVar(v_x_1541_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v___x_1545_; 
lean_dec_ref(v___x_1544_);
v___x_1545_ = l_Lean_IR_Checker_checkVar(v_y_1542_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_dec_ref(v___x_1545_);
v_fnBody_1468_ = v_b_1543_;
goto _start;
}
else
{
lean_dec(v_b_1543_);
lean_dec_ref(v_a_1469_);
return v___x_1545_;
}
}
else
{
lean_dec(v_b_1543_);
lean_dec(v_y_1542_);
lean_dec_ref(v_a_1469_);
return v___x_1544_;
}
}
case 5:
{
lean_object* v_x_1547_; lean_object* v_y_1548_; lean_object* v_b_1549_; lean_object* v___x_1550_; 
v_x_1547_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1547_);
v_y_1548_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc(v_y_1548_);
v_b_1549_ = lean_ctor_get(v_fnBody_1468_, 5);
lean_inc(v_b_1549_);
lean_dec_ref(v_fnBody_1468_);
v___x_1550_ = l_Lean_IR_Checker_checkVar(v_x_1547_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; 
lean_dec_ref(v___x_1550_);
v___x_1551_ = l_Lean_IR_Checker_checkVar(v_y_1548_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_dec_ref(v___x_1551_);
v_fnBody_1468_ = v_b_1549_;
goto _start;
}
else
{
lean_dec(v_b_1549_);
lean_dec_ref(v_a_1469_);
return v___x_1551_;
}
}
else
{
lean_dec(v_b_1549_);
lean_dec(v_y_1548_);
lean_dec_ref(v_a_1469_);
return v___x_1550_;
}
}
case 8:
{
lean_object* v_x_1553_; lean_object* v_b_1554_; lean_object* v___x_1555_; 
v_x_1553_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1553_);
v_b_1554_ = lean_ctor_get(v_fnBody_1468_, 1);
lean_inc(v_b_1554_);
lean_dec_ref(v_fnBody_1468_);
v___x_1555_ = l_Lean_IR_Checker_checkVar(v_x_1553_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_dec_ref(v___x_1555_);
v_fnBody_1468_ = v_b_1554_;
goto _start;
}
else
{
lean_dec(v_b_1554_);
lean_dec_ref(v_a_1469_);
return v___x_1555_;
}
}
case 9:
{
lean_object* v_x_1557_; lean_object* v_cs_1558_; lean_object* v___x_1559_; 
v_x_1557_ = lean_ctor_get(v_fnBody_1468_, 1);
lean_inc(v_x_1557_);
v_cs_1558_ = lean_ctor_get(v_fnBody_1468_, 3);
lean_inc_ref(v_cs_1558_);
lean_dec_ref(v_fnBody_1468_);
v___x_1559_ = l_Lean_IR_Checker_checkVar(v_x_1557_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1580_; 
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; 
v_unused_1581_ = lean_ctor_get(v___x_1559_, 0);
lean_dec(v_unused_1581_);
v___x_1561_ = v___x_1559_;
v_isShared_1562_ = v_isSharedCheck_1580_;
goto v_resetjp_1560_;
}
else
{
lean_dec(v___x_1559_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1580_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; uint8_t v___x_1566_; 
v___x_1563_ = lean_unsigned_to_nat(0u);
v___x_1564_ = lean_array_get_size(v_cs_1558_);
v___x_1565_ = lean_box(0);
v___x_1566_ = lean_nat_dec_lt(v___x_1563_, v___x_1564_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1568_; 
lean_dec_ref(v_cs_1558_);
lean_dec_ref(v_a_1469_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1565_);
v___x_1568_ = v___x_1561_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1565_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
else
{
uint8_t v___x_1570_; 
v___x_1570_ = lean_nat_dec_le(v___x_1564_, v___x_1564_);
if (v___x_1570_ == 0)
{
if (v___x_1566_ == 0)
{
lean_object* v___x_1572_; 
lean_dec_ref(v_cs_1558_);
lean_dec_ref(v_a_1469_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1565_);
v___x_1572_ = v___x_1561_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1565_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
else
{
size_t v___x_1574_; size_t v___x_1575_; lean_object* v___x_1576_; 
lean_del_object(v___x_1561_);
v___x_1574_ = ((size_t)0ULL);
v___x_1575_ = lean_usize_of_nat(v___x_1564_);
v___x_1576_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1(v_cs_1558_, v___x_1574_, v___x_1575_, v___x_1565_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
lean_dec_ref(v_cs_1558_);
return v___x_1576_;
}
}
else
{
size_t v___x_1577_; size_t v___x_1578_; lean_object* v___x_1579_; 
lean_del_object(v___x_1561_);
v___x_1577_ = ((size_t)0ULL);
v___x_1578_ = lean_usize_of_nat(v___x_1564_);
v___x_1579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1(v_cs_1558_, v___x_1577_, v___x_1578_, v___x_1565_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
lean_dec_ref(v_cs_1558_);
return v___x_1579_;
}
}
}
}
else
{
lean_dec_ref(v_cs_1558_);
lean_dec_ref(v_a_1469_);
return v___x_1559_;
}
}
case 10:
{
lean_object* v_x_1582_; lean_object* v___x_1583_; 
v_x_1582_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1582_);
lean_dec_ref(v_fnBody_1468_);
v___x_1583_ = l_Lean_IR_Checker_checkArg(v_x_1582_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
return v___x_1583_;
}
case 11:
{
lean_object* v_j_1584_; lean_object* v_ys_1585_; lean_object* v___x_1586_; 
v_j_1584_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_j_1584_);
v_ys_1585_ = lean_ctor_get(v_fnBody_1468_, 1);
lean_inc_ref(v_ys_1585_);
lean_dec_ref(v_fnBody_1468_);
v___x_1586_ = l_Lean_IR_Checker_checkJP(v_j_1584_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v___x_1587_; 
lean_dec_ref(v___x_1586_);
v___x_1587_ = l_Lean_IR_Checker_checkArgs(v_ys_1585_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec_ref(v_a_1469_);
lean_dec_ref(v_ys_1585_);
return v___x_1587_;
}
else
{
lean_dec_ref(v_ys_1585_);
lean_dec_ref(v_a_1469_);
return v___x_1586_;
}
}
case 12:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_dec_ref(v_a_1469_);
v___x_1588_ = lean_box(0);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
return v___x_1589_;
}
default: 
{
lean_object* v_x_1590_; lean_object* v_b_1591_; 
v_x_1590_ = lean_ctor_get(v_fnBody_1468_, 0);
lean_inc(v_x_1590_);
v_b_1591_ = lean_ctor_get(v_fnBody_1468_, 2);
lean_inc(v_b_1591_);
lean_dec(v_fnBody_1468_);
v_x_1475_ = v_x_1590_;
v_b_1476_ = v_b_1591_;
v___y_1477_ = v_a_1469_;
v___y_1478_ = v_a_1470_;
v___y_1479_ = v_a_1471_;
v___y_1480_ = v_a_1472_;
goto v___jp_1474_;
}
}
v___jp_1474_:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lean_IR_Checker_checkVar(v_x_1475_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_dec_ref(v___x_1481_);
v_fnBody_1468_ = v_b_1476_;
v_a_1469_ = v___y_1477_;
v_a_1470_ = v___y_1478_;
v_a_1471_ = v___y_1479_;
v_a_1472_ = v___y_1480_;
goto _start;
}
else
{
lean_dec_ref(v___y_1477_);
lean_dec(v_b_1476_);
return v___x_1481_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1(lean_object* v_as_1592_, size_t v_i_1593_, size_t v_stop_1594_, lean_object* v_b_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
uint8_t v___x_1601_; 
v___x_1601_ = lean_usize_dec_eq(v_i_1593_, v_stop_1594_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_array_uget_borrowed(v_as_1592_, v_i_1593_);
v___x_1603_ = l_Lean_IR_Alt_body(v___x_1602_);
lean_inc_ref(v___y_1596_);
v___x_1604_ = l_Lean_IR_Checker_checkFnBody(v___x_1603_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; size_t v___x_1606_; size_t v___x_1607_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref(v___x_1604_);
v___x_1606_ = ((size_t)1ULL);
v___x_1607_ = lean_usize_add(v_i_1593_, v___x_1606_);
v_i_1593_ = v___x_1607_;
v_b_1595_ = v_a_1605_;
goto _start;
}
else
{
return v___x_1604_;
}
}
else
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_b_1595_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1___boxed(lean_object* v_as_1610_, lean_object* v_i_1611_, lean_object* v_stop_1612_, lean_object* v_b_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
size_t v_i_boxed_1619_; size_t v_stop_boxed_1620_; lean_object* v_res_1621_; 
v_i_boxed_1619_ = lean_unbox_usize(v_i_1611_);
lean_dec(v_i_1611_);
v_stop_boxed_1620_ = lean_unbox_usize(v_stop_1612_);
lean_dec(v_stop_1612_);
v_res_1621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__1(v_as_1610_, v_i_boxed_1619_, v_stop_boxed_1620_, v_b_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec_ref(v_as_1610_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkFnBody___boxed(lean_object* v_fnBody_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lean_IR_Checker_checkFnBody(v_fnBody_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_);
lean_dec(v_a_1626_);
lean_dec_ref(v_a_1625_);
lean_dec(v_a_1624_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkDecl(lean_object* v_x_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_){
_start:
{
if (lean_obj_tag(v_x_1629_) == 0)
{
lean_object* v_xs_1635_; lean_object* v_body_1636_; lean_object* v_localCtx_1637_; lean_object* v_currentDecl_1638_; lean_object* v_decls_1639_; lean_object* v_a_1641_; lean_object* v___y_1645_; lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v_xs_1635_ = lean_ctor_get(v_x_1629_, 1);
lean_inc_ref(v_xs_1635_);
v_body_1636_ = lean_ctor_get(v_x_1629_, 3);
lean_inc(v_body_1636_);
lean_dec_ref(v_x_1629_);
v_localCtx_1637_ = lean_ctor_get(v_a_1630_, 0);
v_currentDecl_1638_ = lean_ctor_get(v_a_1630_, 1);
v_decls_1639_ = lean_ctor_get(v_a_1630_, 2);
v___x_1655_ = lean_unsigned_to_nat(0u);
v___x_1656_ = lean_array_get_size(v_xs_1635_);
v___x_1657_ = lean_nat_dec_lt(v___x_1655_, v___x_1656_);
if (v___x_1657_ == 0)
{
lean_dec_ref(v_xs_1635_);
lean_inc(v_localCtx_1637_);
v_a_1641_ = v_localCtx_1637_;
goto v___jp_1640_;
}
else
{
uint8_t v___x_1658_; 
v___x_1658_ = lean_nat_dec_le(v___x_1656_, v___x_1656_);
if (v___x_1658_ == 0)
{
if (v___x_1657_ == 0)
{
lean_dec_ref(v_xs_1635_);
lean_inc(v_localCtx_1637_);
v_a_1641_ = v_localCtx_1637_;
goto v___jp_1640_;
}
else
{
size_t v___x_1659_; size_t v___x_1660_; lean_object* v___x_1661_; 
v___x_1659_ = ((size_t)0ULL);
v___x_1660_ = lean_usize_of_nat(v___x_1656_);
lean_inc(v_localCtx_1637_);
v___x_1661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1635_, v___x_1659_, v___x_1660_, v_localCtx_1637_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec_ref(v_xs_1635_);
v___y_1645_ = v___x_1661_;
goto v___jp_1644_;
}
}
else
{
size_t v___x_1662_; size_t v___x_1663_; lean_object* v___x_1664_; 
v___x_1662_ = ((size_t)0ULL);
v___x_1663_ = lean_usize_of_nat(v___x_1656_);
lean_inc(v_localCtx_1637_);
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1635_, v___x_1662_, v___x_1663_, v_localCtx_1637_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec_ref(v_xs_1635_);
v___y_1645_ = v___x_1664_;
goto v___jp_1644_;
}
}
v___jp_1640_:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_inc_ref(v_decls_1639_);
lean_inc_ref(v_currentDecl_1638_);
v___x_1642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1642_, 0, v_a_1641_);
lean_ctor_set(v___x_1642_, 1, v_currentDecl_1638_);
lean_ctor_set(v___x_1642_, 2, v_decls_1639_);
v___x_1643_ = l_Lean_IR_Checker_checkFnBody(v_body_1636_, v___x_1642_, v_a_1631_, v_a_1632_, v_a_1633_);
return v___x_1643_;
}
v___jp_1644_:
{
if (lean_obj_tag(v___y_1645_) == 0)
{
lean_object* v_a_1646_; 
v_a_1646_ = lean_ctor_get(v___y_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref(v___y_1645_);
v_a_1641_ = v_a_1646_;
goto v___jp_1640_;
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec(v_body_1636_);
v_a_1647_ = lean_ctor_get(v___y_1645_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___y_1645_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___y_1645_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___y_1645_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
else
{
lean_object* v_xs_1665_; lean_object* v___x_1666_; lean_object* v___y_1668_; lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
v_xs_1665_ = lean_ctor_get(v_x_1629_, 1);
lean_inc_ref(v_xs_1665_);
lean_dec_ref(v_x_1629_);
v___x_1666_ = lean_box(0);
v___x_1685_ = lean_unsigned_to_nat(0u);
v___x_1686_ = lean_array_get_size(v_xs_1665_);
v___x_1687_ = lean_nat_dec_lt(v___x_1685_, v___x_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; 
lean_dec_ref(v_xs_1665_);
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1666_);
return v___x_1688_;
}
else
{
lean_object* v_localCtx_1689_; uint8_t v___x_1690_; 
v_localCtx_1689_ = lean_ctor_get(v_a_1630_, 0);
v___x_1690_ = lean_nat_dec_le(v___x_1686_, v___x_1686_);
if (v___x_1690_ == 0)
{
if (v___x_1687_ == 0)
{
lean_object* v___x_1691_; 
lean_dec_ref(v_xs_1665_);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1666_);
return v___x_1691_;
}
else
{
size_t v___x_1692_; size_t v___x_1693_; lean_object* v___x_1694_; 
v___x_1692_ = ((size_t)0ULL);
v___x_1693_ = lean_usize_of_nat(v___x_1686_);
lean_inc(v_localCtx_1689_);
v___x_1694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1665_, v___x_1692_, v___x_1693_, v_localCtx_1689_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec_ref(v_xs_1665_);
v___y_1668_ = v___x_1694_;
goto v___jp_1667_;
}
}
else
{
size_t v___x_1695_; size_t v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = ((size_t)0ULL);
v___x_1696_ = lean_usize_of_nat(v___x_1686_);
lean_inc(v_localCtx_1689_);
v___x_1697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Checker_checkFnBody_spec__0(v_xs_1665_, v___x_1695_, v___x_1696_, v_localCtx_1689_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec_ref(v_xs_1665_);
v___y_1668_ = v___x_1697_;
goto v___jp_1667_;
}
}
v___jp_1667_:
{
if (lean_obj_tag(v___y_1668_) == 0)
{
lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_isSharedCheck_1675_ = !lean_is_exclusive(v___y_1668_);
if (v_isSharedCheck_1675_ == 0)
{
lean_object* v_unused_1676_; 
v_unused_1676_ = lean_ctor_get(v___y_1668_, 0);
lean_dec(v_unused_1676_);
v___x_1670_ = v___y_1668_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_dec(v___y_1668_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 0, v___x_1666_);
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1666_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_a_1677_ = lean_ctor_get(v___y_1668_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___y_1668_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___y_1668_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___y_1668_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Checker_checkDecl___boxed(lean_object* v_x_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Lean_IR_Checker_checkDecl(v_x_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_);
lean_dec(v_a_1702_);
lean_dec_ref(v_a_1701_);
lean_dec(v_a_1700_);
lean_dec_ref(v_a_1699_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_checkDecl(lean_object* v_decls_1705_, lean_object* v_decl_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1710_ = lean_st_ref_get(v_a_1708_);
lean_dec(v___x_1710_);
v___x_1711_ = lean_box(1);
v___x_1712_ = lean_st_mk_ref(v___x_1711_);
lean_inc_ref(v_decl_1706_);
v___x_1713_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1711_);
lean_ctor_set(v___x_1713_, 1, v_decl_1706_);
lean_ctor_set(v___x_1713_, 2, v_decls_1705_);
v___x_1714_ = l_Lean_IR_Checker_checkDecl(v_decl_1706_, v___x_1713_, v___x_1712_, v_a_1707_, v_a_1708_);
lean_dec_ref(v___x_1713_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1724_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1717_ = v___x_1714_;
v_isShared_1718_ = v_isSharedCheck_1724_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1714_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1724_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1719_ = lean_st_ref_get(v_a_1708_);
lean_dec(v___x_1719_);
v___x_1720_ = lean_st_ref_get(v___x_1712_);
lean_dec(v___x_1712_);
lean_dec(v___x_1720_);
if (v_isShared_1718_ == 0)
{
v___x_1722_ = v___x_1717_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1715_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
else
{
lean_dec(v___x_1712_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_checkDecl___boxed(lean_object* v_decls_1725_, lean_object* v_decl_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lean_IR_checkDecl(v_decls_1725_, v_decl_1726_, v_a_1727_, v_a_1728_);
lean_dec(v_a_1728_);
lean_dec_ref(v_a_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0(lean_object* v_decls_1731_, lean_object* v_as_1732_, size_t v_i_1733_, size_t v_stop_1734_, lean_object* v_b_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
uint8_t v___x_1739_; 
v___x_1739_ = lean_usize_dec_eq(v_i_1733_, v_stop_1734_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_array_uget_borrowed(v_as_1732_, v_i_1733_);
lean_inc(v___x_1740_);
lean_inc_ref(v_decls_1731_);
v___x_1741_ = l_Lean_IR_checkDecl(v_decls_1731_, v___x_1740_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; size_t v___x_1743_; size_t v___x_1744_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref(v___x_1741_);
v___x_1743_ = ((size_t)1ULL);
v___x_1744_ = lean_usize_add(v_i_1733_, v___x_1743_);
v_i_1733_ = v___x_1744_;
v_b_1735_ = v_a_1742_;
goto _start;
}
else
{
lean_dec_ref(v_decls_1731_);
return v___x_1741_;
}
}
else
{
lean_object* v___x_1746_; 
lean_dec_ref(v_decls_1731_);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v_b_1735_);
return v___x_1746_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0___boxed(lean_object* v_decls_1747_, lean_object* v_as_1748_, lean_object* v_i_1749_, lean_object* v_stop_1750_, lean_object* v_b_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
size_t v_i_boxed_1755_; size_t v_stop_boxed_1756_; lean_object* v_res_1757_; 
v_i_boxed_1755_ = lean_unbox_usize(v_i_1749_);
lean_dec(v_i_1749_);
v_stop_boxed_1756_ = lean_unbox_usize(v_stop_1750_);
lean_dec(v_stop_1750_);
v_res_1757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0(v_decls_1747_, v_as_1748_, v_i_boxed_1755_, v_stop_boxed_1756_, v_b_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec_ref(v_as_1748_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_checkDecls(lean_object* v_decls_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = lean_array_get_size(v_decls_1758_);
v___x_1764_ = lean_box(0);
v___x_1765_ = lean_nat_dec_lt(v___x_1762_, v___x_1763_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; 
lean_dec_ref(v_decls_1758_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
return v___x_1766_;
}
else
{
uint8_t v___x_1767_; 
v___x_1767_ = lean_nat_dec_le(v___x_1763_, v___x_1763_);
if (v___x_1767_ == 0)
{
if (v___x_1765_ == 0)
{
lean_object* v___x_1768_; 
lean_dec_ref(v_decls_1758_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1764_);
return v___x_1768_;
}
else
{
size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((size_t)0ULL);
v___x_1770_ = lean_usize_of_nat(v___x_1763_);
lean_inc_ref(v_decls_1758_);
v___x_1771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0(v_decls_1758_, v_decls_1758_, v___x_1769_, v___x_1770_, v___x_1764_, v_a_1759_, v_a_1760_);
lean_dec_ref(v_decls_1758_);
return v___x_1771_;
}
}
else
{
size_t v___x_1772_; size_t v___x_1773_; lean_object* v___x_1774_; 
v___x_1772_ = ((size_t)0ULL);
v___x_1773_ = lean_usize_of_nat(v___x_1763_);
lean_inc_ref(v_decls_1758_);
v___x_1774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_checkDecls_spec__0(v_decls_1758_, v_decls_1758_, v___x_1772_, v___x_1773_, v___x_1764_, v_a_1759_, v_a_1760_);
lean_dec_ref(v_decls_1758_);
return v___x_1774_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_checkDecls___boxed(lean_object* v_decls_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = l_Lean_IR_checkDecls(v_decls_1775_, v_a_1776_, v_a_1777_);
lean_dec(v_a_1777_);
lean_dec_ref(v_a_1776_);
return v_res_1779_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_Checker(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_Checker_maxCtorFields = _init_l_Lean_IR_Checker_maxCtorFields();
lean_mark_persistent(l_Lean_IR_Checker_maxCtorFields);
l_Lean_IR_Checker_maxCtorScalarsSize = _init_l_Lean_IR_Checker_maxCtorScalarsSize();
lean_mark_persistent(l_Lean_IR_Checker_maxCtorScalarsSize);
l_Lean_IR_Checker_maxCtorTag = _init_l_Lean_IR_Checker_maxCtorTag();
lean_mark_persistent(l_Lean_IR_Checker_maxCtorTag);
l_Lean_IR_Checker_usizeSize = _init_l_Lean_IR_Checker_usizeSize();
lean_mark_persistent(l_Lean_IR_Checker_usizeSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_Checker(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_Checker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_Checker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_Checker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_Checker(builtin);
}
#ifdef __cplusplus
}
#endif
