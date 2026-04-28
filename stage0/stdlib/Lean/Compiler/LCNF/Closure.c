// Lean compiler output
// Module: Lean.Compiler.LCNF.Closure
// Imports: public import Lean.Util.ForEachExprWhere public import Lean.Compiler.LCNF.CompilerM
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectType___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
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
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(lean_object* v_a_49_, lean_object* v_x_50_){
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg___boxed(lean_object* v_a_56_, lean_object* v_x_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_56_, v_x_57_);
lean_dec(v_x_57_);
lean_dec(v_a_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(lean_object* v_m_60_, lean_object* v_a_61_, lean_object* v_b_62_){
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
v___x_79_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_61_, v_bkt_78_);
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
v_val_93_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(v_buckets_x27_86_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object* v_fvarId_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_visited_109_; lean_object* v_params_110_; lean_object* v_decls_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_122_; 
v___x_107_ = lean_st_ref_get(v_a_105_);
lean_dec(v___x_107_);
v___x_108_ = lean_st_ref_take(v_a_104_);
v_visited_109_ = lean_ctor_get(v___x_108_, 0);
v_params_110_ = lean_ctor_get(v___x_108_, 1);
v_decls_111_ = lean_ctor_get(v___x_108_, 2);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_122_ == 0)
{
v___x_113_ = v___x_108_;
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_decls_111_);
lean_inc(v_params_110_);
lean_inc(v_visited_109_);
lean_dec(v___x_108_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_122_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_115_ = lean_box(0);
v___x_116_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(v_visited_109_, v_fvarId_103_, v___x_115_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_116_);
v___x_118_ = v___x_113_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_116_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_params_110_);
lean_ctor_set(v_reuseFailAlloc_121_, 2, v_decls_111_);
v___x_118_ = v_reuseFailAlloc_121_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_st_ref_set(v_a_104_, v___x_118_);
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_115_);
return v___x_120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object* v_fvarId_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_123_, v_a_124_, v_a_125_);
lean_dec(v_a_125_);
lean_dec(v_a_124_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object* v_fvarId_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_128_, v_a_130_, v_a_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object* v_fvarId_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Compiler_LCNF_Closure_markVisited(v_fvarId_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0(lean_object* v_00_u03b2_146_, lean_object* v_m_147_, lean_object* v_a_148_, lean_object* v_b_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0___redArg(v_m_147_, v_a_148_, v_b_149_);
return v___x_150_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(lean_object* v_00_u03b2_151_, lean_object* v_a_152_, lean_object* v_x_153_){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_152_, v_x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___boxed(lean_object* v_00_u03b2_155_, lean_object* v_a_156_, lean_object* v_x_157_){
_start:
{
uint8_t v_res_158_; lean_object* v_r_159_; 
v_res_158_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0(v_00_u03b2_155_, v_a_156_, v_x_157_);
lean_dec(v_x_157_);
lean_dec(v_a_156_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1(lean_object* v_00_u03b2_160_, lean_object* v_data_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1___redArg(v_data_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_163_, lean_object* v_i_164_, lean_object* v_source_165_, lean_object* v_target_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2___redArg(v_i_164_, v_source_165_, v_target_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_168_, lean_object* v_x_169_, lean_object* v_x_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__1_spec__2_spec__3___redArg(v_x_169_, v_x_170_);
return v___x_171_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(lean_object* v_m_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_buckets_174_; lean_object* v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; uint64_t v___x_178_; uint64_t v_fold_179_; uint64_t v___x_180_; uint64_t v___x_181_; uint64_t v___x_182_; size_t v___x_183_; size_t v___x_184_; size_t v___x_185_; size_t v___x_186_; size_t v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_buckets_174_ = lean_ctor_get(v_m_172_, 1);
v___x_175_ = lean_array_get_size(v_buckets_174_);
v___x_176_ = l_Lean_instHashableFVarId_hash(v_a_173_);
v___x_177_ = 32ULL;
v___x_178_ = lean_uint64_shift_right(v___x_176_, v___x_177_);
v_fold_179_ = lean_uint64_xor(v___x_176_, v___x_178_);
v___x_180_ = 16ULL;
v___x_181_ = lean_uint64_shift_right(v_fold_179_, v___x_180_);
v___x_182_ = lean_uint64_xor(v_fold_179_, v___x_181_);
v___x_183_ = lean_uint64_to_usize(v___x_182_);
v___x_184_ = lean_usize_of_nat(v___x_175_);
v___x_185_ = ((size_t)1ULL);
v___x_186_ = lean_usize_sub(v___x_184_, v___x_185_);
v___x_187_ = lean_usize_land(v___x_183_, v___x_186_);
v___x_188_ = lean_array_uget_borrowed(v_buckets_174_, v___x_187_);
v___x_189_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Closure_markVisited_spec__0_spec__0___redArg(v_a_173_, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg___boxed(lean_object* v_m_190_, lean_object* v_a_191_){
_start:
{
uint8_t v_res_192_; lean_object* v_r_193_; 
v_res_192_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_m_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_m_190_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0(void){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_instMonadEIO(lean_box(0));
return v___x_194_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1(void){
_start:
{
lean_object* v___f_195_; 
v___f_195_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_195_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2(void){
_start:
{
lean_object* v___f_196_; 
v___f_196_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_196_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3(void){
_start:
{
lean_object* v___f_197_; 
v___f_197_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed), 7, 0);
return v___f_197_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4(void){
_start:
{
lean_object* v___f_198_; 
v___f_198_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed), 9, 0);
return v___f_198_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_toApplicative_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_272_; 
v___x_207_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__0);
v___x_208_ = l_StateRefT_x27_instMonad___redArg(v___x_207_);
v_toApplicative_209_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v___x_208_, 1);
lean_dec(v_unused_273_);
v___x_211_ = v___x_208_;
v_isShared_212_ = v_isSharedCheck_272_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_toApplicative_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_272_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_toFunctor_213_; lean_object* v_toSeq_214_; lean_object* v_toSeqLeft_215_; lean_object* v_toSeqRight_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_270_; 
v_toFunctor_213_ = lean_ctor_get(v_toApplicative_209_, 0);
v_toSeq_214_ = lean_ctor_get(v_toApplicative_209_, 2);
v_toSeqLeft_215_ = lean_ctor_get(v_toApplicative_209_, 3);
v_toSeqRight_216_ = lean_ctor_get(v_toApplicative_209_, 4);
v_isSharedCheck_270_ = !lean_is_exclusive(v_toApplicative_209_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; 
v_unused_271_ = lean_ctor_get(v_toApplicative_209_, 1);
lean_dec(v_unused_271_);
v___x_218_ = v_toApplicative_209_;
v_isShared_219_ = v_isSharedCheck_270_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_toSeqRight_216_);
lean_inc(v_toSeqLeft_215_);
lean_inc(v_toSeq_214_);
lean_inc(v_toFunctor_213_);
lean_dec(v_toApplicative_209_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_270_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___f_225_; lean_object* v___f_226_; lean_object* v___f_227_; lean_object* v___x_229_; 
v___f_220_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__1);
v___f_221_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__2);
lean_inc_ref(v_toFunctor_213_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_222_, 0, v_toFunctor_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_223_, 0, v_toFunctor_213_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___f_222_);
lean_ctor_set(v___x_224_, 1, v___f_223_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_225_, 0, v_toSeqRight_216_);
v___f_226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_226_, 0, v_toSeqLeft_215_);
v___f_227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_227_, 0, v_toSeq_214_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 4, v___f_225_);
lean_ctor_set(v___x_218_, 3, v___f_226_);
lean_ctor_set(v___x_218_, 2, v___f_227_);
lean_ctor_set(v___x_218_, 1, v___f_220_);
lean_ctor_set(v___x_218_, 0, v___x_224_);
v___x_229_ = v___x_218_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___f_220_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v___f_227_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v___f_226_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v___f_225_);
v___x_229_ = v_reuseFailAlloc_269_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_231_; 
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 1, v___f_221_);
lean_ctor_set(v___x_211_, 0, v___x_229_);
v___x_231_ = v___x_211_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___f_221_);
v___x_231_ = v_reuseFailAlloc_268_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v_toApplicative_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_266_; 
v___x_232_ = l_StateRefT_x27_instMonad___redArg(v___x_231_);
v_toApplicative_233_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_266_ == 0)
{
lean_object* v_unused_267_; 
v_unused_267_ = lean_ctor_get(v___x_232_, 1);
lean_dec(v_unused_267_);
v___x_235_ = v___x_232_;
v_isShared_236_ = v_isSharedCheck_266_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_toApplicative_233_);
lean_dec(v___x_232_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_266_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v_toFunctor_237_; lean_object* v_toSeq_238_; lean_object* v_toSeqLeft_239_; lean_object* v_toSeqRight_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_264_; 
v_toFunctor_237_ = lean_ctor_get(v_toApplicative_233_, 0);
v_toSeq_238_ = lean_ctor_get(v_toApplicative_233_, 2);
v_toSeqLeft_239_ = lean_ctor_get(v_toApplicative_233_, 3);
v_toSeqRight_240_ = lean_ctor_get(v_toApplicative_233_, 4);
v_isSharedCheck_264_ = !lean_is_exclusive(v_toApplicative_233_);
if (v_isSharedCheck_264_ == 0)
{
lean_object* v_unused_265_; 
v_unused_265_ = lean_ctor_get(v_toApplicative_233_, 1);
lean_dec(v_unused_265_);
v___x_242_ = v_toApplicative_233_;
v_isShared_243_ = v_isSharedCheck_264_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_toSeqRight_240_);
lean_inc(v_toSeqLeft_239_);
lean_inc(v_toSeq_238_);
lean_inc(v_toFunctor_237_);
lean_dec(v_toApplicative_233_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_264_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___f_244_; lean_object* v___f_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___x_248_; lean_object* v___f_249_; lean_object* v___f_250_; lean_object* v___f_251_; lean_object* v___x_253_; 
v___f_244_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__3);
v___f_245_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___closed__4);
lean_inc_ref(v_toFunctor_237_);
v___f_246_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_246_, 0, v_toFunctor_237_);
v___f_247_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_247_, 0, v_toFunctor_237_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___f_246_);
lean_ctor_set(v___x_248_, 1, v___f_247_);
v___f_249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_249_, 0, v_toSeqRight_240_);
v___f_250_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_250_, 0, v_toSeqLeft_239_);
v___f_251_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_251_, 0, v_toSeq_238_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 4, v___f_249_);
lean_ctor_set(v___x_242_, 3, v___f_250_);
lean_ctor_set(v___x_242_, 2, v___f_251_);
lean_ctor_set(v___x_242_, 1, v___f_244_);
lean_ctor_set(v___x_242_, 0, v___x_248_);
v___x_253_ = v___x_242_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___f_244_);
lean_ctor_set(v_reuseFailAlloc_263_, 2, v___f_251_);
lean_ctor_set(v_reuseFailAlloc_263_, 3, v___f_250_);
lean_ctor_set(v_reuseFailAlloc_263_, 4, v___f_249_);
v___x_253_ = v_reuseFailAlloc_263_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_255_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___f_245_);
lean_ctor_set(v___x_235_, 0, v___x_253_);
v___x_255_ = v___x_235_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___f_245_);
v___x_255_ = v_reuseFailAlloc_262_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___f_259_; lean_object* v___x_24536__overap_260_; lean_object* v___x_261_; 
v___x_256_ = l_StateRefT_x27_instMonad___redArg(v___x_255_);
v___x_257_ = lean_box(0);
v___x_258_ = l_instInhabitedOfMonad___redArg(v___x_256_, v___x_257_);
v___f_259_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_259_, 0, v___x_258_);
v___x_24536__overap_260_ = lean_panic_fn_borrowed(v___f_259_, v_msg_199_);
lean_dec_ref(v___f_259_);
lean_inc(v___y_205_);
lean_inc_ref(v___y_204_);
lean_inc(v___y_203_);
lean_inc_ref(v___y_202_);
lean_inc(v___y_201_);
lean_inc_ref(v___y_200_);
v___x_261_ = lean_apply_7(v___x_24536__overap_260_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, lean_box(0));
return v___x_261_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5___boxed(lean_object* v_msg_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(v_msg_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
return v_res_282_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(lean_object* v_a_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
uint8_t v___x_285_; 
v___x_285_ = 0;
return v___x_285_;
}
else
{
lean_object* v_key_286_; lean_object* v_tail_287_; uint8_t v___x_288_; 
v_key_286_ = lean_ctor_get(v_x_284_, 0);
v_tail_287_ = lean_ctor_get(v_x_284_, 2);
v___x_288_ = lean_expr_eqv(v_key_286_, v_a_283_);
if (v___x_288_ == 0)
{
v_x_284_ = v_tail_287_;
goto _start;
}
else
{
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg___boxed(lean_object* v_a_290_, lean_object* v_x_291_){
_start:
{
uint8_t v_res_292_; lean_object* v_r_293_; 
v_res_292_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_290_, v_x_291_);
lean_dec(v_x_291_);
lean_dec_ref(v_a_290_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object* v_m_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_buckets_296_; lean_object* v___x_297_; uint64_t v___x_298_; uint64_t v___x_299_; uint64_t v___x_300_; uint64_t v_fold_301_; uint64_t v___x_302_; uint64_t v___x_303_; uint64_t v___x_304_; size_t v___x_305_; size_t v___x_306_; size_t v___x_307_; size_t v___x_308_; size_t v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_buckets_296_ = lean_ctor_get(v_m_294_, 1);
v___x_297_ = lean_array_get_size(v_buckets_296_);
v___x_298_ = l_Lean_Expr_hash(v_a_295_);
v___x_299_ = 32ULL;
v___x_300_ = lean_uint64_shift_right(v___x_298_, v___x_299_);
v_fold_301_ = lean_uint64_xor(v___x_298_, v___x_300_);
v___x_302_ = 16ULL;
v___x_303_ = lean_uint64_shift_right(v_fold_301_, v___x_302_);
v___x_304_ = lean_uint64_xor(v_fold_301_, v___x_303_);
v___x_305_ = lean_uint64_to_usize(v___x_304_);
v___x_306_ = lean_usize_of_nat(v___x_297_);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_sub(v___x_306_, v___x_307_);
v___x_309_ = lean_usize_land(v___x_305_, v___x_308_);
v___x_310_ = lean_array_uget_borrowed(v_buckets_296_, v___x_309_);
v___x_311_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_295_, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg___boxed(lean_object* v_m_312_, lean_object* v_a_313_){
_start:
{
uint8_t v_res_314_; lean_object* v_r_315_; 
v_res_314_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_312_, v_a_313_);
lean_dec_ref(v_a_313_);
lean_dec_ref(v_m_312_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
if (lean_obj_tag(v_x_317_) == 0)
{
return v_x_316_;
}
else
{
lean_object* v_key_318_; lean_object* v_value_319_; lean_object* v_tail_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_343_; 
v_key_318_ = lean_ctor_get(v_x_317_, 0);
v_value_319_ = lean_ctor_get(v_x_317_, 1);
v_tail_320_ = lean_ctor_get(v_x_317_, 2);
v_isSharedCheck_343_ = !lean_is_exclusive(v_x_317_);
if (v_isSharedCheck_343_ == 0)
{
v___x_322_ = v_x_317_;
v_isShared_323_ = v_isSharedCheck_343_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_tail_320_);
lean_inc(v_value_319_);
lean_inc(v_key_318_);
lean_dec(v_x_317_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_343_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; uint64_t v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v_fold_328_; uint64_t v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; size_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_324_ = lean_array_get_size(v_x_316_);
v___x_325_ = l_Lean_Expr_hash(v_key_318_);
v___x_326_ = 32ULL;
v___x_327_ = lean_uint64_shift_right(v___x_325_, v___x_326_);
v_fold_328_ = lean_uint64_xor(v___x_325_, v___x_327_);
v___x_329_ = 16ULL;
v___x_330_ = lean_uint64_shift_right(v_fold_328_, v___x_329_);
v___x_331_ = lean_uint64_xor(v_fold_328_, v___x_330_);
v___x_332_ = lean_uint64_to_usize(v___x_331_);
v___x_333_ = lean_usize_of_nat(v___x_324_);
v___x_334_ = ((size_t)1ULL);
v___x_335_ = lean_usize_sub(v___x_333_, v___x_334_);
v___x_336_ = lean_usize_land(v___x_332_, v___x_335_);
v___x_337_ = lean_array_uget_borrowed(v_x_316_, v___x_336_);
lean_inc(v___x_337_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 2, v___x_337_);
v___x_339_ = v___x_322_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_key_318_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_value_319_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v___x_337_);
v___x_339_ = v_reuseFailAlloc_342_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; 
v___x_340_ = lean_array_uset(v_x_316_, v___x_336_, v___x_339_);
v_x_316_ = v___x_340_;
v_x_317_ = v_tail_320_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(lean_object* v_i_344_, lean_object* v_source_345_, lean_object* v_target_346_){
_start:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = lean_array_get_size(v_source_345_);
v___x_348_ = lean_nat_dec_lt(v_i_344_, v___x_347_);
if (v___x_348_ == 0)
{
lean_dec_ref(v_source_345_);
lean_dec(v_i_344_);
return v_target_346_;
}
else
{
lean_object* v_es_349_; lean_object* v___x_350_; lean_object* v_source_351_; lean_object* v_target_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_es_349_ = lean_array_fget(v_source_345_, v_i_344_);
v___x_350_ = lean_box(0);
v_source_351_ = lean_array_fset(v_source_345_, v_i_344_, v___x_350_);
v_target_352_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(v_target_346_, v_es_349_);
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = lean_nat_add(v_i_344_, v___x_353_);
lean_dec(v_i_344_);
v_i_344_ = v___x_354_;
v_source_345_ = v_source_351_;
v_target_346_ = v_target_352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(lean_object* v_data_356_){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_nbuckets_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_357_ = lean_array_get_size(v_data_356_);
v___x_358_ = lean_unsigned_to_nat(2u);
v_nbuckets_359_ = lean_nat_mul(v___x_357_, v___x_358_);
v___x_360_ = lean_unsigned_to_nat(0u);
v___x_361_ = lean_box(0);
v___x_362_ = lean_mk_array(v_nbuckets_359_, v___x_361_);
v___x_363_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(v___x_360_, v_data_356_, v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(lean_object* v_m_364_, lean_object* v_a_365_, lean_object* v_b_366_){
_start:
{
lean_object* v_size_367_; lean_object* v_buckets_368_; lean_object* v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v_fold_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v_bkt_382_; uint8_t v___x_383_; 
v_size_367_ = lean_ctor_get(v_m_364_, 0);
v_buckets_368_ = lean_ctor_get(v_m_364_, 1);
v___x_369_ = lean_array_get_size(v_buckets_368_);
v___x_370_ = l_Lean_Expr_hash(v_a_365_);
v___x_371_ = 32ULL;
v___x_372_ = lean_uint64_shift_right(v___x_370_, v___x_371_);
v_fold_373_ = lean_uint64_xor(v___x_370_, v___x_372_);
v___x_374_ = 16ULL;
v___x_375_ = lean_uint64_shift_right(v_fold_373_, v___x_374_);
v___x_376_ = lean_uint64_xor(v_fold_373_, v___x_375_);
v___x_377_ = lean_uint64_to_usize(v___x_376_);
v___x_378_ = lean_usize_of_nat(v___x_369_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_sub(v___x_378_, v___x_379_);
v___x_381_ = lean_usize_land(v___x_377_, v___x_380_);
v_bkt_382_ = lean_array_uget_borrowed(v_buckets_368_, v___x_381_);
v___x_383_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_365_, v_bkt_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_404_; 
lean_inc_ref(v_buckets_368_);
lean_inc(v_size_367_);
v_isSharedCheck_404_ = !lean_is_exclusive(v_m_364_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; lean_object* v_unused_406_; 
v_unused_405_ = lean_ctor_get(v_m_364_, 1);
lean_dec(v_unused_405_);
v_unused_406_ = lean_ctor_get(v_m_364_, 0);
lean_dec(v_unused_406_);
v___x_385_ = v_m_364_;
v_isShared_386_ = v_isSharedCheck_404_;
goto v_resetjp_384_;
}
else
{
lean_dec(v_m_364_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_404_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v_size_x27_388_; lean_object* v___x_389_; lean_object* v_buckets_x27_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_387_ = lean_unsigned_to_nat(1u);
v_size_x27_388_ = lean_nat_add(v_size_367_, v___x_387_);
lean_dec(v_size_367_);
lean_inc(v_bkt_382_);
v___x_389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_389_, 0, v_a_365_);
lean_ctor_set(v___x_389_, 1, v_b_366_);
lean_ctor_set(v___x_389_, 2, v_bkt_382_);
v_buckets_x27_390_ = lean_array_uset(v_buckets_368_, v___x_381_, v___x_389_);
v___x_391_ = lean_unsigned_to_nat(4u);
v___x_392_ = lean_nat_mul(v_size_x27_388_, v___x_391_);
v___x_393_ = lean_unsigned_to_nat(3u);
v___x_394_ = lean_nat_div(v___x_392_, v___x_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_array_get_size(v_buckets_x27_390_);
v___x_396_ = lean_nat_dec_le(v___x_394_, v___x_395_);
lean_dec(v___x_394_);
if (v___x_396_ == 0)
{
lean_object* v_val_397_; lean_object* v___x_399_; 
v_val_397_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(v_buckets_x27_390_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v_val_397_);
lean_ctor_set(v___x_385_, 0, v_size_x27_388_);
v___x_399_ = v___x_385_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_size_x27_388_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_val_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
else
{
lean_object* v___x_402_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v_buckets_x27_390_);
lean_ctor_set(v___x_385_, 0, v_size_x27_388_);
v___x_402_ = v___x_385_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_size_x27_388_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_buckets_x27_390_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
else
{
lean_dec(v_b_366_);
lean_dec_ref(v_a_365_);
return v_m_364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object* v_e_407_, lean_object* v_a_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v_checked_413_; uint8_t v___x_414_; 
v___x_411_ = lean_st_ref_get(v___y_409_);
lean_dec(v___x_411_);
v___x_412_ = lean_st_ref_get(v_a_408_);
v_checked_413_ = lean_ctor_get(v___x_412_, 1);
lean_inc_ref(v_checked_413_);
lean_dec(v___x_412_);
v___x_414_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_checked_413_, v_e_407_);
lean_dec_ref(v_checked_413_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_visited_417_; lean_object* v_checked_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_430_; 
v___x_415_ = lean_st_ref_get(v___y_409_);
lean_dec(v___x_415_);
v___x_416_ = lean_st_ref_take(v_a_408_);
v_visited_417_ = lean_ctor_get(v___x_416_, 0);
v_checked_418_ = lean_ctor_get(v___x_416_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_430_ == 0)
{
v___x_420_ = v___x_416_;
v_isShared_421_ = v_isSharedCheck_430_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_checked_418_);
lean_inc(v_visited_417_);
lean_dec(v___x_416_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_430_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_422_ = lean_box(0);
v___x_423_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(v_checked_418_, v_e_407_, v___x_422_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 1, v___x_423_);
v___x_425_ = v___x_420_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_visited_417_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v___x_423_);
v___x_425_ = v_reuseFailAlloc_429_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = lean_st_ref_set(v_a_408_, v___x_425_);
v___x_427_ = lean_box(v___x_414_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec_ref(v_e_407_);
v___x_431_ = lean_box(v___x_414_);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object* v_e_433_, lean_object* v_a_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_433_, v_a_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec(v_a_434_);
return v_res_437_;
}
}
static size_t _init_l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0(void){
_start:
{
size_t v___x_438_; size_t v___x_439_; size_t v___x_440_; 
v___x_438_ = ((size_t)1ULL);
v___x_439_ = ((size_t)8192ULL);
v___x_440_ = lean_usize_sub(v___x_439_, v___x_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object* v_e_441_, lean_object* v_a_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v_visited_447_; size_t v___x_448_; size_t v___x_449_; size_t v___x_450_; lean_object* v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_445_ = lean_st_ref_get(v___y_443_);
lean_dec(v___x_445_);
v___x_446_ = lean_st_ref_get(v_a_442_);
v_visited_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc_ref(v_visited_447_);
lean_dec(v___x_446_);
v___x_448_ = lean_ptr_addr(v_e_441_);
v___x_449_ = lean_usize_once(&l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0, &l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0_once, _init_l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___closed__0);
v___x_450_ = lean_usize_mod(v___x_448_, v___x_449_);
v___x_451_ = lean_array_uget(v_visited_447_, v___x_450_);
lean_dec_ref(v_visited_447_);
v___x_452_ = lean_ptr_addr(v___x_451_);
lean_dec(v___x_451_);
v___x_453_ = lean_usize_dec_eq(v___x_452_, v___x_448_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v_visited_456_; lean_object* v_checked_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_468_; 
v___x_454_ = lean_st_ref_get(v___y_443_);
lean_dec(v___x_454_);
v___x_455_ = lean_st_ref_take(v_a_442_);
v_visited_456_ = lean_ctor_get(v___x_455_, 0);
v_checked_457_ = lean_ctor_get(v___x_455_, 1);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_468_ == 0)
{
v___x_459_ = v___x_455_;
v_isShared_460_ = v_isSharedCheck_468_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_checked_457_);
lean_inc(v_visited_456_);
lean_dec(v___x_455_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_468_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_461_ = lean_array_uset(v_visited_456_, v___x_450_, v_e_441_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_461_);
v___x_463_ = v___x_459_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_checked_457_);
v___x_463_ = v_reuseFailAlloc_467_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_st_ref_set(v_a_442_, v___x_463_);
v___x_465_ = lean_box(v___x_453_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec_ref(v_e_441_);
v___x_469_ = lean_box(v___x_453_);
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_e_471_, lean_object* v_a_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_471_, v_a_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec(v_a_472_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object* v_p_476_, lean_object* v_f_477_, uint8_t v_stopWhenVisited_478_, lean_object* v_e_479_, lean_object* v_a_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v_d_495_; lean_object* v_b_496_; lean_object* v___y_497_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v___x_528_; 
lean_inc_ref(v_e_479_);
v___x_528_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_479_, v_a_480_, v___y_486_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_561_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_561_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_561_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_561_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
uint8_t v___x_533_; 
v___x_533_ = lean_unbox(v_a_529_);
lean_dec(v_a_529_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; uint8_t v___x_535_; 
lean_del_object(v___x_531_);
lean_inc_ref(v_p_476_);
lean_inc_ref(v_e_479_);
v___x_534_ = lean_apply_1(v_p_476_, v_e_479_);
v___x_535_ = lean_unbox(v___x_534_);
if (v___x_535_ == 0)
{
v___y_501_ = v_a_480_;
v___y_502_ = v___y_481_;
v___y_503_ = v___y_482_;
v___y_504_ = v___y_483_;
v___y_505_ = v___y_484_;
v___y_506_ = v___y_485_;
v___y_507_ = v___y_486_;
goto v___jp_500_;
}
else
{
lean_object* v___x_536_; 
lean_inc_ref(v_e_479_);
v___x_536_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_479_, v_a_480_, v___y_486_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; uint8_t v___x_538_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref(v___x_536_);
v___x_538_ = lean_unbox(v_a_537_);
lean_dec(v_a_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
lean_inc_ref(v_f_477_);
lean_inc(v___y_486_);
lean_inc_ref(v___y_485_);
lean_inc(v___y_484_);
lean_inc_ref(v___y_483_);
lean_inc(v___y_482_);
lean_inc_ref(v___y_481_);
lean_inc_ref(v_e_479_);
v___x_539_ = lean_apply_8(v_f_477_, v_e_479_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_547_; 
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_547_ == 0)
{
lean_object* v_unused_548_; 
v_unused_548_ = lean_ctor_get(v___x_539_, 0);
lean_dec(v_unused_548_);
v___x_541_ = v___x_539_;
v_isShared_542_ = v_isSharedCheck_547_;
goto v_resetjp_540_;
}
else
{
lean_dec(v___x_539_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_547_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
if (v_stopWhenVisited_478_ == 0)
{
lean_del_object(v___x_541_);
v___y_501_ = v_a_480_;
v___y_502_ = v___y_481_;
v___y_503_ = v___y_482_;
v___y_504_ = v___y_483_;
v___y_505_ = v___y_484_;
v___y_506_ = v___y_485_;
v___y_507_ = v___y_486_;
goto v___jp_500_;
}
else
{
lean_object* v___x_543_; lean_object* v___x_545_; 
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
v___x_543_ = lean_box(0);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_543_);
v___x_545_ = v___x_541_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
return v___x_539_;
}
}
else
{
v___y_501_ = v_a_480_;
v___y_502_ = v___y_481_;
v___y_503_ = v___y_482_;
v___y_504_ = v___y_483_;
v___y_505_ = v___y_484_;
v___y_506_ = v___y_485_;
v___y_507_ = v___y_486_;
goto v___jp_500_;
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
v_a_549_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_536_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_536_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_559_; 
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
v___x_557_ = lean_box(0);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v___x_557_);
v___x_559_ = v___x_531_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
v_a_562_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_528_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_528_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
v___jp_488_:
{
lean_object* v___x_498_; 
lean_inc_ref(v_f_477_);
lean_inc_ref(v_p_476_);
v___x_498_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_476_, v_f_477_, v_stopWhenVisited_478_, v_d_495_, v___y_497_, v___y_489_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_490_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_dec_ref(v___x_498_);
v_e_479_ = v_b_496_;
v_a_480_ = v___y_497_;
v___y_481_ = v___y_489_;
v___y_482_ = v___y_491_;
v___y_483_ = v___y_492_;
v___y_484_ = v___y_493_;
v___y_485_ = v___y_494_;
v___y_486_ = v___y_490_;
goto _start;
}
else
{
lean_dec_ref(v_b_496_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
return v___x_498_;
}
}
v___jp_500_:
{
switch(lean_obj_tag(v_e_479_))
{
case 7:
{
lean_object* v_binderType_508_; lean_object* v_body_509_; 
v_binderType_508_ = lean_ctor_get(v_e_479_, 1);
lean_inc_ref(v_binderType_508_);
v_body_509_ = lean_ctor_get(v_e_479_, 2);
lean_inc_ref(v_body_509_);
lean_dec_ref(v_e_479_);
v___y_489_ = v___y_502_;
v___y_490_ = v___y_507_;
v___y_491_ = v___y_503_;
v___y_492_ = v___y_504_;
v___y_493_ = v___y_505_;
v___y_494_ = v___y_506_;
v_d_495_ = v_binderType_508_;
v_b_496_ = v_body_509_;
v___y_497_ = v___y_501_;
goto v___jp_488_;
}
case 6:
{
lean_object* v_binderType_510_; lean_object* v_body_511_; 
v_binderType_510_ = lean_ctor_get(v_e_479_, 1);
lean_inc_ref(v_binderType_510_);
v_body_511_ = lean_ctor_get(v_e_479_, 2);
lean_inc_ref(v_body_511_);
lean_dec_ref(v_e_479_);
v___y_489_ = v___y_502_;
v___y_490_ = v___y_507_;
v___y_491_ = v___y_503_;
v___y_492_ = v___y_504_;
v___y_493_ = v___y_505_;
v___y_494_ = v___y_506_;
v_d_495_ = v_binderType_510_;
v_b_496_ = v_body_511_;
v___y_497_ = v___y_501_;
goto v___jp_488_;
}
case 8:
{
lean_object* v_type_512_; lean_object* v_value_513_; lean_object* v_body_514_; lean_object* v___x_515_; 
v_type_512_ = lean_ctor_get(v_e_479_, 1);
lean_inc_ref(v_type_512_);
v_value_513_ = lean_ctor_get(v_e_479_, 2);
lean_inc_ref(v_value_513_);
v_body_514_ = lean_ctor_get(v_e_479_, 3);
lean_inc_ref(v_body_514_);
lean_dec_ref(v_e_479_);
lean_inc_ref(v_f_477_);
lean_inc_ref(v_p_476_);
v___x_515_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_476_, v_f_477_, v_stopWhenVisited_478_, v_type_512_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; 
lean_dec_ref(v___x_515_);
lean_inc_ref(v_f_477_);
lean_inc_ref(v_p_476_);
v___x_516_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_476_, v_f_477_, v_stopWhenVisited_478_, v_value_513_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_dec_ref(v___x_516_);
v_e_479_ = v_body_514_;
v_a_480_ = v___y_501_;
v___y_481_ = v___y_502_;
v___y_482_ = v___y_503_;
v___y_483_ = v___y_504_;
v___y_484_ = v___y_505_;
v___y_485_ = v___y_506_;
v___y_486_ = v___y_507_;
goto _start;
}
else
{
lean_dec_ref(v_body_514_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
return v___x_516_;
}
}
else
{
lean_dec_ref(v_body_514_);
lean_dec_ref(v_value_513_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
return v___x_515_;
}
}
case 5:
{
lean_object* v_fn_518_; lean_object* v_arg_519_; lean_object* v___x_520_; 
v_fn_518_ = lean_ctor_get(v_e_479_, 0);
lean_inc_ref(v_fn_518_);
v_arg_519_ = lean_ctor_get(v_e_479_, 1);
lean_inc_ref(v_arg_519_);
lean_dec_ref(v_e_479_);
lean_inc_ref(v_f_477_);
lean_inc_ref(v_p_476_);
v___x_520_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_476_, v_f_477_, v_stopWhenVisited_478_, v_fn_518_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_dec_ref(v___x_520_);
v_e_479_ = v_arg_519_;
v_a_480_ = v___y_501_;
v___y_481_ = v___y_502_;
v___y_482_ = v___y_503_;
v___y_483_ = v___y_504_;
v___y_484_ = v___y_505_;
v___y_485_ = v___y_506_;
v___y_486_ = v___y_507_;
goto _start;
}
else
{
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
return v___x_520_;
}
}
case 10:
{
lean_object* v_expr_522_; 
v_expr_522_ = lean_ctor_get(v_e_479_, 1);
lean_inc_ref(v_expr_522_);
lean_dec_ref(v_e_479_);
v_e_479_ = v_expr_522_;
v_a_480_ = v___y_501_;
v___y_481_ = v___y_502_;
v___y_482_ = v___y_503_;
v___y_483_ = v___y_504_;
v___y_484_ = v___y_505_;
v___y_485_ = v___y_506_;
v___y_486_ = v___y_507_;
goto _start;
}
case 11:
{
lean_object* v_struct_524_; 
v_struct_524_ = lean_ctor_get(v_e_479_, 2);
lean_inc_ref(v_struct_524_);
lean_dec_ref(v_e_479_);
v_e_479_ = v_struct_524_;
v_a_480_ = v___y_501_;
v___y_481_ = v___y_502_;
v___y_482_ = v___y_503_;
v___y_483_ = v___y_504_;
v___y_484_ = v___y_505_;
v___y_485_ = v___y_506_;
v___y_486_ = v___y_507_;
goto _start;
}
default: 
{
lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec_ref(v_e_479_);
lean_dec_ref(v_f_477_);
lean_dec_ref(v_p_476_);
v___x_526_ = lean_box(0);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object* v_p_570_, lean_object* v_f_571_, lean_object* v_stopWhenVisited_572_, lean_object* v_e_573_, lean_object* v_a_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
uint8_t v_stopWhenVisited_boxed_582_; lean_object* v_res_583_; 
v_stopWhenVisited_boxed_582_ = lean_unbox(v_stopWhenVisited_572_);
v_res_583_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_570_, v_f_571_, v_stopWhenVisited_boxed_582_, v_e_573_, v_a_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v_a_574_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object* v_p_584_, lean_object* v_f_585_, lean_object* v_e_586_, uint8_t v_stopWhenVisited_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_595_ = lean_st_ref_get(v___y_593_);
lean_dec(v___x_595_);
v___x_596_ = l_Lean_ForEachExprWhere_initCache;
v___x_597_ = lean_st_mk_ref(v___x_596_);
v___x_598_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_584_, v_f_585_, v_stopWhenVisited_587_, v_e_586_, v___x_597_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_608_; 
v_a_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_608_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_608_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_603_ = lean_st_ref_get(v___y_593_);
lean_dec(v___x_603_);
v___x_604_ = lean_st_ref_get(v___x_597_);
lean_dec(v___x_597_);
lean_dec(v___x_604_);
if (v_isShared_602_ == 0)
{
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_599_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
lean_dec(v___x_597_);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object* v_p_609_, lean_object* v_f_610_, lean_object* v_e_611_, lean_object* v_stopWhenVisited_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v_stopWhenVisited_boxed_620_; lean_object* v_res_621_; 
v_stopWhenVisited_boxed_620_ = lean_unbox(v_stopWhenVisited_612_);
v_res_621_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v_p_609_, v_f_610_, v_e_611_, v_stopWhenVisited_boxed_620_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object* v_e_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_Compiler_LCNF_Closure_collectType___lam__0(v_e_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec_ref(v_e_622_);
return v_res_630_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectType___closed__0(void){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = lean_alloc_closure((void*)(l_Lean_Expr_isFVar___boxed), 1, 0);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object* v_type_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = l_Lean_Expr_hasFVar(v_type_632_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; 
lean_dec_ref(v_type_632_);
v___x_641_ = lean_box(0);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v___f_643_; lean_object* v___x_644_; uint8_t v___x_645_; lean_object* v___x_646_; 
v___f_643_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed), 8, 0);
v___x_644_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectType___closed__0, &l_Lean_Compiler_LCNF_Closure_collectType___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_collectType___closed__0);
v___x_645_ = 0;
v___x_646_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v___x_644_, v___f_643_, v_type_632_, v___x_645_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object* v_as_647_, size_t v_i_648_, size_t v_stop_649_, lean_object* v_b_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = lean_usize_dec_eq(v_i_648_, v_stop_649_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v_type_660_; lean_object* v___x_661_; 
v___x_659_ = lean_array_uget_borrowed(v_as_647_, v_i_648_);
v_type_660_ = lean_ctor_get(v___x_659_, 2);
lean_inc_ref(v_type_660_);
v___x_661_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_660_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; size_t v___x_663_; size_t v___x_664_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref(v___x_661_);
v___x_663_ = ((size_t)1ULL);
v___x_664_ = lean_usize_add(v_i_648_, v___x_663_);
v_i_648_ = v___x_664_;
v_b_650_ = v_a_662_;
goto _start;
}
else
{
return v___x_661_;
}
}
else
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v_b_650_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object* v_params_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_675_ = lean_unsigned_to_nat(0u);
v___x_676_ = lean_array_get_size(v_params_667_);
v___x_677_ = lean_box(0);
v___x_678_ = lean_nat_dec_lt(v___x_675_, v___x_676_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_677_);
return v___x_679_;
}
else
{
uint8_t v___x_680_; 
v___x_680_ = lean_nat_dec_le(v___x_676_, v___x_676_);
if (v___x_680_ == 0)
{
if (v___x_678_ == 0)
{
lean_object* v___x_681_; 
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_677_);
return v___x_681_;
}
else
{
size_t v___x_682_; size_t v___x_683_; lean_object* v___x_684_; 
v___x_682_ = ((size_t)0ULL);
v___x_683_ = lean_usize_of_nat(v___x_676_);
v___x_684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_667_, v___x_682_, v___x_683_, v___x_677_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
return v___x_684_;
}
}
else
{
size_t v___x_685_; size_t v___x_686_; lean_object* v___x_687_; 
v___x_685_ = ((size_t)0ULL);
v___x_686_ = lean_usize_of_nat(v___x_676_);
v___x_687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_667_, v___x_685_, v___x_686_, v___x_677_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
return v___x_687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object* v_arg_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
switch(lean_obj_tag(v_arg_688_))
{
case 0:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_box(0);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
case 1:
{
lean_object* v_fvarId_698_; lean_object* v___x_699_; 
v_fvarId_698_ = lean_ctor_get(v_arg_688_, 0);
lean_inc(v_fvarId_698_);
lean_dec_ref(v_arg_688_);
v___x_699_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_698_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
return v___x_699_;
}
default: 
{
lean_object* v_expr_700_; lean_object* v___x_701_; 
v_expr_700_ = lean_ctor_get(v_arg_688_, 0);
lean_inc_ref(v_expr_700_);
lean_dec_ref(v_arg_688_);
v___x_701_ = l_Lean_Compiler_LCNF_Closure_collectType(v_expr_700_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(lean_object* v_as_702_, size_t v_i_703_, size_t v_stop_704_, lean_object* v_b_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
uint8_t v___x_713_; 
v___x_713_ = lean_usize_dec_eq(v_i_703_, v_stop_704_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_array_uget_borrowed(v_as_702_, v_i_703_);
lean_inc(v___x_714_);
v___x_715_ = l_Lean_Compiler_LCNF_Closure_collectArg(v___x_714_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; size_t v___x_717_; size_t v___x_718_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref(v___x_715_);
v___x_717_ = ((size_t)1ULL);
v___x_718_ = lean_usize_add(v_i_703_, v___x_717_);
v_i_703_ = v___x_718_;
v_b_705_ = v_a_716_;
goto _start;
}
else
{
return v___x_715_;
}
}
else
{
lean_object* v___x_720_; 
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_b_705_);
return v___x_720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object* v_e_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
switch(lean_obj_tag(v_e_721_))
{
case 0:
{
lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
v_isSharedCheck_736_ = !lean_is_exclusive(v_e_721_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; 
v_unused_737_ = lean_ctor_get(v_e_721_, 0);
lean_dec(v_unused_737_);
v___x_730_ = v_e_721_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_dec(v_e_721_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_box(0);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_732_);
v___x_734_ = v___x_730_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
case 1:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_box(0);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
return v___x_739_;
}
case 2:
{
lean_object* v_struct_740_; lean_object* v___x_741_; 
v_struct_740_ = lean_ctor_get(v_e_721_, 2);
lean_inc(v_struct_740_);
lean_dec_ref(v_e_721_);
v___x_741_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_struct_740_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
return v___x_741_;
}
case 3:
{
lean_object* v_args_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_args_742_ = lean_ctor_get(v_e_721_, 2);
lean_inc_ref(v_args_742_);
lean_dec_ref(v_e_721_);
v___x_743_ = lean_unsigned_to_nat(0u);
v___x_744_ = lean_array_get_size(v_args_742_);
v___x_745_ = lean_box(0);
v___x_746_ = lean_nat_dec_lt(v___x_743_, v___x_744_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; 
lean_dec_ref(v_args_742_);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_745_);
return v___x_747_;
}
else
{
uint8_t v___x_748_; 
v___x_748_ = lean_nat_dec_le(v___x_744_, v___x_744_);
if (v___x_748_ == 0)
{
if (v___x_746_ == 0)
{
lean_object* v___x_749_; 
lean_dec_ref(v_args_742_);
v___x_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_745_);
return v___x_749_;
}
else
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((size_t)0ULL);
v___x_751_ = lean_usize_of_nat(v___x_744_);
v___x_752_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_742_, v___x_750_, v___x_751_, v___x_745_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec_ref(v_args_742_);
return v___x_752_;
}
}
else
{
size_t v___x_753_; size_t v___x_754_; lean_object* v___x_755_; 
v___x_753_ = ((size_t)0ULL);
v___x_754_ = lean_usize_of_nat(v___x_744_);
v___x_755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_742_, v___x_753_, v___x_754_, v___x_745_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec_ref(v_args_742_);
return v___x_755_;
}
}
}
default: 
{
lean_object* v_fvarId_756_; lean_object* v_args_757_; lean_object* v___x_758_; 
v_fvarId_756_ = lean_ctor_get(v_e_721_, 0);
lean_inc(v_fvarId_756_);
v_args_757_ = lean_ctor_get(v_e_721_, 1);
lean_inc_ref(v_args_757_);
lean_dec_ref(v_e_721_);
v___x_758_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_756_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_779_; 
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v___x_758_, 0);
lean_dec(v_unused_780_);
v___x_760_ = v___x_758_;
v_isShared_761_ = v_isSharedCheck_779_;
goto v_resetjp_759_;
}
else
{
lean_dec(v___x_758_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_779_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = lean_array_get_size(v_args_757_);
v___x_764_ = lean_box(0);
v___x_765_ = lean_nat_dec_lt(v___x_762_, v___x_763_);
if (v___x_765_ == 0)
{
lean_object* v___x_767_; 
lean_dec_ref(v_args_757_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v___x_764_);
v___x_767_ = v___x_760_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_764_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
else
{
uint8_t v___x_769_; 
v___x_769_ = lean_nat_dec_le(v___x_763_, v___x_763_);
if (v___x_769_ == 0)
{
if (v___x_765_ == 0)
{
lean_object* v___x_771_; 
lean_dec_ref(v_args_757_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v___x_764_);
v___x_771_ = v___x_760_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_764_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
else
{
size_t v___x_773_; size_t v___x_774_; lean_object* v___x_775_; 
lean_del_object(v___x_760_);
v___x_773_ = ((size_t)0ULL);
v___x_774_ = lean_usize_of_nat(v___x_763_);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_757_, v___x_773_, v___x_774_, v___x_764_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec_ref(v_args_757_);
return v___x_775_;
}
}
else
{
size_t v___x_776_; size_t v___x_777_; lean_object* v___x_778_; 
lean_del_object(v___x_760_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = lean_usize_of_nat(v___x_763_);
v___x_778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_757_, v___x_776_, v___x_777_, v___x_764_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec_ref(v_args_757_);
return v___x_778_;
}
}
}
}
else
{
lean_dec_ref(v_args_757_);
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(lean_object* v_as_781_, size_t v_i_782_, size_t v_stop_783_, lean_object* v_b_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___y_793_; uint8_t v___x_798_; 
v___x_798_ = lean_usize_dec_eq(v_i_782_, v_stop_783_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = lean_array_uget_borrowed(v_as_781_, v_i_782_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_params_800_; lean_object* v_code_801_; lean_object* v___x_802_; 
v_params_800_ = lean_ctor_get(v___x_799_, 1);
v_code_801_ = lean_ctor_get(v___x_799_, 2);
v___x_802_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_800_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v___x_803_; 
lean_dec_ref(v___x_802_);
lean_inc_ref(v_code_801_);
v___x_803_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_801_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
v___y_793_ = v___x_803_;
goto v___jp_792_;
}
else
{
v___y_793_ = v___x_802_;
goto v___jp_792_;
}
}
else
{
lean_object* v_code_804_; lean_object* v___x_805_; 
v_code_804_ = lean_ctor_get(v___x_799_, 0);
lean_inc_ref(v_code_804_);
v___x_805_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_804_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
v___y_793_ = v___x_805_;
goto v___jp_792_;
}
}
else
{
lean_object* v___x_806_; 
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v_b_784_);
return v___x_806_;
}
v___jp_792_:
{
if (lean_obj_tag(v___y_793_) == 0)
{
lean_object* v_a_794_; size_t v___x_795_; size_t v___x_796_; 
v_a_794_ = lean_ctor_get(v___y_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref(v___y_793_);
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_add(v_i_782_, v___x_795_);
v_i_782_ = v___x_796_;
v_b_784_ = v_a_794_;
goto _start;
}
else
{
return v___y_793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object* v_c_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
lean_object* v_decl_816_; lean_object* v_k_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; 
switch(lean_obj_tag(v_c_807_))
{
case 0:
{
lean_object* v_decl_826_; lean_object* v_k_827_; lean_object* v_type_828_; lean_object* v_value_829_; lean_object* v___x_830_; 
v_decl_826_ = lean_ctor_get(v_c_807_, 0);
lean_inc_ref(v_decl_826_);
v_k_827_ = lean_ctor_get(v_c_807_, 1);
lean_inc_ref(v_k_827_);
lean_dec_ref(v_c_807_);
v_type_828_ = lean_ctor_get(v_decl_826_, 2);
lean_inc_ref(v_type_828_);
v_value_829_ = lean_ctor_get(v_decl_826_, 3);
lean_inc(v_value_829_);
lean_dec_ref(v_decl_826_);
v___x_830_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_828_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; 
lean_dec_ref(v___x_830_);
v___x_831_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_829_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_dec_ref(v___x_831_);
v_c_807_ = v_k_827_;
goto _start;
}
else
{
lean_dec_ref(v_k_827_);
return v___x_831_;
}
}
else
{
lean_dec(v_value_829_);
lean_dec_ref(v_k_827_);
return v___x_830_;
}
}
case 3:
{
lean_object* v_args_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_args_833_ = lean_ctor_get(v_c_807_, 1);
lean_inc_ref(v_args_833_);
lean_dec_ref(v_c_807_);
v___x_834_ = lean_unsigned_to_nat(0u);
v___x_835_ = lean_array_get_size(v_args_833_);
v___x_836_ = lean_box(0);
v___x_837_ = lean_nat_dec_lt(v___x_834_, v___x_835_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
lean_dec_ref(v_args_833_);
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
return v___x_838_;
}
else
{
uint8_t v___x_839_; 
v___x_839_ = lean_nat_dec_le(v___x_835_, v___x_835_);
if (v___x_839_ == 0)
{
if (v___x_837_ == 0)
{
lean_object* v___x_840_; 
lean_dec_ref(v_args_833_);
v___x_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_836_);
return v___x_840_;
}
else
{
size_t v___x_841_; size_t v___x_842_; lean_object* v___x_843_; 
v___x_841_ = ((size_t)0ULL);
v___x_842_ = lean_usize_of_nat(v___x_835_);
v___x_843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_833_, v___x_841_, v___x_842_, v___x_836_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
lean_dec_ref(v_args_833_);
return v___x_843_;
}
}
else
{
size_t v___x_844_; size_t v___x_845_; lean_object* v___x_846_; 
v___x_844_ = ((size_t)0ULL);
v___x_845_ = lean_usize_of_nat(v___x_835_);
v___x_846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_args_833_, v___x_844_, v___x_845_, v___x_836_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
lean_dec_ref(v_args_833_);
return v___x_846_;
}
}
}
case 4:
{
lean_object* v_cases_847_; lean_object* v_resultType_848_; lean_object* v_discr_849_; lean_object* v_alts_850_; lean_object* v___x_851_; 
v_cases_847_ = lean_ctor_get(v_c_807_, 0);
lean_inc_ref(v_cases_847_);
lean_dec_ref(v_c_807_);
v_resultType_848_ = lean_ctor_get(v_cases_847_, 1);
lean_inc_ref(v_resultType_848_);
v_discr_849_ = lean_ctor_get(v_cases_847_, 2);
lean_inc(v_discr_849_);
v_alts_850_ = lean_ctor_get(v_cases_847_, 3);
lean_inc_ref(v_alts_850_);
lean_dec_ref(v_cases_847_);
v___x_851_ = l_Lean_Compiler_LCNF_Closure_collectType(v_resultType_848_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v___x_852_; 
lean_dec_ref(v___x_851_);
v___x_852_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_discr_849_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_873_; 
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; 
v_unused_874_ = lean_ctor_get(v___x_852_, 0);
lean_dec(v_unused_874_);
v___x_854_ = v___x_852_;
v_isShared_855_ = v_isSharedCheck_873_;
goto v_resetjp_853_;
}
else
{
lean_dec(v___x_852_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_873_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_array_get_size(v_alts_850_);
v___x_858_ = lean_box(0);
v___x_859_ = lean_nat_dec_lt(v___x_856_, v___x_857_);
if (v___x_859_ == 0)
{
lean_object* v___x_861_; 
lean_dec_ref(v_alts_850_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 0, v___x_858_);
v___x_861_ = v___x_854_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_858_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
else
{
uint8_t v___x_863_; 
v___x_863_ = lean_nat_dec_le(v___x_857_, v___x_857_);
if (v___x_863_ == 0)
{
if (v___x_859_ == 0)
{
lean_object* v___x_865_; 
lean_dec_ref(v_alts_850_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 0, v___x_858_);
v___x_865_ = v___x_854_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_858_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
else
{
size_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; 
lean_del_object(v___x_854_);
v___x_867_ = ((size_t)0ULL);
v___x_868_ = lean_usize_of_nat(v___x_857_);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(v_alts_850_, v___x_867_, v___x_868_, v___x_858_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
lean_dec_ref(v_alts_850_);
return v___x_869_;
}
}
else
{
size_t v___x_870_; size_t v___x_871_; lean_object* v___x_872_; 
lean_del_object(v___x_854_);
v___x_870_ = ((size_t)0ULL);
v___x_871_ = lean_usize_of_nat(v___x_857_);
v___x_872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(v_alts_850_, v___x_870_, v___x_871_, v___x_858_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
lean_dec_ref(v_alts_850_);
return v___x_872_;
}
}
}
}
else
{
lean_dec_ref(v_alts_850_);
return v___x_852_;
}
}
else
{
lean_dec_ref(v_alts_850_);
lean_dec(v_discr_849_);
return v___x_851_;
}
}
case 5:
{
lean_object* v_fvarId_875_; lean_object* v___x_876_; 
v_fvarId_875_ = lean_ctor_get(v_c_807_, 0);
lean_inc(v_fvarId_875_);
lean_dec_ref(v_c_807_);
v___x_876_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_875_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
return v___x_876_;
}
case 6:
{
lean_object* v_type_877_; lean_object* v___x_878_; 
v_type_877_ = lean_ctor_get(v_c_807_, 0);
lean_inc_ref(v_type_877_);
lean_dec_ref(v_c_807_);
v___x_878_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_877_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
return v___x_878_;
}
default: 
{
lean_object* v_decl_879_; lean_object* v_k_880_; 
v_decl_879_ = lean_ctor_get(v_c_807_, 0);
lean_inc_ref(v_decl_879_);
v_k_880_ = lean_ctor_get(v_c_807_, 1);
lean_inc_ref(v_k_880_);
lean_dec_ref(v_c_807_);
v_decl_816_ = v_decl_879_;
v_k_817_ = v_k_880_;
v___y_818_ = v_a_808_;
v___y_819_ = v_a_809_;
v___y_820_ = v_a_810_;
v___y_821_ = v_a_811_;
v___y_822_ = v_a_812_;
v___y_823_ = v_a_813_;
goto v___jp_815_;
}
}
v___jp_815_:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_816_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_dec_ref(v___x_824_);
v_c_807_ = v_k_817_;
v_a_808_ = v___y_818_;
v_a_809_ = v___y_819_;
v_a_810_ = v___y_820_;
v_a_811_ = v___y_821_;
v_a_812_ = v___y_822_;
v_a_813_ = v___y_823_;
goto _start;
}
else
{
lean_dec_ref(v_k_817_);
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object* v_decl_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_params_889_; lean_object* v_type_890_; lean_object* v_value_891_; lean_object* v___x_892_; 
v_params_889_ = lean_ctor_get(v_decl_881_, 2);
lean_inc_ref(v_params_889_);
v_type_890_ = lean_ctor_get(v_decl_881_, 3);
lean_inc_ref(v_type_890_);
v_value_891_ = lean_ctor_get(v_decl_881_, 4);
lean_inc_ref(v_value_891_);
lean_dec_ref(v_decl_881_);
v___x_892_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_890_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_893_; 
lean_dec_ref(v___x_892_);
v___x_893_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_889_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
lean_dec_ref(v_params_889_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v___x_894_; 
lean_dec_ref(v___x_893_);
v___x_894_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_value_891_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
return v___x_894_;
}
else
{
lean_dec_ref(v_value_891_);
return v___x_893_;
}
}
else
{
lean_dec_ref(v_value_891_);
lean_dec_ref(v_params_889_);
return v___x_892_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2(void){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_895_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1(void){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.Closure.collectFVar", 38, 38);
return v___x_896_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0(void){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.Closure", 26, 26);
return v___x_897_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_898_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2);
v___x_899_ = lean_unsigned_to_nat(10u);
v___x_900_ = lean_unsigned_to_nat(149u);
v___x_901_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1);
v___x_902_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0);
v___x_903_ = l_mkPanicMessageWithDecl(v___x_902_, v___x_901_, v___x_900_, v___x_899_, v___x_898_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object* v_fvarId_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v_visited_914_; uint8_t v___x_915_; 
v___x_912_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_912_);
v___x_913_ = lean_st_ref_get(v_a_906_);
v_visited_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc_ref(v_visited_914_);
lean_dec(v___x_913_);
v___x_915_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_visited_914_, v_fvarId_904_);
lean_dec_ref(v_visited_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
lean_inc(v_fvarId_904_);
v___x_916_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_904_, v_a_906_, v_a_910_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_1110_; 
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v___x_916_, 0);
lean_dec(v_unused_1111_);
v___x_918_ = v___x_916_;
v_isShared_919_ = v_isSharedCheck_1110_;
goto v_resetjp_917_;
}
else
{
lean_dec(v___x_916_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_1110_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v_inScope_920_; lean_object* v_abstract_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_inScope_920_ = lean_ctor_get(v_a_905_, 0);
v_abstract_921_ = lean_ctor_get(v_a_905_, 1);
lean_inc_ref(v_inScope_920_);
lean_inc(v_fvarId_904_);
v___x_922_ = lean_apply_1(v_inScope_920_, v_fvarId_904_);
v___x_923_ = lean_unbox(v___x_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; lean_object* v___x_926_; 
lean_dec(v_fvarId_904_);
v___x_924_ = lean_box(0);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v___x_924_);
v___x_926_ = v___x_918_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
else
{
uint8_t v___x_928_; lean_object* v___x_929_; 
lean_del_object(v___x_918_);
v___x_928_ = 0;
v___x_929_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_928_, v_fvarId_904_, v_a_908_, v_a_910_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_1101_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_932_ = v___x_929_;
v_isShared_933_ = v_isSharedCheck_1101_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_929_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_1101_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
if (lean_obj_tag(v_a_930_) == 1)
{
lean_object* v_val_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_989_; 
lean_dec(v_fvarId_904_);
v_val_934_ = lean_ctor_get(v_a_930_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v_a_930_);
if (v_isSharedCheck_989_ == 0)
{
v___x_936_ = v_a_930_;
v_isShared_937_ = v_isSharedCheck_989_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_val_934_);
lean_dec(v_a_930_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_989_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_fvarId_938_; lean_object* v_binderName_939_; lean_object* v_type_940_; lean_object* v___x_941_; uint8_t v___x_942_; 
v_fvarId_938_ = lean_ctor_get(v_val_934_, 0);
v_binderName_939_ = lean_ctor_get(v_val_934_, 1);
v_type_940_ = lean_ctor_get(v_val_934_, 3);
lean_inc_ref(v_abstract_921_);
lean_inc(v_fvarId_938_);
v___x_941_ = lean_apply_1(v_abstract_921_, v_fvarId_938_);
v___x_942_ = lean_unbox(v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; 
lean_del_object(v___x_932_);
lean_inc(v_val_934_);
v___x_943_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_val_934_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_968_; 
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_968_ == 0)
{
lean_object* v_unused_969_; 
v_unused_969_ = lean_ctor_get(v___x_943_, 0);
lean_dec(v_unused_969_);
v___x_945_ = v___x_943_;
v_isShared_946_ = v_isSharedCheck_968_;
goto v_resetjp_944_;
}
else
{
lean_dec(v___x_943_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_968_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v_visited_949_; lean_object* v_params_950_; lean_object* v_decls_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_967_; 
v___x_947_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_947_);
v___x_948_ = lean_st_ref_take(v_a_906_);
v_visited_949_ = lean_ctor_get(v___x_948_, 0);
v_params_950_ = lean_ctor_get(v___x_948_, 1);
v_decls_951_ = lean_ctor_get(v___x_948_, 2);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_967_ == 0)
{
v___x_953_ = v___x_948_;
v_isShared_954_ = v_isSharedCheck_967_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_decls_951_);
lean_inc(v_params_950_);
lean_inc(v_visited_949_);
lean_dec(v___x_948_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_967_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_937_ == 0)
{
v___x_956_ = v___x_936_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_val_934_);
v___x_956_ = v_reuseFailAlloc_966_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_957_ = lean_array_push(v_decls_951_, v___x_956_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 2, v___x_957_);
v___x_959_ = v___x_953_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_visited_949_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_params_950_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v___x_957_);
v___x_959_ = v_reuseFailAlloc_965_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_960_ = lean_st_ref_set(v_a_906_, v___x_959_);
v___x_961_ = lean_box(0);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_961_);
v___x_963_ = v___x_945_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_936_);
lean_dec(v_val_934_);
return v___x_943_;
}
}
else
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_visited_972_; lean_object* v_params_973_; lean_object* v_decls_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_988_; 
lean_inc_ref(v_type_940_);
lean_inc(v_binderName_939_);
lean_inc(v_fvarId_938_);
lean_del_object(v___x_936_);
lean_dec(v_val_934_);
v___x_970_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_970_);
v___x_971_ = lean_st_ref_take(v_a_906_);
v_visited_972_ = lean_ctor_get(v___x_971_, 0);
v_params_973_ = lean_ctor_get(v___x_971_, 1);
v_decls_974_ = lean_ctor_get(v___x_971_, 2);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_988_ == 0)
{
v___x_976_ = v___x_971_;
v_isShared_977_ = v_isSharedCheck_988_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_decls_974_);
lean_inc(v_params_973_);
lean_inc(v_visited_972_);
lean_dec(v___x_971_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_988_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_978_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_978_, 0, v_fvarId_938_);
lean_ctor_set(v___x_978_, 1, v_binderName_939_);
lean_ctor_set(v___x_978_, 2, v_type_940_);
lean_ctor_set_uint8(v___x_978_, sizeof(void*)*3, v___x_915_);
v___x_979_ = lean_array_push(v_params_973_, v___x_978_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 1, v___x_979_);
v___x_981_ = v___x_976_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_visited_972_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_decls_974_);
v___x_981_ = v_reuseFailAlloc_987_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_982_ = lean_st_ref_set(v_a_906_, v___x_981_);
v___x_983_ = lean_box(0);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 0, v___x_983_);
v___x_985_ = v___x_932_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
else
{
lean_object* v___x_990_; 
lean_del_object(v___x_932_);
lean_dec(v_a_930_);
v___x_990_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v___x_928_, v_fvarId_904_, v_a_908_, v_a_910_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref(v___x_990_);
if (lean_obj_tag(v_a_991_) == 1)
{
lean_object* v_val_992_; lean_object* v_type_993_; lean_object* v___x_994_; 
lean_dec(v_fvarId_904_);
v_val_992_ = lean_ctor_get(v_a_991_, 0);
lean_inc(v_val_992_);
lean_dec_ref(v_a_991_);
v_type_993_ = lean_ctor_get(v_val_992_, 2);
lean_inc_ref(v_type_993_);
v___x_994_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_993_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1016_; 
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1016_ == 0)
{
lean_object* v_unused_1017_; 
v_unused_1017_ = lean_ctor_get(v___x_994_, 0);
lean_dec(v_unused_1017_);
v___x_996_ = v___x_994_;
v_isShared_997_ = v_isSharedCheck_1016_;
goto v_resetjp_995_;
}
else
{
lean_dec(v___x_994_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1016_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_visited_1000_; lean_object* v_params_1001_; lean_object* v_decls_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1015_; 
v___x_998_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_998_);
v___x_999_ = lean_st_ref_take(v_a_906_);
v_visited_1000_ = lean_ctor_get(v___x_999_, 0);
v_params_1001_ = lean_ctor_get(v___x_999_, 1);
v_decls_1002_ = lean_ctor_get(v___x_999_, 2);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1004_ = v___x_999_;
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_decls_1002_);
lean_inc(v_params_1001_);
lean_inc(v_visited_1000_);
lean_dec(v___x_999_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1006_ = lean_array_push(v_params_1001_, v_val_992_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 1, v___x_1006_);
v___x_1008_ = v___x_1004_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_visited_1000_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_decls_1002_);
v___x_1008_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1009_ = lean_st_ref_set(v_a_906_, v___x_1008_);
v___x_1010_ = lean_box(0);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v___x_1010_);
v___x_1012_ = v___x_996_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1010_);
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
}
else
{
lean_dec(v_val_992_);
return v___x_994_;
}
}
else
{
lean_object* v___x_1018_; 
lean_dec(v_a_991_);
v___x_1018_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_928_, v_fvarId_904_, v_a_908_, v_a_910_);
lean_dec(v_fvarId_904_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref(v___x_1018_);
if (lean_obj_tag(v_a_1019_) == 1)
{
lean_object* v_val_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1082_; 
v_val_1020_ = lean_ctor_get(v_a_1019_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_a_1019_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1022_ = v_a_1019_;
v_isShared_1023_ = v_isSharedCheck_1082_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_val_1020_);
lean_dec(v_a_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1082_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v_fvarId_1024_; lean_object* v_binderName_1025_; lean_object* v_type_1026_; lean_object* v_value_1027_; lean_object* v___x_1028_; 
v_fvarId_1024_ = lean_ctor_get(v_val_1020_, 0);
v_binderName_1025_ = lean_ctor_get(v_val_1020_, 1);
v_type_1026_ = lean_ctor_get(v_val_1020_, 2);
v_value_1027_ = lean_ctor_get(v_val_1020_, 3);
lean_inc_ref(v_type_1026_);
v___x_1028_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_1026_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1080_; 
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v___x_1028_, 0);
lean_dec(v_unused_1081_);
v___x_1030_ = v___x_1028_;
v_isShared_1031_ = v_isSharedCheck_1080_;
goto v_resetjp_1029_;
}
else
{
lean_dec(v___x_1028_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1080_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
lean_inc_ref(v_abstract_921_);
lean_inc(v_fvarId_1024_);
v___x_1032_ = lean_apply_1(v_abstract_921_, v_fvarId_1024_);
v___x_1033_ = lean_unbox(v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; 
lean_del_object(v___x_1030_);
lean_inc(v_value_1027_);
v___x_1034_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_1027_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1059_; 
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v___x_1034_, 0);
lean_dec(v_unused_1060_);
v___x_1036_ = v___x_1034_;
v_isShared_1037_ = v_isSharedCheck_1059_;
goto v_resetjp_1035_;
}
else
{
lean_dec(v___x_1034_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1059_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v_visited_1040_; lean_object* v_params_1041_; lean_object* v_decls_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1058_; 
v___x_1038_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_1038_);
v___x_1039_ = lean_st_ref_take(v_a_906_);
v_visited_1040_ = lean_ctor_get(v___x_1039_, 0);
v_params_1041_ = lean_ctor_get(v___x_1039_, 1);
v_decls_1042_ = lean_ctor_get(v___x_1039_, 2);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1044_ = v___x_1039_;
v_isShared_1045_ = v_isSharedCheck_1058_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_decls_1042_);
lean_inc(v_params_1041_);
lean_inc(v_visited_1040_);
lean_dec(v___x_1039_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1058_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 0);
v___x_1047_ = v___x_1022_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_val_1020_);
v___x_1047_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lean_array_push(v_decls_1042_, v___x_1047_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 2, v___x_1048_);
v___x_1050_ = v___x_1044_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_visited_1040_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_params_1041_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1051_ = lean_st_ref_set(v_a_906_, v___x_1050_);
v___x_1052_ = lean_box(0);
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 0, v___x_1052_);
v___x_1054_ = v___x_1036_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1022_);
lean_dec(v_val_1020_);
return v___x_1034_;
}
}
else
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v_visited_1063_; lean_object* v_params_1064_; lean_object* v_decls_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1079_; 
lean_inc_ref(v_type_1026_);
lean_inc(v_binderName_1025_);
lean_inc(v_fvarId_1024_);
lean_del_object(v___x_1022_);
lean_dec(v_val_1020_);
v___x_1061_ = lean_st_ref_get(v_a_910_);
lean_dec(v___x_1061_);
v___x_1062_ = lean_st_ref_take(v_a_906_);
v_visited_1063_ = lean_ctor_get(v___x_1062_, 0);
v_params_1064_ = lean_ctor_get(v___x_1062_, 1);
v_decls_1065_ = lean_ctor_get(v___x_1062_, 2);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1067_ = v___x_1062_;
v_isShared_1068_ = v_isSharedCheck_1079_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_decls_1065_);
lean_inc(v_params_1064_);
lean_inc(v_visited_1063_);
lean_dec(v___x_1062_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1079_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1069_, 0, v_fvarId_1024_);
lean_ctor_set(v___x_1069_, 1, v_binderName_1025_);
lean_ctor_set(v___x_1069_, 2, v_type_1026_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*3, v___x_915_);
v___x_1070_ = lean_array_push(v_params_1064_, v___x_1069_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 1, v___x_1070_);
v___x_1072_ = v___x_1067_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_visited_1063_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_decls_1065_);
v___x_1072_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1073_ = lean_st_ref_set(v_a_906_, v___x_1072_);
v___x_1074_ = lean_box(0);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1074_);
v___x_1076_ = v___x_1030_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1022_);
lean_dec(v_val_1020_);
return v___x_1028_;
}
}
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec(v_a_1019_);
v___x_1083_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3);
v___x_1084_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__5(v___x_1083_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
return v___x_1084_;
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
v_a_1085_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1018_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1018_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v_fvarId_904_);
v_a_1093_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_990_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_990_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec(v_fvarId_904_);
v_a_1102_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_929_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_929_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_904_);
return v___x_916_;
}
}
else
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_dec(v_fvarId_904_);
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object* v_e_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = l_Lean_Expr_fvarId_x21(v_e_1114_);
v___x_1123_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v___x_1122_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object* v_arg_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lean_Compiler_LCNF_Closure_collectArg(v_arg_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object* v_type_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object* v_decl_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7___boxed(lean_object* v_as_1151_, lean_object* v_i_1152_, lean_object* v_stop_1153_, lean_object* v_b_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
size_t v_i_boxed_1162_; size_t v_stop_boxed_1163_; lean_object* v_res_1164_; 
v_i_boxed_1162_ = lean_unbox_usize(v_i_1152_);
lean_dec(v_i_1152_);
v_stop_boxed_1163_ = lean_unbox_usize(v_stop_1153_);
lean_dec(v_stop_1153_);
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__7(v_as_1151_, v_i_boxed_1162_, v_stop_boxed_1163_, v_b_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec_ref(v_as_1151_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object* v_as_1165_, lean_object* v_i_1166_, lean_object* v_stop_1167_, lean_object* v_b_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
size_t v_i_boxed_1176_; size_t v_stop_boxed_1177_; lean_object* v_res_1178_; 
v_i_boxed_1176_ = lean_unbox_usize(v_i_1166_);
lean_dec(v_i_1166_);
v_stop_boxed_1177_ = lean_unbox_usize(v_stop_1167_);
lean_dec(v_stop_1167_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_as_1165_, v_i_boxed_1176_, v_stop_boxed_1177_, v_b_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec_ref(v_as_1165_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object* v_params_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec_ref(v_params_1179_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11___boxed(lean_object* v_as_1188_, lean_object* v_i_1189_, lean_object* v_stop_1190_, lean_object* v_b_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
size_t v_i_boxed_1199_; size_t v_stop_boxed_1200_; lean_object* v_res_1201_; 
v_i_boxed_1199_ = lean_unbox_usize(v_i_1189_);
lean_dec(v_i_1189_);
v_stop_boxed_1200_ = lean_unbox_usize(v_stop_1190_);
lean_dec(v_stop_1190_);
v_res_1201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__11(v_as_1188_, v_i_boxed_1199_, v_stop_boxed_1200_, v_b_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec_ref(v_as_1188_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object* v_e_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_e_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object* v_c_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_c_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
lean_dec(v_a_1213_);
lean_dec_ref(v_a_1212_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object* v_fvarId_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_1220_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_, v_a_1226_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
lean_dec(v_a_1224_);
lean_dec_ref(v_a_1223_);
lean_dec(v_a_1222_);
lean_dec_ref(v_a_1221_);
return v_res_1228_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object* v_00_u03b2_1229_, lean_object* v_m_1230_, lean_object* v_a_1231_){
_start:
{
uint8_t v___x_1232_; 
v___x_1232_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___redArg(v_m_1230_, v_a_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object* v_00_u03b2_1233_, lean_object* v_m_1234_, lean_object* v_a_1235_){
_start:
{
uint8_t v_res_1236_; lean_object* v_r_1237_; 
v_res_1236_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v_00_u03b2_1233_, v_m_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_m_1234_);
v_r_1237_ = lean_box(v_res_1236_);
return v_r_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object* v_e_1238_, lean_object* v_a_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_1238_, v_a_1239_, v___y_1245_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object* v_e_1248_, lean_object* v_a_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(v_e_1248_, v_a_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v_a_1249_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object* v_e_1258_, lean_object* v_a_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_1258_, v_a_1259_, v___y_1265_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object* v_e_1268_, lean_object* v_a_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(v_e_1268_, v_a_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v_a_1269_);
return v_res_1277_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1278_, lean_object* v_m_1279_, lean_object* v_a_1280_){
_start:
{
uint8_t v___x_1281_; 
v___x_1281_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_1279_, v_a_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___boxed(lean_object* v_00_u03b2_1282_, lean_object* v_m_1283_, lean_object* v_a_1284_){
_start:
{
uint8_t v_res_1285_; lean_object* v_r_1286_; 
v_res_1285_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(v_00_u03b2_1282_, v_m_1283_, v_a_1284_);
lean_dec_ref(v_a_1284_);
lean_dec_ref(v_m_1283_);
v_r_1286_ = lean_box(v_res_1285_);
return v_r_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15(lean_object* v_00_u03b2_1287_, lean_object* v_m_1288_, lean_object* v_a_1289_, lean_object* v_b_1290_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15___redArg(v_m_1288_, v_a_1289_, v_b_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(lean_object* v_00_u03b2_1292_, lean_object* v_a_1293_, lean_object* v_x_1294_){
_start:
{
uint8_t v___x_1295_; 
v___x_1295_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___redArg(v_a_1293_, v_x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15___boxed(lean_object* v_00_u03b2_1296_, lean_object* v_a_1297_, lean_object* v_x_1298_){
_start:
{
uint8_t v_res_1299_; lean_object* v_r_1300_; 
v_res_1299_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__15(v_00_u03b2_1296_, v_a_1297_, v_x_1298_);
lean_dec(v_x_1298_);
lean_dec_ref(v_a_1297_);
v_r_1300_ = lean_box(v_res_1299_);
return v_r_1300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17(lean_object* v_00_u03b2_1301_, lean_object* v_data_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17___redArg(v_data_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18(lean_object* v_00_u03b2_1304_, lean_object* v_i_1305_, lean_object* v_source_1306_, lean_object* v_target_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18___redArg(v_i_1305_, v_source_1306_, v_target_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_1309_, lean_object* v_x_1310_, lean_object* v_x_1311_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__15_spec__17_spec__18_spec__19___redArg(v_x_1310_, v_x_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(lean_object* v_k_1313_, lean_object* v_t_1314_){
_start:
{
if (lean_obj_tag(v_t_1314_) == 0)
{
lean_object* v_k_1315_; lean_object* v_l_1316_; lean_object* v_r_1317_; uint8_t v___x_1318_; 
v_k_1315_ = lean_ctor_get(v_t_1314_, 1);
v_l_1316_ = lean_ctor_get(v_t_1314_, 3);
v_r_1317_ = lean_ctor_get(v_t_1314_, 4);
v___x_1318_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1313_, v_k_1315_);
switch(v___x_1318_)
{
case 0:
{
v_t_1314_ = v_l_1316_;
goto _start;
}
case 1:
{
uint8_t v___x_1320_; 
v___x_1320_ = 1;
return v___x_1320_;
}
default: 
{
v_t_1314_ = v_r_1317_;
goto _start;
}
}
}
else
{
uint8_t v___x_1322_; 
v___x_1322_ = 0;
return v___x_1322_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg___boxed(lean_object* v_k_1323_, lean_object* v_t_1324_){
_start:
{
uint8_t v_res_1325_; lean_object* v_r_1326_; 
v_res_1325_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v_k_1323_, v_t_1324_);
lean_dec(v_t_1324_);
lean_dec(v_k_1323_);
v_r_1326_ = lean_box(v_res_1325_);
return v_r_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(lean_object* v_a_1327_, lean_object* v_as_1328_, size_t v_i_1329_, size_t v_stop_1330_, lean_object* v_b_1331_){
_start:
{
lean_object* v___y_1333_; uint8_t v___x_1337_; 
v___x_1337_ = lean_usize_dec_eq(v_i_1329_, v_stop_1330_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1339_; uint8_t v___x_1340_; 
v___x_1338_ = lean_array_uget_borrowed(v_as_1328_, v_i_1329_);
v___x_1339_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v___x_1338_);
v___x_1340_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v___x_1339_, v_a_1327_);
lean_dec(v___x_1339_);
if (v___x_1340_ == 0)
{
lean_object* v___x_1341_; 
lean_inc(v___x_1338_);
v___x_1341_ = lean_array_push(v_b_1331_, v___x_1338_);
v___y_1333_ = v___x_1341_;
goto v___jp_1332_;
}
else
{
v___y_1333_ = v_b_1331_;
goto v___jp_1332_;
}
}
else
{
return v_b_1331_;
}
v___jp_1332_:
{
size_t v___x_1334_; size_t v___x_1335_; 
v___x_1334_ = ((size_t)1ULL);
v___x_1335_ = lean_usize_add(v_i_1329_, v___x_1334_);
v_i_1329_ = v___x_1335_;
v_b_1331_ = v___y_1333_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2___boxed(lean_object* v_a_1342_, lean_object* v_as_1343_, lean_object* v_i_1344_, lean_object* v_stop_1345_, lean_object* v_b_1346_){
_start:
{
size_t v_i_boxed_1347_; size_t v_stop_boxed_1348_; lean_object* v_res_1349_; 
v_i_boxed_1347_ = lean_unbox_usize(v_i_1344_);
lean_dec(v_i_1344_);
v_stop_boxed_1348_ = lean_unbox_usize(v_stop_1345_);
lean_dec(v_stop_1345_);
v_res_1349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(v_a_1342_, v_as_1343_, v_i_boxed_1347_, v_stop_boxed_1348_, v_b_1346_);
lean_dec_ref(v_as_1343_);
lean_dec(v_a_1342_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object* v_as_1350_, size_t v_sz_1351_, size_t v_i_1352_, lean_object* v_b_1353_){
_start:
{
uint8_t v___x_1355_; 
v___x_1355_ = lean_usize_dec_lt(v_i_1352_, v_sz_1351_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v_b_1353_);
return v___x_1356_;
}
else
{
lean_object* v_a_1357_; lean_object* v_fvarId_1358_; lean_object* v___x_1359_; size_t v___x_1360_; size_t v___x_1361_; 
v_a_1357_ = lean_array_uget_borrowed(v_as_1350_, v_i_1352_);
v_fvarId_1358_ = lean_ctor_get(v_a_1357_, 0);
lean_inc(v_fvarId_1358_);
v___x_1359_ = l_Lean_FVarIdSet_insert(v_b_1353_, v_fvarId_1358_);
v___x_1360_ = ((size_t)1ULL);
v___x_1361_ = lean_usize_add(v_i_1352_, v___x_1360_);
v_i_1352_ = v___x_1361_;
v_b_1353_ = v___x_1359_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object* v_as_1363_, lean_object* v_sz_1364_, lean_object* v_i_1365_, lean_object* v_b_1366_, lean_object* v___y_1367_){
_start:
{
size_t v_sz_boxed_1368_; size_t v_i_boxed_1369_; lean_object* v_res_1370_; 
v_sz_boxed_1368_ = lean_unbox_usize(v_sz_1364_);
lean_dec(v_sz_1364_);
v_i_boxed_1369_ = lean_unbox_usize(v_i_1365_);
lean_dec(v_i_1365_);
v_res_1370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1363_, v_sz_boxed_1368_, v_i_boxed_1369_, v_b_1366_);
lean_dec_ref(v_as_1363_);
return v_res_1370_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_unsigned_to_nat(0u);
v___x_1372_ = lean_mk_empty_array_with_capacity(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0);
v___x_1374_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1375_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
lean_ctor_set(v___x_1375_, 1, v___x_1373_);
lean_ctor_set(v___x_1375_, 2, v___x_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object* v_x_1376_, lean_object* v_inScope_1377_, lean_object* v_abstract_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1384_ = lean_st_ref_get(v_a_1382_);
lean_dec(v___x_1384_);
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0);
v___x_1387_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1);
v___x_1388_ = lean_st_mk_ref(v___x_1387_);
v___x_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1389_, 0, v_inScope_1377_);
lean_ctor_set(v___x_1389_, 1, v_abstract_1378_);
lean_inc(v_a_1382_);
lean_inc_ref(v_a_1381_);
lean_inc(v_a_1380_);
lean_inc_ref(v_a_1379_);
lean_inc(v___x_1388_);
v___x_1390_ = lean_apply_7(v_x_1376_, v___x_1389_, v___x_1388_, v_a_1379_, v_a_1380_, v_a_1381_, v_a_1382_, lean_box(0));
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v_params_1394_; lean_object* v_decls_1395_; lean_object* v___x_1396_; size_t v_sz_1397_; size_t v___x_1398_; lean_object* v___x_1399_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref(v___x_1390_);
v___x_1392_ = lean_st_ref_get(v_a_1382_);
lean_dec(v___x_1392_);
v___x_1393_ = lean_st_ref_get(v___x_1388_);
lean_dec(v___x_1388_);
v_params_1394_ = lean_ctor_get(v___x_1393_, 1);
lean_inc_ref(v_params_1394_);
v_decls_1395_ = lean_ctor_get(v___x_1393_, 2);
lean_inc_ref(v_decls_1395_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_box(1);
v_sz_1397_ = lean_array_size(v_params_1394_);
v___x_1398_ = ((size_t)0ULL);
v___x_1399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_params_1394_, v_sz_1397_, v___x_1398_, v___x_1396_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1418_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1402_ = v___x_1399_;
v_isShared_1403_ = v_isSharedCheck_1418_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1399_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1418_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___y_1405_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = lean_array_get_size(v_decls_1395_);
v___x_1412_ = lean_nat_dec_lt(v___x_1385_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_dec(v_a_1400_);
lean_dec_ref(v_decls_1395_);
v___y_1405_ = v___x_1386_;
goto v___jp_1404_;
}
else
{
uint8_t v___x_1413_; 
v___x_1413_ = lean_nat_dec_le(v___x_1411_, v___x_1411_);
if (v___x_1413_ == 0)
{
if (v___x_1412_ == 0)
{
lean_dec(v_a_1400_);
lean_dec_ref(v_decls_1395_);
v___y_1405_ = v___x_1386_;
goto v___jp_1404_;
}
else
{
size_t v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_usize_of_nat(v___x_1411_);
v___x_1415_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(v_a_1400_, v_decls_1395_, v___x_1398_, v___x_1414_, v___x_1386_);
lean_dec_ref(v_decls_1395_);
lean_dec(v_a_1400_);
v___y_1405_ = v___x_1415_;
goto v___jp_1404_;
}
}
else
{
size_t v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_usize_of_nat(v___x_1411_);
v___x_1417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__2(v_a_1400_, v_decls_1395_, v___x_1398_, v___x_1416_, v___x_1386_);
lean_dec_ref(v_decls_1395_);
lean_dec(v_a_1400_);
v___y_1405_ = v___x_1417_;
goto v___jp_1404_;
}
}
v___jp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_params_1394_);
lean_ctor_set(v___x_1406_, 1, v___y_1405_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_a_1391_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 0, v___x_1407_);
v___x_1409_ = v___x_1402_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec_ref(v_decls_1395_);
lean_dec_ref(v_params_1394_);
lean_dec(v_a_1391_);
v_a_1419_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1399_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1399_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v___x_1388_);
v_a_1427_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1390_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1390_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object* v_x_1435_, lean_object* v_inScope_1436_, lean_object* v_abstract_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1435_, v_inScope_1436_, v_abstract_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_);
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_a_1439_);
lean_dec_ref(v_a_1438_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object* v_00_u03b1_1444_, lean_object* v_x_1445_, lean_object* v_inScope_1446_, lean_object* v_abstract_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1445_, v_inScope_1446_, v_abstract_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object* v_00_u03b1_1454_, lean_object* v_x_1455_, lean_object* v_inScope_1456_, lean_object* v_abstract_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lean_Compiler_LCNF_Closure_run(v_00_u03b1_1454_, v_x_1455_, v_inScope_1456_, v_abstract_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_);
lean_dec(v_a_1461_);
lean_dec_ref(v_a_1460_);
lean_dec(v_a_1459_);
lean_dec_ref(v_a_1458_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object* v_as_1464_, size_t v_sz_1465_, size_t v_i_1466_, lean_object* v_b_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1464_, v_sz_1465_, v_i_1466_, v_b_1467_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object* v_as_1474_, lean_object* v_sz_1475_, lean_object* v_i_1476_, lean_object* v_b_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
size_t v_sz_boxed_1483_; size_t v_i_boxed_1484_; lean_object* v_res_1485_; 
v_sz_boxed_1483_ = lean_unbox_usize(v_sz_1475_);
lean_dec(v_sz_1475_);
v_i_boxed_1484_ = lean_unbox_usize(v_i_1476_);
lean_dec(v_i_1476_);
v_res_1485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(v_as_1474_, v_sz_boxed_1483_, v_i_boxed_1484_, v_b_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec_ref(v_as_1474_);
return v_res_1485_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object* v_00_u03b2_1486_, lean_object* v_k_1487_, lean_object* v_t_1488_){
_start:
{
uint8_t v___x_1489_; 
v___x_1489_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___redArg(v_k_1487_, v_t_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object* v_00_u03b2_1490_, lean_object* v_k_1491_, lean_object* v_t_1492_){
_start:
{
uint8_t v_res_1493_; lean_object* v_r_1494_; 
v_res_1493_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_00_u03b2_1490_, v_k_1491_, v_t_1492_);
lean_dec(v_t_1492_);
lean_dec(v_k_1491_);
v_r_1494_ = lean_box(v_res_1493_);
return v_r_1494_;
}
}
lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
