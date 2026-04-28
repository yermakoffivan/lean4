// Lean compiler output
// Module: Lean.Compiler.LCNF.ToMono
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.InferType public import Lean.Compiler.NoncomputableAttr public import Lean.Compiler.LCNF.MonoTypes import Init.While
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
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default(uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedLetValue_default(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(uint8_t);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__13;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__14;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__15;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__16;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__17;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__27;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__28;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__29;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__30;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__31;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_decToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_decToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__13;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__14;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__15;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__16;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__17;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_toMono___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMono___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_toMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMono___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_toMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMono___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_toMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMono___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_key_3_; lean_object* v_value_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_28_; 
v_key_3_ = lean_ctor_get(v_x_2_, 0);
v_value_4_ = lean_ctor_get(v_x_2_, 1);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_value_4_);
lean_inc(v_key_3_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_28_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; uint64_t v___x_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v_fold_13_; uint64_t v___x_14_; uint64_t v___x_15_; uint64_t v___x_16_; size_t v___x_17_; size_t v___x_18_; size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_9_ = lean_array_get_size(v_x_1_);
v___x_10_ = l_Lean_instHashableFVarId_hash(v_key_3_);
v___x_11_ = 32ULL;
v___x_12_ = lean_uint64_shift_right(v___x_10_, v___x_11_);
v_fold_13_ = lean_uint64_xor(v___x_10_, v___x_12_);
v___x_14_ = 16ULL;
v___x_15_ = lean_uint64_shift_right(v_fold_13_, v___x_14_);
v___x_16_ = lean_uint64_xor(v_fold_13_, v___x_15_);
v___x_17_ = lean_uint64_to_usize(v___x_16_);
v___x_18_ = lean_usize_of_nat(v___x_9_);
v___x_19_ = ((size_t)1ULL);
v___x_20_ = lean_usize_sub(v___x_18_, v___x_19_);
v___x_21_ = lean_usize_land(v___x_17_, v___x_20_);
v___x_22_ = lean_array_uget_borrowed(v_x_1_, v___x_21_);
lean_inc(v___x_22_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v___x_22_);
v___x_24_ = v___x_7_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_key_3_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_value_4_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v___x_22_);
v___x_24_ = v_reuseFailAlloc_27_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_array_uset(v_x_1_, v___x_21_, v___x_24_);
v_x_1_ = v___x_25_;
v_x_2_ = v_tail_5_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_array_get_size(v_source_30_);
v___x_33_ = lean_nat_dec_lt(v_i_29_, v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v_source_30_);
lean_dec(v_i_29_);
return v_target_31_;
}
else
{
lean_object* v_es_34_; lean_object* v___x_35_; lean_object* v_source_36_; lean_object* v_target_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_es_34_ = lean_array_fget(v_source_30_, v_i_29_);
v___x_35_ = lean_box(0);
v_source_36_ = lean_array_fset(v_source_30_, v_i_29_, v___x_35_);
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
v___x_38_ = lean_unsigned_to_nat(1u);
v___x_39_ = lean_nat_add(v_i_29_, v___x_38_);
lean_dec(v_i_29_);
v_i_29_ = v___x_39_;
v_source_30_ = v_source_36_;
v_target_31_ = v_target_37_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(lean_object* v_a_49_, lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 0;
return v___x_51_;
}
else
{
lean_object* v_key_52_; lean_object* v_tail_53_; uint8_t v___x_54_; 
v_key_52_ = lean_ctor_get(v_x_50_, 0);
v_tail_53_ = lean_ctor_get(v_x_50_, 2);
v___x_54_ = l_Lean_instBEqFVarId_beq(v_key_52_, v_a_49_);
if (v___x_54_ == 0)
{
v_x_50_ = v_tail_53_;
goto _start;
}
else
{
return v___x_54_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg___boxed(lean_object* v_a_56_, lean_object* v_x_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_56_, v_x_57_);
lean_dec(v_x_57_);
lean_dec(v_a_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(lean_object* v_m_60_, lean_object* v_a_61_, lean_object* v_b_62_){
_start:
{
lean_object* v_size_63_; lean_object* v_buckets_64_; lean_object* v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v_fold_69_; uint64_t v___x_70_; uint64_t v___x_71_; uint64_t v___x_72_; size_t v___x_73_; size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; size_t v___x_77_; lean_object* v_bkt_78_; uint8_t v___x_79_; 
v_size_63_ = lean_ctor_get(v_m_60_, 0);
v_buckets_64_ = lean_ctor_get(v_m_60_, 1);
v___x_65_ = lean_array_get_size(v_buckets_64_);
v___x_66_ = l_Lean_instHashableFVarId_hash(v_a_61_);
v___x_67_ = 32ULL;
v___x_68_ = lean_uint64_shift_right(v___x_66_, v___x_67_);
v_fold_69_ = lean_uint64_xor(v___x_66_, v___x_68_);
v___x_70_ = 16ULL;
v___x_71_ = lean_uint64_shift_right(v_fold_69_, v___x_70_);
v___x_72_ = lean_uint64_xor(v_fold_69_, v___x_71_);
v___x_73_ = lean_uint64_to_usize(v___x_72_);
v___x_74_ = lean_usize_of_nat(v___x_65_);
v___x_75_ = ((size_t)1ULL);
v___x_76_ = lean_usize_sub(v___x_74_, v___x_75_);
v___x_77_ = lean_usize_land(v___x_73_, v___x_76_);
v_bkt_78_ = lean_array_uget_borrowed(v_buckets_64_, v___x_77_);
v___x_79_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_61_, v_bkt_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_100_; 
lean_inc_ref(v_buckets_64_);
lean_inc(v_size_63_);
v_isSharedCheck_100_ = !lean_is_exclusive(v_m_60_);
if (v_isSharedCheck_100_ == 0)
{
lean_object* v_unused_101_; lean_object* v_unused_102_; 
v_unused_101_ = lean_ctor_get(v_m_60_, 1);
lean_dec(v_unused_101_);
v_unused_102_ = lean_ctor_get(v_m_60_, 0);
lean_dec(v_unused_102_);
v___x_81_ = v_m_60_;
v_isShared_82_ = v_isSharedCheck_100_;
goto v_resetjp_80_;
}
else
{
lean_dec(v_m_60_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_100_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v_size_x27_84_; lean_object* v___x_85_; lean_object* v_buckets_x27_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_83_ = lean_unsigned_to_nat(1u);
v_size_x27_84_ = lean_nat_add(v_size_63_, v___x_83_);
lean_dec(v_size_63_);
lean_inc(v_bkt_78_);
v___x_85_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_85_, 0, v_a_61_);
lean_ctor_set(v___x_85_, 1, v_b_62_);
lean_ctor_set(v___x_85_, 2, v_bkt_78_);
v_buckets_x27_86_ = lean_array_uset(v_buckets_64_, v___x_77_, v___x_85_);
v___x_87_ = lean_unsigned_to_nat(4u);
v___x_88_ = lean_nat_mul(v_size_x27_84_, v___x_87_);
v___x_89_ = lean_unsigned_to_nat(3u);
v___x_90_ = lean_nat_div(v___x_88_, v___x_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_array_get_size(v_buckets_x27_86_);
v___x_92_ = lean_nat_dec_le(v___x_90_, v___x_91_);
lean_dec(v___x_90_);
if (v___x_92_ == 0)
{
lean_object* v_val_93_; lean_object* v___x_95_; 
v_val_93_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_buckets_x27_86_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 1, v_val_93_);
lean_ctor_set(v___x_81_, 0, v_size_x27_84_);
v___x_95_ = v___x_81_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_size_x27_84_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_val_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
else
{
lean_object* v___x_98_; 
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 1, v_buckets_x27_86_);
lean_ctor_set(v___x_81_, 0, v_size_x27_84_);
v___x_98_ = v___x_81_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_size_x27_84_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_buckets_x27_86_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
else
{
lean_dec(v_b_62_);
lean_dec(v_a_61_);
return v_m_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object* v_param_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_fvarId_109_; lean_object* v_type_110_; lean_object* v___y_112_; lean_object* v___y_113_; lean_object* v___y_114_; uint8_t v___x_127_; 
v_fvarId_109_ = lean_ctor_get(v_param_103_, 0);
v_type_110_ = lean_ctor_get(v_param_103_, 2);
lean_inc_ref(v_type_110_);
v___x_127_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_110_);
if (v___x_127_ == 0)
{
v___y_112_ = v_a_105_;
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
goto v___jp_111_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = lean_st_ref_get(v_a_107_);
lean_dec(v___x_128_);
v___x_129_ = lean_st_ref_take(v_a_104_);
v___x_130_ = lean_box(0);
lean_inc(v_fvarId_109_);
v___x_131_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v___x_129_, v_fvarId_109_, v___x_130_);
v___x_132_ = lean_st_ref_set(v_a_104_, v___x_131_);
v___y_112_ = v_a_105_;
v___y_113_ = v_a_106_;
v___y_114_ = v_a_107_;
goto v___jp_111_;
}
v___jp_111_:
{
lean_object* v___x_115_; 
lean_inc_ref(v_type_110_);
v___x_115_ = l_Lean_Compiler_LCNF_toMonoType(v_type_110_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; uint8_t v___x_117_; lean_object* v___x_118_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_a_116_);
lean_dec_ref(v___x_115_);
v___x_117_ = 0;
v___x_118_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v___x_117_, v_param_103_, v_a_116_, v___y_112_, v___y_114_);
return v___x_118_;
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec_ref(v_param_103_);
v_a_119_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_115_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_115_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object* v_param_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec(v_a_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object* v_param_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_140_, v_a_141_, v_a_143_, v_a_144_, v_a_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object* v_param_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_Param_toMono(v_param_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0(lean_object* v_00_u03b2_156_, lean_object* v_m_157_, lean_object* v_a_158_, lean_object* v_b_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0___redArg(v_m_157_, v_a_158_, v_b_159_);
return v___x_160_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(lean_object* v_00_u03b2_161_, lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_162_, v_x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___boxed(lean_object* v_00_u03b2_165_, lean_object* v_a_166_, lean_object* v_x_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0(v_00_u03b2_165_, v_a_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec(v_a_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1(lean_object* v_00_u03b2_170_, lean_object* v_data_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1___redArg(v_data_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_173_, lean_object* v_i_174_, lean_object* v_source_175_, lean_object* v_target_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2___redArg(v_i_174_, v_source_175_, v_target_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_178_, lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__1_spec__2_spec__3___redArg(v_x_179_, v_x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_closure((void*)(l_Lean_instBEqFVarId_beq___boxed), 2, 0);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_closure((void*)(l_Lean_instHashableFVarId_hash___boxed), 1, 0);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object* v_arg_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
if (lean_obj_tag(v_arg_184_) == 1)
{
lean_object* v_fvarId_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_fvarId_188_ = lean_ctor_get(v_arg_184_, 0);
v___x_189_ = lean_st_ref_get(v_a_186_);
lean_dec(v___x_189_);
v___x_190_ = lean_st_ref_get(v_a_185_);
v___x_191_ = lean_obj_once(&l_Lean_Compiler_LCNF_argToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__0);
v___x_192_ = lean_obj_once(&l_Lean_Compiler_LCNF_argToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__1);
lean_inc(v_fvarId_188_);
v___x_193_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_191_, v___x_192_, v___x_190_, v_fvarId_188_);
lean_dec(v___x_190_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v_arg_184_);
return v___x_194_;
}
else
{
lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_202_; 
v_isSharedCheck_202_ = !lean_is_exclusive(v_arg_184_);
if (v_isSharedCheck_202_ == 0)
{
lean_object* v_unused_203_; 
v_unused_203_ = lean_ctor_get(v_arg_184_, 0);
lean_dec(v_unused_203_);
v___x_196_ = v_arg_184_;
v_isShared_197_ = v_isSharedCheck_202_;
goto v_resetjp_195_;
}
else
{
lean_dec(v_arg_184_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_202_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = lean_box(0);
if (v_isShared_197_ == 0)
{
lean_ctor_set_tag(v___x_196_, 0);
lean_ctor_set(v___x_196_, 0, v___x_198_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec(v_arg_184_);
v___x_204_ = lean_box(0);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object* v_arg_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Compiler_LCNF_argToMono___redArg(v_arg_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object* v_arg_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
if (lean_obj_tag(v_arg_211_) == 1)
{
lean_object* v_fvarId_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_fvarId_218_ = lean_ctor_get(v_arg_211_, 0);
v___x_219_ = lean_st_ref_get(v_a_216_);
lean_dec(v___x_219_);
v___x_220_ = lean_st_ref_get(v_a_212_);
v___x_221_ = lean_obj_once(&l_Lean_Compiler_LCNF_argToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_argToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__0);
v___x_222_ = lean_obj_once(&l_Lean_Compiler_LCNF_argToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_argToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_argToMono___redArg___closed__1);
lean_inc(v_fvarId_218_);
v___x_223_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_221_, v___x_222_, v___x_220_, v_fvarId_218_);
lean_dec(v___x_220_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v_arg_211_);
return v___x_224_;
}
else
{
lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_232_; 
v_isSharedCheck_232_ = !lean_is_exclusive(v_arg_211_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_arg_211_, 0);
lean_dec(v_unused_233_);
v___x_226_ = v_arg_211_;
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
else
{
lean_dec(v_arg_211_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
if (v_isShared_227_ == 0)
{
lean_ctor_set_tag(v___x_226_, 0);
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_arg_211_);
v___x_234_ = lean_box(0);
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object* v_arg_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_Compiler_LCNF_argToMono(v_arg_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
return v_res_243_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object* v_m_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_buckets_246_; lean_object* v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v_fold_251_; uint64_t v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; size_t v___x_258_; size_t v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v_buckets_246_ = lean_ctor_get(v_m_244_, 1);
v___x_247_ = lean_array_get_size(v_buckets_246_);
v___x_248_ = l_Lean_instHashableFVarId_hash(v_a_245_);
v___x_249_ = 32ULL;
v___x_250_ = lean_uint64_shift_right(v___x_248_, v___x_249_);
v_fold_251_ = lean_uint64_xor(v___x_248_, v___x_250_);
v___x_252_ = 16ULL;
v___x_253_ = lean_uint64_shift_right(v_fold_251_, v___x_252_);
v___x_254_ = lean_uint64_xor(v_fold_251_, v___x_253_);
v___x_255_ = lean_uint64_to_usize(v___x_254_);
v___x_256_ = lean_usize_of_nat(v___x_247_);
v___x_257_ = ((size_t)1ULL);
v___x_258_ = lean_usize_sub(v___x_256_, v___x_257_);
v___x_259_ = lean_usize_land(v___x_255_, v___x_258_);
v___x_260_ = lean_array_uget_borrowed(v_buckets_246_, v___x_259_);
v___x_261_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Param_toMono_spec__0_spec__0___redArg(v_a_245_, v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object* v_m_262_, lean_object* v_a_263_){
_start:
{
uint8_t v_res_264_; lean_object* v_r_265_; 
v_res_264_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_262_, v_a_263_);
lean_dec(v_a_263_);
lean_dec_ref(v_m_262_);
v_r_265_ = lean_box(v_res_264_);
return v_r_265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(lean_object* v_as_266_, size_t v_sz_267_, size_t v_i_268_, lean_object* v_b_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
uint8_t v___x_273_; 
v___x_273_ = lean_usize_dec_lt(v_i_268_, v_sz_267_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v_b_269_);
return v___x_274_;
}
else
{
lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_319_; 
v_fst_275_ = lean_ctor_get(v_b_269_, 0);
v_snd_276_ = lean_ctor_get(v_b_269_, 1);
v_isSharedCheck_319_ = !lean_is_exclusive(v_b_269_);
if (v_isSharedCheck_319_ == 0)
{
v___x_278_ = v_b_269_;
v_isShared_279_ = v_isSharedCheck_319_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_snd_276_);
lean_inc(v_fst_275_);
lean_dec(v_b_269_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_319_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_monoArg_281_; lean_object* v_remainingType_282_; lean_object* v_a_290_; lean_object* v___y_292_; lean_object* v___y_293_; 
v_a_290_ = lean_array_uget_borrowed(v_as_266_, v_i_268_);
if (lean_obj_tag(v_fst_275_) == 1)
{
lean_object* v_val_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_318_; 
v_val_301_ = lean_ctor_get(v_fst_275_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_fst_275_);
if (v_isSharedCheck_318_ == 0)
{
v___x_303_ = v_fst_275_;
v_isShared_304_ = v_isSharedCheck_318_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_val_301_);
lean_dec(v_fst_275_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_318_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
if (lean_obj_tag(v_val_301_) == 7)
{
lean_object* v_binderType_305_; lean_object* v_body_306_; lean_object* v___x_308_; 
v_binderType_305_ = lean_ctor_get(v_val_301_, 1);
lean_inc_ref(v_binderType_305_);
v_body_306_ = lean_ctor_get(v_val_301_, 2);
lean_inc_ref(v_body_306_);
lean_dec_ref(v_val_301_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v_body_306_);
v___x_308_ = v___x_303_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_body_306_);
v___x_308_ = v_reuseFailAlloc_317_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
uint8_t v___x_309_; 
v___x_309_ = l_Lean_Expr_isErased(v_binderType_305_);
lean_dec_ref(v_binderType_305_);
if (v___x_309_ == 0)
{
if (lean_obj_tag(v_a_290_) == 1)
{
lean_object* v_fvarId_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_fvarId_310_ = lean_ctor_get(v_a_290_, 0);
v___x_311_ = lean_st_ref_get(v___y_271_);
lean_dec(v___x_311_);
v___x_312_ = lean_st_ref_get(v___y_270_);
v___x_313_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_312_, v_fvarId_310_);
lean_dec(v___x_312_);
if (v___x_313_ == 0)
{
lean_inc_ref(v_a_290_);
v_monoArg_281_ = v_a_290_;
v_remainingType_282_ = v___x_308_;
goto v___jp_280_;
}
else
{
lean_object* v___x_314_; 
v___x_314_ = lean_box(0);
v_monoArg_281_ = v___x_314_;
v_remainingType_282_ = v___x_308_;
goto v___jp_280_;
}
}
else
{
lean_object* v___x_315_; 
v___x_315_ = lean_box(0);
v_monoArg_281_ = v___x_315_;
v_remainingType_282_ = v___x_308_;
goto v___jp_280_;
}
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_box(0);
v_monoArg_281_ = v___x_316_;
v_remainingType_282_ = v___x_308_;
goto v___jp_280_;
}
}
}
else
{
lean_del_object(v___x_303_);
lean_dec(v_val_301_);
v___y_292_ = v___y_270_;
v___y_293_ = v___y_271_;
goto v___jp_291_;
}
}
}
else
{
lean_dec(v_fst_275_);
v___y_292_ = v___y_270_;
v___y_293_ = v___y_271_;
goto v___jp_291_;
}
v___jp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = lean_array_push(v_snd_276_, v_monoArg_281_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 1, v___x_283_);
lean_ctor_set(v___x_278_, 0, v_remainingType_282_);
v___x_285_ = v___x_278_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_remainingType_282_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_283_);
v___x_285_ = v_reuseFailAlloc_289_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
size_t v___x_286_; size_t v___x_287_; 
v___x_286_ = ((size_t)1ULL);
v___x_287_ = lean_usize_add(v_i_268_, v___x_286_);
v_i_268_ = v___x_287_;
v_b_269_ = v___x_285_;
goto _start;
}
}
v___jp_291_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_box(0);
if (lean_obj_tag(v_a_290_) == 1)
{
lean_object* v_fvarId_295_; lean_object* v___x_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_fvarId_295_ = lean_ctor_get(v_a_290_, 0);
v___x_296_ = lean_st_ref_get(v___y_293_);
lean_dec(v___x_296_);
v___x_297_ = lean_st_ref_get(v___y_292_);
v___x_298_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_297_, v_fvarId_295_);
lean_dec(v___x_297_);
if (v___x_298_ == 0)
{
lean_inc_ref(v_a_290_);
v_monoArg_281_ = v_a_290_;
v_remainingType_282_ = v___x_294_;
goto v___jp_280_;
}
else
{
lean_object* v___x_299_; 
v___x_299_ = lean_box(0);
v_monoArg_281_ = v___x_299_;
v_remainingType_282_ = v___x_294_;
goto v___jp_280_;
}
}
else
{
lean_object* v___x_300_; 
v___x_300_ = lean_box(0);
v_monoArg_281_ = v___x_300_;
v_remainingType_282_ = v___x_294_;
goto v___jp_280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg___boxed(lean_object* v_as_320_, lean_object* v_sz_321_, lean_object* v_i_322_, lean_object* v_b_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
size_t v_sz_boxed_327_; size_t v_i_boxed_328_; lean_object* v_res_329_; 
v_sz_boxed_327_ = lean_unbox_usize(v_sz_321_);
lean_dec(v_sz_321_);
v_i_boxed_328_ = lean_unbox_usize(v_i_322_);
lean_dec(v_i_322_);
v_res_329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_320_, v_sz_boxed_327_, v_i_boxed_328_, v_b_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v_as_320_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object* v_args_330_, lean_object* v_type_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_remainingType_338_; lean_object* v___x_339_; lean_object* v_result_340_; lean_object* v___x_341_; size_t v_sz_342_; size_t v___x_343_; lean_object* v___x_344_; 
v_remainingType_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_remainingType_338_, 0, v_type_331_);
v___x_339_ = lean_array_get_size(v_args_330_);
v_result_340_ = lean_mk_empty_array_with_capacity(v___x_339_);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v_remainingType_338_);
lean_ctor_set(v___x_341_, 1, v_result_340_);
v_sz_342_ = lean_array_size(v_args_330_);
v___x_343_ = ((size_t)0ULL);
v___x_344_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_args_330_, v_sz_342_, v___x_343_, v___x_341_, v_a_332_, v_a_336_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_snd_349_; lean_object* v___x_351_; 
v_snd_349_ = lean_ctor_get(v_a_345_, 1);
lean_inc(v_snd_349_);
lean_dec(v_a_345_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v_snd_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_snd_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_344_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_344_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object* v_args_362_, lean_object* v_type_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_362_, v_type_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_args_362_);
return v_res_370_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object* v_00_u03b2_371_, lean_object* v_m_372_, lean_object* v_a_373_){
_start:
{
uint8_t v___x_374_; 
v___x_374_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_m_372_, v_a_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object* v_00_u03b2_375_, lean_object* v_m_376_, lean_object* v_a_377_){
_start:
{
uint8_t v_res_378_; lean_object* v_r_379_; 
v_res_378_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(v_00_u03b2_375_, v_m_376_, v_a_377_);
lean_dec(v_a_377_);
lean_dec_ref(v_m_376_);
v_r_379_ = lean_box(v_res_378_);
return v_r_379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(lean_object* v_as_380_, size_t v_sz_381_, size_t v_i_382_, lean_object* v_b_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___redArg(v_as_380_, v_sz_381_, v_i_382_, v_b_383_, v___y_384_, v___y_388_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1___boxed(lean_object* v_as_391_, lean_object* v_sz_392_, lean_object* v_i_393_, lean_object* v_b_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
size_t v_sz_boxed_401_; size_t v_i_boxed_402_; lean_object* v_res_403_; 
v_sz_boxed_401_ = lean_unbox_usize(v_sz_392_);
lean_dec(v_sz_392_);
v_i_boxed_402_ = lean_unbox_usize(v_i_393_);
lean_dec(v_i_393_);
v_res_403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__1(v_as_391_, v_sz_boxed_401_, v_i_boxed_402_, v_b_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v_as_391_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg(lean_object* v_a_404_, lean_object* v_b_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_array_409_; lean_object* v_start_410_; lean_object* v_stop_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_433_; 
v_array_409_ = lean_ctor_get(v_a_404_, 0);
v_start_410_ = lean_ctor_get(v_a_404_, 1);
v_stop_411_ = lean_ctor_get(v_a_404_, 2);
v_isSharedCheck_433_ = !lean_is_exclusive(v_a_404_);
if (v_isSharedCheck_433_ == 0)
{
v___x_413_ = v_a_404_;
v_isShared_414_ = v_isSharedCheck_433_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_stop_411_);
lean_inc(v_start_410_);
lean_inc(v_array_409_);
lean_dec(v_a_404_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_433_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_start_410_, v_stop_411_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_del_object(v___x_413_);
lean_dec(v_stop_411_);
lean_dec(v_start_410_);
lean_dec_ref(v_array_409_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v_b_405_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_417_ = lean_unsigned_to_nat(1u);
v___x_418_ = lean_nat_add(v_start_410_, v___x_417_);
lean_inc_ref(v_array_409_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 1, v___x_418_);
v___x_420_ = v___x_413_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_array_409_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v_stop_411_);
v___x_420_ = v_reuseFailAlloc_432_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v_a_422_; lean_object* v___x_425_; 
v___x_425_ = lean_array_fget(v_array_409_, v_start_410_);
lean_dec(v_start_410_);
lean_dec_ref(v_array_409_);
if (lean_obj_tag(v___x_425_) == 1)
{
lean_object* v_fvarId_426_; lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v_fvarId_426_ = lean_ctor_get(v___x_425_, 0);
v___x_427_ = lean_st_ref_get(v___y_407_);
lean_dec(v___x_427_);
v___x_428_ = lean_st_ref_get(v___y_406_);
v___x_429_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_428_, v_fvarId_426_);
lean_dec(v___x_428_);
if (v___x_429_ == 0)
{
v_a_422_ = v___x_425_;
goto v___jp_421_;
}
else
{
lean_object* v___x_430_; 
lean_dec_ref(v___x_425_);
v___x_430_ = lean_box(0);
v_a_422_ = v___x_430_;
goto v___jp_421_;
}
}
else
{
lean_object* v___x_431_; 
lean_dec(v___x_425_);
v___x_431_ = lean_box(0);
v_a_422_ = v___x_431_;
goto v___jp_421_;
}
v___jp_421_:
{
lean_object* v___x_423_; 
v___x_423_ = lean_array_push(v_b_405_, v_a_422_);
v_a_404_ = v___x_420_;
v_b_405_ = v___x_423_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg___boxed(lean_object* v_a_434_, lean_object* v_b_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg(v_a_434_, v_b_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec(v___y_436_);
return v_res_439_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0(void){
_start:
{
uint8_t v___x_440_; lean_object* v___x_441_; 
v___x_440_ = 0;
v___x_441_ = l_Lean_Compiler_LCNF_instInhabitedParam_default(v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg(lean_object* v_params_442_, lean_object* v_fvarId_443_, lean_object* v_b_444_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_fvarId_448_; uint8_t v___x_449_; 
v___x_446_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_447_ = lean_array_get_borrowed(v___x_446_, v_params_442_, v_b_444_);
v_fvarId_448_ = lean_ctor_get(v___x_447_, 0);
v___x_449_ = l_Lean_instBEqFVarId_beq(v_fvarId_448_, v_fvarId_443_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = lean_nat_add(v_b_444_, v___x_450_);
lean_dec(v_b_444_);
v_b_444_ = v___x_451_;
goto _start;
}
else
{
lean_object* v___x_453_; 
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v_b_444_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___boxed(lean_object* v_params_454_, lean_object* v_fvarId_455_, lean_object* v_b_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg(v_params_454_, v_fvarId_455_, v_b_456_);
lean_dec(v_fvarId_455_);
lean_dec_ref(v_params_454_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1(lean_object* v_params_459_, lean_object* v_args_460_, lean_object* v_as_461_, size_t v_sz_462_, size_t v_i_463_, lean_object* v_b_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_a_472_; uint8_t v___x_476_; 
v___x_476_ = lean_usize_dec_lt(v_i_463_, v_sz_462_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v_b_464_);
return v___x_477_;
}
else
{
lean_object* v_fst_478_; lean_object* v_snd_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_512_; 
v_fst_478_ = lean_ctor_get(v_b_464_, 0);
v_snd_479_ = lean_ctor_get(v_b_464_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_b_464_);
if (v_isSharedCheck_512_ == 0)
{
v___x_481_ = v_b_464_;
v_isShared_482_ = v_isSharedCheck_512_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_snd_479_);
lean_inc(v_fst_478_);
lean_dec(v_b_464_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_512_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v_a_483_; 
v_a_483_ = lean_array_uget_borrowed(v_as_461_, v_i_463_);
if (lean_obj_tag(v_a_483_) == 1)
{
lean_object* v_fvarId_484_; lean_object* v___x_485_; 
v_fvarId_484_ = lean_ctor_get(v_a_483_, 0);
v___x_485_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg(v_params_459_, v_fvarId_484_, v_snd_479_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v_a_488_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref(v___x_485_);
v___x_495_ = lean_box(0);
v___x_496_ = lean_array_get_borrowed(v___x_495_, v_args_460_, v_a_486_);
if (lean_obj_tag(v___x_496_) == 1)
{
lean_object* v_fvarId_497_; lean_object* v___x_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v_fvarId_497_ = lean_ctor_get(v___x_496_, 0);
v___x_498_ = lean_st_ref_get(v___y_469_);
lean_dec(v___x_498_);
v___x_499_ = lean_st_ref_get(v___y_465_);
v___x_500_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_499_, v_fvarId_497_);
lean_dec(v___x_499_);
if (v___x_500_ == 0)
{
lean_inc_ref(v___x_496_);
v_a_488_ = v___x_496_;
goto v___jp_487_;
}
else
{
v_a_488_ = v___x_495_;
goto v___jp_487_;
}
}
else
{
v_a_488_ = v___x_495_;
goto v___jp_487_;
}
v___jp_487_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = lean_nat_add(v_a_486_, v___x_489_);
lean_dec(v_a_486_);
v___x_491_ = lean_array_push(v_fst_478_, v_a_488_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v___x_490_);
lean_ctor_set(v___x_481_, 0, v___x_491_);
v___x_493_ = v___x_481_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v___x_490_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_a_472_ = v___x_493_;
goto v___jp_471_;
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_del_object(v___x_481_);
lean_dec(v_fst_478_);
v_a_501_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_485_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_485_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
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
lean_object* v___x_510_; 
if (v_isShared_482_ == 0)
{
v___x_510_ = v___x_481_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_fst_478_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_snd_479_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
v_a_472_ = v___x_510_;
goto v___jp_471_;
}
}
}
}
v___jp_471_:
{
size_t v___x_473_; size_t v___x_474_; 
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_463_, v___x_473_);
v_i_463_ = v___x_474_;
v_b_464_ = v_a_472_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1___boxed(lean_object* v_params_513_, lean_object* v_args_514_, lean_object* v_as_515_, lean_object* v_sz_516_, lean_object* v_i_517_, lean_object* v_b_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
size_t v_sz_boxed_525_; size_t v_i_boxed_526_; lean_object* v_res_527_; 
v_sz_boxed_525_ = lean_unbox_usize(v_sz_516_);
lean_dec(v_sz_516_);
v_i_boxed_526_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_res_527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1(v_params_513_, v_args_514_, v_as_515_, v_sz_boxed_525_, v_i_boxed_526_, v_b_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v_as_515_);
lean_dec_ref(v_args_514_);
lean_dec_ref(v_params_513_);
return v_res_527_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0(void){
_start:
{
lean_object* v___x_528_; lean_object* v_result_529_; 
v___x_528_ = lean_unsigned_to_nat(0u);
v_result_529_ = lean_mk_empty_array_with_capacity(v___x_528_);
return v_result_529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1(void){
_start:
{
lean_object* v___x_530_; lean_object* v_result_531_; lean_object* v___x_532_; 
v___x_530_ = lean_unsigned_to_nat(0u);
v_result_531_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v_result_531_);
lean_ctor_set(v___x_532_, 1, v___x_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg(lean_object* v_args_533_, lean_object* v_params_534_, lean_object* v_redArgs_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; size_t v_sz_544_; size_t v___x_545_; lean_object* v___x_546_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__1);
v_sz_544_ = lean_array_size(v_redArgs_535_);
v___x_545_ = ((size_t)0ULL);
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__1(v_params_534_, v_args_533_, v_redArgs_535_, v_sz_544_, v___x_545_, v___x_543_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v_fst_548_; lean_object* v_lower_550_; lean_object* v_upper_551_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref(v___x_546_);
v_fst_548_ = lean_ctor_get(v_a_547_, 0);
lean_inc(v_fst_548_);
lean_dec(v_a_547_);
v___x_554_ = lean_array_get_size(v_params_534_);
v___x_555_ = lean_array_get_size(v_args_533_);
v___x_556_ = lean_nat_dec_le(v___x_554_, v___x_542_);
if (v___x_556_ == 0)
{
v_lower_550_ = v___x_554_;
v_upper_551_ = v___x_555_;
goto v___jp_549_;
}
else
{
v_lower_550_ = v___x_542_;
v_upper_551_ = v___x_555_;
goto v___jp_549_;
}
v___jp_549_:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = l_Array_toSubarray___redArg(v_args_533_, v_lower_550_, v_upper_551_);
v___x_553_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg(v___x_552_, v_fst_548_, v_a_536_, v_a_540_);
return v___x_553_;
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_args_533_);
v_a_557_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_546_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_546_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoRedArg___boxed(lean_object* v_args_565_, lean_object* v_params_566_, lean_object* v_redArgs_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Compiler_LCNF_argsToMonoRedArg(v_args_565_, v_params_566_, v_redArgs_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec_ref(v_redArgs_567_);
lean_dec_ref(v_params_566_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0(lean_object* v_params_575_, lean_object* v_fvarId_576_, lean_object* v_b_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg(v_params_575_, v_fvarId_576_, v_b_577_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___boxed(lean_object* v_params_585_, lean_object* v_fvarId_586_, lean_object* v_b_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0(v_params_585_, v_fvarId_586_, v_b_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec(v_fvarId_586_);
lean_dec_ref(v_params_585_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2(lean_object* v_inst_595_, lean_object* v_R_596_, lean_object* v_a_597_, lean_object* v_b_598_, lean_object* v_c_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___redArg(v_a_597_, v_b_598_, v___y_600_, v___y_604_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2___boxed(lean_object* v_inst_607_, lean_object* v_R_608_, lean_object* v_a_609_, lean_object* v_b_610_, lean_object* v_c_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__2(v_inst_607_, v_R_608_, v_a_609_, v_b_610_, v_c_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t v_sz_619_, size_t v_i_620_, lean_object* v_bs_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = lean_usize_dec_lt(v_i_620_, v_sz_619_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v_bs_621_);
return v___x_626_;
}
else
{
lean_object* v_v_627_; lean_object* v___x_628_; lean_object* v_bs_x27_629_; lean_object* v_a_631_; 
v_v_627_ = lean_array_uget(v_bs_621_, v_i_620_);
v___x_628_ = lean_unsigned_to_nat(0u);
v_bs_x27_629_ = lean_array_uset(v_bs_621_, v_i_620_, v___x_628_);
if (lean_obj_tag(v_v_627_) == 1)
{
lean_object* v_fvarId_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_fvarId_636_ = lean_ctor_get(v_v_627_, 0);
v___x_637_ = lean_st_ref_get(v___y_623_);
lean_dec(v___x_637_);
v___x_638_ = lean_st_ref_get(v___y_622_);
v___x_639_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_638_, v_fvarId_636_);
lean_dec(v___x_638_);
if (v___x_639_ == 0)
{
v_a_631_ = v_v_627_;
goto v___jp_630_;
}
else
{
lean_object* v___x_640_; 
lean_dec_ref(v_v_627_);
v___x_640_ = lean_box(0);
v_a_631_ = v___x_640_;
goto v___jp_630_;
}
}
else
{
lean_object* v___x_641_; 
lean_dec(v_v_627_);
v___x_641_ = lean_box(0);
v_a_631_ = v___x_641_;
goto v___jp_630_;
}
v___jp_630_:
{
size_t v___x_632_; size_t v___x_633_; lean_object* v___x_634_; 
v___x_632_ = ((size_t)1ULL);
v___x_633_ = lean_usize_add(v_i_620_, v___x_632_);
v___x_634_ = lean_array_uset(v_bs_x27_629_, v_i_620_, v_a_631_);
v_i_620_ = v___x_633_;
v_bs_621_ = v___x_634_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object* v_sz_642_, lean_object* v_i_643_, lean_object* v_bs_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
size_t v_sz_boxed_648_; size_t v_i_boxed_649_; lean_object* v_res_650_; 
v_sz_boxed_648_ = lean_unbox_usize(v_sz_642_);
lean_dec(v_sz_642_);
v_i_boxed_649_ = lean_unbox_usize(v_i_643_);
lean_dec(v_i_643_);
v_res_650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_boxed_648_, v_i_boxed_649_, v_bs_644_, v___y_645_, v___y_646_);
lean_dec(v___y_646_);
lean_dec(v___y_645_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object* v_a_651_, lean_object* v_b_652_){
_start:
{
lean_object* v_array_653_; lean_object* v_start_654_; lean_object* v_stop_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_668_; 
v_array_653_ = lean_ctor_get(v_a_651_, 0);
v_start_654_ = lean_ctor_get(v_a_651_, 1);
v_stop_655_ = lean_ctor_get(v_a_651_, 2);
v_isSharedCheck_668_ = !lean_is_exclusive(v_a_651_);
if (v_isSharedCheck_668_ == 0)
{
v___x_657_ = v_a_651_;
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_stop_655_);
lean_inc(v_start_654_);
lean_inc(v_array_653_);
lean_dec(v_a_651_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
uint8_t v___x_659_; 
v___x_659_ = lean_nat_dec_lt(v_start_654_, v_stop_655_);
if (v___x_659_ == 0)
{
lean_del_object(v___x_657_);
lean_dec(v_stop_655_);
lean_dec(v_start_654_);
lean_dec_ref(v_array_653_);
return v_b_652_;
}
else
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_660_ = lean_unsigned_to_nat(1u);
v___x_661_ = lean_nat_add(v_start_654_, v___x_660_);
lean_inc_ref(v_array_653_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_661_);
v___x_663_ = v___x_657_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_array_653_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_667_, 2, v_stop_655_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_array_fget(v_array_653_, v_start_654_);
lean_dec(v_start_654_);
lean_dec_ref(v_array_653_);
v___x_665_ = lean_array_push(v_b_652_, v___x_664_);
v_a_651_ = v___x_663_;
v_b_652_ = v___x_665_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object* v_ctorInfo_669_, lean_object* v_args_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_toConstantVal_677_; lean_object* v_numParams_678_; lean_object* v___x_679_; lean_object* v_argsNewParams_680_; lean_object* v_lower_682_; lean_object* v_upper_683_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v_toConstantVal_677_ = lean_ctor_get(v_ctorInfo_669_, 0);
lean_inc_ref(v_toConstantVal_677_);
v_numParams_678_ = lean_ctor_get(v_ctorInfo_669_, 3);
lean_inc_n(v_numParams_678_, 2);
lean_dec_ref(v_ctorInfo_669_);
v___x_679_ = lean_box(0);
v_argsNewParams_680_ = lean_mk_array(v_numParams_678_, v___x_679_);
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = lean_array_get_size(v_args_670_);
v___x_720_ = lean_nat_dec_le(v_numParams_678_, v___x_718_);
if (v___x_720_ == 0)
{
v_lower_682_ = v_numParams_678_;
v_upper_683_ = v___x_719_;
goto v___jp_681_;
}
else
{
lean_dec(v_numParams_678_);
v_lower_682_ = v___x_718_;
v_upper_683_ = v___x_719_;
goto v___jp_681_;
}
v___jp_681_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; size_t v_sz_687_; size_t v___x_688_; lean_object* v___x_689_; 
v___x_684_ = l_Array_toSubarray___redArg(v_args_670_, v_lower_682_, v_upper_683_);
v___x_685_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_686_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v___x_684_, v___x_685_);
v_sz_687_ = lean_array_size(v___x_686_);
v___x_688_ = ((size_t)0ULL);
v___x_689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_687_, v___x_688_, v___x_686_, v_a_671_, v_a_675_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_709_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_709_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_709_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_709_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v_name_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_706_; 
v_name_694_ = lean_ctor_get(v_toConstantVal_677_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_toConstantVal_677_);
if (v_isSharedCheck_706_ == 0)
{
lean_object* v_unused_707_; lean_object* v_unused_708_; 
v_unused_707_ = lean_ctor_get(v_toConstantVal_677_, 2);
lean_dec(v_unused_707_);
v_unused_708_ = lean_ctor_get(v_toConstantVal_677_, 1);
lean_dec(v_unused_708_);
v___x_696_ = v_toConstantVal_677_;
v_isShared_697_ = v_isSharedCheck_706_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_name_694_);
lean_dec(v_toConstantVal_677_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_706_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_698_ = l_Array_append___redArg(v_argsNewParams_680_, v_a_690_);
lean_dec(v_a_690_);
v___x_699_ = lean_box(0);
if (v_isShared_697_ == 0)
{
lean_ctor_set_tag(v___x_696_, 3);
lean_ctor_set(v___x_696_, 2, v___x_698_);
lean_ctor_set(v___x_696_, 1, v___x_699_);
v___x_701_ = v___x_696_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_name_694_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_699_);
lean_ctor_set(v_reuseFailAlloc_705_, 2, v___x_698_);
v___x_701_ = v_reuseFailAlloc_705_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_703_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_701_);
v___x_703_ = v___x_692_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec_ref(v_argsNewParams_680_);
lean_dec_ref(v_toConstantVal_677_);
v_a_710_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_689_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_689_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object* v_ctorInfo_721_, lean_object* v_args_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_ctorInfo_721_, v_args_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object* v_inst_730_, lean_object* v_R_731_, lean_object* v_a_732_, lean_object* v_b_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v_a_732_, v_b_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t v_sz_735_, size_t v_i_736_, lean_object* v_bs_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_735_, v_i_736_, v_bs_737_, v___y_738_, v___y_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object* v_sz_745_, lean_object* v_i_746_, lean_object* v_bs_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
size_t v_sz_boxed_754_; size_t v_i_boxed_755_; lean_object* v_res_756_; 
v_sz_boxed_754_ = lean_unbox_usize(v_sz_745_);
lean_dec(v_sz_745_);
v_i_boxed_755_ = lean_unbox_usize(v_i_746_);
lean_dec(v_i_746_);
v_res_756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(v_sz_boxed_754_, v_i_boxed_755_, v_bs_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
return v_res_756_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0(void){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_instMonadEIO(lean_box(0));
return v___x_757_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1(void){
_start:
{
lean_object* v___f_758_; 
v___f_758_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_758_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2(void){
_start:
{
lean_object* v___f_759_; 
v___f_759_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_759_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3(void){
_start:
{
lean_object* v___f_760_; 
v___f_760_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed), 7, 0);
return v___f_760_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4(void){
_start:
{
lean_object* v___f_761_; 
v___f_761_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed), 9, 0);
return v___f_761_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5(void){
_start:
{
uint8_t v___x_762_; lean_object* v___x_763_; 
v___x_762_ = 0;
v___x_763_ = l_Lean_Compiler_LCNF_instInhabitedLetValue_default(v___x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object* v_msg_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_toApplicative_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_835_; 
v___x_771_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_772_ = l_StateRefT_x27_instMonad___redArg(v___x_771_);
v_toApplicative_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_835_ == 0)
{
lean_object* v_unused_836_; 
v_unused_836_ = lean_ctor_get(v___x_772_, 1);
lean_dec(v_unused_836_);
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_835_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_toApplicative_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_835_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v_toFunctor_777_; lean_object* v_toSeq_778_; lean_object* v_toSeqLeft_779_; lean_object* v_toSeqRight_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_833_; 
v_toFunctor_777_ = lean_ctor_get(v_toApplicative_773_, 0);
v_toSeq_778_ = lean_ctor_get(v_toApplicative_773_, 2);
v_toSeqLeft_779_ = lean_ctor_get(v_toApplicative_773_, 3);
v_toSeqRight_780_ = lean_ctor_get(v_toApplicative_773_, 4);
v_isSharedCheck_833_ = !lean_is_exclusive(v_toApplicative_773_);
if (v_isSharedCheck_833_ == 0)
{
lean_object* v_unused_834_; 
v_unused_834_ = lean_ctor_get(v_toApplicative_773_, 1);
lean_dec(v_unused_834_);
v___x_782_ = v_toApplicative_773_;
v_isShared_783_ = v_isSharedCheck_833_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_toSeqRight_780_);
lean_inc(v_toSeqLeft_779_);
lean_inc(v_toSeq_778_);
lean_inc(v_toFunctor_777_);
lean_dec(v_toApplicative_773_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_833_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___f_789_; lean_object* v___f_790_; lean_object* v___f_791_; lean_object* v___x_793_; 
v___f_784_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1);
v___f_785_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2);
lean_inc_ref(v_toFunctor_777_);
v___f_786_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_786_, 0, v_toFunctor_777_);
v___f_787_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_787_, 0, v_toFunctor_777_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v___f_786_);
lean_ctor_set(v___x_788_, 1, v___f_787_);
v___f_789_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_789_, 0, v_toSeqRight_780_);
v___f_790_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_790_, 0, v_toSeqLeft_779_);
v___f_791_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_791_, 0, v_toSeq_778_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 4, v___f_789_);
lean_ctor_set(v___x_782_, 3, v___f_790_);
lean_ctor_set(v___x_782_, 2, v___f_791_);
lean_ctor_set(v___x_782_, 1, v___f_784_);
lean_ctor_set(v___x_782_, 0, v___x_788_);
v___x_793_ = v___x_782_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v___f_784_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v___f_791_);
lean_ctor_set(v_reuseFailAlloc_832_, 3, v___f_790_);
lean_ctor_set(v_reuseFailAlloc_832_, 4, v___f_789_);
v___x_793_ = v_reuseFailAlloc_832_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_795_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v___f_785_);
lean_ctor_set(v___x_775_, 0, v___x_793_);
v___x_795_ = v___x_775_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v___f_785_);
v___x_795_ = v_reuseFailAlloc_831_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
lean_object* v___x_796_; lean_object* v_toApplicative_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_829_; 
v___x_796_ = l_StateRefT_x27_instMonad___redArg(v___x_795_);
v_toApplicative_797_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_829_ == 0)
{
lean_object* v_unused_830_; 
v_unused_830_ = lean_ctor_get(v___x_796_, 1);
lean_dec(v_unused_830_);
v___x_799_ = v___x_796_;
v_isShared_800_ = v_isSharedCheck_829_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_toApplicative_797_);
lean_dec(v___x_796_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_829_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v_toFunctor_801_; lean_object* v_toSeq_802_; lean_object* v_toSeqLeft_803_; lean_object* v_toSeqRight_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_827_; 
v_toFunctor_801_ = lean_ctor_get(v_toApplicative_797_, 0);
v_toSeq_802_ = lean_ctor_get(v_toApplicative_797_, 2);
v_toSeqLeft_803_ = lean_ctor_get(v_toApplicative_797_, 3);
v_toSeqRight_804_ = lean_ctor_get(v_toApplicative_797_, 4);
v_isSharedCheck_827_ = !lean_is_exclusive(v_toApplicative_797_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; 
v_unused_828_ = lean_ctor_get(v_toApplicative_797_, 1);
lean_dec(v_unused_828_);
v___x_806_ = v_toApplicative_797_;
v_isShared_807_ = v_isSharedCheck_827_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_toSeqRight_804_);
lean_inc(v_toSeqLeft_803_);
lean_inc(v_toSeq_802_);
lean_inc(v_toFunctor_801_);
lean_dec(v_toApplicative_797_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_827_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___f_808_; lean_object* v___f_809_; lean_object* v___f_810_; lean_object* v___f_811_; lean_object* v___x_812_; lean_object* v___f_813_; lean_object* v___f_814_; lean_object* v___f_815_; lean_object* v___x_817_; 
v___f_808_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3);
v___f_809_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4);
lean_inc_ref(v_toFunctor_801_);
v___f_810_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_810_, 0, v_toFunctor_801_);
v___f_811_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_811_, 0, v_toFunctor_801_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v___f_810_);
lean_ctor_set(v___x_812_, 1, v___f_811_);
v___f_813_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_813_, 0, v_toSeqRight_804_);
v___f_814_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_814_, 0, v_toSeqLeft_803_);
v___f_815_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_815_, 0, v_toSeq_802_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 4, v___f_813_);
lean_ctor_set(v___x_806_, 3, v___f_814_);
lean_ctor_set(v___x_806_, 2, v___f_815_);
lean_ctor_set(v___x_806_, 1, v___f_808_);
lean_ctor_set(v___x_806_, 0, v___x_812_);
v___x_817_ = v___x_806_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v___f_808_);
lean_ctor_set(v_reuseFailAlloc_826_, 2, v___f_815_);
lean_ctor_set(v_reuseFailAlloc_826_, 3, v___f_814_);
lean_ctor_set(v_reuseFailAlloc_826_, 4, v___f_813_);
v___x_817_ = v_reuseFailAlloc_826_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_819_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___f_809_);
lean_ctor_set(v___x_799_, 0, v___x_817_);
v___x_819_ = v___x_799_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v___f_809_);
v___x_819_ = v_reuseFailAlloc_825_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_13876__overap_823_; lean_object* v___x_824_; 
v___x_820_ = l_StateRefT_x27_instMonad___redArg(v___x_819_);
v___x_821_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5);
v___x_822_ = l_instInhabitedOfMonad___redArg(v___x_820_, v___x_821_);
v___x_13876__overap_823_ = lean_panic_fn_borrowed(v___x_822_, v_msg_764_);
lean_dec(v___x_822_);
lean_inc(v___y_769_);
lean_inc_ref(v___y_768_);
lean_inc(v___y_767_);
lean_inc_ref(v___y_766_);
lean_inc(v___y_765_);
v___x_824_ = lean_apply_6(v___x_13876__overap_823_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, lean_box(0));
return v___x_824_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object* v_msg_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v_msg_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object* v_upperBound_845_, lean_object* v_args_846_, lean_object* v_a_847_, lean_object* v_b_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_a_853_; uint8_t v___x_858_; 
v___x_858_ = lean_nat_dec_lt(v_a_847_, v_upperBound_845_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
lean_dec(v_a_847_);
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v_b_848_);
return v___x_859_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_box(0);
v___x_861_ = lean_array_get_borrowed(v___x_860_, v_args_846_, v_a_847_);
if (lean_obj_tag(v___x_861_) == 1)
{
lean_object* v_fvarId_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_fvarId_862_ = lean_ctor_get(v___x_861_, 0);
v___x_863_ = lean_st_ref_get(v___y_850_);
lean_dec(v___x_863_);
v___x_864_ = lean_st_ref_get(v___y_849_);
v___x_865_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_864_, v_fvarId_862_);
lean_dec(v___x_864_);
if (v___x_865_ == 0)
{
lean_inc_ref(v___x_861_);
v_a_853_ = v___x_861_;
goto v___jp_852_;
}
else
{
v_a_853_ = v___x_860_;
goto v___jp_852_;
}
}
else
{
v_a_853_ = v___x_860_;
goto v___jp_852_;
}
}
v___jp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_array_push(v_b_848_, v_a_853_);
v___x_855_ = lean_unsigned_to_nat(1u);
v___x_856_ = lean_nat_add(v_a_847_, v___x_855_);
lean_dec(v_a_847_);
v_a_847_ = v___x_856_;
v_b_848_ = v___x_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object* v_upperBound_866_, lean_object* v_args_867_, lean_object* v_a_868_, lean_object* v_b_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_866_, v_args_867_, v_a_868_, v_b_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v_args_867_);
lean_dec(v_upperBound_866_);
return v_res_873_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__0(void){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = lean_mk_string_unchecked("_redArg", 7, 7);
return v___x_874_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__1(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__0);
v___x_876_ = l_Lean_Name_mkStr1(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__2(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_mk_string_unchecked("Decidable", 9, 9);
return v___x_877_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__3(void){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = lean_mk_string_unchecked("isTrue", 6, 6);
return v___x_878_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__4(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_879_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__3);
v___x_880_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__2);
v___x_881_ = l_Lean_Name_mkStr2(v___x_880_, v___x_879_);
return v___x_881_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__5(void){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lean_mk_string_unchecked("isFalse", 7, 7);
return v___x_882_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__6(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__5);
v___x_884_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__2);
v___x_885_ = l_Lean_Name_mkStr2(v___x_884_, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__7(void){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lean_mk_string_unchecked("decide", 6, 6);
return v___x_886_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__8(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__7);
v___x_888_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__2);
v___x_889_ = l_Lean_Name_mkStr2(v___x_888_, v___x_887_);
return v___x_889_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__9(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = lean_mk_string_unchecked("Quot", 4, 4);
return v___x_890_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__10(void){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__11(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__10, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__10);
v___x_893_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__9);
v___x_894_ = l_Lean_Name_mkStr2(v___x_893_, v___x_892_);
return v___x_894_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__12(void){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_mk_string_unchecked("lcInv", 5, 5);
return v___x_895_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__12, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__12);
v___x_897_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__9);
v___x_898_ = l_Lean_Name_mkStr2(v___x_897_, v___x_896_);
return v___x_898_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14(void){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_899_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__15(void){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = lean_mk_string_unchecked("zero", 4, 4);
return v___x_900_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__16(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_901_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__15, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__15);
v___x_902_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_903_ = l_Lean_Name_mkStr2(v___x_902_, v___x_901_);
return v___x_903_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__17(void){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = lean_mk_string_unchecked("succ", 4, 4);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__18(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_905_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__17, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__17_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__17);
v___x_906_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_907_ = l_Lean_Name_mkStr2(v___x_906_, v___x_905_);
return v___x_907_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19(void){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.ToMono", 25, 25);
return v___x_908_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__20(void){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.LetValue.toMono", 34, 34);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_910_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__22(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_911_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_912_ = lean_unsigned_to_nat(6u);
v___x_913_ = lean_unsigned_to_nat(109u);
v___x_914_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__20, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__20_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__20);
v___x_915_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_916_ = l_mkPanicMessageWithDecl(v___x_915_, v___x_914_, v___x_913_, v___x_912_, v___x_911_);
return v___x_916_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__23(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__24(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__23, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__23_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__23);
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__25(void){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_921_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__26(void){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_922_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__27(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__26, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__26_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__26);
v___x_924_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__25, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__25_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__25);
v___x_925_ = l_Lean_Name_mkStr2(v___x_924_, v___x_923_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__28(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_926_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_927_ = lean_box(0);
v___x_928_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__27, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__27_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__27);
v___x_929_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
lean_ctor_set(v___x_929_, 1, v___x_927_);
lean_ctor_set(v___x_929_, 2, v___x_926_);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__29(void){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_930_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__30(void){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__29, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__29_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__29);
v___x_932_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__25, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__25_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__25);
v___x_933_ = l_Lean_Name_mkStr2(v___x_932_, v___x_931_);
return v___x_933_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__31(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_934_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_935_ = lean_box(0);
v___x_936_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__30, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__30_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__30);
v___x_937_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___x_935_);
lean_ctor_set(v___x_937_, 2, v___x_934_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object* v_e_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
switch(lean_obj_tag(v_e_938_))
{
case 2:
{
lean_object* v_typeName_945_; lean_object* v_idx_946_; lean_object* v_struct_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v_typeName_945_ = lean_ctor_get(v_e_938_, 0);
v_idx_946_ = lean_ctor_get(v_e_938_, 1);
v_struct_947_ = lean_ctor_get(v_e_938_, 2);
v___x_948_ = lean_st_ref_get(v_a_943_);
lean_dec(v___x_948_);
v___x_949_ = lean_st_ref_get(v_a_939_);
v___x_950_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_949_, v_struct_947_);
lean_dec(v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
lean_inc(v_typeName_945_);
v___x_951_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_945_, v_a_942_, v_a_943_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_971_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_971_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_971_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_971_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
if (lean_obj_tag(v_a_952_) == 1)
{
lean_object* v_val_956_; lean_object* v_fieldIdx_957_; uint8_t v___x_958_; 
lean_inc(v_struct_947_);
lean_inc(v_idx_946_);
lean_dec_ref(v_e_938_);
v_val_956_ = lean_ctor_get(v_a_952_, 0);
lean_inc(v_val_956_);
lean_dec_ref(v_a_952_);
v_fieldIdx_957_ = lean_ctor_get(v_val_956_, 2);
lean_inc(v_fieldIdx_957_);
lean_dec(v_val_956_);
v___x_958_ = lean_nat_dec_eq(v_fieldIdx_957_, v_idx_946_);
lean_dec(v_idx_946_);
lean_dec(v_fieldIdx_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_961_; 
lean_dec(v_struct_947_);
v___x_959_ = lean_box(1);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_959_);
v___x_961_ = v___x_954_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_963_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_964_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_964_, 0, v_struct_947_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_964_);
v___x_966_ = v___x_954_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
else
{
lean_object* v___x_969_; 
lean_dec(v_a_952_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v_e_938_);
v___x_969_ = v___x_954_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_e_938_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref(v_e_938_);
v_a_972_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_951_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_951_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref(v_e_938_);
v___x_980_ = lean_box(1);
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
case 3:
{
lean_object* v_declName_982_; lean_object* v_args_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1190_; 
v_declName_982_ = lean_ctor_get(v_e_938_, 0);
v_args_983_ = lean_ctor_get(v_e_938_, 2);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_e_938_);
if (v_isSharedCheck_1190_ == 0)
{
lean_object* v_unused_1191_; 
v_unused_1191_ = lean_ctor_get(v_e_938_, 1);
lean_dec(v_unused_1191_);
v___x_985_ = v_e_938_;
v_isShared_986_ = v_isSharedCheck_1190_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_args_983_);
lean_inc(v_declName_982_);
lean_dec(v_e_938_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1190_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v_type_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; uint8_t v___y_1025_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__4);
v___x_1106_ = lean_name_eq(v_declName_982_, v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1107_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__6);
v___x_1108_ = lean_name_eq(v_declName_982_, v___x_1107_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1109_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__8);
v___x_1110_ = lean_name_eq(v_declName_982_, v___x_1109_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__11, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__11);
v___x_1112_ = lean_name_eq(v_declName_982_, v___x_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__13, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13);
v___x_1114_ = lean_name_eq(v_declName_982_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__16, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__16_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__16);
v___x_1116_ = lean_name_eq(v_declName_982_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1117_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__18, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__18_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__18);
v___x_1118_ = lean_name_eq(v_declName_982_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v_env_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_st_ref_get(v_a_943_);
v_env_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc_ref(v_env_1120_);
lean_dec(v___x_1119_);
lean_inc(v_declName_982_);
v___x_1121_ = l_Lean_Environment_find_x3f(v_env_1120_, v_declName_982_, v___x_1118_);
if (lean_obj_tag(v___x_1121_) == 1)
{
lean_object* v_val_1122_; 
v_val_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_val_1122_);
lean_dec_ref(v___x_1121_);
if (lean_obj_tag(v_val_1122_) == 6)
{
lean_object* v_val_1123_; lean_object* v_induct_1124_; lean_object* v_numParams_1125_; lean_object* v___x_1126_; 
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v_val_1123_ = lean_ctor_get(v_val_1122_, 0);
lean_inc_ref(v_val_1123_);
lean_dec_ref(v_val_1122_);
v_induct_1124_ = lean_ctor_get(v_val_1123_, 1);
v_numParams_1125_ = lean_ctor_get(v_val_1123_, 3);
lean_inc(v_induct_1124_);
v___x_1126_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_induct_1124_, v_a_942_, v_a_943_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref(v___x_1126_);
if (lean_obj_tag(v_a_1127_) == 1)
{
lean_object* v_val_1128_; lean_object* v_fieldIdx_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_inc(v_numParams_1125_);
lean_dec_ref(v_val_1123_);
v_val_1128_ = lean_ctor_get(v_a_1127_, 0);
lean_inc(v_val_1128_);
lean_dec_ref(v_a_1127_);
v_fieldIdx_1129_ = lean_ctor_get(v_val_1128_, 2);
lean_inc(v_fieldIdx_1129_);
lean_dec(v_val_1128_);
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_nat_add(v_numParams_1125_, v_fieldIdx_1129_);
lean_dec(v_fieldIdx_1129_);
lean_dec(v_numParams_1125_);
v___x_1132_ = lean_array_get(v___x_1130_, v_args_983_, v___x_1131_);
lean_dec(v___x_1131_);
lean_dec_ref(v_args_983_);
v___x_1133_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_1132_);
lean_dec(v___x_1132_);
v_e_938_ = v___x_1133_;
goto _start;
}
else
{
lean_object* v___x_1135_; 
lean_dec(v_a_1127_);
v___x_1135_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_val_1123_, v_args_983_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_);
return v___x_1135_;
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec_ref(v_val_1123_);
lean_dec_ref(v_args_983_);
v_a_1136_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1126_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1126_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
else
{
lean_dec(v_val_1122_);
v___y_1048_ = v_a_939_;
v___y_1049_ = v_a_940_;
v___y_1050_ = v_a_941_;
v___y_1051_ = v_a_942_;
v___y_1052_ = v_a_943_;
goto v___jp_1047_;
}
}
else
{
lean_dec(v___x_1121_);
v___y_1048_ = v_a_939_;
v___y_1049_ = v_a_940_;
v___y_1050_ = v_a_941_;
v___y_1051_ = v_a_942_;
v___y_1052_ = v_a_943_;
goto v___jp_1047_;
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_del_object(v___x_985_);
lean_dec_ref(v_args_983_);
lean_dec(v_declName_982_);
v___x_1144_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__22, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__22_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__22);
v___x_1145_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v___x_1144_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_);
return v___x_1145_;
}
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_del_object(v___x_985_);
lean_dec_ref(v_args_983_);
lean_dec(v_declName_982_);
v___x_1146_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__24, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__24_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__24);
v___x_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v___x_1148_ = lean_box(0);
v___x_1149_ = lean_unsigned_to_nat(2u);
v___x_1150_ = lean_array_get_borrowed(v___x_1148_, v_args_983_, v___x_1149_);
if (lean_obj_tag(v___x_1150_) == 1)
{
lean_object* v_fvarId_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v_extraArgs_1155_; lean_object* v___x_1156_; 
v_fvarId_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_fvarId_1151_);
v___x_1152_ = lean_array_get_size(v_args_983_);
v___x_1153_ = lean_unsigned_to_nat(3u);
v___x_1154_ = lean_nat_sub(v___x_1152_, v___x_1153_);
v_extraArgs_1155_ = lean_mk_empty_array_with_capacity(v___x_1154_);
lean_dec(v___x_1154_);
v___x_1156_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v___x_1152_, v_args_983_, v___x_1153_, v_extraArgs_1155_, v_a_939_, v_a_943_);
lean_dec_ref(v_args_983_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1165_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_fvarId_1151_);
lean_ctor_set(v___x_1161_, 1, v_a_1157_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_fvarId_1151_);
v_a_1166_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1156_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1156_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
else
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec_ref(v_args_983_);
v___x_1174_ = lean_box(1);
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
return v___x_1175_;
}
}
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_unsigned_to_nat(2u);
v___x_1178_ = lean_array_get(v___x_1176_, v_args_983_, v___x_1177_);
lean_dec_ref(v_args_983_);
v___x_1179_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_1178_);
lean_dec(v___x_1178_);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_unsigned_to_nat(1u);
v___x_1183_ = lean_array_get(v___x_1181_, v_args_983_, v___x_1182_);
lean_dec_ref(v_args_983_);
v___x_1184_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_1183_);
lean_dec(v___x_1183_);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_del_object(v___x_985_);
lean_dec_ref(v_args_983_);
lean_dec(v_declName_982_);
v___x_1186_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__28, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__28_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__28);
v___x_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
return v___x_1187_;
}
}
else
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_del_object(v___x_985_);
lean_dec_ref(v_args_983_);
lean_dec(v_declName_982_);
v___x_1188_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__31, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__31_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__31);
v___x_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
return v___x_1189_;
}
v___jp_987_:
{
lean_object* v___x_994_; 
v___x_994_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_983_, v_type_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec_ref(v_args_983_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1006_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = lean_box(0);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 2, v_a_995_);
lean_ctor_set(v___x_985_, 1, v___x_999_);
v___x_1001_ = v___x_985_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_declName_982_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_a_995_);
v___x_1001_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1003_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1001_);
v___x_1003_ = v___x_997_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v_a_1007_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_994_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_994_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
v___jp_1015_:
{
if (v___y_1025_ == 0)
{
lean_object* v_toSignature_1026_; lean_object* v_type_1027_; 
lean_dec_ref(v___y_1020_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
v_toSignature_1026_ = lean_ctor_get(v___y_1023_, 0);
lean_inc_ref(v_toSignature_1026_);
lean_dec_ref(v___y_1023_);
v_type_1027_ = lean_ctor_get(v_toSignature_1026_, 2);
lean_inc_ref(v_type_1027_);
lean_dec_ref(v_toSignature_1026_);
v_type_988_ = v_type_1027_;
v___y_989_ = v___y_1024_;
v___y_990_ = v___y_1022_;
v___y_991_ = v___y_1018_;
v___y_992_ = v___y_1019_;
v___y_993_ = v___y_1021_;
goto v___jp_987_;
}
else
{
lean_object* v___x_1028_; 
lean_dec_ref(v___y_1023_);
lean_del_object(v___x_985_);
lean_dec(v_declName_982_);
v___x_1028_ = l_Lean_Compiler_LCNF_argsToMonoRedArg(v_args_983_, v___y_1020_, v___y_1017_, v___y_1024_, v___y_1022_, v___y_1018_, v___y_1019_, v___y_1021_);
lean_dec_ref(v___y_1017_);
lean_dec_ref(v___y_1020_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1038_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1038_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1038_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1033_ = lean_box(0);
v___x_1034_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1034_, 0, v___y_1016_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
lean_ctor_set(v___x_1034_, 2, v_a_1029_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1034_);
v___x_1036_ = v___x_1031_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v___y_1016_);
v_a_1039_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1028_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1028_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
v___jp_1047_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_st_ref_get(v___y_1052_);
lean_dec(v___x_1053_);
lean_inc(v_declName_982_);
v___x_1054_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_982_, v___y_1052_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1055_);
lean_dec_ref(v___x_1054_);
if (lean_obj_tag(v_a_1055_) == 1)
{
lean_object* v_val_1056_; lean_object* v_toSignature_1057_; lean_object* v_value_1058_; lean_object* v_type_1059_; lean_object* v_params_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_val_1056_ = lean_ctor_get(v_a_1055_, 0);
lean_inc(v_val_1056_);
lean_dec_ref(v_a_1055_);
v_toSignature_1057_ = lean_ctor_get(v_val_1056_, 0);
v_value_1058_ = lean_ctor_get(v_val_1056_, 1);
v_type_1059_ = lean_ctor_get(v_toSignature_1057_, 2);
v_params_1060_ = lean_ctor_get(v_toSignature_1057_, 3);
lean_inc_ref(v_params_1060_);
v___x_1061_ = lean_array_get_size(v_params_1060_);
v___x_1062_ = lean_array_get_size(v_args_983_);
v___x_1063_ = lean_nat_dec_le(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_inc_ref(v_type_1059_);
lean_dec_ref(v_params_1060_);
lean_dec(v_val_1056_);
v_type_988_ = v_type_1059_;
v___y_989_ = v___y_1048_;
v___y_990_ = v___y_1049_;
v___y_991_ = v___y_1050_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1052_;
goto v___jp_987_;
}
else
{
if (lean_obj_tag(v_value_1058_) == 0)
{
lean_object* v_code_1064_; 
v_code_1064_ = lean_ctor_get(v_value_1058_, 0);
if (lean_obj_tag(v_code_1064_) == 0)
{
lean_object* v_decl_1065_; lean_object* v_value_1066_; 
v_decl_1065_ = lean_ctor_get(v_code_1064_, 0);
v_value_1066_ = lean_ctor_get(v_decl_1065_, 3);
if (lean_obj_tag(v_value_1066_) == 3)
{
lean_object* v_k_1067_; 
v_k_1067_ = lean_ctor_get(v_code_1064_, 1);
if (lean_obj_tag(v_k_1067_) == 5)
{
lean_object* v_fvarId_1068_; lean_object* v_declName_1069_; lean_object* v_args_1070_; lean_object* v_fvarId_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_fvarId_1068_ = lean_ctor_get(v_decl_1065_, 0);
v_declName_1069_ = lean_ctor_get(v_value_1066_, 0);
v_args_1070_ = lean_ctor_get(v_value_1066_, 2);
lean_inc_ref(v_args_1070_);
v_fvarId_1071_ = lean_ctor_get(v_k_1067_, 0);
v___x_1072_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__1);
lean_inc(v_declName_982_);
v___x_1073_ = l_Lean_Name_append(v_declName_982_, v___x_1072_);
v___x_1074_ = lean_name_eq(v_declName_1069_, v___x_1073_);
if (v___x_1074_ == 0)
{
v___y_1016_ = v___x_1073_;
v___y_1017_ = v_args_1070_;
v___y_1018_ = v___y_1050_;
v___y_1019_ = v___y_1051_;
v___y_1020_ = v_params_1060_;
v___y_1021_ = v___y_1052_;
v___y_1022_ = v___y_1049_;
v___y_1023_ = v_val_1056_;
v___y_1024_ = v___y_1048_;
v___y_1025_ = v___x_1074_;
goto v___jp_1015_;
}
else
{
uint8_t v___x_1075_; 
v___x_1075_ = l_Lean_instBEqFVarId_beq(v_fvarId_1071_, v_fvarId_1068_);
v___y_1016_ = v___x_1073_;
v___y_1017_ = v_args_1070_;
v___y_1018_ = v___y_1050_;
v___y_1019_ = v___y_1051_;
v___y_1020_ = v_params_1060_;
v___y_1021_ = v___y_1052_;
v___y_1022_ = v___y_1049_;
v___y_1023_ = v_val_1056_;
v___y_1024_ = v___y_1048_;
v___y_1025_ = v___x_1075_;
goto v___jp_1015_;
}
}
else
{
lean_inc_ref(v_type_1059_);
lean_dec_ref(v_params_1060_);
lean_dec(v_val_1056_);
v_type_988_ = v_type_1059_;
v___y_989_ = v___y_1048_;
v___y_990_ = v___y_1049_;
v___y_991_ = v___y_1050_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1052_;
goto v___jp_987_;
}
}
else
{
lean_inc_ref(v_type_1059_);
lean_dec_ref(v_params_1060_);
lean_dec(v_val_1056_);
v_type_988_ = v_type_1059_;
v___y_989_ = v___y_1048_;
v___y_990_ = v___y_1049_;
v___y_991_ = v___y_1050_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1052_;
goto v___jp_987_;
}
}
else
{
lean_inc_ref(v_type_1059_);
lean_dec_ref(v_params_1060_);
lean_dec(v_val_1056_);
v_type_988_ = v_type_1059_;
v___y_989_ = v___y_1048_;
v___y_990_ = v___y_1049_;
v___y_991_ = v___y_1050_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1052_;
goto v___jp_987_;
}
}
else
{
lean_inc_ref(v_type_1059_);
lean_dec_ref(v_params_1060_);
lean_dec(v_val_1056_);
v_type_988_ = v_type_1059_;
v___y_989_ = v___y_1048_;
v___y_990_ = v___y_1049_;
v___y_991_ = v___y_1050_;
v___y_992_ = v___y_1051_;
v___y_993_ = v___y_1052_;
goto v___jp_987_;
}
}
}
else
{
size_t v_sz_1076_; size_t v___x_1077_; lean_object* v___x_1078_; 
lean_dec(v_a_1055_);
lean_del_object(v___x_985_);
v_sz_1076_ = lean_array_size(v_args_983_);
v___x_1077_ = ((size_t)0ULL);
v___x_1078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_1076_, v___x_1077_, v_args_983_, v___y_1048_, v___y_1052_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1088_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1088_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1088_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1083_ = lean_box(0);
v___x_1084_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1084_, 0, v_declName_982_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
lean_ctor_set(v___x_1084_, 2, v_a_1079_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1084_);
v___x_1086_ = v___x_1081_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec(v_declName_982_);
v_a_1089_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1078_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1078_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
lean_del_object(v___x_985_);
lean_dec_ref(v_args_983_);
lean_dec(v_declName_982_);
v_a_1097_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1054_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1054_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
}
case 4:
{
lean_object* v_fvarId_1192_; lean_object* v_args_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1224_; 
v_fvarId_1192_ = lean_ctor_get(v_e_938_, 0);
v_args_1193_ = lean_ctor_get(v_e_938_, 1);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_e_938_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1195_ = v_e_938_;
v_isShared_1196_ = v_isSharedCheck_1224_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_args_1193_);
lean_inc(v_fvarId_1192_);
lean_dec(v_e_938_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1224_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; 
v___x_1197_ = lean_st_ref_get(v_a_943_);
lean_dec(v___x_1197_);
v___x_1198_ = lean_st_ref_get(v_a_939_);
v___x_1199_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v___x_1198_, v_fvarId_1192_);
lean_dec(v___x_1198_);
if (v___x_1199_ == 0)
{
size_t v_sz_1200_; size_t v___x_1201_; lean_object* v___x_1202_; 
v_sz_1200_ = lean_array_size(v_args_1193_);
v___x_1201_ = ((size_t)0ULL);
v___x_1202_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_1200_, v___x_1201_, v_args_1193_, v_a_939_, v_a_943_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1213_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v_a_1203_);
v___x_1208_ = v___x_1195_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_fvarId_1192_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v___x_1210_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1208_);
v___x_1210_ = v___x_1205_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_del_object(v___x_1195_);
lean_dec(v_fvarId_1192_);
v_a_1214_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1202_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1202_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
else
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
lean_del_object(v___x_1195_);
lean_dec_ref(v_args_1193_);
lean_dec(v_fvarId_1192_);
v___x_1222_ = lean_box(1);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
}
}
default: 
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v_e_938_);
return v___x_1225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object* v_e_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_e_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec(v_a_1229_);
lean_dec_ref(v_a_1228_);
lean_dec(v_a_1227_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object* v_upperBound_1234_, lean_object* v_args_1235_, lean_object* v_inst_1236_, lean_object* v_R_1237_, lean_object* v_a_1238_, lean_object* v_b_1239_, lean_object* v_c_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_1234_, v_args_1235_, v_a_1238_, v_b_1239_, v___y_1241_, v___y_1245_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object* v_upperBound_1248_, lean_object* v_args_1249_, lean_object* v_inst_1250_, lean_object* v_R_1251_, lean_object* v_a_1252_, lean_object* v_b_1253_, lean_object* v_c_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(v_upperBound_1248_, v_args_1249_, v_inst_1250_, v_R_1251_, v_a_1252_, v_b_1253_, v_c_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v_args_1249_);
lean_dec(v_upperBound_1248_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object* v_decl_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_type_1269_; lean_object* v_value_1270_; lean_object* v___x_1271_; 
v_type_1269_ = lean_ctor_get(v_decl_1262_, 2);
v_value_1270_ = lean_ctor_get(v_decl_1262_, 3);
lean_inc_ref(v_type_1269_);
v___x_1271_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1269_, v_a_1266_, v_a_1267_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1273_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1272_);
lean_dec_ref(v___x_1271_);
lean_inc(v_value_1270_);
v___x_1273_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_value_1270_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref(v___x_1273_);
v___x_1275_ = 0;
v___x_1276_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_1275_, v_decl_1262_, v_a_1272_, v_a_1274_, v_a_1265_, v_a_1267_);
return v___x_1276_;
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
lean_dec(v_a_1272_);
lean_dec_ref(v_decl_1262_);
v_a_1277_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1273_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1273_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec_ref(v_decl_1262_);
v_a_1285_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1271_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1271_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object* v_decl_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec_ref(v_a_1295_);
lean_dec(v_a_1294_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v_toApplicative_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1372_; 
v___x_1308_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1309_ = l_StateRefT_x27_instMonad___redArg(v___x_1308_);
v_toApplicative_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1372_ == 0)
{
lean_object* v_unused_1373_; 
v_unused_1373_ = lean_ctor_get(v___x_1309_, 1);
lean_dec(v_unused_1373_);
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1372_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_toApplicative_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1372_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v_toFunctor_1314_; lean_object* v_toSeq_1315_; lean_object* v_toSeqLeft_1316_; lean_object* v_toSeqRight_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1370_; 
v_toFunctor_1314_ = lean_ctor_get(v_toApplicative_1310_, 0);
v_toSeq_1315_ = lean_ctor_get(v_toApplicative_1310_, 2);
v_toSeqLeft_1316_ = lean_ctor_get(v_toApplicative_1310_, 3);
v_toSeqRight_1317_ = lean_ctor_get(v_toApplicative_1310_, 4);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_toApplicative_1310_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v_toApplicative_1310_, 1);
lean_dec(v_unused_1371_);
v___x_1319_ = v_toApplicative_1310_;
v_isShared_1320_ = v_isSharedCheck_1370_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_toSeqRight_1317_);
lean_inc(v_toSeqLeft_1316_);
lean_inc(v_toSeq_1315_);
lean_inc(v_toFunctor_1314_);
lean_dec(v_toApplicative_1310_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1370_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___f_1326_; lean_object* v___f_1327_; lean_object* v___f_1328_; lean_object* v___x_1330_; 
v___f_1321_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1);
v___f_1322_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2);
lean_inc_ref(v_toFunctor_1314_);
v___f_1323_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1323_, 0, v_toFunctor_1314_);
v___f_1324_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1324_, 0, v_toFunctor_1314_);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___f_1323_);
lean_ctor_set(v___x_1325_, 1, v___f_1324_);
v___f_1326_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1326_, 0, v_toSeqRight_1317_);
v___f_1327_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1327_, 0, v_toSeqLeft_1316_);
v___f_1328_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1328_, 0, v_toSeq_1315_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 4, v___f_1326_);
lean_ctor_set(v___x_1319_, 3, v___f_1327_);
lean_ctor_set(v___x_1319_, 2, v___f_1328_);
lean_ctor_set(v___x_1319_, 1, v___f_1321_);
lean_ctor_set(v___x_1319_, 0, v___x_1325_);
v___x_1330_ = v___x_1319_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v___f_1321_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v___f_1328_);
lean_ctor_set(v_reuseFailAlloc_1369_, 3, v___f_1327_);
lean_ctor_set(v_reuseFailAlloc_1369_, 4, v___f_1326_);
v___x_1330_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1332_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 1, v___f_1322_);
lean_ctor_set(v___x_1312_, 0, v___x_1330_);
v___x_1332_ = v___x_1312_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v___f_1322_);
v___x_1332_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v_toApplicative_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1366_; 
v___x_1333_ = l_StateRefT_x27_instMonad___redArg(v___x_1332_);
v_toApplicative_1334_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1366_ == 0)
{
lean_object* v_unused_1367_; 
v_unused_1367_ = lean_ctor_get(v___x_1333_, 1);
lean_dec(v_unused_1367_);
v___x_1336_ = v___x_1333_;
v_isShared_1337_ = v_isSharedCheck_1366_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_toApplicative_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1366_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v_toFunctor_1338_; lean_object* v_toSeq_1339_; lean_object* v_toSeqLeft_1340_; lean_object* v_toSeqRight_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1364_; 
v_toFunctor_1338_ = lean_ctor_get(v_toApplicative_1334_, 0);
v_toSeq_1339_ = lean_ctor_get(v_toApplicative_1334_, 2);
v_toSeqLeft_1340_ = lean_ctor_get(v_toApplicative_1334_, 3);
v_toSeqRight_1341_ = lean_ctor_get(v_toApplicative_1334_, 4);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_toApplicative_1334_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; 
v_unused_1365_ = lean_ctor_get(v_toApplicative_1334_, 1);
lean_dec(v_unused_1365_);
v___x_1343_ = v_toApplicative_1334_;
v_isShared_1344_ = v_isSharedCheck_1364_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_toSeqRight_1341_);
lean_inc(v_toSeqLeft_1340_);
lean_inc(v_toSeq_1339_);
lean_inc(v_toFunctor_1338_);
lean_dec(v_toApplicative_1334_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1364_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___f_1345_; lean_object* v___f_1346_; lean_object* v___f_1347_; lean_object* v___f_1348_; lean_object* v___x_1349_; lean_object* v___f_1350_; lean_object* v___f_1351_; lean_object* v___f_1352_; lean_object* v___x_1354_; 
v___f_1345_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3);
v___f_1346_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4);
lean_inc_ref(v_toFunctor_1338_);
v___f_1347_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1347_, 0, v_toFunctor_1338_);
v___f_1348_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1348_, 0, v_toFunctor_1338_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___f_1347_);
lean_ctor_set(v___x_1349_, 1, v___f_1348_);
v___f_1350_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1350_, 0, v_toSeqRight_1341_);
v___f_1351_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1351_, 0, v_toSeqLeft_1340_);
v___f_1352_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1352_, 0, v_toSeq_1339_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 4, v___f_1350_);
lean_ctor_set(v___x_1343_, 3, v___f_1351_);
lean_ctor_set(v___x_1343_, 2, v___f_1352_);
lean_ctor_set(v___x_1343_, 1, v___f_1345_);
lean_ctor_set(v___x_1343_, 0, v___x_1349_);
v___x_1354_ = v___x_1343_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___f_1345_);
lean_ctor_set(v_reuseFailAlloc_1363_, 2, v___f_1352_);
lean_ctor_set(v_reuseFailAlloc_1363_, 3, v___f_1351_);
lean_ctor_set(v_reuseFailAlloc_1363_, 4, v___f_1350_);
v___x_1354_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1356_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 1, v___f_1346_);
lean_ctor_set(v___x_1336_, 0, v___x_1354_);
v___x_1356_ = v___x_1336_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v___f_1346_);
v___x_1356_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_4540__overap_1360_; lean_object* v___x_1361_; 
v___x_1357_ = l_StateRefT_x27_instMonad___redArg(v___x_1356_);
v___x_1358_ = lean_box(0);
v___x_1359_ = l_instInhabitedOfMonad___redArg(v___x_1357_, v___x_1358_);
v___x_4540__overap_1360_ = lean_panic_fn_borrowed(v___x_1359_, v_msg_1301_);
lean_dec(v___x_1359_);
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1305_);
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1302_);
v___x_1361_ = lean_apply_6(v___x_4540__overap_1360_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, lean_box(0));
return v___x_1361_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object* v_msg_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v_msg_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
return v_res_1381_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.mkFieldParamsForComputedFields", 49, 49);
return v___x_1382_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1383_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_1384_ = lean_unsigned_to_nat(11u);
v___x_1385_ = lean_unsigned_to_nat(166u);
v___x_1386_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_1387_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1388_ = l_mkPanicMessageWithDecl(v___x_1387_, v___x_1386_, v___x_1385_, v___x_1384_, v___x_1383_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object* v_upperBound_1389_, lean_object* v_a_1390_, lean_object* v_b_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_a_1399_; uint8_t v___x_1403_; 
v___x_1403_ = lean_nat_dec_lt(v_a_1390_, v_upperBound_1389_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; 
lean_dec(v_a_1390_);
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_b_1391_);
return v___x_1404_;
}
else
{
lean_object* v_fst_1405_; 
v_fst_1405_ = lean_ctor_get(v_b_1391_, 0);
lean_inc(v_fst_1405_);
if (lean_obj_tag(v_fst_1405_) == 7)
{
lean_object* v_snd_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1439_; 
v_snd_1406_ = lean_ctor_get(v_b_1391_, 1);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_b_1391_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; 
v_unused_1440_ = lean_ctor_get(v_b_1391_, 0);
lean_dec(v_unused_1440_);
v___x_1408_ = v_b_1391_;
v_isShared_1409_ = v_isSharedCheck_1439_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_snd_1406_);
lean_dec(v_b_1391_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1439_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v_binderName_1410_; lean_object* v_binderType_1411_; lean_object* v_body_1412_; lean_object* v___x_1413_; 
v_binderName_1410_ = lean_ctor_get(v_fst_1405_, 0);
lean_inc(v_binderName_1410_);
v_binderType_1411_ = lean_ctor_get(v_fst_1405_, 1);
lean_inc_ref(v_binderType_1411_);
v_body_1412_ = lean_ctor_get(v_fst_1405_, 2);
lean_inc_ref(v_body_1412_);
lean_dec_ref(v_fst_1405_);
v___x_1413_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_1411_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; uint8_t v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref(v___x_1413_);
v___x_1415_ = 0;
v___x_1416_ = 0;
v___x_1417_ = l_Lean_Compiler_LCNF_mkParam(v___x_1415_, v_binderName_1410_, v_a_1414_, v___x_1416_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref(v___x_1417_);
v___x_1419_ = lean_array_push(v_snd_1406_, v_a_1418_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 1, v___x_1419_);
lean_ctor_set(v___x_1408_, 0, v_body_1412_);
v___x_1421_ = v___x_1408_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_body_1412_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
v_a_1399_ = v___x_1421_;
goto v___jp_1398_;
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v_body_1412_);
lean_del_object(v___x_1408_);
lean_dec(v_snd_1406_);
lean_dec(v_a_1390_);
v_a_1423_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1417_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1417_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_dec_ref(v_body_1412_);
lean_dec(v_binderName_1410_);
lean_del_object(v___x_1408_);
lean_dec(v_snd_1406_);
lean_dec(v_a_1390_);
v_a_1431_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1413_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1413_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
else
{
lean_object* v_snd_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1458_; 
v_snd_1441_ = lean_ctor_get(v_b_1391_, 1);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_b_1391_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; 
v_unused_1459_ = lean_ctor_get(v_b_1391_, 0);
lean_dec(v_unused_1459_);
v___x_1443_ = v_b_1391_;
v_isShared_1444_ = v_isSharedCheck_1458_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_snd_1441_);
lean_dec(v_b_1391_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1458_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__1);
v___x_1446_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1445_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v___x_1448_; 
lean_dec_ref(v___x_1446_);
if (v_isShared_1444_ == 0)
{
v___x_1448_ = v___x_1443_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_fst_1405_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_snd_1441_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
v_a_1399_ = v___x_1448_;
goto v___jp_1398_;
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_del_object(v___x_1443_);
lean_dec(v_snd_1441_);
lean_dec(v_fst_1405_);
lean_dec(v_a_1390_);
v_a_1450_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1446_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1446_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
}
v___jp_1398_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_unsigned_to_nat(1u);
v___x_1401_ = lean_nat_add(v_a_1390_, v___x_1400_);
lean_dec(v_a_1390_);
v_a_1390_ = v___x_1401_;
v_b_1391_ = v_a_1399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object* v_upperBound_1460_, lean_object* v_a_1461_, lean_object* v_b_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1460_, v_a_1461_, v_b_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec(v_upperBound_1460_);
return v_res_1469_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1470_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_1471_ = lean_unsigned_to_nat(11u);
v___x_1472_ = lean_unsigned_to_nat(158u);
v___x_1473_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_1474_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1475_ = l_mkPanicMessageWithDecl(v___x_1474_, v___x_1473_, v___x_1472_, v___x_1471_, v___x_1470_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object* v_upperBound_1476_, lean_object* v_a_1477_, lean_object* v_b_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_a_1486_; uint8_t v___x_1490_; 
v___x_1490_ = lean_nat_dec_lt(v_a_1477_, v_upperBound_1476_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; 
lean_dec(v_a_1477_);
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_b_1478_);
return v___x_1491_;
}
else
{
if (lean_obj_tag(v_b_1478_) == 7)
{
lean_object* v_body_1492_; 
v_body_1492_ = lean_ctor_get(v_b_1478_, 2);
lean_inc_ref(v_body_1492_);
lean_dec_ref(v_b_1478_);
v_a_1486_ = v_body_1492_;
goto v___jp_1485_;
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0);
v___x_1494_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_1493_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_dec_ref(v___x_1494_);
v_a_1486_ = v_b_1478_;
goto v___jp_1485_;
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec_ref(v_b_1478_);
lean_dec(v_a_1477_);
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
v___jp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = lean_unsigned_to_nat(1u);
v___x_1488_ = lean_nat_add(v_a_1477_, v___x_1487_);
lean_dec(v_a_1477_);
v_a_1477_ = v___x_1488_;
v_b_1478_ = v_a_1486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object* v_upperBound_1503_, lean_object* v_a_1504_, lean_object* v_b_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1503_, v_a_1504_, v_b_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec(v_upperBound_1503_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object* v_ctorType_1513_, lean_object* v_numParams_1514_, lean_object* v_numNewFields_1515_, lean_object* v_oldFields_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lean_unsigned_to_nat(0u);
v___x_1524_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_numParams_1514_, v___x_1523_, v_ctorType_1513_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref(v___x_1524_);
v___x_1526_ = lean_array_get_size(v_oldFields_1516_);
v___x_1527_ = lean_nat_add(v___x_1526_, v_numNewFields_1515_);
v___x_1528_ = lean_mk_empty_array_with_capacity(v___x_1527_);
lean_dec(v___x_1527_);
v___x_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_a_1525_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_numNewFields_1515_, v___x_1523_, v___x_1529_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1540_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1533_ = v___x_1530_;
v_isShared_1534_ = v_isSharedCheck_1540_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1540_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v_snd_1535_; lean_object* v___x_1536_; lean_object* v___x_1538_; 
v_snd_1535_ = lean_ctor_get(v_a_1531_, 1);
lean_inc(v_snd_1535_);
lean_dec(v_a_1531_);
v___x_1536_ = l_Array_append___redArg(v_snd_1535_, v_oldFields_1516_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 0, v___x_1536_);
v___x_1538_ = v___x_1533_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
v_a_1541_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1530_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1530_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1549_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1524_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1524_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object* v_ctorType_1557_, lean_object* v_numParams_1558_, lean_object* v_numNewFields_1559_, lean_object* v_oldFields_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_ctorType_1557_, v_numParams_1558_, v_numNewFields_1559_, v_oldFields_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_);
lean_dec(v_a_1565_);
lean_dec_ref(v_a_1564_);
lean_dec(v_a_1563_);
lean_dec_ref(v_a_1562_);
lean_dec(v_a_1561_);
lean_dec_ref(v_oldFields_1560_);
lean_dec(v_numNewFields_1559_);
lean_dec(v_numParams_1558_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object* v_upperBound_1568_, lean_object* v_inst_1569_, lean_object* v_R_1570_, lean_object* v_a_1571_, lean_object* v_b_1572_, lean_object* v_c_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1568_, v_a_1571_, v_b_1572_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object* v_upperBound_1581_, lean_object* v_inst_1582_, lean_object* v_R_1583_, lean_object* v_a_1584_, lean_object* v_b_1585_, lean_object* v_c_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(v_upperBound_1581_, v_inst_1582_, v_R_1583_, v_a_1584_, v_b_1585_, v_c_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec(v_upperBound_1581_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object* v_upperBound_1594_, lean_object* v_inst_1595_, lean_object* v_R_1596_, lean_object* v_a_1597_, lean_object* v_b_1598_, lean_object* v_c_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1594_, v_a_1597_, v_b_1598_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object* v_upperBound_1607_, lean_object* v_inst_1608_, lean_object* v_R_1609_, lean_object* v_a_1610_, lean_object* v_b_1611_, lean_object* v_c_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(v_upperBound_1607_, v_inst_1608_, v_R_1609_, v_a_1610_, v_b_1611_, v_c_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec(v_upperBound_1607_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t v_sz_1620_, size_t v_i_1621_, lean_object* v_bs_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_usize_dec_lt(v_i_1621_, v_sz_1620_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; 
v___x_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1629_, 0, v_bs_1622_);
return v___x_1629_;
}
else
{
lean_object* v_v_1630_; lean_object* v___x_1631_; 
v_v_1630_ = lean_array_uget_borrowed(v_bs_1622_, v_i_1621_);
lean_inc(v_v_1630_);
v___x_1631_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_v_1630_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; lean_object* v_bs_x27_1634_; size_t v___x_1635_; size_t v___x_1636_; lean_object* v___x_1637_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref(v___x_1631_);
v___x_1633_ = lean_unsigned_to_nat(0u);
v_bs_x27_1634_ = lean_array_uset(v_bs_1622_, v_i_1621_, v___x_1633_);
v___x_1635_ = ((size_t)1ULL);
v___x_1636_ = lean_usize_add(v_i_1621_, v___x_1635_);
v___x_1637_ = lean_array_uset(v_bs_x27_1634_, v_i_1621_, v_a_1632_);
v_i_1621_ = v___x_1636_;
v_bs_1622_ = v___x_1637_;
goto _start;
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v_bs_1622_);
v_a_1639_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1631_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1631_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object* v_sz_1647_, lean_object* v_i_1648_, lean_object* v_bs_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
size_t v_sz_boxed_1655_; size_t v_i_boxed_1656_; lean_object* v_res_1657_; 
v_sz_boxed_1655_ = lean_unbox_usize(v_sz_1647_);
lean_dec(v_sz_1647_);
v_i_boxed_1656_ = lean_unbox_usize(v_i_1648_);
lean_dec(v_i_1648_);
v_res_1657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_boxed_1655_, v_i_boxed_1656_, v_bs_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec(v___y_1650_);
return v_res_1657_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0(void){
_start:
{
uint8_t v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = 0;
v___x_1659_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1(v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object* v_msg_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v_toApplicative_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1731_; 
v___x_1667_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1668_ = l_StateRefT_x27_instMonad___redArg(v___x_1667_);
v_toApplicative_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; 
v_unused_1732_ = lean_ctor_get(v___x_1668_, 1);
lean_dec(v_unused_1732_);
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1731_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_toApplicative_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1731_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v_toFunctor_1673_; lean_object* v_toSeq_1674_; lean_object* v_toSeqLeft_1675_; lean_object* v_toSeqRight_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1729_; 
v_toFunctor_1673_ = lean_ctor_get(v_toApplicative_1669_, 0);
v_toSeq_1674_ = lean_ctor_get(v_toApplicative_1669_, 2);
v_toSeqLeft_1675_ = lean_ctor_get(v_toApplicative_1669_, 3);
v_toSeqRight_1676_ = lean_ctor_get(v_toApplicative_1669_, 4);
v_isSharedCheck_1729_ = !lean_is_exclusive(v_toApplicative_1669_);
if (v_isSharedCheck_1729_ == 0)
{
lean_object* v_unused_1730_; 
v_unused_1730_ = lean_ctor_get(v_toApplicative_1669_, 1);
lean_dec(v_unused_1730_);
v___x_1678_ = v_toApplicative_1669_;
v_isShared_1679_ = v_isSharedCheck_1729_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_toSeqRight_1676_);
lean_inc(v_toSeqLeft_1675_);
lean_inc(v_toSeq_1674_);
lean_inc(v_toFunctor_1673_);
lean_dec(v_toApplicative_1669_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1729_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___f_1680_; lean_object* v___f_1681_; lean_object* v___f_1682_; lean_object* v___f_1683_; lean_object* v___x_1684_; lean_object* v___f_1685_; lean_object* v___f_1686_; lean_object* v___f_1687_; lean_object* v___x_1689_; 
v___f_1680_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1);
v___f_1681_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2);
lean_inc_ref(v_toFunctor_1673_);
v___f_1682_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1682_, 0, v_toFunctor_1673_);
v___f_1683_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1683_, 0, v_toFunctor_1673_);
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___f_1682_);
lean_ctor_set(v___x_1684_, 1, v___f_1683_);
v___f_1685_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1685_, 0, v_toSeqRight_1676_);
v___f_1686_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1686_, 0, v_toSeqLeft_1675_);
v___f_1687_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1687_, 0, v_toSeq_1674_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 4, v___f_1685_);
lean_ctor_set(v___x_1678_, 3, v___f_1686_);
lean_ctor_set(v___x_1678_, 2, v___f_1687_);
lean_ctor_set(v___x_1678_, 1, v___f_1680_);
lean_ctor_set(v___x_1678_, 0, v___x_1684_);
v___x_1689_ = v___x_1678_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v___f_1680_);
lean_ctor_set(v_reuseFailAlloc_1728_, 2, v___f_1687_);
lean_ctor_set(v_reuseFailAlloc_1728_, 3, v___f_1686_);
lean_ctor_set(v_reuseFailAlloc_1728_, 4, v___f_1685_);
v___x_1689_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
lean_object* v___x_1691_; 
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___f_1681_);
lean_ctor_set(v___x_1671_, 0, v___x_1689_);
v___x_1691_ = v___x_1671_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v___f_1681_);
v___x_1691_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
lean_object* v___x_1692_; lean_object* v_toApplicative_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1725_; 
v___x_1692_ = l_StateRefT_x27_instMonad___redArg(v___x_1691_);
v_toApplicative_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1725_ == 0)
{
lean_object* v_unused_1726_; 
v_unused_1726_ = lean_ctor_get(v___x_1692_, 1);
lean_dec(v_unused_1726_);
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1725_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_toApplicative_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1725_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v_toFunctor_1697_; lean_object* v_toSeq_1698_; lean_object* v_toSeqLeft_1699_; lean_object* v_toSeqRight_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1723_; 
v_toFunctor_1697_ = lean_ctor_get(v_toApplicative_1693_, 0);
v_toSeq_1698_ = lean_ctor_get(v_toApplicative_1693_, 2);
v_toSeqLeft_1699_ = lean_ctor_get(v_toApplicative_1693_, 3);
v_toSeqRight_1700_ = lean_ctor_get(v_toApplicative_1693_, 4);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_toApplicative_1693_);
if (v_isSharedCheck_1723_ == 0)
{
lean_object* v_unused_1724_; 
v_unused_1724_ = lean_ctor_get(v_toApplicative_1693_, 1);
lean_dec(v_unused_1724_);
v___x_1702_ = v_toApplicative_1693_;
v_isShared_1703_ = v_isSharedCheck_1723_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_toSeqRight_1700_);
lean_inc(v_toSeqLeft_1699_);
lean_inc(v_toSeq_1698_);
lean_inc(v_toFunctor_1697_);
lean_dec(v_toApplicative_1693_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1723_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___f_1704_; lean_object* v___f_1705_; lean_object* v___f_1706_; lean_object* v___f_1707_; lean_object* v___x_1708_; lean_object* v___f_1709_; lean_object* v___f_1710_; lean_object* v___f_1711_; lean_object* v___x_1713_; 
v___f_1704_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3);
v___f_1705_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4);
lean_inc_ref(v_toFunctor_1697_);
v___f_1706_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1706_, 0, v_toFunctor_1697_);
v___f_1707_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1707_, 0, v_toFunctor_1697_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___f_1706_);
lean_ctor_set(v___x_1708_, 1, v___f_1707_);
v___f_1709_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1709_, 0, v_toSeqRight_1700_);
v___f_1710_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1710_, 0, v_toSeqLeft_1699_);
v___f_1711_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1711_, 0, v_toSeq_1698_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 4, v___f_1709_);
lean_ctor_set(v___x_1702_, 3, v___f_1710_);
lean_ctor_set(v___x_1702_, 2, v___f_1711_);
lean_ctor_set(v___x_1702_, 1, v___f_1704_);
lean_ctor_set(v___x_1702_, 0, v___x_1708_);
v___x_1713_ = v___x_1702_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v___f_1704_);
lean_ctor_set(v_reuseFailAlloc_1722_, 2, v___f_1711_);
lean_ctor_set(v_reuseFailAlloc_1722_, 3, v___f_1710_);
lean_ctor_set(v_reuseFailAlloc_1722_, 4, v___f_1709_);
v___x_1713_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1715_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 1, v___f_1705_);
lean_ctor_set(v___x_1695_, 0, v___x_1713_);
v___x_1715_ = v___x_1695_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1713_);
lean_ctor_set(v_reuseFailAlloc_1721_, 1, v___f_1705_);
v___x_1715_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_40530__overap_1719_; lean_object* v___x_1720_; 
v___x_1716_ = l_StateRefT_x27_instMonad___redArg(v___x_1715_);
v___x_1717_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1718_ = l_instInhabitedOfMonad___redArg(v___x_1716_, v___x_1717_);
v___x_40530__overap_1719_ = lean_panic_fn_borrowed(v___x_1718_, v_msg_1660_);
lean_dec(v___x_1718_);
lean_inc(v___y_1665_);
lean_inc_ref(v___y_1664_);
lean_inc(v___y_1663_);
lean_inc_ref(v___y_1662_);
lean_inc(v___y_1661_);
v___x_1720_ = lean_apply_6(v___x_40530__overap_1719_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, lean_box(0));
return v___x_1720_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object* v_msg_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_msg_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
return v_res_1740_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0(void){
_start:
{
uint8_t v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = 0;
v___x_1742_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object* v_msg_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v_toApplicative_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1814_; 
v___x_1750_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1751_ = l_StateRefT_x27_instMonad___redArg(v___x_1750_);
v_toApplicative_1752_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1814_ == 0)
{
lean_object* v_unused_1815_; 
v_unused_1815_ = lean_ctor_get(v___x_1751_, 1);
lean_dec(v_unused_1815_);
v___x_1754_ = v___x_1751_;
v_isShared_1755_ = v_isSharedCheck_1814_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_toApplicative_1752_);
lean_dec(v___x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1814_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v_toFunctor_1756_; lean_object* v_toSeq_1757_; lean_object* v_toSeqLeft_1758_; lean_object* v_toSeqRight_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1812_; 
v_toFunctor_1756_ = lean_ctor_get(v_toApplicative_1752_, 0);
v_toSeq_1757_ = lean_ctor_get(v_toApplicative_1752_, 2);
v_toSeqLeft_1758_ = lean_ctor_get(v_toApplicative_1752_, 3);
v_toSeqRight_1759_ = lean_ctor_get(v_toApplicative_1752_, 4);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_toApplicative_1752_);
if (v_isSharedCheck_1812_ == 0)
{
lean_object* v_unused_1813_; 
v_unused_1813_ = lean_ctor_get(v_toApplicative_1752_, 1);
lean_dec(v_unused_1813_);
v___x_1761_ = v_toApplicative_1752_;
v_isShared_1762_ = v_isSharedCheck_1812_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_toSeqRight_1759_);
lean_inc(v_toSeqLeft_1758_);
lean_inc(v_toSeq_1757_);
lean_inc(v_toFunctor_1756_);
lean_dec(v_toApplicative_1752_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1812_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___f_1763_; lean_object* v___f_1764_; lean_object* v___f_1765_; lean_object* v___f_1766_; lean_object* v___x_1767_; lean_object* v___f_1768_; lean_object* v___f_1769_; lean_object* v___f_1770_; lean_object* v___x_1772_; 
v___f_1763_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1);
v___f_1764_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2);
lean_inc_ref(v_toFunctor_1756_);
v___f_1765_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1765_, 0, v_toFunctor_1756_);
v___f_1766_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1766_, 0, v_toFunctor_1756_);
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___f_1765_);
lean_ctor_set(v___x_1767_, 1, v___f_1766_);
v___f_1768_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1768_, 0, v_toSeqRight_1759_);
v___f_1769_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1769_, 0, v_toSeqLeft_1758_);
v___f_1770_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1770_, 0, v_toSeq_1757_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 4, v___f_1768_);
lean_ctor_set(v___x_1761_, 3, v___f_1769_);
lean_ctor_set(v___x_1761_, 2, v___f_1770_);
lean_ctor_set(v___x_1761_, 1, v___f_1763_);
lean_ctor_set(v___x_1761_, 0, v___x_1767_);
v___x_1772_ = v___x_1761_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v___f_1763_);
lean_ctor_set(v_reuseFailAlloc_1811_, 2, v___f_1770_);
lean_ctor_set(v_reuseFailAlloc_1811_, 3, v___f_1769_);
lean_ctor_set(v_reuseFailAlloc_1811_, 4, v___f_1768_);
v___x_1772_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 1, v___f_1764_);
lean_ctor_set(v___x_1754_, 0, v___x_1772_);
v___x_1774_ = v___x_1754_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v___f_1764_);
v___x_1774_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v_toApplicative_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1808_; 
v___x_1775_ = l_StateRefT_x27_instMonad___redArg(v___x_1774_);
v_toApplicative_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1808_ == 0)
{
lean_object* v_unused_1809_; 
v_unused_1809_ = lean_ctor_get(v___x_1775_, 1);
lean_dec(v_unused_1809_);
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1808_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_toApplicative_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1808_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v_toFunctor_1780_; lean_object* v_toSeq_1781_; lean_object* v_toSeqLeft_1782_; lean_object* v_toSeqRight_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1806_; 
v_toFunctor_1780_ = lean_ctor_get(v_toApplicative_1776_, 0);
v_toSeq_1781_ = lean_ctor_get(v_toApplicative_1776_, 2);
v_toSeqLeft_1782_ = lean_ctor_get(v_toApplicative_1776_, 3);
v_toSeqRight_1783_ = lean_ctor_get(v_toApplicative_1776_, 4);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_toApplicative_1776_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_toApplicative_1776_, 1);
lean_dec(v_unused_1807_);
v___x_1785_ = v_toApplicative_1776_;
v_isShared_1786_ = v_isSharedCheck_1806_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_toSeqRight_1783_);
lean_inc(v_toSeqLeft_1782_);
lean_inc(v_toSeq_1781_);
lean_inc(v_toFunctor_1780_);
lean_dec(v_toApplicative_1776_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1806_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___f_1787_; lean_object* v___f_1788_; lean_object* v___f_1789_; lean_object* v___f_1790_; lean_object* v___x_1791_; lean_object* v___f_1792_; lean_object* v___f_1793_; lean_object* v___f_1794_; lean_object* v___x_1796_; 
v___f_1787_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3);
v___f_1788_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4);
lean_inc_ref(v_toFunctor_1780_);
v___f_1789_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1789_, 0, v_toFunctor_1780_);
v___f_1790_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1790_, 0, v_toFunctor_1780_);
v___x_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___f_1789_);
lean_ctor_set(v___x_1791_, 1, v___f_1790_);
v___f_1792_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1792_, 0, v_toSeqRight_1783_);
v___f_1793_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1793_, 0, v_toSeqLeft_1782_);
v___f_1794_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1794_, 0, v_toSeq_1781_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 4, v___f_1792_);
lean_ctor_set(v___x_1785_, 3, v___f_1793_);
lean_ctor_set(v___x_1785_, 2, v___f_1794_);
lean_ctor_set(v___x_1785_, 1, v___f_1787_);
lean_ctor_set(v___x_1785_, 0, v___x_1791_);
v___x_1796_ = v___x_1785_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v___f_1787_);
lean_ctor_set(v_reuseFailAlloc_1805_, 2, v___f_1794_);
lean_ctor_set(v_reuseFailAlloc_1805_, 3, v___f_1793_);
lean_ctor_set(v_reuseFailAlloc_1805_, 4, v___f_1792_);
v___x_1796_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1798_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 1, v___f_1788_);
lean_ctor_set(v___x_1778_, 0, v___x_1796_);
v___x_1798_ = v___x_1778_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1796_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v___f_1788_);
v___x_1798_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_40515__overap_1802_; lean_object* v___x_1803_; 
v___x_1799_ = l_StateRefT_x27_instMonad___redArg(v___x_1798_);
v___x_1800_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1801_ = l_instInhabitedOfMonad___redArg(v___x_1799_, v___x_1800_);
v___x_40515__overap_1802_ = lean_panic_fn_borrowed(v___x_1801_, v_msg_1743_);
lean_dec(v___x_1801_);
lean_inc(v___y_1748_);
lean_inc_ref(v___y_1747_);
lean_inc(v___y_1746_);
lean_inc_ref(v___y_1745_);
lean_inc(v___y_1744_);
v___x_1803_ = lean_apply_6(v___x_40515__overap_1802_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, lean_box(0));
return v___x_1803_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object* v_msg_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v_msg_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object* v_msg_1824_){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1826_ = lean_panic_fn_borrowed(v___x_1825_, v_msg_1824_);
return v___x_1826_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_decToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__25, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__25_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__25);
v___x_1828_ = l_Lean_Name_mkStr1(v___x_1827_);
return v___x_1828_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__0(void){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_mk_string_unchecked("expected inductive type", 23, 23);
return v___x_1829_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.Code.toMono", 30, 30);
return v___x_1830_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__1(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1831_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__0, &l_Lean_Compiler_LCNF_Code_toMono___closed__0_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__0);
v___x_1832_ = lean_unsigned_to_nat(66u);
v___x_1833_ = lean_unsigned_to_nat(385u);
v___x_1834_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1835_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1836_ = l_mkPanicMessageWithDecl(v___x_1835_, v___x_1834_, v___x_1833_, v___x_1832_, v___x_1831_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object* v_decl_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_){
_start:
{
lean_object* v_params_1844_; lean_object* v_type_1845_; lean_object* v_value_1846_; lean_object* v___x_1847_; 
v_params_1844_ = lean_ctor_get(v_decl_1837_, 2);
v_type_1845_ = lean_ctor_get(v_decl_1837_, 3);
v_value_1846_ = lean_ctor_get(v_decl_1837_, 4);
lean_inc_ref(v_type_1845_);
v___x_1847_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1845_, v_a_1841_, v_a_1842_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; size_t v_sz_1849_; size_t v___x_1850_; lean_object* v___x_1851_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref(v___x_1847_);
v_sz_1849_ = lean_array_size(v_params_1844_);
v___x_1850_ = ((size_t)0ULL);
lean_inc_ref(v_params_1844_);
v___x_1851_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_1849_, v___x_1850_, v_params_1844_, v_a_1838_, v_a_1840_, v_a_1841_, v_a_1842_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1853_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref(v___x_1851_);
lean_inc_ref(v_value_1846_);
v___x_1853_ = l_Lean_Compiler_LCNF_Code_toMono(v_value_1846_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; uint8_t v___x_1855_; lean_object* v___x_1856_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref(v___x_1853_);
v___x_1855_ = 0;
v___x_1856_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1855_, v_decl_1837_, v_a_1848_, v_a_1852_, v_a_1854_, v_a_1840_, v_a_1842_);
return v___x_1856_;
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec(v_a_1852_);
lean_dec(v_a_1848_);
lean_dec_ref(v_decl_1837_);
v_a_1857_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1853_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1853_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec(v_a_1848_);
lean_dec_ref(v_decl_1837_);
v_a_1865_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1851_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1851_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_dec_ref(v_decl_1837_);
v_a_1873_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1847_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1847_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__3(void){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_mk_string_unchecked("_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp", 67, 67);
return v___x_1881_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2(void){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.Basic", 24, 24);
return v___x_1882_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4(void){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1883_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_1884_ = lean_unsigned_to_nat(9u);
v___x_1885_ = lean_unsigned_to_nat(640u);
v___x_1886_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__3, &l_Lean_Compiler_LCNF_Code_toMono___closed__3_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__3);
v___x_1887_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__2, &l_Lean_Compiler_LCNF_Code_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2);
v___x_1888_ = l_mkPanicMessageWithDecl(v___x_1887_, v___x_1886_, v___x_1885_, v___x_1884_, v___x_1883_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1889_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_1890_ = lean_unsigned_to_nat(27u);
v___x_1891_ = lean_unsigned_to_nat(343u);
v___x_1892_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_1893_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1894_ = l_mkPanicMessageWithDecl(v___x_1893_, v___x_1892_, v___x_1891_, v___x_1890_, v___x_1889_);
return v___x_1894_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_unsigned_to_nat(1u);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__2);
v___x_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
return v___x_1898_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_1899_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2);
v___x_1901_ = l_Lean_Name_mkStr1(v___x_1900_);
return v___x_1901_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__6(void){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_mk_string_unchecked("add", 3, 3);
return v___x_1902_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__7(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__6, &l_Lean_Compiler_LCNF_Code_toMono___closed__6_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__6);
v___x_1904_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_1905_ = l_Lean_Name_mkStr2(v___x_1904_, v___x_1903_);
return v___x_1905_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__8(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1906_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__2);
v___x_1907_ = l_Lean_Name_mkStr1(v___x_1906_);
return v___x_1907_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_1909_ = l_Lean_Name_mkStr1(v___x_1908_);
return v___x_1909_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_1910_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2);
v___x_1912_ = l_Lean_Name_mkStr1(v___x_1911_);
return v___x_1912_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__9(void){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_mk_string_unchecked("UInt8", 5, 5);
return v___x_1913_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__10(void){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1914_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__9, &l_Lean_Compiler_LCNF_Code_toMono___closed__9_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__9);
v___x_1915_ = l_Lean_Name_mkStr1(v___x_1914_);
return v___x_1915_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__11(void){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_mk_string_unchecked("UInt16", 6, 6);
return v___x_1916_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__12(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__11, &l_Lean_Compiler_LCNF_Code_toMono___closed__11_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__11);
v___x_1918_ = l_Lean_Name_mkStr1(v___x_1917_);
return v___x_1918_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__13(void){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_mk_string_unchecked("UInt32", 6, 6);
return v___x_1919_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__14(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__13, &l_Lean_Compiler_LCNF_Code_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__13);
v___x_1921_ = l_Lean_Name_mkStr1(v___x_1920_);
return v___x_1921_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__15(void){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_mk_string_unchecked("UInt64", 6, 6);
return v___x_1922_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__16(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__15, &l_Lean_Compiler_LCNF_Code_toMono___closed__15_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__15);
v___x_1924_ = l_Lean_Name_mkStr1(v___x_1923_);
return v___x_1924_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1925_; 
v___x_1925_ = lean_mk_string_unchecked("Array", 5, 5);
return v___x_1925_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__17(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2);
v___x_1927_ = l_Lean_Name_mkStr1(v___x_1926_);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1928_; 
v___x_1928_ = lean_mk_string_unchecked("ByteArray", 9, 9);
return v___x_1928_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__18(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2);
v___x_1930_ = l_Lean_Name_mkStr1(v___x_1929_);
return v___x_1930_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = lean_mk_string_unchecked("FloatArray", 10, 10);
return v___x_1931_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__19(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2);
v___x_1933_ = l_Lean_Name_mkStr1(v___x_1932_);
return v___x_1933_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_mk_string_unchecked("String", 6, 6);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__20(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2);
v___x_1936_ = l_Lean_Name_mkStr1(v___x_1935_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_mk_string_unchecked("Thunk", 5, 5);
return v___x_1937_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__21(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4);
v___x_1939_ = l_Lean_Name_mkStr1(v___x_1938_);
return v___x_1939_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = lean_mk_string_unchecked("Task", 4, 4);
return v___x_1940_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__22(void){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2);
v___x_1942_ = l_Lean_Name_mkStr1(v___x_1941_);
return v___x_1942_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_mk_string_unchecked("assertion violation: c.alts.size == 1\n  ", 40, 40);
return v___x_1943_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__0(void){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.trivialStructToMono", 38, 38);
return v___x_1944_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1945_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_1946_ = lean_unsigned_to_nat(2u);
v___x_1947_ = lean_unsigned_to_nat(326u);
v___x_1948_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__0);
v___x_1949_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1950_ = l_mkPanicMessageWithDecl(v___x_1949_, v___x_1948_, v___x_1947_, v___x_1946_, v___x_1945_);
return v___x_1950_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__2(void){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_mk_string_unchecked("assertion violation: ctorName == info.ctorName\n  ", 49, 49);
return v___x_1951_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3(void){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1952_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__2, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__2);
v___x_1953_ = lean_unsigned_to_nat(2u);
v___x_1954_ = lean_unsigned_to_nat(328u);
v___x_1955_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__0);
v___x_1956_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1957_ = l_mkPanicMessageWithDecl(v___x_1956_, v___x_1955_, v___x_1954_, v___x_1953_, v___x_1952_);
return v___x_1957_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__4(void){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_mk_string_unchecked("assertion violation: info.fieldIdx < ps.size\n  ", 47, 47);
return v___x_1958_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1959_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__4, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__4);
v___x_1960_ = lean_unsigned_to_nat(2u);
v___x_1961_ = lean_unsigned_to_nat(329u);
v___x_1962_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__0);
v___x_1963_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1964_ = l_mkPanicMessageWithDecl(v___x_1963_, v___x_1962_, v___x_1961_, v___x_1960_, v___x_1959_);
return v___x_1964_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1965_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_1966_ = lean_unsigned_to_nat(41u);
v___x_1967_ = lean_unsigned_to_nat(327u);
v___x_1968_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__0);
v___x_1969_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_1970_ = l_mkPanicMessageWithDecl(v___x_1969_, v___x_1968_, v___x_1967_, v___x_1966_, v___x_1965_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object* v_info_1971_, lean_object* v_c_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_discr_1979_; lean_object* v_alts_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2059_; 
v_discr_1979_ = lean_ctor_get(v_c_1972_, 2);
v_alts_1980_ = lean_ctor_get(v_c_1972_, 3);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_c_1972_);
if (v_isSharedCheck_2059_ == 0)
{
lean_object* v_unused_2060_; lean_object* v_unused_2061_; 
v_unused_2060_ = lean_ctor_get(v_c_1972_, 1);
lean_dec(v_unused_2060_);
v_unused_2061_ = lean_ctor_get(v_c_1972_, 0);
lean_dec(v_unused_2061_);
v___x_1982_ = v_c_1972_;
v_isShared_1983_ = v_isSharedCheck_2059_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_alts_1980_);
lean_inc(v_discr_1979_);
lean_dec(v_c_1972_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2059_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v___x_1984_ = lean_array_get_size(v_alts_1980_);
v___x_1985_ = lean_unsigned_to_nat(1u);
v___x_1986_ = lean_nat_dec_eq(v___x_1984_, v___x_1985_);
if (v___x_1986_ == 0)
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_del_object(v___x_1982_);
lean_dec_ref(v_alts_1980_);
lean_dec(v_discr_1979_);
v___x_1987_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__1, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1);
v___x_1988_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1987_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_1988_;
}
else
{
uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1989_ = 0;
v___x_1990_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1991_ = lean_unsigned_to_nat(0u);
v___x_1992_ = lean_array_get(v___x_1990_, v_alts_1980_, v___x_1991_);
lean_dec_ref(v_alts_1980_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_ctorName_1993_; lean_object* v_params_1994_; lean_object* v_code_1995_; lean_object* v_ctorName_1996_; lean_object* v_fieldIdx_1997_; uint8_t v___x_1998_; 
v_ctorName_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_ctorName_1993_);
v_params_1994_ = lean_ctor_get(v___x_1992_, 1);
lean_inc_ref(v_params_1994_);
v_code_1995_ = lean_ctor_get(v___x_1992_, 2);
lean_inc_ref(v_code_1995_);
lean_dec_ref(v___x_1992_);
v_ctorName_1996_ = lean_ctor_get(v_info_1971_, 0);
v_fieldIdx_1997_ = lean_ctor_get(v_info_1971_, 2);
v___x_1998_ = lean_name_eq(v_ctorName_1993_, v_ctorName_1996_);
lean_dec(v_ctorName_1993_);
if (v___x_1998_ == 0)
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
lean_dec_ref(v_code_1995_);
lean_dec_ref(v_params_1994_);
lean_del_object(v___x_1982_);
lean_dec(v_discr_1979_);
v___x_1999_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__3, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3);
v___x_2000_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1999_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_2000_;
}
else
{
lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = lean_array_get_size(v_params_1994_);
v___x_2002_ = lean_nat_dec_lt(v_fieldIdx_1997_, v___x_2001_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
lean_dec_ref(v_code_1995_);
lean_dec_ref(v_params_1994_);
lean_del_object(v___x_1982_);
lean_dec(v_discr_1979_);
v___x_2003_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__5, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5);
v___x_2004_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2003_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_2004_;
}
else
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2006_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1989_, v_params_1994_, v_a_1975_, v_a_1977_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_p_2007_; lean_object* v_fvarId_2008_; lean_object* v_binderName_2009_; lean_object* v_type_2010_; lean_object* v___x_2011_; 
lean_dec_ref(v___x_2006_);
v_p_2007_ = lean_array_get(v___x_2005_, v_params_1994_, v_fieldIdx_1997_);
lean_dec_ref(v_params_1994_);
v_fvarId_2008_ = lean_ctor_get(v_p_2007_, 0);
lean_inc(v_fvarId_2008_);
v_binderName_2009_ = lean_ctor_get(v_p_2007_, 1);
lean_inc(v_binderName_2009_);
v_type_2010_ = lean_ctor_get(v_p_2007_, 2);
lean_inc_ref(v_type_2010_);
lean_dec(v_p_2007_);
v___x_2011_ = l_Lean_Compiler_LCNF_toMonoType(v_type_2010_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v_lctx_2015_; lean_object* v_nextIdx_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2040_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref(v___x_2011_);
v___x_2013_ = lean_st_ref_get(v_a_1977_);
lean_dec(v___x_2013_);
v___x_2014_ = lean_st_ref_take(v_a_1975_);
v_lctx_2015_ = lean_ctor_get(v___x_2014_, 0);
v_nextIdx_2016_ = lean_ctor_get(v___x_2014_, 1);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2018_ = v___x_2014_;
v_isShared_2019_ = v_isSharedCheck_2040_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_nextIdx_2016_);
lean_inc(v_lctx_2015_);
lean_dec(v___x_2014_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2040_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2020_ = lean_obj_once(&l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0, &l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0_once, _init_l_Lean_Compiler_LCNF_argsToMonoRedArg___closed__0);
v___x_2021_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2021_, 0, v_discr_1979_);
lean_ctor_set(v___x_2021_, 1, v___x_2020_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 3, v___x_2021_);
lean_ctor_set(v___x_1982_, 2, v_a_2012_);
lean_ctor_set(v___x_1982_, 1, v_binderName_2009_);
lean_ctor_set(v___x_1982_, 0, v_fvarId_2008_);
v___x_2023_ = v___x_1982_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_fvarId_2008_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v_binderName_2009_);
lean_ctor_set(v_reuseFailAlloc_2039_, 2, v_a_2012_);
lean_ctor_set(v_reuseFailAlloc_2039_, 3, v___x_2021_);
v___x_2023_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2024_; lean_object* v___x_2026_; 
lean_inc_ref(v___x_2023_);
v___x_2024_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1989_, v_lctx_2015_, v___x_2023_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2024_);
v___x_2026_ = v___x_2018_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2024_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v_nextIdx_2016_);
v___x_2026_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_st_ref_set(v_a_1975_, v___x_2026_);
v___x_2028_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1995_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2037_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2035_; 
v___x_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2023_);
lean_ctor_set(v___x_2033_, 1, v_a_2029_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2033_);
v___x_2035_ = v___x_2031_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2033_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
else
{
lean_dec_ref(v___x_2023_);
return v___x_2028_;
}
}
}
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_dec(v_binderName_2009_);
lean_dec(v_fvarId_2008_);
lean_dec_ref(v_code_1995_);
lean_del_object(v___x_1982_);
lean_dec(v_discr_1979_);
v_a_2041_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2011_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2011_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec_ref(v_code_1995_);
lean_dec_ref(v_params_1994_);
lean_del_object(v___x_1982_);
lean_dec(v_discr_1979_);
v_a_2049_ = lean_ctor_get(v___x_2006_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2006_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2006_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2006_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
}
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; 
lean_dec(v___x_1992_);
lean_del_object(v___x_1982_);
lean_dec(v_discr_1979_);
v___x_2057_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__6, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6);
v___x_2058_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2057_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_2058_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_mk_string_unchecked("expected constructor", 20, 20);
return v___x_2062_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2(void){
_start:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2063_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1);
v___x_2064_ = lean_unsigned_to_nat(70u);
v___x_2065_ = lean_unsigned_to_nat(395u);
v___x_2066_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0);
v___x_2067_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2068_ = l_mkPanicMessageWithDecl(v___x_2067_, v___x_2066_, v___x_2065_, v___x_2064_, v___x_2063_);
return v___x_2068_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3(void){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = lean_mk_string_unchecked("_impl", 5, 5);
return v___x_2069_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3);
v___x_2071_ = l_Lean_Name_mkStr1(v___x_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object* v___x_2072_, uint8_t v___x_2073_, size_t v_sz_2074_, size_t v_i_2075_, lean_object* v_bs_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
uint8_t v___x_2083_; 
v___x_2083_ = lean_usize_dec_lt(v_i_2075_, v_sz_2074_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; 
lean_dec_ref(v___x_2072_);
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v_bs_2076_);
return v___x_2084_;
}
else
{
lean_object* v_v_2085_; lean_object* v___x_2086_; lean_object* v_bs_x27_2087_; lean_object* v_a_2089_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v___y_2099_; 
v_v_2085_ = lean_array_uget(v_bs_2076_, v_i_2075_);
v___x_2086_ = lean_unsigned_to_nat(0u);
v_bs_x27_2087_ = lean_array_uset(v_bs_2076_, v_i_2075_, v___x_2086_);
if (lean_obj_tag(v_v_2085_) == 0)
{
lean_object* v_ctorName_2111_; lean_object* v_params_2112_; lean_object* v_code_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2151_; 
v_ctorName_2111_ = lean_ctor_get(v_v_2085_, 0);
v_params_2112_ = lean_ctor_get(v_v_2085_, 1);
v_code_2113_ = lean_ctor_get(v_v_2085_, 2);
v_isSharedCheck_2151_ = !lean_is_exclusive(v_v_2085_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2115_ = v_v_2085_;
v_isShared_2116_ = v_isSharedCheck_2151_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_code_2113_);
lean_inc(v_params_2112_);
lean_inc(v_ctorName_2111_);
lean_dec(v_v_2085_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2151_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2117_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4);
v___x_2118_ = l_Lean_Name_append(v_ctorName_2111_, v___x_2117_);
lean_inc(v___x_2118_);
lean_inc_ref(v___x_2072_);
v___x_2119_ = l_Lean_Environment_find_x3f(v___x_2072_, v___x_2118_, v___x_2073_);
if (lean_obj_tag(v___x_2119_) == 1)
{
lean_object* v_val_2120_; 
v_val_2120_ = lean_ctor_get(v___x_2119_, 0);
lean_inc(v_val_2120_);
lean_dec_ref(v___x_2119_);
if (lean_obj_tag(v_val_2120_) == 6)
{
lean_object* v_val_2121_; lean_object* v_toConstantVal_2122_; lean_object* v_numParams_2123_; lean_object* v_numFields_2124_; lean_object* v_type_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v_val_2121_ = lean_ctor_get(v_val_2120_, 0);
lean_inc_ref(v_val_2121_);
lean_dec_ref(v_val_2120_);
v_toConstantVal_2122_ = lean_ctor_get(v_val_2121_, 0);
lean_inc_ref(v_toConstantVal_2122_);
v_numParams_2123_ = lean_ctor_get(v_val_2121_, 3);
lean_inc(v_numParams_2123_);
v_numFields_2124_ = lean_ctor_get(v_val_2121_, 4);
lean_inc(v_numFields_2124_);
lean_dec_ref(v_val_2121_);
v_type_2125_ = lean_ctor_get(v_toConstantVal_2122_, 2);
lean_inc_ref(v_type_2125_);
lean_dec_ref(v_toConstantVal_2122_);
v___x_2126_ = lean_array_get_size(v_params_2112_);
v___x_2127_ = lean_nat_sub(v_numFields_2124_, v___x_2126_);
lean_dec(v_numFields_2124_);
v___x_2128_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_type_2125_, v_numParams_2123_, v___x_2127_, v_params_2112_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec_ref(v_params_2112_);
lean_dec(v___x_2127_);
lean_dec(v_numParams_2123_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2130_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref(v___x_2128_);
v___x_2130_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2113_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref(v___x_2130_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 2, v_a_2131_);
lean_ctor_set(v___x_2115_, 1, v_a_2129_);
lean_ctor_set(v___x_2115_, 0, v___x_2118_);
v___x_2133_ = v___x_2115_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2118_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_a_2129_);
lean_ctor_set(v_reuseFailAlloc_2134_, 2, v_a_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
v_a_2089_ = v___x_2133_;
goto v___jp_2088_;
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
lean_dec(v_a_2129_);
lean_dec(v___x_2118_);
lean_del_object(v___x_2115_);
lean_dec_ref(v_bs_x27_2087_);
lean_dec_ref(v___x_2072_);
v_a_2135_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2130_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2130_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v___x_2118_);
lean_del_object(v___x_2115_);
lean_dec_ref(v_code_2113_);
lean_dec_ref(v_bs_x27_2087_);
lean_dec_ref(v___x_2072_);
v_a_2143_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2128_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2128_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_dec(v_val_2120_);
lean_dec(v___x_2118_);
lean_del_object(v___x_2115_);
lean_dec_ref(v_code_2113_);
lean_dec_ref(v_params_2112_);
v___y_2095_ = v___y_2077_;
v___y_2096_ = v___y_2078_;
v___y_2097_ = v___y_2079_;
v___y_2098_ = v___y_2080_;
v___y_2099_ = v___y_2081_;
goto v___jp_2094_;
}
}
else
{
lean_dec(v___x_2119_);
lean_dec(v___x_2118_);
lean_del_object(v___x_2115_);
lean_dec_ref(v_code_2113_);
lean_dec_ref(v_params_2112_);
v___y_2095_ = v___y_2077_;
v___y_2096_ = v___y_2078_;
v___y_2097_ = v___y_2079_;
v___y_2098_ = v___y_2080_;
v___y_2099_ = v___y_2081_;
goto v___jp_2094_;
}
}
}
else
{
lean_object* v_code_2152_; lean_object* v___x_2153_; 
v_code_2152_ = lean_ctor_get(v_v_2085_, 0);
lean_inc_ref(v_code_2152_);
v___x_2153_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2152_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2155_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref(v___x_2153_);
v___x_2155_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2085_, v_a_2154_);
v_a_2089_ = v___x_2155_;
goto v___jp_2088_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_v_2085_);
lean_dec_ref(v_bs_x27_2087_);
lean_dec_ref(v___x_2072_);
v_a_2156_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2153_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2153_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
v___jp_2088_:
{
size_t v___x_2090_; size_t v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = ((size_t)1ULL);
v___x_2091_ = lean_usize_add(v_i_2075_, v___x_2090_);
v___x_2092_ = lean_array_uset(v_bs_x27_2087_, v_i_2075_, v_a_2089_);
v_i_2075_ = v___x_2091_;
v_bs_2076_ = v___x_2092_;
goto _start;
}
v___jp_2094_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2);
v___x_2101_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v___x_2100_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref(v___x_2101_);
v_a_2089_ = v_a_2102_;
goto v___jp_2088_;
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec_ref(v_bs_x27_2087_);
lean_dec_ref(v___x_2072_);
v_a_2103_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2101_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2101_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t v_sz_2164_, size_t v_i_2165_, lean_object* v_bs_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_usize_dec_lt(v_i_2165_, v_sz_2164_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_bs_2166_);
return v___x_2174_;
}
else
{
lean_object* v_v_2175_; lean_object* v___x_2176_; lean_object* v_bs_x27_2177_; lean_object* v_a_2179_; 
v_v_2175_ = lean_array_uget(v_bs_2166_, v_i_2165_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v_bs_x27_2177_ = lean_array_uset(v_bs_2166_, v_i_2165_, v___x_2176_);
if (lean_obj_tag(v_v_2175_) == 0)
{
lean_object* v_params_2184_; lean_object* v_code_2185_; size_t v_sz_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v_params_2184_ = lean_ctor_get(v_v_2175_, 1);
v_code_2185_ = lean_ctor_get(v_v_2175_, 2);
v_sz_2186_ = lean_array_size(v_params_2184_);
v___x_2187_ = ((size_t)0ULL);
lean_inc_ref(v_params_2184_);
v___x_2188_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_2186_, v___x_2187_, v_params_2184_, v___y_2167_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2188_) == 0)
{
lean_object* v_a_2189_; lean_object* v___x_2190_; 
v_a_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2189_);
lean_dec_ref(v___x_2188_);
lean_inc_ref(v_code_2185_);
v___x_2190_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2185_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2191_);
lean_dec_ref(v___x_2190_);
v___x_2192_ = 0;
v___x_2193_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v___x_2192_, v_v_2175_, v_a_2189_, v_a_2191_);
v_a_2179_ = v___x_2193_;
goto v___jp_2178_;
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
lean_dec(v_a_2189_);
lean_dec_ref(v_v_2175_);
lean_dec_ref(v_bs_x27_2177_);
v_a_2194_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2190_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2190_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
else
{
lean_dec_ref(v_v_2175_);
lean_dec_ref(v_bs_x27_2177_);
return v___x_2188_;
}
}
else
{
lean_object* v_code_2202_; lean_object* v___x_2203_; 
v_code_2202_ = lean_ctor_get(v_v_2175_, 0);
lean_inc_ref(v_code_2202_);
v___x_2203_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2202_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2205_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref(v___x_2203_);
v___x_2205_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2175_, v_a_2204_);
v_a_2179_ = v___x_2205_;
goto v___jp_2178_;
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v_v_2175_);
lean_dec_ref(v_bs_x27_2177_);
v_a_2206_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2203_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2203_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
v___jp_2178_:
{
size_t v___x_2180_; size_t v___x_2181_; lean_object* v___x_2182_; 
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_add(v_i_2165_, v___x_2180_);
v___x_2182_ = lean_array_uset(v_bs_x27_2177_, v_i_2165_, v_a_2179_);
v_i_2165_ = v___x_2181_;
v_bs_2166_ = v___x_2182_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesTaskToMono", 34, 34);
return v___x_2214_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2215_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2216_ = lean_unsigned_to_nat(2u);
v___x_2217_ = lean_unsigned_to_nat(315u);
v___x_2218_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0);
v___x_2219_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2220_ = l_mkPanicMessageWithDecl(v___x_2219_, v___x_2218_, v___x_2217_, v___x_2216_, v___x_2215_);
return v___x_2220_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = lean_mk_string_unchecked("get", 3, 3);
return v___x_2221_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3);
v___x_2223_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2);
v___x_2224_ = l_Lean_Name_mkStr2(v___x_2223_, v___x_2222_);
return v___x_2224_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2225_ = lean_box(0);
v___x_2226_ = lean_unsigned_to_nat(2u);
v___x_2227_ = lean_mk_empty_array_with_capacity(v___x_2226_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2225_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2229_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2230_ = lean_unsigned_to_nat(34u);
v___x_2231_ = lean_unsigned_to_nat(316u);
v___x_2232_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0);
v___x_2233_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2234_ = l_mkPanicMessageWithDecl(v___x_2233_, v___x_2232_, v___x_2231_, v___x_2230_, v___x_2229_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object* v_c_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v_discr_2242_; lean_object* v_alts_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2313_; 
v_discr_2242_ = lean_ctor_get(v_c_2235_, 2);
v_alts_2243_ = lean_ctor_get(v_c_2235_, 3);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_c_2235_);
if (v_isSharedCheck_2313_ == 0)
{
lean_object* v_unused_2314_; lean_object* v_unused_2315_; 
v_unused_2314_ = lean_ctor_get(v_c_2235_, 1);
lean_dec(v_unused_2314_);
v_unused_2315_ = lean_ctor_get(v_c_2235_, 0);
lean_dec(v_unused_2315_);
v___x_2245_ = v_c_2235_;
v_isShared_2246_ = v_isSharedCheck_2313_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_alts_2243_);
lean_inc(v_discr_2242_);
lean_dec(v_c_2235_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2313_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2247_ = lean_array_get_size(v_alts_2243_);
v___x_2248_ = lean_unsigned_to_nat(1u);
v___x_2249_ = lean_nat_dec_eq(v___x_2247_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
lean_del_object(v___x_2245_);
lean_dec_ref(v_alts_2243_);
lean_dec(v_discr_2242_);
v___x_2250_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1);
v___x_2251_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2250_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
return v___x_2251_;
}
else
{
uint8_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2252_ = 0;
v___x_2253_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2254_ = lean_unsigned_to_nat(0u);
v___x_2255_ = lean_array_get(v___x_2253_, v_alts_2243_, v___x_2254_);
lean_dec_ref(v_alts_2243_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_params_2256_; lean_object* v_code_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2309_; 
v_params_2256_ = lean_ctor_get(v___x_2255_, 1);
v_code_2257_ = lean_ctor_get(v___x_2255_, 2);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2309_ == 0)
{
lean_object* v_unused_2310_; 
v_unused_2310_ = lean_ctor_get(v___x_2255_, 0);
lean_dec(v_unused_2310_);
v___x_2259_ = v___x_2255_;
v_isShared_2260_ = v_isSharedCheck_2309_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_code_2257_);
lean_inc(v_params_2256_);
lean_dec(v___x_2255_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2309_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2252_, v_params_2256_, v_a_2238_, v_a_2240_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v_fvarId_2266_; lean_object* v_binderName_2267_; lean_object* v_lctx_2268_; lean_object* v_nextIdx_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v___x_2261_);
v___x_2262_ = lean_st_ref_get(v_a_2240_);
lean_dec(v___x_2262_);
v___x_2263_ = lean_st_ref_take(v_a_2238_);
v___x_2264_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2265_ = lean_array_get(v___x_2264_, v_params_2256_, v___x_2254_);
lean_dec_ref(v_params_2256_);
v_fvarId_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_fvarId_2266_);
v_binderName_2267_ = lean_ctor_get(v___x_2265_, 1);
lean_inc(v_binderName_2267_);
lean_dec(v___x_2265_);
v_lctx_2268_ = lean_ctor_get(v___x_2263_, 0);
v_nextIdx_2269_ = lean_ctor_get(v___x_2263_, 1);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2271_ = v___x_2263_;
v_isShared_2272_ = v_isSharedCheck_2300_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_nextIdx_2269_);
lean_inc(v_lctx_2268_);
lean_dec(v___x_2263_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2300_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2279_; 
v___x_2273_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4);
v___x_2274_ = lean_box(0);
v___x_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2275_, 0, v_discr_2242_);
v___x_2276_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2275_);
if (v_isShared_2260_ == 0)
{
lean_ctor_set_tag(v___x_2259_, 3);
lean_ctor_set(v___x_2259_, 2, v___x_2277_);
lean_ctor_set(v___x_2259_, 1, v___x_2274_);
lean_ctor_set(v___x_2259_, 0, v___x_2273_);
v___x_2279_ = v___x_2259_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2273_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v___x_2274_);
lean_ctor_set(v_reuseFailAlloc_2299_, 2, v___x_2277_);
v___x_2279_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2280_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 3, v___x_2279_);
lean_ctor_set(v___x_2245_, 2, v___x_2280_);
lean_ctor_set(v___x_2245_, 1, v_binderName_2267_);
lean_ctor_set(v___x_2245_, 0, v_fvarId_2266_);
v___x_2282_ = v___x_2245_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_fvarId_2266_);
lean_ctor_set(v_reuseFailAlloc_2298_, 1, v_binderName_2267_);
lean_ctor_set(v_reuseFailAlloc_2298_, 2, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2298_, 3, v___x_2279_);
v___x_2282_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2283_; lean_object* v___x_2285_; 
lean_inc_ref(v___x_2282_);
v___x_2283_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2252_, v_lctx_2268_, v___x_2282_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 0, v___x_2283_);
v___x_2285_ = v___x_2271_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_nextIdx_2269_);
v___x_2285_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_st_ref_set(v_a_2238_, v___x_2285_);
v___x_2287_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2257_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2296_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2292_; lean_object* v___x_2294_; 
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2282_);
lean_ctor_set(v___x_2292_, 1, v_a_2288_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v___x_2292_);
v___x_2294_ = v___x_2290_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
else
{
lean_dec_ref(v___x_2282_);
return v___x_2287_;
}
}
}
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_del_object(v___x_2259_);
lean_dec_ref(v_code_2257_);
lean_dec_ref(v_params_2256_);
lean_del_object(v___x_2245_);
lean_dec(v_discr_2242_);
v_a_2301_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2261_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2261_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
lean_dec(v___x_2255_);
lean_del_object(v___x_2245_);
lean_dec(v_discr_2242_);
v___x_2311_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5);
v___x_2312_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2311_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
return v___x_2312_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesThunkToMono", 35, 35);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2317_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2318_ = lean_unsigned_to_nat(2u);
v___x_2319_ = lean_unsigned_to_nat(295u);
v___x_2320_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0);
v___x_2321_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2322_ = l_mkPanicMessageWithDecl(v___x_2321_, v___x_2320_, v___x_2319_, v___x_2318_, v___x_2317_);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3);
v___x_2324_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4);
v___x_2325_ = l_Lean_Name_mkStr2(v___x_2324_, v___x_2323_);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_mk_string_unchecked("PUnit", 5, 5);
return v___x_2326_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6);
v___x_2328_ = l_Lean_Name_mkStr1(v___x_2327_);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_box(0);
v___x_2330_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7);
v___x_2331_ = l_Lean_Expr_const___override(v___x_2330_, v___x_2329_);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2332_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2333_ = lean_unsigned_to_nat(34u);
v___x_2334_ = lean_unsigned_to_nat(296u);
v___x_2335_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0);
v___x_2336_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2337_ = l_mkPanicMessageWithDecl(v___x_2336_, v___x_2335_, v___x_2334_, v___x_2333_, v___x_2332_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object* v_c_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_){
_start:
{
lean_object* v_discr_2345_; lean_object* v_alts_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; uint8_t v___x_2349_; 
v_discr_2345_ = lean_ctor_get(v_c_2338_, 2);
v_alts_2346_ = lean_ctor_get(v_c_2338_, 3);
v___x_2347_ = lean_array_get_size(v_alts_2346_);
v___x_2348_ = lean_unsigned_to_nat(1u);
v___x_2349_ = lean_nat_dec_eq(v___x_2347_, v___x_2348_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1);
v___x_2351_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2350_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
return v___x_2351_;
}
else
{
uint8_t v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2352_ = 0;
v___x_2353_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2354_ = lean_unsigned_to_nat(0u);
v___x_2355_ = lean_array_get(v___x_2353_, v_alts_2346_, v___x_2354_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_params_2356_; lean_object* v_code_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2455_; 
v_params_2356_ = lean_ctor_get(v___x_2355_, 1);
v_code_2357_ = lean_ctor_get(v___x_2355_, 2);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2455_ == 0)
{
lean_object* v_unused_2456_; 
v_unused_2456_ = lean_ctor_get(v___x_2355_, 0);
lean_dec(v_unused_2456_);
v___x_2359_ = v___x_2355_;
v_isShared_2360_ = v_isSharedCheck_2455_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_code_2357_);
lean_inc(v_params_2356_);
lean_dec(v___x_2355_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2455_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2352_, v_params_2356_, v_a_2341_, v_a_2343_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_dec_ref(v___x_2361_);
v___x_2362_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3);
v___x_2363_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2362_, v_a_2341_, v_a_2343_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2372_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2364_);
lean_dec_ref(v___x_2363_);
v___x_2365_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
lean_inc(v_discr_2345_);
v___x_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_discr_2345_);
v___x_2367_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5);
v___x_2368_ = lean_box(0);
v___x_2369_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2370_ = lean_array_push(v___x_2369_, v___x_2366_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set_tag(v___x_2359_, 3);
lean_ctor_set(v___x_2359_, 2, v___x_2370_);
lean_ctor_set(v___x_2359_, 1, v___x_2368_);
lean_ctor_set(v___x_2359_, 0, v___x_2367_);
v___x_2372_ = v___x_2359_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2438_, 2, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2374_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2352_, v_a_2364_, v___x_2373_, v___x_2372_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; lean_object* v___x_2378_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref(v___x_2374_);
v___x_2376_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8);
v___x_2377_ = 0;
v___x_2378_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_2352_, v___x_2376_, v___x_2377_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2380_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref(v___x_2378_);
v___x_2380_ = l_Lean_mkArrow(v___x_2376_, v___x_2373_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v_fvarId_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v_fvarId_2386_; lean_object* v_binderName_2387_; lean_object* v_lctx_2388_; lean_object* v_nextIdx_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2413_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2381_);
lean_dec_ref(v___x_2380_);
v_fvarId_2382_ = lean_ctor_get(v_a_2375_, 0);
v___x_2383_ = lean_st_ref_get(v_a_2343_);
lean_dec(v___x_2383_);
v___x_2384_ = lean_st_ref_take(v_a_2341_);
v___x_2385_ = lean_array_get(v___x_2365_, v_params_2356_, v___x_2354_);
lean_dec_ref(v_params_2356_);
v_fvarId_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_fvarId_2386_);
v_binderName_2387_ = lean_ctor_get(v___x_2385_, 1);
lean_inc(v_binderName_2387_);
lean_dec(v___x_2385_);
v_lctx_2388_ = lean_ctor_get(v___x_2384_, 0);
v_nextIdx_2389_ = lean_ctor_get(v___x_2384_, 1);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2391_ = v___x_2384_;
v_isShared_2392_ = v_isSharedCheck_2413_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_nextIdx_2389_);
lean_inc(v_lctx_2388_);
lean_dec(v___x_2384_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2413_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
lean_inc(v_fvarId_2382_);
v___x_2393_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2393_, 0, v_fvarId_2382_);
v___x_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2394_, 0, v_a_2375_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = lean_mk_empty_array_with_capacity(v___x_2348_);
v___x_2396_ = lean_array_push(v___x_2395_, v_a_2379_);
v___x_2397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2397_, 0, v_fvarId_2386_);
lean_ctor_set(v___x_2397_, 1, v_binderName_2387_);
lean_ctor_set(v___x_2397_, 2, v___x_2396_);
lean_ctor_set(v___x_2397_, 3, v_a_2381_);
lean_ctor_set(v___x_2397_, 4, v___x_2394_);
lean_inc_ref(v___x_2397_);
v___x_2398_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_2352_, v_lctx_2388_, v___x_2397_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2398_);
v___x_2400_ = v___x_2391_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v___x_2398_);
lean_ctor_set(v_reuseFailAlloc_2412_, 1, v_nextIdx_2389_);
v___x_2400_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = lean_st_ref_set(v_a_2341_, v___x_2400_);
v___x_2402_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2357_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2411_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2405_ = v___x_2402_;
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2402_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; lean_object* v___x_2409_; 
v___x_2407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2397_);
lean_ctor_set(v___x_2407_, 1, v_a_2403_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2407_);
v___x_2409_ = v___x_2405_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
else
{
lean_dec_ref(v___x_2397_);
return v___x_2402_;
}
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec(v_a_2379_);
lean_dec(v_a_2375_);
lean_dec_ref(v_code_2357_);
lean_dec_ref(v_params_2356_);
v_a_2414_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2380_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2380_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v_a_2375_);
lean_dec_ref(v_code_2357_);
lean_dec_ref(v_params_2356_);
v_a_2422_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2378_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2378_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
else
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2437_; 
lean_dec_ref(v_code_2357_);
lean_dec_ref(v_params_2356_);
v_a_2430_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2432_ = v___x_2374_;
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2374_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2430_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_del_object(v___x_2359_);
lean_dec_ref(v_code_2357_);
lean_dec_ref(v_params_2356_);
v_a_2439_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2363_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2363_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_del_object(v___x_2359_);
lean_dec_ref(v_code_2357_);
lean_dec_ref(v_params_2356_);
v_a_2447_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2361_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2361_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
}
else
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_dec(v___x_2355_);
v___x_2457_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9);
v___x_2458_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2457_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
return v___x_2458_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesStringToMono", 36, 36);
return v___x_2459_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2460_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2461_ = lean_unsigned_to_nat(2u);
v___x_2462_ = lean_unsigned_to_nat(284u);
v___x_2463_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0);
v___x_2464_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2465_ = l_mkPanicMessageWithDecl(v___x_2464_, v___x_2463_, v___x_2462_, v___x_2461_, v___x_2460_);
return v___x_2465_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_mk_string_unchecked("toByteArray", 11, 11);
return v___x_2466_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2467_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3);
v___x_2468_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2);
v___x_2469_ = l_Lean_Name_mkStr2(v___x_2468_, v___x_2467_);
return v___x_2469_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2470_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2471_ = lean_unsigned_to_nat(34u);
v___x_2472_ = lean_unsigned_to_nat(285u);
v___x_2473_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0);
v___x_2474_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2475_ = l_mkPanicMessageWithDecl(v___x_2474_, v___x_2473_, v___x_2472_, v___x_2471_, v___x_2470_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object* v_c_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_){
_start:
{
lean_object* v_discr_2483_; lean_object* v_alts_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2554_; 
v_discr_2483_ = lean_ctor_get(v_c_2476_, 2);
v_alts_2484_ = lean_ctor_get(v_c_2476_, 3);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_c_2476_);
if (v_isSharedCheck_2554_ == 0)
{
lean_object* v_unused_2555_; lean_object* v_unused_2556_; 
v_unused_2555_ = lean_ctor_get(v_c_2476_, 1);
lean_dec(v_unused_2555_);
v_unused_2556_ = lean_ctor_get(v_c_2476_, 0);
lean_dec(v_unused_2556_);
v___x_2486_ = v_c_2476_;
v_isShared_2487_ = v_isSharedCheck_2554_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_alts_2484_);
lean_inc(v_discr_2483_);
lean_dec(v_c_2476_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2554_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; uint8_t v___x_2490_; 
v___x_2488_ = lean_array_get_size(v_alts_2484_);
v___x_2489_ = lean_unsigned_to_nat(1u);
v___x_2490_ = lean_nat_dec_eq(v___x_2488_, v___x_2489_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; lean_object* v___x_2492_; 
lean_del_object(v___x_2486_);
lean_dec_ref(v_alts_2484_);
lean_dec(v_discr_2483_);
v___x_2491_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1);
v___x_2492_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2491_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_);
return v___x_2492_;
}
else
{
uint8_t v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2493_ = 0;
v___x_2494_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2495_ = lean_unsigned_to_nat(0u);
v___x_2496_ = lean_array_get(v___x_2494_, v_alts_2484_, v___x_2495_);
lean_dec_ref(v_alts_2484_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v_params_2497_; lean_object* v_code_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2550_; 
v_params_2497_ = lean_ctor_get(v___x_2496_, 1);
v_code_2498_ = lean_ctor_get(v___x_2496_, 2);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2550_ == 0)
{
lean_object* v_unused_2551_; 
v_unused_2551_ = lean_ctor_get(v___x_2496_, 0);
lean_dec(v_unused_2551_);
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2550_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_code_2498_);
lean_inc(v_params_2497_);
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2550_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2493_, v_params_2497_, v_a_2479_, v_a_2481_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v_fvarId_2507_; lean_object* v_binderName_2508_; lean_object* v_lctx_2509_; lean_object* v_nextIdx_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2541_; 
lean_dec_ref(v___x_2502_);
v___x_2503_ = lean_st_ref_get(v_a_2481_);
lean_dec(v___x_2503_);
v___x_2504_ = lean_st_ref_take(v_a_2479_);
v___x_2505_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2506_ = lean_array_get(v___x_2505_, v_params_2497_, v___x_2495_);
lean_dec_ref(v_params_2497_);
v_fvarId_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_fvarId_2507_);
v_binderName_2508_ = lean_ctor_get(v___x_2506_, 1);
lean_inc(v_binderName_2508_);
lean_dec(v___x_2506_);
v_lctx_2509_ = lean_ctor_get(v___x_2504_, 0);
v_nextIdx_2510_ = lean_ctor_get(v___x_2504_, 1);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2512_ = v___x_2504_;
v_isShared_2513_ = v_isSharedCheck_2541_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_nextIdx_2510_);
lean_inc(v_lctx_2509_);
lean_dec(v___x_2504_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2541_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2520_; 
v___x_2514_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4);
v___x_2515_ = lean_box(0);
v___x_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2516_, 0, v_discr_2483_);
v___x_2517_ = lean_mk_empty_array_with_capacity(v___x_2489_);
v___x_2518_ = lean_array_push(v___x_2517_, v___x_2516_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set_tag(v___x_2500_, 3);
lean_ctor_set(v___x_2500_, 2, v___x_2518_);
lean_ctor_set(v___x_2500_, 1, v___x_2515_);
lean_ctor_set(v___x_2500_, 0, v___x_2514_);
v___x_2520_ = v___x_2500_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2514_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v___x_2515_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v___x_2518_);
v___x_2520_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2521_; lean_object* v___x_2523_; 
v___x_2521_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 3, v___x_2520_);
lean_ctor_set(v___x_2486_, 2, v___x_2521_);
lean_ctor_set(v___x_2486_, 1, v_binderName_2508_);
lean_ctor_set(v___x_2486_, 0, v_fvarId_2507_);
v___x_2523_ = v___x_2486_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_fvarId_2507_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_binderName_2508_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v___x_2521_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v___x_2520_);
v___x_2523_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_inc_ref(v___x_2523_);
v___x_2524_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2493_, v_lctx_2509_, v___x_2523_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v___x_2524_);
v___x_2526_ = v___x_2512_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v_nextIdx_2510_);
v___x_2526_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = lean_st_ref_set(v_a_2479_, v___x_2526_);
v___x_2528_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2498_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2537_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2531_ = v___x_2528_;
v_isShared_2532_ = v_isSharedCheck_2537_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___x_2528_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2537_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2523_);
lean_ctor_set(v___x_2533_, 1, v_a_2529_);
if (v_isShared_2532_ == 0)
{
lean_ctor_set(v___x_2531_, 0, v___x_2533_);
v___x_2535_ = v___x_2531_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
else
{
lean_dec_ref(v___x_2523_);
return v___x_2528_;
}
}
}
}
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_del_object(v___x_2500_);
lean_dec_ref(v_code_2498_);
lean_dec_ref(v_params_2497_);
lean_del_object(v___x_2486_);
lean_dec(v_discr_2483_);
v_a_2542_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2502_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2502_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
lean_dec(v___x_2496_);
lean_del_object(v___x_2486_);
lean_dec(v_discr_2483_);
v___x_2552_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5);
v___x_2553_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2552_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_);
return v___x_2553_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesFloatArrayToMono", 40, 40);
return v___x_2557_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2558_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2559_ = lean_unsigned_to_nat(2u);
v___x_2560_ = lean_unsigned_to_nat(273u);
v___x_2561_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0);
v___x_2562_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2563_ = l_mkPanicMessageWithDecl(v___x_2562_, v___x_2561_, v___x_2560_, v___x_2559_, v___x_2558_);
return v___x_2563_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_mk_string_unchecked("data", 4, 4);
return v___x_2564_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3);
v___x_2566_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2);
v___x_2567_ = l_Lean_Name_mkStr2(v___x_2566_, v___x_2565_);
return v___x_2567_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2568_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2569_ = lean_unsigned_to_nat(34u);
v___x_2570_ = lean_unsigned_to_nat(274u);
v___x_2571_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0);
v___x_2572_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2573_ = l_mkPanicMessageWithDecl(v___x_2572_, v___x_2571_, v___x_2570_, v___x_2569_, v___x_2568_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object* v_c_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v_discr_2581_; lean_object* v_alts_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2652_; 
v_discr_2581_ = lean_ctor_get(v_c_2574_, 2);
v_alts_2582_ = lean_ctor_get(v_c_2574_, 3);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_c_2574_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; lean_object* v_unused_2654_; 
v_unused_2653_ = lean_ctor_get(v_c_2574_, 1);
lean_dec(v_unused_2653_);
v_unused_2654_ = lean_ctor_get(v_c_2574_, 0);
lean_dec(v_unused_2654_);
v___x_2584_ = v_c_2574_;
v_isShared_2585_ = v_isSharedCheck_2652_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_alts_2582_);
lean_inc(v_discr_2581_);
lean_dec(v_c_2574_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2652_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2586_ = lean_array_get_size(v_alts_2582_);
v___x_2587_ = lean_unsigned_to_nat(1u);
v___x_2588_ = lean_nat_dec_eq(v___x_2586_, v___x_2587_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_del_object(v___x_2584_);
lean_dec_ref(v_alts_2582_);
lean_dec(v_discr_2581_);
v___x_2589_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1);
v___x_2590_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2589_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
return v___x_2590_;
}
else
{
uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2591_ = 0;
v___x_2592_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = lean_array_get(v___x_2592_, v_alts_2582_, v___x_2593_);
lean_dec_ref(v_alts_2582_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_params_2595_; lean_object* v_code_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2648_; 
v_params_2595_ = lean_ctor_get(v___x_2594_, 1);
v_code_2596_ = lean_ctor_get(v___x_2594_, 2);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2648_ == 0)
{
lean_object* v_unused_2649_; 
v_unused_2649_ = lean_ctor_get(v___x_2594_, 0);
lean_dec(v_unused_2649_);
v___x_2598_ = v___x_2594_;
v_isShared_2599_ = v_isSharedCheck_2648_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_code_2596_);
lean_inc(v_params_2595_);
lean_dec(v___x_2594_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2648_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2591_, v_params_2595_, v_a_2577_, v_a_2579_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v_fvarId_2605_; lean_object* v_binderName_2606_; lean_object* v_lctx_2607_; lean_object* v_nextIdx_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2639_; 
lean_dec_ref(v___x_2600_);
v___x_2601_ = lean_st_ref_get(v_a_2579_);
lean_dec(v___x_2601_);
v___x_2602_ = lean_st_ref_take(v_a_2577_);
v___x_2603_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2604_ = lean_array_get(v___x_2603_, v_params_2595_, v___x_2593_);
lean_dec_ref(v_params_2595_);
v_fvarId_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_fvarId_2605_);
v_binderName_2606_ = lean_ctor_get(v___x_2604_, 1);
lean_inc(v_binderName_2606_);
lean_dec(v___x_2604_);
v_lctx_2607_ = lean_ctor_get(v___x_2602_, 0);
v_nextIdx_2608_ = lean_ctor_get(v___x_2602_, 1);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2610_ = v___x_2602_;
v_isShared_2611_ = v_isSharedCheck_2639_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_nextIdx_2608_);
lean_inc(v_lctx_2607_);
lean_dec(v___x_2602_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2639_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2612_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3);
v___x_2613_ = lean_box(0);
v___x_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_discr_2581_);
v___x_2615_ = lean_mk_empty_array_with_capacity(v___x_2587_);
v___x_2616_ = lean_array_push(v___x_2615_, v___x_2614_);
if (v_isShared_2599_ == 0)
{
lean_ctor_set_tag(v___x_2598_, 3);
lean_ctor_set(v___x_2598_, 2, v___x_2616_);
lean_ctor_set(v___x_2598_, 1, v___x_2613_);
lean_ctor_set(v___x_2598_, 0, v___x_2612_);
v___x_2618_ = v___x_2598_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2638_, 1, v___x_2613_);
lean_ctor_set(v_reuseFailAlloc_2638_, 2, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2619_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 3, v___x_2618_);
lean_ctor_set(v___x_2584_, 2, v___x_2619_);
lean_ctor_set(v___x_2584_, 1, v_binderName_2606_);
lean_ctor_set(v___x_2584_, 0, v_fvarId_2605_);
v___x_2621_ = v___x_2584_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_fvarId_2605_);
lean_ctor_set(v_reuseFailAlloc_2637_, 1, v_binderName_2606_);
lean_ctor_set(v_reuseFailAlloc_2637_, 2, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2637_, 3, v___x_2618_);
v___x_2621_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2624_; 
lean_inc_ref(v___x_2621_);
v___x_2622_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2591_, v_lctx_2607_, v___x_2621_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 0, v___x_2622_);
v___x_2624_ = v___x_2610_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2622_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_nextIdx_2608_);
v___x_2624_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = lean_st_ref_set(v_a_2577_, v___x_2624_);
v___x_2626_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2596_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2635_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2629_ = v___x_2626_;
v_isShared_2630_ = v_isSharedCheck_2635_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2626_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2635_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2621_);
lean_ctor_set(v___x_2631_, 1, v_a_2627_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 0, v___x_2631_);
v___x_2633_ = v___x_2629_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
else
{
lean_dec_ref(v___x_2621_);
return v___x_2626_;
}
}
}
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_del_object(v___x_2598_);
lean_dec_ref(v_code_2596_);
lean_dec_ref(v_params_2595_);
lean_del_object(v___x_2584_);
lean_dec(v_discr_2581_);
v_a_2640_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2600_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2600_);
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
}
else
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
lean_dec(v___x_2594_);
lean_del_object(v___x_2584_);
lean_dec(v_discr_2581_);
v___x_2650_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4);
v___x_2651_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2650_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
return v___x_2651_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesByteArrayToMono", 39, 39);
return v___x_2655_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2656_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2657_ = lean_unsigned_to_nat(2u);
v___x_2658_ = lean_unsigned_to_nat(261u);
v___x_2659_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0);
v___x_2660_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2661_ = l_mkPanicMessageWithDecl(v___x_2660_, v___x_2659_, v___x_2658_, v___x_2657_, v___x_2656_);
return v___x_2661_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2662_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3);
v___x_2663_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2);
v___x_2664_ = l_Lean_Name_mkStr2(v___x_2663_, v___x_2662_);
return v___x_2664_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2665_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2666_ = lean_unsigned_to_nat(34u);
v___x_2667_ = lean_unsigned_to_nat(262u);
v___x_2668_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0);
v___x_2669_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2670_ = l_mkPanicMessageWithDecl(v___x_2669_, v___x_2668_, v___x_2667_, v___x_2666_, v___x_2665_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object* v_c_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_discr_2678_; lean_object* v_alts_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2749_; 
v_discr_2678_ = lean_ctor_get(v_c_2671_, 2);
v_alts_2679_ = lean_ctor_get(v_c_2671_, 3);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_c_2671_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; lean_object* v_unused_2751_; 
v_unused_2750_ = lean_ctor_get(v_c_2671_, 1);
lean_dec(v_unused_2750_);
v_unused_2751_ = lean_ctor_get(v_c_2671_, 0);
lean_dec(v_unused_2751_);
v___x_2681_ = v_c_2671_;
v_isShared_2682_ = v_isSharedCheck_2749_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_alts_2679_);
lean_inc(v_discr_2678_);
lean_dec(v_c_2671_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2749_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; 
v___x_2683_ = lean_array_get_size(v_alts_2679_);
v___x_2684_ = lean_unsigned_to_nat(1u);
v___x_2685_ = lean_nat_dec_eq(v___x_2683_, v___x_2684_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
lean_del_object(v___x_2681_);
lean_dec_ref(v_alts_2679_);
lean_dec(v_discr_2678_);
v___x_2686_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1);
v___x_2687_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2686_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_);
return v___x_2687_;
}
else
{
uint8_t v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2688_ = 0;
v___x_2689_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2690_ = lean_unsigned_to_nat(0u);
v___x_2691_ = lean_array_get(v___x_2689_, v_alts_2679_, v___x_2690_);
lean_dec_ref(v_alts_2679_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_params_2692_; lean_object* v_code_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2745_; 
v_params_2692_ = lean_ctor_get(v___x_2691_, 1);
v_code_2693_ = lean_ctor_get(v___x_2691_, 2);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2745_ == 0)
{
lean_object* v_unused_2746_; 
v_unused_2746_ = lean_ctor_get(v___x_2691_, 0);
lean_dec(v_unused_2746_);
v___x_2695_ = v___x_2691_;
v_isShared_2696_ = v_isSharedCheck_2745_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_code_2693_);
lean_inc(v_params_2692_);
lean_dec(v___x_2691_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2745_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2688_, v_params_2692_, v_a_2674_, v_a_2676_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v_fvarId_2702_; lean_object* v_binderName_2703_; lean_object* v_lctx_2704_; lean_object* v_nextIdx_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2736_; 
lean_dec_ref(v___x_2697_);
v___x_2698_ = lean_st_ref_get(v_a_2676_);
lean_dec(v___x_2698_);
v___x_2699_ = lean_st_ref_take(v_a_2674_);
v___x_2700_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2701_ = lean_array_get(v___x_2700_, v_params_2692_, v___x_2690_);
lean_dec_ref(v_params_2692_);
v_fvarId_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_fvarId_2702_);
v_binderName_2703_ = lean_ctor_get(v___x_2701_, 1);
lean_inc(v_binderName_2703_);
lean_dec(v___x_2701_);
v_lctx_2704_ = lean_ctor_get(v___x_2699_, 0);
v_nextIdx_2705_ = lean_ctor_get(v___x_2699_, 1);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2707_ = v___x_2699_;
v_isShared_2708_ = v_isSharedCheck_2736_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_nextIdx_2705_);
lean_inc(v_lctx_2704_);
lean_dec(v___x_2699_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2736_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2709_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4);
v___x_2710_ = lean_box(0);
v___x_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2711_, 0, v_discr_2678_);
v___x_2712_ = lean_mk_empty_array_with_capacity(v___x_2684_);
v___x_2713_ = lean_array_push(v___x_2712_, v___x_2711_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set_tag(v___x_2695_, 3);
lean_ctor_set(v___x_2695_, 2, v___x_2713_);
lean_ctor_set(v___x_2695_, 1, v___x_2710_);
lean_ctor_set(v___x_2695_, 0, v___x_2709_);
v___x_2715_ = v___x_2695_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2710_);
lean_ctor_set(v_reuseFailAlloc_2735_, 2, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2718_; 
v___x_2716_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 3, v___x_2715_);
lean_ctor_set(v___x_2681_, 2, v___x_2716_);
lean_ctor_set(v___x_2681_, 1, v_binderName_2703_);
lean_ctor_set(v___x_2681_, 0, v_fvarId_2702_);
v___x_2718_ = v___x_2681_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_fvarId_2702_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v_binderName_2703_);
lean_ctor_set(v_reuseFailAlloc_2734_, 2, v___x_2716_);
lean_ctor_set(v_reuseFailAlloc_2734_, 3, v___x_2715_);
v___x_2718_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
lean_object* v___x_2719_; lean_object* v___x_2721_; 
lean_inc_ref(v___x_2718_);
v___x_2719_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2688_, v_lctx_2704_, v___x_2718_);
if (v_isShared_2708_ == 0)
{
lean_ctor_set(v___x_2707_, 0, v___x_2719_);
v___x_2721_ = v___x_2707_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2719_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v_nextIdx_2705_);
v___x_2721_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = lean_st_ref_set(v_a_2674_, v___x_2721_);
v___x_2723_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2693_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2732_; 
v_a_2724_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2726_ = v___x_2723_;
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2723_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2730_; 
v___x_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2718_);
lean_ctor_set(v___x_2728_, 1, v_a_2724_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v___x_2728_);
v___x_2730_ = v___x_2726_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2728_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
else
{
lean_dec_ref(v___x_2718_);
return v___x_2723_;
}
}
}
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_del_object(v___x_2695_);
lean_dec_ref(v_code_2693_);
lean_dec_ref(v_params_2692_);
lean_del_object(v___x_2681_);
lean_dec(v_discr_2678_);
v_a_2737_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2697_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2697_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
else
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
lean_dec(v___x_2691_);
lean_del_object(v___x_2681_);
lean_dec(v_discr_2678_);
v___x_2747_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5);
v___x_2748_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2747_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_);
return v___x_2748_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesArrayToMono", 35, 35);
return v___x_2752_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2753_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2754_ = lean_unsigned_to_nat(2u);
v___x_2755_ = lean_unsigned_to_nat(249u);
v___x_2756_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0);
v___x_2757_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2758_ = l_mkPanicMessageWithDecl(v___x_2757_, v___x_2756_, v___x_2755_, v___x_2754_, v___x_2753_);
return v___x_2758_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_mk_string_unchecked("toList", 6, 6);
return v___x_2759_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2760_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3);
v___x_2761_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2);
v___x_2762_ = l_Lean_Name_mkStr2(v___x_2761_, v___x_2760_);
return v___x_2762_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2763_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2764_ = lean_unsigned_to_nat(34u);
v___x_2765_ = lean_unsigned_to_nat(250u);
v___x_2766_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0);
v___x_2767_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2768_ = l_mkPanicMessageWithDecl(v___x_2767_, v___x_2766_, v___x_2765_, v___x_2764_, v___x_2763_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object* v_c_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_){
_start:
{
lean_object* v_discr_2776_; lean_object* v_alts_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2847_; 
v_discr_2776_ = lean_ctor_get(v_c_2769_, 2);
v_alts_2777_ = lean_ctor_get(v_c_2769_, 3);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_c_2769_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; lean_object* v_unused_2849_; 
v_unused_2848_ = lean_ctor_get(v_c_2769_, 1);
lean_dec(v_unused_2848_);
v_unused_2849_ = lean_ctor_get(v_c_2769_, 0);
lean_dec(v_unused_2849_);
v___x_2779_ = v_c_2769_;
v_isShared_2780_ = v_isSharedCheck_2847_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_alts_2777_);
lean_inc(v_discr_2776_);
lean_dec(v_c_2769_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2847_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; 
v___x_2781_ = lean_array_get_size(v_alts_2777_);
v___x_2782_ = lean_unsigned_to_nat(1u);
v___x_2783_ = lean_nat_dec_eq(v___x_2781_, v___x_2782_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_del_object(v___x_2779_);
lean_dec_ref(v_alts_2777_);
lean_dec(v_discr_2776_);
v___x_2784_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1);
v___x_2785_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2784_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2785_;
}
else
{
uint8_t v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2786_ = 0;
v___x_2787_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2788_ = lean_unsigned_to_nat(0u);
v___x_2789_ = lean_array_get(v___x_2787_, v_alts_2777_, v___x_2788_);
lean_dec_ref(v_alts_2777_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_params_2790_; lean_object* v_code_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2843_; 
v_params_2790_ = lean_ctor_get(v___x_2789_, 1);
v_code_2791_ = lean_ctor_get(v___x_2789_, 2);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; 
v_unused_2844_ = lean_ctor_get(v___x_2789_, 0);
lean_dec(v_unused_2844_);
v___x_2793_ = v___x_2789_;
v_isShared_2794_ = v_isSharedCheck_2843_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_code_2791_);
lean_inc(v_params_2790_);
lean_dec(v___x_2789_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2843_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2786_, v_params_2790_, v_a_2772_, v_a_2774_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v_fvarId_2800_; lean_object* v_binderName_2801_; lean_object* v_lctx_2802_; lean_object* v_nextIdx_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2834_; 
lean_dec_ref(v___x_2795_);
v___x_2796_ = lean_st_ref_get(v_a_2774_);
lean_dec(v___x_2796_);
v___x_2797_ = lean_st_ref_take(v_a_2772_);
v___x_2798_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2799_ = lean_array_get(v___x_2798_, v_params_2790_, v___x_2788_);
lean_dec_ref(v_params_2790_);
v_fvarId_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_fvarId_2800_);
v_binderName_2801_ = lean_ctor_get(v___x_2799_, 1);
lean_inc(v_binderName_2801_);
lean_dec(v___x_2799_);
v_lctx_2802_ = lean_ctor_get(v___x_2797_, 0);
v_nextIdx_2803_ = lean_ctor_get(v___x_2797_, 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2805_ = v___x_2797_;
v_isShared_2806_ = v_isSharedCheck_2834_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_nextIdx_2803_);
lean_inc(v_lctx_2802_);
lean_dec(v___x_2797_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2834_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
v___x_2807_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4);
v___x_2808_ = lean_box(0);
v___x_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2809_, 0, v_discr_2776_);
v___x_2810_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2811_ = lean_array_push(v___x_2810_, v___x_2809_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set_tag(v___x_2793_, 3);
lean_ctor_set(v___x_2793_, 2, v___x_2811_);
lean_ctor_set(v___x_2793_, 1, v___x_2808_);
lean_ctor_set(v___x_2793_, 0, v___x_2807_);
v___x_2813_ = v___x_2793_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2833_, 2, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
lean_object* v___x_2814_; lean_object* v___x_2816_; 
v___x_2814_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 3, v___x_2813_);
lean_ctor_set(v___x_2779_, 2, v___x_2814_);
lean_ctor_set(v___x_2779_, 1, v_binderName_2801_);
lean_ctor_set(v___x_2779_, 0, v_fvarId_2800_);
v___x_2816_ = v___x_2779_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_fvarId_2800_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v_binderName_2801_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v___x_2813_);
v___x_2816_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2817_; lean_object* v___x_2819_; 
lean_inc_ref(v___x_2816_);
v___x_2817_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2786_, v_lctx_2802_, v___x_2816_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2817_);
v___x_2819_ = v___x_2805_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2817_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_nextIdx_2803_);
v___x_2819_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = lean_st_ref_set(v_a_2772_, v___x_2819_);
v___x_2821_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2791_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2830_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_2830_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2830_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2816_);
lean_ctor_set(v___x_2826_, 1, v_a_2822_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2826_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
else
{
lean_dec_ref(v___x_2816_);
return v___x_2821_;
}
}
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_del_object(v___x_2793_);
lean_dec_ref(v_code_2791_);
lean_dec_ref(v_params_2790_);
lean_del_object(v___x_2779_);
lean_dec(v_discr_2776_);
v_a_2835_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2795_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2795_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
else
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
lean_dec(v___x_2789_);
lean_del_object(v___x_2779_);
lean_dec(v_discr_2776_);
v___x_2845_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6);
v___x_2846_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2845_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2846_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2850_; 
v___x_2850_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.casesUIntToMono", 34, 34);
return v___x_2850_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2851_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1);
v___x_2852_ = lean_unsigned_to_nat(2u);
v___x_2853_ = lean_unsigned_to_nat(238u);
v___x_2854_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0);
v___x_2855_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2856_ = l_mkPanicMessageWithDecl(v___x_2855_, v___x_2854_, v___x_2853_, v___x_2852_, v___x_2851_);
return v___x_2856_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = lean_mk_string_unchecked("toBitVec", 8, 8);
return v___x_2857_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2858_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__21, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__21);
v___x_2859_ = lean_unsigned_to_nat(34u);
v___x_2860_ = lean_unsigned_to_nat(239u);
v___x_2861_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0);
v___x_2862_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__19, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__19);
v___x_2863_ = l_mkPanicMessageWithDecl(v___x_2862_, v___x_2861_, v___x_2860_, v___x_2859_, v___x_2858_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object* v_c_2864_, lean_object* v_uintName_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v_discr_2872_; lean_object* v_alts_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2944_; 
v_discr_2872_ = lean_ctor_get(v_c_2864_, 2);
v_alts_2873_ = lean_ctor_get(v_c_2864_, 3);
v_isSharedCheck_2944_ = !lean_is_exclusive(v_c_2864_);
if (v_isSharedCheck_2944_ == 0)
{
lean_object* v_unused_2945_; lean_object* v_unused_2946_; 
v_unused_2945_ = lean_ctor_get(v_c_2864_, 1);
lean_dec(v_unused_2945_);
v_unused_2946_ = lean_ctor_get(v_c_2864_, 0);
lean_dec(v_unused_2946_);
v___x_2875_ = v_c_2864_;
v_isShared_2876_ = v_isSharedCheck_2944_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_alts_2873_);
lean_inc(v_discr_2872_);
lean_dec(v_c_2864_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2944_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; uint8_t v___x_2879_; 
v___x_2877_ = lean_array_get_size(v_alts_2873_);
v___x_2878_ = lean_unsigned_to_nat(1u);
v___x_2879_ = lean_nat_dec_eq(v___x_2877_, v___x_2878_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_del_object(v___x_2875_);
lean_dec_ref(v_alts_2873_);
lean_dec(v_discr_2872_);
lean_dec(v_uintName_2865_);
v___x_2880_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2);
v___x_2881_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2880_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_);
return v___x_2881_;
}
else
{
uint8_t v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2882_ = 0;
v___x_2883_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2884_ = lean_unsigned_to_nat(0u);
v___x_2885_ = lean_array_get(v___x_2883_, v_alts_2873_, v___x_2884_);
lean_dec_ref(v_alts_2873_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_params_2886_; lean_object* v_code_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2940_; 
v_params_2886_ = lean_ctor_get(v___x_2885_, 1);
v_code_2887_ = lean_ctor_get(v___x_2885_, 2);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2940_ == 0)
{
lean_object* v_unused_2941_; 
v_unused_2941_ = lean_ctor_get(v___x_2885_, 0);
lean_dec(v_unused_2941_);
v___x_2889_ = v___x_2885_;
v_isShared_2890_ = v_isSharedCheck_2940_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_code_2887_);
lean_inc(v_params_2886_);
lean_dec(v___x_2885_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2940_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2882_, v_params_2886_, v_a_2868_, v_a_2870_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v_fvarId_2896_; lean_object* v_binderName_2897_; lean_object* v_lctx_2898_; lean_object* v_nextIdx_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2931_; 
lean_dec_ref(v___x_2891_);
v___x_2892_ = lean_st_ref_get(v_a_2870_);
lean_dec(v___x_2892_);
v___x_2893_ = lean_st_ref_take(v_a_2868_);
v___x_2894_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_2895_ = lean_array_get(v___x_2894_, v_params_2886_, v___x_2884_);
lean_dec_ref(v_params_2886_);
v_fvarId_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_fvarId_2896_);
v_binderName_2897_ = lean_ctor_get(v___x_2895_, 1);
lean_inc(v_binderName_2897_);
lean_dec(v___x_2895_);
v_lctx_2898_ = lean_ctor_get(v___x_2893_, 0);
v_nextIdx_2899_ = lean_ctor_get(v___x_2893_, 1);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2901_ = v___x_2893_;
v_isShared_2902_ = v_isSharedCheck_2931_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_nextIdx_2899_);
lean_inc(v_lctx_2898_);
lean_dec(v___x_2893_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2931_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2910_; 
v___x_2903_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2904_ = l_Lean_Name_str___override(v_uintName_2865_, v___x_2903_);
v___x_2905_ = lean_box(0);
v___x_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2906_, 0, v_discr_2872_);
v___x_2907_ = lean_mk_empty_array_with_capacity(v___x_2878_);
v___x_2908_ = lean_array_push(v___x_2907_, v___x_2906_);
if (v_isShared_2890_ == 0)
{
lean_ctor_set_tag(v___x_2889_, 3);
lean_ctor_set(v___x_2889_, 2, v___x_2908_);
lean_ctor_set(v___x_2889_, 1, v___x_2905_);
lean_ctor_set(v___x_2889_, 0, v___x_2904_);
v___x_2910_ = v___x_2889_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2904_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2930_, 2, v___x_2908_);
v___x_2910_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 3, v___x_2910_);
lean_ctor_set(v___x_2875_, 2, v___x_2911_);
lean_ctor_set(v___x_2875_, 1, v_binderName_2897_);
lean_ctor_set(v___x_2875_, 0, v_fvarId_2896_);
v___x_2913_ = v___x_2875_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_fvarId_2896_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v_binderName_2897_);
lean_ctor_set(v_reuseFailAlloc_2929_, 2, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2929_, 3, v___x_2910_);
v___x_2913_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
lean_inc_ref(v___x_2913_);
v___x_2914_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2882_, v_lctx_2898_, v___x_2913_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 0, v___x_2914_);
v___x_2916_ = v___x_2901_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_nextIdx_2899_);
v___x_2916_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_st_ref_set(v_a_2868_, v___x_2916_);
v___x_2918_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2887_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2927_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2921_ = v___x_2918_;
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2918_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2923_; lean_object* v___x_2925_; 
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2913_);
lean_ctor_set(v___x_2923_, 1, v_a_2919_);
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_2923_);
v___x_2925_ = v___x_2921_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v___x_2923_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
else
{
lean_dec_ref(v___x_2913_);
return v___x_2918_;
}
}
}
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_del_object(v___x_2889_);
lean_dec_ref(v_code_2887_);
lean_dec_ref(v_params_2886_);
lean_del_object(v___x_2875_);
lean_dec(v_discr_2872_);
lean_dec(v_uintName_2865_);
v_a_2932_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2891_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2891_);
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
}
else
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_dec(v___x_2885_);
lean_del_object(v___x_2875_);
lean_dec(v_discr_2872_);
lean_dec(v_uintName_2865_);
v___x_2942_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4);
v___x_2943_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2942_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_);
return v___x_2943_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2947_ = lean_box(0);
v___x_2948_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0);
v___x_2949_ = l_Lean_mkConst(v___x_2948_, v___x_2947_);
return v___x_2949_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0(void){
_start:
{
lean_object* v___x_2950_; 
v___x_2950_ = lean_mk_string_unchecked("natZero", 7, 7);
return v___x_2950_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0);
v___x_2952_ = l_Lean_Name_mkStr1(v___x_2951_);
return v___x_2952_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = lean_mk_string_unchecked("intZero", 7, 7);
return v___x_2953_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4);
v___x_2955_ = l_Lean_Name_mkStr1(v___x_2954_);
return v___x_2955_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_box(0);
v___x_2957_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3);
v___x_2958_ = l_Lean_mkConst(v___x_2957_, v___x_2956_);
return v___x_2958_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_mk_string_unchecked("ofNat", 5, 5);
return v___x_2959_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2960_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7);
v___x_2961_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2);
v___x_2962_ = l_Lean_Name_mkStr2(v___x_2961_, v___x_2960_);
return v___x_2962_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_mk_string_unchecked("isNeg", 5, 5);
return v___x_2963_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10(void){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9);
v___x_2965_ = l_Lean_Name_mkStr1(v___x_2964_);
return v___x_2965_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_obj_once(&l_Lean_Compiler_LCNF_decToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_decToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_decToMono___redArg___closed__0);
v___x_2968_ = l_Lean_mkConst(v___x_2967_, v___x_2966_);
return v___x_2968_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11(void){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = lean_mk_string_unchecked("decLt", 5, 5);
return v___x_2969_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12(void){
_start:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11);
v___x_2971_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2);
v___x_2972_ = l_Lean_Name_mkStr2(v___x_2971_, v___x_2970_);
return v___x_2972_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0(void){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = lean_mk_string_unchecked("negSucc", 7, 7);
return v___x_2973_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2974_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__0);
v___x_2975_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2);
v___x_2976_ = l_Lean_Name_mkStr2(v___x_2975_, v___x_2974_);
return v___x_2976_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2(void){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_mk_string_unchecked("natAbs", 6, 6);
return v___x_2977_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3(void){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2978_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__2);
v___x_2979_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2);
v___x_2980_ = l_Lean_Name_mkStr2(v___x_2979_, v___x_2978_);
return v___x_2980_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0(void){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_unsigned_to_nat(0u);
v___x_2982_ = lean_mk_empty_array_with_capacity(v___x_2981_);
return v___x_2982_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4(void){
_start:
{
lean_object* v___x_2983_; 
v___x_2983_ = lean_mk_string_unchecked("abs", 3, 3);
return v___x_2983_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5(void){
_start:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__4);
v___x_2985_ = l_Lean_Name_mkStr1(v___x_2984_);
return v___x_2985_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0(void){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_mk_string_unchecked("one", 3, 3);
return v___x_2986_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1(void){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__0);
v___x_2988_ = l_Lean_Name_mkStr1(v___x_2987_);
return v___x_2988_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4(void){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_mk_string_unchecked("sub", 3, 3);
return v___x_2989_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2990_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__4);
v___x_2991_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_2992_ = l_Lean_Name_mkStr2(v___x_2991_, v___x_2990_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16(lean_object* v___x_2993_, size_t v_sz_2994_, size_t v_i_2995_, lean_object* v_bs_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_){
_start:
{
uint8_t v___x_3003_; 
v___x_3003_ = lean_usize_dec_lt(v_i_2995_, v_sz_2994_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; 
lean_dec(v___x_2993_);
v___x_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_bs_2996_);
return v___x_3004_;
}
else
{
lean_object* v_v_3005_; lean_object* v___x_3006_; lean_object* v_bs_x27_3007_; lean_object* v_a_3009_; 
v_v_3005_ = lean_array_uget(v_bs_2996_, v_i_2995_);
v___x_3006_ = lean_unsigned_to_nat(0u);
v_bs_x27_3007_ = lean_array_uset(v_bs_2996_, v_i_2995_, v___x_3006_);
if (lean_obj_tag(v_v_3005_) == 0)
{
lean_object* v_ctorName_3014_; lean_object* v_params_3015_; lean_object* v_code_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3145_; 
v_ctorName_3014_ = lean_ctor_get(v_v_3005_, 0);
v_params_3015_ = lean_ctor_get(v_v_3005_, 1);
v_code_3016_ = lean_ctor_get(v_v_3005_, 2);
v_isSharedCheck_3145_ = !lean_is_exclusive(v_v_3005_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3018_ = v_v_3005_;
v_isShared_3019_ = v_isSharedCheck_3145_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_code_3016_);
lean_inc(v_params_3015_);
lean_inc(v_ctorName_3014_);
lean_dec(v_v_3005_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3145_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
uint8_t v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3020_ = 0;
v___x_3021_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_3022_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_3020_, v_params_3015_, v___y_2999_, v___y_3001_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
lean_dec_ref(v___x_3022_);
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3025_ = lean_array_get(v___x_3021_, v_params_3015_, v___x_3006_);
lean_dec_ref(v_params_3015_);
v___x_3026_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__1);
v___x_3027_ = lean_name_eq(v_ctorName_3014_, v___x_3026_);
lean_dec(v_ctorName_3014_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v_fvarId_3030_; lean_object* v_binderName_3031_; lean_object* v_lctx_3032_; lean_object* v_nextIdx_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3064_; 
v___x_3028_ = lean_st_ref_get(v___y_3001_);
lean_dec(v___x_3028_);
v___x_3029_ = lean_st_ref_take(v___y_2999_);
v_fvarId_3030_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_fvarId_3030_);
v_binderName_3031_ = lean_ctor_get(v___x_3025_, 1);
lean_inc(v_binderName_3031_);
lean_dec(v___x_3025_);
v_lctx_3032_ = lean_ctor_get(v___x_3029_, 0);
v_nextIdx_3033_ = lean_ctor_get(v___x_3029_, 1);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3035_ = v___x_3029_;
v_isShared_3036_ = v_isSharedCheck_3064_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_nextIdx_3033_);
lean_inc(v_lctx_3032_);
lean_dec(v___x_3029_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3064_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
v___x_3037_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3);
v___x_3038_ = lean_unsigned_to_nat(1u);
v___x_3039_ = lean_mk_empty_array_with_capacity(v___x_3038_);
lean_inc(v___x_2993_);
v___x_3040_ = lean_array_push(v___x_3039_, v___x_2993_);
v___x_3041_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3037_);
lean_ctor_set(v___x_3041_, 1, v___x_3023_);
lean_ctor_set(v___x_3041_, 2, v___x_3040_);
v___x_3042_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3042_, 0, v_fvarId_3030_);
lean_ctor_set(v___x_3042_, 1, v_binderName_3031_);
lean_ctor_set(v___x_3042_, 2, v___x_3024_);
lean_ctor_set(v___x_3042_, 3, v___x_3041_);
lean_inc_ref(v___x_3042_);
v___x_3043_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_3020_, v_lctx_3032_, v___x_3042_);
if (v_isShared_3036_ == 0)
{
lean_ctor_set(v___x_3035_, 0, v___x_3043_);
v___x_3045_ = v___x_3035_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v___x_3043_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v_nextIdx_3033_);
v___x_3045_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = lean_st_ref_set(v___y_2999_, v___x_3045_);
v___x_3047_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3016_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref(v___x_3047_);
v___x_3049_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__27, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__27_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__27);
v___x_3050_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0);
v___x_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3042_);
lean_ctor_set(v___x_3051_, 1, v_a_3048_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 2, v___x_3051_);
lean_ctor_set(v___x_3018_, 1, v___x_3050_);
lean_ctor_set(v___x_3018_, 0, v___x_3049_);
v___x_3053_ = v___x_3018_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3049_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v___x_3050_);
lean_ctor_set(v_reuseFailAlloc_3054_, 2, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
v_a_3009_ = v___x_3053_;
goto v___jp_3008_;
}
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
lean_dec_ref(v___x_3042_);
lean_del_object(v___x_3018_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3055_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3047_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3047_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
}
else
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3065_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__5);
v___x_3066_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___closed__3);
v___x_3067_ = lean_unsigned_to_nat(1u);
v___x_3068_ = lean_mk_empty_array_with_capacity(v___x_3067_);
lean_inc(v___x_2993_);
v___x_3069_ = lean_array_push(v___x_3068_, v___x_2993_);
v___x_3070_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3066_);
lean_ctor_set(v___x_3070_, 1, v___x_3023_);
lean_ctor_set(v___x_3070_, 2, v___x_3069_);
v___x_3071_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3020_, v___x_3065_, v___x_3024_, v___x_3070_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref(v___x_3071_);
v___x_3073_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1);
v___x_3074_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3);
v___x_3075_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3020_, v___x_3073_, v___x_3024_, v___x_3074_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v_fvarId_3077_; lean_object* v_fvarId_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v_fvarId_3081_; lean_object* v_binderName_3082_; lean_object* v_lctx_3083_; lean_object* v_nextIdx_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3120_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref(v___x_3075_);
v_fvarId_3077_ = lean_ctor_get(v_a_3072_, 0);
v_fvarId_3078_ = lean_ctor_get(v_a_3076_, 0);
v___x_3079_ = lean_st_ref_get(v___y_3001_);
lean_dec(v___x_3079_);
v___x_3080_ = lean_st_ref_take(v___y_2999_);
v_fvarId_3081_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_fvarId_3081_);
v_binderName_3082_ = lean_ctor_get(v___x_3025_, 1);
lean_inc(v_binderName_3082_);
lean_dec(v___x_3025_);
v_lctx_3083_ = lean_ctor_get(v___x_3080_, 0);
v_nextIdx_3084_ = lean_ctor_get(v___x_3080_, 1);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3086_ = v___x_3080_;
v_isShared_3087_ = v_isSharedCheck_3120_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_nextIdx_3084_);
lean_inc(v_lctx_3083_);
lean_dec(v___x_3080_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3120_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3099_; 
v___x_3088_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5);
lean_inc(v_fvarId_3077_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_fvarId_3077_);
lean_inc(v_fvarId_3078_);
v___x_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3090_, 0, v_fvarId_3078_);
v___x_3091_ = lean_unsigned_to_nat(2u);
v___x_3092_ = lean_mk_empty_array_with_capacity(v___x_3091_);
v___x_3093_ = lean_array_push(v___x_3092_, v___x_3089_);
v___x_3094_ = lean_array_push(v___x_3093_, v___x_3090_);
v___x_3095_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3088_);
lean_ctor_set(v___x_3095_, 1, v___x_3023_);
lean_ctor_set(v___x_3095_, 2, v___x_3094_);
v___x_3096_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3096_, 0, v_fvarId_3081_);
lean_ctor_set(v___x_3096_, 1, v_binderName_3082_);
lean_ctor_set(v___x_3096_, 2, v___x_3024_);
lean_ctor_set(v___x_3096_, 3, v___x_3095_);
lean_inc_ref(v___x_3096_);
v___x_3097_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_3020_, v_lctx_3083_, v___x_3096_);
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 0, v___x_3097_);
v___x_3099_ = v___x_3086_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3097_);
lean_ctor_set(v_reuseFailAlloc_3119_, 1, v_nextIdx_3084_);
v___x_3099_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3100_ = lean_st_ref_set(v___y_2999_, v___x_3099_);
v___x_3101_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3016_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3109_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref(v___x_3101_);
v___x_3103_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__30, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__30_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__30);
v___x_3104_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0);
v___x_3105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3096_);
lean_ctor_set(v___x_3105_, 1, v_a_3102_);
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v_a_3076_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3107_, 0, v_a_3072_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 2, v___x_3107_);
lean_ctor_set(v___x_3018_, 1, v___x_3104_);
lean_ctor_set(v___x_3018_, 0, v___x_3103_);
v___x_3109_ = v___x_3018_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v___x_3103_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3110_, 2, v___x_3107_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
v_a_3009_ = v___x_3109_;
goto v___jp_3008_;
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_dec_ref(v___x_3096_);
lean_dec(v_a_3076_);
lean_dec(v_a_3072_);
lean_del_object(v___x_3018_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3111_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_3101_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3101_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3116_; 
if (v_isShared_3114_ == 0)
{
v___x_3116_ = v___x_3113_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3111_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec(v_a_3072_);
lean_dec(v___x_3025_);
lean_del_object(v___x_3018_);
lean_dec_ref(v_code_3016_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3121_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3075_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3075_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v___x_3025_);
lean_del_object(v___x_3018_);
lean_dec_ref(v_code_3016_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3129_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3071_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3071_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_del_object(v___x_3018_);
lean_dec_ref(v_code_3016_);
lean_dec_ref(v_params_3015_);
lean_dec(v_ctorName_3014_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3137_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3022_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3022_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
else
{
lean_object* v_code_3146_; lean_object* v___x_3147_; 
v_code_3146_ = lean_ctor_get(v_v_3005_, 0);
lean_inc_ref(v_code_3146_);
v___x_3147_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3146_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; lean_object* v___x_3149_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref(v___x_3147_);
v___x_3149_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_3005_, v_a_3148_);
v_a_3009_ = v___x_3149_;
goto v___jp_3008_;
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec_ref(v_v_3005_);
lean_dec_ref(v_bs_x27_3007_);
lean_dec(v___x_2993_);
v_a_3150_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3147_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3147_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
v___jp_3008_:
{
size_t v___x_3010_; size_t v___x_3011_; lean_object* v___x_3012_; 
v___x_3010_ = ((size_t)1ULL);
v___x_3011_ = lean_usize_add(v_i_2995_, v___x_3010_);
v___x_3012_ = lean_array_uset(v_bs_x27_3007_, v_i_2995_, v_a_3009_);
v_i_2995_ = v___x_3011_;
v_bs_2996_ = v___x_3012_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object* v_c_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_){
_start:
{
lean_object* v_resultType_3165_; lean_object* v_discr_3166_; lean_object* v_alts_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3264_; 
v_resultType_3165_ = lean_ctor_get(v_c_3158_, 1);
v_discr_3166_ = lean_ctor_get(v_c_3158_, 2);
v_alts_3167_ = lean_ctor_get(v_c_3158_, 3);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_c_3158_);
if (v_isSharedCheck_3264_ == 0)
{
lean_object* v_unused_3265_; 
v_unused_3265_ = lean_ctor_get(v_c_3158_, 0);
lean_dec(v_unused_3265_);
v___x_3169_ = v_c_3158_;
v_isShared_3170_ = v_isSharedCheck_3264_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_alts_3167_);
lean_inc(v_discr_3166_);
lean_inc(v_resultType_3165_);
lean_dec(v_c_3158_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3264_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3171_; 
v___x_3171_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3165_, v_a_3162_, v_a_3163_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; uint8_t v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
lean_dec_ref(v___x_3171_);
v___x_3173_ = 0;
v___x_3174_ = lean_box(0);
v___x_3175_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3176_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1);
v___x_3177_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__24, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__24_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__24);
v___x_3178_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3173_, v___x_3176_, v___x_3175_, v___x_3177_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v_fvarId_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref(v___x_3178_);
v_fvarId_3180_ = lean_ctor_get(v_a_3179_, 0);
v___x_3181_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5);
v___x_3182_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6);
v___x_3183_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8);
lean_inc(v_fvarId_3180_);
v___x_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3184_, 0, v_fvarId_3180_);
v___x_3185_ = lean_unsigned_to_nat(1u);
v___x_3186_ = lean_mk_empty_array_with_capacity(v___x_3185_);
v___x_3187_ = lean_array_push(v___x_3186_, v___x_3184_);
v___x_3188_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3183_);
lean_ctor_set(v___x_3188_, 1, v___x_3174_);
lean_ctor_set(v___x_3188_, 2, v___x_3187_);
v___x_3189_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3173_, v___x_3181_, v___x_3182_, v___x_3188_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v_fvarId_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref(v___x_3189_);
v_fvarId_3191_ = lean_ctor_get(v_a_3190_, 0);
v___x_3192_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10);
v___x_3193_ = lean_obj_once(&l_Lean_Compiler_LCNF_decToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_decToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_decToMono___redArg___closed__0);
v___x_3194_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5);
v___x_3195_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12);
v___x_3196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3196_, 0, v_discr_3166_);
lean_inc(v_fvarId_3191_);
v___x_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3197_, 0, v_fvarId_3191_);
v___x_3198_ = lean_unsigned_to_nat(2u);
v___x_3199_ = lean_mk_empty_array_with_capacity(v___x_3198_);
lean_inc_ref(v___x_3196_);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3196_);
v___x_3201_ = lean_array_push(v___x_3200_, v___x_3197_);
v___x_3202_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3195_);
lean_ctor_set(v___x_3202_, 1, v___x_3174_);
lean_ctor_set(v___x_3202_, 2, v___x_3201_);
v___x_3203_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3173_, v___x_3192_, v___x_3194_, v___x_3202_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; size_t v_sz_3205_; size_t v___x_3206_; lean_object* v___x_3207_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_a_3204_);
lean_dec_ref(v___x_3203_);
v_sz_3205_ = lean_array_size(v_alts_3167_);
v___x_3206_ = ((size_t)0ULL);
v___x_3207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16(v___x_3196_, v_sz_3205_, v___x_3206_, v_alts_3167_, v_a_3159_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3223_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3210_ = v___x_3207_;
v_isShared_3211_ = v_isSharedCheck_3223_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3207_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3223_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v_fvarId_3212_; lean_object* v___x_3214_; 
v_fvarId_3212_ = lean_ctor_get(v_a_3204_, 0);
lean_inc(v_fvarId_3212_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 3, v_a_3208_);
lean_ctor_set(v___x_3169_, 2, v_fvarId_3212_);
lean_ctor_set(v___x_3169_, 1, v_a_3172_);
lean_ctor_set(v___x_3169_, 0, v___x_3193_);
v___x_3214_ = v___x_3169_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v___x_3193_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v_a_3172_);
lean_ctor_set(v_reuseFailAlloc_3222_, 2, v_fvarId_3212_);
lean_ctor_set(v_reuseFailAlloc_3222_, 3, v_a_3208_);
v___x_3214_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_a_3204_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
v___x_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_a_3190_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3218_, 0, v_a_3179_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
if (v_isShared_3211_ == 0)
{
lean_ctor_set(v___x_3210_, 0, v___x_3218_);
v___x_3220_ = v___x_3210_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
else
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
lean_dec(v_a_3204_);
lean_dec(v_a_3190_);
lean_dec(v_a_3179_);
lean_dec(v_a_3172_);
lean_del_object(v___x_3169_);
v_a_3224_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3226_ = v___x_3207_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3207_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_a_3224_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
else
{
lean_object* v_a_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3239_; 
lean_dec_ref(v___x_3196_);
lean_dec(v_a_3190_);
lean_dec(v_a_3179_);
lean_dec(v_a_3172_);
lean_del_object(v___x_3169_);
lean_dec_ref(v_alts_3167_);
v_a_3232_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3234_ = v___x_3203_;
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_a_3232_);
lean_dec(v___x_3203_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3237_; 
if (v_isShared_3235_ == 0)
{
v___x_3237_ = v___x_3234_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_a_3232_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
else
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3247_; 
lean_dec(v_a_3179_);
lean_dec(v_a_3172_);
lean_del_object(v___x_3169_);
lean_dec_ref(v_alts_3167_);
lean_dec(v_discr_3166_);
v_a_3240_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3242_ = v___x_3189_;
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3189_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3245_; 
if (v_isShared_3243_ == 0)
{
v___x_3245_ = v___x_3242_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_a_3240_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
lean_dec(v_a_3172_);
lean_del_object(v___x_3169_);
lean_dec_ref(v_alts_3167_);
lean_dec(v_discr_3166_);
v_a_3248_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3178_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3178_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
lean_del_object(v___x_3169_);
lean_dec_ref(v_alts_3167_);
lean_dec(v_discr_3166_);
v_a_3256_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3171_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3171_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3266_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__15, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__15);
v___x_3267_ = l_Lean_Name_mkStr1(v___x_3266_);
return v___x_3267_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_mk_string_unchecked("isZero", 6, 6);
return v___x_3268_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3);
v___x_3270_ = l_Lean_Name_mkStr1(v___x_3269_);
return v___x_3270_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = lean_mk_string_unchecked("decEq", 5, 5);
return v___x_3271_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3272_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6);
v___x_3273_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_3274_ = l_Lean_Name_mkStr2(v___x_3273_, v___x_3272_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18(lean_object* v___x_3275_, size_t v_sz_3276_, size_t v_i_3277_, lean_object* v_bs_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
uint8_t v___x_3285_; 
v___x_3285_ = lean_usize_dec_lt(v_i_3277_, v_sz_3276_);
if (v___x_3285_ == 0)
{
lean_object* v___x_3286_; 
lean_dec(v___x_3275_);
v___x_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3286_, 0, v_bs_3278_);
return v___x_3286_;
}
else
{
lean_object* v_v_3287_; lean_object* v___x_3288_; lean_object* v_bs_x27_3289_; lean_object* v_a_3291_; 
v_v_3287_ = lean_array_uget(v_bs_3278_, v_i_3277_);
v___x_3288_ = lean_unsigned_to_nat(0u);
v_bs_x27_3289_ = lean_array_uset(v_bs_3278_, v_i_3277_, v___x_3288_);
if (lean_obj_tag(v_v_3287_) == 0)
{
lean_object* v_ctorName_3296_; lean_object* v_params_3297_; lean_object* v_code_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3386_; 
v_ctorName_3296_ = lean_ctor_get(v_v_3287_, 0);
v_params_3297_ = lean_ctor_get(v_v_3287_, 1);
v_code_3298_ = lean_ctor_get(v_v_3287_, 2);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_v_3287_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3300_ = v_v_3287_;
v_isShared_3301_ = v_isSharedCheck_3386_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_code_3298_);
lean_inc(v_params_3297_);
lean_inc(v_ctorName_3296_);
lean_dec(v_v_3287_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3386_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
uint8_t v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = 0;
v___x_3303_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_3302_, v_params_3297_, v___y_3281_, v___y_3283_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v___x_3304_; uint8_t v___x_3305_; 
lean_dec_ref(v___x_3303_);
v___x_3304_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__18, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__18_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__18);
v___x_3305_ = lean_name_eq(v_ctorName_3296_, v___x_3304_);
lean_dec(v_ctorName_3296_);
if (v___x_3305_ == 0)
{
lean_object* v___x_3306_; 
lean_dec_ref(v_params_3297_);
v___x_3306_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3298_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3311_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__30, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__30_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__30);
v___x_3309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 2, v_a_3307_);
lean_ctor_set(v___x_3300_, 1, v___x_3309_);
lean_ctor_set(v___x_3300_, 0, v___x_3308_);
v___x_3311_ = v___x_3300_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v___x_3308_);
lean_ctor_set(v_reuseFailAlloc_3312_, 1, v___x_3309_);
lean_ctor_set(v_reuseFailAlloc_3312_, 2, v_a_3307_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
v_a_3291_ = v___x_3311_;
goto v___jp_3290_;
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
lean_del_object(v___x_3300_);
lean_dec_ref(v_bs_x27_3289_);
lean_dec(v___x_3275_);
v_a_3313_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3306_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3306_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
else
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3321_ = lean_box(0);
v___x_3322_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3323_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Compiler_LCNF_argsToMonoRedArg_spec__0___redArg___closed__0);
v___x_3324_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__1);
v___x_3325_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3);
v___x_3326_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3302_, v___x_3324_, v___x_3322_, v___x_3325_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v_fvarId_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v_fvarId_3332_; lean_object* v_binderName_3333_; lean_object* v_lctx_3334_; lean_object* v_nextIdx_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3369_; 
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3327_);
lean_dec_ref(v___x_3326_);
v_fvarId_3328_ = lean_ctor_get(v_a_3327_, 0);
v___x_3329_ = lean_st_ref_get(v___y_3283_);
lean_dec(v___x_3329_);
v___x_3330_ = lean_st_ref_take(v___y_3281_);
v___x_3331_ = lean_array_get(v___x_3323_, v_params_3297_, v___x_3288_);
lean_dec_ref(v_params_3297_);
v_fvarId_3332_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_fvarId_3332_);
v_binderName_3333_ = lean_ctor_get(v___x_3331_, 1);
lean_inc(v_binderName_3333_);
lean_dec(v___x_3331_);
v_lctx_3334_ = lean_ctor_get(v___x_3330_, 0);
v_nextIdx_3335_ = lean_ctor_get(v___x_3330_, 1);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3337_ = v___x_3330_;
v_isShared_3338_ = v_isSharedCheck_3369_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_nextIdx_3335_);
lean_inc(v_lctx_3334_);
lean_dec(v___x_3330_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3369_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3349_; 
v___x_3339_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__5);
lean_inc(v_fvarId_3328_);
v___x_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3340_, 0, v_fvarId_3328_);
v___x_3341_ = lean_unsigned_to_nat(2u);
v___x_3342_ = lean_mk_empty_array_with_capacity(v___x_3341_);
lean_inc(v___x_3275_);
v___x_3343_ = lean_array_push(v___x_3342_, v___x_3275_);
v___x_3344_ = lean_array_push(v___x_3343_, v___x_3340_);
v___x_3345_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3339_);
lean_ctor_set(v___x_3345_, 1, v___x_3321_);
lean_ctor_set(v___x_3345_, 2, v___x_3344_);
v___x_3346_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3346_, 0, v_fvarId_3332_);
lean_ctor_set(v___x_3346_, 1, v_binderName_3333_);
lean_ctor_set(v___x_3346_, 2, v___x_3322_);
lean_ctor_set(v___x_3346_, 3, v___x_3345_);
lean_inc_ref(v___x_3346_);
v___x_3347_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_3302_, v_lctx_3334_, v___x_3346_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3347_);
v___x_3349_ = v___x_3337_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v___x_3347_);
lean_ctor_set(v_reuseFailAlloc_3368_, 1, v_nextIdx_3335_);
v___x_3349_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = lean_st_ref_set(v___y_3281_, v___x_3349_);
v___x_3351_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3298_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3358_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref(v___x_3351_);
v___x_3353_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__27, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__27_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__27);
v___x_3354_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0);
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3346_);
lean_ctor_set(v___x_3355_, 1, v_a_3352_);
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v_a_3327_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 2, v___x_3356_);
lean_ctor_set(v___x_3300_, 1, v___x_3354_);
lean_ctor_set(v___x_3300_, 0, v___x_3353_);
v___x_3358_ = v___x_3300_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3353_);
lean_ctor_set(v_reuseFailAlloc_3359_, 1, v___x_3354_);
lean_ctor_set(v_reuseFailAlloc_3359_, 2, v___x_3356_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
v_a_3291_ = v___x_3358_;
goto v___jp_3290_;
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec_ref(v___x_3346_);
lean_dec(v_a_3327_);
lean_del_object(v___x_3300_);
lean_dec_ref(v_bs_x27_3289_);
lean_dec(v___x_3275_);
v_a_3360_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3351_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3351_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_del_object(v___x_3300_);
lean_dec_ref(v_code_3298_);
lean_dec_ref(v_params_3297_);
lean_dec_ref(v_bs_x27_3289_);
lean_dec(v___x_3275_);
v_a_3370_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3326_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3326_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3385_; 
lean_del_object(v___x_3300_);
lean_dec_ref(v_code_3298_);
lean_dec_ref(v_params_3297_);
lean_dec(v_ctorName_3296_);
lean_dec_ref(v_bs_x27_3289_);
lean_dec(v___x_3275_);
v_a_3378_ = lean_ctor_get(v___x_3303_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3303_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v___x_3303_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3303_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_a_3378_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
}
}
}
else
{
lean_object* v_code_3387_; lean_object* v___x_3388_; 
v_code_3387_ = lean_ctor_get(v_v_3287_, 0);
lean_inc_ref(v_code_3387_);
v___x_3388_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3387_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref(v___x_3388_);
v___x_3390_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_3287_, v_a_3389_);
v_a_3291_ = v___x_3390_;
goto v___jp_3290_;
}
else
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3398_; 
lean_dec_ref(v_v_3287_);
lean_dec_ref(v_bs_x27_3289_);
lean_dec(v___x_3275_);
v_a_3391_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3393_ = v___x_3388_;
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3388_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3396_; 
if (v_isShared_3394_ == 0)
{
v___x_3396_ = v___x_3393_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3391_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
v___jp_3290_:
{
size_t v___x_3292_; size_t v___x_3293_; lean_object* v___x_3294_; 
v___x_3292_ = ((size_t)1ULL);
v___x_3293_ = lean_usize_add(v_i_3277_, v___x_3292_);
v___x_3294_ = lean_array_uset(v_bs_x27_3289_, v_i_3277_, v_a_3291_);
v_i_3277_ = v___x_3293_;
v_bs_3278_ = v___x_3294_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object* v_c_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_){
_start:
{
lean_object* v_resultType_3406_; lean_object* v_discr_3407_; lean_object* v_alts_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3485_; 
v_resultType_3406_ = lean_ctor_get(v_c_3399_, 1);
v_discr_3407_ = lean_ctor_get(v_c_3399_, 2);
v_alts_3408_ = lean_ctor_get(v_c_3399_, 3);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_c_3399_);
if (v_isSharedCheck_3485_ == 0)
{
lean_object* v_unused_3486_; 
v_unused_3486_ = lean_ctor_get(v_c_3399_, 0);
lean_dec(v_unused_3486_);
v___x_3410_ = v_c_3399_;
v_isShared_3411_ = v_isSharedCheck_3485_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_alts_3408_);
lean_inc(v_discr_3407_);
lean_inc(v_resultType_3406_);
lean_dec(v_c_3399_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3485_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3412_; 
v___x_3412_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3406_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; uint8_t v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3413_);
lean_dec_ref(v___x_3412_);
v___x_3414_ = 0;
v___x_3415_ = lean_box(0);
v___x_3416_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3417_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2);
v___x_3418_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__24, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__24_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__24);
v___x_3419_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3414_, v___x_3417_, v___x_3416_, v___x_3418_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v_fvarId_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref(v___x_3419_);
v_fvarId_3421_ = lean_ctor_get(v_a_3420_, 0);
v___x_3422_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4);
v___x_3423_ = lean_obj_once(&l_Lean_Compiler_LCNF_decToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_decToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_decToMono___redArg___closed__0);
v___x_3424_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5);
v___x_3425_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3426_, 0, v_discr_3407_);
lean_inc(v_fvarId_3421_);
v___x_3427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3427_, 0, v_fvarId_3421_);
v___x_3428_ = lean_unsigned_to_nat(2u);
v___x_3429_ = lean_mk_empty_array_with_capacity(v___x_3428_);
lean_inc_ref(v___x_3426_);
v___x_3430_ = lean_array_push(v___x_3429_, v___x_3426_);
v___x_3431_ = lean_array_push(v___x_3430_, v___x_3427_);
v___x_3432_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3425_);
lean_ctor_set(v___x_3432_, 1, v___x_3415_);
lean_ctor_set(v___x_3432_, 2, v___x_3431_);
v___x_3433_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3414_, v___x_3422_, v___x_3424_, v___x_3432_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; size_t v_sz_3435_; size_t v___x_3436_; lean_object* v___x_3437_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref(v___x_3433_);
v_sz_3435_ = lean_array_size(v_alts_3408_);
v___x_3436_ = ((size_t)0ULL);
v___x_3437_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18(v___x_3426_, v_sz_3435_, v___x_3436_, v_alts_3408_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3452_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3452_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3437_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3452_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v_fvarId_3442_; lean_object* v___x_3444_; 
v_fvarId_3442_ = lean_ctor_get(v_a_3434_, 0);
lean_inc(v_fvarId_3442_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 3, v_a_3438_);
lean_ctor_set(v___x_3410_, 2, v_fvarId_3442_);
lean_ctor_set(v___x_3410_, 1, v_a_3413_);
lean_ctor_set(v___x_3410_, 0, v___x_3423_);
v___x_3444_ = v___x_3410_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3423_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_a_3413_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v_fvarId_3442_);
lean_ctor_set(v_reuseFailAlloc_3451_, 3, v_a_3438_);
v___x_3444_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3449_; 
v___x_3445_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v_a_3434_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v_a_3420_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 0, v___x_3447_);
v___x_3449_ = v___x_3440_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_dec(v_a_3434_);
lean_dec(v_a_3420_);
lean_dec(v_a_3413_);
lean_del_object(v___x_3410_);
v_a_3453_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3455_ = v___x_3437_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3437_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_dec_ref(v___x_3426_);
lean_dec(v_a_3420_);
lean_dec(v_a_3413_);
lean_del_object(v___x_3410_);
lean_dec_ref(v_alts_3408_);
v_a_3461_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3433_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3433_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_dec(v_a_3413_);
lean_del_object(v___x_3410_);
lean_dec_ref(v_alts_3408_);
lean_dec(v_discr_3407_);
v_a_3469_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3419_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3419_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_del_object(v___x_3410_);
lean_dec_ref(v_alts_3408_);
lean_dec(v_discr_3407_);
v_a_3477_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3412_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3412_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object* v_code_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3503_; lean_object* v___y_3504_; uint8_t v___y_3505_; lean_object* v___y_3510_; lean_object* v___y_3511_; uint8_t v___y_3512_; lean_object* v___y_3517_; lean_object* v___y_3518_; uint8_t v___y_3519_; lean_object* v_decl_3524_; lean_object* v_k_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; 
switch(lean_obj_tag(v_code_3487_))
{
case 0:
{
lean_object* v_decl_3570_; lean_object* v_k_3571_; lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; lean_object* v_value_3596_; 
v_decl_3570_ = lean_ctor_get(v_code_3487_, 0);
v_k_3571_ = lean_ctor_get(v_code_3487_, 1);
v_value_3596_ = lean_ctor_get(v_decl_3570_, 3);
lean_inc(v_value_3596_);
if (lean_obj_tag(v_value_3596_) == 3)
{
lean_object* v_declName_3597_; 
v_declName_3597_ = lean_ctor_get(v_value_3596_, 0);
lean_inc(v_declName_3597_);
if (lean_obj_tag(v_declName_3597_) == 1)
{
lean_object* v_pre_3598_; 
v_pre_3598_ = lean_ctor_get(v_declName_3597_, 0);
lean_inc(v_pre_3598_);
if (lean_obj_tag(v_pre_3598_) == 1)
{
lean_object* v_pre_3599_; 
v_pre_3599_ = lean_ctor_get(v_pre_3598_, 0);
if (lean_obj_tag(v_pre_3599_) == 0)
{
lean_object* v_type_3600_; lean_object* v_args_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3671_; 
v_type_3600_ = lean_ctor_get(v_decl_3570_, 2);
v_args_3601_ = lean_ctor_get(v_value_3596_, 2);
v_isSharedCheck_3671_ = !lean_is_exclusive(v_value_3596_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; lean_object* v_unused_3673_; 
v_unused_3672_ = lean_ctor_get(v_value_3596_, 1);
lean_dec(v_unused_3672_);
v_unused_3673_ = lean_ctor_get(v_value_3596_, 0);
lean_dec(v_unused_3673_);
v___x_3603_ = v_value_3596_;
v_isShared_3604_ = v_isSharedCheck_3671_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_args_3601_);
lean_dec(v_value_3596_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3671_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v_str_3605_; lean_object* v_str_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v_str_3605_ = lean_ctor_get(v_declName_3597_, 1);
lean_inc_ref(v_str_3605_);
lean_dec_ref(v_declName_3597_);
v_str_3606_ = lean_ctor_get(v_pre_3598_, 1);
lean_inc_ref(v_str_3606_);
lean_dec_ref(v_pre_3598_);
v___x_3607_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__14);
v___x_3608_ = lean_string_dec_eq(v_str_3606_, v___x_3607_);
lean_dec_ref(v_str_3606_);
if (v___x_3608_ == 0)
{
lean_dec_ref(v_str_3605_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3609_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__17, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__17_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__17);
v___x_3610_ = lean_string_dec_eq(v_str_3605_, v___x_3609_);
lean_dec_ref(v_str_3605_);
if (v___x_3610_ == 0)
{
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3668_; 
lean_inc_ref(v_type_3600_);
lean_inc_ref(v_k_3571_);
lean_inc_ref(v_decl_3570_);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_code_3487_);
if (v_isSharedCheck_3668_ == 0)
{
lean_object* v_unused_3669_; lean_object* v_unused_3670_; 
v_unused_3669_ = lean_ctor_get(v_code_3487_, 1);
lean_dec(v_unused_3669_);
v_unused_3670_ = lean_ctor_get(v_code_3487_, 0);
lean_dec(v_unused_3670_);
v___x_3612_ = v_code_3487_;
v_isShared_3613_ = v_isSharedCheck_3668_;
goto v_resetjp_3611_;
}
else
{
lean_dec(v_code_3487_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3668_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3614_ = lean_array_get_size(v_args_3601_);
v___x_3615_ = lean_unsigned_to_nat(1u);
v___x_3616_ = lean_nat_dec_eq(v___x_3614_, v___x_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
lean_del_object(v___x_3612_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
lean_dec_ref(v_type_3600_);
lean_dec_ref(v_k_3571_);
lean_dec_ref(v_decl_3570_);
v___x_3617_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__5, &l_Lean_Compiler_LCNF_Code_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5);
v___x_3618_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3617_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3618_;
}
else
{
uint8_t v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3619_ = 0;
v___x_3620_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___closed__3);
v___x_3621_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3);
v___x_3622_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_3619_, v___x_3620_, v___x_3621_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v_fvarId_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3635_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
lean_inc(v_a_3623_);
lean_dec_ref(v___x_3622_);
v_fvarId_3624_ = lean_ctor_get(v_a_3623_, 0);
v___x_3625_ = lean_unsigned_to_nat(0u);
v___x_3626_ = lean_array_fget(v_args_3601_, v___x_3625_);
lean_dec_ref(v_args_3601_);
v___x_3627_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__7, &l_Lean_Compiler_LCNF_Code_toMono___closed__7_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__7);
v___x_3628_ = lean_box(0);
lean_inc(v_fvarId_3624_);
v___x_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3629_, 0, v_fvarId_3624_);
v___x_3630_ = lean_unsigned_to_nat(2u);
v___x_3631_ = lean_mk_empty_array_with_capacity(v___x_3630_);
v___x_3632_ = lean_array_push(v___x_3631_, v___x_3626_);
v___x_3633_ = lean_array_push(v___x_3632_, v___x_3629_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 2, v___x_3633_);
lean_ctor_set(v___x_3603_, 1, v___x_3628_);
lean_ctor_set(v___x_3603_, 0, v___x_3627_);
v___x_3635_ = v___x_3603_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3627_);
lean_ctor_set(v_reuseFailAlloc_3659_, 1, v___x_3628_);
lean_ctor_set(v_reuseFailAlloc_3659_, 2, v___x_3633_);
v___x_3635_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; 
v___x_3636_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_3619_, v_decl_3570_, v_type_3600_, v___x_3635_, v_a_3490_, v_a_3492_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3571_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3650_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3641_ = v___x_3638_;
v_isShared_3642_ = v_isSharedCheck_3650_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3638_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3650_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 1, v_a_3639_);
lean_ctor_set(v___x_3612_, 0, v_a_3637_);
v___x_3644_ = v___x_3612_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3637_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
v___x_3645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3645_, 0, v_a_3623_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v___x_3645_);
v___x_3647_ = v___x_3641_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3645_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
lean_dec(v_a_3637_);
lean_dec(v_a_3623_);
lean_del_object(v___x_3612_);
return v___x_3638_;
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_a_3623_);
lean_del_object(v___x_3612_);
lean_dec_ref(v_k_3571_);
v_a_3651_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3636_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3636_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
lean_del_object(v___x_3612_);
lean_del_object(v___x_3603_);
lean_dec_ref(v_args_3601_);
lean_dec_ref(v_type_3600_);
lean_dec_ref(v_k_3571_);
lean_dec_ref(v_decl_3570_);
v_a_3660_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3622_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3622_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
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
lean_dec_ref(v_pre_3598_);
lean_dec_ref(v_declName_3597_);
lean_dec_ref(v_value_3596_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
}
else
{
lean_dec(v_pre_3598_);
lean_dec_ref(v_declName_3597_);
lean_dec_ref(v_value_3596_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
}
else
{
lean_dec_ref(v_value_3596_);
lean_dec(v_declName_3597_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
}
else
{
lean_dec(v_value_3596_);
v___y_3573_ = v_a_3488_;
v___y_3574_ = v_a_3489_;
v___y_3575_ = v_a_3490_;
v___y_3576_ = v_a_3491_;
v___y_3577_ = v_a_3492_;
goto v___jp_3572_;
}
v___jp_3572_:
{
lean_object* v___x_3578_; 
lean_inc_ref(v_decl_3570_);
v___x_3578_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_3570_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3580_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref(v___x_3578_);
lean_inc_ref(v_k_3571_);
v___x_3580_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3571_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_object* v_a_3581_; size_t v___x_3582_; size_t v___x_3583_; uint8_t v___x_3584_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_a_3581_);
lean_dec_ref(v___x_3580_);
v___x_3582_ = lean_ptr_addr(v_k_3571_);
v___x_3583_ = lean_ptr_addr(v_a_3581_);
v___x_3584_ = lean_usize_dec_eq(v___x_3582_, v___x_3583_);
if (v___x_3584_ == 0)
{
v___y_3503_ = v_a_3581_;
v___y_3504_ = v_a_3579_;
v___y_3505_ = v___x_3584_;
goto v___jp_3502_;
}
else
{
size_t v___x_3585_; size_t v___x_3586_; uint8_t v___x_3587_; 
v___x_3585_ = lean_ptr_addr(v_decl_3570_);
v___x_3586_ = lean_ptr_addr(v_a_3579_);
v___x_3587_ = lean_usize_dec_eq(v___x_3585_, v___x_3586_);
v___y_3503_ = v_a_3581_;
v___y_3504_ = v_a_3579_;
v___y_3505_ = v___x_3587_;
goto v___jp_3502_;
}
}
else
{
lean_dec(v_a_3579_);
lean_dec_ref(v_code_3487_);
return v___x_3580_;
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec_ref(v_code_3487_);
v_a_3588_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3578_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3578_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_3674_; lean_object* v_args_3675_; size_t v_sz_3676_; size_t v___x_3677_; lean_object* v___x_3678_; 
v_fvarId_3674_ = lean_ctor_get(v_code_3487_, 0);
v_args_3675_ = lean_ctor_get(v_code_3487_, 1);
v_sz_3676_ = lean_array_size(v_args_3675_);
v___x_3677_ = ((size_t)0ULL);
lean_inc_ref(v_args_3675_);
v___x_3678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_3676_, v___x_3677_, v_args_3675_, v_a_3488_, v_a_3492_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3704_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3704_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3704_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
uint8_t v___y_3684_; uint8_t v___x_3700_; 
v___x_3700_ = l_Lean_instBEqFVarId_beq(v_fvarId_3674_, v_fvarId_3674_);
if (v___x_3700_ == 0)
{
v___y_3684_ = v___x_3700_;
goto v___jp_3683_;
}
else
{
size_t v___x_3701_; size_t v___x_3702_; uint8_t v___x_3703_; 
v___x_3701_ = lean_ptr_addr(v_args_3675_);
v___x_3702_ = lean_ptr_addr(v_a_3679_);
v___x_3703_ = lean_usize_dec_eq(v___x_3701_, v___x_3702_);
v___y_3684_ = v___x_3703_;
goto v___jp_3683_;
}
v___jp_3683_:
{
if (v___y_3684_ == 0)
{
lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3694_; 
lean_inc(v_fvarId_3674_);
v_isSharedCheck_3694_ = !lean_is_exclusive(v_code_3487_);
if (v_isSharedCheck_3694_ == 0)
{
lean_object* v_unused_3695_; lean_object* v_unused_3696_; 
v_unused_3695_ = lean_ctor_get(v_code_3487_, 1);
lean_dec(v_unused_3695_);
v_unused_3696_ = lean_ctor_get(v_code_3487_, 0);
lean_dec(v_unused_3696_);
v___x_3686_ = v_code_3487_;
v_isShared_3687_ = v_isSharedCheck_3694_;
goto v_resetjp_3685_;
}
else
{
lean_dec(v_code_3487_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3694_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
lean_ctor_set(v___x_3686_, 1, v_a_3679_);
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_fvarId_3674_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v_a_3679_);
v___x_3689_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
lean_object* v___x_3691_; 
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v___x_3689_);
v___x_3691_ = v___x_3681_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
else
{
lean_object* v___x_3698_; 
lean_dec(v_a_3679_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v_code_3487_);
v___x_3698_ = v___x_3681_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_code_3487_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
lean_dec_ref(v_code_3487_);
v_a_3705_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3678_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3678_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
case 4:
{
lean_object* v_cases_3713_; lean_object* v_typeName_3714_; lean_object* v_resultType_3715_; lean_object* v_discr_3716_; lean_object* v_alts_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; 
v_cases_3713_ = lean_ctor_get(v_code_3487_, 0);
lean_inc_ref(v_cases_3713_);
v_typeName_3714_ = lean_ctor_get(v_cases_3713_, 0);
v_resultType_3715_ = lean_ctor_get(v_cases_3713_, 1);
v_discr_3716_ = lean_ctor_get(v_cases_3713_, 2);
v_alts_3717_ = lean_ctor_get(v_cases_3713_, 3);
v___x_3718_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__8, &l_Lean_Compiler_LCNF_Code_toMono___closed__8_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__8);
v___x_3719_ = lean_name_eq(v_typeName_3714_, v___x_3718_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; uint8_t v___x_3721_; 
v___x_3720_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0);
v___x_3721_ = lean_name_eq(v_typeName_3714_, v___x_3720_);
if (v___x_3721_ == 0)
{
lean_object* v___x_3722_; uint8_t v___x_3723_; 
v___x_3722_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3);
v___x_3723_ = lean_name_eq(v_typeName_3714_, v___x_3722_);
if (v___x_3723_ == 0)
{
lean_object* v___x_3724_; uint8_t v___x_3725_; 
v___x_3724_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__10, &l_Lean_Compiler_LCNF_Code_toMono___closed__10_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__10);
v___x_3725_ = lean_name_eq(v_typeName_3714_, v___x_3724_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; uint8_t v___x_3727_; 
v___x_3726_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__12, &l_Lean_Compiler_LCNF_Code_toMono___closed__12_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__12);
v___x_3727_ = lean_name_eq(v_typeName_3714_, v___x_3726_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__14, &l_Lean_Compiler_LCNF_Code_toMono___closed__14_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__14);
v___x_3729_ = lean_name_eq(v_typeName_3714_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; uint8_t v___x_3731_; 
v___x_3730_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__16, &l_Lean_Compiler_LCNF_Code_toMono___closed__16_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__16);
v___x_3731_ = lean_name_eq(v_typeName_3714_, v___x_3730_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; uint8_t v___x_3733_; 
v___x_3732_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__17, &l_Lean_Compiler_LCNF_Code_toMono___closed__17_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__17);
v___x_3733_ = lean_name_eq(v_typeName_3714_, v___x_3732_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3734_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__18, &l_Lean_Compiler_LCNF_Code_toMono___closed__18_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__18);
v___x_3735_ = lean_name_eq(v_typeName_3714_, v___x_3734_);
if (v___x_3735_ == 0)
{
lean_object* v___x_3736_; uint8_t v___x_3737_; 
v___x_3736_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__19, &l_Lean_Compiler_LCNF_Code_toMono___closed__19_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__19);
v___x_3737_ = lean_name_eq(v_typeName_3714_, v___x_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3738_; uint8_t v___x_3739_; 
v___x_3738_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__20, &l_Lean_Compiler_LCNF_Code_toMono___closed__20_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__20);
v___x_3739_ = lean_name_eq(v_typeName_3714_, v___x_3738_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; uint8_t v___x_3741_; 
v___x_3740_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__21, &l_Lean_Compiler_LCNF_Code_toMono___closed__21_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__21);
v___x_3741_ = lean_name_eq(v_typeName_3714_, v___x_3740_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; uint8_t v___x_3743_; 
v___x_3742_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__22, &l_Lean_Compiler_LCNF_Code_toMono___closed__22_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__22);
v___x_3743_ = lean_name_eq(v_typeName_3714_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; 
lean_inc(v_typeName_3714_);
v___x_3744_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_3714_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_a_3745_; 
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3745_);
lean_dec_ref(v___x_3744_);
if (lean_obj_tag(v_a_3745_) == 1)
{
lean_object* v_val_3746_; lean_object* v___x_3747_; 
lean_dec_ref(v_code_3487_);
v_val_3746_ = lean_ctor_get(v_a_3745_, 0);
lean_inc(v_val_3746_);
lean_dec_ref(v_a_3745_);
v___x_3747_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_val_3746_, v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
lean_dec(v_val_3746_);
return v___x_3747_;
}
else
{
lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3840_; 
lean_inc_ref(v_alts_3717_);
lean_inc(v_discr_3716_);
lean_inc_ref(v_resultType_3715_);
lean_inc(v_typeName_3714_);
lean_dec(v_a_3745_);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_cases_3713_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; lean_object* v_unused_3842_; lean_object* v_unused_3843_; lean_object* v_unused_3844_; 
v_unused_3841_ = lean_ctor_get(v_cases_3713_, 3);
lean_dec(v_unused_3841_);
v_unused_3842_ = lean_ctor_get(v_cases_3713_, 2);
lean_dec(v_unused_3842_);
v_unused_3843_ = lean_ctor_get(v_cases_3713_, 1);
lean_dec(v_unused_3843_);
v_unused_3844_ = lean_ctor_get(v_cases_3713_, 0);
lean_dec(v_unused_3844_);
v___x_3749_ = v_cases_3713_;
v_isShared_3750_ = v_isSharedCheck_3840_;
goto v_resetjp_3748_;
}
else
{
lean_dec(v_cases_3713_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3840_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3751_; 
lean_inc_ref(v_resultType_3715_);
v___x_3751_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3715_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3831_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3754_ = v___x_3751_;
v_isShared_3755_ = v_isSharedCheck_3831_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3751_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3831_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3756_; lean_object* v_env_3757_; lean_object* v___x_3784_; 
v___x_3756_ = lean_st_ref_get(v_a_3492_);
v_env_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc_ref_n(v_env_3757_, 2);
lean_dec(v___x_3756_);
lean_inc(v_typeName_3714_);
v___x_3784_ = l_Lean_Environment_find_x3f(v_env_3757_, v_typeName_3714_, v___x_3743_);
if (lean_obj_tag(v___x_3784_) == 1)
{
lean_object* v_val_3785_; 
v_val_3785_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_val_3785_);
lean_dec_ref(v___x_3784_);
if (lean_obj_tag(v_val_3785_) == 5)
{
lean_object* v_val_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3830_; 
v_val_3786_ = lean_ctor_get(v_val_3785_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v_val_3785_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3788_ = v_val_3785_;
v_isShared_3789_ = v_isSharedCheck_3830_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_val_3786_);
lean_dec(v_val_3785_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3830_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v_toConstantVal_3790_; lean_object* v_name_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v_toConstantVal_3790_ = lean_ctor_get(v_val_3786_, 0);
lean_inc_ref(v_toConstantVal_3790_);
lean_dec_ref(v_val_3786_);
v_name_3791_ = lean_ctor_get(v_toConstantVal_3790_, 0);
lean_inc(v_name_3791_);
lean_dec_ref(v_toConstantVal_3790_);
v___x_3792_ = l_Lean_mkCasesOnName(v_name_3791_);
lean_inc_ref(v_env_3757_);
v___x_3793_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3757_, v___x_3792_);
if (lean_obj_tag(v___x_3793_) == 0)
{
if (v___x_3743_ == 0)
{
size_t v_sz_3794_; size_t v___x_3795_; lean_object* v___x_3796_; 
lean_dec_ref(v_env_3757_);
lean_del_object(v___x_3749_);
v_sz_3794_ = lean_array_size(v_alts_3717_);
v___x_3795_ = ((size_t)0ULL);
lean_inc_ref(v_alts_3717_);
v___x_3796_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_3794_, v___x_3795_, v_alts_3717_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3821_; 
v_a_3797_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3799_ = v___x_3796_;
v_isShared_3800_ = v_isSharedCheck_3821_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3796_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3821_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
uint8_t v___y_3810_; size_t v___x_3815_; size_t v___x_3816_; uint8_t v___x_3817_; 
v___x_3815_ = lean_ptr_addr(v_alts_3717_);
lean_dec_ref(v_alts_3717_);
v___x_3816_ = lean_ptr_addr(v_a_3797_);
v___x_3817_ = lean_usize_dec_eq(v___x_3815_, v___x_3816_);
if (v___x_3817_ == 0)
{
lean_dec_ref(v_resultType_3715_);
v___y_3810_ = v___x_3817_;
goto v___jp_3809_;
}
else
{
size_t v___x_3818_; size_t v___x_3819_; uint8_t v___x_3820_; 
v___x_3818_ = lean_ptr_addr(v_resultType_3715_);
lean_dec_ref(v_resultType_3715_);
v___x_3819_ = lean_ptr_addr(v_a_3752_);
v___x_3820_ = lean_usize_dec_eq(v___x_3818_, v___x_3819_);
v___y_3810_ = v___x_3820_;
goto v___jp_3809_;
}
v___jp_3801_:
{
lean_object* v___x_3802_; lean_object* v___x_3804_; 
v___x_3802_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3802_, 0, v_typeName_3714_);
lean_ctor_set(v___x_3802_, 1, v_a_3752_);
lean_ctor_set(v___x_3802_, 2, v_discr_3716_);
lean_ctor_set(v___x_3802_, 3, v_a_3797_);
if (v_isShared_3789_ == 0)
{
lean_ctor_set_tag(v___x_3788_, 4);
lean_ctor_set(v___x_3788_, 0, v___x_3802_);
v___x_3804_ = v___x_3788_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3802_);
v___x_3804_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
lean_object* v___x_3806_; 
if (v_isShared_3800_ == 0)
{
lean_ctor_set(v___x_3799_, 0, v___x_3804_);
v___x_3806_ = v___x_3799_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3804_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
v___jp_3809_:
{
if (v___y_3810_ == 0)
{
lean_del_object(v___x_3754_);
lean_dec_ref(v_code_3487_);
goto v___jp_3801_;
}
else
{
uint8_t v___x_3811_; 
v___x_3811_ = l_Lean_instBEqFVarId_beq(v_discr_3716_, v_discr_3716_);
if (v___x_3811_ == 0)
{
lean_del_object(v___x_3754_);
lean_dec_ref(v_code_3487_);
goto v___jp_3801_;
}
else
{
lean_object* v___x_3813_; 
lean_del_object(v___x_3799_);
lean_dec(v_a_3797_);
lean_del_object(v___x_3788_);
lean_dec(v_a_3752_);
lean_dec(v_discr_3716_);
lean_dec(v_typeName_3714_);
if (v_isShared_3755_ == 0)
{
lean_ctor_set(v___x_3754_, 0, v_code_3487_);
v___x_3813_ = v___x_3754_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_code_3487_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_del_object(v___x_3788_);
lean_del_object(v___x_3754_);
lean_dec(v_a_3752_);
lean_dec_ref(v_alts_3717_);
lean_dec(v_discr_3716_);
lean_dec_ref(v_resultType_3715_);
lean_dec(v_typeName_3714_);
lean_dec_ref(v_code_3487_);
v_a_3822_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3796_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3796_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
else
{
lean_del_object(v___x_3788_);
lean_del_object(v___x_3754_);
lean_dec_ref(v_resultType_3715_);
lean_dec_ref(v_code_3487_);
goto v___jp_3758_;
}
}
else
{
lean_dec_ref(v___x_3793_);
lean_del_object(v___x_3788_);
lean_del_object(v___x_3754_);
lean_dec_ref(v_resultType_3715_);
lean_dec_ref(v_code_3487_);
goto v___jp_3758_;
}
}
}
else
{
lean_dec(v_val_3785_);
lean_dec_ref(v_env_3757_);
lean_del_object(v___x_3754_);
lean_dec(v_a_3752_);
lean_del_object(v___x_3749_);
lean_dec_ref(v_alts_3717_);
lean_dec(v_discr_3716_);
lean_dec_ref(v_resultType_3715_);
lean_dec(v_typeName_3714_);
lean_dec_ref(v_code_3487_);
v___y_3495_ = v_a_3488_;
v___y_3496_ = v_a_3489_;
v___y_3497_ = v_a_3490_;
v___y_3498_ = v_a_3491_;
v___y_3499_ = v_a_3492_;
goto v___jp_3494_;
}
}
else
{
lean_dec(v___x_3784_);
lean_dec_ref(v_env_3757_);
lean_del_object(v___x_3754_);
lean_dec(v_a_3752_);
lean_del_object(v___x_3749_);
lean_dec_ref(v_alts_3717_);
lean_dec(v_discr_3716_);
lean_dec_ref(v_resultType_3715_);
lean_dec(v_typeName_3714_);
lean_dec_ref(v_code_3487_);
v___y_3495_ = v_a_3488_;
v___y_3496_ = v_a_3489_;
v___y_3497_ = v_a_3490_;
v___y_3498_ = v_a_3491_;
v___y_3499_ = v_a_3492_;
goto v___jp_3494_;
}
v___jp_3758_:
{
size_t v_sz_3759_; size_t v___x_3760_; lean_object* v___x_3761_; 
v_sz_3759_ = lean_array_size(v_alts_3717_);
v___x_3760_ = ((size_t)0ULL);
v___x_3761_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v_env_3757_, v___x_3743_, v_sz_3759_, v___x_3760_, v_alts_3717_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3775_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3764_ = v___x_3761_;
v_isShared_3765_ = v_isSharedCheck_3775_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3761_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3775_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3769_; 
v___x_3766_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4);
v___x_3767_ = l_Lean_Name_append(v_typeName_3714_, v___x_3766_);
if (v_isShared_3750_ == 0)
{
lean_ctor_set(v___x_3749_, 3, v_a_3762_);
lean_ctor_set(v___x_3749_, 1, v_a_3752_);
lean_ctor_set(v___x_3749_, 0, v___x_3767_);
v___x_3769_ = v___x_3749_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v___x_3767_);
lean_ctor_set(v_reuseFailAlloc_3774_, 1, v_a_3752_);
lean_ctor_set(v_reuseFailAlloc_3774_, 2, v_discr_3716_);
lean_ctor_set(v_reuseFailAlloc_3774_, 3, v_a_3762_);
v___x_3769_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3770_; lean_object* v___x_3772_; 
v___x_3770_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
if (v_isShared_3765_ == 0)
{
lean_ctor_set(v___x_3764_, 0, v___x_3770_);
v___x_3772_ = v___x_3764_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3770_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
lean_dec(v_a_3752_);
lean_del_object(v___x_3749_);
lean_dec(v_discr_3716_);
lean_dec(v_typeName_3714_);
v_a_3776_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3761_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3761_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_del_object(v___x_3749_);
lean_dec_ref(v_alts_3717_);
lean_dec(v_discr_3716_);
lean_dec_ref(v_resultType_3715_);
lean_dec(v_typeName_3714_);
lean_dec_ref(v_code_3487_);
v_a_3832_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3751_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3751_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_dec_ref(v_code_3487_);
lean_dec_ref(v_cases_3713_);
v_a_3845_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3744_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3744_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
else
{
lean_object* v___x_3853_; 
lean_dec_ref(v_code_3487_);
v___x_3853_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3853_;
}
}
else
{
lean_object* v___x_3854_; 
lean_dec_ref(v_code_3487_);
v___x_3854_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
lean_dec_ref(v_cases_3713_);
return v___x_3854_;
}
}
else
{
lean_object* v___x_3855_; 
lean_dec_ref(v_code_3487_);
v___x_3855_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3855_;
}
}
else
{
lean_object* v___x_3856_; 
lean_dec_ref(v_code_3487_);
v___x_3856_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3856_;
}
}
else
{
lean_object* v___x_3857_; 
lean_dec_ref(v_code_3487_);
v___x_3857_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3857_;
}
}
else
{
lean_object* v___x_3858_; 
lean_dec_ref(v_code_3487_);
v___x_3858_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3858_;
}
}
else
{
lean_object* v___x_3859_; 
lean_dec_ref(v_code_3487_);
v___x_3859_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3713_, v___x_3730_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3859_;
}
}
else
{
lean_object* v___x_3860_; 
lean_dec_ref(v_code_3487_);
v___x_3860_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3713_, v___x_3728_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3860_;
}
}
else
{
lean_object* v___x_3861_; 
lean_dec_ref(v_code_3487_);
v___x_3861_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3713_, v___x_3726_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3861_;
}
}
else
{
lean_object* v___x_3862_; 
lean_dec_ref(v_code_3487_);
v___x_3862_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3713_, v___x_3724_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3862_;
}
}
else
{
lean_object* v___x_3863_; 
lean_dec_ref(v_code_3487_);
v___x_3863_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3863_;
}
}
else
{
lean_object* v___x_3864_; 
lean_dec_ref(v_code_3487_);
v___x_3864_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3864_;
}
}
else
{
lean_object* v___x_3865_; 
lean_dec_ref(v_code_3487_);
v___x_3865_ = l_Lean_Compiler_LCNF_decToMono___redArg(v_cases_3713_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3865_;
}
}
case 5:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v_code_3487_);
return v___x_3866_;
}
case 6:
{
lean_object* v_type_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3891_; 
v_type_3867_ = lean_ctor_get(v_code_3487_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_code_3487_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3869_ = v_code_3487_;
v_isShared_3870_ = v_isSharedCheck_3891_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_type_3867_);
lean_dec(v_code_3487_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3891_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3871_; 
v___x_3871_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3867_, v_a_3491_, v_a_3492_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3882_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3874_ = v___x_3871_;
v_isShared_3875_ = v_isSharedCheck_3882_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3871_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3882_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 0, v_a_3872_);
v___x_3877_ = v___x_3869_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3879_; 
if (v_isShared_3875_ == 0)
{
lean_ctor_set(v___x_3874_, 0, v___x_3877_);
v___x_3879_ = v___x_3874_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v___x_3877_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_del_object(v___x_3869_);
v_a_3883_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3871_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3871_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
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
}
default: 
{
lean_object* v_decl_3892_; lean_object* v_k_3893_; 
v_decl_3892_ = lean_ctor_get(v_code_3487_, 0);
v_k_3893_ = lean_ctor_get(v_code_3487_, 1);
lean_inc_ref(v_k_3893_);
lean_inc_ref(v_decl_3892_);
v_decl_3524_ = v_decl_3892_;
v_k_3525_ = v_k_3893_;
v___y_3526_ = v_a_3488_;
v___y_3527_ = v_a_3489_;
v___y_3528_ = v_a_3490_;
v___y_3529_ = v_a_3491_;
v___y_3530_ = v_a_3492_;
goto v___jp_3523_;
}
}
v___jp_3494_:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__1, &l_Lean_Compiler_LCNF_Code_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__1);
v___x_3501_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3500_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
return v___x_3501_;
}
v___jp_3502_:
{
if (v___y_3505_ == 0)
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
lean_dec_ref(v_code_3487_);
v___x_3506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3506_, 0, v___y_3504_);
lean_ctor_set(v___x_3506_, 1, v___y_3503_);
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
else
{
lean_object* v___x_3508_; 
lean_dec_ref(v___y_3504_);
lean_dec_ref(v___y_3503_);
v___x_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3508_, 0, v_code_3487_);
return v___x_3508_;
}
}
v___jp_3509_:
{
if (v___y_3512_ == 0)
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
lean_dec_ref(v_code_3487_);
v___x_3513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___y_3511_);
lean_ctor_set(v___x_3513_, 1, v___y_3510_);
v___x_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3513_);
return v___x_3514_;
}
else
{
lean_object* v___x_3515_; 
lean_dec_ref(v___y_3511_);
lean_dec_ref(v___y_3510_);
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v_code_3487_);
return v___x_3515_;
}
}
v___jp_3516_:
{
if (v___y_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
lean_dec_ref(v_code_3487_);
v___x_3520_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___y_3518_);
lean_ctor_set(v___x_3520_, 1, v___y_3517_);
v___x_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
return v___x_3521_;
}
else
{
lean_object* v___x_3522_; 
lean_dec_ref(v___y_3518_);
lean_dec_ref(v___y_3517_);
v___x_3522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3522_, 0, v_code_3487_);
return v___x_3522_;
}
}
v___jp_3523_:
{
lean_object* v___x_3531_; 
v___x_3531_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3524_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3533_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3532_);
lean_dec_ref(v___x_3531_);
v___x_3533_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
if (lean_obj_tag(v___x_3533_) == 0)
{
switch(lean_obj_tag(v_code_3487_))
{
case 1:
{
lean_object* v_a_3534_; lean_object* v_decl_3535_; lean_object* v_k_3536_; size_t v___x_3537_; size_t v___x_3538_; uint8_t v___x_3539_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_a_3534_);
lean_dec_ref(v___x_3533_);
v_decl_3535_ = lean_ctor_get(v_code_3487_, 0);
v_k_3536_ = lean_ctor_get(v_code_3487_, 1);
v___x_3537_ = lean_ptr_addr(v_k_3536_);
v___x_3538_ = lean_ptr_addr(v_a_3534_);
v___x_3539_ = lean_usize_dec_eq(v___x_3537_, v___x_3538_);
if (v___x_3539_ == 0)
{
v___y_3510_ = v_a_3534_;
v___y_3511_ = v_a_3532_;
v___y_3512_ = v___x_3539_;
goto v___jp_3509_;
}
else
{
size_t v___x_3540_; size_t v___x_3541_; uint8_t v___x_3542_; 
v___x_3540_ = lean_ptr_addr(v_decl_3535_);
v___x_3541_ = lean_ptr_addr(v_a_3532_);
v___x_3542_ = lean_usize_dec_eq(v___x_3540_, v___x_3541_);
v___y_3510_ = v_a_3534_;
v___y_3511_ = v_a_3532_;
v___y_3512_ = v___x_3542_;
goto v___jp_3509_;
}
}
case 2:
{
lean_object* v_a_3543_; lean_object* v_decl_3544_; lean_object* v_k_3545_; size_t v___x_3546_; size_t v___x_3547_; uint8_t v___x_3548_; 
v_a_3543_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_a_3543_);
lean_dec_ref(v___x_3533_);
v_decl_3544_ = lean_ctor_get(v_code_3487_, 0);
v_k_3545_ = lean_ctor_get(v_code_3487_, 1);
v___x_3546_ = lean_ptr_addr(v_k_3545_);
v___x_3547_ = lean_ptr_addr(v_a_3543_);
v___x_3548_ = lean_usize_dec_eq(v___x_3546_, v___x_3547_);
if (v___x_3548_ == 0)
{
v___y_3517_ = v_a_3543_;
v___y_3518_ = v_a_3532_;
v___y_3519_ = v___x_3548_;
goto v___jp_3516_;
}
else
{
size_t v___x_3549_; size_t v___x_3550_; uint8_t v___x_3551_; 
v___x_3549_ = lean_ptr_addr(v_decl_3544_);
v___x_3550_ = lean_ptr_addr(v_a_3532_);
v___x_3551_ = lean_usize_dec_eq(v___x_3549_, v___x_3550_);
v___y_3517_ = v_a_3543_;
v___y_3518_ = v_a_3532_;
v___y_3519_ = v___x_3551_;
goto v___jp_3516_;
}
}
default: 
{
lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3560_; 
lean_dec(v_a_3532_);
lean_dec_ref(v_code_3487_);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3560_ == 0)
{
lean_object* v_unused_3561_; 
v_unused_3561_ = lean_ctor_get(v___x_3533_, 0);
lean_dec(v_unused_3561_);
v___x_3553_ = v___x_3533_;
v_isShared_3554_ = v_isSharedCheck_3560_;
goto v_resetjp_3552_;
}
else
{
lean_dec(v___x_3533_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3560_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3558_; 
v___x_3555_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__4, &l_Lean_Compiler_LCNF_Code_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4);
v___x_3556_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(v___x_3555_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v___x_3556_);
v___x_3558_ = v___x_3553_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3556_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
else
{
lean_dec(v_a_3532_);
lean_dec_ref(v_code_3487_);
return v___x_3533_;
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
lean_dec_ref(v_k_3525_);
lean_dec_ref(v_code_3487_);
v_a_3562_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3531_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3531_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20(size_t v_sz_3894_, size_t v_i_3895_, lean_object* v_bs_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
uint8_t v___x_3903_; 
v___x_3903_ = lean_usize_dec_lt(v_i_3895_, v_sz_3894_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3904_, 0, v_bs_3896_);
return v___x_3904_;
}
else
{
lean_object* v_v_3905_; lean_object* v___x_3906_; lean_object* v_bs_x27_3907_; lean_object* v_a_3909_; 
v_v_3905_ = lean_array_uget(v_bs_3896_, v_i_3895_);
v___x_3906_ = lean_unsigned_to_nat(0u);
v_bs_x27_3907_ = lean_array_uset(v_bs_3896_, v_i_3895_, v___x_3906_);
if (lean_obj_tag(v_v_3905_) == 0)
{
lean_object* v_ctorName_3914_; lean_object* v_params_3915_; lean_object* v_code_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3950_; 
v_ctorName_3914_ = lean_ctor_get(v_v_3905_, 0);
v_params_3915_ = lean_ctor_get(v_v_3905_, 1);
v_code_3916_ = lean_ctor_get(v_v_3905_, 2);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_v_3905_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3918_ = v_v_3905_;
v_isShared_3919_ = v_isSharedCheck_3950_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_code_3916_);
lean_inc(v_params_3915_);
lean_inc(v_ctorName_3914_);
lean_dec(v_v_3905_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3950_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
uint8_t v___x_3920_; lean_object* v___x_3921_; 
v___x_3920_ = 0;
v___x_3921_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_3920_, v_params_3915_, v___y_3899_, v___y_3901_);
lean_dec_ref(v_params_3915_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v___y_3923_; lean_object* v___x_3938_; uint8_t v___x_3939_; 
lean_dec_ref(v___x_3921_);
v___x_3938_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__4);
v___x_3939_ = lean_name_eq(v_ctorName_3914_, v___x_3938_);
lean_dec(v_ctorName_3914_);
if (v___x_3939_ == 0)
{
lean_object* v___x_3940_; 
v___x_3940_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__27, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__27_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__27);
v___y_3923_ = v___x_3940_;
goto v___jp_3922_;
}
else
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__30, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__30_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__30);
v___y_3923_ = v___x_3941_;
goto v___jp_3922_;
}
v___jp_3922_:
{
lean_object* v___x_3924_; 
v___x_3924_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3916_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3926_; lean_object* v___x_3928_; 
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_a_3925_);
lean_dec_ref(v___x_3924_);
v___x_3926_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___closed__0);
lean_inc(v___y_3923_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 2, v_a_3925_);
lean_ctor_set(v___x_3918_, 1, v___x_3926_);
lean_ctor_set(v___x_3918_, 0, v___y_3923_);
v___x_3928_ = v___x_3918_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___y_3923_);
lean_ctor_set(v_reuseFailAlloc_3929_, 1, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3929_, 2, v_a_3925_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
v_a_3909_ = v___x_3928_;
goto v___jp_3908_;
}
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
lean_del_object(v___x_3918_);
lean_dec_ref(v_bs_x27_3907_);
v_a_3930_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3924_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3924_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
else
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
lean_del_object(v___x_3918_);
lean_dec_ref(v_code_3916_);
lean_dec(v_ctorName_3914_);
lean_dec_ref(v_bs_x27_3907_);
v_a_3942_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3921_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3921_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
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
}
else
{
lean_object* v_code_3951_; lean_object* v___x_3952_; 
v_code_3951_ = lean_ctor_get(v_v_3905_, 0);
lean_inc_ref(v_code_3951_);
v___x_3952_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3951_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref(v___x_3952_);
v___x_3954_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_3905_, v_a_3953_);
v_a_3909_ = v___x_3954_;
goto v___jp_3908_;
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec_ref(v_v_3905_);
lean_dec_ref(v_bs_x27_3907_);
v_a_3955_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3952_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3952_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
v___jp_3908_:
{
size_t v___x_3910_; size_t v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = ((size_t)1ULL);
v___x_3911_ = lean_usize_add(v_i_3895_, v___x_3910_);
v___x_3912_ = lean_array_uset(v_bs_x27_3907_, v_i_3895_, v_a_3909_);
v_i_3895_ = v___x_3911_;
v_bs_3896_ = v___x_3912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___redArg(lean_object* v_c_3963_, lean_object* v_a_3964_, lean_object* v_a_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_){
_start:
{
lean_object* v_resultType_3970_; lean_object* v_discr_3971_; lean_object* v_alts_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_4010_; 
v_resultType_3970_ = lean_ctor_get(v_c_3963_, 1);
v_discr_3971_ = lean_ctor_get(v_c_3963_, 2);
v_alts_3972_ = lean_ctor_get(v_c_3963_, 3);
v_isSharedCheck_4010_ = !lean_is_exclusive(v_c_3963_);
if (v_isSharedCheck_4010_ == 0)
{
lean_object* v_unused_4011_; 
v_unused_4011_ = lean_ctor_get(v_c_3963_, 0);
lean_dec(v_unused_4011_);
v___x_3974_ = v_c_3963_;
v_isShared_3975_ = v_isSharedCheck_4010_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_alts_3972_);
lean_inc(v_discr_3971_);
lean_inc(v_resultType_3970_);
lean_dec(v_c_3963_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_4010_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3976_; 
v___x_3976_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3970_, v_a_3967_, v_a_3968_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; size_t v_sz_3978_; size_t v___x_3979_; lean_object* v___x_3980_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref(v___x_3976_);
v_sz_3978_ = lean_array_size(v_alts_3972_);
v___x_3979_ = ((size_t)0ULL);
v___x_3980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20(v_sz_3978_, v___x_3979_, v_alts_3972_, v_a_3964_, v_a_3965_, v_a_3966_, v_a_3967_, v_a_3968_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3993_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3983_ = v___x_3980_;
v_isShared_3984_ = v_isSharedCheck_3993_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3980_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3993_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; lean_object* v___x_3987_; 
v___x_3985_ = lean_obj_once(&l_Lean_Compiler_LCNF_decToMono___redArg___closed__0, &l_Lean_Compiler_LCNF_decToMono___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_decToMono___redArg___closed__0);
if (v_isShared_3975_ == 0)
{
lean_ctor_set(v___x_3974_, 3, v_a_3981_);
lean_ctor_set(v___x_3974_, 1, v_a_3977_);
lean_ctor_set(v___x_3974_, 0, v___x_3985_);
v___x_3987_ = v___x_3974_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3985_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v_a_3977_);
lean_ctor_set(v_reuseFailAlloc_3992_, 2, v_discr_3971_);
lean_ctor_set(v_reuseFailAlloc_3992_, 3, v_a_3981_);
v___x_3987_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
lean_object* v___x_3988_; lean_object* v___x_3990_; 
v___x_3988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_3988_);
v___x_3990_ = v___x_3983_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3988_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec(v_a_3977_);
lean_del_object(v___x_3974_);
lean_dec(v_discr_3971_);
v_a_3994_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3980_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3980_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_del_object(v___x_3974_);
lean_dec_ref(v_alts_3972_);
lean_dec(v_discr_3971_);
v_a_4002_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3976_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3976_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___redArg___boxed(lean_object* v_c_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_Lean_Compiler_LCNF_decToMono___redArg(v_c_4012_, v_a_4013_, v_a_4014_, v_a_4015_, v_a_4016_, v_a_4017_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
lean_dec(v_a_4015_);
lean_dec_ref(v_a_4014_);
lean_dec(v_a_4013_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object* v_decl_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_4020_, v_a_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
lean_dec(v_a_4023_);
lean_dec_ref(v_a_4022_);
lean_dec(v_a_4021_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object* v_sz_4028_, lean_object* v_i_4029_, lean_object* v_bs_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
size_t v_sz_boxed_4037_; size_t v_i_boxed_4038_; lean_object* v_res_4039_; 
v_sz_boxed_4037_ = lean_unbox_usize(v_sz_4028_);
lean_dec(v_sz_4028_);
v_i_boxed_4038_ = lean_unbox_usize(v_i_4029_);
lean_dec(v_i_4029_);
v_res_4039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_boxed_4037_, v_i_boxed_4038_, v_bs_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_);
lean_dec(v___y_4035_);
lean_dec_ref(v___y_4034_);
lean_dec(v___y_4033_);
lean_dec_ref(v___y_4032_);
lean_dec(v___y_4031_);
return v_res_4039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20___boxed(lean_object* v_sz_4040_, lean_object* v_i_4041_, lean_object* v_bs_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
size_t v_sz_boxed_4049_; size_t v_i_boxed_4050_; lean_object* v_res_4051_; 
v_sz_boxed_4049_ = lean_unbox_usize(v_sz_4040_);
lean_dec(v_sz_4040_);
v_i_boxed_4050_ = lean_unbox_usize(v_i_4041_);
lean_dec(v_i_4041_);
v_res_4051_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_decToMono_spec__20(v_sz_boxed_4049_, v_i_boxed_4050_, v_bs_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object* v_c_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_){
_start:
{
lean_object* v_res_4059_; 
v_res_4059_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
lean_dec(v_a_4057_);
lean_dec_ref(v_a_4056_);
lean_dec(v_a_4055_);
lean_dec_ref(v_a_4054_);
lean_dec(v_a_4053_);
return v_res_4059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object* v___x_4060_, lean_object* v___x_4061_, lean_object* v_sz_4062_, lean_object* v_i_4063_, lean_object* v_bs_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v___x_43727__boxed_4071_; size_t v_sz_boxed_4072_; size_t v_i_boxed_4073_; lean_object* v_res_4074_; 
v___x_43727__boxed_4071_ = lean_unbox(v___x_4061_);
v_sz_boxed_4072_ = lean_unbox_usize(v_sz_4062_);
lean_dec(v_sz_4062_);
v_i_boxed_4073_ = lean_unbox_usize(v_i_4063_);
lean_dec(v_i_4063_);
v_res_4074_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v___x_4060_, v___x_43727__boxed_4071_, v_sz_boxed_4072_, v_i_boxed_4073_, v_bs_4064_, v___y_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4065_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object* v_c_4075_, lean_object* v_uintName_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_4075_, v_uintName_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_);
lean_dec(v_a_4081_);
lean_dec_ref(v_a_4080_);
lean_dec(v_a_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_a_4077_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object* v_c_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_){
_start:
{
lean_object* v_res_4091_; 
v_res_4091_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_4084_, v_a_4085_, v_a_4086_, v_a_4087_, v_a_4088_, v_a_4089_);
lean_dec(v_a_4089_);
lean_dec_ref(v_a_4088_);
lean_dec(v_a_4087_);
lean_dec_ref(v_a_4086_);
lean_dec(v_a_4085_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object* v_c_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_){
_start:
{
lean_object* v_res_4099_; 
v_res_4099_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_);
lean_dec(v_a_4097_);
lean_dec_ref(v_a_4096_);
lean_dec(v_a_4095_);
lean_dec_ref(v_a_4094_);
lean_dec(v_a_4093_);
return v_res_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object* v_c_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
lean_dec(v_a_4103_);
lean_dec_ref(v_a_4102_);
lean_dec(v_a_4101_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object* v_c_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_);
lean_dec(v_a_4113_);
lean_dec_ref(v_a_4112_);
lean_dec(v_a_4111_);
lean_dec_ref(v_a_4110_);
lean_dec(v_a_4109_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object* v_c_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_4116_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4121_);
lean_dec_ref(v_a_4120_);
lean_dec(v_a_4119_);
lean_dec_ref(v_a_4118_);
lean_dec(v_a_4117_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object* v_c_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_);
lean_dec(v_a_4129_);
lean_dec_ref(v_a_4128_);
lean_dec(v_a_4127_);
lean_dec_ref(v_a_4126_);
lean_dec(v_a_4125_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object* v_info_4132_, lean_object* v_c_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_info_4132_, v_c_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_);
lean_dec(v_a_4138_);
lean_dec_ref(v_a_4137_);
lean_dec(v_a_4136_);
lean_dec_ref(v_a_4135_);
lean_dec(v_a_4134_);
lean_dec_ref(v_info_4132_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18___boxed(lean_object* v___x_4141_, lean_object* v_sz_4142_, lean_object* v_i_4143_, lean_object* v_bs_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
size_t v_sz_boxed_4151_; size_t v_i_boxed_4152_; lean_object* v_res_4153_; 
v_sz_boxed_4151_ = lean_unbox_usize(v_sz_4142_);
lean_dec(v_sz_4142_);
v_i_boxed_4152_ = lean_unbox_usize(v_i_4143_);
lean_dec(v_i_4143_);
v_res_4153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__18(v___x_4141_, v_sz_boxed_4151_, v_i_boxed_4152_, v_bs_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
lean_dec(v___y_4145_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object* v_c_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_4154_, v_a_4155_, v_a_4156_, v_a_4157_, v_a_4158_, v_a_4159_);
lean_dec(v_a_4159_);
lean_dec_ref(v_a_4158_);
lean_dec(v_a_4157_);
lean_dec_ref(v_a_4156_);
lean_dec(v_a_4155_);
lean_dec_ref(v_c_4154_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16___boxed(lean_object* v___x_4162_, lean_object* v_sz_4163_, lean_object* v_i_4164_, lean_object* v_bs_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_){
_start:
{
size_t v_sz_boxed_4172_; size_t v_i_boxed_4173_; lean_object* v_res_4174_; 
v_sz_boxed_4172_ = lean_unbox_usize(v_sz_4163_);
lean_dec(v_sz_4163_);
v_i_boxed_4173_ = lean_unbox_usize(v_i_4164_);
lean_dec(v_i_4164_);
v_res_4174_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__16(v___x_4162_, v_sz_boxed_4172_, v_i_boxed_4173_, v_bs_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
lean_dec(v___y_4168_);
lean_dec_ref(v___y_4167_);
lean_dec(v___y_4166_);
return v_res_4174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object* v_code_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_4175_, v_a_4176_, v_a_4177_, v_a_4178_, v_a_4179_, v_a_4180_);
lean_dec(v_a_4180_);
lean_dec_ref(v_a_4179_);
lean_dec(v_a_4178_);
lean_dec_ref(v_a_4177_);
lean_dec(v_a_4176_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object* v_c_4183_, lean_object* v_x_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_4183_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object* v_c_4192_, lean_object* v_x_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_){
_start:
{
lean_object* v_res_4200_; 
v_res_4200_ = l_Lean_Compiler_LCNF_casesTaskToMono(v_c_4192_, v_x_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_);
lean_dec(v_a_4198_);
lean_dec_ref(v_a_4197_);
lean_dec(v_a_4196_);
lean_dec_ref(v_a_4195_);
lean_dec(v_a_4194_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object* v_c_4201_, lean_object* v_x_4202_, lean_object* v_a_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_){
_start:
{
lean_object* v___x_4209_; 
v___x_4209_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_4201_, v_a_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object* v_c_4210_, lean_object* v_x_4211_, lean_object* v_a_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Lean_Compiler_LCNF_casesThunkToMono(v_c_4210_, v_x_4211_, v_a_4212_, v_a_4213_, v_a_4214_, v_a_4215_, v_a_4216_);
lean_dec(v_a_4216_);
lean_dec_ref(v_a_4215_);
lean_dec(v_a_4214_);
lean_dec_ref(v_a_4213_);
lean_dec(v_a_4212_);
lean_dec_ref(v_c_4210_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object* v_c_4219_, lean_object* v_x_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v___x_4227_; 
v___x_4227_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_4219_, v_a_4221_, v_a_4222_, v_a_4223_, v_a_4224_, v_a_4225_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object* v_c_4228_, lean_object* v_x_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_Compiler_LCNF_casesStringToMono(v_c_4228_, v_x_4229_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_, v_a_4234_);
lean_dec(v_a_4234_);
lean_dec_ref(v_a_4233_);
lean_dec(v_a_4232_);
lean_dec_ref(v_a_4231_);
lean_dec(v_a_4230_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object* v_c_4237_, lean_object* v_x_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_){
_start:
{
lean_object* v___x_4245_; 
v___x_4245_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_4237_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object* v_c_4246_, lean_object* v_x_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_, lean_object* v_a_4252_, lean_object* v_a_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono(v_c_4246_, v_x_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_, v_a_4252_);
lean_dec(v_a_4252_);
lean_dec_ref(v_a_4251_);
lean_dec(v_a_4250_);
lean_dec_ref(v_a_4249_);
lean_dec(v_a_4248_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object* v_c_4255_, lean_object* v_x_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_){
_start:
{
lean_object* v___x_4263_; 
v___x_4263_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_4255_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_);
return v___x_4263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object* v_c_4264_, lean_object* v_x_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lean_Compiler_LCNF_casesByteArrayToMono(v_c_4264_, v_x_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
lean_dec(v_a_4270_);
lean_dec_ref(v_a_4269_);
lean_dec(v_a_4268_);
lean_dec_ref(v_a_4267_);
lean_dec(v_a_4266_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object* v_c_4273_, lean_object* v_x_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_){
_start:
{
lean_object* v___x_4281_; 
v___x_4281_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_4273_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object* v_c_4282_, lean_object* v_x_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l_Lean_Compiler_LCNF_casesArrayToMono(v_c_4282_, v_x_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_);
lean_dec(v_a_4288_);
lean_dec_ref(v_a_4287_);
lean_dec(v_a_4286_);
lean_dec_ref(v_a_4285_);
lean_dec(v_a_4284_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object* v_c_4291_, lean_object* v_uintName_4292_, lean_object* v_x_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_, lean_object* v_a_4297_, lean_object* v_a_4298_){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_4291_, v_uintName_4292_, v_a_4294_, v_a_4295_, v_a_4296_, v_a_4297_, v_a_4298_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object* v_c_4301_, lean_object* v_uintName_4302_, lean_object* v_x_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_){
_start:
{
lean_object* v_res_4310_; 
v_res_4310_ = l_Lean_Compiler_LCNF_casesUIntToMono(v_c_4301_, v_uintName_4302_, v_x_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_, v_a_4308_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec(v_a_4306_);
lean_dec_ref(v_a_4305_);
lean_dec(v_a_4304_);
return v_res_4310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object* v_c_4311_, lean_object* v_x_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_){
_start:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4311_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object* v_c_4320_, lean_object* v_x_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Lean_Compiler_LCNF_casesIntToMono(v_c_4320_, v_x_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_);
lean_dec(v_a_4326_);
lean_dec_ref(v_a_4325_);
lean_dec(v_a_4324_);
lean_dec_ref(v_a_4323_);
lean_dec(v_a_4322_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object* v_c_4329_, lean_object* v_x_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_4329_, v_a_4331_, v_a_4332_, v_a_4333_, v_a_4334_, v_a_4335_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object* v_c_4338_, lean_object* v_x_4339_, lean_object* v_a_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_, lean_object* v_a_4343_, lean_object* v_a_4344_, lean_object* v_a_4345_){
_start:
{
lean_object* v_res_4346_; 
v_res_4346_ = l_Lean_Compiler_LCNF_casesNatToMono(v_c_4338_, v_x_4339_, v_a_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_);
lean_dec(v_a_4344_);
lean_dec_ref(v_a_4343_);
lean_dec(v_a_4342_);
lean_dec_ref(v_a_4341_);
lean_dec(v_a_4340_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono(lean_object* v_c_4347_, lean_object* v_x_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_){
_start:
{
lean_object* v___x_4355_; 
v___x_4355_ = l_Lean_Compiler_LCNF_decToMono___redArg(v_c_4347_, v_a_4349_, v_a_4350_, v_a_4351_, v_a_4352_, v_a_4353_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_decToMono___boxed(lean_object* v_c_4356_, lean_object* v_x_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l_Lean_Compiler_LCNF_decToMono(v_c_4356_, v_x_4357_, v_a_4358_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_);
lean_dec(v_a_4362_);
lean_dec_ref(v_a_4361_);
lean_dec(v_a_4360_);
lean_dec_ref(v_a_4359_);
lean_dec(v_a_4358_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t v_sz_4365_, size_t v_i_4366_, lean_object* v_bs_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
lean_object* v___x_4374_; 
v___x_4374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4365_, v_i_4366_, v_bs_4367_, v___y_4368_, v___y_4370_, v___y_4371_, v___y_4372_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object* v_sz_4375_, lean_object* v_i_4376_, lean_object* v_bs_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
size_t v_sz_boxed_4384_; size_t v_i_boxed_4385_; lean_object* v_res_4386_; 
v_sz_boxed_4384_ = lean_unbox_usize(v_sz_4375_);
lean_dec(v_sz_4375_);
v_i_boxed_4385_ = lean_unbox_usize(v_i_4376_);
lean_dec(v_i_4376_);
v_res_4386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(v_sz_boxed_4384_, v_i_boxed_4385_, v_bs_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object* v_f_4387_, lean_object* v_v_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
if (lean_obj_tag(v_v_4388_) == 0)
{
lean_object* v_code_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4419_; 
v_code_4395_ = lean_ctor_get(v_v_4388_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v_v_4388_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4397_ = v_v_4388_;
v_isShared_4398_ = v_isSharedCheck_4419_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_code_4395_);
lean_dec(v_v_4388_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4419_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4399_; 
lean_inc(v___y_4393_);
lean_inc_ref(v___y_4392_);
lean_inc(v___y_4391_);
lean_inc_ref(v___y_4390_);
lean_inc(v___y_4389_);
v___x_4399_ = lean_apply_7(v_f_4387_, v_code_4395_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_, lean_box(0));
if (lean_obj_tag(v___x_4399_) == 0)
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4410_; 
v_a_4400_ = lean_ctor_get(v___x_4399_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4399_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4402_ = v___x_4399_;
v_isShared_4403_ = v_isSharedCheck_4410_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v___x_4399_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4410_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4405_; 
if (v_isShared_4398_ == 0)
{
lean_ctor_set(v___x_4397_, 0, v_a_4400_);
v___x_4405_ = v___x_4397_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4400_);
v___x_4405_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
lean_object* v___x_4407_; 
if (v_isShared_4403_ == 0)
{
lean_ctor_set(v___x_4402_, 0, v___x_4405_);
v___x_4407_ = v___x_4402_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v___x_4405_);
v___x_4407_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
return v___x_4407_;
}
}
}
}
else
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
lean_del_object(v___x_4397_);
v_a_4411_ = lean_ctor_get(v___x_4399_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4399_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4399_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4399_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
}
else
{
lean_object* v___x_4420_; 
lean_dec_ref(v_f_4387_);
v___x_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4420_, 0, v_v_4388_);
return v___x_4420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object* v_f_4421_, lean_object* v_v_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_){
_start:
{
lean_object* v_res_4429_; 
v_res_4429_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4421_, v_v_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_);
lean_dec(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec(v___y_4425_);
lean_dec_ref(v___y_4424_);
lean_dec(v___y_4423_);
return v_res_4429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t v_pu_4430_, lean_object* v_f_4431_, lean_object* v_v_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_){
_start:
{
lean_object* v___x_4439_; 
v___x_4439_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4431_, v_v_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_);
return v___x_4439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object* v_pu_4440_, lean_object* v_f_4441_, lean_object* v_v_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
uint8_t v_pu_boxed_4449_; lean_object* v_res_4450_; 
v_pu_boxed_4449_ = lean_unbox(v_pu_4440_);
v_res_4450_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(v_pu_boxed_4449_, v_f_4441_, v_v_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4443_);
return v_res_4450_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0(void){
_start:
{
lean_object* v___f_4451_; 
v___f_4451_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_toMono___boxed), 7, 0);
return v___f_4451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object* v_decl_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_, lean_object* v_a_4456_, lean_object* v_a_4457_){
_start:
{
lean_object* v_toSignature_4459_; lean_object* v_value_4460_; uint8_t v_recursive_4461_; lean_object* v_inlineAttr_x3f_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4532_; 
v_toSignature_4459_ = lean_ctor_get(v_decl_4452_, 0);
v_value_4460_ = lean_ctor_get(v_decl_4452_, 1);
v_recursive_4461_ = lean_ctor_get_uint8(v_decl_4452_, sizeof(void*)*3);
v_inlineAttr_x3f_4462_ = lean_ctor_get(v_decl_4452_, 2);
v_isSharedCheck_4532_ = !lean_is_exclusive(v_decl_4452_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4464_ = v_decl_4452_;
v_isShared_4465_ = v_isSharedCheck_4532_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_inlineAttr_x3f_4462_);
lean_inc(v_value_4460_);
lean_inc(v_toSignature_4459_);
lean_dec(v_decl_4452_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4532_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v_name_4466_; lean_object* v_type_4467_; lean_object* v_params_4468_; uint8_t v_safe_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4530_; 
v_name_4466_ = lean_ctor_get(v_toSignature_4459_, 0);
v_type_4467_ = lean_ctor_get(v_toSignature_4459_, 2);
v_params_4468_ = lean_ctor_get(v_toSignature_4459_, 3);
v_safe_4469_ = lean_ctor_get_uint8(v_toSignature_4459_, sizeof(void*)*4);
v_isSharedCheck_4530_ = !lean_is_exclusive(v_toSignature_4459_);
if (v_isSharedCheck_4530_ == 0)
{
lean_object* v_unused_4531_; 
v_unused_4531_ = lean_ctor_get(v_toSignature_4459_, 1);
lean_dec(v_unused_4531_);
v___x_4471_ = v_toSignature_4459_;
v_isShared_4472_ = v_isSharedCheck_4530_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_params_4468_);
lean_inc(v_type_4467_);
lean_inc(v_name_4466_);
lean_dec(v_toSignature_4459_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4530_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4473_; 
v___x_4473_ = l_Lean_Compiler_LCNF_toMonoType(v_type_4467_, v_a_4456_, v_a_4457_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; size_t v_sz_4475_; size_t v___x_4476_; lean_object* v___x_4477_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref(v___x_4473_);
v_sz_4475_ = lean_array_size(v_params_4468_);
v___x_4476_ = ((size_t)0ULL);
v___x_4477_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4475_, v___x_4476_, v_params_4468_, v_a_4453_, v_a_4455_, v_a_4456_, v_a_4457_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___f_4479_; lean_object* v___x_4480_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref(v___x_4477_);
v___f_4479_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0);
v___x_4480_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v___f_4479_, v_value_4460_, v_a_4453_, v_a_4454_, v_a_4455_, v_a_4456_, v_a_4457_);
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_object* v_a_4481_; lean_object* v___x_4482_; lean_object* v___x_4484_; 
v_a_4481_ = lean_ctor_get(v___x_4480_, 0);
lean_inc(v_a_4481_);
lean_dec_ref(v___x_4480_);
v___x_4482_ = lean_box(0);
if (v_isShared_4472_ == 0)
{
lean_ctor_set(v___x_4471_, 3, v_a_4478_);
lean_ctor_set(v___x_4471_, 2, v_a_4474_);
lean_ctor_set(v___x_4471_, 1, v___x_4482_);
v___x_4484_ = v___x_4471_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_name_4466_);
lean_ctor_set(v_reuseFailAlloc_4505_, 1, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4505_, 2, v_a_4474_);
lean_ctor_set(v_reuseFailAlloc_4505_, 3, v_a_4478_);
lean_ctor_set_uint8(v_reuseFailAlloc_4505_, sizeof(void*)*4, v_safe_4469_);
v___x_4484_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
lean_object* v___x_4486_; 
if (v_isShared_4465_ == 0)
{
lean_ctor_set(v___x_4464_, 1, v_a_4481_);
lean_ctor_set(v___x_4464_, 0, v___x_4484_);
v___x_4486_ = v___x_4464_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v___x_4484_);
lean_ctor_set(v_reuseFailAlloc_4504_, 1, v_a_4481_);
lean_ctor_set(v_reuseFailAlloc_4504_, 2, v_inlineAttr_x3f_4462_);
lean_ctor_set_uint8(v_reuseFailAlloc_4504_, sizeof(void*)*3, v_recursive_4461_);
v___x_4486_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
lean_object* v___x_4487_; 
lean_inc_ref(v___x_4486_);
v___x_4487_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_4486_, v_a_4457_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4494_; 
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4494_ == 0)
{
lean_object* v_unused_4495_; 
v_unused_4495_ = lean_ctor_get(v___x_4487_, 0);
lean_dec(v_unused_4495_);
v___x_4489_ = v___x_4487_;
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
else
{
lean_dec(v___x_4487_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4486_);
v___x_4492_ = v___x_4489_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v___x_4486_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
else
{
lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
lean_dec_ref(v___x_4486_);
v_a_4496_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4487_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_dec(v___x_4487_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4496_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
}
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
lean_dec(v_a_4478_);
lean_dec(v_a_4474_);
lean_del_object(v___x_4471_);
lean_dec(v_name_4466_);
lean_del_object(v___x_4464_);
lean_dec(v_inlineAttr_x3f_4462_);
v_a_4506_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4480_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4480_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
else
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4521_; 
lean_dec(v_a_4474_);
lean_del_object(v___x_4471_);
lean_dec(v_name_4466_);
lean_del_object(v___x_4464_);
lean_dec(v_inlineAttr_x3f_4462_);
lean_dec_ref(v_value_4460_);
v_a_4514_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4516_ = v___x_4477_;
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4477_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4517_ == 0)
{
v___x_4519_ = v___x_4516_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_a_4514_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
return v___x_4519_;
}
}
}
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_del_object(v___x_4471_);
lean_dec_ref(v_params_4468_);
lean_dec(v_name_4466_);
lean_del_object(v___x_4464_);
lean_dec(v_inlineAttr_x3f_4462_);
lean_dec_ref(v_value_4460_);
v_a_4522_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4473_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4473_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object* v_decl_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_){
_start:
{
lean_object* v_res_4540_; 
v_res_4540_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4533_, v_a_4534_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_);
lean_dec(v_a_4538_);
lean_dec_ref(v_a_4537_);
lean_dec(v_a_4536_);
lean_dec_ref(v_a_4535_);
lean_dec(v_a_4534_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object* v_decl_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_){
_start:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4547_ = lean_st_ref_get(v_a_4545_);
lean_dec(v___x_4547_);
v___x_4548_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_4549_ = lean_st_mk_ref(v___x_4548_);
v___x_4550_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4541_, v___x_4549_, v_a_4542_, v_a_4543_, v_a_4544_, v_a_4545_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4560_; 
v_a_4551_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4553_ = v___x_4550_;
v_isShared_4554_ = v_isSharedCheck_4560_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4550_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4560_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4558_; 
v___x_4555_ = lean_st_ref_get(v_a_4545_);
lean_dec(v___x_4555_);
v___x_4556_ = lean_st_ref_get(v___x_4549_);
lean_dec(v___x_4549_);
lean_dec(v___x_4556_);
if (v_isShared_4554_ == 0)
{
v___x_4558_ = v___x_4553_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4551_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
}
else
{
lean_dec(v___x_4549_);
return v___x_4550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object* v_decl_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lean_Compiler_LCNF_Decl_toMono(v_decl_4561_, v_a_4562_, v_a_4563_, v_a_4564_, v_a_4565_);
lean_dec(v_a_4565_);
lean_dec_ref(v_a_4564_);
lean_dec(v_a_4563_);
lean_dec_ref(v_a_4562_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t v_sz_4568_, size_t v_i_4569_, lean_object* v_bs_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_){
_start:
{
uint8_t v___x_4576_; 
v___x_4576_ = lean_usize_dec_lt(v_i_4569_, v_sz_4568_);
if (v___x_4576_ == 0)
{
lean_object* v___x_4577_; 
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v_bs_4570_);
return v___x_4577_;
}
else
{
lean_object* v_v_4578_; lean_object* v___x_4579_; 
v_v_4578_ = lean_array_uget_borrowed(v_bs_4570_, v_i_4569_);
lean_inc(v_v_4578_);
v___x_4579_ = l_Lean_Compiler_LCNF_Decl_toMono(v_v_4578_, v___y_4571_, v___y_4572_, v___y_4573_, v___y_4574_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4581_; lean_object* v_bs_x27_4582_; size_t v___x_4583_; size_t v___x_4584_; lean_object* v___x_4585_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
lean_inc(v_a_4580_);
lean_dec_ref(v___x_4579_);
v___x_4581_ = lean_unsigned_to_nat(0u);
v_bs_x27_4582_ = lean_array_uset(v_bs_4570_, v_i_4569_, v___x_4581_);
v___x_4583_ = ((size_t)1ULL);
v___x_4584_ = lean_usize_add(v_i_4569_, v___x_4583_);
v___x_4585_ = lean_array_uset(v_bs_x27_4582_, v_i_4569_, v_a_4580_);
v_i_4569_ = v___x_4584_;
v_bs_4570_ = v___x_4585_;
goto _start;
}
else
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4594_; 
lean_dec_ref(v_bs_4570_);
v_a_4587_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4589_ = v___x_4579_;
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4579_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v___x_4592_; 
if (v_isShared_4590_ == 0)
{
v___x_4592_ = v___x_4589_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_a_4587_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object* v_sz_4595_, lean_object* v_i_4596_, lean_object* v_bs_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
size_t v_sz_boxed_4603_; size_t v_i_boxed_4604_; lean_object* v_res_4605_; 
v_sz_boxed_4603_ = lean_unbox_usize(v_sz_4595_);
lean_dec(v_sz_4595_);
v_i_boxed_4604_ = lean_unbox_usize(v_i_4596_);
lean_dec(v_i_4596_);
v_res_4605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_boxed_4603_, v_i_boxed_4604_, v_bs_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_);
lean_dec(v___y_4601_);
lean_dec_ref(v___y_4600_);
lean_dec(v___y_4599_);
lean_dec_ref(v___y_4598_);
return v_res_4605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object* v_x_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
size_t v_sz_4612_; size_t v___x_4613_; lean_object* v___x_4614_; 
v_sz_4612_ = lean_array_size(v_x_4606_);
v___x_4613_ = ((size_t)0ULL);
v___x_4614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_4612_, v___x_4613_, v_x_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
return v___x_4614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object* v_x_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l_Lean_Compiler_LCNF_toMono___lam__0(v_x_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
lean_dec(v___y_4617_);
lean_dec_ref(v___y_4616_);
return v_res_4621_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMono___closed__0(void){
_start:
{
lean_object* v___f_4622_; 
v___f_4622_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_toMono___lam__0___boxed), 6, 0);
return v___f_4622_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMono___closed__1(void){
_start:
{
lean_object* v___x_4623_; 
v___x_4623_ = lean_mk_string_unchecked("toMono", 6, 6);
return v___x_4623_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMono___closed__2(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4624_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMono___closed__1, &l_Lean_Compiler_LCNF_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_toMono___closed__1);
v___x_4625_ = l_Lean_Name_mkStr1(v___x_4624_);
return v___x_4625_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMono___closed__3(void){
_start:
{
lean_object* v___f_4626_; lean_object* v___x_4627_; uint8_t v___x_4628_; uint8_t v___x_4629_; uint8_t v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___f_4626_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMono___closed__0, &l_Lean_Compiler_LCNF_toMono___closed__0_once, _init_l_Lean_Compiler_LCNF_toMono___closed__0);
v___x_4627_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMono___closed__2, &l_Lean_Compiler_LCNF_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_toMono___closed__2);
v___x_4628_ = 1;
v___x_4629_ = 1;
v___x_4630_ = 0;
v___x_4631_ = lean_unsigned_to_nat(0u);
v___x_4632_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_4632_, 0, v___x_4631_);
lean_ctor_set(v___x_4632_, 1, v___x_4627_);
lean_ctor_set(v___x_4632_, 2, v___f_4626_);
lean_ctor_set_uint8(v___x_4632_, sizeof(void*)*3, v___x_4630_);
lean_ctor_set_uint8(v___x_4632_, sizeof(void*)*3 + 1, v___x_4629_);
lean_ctor_set_uint8(v___x_4632_, sizeof(void*)*3 + 2, v___x_4628_);
return v___x_4632_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMono(void){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMono___closed__3, &l_Lean_Compiler_LCNF_toMono___closed__3_once, _init_l_Lean_Compiler_LCNF_toMono___closed__3);
return v___x_4633_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4634_; 
v___x_4634_ = lean_mk_string_unchecked("Compiler", 8, 8);
return v___x_4634_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4635_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMono___closed__1, &l_Lean_Compiler_LCNF_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_toMono___closed__1);
v___x_4636_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4637_ = l_Lean_Name_mkStr2(v___x_4636_, v___x_4635_);
return v___x_4637_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4638_; 
v___x_4638_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_4638_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; 
v___x_4639_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4640_ = lean_box(0);
v___x_4641_ = l_Lean_Name_str___override(v___x_4640_, v___x_4639_);
return v___x_4641_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4642_; 
v___x_4642_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4642_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4643_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4644_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4645_ = l_Lean_Name_str___override(v___x_4644_, v___x_4643_);
return v___x_4645_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4646_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4647_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4648_ = l_Lean_Name_str___override(v___x_4647_, v___x_4646_);
return v___x_4648_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = lean_mk_string_unchecked("LCNF", 4, 4);
return v___x_4649_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4650_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4651_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4652_ = l_Lean_Name_str___override(v___x_4651_, v___x_4650_);
return v___x_4652_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4653_; 
v___x_4653_ = lean_mk_string_unchecked("ToMono", 6, 6);
return v___x_4653_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4655_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4656_ = l_Lean_Name_str___override(v___x_4655_, v___x_4654_);
return v___x_4656_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = lean_unsigned_to_nat(0u);
v___x_4658_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4659_ = l_Lean_Name_num___override(v___x_4658_, v___x_4657_);
return v___x_4659_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4660_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4661_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4662_ = l_Lean_Name_str___override(v___x_4661_, v___x_4660_);
return v___x_4662_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4663_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4664_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4665_ = l_Lean_Name_str___override(v___x_4664_, v___x_4663_);
return v___x_4665_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4666_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4667_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4668_ = l_Lean_Name_str___override(v___x_4667_, v___x_4666_);
return v___x_4668_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4669_; 
v___x_4669_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_4669_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4671_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4672_ = l_Lean_Name_str___override(v___x_4671_, v___x_4670_);
return v___x_4672_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4673_; 
v___x_4673_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_4673_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4674_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4675_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4676_ = l_Lean_Name_str___override(v___x_4675_, v___x_4674_);
return v___x_4676_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4677_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4678_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4679_ = l_Lean_Name_str___override(v___x_4678_, v___x_4677_);
return v___x_4679_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
v___x_4680_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4681_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4682_ = l_Lean_Name_str___override(v___x_4681_, v___x_4680_);
return v___x_4682_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; 
v___x_4683_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4684_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4685_ = l_Lean_Name_str___override(v___x_4684_, v___x_4683_);
return v___x_4685_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4686_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4687_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4688_ = l_Lean_Name_str___override(v___x_4687_, v___x_4686_);
return v___x_4688_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4689_ = lean_unsigned_to_nat(3314358258u);
v___x_4690_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4691_ = l_Lean_Name_num___override(v___x_4690_, v___x_4689_);
return v___x_4691_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4692_; 
v___x_4692_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_4692_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4693_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4694_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4695_ = l_Lean_Name_str___override(v___x_4694_, v___x_4693_);
return v___x_4695_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4696_; 
v___x_4696_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_4696_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4697_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4698_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4699_ = l_Lean_Name_str___override(v___x_4698_, v___x_4697_);
return v___x_4699_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4700_ = lean_unsigned_to_nat(2u);
v___x_4701_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4702_ = l_Lean_Name_num___override(v___x_4701_, v___x_4700_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4704_; uint8_t v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4704_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4705_ = 1;
v___x_4706_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_);
v___x_4707_ = l_Lean_registerTraceClass(v___x_4704_, v___x_4705_, v___x_4706_);
return v___x_4707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2____boxed(lean_object* v_a_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_();
return v_res_4709_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_toMono = _init_l_Lean_Compiler_LCNF_toMono();
lean_mark_persistent(l_Lean_Compiler_LCNF_toMono);
res = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_3314358258____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToMono(builtin);
}
#ifdef __cplusplus
}
#endif
