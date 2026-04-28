// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Main
// Imports: public import Lean.Compiler.LCNF.Simp.InlineCandidate public import Lean.Compiler.LCNF.Simp.InlineProj public import Lean.Compiler.LCNF.Simp.Used public import Lean.Compiler.LCNF.Simp.DefaultAlt public import Lean.Compiler.LCNF.Simp.SimpValue public import Lean.Compiler.LCNF.Simp.ConstantFold
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isFun___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasLocalInst___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isImplicitReducibleCore(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_inferAppType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetValue_beq(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqLetDecl_beq(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Cases_extractAlt_x21(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default(uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simp___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(lean_object* v_c_3_){
_start:
{
switch(lean_obj_tag(v_c_3_))
{
case 0:
{
lean_object* v_k_4_; 
v_k_4_ = lean_ctor_get(v_c_3_, 1);
v_c_3_ = v_k_4_;
goto _start;
}
case 1:
{
lean_object* v_k_6_; 
v_k_6_ = lean_ctor_get(v_c_3_, 1);
v_c_3_ = v_k_6_;
goto _start;
}
case 4:
{
lean_object* v_cases_8_; lean_object* v_alts_9_; lean_object* v___x_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v_cases_8_ = lean_ctor_get(v_c_3_, 0);
v_alts_9_ = lean_ctor_get(v_cases_8_, 3);
v___x_10_ = lean_array_get_size(v_alts_9_);
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_dec_eq(v___x_10_, v___x_11_);
if (v___x_12_ == 0)
{
return v___x_12_;
}
else
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___closed__0);
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_array_get_borrowed(v___x_13_, v_alts_9_, v___x_14_);
switch(lean_obj_tag(v___x_15_))
{
case 0:
{
lean_object* v_code_16_; 
v_code_16_ = lean_ctor_get(v___x_15_, 2);
v_c_3_ = v_code_16_;
goto _start;
}
case 1:
{
lean_object* v_code_18_; 
v_code_18_ = lean_ctor_get(v___x_15_, 1);
v_c_3_ = v_code_18_;
goto _start;
}
default: 
{
lean_object* v_code_20_; 
v_code_20_ = lean_ctor_get(v___x_15_, 0);
v_c_3_ = v_code_20_;
goto _start;
}
}
}
}
case 5:
{
uint8_t v___x_22_; 
v___x_22_ = 1;
return v___x_22_;
}
default: 
{
uint8_t v___x_23_; 
v___x_23_ = 0;
return v___x_23_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go___boxed(lean_object* v_c_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_24_);
lean_dec_ref(v_c_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(lean_object* v_c_27_){
_start:
{
uint8_t v___x_28_; 
v___x_28_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_c_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick___boxed(lean_object* v_c_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick(v_c_29_);
lean_dec_ref(v_c_29_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(lean_object* v_a_32_, lean_object* v_b_33_, lean_object* v_x_34_){
_start:
{
if (lean_obj_tag(v_x_34_) == 0)
{
lean_dec(v_b_33_);
lean_dec(v_a_32_);
return v_x_34_;
}
else
{
lean_object* v_key_35_; lean_object* v_value_36_; lean_object* v_tail_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_49_; 
v_key_35_ = lean_ctor_get(v_x_34_, 0);
v_value_36_ = lean_ctor_get(v_x_34_, 1);
v_tail_37_ = lean_ctor_get(v_x_34_, 2);
v_isSharedCheck_49_ = !lean_is_exclusive(v_x_34_);
if (v_isSharedCheck_49_ == 0)
{
v___x_39_ = v_x_34_;
v_isShared_40_ = v_isSharedCheck_49_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_tail_37_);
lean_inc(v_value_36_);
lean_inc(v_key_35_);
lean_dec(v_x_34_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_49_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
uint8_t v___x_41_; 
v___x_41_ = l_Lean_instBEqFVarId_beq(v_key_35_, v_a_32_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_42_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_32_, v_b_33_, v_tail_37_);
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 2, v___x_42_);
v___x_44_ = v___x_39_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_key_35_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v_value_36_);
lean_ctor_set(v_reuseFailAlloc_45_, 2, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
else
{
lean_object* v___x_47_; 
lean_dec(v_value_36_);
lean_dec(v_key_35_);
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 1, v_b_33_);
lean_ctor_set(v___x_39_, 0, v_a_32_);
v___x_47_ = v___x_39_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_a_32_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v_b_33_);
lean_ctor_set(v_reuseFailAlloc_48_, 2, v_tail_37_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
return v_x_50_;
}
else
{
lean_object* v_key_52_; lean_object* v_value_53_; lean_object* v_tail_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_77_; 
v_key_52_ = lean_ctor_get(v_x_51_, 0);
v_value_53_ = lean_ctor_get(v_x_51_, 1);
v_tail_54_ = lean_ctor_get(v_x_51_, 2);
v_isSharedCheck_77_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_77_ == 0)
{
v___x_56_ = v_x_51_;
v_isShared_57_ = v_isSharedCheck_77_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_tail_54_);
lean_inc(v_value_53_);
lean_inc(v_key_52_);
lean_dec(v_x_51_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_77_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; uint64_t v___x_59_; uint64_t v___x_60_; uint64_t v___x_61_; uint64_t v_fold_62_; uint64_t v___x_63_; uint64_t v___x_64_; uint64_t v___x_65_; size_t v___x_66_; size_t v___x_67_; size_t v___x_68_; size_t v___x_69_; size_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_58_ = lean_array_get_size(v_x_50_);
v___x_59_ = l_Lean_instHashableFVarId_hash(v_key_52_);
v___x_60_ = 32ULL;
v___x_61_ = lean_uint64_shift_right(v___x_59_, v___x_60_);
v_fold_62_ = lean_uint64_xor(v___x_59_, v___x_61_);
v___x_63_ = 16ULL;
v___x_64_ = lean_uint64_shift_right(v_fold_62_, v___x_63_);
v___x_65_ = lean_uint64_xor(v_fold_62_, v___x_64_);
v___x_66_ = lean_uint64_to_usize(v___x_65_);
v___x_67_ = lean_usize_of_nat(v___x_58_);
v___x_68_ = ((size_t)1ULL);
v___x_69_ = lean_usize_sub(v___x_67_, v___x_68_);
v___x_70_ = lean_usize_land(v___x_66_, v___x_69_);
v___x_71_ = lean_array_uget_borrowed(v_x_50_, v___x_70_);
lean_inc(v___x_71_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 2, v___x_71_);
v___x_73_ = v___x_56_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_key_52_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_value_53_);
lean_ctor_set(v_reuseFailAlloc_76_, 2, v___x_71_);
v___x_73_ = v_reuseFailAlloc_76_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
lean_object* v___x_74_; 
v___x_74_ = lean_array_uset(v_x_50_, v___x_70_, v___x_73_);
v_x_50_ = v___x_74_;
v_x_51_ = v_tail_54_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(lean_object* v_i_78_, lean_object* v_source_79_, lean_object* v_target_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = lean_array_get_size(v_source_79_);
v___x_82_ = lean_nat_dec_lt(v_i_78_, v___x_81_);
if (v___x_82_ == 0)
{
lean_dec_ref(v_source_79_);
lean_dec(v_i_78_);
return v_target_80_;
}
else
{
lean_object* v_es_83_; lean_object* v___x_84_; lean_object* v_source_85_; lean_object* v_target_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_es_83_ = lean_array_fget(v_source_79_, v_i_78_);
v___x_84_ = lean_box(0);
v_source_85_ = lean_array_fset(v_source_79_, v_i_78_, v___x_84_);
v_target_86_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_target_80_, v_es_83_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_add(v_i_78_, v___x_87_);
lean_dec(v_i_78_);
v_i_78_ = v___x_88_;
v_source_79_ = v_source_85_;
v_target_80_ = v_target_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(lean_object* v_data_90_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v_nbuckets_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_91_ = lean_array_get_size(v_data_90_);
v___x_92_ = lean_unsigned_to_nat(2u);
v_nbuckets_93_ = lean_nat_mul(v___x_91_, v___x_92_);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_box(0);
v___x_96_ = lean_mk_array(v_nbuckets_93_, v___x_95_);
v___x_97_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v___x_94_, v_data_90_, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(lean_object* v_a_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_99_) == 0)
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
else
{
lean_object* v_key_101_; lean_object* v_tail_102_; uint8_t v___x_103_; 
v_key_101_ = lean_ctor_get(v_x_99_, 0);
v_tail_102_ = lean_ctor_get(v_x_99_, 2);
v___x_103_ = l_Lean_instBEqFVarId_beq(v_key_101_, v_a_98_);
if (v___x_103_ == 0)
{
v_x_99_ = v_tail_102_;
goto _start;
}
else
{
return v___x_103_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg___boxed(lean_object* v_a_105_, lean_object* v_x_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_105_, v_x_106_);
lean_dec(v_x_106_);
lean_dec(v_a_105_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(lean_object* v_m_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_size_112_; lean_object* v_buckets_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_156_; 
v_size_112_ = lean_ctor_get(v_m_109_, 0);
v_buckets_113_ = lean_ctor_get(v_m_109_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_m_109_);
if (v_isSharedCheck_156_ == 0)
{
v___x_115_ = v_m_109_;
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_buckets_113_);
lean_inc(v_size_112_);
lean_dec(v_m_109_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_156_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v_fold_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v___x_124_; size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v_bkt_130_; uint8_t v___x_131_; 
v___x_117_ = lean_array_get_size(v_buckets_113_);
v___x_118_ = l_Lean_instHashableFVarId_hash(v_a_110_);
v___x_119_ = 32ULL;
v___x_120_ = lean_uint64_shift_right(v___x_118_, v___x_119_);
v_fold_121_ = lean_uint64_xor(v___x_118_, v___x_120_);
v___x_122_ = 16ULL;
v___x_123_ = lean_uint64_shift_right(v_fold_121_, v___x_122_);
v___x_124_ = lean_uint64_xor(v_fold_121_, v___x_123_);
v___x_125_ = lean_uint64_to_usize(v___x_124_);
v___x_126_ = lean_usize_of_nat(v___x_117_);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_sub(v___x_126_, v___x_127_);
v___x_129_ = lean_usize_land(v___x_125_, v___x_128_);
v_bkt_130_ = lean_array_uget_borrowed(v_buckets_113_, v___x_129_);
v___x_131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_110_, v_bkt_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v_size_x27_133_; lean_object* v___x_134_; lean_object* v_buckets_x27_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v_size_x27_133_ = lean_nat_add(v_size_112_, v___x_132_);
lean_dec(v_size_112_);
lean_inc(v_bkt_130_);
v___x_134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_134_, 0, v_a_110_);
lean_ctor_set(v___x_134_, 1, v_b_111_);
lean_ctor_set(v___x_134_, 2, v_bkt_130_);
v_buckets_x27_135_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_134_);
v___x_136_ = lean_unsigned_to_nat(4u);
v___x_137_ = lean_nat_mul(v_size_x27_133_, v___x_136_);
v___x_138_ = lean_unsigned_to_nat(3u);
v___x_139_ = lean_nat_div(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_array_get_size(v_buckets_x27_135_);
v___x_141_ = lean_nat_dec_le(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v_val_142_; lean_object* v___x_144_; 
v_val_142_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_buckets_x27_135_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_val_142_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_144_ = v___x_115_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_val_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
else
{
lean_object* v___x_147_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_buckets_x27_135_);
lean_ctor_set(v___x_115_, 0, v_size_x27_133_);
v___x_147_ = v___x_115_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_size_x27_133_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_buckets_x27_135_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v___x_149_; lean_object* v_buckets_x27_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
lean_inc(v_bkt_130_);
v___x_149_ = lean_box(0);
v_buckets_x27_150_ = lean_array_uset(v_buckets_113_, v___x_129_, v___x_149_);
v___x_151_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_110_, v_b_111_, v_bkt_130_);
v___x_152_ = lean_array_uset(v_buckets_x27_150_, v___x_129_, v___x_151_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v___x_152_);
v___x_154_ = v___x_115_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_size_112_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(lean_object* v_a_157_, lean_object* v_b_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_array_164_; lean_object* v_start_165_; lean_object* v_stop_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_216_; 
v_array_164_ = lean_ctor_get(v_a_157_, 0);
v_start_165_ = lean_ctor_get(v_a_157_, 1);
v_stop_166_ = lean_ctor_get(v_a_157_, 2);
v_isSharedCheck_216_ = !lean_is_exclusive(v_a_157_);
if (v_isSharedCheck_216_ == 0)
{
v___x_168_ = v_a_157_;
v_isShared_169_ = v_isSharedCheck_216_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_stop_166_);
lean_inc(v_start_165_);
lean_inc(v_array_164_);
lean_dec(v_a_157_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_216_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
uint8_t v___x_170_; 
v___x_170_ = lean_nat_dec_lt(v_start_165_, v_stop_166_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_del_object(v___x_168_);
lean_dec(v_stop_166_);
lean_dec(v_start_165_);
lean_dec_ref(v_array_164_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v_b_158_);
return v___x_171_;
}
else
{
lean_object* v_fst_172_; lean_object* v_snd_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_215_; 
v_fst_172_ = lean_ctor_get(v_b_158_, 0);
v_snd_173_ = lean_ctor_get(v_b_158_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_b_158_);
if (v_isSharedCheck_215_ == 0)
{
v___x_175_ = v_b_158_;
v_isShared_176_ = v_isSharedCheck_215_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_snd_173_);
lean_inc(v_fst_172_);
lean_dec(v_b_158_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_215_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v_fvarId_178_; lean_object* v_type_179_; uint8_t v___x_180_; lean_object* v___x_181_; 
v___x_177_ = lean_array_fget_borrowed(v_array_164_, v_start_165_);
v_fvarId_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_fvarId_178_);
v_type_179_ = lean_ctor_get(v___x_177_, 2);
v___x_180_ = 0;
lean_inc_ref(v_type_179_);
v___x_181_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v___x_180_, v_type_179_, v_fst_172_, v___x_170_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; uint8_t v___x_183_; lean_object* v___x_184_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref(v___x_181_);
v___x_183_ = 0;
v___x_184_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_180_, v_a_182_, v___x_183_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; lean_object* v_fvarId_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_a_185_);
lean_dec_ref(v___x_184_);
v_fvarId_186_ = lean_ctor_get(v_a_185_, 0);
lean_inc(v_fvarId_186_);
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_add(v_start_165_, v___x_187_);
lean_dec(v_start_165_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v___x_188_);
v___x_190_ = v___x_168_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_array_164_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_stop_166_);
v___x_190_ = v_reuseFailAlloc_198_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_191_ = lean_array_push(v_snd_173_, v_a_185_);
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v_fvarId_186_);
v___x_193_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_172_, v_fvarId_178_, v___x_192_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_191_);
lean_ctor_set(v___x_175_, 0, v___x_193_);
v___x_195_ = v___x_175_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_191_);
v___x_195_ = v_reuseFailAlloc_197_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
v_a_157_ = v___x_190_;
v_b_158_ = v___x_195_;
goto _start;
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_fvarId_178_);
lean_del_object(v___x_175_);
lean_dec(v_snd_173_);
lean_dec(v_fst_172_);
lean_del_object(v___x_168_);
lean_dec(v_stop_166_);
lean_dec(v_start_165_);
lean_dec_ref(v_array_164_);
v_a_199_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_184_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_184_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_fvarId_178_);
lean_del_object(v___x_175_);
lean_dec(v_snd_173_);
lean_dec(v_fst_172_);
lean_del_object(v___x_168_);
lean_dec(v_stop_166_);
lean_dec(v_start_165_);
lean_dec_ref(v_array_164_);
v_a_207_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_181_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_181_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg___boxed(lean_object* v_a_217_, lean_object* v_b_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_217_, v_b_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(lean_object* v_as_225_, size_t v_sz_226_, size_t v_i_227_, lean_object* v_b_228_){
_start:
{
uint8_t v___x_230_; 
v___x_230_ = lean_usize_dec_lt(v_i_227_, v_sz_226_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v_b_228_);
return v___x_231_;
}
else
{
lean_object* v_snd_232_; lean_object* v_fst_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_267_; 
v_snd_232_ = lean_ctor_get(v_b_228_, 1);
v_fst_233_ = lean_ctor_get(v_b_228_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_b_228_);
if (v_isSharedCheck_267_ == 0)
{
v___x_235_ = v_b_228_;
v_isShared_236_ = v_isSharedCheck_267_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_snd_232_);
lean_inc(v_fst_233_);
lean_dec(v_b_228_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_267_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v_array_237_; lean_object* v_start_238_; lean_object* v_stop_239_; uint8_t v___x_240_; 
v_array_237_ = lean_ctor_get(v_snd_232_, 0);
v_start_238_ = lean_ctor_get(v_snd_232_, 1);
v_stop_239_ = lean_ctor_get(v_snd_232_, 2);
v___x_240_ = lean_nat_dec_lt(v_start_238_, v_stop_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_242_; 
if (v_isShared_236_ == 0)
{
v___x_242_ = v___x_235_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_snd_232_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_243_; 
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
else
{
lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_263_; 
lean_inc(v_stop_239_);
lean_inc(v_start_238_);
lean_inc_ref(v_array_237_);
v_isSharedCheck_263_ = !lean_is_exclusive(v_snd_232_);
if (v_isSharedCheck_263_ == 0)
{
lean_object* v_unused_264_; lean_object* v_unused_265_; lean_object* v_unused_266_; 
v_unused_264_ = lean_ctor_get(v_snd_232_, 2);
lean_dec(v_unused_264_);
v_unused_265_ = lean_ctor_get(v_snd_232_, 1);
lean_dec(v_unused_265_);
v_unused_266_ = lean_ctor_get(v_snd_232_, 0);
lean_dec(v_unused_266_);
v___x_246_ = v_snd_232_;
v_isShared_247_ = v_isSharedCheck_263_;
goto v_resetjp_245_;
}
else
{
lean_dec(v_snd_232_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_263_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v_a_248_; lean_object* v_fvarId_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_254_; 
v_a_248_ = lean_array_uget_borrowed(v_as_225_, v_i_227_);
v_fvarId_249_ = lean_ctor_get(v_a_248_, 0);
v___x_250_ = lean_array_fget(v_array_237_, v_start_238_);
v___x_251_ = lean_unsigned_to_nat(1u);
v___x_252_ = lean_nat_add(v_start_238_, v___x_251_);
lean_dec(v_start_238_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 1, v___x_252_);
v___x_254_ = v___x_246_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_array_237_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v_stop_239_);
v___x_254_ = v_reuseFailAlloc_262_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
lean_inc(v_fvarId_249_);
v___x_255_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_fst_233_, v_fvarId_249_, v___x_250_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_254_);
lean_ctor_set(v___x_235_, 0, v___x_255_);
v___x_257_ = v___x_235_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_254_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
size_t v___x_258_; size_t v___x_259_; 
v___x_258_ = ((size_t)1ULL);
v___x_259_ = lean_usize_add(v_i_227_, v___x_258_);
v_i_227_ = v___x_259_;
v_b_228_ = v___x_257_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg___boxed(lean_object* v_as_268_, lean_object* v_sz_269_, lean_object* v_i_270_, lean_object* v_b_271_, lean_object* v___y_272_){
_start:
{
size_t v_sz_boxed_273_; size_t v_i_boxed_274_; lean_object* v_res_275_; 
v_sz_boxed_273_ = lean_unbox_usize(v_sz_269_);
lean_dec(v_sz_269_);
v_i_boxed_274_ = lean_unbox_usize(v_i_270_);
lean_dec(v_i_270_);
v_res_275_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_268_, v_sz_boxed_273_, v_i_boxed_274_, v_b_271_);
lean_dec_ref(v_as_268_);
return v_res_275_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_box(0);
v___x_277_ = lean_unsigned_to_nat(16u);
v___x_278_ = lean_mk_array(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_subst_281_; 
v___x_279_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__0);
v___x_280_ = lean_unsigned_to_nat(0u);
v_subst_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_subst_281_, 0, v___x_280_);
lean_ctor_set(v_subst_281_, 1, v___x_279_);
return v_subst_281_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_mk_empty_array_with_capacity(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_mk_string_unchecked("_f", 2, 2);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__3);
v___x_286_ = l_Lean_Name_mkStr1(v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp(lean_object* v_info_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_params_296_; lean_object* v_value_297_; lean_object* v_args_298_; lean_object* v___x_299_; lean_object* v_subst_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; size_t v_sz_304_; size_t v___x_305_; lean_object* v___x_306_; 
v_params_296_ = lean_ctor_get(v_info_287_, 0);
lean_inc_ref(v_params_296_);
v_value_297_ = lean_ctor_get(v_info_287_, 1);
lean_inc_ref(v_value_297_);
v_args_298_ = lean_ctor_get(v_info_287_, 3);
lean_inc_ref(v_args_298_);
lean_dec_ref(v_info_287_);
v___x_299_ = lean_unsigned_to_nat(0u);
v_subst_300_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__1);
v___x_301_ = lean_array_get_size(v_args_298_);
v___x_302_ = l_Array_toSubarray___redArg(v_args_298_, v___x_299_, v___x_301_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_subst_300_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v_sz_304_ = lean_array_size(v_params_296_);
v___x_305_ = ((size_t)0ULL);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_params_296_, v_sz_304_, v___x_305_, v___x_303_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v_fst_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_357_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref(v___x_306_);
v_fst_308_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_a_307_, 1);
lean_dec(v_unused_358_);
v___x_310_ = v_a_307_;
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_fst_308_);
lean_dec(v_a_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_357_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v_lower_314_; lean_object* v_upper_315_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_312_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__2);
v___x_355_ = lean_array_get_size(v_params_296_);
v___x_356_ = lean_nat_dec_le(v___x_301_, v___x_299_);
if (v___x_356_ == 0)
{
v_lower_314_ = v___x_301_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
else
{
v_lower_314_ = v___x_299_;
v_upper_315_ = v___x_355_;
goto v___jp_313_;
}
v___jp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = l_Array_toSubarray___redArg(v_params_296_, v_lower_314_, v_upper_315_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_312_);
v___x_318_ = v___x_310_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_fst_308_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_312_);
v___x_318_ = v_reuseFailAlloc_354_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v___x_316_, v___x_318_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v_fst_321_; lean_object* v_snd_322_; uint8_t v___x_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref(v___x_319_);
v_fst_321_ = lean_ctor_get(v_a_320_, 0);
lean_inc(v_fst_321_);
v_snd_322_ = lean_ctor_get(v_a_320_, 1);
lean_inc(v_snd_322_);
lean_dec(v_a_320_);
v___x_323_ = 0;
v___x_324_ = 0;
v___x_325_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_323_, v_value_297_, v_fst_321_, v___x_324_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_n(v_a_326_, 2);
lean_dec_ref(v___x_325_);
v___x_327_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_326_, v___x_324_, v_a_289_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref(v___x_327_);
v___x_328_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4);
v___x_329_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_snd_322_, v_a_326_, v___x_328_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
return v___x_329_;
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec(v_a_326_);
lean_dec(v_snd_322_);
v_a_330_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_327_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_327_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_snd_322_);
v_a_338_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_325_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_325_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_value_297_);
v_a_346_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_319_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_319_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_value_297_);
lean_dec_ref(v_params_296_);
v_a_359_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_306_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_306_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_specializePartialApp___boxed(lean_object* v_info_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_info_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0(lean_object* v_00_u03b2_377_, lean_object* v_m_378_, lean_object* v_a_379_, lean_object* v_b_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_m_378_, v_a_379_, v_b_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(lean_object* v_as_382_, size_t v_sz_383_, size_t v_i_384_, lean_object* v_b_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___redArg(v_as_382_, v_sz_383_, v_i_384_, v_b_385_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1___boxed(lean_object* v_as_395_, lean_object* v_sz_396_, lean_object* v_i_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
size_t v_sz_boxed_407_; size_t v_i_boxed_408_; lean_object* v_res_409_; 
v_sz_boxed_407_ = lean_unbox_usize(v_sz_396_);
lean_dec(v_sz_396_);
v_i_boxed_408_ = lean_unbox_usize(v_i_397_);
lean_dec(v_i_397_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__1(v_as_395_, v_sz_boxed_407_, v_i_boxed_408_, v_b_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_as_395_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(lean_object* v_inst_410_, lean_object* v_R_411_, lean_object* v_a_412_, lean_object* v_b_413_, lean_object* v_c_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___redArg(v_a_412_, v_b_413_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2___boxed(lean_object* v_inst_424_, lean_object* v_R_425_, lean_object* v_a_426_, lean_object* v_b_427_, lean_object* v_c_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__2(v_inst_424_, v_R_425_, v_a_426_, v_b_427_, v_c_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_437_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(lean_object* v_00_u03b2_438_, lean_object* v_a_439_, lean_object* v_x_440_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___redArg(v_a_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0___boxed(lean_object* v_00_u03b2_442_, lean_object* v_a_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_res_445_; lean_object* v_r_446_; 
v_res_445_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__0(v_00_u03b2_442_, v_a_443_, v_x_444_);
lean_dec(v_x_444_);
lean_dec(v_a_443_);
v_r_446_ = lean_box(v_res_445_);
return v_r_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1(lean_object* v_00_u03b2_447_, lean_object* v_data_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1___redArg(v_data_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2(lean_object* v_00_u03b2_450_, lean_object* v_a_451_, lean_object* v_b_452_, lean_object* v_x_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__2___redArg(v_a_451_, v_b_452_, v_x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_455_, lean_object* v_i_456_, lean_object* v_source_457_, lean_object* v_target_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2___redArg(v_i_456_, v_source_457_, v_target_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0_spec__1_spec__2_spec__5___redArg(v_x_461_, v_x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(lean_object* v_fvarId_464_, lean_object* v_args_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_474_ = 0;
v___x_475_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_474_, v_fvarId_464_, v_a_470_, v_a_472_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_540_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_540_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_540_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
if (lean_obj_tag(v_a_476_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_535_; 
lean_del_object(v___x_478_);
v_val_480_ = lean_ctor_get(v_a_476_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_476_);
if (v_isSharedCheck_535_ == 0)
{
v___x_482_ = v_a_476_;
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_val_480_);
lean_dec(v_a_476_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_535_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_val_480_, v_a_467_, v_a_469_, v_a_472_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_526_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_526_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_526_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
uint8_t v___x_489_; 
v___x_489_ = lean_unbox(v_a_485_);
lean_dec(v_a_485_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_492_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v___x_490_ = lean_box(0);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
else
{
lean_object* v___x_494_; 
lean_del_object(v___x_487_);
v___x_494_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_467_, v_a_472_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_params_495_; lean_object* v_value_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v___x_494_);
v_params_495_ = lean_ctor_get(v_val_480_, 2);
lean_inc_ref(v_params_495_);
v_value_496_ = lean_ctor_get(v_val_480_, 4);
lean_inc_ref(v_value_496_);
lean_dec(v_val_480_);
v___x_497_ = 0;
v___x_498_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_495_, v_value_496_, v_args_465_, v___x_497_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_);
lean_dec_ref(v_params_495_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_509_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_509_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_509_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v_a_499_);
v___x_504_ = v___x_482_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_508_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_del_object(v___x_482_);
v_a_510_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_498_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_498_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_518_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_494_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_494_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec_ref(v_args_465_);
v_a_527_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_484_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_484_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_a_476_);
lean_dec_ref(v_args_465_);
v___x_536_ = lean_box(0);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_536_);
v___x_538_ = v___x_478_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_args_465_);
v_a_541_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_475_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_475_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineJp_x3f___boxed(lean_object* v_fvarId_549_, lean_object* v_args_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_549_, v_args_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_fvarId_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(lean_object* v_declName_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v_env_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_563_ = lean_st_ref_get(v___y_561_);
v_env_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc_ref(v_env_564_);
lean_dec(v___x_563_);
v___x_565_ = l_Lean_isImplicitReducibleCore(v_env_564_, v_declName_560_);
v___x_566_ = lean_box(v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg___boxed(lean_object* v_declName_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_569_, v___y_570_);
lean_dec(v___y_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(lean_object* v_declName_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_573_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___boxed(lean_object* v_declName_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0(v_declName_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(size_t v_sz_593_, size_t v_i_594_, lean_object* v_bs_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_lt(v_i_594_, v_sz_593_);
if (v___x_596_ == 0)
{
return v_bs_595_;
}
else
{
lean_object* v_v_597_; lean_object* v_fvarId_598_; lean_object* v___x_599_; lean_object* v_bs_x27_600_; lean_object* v___x_601_; size_t v___x_602_; size_t v___x_603_; lean_object* v___x_604_; 
v_v_597_ = lean_array_uget_borrowed(v_bs_595_, v_i_594_);
v_fvarId_598_ = lean_ctor_get(v_v_597_, 0);
lean_inc(v_fvarId_598_);
v___x_599_ = lean_unsigned_to_nat(0u);
v_bs_x27_600_ = lean_array_uset(v_bs_595_, v_i_594_, v___x_599_);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_fvarId_598_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_add(v_i_594_, v___x_602_);
v___x_604_ = lean_array_uset(v_bs_x27_600_, v_i_594_, v___x_601_);
v_i_594_ = v___x_603_;
v_bs_595_ = v___x_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg___boxed(lean_object* v_sz_606_, lean_object* v_i_607_, lean_object* v_bs_608_){
_start:
{
size_t v_sz_boxed_609_; size_t v_i_boxed_610_; lean_object* v_res_611_; 
v_sz_boxed_609_ = lean_unbox_usize(v_sz_606_);
lean_dec(v_sz_606_);
v_i_boxed_610_ = lean_unbox_usize(v_i_607_);
lean_dec(v_i_607_);
v_res_611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_boxed_609_, v_i_boxed_610_, v_bs_608_);
return v_res_611_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_612_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__0);
v___x_614_ = l_Lean_Name_mkStr1(v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(lean_object* v_letDecl_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_config_624_; uint8_t v_etaPoly_625_; 
v_config_624_ = lean_ctor_get(v_a_616_, 1);
v_etaPoly_625_ = lean_ctor_get_uint8(v_config_624_, 0);
if (v_etaPoly_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_dec_ref(v_letDecl_615_);
v___x_626_ = lean_box(0);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
else
{
lean_object* v_value_628_; 
v_value_628_ = lean_ctor_get(v_letDecl_615_, 3);
lean_inc(v_value_628_);
if (lean_obj_tag(v_value_628_) == 3)
{
lean_object* v_fvarId_629_; lean_object* v_type_630_; lean_object* v_declName_631_; lean_object* v_us_632_; lean_object* v_args_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_802_; 
v_fvarId_629_ = lean_ctor_get(v_letDecl_615_, 0);
v_type_630_ = lean_ctor_get(v_letDecl_615_, 2);
v_declName_631_ = lean_ctor_get(v_value_628_, 0);
v_us_632_ = lean_ctor_get(v_value_628_, 1);
v_args_633_ = lean_ctor_get(v_value_628_, 2);
v_isSharedCheck_802_ = !lean_is_exclusive(v_value_628_);
if (v_isSharedCheck_802_ == 0)
{
v___x_635_ = v_value_628_;
v_isShared_636_ = v_isSharedCheck_802_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_args_633_);
lean_inc(v_us_632_);
lean_inc(v_declName_631_);
lean_dec(v_value_628_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_802_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v_env_638_; uint8_t v___x_639_; lean_object* v___x_640_; 
v___x_637_ = lean_st_ref_get(v_a_622_);
v_env_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc_ref(v_env_638_);
lean_dec(v___x_637_);
v___x_639_ = 0;
lean_inc(v_declName_631_);
v___x_640_ = l_Lean_Environment_find_x3f(v_env_638_, v_declName_631_, v___x_639_);
if (lean_obj_tag(v___x_640_) == 1)
{
lean_object* v_val_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_val_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_val_641_);
lean_dec_ref(v___x_640_);
v___x_642_ = l_Lean_ConstantInfo_type(v_val_641_);
lean_dec(v_val_641_);
v___x_643_ = l_Lean_Compiler_LCNF_hasLocalInst___redArg(v___x_642_, v_a_622_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_791_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_791_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_791_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_791_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
uint8_t v___x_648_; 
v___x_648_ = lean_unbox(v_a_644_);
lean_dec(v_a_644_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; lean_object* v___x_651_; 
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v___x_649_ = lean_box(0);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_649_);
v___x_651_ = v___x_646_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
else
{
lean_object* v___x_653_; lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_790_; 
lean_del_object(v___x_646_);
lean_inc(v_declName_631_);
v___x_653_ = l_Lean_isImplicitReducible___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__0___redArg(v_declName_631_, v_a_622_);
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_790_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_790_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_790_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v_val_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_789_; 
v_val_658_ = lean_ctor_get(v_a_654_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v_a_654_);
if (v_isSharedCheck_789_ == 0)
{
v___x_660_ = v_a_654_;
v_isShared_661_ = v_isSharedCheck_789_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_val_658_);
lean_dec(v_a_654_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_789_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
uint8_t v___x_662_; 
v___x_662_ = lean_unbox(v_val_658_);
lean_dec(v_val_658_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
lean_del_object(v___x_656_);
v___x_663_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_619_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_776_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_776_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_776_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_776_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
uint8_t v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_unbox(v_a_664_);
lean_inc(v_declName_631_);
v___x_669_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_631_, v___x_668_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_767_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_767_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_767_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_767_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
if (lean_obj_tag(v_a_670_) == 1)
{
lean_object* v_val_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_766_; 
v_val_679_ = lean_ctor_get(v_a_670_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_a_670_);
if (v_isSharedCheck_766_ == 0)
{
v___x_681_ = v_a_670_;
v_isShared_682_ = v_isSharedCheck_766_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_val_679_);
lean_dec(v_a_670_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_766_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint8_t v___x_683_; uint8_t v___x_684_; 
v___x_683_ = lean_unbox(v_a_664_);
lean_dec(v_a_664_);
v___x_684_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_683_);
if (v___x_684_ == 0)
{
lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
lean_del_object(v___x_672_);
v___x_685_ = lean_array_get_size(v_args_633_);
v___x_686_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_679_);
lean_dec(v_val_679_);
v___x_687_ = lean_nat_dec_lt(v___x_685_, v___x_686_);
lean_dec(v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_690_; 
lean_del_object(v___x_681_);
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v___x_688_ = lean_box(0);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_688_);
v___x_690_ = v___x_666_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
else
{
lean_object* v___x_692_; 
lean_del_object(v___x_666_);
lean_inc_ref(v_type_630_);
v___x_692_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_684_, v_type_630_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; size_t v_sz_694_; size_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc_n(v_a_693_, 2);
lean_dec_ref(v___x_692_);
v_sz_694_ = lean_array_size(v_a_693_);
v___x_695_ = ((size_t)0ULL);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_694_, v___x_695_, v_a_693_);
v___x_697_ = l_Array_append___redArg(v_args_633_, v___x_696_);
lean_dec_ref(v___x_696_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 2, v___x_697_);
v___x_699_ = v___x_635_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_declName_631_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_us_632_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v___x_697_);
v___x_699_ = v_reuseFailAlloc_757_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1, &l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1);
v___x_701_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_684_, v___x_699_, v___x_700_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v_fvarId_703_; lean_object* v___x_705_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_701_);
v_fvarId_703_ = lean_ctor_get(v_a_702_, 0);
lean_inc(v_fvarId_703_);
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 5);
lean_ctor_set(v___x_660_, 0, v_fvarId_703_);
v___x_705_ = v___x_660_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_fvarId_703_);
v___x_705_ = v_reuseFailAlloc_748_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_a_702_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4);
v___x_708_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v_a_693_, v___x_706_, v___x_707_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v_fvarId_710_; lean_object* v___x_711_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref(v___x_708_);
v_fvarId_710_ = lean_ctor_get(v_a_709_, 0);
lean_inc(v_fvarId_710_);
lean_inc(v_fvarId_629_);
v___x_711_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_629_, v_fvarId_710_, v_a_617_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v___x_711_);
v___x_712_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_letDecl_615_, v_a_617_, v_a_620_, v_a_622_);
lean_dec_ref(v_letDecl_615_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_722_; 
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_722_ == 0)
{
lean_object* v_unused_723_; 
v_unused_723_ = lean_ctor_get(v___x_712_, 0);
lean_dec(v_unused_723_);
v___x_714_ = v___x_712_;
v_isShared_715_ = v_isSharedCheck_722_;
goto v_resetjp_713_;
}
else
{
lean_dec(v___x_712_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_722_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v_a_709_);
v___x_717_ = v___x_681_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_709_);
v___x_717_ = v_reuseFailAlloc_721_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_719_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_717_);
v___x_719_ = v___x_714_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec(v_a_709_);
lean_del_object(v___x_681_);
v_a_724_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_712_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_712_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec(v_a_709_);
lean_del_object(v___x_681_);
lean_dec_ref(v_letDecl_615_);
v_a_732_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_711_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_711_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_del_object(v___x_681_);
lean_dec_ref(v_letDecl_615_);
v_a_740_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_708_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_708_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec(v_a_693_);
lean_del_object(v___x_681_);
lean_del_object(v___x_660_);
lean_dec_ref(v_letDecl_615_);
v_a_749_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_701_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_701_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_681_);
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v_a_758_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_692_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_692_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
else
{
lean_del_object(v___x_681_);
lean_dec(v_val_679_);
lean_del_object(v___x_666_);
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
goto v___jp_674_;
}
}
}
else
{
lean_dec(v_a_670_);
lean_del_object(v___x_666_);
lean_dec(v_a_664_);
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
goto v___jp_674_;
}
v___jp_674_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_box(0);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_675_);
v___x_677_ = v___x_672_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_del_object(v___x_666_);
lean_dec(v_a_664_);
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v_a_768_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_669_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_669_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v_a_777_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_663_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_663_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v___x_785_; lean_object* v___x_787_; 
lean_del_object(v___x_660_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v___x_785_ = lean_box(0);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_785_);
v___x_787_ = v___x_656_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v_a_792_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_643_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_643_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
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
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec(v___x_640_);
lean_del_object(v___x_635_);
lean_dec_ref(v_args_633_);
lean_dec(v_us_632_);
lean_dec(v_declName_631_);
lean_dec_ref(v_letDecl_615_);
v___x_800_ = lean_box(0);
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
}
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec(v_value_628_);
lean_dec_ref(v_letDecl_615_);
v___x_803_ = lean_box(0);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___boxed(lean_object* v_letDecl_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v_letDecl_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(uint8_t v___x_815_, size_t v_sz_816_, size_t v_i_817_, lean_object* v_bs_818_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___redArg(v_sz_816_, v_i_817_, v_bs_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1___boxed(lean_object* v___x_820_, lean_object* v_sz_821_, lean_object* v_i_822_, lean_object* v_bs_823_){
_start:
{
uint8_t v___x_24447__boxed_824_; size_t v_sz_boxed_825_; size_t v_i_boxed_826_; lean_object* v_res_827_; 
v___x_24447__boxed_824_ = lean_unbox(v___x_820_);
v_sz_boxed_825_ = lean_unbox_usize(v_sz_821_);
lean_dec(v_sz_821_);
v_i_boxed_826_ = lean_unbox_usize(v_i_822_);
lean_dec(v_i_822_);
v_res_827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Simp_etaPolyApp_x3f_spec__1(v___x_24447__boxed_824_, v_sz_boxed_825_, v_i_boxed_826_, v_bs_823_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(lean_object* v_c_828_, lean_object* v_fvarId_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
if (lean_obj_tag(v_c_828_) == 5)
{
lean_object* v_fvarId_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_856_; 
v_fvarId_833_ = lean_ctor_get(v_c_828_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_c_828_);
if (v_isSharedCheck_856_ == 0)
{
v___x_835_ = v_c_828_;
v_isShared_836_ = v_isSharedCheck_856_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_fvarId_833_);
lean_dec(v_c_828_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_856_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v_subst_839_; uint8_t v___x_840_; lean_object* v___x_841_; 
v___x_837_ = lean_st_ref_get(v_a_831_);
lean_dec(v___x_837_);
v___x_838_ = lean_st_ref_get(v_a_830_);
v_subst_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc_ref(v_subst_839_);
lean_dec(v___x_838_);
v___x_840_ = 0;
v___x_841_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_839_, v_fvarId_833_, v___x_840_);
lean_dec_ref(v_subst_839_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_fvarId_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_851_; 
lean_del_object(v___x_835_);
v_fvarId_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_851_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_fvarId_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_851_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
uint8_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_846_ = l_Lean_instBEqFVarId_beq(v_fvarId_842_, v_fvarId_829_);
lean_dec(v_fvarId_842_);
v___x_847_ = lean_box(v___x_846_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_847_);
v___x_849_ = v___x_844_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_852_ = lean_box(v___x_840_);
if (v_isShared_836_ == 0)
{
lean_ctor_set_tag(v___x_835_, 0);
lean_ctor_set(v___x_835_, 0, v___x_852_);
v___x_854_ = v___x_835_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
else
{
uint8_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec_ref(v_c_828_);
v___x_857_ = 0;
v___x_858_ = lean_box(v___x_857_);
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg___boxed(lean_object* v_c_860_, lean_object* v_fvarId_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_860_, v_fvarId_861_, v_a_862_, v_a_863_);
lean_dec(v_a_863_);
lean_dec(v_a_862_);
lean_dec(v_fvarId_861_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf(lean_object* v_c_866_, lean_object* v_fvarId_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_Compiler_LCNF_Simp_isReturnOf___redArg(v_c_866_, v_fvarId_867_, v_a_869_, v_a_874_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isReturnOf___boxed(lean_object* v_c_877_, lean_object* v_fvarId_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_Compiler_LCNF_Simp_isReturnOf(v_c_877_, v_fvarId_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_fvarId_878_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(lean_object* v_value_888_){
_start:
{
if (lean_obj_tag(v_value_888_) == 4)
{
lean_object* v_fvarId_893_; lean_object* v_args_894_; lean_object* v___x_895_; lean_object* v___x_896_; uint8_t v___x_897_; 
v_fvarId_893_ = lean_ctor_get(v_value_888_, 0);
v_args_894_ = lean_ctor_get(v_value_888_, 1);
v___x_895_ = lean_array_get_size(v_args_894_);
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_897_ = lean_nat_dec_eq(v___x_895_, v___x_896_);
if (v___x_897_ == 0)
{
goto v___jp_890_;
}
else
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_inc(v_fvarId_893_);
v___x_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_898_, 0, v_fvarId_893_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
else
{
goto v___jp_890_;
}
v___jp_890_:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = lean_box(0);
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg___boxed(lean_object* v_value_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_900_);
lean_dec(v_value_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f(lean_object* v_value_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_903_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_elimVar_x3f___boxed(lean_object* v_value_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f(v_value_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
lean_dec(v_value_913_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(lean_object* v_a_923_, lean_object* v___x_924_, lean_object* v_fvarId_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_fvarId_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_fvarId_931_ = lean_ctor_get(v_a_923_, 0);
v___x_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_932_, 0, v_fvarId_925_);
v___x_933_ = lean_mk_empty_array_with_capacity(v___x_924_);
v___x_934_ = lean_array_push(v___x_933_, v___x_932_);
lean_inc(v_fvarId_931_);
v___x_935_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_935_, 0, v_fvarId_931_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed(lean_object* v_a_937_, lean_object* v___x_938_, lean_object* v_fvarId_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0(v_a_937_, v___x_938_, v_fvarId_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___x_938_);
lean_dec_ref(v_a_937_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(uint8_t v_pu_946_, uint8_t v_t_947_, lean_object* v_args_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v_subst_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_952_ = lean_st_ref_get(v___y_950_);
lean_dec(v___x_952_);
v___x_953_ = lean_st_ref_get(v___y_949_);
v_subst_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc_ref(v_subst_954_);
lean_dec(v___x_953_);
v___x_955_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_946_, v_subst_954_, v_args_948_, v_t_947_);
lean_dec_ref(v_subst_954_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg___boxed(lean_object* v_pu_957_, lean_object* v_t_958_, lean_object* v_args_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
uint8_t v_pu_boxed_963_; uint8_t v_t_boxed_964_; lean_object* v_res_965_; 
v_pu_boxed_963_ = lean_unbox(v_pu_957_);
v_t_boxed_964_ = lean_unbox(v_t_958_);
v_res_965_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_boxed_963_, v_t_boxed_964_, v_args_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec(v___y_960_);
return v_res_965_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(lean_object* v_as_966_, size_t v_i_967_, size_t v_stop_968_){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = lean_usize_dec_eq(v_i_967_, v_stop_968_);
if (v___x_969_ == 0)
{
uint8_t v___x_970_; lean_object* v___y_972_; lean_object* v___x_976_; 
v___x_970_ = 1;
v___x_976_ = lean_array_uget_borrowed(v_as_966_, v_i_967_);
switch(lean_obj_tag(v___x_976_))
{
case 0:
{
lean_object* v_code_977_; 
v_code_977_ = lean_ctor_get(v___x_976_, 2);
v___y_972_ = v_code_977_;
goto v___jp_971_;
}
case 1:
{
lean_object* v_code_978_; 
v_code_978_ = lean_ctor_get(v___x_976_, 1);
v___y_972_ = v_code_978_;
goto v___jp_971_;
}
default: 
{
lean_object* v_code_979_; 
v_code_979_ = lean_ctor_get(v___x_976_, 0);
v___y_972_ = v_code_979_;
goto v___jp_971_;
}
}
v___jp_971_:
{
if (lean_obj_tag(v___y_972_) == 6)
{
if (v___x_969_ == 0)
{
size_t v___x_973_; size_t v___x_974_; 
v___x_973_ = ((size_t)1ULL);
v___x_974_ = lean_usize_add(v_i_967_, v___x_973_);
v_i_967_ = v___x_974_;
goto _start;
}
else
{
return v___x_970_;
}
}
else
{
return v___x_970_;
}
}
}
else
{
uint8_t v___x_980_; 
v___x_980_ = 0;
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11___boxed(lean_object* v_as_981_, lean_object* v_i_982_, lean_object* v_stop_983_){
_start:
{
size_t v_i_boxed_984_; size_t v_stop_boxed_985_; uint8_t v_res_986_; lean_object* v_r_987_; 
v_i_boxed_984_ = lean_unbox_usize(v_i_982_);
lean_dec(v_i_982_);
v_stop_boxed_985_ = lean_unbox_usize(v_stop_983_);
lean_dec(v_stop_983_);
v_res_986_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v_as_981_, v_i_boxed_984_, v_stop_boxed_985_);
lean_dec_ref(v_as_981_);
v_r_987_ = lean_box(v_res_986_);
return v_r_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(lean_object* v_as_988_, size_t v_i_989_, size_t v_stop_990_, lean_object* v_b_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
uint8_t v___x_995_; 
v___x_995_ = lean_usize_dec_eq(v_i_989_, v_stop_990_);
if (v___x_995_ == 0)
{
uint8_t v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = 0;
v___x_997_ = lean_array_uget_borrowed(v_as_988_, v_i_989_);
v___x_998_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_996_, v___x_997_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; size_t v___x_1000_; size_t v___x_1001_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref(v___x_998_);
v___x_1000_ = ((size_t)1ULL);
v___x_1001_ = lean_usize_add(v_i_989_, v___x_1000_);
v_i_989_ = v___x_1001_;
v_b_991_ = v_a_999_;
goto _start;
}
else
{
return v___x_998_;
}
}
else
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1003_, 0, v_b_991_);
return v___x_1003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg___boxed(lean_object* v_as_1004_, lean_object* v_i_1005_, lean_object* v_stop_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
size_t v_i_boxed_1011_; size_t v_stop_boxed_1012_; lean_object* v_res_1013_; 
v_i_boxed_1011_ = lean_unbox_usize(v_i_1005_);
lean_dec(v_i_1005_);
v_stop_boxed_1012_ = lean_unbox_usize(v_stop_1006_);
lean_dec(v_stop_1006_);
v_res_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_1004_, v_i_boxed_1011_, v_stop_boxed_1012_, v_b_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec(v___y_1008_);
lean_dec_ref(v_as_1004_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(lean_object* v_as_1014_, size_t v_i_1015_, size_t v_stop_1016_, lean_object* v_b_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_a_1024_; lean_object* v___y_1029_; uint8_t v___x_1031_; 
v___x_1031_ = lean_usize_dec_eq(v_i_1015_, v_stop_1016_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = lean_array_uget_borrowed(v_as_1014_, v_i_1015_);
v___x_1034_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_1033_);
v___x_1035_ = lean_array_get_size(v___x_1034_);
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_nat_dec_lt(v___x_1032_, v___x_1035_);
if (v___x_1037_ == 0)
{
lean_dec_ref(v___x_1034_);
v_a_1024_ = v___x_1036_;
goto v___jp_1023_;
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = lean_nat_dec_le(v___x_1035_, v___x_1035_);
if (v___x_1038_ == 0)
{
if (v___x_1037_ == 0)
{
lean_dec_ref(v___x_1034_);
v_a_1024_ = v___x_1036_;
goto v___jp_1023_;
}
else
{
size_t v___x_1039_; size_t v___x_1040_; lean_object* v___x_1041_; 
v___x_1039_ = ((size_t)0ULL);
v___x_1040_ = lean_usize_of_nat(v___x_1035_);
v___x_1041_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1034_, v___x_1039_, v___x_1040_, v___x_1036_, v___y_1019_, v___y_1021_);
lean_dec_ref(v___x_1034_);
v___y_1029_ = v___x_1041_;
goto v___jp_1028_;
}
}
else
{
size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; 
v___x_1042_ = ((size_t)0ULL);
v___x_1043_ = lean_usize_of_nat(v___x_1035_);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v___x_1034_, v___x_1042_, v___x_1043_, v___x_1036_, v___y_1019_, v___y_1021_);
lean_dec_ref(v___x_1034_);
v___y_1029_ = v___x_1044_;
goto v___jp_1028_;
}
}
}
else
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_b_1017_);
return v___x_1045_;
}
v___jp_1023_:
{
size_t v___x_1025_; size_t v___x_1026_; 
v___x_1025_ = ((size_t)1ULL);
v___x_1026_ = lean_usize_add(v_i_1015_, v___x_1025_);
v_i_1015_ = v___x_1026_;
v_b_1017_ = v_a_1024_;
goto _start;
}
v___jp_1028_:
{
if (lean_obj_tag(v___y_1029_) == 0)
{
lean_object* v_a_1030_; 
v_a_1030_ = lean_ctor_get(v___y_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref(v___y_1029_);
v_a_1024_ = v_a_1030_;
goto v___jp_1023_;
}
else
{
return v___y_1029_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg___boxed(lean_object* v_as_1046_, lean_object* v_i_1047_, lean_object* v_stop_1048_, lean_object* v_b_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
size_t v_i_boxed_1055_; size_t v_stop_boxed_1056_; lean_object* v_res_1057_; 
v_i_boxed_1055_ = lean_unbox_usize(v_i_1047_);
lean_dec(v_i_1047_);
v_stop_boxed_1056_ = lean_unbox_usize(v_stop_1048_);
lean_dec(v_stop_1048_);
v_res_1057_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_1046_, v_i_boxed_1055_, v_stop_boxed_1056_, v_b_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec_ref(v_as_1046_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(uint8_t v_pu_1058_, uint8_t v_t_1059_, lean_object* v_i_1060_, lean_object* v_as_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = lean_array_get_size(v_as_1061_);
v___x_1067_ = lean_nat_dec_lt(v_i_1060_, v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; 
lean_dec(v_i_1060_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_as_1061_);
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v_type_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v_subst_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_a_1069_ = lean_array_fget_borrowed(v_as_1061_, v_i_1060_);
v_type_1070_ = lean_ctor_get(v_a_1069_, 2);
v___x_1071_ = lean_st_ref_get(v___y_1064_);
lean_dec(v___x_1071_);
v___x_1072_ = lean_st_ref_get(v___y_1062_);
v_subst_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_subst_1073_);
lean_dec(v___x_1072_);
lean_inc_ref(v_type_1070_);
v___x_1074_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1058_, v_subst_1073_, v_t_1059_, v_type_1070_);
lean_dec_ref(v_subst_1073_);
lean_inc(v_a_1069_);
v___x_1075_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_1058_, v_a_1069_, v___x_1074_, v___y_1063_, v___y_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; size_t v___x_1077_; size_t v___x_1078_; uint8_t v___x_1079_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref(v___x_1075_);
v___x_1077_ = lean_ptr_addr(v_a_1069_);
v___x_1078_ = lean_ptr_addr(v_a_1076_);
v___x_1079_ = lean_usize_dec_eq(v___x_1077_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = lean_nat_add(v_i_1060_, v___x_1080_);
v___x_1082_ = lean_array_fset(v_as_1061_, v_i_1060_, v_a_1076_);
lean_dec(v_i_1060_);
v_i_1060_ = v___x_1081_;
v_as_1061_ = v___x_1082_;
goto _start;
}
else
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v_a_1076_);
v___x_1084_ = lean_unsigned_to_nat(1u);
v___x_1085_ = lean_nat_add(v_i_1060_, v___x_1084_);
lean_dec(v_i_1060_);
v_i_1060_ = v___x_1085_;
goto _start;
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v_as_1061_);
lean_dec(v_i_1060_);
v_a_1087_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1075_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1075_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg___boxed(lean_object* v_pu_1095_, lean_object* v_t_1096_, lean_object* v_i_1097_, lean_object* v_as_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
uint8_t v_pu_boxed_1103_; uint8_t v_t_boxed_1104_; lean_object* v_res_1105_; 
v_pu_boxed_1103_ = lean_unbox(v_pu_1095_);
v_t_boxed_1104_ = lean_unbox(v_t_1096_);
v_res_1105_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_boxed_1103_, v_t_boxed_1104_, v_i_1097_, v_as_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
lean_dec(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec(v___y_1099_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(uint8_t v_pu_1106_, uint8_t v_t_1107_, lean_object* v_ps_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_unsigned_to_nat(0u);
v___x_1118_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_1106_, v_t_1107_, v___x_1117_, v_ps_1108_, v___y_1110_, v___y_1113_, v___y_1115_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17___boxed(lean_object* v_pu_1119_, lean_object* v_t_1120_, lean_object* v_ps_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
uint8_t v_pu_boxed_1130_; uint8_t v_t_boxed_1131_; lean_object* v_res_1132_; 
v_pu_boxed_1130_ = lean_unbox(v_pu_1119_);
v_t_boxed_1131_ = lean_unbox(v_t_1120_);
v_res_1132_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v_pu_boxed_1130_, v_t_boxed_1131_, v_ps_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
return v_res_1132_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0(void){
_start:
{
uint8_t v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = 0;
v___x_1134_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(lean_object* v_msg_1135_){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3___closed__0);
v___x_1137_ = lean_panic_fn_borrowed(v___x_1136_, v_msg_1135_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(lean_object* v_as_1138_, size_t v_i_1139_, size_t v_stop_1140_, lean_object* v___y_1141_){
_start:
{
uint8_t v___x_1143_; 
v___x_1143_ = lean_usize_dec_eq(v_i_1139_, v_stop_1140_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; lean_object* v_type_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_array_uget_borrowed(v_as_1138_, v_i_1139_);
v_type_1145_ = lean_ctor_get(v___x_1144_, 2);
v___x_1146_ = l_Lean_Compiler_LCNF_isInductiveWithNoCtors___redArg(v_type_1145_, v___y_1141_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1158_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1158_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
uint8_t v___x_1151_; 
v___x_1151_ = lean_unbox(v_a_1147_);
if (v___x_1151_ == 0)
{
size_t v___x_1152_; size_t v___x_1153_; 
lean_del_object(v___x_1149_);
lean_dec(v_a_1147_);
v___x_1152_ = ((size_t)1ULL);
v___x_1153_ = lean_usize_add(v_i_1139_, v___x_1152_);
v_i_1139_ = v___x_1153_;
goto _start;
}
else
{
lean_object* v___x_1156_; 
if (v_isShared_1150_ == 0)
{
v___x_1156_ = v___x_1149_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1147_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
return v___x_1146_;
}
}
else
{
uint8_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = 0;
v___x_1160_ = lean_box(v___x_1159_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
return v___x_1161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg___boxed(lean_object* v_as_1162_, lean_object* v_i_1163_, lean_object* v_stop_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
size_t v_i_boxed_1167_; size_t v_stop_boxed_1168_; lean_object* v_res_1169_; 
v_i_boxed_1167_ = lean_unbox_usize(v_i_1163_);
lean_dec(v_i_1163_);
v_stop_boxed_1168_ = lean_unbox_usize(v_stop_1164_);
lean_dec(v_stop_1164_);
v_res_1169_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_1162_, v_i_boxed_1167_, v_stop_boxed_1168_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v_as_1162_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(uint8_t v_pu_1170_, uint8_t v_t_1171_, lean_object* v_decl_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v_type_1177_; lean_object* v_value_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_subst_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v_subst_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v_type_1177_ = lean_ctor_get(v_decl_1172_, 2);
v_value_1178_ = lean_ctor_get(v_decl_1172_, 3);
v___x_1179_ = lean_st_ref_get(v___y_1175_);
lean_dec(v___x_1179_);
v___x_1180_ = lean_st_ref_get(v___y_1173_);
v_subst_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc_ref(v_subst_1181_);
lean_dec(v___x_1180_);
v___x_1182_ = lean_st_ref_get(v___y_1175_);
lean_dec(v___x_1182_);
v___x_1183_ = lean_st_ref_get(v___y_1173_);
v_subst_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc_ref(v_subst_1184_);
lean_dec(v___x_1183_);
lean_inc_ref(v_type_1177_);
v___x_1185_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1170_, v_subst_1181_, v_t_1171_, v_type_1177_);
lean_dec_ref(v_subst_1181_);
lean_inc(v_value_1178_);
v___x_1186_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_1170_, v_subst_1184_, v_value_1178_, v_t_1171_);
lean_dec_ref(v_subst_1184_);
v___x_1187_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_1170_, v_decl_1172_, v___x_1185_, v___x_1186_, v___y_1174_, v___y_1175_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg___boxed(lean_object* v_pu_1188_, lean_object* v_t_1189_, lean_object* v_decl_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
uint8_t v_pu_boxed_1195_; uint8_t v_t_boxed_1196_; lean_object* v_res_1197_; 
v_pu_boxed_1195_ = lean_unbox(v_pu_1188_);
v_t_boxed_1196_ = lean_unbox(v_t_1189_);
v_res_1197_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_boxed_1195_, v_t_boxed_1196_, v_decl_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec(v___y_1191_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(lean_object* v_as_1198_, size_t v_sz_1199_, size_t v_i_1200_, lean_object* v_b_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
uint8_t v___x_1205_; 
v___x_1205_ = lean_usize_dec_lt(v_i_1200_, v_sz_1199_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_b_1201_);
return v___x_1206_;
}
else
{
lean_object* v_array_1207_; lean_object* v_start_1208_; lean_object* v_stop_1209_; uint8_t v___x_1210_; 
v_array_1207_ = lean_ctor_get(v_b_1201_, 0);
v_start_1208_ = lean_ctor_get(v_b_1201_, 1);
v_stop_1209_ = lean_ctor_get(v_b_1201_, 2);
v___x_1210_ = lean_nat_dec_lt(v_start_1208_, v_stop_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1211_, 0, v_b_1201_);
return v___x_1211_;
}
else
{
lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1245_; 
lean_inc(v_stop_1209_);
lean_inc(v_start_1208_);
lean_inc_ref(v_array_1207_);
v_isSharedCheck_1245_ = !lean_is_exclusive(v_b_1201_);
if (v_isSharedCheck_1245_ == 0)
{
lean_object* v_unused_1246_; lean_object* v_unused_1247_; lean_object* v_unused_1248_; 
v_unused_1246_ = lean_ctor_get(v_b_1201_, 2);
lean_dec(v_unused_1246_);
v_unused_1247_ = lean_ctor_get(v_b_1201_, 1);
lean_dec(v_unused_1247_);
v_unused_1248_ = lean_ctor_get(v_b_1201_, 0);
lean_dec(v_unused_1248_);
v___x_1213_ = v_b_1201_;
v_isShared_1214_ = v_isSharedCheck_1245_;
goto v_resetjp_1212_;
}
else
{
lean_dec(v_b_1201_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1245_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v_a_1217_; lean_object* v_fvarId_1218_; lean_object* v_subst_1219_; lean_object* v_used_1220_; lean_object* v_binderRenaming_1221_; lean_object* v_funDeclInfoMap_1222_; uint8_t v_simplified_1223_; lean_object* v_visited_1224_; lean_object* v_inline_1225_; lean_object* v_inlineLocal_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1244_; 
v___x_1215_ = lean_st_ref_get(v___y_1203_);
lean_dec(v___x_1215_);
v___x_1216_ = lean_st_ref_take(v___y_1202_);
v_a_1217_ = lean_array_uget_borrowed(v_as_1198_, v_i_1200_);
v_fvarId_1218_ = lean_ctor_get(v_a_1217_, 0);
v_subst_1219_ = lean_ctor_get(v___x_1216_, 0);
v_used_1220_ = lean_ctor_get(v___x_1216_, 1);
v_binderRenaming_1221_ = lean_ctor_get(v___x_1216_, 2);
v_funDeclInfoMap_1222_ = lean_ctor_get(v___x_1216_, 3);
v_simplified_1223_ = lean_ctor_get_uint8(v___x_1216_, sizeof(void*)*7);
v_visited_1224_ = lean_ctor_get(v___x_1216_, 4);
v_inline_1225_ = lean_ctor_get(v___x_1216_, 5);
v_inlineLocal_1226_ = lean_ctor_get(v___x_1216_, 6);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1228_ = v___x_1216_;
v_isShared_1229_ = v_isSharedCheck_1244_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_inlineLocal_1226_);
lean_inc(v_inline_1225_);
lean_inc(v_visited_1224_);
lean_inc(v_funDeclInfoMap_1222_);
lean_inc(v_binderRenaming_1221_);
lean_inc(v_used_1220_);
lean_inc(v_subst_1219_);
lean_dec(v___x_1216_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1244_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1230_ = lean_array_fget_borrowed(v_array_1207_, v_start_1208_);
lean_inc(v___x_1230_);
lean_inc(v_fvarId_1218_);
v___x_1231_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_1219_, v_fvarId_1218_, v___x_1230_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1231_);
v___x_1233_ = v___x_1228_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_used_1220_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_binderRenaming_1221_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_funDeclInfoMap_1222_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_visited_1224_);
lean_ctor_set(v_reuseFailAlloc_1243_, 5, v_inline_1225_);
lean_ctor_set(v_reuseFailAlloc_1243_, 6, v_inlineLocal_1226_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*7, v_simplified_1223_);
v___x_1233_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1234_ = lean_st_ref_set(v___y_1202_, v___x_1233_);
v___x_1235_ = lean_unsigned_to_nat(1u);
v___x_1236_ = lean_nat_add(v_start_1208_, v___x_1235_);
lean_dec(v_start_1208_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1236_);
v___x_1238_ = v___x_1213_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_array_1207_);
lean_ctor_set(v_reuseFailAlloc_1242_, 1, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1242_, 2, v_stop_1209_);
v___x_1238_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
size_t v___x_1239_; size_t v___x_1240_; 
v___x_1239_ = ((size_t)1ULL);
v___x_1240_ = lean_usize_add(v_i_1200_, v___x_1239_);
v_i_1200_ = v___x_1240_;
v_b_1201_ = v___x_1238_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg___boxed(lean_object* v_as_1249_, lean_object* v_sz_1250_, lean_object* v_i_1251_, lean_object* v_b_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
size_t v_sz_boxed_1256_; size_t v_i_boxed_1257_; lean_object* v_res_1258_; 
v_sz_boxed_1256_ = lean_unbox_usize(v_sz_1250_);
lean_dec(v_sz_1250_);
v_i_boxed_1257_ = lean_unbox_usize(v_i_1251_);
lean_dec(v_i_1251_);
v_res_1258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_1249_, v_sz_boxed_1256_, v_i_boxed_1257_, v_b_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec_ref(v_as_1249_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(lean_object* v_as_1259_, size_t v_i_1260_, size_t v_stop_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_usize_dec_eq(v_i_1260_, v_stop_1261_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; lean_object* v_fvarId_1267_; lean_object* v___x_1268_; 
v___x_1266_ = lean_array_uget_borrowed(v_as_1259_, v_i_1260_);
v_fvarId_1267_ = lean_ctor_get(v___x_1266_, 0);
v___x_1268_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_1267_, v___y_1262_, v___y_1263_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1280_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1280_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1280_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_unbox(v_a_1269_);
if (v___x_1273_ == 0)
{
size_t v___x_1274_; size_t v___x_1275_; 
lean_del_object(v___x_1271_);
lean_dec(v_a_1269_);
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_add(v_i_1260_, v___x_1274_);
v_i_1260_ = v___x_1275_;
goto _start;
}
else
{
lean_object* v___x_1278_; 
if (v_isShared_1272_ == 0)
{
v___x_1278_ = v___x_1271_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1269_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
return v___x_1268_;
}
}
else
{
uint8_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = 0;
v___x_1282_ = lean_box(v___x_1281_);
v___x_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg___boxed(lean_object* v_as_1284_, lean_object* v_i_1285_, lean_object* v_stop_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
size_t v_i_boxed_1290_; size_t v_stop_boxed_1291_; lean_object* v_res_1292_; 
v_i_boxed_1290_ = lean_unbox_usize(v_i_1285_);
lean_dec(v_i_1285_);
v_stop_boxed_1291_ = lean_unbox_usize(v_stop_1286_);
lean_dec(v_stop_1286_);
v_res_1292_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_1284_, v_i_boxed_1290_, v_stop_boxed_1291_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v_as_1284_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(lean_object* v_as_1293_, size_t v_i_1294_, size_t v_stop_1295_, lean_object* v_b_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
uint8_t v___x_1300_; 
v___x_1300_ = lean_usize_dec_eq(v_i_1294_, v_stop_1295_);
if (v___x_1300_ == 0)
{
uint8_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = 0;
v___x_1302_ = lean_array_uget_borrowed(v_as_1293_, v_i_1294_);
v___x_1303_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_1301_, v___x_1302_, v___y_1297_, v___y_1298_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; size_t v___x_1305_; size_t v___x_1306_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref(v___x_1303_);
v___x_1305_ = ((size_t)1ULL);
v___x_1306_ = lean_usize_add(v_i_1294_, v___x_1305_);
v_i_1294_ = v___x_1306_;
v_b_1296_ = v_a_1304_;
goto _start;
}
else
{
return v___x_1303_;
}
}
else
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v_b_1296_);
return v___x_1308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg___boxed(lean_object* v_as_1309_, lean_object* v_i_1310_, lean_object* v_stop_1311_, lean_object* v_b_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
size_t v_i_boxed_1316_; size_t v_stop_boxed_1317_; lean_object* v_res_1318_; 
v_i_boxed_1316_ = lean_unbox_usize(v_i_1310_);
lean_dec(v_i_1310_);
v_stop_boxed_1317_ = lean_unbox_usize(v_stop_1311_);
lean_dec(v_stop_1311_);
v_res_1318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_1309_, v_i_boxed_1316_, v_stop_boxed_1317_, v_b_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v_as_1309_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(lean_object* v_as_1319_, size_t v_i_1320_, size_t v_stop_1321_, lean_object* v_b_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
uint8_t v___x_1326_; 
v___x_1326_ = lean_usize_dec_eq(v_i_1320_, v_stop_1321_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_array_uget_borrowed(v_as_1319_, v_i_1320_);
lean_inc(v___x_1327_);
v___x_1328_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v___x_1327_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; size_t v___x_1330_; size_t v___x_1331_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref(v___x_1328_);
v___x_1330_ = ((size_t)1ULL);
v___x_1331_ = lean_usize_add(v_i_1320_, v___x_1330_);
v_i_1320_ = v___x_1331_;
v_b_1322_ = v_a_1329_;
goto _start;
}
else
{
return v___x_1328_;
}
}
else
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v_b_1322_);
return v___x_1333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg___boxed(lean_object* v_as_1334_, lean_object* v_i_1335_, lean_object* v_stop_1336_, lean_object* v_b_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
size_t v_i_boxed_1341_; size_t v_stop_boxed_1342_; lean_object* v_res_1343_; 
v_i_boxed_1341_ = lean_unbox_usize(v_i_1335_);
lean_dec(v_i_1335_);
v_stop_boxed_1342_ = lean_unbox_usize(v_stop_1336_);
lean_dec(v_stop_1336_);
v_res_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_1334_, v_i_boxed_1341_, v_stop_boxed_1342_, v_b_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec_ref(v_as_1334_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(lean_object* v___y_1344_, lean_object* v___f_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v_fvarId_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___x_1354_; 
lean_inc(v_fvarId_1348_);
v___x_1354_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_1348_, v___y_1344_, v___y_1352_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v___x_1355_; 
lean_dec_ref(v___x_1354_);
lean_inc(v___y_1352_);
lean_inc_ref(v___y_1351_);
lean_inc(v___y_1350_);
lean_inc_ref(v___y_1349_);
lean_inc_ref(v___y_1347_);
lean_inc(v___y_1344_);
lean_inc_ref(v___y_1346_);
v___x_1355_ = lean_apply_9(v___f_1345_, v_fvarId_1348_, v___y_1346_, v___y_1344_, v___y_1347_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, lean_box(0));
return v___x_1355_;
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_fvarId_1348_);
lean_dec_ref(v___f_1345_);
v_a_1356_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1354_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1354_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed(lean_object* v___y_1364_, lean_object* v___f_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v_fvarId_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2(v___y_1364_, v___f_1365_, v___y_1366_, v___y_1367_, v_fvarId_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec_ref(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1364_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(lean_object* v_a_1375_, lean_object* v_b_1376_){
_start:
{
lean_object* v_array_1377_; lean_object* v_start_1378_; lean_object* v_stop_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1392_; 
v_array_1377_ = lean_ctor_get(v_a_1375_, 0);
v_start_1378_ = lean_ctor_get(v_a_1375_, 1);
v_stop_1379_ = lean_ctor_get(v_a_1375_, 2);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_a_1375_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1381_ = v_a_1375_;
v_isShared_1382_ = v_isSharedCheck_1392_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_stop_1379_);
lean_inc(v_start_1378_);
lean_inc(v_array_1377_);
lean_dec(v_a_1375_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1392_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
uint8_t v___x_1383_; 
v___x_1383_ = lean_nat_dec_lt(v_start_1378_, v_stop_1379_);
if (v___x_1383_ == 0)
{
lean_del_object(v___x_1381_);
lean_dec(v_stop_1379_);
lean_dec(v_start_1378_);
lean_dec_ref(v_array_1377_);
return v_b_1376_;
}
else
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1384_ = lean_unsigned_to_nat(1u);
v___x_1385_ = lean_nat_add(v_start_1378_, v___x_1384_);
lean_inc_ref(v_array_1377_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 1, v___x_1385_);
v___x_1387_ = v___x_1381_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_array_1377_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1391_, 2, v_stop_1379_);
v___x_1387_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_array_fget(v_array_1377_, v_start_1378_);
lean_dec(v_start_1378_);
lean_dec_ref(v_array_1377_);
v___x_1389_ = lean_array_push(v_b_1376_, v___x_1388_);
v_a_1375_ = v___x_1387_;
v_b_1376_ = v___x_1389_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(lean_object* v_x_1393_, lean_object* v_x_1394_, lean_object* v_x_1395_, lean_object* v_x_1396_){
_start:
{
lean_object* v_ks_1397_; lean_object* v_vs_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1422_; 
v_ks_1397_ = lean_ctor_get(v_x_1393_, 0);
v_vs_1398_ = lean_ctor_get(v_x_1393_, 1);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_x_1393_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1400_ = v_x_1393_;
v_isShared_1401_ = v_isSharedCheck_1422_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_vs_1398_);
lean_inc(v_ks_1397_);
lean_dec(v_x_1393_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1422_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = lean_array_get_size(v_ks_1397_);
v___x_1403_ = lean_nat_dec_lt(v_x_1394_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
lean_dec(v_x_1394_);
v___x_1404_ = lean_array_push(v_ks_1397_, v_x_1395_);
v___x_1405_ = lean_array_push(v_vs_1398_, v_x_1396_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1405_);
lean_ctor_set(v___x_1400_, 0, v___x_1404_);
v___x_1407_ = v___x_1400_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1404_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
else
{
lean_object* v_k_x27_1409_; uint8_t v___x_1410_; 
v_k_x27_1409_ = lean_array_fget_borrowed(v_ks_1397_, v_x_1394_);
v___x_1410_ = lean_name_eq(v_x_1395_, v_k_x27_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1412_; 
if (v_isShared_1401_ == 0)
{
v___x_1412_ = v___x_1400_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_ks_1397_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_vs_1398_);
v___x_1412_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_unsigned_to_nat(1u);
v___x_1414_ = lean_nat_add(v_x_1394_, v___x_1413_);
lean_dec(v_x_1394_);
v_x_1393_ = v___x_1412_;
v_x_1394_ = v___x_1414_;
goto _start;
}
}
else
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1417_ = lean_array_fset(v_ks_1397_, v_x_1394_, v_x_1395_);
v___x_1418_ = lean_array_fset(v_vs_1398_, v_x_1394_, v_x_1396_);
lean_dec(v_x_1394_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1418_);
lean_ctor_set(v___x_1400_, 0, v___x_1417_);
v___x_1420_ = v___x_1400_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1417_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(lean_object* v_n_1423_, lean_object* v_k_1424_, lean_object* v_v_1425_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_n_1423_, v___x_1426_, v_k_1424_, v_v_1425_);
return v___x_1427_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1428_; uint64_t v___x_1429_; 
v___x_1428_ = lean_unsigned_to_nat(1723u);
v___x_1429_ = lean_uint64_of_nat(v___x_1428_);
return v___x_1429_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_1430_; size_t v___x_1431_; size_t v___x_1432_; 
v___x_1430_ = ((size_t)5ULL);
v___x_1431_ = ((size_t)1ULL);
v___x_1432_ = lean_usize_shift_left(v___x_1431_, v___x_1430_);
return v___x_1432_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1433_; size_t v___x_1434_; size_t v___x_1435_; 
v___x_1433_ = ((size_t)1ULL);
v___x_1434_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__0);
v___x_1435_ = lean_usize_sub(v___x_1434_, v___x_1433_);
return v___x_1435_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(lean_object* v_x_1437_, size_t v_x_1438_, size_t v_x_1439_, lean_object* v_x_1440_, lean_object* v_x_1441_){
_start:
{
if (lean_obj_tag(v_x_1437_) == 0)
{
lean_object* v_es_1442_; size_t v___x_1443_; size_t v___x_1444_; size_t v___x_1445_; size_t v___x_1446_; lean_object* v_j_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v_es_1442_ = lean_ctor_get(v_x_1437_, 0);
v___x_1443_ = ((size_t)5ULL);
v___x_1444_ = ((size_t)1ULL);
v___x_1445_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__1);
v___x_1446_ = lean_usize_land(v_x_1438_, v___x_1445_);
v_j_1447_ = lean_usize_to_nat(v___x_1446_);
v___x_1448_ = lean_array_get_size(v_es_1442_);
v___x_1449_ = lean_nat_dec_lt(v_j_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_dec(v_j_1447_);
lean_dec(v_x_1441_);
lean_dec(v_x_1440_);
return v_x_1437_;
}
else
{
lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1486_; 
lean_inc_ref(v_es_1442_);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; 
v_unused_1487_ = lean_ctor_get(v_x_1437_, 0);
lean_dec(v_unused_1487_);
v___x_1451_ = v_x_1437_;
v_isShared_1452_ = v_isSharedCheck_1486_;
goto v_resetjp_1450_;
}
else
{
lean_dec(v_x_1437_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1486_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v_v_1453_; lean_object* v___x_1454_; lean_object* v_xs_x27_1455_; lean_object* v___y_1457_; 
v_v_1453_ = lean_array_fget(v_es_1442_, v_j_1447_);
v___x_1454_ = lean_box(0);
v_xs_x27_1455_ = lean_array_fset(v_es_1442_, v_j_1447_, v___x_1454_);
switch(lean_obj_tag(v_v_1453_))
{
case 0:
{
lean_object* v_key_1462_; lean_object* v_val_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1473_; 
v_key_1462_ = lean_ctor_get(v_v_1453_, 0);
v_val_1463_ = lean_ctor_get(v_v_1453_, 1);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_v_1453_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1465_ = v_v_1453_;
v_isShared_1466_ = v_isSharedCheck_1473_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_val_1463_);
lean_inc(v_key_1462_);
lean_dec(v_v_1453_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1473_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
uint8_t v___x_1467_; 
v___x_1467_ = lean_name_eq(v_x_1440_, v_key_1462_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_del_object(v___x_1465_);
v___x_1468_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1462_, v_val_1463_, v_x_1440_, v_x_1441_);
v___x_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
v___y_1457_ = v___x_1469_;
goto v___jp_1456_;
}
else
{
lean_object* v___x_1471_; 
lean_dec(v_val_1463_);
lean_dec(v_key_1462_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 1, v_x_1441_);
lean_ctor_set(v___x_1465_, 0, v_x_1440_);
v___x_1471_ = v___x_1465_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_x_1440_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_x_1441_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
v___y_1457_ = v___x_1471_;
goto v___jp_1456_;
}
}
}
}
case 1:
{
lean_object* v_node_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1484_; 
v_node_1474_ = lean_ctor_get(v_v_1453_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_v_1453_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1476_ = v_v_1453_;
v_isShared_1477_ = v_isSharedCheck_1484_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_node_1474_);
lean_dec(v_v_1453_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1484_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
size_t v___x_1478_; size_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1482_; 
v___x_1478_ = lean_usize_shift_right(v_x_1438_, v___x_1443_);
v___x_1479_ = lean_usize_add(v_x_1439_, v___x_1444_);
v___x_1480_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_node_1474_, v___x_1478_, v___x_1479_, v_x_1440_, v_x_1441_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1480_);
v___x_1482_ = v___x_1476_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
v___y_1457_ = v___x_1482_;
goto v___jp_1456_;
}
}
}
default: 
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_x_1440_);
lean_ctor_set(v___x_1485_, 1, v_x_1441_);
v___y_1457_ = v___x_1485_;
goto v___jp_1456_;
}
}
v___jp_1456_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_array_fset(v_xs_x27_1455_, v_j_1447_, v___y_1457_);
lean_dec(v_j_1447_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v___x_1458_);
v___x_1460_ = v___x_1451_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1458_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
else
{
lean_object* v_ks_1488_; lean_object* v_vs_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1509_; 
v_ks_1488_ = lean_ctor_get(v_x_1437_, 0);
v_vs_1489_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1491_ = v_x_1437_;
v_isShared_1492_ = v_isSharedCheck_1509_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_vs_1489_);
lean_inc(v_ks_1488_);
lean_dec(v_x_1437_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1509_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_ks_1488_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_vs_1489_);
v___x_1494_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
lean_object* v_newNode_1495_; uint8_t v___y_1497_; size_t v___x_1503_; uint8_t v___x_1504_; 
v_newNode_1495_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v___x_1494_, v_x_1440_, v_x_1441_);
v___x_1503_ = ((size_t)7ULL);
v___x_1504_ = lean_usize_dec_le(v___x_1503_, v_x_1439_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1505_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1495_);
v___x_1506_ = lean_unsigned_to_nat(4u);
v___x_1507_ = lean_nat_dec_lt(v___x_1505_, v___x_1506_);
lean_dec(v___x_1505_);
v___y_1497_ = v___x_1507_;
goto v___jp_1496_;
}
else
{
v___y_1497_ = v___x_1504_;
goto v___jp_1496_;
}
v___jp_1496_:
{
if (v___y_1497_ == 0)
{
lean_object* v_ks_1498_; lean_object* v_vs_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_ks_1498_ = lean_ctor_get(v_newNode_1495_, 0);
lean_inc_ref(v_ks_1498_);
v_vs_1499_ = lean_ctor_get(v_newNode_1495_, 1);
lean_inc_ref(v_vs_1499_);
lean_dec_ref(v_newNode_1495_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___closed__2);
v___x_1502_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_x_1439_, v_ks_1498_, v_vs_1499_, v___x_1500_, v___x_1501_);
lean_dec_ref(v_vs_1499_);
lean_dec_ref(v_ks_1498_);
return v___x_1502_;
}
else
{
return v_newNode_1495_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(size_t v_depth_1510_, lean_object* v_keys_1511_, lean_object* v_vals_1512_, lean_object* v_i_1513_, lean_object* v_entries_1514_){
_start:
{
lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1515_ = lean_array_get_size(v_keys_1511_);
v___x_1516_ = lean_nat_dec_lt(v_i_1513_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_dec(v_i_1513_);
return v_entries_1514_;
}
else
{
lean_object* v_k_1517_; lean_object* v_v_1518_; uint64_t v___y_1520_; 
v_k_1517_ = lean_array_fget_borrowed(v_keys_1511_, v_i_1513_);
v_v_1518_ = lean_array_fget_borrowed(v_vals_1512_, v_i_1513_);
if (lean_obj_tag(v_k_1517_) == 0)
{
uint64_t v___x_1531_; 
v___x_1531_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0);
v___y_1520_ = v___x_1531_;
goto v___jp_1519_;
}
else
{
uint64_t v_hash_1532_; 
v_hash_1532_ = lean_ctor_get_uint64(v_k_1517_, sizeof(void*)*2);
v___y_1520_ = v_hash_1532_;
goto v___jp_1519_;
}
v___jp_1519_:
{
size_t v_h_1521_; size_t v___x_1522_; lean_object* v___x_1523_; size_t v___x_1524_; size_t v___x_1525_; size_t v___x_1526_; size_t v_h_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v_h_1521_ = lean_uint64_to_usize(v___y_1520_);
v___x_1522_ = ((size_t)5ULL);
v___x_1523_ = lean_unsigned_to_nat(1u);
v___x_1524_ = ((size_t)1ULL);
v___x_1525_ = lean_usize_sub(v_depth_1510_, v___x_1524_);
v___x_1526_ = lean_usize_mul(v___x_1522_, v___x_1525_);
v_h_1527_ = lean_usize_shift_right(v_h_1521_, v___x_1526_);
v___x_1528_ = lean_nat_add(v_i_1513_, v___x_1523_);
lean_dec(v_i_1513_);
lean_inc(v_v_1518_);
lean_inc(v_k_1517_);
v___x_1529_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_entries_1514_, v_h_1527_, v_depth_1510_, v_k_1517_, v_v_1518_);
v_i_1513_ = v___x_1528_;
v_entries_1514_ = v___x_1529_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_depth_1533_, lean_object* v_keys_1534_, lean_object* v_vals_1535_, lean_object* v_i_1536_, lean_object* v_entries_1537_){
_start:
{
size_t v_depth_boxed_1538_; lean_object* v_res_1539_; 
v_depth_boxed_1538_ = lean_unbox_usize(v_depth_1533_);
lean_dec(v_depth_1533_);
v_res_1539_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_boxed_1538_, v_keys_1534_, v_vals_1535_, v_i_1536_, v_entries_1537_);
lean_dec_ref(v_vals_1535_);
lean_dec_ref(v_keys_1534_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_1540_, lean_object* v_x_1541_, lean_object* v_x_1542_, lean_object* v_x_1543_, lean_object* v_x_1544_){
_start:
{
size_t v_x_48170__boxed_1545_; size_t v_x_48171__boxed_1546_; lean_object* v_res_1547_; 
v_x_48170__boxed_1545_ = lean_unbox_usize(v_x_1541_);
lean_dec(v_x_1541_);
v_x_48171__boxed_1546_ = lean_unbox_usize(v_x_1542_);
lean_dec(v_x_1542_);
v_res_1547_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1540_, v_x_48170__boxed_1545_, v_x_48171__boxed_1546_, v_x_1543_, v_x_1544_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(lean_object* v_x_1548_, lean_object* v_x_1549_, lean_object* v_x_1550_){
_start:
{
uint64_t v___y_1552_; 
if (lean_obj_tag(v_x_1549_) == 0)
{
uint64_t v___x_1556_; 
v___x_1556_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg___closed__0);
v___y_1552_ = v___x_1556_;
goto v___jp_1551_;
}
else
{
uint64_t v_hash_1557_; 
v_hash_1557_ = lean_ctor_get_uint64(v_x_1549_, sizeof(void*)*2);
v___y_1552_ = v_hash_1557_;
goto v___jp_1551_;
}
v___jp_1551_:
{
size_t v___x_1553_; size_t v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = lean_uint64_to_usize(v___y_1552_);
v___x_1554_ = ((size_t)1ULL);
v___x_1555_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_1548_, v___x_1553_, v___x_1554_, v_x_1549_, v_x_1550_);
return v___x_1555_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__2(void){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_1558_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__1(void){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_mk_string_unchecked("_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp", 67, 67);
return v___x_1559_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__0(void){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.Basic", 24, 24);
return v___x_1560_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1561_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__2, &l_Lean_Compiler_LCNF_Simp_simp___closed__2_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__2);
v___x_1562_ = lean_unsigned_to_nat(9u);
v___x_1563_ = lean_unsigned_to_nat(640u);
v___x_1564_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__1, &l_Lean_Compiler_LCNF_Simp_simp___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__1);
v___x_1565_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__0, &l_Lean_Compiler_LCNF_Simp_simp___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__0);
v___x_1566_ = l_mkPanicMessageWithDecl(v___x_1565_, v___x_1564_, v___x_1563_, v___x_1562_, v___x_1561_);
return v___x_1566_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0(void){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_mk_string_unchecked("_jp", 3, 3);
return v___x_1567_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__0);
v___x_1569_ = l_Lean_Name_mkStr1(v___x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v_fvarId_1572_, lean_object* v_k_1573_, lean_object* v_args_1574_, uint8_t v___x_1575_, lean_object* v___x_1576_, lean_object* v_result_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_lower_1587_; lean_object* v_upper_1588_; uint8_t v___x_1615_; 
v___x_1615_ = lean_nat_dec_lt(v___x_1570_, v___x_1571_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; 
lean_dec(v___x_1576_);
lean_dec_ref(v_args_1574_);
lean_dec(v___x_1571_);
lean_dec(v___x_1570_);
v___x_1616_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1572_, v_result_1577_, v___y_1579_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v___x_1617_; 
lean_dec_ref(v___x_1616_);
lean_inc_ref(v___y_1583_);
v___x_1617_ = l_Lean_Compiler_LCNF_Simp_simp(v_k_1573_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
return v___x_1617_;
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec_ref(v_k_1573_);
v_a_1618_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1616_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1616_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
else
{
uint8_t v___x_1626_; 
v___x_1626_ = lean_nat_dec_le(v___x_1570_, v___x_1576_);
if (v___x_1626_ == 0)
{
lean_dec(v___x_1576_);
v_lower_1587_ = v___x_1570_;
v_upper_1588_ = v___x_1571_;
goto v___jp_1586_;
}
else
{
lean_dec(v___x_1570_);
v_lower_1587_ = v___x_1576_;
v_upper_1588_ = v___x_1571_;
goto v___jp_1586_;
}
}
v___jp_1586_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1589_ = l_Array_toSubarray___redArg(v_args_1574_, v_lower_1587_, v_upper_1588_);
v___x_1590_ = l_Subarray_copy___redArg(v___x_1589_);
v___x_1591_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1591_, 0, v_result_1577_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1, &l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1);
v___x_1593_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1575_, v___x_1591_, v___x_1592_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v_fvarId_1595_; lean_object* v___x_1596_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref(v___x_1593_);
v_fvarId_1595_ = lean_ctor_get(v_a_1594_, 0);
lean_inc(v_fvarId_1595_);
v___x_1596_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1572_, v_fvarId_1595_, v___y_1579_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec_ref(v___x_1596_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v_a_1594_);
lean_ctor_set(v___x_1597_, 1, v_k_1573_);
lean_inc_ref(v___y_1583_);
v___x_1598_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1597_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
return v___x_1598_;
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec(v_a_1594_);
lean_dec_ref(v_k_1573_);
v_a_1599_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1596_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1596_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v_k_1573_);
lean_dec(v_fvarId_1572_);
v_a_1607_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1593_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1593_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed(lean_object* v___x_1627_, lean_object* v___x_1628_, lean_object* v_fvarId_1629_, lean_object* v_k_1630_, lean_object* v_args_1631_, lean_object* v___x_1632_, lean_object* v___x_1633_, lean_object* v_result_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
uint8_t v___x_48402__boxed_1643_; lean_object* v_res_1644_; 
v___x_48402__boxed_1643_ = lean_unbox(v___x_1632_);
v_res_1644_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1(v___x_1627_, v___x_1628_, v_fvarId_1629_, v_k_1630_, v_args_1631_, v___x_48402__boxed_1643_, v___x_1633_, v_result_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(lean_object* v_letDecl_1645_, lean_object* v_k_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_fvarId_1655_; lean_object* v_value_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1994_; 
v_fvarId_1655_ = lean_ctor_get(v_letDecl_1645_, 0);
v_value_1656_ = lean_ctor_get(v_letDecl_1645_, 3);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_letDecl_1645_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; lean_object* v_unused_1996_; 
v_unused_1995_ = lean_ctor_get(v_letDecl_1645_, 2);
lean_dec(v_unused_1995_);
v_unused_1996_ = lean_ctor_get(v_letDecl_1645_, 1);
lean_dec(v_unused_1996_);
v___x_1658_ = v_letDecl_1645_;
v_isShared_1659_ = v_isSharedCheck_1994_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_value_1656_);
lean_inc(v_fvarId_1655_);
lean_dec(v_letDecl_1645_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1994_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1660_; 
lean_inc(v_value_1656_);
v___x_1660_ = l_Lean_Compiler_LCNF_Simp_inlineCandidate_x3f(v_value_1656_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1985_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1663_ = v___x_1660_;
v_isShared_1664_ = v_isSharedCheck_1985_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1660_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1985_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
if (lean_obj_tag(v_a_1661_) == 1)
{
lean_object* v_val_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1980_; 
lean_del_object(v___x_1663_);
v_val_1665_ = lean_ctor_get(v_a_1661_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_a_1661_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1667_ = v_a_1661_;
v_isShared_1668_ = v_isSharedCheck_1980_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_val_1665_);
lean_dec(v_a_1661_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1980_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v_params_1669_; lean_object* v_value_1670_; lean_object* v_fType_1671_; lean_object* v_args_1672_; uint8_t v_recursive_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; uint8_t v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; 
v_params_1669_ = lean_ctor_get(v_val_1665_, 0);
v_value_1670_ = lean_ctor_get(v_val_1665_, 1);
v_fType_1671_ = lean_ctor_get(v_val_1665_, 2);
v_args_1672_ = lean_ctor_get(v_val_1665_, 3);
v_recursive_1673_ = lean_ctor_get_uint8(v_val_1665_, sizeof(void*)*4 + 2);
v___x_1674_ = lean_array_get_size(v_args_1672_);
v___x_1675_ = l_Lean_Compiler_LCNF_Simp_InlineCandidateInfo_arity(v_val_1665_);
v___x_1676_ = lean_nat_dec_lt(v___x_1674_, v___x_1675_);
if (lean_obj_tag(v_value_1656_) == 3)
{
lean_object* v_declName_1960_; lean_object* v___x_1961_; 
v_declName_1960_ = lean_ctor_get(v_value_1656_, 0);
lean_inc_n(v_declName_1960_, 2);
lean_dec_ref(v_value_1656_);
v___x_1961_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1673_, v_declName_1960_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v_declName_1963_; lean_object* v_config_1964_; lean_object* v_inlineStack_1965_; lean_object* v_inlineStackOccs_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref(v___x_1961_);
v_declName_1963_ = lean_ctor_get(v_a_1647_, 0);
v_config_1964_ = lean_ctor_get(v_a_1647_, 1);
v_inlineStack_1965_ = lean_ctor_get(v_a_1647_, 2);
v_inlineStackOccs_1966_ = lean_ctor_get(v_a_1647_, 3);
lean_inc(v_inlineStack_1965_);
lean_inc(v_declName_1960_);
v___x_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1967_, 0, v_declName_1960_);
lean_ctor_set(v___x_1967_, 1, v_inlineStack_1965_);
lean_inc_ref(v_inlineStackOccs_1966_);
v___x_1968_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_inlineStackOccs_1966_, v_declName_1960_, v_a_1962_);
lean_inc_ref(v_config_1964_);
lean_inc(v_declName_1963_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 3, v___x_1968_);
lean_ctor_set(v___x_1658_, 2, v___x_1967_);
lean_ctor_set(v___x_1658_, 1, v_config_1964_);
lean_ctor_set(v___x_1658_, 0, v_declName_1963_);
v___x_1970_ = v___x_1658_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_declName_1963_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v_config_1964_);
lean_ctor_set(v_reuseFailAlloc_1971_, 2, v___x_1967_);
lean_ctor_set(v_reuseFailAlloc_1971_, 3, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
v___y_1859_ = v___x_1970_;
v___y_1860_ = v_a_1648_;
v___y_1861_ = v_a_1649_;
v___y_1862_ = v_a_1650_;
v___y_1863_ = v_a_1651_;
v___y_1864_ = v_a_1652_;
v___y_1865_ = v_a_1653_;
goto v___jp_1858_;
}
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec(v_declName_1960_);
lean_dec(v___x_1675_);
lean_del_object(v___x_1667_);
lean_dec(v_val_1665_);
lean_del_object(v___x_1658_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
v_a_1972_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1961_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1961_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
else
{
lean_del_object(v___x_1658_);
lean_dec(v_value_1656_);
lean_inc_ref(v_a_1647_);
v___y_1859_ = v_a_1647_;
v___y_1860_ = v_a_1648_;
v___y_1861_ = v_a_1649_;
v___y_1862_ = v_a_1650_;
v___y_1863_ = v_a_1651_;
v___y_1864_ = v_a_1652_;
v___y_1865_ = v_a_1653_;
goto v___jp_1858_;
}
v___jp_1677_:
{
lean_object* v___x_1691_; 
lean_inc_ref(v___y_1681_);
v___x_1691_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_1683_, v___y_1685_, v___y_1684_, v___y_1680_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1693_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref(v___x_1691_);
v___x_1693_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1684_, v___y_1678_);
if (lean_obj_tag(v___x_1693_) == 0)
{
uint8_t v___x_1694_; 
lean_dec_ref(v___x_1693_);
v___x_1694_ = l___private_Lean_Compiler_LCNF_Simp_Main_0__Lean_Compiler_LCNF_Simp_oneExitPointQuick_go(v_a_1692_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_dec_ref(v___y_1686_);
v___x_1695_ = lean_mk_empty_array_with_capacity(v___y_1689_);
lean_dec(v___y_1689_);
lean_inc_ref(v___x_1695_);
v___x_1696_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v___y_1687_, v___x_1695_);
v___x_1697_ = l_Lean_Compiler_LCNF_inferAppType(v___y_1682_, v_fType_1671_, v___x_1696_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc_n(v_a_1698_, 2);
lean_dec_ref(v___x_1697_);
v___x_1699_ = l_Lean_Expr_headBeta(v_a_1698_);
v___x_1700_ = l_Lean_Expr_isForall(v___x_1699_);
lean_dec_ref(v___x_1699_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; 
lean_dec_ref(v___x_1695_);
v___x_1701_ = l_Lean_Compiler_LCNF_mkAuxParam(v___y_1682_, v_a_1698_, v___x_1676_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v_fvarId_1703_; lean_object* v___x_1704_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref(v___x_1701_);
v_fvarId_1703_ = lean_ctor_get(v_a_1702_, 0);
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1681_);
lean_inc(v___y_1690_);
lean_inc_ref(v___y_1679_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1684_);
lean_inc(v_fvarId_1703_);
v___x_1704_ = lean_apply_9(v___y_1688_, v_fvarId_1703_, v___y_1685_, v___y_1684_, v___y_1680_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_, lean_box(0));
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref(v___x_1704_);
v___x_1706_ = lean_unsigned_to_nat(1u);
v___x_1707_ = lean_mk_empty_array_with_capacity(v___x_1706_);
v___x_1708_ = lean_array_push(v___x_1707_, v_a_1702_);
v___x_1709_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1, &l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___closed__1);
v___x_1710_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v___y_1682_, v___x_1708_, v_a_1705_, v___x_1709_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___f_1712_; lean_object* v___x_1713_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc_n(v_a_1711_, 2);
lean_dec_ref(v___x_1710_);
v___f_1712_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1712_, 0, v_a_1711_);
lean_closure_set(v___f_1712_, 1, v___x_1706_);
v___x_1713_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1682_, v_a_1692_, v___f_1712_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1725_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_a_1711_);
lean_ctor_set(v___x_1718_, 1, v_a_1714_);
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1718_);
v___x_1720_ = v___x_1667_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1722_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1720_);
v___x_1722_ = v___x_1716_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_a_1711_);
lean_del_object(v___x_1667_);
v_a_1726_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1713_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1713_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v_a_1692_);
lean_del_object(v___x_1667_);
v_a_1734_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1710_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1710_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v_a_1702_);
lean_dec(v_a_1692_);
lean_del_object(v___x_1667_);
v_a_1742_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1704_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1704_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_a_1692_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1685_);
lean_del_object(v___x_1667_);
v_a_1750_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1701_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1701_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
lean_dec(v_a_1698_);
v___x_1758_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4, &l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4_once, _init_l_Lean_Compiler_LCNF_Simp_specializePartialApp___closed__4);
v___x_1759_ = l_Lean_Compiler_LCNF_mkAuxFunDecl(v___x_1695_, v_a_1692_, v___x_1758_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1761_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref(v___x_1759_);
v___x_1761_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_1760_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v_fvarId_1763_; lean_object* v___x_1764_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref(v___x_1761_);
v_fvarId_1763_ = lean_ctor_get(v_a_1762_, 0);
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1681_);
lean_inc(v___y_1690_);
lean_inc_ref(v___y_1679_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1684_);
lean_inc_ref(v___y_1685_);
lean_inc(v_fvarId_1763_);
v___x_1764_ = lean_apply_9(v___y_1688_, v_fvarId_1763_, v___y_1685_, v___y_1684_, v___y_1680_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_, lean_box(0));
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref(v___x_1764_);
v___x_1766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_a_1762_);
v___x_1767_ = lean_unsigned_to_nat(1u);
v___x_1768_ = lean_mk_empty_array_with_capacity(v___x_1767_);
v___x_1769_ = lean_array_push(v___x_1768_, v___x_1766_);
v___x_1770_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v___x_1769_, v_a_1765_, v___y_1685_, v___y_1684_, v___y_1680_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v___x_1769_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1781_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1781_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1781_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v_a_1771_);
v___x_1776_ = v___x_1667_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
lean_object* v___x_1778_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1776_);
v___x_1778_ = v___x_1773_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_del_object(v___x_1667_);
v_a_1782_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1770_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1770_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v_a_1762_);
lean_dec_ref(v___y_1685_);
lean_del_object(v___x_1667_);
v_a_1790_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1764_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1764_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1685_);
lean_del_object(v___x_1667_);
v_a_1798_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1761_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1761_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1685_);
lean_del_object(v___x_1667_);
v_a_1806_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1759_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1759_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
lean_dec_ref(v___x_1695_);
lean_dec(v_a_1692_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1685_);
lean_del_object(v___x_1667_);
v_a_1814_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1697_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1697_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
else
{
lean_object* v___x_1822_; 
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v_fType_1671_);
v___x_1822_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___y_1682_, v_a_1692_, v___y_1686_, v___y_1679_, v___y_1690_, v___y_1681_, v___y_1678_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1833_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1825_ = v___x_1822_;
v_isShared_1826_ = v_isSharedCheck_1833_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1822_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1833_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v_a_1823_);
v___x_1828_ = v___x_1667_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1830_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1828_);
v___x_1830_ = v___x_1825_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
lean_del_object(v___x_1667_);
v_a_1834_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1822_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1822_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec(v_a_1692_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v_fType_1671_);
lean_del_object(v___x_1667_);
v_a_1842_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1693_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1693_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v_fType_1671_);
lean_del_object(v___x_1667_);
v_a_1850_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1691_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1691_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
v___jp_1858_:
{
if (v___x_1676_ == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
lean_inc_ref_n(v_args_1672_, 2);
lean_inc_ref(v_fType_1671_);
lean_inc_ref(v_value_1670_);
lean_inc_ref(v_params_1669_);
lean_dec(v_val_1665_);
v___x_1866_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_1675_);
v___x_1867_ = l_Array_toSubarray___redArg(v_args_1672_, v___x_1866_, v___x_1675_);
lean_inc_ref(v___x_1867_);
v___x_1868_ = l_Subarray_copy___redArg(v___x_1867_);
v___x_1869_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1669_, v_value_1670_, v___x_1868_, v___x_1676_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec_ref(v_params_1669_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; uint8_t v___x_1871_; lean_object* v___x_1872_; lean_object* v___f_1873_; lean_object* v___f_1874_; uint8_t v___x_1875_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref(v___x_1869_);
v___x_1871_ = 0;
v___x_1872_ = lean_box(v___x_1871_);
lean_inc_ref(v_k_1646_);
lean_inc(v_fvarId_1655_);
lean_inc(v___x_1675_);
v___f_1873_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__1___boxed), 16, 7);
lean_closure_set(v___f_1873_, 0, v___x_1675_);
lean_closure_set(v___f_1873_, 1, v___x_1674_);
lean_closure_set(v___f_1873_, 2, v_fvarId_1655_);
lean_closure_set(v___f_1873_, 3, v_k_1646_);
lean_closure_set(v___f_1873_, 4, v_args_1672_);
lean_closure_set(v___f_1873_, 5, v___x_1872_);
lean_closure_set(v___f_1873_, 6, v___x_1866_);
lean_inc_ref(v___y_1861_);
lean_inc_ref(v___y_1859_);
lean_inc_ref(v___f_1873_);
lean_inc(v___y_1860_);
v___f_1874_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___lam__2___boxed), 10, 4);
lean_closure_set(v___f_1874_, 0, v___y_1860_);
lean_closure_set(v___f_1874_, 1, v___f_1873_);
lean_closure_set(v___f_1874_, 2, v___y_1859_);
lean_closure_set(v___f_1874_, 3, v___y_1861_);
v___x_1875_ = l_Lean_Compiler_LCNF_Code_isReturnOf___redArg(v_k_1646_, v_fvarId_1655_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
if (v___x_1875_ == 0)
{
lean_dec(v___x_1675_);
v___y_1678_ = v___y_1865_;
v___y_1679_ = v___y_1862_;
v___y_1680_ = v___y_1861_;
v___y_1681_ = v___y_1864_;
v___y_1682_ = v___x_1871_;
v___y_1683_ = v_a_1870_;
v___y_1684_ = v___y_1860_;
v___y_1685_ = v___y_1859_;
v___y_1686_ = v___f_1874_;
v___y_1687_ = v___x_1867_;
v___y_1688_ = v___f_1873_;
v___y_1689_ = v___x_1866_;
v___y_1690_ = v___y_1863_;
goto v___jp_1677_;
}
else
{
uint8_t v___x_1876_; 
v___x_1876_ = lean_nat_dec_eq(v___x_1674_, v___x_1675_);
lean_dec(v___x_1675_);
if (v___x_1876_ == 0)
{
v___y_1678_ = v___y_1865_;
v___y_1679_ = v___y_1862_;
v___y_1680_ = v___y_1861_;
v___y_1681_ = v___y_1864_;
v___y_1682_ = v___x_1871_;
v___y_1683_ = v_a_1870_;
v___y_1684_ = v___y_1860_;
v___y_1685_ = v___y_1859_;
v___y_1686_ = v___f_1874_;
v___y_1687_ = v___x_1867_;
v___y_1688_ = v___f_1873_;
v___y_1689_ = v___x_1866_;
v___y_1690_ = v___y_1863_;
goto v___jp_1677_;
}
else
{
lean_object* v___x_1877_; 
lean_dec_ref(v___f_1874_);
lean_dec_ref(v___f_1873_);
lean_dec_ref(v___x_1867_);
lean_dec_ref(v_fType_1671_);
lean_del_object(v___x_1667_);
v___x_1877_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1860_, v___y_1865_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v___x_1878_; 
lean_dec_ref(v___x_1877_);
lean_inc_ref(v___y_1864_);
v___x_1878_ = l_Lean_Compiler_LCNF_Simp_simp(v_a_1870_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec_ref(v___y_1859_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1887_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1881_ = v___x_1878_;
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1878_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1883_; lean_object* v___x_1885_; 
v___x_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1883_, 0, v_a_1879_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v___x_1883_);
v___x_1885_ = v___x_1881_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1883_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
v_a_1888_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1878_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1878_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
lean_dec(v_a_1870_);
lean_dec_ref(v___y_1859_);
v_a_1896_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1877_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1877_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___y_1859_);
lean_dec(v___x_1675_);
lean_dec_ref(v_args_1672_);
lean_dec_ref(v_fType_1671_);
lean_del_object(v___x_1667_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
v_a_1904_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1869_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1869_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
else
{
lean_object* v___x_1912_; 
lean_dec(v___x_1675_);
lean_del_object(v___x_1667_);
v___x_1912_ = l_Lean_Compiler_LCNF_Simp_specializePartialApp(v_val_1665_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v_fvarId_1914_; lean_object* v___x_1915_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref(v___x_1912_);
v_fvarId_1914_ = lean_ctor_get(v_a_1913_, 0);
lean_inc(v_fvarId_1914_);
v___x_1915_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_1655_, v_fvarId_1914_, v___y_1860_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v___x_1916_; 
lean_dec_ref(v___x_1915_);
v___x_1916_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_1860_, v___y_1865_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
lean_dec_ref(v___x_1916_);
v___x_1917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1917_, 0, v_a_1913_);
lean_ctor_set(v___x_1917_, 1, v_k_1646_);
lean_inc_ref(v___y_1864_);
v___x_1918_ = l_Lean_Compiler_LCNF_Simp_simp(v___x_1917_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec_ref(v___y_1859_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1923_, 0, v_a_1919_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1918_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1918_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec(v_a_1913_);
lean_dec_ref(v___y_1859_);
lean_dec_ref(v_k_1646_);
v_a_1936_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1916_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1916_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec(v_a_1913_);
lean_dec_ref(v___y_1859_);
lean_dec_ref(v_k_1646_);
v_a_1944_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1915_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1915_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec_ref(v___y_1859_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
v_a_1952_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1912_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1912_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1981_; lean_object* v___x_1983_; 
lean_dec(v_a_1661_);
lean_del_object(v___x_1658_);
lean_dec(v_value_1656_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
v___x_1981_ = lean_box(0);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1981_);
v___x_1983_ = v___x_1663_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1981_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_del_object(v___x_1658_);
lean_dec(v_value_1656_);
lean_dec(v_fvarId_1655_);
lean_dec_ref(v_k_1646_);
v_a_1986_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1660_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1660_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0(void){
_start:
{
uint8_t v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = 0;
v___x_1998_ = l_Lean_Compiler_LCNF_instInhabitedParam_default(v___x_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(lean_object* v_cases_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v_typeName_2011_; lean_object* v_discr_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v_subst_2015_; uint8_t v___x_2016_; uint8_t v___x_2017_; lean_object* v___x_2018_; 
v_typeName_2011_ = lean_ctor_get(v_cases_1999_, 0);
v_discr_2012_ = lean_ctor_get(v_cases_1999_, 2);
v___x_2013_ = lean_st_ref_get(v_a_2006_);
lean_dec(v___x_2013_);
v___x_2014_ = lean_st_ref_get(v_a_2001_);
v_subst_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc_ref(v_subst_2015_);
lean_dec(v___x_2014_);
v___x_2016_ = 0;
v___x_2017_ = 0;
lean_inc(v_discr_2012_);
v___x_2018_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_2015_, v_discr_2012_, v___x_2017_);
lean_dec_ref(v_subst_2015_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_fvarId_2019_; lean_object* v___x_2020_; 
v_fvarId_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_fvarId_2019_);
lean_dec_ref(v___x_2018_);
v___x_2020_ = l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(v_fvarId_2019_, v_a_2002_, v_a_2004_, v_a_2006_);
lean_dec(v_fvarId_2019_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2250_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2250_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2250_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
if (lean_obj_tag(v_a_2021_) == 1)
{
lean_object* v_val_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2245_; 
v_val_2025_ = lean_ctor_get(v_a_2021_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v_a_2021_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2027_ = v_a_2021_;
v_isShared_2028_ = v_isSharedCheck_2245_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_val_2025_);
lean_dec(v_a_2021_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2245_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v_env_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2029_ = lean_st_ref_get(v_a_2006_);
v_env_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc_ref(v_env_2030_);
lean_dec(v___x_2029_);
v___x_2031_ = l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(v_val_2025_);
lean_inc(v___x_2031_);
v___x_2032_ = l_Lean_Environment_find_x3f(v_env_2030_, v___x_2031_, v___x_2017_);
if (lean_obj_tag(v___x_2032_) == 1)
{
lean_object* v_val_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2244_; 
v_val_2033_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2035_ = v___x_2032_;
v_isShared_2036_ = v_isSharedCheck_2244_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_val_2033_);
lean_dec(v___x_2032_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2244_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
if (lean_obj_tag(v_val_2033_) == 6)
{
lean_object* v_val_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2243_; 
v_val_2037_ = lean_ctor_get(v_val_2033_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_val_2033_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2039_ = v_val_2033_;
v_isShared_2040_ = v_isSharedCheck_2243_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_val_2037_);
lean_dec(v_val_2033_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2243_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v_induct_2041_; uint8_t v___x_2042_; 
v_induct_2041_ = lean_ctor_get(v_val_2037_, 1);
lean_inc(v_induct_2041_);
lean_dec_ref(v_val_2037_);
v___x_2042_ = lean_name_eq(v_typeName_2011_, v_induct_2041_);
lean_dec(v_induct_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; lean_object* v___x_2045_; 
lean_del_object(v___x_2039_);
lean_del_object(v___x_2035_);
lean_dec(v___x_2031_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
lean_dec_ref(v_cases_1999_);
v___x_2043_ = lean_box(0);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2043_);
v___x_2045_ = v___x_2023_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
else
{
lean_object* v___x_2047_; lean_object* v_fst_2048_; lean_object* v_snd_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2242_; 
lean_del_object(v___x_2023_);
v___x_2047_ = l_Lean_Compiler_LCNF_Cases_extractAlt_x21(v___x_2016_, v_cases_1999_, v___x_2031_);
v_fst_2048_ = lean_ctor_get(v___x_2047_, 0);
v_snd_2049_ = lean_ctor_get(v___x_2047_, 1);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2051_ = v___x_2047_;
v_isShared_2052_ = v_isSharedCheck_2242_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_snd_2049_);
lean_inc(v_fst_2048_);
lean_dec(v___x_2047_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2242_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2040_ == 0)
{
lean_ctor_set_tag(v___x_2039_, 4);
lean_ctor_set(v___x_2039_, 0, v_snd_2049_);
v___x_2054_ = v___x_2039_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_snd_2049_);
v___x_2054_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
lean_object* v___x_2055_; 
v___x_2055_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2016_, v___x_2054_, v_a_2004_, v_a_2006_);
lean_dec_ref(v___x_2054_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v___x_2056_; 
lean_dec_ref(v___x_2055_);
v___x_2056_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_2001_, v_a_2006_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_dec_ref(v___x_2056_);
if (lean_obj_tag(v_fst_2048_) == 0)
{
if (lean_obj_tag(v_val_2025_) == 0)
{
lean_object* v_params_2057_; lean_object* v_code_2058_; lean_object* v_val_2059_; lean_object* v_args_2060_; lean_object* v_lower_2062_; lean_object* v_upper_2063_; lean_object* v_numParams_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; 
lean_del_object(v___x_2051_);
lean_del_object(v___x_2027_);
v_params_2057_ = lean_ctor_get(v_fst_2048_, 1);
lean_inc_ref(v_params_2057_);
v_code_2058_ = lean_ctor_get(v_fst_2048_, 2);
lean_inc_ref(v_code_2058_);
lean_dec_ref(v_fst_2048_);
v_val_2059_ = lean_ctor_get(v_val_2025_, 0);
lean_inc_ref(v_val_2059_);
v_args_2060_ = lean_ctor_get(v_val_2025_, 1);
lean_inc_ref(v_args_2060_);
lean_dec_ref(v_val_2025_);
v_numParams_2106_ = lean_ctor_get(v_val_2059_, 3);
lean_inc(v_numParams_2106_);
lean_dec_ref(v_val_2059_);
v___x_2107_ = lean_unsigned_to_nat(0u);
v___x_2108_ = lean_array_get_size(v_args_2060_);
v___x_2109_ = lean_nat_dec_le(v_numParams_2106_, v___x_2107_);
if (v___x_2109_ == 0)
{
v_lower_2062_ = v_numParams_2106_;
v_upper_2063_ = v___x_2108_;
goto v___jp_2061_;
}
else
{
lean_dec(v_numParams_2106_);
v_lower_2062_ = v___x_2107_;
v_upper_2063_ = v___x_2108_;
goto v___jp_2061_;
}
v___jp_2061_:
{
lean_object* v___x_2064_; size_t v_sz_2065_; size_t v___x_2066_; lean_object* v___x_2067_; 
v___x_2064_ = l_Array_toSubarray___redArg(v_args_2060_, v_lower_2062_, v_upper_2063_);
v_sz_2065_ = lean_array_size(v_params_2057_);
v___x_2066_ = ((size_t)0ULL);
v___x_2067_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_params_2057_, v_sz_2065_, v___x_2066_, v___x_2064_, v_a_2001_, v_a_2006_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v___x_2068_; 
lean_dec_ref(v___x_2067_);
lean_inc_ref(v_a_2005_);
v___x_2068_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2058_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2070_; 
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_a_2069_);
lean_dec_ref(v___x_2068_);
v___x_2070_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2016_, v_params_2057_, v_a_2004_, v_a_2006_);
lean_dec_ref(v_params_2057_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2080_; 
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2080_ == 0)
{
lean_object* v_unused_2081_; 
v_unused_2081_ = lean_ctor_get(v___x_2070_, 0);
lean_dec(v_unused_2081_);
v___x_2072_ = v___x_2070_;
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
else
{
lean_dec(v___x_2070_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v_a_2069_);
v___x_2075_ = v___x_2035_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2069_);
v___x_2075_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2077_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 0, v___x_2075_);
v___x_2077_ = v___x_2072_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_dec(v_a_2069_);
lean_del_object(v___x_2035_);
v_a_2082_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2070_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2070_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
else
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2097_; 
lean_dec_ref(v_params_2057_);
lean_del_object(v___x_2035_);
v_a_2090_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2092_ = v___x_2068_;
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2068_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_a_2090_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec_ref(v_code_2058_);
lean_dec_ref(v_params_2057_);
lean_del_object(v___x_2035_);
v_a_2098_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2067_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2067_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
}
else
{
lean_object* v_params_2110_; lean_object* v_code_2111_; lean_object* v_n_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2203_; 
v_params_2110_ = lean_ctor_get(v_fst_2048_, 1);
lean_inc_ref(v_params_2110_);
v_code_2111_ = lean_ctor_get(v_fst_2048_, 2);
lean_inc_ref(v_code_2111_);
lean_dec_ref(v_fst_2048_);
v_n_2112_ = lean_ctor_get(v_val_2025_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_val_2025_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2114_ = v_val_2025_;
v_isShared_2115_ = v_isSharedCheck_2203_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_n_2112_);
lean_dec(v_val_2025_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2203_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v_zero_2116_; uint8_t v_isZero_2117_; 
v_zero_2116_ = lean_unsigned_to_nat(0u);
v_isZero_2117_ = lean_nat_dec_eq(v_n_2112_, v_zero_2116_);
if (v_isZero_2117_ == 1)
{
lean_object* v___x_2118_; 
lean_del_object(v___x_2114_);
lean_dec(v_n_2112_);
lean_dec_ref(v_params_2110_);
lean_del_object(v___x_2051_);
lean_del_object(v___x_2027_);
lean_inc_ref(v_a_2005_);
v___x_2118_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2111_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2129_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2129_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2129_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v_a_2119_);
v___x_2124_ = v___x_2035_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2126_; 
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2124_);
v___x_2126_ = v___x_2121_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_del_object(v___x_2035_);
v_a_2130_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2118_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2118_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
else
{
lean_object* v_one_2138_; lean_object* v_n_2139_; lean_object* v___x_2141_; 
v_one_2138_ = lean_unsigned_to_nat(1u);
v_n_2139_ = lean_nat_sub(v_n_2112_, v_one_2138_);
lean_dec(v_n_2112_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set_tag(v___x_2114_, 0);
lean_ctor_set(v___x_2114_, 0, v_n_2139_);
v___x_2141_ = v___x_2114_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_n_2139_);
v___x_2141_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2143_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2141_);
v___x_2143_ = v___x_2027_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v___x_2141_);
v___x_2143_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1, &l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f___closed__1);
v___x_2145_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_2016_, v___x_2143_, v___x_2144_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v_fvarId_2149_; lean_object* v_fvarId_2150_; lean_object* v___x_2151_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref(v___x_2145_);
v___x_2147_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0, &l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___closed__0);
v___x_2148_ = lean_array_get_borrowed(v___x_2147_, v_params_2110_, v_zero_2116_);
v_fvarId_2149_ = lean_ctor_get(v___x_2148_, 0);
v_fvarId_2150_ = lean_ctor_get(v_a_2146_, 0);
lean_inc(v_fvarId_2150_);
lean_inc(v_fvarId_2149_);
v___x_2151_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2149_, v_fvarId_2150_, v_a_2001_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2152_; 
lean_dec_ref(v___x_2151_);
lean_inc_ref(v_a_2005_);
v___x_2152_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2111_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; lean_object* v___x_2154_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref(v___x_2152_);
v___x_2154_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2016_, v_params_2110_, v_a_2004_, v_a_2006_);
lean_dec_ref(v_params_2110_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2167_; 
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2167_ == 0)
{
lean_object* v_unused_2168_; 
v_unused_2168_ = lean_ctor_get(v___x_2154_, 0);
lean_dec(v_unused_2168_);
v___x_2156_ = v___x_2154_;
v_isShared_2157_ = v_isSharedCheck_2167_;
goto v_resetjp_2155_;
}
else
{
lean_dec(v___x_2154_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2167_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 1, v_a_2153_);
lean_ctor_set(v___x_2051_, 0, v_a_2146_);
v___x_2159_ = v___x_2051_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2146_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_a_2153_);
v___x_2159_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2161_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2159_);
v___x_2161_ = v___x_2035_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
lean_object* v___x_2163_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2161_);
v___x_2163_ = v___x_2156_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2161_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec(v_a_2153_);
lean_dec(v_a_2146_);
lean_del_object(v___x_2051_);
lean_del_object(v___x_2035_);
v_a_2169_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2154_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2154_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec(v_a_2146_);
lean_dec_ref(v_params_2110_);
lean_del_object(v___x_2051_);
lean_del_object(v___x_2035_);
v_a_2177_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2152_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2152_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
lean_dec(v_a_2146_);
lean_dec_ref(v_code_2111_);
lean_dec_ref(v_params_2110_);
lean_del_object(v___x_2051_);
lean_del_object(v___x_2035_);
v_a_2185_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2151_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2151_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
lean_dec_ref(v_code_2111_);
lean_dec_ref(v_params_2110_);
lean_del_object(v___x_2051_);
lean_del_object(v___x_2035_);
v_a_2193_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2145_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2145_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
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
lean_object* v_code_2204_; lean_object* v___x_2205_; 
lean_del_object(v___x_2051_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
v_code_2204_ = lean_ctor_get(v_fst_2048_, 0);
lean_inc_ref(v_code_2204_);
lean_dec_ref(v_fst_2048_);
lean_inc_ref(v_a_2005_);
v___x_2205_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2204_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2216_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2216_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2216_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v_a_2206_);
v___x_2211_ = v___x_2035_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2213_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 0, v___x_2211_);
v___x_2213_ = v___x_2208_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
lean_del_object(v___x_2035_);
v_a_2217_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2205_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2205_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
}
else
{
lean_object* v_a_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2232_; 
lean_del_object(v___x_2051_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2035_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
v_a_2225_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2227_ = v___x_2056_;
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_a_2225_);
lean_dec(v___x_2056_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v___x_2230_; 
if (v_isShared_2228_ == 0)
{
v___x_2230_ = v___x_2227_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_a_2225_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_del_object(v___x_2051_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2035_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
v_a_2233_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2055_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2055_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
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
lean_del_object(v___x_2035_);
lean_dec(v_val_2033_);
lean_dec(v___x_2031_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
lean_del_object(v___x_2023_);
lean_dec_ref(v_cases_1999_);
goto v___jp_2008_;
}
}
}
else
{
lean_dec(v___x_2032_);
lean_dec(v___x_2031_);
lean_del_object(v___x_2027_);
lean_dec(v_val_2025_);
lean_del_object(v___x_2023_);
lean_dec_ref(v_cases_1999_);
goto v___jp_2008_;
}
}
}
else
{
lean_object* v___x_2246_; lean_object* v___x_2248_; 
lean_dec(v_a_2021_);
lean_dec_ref(v_cases_1999_);
v___x_2246_ = lean_box(0);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2246_);
v___x_2248_ = v___x_2023_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec_ref(v_cases_1999_);
v_a_2251_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2020_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2020_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
lean_object* v___x_2259_; 
lean_dec_ref(v_cases_1999_);
v___x_2259_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_2016_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2268_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; lean_object* v___x_2266_; 
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v_a_2260_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2264_);
v___x_2266_ = v___x_2262_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
v_a_2269_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2259_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2259_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
v___jp_2008_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_box(0);
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2009_);
return v___x_2010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(lean_object* v_fvarId_2277_, lean_object* v_i_2278_, lean_object* v_as_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
v___x_2288_ = lean_array_get_size(v_as_2279_);
v___x_2289_ = lean_nat_dec_lt(v_i_2278_, v___x_2288_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; 
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v___x_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2290_, 0, v_as_2279_);
return v___x_2290_;
}
else
{
lean_object* v_a_2291_; lean_object* v_a_2293_; 
v_a_2291_ = lean_array_fget_borrowed(v_as_2279_, v_i_2278_);
if (lean_obj_tag(v_a_2291_) == 0)
{
lean_object* v_ctorName_2304_; lean_object* v_params_2305_; lean_object* v_code_2306_; uint8_t v___x_2329_; uint8_t v_a_2331_; lean_object* v___x_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v_ctorName_2304_ = lean_ctor_get(v_a_2291_, 0);
v_params_2305_ = lean_ctor_get(v_a_2291_, 1);
v_code_2306_ = lean_ctor_get(v_a_2291_, 2);
v___x_2329_ = 0;
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = lean_array_get_size(v_params_2305_);
v___x_2364_ = lean_nat_dec_lt(v___x_2362_, v___x_2363_);
if (v___x_2364_ == 0)
{
v_a_2331_ = v___x_2364_;
goto v___jp_2330_;
}
else
{
if (v___x_2364_ == 0)
{
v_a_2331_ = v___x_2364_;
goto v___jp_2330_;
}
else
{
size_t v___x_2365_; size_t v___x_2366_; lean_object* v___x_2367_; 
v___x_2365_ = ((size_t)0ULL);
v___x_2366_ = lean_usize_of_nat(v___x_2363_);
v___x_2367_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_params_2305_, v___x_2365_, v___x_2366_, v___y_2286_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; uint8_t v___x_2369_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref(v___x_2367_);
v___x_2369_ = lean_unbox(v_a_2368_);
lean_dec(v_a_2368_);
v_a_2331_ = v___x_2369_;
goto v___jp_2330_;
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2370_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2367_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2367_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
v___jp_2307_:
{
lean_object* v___x_2308_; 
lean_inc_ref(v_params_2305_);
lean_inc(v_ctorName_2304_);
lean_inc(v_fvarId_2277_);
v___x_2308_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_fvarId_2277_, v_ctorName_2304_, v_params_2305_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2310_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref(v___x_2308_);
lean_inc_ref(v___y_2285_);
lean_inc_ref(v_code_2306_);
v___x_2310_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2306_, v___y_2280_, v___y_2281_, v_a_2309_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
lean_dec(v_a_2309_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2312_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2311_);
lean_dec_ref(v___x_2310_);
lean_inc_ref(v_a_2291_);
v___x_2312_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2291_, v_a_2311_);
v_a_2293_ = v___x_2312_;
goto v___jp_2292_;
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2313_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2310_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2310_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2321_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2308_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2308_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
v___jp_2330_:
{
if (lean_obj_tag(v_code_2306_) == 6)
{
goto v___jp_2307_;
}
else
{
if (v_a_2331_ == 0)
{
goto v___jp_2307_;
}
else
{
lean_object* v___x_2332_; 
lean_inc_ref(v_code_2306_);
v___x_2332_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_2329_, v_code_2306_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2334_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref(v___x_2332_);
v___x_2334_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_2329_, v_code_2306_, v___y_2284_, v___y_2286_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v___x_2335_; 
lean_dec_ref(v___x_2334_);
v___x_2335_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2281_, v___y_2286_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
lean_dec_ref(v___x_2335_);
v___x_2336_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2333_);
lean_inc_ref(v_a_2291_);
v___x_2337_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2291_, v___x_2336_);
v_a_2293_ = v___x_2337_;
goto v___jp_2292_;
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec(v_a_2333_);
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2338_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2335_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2335_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec(v_a_2333_);
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2346_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2334_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2334_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2354_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2332_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2332_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
}
}
}
else
{
lean_object* v_code_2378_; lean_object* v___x_2379_; 
v_code_2378_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_ref(v___y_2285_);
lean_inc_ref(v_code_2378_);
v___x_2379_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_2378_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v___x_2381_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref(v___x_2379_);
lean_inc_ref(v_a_2291_);
v___x_2381_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2291_, v_a_2380_);
v_a_2293_ = v___x_2381_;
goto v___jp_2292_;
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec_ref(v_as_2279_);
lean_dec(v_i_2278_);
lean_dec(v_fvarId_2277_);
v_a_2382_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2379_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2379_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
v___jp_2292_:
{
size_t v___x_2294_; size_t v___x_2295_; uint8_t v___x_2296_; 
v___x_2294_ = lean_ptr_addr(v_a_2291_);
v___x_2295_ = lean_ptr_addr(v_a_2293_);
v___x_2296_ = lean_usize_dec_eq(v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2297_ = lean_unsigned_to_nat(1u);
v___x_2298_ = lean_nat_add(v_i_2278_, v___x_2297_);
v___x_2299_ = lean_array_fset(v_as_2279_, v_i_2278_, v_a_2293_);
lean_dec(v_i_2278_);
v_i_2278_ = v___x_2298_;
v_as_2279_ = v___x_2299_;
goto _start;
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_a_2293_);
v___x_2301_ = lean_unsigned_to_nat(1u);
v___x_2302_ = lean_nat_add(v_i_2278_, v___x_2301_);
lean_dec(v_i_2278_);
v_i_2278_ = v___x_2302_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simp___closed__4(void){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_mk_string_unchecked("LCNF simp", 9, 9);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object* v_code_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v___y_2401_; lean_object* v___y_2402_; uint8_t v___y_2403_; lean_object* v___y_2408_; lean_object* v___y_2409_; uint8_t v___y_2410_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2437_; uint8_t v___y_2438_; lean_object* v_decl_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2488_; uint8_t v___y_2489_; lean_object* v_decl_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v_decl_2509_; lean_object* v_k_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2587_; lean_object* v___y_2588_; uint8_t v___y_2589_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; uint8_t v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v_decl_2783_; lean_object* v_fvarId_2784_; lean_object* v_type_2785_; lean_object* v_value_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; uint8_t v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2876_; lean_object* v___y_2877_; uint8_t v___y_2878_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2960_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; uint8_t v___y_2973_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v_fileName_3290_; lean_object* v_fileMap_3291_; lean_object* v_options_3292_; lean_object* v_currRecDepth_3293_; lean_object* v_maxRecDepth_3294_; lean_object* v_ref_3295_; lean_object* v_currNamespace_3296_; lean_object* v_openDecls_3297_; lean_object* v_initHeartbeats_3298_; lean_object* v_maxHeartbeats_3299_; lean_object* v_quotContext_3300_; lean_object* v_currMacroScope_3301_; uint8_t v_diag_3302_; lean_object* v_cancelTk_x3f_3303_; uint8_t v_suppressElabErrors_3304_; lean_object* v_inheritedTraceOptions_3305_; lean_object* v___x_3336_; uint8_t v___x_3337_; 
v_fileName_3290_ = lean_ctor_get(v_a_2397_, 0);
v_fileMap_3291_ = lean_ctor_get(v_a_2397_, 1);
v_options_3292_ = lean_ctor_get(v_a_2397_, 2);
v_currRecDepth_3293_ = lean_ctor_get(v_a_2397_, 3);
v_maxRecDepth_3294_ = lean_ctor_get(v_a_2397_, 4);
v_ref_3295_ = lean_ctor_get(v_a_2397_, 5);
v_currNamespace_3296_ = lean_ctor_get(v_a_2397_, 6);
v_openDecls_3297_ = lean_ctor_get(v_a_2397_, 7);
v_initHeartbeats_3298_ = lean_ctor_get(v_a_2397_, 8);
v_maxHeartbeats_3299_ = lean_ctor_get(v_a_2397_, 9);
v_quotContext_3300_ = lean_ctor_get(v_a_2397_, 10);
v_currMacroScope_3301_ = lean_ctor_get(v_a_2397_, 11);
v_diag_3302_ = lean_ctor_get_uint8(v_a_2397_, sizeof(void*)*14);
v_cancelTk_x3f_3303_ = lean_ctor_get(v_a_2397_, 12);
v_suppressElabErrors_3304_ = lean_ctor_get_uint8(v_a_2397_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3305_ = lean_ctor_get(v_a_2397_, 13);
v___x_3336_ = lean_unsigned_to_nat(0u);
v___x_3337_ = lean_nat_dec_eq(v_maxRecDepth_3294_, v___x_3336_);
if (v___x_3337_ == 0)
{
uint8_t v___x_3338_; 
v___x_3338_ = lean_nat_dec_eq(v_currRecDepth_3293_, v_maxRecDepth_3294_);
if (v___x_3338_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_3305_);
lean_inc(v_cancelTk_x3f_3303_);
lean_inc(v_currMacroScope_3301_);
lean_inc(v_quotContext_3300_);
lean_inc(v_maxHeartbeats_3299_);
lean_inc(v_initHeartbeats_3298_);
lean_inc(v_openDecls_3297_);
lean_inc(v_currNamespace_3296_);
lean_inc(v_ref_3295_);
lean_inc(v_maxRecDepth_3294_);
lean_inc(v_currRecDepth_3293_);
lean_inc_ref(v_options_3292_);
lean_inc_ref(v_fileMap_3291_);
lean_inc_ref(v_fileName_3290_);
lean_dec_ref(v_a_2397_);
goto v___jp_3306_;
}
else
{
lean_object* v___x_3339_; 
lean_dec_ref(v_code_2391_);
v___x_3339_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_box(0), v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
lean_dec_ref(v_a_2397_);
return v___x_3339_;
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_3305_);
lean_inc(v_cancelTk_x3f_3303_);
lean_inc(v_currMacroScope_3301_);
lean_inc(v_quotContext_3300_);
lean_inc(v_maxHeartbeats_3299_);
lean_inc(v_initHeartbeats_3298_);
lean_inc(v_openDecls_3297_);
lean_inc(v_currNamespace_3296_);
lean_inc(v_ref_3295_);
lean_inc(v_maxRecDepth_3294_);
lean_inc(v_currRecDepth_3293_);
lean_inc_ref(v_options_3292_);
lean_inc_ref(v_fileMap_3291_);
lean_inc_ref(v_fileName_3290_);
lean_dec_ref(v_a_2397_);
goto v___jp_3306_;
}
v___jp_2400_:
{
if (v___y_2403_ == 0)
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
lean_dec_ref(v_code_2391_);
v___x_2404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2404_, 0, v___y_2401_);
lean_ctor_set(v___x_2404_, 1, v___y_2402_);
v___x_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2404_);
return v___x_2405_;
}
else
{
lean_object* v___x_2406_; 
lean_dec_ref(v___y_2402_);
lean_dec_ref(v___y_2401_);
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_code_2391_);
return v___x_2406_;
}
}
v___jp_2407_:
{
if (v___y_2410_ == 0)
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
lean_dec_ref(v_code_2391_);
v___x_2411_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___y_2408_);
lean_ctor_set(v___x_2411_, 1, v___y_2409_);
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
return v___x_2412_;
}
else
{
lean_object* v___x_2413_; 
lean_dec_ref(v___y_2409_);
lean_dec_ref(v___y_2408_);
v___x_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2413_, 0, v_code_2391_);
return v___x_2413_;
}
}
v___jp_2414_:
{
switch(lean_obj_tag(v_code_2391_))
{
case 1:
{
lean_object* v_decl_2417_; lean_object* v_k_2418_; size_t v___x_2419_; size_t v___x_2420_; uint8_t v___x_2421_; 
v_decl_2417_ = lean_ctor_get(v_code_2391_, 0);
v_k_2418_ = lean_ctor_get(v_code_2391_, 1);
v___x_2419_ = lean_ptr_addr(v_k_2418_);
v___x_2420_ = lean_ptr_addr(v___y_2416_);
v___x_2421_ = lean_usize_dec_eq(v___x_2419_, v___x_2420_);
if (v___x_2421_ == 0)
{
v___y_2401_ = v___y_2415_;
v___y_2402_ = v___y_2416_;
v___y_2403_ = v___x_2421_;
goto v___jp_2400_;
}
else
{
size_t v___x_2422_; size_t v___x_2423_; uint8_t v___x_2424_; 
v___x_2422_ = lean_ptr_addr(v_decl_2417_);
v___x_2423_ = lean_ptr_addr(v___y_2415_);
v___x_2424_ = lean_usize_dec_eq(v___x_2422_, v___x_2423_);
v___y_2401_ = v___y_2415_;
v___y_2402_ = v___y_2416_;
v___y_2403_ = v___x_2424_;
goto v___jp_2400_;
}
}
case 2:
{
lean_object* v_decl_2425_; lean_object* v_k_2426_; size_t v___x_2427_; size_t v___x_2428_; uint8_t v___x_2429_; 
v_decl_2425_ = lean_ctor_get(v_code_2391_, 0);
v_k_2426_ = lean_ctor_get(v_code_2391_, 1);
v___x_2427_ = lean_ptr_addr(v_k_2426_);
v___x_2428_ = lean_ptr_addr(v___y_2416_);
v___x_2429_ = lean_usize_dec_eq(v___x_2427_, v___x_2428_);
if (v___x_2429_ == 0)
{
v___y_2408_ = v___y_2415_;
v___y_2409_ = v___y_2416_;
v___y_2410_ = v___x_2429_;
goto v___jp_2407_;
}
else
{
size_t v___x_2430_; size_t v___x_2431_; uint8_t v___x_2432_; 
v___x_2430_ = lean_ptr_addr(v_decl_2425_);
v___x_2431_ = lean_ptr_addr(v___y_2415_);
v___x_2432_ = lean_usize_dec_eq(v___x_2430_, v___x_2431_);
v___y_2408_ = v___y_2415_;
v___y_2409_ = v___y_2416_;
v___y_2410_ = v___x_2432_;
goto v___jp_2407_;
}
}
default: 
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
lean_dec_ref(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec_ref(v_code_2391_);
v___x_2433_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__3, &l_Lean_Compiler_LCNF_Simp_simp___closed__3_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__3);
v___x_2434_ = l_panic___at___00Lean_Compiler_LCNF_Simp_simp_spec__3(v___x_2433_);
v___x_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
return v___x_2435_;
}
}
}
v___jp_2436_:
{
lean_object* v___x_2447_; 
lean_inc_ref(v___y_2445_);
v___x_2447_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2437_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v_a_2448_; lean_object* v_fvarId_2449_; lean_object* v___x_2450_; 
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_a_2448_);
lean_dec_ref(v___x_2447_);
v_fvarId_2449_ = lean_ctor_get(v_decl_2439_, 0);
v___x_2450_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2449_, v___y_2441_, v___y_2446_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; uint8_t v___x_2452_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
lean_dec_ref(v___x_2450_);
v___x_2452_ = lean_unbox(v_a_2451_);
lean_dec(v_a_2451_);
if (v___x_2452_ == 0)
{
lean_object* v___x_2453_; 
lean_dec_ref(v___y_2445_);
lean_dec_ref(v_code_2391_);
v___x_2453_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2439_, v___y_2441_, v___y_2444_, v___y_2446_);
lean_dec_ref(v_decl_2439_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2460_; 
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2460_ == 0)
{
lean_object* v_unused_2461_; 
v_unused_2461_ = lean_ctor_get(v___x_2453_, 0);
lean_dec(v_unused_2461_);
v___x_2455_ = v___x_2453_;
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
else
{
lean_dec(v___x_2453_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2458_; 
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v_a_2448_);
v___x_2458_ = v___x_2455_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_a_2448_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec(v_a_2448_);
v_a_2462_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2453_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2453_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
if (v___y_2438_ == 0)
{
lean_dec_ref(v___y_2445_);
v___y_2415_ = v_decl_2439_;
v___y_2416_ = v_a_2448_;
goto v___jp_2414_;
}
else
{
lean_object* v___x_2470_; 
lean_inc_ref(v_decl_2439_);
v___x_2470_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec_ref(v___y_2445_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_dec_ref(v___x_2470_);
v___y_2415_ = v_decl_2439_;
v___y_2416_ = v_a_2448_;
goto v___jp_2414_;
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v_a_2448_);
lean_dec_ref(v_decl_2439_);
lean_dec_ref(v_code_2391_);
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2470_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2470_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec(v_a_2448_);
lean_dec_ref(v___y_2445_);
lean_dec_ref(v_decl_2439_);
lean_dec_ref(v_code_2391_);
v_a_2479_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2450_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2450_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
else
{
lean_dec_ref(v___y_2445_);
lean_dec_ref(v_decl_2439_);
lean_dec_ref(v_code_2391_);
return v___x_2447_;
}
}
v___jp_2487_:
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref(v___x_2498_);
v___y_2437_ = v___y_2488_;
v___y_2438_ = v___y_2489_;
v_decl_2439_ = v_a_2499_;
v___y_2440_ = v___y_2491_;
v___y_2441_ = v___y_2492_;
v___y_2442_ = v___y_2493_;
v___y_2443_ = v___y_2494_;
v___y_2444_ = v___y_2495_;
v___y_2445_ = v___y_2496_;
v___y_2446_ = v___y_2497_;
goto v___jp_2436_;
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec_ref(v___y_2496_);
lean_dec_ref(v___y_2488_);
lean_dec_ref(v_code_2391_);
v_a_2500_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2498_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2498_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
v___jp_2508_:
{
lean_object* v_fvarId_2518_; lean_object* v_params_2519_; lean_object* v_type_2520_; lean_object* v___x_2521_; 
v_fvarId_2518_ = lean_ctor_get(v_decl_2509_, 0);
v_params_2519_ = lean_ctor_get(v_decl_2509_, 2);
v_type_2520_ = lean_ctor_get(v_decl_2509_, 3);
v___x_2521_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_2518_, v___y_2512_, v___y_2517_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; uint8_t v___x_2523_; uint8_t v___x_2524_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref(v___x_2521_);
v___x_2523_ = 0;
v___x_2524_ = lean_unbox(v_a_2522_);
if (v___x_2524_ == 0)
{
uint8_t v___x_2525_; 
v___x_2525_ = l_Lean_Compiler_LCNF_Code_isFun___redArg(v_code_2391_);
if (v___x_2525_ == 0)
{
uint8_t v___x_2526_; 
v___x_2526_ = lean_unbox(v_a_2522_);
lean_dec(v_a_2522_);
v___y_2488_ = v_k_2510_;
v___y_2489_ = v___x_2526_;
v_decl_2490_ = v_decl_2509_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
v___y_2496_ = v___y_2516_;
v___y_2497_ = v___y_2517_;
goto v___jp_2487_;
}
else
{
uint8_t v___x_2527_; 
lean_inc_ref(v_type_2520_);
v___x_2527_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_2520_, v_params_2519_);
if (v___x_2527_ == 0)
{
uint8_t v___x_2528_; 
v___x_2528_ = lean_unbox(v_a_2522_);
lean_dec(v_a_2522_);
v___y_2488_ = v_k_2510_;
v___y_2489_ = v___x_2528_;
v_decl_2490_ = v_decl_2509_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
v___y_2496_ = v___y_2516_;
v___y_2497_ = v___y_2517_;
goto v___jp_2487_;
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v_subst_2531_; uint8_t v___x_2532_; lean_object* v___x_2533_; 
v___x_2529_ = lean_st_ref_get(v___y_2517_);
lean_dec(v___x_2529_);
v___x_2530_ = lean_st_ref_get(v___y_2512_);
v_subst_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc_ref(v_subst_2531_);
lean_dec(v___x_2530_);
v___x_2532_ = lean_unbox(v_a_2522_);
v___x_2533_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2523_, v___x_2532_, v_decl_2509_, v_subst_2531_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
lean_dec_ref(v_subst_2531_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2535_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref(v___x_2533_);
v___x_2535_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_a_2534_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2537_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref(v___x_2535_);
v___x_2537_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2512_, v___y_2517_);
if (lean_obj_tag(v___x_2537_) == 0)
{
uint8_t v___x_2538_; 
lean_dec_ref(v___x_2537_);
v___x_2538_ = lean_unbox(v_a_2522_);
lean_dec(v_a_2522_);
v___y_2488_ = v_k_2510_;
v___y_2489_ = v___x_2538_;
v_decl_2490_ = v_a_2536_;
v___y_2491_ = v___y_2511_;
v___y_2492_ = v___y_2512_;
v___y_2493_ = v___y_2513_;
v___y_2494_ = v___y_2514_;
v___y_2495_ = v___y_2515_;
v___y_2496_ = v___y_2516_;
v___y_2497_ = v___y_2517_;
goto v___jp_2487_;
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
lean_dec(v_a_2536_);
lean_dec(v_a_2522_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v_k_2510_);
lean_dec_ref(v_code_2391_);
v_a_2539_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2537_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2537_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
lean_dec(v_a_2522_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v_k_2510_);
lean_dec_ref(v_code_2391_);
v_a_2547_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2535_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2535_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
lean_dec(v_a_2522_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v_k_2510_);
lean_dec_ref(v_code_2391_);
v_a_2555_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v___x_2533_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2533_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
}
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v_subst_2565_; uint8_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2563_ = lean_st_ref_get(v___y_2517_);
lean_dec(v___x_2563_);
v___x_2564_ = lean_st_ref_get(v___y_2512_);
v_subst_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc_ref(v_subst_2565_);
lean_dec(v___x_2564_);
v___x_2566_ = 0;
v___x_2567_ = l_Lean_Compiler_LCNF_normFunDeclImp(v___x_2523_, v___x_2566_, v_decl_2509_, v_subst_2565_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
lean_dec_ref(v_subst_2565_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; uint8_t v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___x_2567_);
v___x_2569_ = lean_unbox(v_a_2522_);
lean_dec(v_a_2522_);
v___y_2437_ = v_k_2510_;
v___y_2438_ = v___x_2569_;
v_decl_2439_ = v_a_2568_;
v___y_2440_ = v___y_2511_;
v___y_2441_ = v___y_2512_;
v___y_2442_ = v___y_2513_;
v___y_2443_ = v___y_2514_;
v___y_2444_ = v___y_2515_;
v___y_2445_ = v___y_2516_;
v___y_2446_ = v___y_2517_;
goto v___jp_2436_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec(v_a_2522_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v_k_2510_);
lean_dec_ref(v_code_2391_);
v_a_2570_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2567_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2567_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_dec_ref(v___y_2516_);
lean_dec_ref(v_k_2510_);
lean_dec_ref(v_decl_2509_);
lean_dec_ref(v_code_2391_);
v_a_2578_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2521_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2521_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
v___jp_2586_:
{
if (v___y_2589_ == 0)
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
lean_dec_ref(v_code_2391_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___y_2588_);
lean_ctor_set(v___x_2590_, 1, v___y_2587_);
v___x_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
return v___x_2591_;
}
else
{
lean_object* v___x_2592_; 
lean_dec_ref(v___y_2588_);
lean_dec_ref(v___y_2587_);
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v_code_2391_);
return v___x_2592_;
}
}
v___jp_2593_:
{
lean_object* v___x_2604_; 
lean_inc_ref(v___y_2596_);
v___x_2604_ = l_Lean_Compiler_LCNF_Simp_ConstantFold_foldConstants(v___y_2596_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref(v___x_2604_);
if (lean_obj_tag(v_a_2605_) == 1)
{
lean_object* v_val_2606_; lean_object* v___x_2607_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_val_2606_ = lean_ctor_get(v_a_2605_, 0);
lean_inc(v_val_2606_);
lean_dec_ref(v_a_2605_);
v___x_2607_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2600_, v___y_2595_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v___x_2608_; 
lean_dec_ref(v___x_2607_);
lean_inc_ref(v___y_2598_);
v___x_2608_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2599_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2610_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref(v___x_2608_);
v___x_2610_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_val_2606_, v_a_2609_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
lean_dec_ref(v___y_2598_);
lean_dec(v_val_2606_);
return v___x_2610_;
}
else
{
lean_dec(v_val_2606_);
lean_dec_ref(v___y_2598_);
return v___x_2608_;
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_val_2606_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
v_a_2611_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2607_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2607_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v___x_2619_; 
lean_dec(v_a_2605_);
lean_inc_ref(v___y_2596_);
v___x_2619_ = l_Lean_Compiler_LCNF_Simp_etaPolyApp_x3f(v___y_2596_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref(v___x_2619_);
if (lean_obj_tag(v_a_2620_) == 1)
{
lean_object* v_val_2621_; lean_object* v___x_2622_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_val_2621_ = lean_ctor_get(v_a_2620_, 0);
lean_inc(v_val_2621_);
lean_dec_ref(v_a_2620_);
v___x_2622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2622_, 0, v_val_2621_);
lean_ctor_set(v___x_2622_, 1, v___y_2599_);
v_code_2391_ = v___x_2622_;
v_a_2392_ = v___y_2594_;
v_a_2393_ = v___y_2600_;
v_a_2394_ = v___y_2597_;
v_a_2395_ = v___y_2601_;
v_a_2396_ = v___y_2603_;
v_a_2397_ = v___y_2598_;
v_a_2398_ = v___y_2595_;
goto _start;
}
else
{
lean_object* v_fvarId_2624_; lean_object* v_value_2625_; lean_object* v___x_2626_; 
lean_dec(v_a_2620_);
v_fvarId_2624_ = lean_ctor_get(v___y_2596_, 0);
v_value_2625_ = lean_ctor_get(v___y_2596_, 3);
v___x_2626_ = l_Lean_Compiler_LCNF_Simp_elimVar_x3f___redArg(v_value_2625_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref(v___x_2626_);
if (lean_obj_tag(v_a_2627_) == 1)
{
lean_object* v_val_2628_; lean_object* v___x_2629_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_code_2391_);
v_val_2628_ = lean_ctor_get(v_a_2627_, 0);
lean_inc(v_val_2628_);
lean_dec_ref(v_a_2627_);
lean_inc(v_fvarId_2624_);
v___x_2629_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2624_, v_val_2628_, v___y_2600_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v___x_2630_; 
lean_dec_ref(v___x_2629_);
v___x_2630_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2596_, v___y_2600_, v___y_2603_, v___y_2595_);
lean_dec_ref(v___y_2596_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_dec_ref(v___x_2630_);
v_code_2391_ = v___y_2599_;
v_a_2392_ = v___y_2594_;
v_a_2393_ = v___y_2600_;
v_a_2394_ = v___y_2597_;
v_a_2395_ = v___y_2601_;
v_a_2396_ = v___y_2603_;
v_a_2397_ = v___y_2598_;
v_a_2398_ = v___y_2595_;
goto _start;
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
v_a_2632_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2630_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2630_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
v_a_2640_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2629_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2629_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
else
{
lean_object* v___x_2648_; 
lean_dec(v_a_2627_);
lean_inc_ref(v___y_2599_);
lean_inc_ref(v___y_2596_);
v___x_2648_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v___y_2596_, v___y_2599_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref(v___x_2648_);
if (lean_obj_tag(v_a_2649_) == 1)
{
lean_object* v_val_2650_; lean_object* v___x_2651_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v_code_2391_);
v_val_2650_ = lean_ctor_get(v_a_2649_, 0);
lean_inc(v_val_2650_);
lean_dec_ref(v_a_2649_);
v___x_2651_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2596_, v___y_2600_, v___y_2603_, v___y_2595_);
lean_dec_ref(v___y_2596_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2658_ == 0)
{
lean_object* v_unused_2659_; 
v_unused_2659_ = lean_ctor_get(v___x_2651_, 0);
lean_dec(v_unused_2659_);
v___x_2653_ = v___x_2651_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_dec(v___x_2651_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v_val_2650_);
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_val_2650_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec(v_val_2650_);
v_a_2660_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2651_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2651_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
else
{
lean_object* v___x_2668_; 
lean_dec(v_a_2649_);
lean_inc(v_value_2625_);
v___x_2668_ = l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(v_value_2625_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; 
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref(v___x_2668_);
if (lean_obj_tag(v_a_2669_) == 1)
{
lean_object* v_val_2670_; lean_object* v_fst_2671_; lean_object* v_snd_2672_; lean_object* v___x_2673_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_code_2391_);
v_val_2670_ = lean_ctor_get(v_a_2669_, 0);
lean_inc(v_val_2670_);
lean_dec_ref(v_a_2669_);
v_fst_2671_ = lean_ctor_get(v_val_2670_, 0);
lean_inc(v_fst_2671_);
v_snd_2672_ = lean_ctor_get(v_val_2670_, 1);
lean_inc(v_snd_2672_);
lean_dec(v_val_2670_);
lean_inc(v_fvarId_2624_);
v___x_2673_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2624_, v_snd_2672_, v___y_2600_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v___x_2674_; 
lean_dec_ref(v___x_2673_);
v___x_2674_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2596_, v___y_2600_, v___y_2603_, v___y_2595_);
lean_dec_ref(v___y_2596_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v___x_2675_; 
lean_dec_ref(v___x_2674_);
lean_inc_ref(v___y_2598_);
v___x_2675_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2599_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v_a_2676_; lean_object* v___x_2677_; 
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_a_2676_);
lean_dec_ref(v___x_2675_);
v___x_2677_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_fst_2671_, v_a_2676_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
lean_dec_ref(v___y_2598_);
lean_dec(v_fst_2671_);
return v___x_2677_;
}
else
{
lean_dec(v_fst_2671_);
lean_dec_ref(v___y_2598_);
return v___x_2675_;
}
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec(v_fst_2671_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
v_a_2678_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___x_2674_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2674_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec(v_fst_2671_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
v_a_2686_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2673_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2673_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_object* v___x_2694_; 
lean_dec(v_a_2669_);
lean_inc_ref(v___y_2598_);
lean_inc_ref(v___y_2599_);
v___x_2694_ = l_Lean_Compiler_LCNF_Simp_simp(v___y_2599_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref(v___x_2694_);
v___x_2696_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_2624_, v___y_2600_, v___y_2595_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; uint8_t v___x_2698_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref(v___x_2696_);
v___x_2698_ = lean_unbox(v_a_2697_);
lean_dec(v_a_2697_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v_code_2391_);
v___x_2699_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v___y_2596_, v___y_2600_, v___y_2603_, v___y_2595_);
lean_dec_ref(v___y_2596_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2706_ == 0)
{
lean_object* v_unused_2707_; 
v_unused_2707_ = lean_ctor_get(v___x_2699_, 0);
lean_dec(v_unused_2707_);
v___x_2701_ = v___x_2699_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2699_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v_a_2695_);
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2695_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec(v_a_2695_);
v_a_2708_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2699_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2699_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
else
{
lean_object* v___x_2716_; 
lean_inc_ref(v___y_2596_);
v___x_2716_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v___y_2596_, v___y_2594_, v___y_2600_, v___y_2597_, v___y_2601_, v___y_2603_, v___y_2598_, v___y_2595_);
lean_dec_ref(v___y_2598_);
if (lean_obj_tag(v___x_2716_) == 0)
{
size_t v___x_2717_; size_t v___x_2718_; uint8_t v___x_2719_; 
lean_dec_ref(v___x_2716_);
v___x_2717_ = lean_ptr_addr(v___y_2599_);
lean_dec_ref(v___y_2599_);
v___x_2718_ = lean_ptr_addr(v_a_2695_);
v___x_2719_ = lean_usize_dec_eq(v___x_2717_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_dec_ref(v___y_2602_);
v___y_2587_ = v_a_2695_;
v___y_2588_ = v___y_2596_;
v___y_2589_ = v___x_2719_;
goto v___jp_2586_;
}
else
{
size_t v___x_2720_; size_t v___x_2721_; uint8_t v___x_2722_; 
v___x_2720_ = lean_ptr_addr(v___y_2602_);
lean_dec_ref(v___y_2602_);
v___x_2721_ = lean_ptr_addr(v___y_2596_);
v___x_2722_ = lean_usize_dec_eq(v___x_2720_, v___x_2721_);
v___y_2587_ = v_a_2695_;
v___y_2588_ = v___y_2596_;
v___y_2589_ = v___x_2722_;
goto v___jp_2586_;
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v_a_2695_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2723_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2716_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2716_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec(v_a_2695_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2731_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2696_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2696_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
else
{
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
return v___x_2694_;
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2739_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2668_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2668_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2747_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2648_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2648_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2755_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2626_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2626_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2755_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
}
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2763_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2619_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2619_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_dec_ref(v___y_2602_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v_code_2391_);
v_a_2771_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2604_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2604_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
v___jp_2779_:
{
uint8_t v___x_2794_; 
v___x_2794_ = l_Lean_Expr_isErased(v_type_2785_);
lean_dec_ref(v_type_2785_);
if (v___x_2794_ == 0)
{
lean_dec(v_value_2786_);
lean_dec(v_fvarId_2784_);
v___y_2594_ = v___y_2787_;
v___y_2595_ = v___y_2793_;
v___y_2596_ = v_decl_2783_;
v___y_2597_ = v___y_2789_;
v___y_2598_ = v___y_2792_;
v___y_2599_ = v___y_2781_;
v___y_2600_ = v___y_2788_;
v___y_2601_ = v___y_2790_;
v___y_2602_ = v___y_2782_;
v___y_2603_ = v___y_2791_;
goto v___jp_2593_;
}
else
{
lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2795_ = lean_box(1);
v___x_2796_ = l_Lean_Compiler_LCNF_instBEqLetValue_beq(v___y_2780_, v_value_2786_, v___x_2795_);
lean_dec(v_value_2786_);
if (v___x_2796_ == 0)
{
if (v___x_2794_ == 0)
{
lean_dec(v_fvarId_2784_);
v___y_2594_ = v___y_2787_;
v___y_2595_ = v___y_2793_;
v___y_2596_ = v_decl_2783_;
v___y_2597_ = v___y_2789_;
v___y_2598_ = v___y_2792_;
v___y_2599_ = v___y_2781_;
v___y_2600_ = v___y_2788_;
v___y_2601_ = v___y_2790_;
v___y_2602_ = v___y_2782_;
v___y_2603_ = v___y_2791_;
goto v___jp_2593_;
}
else
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v_subst_2799_; lean_object* v_used_2800_; lean_object* v_binderRenaming_2801_; lean_object* v_funDeclInfoMap_2802_; uint8_t v_simplified_2803_; lean_object* v_visited_2804_; lean_object* v_inline_2805_; lean_object* v_inlineLocal_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v___y_2782_);
lean_dec_ref(v_code_2391_);
v___x_2797_ = lean_st_ref_get(v___y_2793_);
lean_dec(v___x_2797_);
v___x_2798_ = lean_st_ref_take(v___y_2788_);
v_subst_2799_ = lean_ctor_get(v___x_2798_, 0);
v_used_2800_ = lean_ctor_get(v___x_2798_, 1);
v_binderRenaming_2801_ = lean_ctor_get(v___x_2798_, 2);
v_funDeclInfoMap_2802_ = lean_ctor_get(v___x_2798_, 3);
v_simplified_2803_ = lean_ctor_get_uint8(v___x_2798_, sizeof(void*)*7);
v_visited_2804_ = lean_ctor_get(v___x_2798_, 4);
v_inline_2805_ = lean_ctor_get(v___x_2798_, 5);
v_inlineLocal_2806_ = lean_ctor_get(v___x_2798_, 6);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2808_ = v___x_2798_;
v_isShared_2809_ = v_isSharedCheck_2826_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_inlineLocal_2806_);
lean_inc(v_inline_2805_);
lean_inc(v_visited_2804_);
lean_inc(v_funDeclInfoMap_2802_);
lean_inc(v_binderRenaming_2801_);
lean_inc(v_used_2800_);
lean_inc(v_subst_2799_);
lean_dec(v___x_2798_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2826_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
v___x_2810_ = lean_box(0);
v___x_2811_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_specializePartialApp_spec__0___redArg(v_subst_2799_, v_fvarId_2784_, v___x_2810_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v___x_2811_);
v___x_2813_ = v___x_2808_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v_used_2800_);
lean_ctor_set(v_reuseFailAlloc_2825_, 2, v_binderRenaming_2801_);
lean_ctor_set(v_reuseFailAlloc_2825_, 3, v_funDeclInfoMap_2802_);
lean_ctor_set(v_reuseFailAlloc_2825_, 4, v_visited_2804_);
lean_ctor_set(v_reuseFailAlloc_2825_, 5, v_inline_2805_);
lean_ctor_set(v_reuseFailAlloc_2825_, 6, v_inlineLocal_2806_);
lean_ctor_set_uint8(v_reuseFailAlloc_2825_, sizeof(void*)*7, v_simplified_2803_);
v___x_2813_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_st_ref_set(v___y_2788_, v___x_2813_);
v___x_2815_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2783_, v___y_2788_, v___y_2791_, v___y_2793_);
lean_dec_ref(v_decl_2783_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_dec_ref(v___x_2815_);
v_code_2391_ = v___y_2781_;
v_a_2392_ = v___y_2787_;
v_a_2393_ = v___y_2788_;
v_a_2394_ = v___y_2789_;
v_a_2395_ = v___y_2790_;
v_a_2396_ = v___y_2791_;
v_a_2397_ = v___y_2792_;
v_a_2398_ = v___y_2793_;
goto _start;
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_dec_ref(v___y_2792_);
lean_dec_ref(v___y_2781_);
v_a_2817_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2815_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2815_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_2784_);
v___y_2594_ = v___y_2787_;
v___y_2595_ = v___y_2793_;
v___y_2596_ = v_decl_2783_;
v___y_2597_ = v___y_2789_;
v___y_2598_ = v___y_2792_;
v___y_2599_ = v___y_2781_;
v___y_2600_ = v___y_2788_;
v___y_2601_ = v___y_2790_;
v___y_2602_ = v___y_2782_;
v___y_2603_ = v___y_2791_;
goto v___jp_2593_;
}
}
}
v___jp_2827_:
{
lean_object* v_fvarId_2839_; lean_object* v_type_2840_; lean_object* v_value_2841_; lean_object* v___x_2842_; 
v_fvarId_2839_ = lean_ctor_get(v___y_2829_, 0);
v_type_2840_ = lean_ctor_get(v___y_2829_, 2);
v_value_2841_ = lean_ctor_get(v___y_2829_, 3);
lean_inc(v_value_2841_);
v___x_2842_ = l_Lean_Compiler_LCNF_Simp_simpValue_x3f___redArg(v_value_2841_, v___y_2832_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2843_);
lean_dec_ref(v___x_2842_);
if (lean_obj_tag(v_a_2843_) == 1)
{
lean_object* v_val_2844_; lean_object* v___x_2845_; 
v_val_2844_ = lean_ctor_get(v_a_2843_, 0);
lean_inc(v_val_2844_);
lean_dec_ref(v_a_2843_);
v___x_2845_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2833_, v___y_2838_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v___x_2846_; 
lean_dec_ref(v___x_2845_);
v___x_2846_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___y_2828_, v___y_2829_, v_val_2844_, v___y_2836_, v___y_2838_);
if (lean_obj_tag(v___x_2846_) == 0)
{
lean_object* v_a_2847_; lean_object* v_fvarId_2848_; lean_object* v_type_2849_; lean_object* v_value_2850_; 
v_a_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_a_2847_);
lean_dec_ref(v___x_2846_);
v_fvarId_2848_ = lean_ctor_get(v_a_2847_, 0);
lean_inc(v_fvarId_2848_);
v_type_2849_ = lean_ctor_get(v_a_2847_, 2);
lean_inc_ref(v_type_2849_);
v_value_2850_ = lean_ctor_get(v_a_2847_, 3);
lean_inc(v_value_2850_);
v___y_2780_ = v___y_2828_;
v___y_2781_ = v___y_2830_;
v___y_2782_ = v___y_2831_;
v_decl_2783_ = v_a_2847_;
v_fvarId_2784_ = v_fvarId_2848_;
v_type_2785_ = v_type_2849_;
v_value_2786_ = v_value_2850_;
v___y_2787_ = v___y_2832_;
v___y_2788_ = v___y_2833_;
v___y_2789_ = v___y_2834_;
v___y_2790_ = v___y_2835_;
v___y_2791_ = v___y_2836_;
v___y_2792_ = v___y_2837_;
v___y_2793_ = v___y_2838_;
goto v___jp_2779_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec_ref(v___y_2837_);
lean_dec_ref(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec_ref(v_code_2391_);
v_a_2851_ = lean_ctor_get(v___x_2846_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2846_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2846_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2846_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec(v_val_2844_);
lean_dec_ref(v___y_2837_);
lean_dec_ref(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec_ref(v_code_2391_);
v_a_2859_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2845_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2845_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_inc(v_value_2841_);
lean_inc_ref(v_type_2840_);
lean_inc(v_fvarId_2839_);
lean_dec(v_a_2843_);
v___y_2780_ = v___y_2828_;
v___y_2781_ = v___y_2830_;
v___y_2782_ = v___y_2831_;
v_decl_2783_ = v___y_2829_;
v_fvarId_2784_ = v_fvarId_2839_;
v_type_2785_ = v_type_2840_;
v_value_2786_ = v_value_2841_;
v___y_2787_ = v___y_2832_;
v___y_2788_ = v___y_2833_;
v___y_2789_ = v___y_2834_;
v___y_2790_ = v___y_2835_;
v___y_2791_ = v___y_2836_;
v___y_2792_ = v___y_2837_;
v___y_2793_ = v___y_2838_;
goto v___jp_2779_;
}
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v___y_2837_);
lean_dec_ref(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec_ref(v_code_2391_);
v_a_2867_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2842_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2842_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
v___jp_2875_:
{
if (v___y_2878_ == 0)
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
lean_dec_ref(v_code_2391_);
v___x_2879_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___y_2877_);
lean_ctor_set(v___x_2879_, 1, v___y_2876_);
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
return v___x_2880_;
}
else
{
lean_object* v___x_2881_; 
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
v___x_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_code_2391_);
return v___x_2881_;
}
}
v___jp_2882_:
{
uint8_t v___x_2887_; 
v___x_2887_ = l_Lean_instBEqFVarId_beq(v___y_2886_, v___y_2884_);
lean_dec(v___y_2886_);
if (v___x_2887_ == 0)
{
lean_dec_ref(v___y_2885_);
v___y_2876_ = v___y_2883_;
v___y_2877_ = v___y_2884_;
v___y_2878_ = v___x_2887_;
goto v___jp_2875_;
}
else
{
size_t v___x_2888_; size_t v___x_2889_; uint8_t v___x_2890_; 
v___x_2888_ = lean_ptr_addr(v___y_2885_);
lean_dec_ref(v___y_2885_);
v___x_2889_ = lean_ptr_addr(v___y_2883_);
v___x_2890_ = lean_usize_dec_eq(v___x_2888_, v___x_2889_);
v___y_2876_ = v___y_2883_;
v___y_2877_ = v___y_2884_;
v___y_2878_ = v___x_2890_;
goto v___jp_2875_;
}
}
v___jp_2891_:
{
if (lean_obj_tag(v___y_2896_) == 0)
{
lean_dec_ref(v___y_2896_);
v___y_2883_ = v___y_2892_;
v___y_2884_ = v___y_2893_;
v___y_2885_ = v___y_2894_;
v___y_2886_ = v___y_2895_;
goto v___jp_2882_;
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec_ref(v_code_2391_);
v_a_2897_ = lean_ctor_get(v___y_2896_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___y_2896_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___y_2896_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___y_2896_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
v___jp_2905_:
{
lean_object* v___x_2909_; 
v___x_2909_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2907_, v___y_2906_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2917_; 
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2917_ == 0)
{
lean_object* v_unused_2918_; 
v_unused_2918_ = lean_ctor_get(v___x_2909_, 0);
lean_dec(v_unused_2918_);
v___x_2911_ = v___x_2909_;
v_isShared_2912_ = v_isSharedCheck_2917_;
goto v_resetjp_2910_;
}
else
{
lean_dec(v___x_2909_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2917_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2913_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___y_2908_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2913_);
v___x_2915_ = v___x_2911_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec_ref(v___y_2908_);
v_a_2919_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2909_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2909_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
v___jp_2927_:
{
if (lean_obj_tag(v___y_2931_) == 0)
{
lean_dec_ref(v___y_2931_);
v___y_2906_ = v___y_2928_;
v___y_2907_ = v___y_2929_;
v___y_2908_ = v___y_2930_;
goto v___jp_2905_;
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec_ref(v___y_2930_);
v_a_2932_ = lean_ctor_get(v___y_2931_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___y_2931_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___y_2931_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___y_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
v___jp_2940_:
{
uint8_t v___x_2950_; 
v___x_2950_ = lean_nat_dec_lt(v___y_2947_, v___y_2946_);
lean_dec(v___y_2947_);
if (v___x_2950_ == 0)
{
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2944_);
v___y_2906_ = v___y_2941_;
v___y_2907_ = v___y_2943_;
v___y_2908_ = v___y_2949_;
goto v___jp_2905_;
}
else
{
lean_object* v___x_2951_; uint8_t v___x_2952_; 
v___x_2951_ = lean_box(0);
v___x_2952_ = lean_nat_dec_le(v___y_2946_, v___y_2946_);
if (v___x_2952_ == 0)
{
if (v___x_2950_ == 0)
{
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2944_);
v___y_2906_ = v___y_2941_;
v___y_2907_ = v___y_2943_;
v___y_2908_ = v___y_2949_;
goto v___jp_2905_;
}
else
{
size_t v___x_2953_; size_t v___x_2954_; lean_object* v___x_2955_; 
v___x_2953_ = ((size_t)0ULL);
v___x_2954_ = lean_usize_of_nat(v___y_2946_);
lean_dec(v___y_2946_);
v___x_2955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2944_, v___x_2953_, v___x_2954_, v___x_2951_, v___y_2945_, v___y_2942_, v___y_2948_, v___y_2941_);
lean_dec_ref(v___y_2948_);
lean_dec_ref(v___y_2944_);
v___y_2928_ = v___y_2941_;
v___y_2929_ = v___y_2943_;
v___y_2930_ = v___y_2949_;
v___y_2931_ = v___x_2955_;
goto v___jp_2927_;
}
}
else
{
size_t v___x_2956_; size_t v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = ((size_t)0ULL);
v___x_2957_ = lean_usize_of_nat(v___y_2946_);
lean_dec(v___y_2946_);
v___x_2958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v___y_2944_, v___x_2956_, v___x_2957_, v___x_2951_, v___y_2945_, v___y_2942_, v___y_2948_, v___y_2941_);
lean_dec_ref(v___y_2948_);
lean_dec_ref(v___y_2944_);
v___y_2928_ = v___y_2941_;
v___y_2929_ = v___y_2943_;
v___y_2930_ = v___y_2949_;
v___y_2931_ = v___x_2958_;
goto v___jp_2927_;
}
}
}
v___jp_2959_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2964_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2964_, 0, v___y_2962_);
lean_ctor_set(v___x_2964_, 1, v___y_2963_);
lean_ctor_set(v___x_2964_, 2, v___y_2960_);
lean_ctor_set(v___x_2964_, 3, v___y_2961_);
v___x_2965_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
return v___x_2966_;
}
v___jp_2967_:
{
if (v___y_2973_ == 0)
{
lean_dec(v___y_2969_);
lean_dec_ref(v_code_2391_);
v___y_2960_ = v___y_2968_;
v___y_2961_ = v___y_2970_;
v___y_2962_ = v___y_2971_;
v___y_2963_ = v___y_2972_;
goto v___jp_2959_;
}
else
{
uint8_t v___x_2974_; 
v___x_2974_ = l_Lean_instBEqFVarId_beq(v___y_2969_, v___y_2968_);
lean_dec(v___y_2969_);
if (v___x_2974_ == 0)
{
lean_dec_ref(v_code_2391_);
v___y_2960_ = v___y_2968_;
v___y_2961_ = v___y_2970_;
v___y_2962_ = v___y_2971_;
v___y_2963_ = v___y_2972_;
goto v___jp_2959_;
}
else
{
lean_object* v___x_2975_; 
lean_dec_ref(v___y_2972_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec(v___y_2968_);
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_code_2391_);
return v___x_2975_;
}
}
}
v___jp_2976_:
{
lean_object* v___x_2990_; uint8_t v___x_2991_; 
v___x_2990_ = lean_array_get_size(v___y_2979_);
v___x_2991_ = lean_nat_dec_lt(v___y_2980_, v___x_2990_);
if (v___x_2991_ == 0)
{
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_code_2391_);
v___y_2941_ = v___y_2989_;
v___y_2942_ = v___y_2987_;
v___y_2943_ = v___y_2985_;
v___y_2944_ = v___y_2979_;
v___y_2945_ = v___y_2986_;
v___y_2946_ = v___x_2990_;
v___y_2947_ = v___y_2980_;
v___y_2948_ = v___y_2988_;
v___y_2949_ = v___y_2984_;
goto v___jp_2940_;
}
else
{
if (v___x_2991_ == 0)
{
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_code_2391_);
v___y_2941_ = v___y_2989_;
v___y_2942_ = v___y_2987_;
v___y_2943_ = v___y_2985_;
v___y_2944_ = v___y_2979_;
v___y_2945_ = v___y_2986_;
v___y_2946_ = v___x_2990_;
v___y_2947_ = v___y_2980_;
v___y_2948_ = v___y_2988_;
v___y_2949_ = v___y_2984_;
goto v___jp_2940_;
}
else
{
size_t v___x_2992_; size_t v___x_2993_; uint8_t v___x_2994_; 
v___x_2992_ = ((size_t)0ULL);
v___x_2993_ = lean_usize_of_nat(v___x_2990_);
v___x_2994_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__11(v___y_2979_, v___x_2992_, v___x_2993_);
if (v___x_2994_ == 0)
{
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_code_2391_);
v___y_2941_ = v___y_2989_;
v___y_2942_ = v___y_2987_;
v___y_2943_ = v___y_2985_;
v___y_2944_ = v___y_2979_;
v___y_2945_ = v___y_2986_;
v___y_2946_ = v___x_2990_;
v___y_2947_ = v___y_2980_;
v___y_2948_ = v___y_2988_;
v___y_2949_ = v___y_2984_;
goto v___jp_2940_;
}
else
{
lean_object* v___x_2995_; 
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2980_);
lean_inc(v___y_2977_);
v___x_2995_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v___y_2977_, v___y_2985_, v___y_2989_);
if (lean_obj_tag(v___x_2995_) == 0)
{
size_t v___x_2996_; size_t v___x_2997_; uint8_t v___x_2998_; 
lean_dec_ref(v___x_2995_);
v___x_2996_ = lean_ptr_addr(v___y_2983_);
lean_dec_ref(v___y_2983_);
v___x_2997_ = lean_ptr_addr(v___y_2979_);
v___x_2998_ = lean_usize_dec_eq(v___x_2996_, v___x_2997_);
if (v___x_2998_ == 0)
{
lean_dec_ref(v___y_2981_);
v___y_2968_ = v___y_2977_;
v___y_2969_ = v___y_2978_;
v___y_2970_ = v___y_2979_;
v___y_2971_ = v___y_2982_;
v___y_2972_ = v___y_2984_;
v___y_2973_ = v___x_2998_;
goto v___jp_2967_;
}
else
{
size_t v___x_2999_; size_t v___x_3000_; uint8_t v___x_3001_; 
v___x_2999_ = lean_ptr_addr(v___y_2981_);
lean_dec_ref(v___y_2981_);
v___x_3000_ = lean_ptr_addr(v___y_2984_);
v___x_3001_ = lean_usize_dec_eq(v___x_2999_, v___x_3000_);
v___y_2968_ = v___y_2977_;
v___y_2969_ = v___y_2978_;
v___y_2970_ = v___y_2979_;
v___y_2971_ = v___y_2982_;
v___y_2972_ = v___y_2984_;
v___y_2973_ = v___x_3001_;
goto v___jp_2967_;
}
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
lean_dec_ref(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v_code_2391_);
v_a_3002_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v___x_2995_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_2995_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
}
}
}
v___jp_3010_:
{
lean_object* v___x_3014_; 
v___x_3014_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3011_, v___y_3013_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3021_ == 0)
{
lean_object* v_unused_3022_; 
v_unused_3022_ = lean_ctor_get(v___x_3014_, 0);
lean_dec(v_unused_3022_);
v___x_3016_ = v___x_3014_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_dec(v___x_3014_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v___y_3012_);
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___y_3012_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec_ref(v___y_3012_);
v_a_3023_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_3014_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_3014_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
v___jp_3031_:
{
if (lean_obj_tag(v___y_3035_) == 0)
{
lean_dec_ref(v___y_3035_);
v___y_3011_ = v___y_3032_;
v___y_3012_ = v___y_3033_;
v___y_3013_ = v___y_3034_;
goto v___jp_3010_;
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec_ref(v___y_3033_);
v_a_3036_ = lean_ctor_get(v___y_3035_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___y_3035_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___y_3035_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___y_3035_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
v___jp_3044_:
{
uint8_t v___x_3052_; 
v___x_3052_ = lean_nat_dec_lt(v___y_3048_, v___y_3047_);
lean_dec(v___y_3048_);
if (v___x_3052_ == 0)
{
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3050_;
v___y_3013_ = v___y_3051_;
goto v___jp_3010_;
}
else
{
lean_object* v___x_3053_; uint8_t v___x_3054_; 
v___x_3053_ = lean_box(0);
v___x_3054_ = lean_nat_dec_le(v___y_3047_, v___y_3047_);
if (v___x_3054_ == 0)
{
if (v___x_3052_ == 0)
{
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3050_;
v___y_3013_ = v___y_3051_;
goto v___jp_3010_;
}
else
{
size_t v___x_3055_; size_t v___x_3056_; lean_object* v___x_3057_; 
v___x_3055_ = ((size_t)0ULL);
v___x_3056_ = lean_usize_of_nat(v___y_3047_);
lean_dec(v___y_3047_);
v___x_3057_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3046_, v___x_3055_, v___x_3056_, v___x_3053_, v___y_3049_, v___y_3051_);
lean_dec_ref(v___y_3046_);
v___y_3032_ = v___y_3045_;
v___y_3033_ = v___y_3050_;
v___y_3034_ = v___y_3051_;
v___y_3035_ = v___x_3057_;
goto v___jp_3031_;
}
}
else
{
size_t v___x_3058_; size_t v___x_3059_; lean_object* v___x_3060_; 
v___x_3058_ = ((size_t)0ULL);
v___x_3059_ = lean_usize_of_nat(v___y_3047_);
lean_dec(v___y_3047_);
v___x_3060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v___y_3046_, v___x_3058_, v___x_3059_, v___x_3053_, v___y_3049_, v___y_3051_);
lean_dec_ref(v___y_3046_);
v___y_3032_ = v___y_3045_;
v___y_3033_ = v___y_3050_;
v___y_3034_ = v___y_3051_;
v___y_3035_ = v___x_3060_;
goto v___jp_3031_;
}
}
}
v___jp_3061_:
{
switch(lean_obj_tag(v_code_2391_))
{
case 0:
{
lean_object* v_decl_3069_; lean_object* v_k_3070_; uint8_t v___x_3071_; uint8_t v___x_3072_; lean_object* v___x_3073_; 
v_decl_3069_ = lean_ctor_get(v_code_2391_, 0);
v_k_3070_ = lean_ctor_get(v_code_2391_, 1);
v___x_3071_ = 0;
v___x_3072_ = 0;
lean_inc_ref(v_decl_3069_);
v___x_3073_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v___x_3071_, v___x_3072_, v_decl_3069_, v___y_3063_, v___y_3066_, v___y_3068_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; uint8_t v___x_3075_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref(v___x_3073_);
v___x_3075_ = l_Lean_Compiler_LCNF_instBEqLetDecl_beq(v___x_3071_, v_decl_3069_, v_a_3074_);
if (v___x_3075_ == 0)
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_3063_, v___y_3068_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_dec_ref(v___x_3076_);
lean_inc_ref(v_decl_3069_);
lean_inc_ref(v_k_3070_);
v___y_2828_ = v___x_3071_;
v___y_2829_ = v_a_3074_;
v___y_2830_ = v_k_3070_;
v___y_2831_ = v_decl_3069_;
v___y_2832_ = v___y_3062_;
v___y_2833_ = v___y_3063_;
v___y_2834_ = v___y_3064_;
v___y_2835_ = v___y_3065_;
v___y_2836_ = v___y_3066_;
v___y_2837_ = v___y_3067_;
v___y_2838_ = v___y_3068_;
goto v___jp_2827_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec(v_a_3074_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
else
{
lean_inc_ref(v_decl_3069_);
lean_inc_ref(v_k_3070_);
v___y_2828_ = v___x_3071_;
v___y_2829_ = v_a_3074_;
v___y_2830_ = v_k_3070_;
v___y_2831_ = v_decl_3069_;
v___y_2832_ = v___y_3062_;
v___y_2833_ = v___y_3063_;
v___y_2834_ = v___y_3064_;
v___y_2835_ = v___y_3065_;
v___y_2836_ = v___y_3066_;
v___y_2837_ = v___y_3067_;
v___y_2838_ = v___y_3068_;
goto v___jp_2827_;
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3085_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3073_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3073_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3093_; lean_object* v_args_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v_subst_3097_; uint8_t v___x_3098_; uint8_t v___x_3099_; lean_object* v___x_3100_; 
v_fvarId_3093_ = lean_ctor_get(v_code_2391_, 0);
v_args_3094_ = lean_ctor_get(v_code_2391_, 1);
v___x_3095_ = lean_st_ref_get(v___y_3068_);
lean_dec(v___x_3095_);
v___x_3096_ = lean_st_ref_get(v___y_3063_);
v_subst_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc_ref(v_subst_3097_);
lean_dec(v___x_3096_);
v___x_3098_ = 0;
v___x_3099_ = 0;
lean_inc(v_fvarId_3093_);
v___x_3100_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3097_, v_fvarId_3093_, v___x_3099_);
lean_dec_ref(v_subst_3097_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_fvarId_3101_; lean_object* v___x_3102_; 
v_fvarId_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_fvarId_3101_);
lean_dec_ref(v___x_3100_);
lean_inc_ref(v_args_3094_);
v___x_3102_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v___x_3098_, v___x_3099_, v_args_3094_, v___y_3063_, v___y_3068_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___x_3104_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc_n(v_a_3103_, 2);
lean_dec_ref(v___x_3102_);
v___x_3104_ = l_Lean_Compiler_LCNF_Simp_inlineJp_x3f(v_fvarId_3101_, v_a_3103_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref(v___x_3104_);
if (lean_obj_tag(v_a_3105_) == 1)
{
lean_object* v_val_3106_; 
lean_dec(v_a_3103_);
lean_dec(v_fvarId_3101_);
lean_dec_ref(v_code_2391_);
v_val_3106_ = lean_ctor_get(v_a_3105_, 0);
lean_inc(v_val_3106_);
lean_dec_ref(v_a_3105_);
v_code_2391_ = v_val_3106_;
v_a_2392_ = v___y_3062_;
v_a_2393_ = v___y_3063_;
v_a_2394_ = v___y_3064_;
v_a_2395_ = v___y_3065_;
v_a_2396_ = v___y_3066_;
v_a_2397_ = v___y_3067_;
v_a_2398_ = v___y_3068_;
goto _start;
}
else
{
lean_object* v___x_3108_; 
lean_dec(v_a_3105_);
lean_dec_ref(v___y_3067_);
lean_inc(v_fvarId_3101_);
v___x_3108_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3101_, v___y_3063_, v___y_3068_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; 
lean_dec_ref(v___x_3108_);
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = lean_array_get_size(v_a_3103_);
v___x_3111_ = lean_nat_dec_lt(v___x_3109_, v___x_3110_);
if (v___x_3111_ == 0)
{
lean_inc(v_fvarId_3093_);
lean_inc_ref(v_args_3094_);
v___y_2883_ = v_a_3103_;
v___y_2884_ = v_fvarId_3101_;
v___y_2885_ = v_args_3094_;
v___y_2886_ = v_fvarId_3093_;
goto v___jp_2882_;
}
else
{
lean_object* v___x_3112_; uint8_t v___x_3113_; 
v___x_3112_ = lean_box(0);
v___x_3113_ = lean_nat_dec_le(v___x_3110_, v___x_3110_);
if (v___x_3113_ == 0)
{
if (v___x_3111_ == 0)
{
lean_inc(v_fvarId_3093_);
lean_inc_ref(v_args_3094_);
v___y_2883_ = v_a_3103_;
v___y_2884_ = v_fvarId_3101_;
v___y_2885_ = v_args_3094_;
v___y_2886_ = v_fvarId_3093_;
goto v___jp_2882_;
}
else
{
size_t v___x_3114_; size_t v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = ((size_t)0ULL);
v___x_3115_ = lean_usize_of_nat(v___x_3110_);
v___x_3116_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3103_, v___x_3114_, v___x_3115_, v___x_3112_, v___y_3063_, v___y_3068_);
lean_inc(v_fvarId_3093_);
lean_inc_ref(v_args_3094_);
v___y_2892_ = v_a_3103_;
v___y_2893_ = v_fvarId_3101_;
v___y_2894_ = v_args_3094_;
v___y_2895_ = v_fvarId_3093_;
v___y_2896_ = v___x_3116_;
goto v___jp_2891_;
}
}
else
{
size_t v___x_3117_; size_t v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = ((size_t)0ULL);
v___x_3118_ = lean_usize_of_nat(v___x_3110_);
v___x_3119_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_a_3103_, v___x_3117_, v___x_3118_, v___x_3112_, v___y_3063_, v___y_3068_);
lean_inc(v_fvarId_3093_);
lean_inc_ref(v_args_3094_);
v___y_2892_ = v_a_3103_;
v___y_2893_ = v_fvarId_3101_;
v___y_2894_ = v_args_3094_;
v___y_2895_ = v_fvarId_3093_;
v___y_2896_ = v___x_3119_;
goto v___jp_2891_;
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec(v_a_3103_);
lean_dec(v_fvarId_3101_);
lean_dec_ref(v_code_2391_);
v_a_3120_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3108_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3108_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec(v_a_3103_);
lean_dec(v_fvarId_3101_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3128_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3104_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3104_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_fvarId_3101_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3136_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3102_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3102_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
else
{
lean_object* v___x_3144_; 
lean_dec_ref(v_code_2391_);
v___x_3144_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3098_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec_ref(v___y_3067_);
return v___x_3144_;
}
}
case 4:
{
lean_object* v_cases_3145_; lean_object* v___x_3146_; 
v_cases_3145_ = lean_ctor_get(v_code_2391_, 0);
lean_inc_ref(v_cases_3145_);
v___x_3146_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3145_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3221_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3149_ = v___x_3146_;
v_isShared_3150_ = v_isSharedCheck_3221_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3146_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3221_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
if (lean_obj_tag(v_a_3147_) == 1)
{
lean_object* v_val_3151_; lean_object* v___x_3153_; 
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_val_3151_ = lean_ctor_get(v_a_3147_, 0);
lean_inc(v_val_3151_);
lean_dec_ref(v_a_3147_);
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 0, v_val_3151_);
v___x_3153_ = v___x_3149_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_val_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
else
{
lean_object* v_typeName_3155_; lean_object* v_resultType_3156_; lean_object* v_discr_3157_; lean_object* v_alts_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v_subst_3161_; uint8_t v___x_3162_; uint8_t v___x_3163_; lean_object* v___x_3164_; 
lean_del_object(v___x_3149_);
lean_dec(v_a_3147_);
v_typeName_3155_ = lean_ctor_get(v_cases_3145_, 0);
v_resultType_3156_ = lean_ctor_get(v_cases_3145_, 1);
v_discr_3157_ = lean_ctor_get(v_cases_3145_, 2);
v_alts_3158_ = lean_ctor_get(v_cases_3145_, 3);
v___x_3159_ = lean_st_ref_get(v___y_3068_);
lean_dec(v___x_3159_);
v___x_3160_ = lean_st_ref_get(v___y_3063_);
v_subst_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc_ref(v_subst_3161_);
lean_dec(v___x_3160_);
v___x_3162_ = 0;
v___x_3163_ = 0;
lean_inc(v_discr_3157_);
v___x_3164_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3161_, v_discr_3157_, v___x_3163_);
lean_dec_ref(v_subst_3161_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_fvarId_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v_fvarId_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc_n(v_fvarId_3165_, 2);
lean_dec_ref(v___x_3164_);
v___x_3166_ = lean_st_ref_get(v___y_3068_);
lean_dec(v___x_3166_);
v___x_3167_ = lean_st_ref_get(v___y_3063_);
v___x_3168_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3158_);
v___x_3169_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3165_, v___x_3168_, v_alts_3158_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v_a_3170_; lean_object* v___x_3171_; 
v_a_3170_ = lean_ctor_get(v___x_3169_, 0);
lean_inc(v_a_3170_);
lean_dec_ref(v___x_3169_);
v___x_3171_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_a_3170_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3203_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3174_ = v___x_3171_;
v_isShared_3175_ = v_isSharedCheck_3203_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3171_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3203_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v_subst_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v_subst_3176_ = lean_ctor_get(v___x_3167_, 0);
lean_inc_ref(v_subst_3176_);
lean_dec(v___x_3167_);
lean_inc_ref(v_resultType_3156_);
v___x_3177_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3162_, v_subst_3176_, v___x_3163_, v_resultType_3156_);
lean_dec_ref(v_subst_3176_);
v___x_3178_ = lean_array_get_size(v_a_3172_);
v___x_3179_ = lean_unsigned_to_nat(1u);
v___x_3180_ = lean_nat_dec_eq(v___x_3178_, v___x_3179_);
if (v___x_3180_ == 0)
{
lean_del_object(v___x_3174_);
lean_inc_ref(v_alts_3158_);
lean_inc(v_typeName_3155_);
lean_inc_ref(v_resultType_3156_);
lean_inc(v_discr_3157_);
v___y_2977_ = v_fvarId_3165_;
v___y_2978_ = v_discr_3157_;
v___y_2979_ = v_a_3172_;
v___y_2980_ = v___x_3168_;
v___y_2981_ = v_resultType_3156_;
v___y_2982_ = v_typeName_3155_;
v___y_2983_ = v_alts_3158_;
v___y_2984_ = v___x_3177_;
v___y_2985_ = v___y_3063_;
v___y_2986_ = v___y_3065_;
v___y_2987_ = v___y_3066_;
v___y_2988_ = v___y_3067_;
v___y_2989_ = v___y_3068_;
goto v___jp_2976_;
}
else
{
lean_object* v___x_3181_; 
v___x_3181_ = lean_array_fget_borrowed(v_a_3172_, v___x_3168_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_params_3182_; lean_object* v_code_3183_; lean_object* v___x_3184_; uint8_t v___x_3185_; 
lean_del_object(v___x_3174_);
v_params_3182_ = lean_ctor_get(v___x_3181_, 1);
v_code_3183_ = lean_ctor_get(v___x_3181_, 2);
v___x_3184_ = lean_array_get_size(v_params_3182_);
v___x_3185_ = lean_nat_dec_lt(v___x_3168_, v___x_3184_);
if (v___x_3185_ == 0)
{
lean_inc_ref(v_code_3183_);
lean_inc_ref(v_params_3182_);
lean_dec_ref(v___x_3177_);
lean_dec(v_a_3172_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v___y_3045_ = v___y_3063_;
v___y_3046_ = v_params_3182_;
v___y_3047_ = v___x_3184_;
v___y_3048_ = v___x_3168_;
v___y_3049_ = v___y_3066_;
v___y_3050_ = v_code_3183_;
v___y_3051_ = v___y_3068_;
goto v___jp_3044_;
}
else
{
if (v___x_3185_ == 0)
{
lean_inc_ref(v_code_3183_);
lean_inc_ref(v_params_3182_);
lean_dec_ref(v___x_3177_);
lean_dec(v_a_3172_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v___y_3045_ = v___y_3063_;
v___y_3046_ = v_params_3182_;
v___y_3047_ = v___x_3184_;
v___y_3048_ = v___x_3168_;
v___y_3049_ = v___y_3066_;
v___y_3050_ = v_code_3183_;
v___y_3051_ = v___y_3068_;
goto v___jp_3044_;
}
else
{
size_t v___x_3186_; size_t v___x_3187_; lean_object* v___x_3188_; 
v___x_3186_ = ((size_t)0ULL);
v___x_3187_ = lean_usize_of_nat(v___x_3184_);
v___x_3188_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_params_3182_, v___x_3186_, v___x_3187_, v___y_3063_, v___y_3068_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; uint8_t v___x_3190_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref(v___x_3188_);
v___x_3190_ = lean_unbox(v_a_3189_);
lean_dec(v_a_3189_);
if (v___x_3190_ == 0)
{
lean_inc_ref(v_code_3183_);
lean_inc_ref(v_params_3182_);
lean_dec_ref(v___x_3177_);
lean_dec(v_a_3172_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v___y_3045_ = v___y_3063_;
v___y_3046_ = v_params_3182_;
v___y_3047_ = v___x_3184_;
v___y_3048_ = v___x_3168_;
v___y_3049_ = v___y_3066_;
v___y_3050_ = v_code_3183_;
v___y_3051_ = v___y_3068_;
goto v___jp_3044_;
}
else
{
lean_inc_ref(v_alts_3158_);
lean_inc(v_typeName_3155_);
lean_inc_ref(v_resultType_3156_);
lean_inc(v_discr_3157_);
v___y_2977_ = v_fvarId_3165_;
v___y_2978_ = v_discr_3157_;
v___y_2979_ = v_a_3172_;
v___y_2980_ = v___x_3168_;
v___y_2981_ = v_resultType_3156_;
v___y_2982_ = v_typeName_3155_;
v___y_2983_ = v_alts_3158_;
v___y_2984_ = v___x_3177_;
v___y_2985_ = v___y_3063_;
v___y_2986_ = v___y_3065_;
v___y_2987_ = v___y_3066_;
v___y_2988_ = v___y_3067_;
v___y_2989_ = v___y_3068_;
goto v___jp_2976_;
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec_ref(v___x_3177_);
lean_dec(v_a_3172_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3191_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3188_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3188_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
}
}
else
{
lean_object* v_code_3199_; lean_object* v___x_3201_; 
lean_inc_ref(v___x_3181_);
lean_dec_ref(v___x_3177_);
lean_dec(v_a_3172_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_code_3199_ = lean_ctor_get(v___x_3181_, 0);
lean_inc_ref(v_code_3199_);
lean_dec_ref(v___x_3181_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 0, v_code_3199_);
v___x_3201_ = v___x_3174_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_code_3199_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
lean_dec(v___x_3167_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3204_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___x_3171_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3171_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_dec(v___x_3167_);
lean_dec(v_fvarId_3165_);
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3212_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3169_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3169_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
else
{
lean_object* v___x_3220_; 
lean_dec_ref(v_code_2391_);
v___x_3220_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3162_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec_ref(v___y_3067_);
return v___x_3220_;
}
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec_ref(v_code_2391_);
lean_dec_ref(v___y_3067_);
v_a_3222_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3146_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3146_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v_subst_3233_; uint8_t v___x_3234_; lean_object* v___x_3235_; 
v_fvarId_3230_ = lean_ctor_get(v_code_2391_, 0);
v___x_3231_ = lean_st_ref_get(v___y_3068_);
lean_dec(v___x_3231_);
v___x_3232_ = lean_st_ref_get(v___y_3063_);
v_subst_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc_ref(v_subst_3233_);
lean_dec(v___x_3232_);
v___x_3234_ = 0;
lean_inc(v_fvarId_3230_);
v___x_3235_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_3233_, v_fvarId_3230_, v___x_3234_);
lean_dec_ref(v_subst_3233_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_fvarId_3236_; lean_object* v___x_3237_; 
lean_dec_ref(v___y_3067_);
v_fvarId_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc_n(v_fvarId_3236_, 2);
lean_dec_ref(v___x_3235_);
v___x_3237_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_3236_, v___y_3063_, v___y_3068_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3256_; 
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3256_ == 0)
{
lean_object* v_unused_3257_; 
v_unused_3257_ = lean_ctor_get(v___x_3237_, 0);
lean_dec(v_unused_3257_);
v___x_3239_ = v___x_3237_;
v_isShared_3240_ = v_isSharedCheck_3256_;
goto v_resetjp_3238_;
}
else
{
lean_dec(v___x_3237_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3256_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
uint8_t v___x_3241_; 
v___x_3241_ = l_Lean_instBEqFVarId_beq(v_fvarId_3230_, v_fvarId_3236_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3251_; 
v_isSharedCheck_3251_ = !lean_is_exclusive(v_code_2391_);
if (v_isSharedCheck_3251_ == 0)
{
lean_object* v_unused_3252_; 
v_unused_3252_ = lean_ctor_get(v_code_2391_, 0);
lean_dec(v_unused_3252_);
v___x_3243_ = v_code_2391_;
v_isShared_3244_ = v_isSharedCheck_3251_;
goto v_resetjp_3242_;
}
else
{
lean_dec(v_code_2391_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3251_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
lean_ctor_set(v___x_3243_, 0, v_fvarId_3236_);
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_fvarId_3236_);
v___x_3246_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3248_; 
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v___x_3246_);
v___x_3248_ = v___x_3239_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3246_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
else
{
lean_object* v___x_3254_; 
lean_dec(v_fvarId_3236_);
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v_code_2391_);
v___x_3254_ = v___x_3239_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_code_2391_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_dec(v_fvarId_3236_);
lean_dec_ref(v_code_2391_);
v_a_3258_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3237_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3237_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
else
{
uint8_t v___x_3266_; lean_object* v___x_3267_; 
lean_dec_ref(v_code_2391_);
v___x_3266_ = 0;
v___x_3267_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_3266_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec_ref(v___y_3067_);
return v___x_3267_;
}
}
case 6:
{
lean_object* v_type_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v_subst_3271_; uint8_t v___x_3272_; uint8_t v___x_3273_; lean_object* v___x_3274_; size_t v___x_3275_; size_t v___x_3276_; uint8_t v___x_3277_; 
lean_dec_ref(v___y_3067_);
v_type_3268_ = lean_ctor_get(v_code_2391_, 0);
v___x_3269_ = lean_st_ref_get(v___y_3068_);
lean_dec(v___x_3269_);
v___x_3270_ = lean_st_ref_get(v___y_3063_);
v_subst_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc_ref(v_subst_3271_);
lean_dec(v___x_3270_);
v___x_3272_ = 0;
v___x_3273_ = 0;
lean_inc_ref(v_type_3268_);
v___x_3274_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3272_, v_subst_3271_, v___x_3273_, v_type_3268_);
lean_dec_ref(v_subst_3271_);
v___x_3275_ = lean_ptr_addr(v_type_3268_);
v___x_3276_ = lean_ptr_addr(v___x_3274_);
v___x_3277_ = lean_usize_dec_eq(v___x_3275_, v___x_3276_);
if (v___x_3277_ == 0)
{
lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3285_; 
v_isSharedCheck_3285_ = !lean_is_exclusive(v_code_2391_);
if (v_isSharedCheck_3285_ == 0)
{
lean_object* v_unused_3286_; 
v_unused_3286_ = lean_ctor_get(v_code_2391_, 0);
lean_dec(v_unused_3286_);
v___x_3279_ = v_code_2391_;
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
else
{
lean_dec(v_code_2391_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 0, v___x_3274_);
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3274_);
v___x_3282_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
}
else
{
lean_object* v___x_3287_; 
lean_dec_ref(v___x_3274_);
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_code_2391_);
return v___x_3287_;
}
}
default: 
{
lean_object* v_decl_3288_; lean_object* v_k_3289_; 
v_decl_3288_ = lean_ctor_get(v_code_2391_, 0);
v_k_3289_ = lean_ctor_get(v_code_2391_, 1);
lean_inc_ref(v_k_3289_);
lean_inc_ref(v_decl_3288_);
v_decl_2509_ = v_decl_3288_;
v_k_2510_ = v_k_3289_;
v___y_2511_ = v___y_3062_;
v___y_2512_ = v___y_3063_;
v___y_2513_ = v___y_3064_;
v___y_2514_ = v___y_3065_;
v___y_2515_ = v___y_3066_;
v___y_2516_ = v___y_3067_;
v___y_2517_ = v___y_3068_;
goto v___jp_2508_;
}
}
}
v___jp_3306_:
{
lean_object* v___x_3307_; 
v___x_3307_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v_a_2393_, v_a_2398_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v_visited_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; uint8_t v___x_3317_; 
lean_dec_ref(v___x_3307_);
v___x_3308_ = lean_st_ref_get(v_a_2398_);
lean_dec(v___x_3308_);
v___x_3309_ = lean_st_ref_get(v_a_2393_);
v_visited_3310_ = lean_ctor_get(v___x_3309_, 4);
lean_inc(v_visited_3310_);
lean_dec(v___x_3309_);
v___x_3311_ = lean_unsigned_to_nat(1u);
v___x_3312_ = lean_nat_add(v_currRecDepth_3293_, v___x_3311_);
lean_dec(v_currRecDepth_3293_);
v___x_3313_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3313_, 0, v_fileName_3290_);
lean_ctor_set(v___x_3313_, 1, v_fileMap_3291_);
lean_ctor_set(v___x_3313_, 2, v_options_3292_);
lean_ctor_set(v___x_3313_, 3, v___x_3312_);
lean_ctor_set(v___x_3313_, 4, v_maxRecDepth_3294_);
lean_ctor_set(v___x_3313_, 5, v_ref_3295_);
lean_ctor_set(v___x_3313_, 6, v_currNamespace_3296_);
lean_ctor_set(v___x_3313_, 7, v_openDecls_3297_);
lean_ctor_set(v___x_3313_, 8, v_initHeartbeats_3298_);
lean_ctor_set(v___x_3313_, 9, v_maxHeartbeats_3299_);
lean_ctor_set(v___x_3313_, 10, v_quotContext_3300_);
lean_ctor_set(v___x_3313_, 11, v_currMacroScope_3301_);
lean_ctor_set(v___x_3313_, 12, v_cancelTk_x3f_3303_);
lean_ctor_set(v___x_3313_, 13, v_inheritedTraceOptions_3305_);
lean_ctor_set_uint8(v___x_3313_, sizeof(void*)*14, v_diag_3302_);
lean_ctor_set_uint8(v___x_3313_, sizeof(void*)*14 + 1, v_suppressElabErrors_3304_);
v___x_3314_ = lean_unsigned_to_nat(128u);
v___x_3315_ = lean_nat_mod(v_visited_3310_, v___x_3314_);
lean_dec(v_visited_3310_);
v___x_3316_ = lean_unsigned_to_nat(0u);
v___x_3317_ = lean_nat_dec_eq(v___x_3315_, v___x_3316_);
lean_dec(v___x_3315_);
if (v___x_3317_ == 0)
{
v___y_3062_ = v_a_2392_;
v___y_3063_ = v_a_2393_;
v___y_3064_ = v_a_2394_;
v___y_3065_ = v_a_2395_;
v___y_3066_ = v_a_2396_;
v___y_3067_ = v___x_3313_;
v___y_3068_ = v_a_2398_;
goto v___jp_3061_;
}
else
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simp___closed__4, &l_Lean_Compiler_LCNF_Simp_simp___closed__4_once, _init_l_Lean_Compiler_LCNF_Simp_simp___closed__4);
v___x_3319_ = l_Lean_Core_checkSystem(v___x_3318_, v___x_3313_, v_a_2398_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_dec_ref(v___x_3319_);
v___y_3062_ = v_a_2392_;
v___y_3063_ = v_a_2393_;
v___y_3064_ = v_a_2394_;
v___y_3065_ = v_a_2395_;
v___y_3066_ = v_a_2396_;
v___y_3067_ = v___x_3313_;
v___y_3068_ = v_a_2398_;
goto v___jp_3061_;
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
lean_dec_ref(v___x_3313_);
lean_dec_ref(v_code_2391_);
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3319_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3319_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
else
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3335_; 
lean_dec_ref(v_inheritedTraceOptions_3305_);
lean_dec(v_cancelTk_x3f_3303_);
lean_dec(v_currMacroScope_3301_);
lean_dec(v_quotContext_3300_);
lean_dec(v_maxHeartbeats_3299_);
lean_dec(v_initHeartbeats_3298_);
lean_dec(v_openDecls_3297_);
lean_dec(v_currNamespace_3296_);
lean_dec(v_ref_3295_);
lean_dec(v_maxRecDepth_3294_);
lean_dec(v_currRecDepth_3293_);
lean_dec_ref(v_options_3292_);
lean_dec_ref(v_fileMap_3291_);
lean_dec_ref(v_fileName_3290_);
lean_dec_ref(v_code_2391_);
v_a_3328_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3330_ = v___x_3307_;
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3307_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl(lean_object* v_decl_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_){
_start:
{
lean_object* v_params_3349_; lean_object* v_type_3350_; lean_object* v_value_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v_subst_3354_; uint8_t v___x_3355_; uint8_t v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v_params_3349_ = lean_ctor_get(v_decl_3340_, 2);
v_type_3350_ = lean_ctor_get(v_decl_3340_, 3);
v_value_3351_ = lean_ctor_get(v_decl_3340_, 4);
v___x_3352_ = lean_st_ref_get(v_a_3347_);
lean_dec(v___x_3352_);
v___x_3353_ = lean_st_ref_get(v_a_3342_);
v_subst_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc_ref(v_subst_3354_);
lean_dec(v___x_3353_);
v___x_3355_ = 0;
v___x_3356_ = 0;
lean_inc_ref(v_type_3350_);
v___x_3357_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v___x_3355_, v_subst_3354_, v___x_3356_, v_type_3350_);
lean_dec_ref(v_subst_3354_);
lean_inc_ref(v_params_3349_);
v___x_3358_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17(v___x_3355_, v___x_3356_, v_params_3349_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3360_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
lean_dec_ref(v___x_3358_);
lean_inc_ref(v_a_3346_);
lean_inc_ref(v_value_3351_);
v___x_3360_ = l_Lean_Compiler_LCNF_Simp_simp(v_value_3351_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3362_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_a_3361_);
lean_dec_ref(v___x_3360_);
v___x_3362_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3355_, v_decl_3340_, v___x_3357_, v_a_3359_, v_a_3361_, v_a_3345_, v_a_3347_);
return v___x_3362_;
}
else
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3370_; 
lean_dec(v_a_3359_);
lean_dec_ref(v___x_3357_);
lean_dec_ref(v_decl_3340_);
v_a_3363_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3365_ = v___x_3360_;
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3360_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec_ref(v___x_3357_);
lean_dec_ref(v_decl_3340_);
v_a_3371_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3358_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3358_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpFunDecl___boxed(lean_object* v_decl_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lean_Compiler_LCNF_Simp_simpFunDecl(v_decl_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_);
lean_dec(v_a_3386_);
lean_dec_ref(v_a_3385_);
lean_dec(v_a_3384_);
lean_dec_ref(v_a_3383_);
lean_dec_ref(v_a_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_a_3380_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8___boxed(lean_object* v_fvarId_3389_, lean_object* v_i_3390_, lean_object* v_as_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Simp_simp_spec__8(v_fvarId_3389_, v_i_3390_, v_as_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f___boxed(lean_object* v_cases_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f(v_cases_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_);
lean_dec(v_a_3408_);
lean_dec_ref(v_a_3407_);
lean_dec(v_a_3406_);
lean_dec_ref(v_a_3405_);
lean_dec_ref(v_a_3404_);
lean_dec(v_a_3403_);
lean_dec_ref(v_a_3402_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineApp_x3f___boxed(lean_object* v_letDecl_3411_, lean_object* v_k_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_){
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l_Lean_Compiler_LCNF_Simp_inlineApp_x3f(v_letDecl_3411_, v_k_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_);
lean_dec(v_a_3419_);
lean_dec_ref(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3416_);
lean_dec_ref(v_a_3415_);
lean_dec(v_a_3414_);
lean_dec_ref(v_a_3413_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simp___boxed(lean_object* v_code_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_3422_, v_a_3423_, v_a_3424_, v_a_3425_, v_a_3426_, v_a_3427_, v_a_3428_, v_a_3429_);
lean_dec(v_a_3429_);
lean_dec(v_a_3427_);
lean_dec_ref(v_a_3426_);
lean_dec_ref(v_a_3425_);
lean_dec(v_a_3424_);
lean_dec_ref(v_a_3423_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(uint8_t v_pu_3432_, uint8_t v_t_3433_, lean_object* v_decl_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___redArg(v_pu_3432_, v_t_3433_, v_decl_3434_, v___y_3436_, v___y_3439_, v___y_3441_);
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4___boxed(lean_object* v_pu_3444_, lean_object* v_t_3445_, lean_object* v_decl_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
uint8_t v_pu_boxed_3455_; uint8_t v_t_boxed_3456_; lean_object* v_res_3457_; 
v_pu_boxed_3455_ = lean_unbox(v_pu_3444_);
v_t_boxed_3456_ = lean_unbox(v_t_3445_);
v_res_3457_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_Simp_simp_spec__4(v_pu_boxed_3455_, v_t_boxed_3456_, v_decl_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec(v___y_3451_);
lean_dec_ref(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(uint8_t v_pu_3458_, uint8_t v_t_3459_, lean_object* v_args_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___redArg(v_pu_3458_, v_t_3459_, v_args_3460_, v___y_3462_, v___y_3467_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5___boxed(lean_object* v_pu_3470_, lean_object* v_t_3471_, lean_object* v_args_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_){
_start:
{
uint8_t v_pu_boxed_3481_; uint8_t v_t_boxed_3482_; lean_object* v_res_3483_; 
v_pu_boxed_3481_ = lean_unbox(v_pu_3470_);
v_t_boxed_3482_ = lean_unbox(v_t_3471_);
v_res_3483_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_Simp_simp_spec__5(v_pu_boxed_3481_, v_t_boxed_3482_, v_args_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0(lean_object* v_inst_3484_, lean_object* v_R_3485_, lean_object* v_a_3486_, lean_object* v_b_3487_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__0___redArg(v_a_3486_, v_b_3487_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1(lean_object* v_00_u03b2_3489_, lean_object* v_x_3490_, lean_object* v_x_3491_, lean_object* v_x_3492_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1___redArg(v_x_3490_, v_x_3491_, v_x_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(lean_object* v_as_3494_, size_t v_i_3495_, size_t v_stop_3496_, lean_object* v_b_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___redArg(v_as_3494_, v_i_3495_, v_stop_3496_, v_b_3497_, v___y_3499_, v___y_3504_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6___boxed(lean_object* v_as_3507_, lean_object* v_i_3508_, lean_object* v_stop_3509_, lean_object* v_b_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
size_t v_i_boxed_3519_; size_t v_stop_boxed_3520_; lean_object* v_res_3521_; 
v_i_boxed_3519_ = lean_unbox_usize(v_i_3508_);
lean_dec(v_i_3508_);
v_stop_boxed_3520_ = lean_unbox_usize(v_stop_3509_);
lean_dec(v_stop_3509_);
v_res_3521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__6(v_as_3507_, v_i_boxed_3519_, v_stop_boxed_3520_, v_b_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec_ref(v_as_3507_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(lean_object* v_as_3522_, size_t v_i_3523_, size_t v_stop_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v___x_3533_; 
v___x_3533_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___redArg(v_as_3522_, v_i_3523_, v_stop_3524_, v___y_3531_);
return v___x_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7___boxed(lean_object* v_as_3534_, lean_object* v_i_3535_, lean_object* v_stop_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_){
_start:
{
size_t v_i_boxed_3545_; size_t v_stop_boxed_3546_; lean_object* v_res_3547_; 
v_i_boxed_3545_ = lean_unbox_usize(v_i_3535_);
lean_dec(v_i_3535_);
v_stop_boxed_3546_ = lean_unbox_usize(v_stop_3536_);
lean_dec(v_stop_3536_);
v_res_3547_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__7(v_as_3534_, v_i_boxed_3545_, v_stop_boxed_3546_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_, v___y_3543_);
lean_dec(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3541_);
lean_dec_ref(v___y_3540_);
lean_dec_ref(v___y_3539_);
lean_dec(v___y_3538_);
lean_dec_ref(v___y_3537_);
lean_dec_ref(v_as_3534_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(lean_object* v_as_3548_, size_t v_i_3549_, size_t v_stop_3550_, lean_object* v_b_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v___x_3557_; 
v___x_3557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___redArg(v_as_3548_, v_i_3549_, v_stop_3550_, v_b_3551_, v___y_3553_, v___y_3555_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9___boxed(lean_object* v_as_3558_, lean_object* v_i_3559_, lean_object* v_stop_3560_, lean_object* v_b_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
size_t v_i_boxed_3567_; size_t v_stop_boxed_3568_; lean_object* v_res_3569_; 
v_i_boxed_3567_ = lean_unbox_usize(v_i_3559_);
lean_dec(v_i_3559_);
v_stop_boxed_3568_ = lean_unbox_usize(v_stop_3560_);
lean_dec(v_stop_3560_);
v_res_3569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__9(v_as_3558_, v_i_boxed_3567_, v_stop_boxed_3568_, v_b_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec_ref(v_as_3558_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(lean_object* v_as_3570_, size_t v_i_3571_, size_t v_stop_3572_, lean_object* v_b_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___redArg(v_as_3570_, v_i_3571_, v_stop_3572_, v_b_3573_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10___boxed(lean_object* v_as_3583_, lean_object* v_i_3584_, lean_object* v_stop_3585_, lean_object* v_b_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
size_t v_i_boxed_3595_; size_t v_stop_boxed_3596_; lean_object* v_res_3597_; 
v_i_boxed_3595_ = lean_unbox_usize(v_i_3584_);
lean_dec(v_i_3584_);
v_stop_boxed_3596_ = lean_unbox_usize(v_stop_3585_);
lean_dec(v_stop_3585_);
v_res_3597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__10(v_as_3583_, v_i_boxed_3595_, v_stop_boxed_3596_, v_b_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec_ref(v___y_3589_);
lean_dec(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec_ref(v_as_3583_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(lean_object* v_as_3598_, size_t v_i_3599_, size_t v_stop_3600_, lean_object* v_b_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
lean_object* v___x_3610_; 
v___x_3610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___redArg(v_as_3598_, v_i_3599_, v_stop_3600_, v_b_3601_, v___y_3606_, v___y_3608_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12___boxed(lean_object* v_as_3611_, lean_object* v_i_3612_, lean_object* v_stop_3613_, lean_object* v_b_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
size_t v_i_boxed_3623_; size_t v_stop_boxed_3624_; lean_object* v_res_3625_; 
v_i_boxed_3623_ = lean_unbox_usize(v_i_3612_);
lean_dec(v_i_3612_);
v_stop_boxed_3624_ = lean_unbox_usize(v_stop_3613_);
lean_dec(v_stop_3613_);
v_res_3625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_simp_spec__12(v_as_3611_, v_i_boxed_3623_, v_stop_boxed_3624_, v_b_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec_ref(v___y_3617_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec_ref(v_as_3611_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(lean_object* v_as_3626_, size_t v_i_3627_, size_t v_stop_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v___x_3637_; 
v___x_3637_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___redArg(v_as_3626_, v_i_3627_, v_stop_3628_, v___y_3630_, v___y_3635_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13___boxed(lean_object* v_as_3638_, lean_object* v_i_3639_, lean_object* v_stop_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
size_t v_i_boxed_3649_; size_t v_stop_boxed_3650_; lean_object* v_res_3651_; 
v_i_boxed_3649_ = lean_unbox_usize(v_i_3639_);
lean_dec(v_i_3639_);
v_stop_boxed_3650_ = lean_unbox_usize(v_stop_3640_);
lean_dec(v_stop_3640_);
v_res_3651_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Simp_simp_spec__13(v_as_3638_, v_i_boxed_3649_, v_stop_boxed_3650_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec_ref(v_as_3638_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(lean_object* v_as_3652_, size_t v_sz_3653_, size_t v_i_3654_, lean_object* v_b_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___redArg(v_as_3652_, v_sz_3653_, v_i_3654_, v_b_3655_, v___y_3657_, v___y_3662_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15___boxed(lean_object* v_as_3665_, lean_object* v_sz_3666_, lean_object* v_i_3667_, lean_object* v_b_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
size_t v_sz_boxed_3677_; size_t v_i_boxed_3678_; lean_object* v_res_3679_; 
v_sz_boxed_3677_ = lean_unbox_usize(v_sz_3666_);
lean_dec(v_sz_3666_);
v_i_boxed_3678_ = lean_unbox_usize(v_i_3667_);
lean_dec(v_i_3667_);
v_res_3679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_simpCasesOnCtor_x3f_spec__15(v_as_3665_, v_sz_boxed_3677_, v_i_boxed_3678_, v_b_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec_ref(v___y_3671_);
lean_dec(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec_ref(v_as_3665_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(lean_object* v_00_u03b2_3680_, lean_object* v_x_3681_, size_t v_x_3682_, size_t v_x_3683_, lean_object* v_x_3684_, lean_object* v_x_3685_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___redArg(v_x_3681_, v_x_3682_, v_x_3683_, v_x_3684_, v_x_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3687_, lean_object* v_x_3688_, lean_object* v_x_3689_, lean_object* v_x_3690_, lean_object* v_x_3691_, lean_object* v_x_3692_){
_start:
{
size_t v_x_52089__boxed_3693_; size_t v_x_52090__boxed_3694_; lean_object* v_res_3695_; 
v_x_52089__boxed_3693_ = lean_unbox_usize(v_x_3689_);
lean_dec(v_x_3689_);
v_x_52090__boxed_3694_ = lean_unbox_usize(v_x_3690_);
lean_dec(v_x_3690_);
v_res_3695_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1(v_00_u03b2_3687_, v_x_3688_, v_x_52089__boxed_3693_, v_x_52090__boxed_3694_, v_x_3691_, v_x_3692_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(uint8_t v_pu_3696_, uint8_t v_t_3697_, lean_object* v_i_3698_, lean_object* v_as_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___redArg(v_pu_3696_, v_t_3697_, v_i_3698_, v_as_3699_, v___y_3701_, v___y_3704_, v___y_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18___boxed(lean_object* v_pu_3709_, lean_object* v_t_3710_, lean_object* v_i_3711_, lean_object* v_as_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
uint8_t v_pu_boxed_3721_; uint8_t v_t_boxed_3722_; lean_object* v_res_3723_; 
v_pu_boxed_3721_ = lean_unbox(v_pu_3709_);
v_t_boxed_3722_ = lean_unbox(v_t_3710_);
v_res_3723_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_Simp_simpFunDecl_spec__17_spec__18(v_pu_boxed_3721_, v_t_boxed_3722_, v_i_3711_, v_as_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_);
lean_dec(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8(lean_object* v_00_u03b2_3724_, lean_object* v_n_3725_, lean_object* v_k_3726_, lean_object* v_v_3727_){
_start:
{
lean_object* v___x_3728_; 
v___x_3728_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8___redArg(v_n_3725_, v_k_3726_, v_v_3727_);
return v___x_3728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(lean_object* v_00_u03b2_3729_, size_t v_depth_3730_, lean_object* v_keys_3731_, lean_object* v_vals_3732_, lean_object* v_heq_3733_, lean_object* v_i_3734_, lean_object* v_entries_3735_){
_start:
{
lean_object* v___x_3736_; 
v___x_3736_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___redArg(v_depth_3730_, v_keys_3731_, v_vals_3732_, v_i_3734_, v_entries_3735_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b2_3737_, lean_object* v_depth_3738_, lean_object* v_keys_3739_, lean_object* v_vals_3740_, lean_object* v_heq_3741_, lean_object* v_i_3742_, lean_object* v_entries_3743_){
_start:
{
size_t v_depth_boxed_3744_; lean_object* v_res_3745_; 
v_depth_boxed_3744_ = lean_unbox_usize(v_depth_3738_);
lean_dec(v_depth_3738_);
v_res_3745_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__9(v_00_u03b2_3737_, v_depth_boxed_3744_, v_keys_3739_, v_vals_3740_, v_heq_3741_, v_i_3742_, v_entries_3743_);
lean_dec_ref(v_vals_3740_);
lean_dec_ref(v_keys_3739_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19(lean_object* v_00_u03b2_3746_, lean_object* v_x_3747_, lean_object* v_x_3748_, lean_object* v_x_3749_, lean_object* v_x_3750_){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Compiler_LCNF_Simp_inlineApp_x3f_spec__1_spec__1_spec__8_spec__19___redArg(v_x_3747_, v_x_3748_, v_x_3749_, v_x_3750_);
return v___x_3751_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_ConstantFold(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_ConstantFold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
}
#ifdef __cplusplus
}
#endif
