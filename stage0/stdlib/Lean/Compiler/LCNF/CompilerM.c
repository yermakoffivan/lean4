// Lean compiler output
// Module: Lean.Compiler.LCNF.CompilerM
// Imports: public import Lean.Compiler.LCNF.LCtx public import Lean.Compiler.LCNF.ConfigOptions
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_toConfigOptions(lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseFunDecl(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseCode(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseLetDecl(uint8_t, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseParams(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedConfigOptions_default;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseParam(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedPhase_default;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedPhase;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instDecidableEqPhase(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instDecidableEqPhase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toPurity___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getParam___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getParam___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getParam___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getLetDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getLetDecl___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getLetDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getLetDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getFunDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getFunDecl___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getFunDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getFunDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_mkParam___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkParam___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkParam___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_mkLetDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkLetDecl___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkLetDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkLetDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_mkFunDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkFunDecl___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkFunDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkFunDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toCtorIdx(uint8_t v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toCtorIdx___boxed(lean_object* v_x_10_){
_start:
{
uint8_t v_x_4__boxed_11_; lean_object* v_res_12_; 
v_x_4__boxed_11_ = lean_unbox(v_x_10_);
v_res_12_ = l_Lean_Compiler_LCNF_Phase_toCtorIdx(v_x_4__boxed_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(lean_object* v_k_13_){
_start:
{
lean_inc(v_k_13_);
return v_k_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg___boxed(lean_object* v_k_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(v_k_14_);
lean_dec(v_k_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, uint8_t v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_inc(v_k_20_);
return v_k_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
uint8_t v_t_boxed_26_; lean_object* v_res_27_; 
v_t_boxed_26_ = lean_unbox(v_t_23_);
v_res_27_ = l_Lean_Compiler_LCNF_Phase_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_boxed_26_, v_h_24_, v_k_25_);
lean_dec(v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg(lean_object* v_base_28_){
_start:
{
lean_inc(v_base_28_);
return v_base_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg___boxed(lean_object* v_base_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Compiler_LCNF_Phase_base_elim___redArg(v_base_29_);
lean_dec(v_base_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim(lean_object* v_motive_31_, uint8_t v_t_32_, lean_object* v_h_33_, lean_object* v_base_34_){
_start:
{
lean_inc(v_base_34_);
return v_base_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___boxed(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_base_38_){
_start:
{
uint8_t v_t_boxed_39_; lean_object* v_res_40_; 
v_t_boxed_39_ = lean_unbox(v_t_36_);
v_res_40_ = l_Lean_Compiler_LCNF_Phase_base_elim(v_motive_35_, v_t_boxed_39_, v_h_37_, v_base_38_);
lean_dec(v_base_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(lean_object* v_mono_41_){
_start:
{
lean_inc(v_mono_41_);
return v_mono_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg___boxed(lean_object* v_mono_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(v_mono_42_);
lean_dec(v_mono_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim(lean_object* v_motive_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_mono_47_){
_start:
{
lean_inc(v_mono_47_);
return v_mono_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___boxed(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_mono_51_){
_start:
{
uint8_t v_t_boxed_52_; lean_object* v_res_53_; 
v_t_boxed_52_ = lean_unbox(v_t_49_);
v_res_53_ = l_Lean_Compiler_LCNF_Phase_mono_elim(v_motive_48_, v_t_boxed_52_, v_h_50_, v_mono_51_);
lean_dec(v_mono_51_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(lean_object* v_impure_54_){
_start:
{
lean_inc(v_impure_54_);
return v_impure_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg___boxed(lean_object* v_impure_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(v_impure_55_);
lean_dec(v_impure_55_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim(lean_object* v_motive_57_, uint8_t v_t_58_, lean_object* v_h_59_, lean_object* v_impure_60_){
_start:
{
lean_inc(v_impure_60_);
return v_impure_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___boxed(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_impure_64_){
_start:
{
uint8_t v_t_boxed_65_; lean_object* v_res_66_; 
v_t_boxed_65_ = lean_unbox(v_t_62_);
v_res_66_ = l_Lean_Compiler_LCNF_Phase_impure_elim(v_motive_61_, v_t_boxed_65_, v_h_63_, v_impure_64_);
lean_dec(v_impure_64_);
return v_res_66_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedPhase_default(void){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedPhase(void){
_start:
{
uint8_t v___x_68_; 
v___x_68_ = 0;
return v___x_68_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_ofNat(lean_object* v_n_69_){
_start:
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = lean_nat_dec_le(v_n_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_dec_le(v_n_69_, v___x_72_);
if (v___x_73_ == 0)
{
uint8_t v___x_74_; 
v___x_74_ = 2;
return v___x_74_;
}
else
{
uint8_t v___x_75_; 
v___x_75_ = 1;
return v___x_75_;
}
}
else
{
uint8_t v___x_76_; 
v___x_76_ = 0;
return v___x_76_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ofNat___boxed(lean_object* v_n_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_Compiler_LCNF_Phase_ofNat(v_n_77_);
lean_dec(v_n_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instDecidableEqPhase(uint8_t v_x_80_, uint8_t v_y_81_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_82_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_x_80_);
v___x_83_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_y_81_);
v___x_84_ = lean_nat_dec_eq(v___x_82_, v___x_83_);
lean_dec(v___x_83_);
lean_dec(v___x_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instDecidableEqPhase___boxed(lean_object* v_x_85_, lean_object* v_y_86_){
_start:
{
uint8_t v_x_13__boxed_87_; uint8_t v_y_14__boxed_88_; uint8_t v_res_89_; lean_object* v_r_90_; 
v_x_13__boxed_87_ = lean_unbox(v_x_85_);
v_y_14__boxed_88_ = lean_unbox(v_y_86_);
v_res_89_ = l_Lean_Compiler_LCNF_instDecidableEqPhase(v_x_13__boxed_87_, v_y_14__boxed_88_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t v_x_91_){
_start:
{
if (v_x_91_ == 2)
{
uint8_t v___x_92_; 
v___x_92_ = 1;
return v___x_92_;
}
else
{
uint8_t v___x_93_; 
v___x_93_ = 0;
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toPurity___boxed(lean_object* v_x_94_){
_start:
{
uint8_t v_x_23__boxed_95_; uint8_t v_res_96_; lean_object* v_r_97_; 
v_x_23__boxed_95_ = lean_unbox(v_x_94_);
v_res_96_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_x_23__boxed_95_);
v_r_97_ = lean_box(v_res_96_);
return v_r_97_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = lean_box(0);
v___x_99_ = lean_unsigned_to_nat(16u);
v___x_100_ = lean_mk_array(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1);
v___x_105_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
lean_ctor_set(v___x_105_, 2, v___x_104_);
lean_ctor_set(v___x_105_, 3, v___x_104_);
lean_ctor_set(v___x_105_, 4, v___x_104_);
lean_ctor_set(v___x_105_, 5, v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default;
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0(void){
_start:
{
lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Lean_Compiler_LCNF_instInhabitedConfigOptions_default;
v___x_112_ = 0;
v___x_113_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_113_, sizeof(void*)*1, v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default;
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(lean_object* v_00_u03b1_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v___y_117_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object* v_00_u03b1_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(v_00_u03b1_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(lean_object* v_00_u03b1_132_, lean_object* v_00_u03b2_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v___x_141_; 
lean_inc(v___y_139_);
lean_inc_ref(v___y_138_);
lean_inc(v___y_137_);
lean_inc_ref(v___y_136_);
v___x_141_ = lean_apply_5(v___y_134_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, lean_box(0));
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_142_);
lean_dec_ref(v___x_141_);
lean_inc(v___y_139_);
lean_inc_ref(v___y_138_);
lean_inc(v___y_137_);
lean_inc_ref(v___y_136_);
v___x_143_ = lean_apply_6(v___y_135_, v_a_142_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, lean_box(0));
return v___x_143_;
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec_ref(v___y_135_);
v_a_144_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_141_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_141_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object* v_00_u03b1_152_, lean_object* v_00_u03b2_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(v_00_u03b1_152_, v_00_u03b2_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
return v_res_161_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_instMonadEIO(lean_box(0));
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0);
v___x_164_ = l_StateRefT_x27_instMonad___redArg(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2(void){
_start:
{
lean_object* v___f_165_; 
v___f_165_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_165_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3(void){
_start:
{
lean_object* v___f_166_; 
v___f_166_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_166_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4(void){
_start:
{
lean_object* v___f_167_; 
v___f_167_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed), 7, 0);
return v___f_167_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5(void){
_start:
{
lean_object* v___f_168_; 
v___f_168_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed), 9, 0);
return v___f_168_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM(void){
_start:
{
lean_object* v___x_169_; lean_object* v_toApplicative_170_; lean_object* v_toFunctor_171_; lean_object* v_toSeq_172_; lean_object* v_toSeqLeft_173_; lean_object* v_toSeqRight_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___f_178_; lean_object* v___x_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_toApplicative_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_213_; 
v___x_169_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1);
v_toApplicative_170_ = lean_ctor_get(v___x_169_, 0);
v_toFunctor_171_ = lean_ctor_get(v_toApplicative_170_, 0);
v_toSeq_172_ = lean_ctor_get(v_toApplicative_170_, 2);
v_toSeqLeft_173_ = lean_ctor_get(v_toApplicative_170_, 3);
v_toSeqRight_174_ = lean_ctor_get(v_toApplicative_170_, 4);
v___f_175_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2);
v___f_176_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3);
lean_inc_ref_n(v_toFunctor_171_, 2);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_177_, 0, v_toFunctor_171_);
v___f_178_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_178_, 0, v_toFunctor_171_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___f_177_);
lean_ctor_set(v___x_179_, 1, v___f_178_);
lean_inc(v_toSeqRight_174_);
v___f_180_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_180_, 0, v_toSeqRight_174_);
lean_inc(v_toSeqLeft_173_);
v___f_181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_181_, 0, v_toSeqLeft_173_);
lean_inc(v_toSeq_172_);
v___f_182_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_182_, 0, v_toSeq_172_);
v___x_183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_183_, 0, v___x_179_);
lean_ctor_set(v___x_183_, 1, v___f_175_);
lean_ctor_set(v___x_183_, 2, v___f_182_);
lean_ctor_set(v___x_183_, 3, v___f_181_);
lean_ctor_set(v___x_183_, 4, v___f_180_);
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___f_176_);
v___x_185_ = l_StateRefT_x27_instMonad___redArg(v___x_184_);
v_toApplicative_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; 
v_unused_214_ = lean_ctor_get(v___x_185_, 1);
lean_dec(v_unused_214_);
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_213_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_toApplicative_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_213_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v_toFunctor_190_; lean_object* v_toSeq_191_; lean_object* v_toSeqLeft_192_; lean_object* v_toSeqRight_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_211_; 
v_toFunctor_190_ = lean_ctor_get(v_toApplicative_186_, 0);
v_toSeq_191_ = lean_ctor_get(v_toApplicative_186_, 2);
v_toSeqLeft_192_ = lean_ctor_get(v_toApplicative_186_, 3);
v_toSeqRight_193_ = lean_ctor_get(v_toApplicative_186_, 4);
v_isSharedCheck_211_ = !lean_is_exclusive(v_toApplicative_186_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; 
v_unused_212_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_dec(v_unused_212_);
v___x_195_ = v_toApplicative_186_;
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_toSeqRight_193_);
lean_inc(v_toSeqLeft_192_);
lean_inc(v_toSeq_191_);
lean_inc(v_toFunctor_190_);
lean_dec(v_toApplicative_186_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___f_200_; lean_object* v___x_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___f_204_; lean_object* v___x_206_; 
v___f_197_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4);
v___f_198_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5);
lean_inc_ref(v_toFunctor_190_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_199_, 0, v_toFunctor_190_);
v___f_200_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_200_, 0, v_toFunctor_190_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___f_199_);
lean_ctor_set(v___x_201_, 1, v___f_200_);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_202_, 0, v_toSeqRight_193_);
v___f_203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_203_, 0, v_toSeqLeft_192_);
v___f_204_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_204_, 0, v_toSeq_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 4, v___f_202_);
lean_ctor_set(v___x_195_, 3, v___f_203_);
lean_ctor_set(v___x_195_, 2, v___f_204_);
lean_ctor_set(v___x_195_, 1, v___f_197_);
lean_ctor_set(v___x_195_, 0, v___x_201_);
v___x_206_ = v___x_195_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_201_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___f_197_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v___f_204_);
lean_ctor_set(v_reuseFailAlloc_210_, 3, v___f_203_);
lean_ctor_set(v_reuseFailAlloc_210_, 4, v___f_202_);
v___x_206_ = v_reuseFailAlloc_210_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_208_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v___f_198_);
lean_ctor_set(v___x_188_, 0, v___x_206_);
v___x_208_ = v___x_188_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___f_198_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg(uint8_t v_phase_215_, lean_object* v_x_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_config_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_config_222_ = lean_ctor_get(v_a_217_, 0);
lean_inc_ref(v_config_222_);
v___x_223_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_223_, 0, v_config_222_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v_phase_215_);
lean_inc(v_a_220_);
lean_inc_ref(v_a_219_);
lean_inc(v_a_218_);
v___x_224_ = lean_apply_5(v_x_216_, v___x_223_, v_a_218_, v_a_219_, v_a_220_, lean_box(0));
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg___boxed(lean_object* v_phase_225_, lean_object* v_x_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
uint8_t v_phase_boxed_232_; lean_object* v_res_233_; 
v_phase_boxed_232_ = lean_unbox(v_phase_225_);
v_res_233_ = l_Lean_Compiler_LCNF_withPhase___redArg(v_phase_boxed_232_, v_x_226_, v_a_227_, v_a_228_, v_a_229_, v_a_230_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase(lean_object* v_00_u03b1_234_, uint8_t v_phase_235_, lean_object* v_x_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_config_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v_config_242_ = lean_ctor_get(v_a_237_, 0);
lean_inc_ref(v_config_242_);
v___x_243_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_243_, 0, v_config_242_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*1, v_phase_235_);
lean_inc(v_a_240_);
lean_inc_ref(v_a_239_);
lean_inc(v_a_238_);
v___x_244_ = lean_apply_5(v_x_236_, v___x_243_, v_a_238_, v_a_239_, v_a_240_, lean_box(0));
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___boxed(lean_object* v_00_u03b1_245_, lean_object* v_phase_246_, lean_object* v_x_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
uint8_t v_phase_boxed_253_; lean_object* v_res_254_; 
v_phase_boxed_253_ = lean_unbox(v_phase_246_);
v_res_254_ = l_Lean_Compiler_LCNF_withPhase(v_00_u03b1_245_, v_phase_boxed_253_, v_x_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object* v_a_255_){
_start:
{
uint8_t v_phase_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_phase_257_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*1);
v___x_258_ = lean_box(v_phase_257_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg___boxed(lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_260_);
lean_dec_ref(v_a_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase(lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_263_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___boxed(lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Compiler_LCNF_getPhase(v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object* v_a_275_){
_start:
{
lean_object* v___x_277_; lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_288_; 
v___x_277_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_275_);
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_288_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_288_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_288_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
uint8_t v___x_282_; uint8_t v___x_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_282_ = lean_unbox(v_a_278_);
lean_dec(v_a_278_);
v___x_283_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_282_);
v___x_284_ = lean_box(v___x_283_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_284_);
v___x_286_ = v___x_280_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg___boxed(lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Compiler_LCNF_getPurity___redArg(v_a_289_);
lean_dec_ref(v_a_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity(lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lean_Compiler_LCNF_getPurity___redArg(v_a_292_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___boxed(lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_Compiler_LCNF_getPurity(v_a_298_, v_a_299_, v_a_300_, v_a_301_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_a_299_);
lean_dec_ref(v_a_298_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg(lean_object* v_a_304_){
_start:
{
lean_object* v___x_306_; lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_322_; 
v___x_306_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_304_);
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_322_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_322_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_322_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = lean_unbox(v_a_307_);
lean_dec(v_a_307_);
if (v___x_311_ == 0)
{
uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_312_ = 1;
v___x_313_ = lean_box(v___x_312_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_313_);
v___x_315_ = v___x_309_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
else
{
uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_317_ = 0;
v___x_318_ = lean_box(v___x_317_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_318_);
v___x_320_ = v___x_309_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg___boxed(lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_Compiler_LCNF_inBasePhase___redArg(v_a_323_);
lean_dec_ref(v_a_323_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase(lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_Compiler_LCNF_inBasePhase___redArg(v_a_326_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___boxed(lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Compiler_LCNF_inBasePhase(v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_337_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0(void){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
lean_ctor_set(v___x_343_, 2, v___x_342_);
lean_ctor_set(v___x_343_, 3, v___x_342_);
lean_ctor_set(v___x_343_, 4, v___x_341_);
lean_ctor_set(v___x_343_, 5, v___x_341_);
lean_ctor_set(v___x_343_, 6, v___x_341_);
lean_ctor_set(v___x_343_, 7, v___x_341_);
lean_ctor_set(v___x_343_, 8, v___x_341_);
lean_ctor_set(v___x_343_, 9, v___x_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(lean_object* v_msgData_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_350_ = lean_st_ref_get(v___y_348_);
v___x_351_ = lean_st_ref_get(v___y_348_);
lean_dec(v___x_351_);
v___x_352_ = lean_st_ref_get(v___y_346_);
v___x_353_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_345_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_376_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_376_ == 0)
{
v___x_356_ = v___x_353_;
v_isShared_357_ = v_isSharedCheck_376_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_376_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v_env_358_; lean_object* v_lctx_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_374_; 
v_env_358_ = lean_ctor_get(v___x_350_, 0);
lean_inc_ref(v_env_358_);
lean_dec(v___x_350_);
v_lctx_359_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v___x_352_, 1);
lean_dec(v_unused_375_);
v___x_361_ = v___x_352_;
v_isShared_362_ = v_isSharedCheck_374_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_lctx_359_);
lean_dec(v___x_352_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_374_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v_options_363_; uint8_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
v_options_363_ = lean_ctor_get(v___y_347_, 2);
v___x_364_ = lean_unbox(v_a_354_);
lean_dec(v_a_354_);
v___x_365_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_359_, v___x_364_);
lean_dec_ref(v_lctx_359_);
v___x_366_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2);
lean_inc_ref(v_options_363_);
v___x_367_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_367_, 0, v_env_358_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
lean_ctor_set(v___x_367_, 2, v___x_365_);
lean_ctor_set(v___x_367_, 3, v_options_363_);
if (v_isShared_362_ == 0)
{
lean_ctor_set_tag(v___x_361_, 3);
lean_ctor_set(v___x_361_, 1, v_msgData_344_);
lean_ctor_set(v___x_361_, 0, v___x_367_);
v___x_369_ = v___x_361_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_msgData_344_);
v___x_369_ = v_reuseFailAlloc_373_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_371_; 
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_369_);
v___x_371_ = v___x_356_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v___x_352_);
lean_dec(v___x_350_);
lean_dec_ref(v_msgData_344_);
v_a_377_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_353_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_353_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object* v_msgData_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(v_msgData_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_391_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0(void){
_start:
{
lean_object* v___f_392_; 
v___f_392_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed), 6, 0);
return v___f_392_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM(void){
_start:
{
lean_object* v___f_393_; 
v___f_393_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0);
return v___f_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(lean_object* v_msg_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_options_400_; lean_object* v_ref_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v_options_400_ = lean_ctor_get(v___y_397_, 2);
v_ref_401_ = lean_ctor_get(v___y_397_, 5);
v___x_402_ = lean_st_ref_get(v___y_398_);
v___x_403_ = lean_st_ref_get(v___y_398_);
lean_dec(v___x_403_);
v___x_404_ = lean_st_ref_get(v___y_396_);
v___x_405_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_395_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_428_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_428_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_428_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_428_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v_env_410_; lean_object* v_lctx_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_426_; 
v_env_410_ = lean_ctor_get(v___x_402_, 0);
lean_inc_ref(v_env_410_);
lean_dec(v___x_402_);
v_lctx_411_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; 
v_unused_427_ = lean_ctor_get(v___x_404_, 1);
lean_dec(v_unused_427_);
v___x_413_ = v___x_404_;
v_isShared_414_ = v_isSharedCheck_426_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_lctx_411_);
lean_dec(v___x_404_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_426_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_415_ = lean_unbox(v_a_406_);
lean_dec(v_a_406_);
v___x_416_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_411_, v___x_415_);
lean_dec_ref(v_lctx_411_);
v___x_417_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2);
lean_inc_ref(v_options_400_);
v___x_418_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_418_, 0, v_env_410_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
lean_ctor_set(v___x_418_, 2, v___x_416_);
lean_ctor_set(v___x_418_, 3, v_options_400_);
if (v_isShared_414_ == 0)
{
lean_ctor_set_tag(v___x_413_, 3);
lean_ctor_set(v___x_413_, 1, v_msg_394_);
lean_ctor_set(v___x_413_, 0, v___x_418_);
v___x_420_ = v___x_413_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_msg_394_);
v___x_420_ = v_reuseFailAlloc_425_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_ref_401_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_ref_401_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 1);
lean_ctor_set(v___x_408_, 0, v___x_421_);
v___x_423_ = v___x_408_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec(v___x_404_);
lean_dec(v___x_402_);
lean_dec_ref(v_msg_394_);
v_a_429_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_405_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_405_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg___boxed(lean_object* v_msg_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v_msg_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(lean_object* v_00_u03b1_444_, lean_object* v_msg_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v_msg_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___boxed(lean_object* v_00_u03b1_452_, lean_object* v_msg_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(v_00_u03b1_452_, v_msg_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(lean_object* v_a_460_, lean_object* v_x_461_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_box(0);
return v___x_462_;
}
else
{
lean_object* v_key_463_; lean_object* v_value_464_; lean_object* v_tail_465_; uint8_t v___x_466_; 
v_key_463_ = lean_ctor_get(v_x_461_, 0);
v_value_464_ = lean_ctor_get(v_x_461_, 1);
v_tail_465_ = lean_ctor_get(v_x_461_, 2);
v___x_466_ = l_Lean_instBEqFVarId_beq(v_key_463_, v_a_460_);
if (v___x_466_ == 0)
{
v_x_461_ = v_tail_465_;
goto _start;
}
else
{
lean_object* v___x_468_; 
lean_inc(v_value_464_);
v___x_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_468_, 0, v_value_464_);
return v___x_468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg___boxed(lean_object* v_a_469_, lean_object* v_x_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_469_, v_x_470_);
lean_dec(v_x_470_);
lean_dec(v_a_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(lean_object* v_m_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_buckets_474_; lean_object* v___x_475_; uint64_t v___x_476_; uint64_t v___x_477_; uint64_t v___x_478_; uint64_t v_fold_479_; uint64_t v___x_480_; uint64_t v___x_481_; uint64_t v___x_482_; size_t v___x_483_; size_t v___x_484_; size_t v___x_485_; size_t v___x_486_; size_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_buckets_474_ = lean_ctor_get(v_m_472_, 1);
v___x_475_ = lean_array_get_size(v_buckets_474_);
v___x_476_ = l_Lean_instHashableFVarId_hash(v_a_473_);
v___x_477_ = 32ULL;
v___x_478_ = lean_uint64_shift_right(v___x_476_, v___x_477_);
v_fold_479_ = lean_uint64_xor(v___x_476_, v___x_478_);
v___x_480_ = 16ULL;
v___x_481_ = lean_uint64_shift_right(v_fold_479_, v___x_480_);
v___x_482_ = lean_uint64_xor(v_fold_479_, v___x_481_);
v___x_483_ = lean_uint64_to_usize(v___x_482_);
v___x_484_ = lean_usize_of_nat(v___x_475_);
v___x_485_ = ((size_t)1ULL);
v___x_486_ = lean_usize_sub(v___x_484_, v___x_485_);
v___x_487_ = lean_usize_land(v___x_483_, v___x_486_);
v___x_488_ = lean_array_uget_borrowed(v_buckets_474_, v___x_487_);
v___x_489_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_473_, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg___boxed(lean_object* v_m_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_m_490_, v_a_491_);
lean_dec(v_a_491_);
lean_dec_ref(v_m_490_);
return v_res_492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getType___closed__0(void){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_mk_string_unchecked("unknown free variable ", 22, 22);
return v___x_493_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getType___closed__1(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_obj_once(&l_Lean_Compiler_LCNF_getType___closed__0, &l_Lean_Compiler_LCNF_getType___closed__0_once, _init_l_Lean_Compiler_LCNF_getType___closed__0);
v___x_495_ = l_Lean_stringToMessageData(v___x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType(lean_object* v_fvarId_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_st_ref_get(v_a_500_);
lean_dec(v___x_502_);
v___x_503_ = lean_st_ref_get(v_a_498_);
v___x_504_ = l_Lean_Compiler_LCNF_getPurity___redArg(v_a_497_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_555_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_555_ == 0)
{
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_555_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_555_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___y_510_; lean_object* v_lctx_521_; lean_object* v___y_523_; lean_object* v___y_538_; uint8_t v___x_552_; 
v_lctx_521_ = lean_ctor_get(v___x_503_, 0);
lean_inc_ref(v_lctx_521_);
lean_dec(v___x_503_);
v___x_552_ = lean_unbox(v_a_505_);
if (v___x_552_ == 0)
{
lean_object* v_letDeclsPure_553_; 
v_letDeclsPure_553_ = lean_ctor_get(v_lctx_521_, 2);
lean_inc_ref(v_letDeclsPure_553_);
v___y_538_ = v_letDeclsPure_553_;
goto v___jp_537_;
}
else
{
lean_object* v_letDeclsImpure_554_; 
v_letDeclsImpure_554_ = lean_ctor_get(v_lctx_521_, 3);
lean_inc_ref(v_letDeclsImpure_554_);
v___y_538_ = v_letDeclsImpure_554_;
goto v___jp_537_;
}
v___jp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_510_, v_fvarId_496_);
lean_dec_ref(v___y_510_);
if (lean_obj_tag(v___x_511_) == 1)
{
lean_object* v_val_512_; lean_object* v_type_513_; lean_object* v___x_515_; 
lean_dec(v_fvarId_496_);
v_val_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_val_512_);
lean_dec_ref(v___x_511_);
v_type_513_ = lean_ctor_get(v_val_512_, 3);
lean_inc_ref(v_type_513_);
lean_dec(v_val_512_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v_type_513_);
v___x_515_ = v___x_507_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_type_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
lean_dec(v___x_511_);
lean_del_object(v___x_507_);
v___x_517_ = lean_obj_once(&l_Lean_Compiler_LCNF_getType___closed__1, &l_Lean_Compiler_LCNF_getType___closed__1_once, _init_l_Lean_Compiler_LCNF_getType___closed__1);
v___x_518_ = l_Lean_MessageData_ofName(v_fvarId_496_);
v___x_519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_519_, v_a_497_, v_a_498_, v_a_499_, v_a_500_);
return v___x_520_;
}
}
v___jp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_523_, v_fvarId_496_);
lean_dec_ref(v___y_523_);
if (lean_obj_tag(v___x_524_) == 1)
{
lean_object* v_val_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v_lctx_521_);
lean_del_object(v___x_507_);
lean_dec(v_a_505_);
lean_dec(v_fvarId_496_);
v_val_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_533_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_val_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_type_529_; lean_object* v___x_531_; 
v_type_529_ = lean_ctor_get(v_val_525_, 2);
lean_inc_ref(v_type_529_);
lean_dec(v_val_525_);
if (v_isShared_528_ == 0)
{
lean_ctor_set_tag(v___x_527_, 0);
lean_ctor_set(v___x_527_, 0, v_type_529_);
v___x_531_ = v___x_527_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_type_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
uint8_t v___x_534_; 
lean_dec(v___x_524_);
v___x_534_ = lean_unbox(v_a_505_);
lean_dec(v_a_505_);
if (v___x_534_ == 0)
{
lean_object* v_funDeclsPure_535_; 
v_funDeclsPure_535_ = lean_ctor_get(v_lctx_521_, 4);
lean_inc_ref(v_funDeclsPure_535_);
lean_dec_ref(v_lctx_521_);
v___y_510_ = v_funDeclsPure_535_;
goto v___jp_509_;
}
else
{
lean_object* v_funDeclsImpure_536_; 
v_funDeclsImpure_536_ = lean_ctor_get(v_lctx_521_, 5);
lean_inc_ref(v_funDeclsImpure_536_);
lean_dec_ref(v_lctx_521_);
v___y_510_ = v_funDeclsImpure_536_;
goto v___jp_509_;
}
}
}
v___jp_537_:
{
lean_object* v___x_539_; 
v___x_539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_538_, v_fvarId_496_);
lean_dec_ref(v___y_538_);
if (lean_obj_tag(v___x_539_) == 1)
{
lean_object* v_val_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_lctx_521_);
lean_del_object(v___x_507_);
lean_dec(v_a_505_);
lean_dec(v_fvarId_496_);
v_val_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_548_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_val_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v_type_544_; lean_object* v___x_546_; 
v_type_544_ = lean_ctor_get(v_val_540_, 2);
lean_inc_ref(v_type_544_);
lean_dec(v_val_540_);
if (v_isShared_543_ == 0)
{
lean_ctor_set_tag(v___x_542_, 0);
lean_ctor_set(v___x_542_, 0, v_type_544_);
v___x_546_ = v___x_542_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_type_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
uint8_t v___x_549_; 
lean_dec(v___x_539_);
v___x_549_ = lean_unbox(v_a_505_);
if (v___x_549_ == 0)
{
lean_object* v_paramsPure_550_; 
v_paramsPure_550_ = lean_ctor_get(v_lctx_521_, 0);
lean_inc_ref(v_paramsPure_550_);
v___y_523_ = v_paramsPure_550_;
goto v___jp_522_;
}
else
{
lean_object* v_paramsImpure_551_; 
v_paramsImpure_551_ = lean_ctor_get(v_lctx_521_, 1);
lean_inc_ref(v_paramsImpure_551_);
v___y_523_ = v_paramsImpure_551_;
goto v___jp_522_;
}
}
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec(v___x_503_);
lean_dec(v_fvarId_496_);
v_a_556_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_504_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_504_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType___boxed(lean_object* v_fvarId_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Compiler_LCNF_getType(v_fvarId_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(lean_object* v_00_u03b2_571_, lean_object* v_m_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_m_572_, v_a_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___boxed(lean_object* v_00_u03b2_575_, lean_object* v_m_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(v_00_u03b2_575_, v_m_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_m_576_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(lean_object* v_00_u03b2_579_, lean_object* v_a_580_, lean_object* v_x_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_580_, v_x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___boxed(lean_object* v_00_u03b2_583_, lean_object* v_a_584_, lean_object* v_x_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(v_00_u03b2_583_, v_a_584_, v_x_585_);
lean_dec(v_x_585_);
lean_dec(v_a_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object* v_fvarId_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_st_ref_get(v_a_591_);
lean_dec(v___x_593_);
v___x_594_ = lean_st_ref_get(v_a_589_);
v___x_595_ = l_Lean_Compiler_LCNF_getPurity___redArg(v_a_588_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_646_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_646_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_646_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_646_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___y_601_; lean_object* v_lctx_612_; lean_object* v___y_614_; lean_object* v___y_629_; uint8_t v___x_643_; 
v_lctx_612_ = lean_ctor_get(v___x_594_, 0);
lean_inc_ref(v_lctx_612_);
lean_dec(v___x_594_);
v___x_643_ = lean_unbox(v_a_596_);
if (v___x_643_ == 0)
{
lean_object* v_letDeclsPure_644_; 
v_letDeclsPure_644_ = lean_ctor_get(v_lctx_612_, 2);
lean_inc_ref(v_letDeclsPure_644_);
v___y_629_ = v_letDeclsPure_644_;
goto v___jp_628_;
}
else
{
lean_object* v_letDeclsImpure_645_; 
v_letDeclsImpure_645_ = lean_ctor_get(v_lctx_612_, 3);
lean_inc_ref(v_letDeclsImpure_645_);
v___y_629_ = v_letDeclsImpure_645_;
goto v___jp_628_;
}
v___jp_600_:
{
lean_object* v___x_602_; 
v___x_602_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_601_, v_fvarId_587_);
lean_dec_ref(v___y_601_);
if (lean_obj_tag(v___x_602_) == 1)
{
lean_object* v_val_603_; lean_object* v_binderName_604_; lean_object* v___x_606_; 
lean_dec(v_fvarId_587_);
v_val_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_val_603_);
lean_dec_ref(v___x_602_);
v_binderName_604_ = lean_ctor_get(v_val_603_, 1);
lean_inc(v_binderName_604_);
lean_dec(v_val_603_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v_binderName_604_);
v___x_606_ = v___x_598_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_binderName_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec(v___x_602_);
lean_del_object(v___x_598_);
v___x_608_ = lean_obj_once(&l_Lean_Compiler_LCNF_getType___closed__1, &l_Lean_Compiler_LCNF_getType___closed__1_once, _init_l_Lean_Compiler_LCNF_getType___closed__1);
v___x_609_ = l_Lean_MessageData_ofName(v_fvarId_587_);
v___x_610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_610_, v_a_588_, v_a_589_, v_a_590_, v_a_591_);
return v___x_611_;
}
}
v___jp_613_:
{
lean_object* v___x_615_; 
v___x_615_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_614_, v_fvarId_587_);
lean_dec_ref(v___y_614_);
if (lean_obj_tag(v___x_615_) == 1)
{
lean_object* v_val_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_624_; 
lean_dec_ref(v_lctx_612_);
lean_del_object(v___x_598_);
lean_dec(v_a_596_);
lean_dec(v_fvarId_587_);
v_val_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_624_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_val_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v_binderName_620_; lean_object* v___x_622_; 
v_binderName_620_ = lean_ctor_get(v_val_616_, 1);
lean_inc(v_binderName_620_);
lean_dec(v_val_616_);
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 0);
lean_ctor_set(v___x_618_, 0, v_binderName_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_binderName_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
else
{
uint8_t v___x_625_; 
lean_dec(v___x_615_);
v___x_625_ = lean_unbox(v_a_596_);
lean_dec(v_a_596_);
if (v___x_625_ == 0)
{
lean_object* v_funDeclsPure_626_; 
v_funDeclsPure_626_ = lean_ctor_get(v_lctx_612_, 4);
lean_inc_ref(v_funDeclsPure_626_);
lean_dec_ref(v_lctx_612_);
v___y_601_ = v_funDeclsPure_626_;
goto v___jp_600_;
}
else
{
lean_object* v_funDeclsImpure_627_; 
v_funDeclsImpure_627_ = lean_ctor_get(v_lctx_612_, 5);
lean_inc_ref(v_funDeclsImpure_627_);
lean_dec_ref(v_lctx_612_);
v___y_601_ = v_funDeclsImpure_627_;
goto v___jp_600_;
}
}
}
v___jp_628_:
{
lean_object* v___x_630_; 
v___x_630_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_629_, v_fvarId_587_);
lean_dec_ref(v___y_629_);
if (lean_obj_tag(v___x_630_) == 1)
{
lean_object* v_val_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_639_; 
lean_dec_ref(v_lctx_612_);
lean_del_object(v___x_598_);
lean_dec(v_a_596_);
lean_dec(v_fvarId_587_);
v_val_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_639_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_val_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v_binderName_635_; lean_object* v___x_637_; 
v_binderName_635_ = lean_ctor_get(v_val_631_, 1);
lean_inc(v_binderName_635_);
lean_dec(v_val_631_);
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 0);
lean_ctor_set(v___x_633_, 0, v_binderName_635_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_binderName_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
uint8_t v___x_640_; 
lean_dec(v___x_630_);
v___x_640_ = lean_unbox(v_a_596_);
if (v___x_640_ == 0)
{
lean_object* v_paramsPure_641_; 
v_paramsPure_641_ = lean_ctor_get(v_lctx_612_, 0);
lean_inc_ref(v_paramsPure_641_);
v___y_614_ = v_paramsPure_641_;
goto v___jp_613_;
}
else
{
lean_object* v_paramsImpure_642_; 
v_paramsImpure_642_ = lean_ctor_get(v_lctx_612_, 1);
lean_inc_ref(v_paramsImpure_642_);
v___y_614_ = v_paramsImpure_642_;
goto v___jp_613_;
}
}
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec(v___x_594_);
lean_dec(v_fvarId_587_);
v_a_647_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_595_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_595_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName___boxed(lean_object* v_fvarId_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t v_pu_662_, lean_object* v_fvarId_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___y_670_; 
v___x_667_ = lean_st_ref_get(v_a_665_);
lean_dec(v___x_667_);
v___x_668_ = lean_st_ref_get(v_a_664_);
if (v_pu_662_ == 0)
{
lean_object* v_lctx_673_; lean_object* v_paramsPure_674_; 
v_lctx_673_ = lean_ctor_get(v___x_668_, 0);
lean_inc_ref(v_lctx_673_);
lean_dec(v___x_668_);
v_paramsPure_674_ = lean_ctor_get(v_lctx_673_, 0);
lean_inc_ref(v_paramsPure_674_);
lean_dec_ref(v_lctx_673_);
v___y_670_ = v_paramsPure_674_;
goto v___jp_669_;
}
else
{
lean_object* v_lctx_675_; lean_object* v_paramsImpure_676_; 
v_lctx_675_ = lean_ctor_get(v___x_668_, 0);
lean_inc_ref(v_lctx_675_);
lean_dec(v___x_668_);
v_paramsImpure_676_ = lean_ctor_get(v_lctx_675_, 1);
lean_inc_ref(v_paramsImpure_676_);
lean_dec_ref(v_lctx_675_);
v___y_670_ = v_paramsImpure_676_;
goto v___jp_669_;
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_670_, v_fvarId_663_);
lean_dec_ref(v___y_670_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg___boxed(lean_object* v_pu_677_, lean_object* v_fvarId_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
uint8_t v_pu_boxed_682_; lean_object* v_res_683_; 
v_pu_boxed_682_ = lean_unbox(v_pu_677_);
v_res_683_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_boxed_682_, v_fvarId_678_, v_a_679_, v_a_680_);
lean_dec(v_a_680_);
lean_dec(v_a_679_);
lean_dec(v_fvarId_678_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f(uint8_t v_pu_684_, lean_object* v_fvarId_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_684_, v_fvarId_685_, v_a_687_, v_a_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___boxed(lean_object* v_pu_692_, lean_object* v_fvarId_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
uint8_t v_pu_boxed_699_; lean_object* v_res_700_; 
v_pu_boxed_699_ = lean_unbox(v_pu_692_);
v_res_700_ = l_Lean_Compiler_LCNF_findParam_x3f(v_pu_boxed_699_, v_fvarId_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_fvarId_693_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t v_pu_701_, lean_object* v_fvarId_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___y_709_; 
v___x_706_ = lean_st_ref_get(v_a_704_);
lean_dec(v___x_706_);
v___x_707_ = lean_st_ref_get(v_a_703_);
if (v_pu_701_ == 0)
{
lean_object* v_lctx_712_; lean_object* v_letDeclsPure_713_; 
v_lctx_712_ = lean_ctor_get(v___x_707_, 0);
lean_inc_ref(v_lctx_712_);
lean_dec(v___x_707_);
v_letDeclsPure_713_ = lean_ctor_get(v_lctx_712_, 2);
lean_inc_ref(v_letDeclsPure_713_);
lean_dec_ref(v_lctx_712_);
v___y_709_ = v_letDeclsPure_713_;
goto v___jp_708_;
}
else
{
lean_object* v_lctx_714_; lean_object* v_letDeclsImpure_715_; 
v_lctx_714_ = lean_ctor_get(v___x_707_, 0);
lean_inc_ref(v_lctx_714_);
lean_dec(v___x_707_);
v_letDeclsImpure_715_ = lean_ctor_get(v_lctx_714_, 3);
lean_inc_ref(v_letDeclsImpure_715_);
lean_dec_ref(v_lctx_714_);
v___y_709_ = v_letDeclsImpure_715_;
goto v___jp_708_;
}
v___jp_708_:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_709_, v_fvarId_702_);
lean_dec_ref(v___y_709_);
v___x_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
return v___x_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg___boxed(lean_object* v_pu_716_, lean_object* v_fvarId_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
uint8_t v_pu_boxed_721_; lean_object* v_res_722_; 
v_pu_boxed_721_ = lean_unbox(v_pu_716_);
v_res_722_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_boxed_721_, v_fvarId_717_, v_a_718_, v_a_719_);
lean_dec(v_a_719_);
lean_dec(v_a_718_);
lean_dec(v_fvarId_717_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f(uint8_t v_pu_723_, lean_object* v_fvarId_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_723_, v_fvarId_724_, v_a_726_, v_a_728_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___boxed(lean_object* v_pu_731_, lean_object* v_fvarId_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
uint8_t v_pu_boxed_738_; lean_object* v_res_739_; 
v_pu_boxed_738_ = lean_unbox(v_pu_731_);
v_res_739_ = l_Lean_Compiler_LCNF_findLetDecl_x3f(v_pu_boxed_738_, v_fvarId_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_fvarId_732_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t v_pu_740_, lean_object* v_fvarId_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___y_748_; 
v___x_745_ = lean_st_ref_get(v_a_743_);
lean_dec(v___x_745_);
v___x_746_ = lean_st_ref_get(v_a_742_);
if (v_pu_740_ == 0)
{
lean_object* v_lctx_751_; lean_object* v_funDeclsPure_752_; 
v_lctx_751_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_lctx_751_);
lean_dec(v___x_746_);
v_funDeclsPure_752_ = lean_ctor_get(v_lctx_751_, 4);
lean_inc_ref(v_funDeclsPure_752_);
lean_dec_ref(v_lctx_751_);
v___y_748_ = v_funDeclsPure_752_;
goto v___jp_747_;
}
else
{
lean_object* v_lctx_753_; lean_object* v_funDeclsImpure_754_; 
v_lctx_753_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_lctx_753_);
lean_dec(v___x_746_);
v_funDeclsImpure_754_ = lean_ctor_get(v_lctx_753_, 5);
lean_inc_ref(v_funDeclsImpure_754_);
lean_dec_ref(v_lctx_753_);
v___y_748_ = v_funDeclsImpure_754_;
goto v___jp_747_;
}
v___jp_747_:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_748_, v_fvarId_741_);
lean_dec_ref(v___y_748_);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg___boxed(lean_object* v_pu_755_, lean_object* v_fvarId_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
uint8_t v_pu_boxed_760_; lean_object* v_res_761_; 
v_pu_boxed_760_ = lean_unbox(v_pu_755_);
v_res_761_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_boxed_760_, v_fvarId_756_, v_a_757_, v_a_758_);
lean_dec(v_a_758_);
lean_dec(v_a_757_);
lean_dec(v_fvarId_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f(uint8_t v_pu_762_, lean_object* v_fvarId_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_762_, v_fvarId_763_, v_a_765_, v_a_767_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___boxed(lean_object* v_pu_770_, lean_object* v_fvarId_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
uint8_t v_pu_boxed_777_; lean_object* v_res_778_; 
v_pu_boxed_777_ = lean_unbox(v_pu_770_);
v_res_778_ = l_Lean_Compiler_LCNF_findFunDecl_x3f(v_pu_boxed_777_, v_fvarId_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_fvarId_771_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t v_pu_779_, lean_object* v_fvarId_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
lean_object* v___x_784_; lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_805_; 
v___x_784_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_779_, v_fvarId_780_, v_a_781_, v_a_782_);
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_805_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_805_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_805_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
if (lean_obj_tag(v_a_785_) == 1)
{
lean_object* v_val_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_800_; 
v_val_789_ = lean_ctor_get(v_a_785_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v_a_785_);
if (v_isSharedCheck_800_ == 0)
{
v___x_791_ = v_a_785_;
v_isShared_792_ = v_isSharedCheck_800_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_val_789_);
lean_dec(v_a_785_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_800_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v_value_793_; lean_object* v___x_795_; 
v_value_793_ = lean_ctor_get(v_val_789_, 3);
lean_inc(v_value_793_);
lean_dec(v_val_789_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 0, v_value_793_);
v___x_795_ = v___x_791_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_value_793_);
v___x_795_ = v_reuseFailAlloc_799_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
lean_object* v___x_797_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_795_);
v___x_797_ = v___x_787_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
else
{
lean_object* v___x_801_; lean_object* v___x_803_; 
lean_dec(v_a_785_);
v___x_801_ = lean_box(0);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_801_);
v___x_803_ = v___x_787_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg___boxed(lean_object* v_pu_806_, lean_object* v_fvarId_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
uint8_t v_pu_boxed_811_; lean_object* v_res_812_; 
v_pu_boxed_811_ = lean_unbox(v_pu_806_);
v_res_812_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v_pu_boxed_811_, v_fvarId_807_, v_a_808_, v_a_809_);
lean_dec(v_a_809_);
lean_dec(v_a_808_);
lean_dec(v_fvarId_807_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f(uint8_t v_pu_813_, lean_object* v_fvarId_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v_pu_813_, v_fvarId_814_, v_a_816_, v_a_818_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___boxed(lean_object* v_pu_821_, lean_object* v_fvarId_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
uint8_t v_pu_boxed_828_; lean_object* v_res_829_; 
v_pu_boxed_828_ = lean_unbox(v_pu_821_);
v_res_829_ = l_Lean_Compiler_LCNF_findLetValue_x3f(v_pu_boxed_828_, v_fvarId_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_fvarId_822_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg(lean_object* v_fvarId_830_, lean_object* v_a_831_, lean_object* v_a_832_){
_start:
{
uint8_t v___x_834_; lean_object* v___x_835_; 
v___x_834_ = 0;
v___x_835_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_834_, v_fvarId_830_, v_a_831_, v_a_832_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_879_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_879_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_879_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_879_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
if (lean_obj_tag(v_a_836_) == 1)
{
lean_object* v_val_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_878_; 
v_val_846_ = lean_ctor_get(v_a_836_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_878_ == 0)
{
v___x_848_ = v_a_836_;
v_isShared_849_ = v_isSharedCheck_878_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_val_846_);
lean_dec(v_a_836_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_878_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
if (lean_obj_tag(v_val_846_) == 3)
{
lean_object* v_declName_850_; lean_object* v___x_851_; lean_object* v_env_852_; uint8_t v___x_853_; lean_object* v___x_854_; 
lean_del_object(v___x_838_);
v_declName_850_ = lean_ctor_get(v_val_846_, 0);
lean_inc(v_declName_850_);
lean_dec_ref(v_val_846_);
v___x_851_ = lean_st_ref_get(v_a_832_);
v_env_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc_ref(v_env_852_);
lean_dec(v___x_851_);
v___x_853_ = 0;
v___x_854_ = l_Lean_Environment_find_x3f(v_env_852_, v_declName_850_, v___x_853_);
if (lean_obj_tag(v___x_854_) == 1)
{
lean_object* v_val_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_873_; 
lean_del_object(v___x_848_);
v_val_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_873_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_873_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_val_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_873_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
if (lean_obj_tag(v_val_855_) == 6)
{
lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_867_; 
lean_del_object(v___x_857_);
v_isSharedCheck_867_ = !lean_is_exclusive(v_val_855_);
if (v_isSharedCheck_867_ == 0)
{
lean_object* v_unused_868_; 
v_unused_868_ = lean_ctor_get(v_val_855_, 0);
lean_dec(v_unused_868_);
v___x_860_ = v_val_855_;
v_isShared_861_ = v_isSharedCheck_867_;
goto v_resetjp_859_;
}
else
{
lean_dec(v_val_855_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_867_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
uint8_t v___x_862_; lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_862_ = 1;
v___x_863_ = lean_box(v___x_862_);
if (v_isShared_861_ == 0)
{
lean_ctor_set_tag(v___x_860_, 0);
lean_ctor_set(v___x_860_, 0, v___x_863_);
v___x_865_ = v___x_860_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_863_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
else
{
lean_object* v___x_869_; lean_object* v___x_871_; 
lean_dec(v_val_855_);
v___x_869_ = lean_box(v___x_853_);
if (v_isShared_858_ == 0)
{
lean_ctor_set_tag(v___x_857_, 0);
lean_ctor_set(v___x_857_, 0, v___x_869_);
v___x_871_ = v___x_857_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
else
{
lean_object* v___x_874_; lean_object* v___x_876_; 
lean_dec(v___x_854_);
v___x_874_ = lean_box(v___x_853_);
if (v_isShared_849_ == 0)
{
lean_ctor_set_tag(v___x_848_, 0);
lean_ctor_set(v___x_848_, 0, v___x_874_);
v___x_876_ = v___x_848_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_874_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
else
{
lean_del_object(v___x_848_);
lean_dec(v_val_846_);
goto v___jp_840_;
}
}
}
else
{
lean_dec(v_a_836_);
goto v___jp_840_;
}
v___jp_840_:
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_841_ = 0;
v___x_842_ = lean_box(v___x_841_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_842_);
v___x_844_ = v___x_838_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_a_880_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_835_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_835_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg___boxed(lean_object* v_fvarId_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_888_, v_a_889_, v_a_890_);
lean_dec(v_a_890_);
lean_dec(v_a_889_);
lean_dec(v_fvarId_888_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp(lean_object* v_fvarId_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_893_, v_a_895_, v_a_897_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___boxed(lean_object* v_fvarId_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_Compiler_LCNF_isConstructorApp(v_fvarId_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_fvarId_900_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(lean_object* v_arg_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
if (lean_obj_tag(v_arg_907_) == 1)
{
lean_object* v_fvarId_911_; lean_object* v___x_912_; 
v_fvarId_911_ = lean_ctor_get(v_arg_907_, 0);
v___x_912_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_911_, v_a_908_, v_a_909_);
return v___x_912_;
}
else
{
uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_913_ = 0;
v___x_914_ = lean_box(v___x_913_);
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg___boxed(lean_object* v_arg_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(v_arg_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec(v_a_917_);
lean_dec(v_arg_916_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp(uint8_t v_pu_921_, lean_object* v_arg_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(v_arg_922_, v_a_924_, v_a_926_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___boxed(lean_object* v_pu_929_, lean_object* v_arg_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
uint8_t v_pu_boxed_936_; lean_object* v_res_937_; 
v_pu_boxed_936_ = lean_unbox(v_pu_929_);
v_res_937_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp(v_pu_boxed_936_, v_arg_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
lean_dec(v_arg_930_);
return v_res_937_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getParam___closed__0(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = lean_mk_string_unchecked("unknown parameter ", 18, 18);
return v___x_938_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getParam___closed__1(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_obj_once(&l_Lean_Compiler_LCNF_getParam___closed__0, &l_Lean_Compiler_LCNF_getParam___closed__0_once, _init_l_Lean_Compiler_LCNF_getParam___closed__0);
v___x_940_ = l_Lean_stringToMessageData(v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam(uint8_t v_pu_941_, lean_object* v_fvarId_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_){
_start:
{
lean_object* v___x_948_; lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_961_; 
v___x_948_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_941_, v_fvarId_942_, v_a_944_, v_a_946_);
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_961_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_961_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_961_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
if (lean_obj_tag(v_a_949_) == 1)
{
lean_object* v_val_953_; lean_object* v___x_955_; 
lean_dec(v_fvarId_942_);
v_val_953_ = lean_ctor_get(v_a_949_, 0);
lean_inc(v_val_953_);
lean_dec_ref(v_a_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v_val_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_val_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
lean_del_object(v___x_951_);
lean_dec(v_a_949_);
v___x_957_ = lean_obj_once(&l_Lean_Compiler_LCNF_getParam___closed__1, &l_Lean_Compiler_LCNF_getParam___closed__1_once, _init_l_Lean_Compiler_LCNF_getParam___closed__1);
v___x_958_ = l_Lean_MessageData_ofName(v_fvarId_942_);
v___x_959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_959_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam___boxed(lean_object* v_pu_962_, lean_object* v_fvarId_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
uint8_t v_pu_boxed_969_; lean_object* v_res_970_; 
v_pu_boxed_969_ = lean_unbox(v_pu_962_);
v_res_970_ = l_Lean_Compiler_LCNF_getParam(v_pu_boxed_969_, v_fvarId_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_);
lean_dec(v_a_967_);
lean_dec_ref(v_a_966_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
return v_res_970_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getLetDecl___closed__0(void){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_mk_string_unchecked("unknown let-declaration ", 24, 24);
return v___x_971_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getLetDecl___closed__1(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_obj_once(&l_Lean_Compiler_LCNF_getLetDecl___closed__0, &l_Lean_Compiler_LCNF_getLetDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_getLetDecl___closed__0);
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl(uint8_t v_pu_974_, lean_object* v_fvarId_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v___x_981_; lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_994_; 
v___x_981_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_974_, v_fvarId_975_, v_a_977_, v_a_979_);
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_994_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_994_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_994_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
if (lean_obj_tag(v_a_982_) == 1)
{
lean_object* v_val_986_; lean_object* v___x_988_; 
lean_dec(v_fvarId_975_);
v_val_986_ = lean_ctor_get(v_a_982_, 0);
lean_inc(v_val_986_);
lean_dec_ref(v_a_982_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v_val_986_);
v___x_988_ = v___x_984_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_val_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
lean_del_object(v___x_984_);
lean_dec(v_a_982_);
v___x_990_ = lean_obj_once(&l_Lean_Compiler_LCNF_getLetDecl___closed__1, &l_Lean_Compiler_LCNF_getLetDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_getLetDecl___closed__1);
v___x_991_ = l_Lean_MessageData_ofName(v_fvarId_975_);
v___x_992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_992_, v_a_976_, v_a_977_, v_a_978_, v_a_979_);
return v___x_993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl___boxed(lean_object* v_pu_995_, lean_object* v_fvarId_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
uint8_t v_pu_boxed_1002_; lean_object* v_res_1003_; 
v_pu_boxed_1002_ = lean_unbox(v_pu_995_);
v_res_1003_ = l_Lean_Compiler_LCNF_getLetDecl(v_pu_boxed_1002_, v_fvarId_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
return v_res_1003_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getFunDecl___closed__0(void){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_mk_string_unchecked("unknown local function ", 23, 23);
return v___x_1004_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getFunDecl___closed__1(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_obj_once(&l_Lean_Compiler_LCNF_getFunDecl___closed__0, &l_Lean_Compiler_LCNF_getFunDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_getFunDecl___closed__0);
v___x_1006_ = l_Lean_stringToMessageData(v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t v_pu_1007_, lean_object* v_fvarId_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___x_1014_; lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1027_; 
v___x_1014_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_1007_, v_fvarId_1008_, v_a_1010_, v_a_1012_);
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1017_ = v___x_1014_;
v_isShared_1018_ = v_isSharedCheck_1027_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1027_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
if (lean_obj_tag(v_a_1015_) == 1)
{
lean_object* v_val_1019_; lean_object* v___x_1021_; 
lean_dec(v_fvarId_1008_);
v_val_1019_ = lean_ctor_get(v_a_1015_, 0);
lean_inc(v_val_1019_);
lean_dec_ref(v_a_1015_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_val_1019_);
v___x_1021_ = v___x_1017_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_val_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
else
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
lean_del_object(v___x_1017_);
lean_dec(v_a_1015_);
v___x_1023_ = lean_obj_once(&l_Lean_Compiler_LCNF_getFunDecl___closed__1, &l_Lean_Compiler_LCNF_getFunDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_getFunDecl___closed__1);
v___x_1024_ = l_Lean_MessageData_ofName(v_fvarId_1008_);
v___x_1025_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1023_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_1025_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl___boxed(lean_object* v_pu_1028_, lean_object* v_fvarId_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
uint8_t v_pu_boxed_1035_; lean_object* v_res_1036_; 
v_pu_boxed_1035_ = lean_unbox(v_pu_1028_);
v_res_1036_ = l_Lean_Compiler_LCNF_getFunDecl(v_pu_boxed_1035_, v_fvarId_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg(lean_object* v_f_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v_lctx_1043_; lean_object* v_nextIdx_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1055_; 
v___x_1041_ = lean_st_ref_get(v_a_1039_);
lean_dec(v___x_1041_);
v___x_1042_ = lean_st_ref_take(v_a_1038_);
v_lctx_1043_ = lean_ctor_get(v___x_1042_, 0);
v_nextIdx_1044_ = lean_ctor_get(v___x_1042_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1046_ = v___x_1042_;
v_isShared_1047_ = v_isSharedCheck_1055_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_nextIdx_1044_);
lean_inc(v_lctx_1043_);
lean_dec(v___x_1042_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1055_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lean_apply_1(v_f_1037_, v_lctx_1043_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v___x_1048_);
v___x_1050_ = v___x_1046_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_nextIdx_1044_);
v___x_1050_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = lean_st_ref_set(v_a_1038_, v___x_1050_);
v___x_1052_ = lean_box(0);
v___x_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg___boxed(lean_object* v_f_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lean_Compiler_LCNF_modifyLCtx___redArg(v_f_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec(v_a_1057_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx(lean_object* v_f_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v_lctx_1069_; lean_object* v_nextIdx_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1081_; 
v___x_1067_ = lean_st_ref_get(v_a_1065_);
lean_dec(v___x_1067_);
v___x_1068_ = lean_st_ref_take(v_a_1063_);
v_lctx_1069_ = lean_ctor_get(v___x_1068_, 0);
v_nextIdx_1070_ = lean_ctor_get(v___x_1068_, 1);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1072_ = v___x_1068_;
v_isShared_1073_ = v_isSharedCheck_1081_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_nextIdx_1070_);
lean_inc(v_lctx_1069_);
lean_dec(v___x_1068_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1081_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1074_ = lean_apply_1(v_f_1061_, v_lctx_1069_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 0, v___x_1074_);
v___x_1076_ = v___x_1072_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_nextIdx_1070_);
v___x_1076_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1077_ = lean_st_ref_set(v_a_1063_, v___x_1076_);
v___x_1078_ = lean_box(0);
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___boxed(lean_object* v_f_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lean_Compiler_LCNF_modifyLCtx(v_f_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t v_pu_1089_, lean_object* v_decl_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_lctx_1096_; lean_object* v_nextIdx_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1108_; 
v___x_1094_ = lean_st_ref_get(v_a_1092_);
lean_dec(v___x_1094_);
v___x_1095_ = lean_st_ref_take(v_a_1091_);
v_lctx_1096_ = lean_ctor_get(v___x_1095_, 0);
v_nextIdx_1097_ = lean_ctor_get(v___x_1095_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1099_ = v___x_1095_;
v_isShared_1100_ = v_isSharedCheck_1108_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_nextIdx_1097_);
lean_inc(v_lctx_1096_);
lean_dec(v___x_1095_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1108_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1101_ = l_Lean_Compiler_LCNF_LCtx_eraseLetDecl(v_pu_1089_, v_lctx_1096_, v_decl_1090_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1101_);
v___x_1103_ = v___x_1099_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_nextIdx_1097_);
v___x_1103_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1104_ = lean_st_ref_set(v_a_1091_, v___x_1103_);
v___x_1105_ = lean_box(0);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
return v___x_1106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg___boxed(lean_object* v_pu_1109_, lean_object* v_decl_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
uint8_t v_pu_boxed_1114_; lean_object* v_res_1115_; 
v_pu_boxed_1114_ = lean_unbox(v_pu_1109_);
v_res_1115_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_boxed_1114_, v_decl_1110_, v_a_1111_, v_a_1112_);
lean_dec(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_decl_1110_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl(uint8_t v_pu_1116_, lean_object* v_decl_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_1116_, v_decl_1117_, v_a_1119_, v_a_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___boxed(lean_object* v_pu_1124_, lean_object* v_decl_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
uint8_t v_pu_boxed_1131_; lean_object* v_res_1132_; 
v_pu_boxed_1131_ = lean_unbox(v_pu_1124_);
v_res_1132_ = l_Lean_Compiler_LCNF_eraseLetDecl(v_pu_boxed_1131_, v_decl_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_);
lean_dec(v_a_1129_);
lean_dec_ref(v_a_1128_);
lean_dec(v_a_1127_);
lean_dec_ref(v_a_1126_);
lean_dec_ref(v_decl_1125_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t v_pu_1133_, lean_object* v_decl_1134_, uint8_t v_recursive_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_lctx_1141_; lean_object* v_nextIdx_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1153_; 
v___x_1139_ = lean_st_ref_get(v_a_1137_);
lean_dec(v___x_1139_);
v___x_1140_ = lean_st_ref_take(v_a_1136_);
v_lctx_1141_ = lean_ctor_get(v___x_1140_, 0);
v_nextIdx_1142_ = lean_ctor_get(v___x_1140_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1144_ = v___x_1140_;
v_isShared_1145_ = v_isSharedCheck_1153_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_nextIdx_1142_);
lean_inc(v_lctx_1141_);
lean_dec(v___x_1140_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1153_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1146_ = l_Lean_Compiler_LCNF_LCtx_eraseFunDecl(v_pu_1133_, v_lctx_1141_, v_decl_1134_, v_recursive_1135_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1146_);
v___x_1148_ = v___x_1144_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1146_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_nextIdx_1142_);
v___x_1148_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = lean_st_ref_set(v_a_1136_, v___x_1148_);
v___x_1150_ = lean_box(0);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg___boxed(lean_object* v_pu_1154_, lean_object* v_decl_1155_, lean_object* v_recursive_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_){
_start:
{
uint8_t v_pu_boxed_1160_; uint8_t v_recursive_boxed_1161_; lean_object* v_res_1162_; 
v_pu_boxed_1160_ = lean_unbox(v_pu_1154_);
v_recursive_boxed_1161_ = lean_unbox(v_recursive_1156_);
v_res_1162_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_boxed_1160_, v_decl_1155_, v_recursive_boxed_1161_, v_a_1157_, v_a_1158_);
lean_dec(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_decl_1155_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl(uint8_t v_pu_1163_, lean_object* v_decl_1164_, uint8_t v_recursive_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1163_, v_decl_1164_, v_recursive_1165_, v_a_1167_, v_a_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___boxed(lean_object* v_pu_1172_, lean_object* v_decl_1173_, lean_object* v_recursive_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
uint8_t v_pu_boxed_1180_; uint8_t v_recursive_boxed_1181_; lean_object* v_res_1182_; 
v_pu_boxed_1180_ = lean_unbox(v_pu_1172_);
v_recursive_boxed_1181_ = lean_unbox(v_recursive_1174_);
v_res_1182_ = l_Lean_Compiler_LCNF_eraseFunDecl(v_pu_boxed_1180_, v_decl_1173_, v_recursive_boxed_1181_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
lean_dec(v_a_1178_);
lean_dec_ref(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec_ref(v_decl_1173_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t v_pu_1183_, lean_object* v_code_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v_lctx_1190_; lean_object* v_nextIdx_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1202_; 
v___x_1188_ = lean_st_ref_get(v_a_1186_);
lean_dec(v___x_1188_);
v___x_1189_ = lean_st_ref_take(v_a_1185_);
v_lctx_1190_ = lean_ctor_get(v___x_1189_, 0);
v_nextIdx_1191_ = lean_ctor_get(v___x_1189_, 1);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1193_ = v___x_1189_;
v_isShared_1194_ = v_isSharedCheck_1202_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_nextIdx_1191_);
lean_inc(v_lctx_1190_);
lean_dec(v___x_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1202_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = l_Lean_Compiler_LCNF_LCtx_eraseCode(v_pu_1183_, v_code_1184_, v_lctx_1190_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1195_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_nextIdx_1191_);
v___x_1197_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_st_ref_set(v_a_1185_, v___x_1197_);
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
return v___x_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg___boxed(lean_object* v_pu_1203_, lean_object* v_code_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
uint8_t v_pu_boxed_1208_; lean_object* v_res_1209_; 
v_pu_boxed_1208_ = lean_unbox(v_pu_1203_);
v_res_1209_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_boxed_1208_, v_code_1204_, v_a_1205_, v_a_1206_);
lean_dec(v_a_1206_);
lean_dec(v_a_1205_);
lean_dec_ref(v_code_1204_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode(uint8_t v_pu_1210_, lean_object* v_code_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_1210_, v_code_1211_, v_a_1213_, v_a_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___boxed(lean_object* v_pu_1218_, lean_object* v_code_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
uint8_t v_pu_boxed_1225_; lean_object* v_res_1226_; 
v_pu_boxed_1225_ = lean_unbox(v_pu_1218_);
v_res_1226_ = l_Lean_Compiler_LCNF_eraseCode(v_pu_boxed_1225_, v_code_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
lean_dec(v_a_1223_);
lean_dec_ref(v_a_1222_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec_ref(v_code_1219_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t v_pu_1227_, lean_object* v_param_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v_lctx_1234_; lean_object* v_nextIdx_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1246_; 
v___x_1232_ = lean_st_ref_get(v_a_1230_);
lean_dec(v___x_1232_);
v___x_1233_ = lean_st_ref_take(v_a_1229_);
v_lctx_1234_ = lean_ctor_get(v___x_1233_, 0);
v_nextIdx_1235_ = lean_ctor_get(v___x_1233_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1237_ = v___x_1233_;
v_isShared_1238_ = v_isSharedCheck_1246_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_nextIdx_1235_);
lean_inc(v_lctx_1234_);
lean_dec(v___x_1233_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1246_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; lean_object* v___x_1241_; 
v___x_1239_ = l_Lean_Compiler_LCNF_LCtx_eraseParam(v_pu_1227_, v_lctx_1234_, v_param_1228_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v___x_1239_);
v___x_1241_ = v___x_1237_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1239_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_nextIdx_1235_);
v___x_1241_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1242_ = lean_st_ref_set(v_a_1229_, v___x_1241_);
v___x_1243_ = lean_box(0);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg___boxed(lean_object* v_pu_1247_, lean_object* v_param_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
uint8_t v_pu_boxed_1252_; lean_object* v_res_1253_; 
v_pu_boxed_1252_ = lean_unbox(v_pu_1247_);
v_res_1253_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_boxed_1252_, v_param_1248_, v_a_1249_, v_a_1250_);
lean_dec(v_a_1250_);
lean_dec(v_a_1249_);
lean_dec_ref(v_param_1248_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam(uint8_t v_pu_1254_, lean_object* v_param_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_1254_, v_param_1255_, v_a_1257_, v_a_1259_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___boxed(lean_object* v_pu_1262_, lean_object* v_param_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
uint8_t v_pu_boxed_1269_; lean_object* v_res_1270_; 
v_pu_boxed_1269_ = lean_unbox(v_pu_1262_);
v_res_1270_ = l_Lean_Compiler_LCNF_eraseParam(v_pu_boxed_1269_, v_param_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_);
lean_dec(v_a_1267_);
lean_dec_ref(v_a_1266_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
lean_dec_ref(v_param_1263_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t v_pu_1271_, lean_object* v_params_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_lctx_1278_; lean_object* v_nextIdx_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1290_; 
v___x_1276_ = lean_st_ref_get(v_a_1274_);
lean_dec(v___x_1276_);
v___x_1277_ = lean_st_ref_take(v_a_1273_);
v_lctx_1278_ = lean_ctor_get(v___x_1277_, 0);
v_nextIdx_1279_ = lean_ctor_get(v___x_1277_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1281_ = v___x_1277_;
v_isShared_1282_ = v_isSharedCheck_1290_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_nextIdx_1279_);
lean_inc(v_lctx_1278_);
lean_dec(v___x_1277_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1290_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1283_ = l_Lean_Compiler_LCNF_LCtx_eraseParams(v_pu_1271_, v_lctx_1278_, v_params_1272_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1283_);
v___x_1285_ = v___x_1281_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_nextIdx_1279_);
v___x_1285_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1286_ = lean_st_ref_set(v_a_1273_, v___x_1285_);
v___x_1287_ = lean_box(0);
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg___boxed(lean_object* v_pu_1291_, lean_object* v_params_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_){
_start:
{
uint8_t v_pu_boxed_1296_; lean_object* v_res_1297_; 
v_pu_boxed_1296_ = lean_unbox(v_pu_1291_);
v_res_1297_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_boxed_1296_, v_params_1292_, v_a_1293_, v_a_1294_);
lean_dec(v_a_1294_);
lean_dec(v_a_1293_);
lean_dec_ref(v_params_1292_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams(uint8_t v_pu_1298_, lean_object* v_params_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_1298_, v_params_1299_, v_a_1301_, v_a_1303_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___boxed(lean_object* v_pu_1306_, lean_object* v_params_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_){
_start:
{
uint8_t v_pu_boxed_1313_; lean_object* v_res_1314_; 
v_pu_boxed_1313_ = lean_unbox(v_pu_1306_);
v_res_1314_ = l_Lean_Compiler_LCNF_eraseParams(v_pu_boxed_1313_, v_params_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
lean_dec(v_a_1309_);
lean_dec_ref(v_a_1308_);
lean_dec_ref(v_params_1307_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t v_pu_1315_, lean_object* v_decl_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_){
_start:
{
switch(lean_obj_tag(v_decl_1316_))
{
case 0:
{
lean_object* v_decl_1320_; lean_object* v___x_1321_; 
v_decl_1320_ = lean_ctor_get(v_decl_1316_, 0);
v___x_1321_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_1315_, v_decl_1320_, v_a_1317_, v_a_1318_);
return v___x_1321_;
}
case 1:
{
lean_object* v_decl_1322_; uint8_t v___x_1323_; lean_object* v___x_1324_; 
v_decl_1322_ = lean_ctor_get(v_decl_1316_, 0);
v___x_1323_ = 1;
v___x_1324_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1315_, v_decl_1322_, v___x_1323_, v_a_1317_, v_a_1318_);
return v___x_1324_;
}
case 2:
{
lean_object* v_decl_1325_; uint8_t v___x_1326_; lean_object* v___x_1327_; 
v_decl_1325_ = lean_ctor_get(v_decl_1316_, 0);
v___x_1326_ = 1;
v___x_1327_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1315_, v_decl_1325_, v___x_1326_, v_a_1317_, v_a_1318_);
return v___x_1327_;
}
default: 
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_box(0);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg___boxed(lean_object* v_pu_1330_, lean_object* v_decl_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
uint8_t v_pu_boxed_1335_; lean_object* v_res_1336_; 
v_pu_boxed_1335_ = lean_unbox(v_pu_1330_);
v_res_1336_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_boxed_1335_, v_decl_1331_, v_a_1332_, v_a_1333_);
lean_dec(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_decl_1331_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl(uint8_t v_pu_1337_, lean_object* v_decl_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_1337_, v_decl_1338_, v_a_1340_, v_a_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___boxed(lean_object* v_pu_1345_, lean_object* v_decl_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_){
_start:
{
uint8_t v_pu_boxed_1352_; lean_object* v_res_1353_; 
v_pu_boxed_1352_ = lean_unbox(v_pu_1345_);
v_res_1353_ = l_Lean_Compiler_LCNF_eraseCodeDecl(v_pu_boxed_1352_, v_decl_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
lean_dec(v_a_1348_);
lean_dec_ref(v_a_1347_);
lean_dec_ref(v_decl_1346_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(uint8_t v_pu_1354_, lean_object* v_as_1355_, size_t v_i_1356_, size_t v_stop_1357_, lean_object* v_b_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
uint8_t v___x_1362_; 
v___x_1362_ = lean_usize_dec_eq(v_i_1356_, v_stop_1357_);
if (v___x_1362_ == 0)
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_array_uget_borrowed(v_as_1355_, v_i_1356_);
v___x_1364_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_1354_, v___x_1363_, v___y_1359_, v___y_1360_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; size_t v___x_1366_; size_t v___x_1367_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref(v___x_1364_);
v___x_1366_ = ((size_t)1ULL);
v___x_1367_ = lean_usize_add(v_i_1356_, v___x_1366_);
v_i_1356_ = v___x_1367_;
v_b_1358_ = v_a_1365_;
goto _start;
}
else
{
return v___x_1364_;
}
}
else
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_b_1358_);
return v___x_1369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg___boxed(lean_object* v_pu_1370_, lean_object* v_as_1371_, lean_object* v_i_1372_, lean_object* v_stop_1373_, lean_object* v_b_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v_pu_boxed_1378_; size_t v_i_boxed_1379_; size_t v_stop_boxed_1380_; lean_object* v_res_1381_; 
v_pu_boxed_1378_ = lean_unbox(v_pu_1370_);
v_i_boxed_1379_ = lean_unbox_usize(v_i_1372_);
lean_dec(v_i_1372_);
v_stop_boxed_1380_ = lean_unbox_usize(v_stop_1373_);
lean_dec(v_stop_1373_);
v_res_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_boxed_1378_, v_as_1371_, v_i_boxed_1379_, v_stop_boxed_1380_, v_b_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v_as_1371_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls(uint8_t v_pu_1382_, lean_object* v_decls_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = lean_array_get_size(v_decls_1383_);
v___x_1391_ = lean_box(0);
v___x_1392_ = lean_nat_dec_lt(v___x_1389_, v___x_1390_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
return v___x_1393_;
}
else
{
uint8_t v___x_1394_; 
v___x_1394_ = lean_nat_dec_le(v___x_1390_, v___x_1390_);
if (v___x_1394_ == 0)
{
if (v___x_1392_ == 0)
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1391_);
return v___x_1395_;
}
else
{
size_t v___x_1396_; size_t v___x_1397_; lean_object* v___x_1398_; 
v___x_1396_ = ((size_t)0ULL);
v___x_1397_ = lean_usize_of_nat(v___x_1390_);
v___x_1398_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1382_, v_decls_1383_, v___x_1396_, v___x_1397_, v___x_1391_, v_a_1385_, v_a_1387_);
return v___x_1398_;
}
}
else
{
size_t v___x_1399_; size_t v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = ((size_t)0ULL);
v___x_1400_ = lean_usize_of_nat(v___x_1390_);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1382_, v_decls_1383_, v___x_1399_, v___x_1400_, v___x_1391_, v_a_1385_, v_a_1387_);
return v___x_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls___boxed(lean_object* v_pu_1402_, lean_object* v_decls_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
uint8_t v_pu_boxed_1409_; lean_object* v_res_1410_; 
v_pu_boxed_1409_ = lean_unbox(v_pu_1402_);
v_res_1410_ = l_Lean_Compiler_LCNF_eraseCodeDecls(v_pu_boxed_1409_, v_decls_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_);
lean_dec(v_a_1407_);
lean_dec_ref(v_a_1406_);
lean_dec(v_a_1405_);
lean_dec_ref(v_a_1404_);
lean_dec_ref(v_decls_1403_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(uint8_t v_pu_1411_, lean_object* v_as_1412_, size_t v_i_1413_, size_t v_stop_1414_, lean_object* v_b_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1411_, v_as_1412_, v_i_1413_, v_stop_1414_, v_b_1415_, v___y_1417_, v___y_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___boxed(lean_object* v_pu_1422_, lean_object* v_as_1423_, lean_object* v_i_1424_, lean_object* v_stop_1425_, lean_object* v_b_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
uint8_t v_pu_boxed_1432_; size_t v_i_boxed_1433_; size_t v_stop_boxed_1434_; lean_object* v_res_1435_; 
v_pu_boxed_1432_ = lean_unbox(v_pu_1422_);
v_i_boxed_1433_ = lean_unbox_usize(v_i_1424_);
lean_dec(v_i_1424_);
v_stop_boxed_1434_ = lean_unbox_usize(v_stop_1425_);
lean_dec(v_stop_1425_);
v_res_1435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(v_pu_boxed_1432_, v_as_1423_, v_i_boxed_1433_, v_stop_boxed_1434_, v_b_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec_ref(v_as_1423_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(lean_object* v_f_1436_, lean_object* v_v_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
if (lean_obj_tag(v_v_1437_) == 0)
{
lean_object* v_code_1443_; lean_object* v___x_1444_; 
v_code_1443_ = lean_ctor_get(v_v_1437_, 0);
lean_inc_ref(v_code_1443_);
lean_dec_ref(v_v_1437_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
v___x_1444_ = lean_apply_6(v_f_1436_, v_code_1443_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, lean_box(0));
return v___x_1444_;
}
else
{
lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1452_; 
lean_dec_ref(v_f_1436_);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_v_1437_);
if (v_isSharedCheck_1452_ == 0)
{
lean_object* v_unused_1453_; 
v_unused_1453_ = lean_ctor_get(v_v_1437_, 0);
lean_dec(v_unused_1453_);
v___x_1446_ = v_v_1437_;
v_isShared_1447_ = v_isSharedCheck_1452_;
goto v_resetjp_1445_;
}
else
{
lean_dec(v_v_1437_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1452_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1448_ = lean_box(0);
if (v_isShared_1447_ == 0)
{
lean_ctor_set_tag(v___x_1446_, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1448_);
v___x_1450_ = v___x_1446_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg___boxed(lean_object* v_f_1454_, lean_object* v_v_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v_f_1454_, v_v_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(uint8_t v_pu_1462_, lean_object* v_f_1463_, lean_object* v_v_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v_f_1463_, v_v_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___boxed(lean_object* v_pu_1471_, lean_object* v_f_1472_, lean_object* v_v_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
uint8_t v_pu_boxed_1479_; lean_object* v_res_1480_; 
v_pu_boxed_1479_ = lean_unbox(v_pu_1471_);
v_res_1480_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(v_pu_boxed_1479_, v_f_1472_, v_v_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t v_pu_1481_, lean_object* v_decl_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_toSignature_1488_; lean_object* v_value_1489_; lean_object* v_params_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v_toSignature_1488_ = lean_ctor_get(v_decl_1482_, 0);
lean_inc_ref(v_toSignature_1488_);
v_value_1489_ = lean_ctor_get(v_decl_1482_, 1);
lean_inc_ref(v_value_1489_);
lean_dec_ref(v_decl_1482_);
v_params_1490_ = lean_ctor_get(v_toSignature_1488_, 3);
lean_inc_ref(v_params_1490_);
lean_dec_ref(v_toSignature_1488_);
v___x_1491_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_1481_, v_params_1490_, v_a_1484_, v_a_1486_);
lean_dec_ref(v_params_1490_);
lean_dec_ref(v___x_1491_);
v___x_1492_ = lean_box(v_pu_1481_);
v___x_1493_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_eraseCode___boxed), 7, 1);
lean_closure_set(v___x_1493_, 0, v___x_1492_);
v___x_1494_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v___x_1493_, v_value_1489_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl___boxed(lean_object* v_pu_1495_, lean_object* v_decl_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
uint8_t v_pu_boxed_1502_; lean_object* v_res_1503_; 
v_pu_boxed_1502_ = lean_unbox(v_pu_1495_);
v_res_1503_ = l_Lean_Compiler_LCNF_eraseDecl(v_pu_boxed_1502_, v_decl_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
lean_dec(v_a_1498_);
lean_dec_ref(v_a_1497_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase(uint8_t v_pu_1504_, lean_object* v_decl_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_Compiler_LCNF_eraseDecl(v_pu_1504_, v_decl_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase___boxed(lean_object* v_pu_1512_, lean_object* v_decl_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_){
_start:
{
uint8_t v_pu_boxed_1519_; lean_object* v_res_1520_; 
v_pu_boxed_1519_ = lean_unbox(v_pu_1512_);
v_res_1520_ = l_Lean_Compiler_LCNF_Decl_erase(v_pu_boxed_1519_, v_decl_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(lean_object* v_msg_1521_){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = l_Lean_instInhabitedExpr;
v___x_1523_ = lean_panic_fn_borrowed(v___x_1522_, v_msg_1521_);
return v___x_1523_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2(void){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_1524_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1(void){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_mk_string_unchecked("_private.Lean.Compiler.LCNF.CompilerM.0.Lean.Compiler.LCNF.normExprImp.go", 73, 73);
return v___x_1525_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0(void){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.CompilerM", 28, 28);
return v___x_1526_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1527_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2, &l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2);
v___x_1528_ = lean_unsigned_to_nat(20u);
v___x_1529_ = lean_unsigned_to_nat(215u);
v___x_1530_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1, &l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1);
v___x_1531_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0, &l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0);
v___x_1532_ = l_mkPanicMessageWithDecl(v___x_1531_, v___x_1530_, v___x_1529_, v___x_1528_, v___x_1527_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t v_pu_1533_, lean_object* v_s_1534_, uint8_t v_translator_1535_, lean_object* v_e_1536_){
_start:
{
uint8_t v___x_1537_; 
v___x_1537_ = l_Lean_Expr_hasFVar(v_e_1536_);
if (v___x_1537_ == 0)
{
return v_e_1536_;
}
else
{
switch(lean_obj_tag(v_e_1536_))
{
case 1:
{
lean_object* v_fvarId_1538_; lean_object* v___x_1539_; 
v_fvarId_1538_ = lean_ctor_get(v_e_1536_, 0);
v___x_1539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1534_, v_fvarId_1538_);
if (lean_obj_tag(v___x_1539_) == 0)
{
return v_e_1536_;
}
else
{
lean_object* v_val_1540_; 
lean_dec_ref(v_e_1536_);
v_val_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_val_1540_);
lean_dec_ref(v___x_1539_);
switch(lean_obj_tag(v_val_1540_))
{
case 0:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_Lean_Compiler_LCNF_erasedExpr;
return v___x_1541_;
}
case 1:
{
if (v_translator_1535_ == 0)
{
lean_object* v_fvarId_1542_; lean_object* v___x_1543_; 
v_fvarId_1542_ = lean_ctor_get(v_val_1540_, 0);
lean_inc(v_fvarId_1542_);
lean_dec_ref(v_val_1540_);
v___x_1543_ = l_Lean_Expr_fvar___override(v_fvarId_1542_);
v_e_1536_ = v___x_1543_;
goto _start;
}
else
{
lean_object* v_fvarId_1545_; lean_object* v___x_1546_; 
v_fvarId_1545_ = lean_ctor_get(v_val_1540_, 0);
lean_inc(v_fvarId_1545_);
lean_dec_ref(v_val_1540_);
v___x_1546_ = l_Lean_Expr_fvar___override(v_fvarId_1545_);
return v___x_1546_;
}
}
default: 
{
if (v_translator_1535_ == 0)
{
lean_object* v_expr_1547_; 
v_expr_1547_ = lean_ctor_get(v_val_1540_, 0);
lean_inc_ref(v_expr_1547_);
lean_dec_ref(v_val_1540_);
v_e_1536_ = v_expr_1547_;
goto _start;
}
else
{
lean_object* v_expr_1549_; 
v_expr_1549_ = lean_ctor_get(v_val_1540_, 0);
lean_inc_ref(v_expr_1549_);
lean_dec_ref(v_val_1540_);
return v_expr_1549_;
}
}
}
}
}
case 5:
{
lean_object* v_fn_1550_; lean_object* v_arg_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___y_1555_; size_t v___x_1559_; size_t v___x_1560_; uint8_t v___x_1561_; 
v_fn_1550_ = lean_ctor_get(v_e_1536_, 0);
v_arg_1551_ = lean_ctor_get(v_e_1536_, 1);
lean_inc_ref(v_fn_1550_);
v___x_1552_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_1533_, v_s_1534_, v_translator_1535_, v_fn_1550_);
lean_inc_ref(v_arg_1551_);
v___x_1553_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_arg_1551_);
v___x_1559_ = lean_ptr_addr(v_fn_1550_);
v___x_1560_ = lean_ptr_addr(v___x_1552_);
v___x_1561_ = lean_usize_dec_eq(v___x_1559_, v___x_1560_);
if (v___x_1561_ == 0)
{
v___y_1555_ = v___x_1561_;
goto v___jp_1554_;
}
else
{
size_t v___x_1562_; size_t v___x_1563_; uint8_t v___x_1564_; 
v___x_1562_ = lean_ptr_addr(v_arg_1551_);
v___x_1563_ = lean_ptr_addr(v___x_1553_);
v___x_1564_ = lean_usize_dec_eq(v___x_1562_, v___x_1563_);
v___y_1555_ = v___x_1564_;
goto v___jp_1554_;
}
v___jp_1554_:
{
if (v___y_1555_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_dec_ref(v_e_1536_);
v___x_1556_ = l_Lean_Expr_app___override(v___x_1552_, v___x_1553_);
v___x_1557_ = l_Lean_Expr_headBeta(v___x_1556_);
return v___x_1557_;
}
else
{
lean_object* v___x_1558_; 
lean_dec_ref(v___x_1553_);
lean_dec_ref(v___x_1552_);
v___x_1558_ = l_Lean_Expr_headBeta(v_e_1536_);
return v___x_1558_;
}
}
}
case 6:
{
lean_object* v_binderName_1565_; lean_object* v_binderType_1566_; lean_object* v_body_1567_; uint8_t v_binderInfo_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___y_1572_; size_t v___x_1576_; size_t v___x_1577_; uint8_t v___x_1578_; 
v_binderName_1565_ = lean_ctor_get(v_e_1536_, 0);
v_binderType_1566_ = lean_ctor_get(v_e_1536_, 1);
v_body_1567_ = lean_ctor_get(v_e_1536_, 2);
v_binderInfo_1568_ = lean_ctor_get_uint8(v_e_1536_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1566_);
v___x_1569_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_binderType_1566_);
lean_inc_ref(v_body_1567_);
v___x_1570_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_body_1567_);
v___x_1576_ = lean_ptr_addr(v_binderType_1566_);
v___x_1577_ = lean_ptr_addr(v___x_1569_);
v___x_1578_ = lean_usize_dec_eq(v___x_1576_, v___x_1577_);
if (v___x_1578_ == 0)
{
v___y_1572_ = v___x_1578_;
goto v___jp_1571_;
}
else
{
size_t v___x_1579_; size_t v___x_1580_; uint8_t v___x_1581_; 
v___x_1579_ = lean_ptr_addr(v_body_1567_);
v___x_1580_ = lean_ptr_addr(v___x_1570_);
v___x_1581_ = lean_usize_dec_eq(v___x_1579_, v___x_1580_);
v___y_1572_ = v___x_1581_;
goto v___jp_1571_;
}
v___jp_1571_:
{
if (v___y_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_inc(v_binderName_1565_);
lean_dec_ref(v_e_1536_);
v___x_1573_ = l_Lean_Expr_lam___override(v_binderName_1565_, v___x_1569_, v___x_1570_, v_binderInfo_1568_);
return v___x_1573_;
}
else
{
uint8_t v___x_1574_; 
v___x_1574_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1568_, v_binderInfo_1568_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
lean_inc(v_binderName_1565_);
lean_dec_ref(v_e_1536_);
v___x_1575_ = l_Lean_Expr_lam___override(v_binderName_1565_, v___x_1569_, v___x_1570_, v_binderInfo_1568_);
return v___x_1575_;
}
else
{
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
return v_e_1536_;
}
}
}
}
case 7:
{
lean_object* v_binderName_1582_; lean_object* v_binderType_1583_; lean_object* v_body_1584_; uint8_t v_binderInfo_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; uint8_t v___y_1589_; size_t v___x_1593_; size_t v___x_1594_; uint8_t v___x_1595_; 
v_binderName_1582_ = lean_ctor_get(v_e_1536_, 0);
v_binderType_1583_ = lean_ctor_get(v_e_1536_, 1);
v_body_1584_ = lean_ctor_get(v_e_1536_, 2);
v_binderInfo_1585_ = lean_ctor_get_uint8(v_e_1536_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1583_);
v___x_1586_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_binderType_1583_);
lean_inc_ref(v_body_1584_);
v___x_1587_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_body_1584_);
v___x_1593_ = lean_ptr_addr(v_binderType_1583_);
v___x_1594_ = lean_ptr_addr(v___x_1586_);
v___x_1595_ = lean_usize_dec_eq(v___x_1593_, v___x_1594_);
if (v___x_1595_ == 0)
{
v___y_1589_ = v___x_1595_;
goto v___jp_1588_;
}
else
{
size_t v___x_1596_; size_t v___x_1597_; uint8_t v___x_1598_; 
v___x_1596_ = lean_ptr_addr(v_body_1584_);
v___x_1597_ = lean_ptr_addr(v___x_1587_);
v___x_1598_ = lean_usize_dec_eq(v___x_1596_, v___x_1597_);
v___y_1589_ = v___x_1598_;
goto v___jp_1588_;
}
v___jp_1588_:
{
if (v___y_1589_ == 0)
{
lean_object* v___x_1590_; 
lean_inc(v_binderName_1582_);
lean_dec_ref(v_e_1536_);
v___x_1590_ = l_Lean_Expr_forallE___override(v_binderName_1582_, v___x_1586_, v___x_1587_, v_binderInfo_1585_);
return v___x_1590_;
}
else
{
uint8_t v___x_1591_; 
v___x_1591_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1585_, v_binderInfo_1585_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
lean_inc(v_binderName_1582_);
lean_dec_ref(v_e_1536_);
v___x_1592_ = l_Lean_Expr_forallE___override(v_binderName_1582_, v___x_1586_, v___x_1587_, v_binderInfo_1585_);
return v___x_1592_;
}
else
{
lean_dec_ref(v___x_1587_);
lean_dec_ref(v___x_1586_);
return v_e_1536_;
}
}
}
}
case 8:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
lean_dec_ref(v_e_1536_);
v___x_1599_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3, &l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3);
v___x_1600_ = l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(v___x_1599_);
return v___x_1600_;
}
case 10:
{
lean_object* v_data_1601_; lean_object* v_expr_1602_; lean_object* v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; uint8_t v___x_1606_; 
v_data_1601_ = lean_ctor_get(v_e_1536_, 0);
v_expr_1602_ = lean_ctor_get(v_e_1536_, 1);
lean_inc_ref(v_expr_1602_);
v___x_1603_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_expr_1602_);
v___x_1604_ = lean_ptr_addr(v_expr_1602_);
v___x_1605_ = lean_ptr_addr(v___x_1603_);
v___x_1606_ = lean_usize_dec_eq(v___x_1604_, v___x_1605_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; 
lean_inc(v_data_1601_);
lean_dec_ref(v_e_1536_);
v___x_1607_ = l_Lean_Expr_mdata___override(v_data_1601_, v___x_1603_);
return v___x_1607_;
}
else
{
lean_dec_ref(v___x_1603_);
return v_e_1536_;
}
}
case 11:
{
lean_object* v_typeName_1608_; lean_object* v_idx_1609_; lean_object* v_struct_1610_; lean_object* v___x_1611_; size_t v___x_1612_; size_t v___x_1613_; uint8_t v___x_1614_; 
v_typeName_1608_ = lean_ctor_get(v_e_1536_, 0);
v_idx_1609_ = lean_ctor_get(v_e_1536_, 1);
v_struct_1610_ = lean_ctor_get(v_e_1536_, 2);
lean_inc_ref(v_struct_1610_);
v___x_1611_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1533_, v_s_1534_, v_translator_1535_, v_struct_1610_);
v___x_1612_ = lean_ptr_addr(v_struct_1610_);
v___x_1613_ = lean_ptr_addr(v___x_1611_);
v___x_1614_ = lean_usize_dec_eq(v___x_1612_, v___x_1613_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; 
lean_inc(v_idx_1609_);
lean_inc(v_typeName_1608_);
lean_dec_ref(v_e_1536_);
v___x_1615_ = l_Lean_Expr_proj___override(v_typeName_1608_, v_idx_1609_, v___x_1611_);
return v___x_1615_;
}
else
{
lean_dec_ref(v___x_1611_);
return v_e_1536_;
}
}
default: 
{
return v_e_1536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(uint8_t v_pu_1616_, lean_object* v_s_1617_, uint8_t v_translator_1618_, lean_object* v_e_1619_){
_start:
{
if (lean_obj_tag(v_e_1619_) == 5)
{
lean_object* v_fn_1620_; lean_object* v_arg_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; uint8_t v___y_1625_; size_t v___x_1627_; size_t v___x_1628_; uint8_t v___x_1629_; 
v_fn_1620_ = lean_ctor_get(v_e_1619_, 0);
v_arg_1621_ = lean_ctor_get(v_e_1619_, 1);
lean_inc_ref(v_fn_1620_);
v___x_1622_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_1616_, v_s_1617_, v_translator_1618_, v_fn_1620_);
lean_inc_ref(v_arg_1621_);
v___x_1623_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1616_, v_s_1617_, v_translator_1618_, v_arg_1621_);
v___x_1627_ = lean_ptr_addr(v_fn_1620_);
v___x_1628_ = lean_ptr_addr(v___x_1622_);
v___x_1629_ = lean_usize_dec_eq(v___x_1627_, v___x_1628_);
if (v___x_1629_ == 0)
{
v___y_1625_ = v___x_1629_;
goto v___jp_1624_;
}
else
{
size_t v___x_1630_; size_t v___x_1631_; uint8_t v___x_1632_; 
v___x_1630_ = lean_ptr_addr(v_arg_1621_);
v___x_1631_ = lean_ptr_addr(v___x_1623_);
v___x_1632_ = lean_usize_dec_eq(v___x_1630_, v___x_1631_);
v___y_1625_ = v___x_1632_;
goto v___jp_1624_;
}
v___jp_1624_:
{
if (v___y_1625_ == 0)
{
lean_object* v___x_1626_; 
lean_dec_ref(v_e_1619_);
v___x_1626_ = l_Lean_Expr_app___override(v___x_1622_, v___x_1623_);
return v___x_1626_;
}
else
{
lean_dec_ref(v___x_1623_);
lean_dec_ref(v___x_1622_);
return v_e_1619_;
}
}
}
else
{
lean_object* v___x_1633_; 
v___x_1633_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1616_, v_s_1617_, v_translator_1618_, v_e_1619_);
return v___x_1633_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp___boxed(lean_object* v_pu_1634_, lean_object* v_s_1635_, lean_object* v_translator_1636_, lean_object* v_e_1637_){
_start:
{
uint8_t v_pu_boxed_1638_; uint8_t v_translator_boxed_1639_; lean_object* v_res_1640_; 
v_pu_boxed_1638_ = lean_unbox(v_pu_1634_);
v_translator_boxed_1639_ = lean_unbox(v_translator_1636_);
v_res_1640_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_boxed_1638_, v_s_1635_, v_translator_boxed_1639_, v_e_1637_);
lean_dec_ref(v_s_1635_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___boxed(lean_object* v_pu_1641_, lean_object* v_s_1642_, lean_object* v_translator_1643_, lean_object* v_e_1644_){
_start:
{
uint8_t v_pu_boxed_1645_; uint8_t v_translator_boxed_1646_; lean_object* v_res_1647_; 
v_pu_boxed_1645_ = lean_unbox(v_pu_1641_);
v_translator_boxed_1646_ = lean_unbox(v_translator_1643_);
v_res_1647_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_boxed_1645_, v_s_1642_, v_translator_boxed_1646_, v_e_1644_);
lean_dec_ref(v_s_1642_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(uint8_t v_pu_1648_, lean_object* v_s_1649_, lean_object* v_e_1650_, uint8_t v_translator_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1648_, v_s_1649_, v_translator_1651_, v_e_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp___boxed(lean_object* v_pu_1653_, lean_object* v_s_1654_, lean_object* v_e_1655_, lean_object* v_translator_1656_){
_start:
{
uint8_t v_pu_boxed_1657_; uint8_t v_translator_boxed_1658_; lean_object* v_res_1659_; 
v_pu_boxed_1657_ = lean_unbox(v_pu_1653_);
v_translator_boxed_1658_ = lean_unbox(v_translator_1656_);
v_res_1659_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(v_pu_boxed_1657_, v_s_1654_, v_e_1655_, v_translator_boxed_1658_);
lean_dec_ref(v_s_1654_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(lean_object* v_x_1660_){
_start:
{
if (lean_obj_tag(v_x_1660_) == 0)
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_unsigned_to_nat(0u);
return v___x_1661_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_unsigned_to_nat(1u);
return v___x_1662_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx___boxed(lean_object* v_x_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(v_x_1663_);
lean_dec(v_x_1663_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(lean_object* v_t_1665_, lean_object* v_k_1666_){
_start:
{
if (lean_obj_tag(v_t_1665_) == 0)
{
lean_object* v_fvarId_1667_; lean_object* v___x_1668_; 
v_fvarId_1667_ = lean_ctor_get(v_t_1665_, 0);
lean_inc(v_fvarId_1667_);
lean_dec_ref(v_t_1665_);
v___x_1668_ = lean_apply_1(v_k_1666_, v_fvarId_1667_);
return v___x_1668_;
}
else
{
return v_k_1666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(lean_object* v_motive_1669_, lean_object* v_ctorIdx_1670_, lean_object* v_t_1671_, lean_object* v_h_1672_, lean_object* v_k_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1671_, v_k_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___boxed(lean_object* v_motive_1675_, lean_object* v_ctorIdx_1676_, lean_object* v_t_1677_, lean_object* v_h_1678_, lean_object* v_k_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(v_motive_1675_, v_ctorIdx_1676_, v_t_1677_, v_h_1678_, v_k_1679_);
lean_dec(v_ctorIdx_1676_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim___redArg(lean_object* v_t_1681_, lean_object* v_fvar_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1681_, v_fvar_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim(lean_object* v_motive_1684_, lean_object* v_t_1685_, lean_object* v_h_1686_, lean_object* v_fvar_1687_){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1685_, v_fvar_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim___redArg(lean_object* v_t_1689_, lean_object* v_erased_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1689_, v_erased_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim(lean_object* v_motive_1692_, lean_object* v_t_1693_, lean_object* v_h_1694_, lean_object* v_erased_1695_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1693_, v_erased_1695_);
return v___x_1696_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = lean_box(0);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default(void){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0);
return v___x_1699_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult(void){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default;
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object* v_s_1701_, lean_object* v_fvarId_1702_, uint8_t v_translator_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1701_, v_fvarId_1702_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1705_, 0, v_fvarId_1702_);
return v___x_1705_;
}
else
{
lean_object* v_val_1706_; 
lean_dec(v_fvarId_1702_);
v_val_1706_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_val_1706_);
lean_dec_ref(v___x_1704_);
if (lean_obj_tag(v_val_1706_) == 1)
{
if (v_translator_1703_ == 0)
{
lean_object* v_fvarId_1707_; 
v_fvarId_1707_ = lean_ctor_get(v_val_1706_, 0);
lean_inc(v_fvarId_1707_);
lean_dec_ref(v_val_1706_);
v_fvarId_1702_ = v_fvarId_1707_;
goto _start;
}
else
{
lean_object* v_fvarId_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
v_fvarId_1709_ = lean_ctor_get(v_val_1706_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_val_1706_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v_val_1706_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_fvarId_1709_);
lean_dec(v_val_1706_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
lean_ctor_set_tag(v___x_1711_, 0);
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_fvarId_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
else
{
lean_object* v___x_1717_; 
lean_dec(v_val_1706_);
v___x_1717_ = lean_box(1);
return v___x_1717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg___boxed(lean_object* v_s_1718_, lean_object* v_fvarId_1719_, lean_object* v_translator_1720_){
_start:
{
uint8_t v_translator_boxed_1721_; lean_object* v_res_1722_; 
v_translator_boxed_1721_ = lean_unbox(v_translator_1720_);
v_res_1722_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1718_, v_fvarId_1719_, v_translator_boxed_1721_);
lean_dec_ref(v_s_1718_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp(uint8_t v_pu_1723_, lean_object* v_s_1724_, lean_object* v_fvarId_1725_, uint8_t v_translator_1726_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1724_, v_fvarId_1725_, v_translator_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___boxed(lean_object* v_pu_1728_, lean_object* v_s_1729_, lean_object* v_fvarId_1730_, lean_object* v_translator_1731_){
_start:
{
uint8_t v_pu_boxed_1732_; uint8_t v_translator_boxed_1733_; lean_object* v_res_1734_; 
v_pu_boxed_1732_ = lean_unbox(v_pu_1728_);
v_translator_boxed_1733_ = lean_unbox(v_translator_1731_);
v_res_1734_ = l_Lean_Compiler_LCNF_normFVarImp(v_pu_boxed_1732_, v_s_1729_, v_fvarId_1730_, v_translator_boxed_1733_);
lean_dec_ref(v_s_1729_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t v_pu_1735_, lean_object* v_s_1736_, lean_object* v_arg_1737_, uint8_t v_translator_1738_){
_start:
{
switch(lean_obj_tag(v_arg_1737_))
{
case 0:
{
return v_arg_1737_;
}
case 1:
{
lean_object* v_fvarId_1739_; lean_object* v___x_1740_; 
v_fvarId_1739_ = lean_ctor_get(v_arg_1737_, 0);
v___x_1740_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1736_, v_fvarId_1739_);
if (lean_obj_tag(v___x_1740_) == 0)
{
return v_arg_1737_;
}
else
{
lean_object* v_val_1741_; 
lean_dec_ref(v_arg_1737_);
v_val_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_val_1741_);
lean_dec_ref(v___x_1740_);
switch(lean_obj_tag(v_val_1741_))
{
case 0:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_box(0);
return v___x_1742_;
}
case 1:
{
lean_object* v_fvarId_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1751_; 
v_fvarId_1743_ = lean_ctor_get(v_val_1741_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_val_1741_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1745_ = v_val_1741_;
v_isShared_1746_ = v_isSharedCheck_1751_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_fvarId_1743_);
lean_dec(v_val_1741_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1751_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_fvarId_1743_);
v___x_1748_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
if (v_translator_1738_ == 0)
{
v_arg_1737_ = v___x_1748_;
goto _start;
}
else
{
return v___x_1748_;
}
}
}
}
default: 
{
lean_object* v_expr_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
v_expr_1752_ = lean_ctor_get(v_val_1741_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v_val_1741_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v_val_1741_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_expr_1752_);
lean_dec(v_val_1741_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_expr_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
}
default: 
{
lean_object* v_expr_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v_expr_1760_ = lean_ctor_get(v_arg_1737_, 0);
lean_inc_ref(v_expr_1760_);
v___x_1761_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1735_, v_s_1736_, v_translator_1738_, v_expr_1760_);
v___x_1762_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(v_pu_1735_, v_arg_1737_, v___x_1761_);
return v___x_1762_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp___boxed(lean_object* v_pu_1763_, lean_object* v_s_1764_, lean_object* v_arg_1765_, lean_object* v_translator_1766_){
_start:
{
uint8_t v_pu_boxed_1767_; uint8_t v_translator_boxed_1768_; lean_object* v_res_1769_; 
v_pu_boxed_1767_ = lean_unbox(v_pu_1763_);
v_translator_boxed_1768_ = lean_unbox(v_translator_1766_);
v_res_1769_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_boxed_1767_, v_s_1764_, v_arg_1765_, v_translator_boxed_1768_);
lean_dec_ref(v_s_1764_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(uint8_t v_pu_1770_, lean_object* v_s_1771_, uint8_t v_translator_1772_, lean_object* v_i_1773_, lean_object* v_as_1774_){
_start:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = lean_array_get_size(v_as_1774_);
v___x_1776_ = lean_nat_dec_lt(v_i_1773_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_dec(v_i_1773_);
return v_as_1774_;
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1778_; size_t v___x_1779_; size_t v___x_1780_; uint8_t v___x_1781_; 
v_a_1777_ = lean_array_fget_borrowed(v_as_1774_, v_i_1773_);
lean_inc(v_a_1777_);
v___x_1778_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_1770_, v_s_1771_, v_a_1777_, v_translator_1772_);
v___x_1779_ = lean_ptr_addr(v_a_1777_);
v___x_1780_ = lean_ptr_addr(v___x_1778_);
v___x_1781_ = lean_usize_dec_eq(v___x_1779_, v___x_1780_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1782_ = lean_unsigned_to_nat(1u);
v___x_1783_ = lean_nat_add(v_i_1773_, v___x_1782_);
v___x_1784_ = lean_array_fset(v_as_1774_, v_i_1773_, v___x_1778_);
lean_dec(v_i_1773_);
v_i_1773_ = v___x_1783_;
v_as_1774_ = v___x_1784_;
goto _start;
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec(v___x_1778_);
v___x_1786_ = lean_unsigned_to_nat(1u);
v___x_1787_ = lean_nat_add(v_i_1773_, v___x_1786_);
lean_dec(v_i_1773_);
v_i_1773_ = v___x_1787_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0___boxed(lean_object* v_pu_1789_, lean_object* v_s_1790_, lean_object* v_translator_1791_, lean_object* v_i_1792_, lean_object* v_as_1793_){
_start:
{
uint8_t v_pu_boxed_1794_; uint8_t v_translator_boxed_1795_; lean_object* v_res_1796_; 
v_pu_boxed_1794_ = lean_unbox(v_pu_1789_);
v_translator_boxed_1795_ = lean_unbox(v_translator_1791_);
v_res_1796_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(v_pu_boxed_1794_, v_s_1790_, v_translator_boxed_1795_, v_i_1792_, v_as_1793_);
lean_dec_ref(v_s_1790_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t v_pu_1797_, lean_object* v_s_1798_, lean_object* v_args_1799_, uint8_t v_translator_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = lean_unsigned_to_nat(0u);
v___x_1802_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(v_pu_1797_, v_s_1798_, v_translator_1800_, v___x_1801_, v_args_1799_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp___boxed(lean_object* v_pu_1803_, lean_object* v_s_1804_, lean_object* v_args_1805_, lean_object* v_translator_1806_){
_start:
{
uint8_t v_pu_boxed_1807_; uint8_t v_translator_boxed_1808_; lean_object* v_res_1809_; 
v_pu_boxed_1807_ = lean_unbox(v_pu_1803_);
v_translator_boxed_1808_ = lean_unbox(v_translator_1806_);
v_res_1809_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_boxed_1807_, v_s_1804_, v_args_1805_, v_translator_boxed_1808_);
lean_dec_ref(v_s_1804_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t v_pu_1810_, lean_object* v_s_1811_, lean_object* v_e_1812_, uint8_t v_translator_1813_){
_start:
{
lean_object* v_fvarId_1815_; lean_object* v_args_1821_; 
switch(lean_obj_tag(v_e_1812_))
{
case 2:
{
lean_object* v_struct_1824_; lean_object* v___x_1825_; 
v_struct_1824_ = lean_ctor_get(v_e_1812_, 2);
lean_inc(v_struct_1824_);
v___x_1825_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_struct_1824_, v_translator_1813_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_fvarId_1826_; lean_object* v___x_1827_; 
v_fvarId_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_fvarId_1826_);
lean_dec_ref(v___x_1825_);
v___x_1827_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1810_, v_e_1812_, v_fvarId_1826_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; 
lean_dec_ref(v_e_1812_);
v___x_1828_ = lean_box(1);
return v___x_1828_;
}
}
case 3:
{
lean_object* v_args_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_args_1829_ = lean_ctor_get(v_e_1812_, 2);
lean_inc_ref(v_args_1829_);
v___x_1830_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1810_, v_s_1811_, v_args_1829_, v_translator_1813_);
v___x_1831_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp(v_pu_1810_, v_e_1812_, v___x_1830_);
return v___x_1831_;
}
case 4:
{
lean_object* v_fvarId_1832_; lean_object* v_args_1833_; lean_object* v___x_1834_; 
v_fvarId_1832_ = lean_ctor_get(v_e_1812_, 0);
v_args_1833_ = lean_ctor_get(v_e_1812_, 1);
lean_inc(v_fvarId_1832_);
v___x_1834_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_fvarId_1832_, v_translator_1813_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_fvarId_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_fvarId_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_fvarId_1835_);
lean_dec_ref(v___x_1834_);
lean_inc_ref(v_args_1833_);
v___x_1836_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1810_, v_s_1811_, v_args_1833_, v_translator_1813_);
v___x_1837_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp(v_pu_1810_, v_e_1812_, v_fvarId_1835_, v___x_1836_);
lean_dec_ref(v_e_1812_);
return v___x_1837_;
}
else
{
lean_object* v___x_1838_; 
lean_dec_ref(v_e_1812_);
v___x_1838_ = lean_box(1);
return v___x_1838_;
}
}
case 5:
{
lean_object* v_args_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v_args_1839_ = lean_ctor_get(v_e_1812_, 1);
lean_inc_ref(v_args_1839_);
v___x_1840_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1810_, v_s_1811_, v_args_1839_, v_translator_1813_);
v___x_1841_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp(v_pu_1810_, v_e_1812_, v___x_1840_);
return v___x_1841_;
}
case 6:
{
lean_object* v_var_1842_; 
v_var_1842_ = lean_ctor_get(v_e_1812_, 1);
lean_inc(v_var_1842_);
v_fvarId_1815_ = v_var_1842_;
goto v___jp_1814_;
}
case 7:
{
lean_object* v_var_1843_; 
v_var_1843_ = lean_ctor_get(v_e_1812_, 1);
lean_inc(v_var_1843_);
v_fvarId_1815_ = v_var_1843_;
goto v___jp_1814_;
}
case 8:
{
lean_object* v_var_1844_; lean_object* v___x_1845_; 
v_var_1844_ = lean_ctor_get(v_e_1812_, 2);
lean_inc(v_var_1844_);
v___x_1845_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_var_1844_, v_translator_1813_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_fvarId_1846_; lean_object* v___x_1847_; 
v_fvarId_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc(v_fvarId_1846_);
lean_dec_ref(v___x_1845_);
v___x_1847_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1810_, v_e_1812_, v_fvarId_1846_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; 
lean_dec_ref(v_e_1812_);
v___x_1848_ = lean_box(1);
return v___x_1848_;
}
}
case 9:
{
lean_object* v_args_1849_; 
v_args_1849_ = lean_ctor_get(v_e_1812_, 1);
lean_inc_ref(v_args_1849_);
v_args_1821_ = v_args_1849_;
goto v___jp_1820_;
}
case 10:
{
lean_object* v_args_1850_; 
v_args_1850_ = lean_ctor_get(v_e_1812_, 1);
lean_inc_ref(v_args_1850_);
v_args_1821_ = v_args_1850_;
goto v___jp_1820_;
}
case 11:
{
lean_object* v_n_1851_; lean_object* v_var_1852_; lean_object* v___x_1853_; 
v_n_1851_ = lean_ctor_get(v_e_1812_, 0);
lean_inc(v_n_1851_);
v_var_1852_ = lean_ctor_get(v_e_1812_, 1);
lean_inc(v_var_1852_);
v___x_1853_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_var_1852_, v_translator_1813_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_fvarId_1854_; lean_object* v___x_1855_; 
v_fvarId_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_fvarId_1854_);
lean_dec_ref(v___x_1853_);
v___x_1855_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp(v_pu_1810_, v_e_1812_, v_n_1851_, v_fvarId_1854_);
lean_dec_ref(v_e_1812_);
return v___x_1855_;
}
else
{
lean_object* v___x_1856_; 
lean_dec(v_n_1851_);
lean_dec_ref(v_e_1812_);
v___x_1856_ = lean_box(1);
return v___x_1856_;
}
}
case 12:
{
lean_object* v_var_1857_; lean_object* v_i_1858_; uint8_t v_updateHeader_1859_; lean_object* v_args_1860_; lean_object* v___x_1861_; 
v_var_1857_ = lean_ctor_get(v_e_1812_, 0);
v_i_1858_ = lean_ctor_get(v_e_1812_, 1);
lean_inc_ref(v_i_1858_);
v_updateHeader_1859_ = lean_ctor_get_uint8(v_e_1812_, sizeof(void*)*3);
v_args_1860_ = lean_ctor_get(v_e_1812_, 2);
lean_inc(v_var_1857_);
v___x_1861_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_var_1857_, v_translator_1813_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_fvarId_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_fvarId_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_fvarId_1862_);
lean_dec_ref(v___x_1861_);
lean_inc_ref(v_args_1860_);
v___x_1863_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1810_, v_s_1811_, v_args_1860_, v_translator_1813_);
v___x_1864_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp(v_pu_1810_, v_e_1812_, v_fvarId_1862_, v_i_1858_, v_updateHeader_1859_, v___x_1863_);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; 
lean_dec_ref(v_i_1858_);
lean_dec_ref(v_e_1812_);
v___x_1865_ = lean_box(1);
return v___x_1865_;
}
}
case 13:
{
lean_object* v_ty_1866_; lean_object* v_fvarId_1867_; lean_object* v___x_1868_; 
v_ty_1866_ = lean_ctor_get(v_e_1812_, 0);
lean_inc_ref(v_ty_1866_);
v_fvarId_1867_ = lean_ctor_get(v_e_1812_, 1);
lean_inc(v_fvarId_1867_);
v___x_1868_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_fvarId_1867_, v_translator_1813_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_fvarId_1869_; lean_object* v___x_1870_; 
v_fvarId_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_fvarId_1869_);
lean_dec_ref(v___x_1868_);
v___x_1870_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp(v_pu_1810_, v_e_1812_, v_ty_1866_, v_fvarId_1869_);
lean_dec_ref(v_e_1812_);
return v___x_1870_;
}
else
{
lean_object* v___x_1871_; 
lean_dec_ref(v_ty_1866_);
lean_dec_ref(v_e_1812_);
v___x_1871_ = lean_box(1);
return v___x_1871_;
}
}
case 14:
{
lean_object* v_fvarId_1872_; lean_object* v___x_1873_; 
v_fvarId_1872_ = lean_ctor_get(v_e_1812_, 0);
lean_inc(v_fvarId_1872_);
v___x_1873_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_fvarId_1872_, v_translator_1813_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_fvarId_1874_; lean_object* v___x_1875_; 
v_fvarId_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_fvarId_1874_);
lean_dec_ref(v___x_1873_);
v___x_1875_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp(v_pu_1810_, v_e_1812_, v_fvarId_1874_);
return v___x_1875_;
}
else
{
lean_object* v___x_1876_; 
lean_dec_ref(v_e_1812_);
v___x_1876_ = lean_box(1);
return v___x_1876_;
}
}
case 15:
{
lean_object* v_fvarId_1877_; lean_object* v___x_1878_; 
v_fvarId_1877_ = lean_ctor_get(v_e_1812_, 0);
lean_inc(v_fvarId_1877_);
v___x_1878_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_fvarId_1877_, v_translator_1813_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_fvarId_1879_; lean_object* v___x_1880_; 
v_fvarId_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_fvarId_1879_);
lean_dec_ref(v___x_1878_);
v___x_1880_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp(v_pu_1810_, v_e_1812_, v_fvarId_1879_);
return v___x_1880_;
}
else
{
lean_object* v___x_1881_; 
lean_dec_ref(v_e_1812_);
v___x_1881_ = lean_box(1);
return v___x_1881_;
}
}
default: 
{
return v_e_1812_;
}
}
v___jp_1814_:
{
lean_object* v___x_1816_; 
v___x_1816_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1811_, v_fvarId_1815_, v_translator_1813_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_fvarId_1817_; lean_object* v___x_1818_; 
v_fvarId_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_fvarId_1817_);
lean_dec_ref(v___x_1816_);
v___x_1818_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1810_, v_e_1812_, v_fvarId_1817_);
return v___x_1818_;
}
else
{
lean_object* v___x_1819_; 
lean_dec(v_e_1812_);
v___x_1819_ = lean_box(1);
return v___x_1819_;
}
}
v___jp_1820_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1810_, v_s_1811_, v_args_1821_, v_translator_1813_);
v___x_1823_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp(v_pu_1810_, v_e_1812_, v___x_1822_);
return v___x_1823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp___boxed(lean_object* v_pu_1882_, lean_object* v_s_1883_, lean_object* v_e_1884_, lean_object* v_translator_1885_){
_start:
{
uint8_t v_pu_boxed_1886_; uint8_t v_translator_boxed_1887_; lean_object* v_res_1888_; 
v_pu_boxed_1886_ = lean_unbox(v_pu_1882_);
v_translator_boxed_1887_ = lean_unbox(v_translator_1885_);
v_res_1888_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_boxed_1886_, v_s_1883_, v_e_1884_, v_translator_boxed_1887_);
lean_dec_ref(v_s_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___redArg(lean_object* v_inst_1889_, lean_object* v_inst_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_apply_2(v_inst_1889_, lean_box(0), v_inst_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(uint8_t v_pu_1892_, uint8_t v_t_1893_, lean_object* v_m_1894_, lean_object* v_n_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_apply_2(v_inst_1896_, lean_box(0), v_inst_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___boxed(lean_object* v_pu_1899_, lean_object* v_t_1900_, lean_object* v_m_1901_, lean_object* v_n_1902_, lean_object* v_inst_1903_, lean_object* v_inst_1904_){
_start:
{
uint8_t v_pu_boxed_1905_; uint8_t v_t_boxed_1906_; lean_object* v_res_1907_; 
v_pu_boxed_1905_ = lean_unbox(v_pu_1899_);
v_t_boxed_1906_ = lean_unbox(v_t_1900_);
v_res_1907_ = l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(v_pu_boxed_1905_, v_t_boxed_1906_, v_m_1901_, v_n_1902_, v_inst_1903_, v_inst_1904_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0(lean_object* v_inst_1908_, lean_object* v_inst_1909_, lean_object* v_f_1910_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_apply_1(v_inst_1908_, v_f_1910_);
v___x_1912_ = lean_apply_2(v_inst_1909_, lean_box(0), v___x_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg(lean_object* v_inst_1913_, lean_object* v_inst_1914_){
_start:
{
lean_object* v___f_1915_; 
v___f_1915_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1915_, 0, v_inst_1914_);
lean_closure_set(v___f_1915_, 1, v_inst_1913_);
return v___f_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(uint8_t v_pu_1916_, lean_object* v_m_1917_, lean_object* v_n_1918_, lean_object* v_inst_1919_, lean_object* v_inst_1920_){
_start:
{
lean_object* v___f_1921_; 
v___f_1921_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1921_, 0, v_inst_1920_);
lean_closure_set(v___f_1921_, 1, v_inst_1919_);
return v___f_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___boxed(lean_object* v_pu_1922_, lean_object* v_m_1923_, lean_object* v_n_1924_, lean_object* v_inst_1925_, lean_object* v_inst_1926_){
_start:
{
uint8_t v_pu_boxed_1927_; lean_object* v_res_1928_; 
v_pu_boxed_1927_ = lean_unbox(v_pu_1922_);
v_res_1928_ = l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(v_pu_boxed_1927_, v_m_1923_, v_n_1924_, v_inst_1925_, v_inst_1926_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___lam__0(lean_object* v___x_1929_, lean_object* v___x_1930_, lean_object* v_fvarId_1931_, lean_object* v_arg_1932_, lean_object* v_s_1933_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1929_, v___x_1930_, v_s_1933_, v_fvarId_1931_, v_arg_1932_);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__0(void){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = lean_alloc_closure((void*)(l_Lean_instBEqFVarId_beq___boxed), 2, 0);
return v___x_1935_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__1(void){
_start:
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_closure((void*)(l_Lean_instHashableFVarId_hash___boxed), 1, 0);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg(lean_object* v_inst_1937_, lean_object* v_fvarId_1938_, lean_object* v_arg_1939_){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___f_1942_; lean_object* v___x_1943_; 
v___x_1940_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__0, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__0);
v___x_1941_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__1, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__1);
v___f_1942_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1942_, 0, v___x_1940_);
lean_closure_set(v___f_1942_, 1, v___x_1941_);
lean_closure_set(v___f_1942_, 2, v_fvarId_1938_);
lean_closure_set(v___f_1942_, 3, v_arg_1939_);
v___x_1943_ = lean_apply_1(v_inst_1937_, v___f_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst(lean_object* v_m_1944_, uint8_t v_pu_1945_, lean_object* v_inst_1946_, lean_object* v_fvarId_1947_, lean_object* v_arg_1948_){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___f_1951_; lean_object* v___x_1952_; 
v___x_1949_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__0, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__0);
v___x_1950_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__1, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__1);
v___f_1951_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1951_, 0, v___x_1949_);
lean_closure_set(v___f_1951_, 1, v___x_1950_);
lean_closure_set(v___f_1951_, 2, v_fvarId_1947_);
lean_closure_set(v___f_1951_, 3, v_arg_1948_);
v___x_1952_ = lean_apply_1(v_inst_1946_, v___f_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___boxed(lean_object* v_m_1953_, lean_object* v_pu_1954_, lean_object* v_inst_1955_, lean_object* v_fvarId_1956_, lean_object* v_arg_1957_){
_start:
{
uint8_t v_pu_boxed_1958_; lean_object* v_res_1959_; 
v_pu_boxed_1958_ = lean_unbox(v_pu_1954_);
v_res_1959_ = l_Lean_Compiler_LCNF_addSubst(v_m_1953_, v_pu_boxed_1958_, v_inst_1955_, v_fvarId_1956_, v_arg_1957_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0(lean_object* v_fvarId_x27_1960_, lean_object* v___x_1961_, lean_object* v___x_1962_, lean_object* v_fvarId_1963_, lean_object* v_s_1964_){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_fvarId_x27_1960_);
v___x_1966_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1961_, v___x_1962_, v_s_1964_, v_fvarId_1963_, v___x_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg(lean_object* v_inst_1967_, lean_object* v_fvarId_1968_, lean_object* v_fvarId_x27_1969_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___f_1972_; lean_object* v___x_1973_; 
v___x_1970_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__0, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__0);
v___x_1971_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__1, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__1);
v___f_1972_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1972_, 0, v_fvarId_x27_1969_);
lean_closure_set(v___f_1972_, 1, v___x_1970_);
lean_closure_set(v___f_1972_, 2, v___x_1971_);
lean_closure_set(v___f_1972_, 3, v_fvarId_1968_);
v___x_1973_ = lean_apply_1(v_inst_1967_, v___f_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst(lean_object* v_m_1974_, uint8_t v_ph_1975_, lean_object* v_inst_1976_, lean_object* v_fvarId_1977_, lean_object* v_fvarId_x27_1978_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___f_1981_; lean_object* v___x_1982_; 
v___x_1979_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__0, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__0);
v___x_1980_ = lean_obj_once(&l_Lean_Compiler_LCNF_addSubst___redArg___closed__1, &l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_addSubst___redArg___closed__1);
v___f_1981_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1981_, 0, v_fvarId_x27_1978_);
lean_closure_set(v___f_1981_, 1, v___x_1979_);
lean_closure_set(v___f_1981_, 2, v___x_1980_);
lean_closure_set(v___f_1981_, 3, v_fvarId_1977_);
v___x_1982_ = lean_apply_1(v_inst_1976_, v___f_1981_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___boxed(lean_object* v_m_1983_, lean_object* v_ph_1984_, lean_object* v_inst_1985_, lean_object* v_fvarId_1986_, lean_object* v_fvarId_x27_1987_){
_start:
{
uint8_t v_ph_boxed_1988_; lean_object* v_res_1989_; 
v_ph_boxed_1988_ = lean_unbox(v_ph_1984_);
v_res_1989_ = l_Lean_Compiler_LCNF_addFVarSubst(v_m_1983_, v_ph_boxed_1988_, v_inst_1985_, v_fvarId_1986_, v_fvarId_x27_1987_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(lean_object* v_fvarId_1990_, uint8_t v_t_1991_, lean_object* v_toPure_1992_, lean_object* v_____do__lift_1993_){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_____do__lift_1993_, v_fvarId_1990_, v_t_1991_);
v___x_1995_ = lean_apply_2(v_toPure_1992_, lean_box(0), v___x_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed(lean_object* v_fvarId_1996_, lean_object* v_t_1997_, lean_object* v_toPure_1998_, lean_object* v_____do__lift_1999_){
_start:
{
uint8_t v_t_boxed_2000_; lean_object* v_res_2001_; 
v_t_boxed_2000_ = lean_unbox(v_t_1997_);
v_res_2001_ = l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(v_fvarId_1996_, v_t_boxed_2000_, v_toPure_1998_, v_____do__lift_1999_);
lean_dec_ref(v_____do__lift_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg(uint8_t v_t_2002_, lean_object* v_inst_2003_, lean_object* v_inst_2004_, lean_object* v_fvarId_2005_){
_start:
{
lean_object* v_toApplicative_2006_; lean_object* v_toBind_2007_; lean_object* v_toPure_2008_; lean_object* v___x_2009_; lean_object* v___f_2010_; lean_object* v___x_2011_; 
v_toApplicative_2006_ = lean_ctor_get(v_inst_2004_, 0);
lean_inc_ref(v_toApplicative_2006_);
v_toBind_2007_ = lean_ctor_get(v_inst_2004_, 1);
lean_inc(v_toBind_2007_);
lean_dec_ref(v_inst_2004_);
v_toPure_2008_ = lean_ctor_get(v_toApplicative_2006_, 1);
lean_inc(v_toPure_2008_);
lean_dec_ref(v_toApplicative_2006_);
v___x_2009_ = lean_box(v_t_2002_);
v___f_2010_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2010_, 0, v_fvarId_2005_);
lean_closure_set(v___f_2010_, 1, v___x_2009_);
lean_closure_set(v___f_2010_, 2, v_toPure_2008_);
v___x_2011_ = lean_apply_4(v_toBind_2007_, lean_box(0), lean_box(0), v_inst_2003_, v___f_2010_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___boxed(lean_object* v_t_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_fvarId_2015_){
_start:
{
uint8_t v_t_boxed_2016_; lean_object* v_res_2017_; 
v_t_boxed_2016_ = lean_unbox(v_t_2012_);
v_res_2017_ = l_Lean_Compiler_LCNF_normFVar___redArg(v_t_boxed_2016_, v_inst_2013_, v_inst_2014_, v_fvarId_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar(lean_object* v_m_2018_, uint8_t v_pu_2019_, uint8_t v_t_2020_, lean_object* v_inst_2021_, lean_object* v_inst_2022_, lean_object* v_fvarId_2023_){
_start:
{
lean_object* v_toApplicative_2024_; lean_object* v_toBind_2025_; lean_object* v_toPure_2026_; lean_object* v___x_2027_; lean_object* v___f_2028_; lean_object* v___x_2029_; 
v_toApplicative_2024_ = lean_ctor_get(v_inst_2022_, 0);
lean_inc_ref(v_toApplicative_2024_);
v_toBind_2025_ = lean_ctor_get(v_inst_2022_, 1);
lean_inc(v_toBind_2025_);
lean_dec_ref(v_inst_2022_);
v_toPure_2026_ = lean_ctor_get(v_toApplicative_2024_, 1);
lean_inc(v_toPure_2026_);
lean_dec_ref(v_toApplicative_2024_);
v___x_2027_ = lean_box(v_t_2020_);
v___f_2028_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2028_, 0, v_fvarId_2023_);
lean_closure_set(v___f_2028_, 1, v___x_2027_);
lean_closure_set(v___f_2028_, 2, v_toPure_2026_);
v___x_2029_ = lean_apply_4(v_toBind_2025_, lean_box(0), lean_box(0), v_inst_2021_, v___f_2028_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___boxed(lean_object* v_m_2030_, lean_object* v_pu_2031_, lean_object* v_t_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v_fvarId_2035_){
_start:
{
uint8_t v_pu_boxed_2036_; uint8_t v_t_boxed_2037_; lean_object* v_res_2038_; 
v_pu_boxed_2036_ = lean_unbox(v_pu_2031_);
v_t_boxed_2037_ = lean_unbox(v_t_2032_);
v_res_2038_ = l_Lean_Compiler_LCNF_normFVar(v_m_2030_, v_pu_boxed_2036_, v_t_boxed_2037_, v_inst_2033_, v_inst_2034_, v_fvarId_2035_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(uint8_t v_pu_2039_, uint8_t v_t_2040_, lean_object* v_e_2041_, lean_object* v_toPure_2042_, lean_object* v_____do__lift_2043_){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2039_, v_____do__lift_2043_, v_t_2040_, v_e_2041_);
v___x_2045_ = lean_apply_2(v_toPure_2042_, lean_box(0), v___x_2044_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed(lean_object* v_pu_2046_, lean_object* v_t_2047_, lean_object* v_e_2048_, lean_object* v_toPure_2049_, lean_object* v_____do__lift_2050_){
_start:
{
uint8_t v_pu_boxed_2051_; uint8_t v_t_boxed_2052_; lean_object* v_res_2053_; 
v_pu_boxed_2051_ = lean_unbox(v_pu_2046_);
v_t_boxed_2052_ = lean_unbox(v_t_2047_);
v_res_2053_ = l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(v_pu_boxed_2051_, v_t_boxed_2052_, v_e_2048_, v_toPure_2049_, v_____do__lift_2050_);
lean_dec_ref(v_____do__lift_2050_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg(uint8_t v_pu_2054_, uint8_t v_t_2055_, lean_object* v_inst_2056_, lean_object* v_inst_2057_, lean_object* v_e_2058_){
_start:
{
lean_object* v_toApplicative_2059_; lean_object* v_toBind_2060_; lean_object* v_toPure_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___f_2064_; lean_object* v___x_2065_; 
v_toApplicative_2059_ = lean_ctor_get(v_inst_2057_, 0);
lean_inc_ref(v_toApplicative_2059_);
v_toBind_2060_ = lean_ctor_get(v_inst_2057_, 1);
lean_inc(v_toBind_2060_);
lean_dec_ref(v_inst_2057_);
v_toPure_2061_ = lean_ctor_get(v_toApplicative_2059_, 1);
lean_inc(v_toPure_2061_);
lean_dec_ref(v_toApplicative_2059_);
v___x_2062_ = lean_box(v_pu_2054_);
v___x_2063_ = lean_box(v_t_2055_);
v___f_2064_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2064_, 0, v___x_2062_);
lean_closure_set(v___f_2064_, 1, v___x_2063_);
lean_closure_set(v___f_2064_, 2, v_e_2058_);
lean_closure_set(v___f_2064_, 3, v_toPure_2061_);
v___x_2065_ = lean_apply_4(v_toBind_2060_, lean_box(0), lean_box(0), v_inst_2056_, v___f_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___boxed(lean_object* v_pu_2066_, lean_object* v_t_2067_, lean_object* v_inst_2068_, lean_object* v_inst_2069_, lean_object* v_e_2070_){
_start:
{
uint8_t v_pu_boxed_2071_; uint8_t v_t_boxed_2072_; lean_object* v_res_2073_; 
v_pu_boxed_2071_ = lean_unbox(v_pu_2066_);
v_t_boxed_2072_ = lean_unbox(v_t_2067_);
v_res_2073_ = l_Lean_Compiler_LCNF_normExpr___redArg(v_pu_boxed_2071_, v_t_boxed_2072_, v_inst_2068_, v_inst_2069_, v_e_2070_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr(lean_object* v_m_2074_, uint8_t v_pu_2075_, uint8_t v_t_2076_, lean_object* v_inst_2077_, lean_object* v_inst_2078_, lean_object* v_e_2079_){
_start:
{
lean_object* v_toApplicative_2080_; lean_object* v_toBind_2081_; lean_object* v_toPure_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___f_2085_; lean_object* v___x_2086_; 
v_toApplicative_2080_ = lean_ctor_get(v_inst_2078_, 0);
lean_inc_ref(v_toApplicative_2080_);
v_toBind_2081_ = lean_ctor_get(v_inst_2078_, 1);
lean_inc(v_toBind_2081_);
lean_dec_ref(v_inst_2078_);
v_toPure_2082_ = lean_ctor_get(v_toApplicative_2080_, 1);
lean_inc(v_toPure_2082_);
lean_dec_ref(v_toApplicative_2080_);
v___x_2083_ = lean_box(v_pu_2075_);
v___x_2084_ = lean_box(v_t_2076_);
v___f_2085_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2085_, 0, v___x_2083_);
lean_closure_set(v___f_2085_, 1, v___x_2084_);
lean_closure_set(v___f_2085_, 2, v_e_2079_);
lean_closure_set(v___f_2085_, 3, v_toPure_2082_);
v___x_2086_ = lean_apply_4(v_toBind_2081_, lean_box(0), lean_box(0), v_inst_2077_, v___f_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___boxed(lean_object* v_m_2087_, lean_object* v_pu_2088_, lean_object* v_t_2089_, lean_object* v_inst_2090_, lean_object* v_inst_2091_, lean_object* v_e_2092_){
_start:
{
uint8_t v_pu_boxed_2093_; uint8_t v_t_boxed_2094_; lean_object* v_res_2095_; 
v_pu_boxed_2093_ = lean_unbox(v_pu_2088_);
v_t_boxed_2094_ = lean_unbox(v_t_2089_);
v_res_2095_ = l_Lean_Compiler_LCNF_normExpr(v_m_2087_, v_pu_boxed_2093_, v_t_boxed_2094_, v_inst_2090_, v_inst_2091_, v_e_2092_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0(uint8_t v_pu_2096_, lean_object* v_arg_2097_, uint8_t v_t_2098_, lean_object* v_toPure_2099_, lean_object* v_____do__lift_2100_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_2096_, v_____do__lift_2100_, v_arg_2097_, v_t_2098_);
v___x_2102_ = lean_apply_2(v_toPure_2099_, lean_box(0), v___x_2101_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed(lean_object* v_pu_2103_, lean_object* v_arg_2104_, lean_object* v_t_2105_, lean_object* v_toPure_2106_, lean_object* v_____do__lift_2107_){
_start:
{
uint8_t v_pu_boxed_2108_; uint8_t v_t_boxed_2109_; lean_object* v_res_2110_; 
v_pu_boxed_2108_ = lean_unbox(v_pu_2103_);
v_t_boxed_2109_ = lean_unbox(v_t_2105_);
v_res_2110_ = l_Lean_Compiler_LCNF_normArg___redArg___lam__0(v_pu_boxed_2108_, v_arg_2104_, v_t_boxed_2109_, v_toPure_2106_, v_____do__lift_2107_);
lean_dec_ref(v_____do__lift_2107_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg(uint8_t v_pu_2111_, uint8_t v_t_2112_, lean_object* v_inst_2113_, lean_object* v_inst_2114_, lean_object* v_arg_2115_){
_start:
{
lean_object* v_toApplicative_2116_; lean_object* v_toBind_2117_; lean_object* v_toPure_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___f_2121_; lean_object* v___x_2122_; 
v_toApplicative_2116_ = lean_ctor_get(v_inst_2114_, 0);
lean_inc_ref(v_toApplicative_2116_);
v_toBind_2117_ = lean_ctor_get(v_inst_2114_, 1);
lean_inc(v_toBind_2117_);
lean_dec_ref(v_inst_2114_);
v_toPure_2118_ = lean_ctor_get(v_toApplicative_2116_, 1);
lean_inc(v_toPure_2118_);
lean_dec_ref(v_toApplicative_2116_);
v___x_2119_ = lean_box(v_pu_2111_);
v___x_2120_ = lean_box(v_t_2112_);
v___f_2121_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2121_, 0, v___x_2119_);
lean_closure_set(v___f_2121_, 1, v_arg_2115_);
lean_closure_set(v___f_2121_, 2, v___x_2120_);
lean_closure_set(v___f_2121_, 3, v_toPure_2118_);
v___x_2122_ = lean_apply_4(v_toBind_2117_, lean_box(0), lean_box(0), v_inst_2113_, v___f_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___boxed(lean_object* v_pu_2123_, lean_object* v_t_2124_, lean_object* v_inst_2125_, lean_object* v_inst_2126_, lean_object* v_arg_2127_){
_start:
{
uint8_t v_pu_boxed_2128_; uint8_t v_t_boxed_2129_; lean_object* v_res_2130_; 
v_pu_boxed_2128_ = lean_unbox(v_pu_2123_);
v_t_boxed_2129_ = lean_unbox(v_t_2124_);
v_res_2130_ = l_Lean_Compiler_LCNF_normArg___redArg(v_pu_boxed_2128_, v_t_boxed_2129_, v_inst_2125_, v_inst_2126_, v_arg_2127_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg(lean_object* v_m_2131_, uint8_t v_pu_2132_, uint8_t v_t_2133_, lean_object* v_inst_2134_, lean_object* v_inst_2135_, lean_object* v_arg_2136_){
_start:
{
lean_object* v_toApplicative_2137_; lean_object* v_toBind_2138_; lean_object* v_toPure_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___f_2142_; lean_object* v___x_2143_; 
v_toApplicative_2137_ = lean_ctor_get(v_inst_2135_, 0);
lean_inc_ref(v_toApplicative_2137_);
v_toBind_2138_ = lean_ctor_get(v_inst_2135_, 1);
lean_inc(v_toBind_2138_);
lean_dec_ref(v_inst_2135_);
v_toPure_2139_ = lean_ctor_get(v_toApplicative_2137_, 1);
lean_inc(v_toPure_2139_);
lean_dec_ref(v_toApplicative_2137_);
v___x_2140_ = lean_box(v_pu_2132_);
v___x_2141_ = lean_box(v_t_2133_);
v___f_2142_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2142_, 0, v___x_2140_);
lean_closure_set(v___f_2142_, 1, v_arg_2136_);
lean_closure_set(v___f_2142_, 2, v___x_2141_);
lean_closure_set(v___f_2142_, 3, v_toPure_2139_);
v___x_2143_ = lean_apply_4(v_toBind_2138_, lean_box(0), lean_box(0), v_inst_2134_, v___f_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___boxed(lean_object* v_m_2144_, lean_object* v_pu_2145_, lean_object* v_t_2146_, lean_object* v_inst_2147_, lean_object* v_inst_2148_, lean_object* v_arg_2149_){
_start:
{
uint8_t v_pu_boxed_2150_; uint8_t v_t_boxed_2151_; lean_object* v_res_2152_; 
v_pu_boxed_2150_ = lean_unbox(v_pu_2145_);
v_t_boxed_2151_ = lean_unbox(v_t_2146_);
v_res_2152_ = l_Lean_Compiler_LCNF_normArg(v_m_2144_, v_pu_boxed_2150_, v_t_boxed_2151_, v_inst_2147_, v_inst_2148_, v_arg_2149_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(uint8_t v_pu_2153_, lean_object* v_e_2154_, uint8_t v_t_2155_, lean_object* v_toPure_2156_, lean_object* v_____do__lift_2157_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_2153_, v_____do__lift_2157_, v_e_2154_, v_t_2155_);
v___x_2159_ = lean_apply_2(v_toPure_2156_, lean_box(0), v___x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed(lean_object* v_pu_2160_, lean_object* v_e_2161_, lean_object* v_t_2162_, lean_object* v_toPure_2163_, lean_object* v_____do__lift_2164_){
_start:
{
uint8_t v_pu_boxed_2165_; uint8_t v_t_boxed_2166_; lean_object* v_res_2167_; 
v_pu_boxed_2165_ = lean_unbox(v_pu_2160_);
v_t_boxed_2166_ = lean_unbox(v_t_2162_);
v_res_2167_ = l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(v_pu_boxed_2165_, v_e_2161_, v_t_boxed_2166_, v_toPure_2163_, v_____do__lift_2164_);
lean_dec_ref(v_____do__lift_2164_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg(uint8_t v_pu_2168_, uint8_t v_t_2169_, lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_e_2172_){
_start:
{
lean_object* v_toApplicative_2173_; lean_object* v_toBind_2174_; lean_object* v_toPure_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___f_2178_; lean_object* v___x_2179_; 
v_toApplicative_2173_ = lean_ctor_get(v_inst_2171_, 0);
lean_inc_ref(v_toApplicative_2173_);
v_toBind_2174_ = lean_ctor_get(v_inst_2171_, 1);
lean_inc(v_toBind_2174_);
lean_dec_ref(v_inst_2171_);
v_toPure_2175_ = lean_ctor_get(v_toApplicative_2173_, 1);
lean_inc(v_toPure_2175_);
lean_dec_ref(v_toApplicative_2173_);
v___x_2176_ = lean_box(v_pu_2168_);
v___x_2177_ = lean_box(v_t_2169_);
v___f_2178_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2178_, 0, v___x_2176_);
lean_closure_set(v___f_2178_, 1, v_e_2172_);
lean_closure_set(v___f_2178_, 2, v___x_2177_);
lean_closure_set(v___f_2178_, 3, v_toPure_2175_);
v___x_2179_ = lean_apply_4(v_toBind_2174_, lean_box(0), lean_box(0), v_inst_2170_, v___f_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___boxed(lean_object* v_pu_2180_, lean_object* v_t_2181_, lean_object* v_inst_2182_, lean_object* v_inst_2183_, lean_object* v_e_2184_){
_start:
{
uint8_t v_pu_boxed_2185_; uint8_t v_t_boxed_2186_; lean_object* v_res_2187_; 
v_pu_boxed_2185_ = lean_unbox(v_pu_2180_);
v_t_boxed_2186_ = lean_unbox(v_t_2181_);
v_res_2187_ = l_Lean_Compiler_LCNF_normLetValue___redArg(v_pu_boxed_2185_, v_t_boxed_2186_, v_inst_2182_, v_inst_2183_, v_e_2184_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue(lean_object* v_m_2188_, uint8_t v_pu_2189_, uint8_t v_t_2190_, lean_object* v_inst_2191_, lean_object* v_inst_2192_, lean_object* v_e_2193_){
_start:
{
lean_object* v_toApplicative_2194_; lean_object* v_toBind_2195_; lean_object* v_toPure_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___f_2199_; lean_object* v___x_2200_; 
v_toApplicative_2194_ = lean_ctor_get(v_inst_2192_, 0);
lean_inc_ref(v_toApplicative_2194_);
v_toBind_2195_ = lean_ctor_get(v_inst_2192_, 1);
lean_inc(v_toBind_2195_);
lean_dec_ref(v_inst_2192_);
v_toPure_2196_ = lean_ctor_get(v_toApplicative_2194_, 1);
lean_inc(v_toPure_2196_);
lean_dec_ref(v_toApplicative_2194_);
v___x_2197_ = lean_box(v_pu_2189_);
v___x_2198_ = lean_box(v_t_2190_);
v___f_2199_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2199_, 0, v___x_2197_);
lean_closure_set(v___f_2199_, 1, v_e_2193_);
lean_closure_set(v___f_2199_, 2, v___x_2198_);
lean_closure_set(v___f_2199_, 3, v_toPure_2196_);
v___x_2200_ = lean_apply_4(v_toBind_2195_, lean_box(0), lean_box(0), v_inst_2191_, v___f_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___boxed(lean_object* v_m_2201_, lean_object* v_pu_2202_, lean_object* v_t_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_e_2206_){
_start:
{
uint8_t v_pu_boxed_2207_; uint8_t v_t_boxed_2208_; lean_object* v_res_2209_; 
v_pu_boxed_2207_ = lean_unbox(v_pu_2202_);
v_t_boxed_2208_ = lean_unbox(v_t_2203_);
v_res_2209_ = l_Lean_Compiler_LCNF_normLetValue(v_m_2201_, v_pu_boxed_2207_, v_t_boxed_2208_, v_inst_2204_, v_inst_2205_, v_e_2206_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore(uint8_t v_pu_2210_, lean_object* v_s_2211_, lean_object* v_e_2212_, uint8_t v_translator_2213_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2210_, v_s_2211_, v_translator_2213_, v_e_2212_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore___boxed(lean_object* v_pu_2215_, lean_object* v_s_2216_, lean_object* v_e_2217_, lean_object* v_translator_2218_){
_start:
{
uint8_t v_pu_boxed_2219_; uint8_t v_translator_boxed_2220_; lean_object* v_res_2221_; 
v_pu_boxed_2219_ = lean_unbox(v_pu_2215_);
v_translator_boxed_2220_ = lean_unbox(v_translator_2218_);
v_res_2221_ = l_Lean_Compiler_LCNF_normExprCore(v_pu_boxed_2219_, v_s_2216_, v_e_2217_, v_translator_boxed_2220_);
lean_dec_ref(v_s_2216_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(uint8_t v_pu_2222_, lean_object* v_args_2223_, uint8_t v_t_2224_, lean_object* v_toPure_2225_, lean_object* v_____do__lift_2226_){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_2222_, v_____do__lift_2226_, v_args_2223_, v_t_2224_);
v___x_2228_ = lean_apply_2(v_toPure_2225_, lean_box(0), v___x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed(lean_object* v_pu_2229_, lean_object* v_args_2230_, lean_object* v_t_2231_, lean_object* v_toPure_2232_, lean_object* v_____do__lift_2233_){
_start:
{
uint8_t v_pu_boxed_2234_; uint8_t v_t_boxed_2235_; lean_object* v_res_2236_; 
v_pu_boxed_2234_ = lean_unbox(v_pu_2229_);
v_t_boxed_2235_ = lean_unbox(v_t_2231_);
v_res_2236_ = l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(v_pu_boxed_2234_, v_args_2230_, v_t_boxed_2235_, v_toPure_2232_, v_____do__lift_2233_);
lean_dec_ref(v_____do__lift_2233_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg(uint8_t v_pu_2237_, uint8_t v_t_2238_, lean_object* v_inst_2239_, lean_object* v_inst_2240_, lean_object* v_args_2241_){
_start:
{
lean_object* v_toApplicative_2242_; lean_object* v_toBind_2243_; lean_object* v_toPure_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___f_2247_; lean_object* v___x_2248_; 
v_toApplicative_2242_ = lean_ctor_get(v_inst_2240_, 0);
lean_inc_ref(v_toApplicative_2242_);
v_toBind_2243_ = lean_ctor_get(v_inst_2240_, 1);
lean_inc(v_toBind_2243_);
lean_dec_ref(v_inst_2240_);
v_toPure_2244_ = lean_ctor_get(v_toApplicative_2242_, 1);
lean_inc(v_toPure_2244_);
lean_dec_ref(v_toApplicative_2242_);
v___x_2245_ = lean_box(v_pu_2237_);
v___x_2246_ = lean_box(v_t_2238_);
v___f_2247_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2247_, 0, v___x_2245_);
lean_closure_set(v___f_2247_, 1, v_args_2241_);
lean_closure_set(v___f_2247_, 2, v___x_2246_);
lean_closure_set(v___f_2247_, 3, v_toPure_2244_);
v___x_2248_ = lean_apply_4(v_toBind_2243_, lean_box(0), lean_box(0), v_inst_2239_, v___f_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___boxed(lean_object* v_pu_2249_, lean_object* v_t_2250_, lean_object* v_inst_2251_, lean_object* v_inst_2252_, lean_object* v_args_2253_){
_start:
{
uint8_t v_pu_boxed_2254_; uint8_t v_t_boxed_2255_; lean_object* v_res_2256_; 
v_pu_boxed_2254_ = lean_unbox(v_pu_2249_);
v_t_boxed_2255_ = lean_unbox(v_t_2250_);
v_res_2256_ = l_Lean_Compiler_LCNF_normArgs___redArg(v_pu_boxed_2254_, v_t_boxed_2255_, v_inst_2251_, v_inst_2252_, v_args_2253_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs(lean_object* v_m_2257_, uint8_t v_pu_2258_, uint8_t v_t_2259_, lean_object* v_inst_2260_, lean_object* v_inst_2261_, lean_object* v_args_2262_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Lean_Compiler_LCNF_normArgs___redArg(v_pu_2258_, v_t_2259_, v_inst_2260_, v_inst_2261_, v_args_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___boxed(lean_object* v_m_2264_, lean_object* v_pu_2265_, lean_object* v_t_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_args_2269_){
_start:
{
uint8_t v_pu_boxed_2270_; uint8_t v_t_boxed_2271_; lean_object* v_res_2272_; 
v_pu_boxed_2270_ = lean_unbox(v_pu_2265_);
v_t_boxed_2271_ = lean_unbox(v_t_2266_);
v_res_2272_ = l_Lean_Compiler_LCNF_normArgs(v_m_2264_, v_pu_boxed_2270_, v_t_boxed_2271_, v_inst_2267_, v_inst_2268_, v_args_2269_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object* v_binderName_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v_lctx_2281_; lean_object* v_nextIdx_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2295_; 
v___x_2277_ = lean_st_ref_get(v_a_2275_);
lean_dec(v___x_2277_);
v___x_2278_ = lean_st_ref_get(v_a_2274_);
v___x_2279_ = lean_st_ref_get(v_a_2275_);
lean_dec(v___x_2279_);
v___x_2280_ = lean_st_ref_take(v_a_2274_);
v_lctx_2281_ = lean_ctor_get(v___x_2280_, 0);
v_nextIdx_2282_ = lean_ctor_get(v___x_2280_, 1);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2284_ = v___x_2280_;
v_isShared_2285_ = v_isSharedCheck_2295_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_nextIdx_2282_);
lean_inc(v_lctx_2281_);
lean_dec(v___x_2280_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2295_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2286_ = lean_unsigned_to_nat(1u);
v___x_2287_ = lean_nat_add(v_nextIdx_2282_, v___x_2286_);
lean_dec(v_nextIdx_2282_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 1, v___x_2287_);
v___x_2289_ = v___x_2284_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_lctx_2281_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2290_; lean_object* v_nextIdx_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2290_ = lean_st_ref_set(v_a_2274_, v___x_2289_);
v_nextIdx_2291_ = lean_ctor_get(v___x_2278_, 1);
lean_inc(v_nextIdx_2291_);
lean_dec(v___x_2278_);
v___x_2292_ = l_Lean_Name_num___override(v_binderName_2273_, v_nextIdx_2291_);
v___x_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
return v___x_2293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg___boxed(lean_object* v_binderName_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_binderName_2296_, v_a_2297_, v_a_2298_);
lean_dec(v_a_2298_);
lean_dec(v_a_2297_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName(lean_object* v_binderName_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_binderName_2301_, v_a_2303_, v_a_2305_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___boxed(lean_object* v_binderName_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Compiler_LCNF_mkFreshBinderName(v_binderName_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_);
lean_dec(v_a_2312_);
lean_dec_ref(v_a_2311_);
lean_dec(v_a_2310_);
lean_dec_ref(v_a_2309_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(lean_object* v_binderName_2315_, lean_object* v_baseName_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
uint8_t v___x_2320_; 
v___x_2320_ = l_Lean_Name_isAnonymous(v_binderName_2315_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; 
lean_dec(v_baseName_2316_);
v___x_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2321_, 0, v_binderName_2315_);
return v___x_2321_;
}
else
{
lean_object* v___x_2322_; 
lean_dec(v_binderName_2315_);
v___x_2322_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_baseName_2316_, v_a_2317_, v_a_2318_);
return v___x_2322_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg___boxed(lean_object* v_binderName_2323_, lean_object* v_baseName_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_){
_start:
{
lean_object* v_res_2328_; 
v_res_2328_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2323_, v_baseName_2324_, v_a_2325_, v_a_2326_);
lean_dec(v_a_2326_);
lean_dec(v_a_2325_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous(lean_object* v_binderName_2329_, lean_object* v_baseName_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2329_, v_baseName_2330_, v_a_2332_, v_a_2334_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___boxed(lean_object* v_binderName_2337_, lean_object* v_baseName_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Lean_Compiler_LCNF_ensureNotAnonymous(v_binderName_2337_, v_baseName_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_);
lean_dec(v_a_2342_);
lean_dec_ref(v_a_2341_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(lean_object* v___y_2345_){
_start:
{
lean_object* v___x_2347_; lean_object* v_ngen_2348_; lean_object* v_namePrefix_2349_; lean_object* v_idx_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2379_; 
v___x_2347_ = lean_st_ref_get(v___y_2345_);
v_ngen_2348_ = lean_ctor_get(v___x_2347_, 2);
lean_inc_ref(v_ngen_2348_);
lean_dec(v___x_2347_);
v_namePrefix_2349_ = lean_ctor_get(v_ngen_2348_, 0);
v_idx_2350_ = lean_ctor_get(v_ngen_2348_, 1);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_ngen_2348_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2352_ = v_ngen_2348_;
v_isShared_2353_ = v_isSharedCheck_2379_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_idx_2350_);
lean_inc(v_namePrefix_2349_);
lean_dec(v_ngen_2348_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2379_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v_env_2355_; lean_object* v_nextMacroScope_2356_; lean_object* v_auxDeclNGen_2357_; lean_object* v_traceState_2358_; lean_object* v_cache_2359_; lean_object* v_messages_2360_; lean_object* v_infoState_2361_; lean_object* v_snapshotTasks_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2377_; 
v___x_2354_ = lean_st_ref_take(v___y_2345_);
v_env_2355_ = lean_ctor_get(v___x_2354_, 0);
v_nextMacroScope_2356_ = lean_ctor_get(v___x_2354_, 1);
v_auxDeclNGen_2357_ = lean_ctor_get(v___x_2354_, 3);
v_traceState_2358_ = lean_ctor_get(v___x_2354_, 4);
v_cache_2359_ = lean_ctor_get(v___x_2354_, 5);
v_messages_2360_ = lean_ctor_get(v___x_2354_, 6);
v_infoState_2361_ = lean_ctor_get(v___x_2354_, 7);
v_snapshotTasks_2362_ = lean_ctor_get(v___x_2354_, 8);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; 
v_unused_2378_ = lean_ctor_get(v___x_2354_, 2);
lean_dec(v_unused_2378_);
v___x_2364_ = v___x_2354_;
v_isShared_2365_ = v_isSharedCheck_2377_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_snapshotTasks_2362_);
lean_inc(v_infoState_2361_);
lean_inc(v_messages_2360_);
lean_inc(v_cache_2359_);
lean_inc(v_traceState_2358_);
lean_inc(v_auxDeclNGen_2357_);
lean_inc(v_nextMacroScope_2356_);
lean_inc(v_env_2355_);
lean_dec(v___x_2354_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2377_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v_r_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
lean_inc(v_idx_2350_);
lean_inc(v_namePrefix_2349_);
v_r_2366_ = l_Lean_Name_num___override(v_namePrefix_2349_, v_idx_2350_);
v___x_2367_ = lean_unsigned_to_nat(1u);
v___x_2368_ = lean_nat_add(v_idx_2350_, v___x_2367_);
lean_dec(v_idx_2350_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 1, v___x_2368_);
v___x_2370_ = v___x_2352_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_namePrefix_2349_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2372_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 2, v___x_2370_);
v___x_2372_ = v___x_2364_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_env_2355_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v_nextMacroScope_2356_);
lean_ctor_set(v_reuseFailAlloc_2375_, 2, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2375_, 3, v_auxDeclNGen_2357_);
lean_ctor_set(v_reuseFailAlloc_2375_, 4, v_traceState_2358_);
lean_ctor_set(v_reuseFailAlloc_2375_, 5, v_cache_2359_);
lean_ctor_set(v_reuseFailAlloc_2375_, 6, v_messages_2360_);
lean_ctor_set(v_reuseFailAlloc_2375_, 7, v_infoState_2361_);
lean_ctor_set(v_reuseFailAlloc_2375_, 8, v_snapshotTasks_2362_);
v___x_2372_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_st_ref_set(v___y_2345_, v___x_2372_);
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_r_2366_);
return v___x_2374_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg___boxed(lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2380_);
lean_dec(v___y_2380_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v___x_2388_; lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2396_; 
v___x_2388_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2386_);
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2391_ = v___x_2388_;
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2388_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0___boxed(lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
return v_res_2402_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkParam___closed__0(void){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_mk_string_unchecked("_y", 2, 2);
return v___x_2403_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkParam___closed__1(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkParam___closed__0, &l_Lean_Compiler_LCNF_mkParam___closed__0_once, _init_l_Lean_Compiler_LCNF_mkParam___closed__0);
v___x_2405_ = l_Lean_Name_mkStr1(v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t v_pu_2406_, lean_object* v_binderName_2407_, lean_object* v_type_2408_, uint8_t v_borrow_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2440_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref(v___x_2415_);
v___x_2417_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkParam___closed__1, &l_Lean_Compiler_LCNF_mkParam___closed__1_once, _init_l_Lean_Compiler_LCNF_mkParam___closed__1);
v___x_2418_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2407_, v___x_2417_, v_a_2411_, v_a_2413_);
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2421_ = v___x_2418_;
v_isShared_2422_ = v_isSharedCheck_2440_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2440_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_lctx_2425_; lean_object* v_nextIdx_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2439_; 
v___x_2423_ = lean_st_ref_get(v_a_2413_);
lean_dec(v___x_2423_);
v___x_2424_ = lean_st_ref_take(v_a_2411_);
v_lctx_2425_ = lean_ctor_get(v___x_2424_, 0);
v_nextIdx_2426_ = lean_ctor_get(v___x_2424_, 1);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2428_ = v___x_2424_;
v_isShared_2429_ = v_isSharedCheck_2439_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_nextIdx_2426_);
lean_inc(v_lctx_2425_);
lean_dec(v___x_2424_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2439_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2433_; 
v___x_2430_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2430_, 0, v_a_2416_);
lean_ctor_set(v___x_2430_, 1, v_a_2419_);
lean_ctor_set(v___x_2430_, 2, v_type_2408_);
lean_ctor_set_uint8(v___x_2430_, sizeof(void*)*3, v_borrow_2409_);
lean_inc_ref(v___x_2430_);
v___x_2431_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2406_, v_lctx_2425_, v___x_2430_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2431_);
v___x_2433_ = v___x_2428_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2431_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v_nextIdx_2426_);
v___x_2433_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; lean_object* v___x_2436_; 
v___x_2434_ = lean_st_ref_set(v_a_2411_, v___x_2433_);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v___x_2430_);
v___x_2436_ = v___x_2421_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2430_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_dec_ref(v_type_2408_);
lean_dec(v_binderName_2407_);
v_a_2441_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2415_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2415_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam___boxed(lean_object* v_pu_2449_, lean_object* v_binderName_2450_, lean_object* v_type_2451_, lean_object* v_borrow_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
uint8_t v_pu_boxed_2458_; uint8_t v_borrow_boxed_2459_; lean_object* v_res_2460_; 
v_pu_boxed_2458_ = lean_unbox(v_pu_2449_);
v_borrow_boxed_2459_ = lean_unbox(v_borrow_2452_);
v_res_2460_ = l_Lean_Compiler_LCNF_mkParam(v_pu_boxed_2458_, v_binderName_2450_, v_type_2451_, v_borrow_boxed_2459_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_);
lean_dec(v_a_2456_);
lean_dec_ref(v_a_2455_);
lean_dec(v_a_2454_);
lean_dec_ref(v_a_2453_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2464_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___boxed(lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
return v_res_2472_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkLetDecl___closed__0(void){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_2473_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkLetDecl___closed__1(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkLetDecl___closed__0, &l_Lean_Compiler_LCNF_mkLetDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_mkLetDecl___closed__0);
v___x_2475_ = l_Lean_Name_mkStr1(v___x_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t v_pu_2476_, lean_object* v_binderName_2477_, lean_object* v_type_2478_, lean_object* v_value_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v_a_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2510_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc(v_a_2486_);
lean_dec_ref(v___x_2485_);
v___x_2487_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkLetDecl___closed__1, &l_Lean_Compiler_LCNF_mkLetDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_mkLetDecl___closed__1);
v___x_2488_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2477_, v___x_2487_, v_a_2481_, v_a_2483_);
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2491_ = v___x_2488_;
v_isShared_2492_ = v_isSharedCheck_2510_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2488_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2510_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v_lctx_2495_; lean_object* v_nextIdx_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2509_; 
v___x_2493_ = lean_st_ref_get(v_a_2483_);
lean_dec(v___x_2493_);
v___x_2494_ = lean_st_ref_take(v_a_2481_);
v_lctx_2495_ = lean_ctor_get(v___x_2494_, 0);
v_nextIdx_2496_ = lean_ctor_get(v___x_2494_, 1);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2498_ = v___x_2494_;
v_isShared_2499_ = v_isSharedCheck_2509_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_nextIdx_2496_);
lean_inc(v_lctx_2495_);
lean_dec(v___x_2494_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2509_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2503_; 
v___x_2500_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2500_, 0, v_a_2486_);
lean_ctor_set(v___x_2500_, 1, v_a_2489_);
lean_ctor_set(v___x_2500_, 2, v_type_2478_);
lean_ctor_set(v___x_2500_, 3, v_value_2479_);
lean_inc_ref(v___x_2500_);
v___x_2501_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_2476_, v_lctx_2495_, v___x_2500_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2501_);
v___x_2503_ = v___x_2498_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2501_);
lean_ctor_set(v_reuseFailAlloc_2508_, 1, v_nextIdx_2496_);
v___x_2503_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
lean_object* v___x_2504_; lean_object* v___x_2506_; 
v___x_2504_ = lean_st_ref_set(v_a_2481_, v___x_2503_);
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 0, v___x_2500_);
v___x_2506_ = v___x_2491_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2500_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_dec(v_value_2479_);
lean_dec_ref(v_type_2478_);
lean_dec(v_binderName_2477_);
v_a_2511_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2485_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2485_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl___boxed(lean_object* v_pu_2519_, lean_object* v_binderName_2520_, lean_object* v_type_2521_, lean_object* v_value_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_){
_start:
{
uint8_t v_pu_boxed_2528_; lean_object* v_res_2529_; 
v_pu_boxed_2528_ = lean_unbox(v_pu_2519_);
v_res_2529_ = l_Lean_Compiler_LCNF_mkLetDecl(v_pu_boxed_2528_, v_binderName_2520_, v_type_2521_, v_value_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_);
lean_dec(v_a_2526_);
lean_dec_ref(v_a_2525_);
lean_dec(v_a_2524_);
lean_dec_ref(v_a_2523_);
return v_res_2529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkFunDecl___closed__0(void){
_start:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_mk_string_unchecked("_f", 2, 2);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkFunDecl___closed__1(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkFunDecl___closed__0, &l_Lean_Compiler_LCNF_mkFunDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_mkFunDecl___closed__0);
v___x_2532_ = l_Lean_Name_mkStr1(v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t v_pu_2533_, lean_object* v_binderName_2534_, lean_object* v_type_2535_, lean_object* v_params_2536_, lean_object* v_value_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2568_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref(v___x_2543_);
v___x_2545_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkFunDecl___closed__1, &l_Lean_Compiler_LCNF_mkFunDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_mkFunDecl___closed__1);
v___x_2546_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2534_, v___x_2545_, v_a_2539_, v_a_2541_);
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2549_ = v___x_2546_;
v_isShared_2550_ = v_isSharedCheck_2568_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2568_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v_lctx_2553_; lean_object* v_nextIdx_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2567_; 
v___x_2551_ = lean_st_ref_get(v_a_2541_);
lean_dec(v___x_2551_);
v___x_2552_ = lean_st_ref_take(v_a_2539_);
v_lctx_2553_ = lean_ctor_get(v___x_2552_, 0);
v_nextIdx_2554_ = lean_ctor_get(v___x_2552_, 1);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2556_ = v___x_2552_;
v_isShared_2557_ = v_isSharedCheck_2567_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_nextIdx_2554_);
lean_inc(v_lctx_2553_);
lean_dec(v___x_2552_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2567_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2561_; 
v___x_2558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2558_, 0, v_a_2544_);
lean_ctor_set(v___x_2558_, 1, v_a_2547_);
lean_ctor_set(v___x_2558_, 2, v_params_2536_);
lean_ctor_set(v___x_2558_, 3, v_type_2535_);
lean_ctor_set(v___x_2558_, 4, v_value_2537_);
lean_inc_ref(v___x_2558_);
v___x_2559_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_2533_, v_lctx_2553_, v___x_2558_);
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 0, v___x_2559_);
v___x_2561_ = v___x_2556_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v___x_2559_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v_nextIdx_2554_);
v___x_2561_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2562_ = lean_st_ref_set(v_a_2539_, v___x_2561_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v___x_2558_);
v___x_2564_ = v___x_2549_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2558_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_dec_ref(v_value_2537_);
lean_dec_ref(v_params_2536_);
lean_dec_ref(v_type_2535_);
lean_dec(v_binderName_2534_);
v_a_2569_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2543_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2543_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl___boxed(lean_object* v_pu_2577_, lean_object* v_binderName_2578_, lean_object* v_type_2579_, lean_object* v_params_2580_, lean_object* v_value_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
uint8_t v_pu_boxed_2587_; lean_object* v_res_2588_; 
v_pu_boxed_2587_ = lean_unbox(v_pu_2577_);
v_res_2588_ = l_Lean_Compiler_LCNF_mkFunDecl(v_pu_boxed_2587_, v_binderName_2578_, v_type_2579_, v_params_2580_, v_value_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased(uint8_t v_pu_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v_a_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2595_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkLetDecl___closed__1, &l_Lean_Compiler_LCNF_mkLetDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_mkLetDecl___closed__1);
v___x_2596_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2595_, v_a_2591_, v_a_2593_);
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2597_);
lean_dec_ref(v___x_2596_);
v___x_2598_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_2599_ = lean_box(1);
v___x_2600_ = l_Lean_Compiler_LCNF_mkLetDecl(v_pu_2589_, v_a_2597_, v___x_2598_, v___x_2599_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased___boxed(lean_object* v_pu_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
uint8_t v_pu_boxed_2607_; lean_object* v_res_2608_; 
v_pu_boxed_2607_ = lean_unbox(v_pu_2601_);
v_res_2608_ = l_Lean_Compiler_LCNF_mkLetDeclErased(v_pu_boxed_2607_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
lean_dec(v_a_2605_);
lean_dec_ref(v_a_2604_);
lean_dec(v_a_2603_);
lean_dec_ref(v_a_2602_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t v_pu_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Lean_Compiler_LCNF_mkLetDeclErased(v_pu_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2626_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2618_ = v___x_2615_;
v_isShared_2619_ = v_isSharedCheck_2626_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2615_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2626_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v_fvarId_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2624_; 
v_fvarId_2620_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_fvarId_2620_);
v___x_2621_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_fvarId_2620_);
v___x_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2622_, 0, v_a_2616_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 0, v___x_2622_);
v___x_2624_ = v___x_2618_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
v_a_2627_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2615_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2615_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased___boxed(lean_object* v_pu_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_){
_start:
{
uint8_t v_pu_boxed_2641_; lean_object* v_res_2642_; 
v_pu_boxed_2641_ = lean_unbox(v_pu_2635_);
v_res_2642_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_boxed_2641_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_);
lean_dec(v_a_2639_);
lean_dec_ref(v_a_2638_);
lean_dec(v_a_2637_);
lean_dec_ref(v_a_2636_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t v_pu_2643_, lean_object* v_p_2644_, lean_object* v_type_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v_fvarId_2649_; lean_object* v_binderName_2650_; lean_object* v_type_2651_; uint8_t v_borrow_2652_; size_t v___x_2653_; size_t v___x_2654_; uint8_t v___x_2655_; 
v_fvarId_2649_ = lean_ctor_get(v_p_2644_, 0);
v_binderName_2650_ = lean_ctor_get(v_p_2644_, 1);
v_type_2651_ = lean_ctor_get(v_p_2644_, 2);
v_borrow_2652_ = lean_ctor_get_uint8(v_p_2644_, sizeof(void*)*3);
v___x_2653_ = lean_ptr_addr(v_type_2645_);
v___x_2654_ = lean_ptr_addr(v_type_2651_);
v___x_2655_ = lean_usize_dec_eq(v___x_2653_, v___x_2654_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2676_; 
lean_inc(v_binderName_2650_);
lean_inc(v_fvarId_2649_);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_p_2644_);
if (v_isSharedCheck_2676_ == 0)
{
lean_object* v_unused_2677_; lean_object* v_unused_2678_; lean_object* v_unused_2679_; 
v_unused_2677_ = lean_ctor_get(v_p_2644_, 2);
lean_dec(v_unused_2677_);
v_unused_2678_ = lean_ctor_get(v_p_2644_, 1);
lean_dec(v_unused_2678_);
v_unused_2679_ = lean_ctor_get(v_p_2644_, 0);
lean_dec(v_unused_2679_);
v___x_2657_ = v_p_2644_;
v_isShared_2658_ = v_isSharedCheck_2676_;
goto v_resetjp_2656_;
}
else
{
lean_dec(v_p_2644_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2676_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v_lctx_2661_; lean_object* v_nextIdx_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2675_; 
v___x_2659_ = lean_st_ref_get(v_a_2647_);
lean_dec(v___x_2659_);
v___x_2660_ = lean_st_ref_take(v_a_2646_);
v_lctx_2661_ = lean_ctor_get(v___x_2660_, 0);
v_nextIdx_2662_ = lean_ctor_get(v___x_2660_, 1);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2664_ = v___x_2660_;
v_isShared_2665_ = v_isSharedCheck_2675_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_nextIdx_2662_);
lean_inc(v_lctx_2661_);
lean_dec(v___x_2660_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2675_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v_p_2667_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 2, v_type_2645_);
v_p_2667_ = v___x_2657_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_fvarId_2649_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v_binderName_2650_);
lean_ctor_set(v_reuseFailAlloc_2674_, 2, v_type_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2674_, sizeof(void*)*3, v_borrow_2652_);
v_p_2667_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; lean_object* v___x_2670_; 
lean_inc_ref(v_p_2667_);
v___x_2668_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2643_, v_lctx_2661_, v_p_2667_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v___x_2668_);
v___x_2670_ = v___x_2664_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v_nextIdx_2662_);
v___x_2670_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_st_ref_set(v_a_2646_, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v_p_2667_);
return v___x_2672_;
}
}
}
}
}
else
{
lean_object* v___x_2680_; 
lean_dec_ref(v_type_2645_);
v___x_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_p_2644_);
return v___x_2680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg___boxed(lean_object* v_pu_2681_, lean_object* v_p_2682_, lean_object* v_type_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_){
_start:
{
uint8_t v_pu_boxed_2687_; lean_object* v_res_2688_; 
v_pu_boxed_2687_ = lean_unbox(v_pu_2681_);
v_res_2688_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_boxed_2687_, v_p_2682_, v_type_2683_, v_a_2684_, v_a_2685_);
lean_dec(v_a_2685_);
lean_dec(v_a_2684_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(uint8_t v_pu_2689_, lean_object* v_p_2690_, lean_object* v_type_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_2689_, v_p_2690_, v_type_2691_, v_a_2693_, v_a_2695_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed(lean_object* v_pu_2698_, lean_object* v_p_2699_, lean_object* v_type_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_){
_start:
{
uint8_t v_pu_boxed_2706_; lean_object* v_res_2707_; 
v_pu_boxed_2706_ = lean_unbox(v_pu_2698_);
v_res_2707_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(v_pu_boxed_2706_, v_p_2699_, v_type_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t v_pu_2708_, lean_object* v_p_2709_, uint8_t v_borrow_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_fvarId_2714_; lean_object* v_binderName_2715_; lean_object* v_type_2716_; uint8_t v_borrow_2717_; 
v_fvarId_2714_ = lean_ctor_get(v_p_2709_, 0);
v_binderName_2715_ = lean_ctor_get(v_p_2709_, 1);
v_type_2716_ = lean_ctor_get(v_p_2709_, 2);
v_borrow_2717_ = lean_ctor_get_uint8(v_p_2709_, sizeof(void*)*3);
if (v_borrow_2710_ == 0)
{
if (v_borrow_2717_ == 0)
{
lean_object* v___x_2734_; 
v___x_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2734_, 0, v_p_2709_);
return v___x_2734_;
}
else
{
lean_inc_ref(v_type_2716_);
lean_inc(v_binderName_2715_);
lean_inc(v_fvarId_2714_);
lean_dec_ref(v_p_2709_);
goto v___jp_2718_;
}
}
else
{
if (v_borrow_2717_ == 0)
{
lean_inc_ref(v_type_2716_);
lean_inc(v_binderName_2715_);
lean_inc(v_fvarId_2714_);
lean_dec_ref(v_p_2709_);
goto v___jp_2718_;
}
else
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2735_, 0, v_p_2709_);
return v___x_2735_;
}
}
v___jp_2718_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v_lctx_2721_; lean_object* v_nextIdx_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2733_; 
v___x_2719_ = lean_st_ref_get(v_a_2712_);
lean_dec(v___x_2719_);
v___x_2720_ = lean_st_ref_take(v_a_2711_);
v_lctx_2721_ = lean_ctor_get(v___x_2720_, 0);
v_nextIdx_2722_ = lean_ctor_get(v___x_2720_, 1);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2724_ = v___x_2720_;
v_isShared_2725_ = v_isSharedCheck_2733_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_nextIdx_2722_);
lean_inc(v_lctx_2721_);
lean_dec(v___x_2720_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2733_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v_p_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
v_p_2726_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_p_2726_, 0, v_fvarId_2714_);
lean_ctor_set(v_p_2726_, 1, v_binderName_2715_);
lean_ctor_set(v_p_2726_, 2, v_type_2716_);
lean_ctor_set_uint8(v_p_2726_, sizeof(void*)*3, v_borrow_2710_);
lean_inc_ref(v_p_2726_);
v___x_2727_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2708_, v_lctx_2721_, v_p_2726_);
if (v_isShared_2725_ == 0)
{
lean_ctor_set(v___x_2724_, 0, v___x_2727_);
v___x_2729_ = v___x_2724_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2727_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v_nextIdx_2722_);
v___x_2729_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = lean_st_ref_set(v_a_2711_, v___x_2729_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_p_2726_);
return v___x_2731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg___boxed(lean_object* v_pu_2736_, lean_object* v_p_2737_, lean_object* v_borrow_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
uint8_t v_pu_boxed_2742_; uint8_t v_borrow_boxed_2743_; lean_object* v_res_2744_; 
v_pu_boxed_2742_ = lean_unbox(v_pu_2736_);
v_borrow_boxed_2743_ = lean_unbox(v_borrow_2738_);
v_res_2744_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v_pu_boxed_2742_, v_p_2737_, v_borrow_boxed_2743_, v_a_2739_, v_a_2740_);
lean_dec(v_a_2740_);
lean_dec(v_a_2739_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(uint8_t v_pu_2745_, lean_object* v_p_2746_, uint8_t v_borrow_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v_pu_2745_, v_p_2746_, v_borrow_2747_, v_a_2749_, v_a_2751_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___boxed(lean_object* v_pu_2754_, lean_object* v_p_2755_, lean_object* v_borrow_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
uint8_t v_pu_boxed_2762_; uint8_t v_borrow_boxed_2763_; lean_object* v_res_2764_; 
v_pu_boxed_2762_ = lean_unbox(v_pu_2754_);
v_borrow_boxed_2763_ = lean_unbox(v_borrow_2756_);
v_res_2764_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(v_pu_boxed_2762_, v_p_2755_, v_borrow_boxed_2763_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t v_pu_2765_, lean_object* v_decl_2766_, lean_object* v_type_2767_, lean_object* v_value_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_){
_start:
{
lean_object* v_fvarId_2772_; lean_object* v_binderName_2773_; lean_object* v_type_2774_; lean_object* v_value_2775_; uint8_t v___y_2777_; size_t v___x_2804_; size_t v___x_2805_; uint8_t v___x_2806_; 
v_fvarId_2772_ = lean_ctor_get(v_decl_2766_, 0);
v_binderName_2773_ = lean_ctor_get(v_decl_2766_, 1);
v_type_2774_ = lean_ctor_get(v_decl_2766_, 2);
v_value_2775_ = lean_ctor_get(v_decl_2766_, 3);
v___x_2804_ = lean_ptr_addr(v_type_2767_);
v___x_2805_ = lean_ptr_addr(v_type_2774_);
v___x_2806_ = lean_usize_dec_eq(v___x_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
v___y_2777_ = v___x_2806_;
goto v___jp_2776_;
}
else
{
size_t v___x_2807_; size_t v___x_2808_; uint8_t v___x_2809_; 
v___x_2807_ = lean_ptr_addr(v_value_2768_);
v___x_2808_ = lean_ptr_addr(v_value_2775_);
v___x_2809_ = lean_usize_dec_eq(v___x_2807_, v___x_2808_);
v___y_2777_ = v___x_2809_;
goto v___jp_2776_;
}
v___jp_2776_:
{
if (v___y_2777_ == 0)
{
lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2798_; 
lean_inc(v_binderName_2773_);
lean_inc(v_fvarId_2772_);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_decl_2766_);
if (v_isSharedCheck_2798_ == 0)
{
lean_object* v_unused_2799_; lean_object* v_unused_2800_; lean_object* v_unused_2801_; lean_object* v_unused_2802_; 
v_unused_2799_ = lean_ctor_get(v_decl_2766_, 3);
lean_dec(v_unused_2799_);
v_unused_2800_ = lean_ctor_get(v_decl_2766_, 2);
lean_dec(v_unused_2800_);
v_unused_2801_ = lean_ctor_get(v_decl_2766_, 1);
lean_dec(v_unused_2801_);
v_unused_2802_ = lean_ctor_get(v_decl_2766_, 0);
lean_dec(v_unused_2802_);
v___x_2779_ = v_decl_2766_;
v_isShared_2780_ = v_isSharedCheck_2798_;
goto v_resetjp_2778_;
}
else
{
lean_dec(v_decl_2766_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2798_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v_lctx_2783_; lean_object* v_nextIdx_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2797_; 
v___x_2781_ = lean_st_ref_get(v_a_2770_);
lean_dec(v___x_2781_);
v___x_2782_ = lean_st_ref_take(v_a_2769_);
v_lctx_2783_ = lean_ctor_get(v___x_2782_, 0);
v_nextIdx_2784_ = lean_ctor_get(v___x_2782_, 1);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2786_ = v___x_2782_;
v_isShared_2787_ = v_isSharedCheck_2797_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_nextIdx_2784_);
lean_inc(v_lctx_2783_);
lean_dec(v___x_2782_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2797_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_decl_2789_; 
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 3, v_value_2768_);
lean_ctor_set(v___x_2779_, 2, v_type_2767_);
v_decl_2789_ = v___x_2779_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_fvarId_2772_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v_binderName_2773_);
lean_ctor_set(v_reuseFailAlloc_2796_, 2, v_type_2767_);
lean_ctor_set(v_reuseFailAlloc_2796_, 3, v_value_2768_);
v_decl_2789_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
lean_object* v___x_2790_; lean_object* v___x_2792_; 
lean_inc_ref(v_decl_2789_);
v___x_2790_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_2765_, v_lctx_2783_, v_decl_2789_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2790_);
v___x_2792_ = v___x_2786_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2790_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v_nextIdx_2784_);
v___x_2792_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = lean_st_ref_set(v_a_2769_, v___x_2792_);
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_decl_2789_);
return v___x_2794_;
}
}
}
}
}
else
{
lean_object* v___x_2803_; 
lean_dec(v_value_2768_);
lean_dec_ref(v_type_2767_);
v___x_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2803_, 0, v_decl_2766_);
return v___x_2803_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg___boxed(lean_object* v_pu_2810_, lean_object* v_decl_2811_, lean_object* v_type_2812_, lean_object* v_value_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_){
_start:
{
uint8_t v_pu_boxed_2817_; lean_object* v_res_2818_; 
v_pu_boxed_2817_ = lean_unbox(v_pu_2810_);
v_res_2818_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_boxed_2817_, v_decl_2811_, v_type_2812_, v_value_2813_, v_a_2814_, v_a_2815_);
lean_dec(v_a_2815_);
lean_dec(v_a_2814_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(uint8_t v_pu_2819_, lean_object* v_decl_2820_, lean_object* v_type_2821_, lean_object* v_value_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_2819_, v_decl_2820_, v_type_2821_, v_value_2822_, v_a_2824_, v_a_2826_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed(lean_object* v_pu_2829_, lean_object* v_decl_2830_, lean_object* v_type_2831_, lean_object* v_value_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_){
_start:
{
uint8_t v_pu_boxed_2838_; lean_object* v_res_2839_; 
v_pu_boxed_2838_ = lean_unbox(v_pu_2829_);
v_res_2839_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(v_pu_boxed_2838_, v_decl_2830_, v_type_2831_, v_value_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec(v_a_2834_);
lean_dec_ref(v_a_2833_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t v_pu_2840_, lean_object* v_decl_2841_, lean_object* v_value_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_type_2846_; lean_object* v___x_2847_; 
v_type_2846_ = lean_ctor_get(v_decl_2841_, 2);
lean_inc_ref(v_type_2846_);
v___x_2847_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_2840_, v_decl_2841_, v_type_2846_, v_value_2842_, v_a_2843_, v_a_2844_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg___boxed(lean_object* v_pu_2848_, lean_object* v_decl_2849_, lean_object* v_value_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
uint8_t v_pu_boxed_2854_; lean_object* v_res_2855_; 
v_pu_boxed_2854_ = lean_unbox(v_pu_2848_);
v_res_2855_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v_pu_boxed_2854_, v_decl_2849_, v_value_2850_, v_a_2851_, v_a_2852_);
lean_dec(v_a_2852_);
lean_dec(v_a_2851_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(uint8_t v_pu_2856_, lean_object* v_decl_2857_, lean_object* v_value_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v_pu_2856_, v_decl_2857_, v_value_2858_, v_a_2860_, v_a_2862_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___boxed(lean_object* v_pu_2865_, lean_object* v_decl_2866_, lean_object* v_value_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
uint8_t v_pu_boxed_2873_; lean_object* v_res_2874_; 
v_pu_boxed_2873_ = lean_unbox(v_pu_2865_);
v_res_2874_ = l_Lean_Compiler_LCNF_LetDecl_updateValue(v_pu_boxed_2873_, v_decl_2866_, v_value_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v_a_2868_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t v_pu_2875_, lean_object* v_decl_2876_, lean_object* v_type_2877_, lean_object* v_params_2878_, lean_object* v_value_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_){
_start:
{
lean_object* v_fvarId_2883_; lean_object* v_binderName_2884_; lean_object* v_params_2885_; lean_object* v_type_2886_; lean_object* v_value_2887_; uint8_t v___y_2905_; size_t v___x_2910_; size_t v___x_2911_; uint8_t v___x_2912_; 
v_fvarId_2883_ = lean_ctor_get(v_decl_2876_, 0);
v_binderName_2884_ = lean_ctor_get(v_decl_2876_, 1);
v_params_2885_ = lean_ctor_get(v_decl_2876_, 2);
v_type_2886_ = lean_ctor_get(v_decl_2876_, 3);
v_value_2887_ = lean_ctor_get(v_decl_2876_, 4);
v___x_2910_ = lean_ptr_addr(v_type_2877_);
v___x_2911_ = lean_ptr_addr(v_type_2886_);
v___x_2912_ = lean_usize_dec_eq(v___x_2910_, v___x_2911_);
if (v___x_2912_ == 0)
{
v___y_2905_ = v___x_2912_;
goto v___jp_2904_;
}
else
{
size_t v___x_2913_; size_t v___x_2914_; uint8_t v___x_2915_; 
v___x_2913_ = lean_ptr_addr(v_params_2878_);
v___x_2914_ = lean_ptr_addr(v_params_2885_);
v___x_2915_ = lean_usize_dec_eq(v___x_2913_, v___x_2914_);
v___y_2905_ = v___x_2915_;
goto v___jp_2904_;
}
v___jp_2888_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v_lctx_2891_; lean_object* v_nextIdx_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2903_; 
v___x_2889_ = lean_st_ref_get(v_a_2881_);
lean_dec(v___x_2889_);
v___x_2890_ = lean_st_ref_take(v_a_2880_);
v_lctx_2891_ = lean_ctor_get(v___x_2890_, 0);
v_nextIdx_2892_ = lean_ctor_get(v___x_2890_, 1);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2894_ = v___x_2890_;
v_isShared_2895_ = v_isSharedCheck_2903_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_nextIdx_2892_);
lean_inc(v_lctx_2891_);
lean_dec(v___x_2890_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2903_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v_decl_2896_; lean_object* v___x_2897_; lean_object* v___x_2899_; 
v_decl_2896_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_decl_2896_, 0, v_fvarId_2883_);
lean_ctor_set(v_decl_2896_, 1, v_binderName_2884_);
lean_ctor_set(v_decl_2896_, 2, v_params_2878_);
lean_ctor_set(v_decl_2896_, 3, v_type_2877_);
lean_ctor_set(v_decl_2896_, 4, v_value_2879_);
lean_inc_ref(v_decl_2896_);
v___x_2897_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_2875_, v_lctx_2891_, v_decl_2896_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2897_);
v___x_2899_ = v___x_2894_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v_nextIdx_2892_);
v___x_2899_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; 
v___x_2900_ = lean_st_ref_set(v_a_2880_, v___x_2899_);
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v_decl_2896_);
return v___x_2901_;
}
}
}
v___jp_2904_:
{
if (v___y_2905_ == 0)
{
lean_inc(v_binderName_2884_);
lean_inc(v_fvarId_2883_);
lean_dec_ref(v_decl_2876_);
goto v___jp_2888_;
}
else
{
size_t v___x_2906_; size_t v___x_2907_; uint8_t v___x_2908_; 
v___x_2906_ = lean_ptr_addr(v_value_2879_);
v___x_2907_ = lean_ptr_addr(v_value_2887_);
v___x_2908_ = lean_usize_dec_eq(v___x_2906_, v___x_2907_);
if (v___x_2908_ == 0)
{
lean_inc(v_binderName_2884_);
lean_inc(v_fvarId_2883_);
lean_dec_ref(v_decl_2876_);
goto v___jp_2888_;
}
else
{
lean_object* v___x_2909_; 
lean_dec_ref(v_value_2879_);
lean_dec_ref(v_params_2878_);
lean_dec_ref(v_type_2877_);
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_decl_2876_);
return v___x_2909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg___boxed(lean_object* v_pu_2916_, lean_object* v_decl_2917_, lean_object* v_type_2918_, lean_object* v_params_2919_, lean_object* v_value_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
uint8_t v_pu_boxed_2924_; lean_object* v_res_2925_; 
v_pu_boxed_2924_ = lean_unbox(v_pu_2916_);
v_res_2925_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_boxed_2924_, v_decl_2917_, v_type_2918_, v_params_2919_, v_value_2920_, v_a_2921_, v_a_2922_);
lean_dec(v_a_2922_);
lean_dec(v_a_2921_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(uint8_t v_pu_2926_, lean_object* v_decl_2927_, lean_object* v_type_2928_, lean_object* v_params_2929_, lean_object* v_value_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2926_, v_decl_2927_, v_type_2928_, v_params_2929_, v_value_2930_, v_a_2932_, v_a_2934_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed(lean_object* v_pu_2937_, lean_object* v_decl_2938_, lean_object* v_type_2939_, lean_object* v_params_2940_, lean_object* v_value_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_){
_start:
{
uint8_t v_pu_boxed_2947_; lean_object* v_res_2948_; 
v_pu_boxed_2947_ = lean_unbox(v_pu_2937_);
v_res_2948_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(v_pu_boxed_2947_, v_decl_2938_, v_type_2939_, v_params_2940_, v_value_2941_, v_a_2942_, v_a_2943_, v_a_2944_, v_a_2945_);
lean_dec(v_a_2945_);
lean_dec_ref(v_a_2944_);
lean_dec(v_a_2943_);
lean_dec_ref(v_a_2942_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(uint8_t v_pu_2949_, lean_object* v_decl_2950_, lean_object* v_type_2951_, lean_object* v_value_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v_params_2956_; lean_object* v___x_2957_; 
v_params_2956_ = lean_ctor_get(v_decl_2950_, 2);
lean_inc_ref(v_params_2956_);
v___x_2957_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2949_, v_decl_2950_, v_type_2951_, v_params_2956_, v_value_2952_, v_a_2953_, v_a_2954_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg___boxed(lean_object* v_pu_2958_, lean_object* v_decl_2959_, lean_object* v_type_2960_, lean_object* v_value_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_){
_start:
{
uint8_t v_pu_boxed_2965_; lean_object* v_res_2966_; 
v_pu_boxed_2965_ = lean_unbox(v_pu_2958_);
v_res_2966_ = l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(v_pu_boxed_2965_, v_decl_2959_, v_type_2960_, v_value_2961_, v_a_2962_, v_a_2963_);
lean_dec(v_a_2963_);
lean_dec(v_a_2962_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27(uint8_t v_pu_2967_, lean_object* v_decl_2968_, lean_object* v_type_2969_, lean_object* v_value_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_params_2976_; lean_object* v___x_2977_; 
v_params_2976_ = lean_ctor_get(v_decl_2968_, 2);
lean_inc_ref(v_params_2976_);
v___x_2977_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2967_, v_decl_2968_, v_type_2969_, v_params_2976_, v_value_2970_, v_a_2972_, v_a_2974_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___boxed(lean_object* v_pu_2978_, lean_object* v_decl_2979_, lean_object* v_type_2980_, lean_object* v_value_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_){
_start:
{
uint8_t v_pu_boxed_2987_; lean_object* v_res_2988_; 
v_pu_boxed_2987_ = lean_unbox(v_pu_2978_);
v_res_2988_ = l_Lean_Compiler_LCNF_FunDecl_update_x27(v_pu_boxed_2987_, v_decl_2979_, v_type_2980_, v_value_2981_, v_a_2982_, v_a_2983_, v_a_2984_, v_a_2985_);
lean_dec(v_a_2985_);
lean_dec_ref(v_a_2984_);
lean_dec(v_a_2983_);
lean_dec_ref(v_a_2982_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(uint8_t v_pu_2989_, lean_object* v_decl_2990_, lean_object* v_value_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_){
_start:
{
lean_object* v_params_2995_; lean_object* v_type_2996_; lean_object* v___x_2997_; 
v_params_2995_ = lean_ctor_get(v_decl_2990_, 2);
lean_inc_ref(v_params_2995_);
v_type_2996_ = lean_ctor_get(v_decl_2990_, 3);
lean_inc_ref(v_type_2996_);
v___x_2997_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2989_, v_decl_2990_, v_type_2996_, v_params_2995_, v_value_2991_, v_a_2992_, v_a_2993_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg___boxed(lean_object* v_pu_2998_, lean_object* v_decl_2999_, lean_object* v_value_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_){
_start:
{
uint8_t v_pu_boxed_3004_; lean_object* v_res_3005_; 
v_pu_boxed_3004_ = lean_unbox(v_pu_2998_);
v_res_3005_ = l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(v_pu_boxed_3004_, v_decl_2999_, v_value_3000_, v_a_3001_, v_a_3002_);
lean_dec(v_a_3002_);
lean_dec(v_a_3001_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue(uint8_t v_pu_3006_, lean_object* v_decl_3007_, lean_object* v_value_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v_params_3014_; lean_object* v_type_3015_; lean_object* v___x_3016_; 
v_params_3014_ = lean_ctor_get(v_decl_3007_, 2);
lean_inc_ref(v_params_3014_);
v_type_3015_ = lean_ctor_get(v_decl_3007_, 3);
lean_inc_ref(v_type_3015_);
v___x_3016_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_3006_, v_decl_3007_, v_type_3015_, v_params_3014_, v_value_3008_, v_a_3010_, v_a_3012_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___boxed(lean_object* v_pu_3017_, lean_object* v_decl_3018_, lean_object* v_value_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
uint8_t v_pu_boxed_3025_; lean_object* v_res_3026_; 
v_pu_boxed_3025_ = lean_unbox(v_pu_3017_);
v_res_3026_ = l_Lean_Compiler_LCNF_FunDecl_updateValue(v_pu_boxed_3025_, v_decl_3018_, v_value_3019_, v_a_3020_, v_a_3021_, v_a_3022_, v_a_3023_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0(uint8_t v_pu_3027_, lean_object* v_p_3028_, lean_object* v_inst_3029_, lean_object* v_____do__lift_3030_){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3031_ = lean_box(v_pu_3027_);
v___x_3032_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed), 8, 3);
lean_closure_set(v___x_3032_, 0, v___x_3031_);
lean_closure_set(v___x_3032_, 1, v_p_3028_);
lean_closure_set(v___x_3032_, 2, v_____do__lift_3030_);
v___x_3033_ = lean_apply_2(v_inst_3029_, lean_box(0), v___x_3032_);
return v___x_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed(lean_object* v_pu_3034_, lean_object* v_p_3035_, lean_object* v_inst_3036_, lean_object* v_____do__lift_3037_){
_start:
{
uint8_t v_pu_boxed_3038_; lean_object* v_res_3039_; 
v_pu_boxed_3038_ = lean_unbox(v_pu_3034_);
v_res_3039_ = l_Lean_Compiler_LCNF_normParam___redArg___lam__0(v_pu_boxed_3038_, v_p_3035_, v_inst_3036_, v_____do__lift_3037_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1(uint8_t v_pu_3040_, uint8_t v_t_3041_, lean_object* v_type_3042_, lean_object* v_toPure_3043_, lean_object* v_____do__lift_3044_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3040_, v_____do__lift_3044_, v_t_3041_, v_type_3042_);
v___x_3046_ = lean_apply_2(v_toPure_3043_, lean_box(0), v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed(lean_object* v_pu_3047_, lean_object* v_t_3048_, lean_object* v_type_3049_, lean_object* v_toPure_3050_, lean_object* v_____do__lift_3051_){
_start:
{
uint8_t v_pu_boxed_3052_; uint8_t v_t_boxed_3053_; lean_object* v_res_3054_; 
v_pu_boxed_3052_ = lean_unbox(v_pu_3047_);
v_t_boxed_3053_ = lean_unbox(v_t_3048_);
v_res_3054_ = l_Lean_Compiler_LCNF_normParam___redArg___lam__1(v_pu_boxed_3052_, v_t_boxed_3053_, v_type_3049_, v_toPure_3050_, v_____do__lift_3051_);
lean_dec_ref(v_____do__lift_3051_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg(uint8_t v_pu_3055_, uint8_t v_t_3056_, lean_object* v_inst_3057_, lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_p_3060_){
_start:
{
lean_object* v_toApplicative_3061_; lean_object* v_toBind_3062_; lean_object* v_type_3063_; lean_object* v_toPure_3064_; lean_object* v___x_3065_; lean_object* v___f_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v_toApplicative_3061_ = lean_ctor_get(v_inst_3058_, 0);
lean_inc_ref(v_toApplicative_3061_);
v_toBind_3062_ = lean_ctor_get(v_inst_3058_, 1);
lean_inc_n(v_toBind_3062_, 2);
lean_dec_ref(v_inst_3058_);
v_type_3063_ = lean_ctor_get(v_p_3060_, 2);
lean_inc_ref(v_type_3063_);
v_toPure_3064_ = lean_ctor_get(v_toApplicative_3061_, 1);
lean_inc(v_toPure_3064_);
lean_dec_ref(v_toApplicative_3061_);
v___x_3065_ = lean_box(v_pu_3055_);
v___f_3066_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3066_, 0, v___x_3065_);
lean_closure_set(v___f_3066_, 1, v_p_3060_);
lean_closure_set(v___f_3066_, 2, v_inst_3057_);
v___x_3067_ = lean_box(v_pu_3055_);
v___x_3068_ = lean_box(v_t_3056_);
v___f_3069_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3069_, 0, v___x_3067_);
lean_closure_set(v___f_3069_, 1, v___x_3068_);
lean_closure_set(v___f_3069_, 2, v_type_3063_);
lean_closure_set(v___f_3069_, 3, v_toPure_3064_);
v___x_3070_ = lean_apply_4(v_toBind_3062_, lean_box(0), lean_box(0), v_inst_3059_, v___f_3069_);
v___x_3071_ = lean_apply_4(v_toBind_3062_, lean_box(0), lean_box(0), v___x_3070_, v___f_3066_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___boxed(lean_object* v_pu_3072_, lean_object* v_t_3073_, lean_object* v_inst_3074_, lean_object* v_inst_3075_, lean_object* v_inst_3076_, lean_object* v_p_3077_){
_start:
{
uint8_t v_pu_boxed_3078_; uint8_t v_t_boxed_3079_; lean_object* v_res_3080_; 
v_pu_boxed_3078_ = lean_unbox(v_pu_3072_);
v_t_boxed_3079_ = lean_unbox(v_t_3073_);
v_res_3080_ = l_Lean_Compiler_LCNF_normParam___redArg(v_pu_boxed_3078_, v_t_boxed_3079_, v_inst_3074_, v_inst_3075_, v_inst_3076_, v_p_3077_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam(lean_object* v_m_3081_, uint8_t v_pu_3082_, uint8_t v_t_3083_, lean_object* v_inst_3084_, lean_object* v_inst_3085_, lean_object* v_inst_3086_, lean_object* v_p_3087_){
_start:
{
lean_object* v_toApplicative_3088_; lean_object* v_toBind_3089_; lean_object* v_type_3090_; lean_object* v_toPure_3091_; lean_object* v___x_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___f_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_toApplicative_3088_ = lean_ctor_get(v_inst_3085_, 0);
lean_inc_ref(v_toApplicative_3088_);
v_toBind_3089_ = lean_ctor_get(v_inst_3085_, 1);
lean_inc_n(v_toBind_3089_, 2);
lean_dec_ref(v_inst_3085_);
v_type_3090_ = lean_ctor_get(v_p_3087_, 2);
lean_inc_ref(v_type_3090_);
v_toPure_3091_ = lean_ctor_get(v_toApplicative_3088_, 1);
lean_inc(v_toPure_3091_);
lean_dec_ref(v_toApplicative_3088_);
v___x_3092_ = lean_box(v_pu_3082_);
v___f_3093_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3093_, 0, v___x_3092_);
lean_closure_set(v___f_3093_, 1, v_p_3087_);
lean_closure_set(v___f_3093_, 2, v_inst_3084_);
v___x_3094_ = lean_box(v_pu_3082_);
v___x_3095_ = lean_box(v_t_3083_);
v___f_3096_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3096_, 0, v___x_3094_);
lean_closure_set(v___f_3096_, 1, v___x_3095_);
lean_closure_set(v___f_3096_, 2, v_type_3090_);
lean_closure_set(v___f_3096_, 3, v_toPure_3091_);
v___x_3097_ = lean_apply_4(v_toBind_3089_, lean_box(0), lean_box(0), v_inst_3086_, v___f_3096_);
v___x_3098_ = lean_apply_4(v_toBind_3089_, lean_box(0), lean_box(0), v___x_3097_, v___f_3093_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___boxed(lean_object* v_m_3099_, lean_object* v_pu_3100_, lean_object* v_t_3101_, lean_object* v_inst_3102_, lean_object* v_inst_3103_, lean_object* v_inst_3104_, lean_object* v_p_3105_){
_start:
{
uint8_t v_pu_boxed_3106_; uint8_t v_t_boxed_3107_; lean_object* v_res_3108_; 
v_pu_boxed_3106_ = lean_unbox(v_pu_3100_);
v_t_boxed_3107_ = lean_unbox(v_t_3101_);
v_res_3108_ = l_Lean_Compiler_LCNF_normParam(v_m_3099_, v_pu_boxed_3106_, v_t_boxed_3107_, v_inst_3102_, v_inst_3103_, v_inst_3104_, v_p_3105_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg(uint8_t v_pu_3109_, uint8_t v_t_3110_, lean_object* v_inst_3111_, lean_object* v_inst_3112_, lean_object* v_inst_3113_, lean_object* v_ps_3114_){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3115_ = lean_box(v_pu_3109_);
v___x_3116_ = lean_box(v_t_3110_);
lean_inc_ref(v_inst_3112_);
v___x_3117_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___boxed), 7, 6);
lean_closure_set(v___x_3117_, 0, lean_box(0));
lean_closure_set(v___x_3117_, 1, v___x_3115_);
lean_closure_set(v___x_3117_, 2, v___x_3116_);
lean_closure_set(v___x_3117_, 3, v_inst_3111_);
lean_closure_set(v___x_3117_, 4, v_inst_3112_);
lean_closure_set(v___x_3117_, 5, v_inst_3113_);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_box(0), lean_box(0), v_inst_3112_, v___x_3117_, v___x_3118_, v_ps_3114_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg___boxed(lean_object* v_pu_3120_, lean_object* v_t_3121_, lean_object* v_inst_3122_, lean_object* v_inst_3123_, lean_object* v_inst_3124_, lean_object* v_ps_3125_){
_start:
{
uint8_t v_pu_boxed_3126_; uint8_t v_t_boxed_3127_; lean_object* v_res_3128_; 
v_pu_boxed_3126_ = lean_unbox(v_pu_3120_);
v_t_boxed_3127_ = lean_unbox(v_t_3121_);
v_res_3128_ = l_Lean_Compiler_LCNF_normParams___redArg(v_pu_boxed_3126_, v_t_boxed_3127_, v_inst_3122_, v_inst_3123_, v_inst_3124_, v_ps_3125_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams(lean_object* v_m_3129_, uint8_t v_pu_3130_, uint8_t v_t_3131_, lean_object* v_inst_3132_, lean_object* v_inst_3133_, lean_object* v_inst_3134_, lean_object* v_ps_3135_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l_Lean_Compiler_LCNF_normParams___redArg(v_pu_3130_, v_t_3131_, v_inst_3132_, v_inst_3133_, v_inst_3134_, v_ps_3135_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___boxed(lean_object* v_m_3137_, lean_object* v_pu_3138_, lean_object* v_t_3139_, lean_object* v_inst_3140_, lean_object* v_inst_3141_, lean_object* v_inst_3142_, lean_object* v_ps_3143_){
_start:
{
uint8_t v_pu_boxed_3144_; uint8_t v_t_boxed_3145_; lean_object* v_res_3146_; 
v_pu_boxed_3144_ = lean_unbox(v_pu_3138_);
v_t_boxed_3145_ = lean_unbox(v_t_3139_);
v_res_3146_ = l_Lean_Compiler_LCNF_normParams(v_m_3137_, v_pu_boxed_3144_, v_t_boxed_3145_, v_inst_3140_, v_inst_3141_, v_inst_3142_, v_ps_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(uint8_t v_pu_3147_, lean_object* v_decl_3148_, lean_object* v_____do__lift_3149_, lean_object* v_inst_3150_, lean_object* v_____do__lift_3151_){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3152_ = lean_box(v_pu_3147_);
v___x_3153_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed), 9, 4);
lean_closure_set(v___x_3153_, 0, v___x_3152_);
lean_closure_set(v___x_3153_, 1, v_decl_3148_);
lean_closure_set(v___x_3153_, 2, v_____do__lift_3149_);
lean_closure_set(v___x_3153_, 3, v_____do__lift_3151_);
v___x_3154_ = lean_apply_2(v_inst_3150_, lean_box(0), v___x_3153_);
return v___x_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed(lean_object* v_pu_3155_, lean_object* v_decl_3156_, lean_object* v_____do__lift_3157_, lean_object* v_inst_3158_, lean_object* v_____do__lift_3159_){
_start:
{
uint8_t v_pu_boxed_3160_; lean_object* v_res_3161_; 
v_pu_boxed_3160_ = lean_unbox(v_pu_3155_);
v_res_3161_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(v_pu_boxed_3160_, v_decl_3156_, v_____do__lift_3157_, v_inst_3158_, v_____do__lift_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(uint8_t v_pu_3162_, lean_object* v_value_3163_, uint8_t v_t_3164_, lean_object* v_toPure_3165_, lean_object* v_____do__lift_3166_){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_3162_, v_____do__lift_3166_, v_value_3163_, v_t_3164_);
v___x_3168_ = lean_apply_2(v_toPure_3165_, lean_box(0), v___x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed(lean_object* v_pu_3169_, lean_object* v_value_3170_, lean_object* v_t_3171_, lean_object* v_toPure_3172_, lean_object* v_____do__lift_3173_){
_start:
{
uint8_t v_pu_boxed_3174_; uint8_t v_t_boxed_3175_; lean_object* v_res_3176_; 
v_pu_boxed_3174_ = lean_unbox(v_pu_3169_);
v_t_boxed_3175_ = lean_unbox(v_t_3171_);
v_res_3176_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(v_pu_boxed_3174_, v_value_3170_, v_t_boxed_3175_, v_toPure_3172_, v_____do__lift_3173_);
lean_dec_ref(v_____do__lift_3173_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(uint8_t v_pu_3177_, lean_object* v_decl_3178_, lean_object* v_inst_3179_, lean_object* v_value_3180_, uint8_t v_t_3181_, lean_object* v_toPure_3182_, lean_object* v_toBind_3183_, lean_object* v_inst_3184_, lean_object* v_____do__lift_3185_){
_start:
{
lean_object* v___x_3186_; lean_object* v___f_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___f_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3186_ = lean_box(v_pu_3177_);
v___f_3187_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3187_, 0, v___x_3186_);
lean_closure_set(v___f_3187_, 1, v_decl_3178_);
lean_closure_set(v___f_3187_, 2, v_____do__lift_3185_);
lean_closure_set(v___f_3187_, 3, v_inst_3179_);
v___x_3188_ = lean_box(v_pu_3177_);
v___x_3189_ = lean_box(v_t_3181_);
v___f_3190_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3190_, 0, v___x_3188_);
lean_closure_set(v___f_3190_, 1, v_value_3180_);
lean_closure_set(v___f_3190_, 2, v___x_3189_);
lean_closure_set(v___f_3190_, 3, v_toPure_3182_);
lean_inc(v_toBind_3183_);
v___x_3191_ = lean_apply_4(v_toBind_3183_, lean_box(0), lean_box(0), v_inst_3184_, v___f_3190_);
v___x_3192_ = lean_apply_4(v_toBind_3183_, lean_box(0), lean_box(0), v___x_3191_, v___f_3187_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed(lean_object* v_pu_3193_, lean_object* v_decl_3194_, lean_object* v_inst_3195_, lean_object* v_value_3196_, lean_object* v_t_3197_, lean_object* v_toPure_3198_, lean_object* v_toBind_3199_, lean_object* v_inst_3200_, lean_object* v_____do__lift_3201_){
_start:
{
uint8_t v_pu_boxed_3202_; uint8_t v_t_boxed_3203_; lean_object* v_res_3204_; 
v_pu_boxed_3202_ = lean_unbox(v_pu_3193_);
v_t_boxed_3203_ = lean_unbox(v_t_3197_);
v_res_3204_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(v_pu_boxed_3202_, v_decl_3194_, v_inst_3195_, v_value_3196_, v_t_boxed_3203_, v_toPure_3198_, v_toBind_3199_, v_inst_3200_, v_____do__lift_3201_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg(uint8_t v_pu_3205_, uint8_t v_t_3206_, lean_object* v_inst_3207_, lean_object* v_inst_3208_, lean_object* v_inst_3209_, lean_object* v_decl_3210_){
_start:
{
lean_object* v_toApplicative_3211_; lean_object* v_toBind_3212_; lean_object* v_type_3213_; lean_object* v_value_3214_; lean_object* v_toPure_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___f_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___f_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_toApplicative_3211_ = lean_ctor_get(v_inst_3208_, 0);
lean_inc_ref(v_toApplicative_3211_);
v_toBind_3212_ = lean_ctor_get(v_inst_3208_, 1);
lean_inc_n(v_toBind_3212_, 3);
lean_dec_ref(v_inst_3208_);
v_type_3213_ = lean_ctor_get(v_decl_3210_, 2);
lean_inc_ref(v_type_3213_);
v_value_3214_ = lean_ctor_get(v_decl_3210_, 3);
lean_inc(v_value_3214_);
v_toPure_3215_ = lean_ctor_get(v_toApplicative_3211_, 1);
lean_inc_n(v_toPure_3215_, 2);
lean_dec_ref(v_toApplicative_3211_);
v___x_3216_ = lean_box(v_pu_3205_);
v___x_3217_ = lean_box(v_t_3206_);
lean_inc(v_inst_3209_);
v___f_3218_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_3218_, 0, v___x_3216_);
lean_closure_set(v___f_3218_, 1, v_decl_3210_);
lean_closure_set(v___f_3218_, 2, v_inst_3207_);
lean_closure_set(v___f_3218_, 3, v_value_3214_);
lean_closure_set(v___f_3218_, 4, v___x_3217_);
lean_closure_set(v___f_3218_, 5, v_toPure_3215_);
lean_closure_set(v___f_3218_, 6, v_toBind_3212_);
lean_closure_set(v___f_3218_, 7, v_inst_3209_);
v___x_3219_ = lean_box(v_pu_3205_);
v___x_3220_ = lean_box(v_t_3206_);
v___f_3221_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3221_, 0, v___x_3219_);
lean_closure_set(v___f_3221_, 1, v___x_3220_);
lean_closure_set(v___f_3221_, 2, v_type_3213_);
lean_closure_set(v___f_3221_, 3, v_toPure_3215_);
v___x_3222_ = lean_apply_4(v_toBind_3212_, lean_box(0), lean_box(0), v_inst_3209_, v___f_3221_);
v___x_3223_ = lean_apply_4(v_toBind_3212_, lean_box(0), lean_box(0), v___x_3222_, v___f_3218_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___boxed(lean_object* v_pu_3224_, lean_object* v_t_3225_, lean_object* v_inst_3226_, lean_object* v_inst_3227_, lean_object* v_inst_3228_, lean_object* v_decl_3229_){
_start:
{
uint8_t v_pu_boxed_3230_; uint8_t v_t_boxed_3231_; lean_object* v_res_3232_; 
v_pu_boxed_3230_ = lean_unbox(v_pu_3224_);
v_t_boxed_3231_ = lean_unbox(v_t_3225_);
v_res_3232_ = l_Lean_Compiler_LCNF_normLetDecl___redArg(v_pu_boxed_3230_, v_t_boxed_3231_, v_inst_3226_, v_inst_3227_, v_inst_3228_, v_decl_3229_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl(lean_object* v_m_3233_, uint8_t v_pu_3234_, uint8_t v_t_3235_, lean_object* v_inst_3236_, lean_object* v_inst_3237_, lean_object* v_inst_3238_, lean_object* v_decl_3239_){
_start:
{
lean_object* v___x_3240_; 
v___x_3240_ = l_Lean_Compiler_LCNF_normLetDecl___redArg(v_pu_3234_, v_t_3235_, v_inst_3236_, v_inst_3237_, v_inst_3238_, v_decl_3239_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___boxed(lean_object* v_m_3241_, lean_object* v_pu_3242_, lean_object* v_t_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_inst_3246_, lean_object* v_decl_3247_){
_start:
{
uint8_t v_pu_boxed_3248_; uint8_t v_t_boxed_3249_; lean_object* v_res_3250_; 
v_pu_boxed_3248_ = lean_unbox(v_pu_3242_);
v_t_boxed_3249_ = lean_unbox(v_t_3243_);
v_res_3250_ = l_Lean_Compiler_LCNF_normLetDecl(v_m_3241_, v_pu_boxed_3248_, v_t_boxed_3249_, v_inst_3244_, v_inst_3245_, v_inst_3246_, v_decl_3247_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(uint8_t v_pu_3251_, uint8_t v_t_3252_){
_start:
{
lean_object* v___x_3253_; lean_object* v_toApplicative_3254_; lean_object* v_toFunctor_3255_; lean_object* v_toSeq_3256_; lean_object* v_toSeqLeft_3257_; lean_object* v_toSeqRight_3258_; lean_object* v___f_3259_; lean_object* v___f_3260_; lean_object* v___f_3261_; lean_object* v___f_3262_; lean_object* v___x_3263_; lean_object* v___f_3264_; lean_object* v___f_3265_; lean_object* v___f_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v_toApplicative_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3298_; 
v___x_3253_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1);
v_toApplicative_3254_ = lean_ctor_get(v___x_3253_, 0);
v_toFunctor_3255_ = lean_ctor_get(v_toApplicative_3254_, 0);
v_toSeq_3256_ = lean_ctor_get(v_toApplicative_3254_, 2);
v_toSeqLeft_3257_ = lean_ctor_get(v_toApplicative_3254_, 3);
v_toSeqRight_3258_ = lean_ctor_get(v_toApplicative_3254_, 4);
v___f_3259_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2);
v___f_3260_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3);
lean_inc_ref_n(v_toFunctor_3255_, 2);
v___f_3261_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3261_, 0, v_toFunctor_3255_);
v___f_3262_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3262_, 0, v_toFunctor_3255_);
v___x_3263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___f_3261_);
lean_ctor_set(v___x_3263_, 1, v___f_3262_);
lean_inc(v_toSeqRight_3258_);
v___f_3264_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3264_, 0, v_toSeqRight_3258_);
lean_inc(v_toSeqLeft_3257_);
v___f_3265_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3265_, 0, v_toSeqLeft_3257_);
lean_inc(v_toSeq_3256_);
v___f_3266_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3266_, 0, v_toSeq_3256_);
v___x_3267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3263_);
lean_ctor_set(v___x_3267_, 1, v___f_3259_);
lean_ctor_set(v___x_3267_, 2, v___f_3266_);
lean_ctor_set(v___x_3267_, 3, v___f_3265_);
lean_ctor_set(v___x_3267_, 4, v___f_3264_);
v___x_3268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
lean_ctor_set(v___x_3268_, 1, v___f_3260_);
v___x_3269_ = l_StateRefT_x27_instMonad___redArg(v___x_3268_);
v_toApplicative_3270_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; 
v_unused_3299_ = lean_ctor_get(v___x_3269_, 1);
lean_dec(v_unused_3299_);
v___x_3272_ = v___x_3269_;
v_isShared_3273_ = v_isSharedCheck_3298_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_toApplicative_3270_);
lean_dec(v___x_3269_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3298_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v_toFunctor_3274_; lean_object* v_toSeq_3275_; lean_object* v_toSeqLeft_3276_; lean_object* v_toSeqRight_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3296_; 
v_toFunctor_3274_ = lean_ctor_get(v_toApplicative_3270_, 0);
v_toSeq_3275_ = lean_ctor_get(v_toApplicative_3270_, 2);
v_toSeqLeft_3276_ = lean_ctor_get(v_toApplicative_3270_, 3);
v_toSeqRight_3277_ = lean_ctor_get(v_toApplicative_3270_, 4);
v_isSharedCheck_3296_ = !lean_is_exclusive(v_toApplicative_3270_);
if (v_isSharedCheck_3296_ == 0)
{
lean_object* v_unused_3297_; 
v_unused_3297_ = lean_ctor_get(v_toApplicative_3270_, 1);
lean_dec(v_unused_3297_);
v___x_3279_ = v_toApplicative_3270_;
v_isShared_3280_ = v_isSharedCheck_3296_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_toSeqRight_3277_);
lean_inc(v_toSeqLeft_3276_);
lean_inc(v_toSeq_3275_);
lean_inc(v_toFunctor_3274_);
lean_dec(v_toApplicative_3270_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3296_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___f_3281_; lean_object* v___f_3282_; lean_object* v___f_3283_; lean_object* v___f_3284_; lean_object* v___x_3285_; lean_object* v___f_3286_; lean_object* v___f_3287_; lean_object* v___f_3288_; lean_object* v___x_3290_; 
v___f_3281_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4);
v___f_3282_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5);
lean_inc_ref(v_toFunctor_3274_);
v___f_3283_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3283_, 0, v_toFunctor_3274_);
v___f_3284_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3284_, 0, v_toFunctor_3274_);
v___x_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___f_3283_);
lean_ctor_set(v___x_3285_, 1, v___f_3284_);
v___f_3286_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3286_, 0, v_toSeqRight_3277_);
v___f_3287_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3287_, 0, v_toSeqLeft_3276_);
v___f_3288_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3288_, 0, v_toSeq_3275_);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 4, v___f_3286_);
lean_ctor_set(v___x_3279_, 3, v___f_3287_);
lean_ctor_set(v___x_3279_, 2, v___f_3288_);
lean_ctor_set(v___x_3279_, 1, v___f_3281_);
lean_ctor_set(v___x_3279_, 0, v___x_3285_);
v___x_3290_ = v___x_3279_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v___x_3285_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v___f_3281_);
lean_ctor_set(v_reuseFailAlloc_3295_, 2, v___f_3288_);
lean_ctor_set(v_reuseFailAlloc_3295_, 3, v___f_3287_);
lean_ctor_set(v_reuseFailAlloc_3295_, 4, v___f_3286_);
v___x_3290_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
lean_object* v___x_3292_; 
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 1, v___f_3282_);
lean_ctor_set(v___x_3272_, 0, v___x_3290_);
v___x_3292_ = v___x_3272_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3290_);
lean_ctor_set(v_reuseFailAlloc_3294_, 1, v___f_3282_);
v___x_3292_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3293_; 
v___x_3293_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_3293_, 0, lean_box(0));
lean_closure_set(v___x_3293_, 1, lean_box(0));
lean_closure_set(v___x_3293_, 2, v___x_3292_);
return v___x_3293_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___boxed(lean_object* v_pu_3300_, lean_object* v_t_3301_){
_start:
{
uint8_t v_pu_boxed_3302_; uint8_t v_t_boxed_3303_; lean_object* v_res_3304_; 
v_pu_boxed_3302_ = lean_unbox(v_pu_3300_);
v_t_boxed_3303_ = lean_unbox(v_t_3301_);
v_res_3304_ = l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(v_pu_boxed_3302_, v_t_boxed_3303_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg(uint8_t v_pu_3305_, lean_object* v_inst_3306_, lean_object* v_result_3307_, lean_object* v_x_3308_){
_start:
{
if (lean_obj_tag(v_result_3307_) == 0)
{
lean_object* v_fvarId_3309_; lean_object* v___x_3310_; 
lean_dec(v_inst_3306_);
v_fvarId_3309_ = lean_ctor_get(v_result_3307_, 0);
lean_inc(v_fvarId_3309_);
lean_dec_ref(v_result_3307_);
v___x_3310_ = lean_apply_1(v_x_3308_, v_fvarId_3309_);
return v___x_3310_;
}
else
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
lean_dec(v_x_3308_);
v___x_3311_ = lean_box(v_pu_3305_);
v___x_3312_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkReturnErased___boxed), 6, 1);
lean_closure_set(v___x_3312_, 0, v___x_3311_);
v___x_3313_ = lean_apply_2(v_inst_3306_, lean_box(0), v___x_3312_);
return v___x_3313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg___boxed(lean_object* v_pu_3314_, lean_object* v_inst_3315_, lean_object* v_result_3316_, lean_object* v_x_3317_){
_start:
{
uint8_t v_pu_boxed_3318_; lean_object* v_res_3319_; 
v_pu_boxed_3318_ = lean_unbox(v_pu_3314_);
v_res_3319_ = l_Lean_Compiler_LCNF_withNormFVarResult___redArg(v_pu_boxed_3318_, v_inst_3315_, v_result_3316_, v_x_3317_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult(lean_object* v_m_3320_, uint8_t v_pu_3321_, lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_result_3324_, lean_object* v_x_3325_){
_start:
{
if (lean_obj_tag(v_result_3324_) == 0)
{
lean_object* v_fvarId_3326_; lean_object* v___x_3327_; 
lean_dec(v_inst_3322_);
v_fvarId_3326_ = lean_ctor_get(v_result_3324_, 0);
lean_inc(v_fvarId_3326_);
lean_dec_ref(v_result_3324_);
v___x_3327_ = lean_apply_1(v_x_3325_, v_fvarId_3326_);
return v___x_3327_;
}
else
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
lean_dec(v_x_3325_);
v___x_3328_ = lean_box(v_pu_3321_);
v___x_3329_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkReturnErased___boxed), 6, 1);
lean_closure_set(v___x_3329_, 0, v___x_3328_);
v___x_3330_ = lean_apply_2(v_inst_3322_, lean_box(0), v___x_3329_);
return v___x_3330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___boxed(lean_object* v_m_3331_, lean_object* v_pu_3332_, lean_object* v_inst_3333_, lean_object* v_inst_3334_, lean_object* v_result_3335_, lean_object* v_x_3336_){
_start:
{
uint8_t v_pu_boxed_3337_; lean_object* v_res_3338_; 
v_pu_boxed_3337_ = lean_unbox(v_pu_3332_);
v_res_3338_ = l_Lean_Compiler_LCNF_withNormFVarResult(v_m_3331_, v_pu_boxed_3337_, v_inst_3333_, v_inst_3334_, v_result_3335_, v_x_3336_);
lean_dec_ref(v_inst_3334_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(uint8_t v_pu_3339_, uint8_t v_t_3340_, lean_object* v_args_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3344_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_3339_, v___y_3342_, v_args_3341_, v_t_3340_);
v___x_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3344_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg___boxed(lean_object* v_pu_3346_, lean_object* v_t_3347_, lean_object* v_args_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_){
_start:
{
uint8_t v_pu_boxed_3351_; uint8_t v_t_boxed_3352_; lean_object* v_res_3353_; 
v_pu_boxed_3351_ = lean_unbox(v_pu_3346_);
v_t_boxed_3352_ = lean_unbox(v_t_3347_);
v_res_3353_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_boxed_3351_, v_t_boxed_3352_, v_args_3348_, v___y_3349_);
lean_dec_ref(v___y_3349_);
return v_res_3353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(uint8_t v_pu_3354_, uint8_t v_t_3355_, lean_object* v_i_3356_, lean_object* v_as_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
lean_object* v___x_3362_; uint8_t v___x_3363_; 
v___x_3362_ = lean_array_get_size(v_as_3357_);
v___x_3363_ = lean_nat_dec_lt(v_i_3356_, v___x_3362_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_dec(v_i_3356_);
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_as_3357_);
return v___x_3364_;
}
else
{
lean_object* v_a_3365_; lean_object* v_type_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v_a_3365_ = lean_array_fget_borrowed(v_as_3357_, v_i_3356_);
v_type_3366_ = lean_ctor_get(v_a_3365_, 2);
lean_inc_ref(v_type_3366_);
v___x_3367_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3354_, v___y_3358_, v_t_3355_, v_type_3366_);
lean_inc(v_a_3365_);
v___x_3368_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_3354_, v_a_3365_, v___x_3367_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; size_t v___x_3370_; size_t v___x_3371_; uint8_t v___x_3372_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref(v___x_3368_);
v___x_3370_ = lean_ptr_addr(v_a_3365_);
v___x_3371_ = lean_ptr_addr(v_a_3369_);
v___x_3372_ = lean_usize_dec_eq(v___x_3370_, v___x_3371_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = lean_unsigned_to_nat(1u);
v___x_3374_ = lean_nat_add(v_i_3356_, v___x_3373_);
v___x_3375_ = lean_array_fset(v_as_3357_, v_i_3356_, v_a_3369_);
lean_dec(v_i_3356_);
v_i_3356_ = v___x_3374_;
v_as_3357_ = v___x_3375_;
goto _start;
}
else
{
lean_object* v___x_3377_; lean_object* v___x_3378_; 
lean_dec(v_a_3369_);
v___x_3377_ = lean_unsigned_to_nat(1u);
v___x_3378_ = lean_nat_add(v_i_3356_, v___x_3377_);
lean_dec(v_i_3356_);
v_i_3356_ = v___x_3378_;
goto _start;
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v_as_3357_);
lean_dec(v_i_3356_);
v_a_3380_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3368_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3368_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg___boxed(lean_object* v_pu_3388_, lean_object* v_t_3389_, lean_object* v_i_3390_, lean_object* v_as_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
uint8_t v_pu_boxed_3396_; uint8_t v_t_boxed_3397_; lean_object* v_res_3398_; 
v_pu_boxed_3396_ = lean_unbox(v_pu_3388_);
v_t_boxed_3397_ = lean_unbox(v_t_3389_);
v_res_3398_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_boxed_3396_, v_t_boxed_3397_, v_i_3390_, v_as_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
lean_dec(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(uint8_t v_pu_3399_, uint8_t v_t_3400_, lean_object* v_ps_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = lean_unsigned_to_nat(0u);
v___x_3409_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_3399_, v_t_3400_, v___x_3408_, v_ps_3401_, v___y_3402_, v___y_3404_, v___y_3406_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg___boxed(lean_object* v_pu_3410_, lean_object* v_t_3411_, lean_object* v_ps_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
uint8_t v_pu_boxed_3419_; uint8_t v_t_boxed_3420_; lean_object* v_res_3421_; 
v_pu_boxed_3419_ = lean_unbox(v_pu_3410_);
v_t_boxed_3420_ = lean_unbox(v_t_3411_);
v_res_3421_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_boxed_3419_, v_t_boxed_3420_, v_ps_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec_ref(v___y_3413_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(uint8_t v_pu_3422_, uint8_t v_t_3423_, lean_object* v_decl_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v_type_3429_; lean_object* v_value_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_type_3429_ = lean_ctor_get(v_decl_3424_, 2);
v_value_3430_ = lean_ctor_get(v_decl_3424_, 3);
lean_inc_ref(v_type_3429_);
v___x_3431_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3422_, v___y_3425_, v_t_3423_, v_type_3429_);
lean_inc(v_value_3430_);
v___x_3432_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_3422_, v___y_3425_, v_value_3430_, v_t_3423_);
v___x_3433_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_3422_, v_decl_3424_, v___x_3431_, v___x_3432_, v___y_3426_, v___y_3427_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg___boxed(lean_object* v_pu_3434_, lean_object* v_t_3435_, lean_object* v_decl_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
uint8_t v_pu_boxed_3441_; uint8_t v_t_boxed_3442_; lean_object* v_res_3443_; 
v_pu_boxed_3441_ = lean_unbox(v_pu_3434_);
v_t_boxed_3442_ = lean_unbox(v_t_3435_);
v_res_3443_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_boxed_3441_, v_t_boxed_3442_, v_decl_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(uint8_t v_pu_3444_, uint8_t v_t_3445_, lean_object* v_i_3446_, lean_object* v_as_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; uint8_t v___x_3455_; 
v___x_3454_ = lean_array_get_size(v_as_3447_);
v___x_3455_ = lean_nat_dec_lt(v_i_3446_, v___x_3454_);
if (v___x_3455_ == 0)
{
lean_object* v___x_3456_; 
lean_dec(v_i_3446_);
v___x_3456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3456_, 0, v_as_3447_);
return v___x_3456_;
}
else
{
lean_object* v_a_3457_; lean_object* v_a_3459_; 
v_a_3457_ = lean_array_fget_borrowed(v_as_3447_, v_i_3446_);
switch(lean_obj_tag(v_a_3457_))
{
case 0:
{
lean_object* v_params_3470_; lean_object* v_code_3471_; lean_object* v___x_3472_; 
v_params_3470_ = lean_ctor_get(v_a_3457_, 1);
v_code_3471_ = lean_ctor_get(v_a_3457_, 2);
lean_inc_ref(v_params_3470_);
v___x_3472_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_3444_, v_t_3445_, v_params_3470_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3474_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_a_3473_);
lean_dec_ref(v___x_3472_);
lean_inc_ref(v_code_3471_);
v___x_3474_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3444_, v_t_3445_, v_code_3471_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3476_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref(v___x_3474_);
lean_inc_ref(v_a_3457_);
v___x_3476_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v_pu_3444_, v_a_3457_, v_a_3473_, v_a_3475_);
v_a_3459_ = v___x_3476_;
goto v___jp_3458_;
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec(v_a_3473_);
lean_dec_ref(v_as_3447_);
lean_dec(v_i_3446_);
v_a_3477_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3474_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3474_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref(v_as_3447_);
lean_dec(v_i_3446_);
v_a_3485_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3472_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3472_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
case 1:
{
lean_object* v_code_3493_; lean_object* v___x_3494_; 
v_code_3493_ = lean_ctor_get(v_a_3457_, 1);
lean_inc_ref(v_code_3493_);
v___x_3494_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3444_, v_t_3445_, v_code_3493_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; lean_object* v___x_3496_; 
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref(v___x_3494_);
lean_inc_ref(v_a_3457_);
v___x_3496_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3457_, v_a_3495_);
v_a_3459_ = v___x_3496_;
goto v___jp_3458_;
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec_ref(v_as_3447_);
lean_dec(v_i_3446_);
v_a_3497_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3494_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3494_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
default: 
{
lean_object* v_code_3505_; lean_object* v___x_3506_; 
v_code_3505_ = lean_ctor_get(v_a_3457_, 0);
lean_inc_ref(v_code_3505_);
v___x_3506_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3444_, v_t_3445_, v_code_3505_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v___x_3508_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref(v___x_3506_);
lean_inc_ref(v_a_3457_);
v___x_3508_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3457_, v_a_3507_);
v_a_3459_ = v___x_3508_;
goto v___jp_3458_;
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3516_; 
lean_dec_ref(v_as_3447_);
lean_dec(v_i_3446_);
v_a_3509_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3511_ = v___x_3506_;
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v___x_3506_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3514_; 
if (v_isShared_3512_ == 0)
{
v___x_3514_ = v___x_3511_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3509_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
}
v___jp_3458_:
{
size_t v___x_3460_; size_t v___x_3461_; uint8_t v___x_3462_; 
v___x_3460_ = lean_ptr_addr(v_a_3457_);
v___x_3461_ = lean_ptr_addr(v_a_3459_);
v___x_3462_ = lean_usize_dec_eq(v___x_3460_, v___x_3461_);
if (v___x_3462_ == 0)
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3463_ = lean_unsigned_to_nat(1u);
v___x_3464_ = lean_nat_add(v_i_3446_, v___x_3463_);
v___x_3465_ = lean_array_fset(v_as_3447_, v_i_3446_, v_a_3459_);
lean_dec(v_i_3446_);
v_i_3446_ = v___x_3464_;
v_as_3447_ = v___x_3465_;
goto _start;
}
else
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
lean_dec_ref(v_a_3459_);
v___x_3467_ = lean_unsigned_to_nat(1u);
v___x_3468_ = lean_nat_add(v_i_3446_, v___x_3467_);
lean_dec(v_i_3446_);
v_i_3446_ = v___x_3468_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp(uint8_t v_pu_3517_, uint8_t v_t_3518_, lean_object* v_code_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_){
_start:
{
switch(lean_obj_tag(v_code_3519_))
{
case 0:
{
lean_object* v_decl_3526_; lean_object* v_k_3527_; lean_object* v___x_3528_; 
v_decl_3526_ = lean_ctor_get(v_code_3519_, 0);
v_k_3527_ = lean_ctor_get(v_code_3519_, 1);
lean_inc_ref(v_decl_3526_);
v___x_3528_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_3517_, v_t_3518_, v_decl_3526_, v_a_3520_, v_a_3522_, v_a_3524_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref(v___x_3528_);
lean_inc_ref(v_k_3527_);
v___x_3530_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3527_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3558_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3533_ = v___x_3530_;
v_isShared_3534_ = v_isSharedCheck_3558_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3530_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3558_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
uint8_t v___y_3536_; size_t v___x_3552_; size_t v___x_3553_; uint8_t v___x_3554_; 
v___x_3552_ = lean_ptr_addr(v_k_3527_);
v___x_3553_ = lean_ptr_addr(v_a_3531_);
v___x_3554_ = lean_usize_dec_eq(v___x_3552_, v___x_3553_);
if (v___x_3554_ == 0)
{
v___y_3536_ = v___x_3554_;
goto v___jp_3535_;
}
else
{
size_t v___x_3555_; size_t v___x_3556_; uint8_t v___x_3557_; 
v___x_3555_ = lean_ptr_addr(v_decl_3526_);
v___x_3556_ = lean_ptr_addr(v_a_3529_);
v___x_3557_ = lean_usize_dec_eq(v___x_3555_, v___x_3556_);
v___y_3536_ = v___x_3557_;
goto v___jp_3535_;
}
v___jp_3535_:
{
if (v___y_3536_ == 0)
{
lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3546_; 
v_isSharedCheck_3546_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3546_ == 0)
{
lean_object* v_unused_3547_; lean_object* v_unused_3548_; 
v_unused_3547_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3547_);
v_unused_3548_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3548_);
v___x_3538_ = v_code_3519_;
v_isShared_3539_ = v_isSharedCheck_3546_;
goto v_resetjp_3537_;
}
else
{
lean_dec(v_code_3519_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3546_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
lean_ctor_set(v___x_3538_, 1, v_a_3531_);
lean_ctor_set(v___x_3538_, 0, v_a_3529_);
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3529_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v_a_3531_);
v___x_3541_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
lean_object* v___x_3543_; 
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v___x_3541_);
v___x_3543_ = v___x_3533_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3541_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
}
else
{
lean_object* v___x_3550_; 
lean_dec(v_a_3531_);
lean_dec(v_a_3529_);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v_code_3519_);
v___x_3550_ = v___x_3533_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_code_3519_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
}
else
{
lean_dec(v_a_3529_);
lean_dec_ref(v_code_3519_);
return v___x_3530_;
}
}
else
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
lean_dec_ref(v_code_3519_);
v_a_3559_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3528_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3528_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
case 1:
{
lean_object* v_decl_3567_; lean_object* v_k_3568_; lean_object* v___x_3569_; 
v_decl_3567_ = lean_ctor_get(v_code_3519_, 0);
v_k_3568_ = lean_ctor_get(v_code_3519_, 1);
lean_inc_ref(v_decl_3567_);
v___x_3569_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_3517_, v_t_3518_, v_decl_3567_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3570_);
lean_dec_ref(v___x_3569_);
lean_inc_ref(v_k_3568_);
v___x_3571_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3568_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3599_; 
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3571_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3574_ = v___x_3571_;
v_isShared_3575_ = v_isSharedCheck_3599_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3571_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3599_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
uint8_t v___y_3577_; size_t v___x_3593_; size_t v___x_3594_; uint8_t v___x_3595_; 
v___x_3593_ = lean_ptr_addr(v_k_3568_);
v___x_3594_ = lean_ptr_addr(v_a_3572_);
v___x_3595_ = lean_usize_dec_eq(v___x_3593_, v___x_3594_);
if (v___x_3595_ == 0)
{
v___y_3577_ = v___x_3595_;
goto v___jp_3576_;
}
else
{
size_t v___x_3596_; size_t v___x_3597_; uint8_t v___x_3598_; 
v___x_3596_ = lean_ptr_addr(v_decl_3567_);
v___x_3597_ = lean_ptr_addr(v_a_3570_);
v___x_3598_ = lean_usize_dec_eq(v___x_3596_, v___x_3597_);
v___y_3577_ = v___x_3598_;
goto v___jp_3576_;
}
v___jp_3576_:
{
if (v___y_3577_ == 0)
{
lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3587_; 
v_isSharedCheck_3587_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3587_ == 0)
{
lean_object* v_unused_3588_; lean_object* v_unused_3589_; 
v_unused_3588_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3588_);
v_unused_3589_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3589_);
v___x_3579_ = v_code_3519_;
v_isShared_3580_ = v_isSharedCheck_3587_;
goto v_resetjp_3578_;
}
else
{
lean_dec(v_code_3519_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3587_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 1, v_a_3572_);
lean_ctor_set(v___x_3579_, 0, v_a_3570_);
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3570_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v_a_3572_);
v___x_3582_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3584_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v___x_3582_);
v___x_3584_ = v___x_3574_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v___x_3582_);
v___x_3584_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
return v___x_3584_;
}
}
}
}
else
{
lean_object* v___x_3591_; 
lean_dec(v_a_3572_);
lean_dec(v_a_3570_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v_code_3519_);
v___x_3591_ = v___x_3574_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_code_3519_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
}
else
{
lean_dec(v_a_3570_);
lean_dec_ref(v_code_3519_);
return v___x_3571_;
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec_ref(v_code_3519_);
v_a_3600_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3569_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3569_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
case 2:
{
lean_object* v_decl_3608_; lean_object* v_k_3609_; lean_object* v___x_3610_; 
v_decl_3608_ = lean_ctor_get(v_code_3519_, 0);
v_k_3609_ = lean_ctor_get(v_code_3519_, 1);
lean_inc_ref(v_decl_3608_);
v___x_3610_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_3517_, v_t_3518_, v_decl_3608_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; lean_object* v___x_3612_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_a_3611_);
lean_dec_ref(v___x_3610_);
lean_inc_ref(v_k_3609_);
v___x_3612_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3609_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3640_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3640_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3640_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
uint8_t v___y_3618_; size_t v___x_3634_; size_t v___x_3635_; uint8_t v___x_3636_; 
v___x_3634_ = lean_ptr_addr(v_k_3609_);
v___x_3635_ = lean_ptr_addr(v_a_3613_);
v___x_3636_ = lean_usize_dec_eq(v___x_3634_, v___x_3635_);
if (v___x_3636_ == 0)
{
v___y_3618_ = v___x_3636_;
goto v___jp_3617_;
}
else
{
size_t v___x_3637_; size_t v___x_3638_; uint8_t v___x_3639_; 
v___x_3637_ = lean_ptr_addr(v_decl_3608_);
v___x_3638_ = lean_ptr_addr(v_a_3611_);
v___x_3639_ = lean_usize_dec_eq(v___x_3637_, v___x_3638_);
v___y_3618_ = v___x_3639_;
goto v___jp_3617_;
}
v___jp_3617_:
{
if (v___y_3618_ == 0)
{
lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3628_; 
v_isSharedCheck_3628_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; lean_object* v_unused_3630_; 
v_unused_3629_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3629_);
v_unused_3630_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3630_);
v___x_3620_ = v_code_3519_;
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
else
{
lean_dec(v_code_3519_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
lean_ctor_set(v___x_3620_, 1, v_a_3613_);
lean_ctor_set(v___x_3620_, 0, v_a_3611_);
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3611_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_a_3613_);
v___x_3623_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
lean_object* v___x_3625_; 
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v___x_3623_);
v___x_3625_ = v___x_3615_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3623_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
}
else
{
lean_object* v___x_3632_; 
lean_dec(v_a_3613_);
lean_dec(v_a_3611_);
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v_code_3519_);
v___x_3632_ = v___x_3615_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_code_3519_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
else
{
lean_dec(v_a_3611_);
lean_dec_ref(v_code_3519_);
return v___x_3612_;
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v_code_3519_);
v_a_3641_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3610_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3610_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3649_; lean_object* v_args_3650_; lean_object* v___x_3651_; 
v_fvarId_3649_ = lean_ctor_get(v_code_3519_, 0);
v_args_3650_ = lean_ctor_get(v_code_3519_, 1);
lean_inc(v_fvarId_3649_);
v___x_3651_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_3649_, v_t_3518_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_object* v_fvarId_3652_; lean_object* v___x_3653_; 
v_fvarId_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc(v_fvarId_3652_);
lean_dec_ref(v___x_3651_);
lean_inc_ref(v_args_3650_);
v___x_3653_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_3517_, v_t_3518_, v_args_3650_, v_a_3520_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3679_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3656_ = v___x_3653_;
v_isShared_3657_ = v_isSharedCheck_3679_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3653_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3679_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
uint8_t v___y_3659_; uint8_t v___x_3675_; 
v___x_3675_ = l_Lean_instBEqFVarId_beq(v_fvarId_3649_, v_fvarId_3652_);
if (v___x_3675_ == 0)
{
v___y_3659_ = v___x_3675_;
goto v___jp_3658_;
}
else
{
size_t v___x_3676_; size_t v___x_3677_; uint8_t v___x_3678_; 
v___x_3676_ = lean_ptr_addr(v_args_3650_);
v___x_3677_ = lean_ptr_addr(v_a_3654_);
v___x_3678_ = lean_usize_dec_eq(v___x_3676_, v___x_3677_);
v___y_3659_ = v___x_3678_;
goto v___jp_3658_;
}
v___jp_3658_:
{
if (v___y_3659_ == 0)
{
lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3669_; 
v_isSharedCheck_3669_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3669_ == 0)
{
lean_object* v_unused_3670_; lean_object* v_unused_3671_; 
v_unused_3670_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3670_);
v_unused_3671_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3671_);
v___x_3661_ = v_code_3519_;
v_isShared_3662_ = v_isSharedCheck_3669_;
goto v_resetjp_3660_;
}
else
{
lean_dec(v_code_3519_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3669_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 1, v_a_3654_);
lean_ctor_set(v___x_3661_, 0, v_fvarId_3652_);
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_fvarId_3652_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_a_3654_);
v___x_3664_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
lean_object* v___x_3666_; 
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v___x_3664_);
v___x_3666_ = v___x_3656_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v___x_3664_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
else
{
lean_object* v___x_3673_; 
lean_dec(v_a_3654_);
lean_dec(v_fvarId_3652_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v_code_3519_);
v___x_3673_ = v___x_3656_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_code_3519_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
lean_dec(v_fvarId_3652_);
lean_dec_ref(v_code_3519_);
v_a_3680_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3653_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3653_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
}
else
{
lean_object* v___x_3688_; 
lean_dec_ref(v_code_3519_);
v___x_3688_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3688_;
}
}
case 4:
{
lean_object* v_cases_3689_; lean_object* v_typeName_3690_; lean_object* v_resultType_3691_; lean_object* v_discr_3692_; lean_object* v_alts_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3740_; 
v_cases_3689_ = lean_ctor_get(v_code_3519_, 0);
lean_inc_ref(v_cases_3689_);
v_typeName_3690_ = lean_ctor_get(v_cases_3689_, 0);
v_resultType_3691_ = lean_ctor_get(v_cases_3689_, 1);
v_discr_3692_ = lean_ctor_get(v_cases_3689_, 2);
v_alts_3693_ = lean_ctor_get(v_cases_3689_, 3);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_cases_3689_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3695_ = v_cases_3689_;
v_isShared_3696_ = v_isSharedCheck_3740_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_alts_3693_);
lean_inc(v_discr_3692_);
lean_inc(v_resultType_3691_);
lean_inc(v_typeName_3690_);
lean_dec(v_cases_3689_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3740_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
lean_inc_ref(v_resultType_3691_);
v___x_3697_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3517_, v_a_3520_, v_t_3518_, v_resultType_3691_);
lean_inc(v_discr_3692_);
v___x_3698_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_discr_3692_, v_t_3518_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v_fvarId_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3738_; 
v_fvarId_3699_ = lean_ctor_get(v___x_3698_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3701_ = v___x_3698_;
v_isShared_3702_ = v_isSharedCheck_3738_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_fvarId_3699_);
lean_dec(v___x_3698_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3738_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3693_);
v___x_3704_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(v_pu_3517_, v_t_3518_, v___x_3703_, v_alts_3693_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3729_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3707_ = v___x_3704_;
v_isShared_3708_ = v_isSharedCheck_3729_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3704_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3729_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
uint8_t v___y_3720_; size_t v___x_3723_; size_t v___x_3724_; uint8_t v___x_3725_; 
v___x_3723_ = lean_ptr_addr(v_alts_3693_);
lean_dec_ref(v_alts_3693_);
v___x_3724_ = lean_ptr_addr(v_a_3705_);
v___x_3725_ = lean_usize_dec_eq(v___x_3723_, v___x_3724_);
if (v___x_3725_ == 0)
{
lean_dec_ref(v_resultType_3691_);
v___y_3720_ = v___x_3725_;
goto v___jp_3719_;
}
else
{
size_t v___x_3726_; size_t v___x_3727_; uint8_t v___x_3728_; 
v___x_3726_ = lean_ptr_addr(v_resultType_3691_);
lean_dec_ref(v_resultType_3691_);
v___x_3727_ = lean_ptr_addr(v___x_3697_);
v___x_3728_ = lean_usize_dec_eq(v___x_3726_, v___x_3727_);
v___y_3720_ = v___x_3728_;
goto v___jp_3719_;
}
v___jp_3709_:
{
lean_object* v___x_3711_; 
if (v_isShared_3696_ == 0)
{
lean_ctor_set(v___x_3695_, 3, v_a_3705_);
lean_ctor_set(v___x_3695_, 2, v_fvarId_3699_);
lean_ctor_set(v___x_3695_, 1, v___x_3697_);
v___x_3711_ = v___x_3695_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_typeName_3690_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3697_);
lean_ctor_set(v_reuseFailAlloc_3718_, 2, v_fvarId_3699_);
lean_ctor_set(v_reuseFailAlloc_3718_, 3, v_a_3705_);
v___x_3711_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
lean_object* v___x_3713_; 
if (v_isShared_3702_ == 0)
{
lean_ctor_set_tag(v___x_3701_, 4);
lean_ctor_set(v___x_3701_, 0, v___x_3711_);
v___x_3713_ = v___x_3701_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3711_);
v___x_3713_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
lean_object* v___x_3715_; 
if (v_isShared_3708_ == 0)
{
lean_ctor_set(v___x_3707_, 0, v___x_3713_);
v___x_3715_ = v___x_3707_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3713_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
v___jp_3719_:
{
if (v___y_3720_ == 0)
{
lean_dec(v_discr_3692_);
lean_dec_ref(v_code_3519_);
goto v___jp_3709_;
}
else
{
uint8_t v___x_3721_; 
v___x_3721_ = l_Lean_instBEqFVarId_beq(v_discr_3692_, v_fvarId_3699_);
lean_dec(v_discr_3692_);
if (v___x_3721_ == 0)
{
lean_dec_ref(v_code_3519_);
goto v___jp_3709_;
}
else
{
lean_object* v___x_3722_; 
lean_del_object(v___x_3707_);
lean_dec(v_a_3705_);
lean_del_object(v___x_3701_);
lean_dec(v_fvarId_3699_);
lean_dec_ref(v___x_3697_);
lean_del_object(v___x_3695_);
lean_dec(v_typeName_3690_);
v___x_3722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3722_, 0, v_code_3519_);
return v___x_3722_;
}
}
}
}
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_del_object(v___x_3701_);
lean_dec(v_fvarId_3699_);
lean_dec_ref(v___x_3697_);
lean_del_object(v___x_3695_);
lean_dec_ref(v_alts_3693_);
lean_dec(v_discr_3692_);
lean_dec_ref(v_resultType_3691_);
lean_dec(v_typeName_3690_);
lean_dec_ref(v_code_3519_);
v_a_3730_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3704_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3704_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
else
{
lean_object* v___x_3739_; 
lean_dec_ref(v___x_3697_);
lean_del_object(v___x_3695_);
lean_dec_ref(v_alts_3693_);
lean_dec(v_discr_3692_);
lean_dec_ref(v_resultType_3691_);
lean_dec(v_typeName_3690_);
lean_dec_ref(v_code_3519_);
v___x_3739_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3739_;
}
}
}
case 5:
{
lean_object* v_fvarId_3741_; lean_object* v___x_3742_; 
v_fvarId_3741_ = lean_ctor_get(v_code_3519_, 0);
lean_inc(v_fvarId_3741_);
v___x_3742_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_3741_, v_t_3518_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_object* v_fvarId_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3762_; 
v_fvarId_3743_ = lean_ctor_get(v___x_3742_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3742_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3745_ = v___x_3742_;
v_isShared_3746_ = v_isSharedCheck_3762_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_fvarId_3743_);
lean_dec(v___x_3742_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3762_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
uint8_t v___x_3747_; 
v___x_3747_ = l_Lean_instBEqFVarId_beq(v_fvarId_3741_, v_fvarId_3743_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3757_; 
v_isSharedCheck_3757_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3757_ == 0)
{
lean_object* v_unused_3758_; 
v_unused_3758_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3758_);
v___x_3749_ = v_code_3519_;
v_isShared_3750_ = v_isSharedCheck_3757_;
goto v_resetjp_3748_;
}
else
{
lean_dec(v_code_3519_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3757_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
lean_ctor_set(v___x_3749_, 0, v_fvarId_3743_);
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_fvarId_3743_);
v___x_3752_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
lean_object* v___x_3754_; 
if (v_isShared_3746_ == 0)
{
lean_ctor_set(v___x_3745_, 0, v___x_3752_);
v___x_3754_ = v___x_3745_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v___x_3752_);
v___x_3754_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
return v___x_3754_;
}
}
}
}
else
{
lean_object* v___x_3760_; 
lean_dec(v_fvarId_3743_);
if (v_isShared_3746_ == 0)
{
lean_ctor_set(v___x_3745_, 0, v_code_3519_);
v___x_3760_ = v___x_3745_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_code_3519_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
}
}
else
{
lean_object* v___x_3763_; 
lean_dec_ref(v_code_3519_);
v___x_3763_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3763_;
}
}
case 6:
{
lean_object* v_type_3764_; lean_object* v___x_3765_; size_t v___x_3766_; size_t v___x_3767_; uint8_t v___x_3768_; 
v_type_3764_ = lean_ctor_get(v_code_3519_, 0);
lean_inc_ref(v_type_3764_);
v___x_3765_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3517_, v_a_3520_, v_t_3518_, v_type_3764_);
v___x_3766_ = lean_ptr_addr(v_type_3764_);
v___x_3767_ = lean_ptr_addr(v___x_3765_);
v___x_3768_ = lean_usize_dec_eq(v___x_3766_, v___x_3767_);
if (v___x_3768_ == 0)
{
lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3776_; 
v_isSharedCheck_3776_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; 
v_unused_3777_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3777_);
v___x_3770_ = v_code_3519_;
v_isShared_3771_ = v_isSharedCheck_3776_;
goto v_resetjp_3769_;
}
else
{
lean_dec(v_code_3519_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3776_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 0, v___x_3765_);
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3765_);
v___x_3773_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
lean_object* v___x_3774_; 
v___x_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3773_);
return v___x_3774_;
}
}
}
else
{
lean_object* v___x_3778_; 
lean_dec_ref(v___x_3765_);
v___x_3778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3778_, 0, v_code_3519_);
return v___x_3778_;
}
}
case 7:
{
lean_object* v_fvarId_3779_; lean_object* v_i_3780_; lean_object* v_y_3781_; lean_object* v_k_3782_; lean_object* v___x_3783_; 
v_fvarId_3779_ = lean_ctor_get(v_code_3519_, 0);
v_i_3780_ = lean_ctor_get(v_code_3519_, 1);
v_y_3781_ = lean_ctor_get(v_code_3519_, 2);
v_k_3782_ = lean_ctor_get(v_code_3519_, 3);
lean_inc(v_fvarId_3779_);
v___x_3783_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_3779_, v_t_3518_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_fvarId_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v_fvarId_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_fvarId_3784_);
lean_dec_ref(v___x_3783_);
lean_inc(v_y_3781_);
v___x_3785_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_3517_, v_a_3520_, v_y_3781_, v_t_3518_);
lean_inc_ref(v_k_3782_);
v___x_3786_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3782_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3848_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3789_ = v___x_3786_;
v_isShared_3790_ = v_isSharedCheck_3848_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3786_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3848_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
uint8_t v___y_3792_; size_t v___x_3844_; size_t v___x_3845_; uint8_t v___x_3846_; 
v___x_3844_ = lean_ptr_addr(v_fvarId_3779_);
v___x_3845_ = lean_ptr_addr(v_fvarId_3784_);
v___x_3846_ = lean_usize_dec_eq(v___x_3844_, v___x_3845_);
if (v___x_3846_ == 0)
{
v___y_3792_ = v___x_3846_;
goto v___jp_3791_;
}
else
{
uint8_t v___x_3847_; 
v___x_3847_ = lean_nat_dec_eq(v_i_3780_, v_i_3780_);
v___y_3792_ = v___x_3847_;
goto v___jp_3791_;
}
v___jp_3791_:
{
if (v___y_3792_ == 0)
{
lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3802_; 
lean_inc(v_i_3780_);
v_isSharedCheck_3802_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3802_ == 0)
{
lean_object* v_unused_3803_; lean_object* v_unused_3804_; lean_object* v_unused_3805_; lean_object* v_unused_3806_; 
v_unused_3803_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3803_);
v_unused_3804_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3804_);
v_unused_3805_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3805_);
v_unused_3806_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3806_);
v___x_3794_ = v_code_3519_;
v_isShared_3795_ = v_isSharedCheck_3802_;
goto v_resetjp_3793_;
}
else
{
lean_dec(v_code_3519_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3802_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
lean_ctor_set(v___x_3794_, 3, v_a_3787_);
lean_ctor_set(v___x_3794_, 2, v___x_3785_);
lean_ctor_set(v___x_3794_, 0, v_fvarId_3784_);
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_fvarId_3784_);
lean_ctor_set(v_reuseFailAlloc_3801_, 1, v_i_3780_);
lean_ctor_set(v_reuseFailAlloc_3801_, 2, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3801_, 3, v_a_3787_);
v___x_3797_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
lean_object* v___x_3799_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v___x_3797_);
v___x_3799_ = v___x_3789_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v___x_3797_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
else
{
size_t v___x_3807_; size_t v___x_3808_; uint8_t v___x_3809_; 
v___x_3807_ = lean_ptr_addr(v_y_3781_);
v___x_3808_ = lean_ptr_addr(v___x_3785_);
v___x_3809_ = lean_usize_dec_eq(v___x_3807_, v___x_3808_);
if (v___x_3809_ == 0)
{
lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3819_; 
lean_inc(v_i_3780_);
v_isSharedCheck_3819_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3819_ == 0)
{
lean_object* v_unused_3820_; lean_object* v_unused_3821_; lean_object* v_unused_3822_; lean_object* v_unused_3823_; 
v_unused_3820_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3820_);
v_unused_3821_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3821_);
v_unused_3822_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3822_);
v_unused_3823_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3823_);
v___x_3811_ = v_code_3519_;
v_isShared_3812_ = v_isSharedCheck_3819_;
goto v_resetjp_3810_;
}
else
{
lean_dec(v_code_3519_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3819_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 3, v_a_3787_);
lean_ctor_set(v___x_3811_, 2, v___x_3785_);
lean_ctor_set(v___x_3811_, 0, v_fvarId_3784_);
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_fvarId_3784_);
lean_ctor_set(v_reuseFailAlloc_3818_, 1, v_i_3780_);
lean_ctor_set(v_reuseFailAlloc_3818_, 2, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3818_, 3, v_a_3787_);
v___x_3814_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3816_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v___x_3814_);
v___x_3816_ = v___x_3789_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v___x_3814_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
else
{
size_t v___x_3824_; size_t v___x_3825_; uint8_t v___x_3826_; 
v___x_3824_ = lean_ptr_addr(v_k_3782_);
v___x_3825_ = lean_ptr_addr(v_a_3787_);
v___x_3826_ = lean_usize_dec_eq(v___x_3824_, v___x_3825_);
if (v___x_3826_ == 0)
{
lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3836_; 
lean_inc(v_i_3780_);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3836_ == 0)
{
lean_object* v_unused_3837_; lean_object* v_unused_3838_; lean_object* v_unused_3839_; lean_object* v_unused_3840_; 
v_unused_3837_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3837_);
v_unused_3838_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3838_);
v_unused_3839_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3839_);
v_unused_3840_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3840_);
v___x_3828_ = v_code_3519_;
v_isShared_3829_ = v_isSharedCheck_3836_;
goto v_resetjp_3827_;
}
else
{
lean_dec(v_code_3519_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3836_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 3, v_a_3787_);
lean_ctor_set(v___x_3828_, 2, v___x_3785_);
lean_ctor_set(v___x_3828_, 0, v_fvarId_3784_);
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_fvarId_3784_);
lean_ctor_set(v_reuseFailAlloc_3835_, 1, v_i_3780_);
lean_ctor_set(v_reuseFailAlloc_3835_, 2, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3835_, 3, v_a_3787_);
v___x_3831_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
lean_object* v___x_3833_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v___x_3831_);
v___x_3833_ = v___x_3789_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3831_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
}
else
{
lean_object* v___x_3842_; 
lean_dec(v_a_3787_);
lean_dec(v___x_3785_);
lean_dec(v_fvarId_3784_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v_code_3519_);
v___x_3842_ = v___x_3789_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_code_3519_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3785_);
lean_dec(v_fvarId_3784_);
lean_dec_ref(v_code_3519_);
return v___x_3786_;
}
}
else
{
lean_object* v___x_3849_; 
lean_dec_ref(v_code_3519_);
v___x_3849_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3849_;
}
}
case 8:
{
lean_object* v_fvarId_3850_; lean_object* v_i_3851_; lean_object* v_y_3852_; lean_object* v_k_3853_; lean_object* v___x_3854_; 
v_fvarId_3850_ = lean_ctor_get(v_code_3519_, 0);
v_i_3851_ = lean_ctor_get(v_code_3519_, 1);
v_y_3852_ = lean_ctor_get(v_code_3519_, 2);
v_k_3853_ = lean_ctor_get(v_code_3519_, 3);
lean_inc(v_fvarId_3850_);
v___x_3854_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_3850_, v_t_3518_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_fvarId_3855_; lean_object* v___x_3856_; 
v_fvarId_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_fvarId_3855_);
lean_dec_ref(v___x_3854_);
lean_inc(v_y_3852_);
v___x_3856_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_y_3852_, v_t_3518_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_fvarId_3857_; lean_object* v___x_3858_; 
v_fvarId_3857_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_fvarId_3857_);
lean_dec_ref(v___x_3856_);
lean_inc_ref(v_k_3853_);
v___x_3858_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3853_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3920_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3861_ = v___x_3858_;
v_isShared_3862_ = v_isSharedCheck_3920_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3858_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3920_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
uint8_t v___y_3864_; size_t v___x_3916_; size_t v___x_3917_; uint8_t v___x_3918_; 
v___x_3916_ = lean_ptr_addr(v_fvarId_3850_);
v___x_3917_ = lean_ptr_addr(v_fvarId_3855_);
v___x_3918_ = lean_usize_dec_eq(v___x_3916_, v___x_3917_);
if (v___x_3918_ == 0)
{
v___y_3864_ = v___x_3918_;
goto v___jp_3863_;
}
else
{
uint8_t v___x_3919_; 
v___x_3919_ = lean_nat_dec_eq(v_i_3851_, v_i_3851_);
v___y_3864_ = v___x_3919_;
goto v___jp_3863_;
}
v___jp_3863_:
{
if (v___y_3864_ == 0)
{
lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3874_; 
lean_inc(v_i_3851_);
v_isSharedCheck_3874_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3874_ == 0)
{
lean_object* v_unused_3875_; lean_object* v_unused_3876_; lean_object* v_unused_3877_; lean_object* v_unused_3878_; 
v_unused_3875_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3875_);
v_unused_3876_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3876_);
v_unused_3877_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3877_);
v_unused_3878_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3878_);
v___x_3866_ = v_code_3519_;
v_isShared_3867_ = v_isSharedCheck_3874_;
goto v_resetjp_3865_;
}
else
{
lean_dec(v_code_3519_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3874_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 3, v_a_3859_);
lean_ctor_set(v___x_3866_, 2, v_fvarId_3857_);
lean_ctor_set(v___x_3866_, 0, v_fvarId_3855_);
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_fvarId_3855_);
lean_ctor_set(v_reuseFailAlloc_3873_, 1, v_i_3851_);
lean_ctor_set(v_reuseFailAlloc_3873_, 2, v_fvarId_3857_);
lean_ctor_set(v_reuseFailAlloc_3873_, 3, v_a_3859_);
v___x_3869_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3871_; 
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v___x_3869_);
v___x_3871_ = v___x_3861_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
else
{
size_t v___x_3879_; size_t v___x_3880_; uint8_t v___x_3881_; 
v___x_3879_ = lean_ptr_addr(v_y_3852_);
v___x_3880_ = lean_ptr_addr(v_fvarId_3857_);
v___x_3881_ = lean_usize_dec_eq(v___x_3879_, v___x_3880_);
if (v___x_3881_ == 0)
{
lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3891_; 
lean_inc(v_i_3851_);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3891_ == 0)
{
lean_object* v_unused_3892_; lean_object* v_unused_3893_; lean_object* v_unused_3894_; lean_object* v_unused_3895_; 
v_unused_3892_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3892_);
v_unused_3893_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3893_);
v_unused_3894_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3894_);
v_unused_3895_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3895_);
v___x_3883_ = v_code_3519_;
v_isShared_3884_ = v_isSharedCheck_3891_;
goto v_resetjp_3882_;
}
else
{
lean_dec(v_code_3519_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3891_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3886_; 
if (v_isShared_3884_ == 0)
{
lean_ctor_set(v___x_3883_, 3, v_a_3859_);
lean_ctor_set(v___x_3883_, 2, v_fvarId_3857_);
lean_ctor_set(v___x_3883_, 0, v_fvarId_3855_);
v___x_3886_ = v___x_3883_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_fvarId_3855_);
lean_ctor_set(v_reuseFailAlloc_3890_, 1, v_i_3851_);
lean_ctor_set(v_reuseFailAlloc_3890_, 2, v_fvarId_3857_);
lean_ctor_set(v_reuseFailAlloc_3890_, 3, v_a_3859_);
v___x_3886_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
lean_object* v___x_3888_; 
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v___x_3886_);
v___x_3888_ = v___x_3861_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v___x_3886_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
else
{
size_t v___x_3896_; size_t v___x_3897_; uint8_t v___x_3898_; 
v___x_3896_ = lean_ptr_addr(v_k_3853_);
v___x_3897_ = lean_ptr_addr(v_a_3859_);
v___x_3898_ = lean_usize_dec_eq(v___x_3896_, v___x_3897_);
if (v___x_3898_ == 0)
{
lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3908_; 
lean_inc(v_i_3851_);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3908_ == 0)
{
lean_object* v_unused_3909_; lean_object* v_unused_3910_; lean_object* v_unused_3911_; lean_object* v_unused_3912_; 
v_unused_3909_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3909_);
v_unused_3910_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3910_);
v_unused_3911_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3911_);
v_unused_3912_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3912_);
v___x_3900_ = v_code_3519_;
v_isShared_3901_ = v_isSharedCheck_3908_;
goto v_resetjp_3899_;
}
else
{
lean_dec(v_code_3519_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3908_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
lean_ctor_set(v___x_3900_, 3, v_a_3859_);
lean_ctor_set(v___x_3900_, 2, v_fvarId_3857_);
lean_ctor_set(v___x_3900_, 0, v_fvarId_3855_);
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_fvarId_3855_);
lean_ctor_set(v_reuseFailAlloc_3907_, 1, v_i_3851_);
lean_ctor_set(v_reuseFailAlloc_3907_, 2, v_fvarId_3857_);
lean_ctor_set(v_reuseFailAlloc_3907_, 3, v_a_3859_);
v___x_3903_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
lean_object* v___x_3905_; 
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v___x_3903_);
v___x_3905_ = v___x_3861_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v___x_3903_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
else
{
lean_object* v___x_3914_; 
lean_dec(v_a_3859_);
lean_dec(v_fvarId_3857_);
lean_dec(v_fvarId_3855_);
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v_code_3519_);
v___x_3914_ = v___x_3861_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_code_3519_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
return v___x_3914_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_3857_);
lean_dec(v_fvarId_3855_);
lean_dec_ref(v_code_3519_);
return v___x_3858_;
}
}
else
{
lean_object* v___x_3921_; 
lean_dec(v_fvarId_3855_);
lean_dec_ref(v_code_3519_);
v___x_3921_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3921_;
}
}
else
{
lean_object* v___x_3922_; 
lean_dec_ref(v_code_3519_);
v___x_3922_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_3922_;
}
}
case 9:
{
lean_object* v_fvarId_3923_; lean_object* v_i_3924_; lean_object* v_offset_3925_; lean_object* v_y_3926_; lean_object* v_ty_3927_; lean_object* v_k_3928_; lean_object* v___x_3929_; 
v_fvarId_3923_ = lean_ctor_get(v_code_3519_, 0);
v_i_3924_ = lean_ctor_get(v_code_3519_, 1);
v_offset_3925_ = lean_ctor_get(v_code_3519_, 2);
v_y_3926_ = lean_ctor_get(v_code_3519_, 3);
v_ty_3927_ = lean_ctor_get(v_code_3519_, 4);
v_k_3928_ = lean_ctor_get(v_code_3519_, 5);
lean_inc(v_fvarId_3923_);
v___x_3929_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_3923_, v_t_3518_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v_fvarId_3930_; lean_object* v___x_3931_; 
v_fvarId_3930_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_fvarId_3930_);
lean_dec_ref(v___x_3929_);
lean_inc(v_y_3926_);
v___x_3931_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_y_3926_, v_t_3518_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v_fvarId_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v_fvarId_3932_ = lean_ctor_get(v___x_3931_, 0);
lean_inc(v_fvarId_3932_);
lean_dec_ref(v___x_3931_);
lean_inc_ref(v_ty_3927_);
v___x_3933_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3517_, v_a_3520_, v_t_3518_, v_ty_3927_);
lean_inc_ref(v_k_3928_);
v___x_3934_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_3928_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_4038_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_3937_ = v___x_3934_;
v_isShared_3938_ = v_isSharedCheck_4038_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3934_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_4038_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
uint8_t v___y_3940_; size_t v___x_4034_; size_t v___x_4035_; uint8_t v___x_4036_; 
v___x_4034_ = lean_ptr_addr(v_fvarId_3923_);
v___x_4035_ = lean_ptr_addr(v_fvarId_3930_);
v___x_4036_ = lean_usize_dec_eq(v___x_4034_, v___x_4035_);
if (v___x_4036_ == 0)
{
v___y_3940_ = v___x_4036_;
goto v___jp_3939_;
}
else
{
uint8_t v___x_4037_; 
v___x_4037_ = lean_nat_dec_eq(v_i_3924_, v_i_3924_);
v___y_3940_ = v___x_4037_;
goto v___jp_3939_;
}
v___jp_3939_:
{
if (v___y_3940_ == 0)
{
lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3950_; 
lean_inc(v_offset_3925_);
lean_inc(v_i_3924_);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3950_ == 0)
{
lean_object* v_unused_3951_; lean_object* v_unused_3952_; lean_object* v_unused_3953_; lean_object* v_unused_3954_; lean_object* v_unused_3955_; lean_object* v_unused_3956_; 
v_unused_3951_ = lean_ctor_get(v_code_3519_, 5);
lean_dec(v_unused_3951_);
v_unused_3952_ = lean_ctor_get(v_code_3519_, 4);
lean_dec(v_unused_3952_);
v_unused_3953_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3953_);
v_unused_3954_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3954_);
v_unused_3955_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3955_);
v_unused_3956_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3956_);
v___x_3942_ = v_code_3519_;
v_isShared_3943_ = v_isSharedCheck_3950_;
goto v_resetjp_3941_;
}
else
{
lean_dec(v_code_3519_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3950_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 5, v_a_3935_);
lean_ctor_set(v___x_3942_, 4, v___x_3933_);
lean_ctor_set(v___x_3942_, 3, v_fvarId_3932_);
lean_ctor_set(v___x_3942_, 0, v_fvarId_3930_);
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_fvarId_3930_);
lean_ctor_set(v_reuseFailAlloc_3949_, 1, v_i_3924_);
lean_ctor_set(v_reuseFailAlloc_3949_, 2, v_offset_3925_);
lean_ctor_set(v_reuseFailAlloc_3949_, 3, v_fvarId_3932_);
lean_ctor_set(v_reuseFailAlloc_3949_, 4, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3949_, 5, v_a_3935_);
v___x_3945_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
lean_object* v___x_3947_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_3945_);
v___x_3947_ = v___x_3937_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v___x_3945_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
else
{
uint8_t v___x_3957_; 
v___x_3957_ = lean_nat_dec_eq(v_offset_3925_, v_offset_3925_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3967_; 
lean_inc(v_offset_3925_);
lean_inc(v_i_3924_);
v_isSharedCheck_3967_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; lean_object* v_unused_3969_; lean_object* v_unused_3970_; lean_object* v_unused_3971_; lean_object* v_unused_3972_; lean_object* v_unused_3973_; 
v_unused_3968_ = lean_ctor_get(v_code_3519_, 5);
lean_dec(v_unused_3968_);
v_unused_3969_ = lean_ctor_get(v_code_3519_, 4);
lean_dec(v_unused_3969_);
v_unused_3970_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3970_);
v_unused_3971_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3971_);
v_unused_3972_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3972_);
v_unused_3973_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3973_);
v___x_3959_ = v_code_3519_;
v_isShared_3960_ = v_isSharedCheck_3967_;
goto v_resetjp_3958_;
}
else
{
lean_dec(v_code_3519_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3967_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
lean_ctor_set(v___x_3959_, 5, v_a_3935_);
lean_ctor_set(v___x_3959_, 4, v___x_3933_);
lean_ctor_set(v___x_3959_, 3, v_fvarId_3932_);
lean_ctor_set(v___x_3959_, 0, v_fvarId_3930_);
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_fvarId_3930_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v_i_3924_);
lean_ctor_set(v_reuseFailAlloc_3966_, 2, v_offset_3925_);
lean_ctor_set(v_reuseFailAlloc_3966_, 3, v_fvarId_3932_);
lean_ctor_set(v_reuseFailAlloc_3966_, 4, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3966_, 5, v_a_3935_);
v___x_3962_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
lean_object* v___x_3964_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_3962_);
v___x_3964_ = v___x_3937_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v___x_3962_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
else
{
size_t v___x_3974_; size_t v___x_3975_; uint8_t v___x_3976_; 
v___x_3974_ = lean_ptr_addr(v_y_3926_);
v___x_3975_ = lean_ptr_addr(v_fvarId_3932_);
v___x_3976_ = lean_usize_dec_eq(v___x_3974_, v___x_3975_);
if (v___x_3976_ == 0)
{
lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3986_; 
lean_inc(v_offset_3925_);
lean_inc(v_i_3924_);
v_isSharedCheck_3986_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_3986_ == 0)
{
lean_object* v_unused_3987_; lean_object* v_unused_3988_; lean_object* v_unused_3989_; lean_object* v_unused_3990_; lean_object* v_unused_3991_; lean_object* v_unused_3992_; 
v_unused_3987_ = lean_ctor_get(v_code_3519_, 5);
lean_dec(v_unused_3987_);
v_unused_3988_ = lean_ctor_get(v_code_3519_, 4);
lean_dec(v_unused_3988_);
v_unused_3989_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_3989_);
v_unused_3990_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_3990_);
v_unused_3991_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_3991_);
v_unused_3992_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_3992_);
v___x_3978_ = v_code_3519_;
v_isShared_3979_ = v_isSharedCheck_3986_;
goto v_resetjp_3977_;
}
else
{
lean_dec(v_code_3519_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3986_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 5, v_a_3935_);
lean_ctor_set(v___x_3978_, 4, v___x_3933_);
lean_ctor_set(v___x_3978_, 3, v_fvarId_3932_);
lean_ctor_set(v___x_3978_, 0, v_fvarId_3930_);
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_fvarId_3930_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v_i_3924_);
lean_ctor_set(v_reuseFailAlloc_3985_, 2, v_offset_3925_);
lean_ctor_set(v_reuseFailAlloc_3985_, 3, v_fvarId_3932_);
lean_ctor_set(v_reuseFailAlloc_3985_, 4, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3985_, 5, v_a_3935_);
v___x_3981_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
lean_object* v___x_3983_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_3981_);
v___x_3983_ = v___x_3937_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v___x_3981_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
else
{
size_t v___x_3993_; size_t v___x_3994_; uint8_t v___x_3995_; 
v___x_3993_ = lean_ptr_addr(v_ty_3927_);
v___x_3994_ = lean_ptr_addr(v___x_3933_);
v___x_3995_ = lean_usize_dec_eq(v___x_3993_, v___x_3994_);
if (v___x_3995_ == 0)
{
lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4005_; 
lean_inc(v_offset_3925_);
lean_inc(v_i_3924_);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; lean_object* v_unused_4007_; lean_object* v_unused_4008_; lean_object* v_unused_4009_; lean_object* v_unused_4010_; lean_object* v_unused_4011_; 
v_unused_4006_ = lean_ctor_get(v_code_3519_, 5);
lean_dec(v_unused_4006_);
v_unused_4007_ = lean_ctor_get(v_code_3519_, 4);
lean_dec(v_unused_4007_);
v_unused_4008_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_4008_);
v_unused_4009_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4009_);
v_unused_4010_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4010_);
v_unused_4011_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4011_);
v___x_3997_ = v_code_3519_;
v_isShared_3998_ = v_isSharedCheck_4005_;
goto v_resetjp_3996_;
}
else
{
lean_dec(v_code_3519_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4005_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
lean_ctor_set(v___x_3997_, 5, v_a_3935_);
lean_ctor_set(v___x_3997_, 4, v___x_3933_);
lean_ctor_set(v___x_3997_, 3, v_fvarId_3932_);
lean_ctor_set(v___x_3997_, 0, v_fvarId_3930_);
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_fvarId_3930_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v_i_3924_);
lean_ctor_set(v_reuseFailAlloc_4004_, 2, v_offset_3925_);
lean_ctor_set(v_reuseFailAlloc_4004_, 3, v_fvarId_3932_);
lean_ctor_set(v_reuseFailAlloc_4004_, 4, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_4004_, 5, v_a_3935_);
v___x_4000_ = v_reuseFailAlloc_4004_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
lean_object* v___x_4002_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_4000_);
v___x_4002_ = v___x_3937_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v___x_4000_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
}
else
{
size_t v___x_4012_; size_t v___x_4013_; uint8_t v___x_4014_; 
v___x_4012_ = lean_ptr_addr(v_k_3928_);
v___x_4013_ = lean_ptr_addr(v_a_3935_);
v___x_4014_ = lean_usize_dec_eq(v___x_4012_, v___x_4013_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4024_; 
lean_inc(v_offset_3925_);
lean_inc(v_i_3924_);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4024_ == 0)
{
lean_object* v_unused_4025_; lean_object* v_unused_4026_; lean_object* v_unused_4027_; lean_object* v_unused_4028_; lean_object* v_unused_4029_; lean_object* v_unused_4030_; 
v_unused_4025_ = lean_ctor_get(v_code_3519_, 5);
lean_dec(v_unused_4025_);
v_unused_4026_ = lean_ctor_get(v_code_3519_, 4);
lean_dec(v_unused_4026_);
v_unused_4027_ = lean_ctor_get(v_code_3519_, 3);
lean_dec(v_unused_4027_);
v_unused_4028_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4028_);
v_unused_4029_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4029_);
v_unused_4030_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4030_);
v___x_4016_ = v_code_3519_;
v_isShared_4017_ = v_isSharedCheck_4024_;
goto v_resetjp_4015_;
}
else
{
lean_dec(v_code_3519_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4024_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4019_; 
if (v_isShared_4017_ == 0)
{
lean_ctor_set(v___x_4016_, 5, v_a_3935_);
lean_ctor_set(v___x_4016_, 4, v___x_3933_);
lean_ctor_set(v___x_4016_, 3, v_fvarId_3932_);
lean_ctor_set(v___x_4016_, 0, v_fvarId_3930_);
v___x_4019_ = v___x_4016_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_fvarId_3930_);
lean_ctor_set(v_reuseFailAlloc_4023_, 1, v_i_3924_);
lean_ctor_set(v_reuseFailAlloc_4023_, 2, v_offset_3925_);
lean_ctor_set(v_reuseFailAlloc_4023_, 3, v_fvarId_3932_);
lean_ctor_set(v_reuseFailAlloc_4023_, 4, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_4023_, 5, v_a_3935_);
v___x_4019_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
lean_object* v___x_4021_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_4019_);
v___x_4021_ = v___x_3937_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
}
else
{
lean_object* v___x_4032_; 
lean_dec(v_a_3935_);
lean_dec_ref(v___x_3933_);
lean_dec(v_fvarId_3932_);
lean_dec(v_fvarId_3930_);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v_code_3519_);
v___x_4032_ = v___x_3937_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_code_3519_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3933_);
lean_dec(v_fvarId_3932_);
lean_dec(v_fvarId_3930_);
lean_dec_ref(v_code_3519_);
return v___x_3934_;
}
}
else
{
lean_object* v___x_4039_; 
lean_dec(v_fvarId_3930_);
lean_dec_ref(v_code_3519_);
v___x_4039_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4039_;
}
}
else
{
lean_object* v___x_4040_; 
lean_dec_ref(v_code_3519_);
v___x_4040_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4040_;
}
}
case 10:
{
lean_object* v_fvarId_4041_; lean_object* v_cidx_4042_; lean_object* v_k_4043_; lean_object* v___x_4044_; 
v_fvarId_4041_ = lean_ctor_get(v_code_3519_, 0);
v_cidx_4042_ = lean_ctor_get(v_code_3519_, 1);
v_k_4043_ = lean_ctor_get(v_code_3519_, 2);
lean_inc(v_fvarId_4041_);
v___x_4044_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_4041_, v_t_3518_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_fvarId_4045_; lean_object* v___x_4046_; 
v_fvarId_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_fvarId_4045_);
lean_dec_ref(v___x_4044_);
lean_inc_ref(v_k_4043_);
v___x_4046_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_4043_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4089_; 
v_a_4047_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4049_ = v___x_4046_;
v_isShared_4050_ = v_isSharedCheck_4089_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4046_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4089_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
uint8_t v___y_4052_; size_t v___x_4085_; size_t v___x_4086_; uint8_t v___x_4087_; 
v___x_4085_ = lean_ptr_addr(v_fvarId_4041_);
v___x_4086_ = lean_ptr_addr(v_fvarId_4045_);
v___x_4087_ = lean_usize_dec_eq(v___x_4085_, v___x_4086_);
if (v___x_4087_ == 0)
{
v___y_4052_ = v___x_4087_;
goto v___jp_4051_;
}
else
{
uint8_t v___x_4088_; 
v___x_4088_ = lean_nat_dec_eq(v_cidx_4042_, v_cidx_4042_);
v___y_4052_ = v___x_4088_;
goto v___jp_4051_;
}
v___jp_4051_:
{
if (v___y_4052_ == 0)
{
lean_object* v___x_4054_; uint8_t v_isShared_4055_; uint8_t v_isSharedCheck_4062_; 
lean_inc(v_cidx_4042_);
v_isSharedCheck_4062_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4062_ == 0)
{
lean_object* v_unused_4063_; lean_object* v_unused_4064_; lean_object* v_unused_4065_; 
v_unused_4063_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4063_);
v_unused_4064_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4064_);
v_unused_4065_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4065_);
v___x_4054_ = v_code_3519_;
v_isShared_4055_ = v_isSharedCheck_4062_;
goto v_resetjp_4053_;
}
else
{
lean_dec(v_code_3519_);
v___x_4054_ = lean_box(0);
v_isShared_4055_ = v_isSharedCheck_4062_;
goto v_resetjp_4053_;
}
v_resetjp_4053_:
{
lean_object* v___x_4057_; 
if (v_isShared_4055_ == 0)
{
lean_ctor_set(v___x_4054_, 2, v_a_4047_);
lean_ctor_set(v___x_4054_, 0, v_fvarId_4045_);
v___x_4057_ = v___x_4054_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_fvarId_4045_);
lean_ctor_set(v_reuseFailAlloc_4061_, 1, v_cidx_4042_);
lean_ctor_set(v_reuseFailAlloc_4061_, 2, v_a_4047_);
v___x_4057_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
lean_object* v___x_4059_; 
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 0, v___x_4057_);
v___x_4059_ = v___x_4049_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
else
{
size_t v___x_4066_; size_t v___x_4067_; uint8_t v___x_4068_; 
v___x_4066_ = lean_ptr_addr(v_k_4043_);
v___x_4067_ = lean_ptr_addr(v_a_4047_);
v___x_4068_ = lean_usize_dec_eq(v___x_4066_, v___x_4067_);
if (v___x_4068_ == 0)
{
lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4078_; 
lean_inc(v_cidx_4042_);
v_isSharedCheck_4078_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4078_ == 0)
{
lean_object* v_unused_4079_; lean_object* v_unused_4080_; lean_object* v_unused_4081_; 
v_unused_4079_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4079_);
v_unused_4080_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4080_);
v_unused_4081_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4081_);
v___x_4070_ = v_code_3519_;
v_isShared_4071_ = v_isSharedCheck_4078_;
goto v_resetjp_4069_;
}
else
{
lean_dec(v_code_3519_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4078_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 2, v_a_4047_);
lean_ctor_set(v___x_4070_, 0, v_fvarId_4045_);
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_fvarId_4045_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v_cidx_4042_);
lean_ctor_set(v_reuseFailAlloc_4077_, 2, v_a_4047_);
v___x_4073_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4075_; 
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 0, v___x_4073_);
v___x_4075_ = v___x_4049_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4073_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
else
{
lean_object* v___x_4083_; 
lean_dec(v_a_4047_);
lean_dec(v_fvarId_4045_);
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 0, v_code_3519_);
v___x_4083_ = v___x_4049_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_code_3519_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4045_);
lean_dec_ref(v_code_3519_);
return v___x_4046_;
}
}
else
{
lean_object* v___x_4090_; 
lean_dec_ref(v_code_3519_);
v___x_4090_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4090_;
}
}
case 11:
{
lean_object* v_fvarId_4091_; lean_object* v_n_4092_; uint8_t v_check_4093_; uint8_t v_persistent_4094_; lean_object* v_k_4095_; lean_object* v___x_4096_; 
v_fvarId_4091_ = lean_ctor_get(v_code_3519_, 0);
v_n_4092_ = lean_ctor_get(v_code_3519_, 1);
v_check_4093_ = lean_ctor_get_uint8(v_code_3519_, sizeof(void*)*3);
v_persistent_4094_ = lean_ctor_get_uint8(v_code_3519_, sizeof(void*)*3 + 1);
v_k_4095_ = lean_ctor_get(v_code_3519_, 2);
lean_inc(v_fvarId_4091_);
v___x_4096_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_4091_, v_t_3518_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v_fvarId_4097_; lean_object* v___x_4098_; 
v_fvarId_4097_ = lean_ctor_get(v___x_4096_, 0);
lean_inc(v_fvarId_4097_);
lean_dec_ref(v___x_4096_);
lean_inc_ref(v_k_4095_);
v___x_4098_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_4095_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4141_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4101_ = v___x_4098_;
v_isShared_4102_ = v_isSharedCheck_4141_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_a_4099_);
lean_dec(v___x_4098_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4141_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
uint8_t v___y_4104_; size_t v___x_4137_; size_t v___x_4138_; uint8_t v___x_4139_; 
v___x_4137_ = lean_ptr_addr(v_fvarId_4091_);
v___x_4138_ = lean_ptr_addr(v_fvarId_4097_);
v___x_4139_ = lean_usize_dec_eq(v___x_4137_, v___x_4138_);
if (v___x_4139_ == 0)
{
v___y_4104_ = v___x_4139_;
goto v___jp_4103_;
}
else
{
uint8_t v___x_4140_; 
v___x_4140_ = lean_nat_dec_eq(v_n_4092_, v_n_4092_);
v___y_4104_ = v___x_4140_;
goto v___jp_4103_;
}
v___jp_4103_:
{
if (v___y_4104_ == 0)
{
lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4114_; 
lean_inc(v_n_4092_);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4114_ == 0)
{
lean_object* v_unused_4115_; lean_object* v_unused_4116_; lean_object* v_unused_4117_; 
v_unused_4115_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4115_);
v_unused_4116_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4116_);
v_unused_4117_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4117_);
v___x_4106_ = v_code_3519_;
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
else
{
lean_dec(v_code_3519_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4109_; 
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 2, v_a_4099_);
lean_ctor_set(v___x_4106_, 0, v_fvarId_4097_);
v___x_4109_ = v___x_4106_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v_fvarId_4097_);
lean_ctor_set(v_reuseFailAlloc_4113_, 1, v_n_4092_);
lean_ctor_set(v_reuseFailAlloc_4113_, 2, v_a_4099_);
lean_ctor_set_uint8(v_reuseFailAlloc_4113_, sizeof(void*)*3, v_check_4093_);
lean_ctor_set_uint8(v_reuseFailAlloc_4113_, sizeof(void*)*3 + 1, v_persistent_4094_);
v___x_4109_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4111_; 
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v___x_4109_);
v___x_4111_ = v___x_4101_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v___x_4109_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
else
{
size_t v___x_4118_; size_t v___x_4119_; uint8_t v___x_4120_; 
v___x_4118_ = lean_ptr_addr(v_k_4095_);
v___x_4119_ = lean_ptr_addr(v_a_4099_);
v___x_4120_ = lean_usize_dec_eq(v___x_4118_, v___x_4119_);
if (v___x_4120_ == 0)
{
lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4130_; 
lean_inc(v_n_4092_);
v_isSharedCheck_4130_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4130_ == 0)
{
lean_object* v_unused_4131_; lean_object* v_unused_4132_; lean_object* v_unused_4133_; 
v_unused_4131_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4131_);
v_unused_4132_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4132_);
v_unused_4133_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4133_);
v___x_4122_ = v_code_3519_;
v_isShared_4123_ = v_isSharedCheck_4130_;
goto v_resetjp_4121_;
}
else
{
lean_dec(v_code_3519_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4130_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
lean_ctor_set(v___x_4122_, 2, v_a_4099_);
lean_ctor_set(v___x_4122_, 0, v_fvarId_4097_);
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_fvarId_4097_);
lean_ctor_set(v_reuseFailAlloc_4129_, 1, v_n_4092_);
lean_ctor_set(v_reuseFailAlloc_4129_, 2, v_a_4099_);
lean_ctor_set_uint8(v_reuseFailAlloc_4129_, sizeof(void*)*3, v_check_4093_);
lean_ctor_set_uint8(v_reuseFailAlloc_4129_, sizeof(void*)*3 + 1, v_persistent_4094_);
v___x_4125_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
lean_object* v___x_4127_; 
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v___x_4125_);
v___x_4127_ = v___x_4101_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4125_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
return v___x_4127_;
}
}
}
}
else
{
lean_object* v___x_4135_; 
lean_dec(v_a_4099_);
lean_dec(v_fvarId_4097_);
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 0, v_code_3519_);
v___x_4135_ = v___x_4101_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_code_3519_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4097_);
lean_dec_ref(v_code_3519_);
return v___x_4098_;
}
}
else
{
lean_object* v___x_4142_; 
lean_dec_ref(v_code_3519_);
v___x_4142_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4142_;
}
}
case 12:
{
lean_object* v_fvarId_4143_; lean_object* v_n_4144_; uint8_t v_check_4145_; uint8_t v_persistent_4146_; lean_object* v_k_4147_; lean_object* v___x_4148_; 
v_fvarId_4143_ = lean_ctor_get(v_code_3519_, 0);
v_n_4144_ = lean_ctor_get(v_code_3519_, 1);
v_check_4145_ = lean_ctor_get_uint8(v_code_3519_, sizeof(void*)*3);
v_persistent_4146_ = lean_ctor_get_uint8(v_code_3519_, sizeof(void*)*3 + 1);
v_k_4147_ = lean_ctor_get(v_code_3519_, 2);
lean_inc(v_fvarId_4143_);
v___x_4148_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_4143_, v_t_3518_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v_fvarId_4149_; lean_object* v___x_4150_; 
v_fvarId_4149_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_fvarId_4149_);
lean_dec_ref(v___x_4148_);
lean_inc_ref(v_k_4147_);
v___x_4150_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_4147_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_4150_) == 0)
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4193_; 
v_a_4151_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4153_ = v___x_4150_;
v_isShared_4154_ = v_isSharedCheck_4193_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4150_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4193_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
uint8_t v___y_4156_; size_t v___x_4189_; size_t v___x_4190_; uint8_t v___x_4191_; 
v___x_4189_ = lean_ptr_addr(v_fvarId_4143_);
v___x_4190_ = lean_ptr_addr(v_fvarId_4149_);
v___x_4191_ = lean_usize_dec_eq(v___x_4189_, v___x_4190_);
if (v___x_4191_ == 0)
{
v___y_4156_ = v___x_4191_;
goto v___jp_4155_;
}
else
{
uint8_t v___x_4192_; 
v___x_4192_ = lean_nat_dec_eq(v_n_4144_, v_n_4144_);
v___y_4156_ = v___x_4192_;
goto v___jp_4155_;
}
v___jp_4155_:
{
if (v___y_4156_ == 0)
{
lean_object* v___x_4158_; uint8_t v_isShared_4159_; uint8_t v_isSharedCheck_4166_; 
lean_inc(v_n_4144_);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4166_ == 0)
{
lean_object* v_unused_4167_; lean_object* v_unused_4168_; lean_object* v_unused_4169_; 
v_unused_4167_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4167_);
v_unused_4168_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4168_);
v_unused_4169_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4169_);
v___x_4158_ = v_code_3519_;
v_isShared_4159_ = v_isSharedCheck_4166_;
goto v_resetjp_4157_;
}
else
{
lean_dec(v_code_3519_);
v___x_4158_ = lean_box(0);
v_isShared_4159_ = v_isSharedCheck_4166_;
goto v_resetjp_4157_;
}
v_resetjp_4157_:
{
lean_object* v___x_4161_; 
if (v_isShared_4159_ == 0)
{
lean_ctor_set(v___x_4158_, 2, v_a_4151_);
lean_ctor_set(v___x_4158_, 0, v_fvarId_4149_);
v___x_4161_ = v___x_4158_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_fvarId_4149_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v_n_4144_);
lean_ctor_set(v_reuseFailAlloc_4165_, 2, v_a_4151_);
lean_ctor_set_uint8(v_reuseFailAlloc_4165_, sizeof(void*)*3, v_check_4145_);
lean_ctor_set_uint8(v_reuseFailAlloc_4165_, sizeof(void*)*3 + 1, v_persistent_4146_);
v___x_4161_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
lean_object* v___x_4163_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v___x_4161_);
v___x_4163_ = v___x_4153_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
else
{
size_t v___x_4170_; size_t v___x_4171_; uint8_t v___x_4172_; 
v___x_4170_ = lean_ptr_addr(v_k_4147_);
v___x_4171_ = lean_ptr_addr(v_a_4151_);
v___x_4172_ = lean_usize_dec_eq(v___x_4170_, v___x_4171_);
if (v___x_4172_ == 0)
{
lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4182_; 
lean_inc(v_n_4144_);
v_isSharedCheck_4182_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4182_ == 0)
{
lean_object* v_unused_4183_; lean_object* v_unused_4184_; lean_object* v_unused_4185_; 
v_unused_4183_ = lean_ctor_get(v_code_3519_, 2);
lean_dec(v_unused_4183_);
v_unused_4184_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4184_);
v_unused_4185_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4185_);
v___x_4174_ = v_code_3519_;
v_isShared_4175_ = v_isSharedCheck_4182_;
goto v_resetjp_4173_;
}
else
{
lean_dec(v_code_3519_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4182_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
lean_ctor_set(v___x_4174_, 2, v_a_4151_);
lean_ctor_set(v___x_4174_, 0, v_fvarId_4149_);
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_fvarId_4149_);
lean_ctor_set(v_reuseFailAlloc_4181_, 1, v_n_4144_);
lean_ctor_set(v_reuseFailAlloc_4181_, 2, v_a_4151_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, sizeof(void*)*3, v_check_4145_);
lean_ctor_set_uint8(v_reuseFailAlloc_4181_, sizeof(void*)*3 + 1, v_persistent_4146_);
v___x_4177_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4179_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v___x_4177_);
v___x_4179_ = v___x_4153_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4177_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
else
{
lean_object* v___x_4187_; 
lean_dec(v_a_4151_);
lean_dec(v_fvarId_4149_);
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v_code_3519_);
v___x_4187_ = v___x_4153_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_code_3519_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4149_);
lean_dec_ref(v_code_3519_);
return v___x_4150_;
}
}
else
{
lean_object* v___x_4194_; 
lean_dec_ref(v_code_3519_);
v___x_4194_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4194_;
}
}
default: 
{
lean_object* v_fvarId_4195_; lean_object* v_k_4196_; lean_object* v___x_4197_; 
v_fvarId_4195_ = lean_ctor_get(v_code_3519_, 0);
v_k_4196_ = lean_ctor_get(v_code_3519_, 1);
lean_inc(v_fvarId_4195_);
v___x_4197_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_a_3520_, v_fvarId_4195_, v_t_3518_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_fvarId_4198_; lean_object* v___x_4199_; 
v_fvarId_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_fvarId_4198_);
lean_dec_ref(v___x_4197_);
lean_inc_ref(v_k_4196_);
v___x_4199_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3517_, v_t_3518_, v_k_4196_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4227_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4202_ = v___x_4199_;
v_isShared_4203_ = v_isSharedCheck_4227_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4199_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4227_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
uint8_t v___y_4205_; size_t v___x_4221_; size_t v___x_4222_; uint8_t v___x_4223_; 
v___x_4221_ = lean_ptr_addr(v_fvarId_4195_);
v___x_4222_ = lean_ptr_addr(v_fvarId_4198_);
v___x_4223_ = lean_usize_dec_eq(v___x_4221_, v___x_4222_);
if (v___x_4223_ == 0)
{
v___y_4205_ = v___x_4223_;
goto v___jp_4204_;
}
else
{
size_t v___x_4224_; size_t v___x_4225_; uint8_t v___x_4226_; 
v___x_4224_ = lean_ptr_addr(v_k_4196_);
v___x_4225_ = lean_ptr_addr(v_a_4200_);
v___x_4226_ = lean_usize_dec_eq(v___x_4224_, v___x_4225_);
v___y_4205_ = v___x_4226_;
goto v___jp_4204_;
}
v___jp_4204_:
{
if (v___y_4205_ == 0)
{
lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4215_; 
v_isSharedCheck_4215_ = !lean_is_exclusive(v_code_3519_);
if (v_isSharedCheck_4215_ == 0)
{
lean_object* v_unused_4216_; lean_object* v_unused_4217_; 
v_unused_4216_ = lean_ctor_get(v_code_3519_, 1);
lean_dec(v_unused_4216_);
v_unused_4217_ = lean_ctor_get(v_code_3519_, 0);
lean_dec(v_unused_4217_);
v___x_4207_ = v_code_3519_;
v_isShared_4208_ = v_isSharedCheck_4215_;
goto v_resetjp_4206_;
}
else
{
lean_dec(v_code_3519_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4215_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 1, v_a_4200_);
lean_ctor_set(v___x_4207_, 0, v_fvarId_4198_);
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_fvarId_4198_);
lean_ctor_set(v_reuseFailAlloc_4214_, 1, v_a_4200_);
v___x_4210_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
lean_object* v___x_4212_; 
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 0, v___x_4210_);
v___x_4212_ = v___x_4202_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v___x_4210_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
else
{
lean_object* v___x_4219_; 
lean_dec(v_a_4200_);
lean_dec(v_fvarId_4198_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 0, v_code_3519_);
v___x_4219_ = v___x_4202_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_code_3519_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
}
else
{
lean_dec(v_fvarId_4198_);
lean_dec_ref(v_code_3519_);
return v___x_4199_;
}
}
else
{
lean_object* v___x_4228_; 
lean_dec_ref(v_code_3519_);
v___x_4228_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3517_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
return v___x_4228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t v_pu_4229_, uint8_t v_t_4230_, lean_object* v_decl_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_){
_start:
{
lean_object* v_params_4238_; lean_object* v_type_4239_; lean_object* v_value_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; 
v_params_4238_ = lean_ctor_get(v_decl_4231_, 2);
v_type_4239_ = lean_ctor_get(v_decl_4231_, 3);
v_value_4240_ = lean_ctor_get(v_decl_4231_, 4);
lean_inc_ref(v_type_4239_);
v___x_4241_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_4229_, v_a_4232_, v_t_4230_, v_type_4239_);
lean_inc_ref(v_params_4238_);
v___x_4242_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_4229_, v_t_4230_, v_params_4238_, v_a_4232_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
if (lean_obj_tag(v___x_4242_) == 0)
{
lean_object* v_a_4243_; lean_object* v___x_4244_; 
v_a_4243_ = lean_ctor_get(v___x_4242_, 0);
lean_inc(v_a_4243_);
lean_dec_ref(v___x_4242_);
lean_inc_ref(v_value_4240_);
v___x_4244_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_4229_, v_t_4230_, v_value_4240_, v_a_4232_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v_a_4245_; lean_object* v___x_4246_; 
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
lean_inc(v_a_4245_);
lean_dec_ref(v___x_4244_);
v___x_4246_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_4229_, v_decl_4231_, v___x_4241_, v_a_4243_, v_a_4245_, v_a_4234_, v_a_4236_);
return v___x_4246_;
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
lean_dec(v_a_4243_);
lean_dec_ref(v___x_4241_);
lean_dec_ref(v_decl_4231_);
v_a_4247_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4244_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4244_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_dec_ref(v___x_4241_);
lean_dec_ref(v_decl_4231_);
v_a_4255_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4242_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4242_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp___boxed(lean_object* v_pu_4263_, lean_object* v_t_4264_, lean_object* v_decl_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_){
_start:
{
uint8_t v_pu_boxed_4272_; uint8_t v_t_boxed_4273_; lean_object* v_res_4274_; 
v_pu_boxed_4272_ = lean_unbox(v_pu_4263_);
v_t_boxed_4273_ = lean_unbox(v_t_4264_);
v_res_4274_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_boxed_4272_, v_t_boxed_4273_, v_decl_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
lean_dec(v_a_4270_);
lean_dec_ref(v_a_4269_);
lean_dec(v_a_4268_);
lean_dec_ref(v_a_4267_);
lean_dec_ref(v_a_4266_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4___boxed(lean_object* v_pu_4275_, lean_object* v_t_4276_, lean_object* v_i_4277_, lean_object* v_as_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_){
_start:
{
uint8_t v_pu_boxed_4285_; uint8_t v_t_boxed_4286_; lean_object* v_res_4287_; 
v_pu_boxed_4285_ = lean_unbox(v_pu_4275_);
v_t_boxed_4286_ = lean_unbox(v_t_4276_);
v_res_4287_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(v_pu_boxed_4285_, v_t_boxed_4286_, v_i_4277_, v_as_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_);
lean_dec(v___y_4283_);
lean_dec_ref(v___y_4282_);
lean_dec(v___y_4281_);
lean_dec_ref(v___y_4280_);
lean_dec_ref(v___y_4279_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp___boxed(lean_object* v_pu_4288_, lean_object* v_t_4289_, lean_object* v_code_4290_, lean_object* v_a_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
uint8_t v_pu_boxed_4297_; uint8_t v_t_boxed_4298_; lean_object* v_res_4299_; 
v_pu_boxed_4297_ = lean_unbox(v_pu_4288_);
v_t_boxed_4298_ = lean_unbox(v_t_4289_);
v_res_4299_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_boxed_4297_, v_t_boxed_4298_, v_code_4290_, v_a_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
lean_dec_ref(v_a_4291_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(uint8_t v_pu_4300_, uint8_t v_t_4301_, uint8_t v_pu_4302_, uint8_t v_t_4303_, lean_object* v_decl_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_){
_start:
{
lean_object* v___x_4311_; 
v___x_4311_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_4302_, v_t_4303_, v_decl_4304_, v___y_4305_, v___y_4307_, v___y_4309_);
return v___x_4311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___boxed(lean_object* v_pu_4312_, lean_object* v_t_4313_, lean_object* v_pu_4314_, lean_object* v_t_4315_, lean_object* v_decl_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_){
_start:
{
uint8_t v_pu_boxed_4323_; uint8_t v_t_boxed_4324_; uint8_t v_pu_boxed_4325_; uint8_t v_t_boxed_4326_; lean_object* v_res_4327_; 
v_pu_boxed_4323_ = lean_unbox(v_pu_4312_);
v_t_boxed_4324_ = lean_unbox(v_t_4313_);
v_pu_boxed_4325_ = lean_unbox(v_pu_4314_);
v_t_boxed_4326_ = lean_unbox(v_t_4315_);
v_res_4327_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(v_pu_boxed_4323_, v_t_boxed_4324_, v_pu_boxed_4325_, v_t_boxed_4326_, v_decl_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec_ref(v___y_4317_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(uint8_t v_pu_4328_, uint8_t v_t_4329_, uint8_t v_pu_4330_, uint8_t v_t_4331_, lean_object* v_args_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_4330_, v_t_4331_, v_args_4332_, v___y_4333_);
return v___x_4339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___boxed(lean_object* v_pu_4340_, lean_object* v_t_4341_, lean_object* v_pu_4342_, lean_object* v_t_4343_, lean_object* v_args_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_){
_start:
{
uint8_t v_pu_boxed_4351_; uint8_t v_t_boxed_4352_; uint8_t v_pu_boxed_4353_; uint8_t v_t_boxed_4354_; lean_object* v_res_4355_; 
v_pu_boxed_4351_ = lean_unbox(v_pu_4340_);
v_t_boxed_4352_ = lean_unbox(v_t_4341_);
v_pu_boxed_4353_ = lean_unbox(v_pu_4342_);
v_t_boxed_4354_ = lean_unbox(v_t_4343_);
v_res_4355_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(v_pu_boxed_4351_, v_t_boxed_4352_, v_pu_boxed_4353_, v_t_boxed_4354_, v_args_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
lean_dec(v___y_4347_);
lean_dec_ref(v___y_4346_);
lean_dec_ref(v___y_4345_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(uint8_t v_pu_4356_, uint8_t v_t_4357_, uint8_t v_pu_4358_, uint8_t v_t_4359_, lean_object* v_ps_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_){
_start:
{
lean_object* v___x_4367_; 
v___x_4367_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_4358_, v_t_4359_, v_ps_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___boxed(lean_object* v_pu_4368_, lean_object* v_t_4369_, lean_object* v_pu_4370_, lean_object* v_t_4371_, lean_object* v_ps_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_){
_start:
{
uint8_t v_pu_boxed_4379_; uint8_t v_t_boxed_4380_; uint8_t v_pu_boxed_4381_; uint8_t v_t_boxed_4382_; lean_object* v_res_4383_; 
v_pu_boxed_4379_ = lean_unbox(v_pu_4368_);
v_t_boxed_4380_ = lean_unbox(v_t_4369_);
v_pu_boxed_4381_ = lean_unbox(v_pu_4370_);
v_t_boxed_4382_ = lean_unbox(v_t_4371_);
v_res_4383_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(v_pu_boxed_4379_, v_t_boxed_4380_, v_pu_boxed_4381_, v_t_boxed_4382_, v_ps_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
lean_dec(v___y_4377_);
lean_dec_ref(v___y_4376_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
lean_dec_ref(v___y_4373_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(uint8_t v_pu_4384_, uint8_t v_t_4385_, lean_object* v_i_4386_, lean_object* v_as_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_){
_start:
{
lean_object* v___x_4394_; 
v___x_4394_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_4384_, v_t_4385_, v_i_4386_, v_as_4387_, v___y_4388_, v___y_4390_, v___y_4392_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___boxed(lean_object* v_pu_4395_, lean_object* v_t_4396_, lean_object* v_i_4397_, lean_object* v_as_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_){
_start:
{
uint8_t v_pu_boxed_4405_; uint8_t v_t_boxed_4406_; lean_object* v_res_4407_; 
v_pu_boxed_4405_ = lean_unbox(v_pu_4395_);
v_t_boxed_4406_ = lean_unbox(v_t_4396_);
v_res_4407_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(v_pu_boxed_4405_, v_t_boxed_4406_, v_i_4397_, v_as_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_);
lean_dec(v___y_4403_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec_ref(v___y_4400_);
lean_dec_ref(v___y_4399_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(uint8_t v_pu_4408_, uint8_t v_t_4409_, lean_object* v_decl_4410_, lean_object* v_inst_4411_, lean_object* v_____do__lift_4412_){
_start:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4413_ = lean_box(v_pu_4408_);
v___x_4414_ = lean_box(v_t_4409_);
v___x_4415_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDeclImp___boxed), 9, 4);
lean_closure_set(v___x_4415_, 0, v___x_4413_);
lean_closure_set(v___x_4415_, 1, v___x_4414_);
lean_closure_set(v___x_4415_, 2, v_decl_4410_);
lean_closure_set(v___x_4415_, 3, v_____do__lift_4412_);
v___x_4416_ = lean_apply_2(v_inst_4411_, lean_box(0), v___x_4415_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed(lean_object* v_pu_4417_, lean_object* v_t_4418_, lean_object* v_decl_4419_, lean_object* v_inst_4420_, lean_object* v_____do__lift_4421_){
_start:
{
uint8_t v_pu_boxed_4422_; uint8_t v_t_boxed_4423_; lean_object* v_res_4424_; 
v_pu_boxed_4422_ = lean_unbox(v_pu_4417_);
v_t_boxed_4423_ = lean_unbox(v_t_4418_);
v_res_4424_ = l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(v_pu_boxed_4422_, v_t_boxed_4423_, v_decl_4419_, v_inst_4420_, v_____do__lift_4421_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg(uint8_t v_pu_4425_, uint8_t v_t_4426_, lean_object* v_inst_4427_, lean_object* v_inst_4428_, lean_object* v_inst_4429_, lean_object* v_decl_4430_){
_start:
{
lean_object* v_toBind_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___f_4434_; lean_object* v___x_4435_; 
v_toBind_4431_ = lean_ctor_get(v_inst_4428_, 1);
lean_inc(v_toBind_4431_);
lean_dec_ref(v_inst_4428_);
v___x_4432_ = lean_box(v_pu_4425_);
v___x_4433_ = lean_box(v_t_4426_);
v___f_4434_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4434_, 0, v___x_4432_);
lean_closure_set(v___f_4434_, 1, v___x_4433_);
lean_closure_set(v___f_4434_, 2, v_decl_4430_);
lean_closure_set(v___f_4434_, 3, v_inst_4427_);
v___x_4435_ = lean_apply_4(v_toBind_4431_, lean_box(0), lean_box(0), v_inst_4429_, v___f_4434_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___boxed(lean_object* v_pu_4436_, lean_object* v_t_4437_, lean_object* v_inst_4438_, lean_object* v_inst_4439_, lean_object* v_inst_4440_, lean_object* v_decl_4441_){
_start:
{
uint8_t v_pu_boxed_4442_; uint8_t v_t_boxed_4443_; lean_object* v_res_4444_; 
v_pu_boxed_4442_ = lean_unbox(v_pu_4436_);
v_t_boxed_4443_ = lean_unbox(v_t_4437_);
v_res_4444_ = l_Lean_Compiler_LCNF_normFunDecl___redArg(v_pu_boxed_4442_, v_t_boxed_4443_, v_inst_4438_, v_inst_4439_, v_inst_4440_, v_decl_4441_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl(lean_object* v_m_4445_, uint8_t v_pu_4446_, uint8_t v_t_4447_, lean_object* v_inst_4448_, lean_object* v_inst_4449_, lean_object* v_inst_4450_, lean_object* v_decl_4451_){
_start:
{
lean_object* v_toBind_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___f_4455_; lean_object* v___x_4456_; 
v_toBind_4452_ = lean_ctor_get(v_inst_4449_, 1);
lean_inc(v_toBind_4452_);
lean_dec_ref(v_inst_4449_);
v___x_4453_ = lean_box(v_pu_4446_);
v___x_4454_ = lean_box(v_t_4447_);
v___f_4455_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4455_, 0, v___x_4453_);
lean_closure_set(v___f_4455_, 1, v___x_4454_);
lean_closure_set(v___f_4455_, 2, v_decl_4451_);
lean_closure_set(v___f_4455_, 3, v_inst_4448_);
v___x_4456_ = lean_apply_4(v_toBind_4452_, lean_box(0), lean_box(0), v_inst_4450_, v___f_4455_);
return v___x_4456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___boxed(lean_object* v_m_4457_, lean_object* v_pu_4458_, lean_object* v_t_4459_, lean_object* v_inst_4460_, lean_object* v_inst_4461_, lean_object* v_inst_4462_, lean_object* v_decl_4463_){
_start:
{
uint8_t v_pu_boxed_4464_; uint8_t v_t_boxed_4465_; lean_object* v_res_4466_; 
v_pu_boxed_4464_ = lean_unbox(v_pu_4458_);
v_t_boxed_4465_ = lean_unbox(v_t_4459_);
v_res_4466_ = l_Lean_Compiler_LCNF_normFunDecl(v_m_4457_, v_pu_boxed_4464_, v_t_boxed_4465_, v_inst_4460_, v_inst_4461_, v_inst_4462_, v_decl_4463_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0(uint8_t v_pu_4467_, uint8_t v_t_4468_, lean_object* v_code_4469_, lean_object* v_inst_4470_, lean_object* v_____do__lift_4471_){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4472_ = lean_box(v_pu_4467_);
v___x_4473_ = lean_box(v_t_4468_);
v___x_4474_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCodeImp___boxed), 9, 4);
lean_closure_set(v___x_4474_, 0, v___x_4472_);
lean_closure_set(v___x_4474_, 1, v___x_4473_);
lean_closure_set(v___x_4474_, 2, v_code_4469_);
lean_closure_set(v___x_4474_, 3, v_____do__lift_4471_);
v___x_4475_ = lean_apply_2(v_inst_4470_, lean_box(0), v___x_4474_);
return v___x_4475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed(lean_object* v_pu_4476_, lean_object* v_t_4477_, lean_object* v_code_4478_, lean_object* v_inst_4479_, lean_object* v_____do__lift_4480_){
_start:
{
uint8_t v_pu_boxed_4481_; uint8_t v_t_boxed_4482_; lean_object* v_res_4483_; 
v_pu_boxed_4481_ = lean_unbox(v_pu_4476_);
v_t_boxed_4482_ = lean_unbox(v_t_4477_);
v_res_4483_ = l_Lean_Compiler_LCNF_normCode___redArg___lam__0(v_pu_boxed_4481_, v_t_boxed_4482_, v_code_4478_, v_inst_4479_, v_____do__lift_4480_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg(uint8_t v_pu_4484_, uint8_t v_t_4485_, lean_object* v_inst_4486_, lean_object* v_inst_4487_, lean_object* v_inst_4488_, lean_object* v_code_4489_){
_start:
{
lean_object* v_toBind_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___f_4493_; lean_object* v___x_4494_; 
v_toBind_4490_ = lean_ctor_get(v_inst_4487_, 1);
lean_inc(v_toBind_4490_);
lean_dec_ref(v_inst_4487_);
v___x_4491_ = lean_box(v_pu_4484_);
v___x_4492_ = lean_box(v_t_4485_);
v___f_4493_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4493_, 0, v___x_4491_);
lean_closure_set(v___f_4493_, 1, v___x_4492_);
lean_closure_set(v___f_4493_, 2, v_code_4489_);
lean_closure_set(v___f_4493_, 3, v_inst_4486_);
v___x_4494_ = lean_apply_4(v_toBind_4490_, lean_box(0), lean_box(0), v_inst_4488_, v___f_4493_);
return v___x_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___boxed(lean_object* v_pu_4495_, lean_object* v_t_4496_, lean_object* v_inst_4497_, lean_object* v_inst_4498_, lean_object* v_inst_4499_, lean_object* v_code_4500_){
_start:
{
uint8_t v_pu_boxed_4501_; uint8_t v_t_boxed_4502_; lean_object* v_res_4503_; 
v_pu_boxed_4501_ = lean_unbox(v_pu_4495_);
v_t_boxed_4502_ = lean_unbox(v_t_4496_);
v_res_4503_ = l_Lean_Compiler_LCNF_normCode___redArg(v_pu_boxed_4501_, v_t_boxed_4502_, v_inst_4497_, v_inst_4498_, v_inst_4499_, v_code_4500_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode(lean_object* v_m_4504_, uint8_t v_pu_4505_, uint8_t v_t_4506_, lean_object* v_inst_4507_, lean_object* v_inst_4508_, lean_object* v_inst_4509_, lean_object* v_code_4510_){
_start:
{
lean_object* v_toBind_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___f_4514_; lean_object* v___x_4515_; 
v_toBind_4511_ = lean_ctor_get(v_inst_4508_, 1);
lean_inc(v_toBind_4511_);
lean_dec_ref(v_inst_4508_);
v___x_4512_ = lean_box(v_pu_4505_);
v___x_4513_ = lean_box(v_t_4506_);
v___f_4514_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4514_, 0, v___x_4512_);
lean_closure_set(v___f_4514_, 1, v___x_4513_);
lean_closure_set(v___f_4514_, 2, v_code_4510_);
lean_closure_set(v___f_4514_, 3, v_inst_4507_);
v___x_4515_ = lean_apply_4(v_toBind_4511_, lean_box(0), lean_box(0), v_inst_4509_, v___f_4514_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___boxed(lean_object* v_m_4516_, lean_object* v_pu_4517_, lean_object* v_t_4518_, lean_object* v_inst_4519_, lean_object* v_inst_4520_, lean_object* v_inst_4521_, lean_object* v_code_4522_){
_start:
{
uint8_t v_pu_boxed_4523_; uint8_t v_t_boxed_4524_; lean_object* v_res_4525_; 
v_pu_boxed_4523_ = lean_unbox(v_pu_4517_);
v_t_boxed_4524_ = lean_unbox(v_t_4518_);
v_res_4525_ = l_Lean_Compiler_LCNF_normCode(v_m_4516_, v_pu_boxed_4523_, v_t_boxed_4524_, v_inst_4519_, v_inst_4520_, v_inst_4521_, v_code_4522_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t v_pu_4526_, lean_object* v_e_4527_, lean_object* v_s_4528_, uint8_t v_translator_4529_){
_start:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_4526_, v_s_4528_, v_translator_4529_, v_e_4527_);
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg___boxed(lean_object* v_pu_4533_, lean_object* v_e_4534_, lean_object* v_s_4535_, lean_object* v_translator_4536_, lean_object* v_a_4537_){
_start:
{
uint8_t v_pu_boxed_4538_; uint8_t v_translator_boxed_4539_; lean_object* v_res_4540_; 
v_pu_boxed_4538_ = lean_unbox(v_pu_4533_);
v_translator_boxed_4539_ = lean_unbox(v_translator_4536_);
v_res_4540_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v_pu_boxed_4538_, v_e_4534_, v_s_4535_, v_translator_boxed_4539_);
lean_dec_ref(v_s_4535_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars(uint8_t v_pu_4541_, lean_object* v_e_4542_, lean_object* v_s_4543_, uint8_t v_translator_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_){
_start:
{
lean_object* v___x_4550_; 
v___x_4550_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v_pu_4541_, v_e_4542_, v_s_4543_, v_translator_4544_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___boxed(lean_object* v_pu_4551_, lean_object* v_e_4552_, lean_object* v_s_4553_, lean_object* v_translator_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_){
_start:
{
uint8_t v_pu_boxed_4560_; uint8_t v_translator_boxed_4561_; lean_object* v_res_4562_; 
v_pu_boxed_4560_ = lean_unbox(v_pu_4551_);
v_translator_boxed_4561_ = lean_unbox(v_translator_4554_);
v_res_4562_ = l_Lean_Compiler_LCNF_replaceExprFVars(v_pu_boxed_4560_, v_e_4552_, v_s_4553_, v_translator_boxed_4561_, v_a_4555_, v_a_4556_, v_a_4557_, v_a_4558_);
lean_dec(v_a_4558_);
lean_dec_ref(v_a_4557_);
lean_dec(v_a_4556_);
lean_dec_ref(v_a_4555_);
lean_dec_ref(v_s_4553_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t v_pu_4563_, lean_object* v_code_4564_, lean_object* v_s_4565_, uint8_t v_translator_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_){
_start:
{
lean_object* v___x_4572_; 
v___x_4572_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_4563_, v_translator_4566_, v_code_4564_, v_s_4565_, v_a_4567_, v_a_4568_, v_a_4569_, v_a_4570_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars___boxed(lean_object* v_pu_4573_, lean_object* v_code_4574_, lean_object* v_s_4575_, lean_object* v_translator_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_){
_start:
{
uint8_t v_pu_boxed_4582_; uint8_t v_translator_boxed_4583_; lean_object* v_res_4584_; 
v_pu_boxed_4582_ = lean_unbox(v_pu_4573_);
v_translator_boxed_4583_ = lean_unbox(v_translator_4576_);
v_res_4584_ = l_Lean_Compiler_LCNF_replaceFVars(v_pu_boxed_4582_, v_code_4574_, v_s_4575_, v_translator_boxed_4583_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
lean_dec(v_a_4578_);
lean_dec_ref(v_a_4577_);
lean_dec_ref(v_s_4575_);
return v_res_4584_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0(void){
_start:
{
lean_object* v___x_4585_; 
v___x_4585_ = lean_mk_string_unchecked("_jp", 3, 3);
return v___x_4585_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1(void){
_start:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4586_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0, &l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0);
v___x_4587_ = l_Lean_Name_mkStr1(v___x_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg(lean_object* v_a_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4591_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1, &l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1);
v___x_4592_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_4591_, v_a_4588_, v_a_4589_);
return v___x_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___boxed(lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v_res_4596_; 
v_res_4596_ = l_Lean_Compiler_LCNF_mkFreshJpName___redArg(v_a_4593_, v_a_4594_);
lean_dec(v_a_4594_);
lean_dec(v_a_4593_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName(lean_object* v_a_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_){
_start:
{
lean_object* v___x_4602_; 
v___x_4602_ = l_Lean_Compiler_LCNF_mkFreshJpName___redArg(v_a_4598_, v_a_4600_);
return v___x_4602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___boxed(lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_){
_start:
{
lean_object* v_res_4608_; 
v_res_4608_ = l_Lean_Compiler_LCNF_mkFreshJpName(v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_);
lean_dec(v_a_4606_);
lean_dec_ref(v_a_4605_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
return v_res_4608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t v_pu_4609_, lean_object* v_type_4610_, uint8_t v_borrow_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_){
_start:
{
lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v_a_4619_; lean_object* v___x_4620_; 
v___x_4617_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkParam___closed__1, &l_Lean_Compiler_LCNF_mkParam___closed__1_once, _init_l_Lean_Compiler_LCNF_mkParam___closed__1);
v___x_4618_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_4617_, v_a_4613_, v_a_4615_);
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
lean_inc(v_a_4619_);
lean_dec_ref(v___x_4618_);
v___x_4620_ = l_Lean_Compiler_LCNF_mkParam(v_pu_4609_, v_a_4619_, v_type_4610_, v_borrow_4611_, v_a_4612_, v_a_4613_, v_a_4614_, v_a_4615_);
return v___x_4620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam___boxed(lean_object* v_pu_4621_, lean_object* v_type_4622_, lean_object* v_borrow_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_){
_start:
{
uint8_t v_pu_boxed_4629_; uint8_t v_borrow_boxed_4630_; lean_object* v_res_4631_; 
v_pu_boxed_4629_ = lean_unbox(v_pu_4621_);
v_borrow_boxed_4630_ = lean_unbox(v_borrow_4623_);
v_res_4631_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_boxed_4629_, v_type_4622_, v_borrow_boxed_4630_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_);
lean_dec(v_a_4627_);
lean_dec_ref(v_a_4626_);
lean_dec(v_a_4625_);
lean_dec_ref(v_a_4624_);
return v_res_4631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object* v_a_4632_){
_start:
{
lean_object* v_config_4634_; lean_object* v___x_4635_; 
v_config_4634_ = lean_ctor_get(v_a_4632_, 0);
lean_inc_ref(v_config_4634_);
v___x_4635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4635_, 0, v_config_4634_);
return v___x_4635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg___boxed(lean_object* v_a_4636_, lean_object* v_a_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_4636_);
lean_dec_ref(v_a_4636_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig(lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_){
_start:
{
lean_object* v___x_4644_; 
v___x_4644_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_4639_);
return v___x_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___boxed(lean_object* v_a_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_){
_start:
{
lean_object* v_res_4650_; 
v_res_4650_ = l_Lean_Compiler_LCNF_getConfig(v_a_4645_, v_a_4646_, v_a_4647_, v_a_4648_);
lean_dec(v_a_4648_);
lean_dec_ref(v_a_4647_);
lean_dec(v_a_4646_);
lean_dec_ref(v_a_4645_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg(lean_object* v_x_4651_, lean_object* v_s_4652_, uint8_t v_phase_4653_, lean_object* v_a_4654_, lean_object* v_a_4655_){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v_options_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4657_ = lean_st_ref_get(v_a_4655_);
lean_dec(v___x_4657_);
v___x_4658_ = lean_st_mk_ref(v_s_4652_);
v_options_4659_ = lean_ctor_get(v_a_4654_, 2);
v___x_4660_ = l_Lean_Compiler_LCNF_toConfigOptions(v_options_4659_);
v___x_4661_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4661_, 0, v___x_4660_);
lean_ctor_set_uint8(v___x_4661_, sizeof(void*)*1, v_phase_4653_);
lean_inc(v_a_4655_);
lean_inc_ref(v_a_4654_);
lean_inc(v___x_4658_);
v___x_4662_ = lean_apply_5(v_x_4651_, v___x_4661_, v___x_4658_, v_a_4654_, v_a_4655_, lean_box(0));
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4672_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4665_ = v___x_4662_;
v_isShared_4666_ = v_isSharedCheck_4672_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4662_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4672_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4670_; 
v___x_4667_ = lean_st_ref_get(v_a_4655_);
lean_dec(v___x_4667_);
v___x_4668_ = lean_st_ref_get(v___x_4658_);
lean_dec(v___x_4658_);
lean_dec(v___x_4668_);
if (v_isShared_4666_ == 0)
{
v___x_4670_ = v___x_4665_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4663_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
else
{
lean_dec(v___x_4658_);
return v___x_4662_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg___boxed(lean_object* v_x_4673_, lean_object* v_s_4674_, lean_object* v_phase_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_){
_start:
{
uint8_t v_phase_boxed_4679_; lean_object* v_res_4680_; 
v_phase_boxed_4679_ = lean_unbox(v_phase_4675_);
v_res_4680_ = l_Lean_Compiler_LCNF_CompilerM_run___redArg(v_x_4673_, v_s_4674_, v_phase_boxed_4679_, v_a_4676_, v_a_4677_);
lean_dec(v_a_4677_);
lean_dec_ref(v_a_4676_);
return v_res_4680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run(lean_object* v_00_u03b1_4681_, lean_object* v_x_4682_, lean_object* v_s_4683_, uint8_t v_phase_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_){
_start:
{
lean_object* v___x_4688_; 
v___x_4688_ = l_Lean_Compiler_LCNF_CompilerM_run___redArg(v_x_4682_, v_s_4683_, v_phase_4684_, v_a_4685_, v_a_4686_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___boxed(lean_object* v_00_u03b1_4689_, lean_object* v_x_4690_, lean_object* v_s_4691_, lean_object* v_phase_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_){
_start:
{
uint8_t v_phase_boxed_4696_; lean_object* v_res_4697_; 
v_phase_boxed_4696_ = lean_unbox(v_phase_4692_);
v_res_4697_ = l_Lean_Compiler_LCNF_CompilerM_run(v_00_u03b1_4689_, v_x_4690_, v_s_4691_, v_phase_boxed_4696_, v_a_4693_, v_a_4694_);
lean_dec(v_a_4694_);
lean_dec_ref(v_a_4693_);
return v_res_4697_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0(void){
_start:
{
lean_object* v___x_4698_; 
v___x_4698_ = l_Lean_instInhabitedEnvExtension_default(lean_box(0));
return v___x_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(lean_object* v_00_u03b1_4699_, lean_object* v_00_u03b2_4700_, lean_object* v_inst_4701_, lean_object* v_inst_4702_){
_start:
{
lean_object* v___x_4703_; 
v___x_4703_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___boxed(lean_object* v_00_u03b1_4704_, lean_object* v_00_u03b2_4705_, lean_object* v_inst_4706_, lean_object* v_inst_4707_){
_start:
{
lean_object* v_res_4708_; 
v_res_4708_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(v_00_u03b1_4704_, v_00_u03b2_4705_, v_inst_4706_, v_inst_4707_);
lean_dec_ref(v_inst_4707_);
lean_dec_ref(v_inst_4706_);
return v_res_4708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension(lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_){
_start:
{
lean_object* v___x_4713_; 
v___x_4713_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___closed__0);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___boxed(lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension(v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_);
lean_dec_ref(v_a_4717_);
lean_dec_ref(v_a_4716_);
return v_res_4718_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4719_; 
v___x_4719_ = lean_mk_string_unchecked("Lean.Data.PersistentHashMap", 27, 27);
return v___x_4719_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4720_; 
v___x_4720_ = lean_mk_string_unchecked("Lean.PersistentHashMap.find!", 28, 28);
return v___x_4720_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = lean_mk_string_unchecked("key is not in the map", 21, 21);
return v___x_4721_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
v___x_4722_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2);
v___x_4723_ = lean_unsigned_to_nat(14u);
v___x_4724_ = lean_unsigned_to_nat(177u);
v___x_4725_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1);
v___x_4726_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0);
v___x_4727_ = l_mkPanicMessageWithDecl(v___x_4726_, v___x_4725_, v___x_4724_, v___x_4723_, v___x_4722_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(lean_object* v_inst_4728_, lean_object* v_inst_4729_, lean_object* v_snd_4730_, lean_object* v_inst_4731_, lean_object* v_s_4732_, lean_object* v_e_4733_){
_start:
{
lean_object* v_fst_4734_; lean_object* v_snd_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4750_; 
v_fst_4734_ = lean_ctor_get(v_s_4732_, 0);
v_snd_4735_ = lean_ctor_get(v_s_4732_, 1);
v_isSharedCheck_4750_ = !lean_is_exclusive(v_s_4732_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4737_ = v_s_4732_;
v_isShared_4738_ = v_isSharedCheck_4750_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_snd_4735_);
lean_inc(v_fst_4734_);
lean_dec(v_s_4732_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4750_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4739_; lean_object* v___y_4741_; lean_object* v___x_4746_; 
lean_inc_n(v_e_4733_, 2);
v___x_4739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4739_, 0, v_e_4733_);
lean_ctor_set(v___x_4739_, 1, v_fst_4734_);
lean_inc_ref(v_inst_4729_);
lean_inc_ref(v_inst_4728_);
v___x_4746_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_inst_4728_, v_inst_4729_, v_snd_4730_, v_e_4733_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4747_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3);
v___x_4748_ = l_panic___redArg(v_inst_4731_, v___x_4747_);
v___y_4741_ = v___x_4748_;
goto v___jp_4740_;
}
else
{
lean_object* v_val_4749_; 
v_val_4749_ = lean_ctor_get(v___x_4746_, 0);
lean_inc(v_val_4749_);
lean_dec_ref(v___x_4746_);
v___y_4741_ = v_val_4749_;
goto v___jp_4740_;
}
v___jp_4740_:
{
lean_object* v___x_4742_; lean_object* v___x_4744_; 
v___x_4742_ = l_Lean_PersistentHashMap_insert___redArg(v_inst_4728_, v_inst_4729_, v_snd_4735_, v_e_4733_, v___y_4741_);
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 1, v___x_4742_);
lean_ctor_set(v___x_4737_, 0, v___x_4739_);
v___x_4744_ = v___x_4737_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v___x_4739_);
lean_ctor_set(v_reuseFailAlloc_4745_, 1, v___x_4742_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
return v___x_4744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed(lean_object* v_inst_4751_, lean_object* v_inst_4752_, lean_object* v_snd_4753_, lean_object* v_inst_4754_, lean_object* v_s_4755_, lean_object* v_e_4756_){
_start:
{
lean_object* v_res_4757_; 
v_res_4757_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(v_inst_4751_, v_inst_4752_, v_snd_4753_, v_inst_4754_, v_s_4755_, v_e_4756_);
lean_dec(v_inst_4754_);
lean_dec(v_snd_4753_);
return v_res_4757_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_4758_; lean_object* v___x_4759_; 
v___x_4758_ = lean_unsigned_to_nat(0u);
v___x_4759_ = lean_mk_empty_array_with_capacity(v___x_4758_);
return v___x_4759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(lean_object* v_inst_4760_, lean_object* v_inst_4761_, lean_object* v_inst_4762_, lean_object* v_oldState_4763_, lean_object* v_newState_4764_, lean_object* v_x_4765_, lean_object* v_s_4766_){
_start:
{
lean_object* v_fst_4767_; lean_object* v_snd_4768_; lean_object* v_fst_4769_; lean_object* v___f_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v_newEntries_4775_; lean_object* v___x_4776_; 
v_fst_4767_ = lean_ctor_get(v_newState_4764_, 0);
lean_inc_n(v_fst_4767_, 2);
v_snd_4768_ = lean_ctor_get(v_newState_4764_, 1);
lean_inc(v_snd_4768_);
lean_dec_ref(v_newState_4764_);
v_fst_4769_ = lean_ctor_get(v_oldState_4763_, 0);
v___f_4770_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4770_, 0, v_inst_4760_);
lean_closure_set(v___f_4770_, 1, v_inst_4761_);
lean_closure_set(v___f_4770_, 2, v_snd_4768_);
lean_closure_set(v___f_4770_, 3, v_inst_4762_);
v___x_4771_ = l_List_lengthTR___redArg(v_fst_4767_);
v___x_4772_ = l_List_lengthTR___redArg(v_fst_4769_);
v___x_4773_ = lean_nat_sub(v___x_4771_, v___x_4772_);
lean_dec(v___x_4772_);
lean_dec(v___x_4771_);
v___x_4774_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0);
v_newEntries_4775_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_fst_4767_, v_fst_4767_, v___x_4773_, v___x_4774_);
lean_dec(v_fst_4767_);
v___x_4776_ = l_List_foldl___redArg(v___f_4770_, v_s_4766_, v_newEntries_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed(lean_object* v_inst_4777_, lean_object* v_inst_4778_, lean_object* v_inst_4779_, lean_object* v_oldState_4780_, lean_object* v_newState_4781_, lean_object* v_x_4782_, lean_object* v_s_4783_){
_start:
{
lean_object* v_res_4784_; 
v_res_4784_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(v_inst_4777_, v_inst_4778_, v_inst_4779_, v_oldState_4780_, v_newState_4781_, v_x_4782_, v_s_4783_);
lean_dec(v_x_4782_);
lean_dec_ref(v_oldState_4780_);
return v_res_4784_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0(void){
_start:
{
lean_object* v___x_4785_; 
v___x_4785_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4785_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1(void){
_start:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4786_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0);
v___x_4787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4787_, 0, v___x_4786_);
return v___x_4787_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2(void){
_start:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4788_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1);
v___x_4789_ = lean_box(0);
v___x_4790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4790_, 0, v___x_4789_);
lean_ctor_set(v___x_4790_, 1, v___x_4788_);
return v___x_4790_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3(void){
_start:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4791_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2);
v___x_4792_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_4792_, 0, lean_box(0));
lean_closure_set(v___x_4792_, 1, lean_box(0));
lean_closure_set(v___x_4792_, 2, v___x_4791_);
return v___x_4792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg(lean_object* v_inst_4793_, lean_object* v_inst_4794_, lean_object* v_inst_4795_){
_start:
{
lean_object* v___f_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
v___f_4797_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4797_, 0, v_inst_4793_);
lean_closure_set(v___f_4797_, 1, v_inst_4794_);
lean_closure_set(v___f_4797_, 2, v_inst_4795_);
v___x_4798_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__3);
v___x_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4799_, 0, v___f_4797_);
v___x_4800_ = lean_box(0);
v___x_4801_ = l_Lean_registerEnvExtension___redArg(v___x_4798_, v___x_4799_, v___x_4800_);
if (lean_obj_tag(v___x_4801_) == 0)
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4809_; 
v_a_4802_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4804_ = v___x_4801_;
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4801_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4807_; 
if (v_isShared_4805_ == 0)
{
v___x_4807_ = v___x_4804_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4802_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
else
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4817_; 
v_a_4810_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4812_ = v___x_4801_;
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4801_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4815_; 
if (v_isShared_4813_ == 0)
{
v___x_4815_ = v___x_4812_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v_a_4810_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___boxed(lean_object* v_inst_4818_, lean_object* v_inst_4819_, lean_object* v_inst_4820_, lean_object* v_a_4821_){
_start:
{
lean_object* v_res_4822_; 
v_res_4822_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg(v_inst_4818_, v_inst_4819_, v_inst_4820_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register(lean_object* v_00_u03b1_4823_, lean_object* v_00_u03b2_4824_, lean_object* v_inst_4825_, lean_object* v_inst_4826_, lean_object* v_inst_4827_){
_start:
{
lean_object* v___x_4829_; 
v___x_4829_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg(v_inst_4825_, v_inst_4826_, v_inst_4827_);
return v___x_4829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___boxed(lean_object* v_00_u03b1_4830_, lean_object* v_00_u03b2_4831_, lean_object* v_inst_4832_, lean_object* v_inst_4833_, lean_object* v_inst_4834_, lean_object* v_a_4835_){
_start:
{
lean_object* v_res_4836_; 
v_res_4836_ = l_Lean_Compiler_LCNF_CacheExtension_register(v_00_u03b1_4830_, v_00_u03b2_4831_, v_inst_4832_, v_inst_4833_, v_inst_4834_);
return v_res_4836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0(lean_object* v_a_4837_, lean_object* v_inst_4838_, lean_object* v_inst_4839_, lean_object* v_b_4840_, lean_object* v_x_4841_){
_start:
{
lean_object* v_fst_4842_; lean_object* v_snd_4843_; lean_object* v___x_4845_; uint8_t v_isShared_4846_; uint8_t v_isSharedCheck_4852_; 
v_fst_4842_ = lean_ctor_get(v_x_4841_, 0);
v_snd_4843_ = lean_ctor_get(v_x_4841_, 1);
v_isSharedCheck_4852_ = !lean_is_exclusive(v_x_4841_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4845_ = v_x_4841_;
v_isShared_4846_ = v_isSharedCheck_4852_;
goto v_resetjp_4844_;
}
else
{
lean_inc(v_snd_4843_);
lean_inc(v_fst_4842_);
lean_dec(v_x_4841_);
v___x_4845_ = lean_box(0);
v_isShared_4846_ = v_isSharedCheck_4852_;
goto v_resetjp_4844_;
}
v_resetjp_4844_:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4850_; 
lean_inc(v_a_4837_);
v___x_4847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4847_, 0, v_a_4837_);
lean_ctor_set(v___x_4847_, 1, v_fst_4842_);
v___x_4848_ = l_Lean_PersistentHashMap_insert___redArg(v_inst_4838_, v_inst_4839_, v_snd_4843_, v_a_4837_, v_b_4840_);
if (v_isShared_4846_ == 0)
{
lean_ctor_set(v___x_4845_, 1, v___x_4848_);
lean_ctor_set(v___x_4845_, 0, v___x_4847_);
v___x_4850_ = v___x_4845_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v___x_4847_);
lean_ctor_set(v_reuseFailAlloc_4851_, 1, v___x_4848_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0(void){
_start:
{
lean_object* v___x_4853_; 
v___x_4853_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4853_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1(void){
_start:
{
lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4854_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0);
v___x_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4855_, 0, v___x_4854_);
return v___x_4855_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2(void){
_start:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; 
v___x_4856_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1);
v___x_4857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4857_, 0, v___x_4856_);
lean_ctor_set(v___x_4857_, 1, v___x_4856_);
return v___x_4857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(lean_object* v_inst_4858_, lean_object* v_inst_4859_, lean_object* v_ext_4860_, lean_object* v_a_4861_, lean_object* v_b_4862_, lean_object* v_a_4863_){
_start:
{
lean_object* v___x_4865_; lean_object* v_env_4866_; lean_object* v_nextMacroScope_4867_; lean_object* v_ngen_4868_; lean_object* v_auxDeclNGen_4869_; lean_object* v_traceState_4870_; lean_object* v_messages_4871_; lean_object* v_infoState_4872_; lean_object* v_snapshotTasks_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4888_; 
v___x_4865_ = lean_st_ref_take(v_a_4863_);
v_env_4866_ = lean_ctor_get(v___x_4865_, 0);
v_nextMacroScope_4867_ = lean_ctor_get(v___x_4865_, 1);
v_ngen_4868_ = lean_ctor_get(v___x_4865_, 2);
v_auxDeclNGen_4869_ = lean_ctor_get(v___x_4865_, 3);
v_traceState_4870_ = lean_ctor_get(v___x_4865_, 4);
v_messages_4871_ = lean_ctor_get(v___x_4865_, 6);
v_infoState_4872_ = lean_ctor_get(v___x_4865_, 7);
v_snapshotTasks_4873_ = lean_ctor_get(v___x_4865_, 8);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4865_);
if (v_isSharedCheck_4888_ == 0)
{
lean_object* v_unused_4889_; 
v_unused_4889_ = lean_ctor_get(v___x_4865_, 5);
lean_dec(v_unused_4889_);
v___x_4875_ = v___x_4865_;
v_isShared_4876_ = v_isSharedCheck_4888_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_snapshotTasks_4873_);
lean_inc(v_infoState_4872_);
lean_inc(v_messages_4871_);
lean_inc(v_traceState_4870_);
lean_inc(v_auxDeclNGen_4869_);
lean_inc(v_ngen_4868_);
lean_inc(v_nextMacroScope_4867_);
lean_inc(v_env_4866_);
lean_dec(v___x_4865_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4888_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v_asyncMode_4877_; lean_object* v___f_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4883_; 
v_asyncMode_4877_ = lean_ctor_get(v_ext_4860_, 2);
lean_inc(v_asyncMode_4877_);
v___f_4878_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4878_, 0, v_a_4861_);
lean_closure_set(v___f_4878_, 1, v_inst_4858_);
lean_closure_set(v___f_4878_, 2, v_inst_4859_);
lean_closure_set(v___f_4878_, 3, v_b_4862_);
v___x_4879_ = lean_box(0);
v___x_4880_ = l_Lean_EnvExtension_modifyState___redArg(v_ext_4860_, v_env_4866_, v___f_4878_, v_asyncMode_4877_, v___x_4879_);
lean_dec(v_asyncMode_4877_);
v___x_4881_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2, &l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__2);
if (v_isShared_4876_ == 0)
{
lean_ctor_set(v___x_4875_, 5, v___x_4881_);
lean_ctor_set(v___x_4875_, 0, v___x_4880_);
v___x_4883_ = v___x_4875_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v___x_4880_);
lean_ctor_set(v_reuseFailAlloc_4887_, 1, v_nextMacroScope_4867_);
lean_ctor_set(v_reuseFailAlloc_4887_, 2, v_ngen_4868_);
lean_ctor_set(v_reuseFailAlloc_4887_, 3, v_auxDeclNGen_4869_);
lean_ctor_set(v_reuseFailAlloc_4887_, 4, v_traceState_4870_);
lean_ctor_set(v_reuseFailAlloc_4887_, 5, v___x_4881_);
lean_ctor_set(v_reuseFailAlloc_4887_, 6, v_messages_4871_);
lean_ctor_set(v_reuseFailAlloc_4887_, 7, v_infoState_4872_);
lean_ctor_set(v_reuseFailAlloc_4887_, 8, v_snapshotTasks_4873_);
v___x_4883_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4884_ = lean_st_ref_set(v_a_4863_, v___x_4883_);
v___x_4885_ = lean_box(0);
v___x_4886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4885_);
return v___x_4886_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___boxed(lean_object* v_inst_4890_, lean_object* v_inst_4891_, lean_object* v_ext_4892_, lean_object* v_a_4893_, lean_object* v_b_4894_, lean_object* v_a_4895_, lean_object* v_a_4896_){
_start:
{
lean_object* v_res_4897_; 
v_res_4897_ = l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(v_inst_4890_, v_inst_4891_, v_ext_4892_, v_a_4893_, v_b_4894_, v_a_4895_);
lean_dec(v_a_4895_);
return v_res_4897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert(lean_object* v_00_u03b1_4898_, lean_object* v_00_u03b2_4899_, lean_object* v_inst_4900_, lean_object* v_inst_4901_, lean_object* v_inst_4902_, lean_object* v_ext_4903_, lean_object* v_a_4904_, lean_object* v_b_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_){
_start:
{
lean_object* v___x_4909_; 
v___x_4909_ = l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(v_inst_4900_, v_inst_4901_, v_ext_4903_, v_a_4904_, v_b_4905_, v_a_4907_);
return v___x_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___boxed(lean_object* v_00_u03b1_4910_, lean_object* v_00_u03b2_4911_, lean_object* v_inst_4912_, lean_object* v_inst_4913_, lean_object* v_inst_4914_, lean_object* v_ext_4915_, lean_object* v_a_4916_, lean_object* v_b_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Lean_Compiler_LCNF_CacheExtension_insert(v_00_u03b1_4910_, v_00_u03b2_4911_, v_inst_4912_, v_inst_4913_, v_inst_4914_, v_ext_4915_, v_a_4916_, v_b_4917_, v_a_4918_, v_a_4919_);
lean_dec(v_a_4919_);
lean_dec_ref(v_a_4918_);
lean_dec(v_inst_4914_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(lean_object* v_inst_4922_, lean_object* v_inst_4923_, lean_object* v_ext_4924_, lean_object* v_a_4925_, lean_object* v_a_4926_){
_start:
{
lean_object* v___x_4928_; lean_object* v_env_4929_; lean_object* v_asyncMode_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v_snd_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
v___x_4928_ = lean_st_ref_get(v_a_4926_);
v_env_4929_ = lean_ctor_get(v___x_4928_, 0);
lean_inc_ref(v_env_4929_);
lean_dec(v___x_4928_);
v_asyncMode_4930_ = lean_ctor_get(v_ext_4924_, 2);
v___x_4931_ = lean_box(0);
v___x_4932_ = l_Lean_PersistentHashMap_instInhabited(lean_box(0), lean_box(0), v_inst_4922_, v_inst_4923_);
v___x_4933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4933_, 0, v___x_4931_);
lean_ctor_set(v___x_4933_, 1, v___x_4932_);
v___x_4934_ = lean_box(0);
v___x_4935_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_4933_, v_ext_4924_, v_env_4929_, v_asyncMode_4930_, v___x_4934_);
lean_dec_ref(v___x_4933_);
v_snd_4936_ = lean_ctor_get(v___x_4935_, 1);
lean_inc(v_snd_4936_);
lean_dec(v___x_4935_);
v___x_4937_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_inst_4922_, v_inst_4923_, v_snd_4936_, v_a_4925_);
lean_dec(v_snd_4936_);
v___x_4938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4937_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___boxed(lean_object* v_inst_4939_, lean_object* v_inst_4940_, lean_object* v_ext_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_){
_start:
{
lean_object* v_res_4945_; 
v_res_4945_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(v_inst_4939_, v_inst_4940_, v_ext_4941_, v_a_4942_, v_a_4943_);
lean_dec(v_a_4943_);
lean_dec_ref(v_ext_4941_);
return v_res_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f(lean_object* v_00_u03b1_4946_, lean_object* v_00_u03b2_4947_, lean_object* v_inst_4948_, lean_object* v_inst_4949_, lean_object* v_inst_4950_, lean_object* v_ext_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v___x_4956_; 
v___x_4956_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(v_inst_4948_, v_inst_4949_, v_ext_4951_, v_a_4952_, v_a_4954_);
return v___x_4956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___boxed(lean_object* v_00_u03b1_4957_, lean_object* v_00_u03b2_4958_, lean_object* v_inst_4959_, lean_object* v_inst_4960_, lean_object* v_inst_4961_, lean_object* v_ext_4962_, lean_object* v_a_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_){
_start:
{
lean_object* v_res_4967_; 
v_res_4967_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f(v_00_u03b1_4957_, v_00_u03b2_4958_, v_inst_4959_, v_inst_4960_, v_inst_4961_, v_ext_4962_, v_a_4963_, v_a_4964_, v_a_4965_);
lean_dec(v_a_4965_);
lean_dec_ref(v_a_4964_);
lean_dec_ref(v_ext_4962_);
lean_dec(v_inst_4961_);
return v_res_4967_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_LCtx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ConfigOptions(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_LCtx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ConfigOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedPhase_default = _init_l_Lean_Compiler_LCNF_instInhabitedPhase_default();
l_Lean_Compiler_LCNF_instInhabitedPhase = _init_l_Lean_Compiler_LCNF_instInhabitedPhase();
l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedState = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedState);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext);
l_Lean_Compiler_LCNF_instMonadCompilerM = _init_l_Lean_Compiler_LCNF_instMonadCompilerM();
lean_mark_persistent(l_Lean_Compiler_LCNF_instMonadCompilerM);
l_Lean_Compiler_LCNF_instAddMessageContextCompilerM = _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM();
lean_mark_persistent(l_Lean_Compiler_LCNF_instAddMessageContextCompilerM);
l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default = _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default);
l_Lean_Compiler_LCNF_instInhabitedNormFVarResult = _init_l_Lean_Compiler_LCNF_instInhabitedNormFVarResult();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedNormFVarResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_LCtx(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ConfigOptions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_LCtx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ConfigOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_CompilerM(builtin);
}
#ifdef __cplusplus
}
#endif
