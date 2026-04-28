// Lean compiler output
// Module: Lean.Meta.AbstractMVars
// Imports: public import Lean.Meta.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getLevelDepth(lean_object*, lean_object*);
uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParamsArray(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_AbstractMVarsResult_numMVars(lean_object*);
lean_object* l_Lean_Meta_lambdaMetaTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_mkFreshId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_mkFreshFVarId(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0;
static lean_once_cell_t l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0;
static lean_once_cell_t l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_abstractMVars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractMVars___closed__0;
static lean_once_cell_t l_Lean_Meta_abstractMVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractMVars___closed__1;
static lean_once_cell_t l_Lean_Meta_abstractMVars___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractMVars___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_openAbstractMVarsResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0(lean_object* v_____do__lift_1_, lean_object* v___y_2_){
_start:
{
lean_object* v_mctx_3_; lean_object* v___x_4_; 
v_mctx_3_ = lean_ctor_get(v_____do__lift_1_, 2);
lean_inc_ref(v_mctx_3_);
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_mctx_3_);
lean_ctor_set(v___x_4_, 1, v___y_2_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0___boxed(lean_object* v_____do__lift_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0(v_____do__lift_5_, v___y_6_);
lean_dec_ref(v_____do__lift_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__1(lean_object* v_f_8_, lean_object* v___y_9_){
_start:
{
lean_object* v_ngen_10_; lean_object* v_lctx_11_; lean_object* v_mctx_12_; lean_object* v_nextParamIdx_13_; lean_object* v_paramNames_14_; lean_object* v_fvars_15_; lean_object* v_mvars_16_; lean_object* v_lmap_17_; lean_object* v_emap_18_; uint8_t v_abstractLevels_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_29_; 
v_ngen_10_ = lean_ctor_get(v___y_9_, 0);
v_lctx_11_ = lean_ctor_get(v___y_9_, 1);
v_mctx_12_ = lean_ctor_get(v___y_9_, 2);
v_nextParamIdx_13_ = lean_ctor_get(v___y_9_, 3);
v_paramNames_14_ = lean_ctor_get(v___y_9_, 4);
v_fvars_15_ = lean_ctor_get(v___y_9_, 5);
v_mvars_16_ = lean_ctor_get(v___y_9_, 6);
v_lmap_17_ = lean_ctor_get(v___y_9_, 7);
v_emap_18_ = lean_ctor_get(v___y_9_, 8);
v_abstractLevels_19_ = lean_ctor_get_uint8(v___y_9_, sizeof(void*)*9);
v_isSharedCheck_29_ = !lean_is_exclusive(v___y_9_);
if (v_isSharedCheck_29_ == 0)
{
v___x_21_ = v___y_9_;
v_isShared_22_ = v_isSharedCheck_29_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_emap_18_);
lean_inc(v_lmap_17_);
lean_inc(v_mvars_16_);
lean_inc(v_fvars_15_);
lean_inc(v_paramNames_14_);
lean_inc(v_nextParamIdx_13_);
lean_inc(v_mctx_12_);
lean_inc(v_lctx_11_);
lean_inc(v_ngen_10_);
lean_dec(v___y_9_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_29_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_23_ = lean_box(0);
v___x_24_ = lean_apply_1(v_f_8_, v_mctx_12_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 2, v___x_24_);
v___x_26_ = v___x_21_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_ngen_10_);
lean_ctor_set(v_reuseFailAlloc_28_, 1, v_lctx_11_);
lean_ctor_set(v_reuseFailAlloc_28_, 2, v___x_24_);
lean_ctor_set(v_reuseFailAlloc_28_, 3, v_nextParamIdx_13_);
lean_ctor_set(v_reuseFailAlloc_28_, 4, v_paramNames_14_);
lean_ctor_set(v_reuseFailAlloc_28_, 5, v_fvars_15_);
lean_ctor_set(v_reuseFailAlloc_28_, 6, v_mvars_16_);
lean_ctor_set(v_reuseFailAlloc_28_, 7, v_lmap_17_);
lean_ctor_set(v_reuseFailAlloc_28_, 8, v_emap_18_);
lean_ctor_set_uint8(v_reuseFailAlloc_28_, sizeof(void*)*9, v_abstractLevels_19_);
v___x_26_ = v_reuseFailAlloc_28_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_23_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
return v___x_27_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0(void){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__0___boxed), 2, 0);
return v___f_30_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1(void){
_start:
{
lean_object* v___f_31_; 
v___f_31_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractMVars_instMonadMCtxM___lam__1), 2, 0);
return v___f_31_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2(void){
_start:
{
lean_object* v___f_32_; 
v___f_32_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_32_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3(void){
_start:
{
lean_object* v___f_33_; 
v___f_33_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_33_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4(void){
_start:
{
lean_object* v___f_34_; 
v___f_34_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_34_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5(void){
_start:
{
lean_object* v___f_35_; 
v___f_35_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_35_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6(void){
_start:
{
lean_object* v___f_36_; 
v___f_36_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_36_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7(void){
_start:
{
lean_object* v___f_37_; 
v___f_37_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_37_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8(void){
_start:
{
lean_object* v___f_38_; 
v___f_38_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_38_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9(void){
_start:
{
lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___x_41_; 
v___f_39_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__3);
v___f_40_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__2);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v___f_40_);
lean_ctor_set(v___x_41_, 1, v___f_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10(void){
_start:
{
lean_object* v___f_42_; lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_42_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__7);
v___f_43_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__6);
v___f_44_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__5);
v___f_45_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__4);
v___x_46_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__9);
v___x_47_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___f_45_);
lean_ctor_set(v___x_47_, 2, v___f_44_);
lean_ctor_set(v___x_47_, 3, v___f_43_);
lean_ctor_set(v___x_47_, 4, v___f_42_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11(void){
_start:
{
lean_object* v___f_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___f_48_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__8);
v___x_49_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__10);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___f_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11);
v___x_52_ = lean_alloc_closure((void*)(l_StateT_get), 4, 3);
lean_closure_set(v___x_52_, 0, lean_box(0));
lean_closure_set(v___x_52_, 1, lean_box(0));
lean_closure_set(v___x_52_, 2, v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13(void){
_start:
{
lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___f_53_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__0);
v___x_54_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__12);
v___x_55_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__11);
v___x_56_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 7);
lean_closure_set(v___x_56_, 0, lean_box(0));
lean_closure_set(v___x_56_, 1, lean_box(0));
lean_closure_set(v___x_56_, 2, v___x_55_);
lean_closure_set(v___x_56_, 3, lean_box(0));
lean_closure_set(v___x_56_, 4, lean_box(0));
lean_closure_set(v___x_56_, 5, v___x_54_);
lean_closure_set(v___x_56_, 6, v___f_53_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14(void){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___f_57_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__1);
v___x_58_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__13);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___f_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14, &l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14_once, _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM___closed__14);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_mkFreshId(lean_object* v_a_61_){
_start:
{
lean_object* v_ngen_62_; lean_object* v_lctx_63_; lean_object* v_mctx_64_; lean_object* v_nextParamIdx_65_; lean_object* v_paramNames_66_; lean_object* v_fvars_67_; lean_object* v_mvars_68_; lean_object* v_lmap_69_; lean_object* v_emap_70_; uint8_t v_abstractLevels_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_91_; 
v_ngen_62_ = lean_ctor_get(v_a_61_, 0);
v_lctx_63_ = lean_ctor_get(v_a_61_, 1);
v_mctx_64_ = lean_ctor_get(v_a_61_, 2);
v_nextParamIdx_65_ = lean_ctor_get(v_a_61_, 3);
v_paramNames_66_ = lean_ctor_get(v_a_61_, 4);
v_fvars_67_ = lean_ctor_get(v_a_61_, 5);
v_mvars_68_ = lean_ctor_get(v_a_61_, 6);
v_lmap_69_ = lean_ctor_get(v_a_61_, 7);
v_emap_70_ = lean_ctor_get(v_a_61_, 8);
v_abstractLevels_71_ = lean_ctor_get_uint8(v_a_61_, sizeof(void*)*9);
v_isSharedCheck_91_ = !lean_is_exclusive(v_a_61_);
if (v_isSharedCheck_91_ == 0)
{
v___x_73_ = v_a_61_;
v_isShared_74_ = v_isSharedCheck_91_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_emap_70_);
lean_inc(v_lmap_69_);
lean_inc(v_mvars_68_);
lean_inc(v_fvars_67_);
lean_inc(v_paramNames_66_);
lean_inc(v_nextParamIdx_65_);
lean_inc(v_mctx_64_);
lean_inc(v_lctx_63_);
lean_inc(v_ngen_62_);
lean_dec(v_a_61_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_91_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v_namePrefix_75_; lean_object* v_idx_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_90_; 
v_namePrefix_75_ = lean_ctor_get(v_ngen_62_, 0);
v_idx_76_ = lean_ctor_get(v_ngen_62_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_ngen_62_);
if (v_isSharedCheck_90_ == 0)
{
v___x_78_ = v_ngen_62_;
v_isShared_79_ = v_isSharedCheck_90_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_idx_76_);
lean_inc(v_namePrefix_75_);
lean_dec(v_ngen_62_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_90_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
lean_inc(v_idx_76_);
lean_inc(v_namePrefix_75_);
v___x_80_ = l_Lean_Name_num___override(v_namePrefix_75_, v_idx_76_);
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_nat_add(v_idx_76_, v___x_81_);
lean_dec(v_idx_76_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 1, v___x_82_);
v___x_84_ = v___x_78_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_namePrefix_75_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v___x_82_);
v___x_84_ = v_reuseFailAlloc_89_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_86_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_84_);
v___x_86_ = v___x_73_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_lctx_63_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v_mctx_64_);
lean_ctor_set(v_reuseFailAlloc_88_, 3, v_nextParamIdx_65_);
lean_ctor_set(v_reuseFailAlloc_88_, 4, v_paramNames_66_);
lean_ctor_set(v_reuseFailAlloc_88_, 5, v_fvars_67_);
lean_ctor_set(v_reuseFailAlloc_88_, 6, v_mvars_68_);
lean_ctor_set(v_reuseFailAlloc_88_, 7, v_lmap_69_);
lean_ctor_set(v_reuseFailAlloc_88_, 8, v_emap_70_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*9, v_abstractLevels_71_);
v___x_86_ = v_reuseFailAlloc_88_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_80_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
return v___x_87_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_mkFreshFVarId(lean_object* v_a_92_){
_start:
{
lean_object* v___x_93_; lean_object* v_fst_94_; lean_object* v_snd_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v___x_93_ = l_Lean_Meta_AbstractMVars_mkFreshId(v_a_92_);
v_fst_94_ = lean_ctor_get(v___x_93_, 0);
v_snd_95_ = lean_ctor_get(v___x_93_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_93_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_snd_95_);
lean_inc(v_fst_94_);
lean_dec(v___x_93_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_fst_94_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_snd_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg(lean_object* v_a_103_, lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_box(0);
return v___x_105_;
}
else
{
lean_object* v_key_106_; lean_object* v_value_107_; lean_object* v_tail_108_; uint8_t v___x_109_; 
v_key_106_ = lean_ctor_get(v_x_104_, 0);
v_value_107_ = lean_ctor_get(v_x_104_, 1);
v_tail_108_ = lean_ctor_get(v_x_104_, 2);
v___x_109_ = l_Lean_instBEqLevelMVarId_beq(v_key_106_, v_a_103_);
if (v___x_109_ == 0)
{
v_x_104_ = v_tail_108_;
goto _start;
}
else
{
lean_object* v___x_111_; 
lean_inc(v_value_107_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v_value_107_);
return v___x_111_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg___boxed(lean_object* v_a_112_, lean_object* v_x_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg(v_a_112_, v_x_113_);
lean_dec(v_x_113_);
lean_dec(v_a_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg(lean_object* v_m_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_buckets_117_; lean_object* v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; uint64_t v_fold_122_; uint64_t v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_buckets_117_ = lean_ctor_get(v_m_115_, 1);
v___x_118_ = lean_array_get_size(v_buckets_117_);
v___x_119_ = l_Lean_instHashableLevelMVarId_hash(v_a_116_);
v___x_120_ = 32ULL;
v___x_121_ = lean_uint64_shift_right(v___x_119_, v___x_120_);
v_fold_122_ = lean_uint64_xor(v___x_119_, v___x_121_);
v___x_123_ = 16ULL;
v___x_124_ = lean_uint64_shift_right(v_fold_122_, v___x_123_);
v___x_125_ = lean_uint64_xor(v_fold_122_, v___x_124_);
v___x_126_ = lean_uint64_to_usize(v___x_125_);
v___x_127_ = lean_usize_of_nat(v___x_118_);
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_sub(v___x_127_, v___x_128_);
v___x_130_ = lean_usize_land(v___x_126_, v___x_129_);
v___x_131_ = lean_array_uget_borrowed(v_buckets_117_, v___x_130_);
v___x_132_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg(v_a_116_, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg___boxed(lean_object* v_m_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg(v_m_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_m_133_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4___redArg(lean_object* v_a_136_, lean_object* v_b_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
lean_dec(v_b_137_);
lean_dec(v_a_136_);
return v_x_138_;
}
else
{
lean_object* v_key_139_; lean_object* v_value_140_; lean_object* v_tail_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_153_; 
v_key_139_ = lean_ctor_get(v_x_138_, 0);
v_value_140_ = lean_ctor_get(v_x_138_, 1);
v_tail_141_ = lean_ctor_get(v_x_138_, 2);
v_isSharedCheck_153_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_153_ == 0)
{
v___x_143_ = v_x_138_;
v_isShared_144_ = v_isSharedCheck_153_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_tail_141_);
lean_inc(v_value_140_);
lean_inc(v_key_139_);
lean_dec(v_x_138_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_153_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
uint8_t v___x_145_; 
v___x_145_ = l_Lean_instBEqLevelMVarId_beq(v_key_139_, v_a_136_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_146_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4___redArg(v_a_136_, v_b_137_, v_tail_141_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 2, v___x_146_);
v___x_148_ = v___x_143_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_key_139_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_value_140_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v___x_146_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
else
{
lean_object* v___x_151_; 
lean_dec(v_value_140_);
lean_dec(v_key_139_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 1, v_b_137_);
lean_ctor_set(v___x_143_, 0, v_a_136_);
v___x_151_ = v___x_143_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_136_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_b_137_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_tail_141_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
return v_x_154_;
}
else
{
lean_object* v_key_156_; lean_object* v_value_157_; lean_object* v_tail_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_181_; 
v_key_156_ = lean_ctor_get(v_x_155_, 0);
v_value_157_ = lean_ctor_get(v_x_155_, 1);
v_tail_158_ = lean_ctor_get(v_x_155_, 2);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_181_ == 0)
{
v___x_160_ = v_x_155_;
v_isShared_161_ = v_isSharedCheck_181_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_tail_158_);
lean_inc(v_value_157_);
lean_inc(v_key_156_);
lean_dec(v_x_155_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_181_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v___x_165_; uint64_t v_fold_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; size_t v___x_170_; size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_162_ = lean_array_get_size(v_x_154_);
v___x_163_ = l_Lean_instHashableLevelMVarId_hash(v_key_156_);
v___x_164_ = 32ULL;
v___x_165_ = lean_uint64_shift_right(v___x_163_, v___x_164_);
v_fold_166_ = lean_uint64_xor(v___x_163_, v___x_165_);
v___x_167_ = 16ULL;
v___x_168_ = lean_uint64_shift_right(v_fold_166_, v___x_167_);
v___x_169_ = lean_uint64_xor(v_fold_166_, v___x_168_);
v___x_170_ = lean_uint64_to_usize(v___x_169_);
v___x_171_ = lean_usize_of_nat(v___x_162_);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_sub(v___x_171_, v___x_172_);
v___x_174_ = lean_usize_land(v___x_170_, v___x_173_);
v___x_175_ = lean_array_uget_borrowed(v_x_154_, v___x_174_);
lean_inc(v___x_175_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 2, v___x_175_);
v___x_177_ = v___x_160_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_key_156_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v_value_157_);
lean_ctor_set(v_reuseFailAlloc_180_, 2, v___x_175_);
v___x_177_ = v_reuseFailAlloc_180_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; 
v___x_178_ = lean_array_uset(v_x_154_, v___x_174_, v___x_177_);
v_x_154_ = v___x_178_;
v_x_155_ = v_tail_158_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4___redArg(lean_object* v_i_182_, lean_object* v_source_183_, lean_object* v_target_184_){
_start:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_array_get_size(v_source_183_);
v___x_186_ = lean_nat_dec_lt(v_i_182_, v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v_source_183_);
lean_dec(v_i_182_);
return v_target_184_;
}
else
{
lean_object* v_es_187_; lean_object* v___x_188_; lean_object* v_source_189_; lean_object* v_target_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v_es_187_ = lean_array_fget(v_source_183_, v_i_182_);
v___x_188_ = lean_box(0);
v_source_189_ = lean_array_fset(v_source_183_, v_i_182_, v___x_188_);
v_target_190_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5___redArg(v_target_184_, v_es_187_);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_nat_add(v_i_182_, v___x_191_);
lean_dec(v_i_182_);
v_i_182_ = v___x_192_;
v_source_183_ = v_source_189_;
v_target_184_ = v_target_190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3___redArg(lean_object* v_data_194_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_nbuckets_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_195_ = lean_array_get_size(v_data_194_);
v___x_196_ = lean_unsigned_to_nat(2u);
v_nbuckets_197_ = lean_nat_mul(v___x_195_, v___x_196_);
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = lean_box(0);
v___x_200_ = lean_mk_array(v_nbuckets_197_, v___x_199_);
v___x_201_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4___redArg(v___x_198_, v_data_194_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg(lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
else
{
lean_object* v_key_205_; lean_object* v_tail_206_; uint8_t v___x_207_; 
v_key_205_ = lean_ctor_get(v_x_203_, 0);
v_tail_206_ = lean_ctor_get(v_x_203_, 2);
v___x_207_ = l_Lean_instBEqLevelMVarId_beq(v_key_205_, v_a_202_);
if (v___x_207_ == 0)
{
v_x_203_ = v_tail_206_;
goto _start;
}
else
{
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg___boxed(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg(v_a_209_, v_x_210_);
lean_dec(v_x_210_);
lean_dec(v_a_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1___redArg(lean_object* v_m_213_, lean_object* v_a_214_, lean_object* v_b_215_){
_start:
{
lean_object* v_size_216_; lean_object* v_buckets_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_260_; 
v_size_216_ = lean_ctor_get(v_m_213_, 0);
v_buckets_217_ = lean_ctor_get(v_m_213_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_m_213_);
if (v_isSharedCheck_260_ == 0)
{
v___x_219_ = v_m_213_;
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_buckets_217_);
lean_inc(v_size_216_);
lean_dec(v_m_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_260_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; uint64_t v___x_222_; uint64_t v___x_223_; uint64_t v___x_224_; uint64_t v_fold_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v_bkt_234_; uint8_t v___x_235_; 
v___x_221_ = lean_array_get_size(v_buckets_217_);
v___x_222_ = l_Lean_instHashableLevelMVarId_hash(v_a_214_);
v___x_223_ = 32ULL;
v___x_224_ = lean_uint64_shift_right(v___x_222_, v___x_223_);
v_fold_225_ = lean_uint64_xor(v___x_222_, v___x_224_);
v___x_226_ = 16ULL;
v___x_227_ = lean_uint64_shift_right(v_fold_225_, v___x_226_);
v___x_228_ = lean_uint64_xor(v_fold_225_, v___x_227_);
v___x_229_ = lean_uint64_to_usize(v___x_228_);
v___x_230_ = lean_usize_of_nat(v___x_221_);
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_sub(v___x_230_, v___x_231_);
v___x_233_ = lean_usize_land(v___x_229_, v___x_232_);
v_bkt_234_ = lean_array_uget_borrowed(v_buckets_217_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg(v_a_214_, v_bkt_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v_size_x27_237_; lean_object* v___x_238_; lean_object* v_buckets_x27_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_236_ = lean_unsigned_to_nat(1u);
v_size_x27_237_ = lean_nat_add(v_size_216_, v___x_236_);
lean_dec(v_size_216_);
lean_inc(v_bkt_234_);
v___x_238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_238_, 0, v_a_214_);
lean_ctor_set(v___x_238_, 1, v_b_215_);
lean_ctor_set(v___x_238_, 2, v_bkt_234_);
v_buckets_x27_239_ = lean_array_uset(v_buckets_217_, v___x_233_, v___x_238_);
v___x_240_ = lean_unsigned_to_nat(4u);
v___x_241_ = lean_nat_mul(v_size_x27_237_, v___x_240_);
v___x_242_ = lean_unsigned_to_nat(3u);
v___x_243_ = lean_nat_div(v___x_241_, v___x_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_array_get_size(v_buckets_x27_239_);
v___x_245_ = lean_nat_dec_le(v___x_243_, v___x_244_);
lean_dec(v___x_243_);
if (v___x_245_ == 0)
{
lean_object* v_val_246_; lean_object* v___x_248_; 
v_val_246_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3___redArg(v_buckets_x27_239_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_val_246_);
lean_ctor_set(v___x_219_, 0, v_size_x27_237_);
v___x_248_ = v___x_219_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_size_x27_237_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_val_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
else
{
lean_object* v___x_251_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_buckets_x27_239_);
lean_ctor_set(v___x_219_, 0, v_size_x27_237_);
v___x_251_ = v___x_219_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_size_x27_237_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_buckets_x27_239_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v___x_253_; lean_object* v_buckets_x27_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
lean_inc(v_bkt_234_);
v___x_253_ = lean_box(0);
v_buckets_x27_254_ = lean_array_uset(v_buckets_217_, v___x_233_, v___x_253_);
v___x_255_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4___redArg(v_a_214_, v_b_215_, v_bkt_234_);
v___x_256_ = lean_array_uset(v_buckets_x27_254_, v___x_233_, v___x_255_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_256_);
v___x_258_ = v___x_219_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_size_216_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0(void){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = lean_mk_string_unchecked("_abstMVar", 9, 9);
return v___x_261_;
}
}
static lean_object* _init_l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_obj_once(&l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0, &l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0_once, _init_l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__0);
v___x_263_ = l_Lean_Name_mkStr1(v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(lean_object* v_u_264_, lean_object* v_a_265_){
_start:
{
uint8_t v_abstractLevels_266_; 
v_abstractLevels_266_ = lean_ctor_get_uint8(v_a_265_, sizeof(void*)*9);
if (v_abstractLevels_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v_u_264_);
lean_ctor_set(v___x_267_, 1, v_a_265_);
return v___x_267_;
}
else
{
lean_object* v_ngen_268_; lean_object* v_lctx_269_; lean_object* v_mctx_270_; lean_object* v_nextParamIdx_271_; lean_object* v_paramNames_272_; lean_object* v_fvars_273_; lean_object* v_mvars_274_; lean_object* v_lmap_275_; lean_object* v_emap_276_; uint8_t v___x_277_; 
v_ngen_268_ = lean_ctor_get(v_a_265_, 0);
v_lctx_269_ = lean_ctor_get(v_a_265_, 1);
v_mctx_270_ = lean_ctor_get(v_a_265_, 2);
v_nextParamIdx_271_ = lean_ctor_get(v_a_265_, 3);
v_paramNames_272_ = lean_ctor_get(v_a_265_, 4);
v_fvars_273_ = lean_ctor_get(v_a_265_, 5);
v_mvars_274_ = lean_ctor_get(v_a_265_, 6);
v_lmap_275_ = lean_ctor_get(v_a_265_, 7);
v_emap_276_ = lean_ctor_get(v_a_265_, 8);
v___x_277_ = l_Lean_Level_hasMVar(v_u_264_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v_u_264_);
lean_ctor_set(v___x_278_, 1, v_a_265_);
return v___x_278_;
}
else
{
switch(lean_obj_tag(v_u_264_))
{
case 1:
{
lean_object* v_a_279_; lean_object* v___x_280_; lean_object* v_fst_281_; lean_object* v_snd_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_296_; 
v_a_279_ = lean_ctor_get(v_u_264_, 0);
lean_inc(v_a_279_);
v___x_280_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_a_279_, v_a_265_);
v_fst_281_ = lean_ctor_get(v___x_280_, 0);
v_snd_282_ = lean_ctor_get(v___x_280_, 1);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_284_ = v___x_280_;
v_isShared_285_ = v_isSharedCheck_296_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_snd_282_);
lean_inc(v_fst_281_);
lean_dec(v___x_280_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_296_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
size_t v___x_286_; size_t v___x_287_; uint8_t v___x_288_; 
v___x_286_ = lean_ptr_addr(v_a_279_);
v___x_287_ = lean_ptr_addr(v_fst_281_);
v___x_288_ = lean_usize_dec_eq(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_291_; 
lean_dec_ref(v_u_264_);
v___x_289_ = l_Lean_Level_succ___override(v_fst_281_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v___x_289_);
v___x_291_ = v___x_284_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_snd_282_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
else
{
lean_object* v___x_294_; 
lean_dec(v_fst_281_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v_u_264_);
v___x_294_ = v___x_284_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_u_264_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_snd_282_);
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
case 2:
{
lean_object* v_a_297_; lean_object* v_a_298_; lean_object* v___x_299_; lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v___x_302_; lean_object* v_fst_303_; lean_object* v_snd_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_324_; 
v_a_297_ = lean_ctor_get(v_u_264_, 0);
v_a_298_ = lean_ctor_get(v_u_264_, 1);
lean_inc(v_a_297_);
v___x_299_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_a_297_, v_a_265_);
v_fst_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_fst_300_);
v_snd_301_ = lean_ctor_get(v___x_299_, 1);
lean_inc(v_snd_301_);
lean_dec_ref(v___x_299_);
lean_inc(v_a_298_);
v___x_302_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_a_298_, v_snd_301_);
v_fst_303_ = lean_ctor_get(v___x_302_, 0);
v_snd_304_ = lean_ctor_get(v___x_302_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_324_ == 0)
{
v___x_306_ = v___x_302_;
v_isShared_307_ = v_isSharedCheck_324_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_snd_304_);
lean_inc(v_fst_303_);
lean_dec(v___x_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_324_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
uint8_t v___y_309_; size_t v___x_318_; size_t v___x_319_; uint8_t v___x_320_; 
v___x_318_ = lean_ptr_addr(v_a_297_);
v___x_319_ = lean_ptr_addr(v_fst_300_);
v___x_320_ = lean_usize_dec_eq(v___x_318_, v___x_319_);
if (v___x_320_ == 0)
{
v___y_309_ = v___x_320_;
goto v___jp_308_;
}
else
{
size_t v___x_321_; size_t v___x_322_; uint8_t v___x_323_; 
v___x_321_ = lean_ptr_addr(v_a_298_);
v___x_322_ = lean_ptr_addr(v_fst_303_);
v___x_323_ = lean_usize_dec_eq(v___x_321_, v___x_322_);
v___y_309_ = v___x_323_;
goto v___jp_308_;
}
v___jp_308_:
{
if (v___y_309_ == 0)
{
lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec_ref(v_u_264_);
v___x_310_ = l_Lean_mkLevelMax_x27(v_fst_300_, v_fst_303_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_310_);
v___x_312_ = v___x_306_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_snd_304_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
else
{
lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_314_ = l_Lean_simpLevelMax_x27(v_fst_300_, v_fst_303_, v_u_264_);
lean_dec_ref(v_u_264_);
lean_dec(v_fst_303_);
lean_dec(v_fst_300_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_314_);
v___x_316_ = v___x_306_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_snd_304_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
case 3:
{
lean_object* v_a_325_; lean_object* v_a_326_; lean_object* v___x_327_; lean_object* v_fst_328_; lean_object* v_snd_329_; lean_object* v___x_330_; lean_object* v_fst_331_; lean_object* v_snd_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_352_; 
v_a_325_ = lean_ctor_get(v_u_264_, 0);
v_a_326_ = lean_ctor_get(v_u_264_, 1);
lean_inc(v_a_325_);
v___x_327_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_a_325_, v_a_265_);
v_fst_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_fst_328_);
v_snd_329_ = lean_ctor_get(v___x_327_, 1);
lean_inc(v_snd_329_);
lean_dec_ref(v___x_327_);
lean_inc(v_a_326_);
v___x_330_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_a_326_, v_snd_329_);
v_fst_331_ = lean_ctor_get(v___x_330_, 0);
v_snd_332_ = lean_ctor_get(v___x_330_, 1);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_352_ == 0)
{
v___x_334_ = v___x_330_;
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_snd_332_);
lean_inc(v_fst_331_);
lean_dec(v___x_330_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
uint8_t v___y_337_; size_t v___x_346_; size_t v___x_347_; uint8_t v___x_348_; 
v___x_346_ = lean_ptr_addr(v_a_325_);
v___x_347_ = lean_ptr_addr(v_fst_328_);
v___x_348_ = lean_usize_dec_eq(v___x_346_, v___x_347_);
if (v___x_348_ == 0)
{
v___y_337_ = v___x_348_;
goto v___jp_336_;
}
else
{
size_t v___x_349_; size_t v___x_350_; uint8_t v___x_351_; 
v___x_349_ = lean_ptr_addr(v_a_326_);
v___x_350_ = lean_ptr_addr(v_fst_331_);
v___x_351_ = lean_usize_dec_eq(v___x_349_, v___x_350_);
v___y_337_ = v___x_351_;
goto v___jp_336_;
}
v___jp_336_:
{
if (v___y_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_340_; 
lean_dec_ref(v_u_264_);
v___x_338_ = l_Lean_mkLevelIMax_x27(v_fst_328_, v_fst_331_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_338_);
v___x_340_ = v___x_334_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_snd_332_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = l_Lean_simpLevelIMax_x27(v_fst_328_, v_fst_331_, v_u_264_);
lean_dec_ref(v_u_264_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_342_);
v___x_344_ = v___x_334_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_snd_332_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
case 5:
{
lean_object* v_a_353_; lean_object* v_depth_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_a_353_ = lean_ctor_get(v_u_264_, 0);
v_depth_354_ = lean_ctor_get(v_mctx_270_, 0);
lean_inc(v_a_353_);
v___x_355_ = l_Lean_MetavarContext_getLevelDepth(v_mctx_270_, v_a_353_);
v___x_356_ = lean_nat_dec_eq(v___x_355_, v_depth_354_);
lean_dec(v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_u_264_);
lean_ctor_set(v___x_357_, 1, v_a_265_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; 
lean_inc(v_a_353_);
lean_dec_ref(v_u_264_);
v___x_358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg(v_lmap_275_, v_a_353_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_373_; 
lean_inc_ref(v_emap_276_);
lean_inc_ref(v_lmap_275_);
lean_inc_ref(v_mvars_274_);
lean_inc_ref(v_fvars_273_);
lean_inc_ref(v_paramNames_272_);
lean_inc(v_nextParamIdx_271_);
lean_inc_ref(v_mctx_270_);
lean_inc_ref(v_lctx_269_);
lean_inc_ref(v_ngen_268_);
v_isSharedCheck_373_ = !lean_is_exclusive(v_a_265_);
if (v_isSharedCheck_373_ == 0)
{
lean_object* v_unused_374_; lean_object* v_unused_375_; lean_object* v_unused_376_; lean_object* v_unused_377_; lean_object* v_unused_378_; lean_object* v_unused_379_; lean_object* v_unused_380_; lean_object* v_unused_381_; lean_object* v_unused_382_; 
v_unused_374_ = lean_ctor_get(v_a_265_, 8);
lean_dec(v_unused_374_);
v_unused_375_ = lean_ctor_get(v_a_265_, 7);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_a_265_, 6);
lean_dec(v_unused_376_);
v_unused_377_ = lean_ctor_get(v_a_265_, 5);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_a_265_, 4);
lean_dec(v_unused_378_);
v_unused_379_ = lean_ctor_get(v_a_265_, 3);
lean_dec(v_unused_379_);
v_unused_380_ = lean_ctor_get(v_a_265_, 2);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_a_265_, 1);
lean_dec(v_unused_381_);
v_unused_382_ = lean_ctor_get(v_a_265_, 0);
lean_dec(v_unused_382_);
v___x_360_ = v_a_265_;
v_isShared_361_ = v_isSharedCheck_373_;
goto v_resetjp_359_;
}
else
{
lean_dec(v_a_265_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_373_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_362_ = lean_obj_once(&l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1, &l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1_once, _init_l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars___closed__1);
lean_inc(v_nextParamIdx_271_);
v___x_363_ = l_Lean_Name_num___override(v___x_362_, v_nextParamIdx_271_);
lean_inc(v___x_363_);
v___x_364_ = l_Lean_mkLevelParam(v___x_363_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_add(v_nextParamIdx_271_, v___x_365_);
lean_dec(v_nextParamIdx_271_);
v___x_367_ = lean_array_push(v_paramNames_272_, v___x_363_);
lean_inc(v___x_364_);
v___x_368_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1___redArg(v_lmap_275_, v_a_353_, v___x_364_);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 7, v___x_368_);
lean_ctor_set(v___x_360_, 4, v___x_367_);
lean_ctor_set(v___x_360_, 3, v___x_366_);
v___x_370_ = v___x_360_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_ngen_268_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_lctx_269_);
lean_ctor_set(v_reuseFailAlloc_372_, 2, v_mctx_270_);
lean_ctor_set(v_reuseFailAlloc_372_, 3, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_372_, 4, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_372_, 5, v_fvars_273_);
lean_ctor_set(v_reuseFailAlloc_372_, 6, v_mvars_274_);
lean_ctor_set(v_reuseFailAlloc_372_, 7, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_372_, 8, v_emap_276_);
lean_ctor_set_uint8(v_reuseFailAlloc_372_, sizeof(void*)*9, v_abstractLevels_266_);
v___x_370_ = v_reuseFailAlloc_372_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_364_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
return v___x_371_;
}
}
}
else
{
lean_object* v_val_383_; lean_object* v___x_384_; 
lean_dec(v_a_353_);
v_val_383_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_val_383_);
lean_dec_ref(v___x_358_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v_val_383_);
lean_ctor_set(v___x_384_, 1, v_a_265_);
return v___x_384_;
}
}
}
default: 
{
lean_object* v___x_385_; 
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v_u_264_);
lean_ctor_set(v___x_385_, 1, v_a_265_);
return v___x_385_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0(lean_object* v_00_u03b2_386_, lean_object* v_m_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___redArg(v_m_387_, v_a_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0___boxed(lean_object* v_00_u03b2_390_, lean_object* v_m_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0(v_00_u03b2_390_, v_m_391_, v_a_392_);
lean_dec(v_a_392_);
lean_dec_ref(v_m_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1(lean_object* v_00_u03b2_394_, lean_object* v_m_395_, lean_object* v_a_396_, lean_object* v_b_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1___redArg(v_m_395_, v_a_396_, v_b_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0(lean_object* v_00_u03b2_399_, lean_object* v_a_400_, lean_object* v_x_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___redArg(v_a_400_, v_x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0___boxed(lean_object* v_00_u03b2_403_, lean_object* v_a_404_, lean_object* v_x_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__0_spec__0(v_00_u03b2_403_, v_a_404_, v_x_405_);
lean_dec(v_x_405_);
lean_dec(v_a_404_);
return v_res_406_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2(lean_object* v_00_u03b2_407_, lean_object* v_a_408_, lean_object* v_x_409_){
_start:
{
uint8_t v___x_410_; 
v___x_410_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___redArg(v_a_408_, v_x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2___boxed(lean_object* v_00_u03b2_411_, lean_object* v_a_412_, lean_object* v_x_413_){
_start:
{
uint8_t v_res_414_; lean_object* v_r_415_; 
v_res_414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__2(v_00_u03b2_411_, v_a_412_, v_x_413_);
lean_dec(v_x_413_);
lean_dec(v_a_412_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3(lean_object* v_00_u03b2_416_, lean_object* v_data_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3___redArg(v_data_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4(lean_object* v_00_u03b2_419_, lean_object* v_a_420_, lean_object* v_b_421_, lean_object* v_x_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__4___redArg(v_a_420_, v_b_421_, v_x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_424_, lean_object* v_i_425_, lean_object* v_source_426_, lean_object* v_target_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4___redArg(v_i_425_, v_source_426_, v_target_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars_spec__1_spec__3_spec__4_spec__5___redArg(v_x_430_, v_x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__1(lean_object* v_e_433_, lean_object* v___y_434_){
_start:
{
uint8_t v___x_435_; 
v___x_435_ = l_Lean_Expr_hasMVar(v_e_433_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; 
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v_e_433_);
lean_ctor_set(v___x_436_, 1, v___y_434_);
return v___x_436_;
}
else
{
lean_object* v_ngen_437_; lean_object* v_lctx_438_; lean_object* v_mctx_439_; lean_object* v_nextParamIdx_440_; lean_object* v_paramNames_441_; lean_object* v_fvars_442_; lean_object* v_mvars_443_; lean_object* v_lmap_444_; lean_object* v_emap_445_; uint8_t v_abstractLevels_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_463_; 
v_ngen_437_ = lean_ctor_get(v___y_434_, 0);
v_lctx_438_ = lean_ctor_get(v___y_434_, 1);
v_mctx_439_ = lean_ctor_get(v___y_434_, 2);
v_nextParamIdx_440_ = lean_ctor_get(v___y_434_, 3);
v_paramNames_441_ = lean_ctor_get(v___y_434_, 4);
v_fvars_442_ = lean_ctor_get(v___y_434_, 5);
v_mvars_443_ = lean_ctor_get(v___y_434_, 6);
v_lmap_444_ = lean_ctor_get(v___y_434_, 7);
v_emap_445_ = lean_ctor_get(v___y_434_, 8);
v_abstractLevels_446_ = lean_ctor_get_uint8(v___y_434_, sizeof(void*)*9);
v_isSharedCheck_463_ = !lean_is_exclusive(v___y_434_);
if (v_isSharedCheck_463_ == 0)
{
v___x_448_ = v___y_434_;
v_isShared_449_ = v_isSharedCheck_463_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_emap_445_);
lean_inc(v_lmap_444_);
lean_inc(v_mvars_443_);
lean_inc(v_fvars_442_);
lean_inc(v_paramNames_441_);
lean_inc(v_nextParamIdx_440_);
lean_inc(v_mctx_439_);
lean_inc(v_lctx_438_);
lean_inc(v_ngen_437_);
lean_dec(v___y_434_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_463_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v_fst_451_; lean_object* v_snd_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_462_; 
v___x_450_ = l_Lean_instantiateMVarsCore(v_mctx_439_, v_e_433_);
v_fst_451_ = lean_ctor_get(v___x_450_, 0);
v_snd_452_ = lean_ctor_get(v___x_450_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_462_ == 0)
{
v___x_454_ = v___x_450_;
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_snd_452_);
lean_inc(v_fst_451_);
lean_dec(v___x_450_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 2, v_snd_452_);
v___x_457_ = v___x_448_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_ngen_437_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_lctx_438_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_snd_452_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_nextParamIdx_440_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_paramNames_441_);
lean_ctor_set(v_reuseFailAlloc_461_, 5, v_fvars_442_);
lean_ctor_set(v_reuseFailAlloc_461_, 6, v_mvars_443_);
lean_ctor_set(v_reuseFailAlloc_461_, 7, v_lmap_444_);
lean_ctor_set(v_reuseFailAlloc_461_, 8, v_emap_445_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*9, v_abstractLevels_446_);
v___x_457_ = v_reuseFailAlloc_461_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_459_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_457_);
v___x_459_ = v___x_454_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_fst_451_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg(lean_object* v_a_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_object* v___x_466_; 
v___x_466_ = lean_box(0);
return v___x_466_;
}
else
{
lean_object* v_key_467_; lean_object* v_value_468_; lean_object* v_tail_469_; uint8_t v___x_470_; 
v_key_467_ = lean_ctor_get(v_x_465_, 0);
v_value_468_ = lean_ctor_get(v_x_465_, 1);
v_tail_469_ = lean_ctor_get(v_x_465_, 2);
v___x_470_ = l_Lean_instBEqMVarId_beq(v_key_467_, v_a_464_);
if (v___x_470_ == 0)
{
v_x_465_ = v_tail_469_;
goto _start;
}
else
{
lean_object* v___x_472_; 
lean_inc(v_value_468_);
v___x_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_472_, 0, v_value_468_);
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg___boxed(lean_object* v_a_473_, lean_object* v_x_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg(v_a_473_, v_x_474_);
lean_dec(v_x_474_);
lean_dec(v_a_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg(lean_object* v_m_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_buckets_478_; lean_object* v___x_479_; uint64_t v___x_480_; uint64_t v___x_481_; uint64_t v___x_482_; uint64_t v_fold_483_; uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_buckets_478_ = lean_ctor_get(v_m_476_, 1);
v___x_479_ = lean_array_get_size(v_buckets_478_);
v___x_480_ = l_Lean_instHashableMVarId_hash(v_a_477_);
v___x_481_ = 32ULL;
v___x_482_ = lean_uint64_shift_right(v___x_480_, v___x_481_);
v_fold_483_ = lean_uint64_xor(v___x_480_, v___x_482_);
v___x_484_ = 16ULL;
v___x_485_ = lean_uint64_shift_right(v_fold_483_, v___x_484_);
v___x_486_ = lean_uint64_xor(v_fold_483_, v___x_485_);
v___x_487_ = lean_uint64_to_usize(v___x_486_);
v___x_488_ = lean_usize_of_nat(v___x_479_);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_sub(v___x_488_, v___x_489_);
v___x_491_ = lean_usize_land(v___x_487_, v___x_490_);
v___x_492_ = lean_array_uget_borrowed(v_buckets_478_, v___x_491_);
v___x_493_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg(v_a_477_, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg___boxed(lean_object* v_m_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg(v_m_494_, v_a_495_);
lean_dec(v_a_495_);
lean_dec_ref(v_m_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__3(lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v___y_499_){
_start:
{
if (lean_obj_tag(v_x_497_) == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = l_List_reverse___redArg(v_x_498_);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v___y_499_);
return v___x_501_;
}
else
{
lean_object* v_head_502_; lean_object* v_tail_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_514_; 
v_head_502_ = lean_ctor_get(v_x_497_, 0);
v_tail_503_ = lean_ctor_get(v_x_497_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v_x_497_);
if (v_isSharedCheck_514_ == 0)
{
v___x_505_ = v_x_497_;
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_tail_503_);
lean_inc(v_head_502_);
lean_dec(v_x_497_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v___x_511_; 
v___x_507_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_head_502_, v___y_499_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_fst_508_);
v_snd_509_ = lean_ctor_get(v___x_507_, 1);
lean_inc(v_snd_509_);
lean_dec_ref(v___x_507_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 1, v_x_498_);
lean_ctor_set(v___x_505_, 0, v_fst_508_);
v___x_511_ = v___x_505_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_fst_508_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_x_498_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v_x_497_ = v_tail_503_;
v_x_498_ = v___x_511_;
v___y_499_ = v_snd_509_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5___redArg(lean_object* v_a_515_, lean_object* v_b_516_, lean_object* v_x_517_){
_start:
{
if (lean_obj_tag(v_x_517_) == 0)
{
lean_dec(v_b_516_);
lean_dec(v_a_515_);
return v_x_517_;
}
else
{
lean_object* v_key_518_; lean_object* v_value_519_; lean_object* v_tail_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_532_; 
v_key_518_ = lean_ctor_get(v_x_517_, 0);
v_value_519_ = lean_ctor_get(v_x_517_, 1);
v_tail_520_ = lean_ctor_get(v_x_517_, 2);
v_isSharedCheck_532_ = !lean_is_exclusive(v_x_517_);
if (v_isSharedCheck_532_ == 0)
{
v___x_522_ = v_x_517_;
v_isShared_523_ = v_isSharedCheck_532_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_tail_520_);
lean_inc(v_value_519_);
lean_inc(v_key_518_);
lean_dec(v_x_517_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_532_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
uint8_t v___x_524_; 
v___x_524_ = l_Lean_instBEqMVarId_beq(v_key_518_, v_a_515_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_525_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5___redArg(v_a_515_, v_b_516_, v_tail_520_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 2, v___x_525_);
v___x_527_ = v___x_522_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_key_518_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_value_519_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
else
{
lean_object* v___x_530_; 
lean_dec(v_value_519_);
lean_dec(v_key_518_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 1, v_b_516_);
lean_ctor_set(v___x_522_, 0, v_a_515_);
v___x_530_ = v___x_522_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_515_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_b_516_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v_tail_520_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg(lean_object* v_a_533_, lean_object* v_x_534_){
_start:
{
if (lean_obj_tag(v_x_534_) == 0)
{
uint8_t v___x_535_; 
v___x_535_ = 0;
return v___x_535_;
}
else
{
lean_object* v_key_536_; lean_object* v_tail_537_; uint8_t v___x_538_; 
v_key_536_ = lean_ctor_get(v_x_534_, 0);
v_tail_537_ = lean_ctor_get(v_x_534_, 2);
v___x_538_ = l_Lean_instBEqMVarId_beq(v_key_536_, v_a_533_);
if (v___x_538_ == 0)
{
v_x_534_ = v_tail_537_;
goto _start;
}
else
{
return v___x_538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg___boxed(lean_object* v_a_540_, lean_object* v_x_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg(v_a_540_, v_x_541_);
lean_dec(v_x_541_);
lean_dec(v_a_540_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7___redArg(lean_object* v_x_544_, lean_object* v_x_545_){
_start:
{
if (lean_obj_tag(v_x_545_) == 0)
{
return v_x_544_;
}
else
{
lean_object* v_key_546_; lean_object* v_value_547_; lean_object* v_tail_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_571_; 
v_key_546_ = lean_ctor_get(v_x_545_, 0);
v_value_547_ = lean_ctor_get(v_x_545_, 1);
v_tail_548_ = lean_ctor_get(v_x_545_, 2);
v_isSharedCheck_571_ = !lean_is_exclusive(v_x_545_);
if (v_isSharedCheck_571_ == 0)
{
v___x_550_ = v_x_545_;
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_tail_548_);
lean_inc(v_value_547_);
lean_inc(v_key_546_);
lean_dec(v_x_545_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; uint64_t v___x_553_; uint64_t v___x_554_; uint64_t v___x_555_; uint64_t v_fold_556_; uint64_t v___x_557_; uint64_t v___x_558_; uint64_t v___x_559_; size_t v___x_560_; size_t v___x_561_; size_t v___x_562_; size_t v___x_563_; size_t v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_552_ = lean_array_get_size(v_x_544_);
v___x_553_ = l_Lean_instHashableMVarId_hash(v_key_546_);
v___x_554_ = 32ULL;
v___x_555_ = lean_uint64_shift_right(v___x_553_, v___x_554_);
v_fold_556_ = lean_uint64_xor(v___x_553_, v___x_555_);
v___x_557_ = 16ULL;
v___x_558_ = lean_uint64_shift_right(v_fold_556_, v___x_557_);
v___x_559_ = lean_uint64_xor(v_fold_556_, v___x_558_);
v___x_560_ = lean_uint64_to_usize(v___x_559_);
v___x_561_ = lean_usize_of_nat(v___x_552_);
v___x_562_ = ((size_t)1ULL);
v___x_563_ = lean_usize_sub(v___x_561_, v___x_562_);
v___x_564_ = lean_usize_land(v___x_560_, v___x_563_);
v___x_565_ = lean_array_uget_borrowed(v_x_544_, v___x_564_);
lean_inc(v___x_565_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 2, v___x_565_);
v___x_567_ = v___x_550_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_key_546_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_value_547_);
lean_ctor_set(v_reuseFailAlloc_570_, 2, v___x_565_);
v___x_567_ = v_reuseFailAlloc_570_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; 
v___x_568_ = lean_array_uset(v_x_544_, v___x_564_, v___x_567_);
v_x_544_ = v___x_568_;
v_x_545_ = v_tail_548_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5___redArg(lean_object* v_i_572_, lean_object* v_source_573_, lean_object* v_target_574_){
_start:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_array_get_size(v_source_573_);
v___x_576_ = lean_nat_dec_lt(v_i_572_, v___x_575_);
if (v___x_576_ == 0)
{
lean_dec_ref(v_source_573_);
lean_dec(v_i_572_);
return v_target_574_;
}
else
{
lean_object* v_es_577_; lean_object* v___x_578_; lean_object* v_source_579_; lean_object* v_target_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_es_577_ = lean_array_fget(v_source_573_, v_i_572_);
v___x_578_ = lean_box(0);
v_source_579_ = lean_array_fset(v_source_573_, v_i_572_, v___x_578_);
v_target_580_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7___redArg(v_target_574_, v_es_577_);
v___x_581_ = lean_unsigned_to_nat(1u);
v___x_582_ = lean_nat_add(v_i_572_, v___x_581_);
lean_dec(v_i_572_);
v_i_572_ = v___x_582_;
v_source_573_ = v_source_579_;
v_target_574_ = v_target_580_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4___redArg(lean_object* v_data_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_nbuckets_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_585_ = lean_array_get_size(v_data_584_);
v___x_586_ = lean_unsigned_to_nat(2u);
v_nbuckets_587_ = lean_nat_mul(v___x_585_, v___x_586_);
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = lean_box(0);
v___x_590_ = lean_mk_array(v_nbuckets_587_, v___x_589_);
v___x_591_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5___redArg(v___x_588_, v_data_584_, v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2___redArg(lean_object* v_m_592_, lean_object* v_a_593_, lean_object* v_b_594_){
_start:
{
lean_object* v_size_595_; lean_object* v_buckets_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_639_; 
v_size_595_ = lean_ctor_get(v_m_592_, 0);
v_buckets_596_ = lean_ctor_get(v_m_592_, 1);
v_isSharedCheck_639_ = !lean_is_exclusive(v_m_592_);
if (v_isSharedCheck_639_ == 0)
{
v___x_598_ = v_m_592_;
v_isShared_599_ = v_isSharedCheck_639_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_buckets_596_);
lean_inc(v_size_595_);
lean_dec(v_m_592_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_639_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; uint64_t v___x_601_; uint64_t v___x_602_; uint64_t v___x_603_; uint64_t v_fold_604_; uint64_t v___x_605_; uint64_t v___x_606_; uint64_t v___x_607_; size_t v___x_608_; size_t v___x_609_; size_t v___x_610_; size_t v___x_611_; size_t v___x_612_; lean_object* v_bkt_613_; uint8_t v___x_614_; 
v___x_600_ = lean_array_get_size(v_buckets_596_);
v___x_601_ = l_Lean_instHashableMVarId_hash(v_a_593_);
v___x_602_ = 32ULL;
v___x_603_ = lean_uint64_shift_right(v___x_601_, v___x_602_);
v_fold_604_ = lean_uint64_xor(v___x_601_, v___x_603_);
v___x_605_ = 16ULL;
v___x_606_ = lean_uint64_shift_right(v_fold_604_, v___x_605_);
v___x_607_ = lean_uint64_xor(v_fold_604_, v___x_606_);
v___x_608_ = lean_uint64_to_usize(v___x_607_);
v___x_609_ = lean_usize_of_nat(v___x_600_);
v___x_610_ = ((size_t)1ULL);
v___x_611_ = lean_usize_sub(v___x_609_, v___x_610_);
v___x_612_ = lean_usize_land(v___x_608_, v___x_611_);
v_bkt_613_ = lean_array_uget_borrowed(v_buckets_596_, v___x_612_);
v___x_614_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg(v_a_593_, v_bkt_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v_size_x27_616_; lean_object* v___x_617_; lean_object* v_buckets_x27_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_615_ = lean_unsigned_to_nat(1u);
v_size_x27_616_ = lean_nat_add(v_size_595_, v___x_615_);
lean_dec(v_size_595_);
lean_inc(v_bkt_613_);
v___x_617_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_617_, 0, v_a_593_);
lean_ctor_set(v___x_617_, 1, v_b_594_);
lean_ctor_set(v___x_617_, 2, v_bkt_613_);
v_buckets_x27_618_ = lean_array_uset(v_buckets_596_, v___x_612_, v___x_617_);
v___x_619_ = lean_unsigned_to_nat(4u);
v___x_620_ = lean_nat_mul(v_size_x27_616_, v___x_619_);
v___x_621_ = lean_unsigned_to_nat(3u);
v___x_622_ = lean_nat_div(v___x_620_, v___x_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_array_get_size(v_buckets_x27_618_);
v___x_624_ = lean_nat_dec_le(v___x_622_, v___x_623_);
lean_dec(v___x_622_);
if (v___x_624_ == 0)
{
lean_object* v_val_625_; lean_object* v___x_627_; 
v_val_625_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4___redArg(v_buckets_x27_618_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_val_625_);
lean_ctor_set(v___x_598_, 0, v_size_x27_616_);
v___x_627_ = v___x_598_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_size_x27_616_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_val_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
else
{
lean_object* v___x_630_; 
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_buckets_x27_618_);
lean_ctor_set(v___x_598_, 0, v_size_x27_616_);
v___x_630_ = v___x_598_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_size_x27_616_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_buckets_x27_618_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
else
{
lean_object* v___x_632_; lean_object* v_buckets_x27_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
lean_inc(v_bkt_613_);
v___x_632_ = lean_box(0);
v_buckets_x27_633_ = lean_array_uset(v_buckets_596_, v___x_612_, v___x_632_);
v___x_634_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5___redArg(v_a_593_, v_b_594_, v_bkt_613_);
v___x_635_ = lean_array_uset(v_buckets_x27_633_, v___x_612_, v___x_634_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v___x_635_);
v___x_637_ = v___x_598_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_size_595_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0(void){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_640_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0, &l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0_once, _init_l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__0);
v___x_642_ = l_Lean_Name_mkStr1(v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars(lean_object* v_e_643_, lean_object* v_a_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = l_Lean_Expr_hasMVar(v_e_643_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v_e_643_);
lean_ctor_set(v___x_646_, 1, v_a_644_);
return v___x_646_;
}
else
{
switch(lean_obj_tag(v_e_643_))
{
case 2:
{
lean_object* v_mvarId_647_; lean_object* v_mctx_648_; lean_object* v_emap_649_; lean_object* v___x_650_; lean_object* v_userName_651_; lean_object* v_type_652_; lean_object* v_depth_653_; lean_object* v_depth_654_; uint8_t v___x_655_; 
v_mvarId_647_ = lean_ctor_get(v_e_643_, 0);
v_mctx_648_ = lean_ctor_get(v_a_644_, 2);
v_emap_649_ = lean_ctor_get(v_a_644_, 8);
lean_inc(v_mvarId_647_);
v___x_650_ = l_Lean_MetavarContext_getDecl(v_mctx_648_, v_mvarId_647_);
v_userName_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_userName_651_);
v_type_652_ = lean_ctor_get(v___x_650_, 2);
lean_inc_ref(v_type_652_);
v_depth_653_ = lean_ctor_get(v___x_650_, 3);
lean_inc(v_depth_653_);
lean_dec_ref(v___x_650_);
v_depth_654_ = lean_ctor_get(v_mctx_648_, 0);
v___x_655_ = lean_nat_dec_eq(v_depth_653_, v_depth_654_);
lean_dec(v_depth_653_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
lean_dec_ref(v_type_652_);
lean_dec(v_userName_651_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_e_643_);
lean_ctor_set(v___x_656_, 1, v_a_644_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; 
lean_inc(v_mvarId_647_);
v___x_657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg(v_emap_649_, v_mvarId_647_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v___x_658_; lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_661_; lean_object* v_fst_662_; lean_object* v_snd_663_; lean_object* v___x_664_; lean_object* v_fst_665_; lean_object* v_snd_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_704_; 
v___x_658_ = l_Lean_instantiateMVars___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__1(v_type_652_, v_a_644_);
v_fst_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_fst_659_);
v_snd_660_ = lean_ctor_get(v___x_658_, 1);
lean_inc(v_snd_660_);
lean_dec_ref(v___x_658_);
v___x_661_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_fst_659_, v_snd_660_);
v_fst_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_fst_662_);
v_snd_663_ = lean_ctor_get(v___x_661_, 1);
lean_inc(v_snd_663_);
lean_dec_ref(v___x_661_);
v___x_664_ = l_Lean_Meta_AbstractMVars_mkFreshFVarId(v_snd_663_);
v_fst_665_ = lean_ctor_get(v___x_664_, 0);
v_snd_666_ = lean_ctor_get(v___x_664_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_704_ == 0)
{
v___x_668_ = v___x_664_;
v_isShared_669_ = v_isSharedCheck_704_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_snd_666_);
lean_inc(v_fst_665_);
lean_dec(v___x_664_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_704_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v_userName_672_; uint8_t v___x_699_; 
lean_inc(v_fst_665_);
v___x_670_ = l_Lean_mkFVar(v_fst_665_);
v___x_699_ = l_Lean_Name_isAnonymous(v_userName_651_);
if (v___x_699_ == 0)
{
v_userName_672_ = v_userName_651_;
goto v___jp_671_;
}
else
{
lean_object* v_fvars_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec(v_userName_651_);
v_fvars_700_ = lean_ctor_get(v_snd_666_, 5);
v___x_701_ = lean_obj_once(&l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1, &l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1_once, _init_l_Lean_Meta_AbstractMVars_abstractExprMVars___closed__1);
v___x_702_ = lean_array_get_size(v_fvars_700_);
v___x_703_ = lean_name_append_index_after(v___x_701_, v___x_702_);
v_userName_672_ = v___x_703_;
goto v___jp_671_;
}
v___jp_671_:
{
lean_object* v_ngen_673_; lean_object* v_lctx_674_; lean_object* v_mctx_675_; lean_object* v_nextParamIdx_676_; lean_object* v_paramNames_677_; lean_object* v_fvars_678_; lean_object* v_mvars_679_; lean_object* v_lmap_680_; lean_object* v_emap_681_; uint8_t v_abstractLevels_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_698_; 
v_ngen_673_ = lean_ctor_get(v_snd_666_, 0);
v_lctx_674_ = lean_ctor_get(v_snd_666_, 1);
v_mctx_675_ = lean_ctor_get(v_snd_666_, 2);
v_nextParamIdx_676_ = lean_ctor_get(v_snd_666_, 3);
v_paramNames_677_ = lean_ctor_get(v_snd_666_, 4);
v_fvars_678_ = lean_ctor_get(v_snd_666_, 5);
v_mvars_679_ = lean_ctor_get(v_snd_666_, 6);
v_lmap_680_ = lean_ctor_get(v_snd_666_, 7);
v_emap_681_ = lean_ctor_get(v_snd_666_, 8);
v_abstractLevels_682_ = lean_ctor_get_uint8(v_snd_666_, sizeof(void*)*9);
v_isSharedCheck_698_ = !lean_is_exclusive(v_snd_666_);
if (v_isSharedCheck_698_ == 0)
{
v___x_684_ = v_snd_666_;
v_isShared_685_ = v_isSharedCheck_698_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_emap_681_);
lean_inc(v_lmap_680_);
lean_inc(v_mvars_679_);
lean_inc(v_fvars_678_);
lean_inc(v_paramNames_677_);
lean_inc(v_nextParamIdx_676_);
lean_inc(v_mctx_675_);
lean_inc(v_lctx_674_);
lean_inc(v_ngen_673_);
lean_dec(v_snd_666_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_698_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
uint8_t v___x_686_; uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_686_ = 0;
v___x_687_ = 0;
v___x_688_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_674_, v_fst_665_, v_userName_672_, v_fst_662_, v___x_686_, v___x_687_);
lean_inc_ref_n(v___x_670_, 2);
v___x_689_ = lean_array_push(v_fvars_678_, v___x_670_);
v___x_690_ = lean_array_push(v_mvars_679_, v_e_643_);
v___x_691_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2___redArg(v_emap_681_, v_mvarId_647_, v___x_670_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 8, v___x_691_);
lean_ctor_set(v___x_684_, 6, v___x_690_);
lean_ctor_set(v___x_684_, 5, v___x_689_);
lean_ctor_set(v___x_684_, 1, v___x_688_);
v___x_693_ = v___x_684_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_ngen_673_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_697_, 2, v_mctx_675_);
lean_ctor_set(v_reuseFailAlloc_697_, 3, v_nextParamIdx_676_);
lean_ctor_set(v_reuseFailAlloc_697_, 4, v_paramNames_677_);
lean_ctor_set(v_reuseFailAlloc_697_, 5, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_697_, 6, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_697_, 7, v_lmap_680_);
lean_ctor_set(v_reuseFailAlloc_697_, 8, v___x_691_);
lean_ctor_set_uint8(v_reuseFailAlloc_697_, sizeof(void*)*9, v_abstractLevels_682_);
v___x_693_ = v_reuseFailAlloc_697_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v___x_693_);
lean_ctor_set(v___x_668_, 0, v___x_670_);
v___x_695_ = v___x_668_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
else
{
lean_object* v_val_705_; lean_object* v___x_706_; 
lean_dec_ref(v_type_652_);
lean_dec(v_userName_651_);
lean_dec(v_mvarId_647_);
lean_dec_ref(v_e_643_);
v_val_705_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_val_705_);
lean_dec_ref(v___x_657_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_val_705_);
lean_ctor_set(v___x_706_, 1, v_a_644_);
return v___x_706_;
}
}
}
case 3:
{
lean_object* v_u_707_; lean_object* v___x_708_; lean_object* v_fst_709_; lean_object* v_snd_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_724_; 
v_u_707_ = lean_ctor_get(v_e_643_, 0);
lean_inc(v_u_707_);
v___x_708_ = l___private_Lean_Meta_AbstractMVars_0__Lean_Meta_AbstractMVars_abstractLevelMVars(v_u_707_, v_a_644_);
v_fst_709_ = lean_ctor_get(v___x_708_, 0);
v_snd_710_ = lean_ctor_get(v___x_708_, 1);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_724_ == 0)
{
v___x_712_ = v___x_708_;
v_isShared_713_ = v_isSharedCheck_724_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snd_710_);
lean_inc(v_fst_709_);
lean_dec(v___x_708_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_724_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
size_t v___x_714_; size_t v___x_715_; uint8_t v___x_716_; 
v___x_714_ = lean_ptr_addr(v_u_707_);
v___x_715_ = lean_ptr_addr(v_fst_709_);
v___x_716_ = lean_usize_dec_eq(v___x_714_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; lean_object* v___x_719_; 
lean_dec_ref(v_e_643_);
v___x_717_ = l_Lean_Expr_sort___override(v_fst_709_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_717_);
v___x_719_ = v___x_712_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_snd_710_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
else
{
lean_object* v___x_722_; 
lean_dec(v_fst_709_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v_e_643_);
v___x_722_ = v___x_712_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_snd_710_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
case 4:
{
lean_object* v_declName_725_; lean_object* v_us_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_742_; 
v_declName_725_ = lean_ctor_get(v_e_643_, 0);
v_us_726_ = lean_ctor_get(v_e_643_, 1);
v___x_727_ = lean_box(0);
lean_inc(v_us_726_);
v___x_728_ = l_List_mapM_loop___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__3(v_us_726_, v___x_727_, v_a_644_);
v_fst_729_ = lean_ctor_get(v___x_728_, 0);
v_snd_730_ = lean_ctor_get(v___x_728_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_742_ == 0)
{
v___x_732_ = v___x_728_;
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_inc(v_fst_729_);
lean_dec(v___x_728_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
uint8_t v___x_734_; 
v___x_734_ = l_ptrEqList___redArg(v_us_726_, v_fst_729_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_737_; 
lean_inc(v_declName_725_);
lean_dec_ref(v_e_643_);
v___x_735_ = l_Lean_Expr_const___override(v_declName_725_, v_fst_729_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_735_);
v___x_737_ = v___x_732_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_snd_730_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
else
{
lean_object* v___x_740_; 
lean_dec(v_fst_729_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v_e_643_);
v___x_740_ = v___x_732_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_snd_730_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
case 5:
{
lean_object* v_fn_743_; lean_object* v_arg_744_; lean_object* v___x_745_; lean_object* v_fst_746_; lean_object* v_snd_747_; lean_object* v___x_748_; lean_object* v_fst_749_; lean_object* v_snd_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_769_; 
v_fn_743_ = lean_ctor_get(v_e_643_, 0);
v_arg_744_ = lean_ctor_get(v_e_643_, 1);
lean_inc_ref(v_fn_743_);
v___x_745_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_fn_743_, v_a_644_);
v_fst_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_fst_746_);
v_snd_747_ = lean_ctor_get(v___x_745_, 1);
lean_inc(v_snd_747_);
lean_dec_ref(v___x_745_);
lean_inc_ref(v_arg_744_);
v___x_748_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_arg_744_, v_snd_747_);
v_fst_749_ = lean_ctor_get(v___x_748_, 0);
v_snd_750_ = lean_ctor_get(v___x_748_, 1);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_769_ == 0)
{
v___x_752_ = v___x_748_;
v_isShared_753_ = v_isSharedCheck_769_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_snd_750_);
lean_inc(v_fst_749_);
lean_dec(v___x_748_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_769_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
uint8_t v___y_755_; size_t v___x_763_; size_t v___x_764_; uint8_t v___x_765_; 
v___x_763_ = lean_ptr_addr(v_fn_743_);
v___x_764_ = lean_ptr_addr(v_fst_746_);
v___x_765_ = lean_usize_dec_eq(v___x_763_, v___x_764_);
if (v___x_765_ == 0)
{
v___y_755_ = v___x_765_;
goto v___jp_754_;
}
else
{
size_t v___x_766_; size_t v___x_767_; uint8_t v___x_768_; 
v___x_766_ = lean_ptr_addr(v_arg_744_);
v___x_767_ = lean_ptr_addr(v_fst_749_);
v___x_768_ = lean_usize_dec_eq(v___x_766_, v___x_767_);
v___y_755_ = v___x_768_;
goto v___jp_754_;
}
v___jp_754_:
{
if (v___y_755_ == 0)
{
lean_object* v___x_756_; lean_object* v___x_758_; 
lean_dec_ref(v_e_643_);
v___x_756_ = l_Lean_Expr_app___override(v_fst_746_, v_fst_749_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_756_);
v___x_758_ = v___x_752_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_snd_750_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
else
{
lean_object* v___x_761_; 
lean_dec(v_fst_749_);
lean_dec(v_fst_746_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v_e_643_);
v___x_761_ = v___x_752_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_snd_750_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
case 6:
{
lean_object* v_binderName_770_; lean_object* v_binderType_771_; lean_object* v_body_772_; uint8_t v_binderInfo_773_; lean_object* v___x_774_; lean_object* v_fst_775_; lean_object* v_snd_776_; lean_object* v___x_777_; lean_object* v_fst_778_; lean_object* v_snd_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_803_; 
v_binderName_770_ = lean_ctor_get(v_e_643_, 0);
v_binderType_771_ = lean_ctor_get(v_e_643_, 1);
v_body_772_ = lean_ctor_get(v_e_643_, 2);
v_binderInfo_773_ = lean_ctor_get_uint8(v_e_643_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_771_);
v___x_774_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_binderType_771_, v_a_644_);
v_fst_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_fst_775_);
v_snd_776_ = lean_ctor_get(v___x_774_, 1);
lean_inc(v_snd_776_);
lean_dec_ref(v___x_774_);
lean_inc_ref(v_body_772_);
v___x_777_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_body_772_, v_snd_776_);
v_fst_778_ = lean_ctor_get(v___x_777_, 0);
v_snd_779_ = lean_ctor_get(v___x_777_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_803_ == 0)
{
v___x_781_ = v___x_777_;
v_isShared_782_ = v_isSharedCheck_803_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_snd_779_);
lean_inc(v_fst_778_);
lean_dec(v___x_777_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_803_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
uint8_t v___y_784_; size_t v___x_797_; size_t v___x_798_; uint8_t v___x_799_; 
v___x_797_ = lean_ptr_addr(v_binderType_771_);
v___x_798_ = lean_ptr_addr(v_fst_775_);
v___x_799_ = lean_usize_dec_eq(v___x_797_, v___x_798_);
if (v___x_799_ == 0)
{
v___y_784_ = v___x_799_;
goto v___jp_783_;
}
else
{
size_t v___x_800_; size_t v___x_801_; uint8_t v___x_802_; 
v___x_800_ = lean_ptr_addr(v_body_772_);
v___x_801_ = lean_ptr_addr(v_fst_778_);
v___x_802_ = lean_usize_dec_eq(v___x_800_, v___x_801_);
v___y_784_ = v___x_802_;
goto v___jp_783_;
}
v___jp_783_:
{
if (v___y_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_787_; 
lean_inc(v_binderName_770_);
lean_dec_ref(v_e_643_);
v___x_785_ = l_Lean_Expr_lam___override(v_binderName_770_, v_fst_775_, v_fst_778_, v_binderInfo_773_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_785_);
v___x_787_ = v___x_781_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_779_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
else
{
uint8_t v___x_789_; 
v___x_789_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_773_, v_binderInfo_773_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; lean_object* v___x_792_; 
lean_inc(v_binderName_770_);
lean_dec_ref(v_e_643_);
v___x_790_ = l_Lean_Expr_lam___override(v_binderName_770_, v_fst_775_, v_fst_778_, v_binderInfo_773_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_790_);
v___x_792_ = v___x_781_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_snd_779_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
else
{
lean_object* v___x_795_; 
lean_dec(v_fst_778_);
lean_dec(v_fst_775_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v_e_643_);
v___x_795_ = v___x_781_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_snd_779_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_804_; lean_object* v_binderType_805_; lean_object* v_body_806_; uint8_t v_binderInfo_807_; lean_object* v___x_808_; lean_object* v_fst_809_; lean_object* v_snd_810_; lean_object* v___x_811_; lean_object* v_fst_812_; lean_object* v_snd_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_837_; 
v_binderName_804_ = lean_ctor_get(v_e_643_, 0);
v_binderType_805_ = lean_ctor_get(v_e_643_, 1);
v_body_806_ = lean_ctor_get(v_e_643_, 2);
v_binderInfo_807_ = lean_ctor_get_uint8(v_e_643_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_805_);
v___x_808_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_binderType_805_, v_a_644_);
v_fst_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_fst_809_);
v_snd_810_ = lean_ctor_get(v___x_808_, 1);
lean_inc(v_snd_810_);
lean_dec_ref(v___x_808_);
lean_inc_ref(v_body_806_);
v___x_811_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_body_806_, v_snd_810_);
v_fst_812_ = lean_ctor_get(v___x_811_, 0);
v_snd_813_ = lean_ctor_get(v___x_811_, 1);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_837_ == 0)
{
v___x_815_ = v___x_811_;
v_isShared_816_ = v_isSharedCheck_837_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_snd_813_);
lean_inc(v_fst_812_);
lean_dec(v___x_811_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_837_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
uint8_t v___y_818_; size_t v___x_831_; size_t v___x_832_; uint8_t v___x_833_; 
v___x_831_ = lean_ptr_addr(v_binderType_805_);
v___x_832_ = lean_ptr_addr(v_fst_809_);
v___x_833_ = lean_usize_dec_eq(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
v___y_818_ = v___x_833_;
goto v___jp_817_;
}
else
{
size_t v___x_834_; size_t v___x_835_; uint8_t v___x_836_; 
v___x_834_ = lean_ptr_addr(v_body_806_);
v___x_835_ = lean_ptr_addr(v_fst_812_);
v___x_836_ = lean_usize_dec_eq(v___x_834_, v___x_835_);
v___y_818_ = v___x_836_;
goto v___jp_817_;
}
v___jp_817_:
{
if (v___y_818_ == 0)
{
lean_object* v___x_819_; lean_object* v___x_821_; 
lean_inc(v_binderName_804_);
lean_dec_ref(v_e_643_);
v___x_819_ = l_Lean_Expr_forallE___override(v_binderName_804_, v_fst_809_, v_fst_812_, v_binderInfo_807_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_819_);
v___x_821_ = v___x_815_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v_snd_813_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
else
{
uint8_t v___x_823_; 
v___x_823_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_807_, v_binderInfo_807_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_826_; 
lean_inc(v_binderName_804_);
lean_dec_ref(v_e_643_);
v___x_824_ = l_Lean_Expr_forallE___override(v_binderName_804_, v_fst_809_, v_fst_812_, v_binderInfo_807_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_824_);
v___x_826_ = v___x_815_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_snd_813_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
else
{
lean_object* v___x_829_; 
lean_dec(v_fst_812_);
lean_dec(v_fst_809_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v_e_643_);
v___x_829_ = v___x_815_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_snd_813_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
case 8:
{
lean_object* v_declName_838_; lean_object* v_type_839_; lean_object* v_value_840_; lean_object* v_body_841_; uint8_t v_nondep_842_; lean_object* v___x_843_; lean_object* v_fst_844_; lean_object* v_snd_845_; lean_object* v___x_846_; lean_object* v_fst_847_; lean_object* v_snd_848_; lean_object* v___x_849_; lean_object* v_fst_850_; lean_object* v_snd_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_877_; 
v_declName_838_ = lean_ctor_get(v_e_643_, 0);
v_type_839_ = lean_ctor_get(v_e_643_, 1);
v_value_840_ = lean_ctor_get(v_e_643_, 2);
v_body_841_ = lean_ctor_get(v_e_643_, 3);
v_nondep_842_ = lean_ctor_get_uint8(v_e_643_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_839_);
v___x_843_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_type_839_, v_a_644_);
v_fst_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_fst_844_);
v_snd_845_ = lean_ctor_get(v___x_843_, 1);
lean_inc(v_snd_845_);
lean_dec_ref(v___x_843_);
lean_inc_ref(v_value_840_);
v___x_846_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_value_840_, v_snd_845_);
v_fst_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_fst_847_);
v_snd_848_ = lean_ctor_get(v___x_846_, 1);
lean_inc(v_snd_848_);
lean_dec_ref(v___x_846_);
lean_inc_ref(v_body_841_);
v___x_849_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_body_841_, v_snd_848_);
v_fst_850_ = lean_ctor_get(v___x_849_, 0);
v_snd_851_ = lean_ctor_get(v___x_849_, 1);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_877_ == 0)
{
v___x_853_ = v___x_849_;
v_isShared_854_ = v_isSharedCheck_877_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_snd_851_);
lean_inc(v_fst_850_);
lean_dec(v___x_849_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_877_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
uint8_t v___y_856_; size_t v___x_871_; size_t v___x_872_; uint8_t v___x_873_; 
v___x_871_ = lean_ptr_addr(v_type_839_);
v___x_872_ = lean_ptr_addr(v_fst_844_);
v___x_873_ = lean_usize_dec_eq(v___x_871_, v___x_872_);
if (v___x_873_ == 0)
{
v___y_856_ = v___x_873_;
goto v___jp_855_;
}
else
{
size_t v___x_874_; size_t v___x_875_; uint8_t v___x_876_; 
v___x_874_ = lean_ptr_addr(v_value_840_);
v___x_875_ = lean_ptr_addr(v_fst_847_);
v___x_876_ = lean_usize_dec_eq(v___x_874_, v___x_875_);
v___y_856_ = v___x_876_;
goto v___jp_855_;
}
v___jp_855_:
{
if (v___y_856_ == 0)
{
lean_object* v___x_857_; lean_object* v___x_859_; 
lean_inc(v_declName_838_);
lean_dec_ref(v_e_643_);
v___x_857_ = l_Lean_Expr_letE___override(v_declName_838_, v_fst_844_, v_fst_847_, v_fst_850_, v_nondep_842_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_857_);
v___x_859_ = v___x_853_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_snd_851_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
else
{
size_t v___x_861_; size_t v___x_862_; uint8_t v___x_863_; 
v___x_861_ = lean_ptr_addr(v_body_841_);
v___x_862_ = lean_ptr_addr(v_fst_850_);
v___x_863_ = lean_usize_dec_eq(v___x_861_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; lean_object* v___x_866_; 
lean_inc(v_declName_838_);
lean_dec_ref(v_e_643_);
v___x_864_ = l_Lean_Expr_letE___override(v_declName_838_, v_fst_844_, v_fst_847_, v_fst_850_, v_nondep_842_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_864_);
v___x_866_ = v___x_853_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_snd_851_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
else
{
lean_object* v___x_869_; 
lean_dec(v_fst_850_);
lean_dec(v_fst_847_);
lean_dec(v_fst_844_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v_e_643_);
v___x_869_ = v___x_853_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_snd_851_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_878_; lean_object* v_expr_879_; lean_object* v___x_880_; lean_object* v_fst_881_; lean_object* v_snd_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_896_; 
v_data_878_ = lean_ctor_get(v_e_643_, 0);
v_expr_879_ = lean_ctor_get(v_e_643_, 1);
lean_inc_ref(v_expr_879_);
v___x_880_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_expr_879_, v_a_644_);
v_fst_881_ = lean_ctor_get(v___x_880_, 0);
v_snd_882_ = lean_ctor_get(v___x_880_, 1);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_896_ == 0)
{
v___x_884_ = v___x_880_;
v_isShared_885_ = v_isSharedCheck_896_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_snd_882_);
lean_inc(v_fst_881_);
lean_dec(v___x_880_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_896_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
size_t v___x_886_; size_t v___x_887_; uint8_t v___x_888_; 
v___x_886_ = lean_ptr_addr(v_expr_879_);
v___x_887_ = lean_ptr_addr(v_fst_881_);
v___x_888_ = lean_usize_dec_eq(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_inc(v_data_878_);
lean_dec_ref(v_e_643_);
v___x_889_ = l_Lean_Expr_mdata___override(v_data_878_, v_fst_881_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_889_);
v___x_891_ = v___x_884_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_snd_882_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
else
{
lean_object* v___x_894_; 
lean_dec(v_fst_881_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v_e_643_);
v___x_894_ = v___x_884_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_snd_882_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
case 11:
{
lean_object* v_typeName_897_; lean_object* v_idx_898_; lean_object* v_struct_899_; lean_object* v___x_900_; lean_object* v_fst_901_; lean_object* v_snd_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_916_; 
v_typeName_897_ = lean_ctor_get(v_e_643_, 0);
v_idx_898_ = lean_ctor_get(v_e_643_, 1);
v_struct_899_ = lean_ctor_get(v_e_643_, 2);
lean_inc_ref(v_struct_899_);
v___x_900_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_struct_899_, v_a_644_);
v_fst_901_ = lean_ctor_get(v___x_900_, 0);
v_snd_902_ = lean_ctor_get(v___x_900_, 1);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_916_ == 0)
{
v___x_904_ = v___x_900_;
v_isShared_905_ = v_isSharedCheck_916_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_snd_902_);
lean_inc(v_fst_901_);
lean_dec(v___x_900_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_916_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
size_t v___x_906_; size_t v___x_907_; uint8_t v___x_908_; 
v___x_906_ = lean_ptr_addr(v_struct_899_);
v___x_907_ = lean_ptr_addr(v_fst_901_);
v___x_908_ = lean_usize_dec_eq(v___x_906_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; lean_object* v___x_911_; 
lean_inc(v_idx_898_);
lean_inc(v_typeName_897_);
lean_dec_ref(v_e_643_);
v___x_909_ = l_Lean_Expr_proj___override(v_typeName_897_, v_idx_898_, v_fst_901_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v___x_909_);
v___x_911_ = v___x_904_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_snd_902_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
else
{
lean_object* v___x_914_; 
lean_dec(v_fst_901_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v_e_643_);
v___x_914_ = v___x_904_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_e_643_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_snd_902_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
default: 
{
lean_object* v___x_917_; 
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v_e_643_);
lean_ctor_set(v___x_917_, 1, v_a_644_);
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0(lean_object* v_00_u03b2_918_, lean_object* v_m_919_, lean_object* v_a_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___redArg(v_m_919_, v_a_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0___boxed(lean_object* v_00_u03b2_922_, lean_object* v_m_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0(v_00_u03b2_922_, v_m_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_m_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2(lean_object* v_00_u03b2_926_, lean_object* v_m_927_, lean_object* v_a_928_, lean_object* v_b_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2___redArg(v_m_927_, v_a_928_, v_b_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0(lean_object* v_00_u03b2_931_, lean_object* v_a_932_, lean_object* v_x_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___redArg(v_a_932_, v_x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0___boxed(lean_object* v_00_u03b2_935_, lean_object* v_a_936_, lean_object* v_x_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__0_spec__0(v_00_u03b2_935_, v_a_936_, v_x_937_);
lean_dec(v_x_937_);
lean_dec(v_a_936_);
return v_res_938_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3(lean_object* v_00_u03b2_939_, lean_object* v_a_940_, lean_object* v_x_941_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___redArg(v_a_940_, v_x_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3___boxed(lean_object* v_00_u03b2_943_, lean_object* v_a_944_, lean_object* v_x_945_){
_start:
{
uint8_t v_res_946_; lean_object* v_r_947_; 
v_res_946_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__3(v_00_u03b2_943_, v_a_944_, v_x_945_);
lean_dec(v_x_945_);
lean_dec(v_a_944_);
v_r_947_ = lean_box(v_res_946_);
return v_r_947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4(lean_object* v_00_u03b2_948_, lean_object* v_data_949_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4___redArg(v_data_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5(lean_object* v_00_u03b2_951_, lean_object* v_a_952_, lean_object* v_b_953_, lean_object* v_x_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__5___redArg(v_a_952_, v_b_953_, v_x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_956_, lean_object* v_i_957_, lean_object* v_source_958_, lean_object* v_target_959_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5___redArg(v_i_957_, v_source_958_, v_target_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7(lean_object* v_00_u03b2_961_, lean_object* v_x_962_, lean_object* v_x_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractMVars_abstractExprMVars_spec__2_spec__4_spec__5_spec__7___redArg(v_x_962_, v_x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg(lean_object* v_e_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = l_Lean_Expr_hasMVar(v_e_965_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v_e_965_);
return v___x_970_;
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v_mctx_973_; lean_object* v___x_974_; lean_object* v_fst_975_; lean_object* v_snd_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_cache_979_; lean_object* v_zetaDeltaFVarIds_980_; lean_object* v_postponed_981_; lean_object* v_diag_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_991_; 
v___x_971_ = lean_st_ref_get(v___y_967_);
lean_dec(v___x_971_);
v___x_972_ = lean_st_ref_get(v___y_966_);
v_mctx_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc_ref(v_mctx_973_);
lean_dec(v___x_972_);
v___x_974_ = l_Lean_instantiateMVarsCore(v_mctx_973_, v_e_965_);
v_fst_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_fst_975_);
v_snd_976_ = lean_ctor_get(v___x_974_, 1);
lean_inc(v_snd_976_);
lean_dec_ref(v___x_974_);
v___x_977_ = lean_st_ref_get(v___y_967_);
lean_dec(v___x_977_);
v___x_978_ = lean_st_ref_take(v___y_966_);
v_cache_979_ = lean_ctor_get(v___x_978_, 1);
v_zetaDeltaFVarIds_980_ = lean_ctor_get(v___x_978_, 2);
v_postponed_981_ = lean_ctor_get(v___x_978_, 3);
v_diag_982_ = lean_ctor_get(v___x_978_, 4);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; 
v_unused_992_ = lean_ctor_get(v___x_978_, 0);
lean_dec(v_unused_992_);
v___x_984_ = v___x_978_;
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_diag_982_);
lean_inc(v_postponed_981_);
lean_inc(v_zetaDeltaFVarIds_980_);
lean_inc(v_cache_979_);
lean_dec(v___x_978_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v_snd_976_);
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_snd_976_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_cache_979_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_zetaDeltaFVarIds_980_);
lean_ctor_set(v_reuseFailAlloc_990_, 3, v_postponed_981_);
lean_ctor_set(v_reuseFailAlloc_990_, 4, v_diag_982_);
v___x_987_ = v_reuseFailAlloc_990_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_st_ref_set(v___y_966_, v___x_987_);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v_fst_975_);
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg___boxed(lean_object* v_e_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg(v_e_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec(v___y_994_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0(lean_object* v_e_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg(v_e_998_, v___y_1000_, v___y_1002_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___boxed(lean_object* v_e_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0(v_e_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
return v_res_1011_;
}
}
static lean_object* _init_l_Lean_Meta_abstractMVars___closed__0(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_unsigned_to_nat(0u);
v___x_1013_ = lean_mk_empty_array_with_capacity(v___x_1012_);
return v___x_1013_;
}
}
static lean_object* _init_l_Lean_Meta_abstractMVars___closed__1(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_box(0);
v___x_1015_ = lean_unsigned_to_nat(16u);
v___x_1016_ = lean_mk_array(v___x_1015_, v___x_1014_);
return v___x_1016_;
}
}
static lean_object* _init_l_Lean_Meta_abstractMVars___closed__2(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_obj_once(&l_Lean_Meta_abstractMVars___closed__1, &l_Lean_Meta_abstractMVars___closed__1_once, _init_l_Lean_Meta_abstractMVars___closed__1);
v___x_1018_ = lean_unsigned_to_nat(0u);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set(v___x_1019_, 1, v___x_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractMVars(lean_object* v_e_1020_, uint8_t v_levels_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v___x_1027_; lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1091_; 
v___x_1027_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractMVars_spec__0___redArg(v_e_1020_, v_a_1023_, v_a_1025_);
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1091_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1091_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_mctx_1035_; lean_object* v_lctx_1036_; lean_object* v_ngen_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v_fst_1043_; lean_object* v_snd_1044_; lean_object* v___x_1045_; lean_object* v_ngen_1046_; lean_object* v_lctx_1047_; lean_object* v_mctx_1048_; lean_object* v_paramNames_1049_; lean_object* v_fvars_1050_; lean_object* v_mvars_1051_; lean_object* v_env_1052_; lean_object* v_nextMacroScope_1053_; lean_object* v_auxDeclNGen_1054_; lean_object* v_traceState_1055_; lean_object* v_cache_1056_; lean_object* v_messages_1057_; lean_object* v_infoState_1058_; lean_object* v_snapshotTasks_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1089_; 
v___x_1032_ = lean_st_ref_get(v_a_1025_);
lean_dec(v___x_1032_);
v___x_1033_ = lean_st_ref_get(v_a_1023_);
v___x_1034_ = lean_st_ref_get(v_a_1025_);
v_mctx_1035_ = lean_ctor_get(v___x_1033_, 0);
lean_inc_ref(v_mctx_1035_);
lean_dec(v___x_1033_);
v_lctx_1036_ = lean_ctor_get(v_a_1022_, 2);
v_ngen_1037_ = lean_ctor_get(v___x_1034_, 2);
lean_inc_ref(v_ngen_1037_);
lean_dec(v___x_1034_);
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_obj_once(&l_Lean_Meta_abstractMVars___closed__0, &l_Lean_Meta_abstractMVars___closed__0_once, _init_l_Lean_Meta_abstractMVars___closed__0);
v___x_1040_ = lean_obj_once(&l_Lean_Meta_abstractMVars___closed__2, &l_Lean_Meta_abstractMVars___closed__2_once, _init_l_Lean_Meta_abstractMVars___closed__2);
lean_inc_ref(v_lctx_1036_);
v___x_1041_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_1041_, 0, v_ngen_1037_);
lean_ctor_set(v___x_1041_, 1, v_lctx_1036_);
lean_ctor_set(v___x_1041_, 2, v_mctx_1035_);
lean_ctor_set(v___x_1041_, 3, v___x_1038_);
lean_ctor_set(v___x_1041_, 4, v___x_1039_);
lean_ctor_set(v___x_1041_, 5, v___x_1039_);
lean_ctor_set(v___x_1041_, 6, v___x_1039_);
lean_ctor_set(v___x_1041_, 7, v___x_1040_);
lean_ctor_set(v___x_1041_, 8, v___x_1040_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*9, v_levels_1021_);
v___x_1042_ = l_Lean_Meta_AbstractMVars_abstractExprMVars(v_a_1028_, v___x_1041_);
v_fst_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_fst_1043_);
v_snd_1044_ = lean_ctor_get(v___x_1042_, 1);
lean_inc(v_snd_1044_);
lean_dec_ref(v___x_1042_);
v___x_1045_ = lean_st_ref_take(v_a_1025_);
v_ngen_1046_ = lean_ctor_get(v_snd_1044_, 0);
lean_inc_ref(v_ngen_1046_);
v_lctx_1047_ = lean_ctor_get(v_snd_1044_, 1);
lean_inc_ref(v_lctx_1047_);
v_mctx_1048_ = lean_ctor_get(v_snd_1044_, 2);
lean_inc_ref(v_mctx_1048_);
v_paramNames_1049_ = lean_ctor_get(v_snd_1044_, 4);
lean_inc_ref(v_paramNames_1049_);
v_fvars_1050_ = lean_ctor_get(v_snd_1044_, 5);
lean_inc_ref(v_fvars_1050_);
v_mvars_1051_ = lean_ctor_get(v_snd_1044_, 6);
lean_inc_ref(v_mvars_1051_);
lean_dec(v_snd_1044_);
v_env_1052_ = lean_ctor_get(v___x_1045_, 0);
v_nextMacroScope_1053_ = lean_ctor_get(v___x_1045_, 1);
v_auxDeclNGen_1054_ = lean_ctor_get(v___x_1045_, 3);
v_traceState_1055_ = lean_ctor_get(v___x_1045_, 4);
v_cache_1056_ = lean_ctor_get(v___x_1045_, 5);
v_messages_1057_ = lean_ctor_get(v___x_1045_, 6);
v_infoState_1058_ = lean_ctor_get(v___x_1045_, 7);
v_snapshotTasks_1059_ = lean_ctor_get(v___x_1045_, 8);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v___x_1045_, 2);
lean_dec(v_unused_1090_);
v___x_1061_ = v___x_1045_;
v_isShared_1062_ = v_isSharedCheck_1089_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_snapshotTasks_1059_);
lean_inc(v_infoState_1058_);
lean_inc(v_messages_1057_);
lean_inc(v_cache_1056_);
lean_inc(v_traceState_1055_);
lean_inc(v_auxDeclNGen_1054_);
lean_inc(v_nextMacroScope_1053_);
lean_inc(v_env_1052_);
lean_dec(v___x_1045_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1089_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 2, v_ngen_1046_);
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_env_1052_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_nextMacroScope_1053_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_ngen_1046_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_auxDeclNGen_1054_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v_traceState_1055_);
lean_ctor_set(v_reuseFailAlloc_1088_, 5, v_cache_1056_);
lean_ctor_set(v_reuseFailAlloc_1088_, 6, v_messages_1057_);
lean_ctor_set(v_reuseFailAlloc_1088_, 7, v_infoState_1058_);
lean_ctor_set(v_reuseFailAlloc_1088_, 8, v_snapshotTasks_1059_);
v___x_1064_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v_cache_1068_; lean_object* v_zetaDeltaFVarIds_1069_; lean_object* v_postponed_1070_; lean_object* v_diag_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1086_; 
v___x_1065_ = lean_st_ref_set(v_a_1025_, v___x_1064_);
v___x_1066_ = lean_st_ref_get(v_a_1025_);
lean_dec(v___x_1066_);
v___x_1067_ = lean_st_ref_take(v_a_1023_);
v_cache_1068_ = lean_ctor_get(v___x_1067_, 1);
v_zetaDeltaFVarIds_1069_ = lean_ctor_get(v___x_1067_, 2);
v_postponed_1070_ = lean_ctor_get(v___x_1067_, 3);
v_diag_1071_ = lean_ctor_get(v___x_1067_, 4);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v___x_1067_, 0);
lean_dec(v_unused_1087_);
v___x_1073_ = v___x_1067_;
v_isShared_1074_ = v_isSharedCheck_1086_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_diag_1071_);
lean_inc(v_postponed_1070_);
lean_inc(v_zetaDeltaFVarIds_1069_);
lean_inc(v_cache_1068_);
lean_dec(v___x_1067_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1086_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v_mctx_1048_);
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_mctx_1048_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_cache_1068_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_zetaDeltaFVarIds_1069_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v_postponed_1070_);
lean_ctor_set(v_reuseFailAlloc_1085_, 4, v_diag_1071_);
v___x_1076_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
lean_object* v___x_1077_; uint8_t v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1077_ = lean_st_ref_set(v_a_1023_, v___x_1076_);
v___x_1078_ = 1;
v___x_1079_ = 0;
v___x_1080_ = l_Lean_LocalContext_mkLambda(v_lctx_1047_, v_fvars_1050_, v_fst_1043_, v___x_1078_, v___x_1079_);
lean_dec(v_fst_1043_);
lean_dec_ref(v_fvars_1050_);
v___x_1081_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1081_, 0, v_paramNames_1049_);
lean_ctor_set(v___x_1081_, 1, v_mvars_1051_);
lean_ctor_set(v___x_1081_, 2, v___x_1080_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1081_);
v___x_1083_ = v___x_1030_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractMVars___boxed(lean_object* v_e_1092_, lean_object* v_levels_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
uint8_t v_levels_boxed_1099_; lean_object* v_res_1100_; 
v_levels_boxed_1099_ = lean_unbox(v_levels_1093_);
v_res_1100_ = l_Lean_Meta_abstractMVars(v_e_1092_, v_levels_boxed_1099_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0(size_t v_sz_1101_, size_t v_i_1102_, lean_object* v_bs_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_usize_dec_lt(v_i_1102_, v_sz_1101_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; 
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v_bs_1103_);
return v___x_1110_;
}
else
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_Meta_mkFreshLevelMVar(v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1113_; lean_object* v_bs_x27_1114_; size_t v___x_1115_; size_t v___x_1116_; lean_object* v___x_1117_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref(v___x_1111_);
v___x_1113_ = lean_unsigned_to_nat(0u);
v_bs_x27_1114_ = lean_array_uset(v_bs_1103_, v_i_1102_, v___x_1113_);
v___x_1115_ = ((size_t)1ULL);
v___x_1116_ = lean_usize_add(v_i_1102_, v___x_1115_);
v___x_1117_ = lean_array_uset(v_bs_x27_1114_, v_i_1102_, v_a_1112_);
v_i_1102_ = v___x_1116_;
v_bs_1103_ = v___x_1117_;
goto _start;
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec_ref(v_bs_1103_);
v_a_1119_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1111_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1111_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0___boxed(lean_object* v_sz_1127_, lean_object* v_i_1128_, lean_object* v_bs_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
size_t v_sz_boxed_1135_; size_t v_i_boxed_1136_; lean_object* v_res_1137_; 
v_sz_boxed_1135_ = lean_unbox_usize(v_sz_1127_);
lean_dec(v_sz_1127_);
v_i_boxed_1136_ = lean_unbox_usize(v_i_1128_);
lean_dec(v_i_1128_);
v_res_1137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0(v_sz_boxed_1135_, v_i_boxed_1136_, v_bs_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_paramNames_1144_; lean_object* v_expr_1145_; size_t v_sz_1146_; size_t v___x_1147_; lean_object* v___x_1148_; 
v_paramNames_1144_ = lean_ctor_get(v_a_1138_, 0);
v_expr_1145_ = lean_ctor_get(v_a_1138_, 2);
v_sz_1146_ = lean_array_size(v_paramNames_1144_);
v___x_1147_ = ((size_t)0ULL);
lean_inc_ref(v_paramNames_1144_);
v___x_1148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_openAbstractMVarsResult_spec__0(v_sz_1146_, v___x_1147_, v_paramNames_1144_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref(v___x_1148_);
lean_inc_ref(v_paramNames_1144_);
v___x_1150_ = l_Lean_Expr_instantiateLevelParamsArray(v_expr_1145_, v_paramNames_1144_, v_a_1149_);
v___x_1151_ = l_Lean_Meta_AbstractMVarsResult_numMVars(v_a_1138_);
lean_dec_ref(v_a_1138_);
v___x_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
v___x_1153_ = l_Lean_Meta_lambdaMetaTelescope(v___x_1150_, v___x_1152_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec_ref(v___x_1152_);
lean_dec_ref(v___x_1150_);
return v___x_1153_;
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref(v_a_1138_);
v_a_1154_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1148_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1148_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_openAbstractMVarsResult___boxed(lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_Meta_openAbstractMVarsResult(v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
return v_res_1168_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_AbstractMVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_AbstractMVars_instMonadMCtxM = _init_l_Lean_Meta_AbstractMVars_instMonadMCtxM();
lean_mark_persistent(l_Lean_Meta_AbstractMVars_instMonadMCtxM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_AbstractMVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_AbstractMVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AbstractMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_AbstractMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_AbstractMVars(builtin);
}
#ifdef __cplusplus
}
#endif
