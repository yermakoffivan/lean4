// Lean compiler output
// Module: Lean.Meta.Canonicalizer
// Imports: public import Lean.Util.ShareCommon public import Lean.Meta.FunInfo public import Std.Data.HashMap.Raw import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instInhabitedExprVisited;
LEAN_EXPORT uint8_t l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instBEqExprVisited;
LEAN_EXPORT uint64_t l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instHashableExprVisited;
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0;
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1;
static lean_once_cell_t l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8(lean_object*, uint64_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1;
static lean_once_cell_t l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0, &l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1, &l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__1);
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2, &l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default___closed__2);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default;
return v___x_8_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0(lean_object* v_a_9_, lean_object* v_b_10_){
_start:
{
size_t v___x_11_; size_t v___x_12_; uint8_t v___x_13_; 
v___x_11_ = lean_ptr_addr(v_a_9_);
v___x_12_ = lean_ptr_addr(v_b_10_);
v___x_13_ = lean_usize_dec_eq(v___x_11_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0___boxed(lean_object* v_a_14_, lean_object* v_b_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0(v_a_14_, v_b_15_);
lean_dec_ref(v_b_15_);
lean_dec_ref(v_a_14_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0(void){
_start:
{
lean_object* v___f_18_; 
v___f_18_ = lean_alloc_closure((void*)(l_Lean_Meta_Canonicalizer_instBEqExprVisited___lam__0___boxed), 2, 0);
return v___f_18_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instBEqExprVisited(void){
_start:
{
lean_object* v___f_19_; 
v___f_19_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0, &l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0_once, _init_l_Lean_Meta_Canonicalizer_instBEqExprVisited___closed__0);
return v___f_19_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0(lean_object* v_a_20_){
_start:
{
size_t v___x_21_; uint64_t v___x_22_; 
v___x_21_ = lean_ptr_addr(v_a_20_);
v___x_22_ = lean_usize_to_uint64(v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0___boxed(lean_object* v_a_23_){
_start:
{
uint64_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0(v_a_23_);
lean_dec_ref(v_a_23_);
v_r_25_ = lean_box_uint64(v_res_24_);
return v_r_25_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0(void){
_start:
{
lean_object* v___f_26_; 
v___f_26_ = lean_alloc_closure((void*)(l_Lean_Meta_Canonicalizer_instHashableExprVisited___lam__0___boxed), 1, 0);
return v___f_26_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instHashableExprVisited(void){
_start:
{
lean_object* v___f_27_; 
v___f_27_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0, &l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0_once, _init_l_Lean_Meta_Canonicalizer_instHashableExprVisited___closed__0);
return v___f_27_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_box(0);
v___x_29_ = lean_unsigned_to_nat(16u);
v___x_30_ = lean_mk_array(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0, &l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__0);
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1, &l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__1);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Meta_Canonicalizer_instInhabitedState(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2, &l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2_once, _init_l_Lean_Meta_Canonicalizer_instInhabitedState___closed__2);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object* v_x_37_, uint8_t v_transparency_38_, lean_object* v_s_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_st_ref_get(v_a_43_);
lean_dec(v___x_45_);
v___x_46_ = lean_st_mk_ref(v_s_39_);
v___x_47_ = lean_box(v_transparency_38_);
lean_inc(v_a_43_);
lean_inc_ref(v_a_42_);
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v___x_46_);
v___x_48_ = lean_apply_7(v_x_37_, v___x_47_, v___x_46_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, lean_box(0));
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_58_; 
v_a_49_ = lean_ctor_get(v___x_48_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_48_);
if (v_isSharedCheck_58_ == 0)
{
v___x_51_ = v___x_48_;
v_isShared_52_ = v_isSharedCheck_58_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_48_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_58_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_53_ = lean_st_ref_get(v_a_43_);
lean_dec(v___x_53_);
v___x_54_ = lean_st_ref_get(v___x_46_);
lean_dec(v___x_46_);
lean_dec(v___x_54_);
if (v_isShared_52_ == 0)
{
v___x_56_ = v___x_51_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_a_49_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_dec(v___x_46_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg___boxed(lean_object* v_x_59_, lean_object* v_transparency_60_, lean_object* v_s_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
uint8_t v_transparency_boxed_67_; lean_object* v_res_68_; 
v_transparency_boxed_67_ = lean_unbox(v_transparency_60_);
v_res_68_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v_x_59_, v_transparency_boxed_67_, v_s_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27(lean_object* v_00_u03b1_69_, lean_object* v_x_70_, uint8_t v_transparency_71_, lean_object* v_s_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v_x_70_, v_transparency_71_, v_s_72_, v_a_73_, v_a_74_, v_a_75_, v_a_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___boxed(lean_object* v_00_u03b1_79_, lean_object* v_x_80_, lean_object* v_transparency_81_, lean_object* v_s_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
uint8_t v_transparency_boxed_88_; lean_object* v_res_89_; 
v_transparency_boxed_88_ = lean_unbox(v_transparency_81_);
v_res_89_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27(v_00_u03b1_79_, v_x_80_, v_transparency_boxed_88_, v_s_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___redArg(lean_object* v_x_90_, uint8_t v_transparency_91_, lean_object* v_s_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_st_ref_get(v_a_96_);
lean_dec(v___x_98_);
v___x_99_ = lean_st_mk_ref(v_s_92_);
v___x_100_ = lean_box(v_transparency_91_);
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
lean_inc(v_a_94_);
lean_inc_ref(v_a_93_);
lean_inc(v___x_99_);
v___x_101_ = lean_apply_7(v_x_90_, v___x_100_, v___x_99_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, lean_box(0));
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_112_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_112_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_112_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_112_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_106_ = lean_st_ref_get(v_a_96_);
lean_dec(v___x_106_);
v___x_107_ = lean_st_ref_get(v___x_99_);
lean_dec(v___x_99_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v_a_102_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_108_);
v___x_110_ = v___x_104_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
lean_dec(v___x_99_);
v_a_113_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v___x_101_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_101_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___redArg___boxed(lean_object* v_x_121_, lean_object* v_transparency_122_, lean_object* v_s_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
uint8_t v_transparency_boxed_129_; lean_object* v_res_130_; 
v_transparency_boxed_129_ = lean_unbox(v_transparency_122_);
v_res_130_ = l_Lean_Meta_Canonicalizer_CanonM_run___redArg(v_x_121_, v_transparency_boxed_129_, v_s_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run(lean_object* v_00_u03b1_131_, lean_object* v_x_132_, uint8_t v_transparency_133_, lean_object* v_s_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lean_Meta_Canonicalizer_CanonM_run___redArg(v_x_132_, v_transparency_133_, v_s_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_CanonM_run___boxed(lean_object* v_00_u03b1_141_, lean_object* v_x_142_, lean_object* v_transparency_143_, lean_object* v_s_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
uint8_t v_transparency_boxed_150_; lean_object* v_res_151_; 
v_transparency_boxed_150_ = lean_unbox(v_transparency_143_);
v_res_151_ = l_Lean_Meta_Canonicalizer_CanonM_run(v_00_u03b1_141_, v_x_142_, v_transparency_boxed_150_, v_s_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg(lean_object* v_a_152_, lean_object* v_x_153_){
_start:
{
if (lean_obj_tag(v_x_153_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_box(0);
return v___x_154_;
}
else
{
lean_object* v_key_155_; lean_object* v_value_156_; lean_object* v_tail_157_; size_t v___x_158_; size_t v___x_159_; uint8_t v___x_160_; 
v_key_155_ = lean_ctor_get(v_x_153_, 0);
v_value_156_ = lean_ctor_get(v_x_153_, 1);
v_tail_157_ = lean_ctor_get(v_x_153_, 2);
v___x_158_ = lean_ptr_addr(v_key_155_);
v___x_159_ = lean_ptr_addr(v_a_152_);
v___x_160_ = lean_usize_dec_eq(v___x_158_, v___x_159_);
if (v___x_160_ == 0)
{
v_x_153_ = v_tail_157_;
goto _start;
}
else
{
lean_object* v___x_162_; 
lean_inc(v_value_156_);
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v_value_156_);
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object* v_a_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg(v_a_163_, v_x_164_);
lean_dec(v_x_164_);
lean_dec_ref(v_a_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg(lean_object* v_m_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_buckets_168_; lean_object* v___x_169_; size_t v___x_170_; uint64_t v___x_171_; uint64_t v___x_172_; uint64_t v___x_173_; uint64_t v_fold_174_; uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_buckets_168_ = lean_ctor_get(v_m_166_, 1);
v___x_169_ = lean_array_get_size(v_buckets_168_);
v___x_170_ = lean_ptr_addr(v_a_167_);
v___x_171_ = lean_usize_to_uint64(v___x_170_);
v___x_172_ = 32ULL;
v___x_173_ = lean_uint64_shift_right(v___x_171_, v___x_172_);
v_fold_174_ = lean_uint64_xor(v___x_171_, v___x_173_);
v___x_175_ = 16ULL;
v___x_176_ = lean_uint64_shift_right(v_fold_174_, v___x_175_);
v___x_177_ = lean_uint64_xor(v_fold_174_, v___x_176_);
v___x_178_ = lean_uint64_to_usize(v___x_177_);
v___x_179_ = lean_usize_of_nat(v___x_169_);
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_sub(v___x_179_, v___x_180_);
v___x_182_ = lean_usize_land(v___x_178_, v___x_181_);
v___x_183_ = lean_array_uget_borrowed(v_buckets_168_, v___x_182_);
v___x_184_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg(v_a_167_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg___boxed(lean_object* v_m_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg(v_m_185_, v_a_186_);
lean_dec_ref(v_a_186_);
lean_dec_ref(v_m_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1(lean_object* v_e_188_, lean_object* v_____do__lift_189_){
_start:
{
lean_object* v_cache_190_; lean_object* v_buckets_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_cache_190_ = lean_ctor_get(v_____do__lift_189_, 0);
v_buckets_191_ = lean_ctor_get(v_cache_190_, 1);
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_get_size(v_buckets_191_);
v___x_194_ = lean_nat_dec_lt(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_box(0);
return v___x_195_;
}
else
{
lean_object* v___x_196_; 
v___x_196_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg(v_cache_190_, v_e_188_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1___boxed(lean_object* v_e_197_, lean_object* v_____do__lift_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1(v_e_197_, v_____do__lift_198_);
lean_dec_ref(v_____do__lift_198_);
lean_dec_ref(v_e_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0(lean_object* v_00_u03b2_200_, lean_object* v_m_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___redArg(v_m_201_, v_a_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0___boxed(lean_object* v_00_u03b2_204_, lean_object* v_m_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0(v_00_u03b2_204_, v_m_205_, v_a_206_);
lean_dec_ref(v_a_206_);
lean_dec_ref(v_m_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0(lean_object* v_00_u03b2_208_, lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___redArg(v_a_209_, v_x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0___boxed(lean_object* v_00_u03b2_212_, lean_object* v_a_213_, lean_object* v_x_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1_spec__0_spec__0(v_00_u03b2_212_, v_a_213_, v_x_214_);
lean_dec(v_x_214_);
lean_dec_ref(v_a_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
if (lean_obj_tag(v_x_217_) == 0)
{
return v_x_216_;
}
else
{
lean_object* v_key_218_; lean_object* v_value_219_; lean_object* v_tail_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_244_; 
v_key_218_ = lean_ctor_get(v_x_217_, 0);
v_value_219_ = lean_ctor_get(v_x_217_, 1);
v_tail_220_ = lean_ctor_get(v_x_217_, 2);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_217_);
if (v_isSharedCheck_244_ == 0)
{
v___x_222_ = v_x_217_;
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_tail_220_);
lean_inc(v_value_219_);
lean_inc(v_key_218_);
lean_dec(v_x_217_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; size_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v_fold_229_; uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v___x_232_; size_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_224_ = lean_array_get_size(v_x_216_);
v___x_225_ = lean_ptr_addr(v_key_218_);
v___x_226_ = lean_usize_to_uint64(v___x_225_);
v___x_227_ = 32ULL;
v___x_228_ = lean_uint64_shift_right(v___x_226_, v___x_227_);
v_fold_229_ = lean_uint64_xor(v___x_226_, v___x_228_);
v___x_230_ = 16ULL;
v___x_231_ = lean_uint64_shift_right(v_fold_229_, v___x_230_);
v___x_232_ = lean_uint64_xor(v_fold_229_, v___x_231_);
v___x_233_ = lean_uint64_to_usize(v___x_232_);
v___x_234_ = lean_usize_of_nat(v___x_224_);
v___x_235_ = ((size_t)1ULL);
v___x_236_ = lean_usize_sub(v___x_234_, v___x_235_);
v___x_237_ = lean_usize_land(v___x_233_, v___x_236_);
v___x_238_ = lean_array_uget_borrowed(v_x_216_, v___x_237_);
lean_inc(v___x_238_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 2, v___x_238_);
v___x_240_ = v___x_222_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_key_218_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_value_219_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v___x_238_);
v___x_240_ = v_reuseFailAlloc_243_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; 
v___x_241_ = lean_array_uset(v_x_216_, v___x_237_, v___x_240_);
v_x_216_ = v___x_241_;
v_x_217_ = v_tail_220_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2___redArg(lean_object* v_i_245_, lean_object* v_source_246_, lean_object* v_target_247_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_array_get_size(v_source_246_);
v___x_249_ = lean_nat_dec_lt(v_i_245_, v___x_248_);
if (v___x_249_ == 0)
{
lean_dec_ref(v_source_246_);
lean_dec(v_i_245_);
return v_target_247_;
}
else
{
lean_object* v_es_250_; lean_object* v___x_251_; lean_object* v_source_252_; lean_object* v_target_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_es_250_ = lean_array_fget(v_source_246_, v_i_245_);
v___x_251_ = lean_box(0);
v_source_252_ = lean_array_fset(v_source_246_, v_i_245_, v___x_251_);
v_target_253_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3___redArg(v_target_247_, v_es_250_);
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = lean_nat_add(v_i_245_, v___x_254_);
lean_dec(v_i_245_);
v_i_245_ = v___x_255_;
v_source_246_ = v_source_252_;
v_target_247_ = v_target_253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1___redArg(lean_object* v_data_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_nbuckets_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_258_ = lean_array_get_size(v_data_257_);
v___x_259_ = lean_unsigned_to_nat(2u);
v_nbuckets_260_ = lean_nat_mul(v___x_258_, v___x_259_);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = lean_box(0);
v___x_263_ = lean_mk_array(v_nbuckets_260_, v___x_262_);
v___x_264_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2___redArg(v___x_261_, v_data_257_, v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2___redArg(lean_object* v_a_265_, lean_object* v_b_266_, lean_object* v_x_267_){
_start:
{
if (lean_obj_tag(v_x_267_) == 0)
{
lean_dec(v_b_266_);
lean_dec_ref(v_a_265_);
return v_x_267_;
}
else
{
lean_object* v_key_268_; lean_object* v_value_269_; lean_object* v_tail_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_284_; 
v_key_268_ = lean_ctor_get(v_x_267_, 0);
v_value_269_ = lean_ctor_get(v_x_267_, 1);
v_tail_270_ = lean_ctor_get(v_x_267_, 2);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_267_);
if (v_isSharedCheck_284_ == 0)
{
v___x_272_ = v_x_267_;
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_tail_270_);
lean_inc(v_value_269_);
lean_inc(v_key_268_);
lean_dec(v_x_267_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
size_t v___x_274_; size_t v___x_275_; uint8_t v___x_276_; 
v___x_274_ = lean_ptr_addr(v_key_268_);
v___x_275_ = lean_ptr_addr(v_a_265_);
v___x_276_ = lean_usize_dec_eq(v___x_274_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2___redArg(v_a_265_, v_b_266_, v_tail_270_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 2, v___x_277_);
v___x_279_ = v___x_272_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_key_268_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_value_269_);
lean_ctor_set(v_reuseFailAlloc_280_, 2, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
else
{
lean_object* v___x_282_; 
lean_dec(v_value_269_);
lean_dec(v_key_268_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v_b_266_);
lean_ctor_set(v___x_272_, 0, v_a_265_);
v___x_282_ = v___x_272_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_265_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_b_266_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_tail_270_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg(lean_object* v_a_285_, lean_object* v_x_286_){
_start:
{
if (lean_obj_tag(v_x_286_) == 0)
{
uint8_t v___x_287_; 
v___x_287_ = 0;
return v___x_287_;
}
else
{
lean_object* v_key_288_; lean_object* v_tail_289_; size_t v___x_290_; size_t v___x_291_; uint8_t v___x_292_; 
v_key_288_ = lean_ctor_get(v_x_286_, 0);
v_tail_289_ = lean_ctor_get(v_x_286_, 2);
v___x_290_ = lean_ptr_addr(v_key_288_);
v___x_291_ = lean_ptr_addr(v_a_285_);
v___x_292_ = lean_usize_dec_eq(v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
v_x_286_ = v_tail_289_;
goto _start;
}
else
{
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg___boxed(lean_object* v_a_294_, lean_object* v_x_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg(v_a_294_, v_x_295_);
lean_dec(v_x_295_);
lean_dec_ref(v_a_294_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0___redArg(lean_object* v_m_298_, lean_object* v_a_299_, lean_object* v_b_300_){
_start:
{
lean_object* v_size_301_; lean_object* v_buckets_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_346_; 
v_size_301_ = lean_ctor_get(v_m_298_, 0);
v_buckets_302_ = lean_ctor_get(v_m_298_, 1);
v_isSharedCheck_346_ = !lean_is_exclusive(v_m_298_);
if (v_isSharedCheck_346_ == 0)
{
v___x_304_ = v_m_298_;
v_isShared_305_ = v_isSharedCheck_346_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_buckets_302_);
lean_inc(v_size_301_);
lean_dec(v_m_298_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_346_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; size_t v___x_307_; uint64_t v___x_308_; uint64_t v___x_309_; uint64_t v___x_310_; uint64_t v_fold_311_; uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v___x_314_; size_t v___x_315_; size_t v___x_316_; size_t v___x_317_; size_t v___x_318_; size_t v___x_319_; lean_object* v_bkt_320_; uint8_t v___x_321_; 
v___x_306_ = lean_array_get_size(v_buckets_302_);
v___x_307_ = lean_ptr_addr(v_a_299_);
v___x_308_ = lean_usize_to_uint64(v___x_307_);
v___x_309_ = 32ULL;
v___x_310_ = lean_uint64_shift_right(v___x_308_, v___x_309_);
v_fold_311_ = lean_uint64_xor(v___x_308_, v___x_310_);
v___x_312_ = 16ULL;
v___x_313_ = lean_uint64_shift_right(v_fold_311_, v___x_312_);
v___x_314_ = lean_uint64_xor(v_fold_311_, v___x_313_);
v___x_315_ = lean_uint64_to_usize(v___x_314_);
v___x_316_ = lean_usize_of_nat(v___x_306_);
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_sub(v___x_316_, v___x_317_);
v___x_319_ = lean_usize_land(v___x_315_, v___x_318_);
v_bkt_320_ = lean_array_uget_borrowed(v_buckets_302_, v___x_319_);
v___x_321_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg(v_a_299_, v_bkt_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v_size_x27_323_; lean_object* v___x_324_; lean_object* v_buckets_x27_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v_size_x27_323_ = lean_nat_add(v_size_301_, v___x_322_);
lean_dec(v_size_301_);
lean_inc(v_bkt_320_);
v___x_324_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_324_, 0, v_a_299_);
lean_ctor_set(v___x_324_, 1, v_b_300_);
lean_ctor_set(v___x_324_, 2, v_bkt_320_);
v_buckets_x27_325_ = lean_array_uset(v_buckets_302_, v___x_319_, v___x_324_);
v___x_326_ = lean_unsigned_to_nat(4u);
v___x_327_ = lean_nat_mul(v_size_x27_323_, v___x_326_);
v___x_328_ = lean_unsigned_to_nat(3u);
v___x_329_ = lean_nat_div(v___x_327_, v___x_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_array_get_size(v_buckets_x27_325_);
v___x_331_ = lean_nat_dec_le(v___x_329_, v___x_330_);
lean_dec(v___x_329_);
if (v___x_331_ == 0)
{
lean_object* v_val_332_; lean_object* v___x_334_; 
v_val_332_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1___redArg(v_buckets_x27_325_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v_val_332_);
lean_ctor_set(v___x_304_, 0, v_size_x27_323_);
v___x_334_ = v___x_304_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_size_x27_323_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_val_332_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
else
{
lean_object* v___x_337_; 
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v_buckets_x27_325_);
lean_ctor_set(v___x_304_, 0, v_size_x27_323_);
v___x_337_ = v___x_304_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_size_x27_323_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_buckets_x27_325_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
else
{
lean_object* v___x_339_; lean_object* v_buckets_x27_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
lean_inc(v_bkt_320_);
v___x_339_ = lean_box(0);
v_buckets_x27_340_ = lean_array_uset(v_buckets_302_, v___x_319_, v___x_339_);
v___x_341_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2___redArg(v_a_299_, v_b_300_, v_bkt_320_);
v___x_342_ = lean_array_uset(v_buckets_x27_340_, v___x_319_, v___x_341_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v___x_342_);
v___x_344_ = v___x_304_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_size_301_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_342_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg(lean_object* v_e_347_, uint64_t v_key_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_fst_355_; lean_object* v_snd_356_; lean_object* v_cache_359_; lean_object* v_keyToExprs_360_; lean_object* v_buckets_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_352_ = lean_st_ref_get(v_a_350_);
lean_dec(v___x_352_);
v___x_353_ = lean_st_ref_take(v_a_349_);
v_cache_359_ = lean_ctor_get(v___x_353_, 0);
lean_inc_ref(v_cache_359_);
v_keyToExprs_360_ = lean_ctor_get(v___x_353_, 1);
lean_inc_ref(v_keyToExprs_360_);
v_buckets_361_ = lean_ctor_get(v_cache_359_, 1);
v___x_362_ = lean_box(0);
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = lean_array_get_size(v_buckets_361_);
v___x_365_ = lean_nat_dec_lt(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
lean_dec_ref(v_keyToExprs_360_);
lean_dec_ref(v_cache_359_);
lean_dec_ref(v_e_347_);
v_fst_355_ = v___x_362_;
v_snd_356_ = v___x_353_;
goto v___jp_354_;
}
else
{
lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; lean_object* v_unused_376_; 
v_unused_375_ = lean_ctor_get(v___x_353_, 1);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v___x_353_, 0);
lean_dec(v_unused_376_);
v___x_367_ = v___x_353_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_dec(v___x_353_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = lean_box_uint64(v_key_348_);
v___x_370_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0___redArg(v_cache_359_, v_e_347_, v___x_369_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_keyToExprs_360_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
v_fst_355_ = v___x_362_;
v_snd_356_ = v___x_372_;
goto v___jp_354_;
}
}
}
v___jp_354_:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_st_ref_set(v_a_349_, v_snd_356_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v_fst_355_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg___boxed(lean_object* v_e_377_, lean_object* v_key_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
uint64_t v_key_boxed_382_; lean_object* v_res_383_; 
v_key_boxed_382_ = lean_unbox_uint64(v_key_378_);
lean_dec_ref(v_key_378_);
v_res_383_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg(v_e_377_, v_key_boxed_382_, v_a_379_, v_a_380_);
lean_dec(v_a_380_);
lean_dec(v_a_379_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8(lean_object* v_e_384_, uint64_t v_key_385_, uint8_t v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg(v_e_384_, v_key_385_, v_a_387_, v_a_391_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___boxed(lean_object* v_e_394_, lean_object* v_key_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
uint64_t v_key_boxed_403_; uint8_t v_a_boxed_404_; lean_object* v_res_405_; 
v_key_boxed_403_ = lean_unbox_uint64(v_key_395_);
lean_dec_ref(v_key_395_);
v_a_boxed_404_ = lean_unbox(v_a_396_);
v_res_405_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8(v_e_394_, v_key_boxed_403_, v_a_boxed_404_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec(v_a_399_);
lean_dec_ref(v_a_398_);
lean_dec(v_a_397_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0(lean_object* v_00_u03b2_406_, lean_object* v_m_407_, lean_object* v_a_408_, lean_object* v_b_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0___redArg(v_m_407_, v_a_408_, v_b_409_);
return v___x_410_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0(lean_object* v_00_u03b2_411_, lean_object* v_a_412_, lean_object* v_x_413_){
_start:
{
uint8_t v___x_414_; 
v___x_414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___redArg(v_a_412_, v_x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0___boxed(lean_object* v_00_u03b2_415_, lean_object* v_a_416_, lean_object* v_x_417_){
_start:
{
uint8_t v_res_418_; lean_object* v_r_419_; 
v_res_418_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__0(v_00_u03b2_415_, v_a_416_, v_x_417_);
lean_dec(v_x_417_);
lean_dec_ref(v_a_416_);
v_r_419_ = lean_box(v_res_418_);
return v_r_419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1(lean_object* v_00_u03b2_420_, lean_object* v_data_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1___redArg(v_data_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2(lean_object* v_00_u03b2_423_, lean_object* v_a_424_, lean_object* v_b_425_, lean_object* v_x_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__2___redArg(v_a_424_, v_b_425_, v_x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_428_, lean_object* v_i_429_, lean_object* v_source_430_, lean_object* v_target_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2___redArg(v_i_429_, v_source_430_, v_target_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_433_, lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8_spec__0_spec__1_spec__2_spec__3___redArg(v_x_434_, v_x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(lean_object* v_e_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = l_Lean_Expr_hasMVar(v_e_437_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_442_, 0, v_e_437_);
return v___x_442_;
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_mctx_445_; lean_object* v___x_446_; lean_object* v_fst_447_; lean_object* v_snd_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v_cache_451_; lean_object* v_zetaDeltaFVarIds_452_; lean_object* v_postponed_453_; lean_object* v_diag_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_463_; 
v___x_443_ = lean_st_ref_get(v___y_439_);
lean_dec(v___x_443_);
v___x_444_ = lean_st_ref_get(v___y_438_);
v_mctx_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc_ref(v_mctx_445_);
lean_dec(v___x_444_);
v___x_446_ = l_Lean_instantiateMVarsCore(v_mctx_445_, v_e_437_);
v_fst_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc(v_fst_447_);
v_snd_448_ = lean_ctor_get(v___x_446_, 1);
lean_inc(v_snd_448_);
lean_dec_ref(v___x_446_);
v___x_449_ = lean_st_ref_get(v___y_439_);
lean_dec(v___x_449_);
v___x_450_ = lean_st_ref_take(v___y_438_);
v_cache_451_ = lean_ctor_get(v___x_450_, 1);
v_zetaDeltaFVarIds_452_ = lean_ctor_get(v___x_450_, 2);
v_postponed_453_ = lean_ctor_get(v___x_450_, 3);
v_diag_454_ = lean_ctor_get(v___x_450_, 4);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; 
v_unused_464_ = lean_ctor_get(v___x_450_, 0);
lean_dec(v_unused_464_);
v___x_456_ = v___x_450_;
v_isShared_457_ = v_isSharedCheck_463_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_diag_454_);
lean_inc(v_postponed_453_);
lean_inc(v_zetaDeltaFVarIds_452_);
lean_inc(v_cache_451_);
lean_dec(v___x_450_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_463_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v_snd_448_);
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_snd_448_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_cache_451_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_zetaDeltaFVarIds_452_);
lean_ctor_set(v_reuseFailAlloc_462_, 3, v_postponed_453_);
lean_ctor_set(v_reuseFailAlloc_462_, 4, v_diag_454_);
v___x_459_ = v_reuseFailAlloc_462_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_st_ref_set(v___y_438_, v___x_459_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_fst_447_);
return v___x_461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg___boxed(lean_object* v_e_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(v_e_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec(v___y_466_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0(lean_object* v_e_470_, uint8_t v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(v_e_470_, v___y_474_, v___y_476_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___boxed(lean_object* v_e_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
uint8_t v___y_13308__boxed_487_; lean_object* v_res_488_; 
v___y_13308__boxed_487_ = lean_unbox(v___y_480_);
v_res_488_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0(v_e_479_, v___y_13308__boxed_487_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
return v_res_488_;
}
}
static uint64_t _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0(void){
_start:
{
lean_object* v___x_489_; uint64_t v___x_490_; 
v___x_489_ = lean_unsigned_to_nat(1723u);
v___x_490_ = lean_uint64_of_nat(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1(void){
_start:
{
uint64_t v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_uint64_once(&l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0, &l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0_once, _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__0);
v___x_492_ = lean_box_uint64(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_unsigned_to_nat(0u);
v___x_494_ = lean_mk_empty_array_with_capacity(v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_obj_once(&l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1, &l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1_once, _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__1);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(lean_object* v_e_497_, uint8_t v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_t_506_; lean_object* v_b_507_; uint8_t v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; uint64_t v_key_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = lean_st_ref_get(v_a_503_);
lean_dec(v___x_551_);
v___x_552_ = lean_st_ref_get(v_a_499_);
v___x_553_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__1(v_e_497_, v___x_552_);
lean_dec(v___x_552_);
if (lean_obj_tag(v___x_553_) == 1)
{
lean_object* v_val_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_e_497_);
v_val_554_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_553_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_val_554_);
lean_dec(v___x_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set_tag(v___x_556_, 0);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_val_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
else
{
lean_dec(v___x_553_);
switch(lean_obj_tag(v_e_497_))
{
case 2:
{
lean_object* v___x_562_; 
lean_inc_ref(v_e_497_);
v___x_562_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(v_e_497_, v_a_501_, v_a_503_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_576_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_576_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_576_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_576_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
uint8_t v___x_567_; 
v___x_567_ = lean_expr_eqv(v_a_563_, v_e_497_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; 
lean_del_object(v___x_565_);
v___x_568_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_a_563_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; uint64_t v___x_570_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref(v___x_568_);
v___x_570_ = lean_unbox_uint64(v_a_569_);
lean_dec(v_a_569_);
v_key_530_ = v___x_570_;
v___y_531_ = v_a_499_;
v___y_532_ = v_a_503_;
goto v___jp_529_;
}
else
{
lean_dec_ref(v_e_497_);
return v___x_568_;
}
}
else
{
uint64_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
lean_dec(v_a_563_);
v___x_571_ = l_Lean_Expr_hash(v_e_497_);
lean_dec_ref(v_e_497_);
v___x_572_ = lean_box_uint64(v___x_571_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_572_);
v___x_574_ = v___x_565_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec_ref(v_e_497_);
v_a_577_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_562_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_562_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
case 4:
{
lean_object* v_declName_585_; 
v_declName_585_ = lean_ctor_get(v_e_497_, 0);
lean_inc(v_declName_585_);
lean_dec_ref(v_e_497_);
if (lean_obj_tag(v_declName_585_) == 0)
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1;
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
else
{
uint64_t v_hash_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_hash_588_ = lean_ctor_get_uint64(v_declName_585_, sizeof(void*)*2);
lean_dec(v_declName_585_);
v___x_589_ = lean_box_uint64(v_hash_588_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
case 5:
{
lean_object* v___x_591_; lean_object* v_info_593_; uint8_t v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; uint8_t v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; uint8_t v___x_626_; 
v___x_591_ = l_Lean_Expr_getAppFn(v_e_497_);
v___x_626_ = l_Lean_Expr_isMVar(v___x_591_);
if (v___x_626_ == 0)
{
v___y_607_ = v_a_498_;
v___y_608_ = v_a_499_;
v___y_609_ = v_a_500_;
v___y_610_ = v_a_501_;
v___y_611_ = v_a_502_;
v___y_612_ = v_a_503_;
goto v___jp_606_;
}
else
{
lean_object* v___x_627_; 
lean_inc_ref(v_e_497_);
v___x_627_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__0___redArg(v_e_497_, v_a_501_, v_a_503_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; uint8_t v___x_629_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref(v___x_627_);
v___x_629_ = lean_expr_eqv(v_a_628_, v_e_497_);
if (v___x_629_ == 0)
{
lean_dec_ref(v_e_497_);
lean_dec_ref(v___x_591_);
v_e_497_ = v_a_628_;
goto _start;
}
else
{
lean_dec(v_a_628_);
v___y_607_ = v_a_498_;
v___y_608_ = v_a_499_;
v___y_609_ = v_a_500_;
v___y_610_ = v_a_501_;
v___y_611_ = v_a_502_;
v___y_612_ = v_a_503_;
goto v___jp_606_;
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
lean_dec_ref(v_e_497_);
lean_dec_ref(v___x_591_);
v_a_631_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_627_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_627_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
v___jp_592_:
{
lean_object* v___x_600_; 
v___x_600_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v___x_591_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_602_; lean_object* v___x_603_; uint64_t v___x_604_; lean_object* v___x_605_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref(v___x_600_);
v___x_602_ = l_Lean_Expr_getAppNumArgs(v_e_497_);
v___x_603_ = lean_unsigned_to_nat(0u);
v___x_604_ = lean_unbox_uint64(v_a_601_);
lean_dec(v_a_601_);
v___x_605_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg(v___x_602_, v_e_497_, v___x_602_, v_info_593_, v___x_603_, v___x_604_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec_ref(v_info_593_);
lean_dec_ref(v_e_497_);
lean_dec(v___x_602_);
return v___x_605_;
}
else
{
lean_dec_ref(v_info_593_);
lean_dec_ref(v_e_497_);
return v___x_600_;
}
}
v___jp_606_:
{
uint8_t v___x_613_; 
v___x_613_ = l_Lean_Expr_hasLooseBVars(v___x_591_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_box(0);
lean_inc_ref(v___x_591_);
v___x_615_ = l_Lean_Meta_getFunInfo(v___x_591_, v___x_614_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref(v___x_615_);
v_info_593_ = v_a_616_;
v___y_594_ = v___y_607_;
v___y_595_ = v___y_608_;
v___y_596_ = v___y_609_;
v___y_597_ = v___y_610_;
v___y_598_ = v___y_611_;
v___y_599_ = v___y_612_;
goto v___jp_592_;
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_dec_ref(v_e_497_);
lean_dec_ref(v___x_591_);
v_a_617_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_615_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_615_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
else
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2, &l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2_once, _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___closed__2);
v_info_593_ = v___x_625_;
v___y_594_ = v___y_607_;
v___y_595_ = v___y_608_;
v___y_596_ = v___y_609_;
v___y_597_ = v___y_610_;
v___y_598_ = v___y_611_;
v___y_599_ = v___y_612_;
goto v___jp_592_;
}
}
}
case 6:
{
lean_object* v_binderType_639_; lean_object* v_body_640_; 
v_binderType_639_ = lean_ctor_get(v_e_497_, 1);
lean_inc_ref(v_binderType_639_);
v_body_640_ = lean_ctor_get(v_e_497_, 2);
lean_inc_ref(v_body_640_);
lean_dec_ref(v_e_497_);
v_t_506_ = v_binderType_639_;
v_b_507_ = v_body_640_;
v___y_508_ = v_a_498_;
v___y_509_ = v_a_499_;
v___y_510_ = v_a_500_;
v___y_511_ = v_a_501_;
v___y_512_ = v_a_502_;
v___y_513_ = v_a_503_;
goto v___jp_505_;
}
case 7:
{
lean_object* v_binderType_641_; lean_object* v_body_642_; 
v_binderType_641_ = lean_ctor_get(v_e_497_, 1);
lean_inc_ref(v_binderType_641_);
v_body_642_ = lean_ctor_get(v_e_497_, 2);
lean_inc_ref(v_body_642_);
lean_dec_ref(v_e_497_);
v_t_506_ = v_binderType_641_;
v_b_507_ = v_body_642_;
v___y_508_ = v_a_498_;
v___y_509_ = v_a_499_;
v___y_510_ = v_a_500_;
v___y_511_ = v_a_501_;
v___y_512_ = v_a_502_;
v___y_513_ = v_a_503_;
goto v___jp_505_;
}
case 8:
{
lean_object* v_value_643_; lean_object* v_body_644_; lean_object* v___x_645_; 
v_value_643_ = lean_ctor_get(v_e_497_, 2);
lean_inc_ref(v_value_643_);
v_body_644_ = lean_ctor_get(v_e_497_, 3);
lean_inc_ref(v_body_644_);
lean_dec_ref(v_e_497_);
v___x_645_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_value_643_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref(v___x_645_);
v___x_647_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_body_644_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_659_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_659_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
uint64_t v___x_652_; uint64_t v___x_653_; uint64_t v___x_654_; lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_652_ = lean_unbox_uint64(v_a_646_);
lean_dec(v_a_646_);
v___x_653_ = lean_unbox_uint64(v_a_648_);
lean_dec(v_a_648_);
v___x_654_ = lean_uint64_mix_hash(v___x_652_, v___x_653_);
v___x_655_ = lean_box_uint64(v___x_654_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_655_);
v___x_657_ = v___x_650_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_dec(v_a_646_);
return v___x_647_;
}
}
else
{
lean_dec_ref(v_body_644_);
return v___x_645_;
}
}
case 10:
{
lean_object* v_expr_660_; lean_object* v___x_661_; 
v_expr_660_ = lean_ctor_get(v_e_497_, 1);
lean_inc_ref(v_expr_660_);
v___x_661_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_expr_660_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; uint64_t v___x_663_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref(v___x_661_);
v___x_663_ = lean_unbox_uint64(v_a_662_);
lean_dec(v_a_662_);
v_key_530_ = v___x_663_;
v___y_531_ = v_a_499_;
v___y_532_ = v_a_503_;
goto v___jp_529_;
}
else
{
lean_dec_ref(v_e_497_);
return v___x_661_;
}
}
case 11:
{
lean_object* v_idx_664_; lean_object* v_struct_665_; lean_object* v___x_666_; 
v_idx_664_ = lean_ctor_get(v_e_497_, 1);
lean_inc(v_idx_664_);
v_struct_665_ = lean_ctor_get(v_e_497_, 2);
lean_inc_ref(v_struct_665_);
lean_dec_ref(v_e_497_);
v___x_666_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_struct_665_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_678_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_678_ == 0)
{
v___x_669_ = v___x_666_;
v_isShared_670_ = v_isSharedCheck_678_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_678_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
uint64_t v___x_671_; uint64_t v___x_672_; uint64_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_671_ = lean_uint64_of_nat(v_idx_664_);
lean_dec(v_idx_664_);
v___x_672_ = lean_unbox_uint64(v_a_667_);
lean_dec(v_a_667_);
v___x_673_ = lean_uint64_mix_hash(v___x_671_, v___x_672_);
v___x_674_ = lean_box_uint64(v___x_673_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_674_);
v___x_676_ = v___x_669_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
else
{
lean_dec(v_idx_664_);
return v___x_666_;
}
}
default: 
{
uint64_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = l_Lean_Expr_hash(v_e_497_);
lean_dec_ref(v_e_497_);
v___x_680_ = lean_box_uint64(v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
}
v___jp_505_:
{
lean_object* v___x_514_; 
v___x_514_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_t_506_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v___x_514_);
v___x_516_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_b_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_528_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_528_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_528_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_528_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
uint64_t v___x_521_; uint64_t v___x_522_; uint64_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_521_ = lean_unbox_uint64(v_a_515_);
lean_dec(v_a_515_);
v___x_522_ = lean_unbox_uint64(v_a_517_);
lean_dec(v_a_517_);
v___x_523_ = lean_uint64_mix_hash(v___x_521_, v___x_522_);
v___x_524_ = lean_box_uint64(v___x_523_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_524_);
v___x_526_ = v___x_519_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
else
{
lean_dec(v_a_515_);
return v___x_516_;
}
}
else
{
lean_dec_ref(v_b_507_);
return v___x_514_;
}
}
v___jp_529_:
{
lean_object* v___x_533_; 
v___x_533_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_unsafe__8___redArg(v_e_497_, v_key_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_541_; 
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_541_ == 0)
{
lean_object* v_unused_542_; 
v_unused_542_ = lean_ctor_get(v___x_533_, 0);
lean_dec(v_unused_542_);
v___x_535_ = v___x_533_;
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
else
{
lean_dec(v___x_533_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = lean_box_uint64(v_key_530_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_537_);
v___x_539_ = v___x_535_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
v_a_543_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_533_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_533_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg(lean_object* v___x_682_, lean_object* v_e_683_, lean_object* v_upperBound_684_, lean_object* v_info_685_, lean_object* v_a_686_, uint64_t v_b_687_, uint8_t v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
uint64_t v_a_696_; uint8_t v___y_701_; uint8_t v___x_710_; 
v___x_710_ = lean_nat_dec_lt(v_a_686_, v_upperBound_684_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec(v_a_686_);
v___x_711_ = lean_box_uint64(v_b_687_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
return v___x_712_;
}
else
{
lean_object* v_paramInfo_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_paramInfo_713_ = lean_ctor_get(v_info_685_, 0);
v___x_714_ = lean_array_get_size(v_paramInfo_713_);
v___x_715_ = lean_nat_dec_lt(v_a_686_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_716_ = lean_nat_sub(v___x_682_, v_a_686_);
v___x_717_ = lean_unsigned_to_nat(1u);
v___x_718_ = lean_nat_sub(v___x_716_, v___x_717_);
lean_dec(v___x_716_);
v___x_719_ = l_Lean_Expr_getRevArg_x21(v_e_683_, v___x_718_);
v___x_720_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v___x_719_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; uint64_t v___x_722_; uint64_t v___x_723_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref(v___x_720_);
v___x_722_ = lean_unbox_uint64(v_a_721_);
lean_dec(v_a_721_);
v___x_723_ = lean_uint64_mix_hash(v_b_687_, v___x_722_);
v_a_696_ = v___x_723_;
goto v___jp_695_;
}
else
{
lean_dec(v_a_686_);
return v___x_720_;
}
}
else
{
lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_724_ = lean_array_fget_borrowed(v_paramInfo_713_, v_a_686_);
v___x_725_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_724_);
if (v___x_725_ == 0)
{
v___y_701_ = v___x_725_;
goto v___jp_700_;
}
else
{
uint8_t v_isProp_726_; 
v_isProp_726_ = lean_ctor_get_uint8(v___x_724_, sizeof(void*)*1 + 2);
if (v_isProp_726_ == 0)
{
v___y_701_ = v___x_725_;
goto v___jp_700_;
}
else
{
v_a_696_ = v_b_687_;
goto v___jp_695_;
}
}
}
}
v___jp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_nat_add(v_a_686_, v___x_697_);
lean_dec(v_a_686_);
v_a_686_ = v___x_698_;
v_b_687_ = v_a_696_;
goto _start;
}
v___jp_700_:
{
if (v___y_701_ == 0)
{
v_a_696_ = v_b_687_;
goto v___jp_695_;
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_702_ = lean_nat_sub(v___x_682_, v_a_686_);
v___x_703_ = lean_unsigned_to_nat(1u);
v___x_704_ = lean_nat_sub(v___x_702_, v___x_703_);
lean_dec(v___x_702_);
v___x_705_ = l_Lean_Expr_getRevArg_x21(v_e_683_, v___x_704_);
v___x_706_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v___x_705_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; uint64_t v___x_708_; uint64_t v___x_709_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref(v___x_706_);
v___x_708_ = lean_unbox_uint64(v_a_707_);
lean_dec(v_a_707_);
v___x_709_ = lean_uint64_mix_hash(v_b_687_, v___x_708_);
v_a_696_ = v___x_709_;
goto v___jp_695_;
}
else
{
lean_dec(v_a_686_);
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg___boxed(lean_object* v___x_727_, lean_object* v_e_728_, lean_object* v_upperBound_729_, lean_object* v_info_730_, lean_object* v_a_731_, lean_object* v_b_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
uint64_t v_b_boxed_740_; uint8_t v___y_13340__boxed_741_; lean_object* v_res_742_; 
v_b_boxed_740_ = lean_unbox_uint64(v_b_732_);
lean_dec_ref(v_b_732_);
v___y_13340__boxed_741_ = lean_unbox(v___y_733_);
v_res_742_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg(v___x_727_, v_e_728_, v_upperBound_729_, v_info_730_, v_a_731_, v_b_boxed_740_, v___y_13340__boxed_741_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v_info_730_);
lean_dec(v_upperBound_729_);
lean_dec_ref(v_e_728_);
lean_dec(v___x_727_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed(lean_object* v_e_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
uint8_t v_a_boxed_751_; lean_object* v_res_752_; 
v_a_boxed_751_ = lean_unbox(v_a_744_);
v_res_752_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_e_743_, v_a_boxed_751_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1(lean_object* v___x_753_, lean_object* v_e_754_, lean_object* v_upperBound_755_, lean_object* v_info_756_, lean_object* v_inst_757_, lean_object* v_R_758_, lean_object* v_a_759_, uint64_t v_b_760_, lean_object* v_c_761_, uint8_t v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___redArg(v___x_753_, v_e_754_, v_upperBound_755_, v_info_756_, v_a_759_, v_b_760_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1___boxed(lean_object* v___x_770_, lean_object* v_e_771_, lean_object* v_upperBound_772_, lean_object* v_info_773_, lean_object* v_inst_774_, lean_object* v_R_775_, lean_object* v_a_776_, lean_object* v_b_777_, lean_object* v_c_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
uint64_t v_b_boxed_786_; uint8_t v___y_13817__boxed_787_; lean_object* v_res_788_; 
v_b_boxed_786_ = lean_unbox_uint64(v_b_777_);
lean_dec_ref(v_b_777_);
v___y_13817__boxed_787_ = lean_unbox(v___y_779_);
v_res_788_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey_spec__1(v___x_770_, v_e_771_, v_upperBound_772_, v_info_773_, v_inst_774_, v_R_775_, v_a_776_, v_b_boxed_786_, v_c_778_, v___y_13817__boxed_787_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v_info_773_);
lean_dec(v_upperBound_772_);
lean_dec_ref(v_e_771_);
lean_dec(v___x_770_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg(uint64_t v_a_789_, lean_object* v_x_790_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_box(0);
return v___x_791_;
}
else
{
lean_object* v_key_792_; lean_object* v_value_793_; lean_object* v_tail_794_; uint64_t v___x_795_; uint8_t v___x_796_; 
v_key_792_ = lean_ctor_get(v_x_790_, 0);
v_value_793_ = lean_ctor_get(v_x_790_, 1);
v_tail_794_ = lean_ctor_get(v_x_790_, 2);
v___x_795_ = lean_unbox_uint64(v_key_792_);
v___x_796_ = lean_uint64_dec_eq(v___x_795_, v_a_789_);
if (v___x_796_ == 0)
{
v_x_790_ = v_tail_794_;
goto _start;
}
else
{
lean_object* v___x_798_; 
lean_inc(v_value_793_);
v___x_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_798_, 0, v_value_793_);
return v___x_798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object* v_a_799_, lean_object* v_x_800_){
_start:
{
uint64_t v_a_boxed_801_; lean_object* v_res_802_; 
v_a_boxed_801_ = lean_unbox_uint64(v_a_799_);
lean_dec_ref(v_a_799_);
v_res_802_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg(v_a_boxed_801_, v_x_800_);
lean_dec(v_x_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg(lean_object* v_m_803_, uint64_t v_a_804_){
_start:
{
lean_object* v_buckets_805_; lean_object* v___x_806_; uint64_t v___x_807_; uint64_t v___x_808_; uint64_t v_fold_809_; uint64_t v___x_810_; uint64_t v___x_811_; uint64_t v___x_812_; size_t v___x_813_; size_t v___x_814_; size_t v___x_815_; size_t v___x_816_; size_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_buckets_805_ = lean_ctor_get(v_m_803_, 1);
v___x_806_ = lean_array_get_size(v_buckets_805_);
v___x_807_ = 32ULL;
v___x_808_ = lean_uint64_shift_right(v_a_804_, v___x_807_);
v_fold_809_ = lean_uint64_xor(v_a_804_, v___x_808_);
v___x_810_ = 16ULL;
v___x_811_ = lean_uint64_shift_right(v_fold_809_, v___x_810_);
v___x_812_ = lean_uint64_xor(v_fold_809_, v___x_811_);
v___x_813_ = lean_uint64_to_usize(v___x_812_);
v___x_814_ = lean_usize_of_nat(v___x_806_);
v___x_815_ = ((size_t)1ULL);
v___x_816_ = lean_usize_sub(v___x_814_, v___x_815_);
v___x_817_ = lean_usize_land(v___x_813_, v___x_816_);
v___x_818_ = lean_array_uget_borrowed(v_buckets_805_, v___x_817_);
v___x_819_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg(v_a_804_, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg___boxed(lean_object* v_m_820_, lean_object* v_a_821_){
_start:
{
uint64_t v_a_boxed_822_; lean_object* v_res_823_; 
v_a_boxed_822_ = lean_unbox_uint64(v_a_821_);
lean_dec_ref(v_a_821_);
v_res_823_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg(v_m_820_, v_a_boxed_822_);
lean_dec_ref(v_m_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1(uint64_t v_k_824_, lean_object* v_____do__lift_825_){
_start:
{
lean_object* v_keyToExprs_826_; lean_object* v___x_827_; 
v_keyToExprs_826_ = lean_ctor_get(v_____do__lift_825_, 1);
v___x_827_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg(v_keyToExprs_826_, v_k_824_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1___boxed(lean_object* v_k_828_, lean_object* v_____do__lift_829_){
_start:
{
uint64_t v_k_boxed_830_; lean_object* v_res_831_; 
v_k_boxed_830_ = lean_unbox_uint64(v_k_828_);
lean_dec_ref(v_k_828_);
v_res_831_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1(v_k_boxed_830_, v_____do__lift_829_);
lean_dec_ref(v_____do__lift_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0(lean_object* v_00_u03b2_832_, lean_object* v_m_833_, uint64_t v_a_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___redArg(v_m_833_, v_a_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0___boxed(lean_object* v_00_u03b2_836_, lean_object* v_m_837_, lean_object* v_a_838_){
_start:
{
uint64_t v_a_boxed_839_; lean_object* v_res_840_; 
v_a_boxed_839_ = lean_unbox_uint64(v_a_838_);
lean_dec_ref(v_a_838_);
v_res_840_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0(v_00_u03b2_836_, v_m_837_, v_a_boxed_839_);
lean_dec_ref(v_m_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0(lean_object* v_00_u03b2_841_, uint64_t v_a_842_, lean_object* v_x_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___redArg(v_a_842_, v_x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0___boxed(lean_object* v_00_u03b2_845_, lean_object* v_a_846_, lean_object* v_x_847_){
_start:
{
uint64_t v_a_boxed_848_; lean_object* v_res_849_; 
v_a_boxed_848_ = lean_unbox_uint64(v_a_846_);
lean_dec_ref(v_a_846_);
v_res_849_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1_spec__0_spec__0(v_00_u03b2_845_, v_a_boxed_848_, v_x_847_);
lean_dec(v_x_847_);
return v_res_849_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg(uint64_t v_a_850_, lean_object* v_x_851_){
_start:
{
if (lean_obj_tag(v_x_851_) == 0)
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
else
{
lean_object* v_key_853_; lean_object* v_tail_854_; uint64_t v___x_855_; uint8_t v___x_856_; 
v_key_853_ = lean_ctor_get(v_x_851_, 0);
v_tail_854_ = lean_ctor_get(v_x_851_, 2);
v___x_855_ = lean_unbox_uint64(v_key_853_);
v___x_856_ = lean_uint64_dec_eq(v___x_855_, v_a_850_);
if (v___x_856_ == 0)
{
v_x_851_ = v_tail_854_;
goto _start;
}
else
{
return v___x_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg___boxed(lean_object* v_a_858_, lean_object* v_x_859_){
_start:
{
uint64_t v_a_boxed_860_; uint8_t v_res_861_; lean_object* v_r_862_; 
v_a_boxed_860_ = lean_unbox_uint64(v_a_858_);
lean_dec_ref(v_a_858_);
v_res_861_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg(v_a_boxed_860_, v_x_859_);
lean_dec(v_x_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(uint64_t v_a_863_, lean_object* v_b_864_, lean_object* v_x_865_){
_start:
{
if (lean_obj_tag(v_x_865_) == 0)
{
lean_dec(v_b_864_);
return v_x_865_;
}
else
{
lean_object* v_key_866_; lean_object* v_value_867_; lean_object* v_tail_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_882_; 
v_key_866_ = lean_ctor_get(v_x_865_, 0);
v_value_867_ = lean_ctor_get(v_x_865_, 1);
v_tail_868_ = lean_ctor_get(v_x_865_, 2);
v_isSharedCheck_882_ = !lean_is_exclusive(v_x_865_);
if (v_isSharedCheck_882_ == 0)
{
v___x_870_ = v_x_865_;
v_isShared_871_ = v_isSharedCheck_882_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_tail_868_);
lean_inc(v_value_867_);
lean_inc(v_key_866_);
lean_dec(v_x_865_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_882_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
uint64_t v___x_872_; uint8_t v___x_873_; 
v___x_872_ = lean_unbox_uint64(v_key_866_);
v___x_873_ = lean_uint64_dec_eq(v___x_872_, v_a_863_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; lean_object* v___x_876_; 
v___x_874_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(v_a_863_, v_b_864_, v_tail_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 2, v___x_874_);
v___x_876_ = v___x_870_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_key_866_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_value_867_);
lean_ctor_set(v_reuseFailAlloc_877_, 2, v___x_874_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
else
{
lean_object* v___x_878_; lean_object* v___x_880_; 
lean_dec(v_value_867_);
lean_dec(v_key_866_);
v___x_878_ = lean_box_uint64(v_a_863_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v_b_864_);
lean_ctor_set(v___x_870_, 0, v___x_878_);
v___x_880_ = v___x_870_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_b_864_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_tail_868_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg___boxed(lean_object* v_a_883_, lean_object* v_b_884_, lean_object* v_x_885_){
_start:
{
uint64_t v_a_boxed_886_; lean_object* v_res_887_; 
v_a_boxed_886_ = lean_unbox_uint64(v_a_883_);
lean_dec_ref(v_a_883_);
v_res_887_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(v_a_boxed_886_, v_b_884_, v_x_885_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
if (lean_obj_tag(v_x_889_) == 0)
{
return v_x_888_;
}
else
{
lean_object* v_key_890_; lean_object* v_value_891_; lean_object* v_tail_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_916_; 
v_key_890_ = lean_ctor_get(v_x_889_, 0);
v_value_891_ = lean_ctor_get(v_x_889_, 1);
v_tail_892_ = lean_ctor_get(v_x_889_, 2);
v_isSharedCheck_916_ = !lean_is_exclusive(v_x_889_);
if (v_isSharedCheck_916_ == 0)
{
v___x_894_ = v_x_889_;
v_isShared_895_ = v_isSharedCheck_916_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_tail_892_);
lean_inc(v_value_891_);
lean_inc(v_key_890_);
lean_dec(v_x_889_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_916_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; uint64_t v___x_897_; uint64_t v___x_898_; uint64_t v___x_899_; uint64_t v___x_900_; uint64_t v_fold_901_; uint64_t v___x_902_; uint64_t v___x_903_; uint64_t v___x_904_; size_t v___x_905_; size_t v___x_906_; size_t v___x_907_; size_t v___x_908_; size_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_896_ = lean_array_get_size(v_x_888_);
v___x_897_ = 32ULL;
v___x_898_ = lean_unbox_uint64(v_key_890_);
v___x_899_ = lean_uint64_shift_right(v___x_898_, v___x_897_);
v___x_900_ = lean_unbox_uint64(v_key_890_);
v_fold_901_ = lean_uint64_xor(v___x_900_, v___x_899_);
v___x_902_ = 16ULL;
v___x_903_ = lean_uint64_shift_right(v_fold_901_, v___x_902_);
v___x_904_ = lean_uint64_xor(v_fold_901_, v___x_903_);
v___x_905_ = lean_uint64_to_usize(v___x_904_);
v___x_906_ = lean_usize_of_nat(v___x_896_);
v___x_907_ = ((size_t)1ULL);
v___x_908_ = lean_usize_sub(v___x_906_, v___x_907_);
v___x_909_ = lean_usize_land(v___x_905_, v___x_908_);
v___x_910_ = lean_array_uget_borrowed(v_x_888_, v___x_909_);
lean_inc(v___x_910_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 2, v___x_910_);
v___x_912_ = v___x_894_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_key_890_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_value_891_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v___x_910_);
v___x_912_ = v_reuseFailAlloc_915_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_array_uset(v_x_888_, v___x_909_, v___x_912_);
v_x_888_ = v___x_913_;
v_x_889_ = v_tail_892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3___redArg(lean_object* v_i_917_, lean_object* v_source_918_, lean_object* v_target_919_){
_start:
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_array_get_size(v_source_918_);
v___x_921_ = lean_nat_dec_lt(v_i_917_, v___x_920_);
if (v___x_921_ == 0)
{
lean_dec_ref(v_source_918_);
lean_dec(v_i_917_);
return v_target_919_;
}
else
{
lean_object* v_es_922_; lean_object* v___x_923_; lean_object* v_source_924_; lean_object* v_target_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_es_922_ = lean_array_fget(v_source_918_, v_i_917_);
v___x_923_ = lean_box(0);
v_source_924_ = lean_array_fset(v_source_918_, v_i_917_, v___x_923_);
v_target_925_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4___redArg(v_target_919_, v_es_922_);
v___x_926_ = lean_unsigned_to_nat(1u);
v___x_927_ = lean_nat_add(v_i_917_, v___x_926_);
lean_dec(v_i_917_);
v_i_917_ = v___x_927_;
v_source_918_ = v_source_924_;
v_target_919_ = v_target_925_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2___redArg(lean_object* v_data_929_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_nbuckets_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_930_ = lean_array_get_size(v_data_929_);
v___x_931_ = lean_unsigned_to_nat(2u);
v_nbuckets_932_ = lean_nat_mul(v___x_930_, v___x_931_);
v___x_933_ = lean_unsigned_to_nat(0u);
v___x_934_ = lean_box(0);
v___x_935_ = lean_mk_array(v_nbuckets_932_, v___x_934_);
v___x_936_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3___redArg(v___x_933_, v_data_929_, v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(lean_object* v_m_937_, uint64_t v_a_938_, lean_object* v_b_939_){
_start:
{
lean_object* v_size_940_; lean_object* v_buckets_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_984_; 
v_size_940_ = lean_ctor_get(v_m_937_, 0);
v_buckets_941_ = lean_ctor_get(v_m_937_, 1);
v_isSharedCheck_984_ = !lean_is_exclusive(v_m_937_);
if (v_isSharedCheck_984_ == 0)
{
v___x_943_ = v_m_937_;
v_isShared_944_ = v_isSharedCheck_984_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_buckets_941_);
lean_inc(v_size_940_);
lean_dec(v_m_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_984_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; uint64_t v___x_946_; uint64_t v___x_947_; uint64_t v_fold_948_; uint64_t v___x_949_; uint64_t v___x_950_; uint64_t v___x_951_; size_t v___x_952_; size_t v___x_953_; size_t v___x_954_; size_t v___x_955_; size_t v___x_956_; lean_object* v_bkt_957_; uint8_t v___x_958_; 
v___x_945_ = lean_array_get_size(v_buckets_941_);
v___x_946_ = 32ULL;
v___x_947_ = lean_uint64_shift_right(v_a_938_, v___x_946_);
v_fold_948_ = lean_uint64_xor(v_a_938_, v___x_947_);
v___x_949_ = 16ULL;
v___x_950_ = lean_uint64_shift_right(v_fold_948_, v___x_949_);
v___x_951_ = lean_uint64_xor(v_fold_948_, v___x_950_);
v___x_952_ = lean_uint64_to_usize(v___x_951_);
v___x_953_ = lean_usize_of_nat(v___x_945_);
v___x_954_ = ((size_t)1ULL);
v___x_955_ = lean_usize_sub(v___x_953_, v___x_954_);
v___x_956_ = lean_usize_land(v___x_952_, v___x_955_);
v_bkt_957_ = lean_array_uget_borrowed(v_buckets_941_, v___x_956_);
v___x_958_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg(v_a_938_, v_bkt_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v_size_x27_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_buckets_x27_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_959_ = lean_unsigned_to_nat(1u);
v_size_x27_960_ = lean_nat_add(v_size_940_, v___x_959_);
lean_dec(v_size_940_);
v___x_961_ = lean_box_uint64(v_a_938_);
lean_inc(v_bkt_957_);
v___x_962_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
lean_ctor_set(v___x_962_, 1, v_b_939_);
lean_ctor_set(v___x_962_, 2, v_bkt_957_);
v_buckets_x27_963_ = lean_array_uset(v_buckets_941_, v___x_956_, v___x_962_);
v___x_964_ = lean_unsigned_to_nat(4u);
v___x_965_ = lean_nat_mul(v_size_x27_960_, v___x_964_);
v___x_966_ = lean_unsigned_to_nat(3u);
v___x_967_ = lean_nat_div(v___x_965_, v___x_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_array_get_size(v_buckets_x27_963_);
v___x_969_ = lean_nat_dec_le(v___x_967_, v___x_968_);
lean_dec(v___x_967_);
if (v___x_969_ == 0)
{
lean_object* v_val_970_; lean_object* v___x_972_; 
v_val_970_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2___redArg(v_buckets_x27_963_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_val_970_);
lean_ctor_set(v___x_943_, 0, v_size_x27_960_);
v___x_972_ = v___x_943_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_size_x27_960_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_val_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
else
{
lean_object* v___x_975_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v_buckets_x27_963_);
lean_ctor_set(v___x_943_, 0, v_size_x27_960_);
v___x_975_ = v___x_943_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_size_x27_960_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_buckets_x27_963_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
else
{
lean_object* v___x_977_; lean_object* v_buckets_x27_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
lean_inc(v_bkt_957_);
v___x_977_ = lean_box(0);
v_buckets_x27_978_ = lean_array_uset(v_buckets_941_, v___x_956_, v___x_977_);
v___x_979_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(v_a_938_, v_b_939_, v_bkt_957_);
v___x_980_ = lean_array_uset(v_buckets_x27_978_, v___x_956_, v___x_979_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_980_);
v___x_982_ = v___x_943_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_size_940_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg___boxed(lean_object* v_m_985_, lean_object* v_a_986_, lean_object* v_b_987_){
_start:
{
uint64_t v_a_boxed_988_; lean_object* v_res_989_; 
v_a_boxed_988_ = lean_unbox_uint64(v_a_986_);
lean_dec_ref(v_a_986_);
v_res_989_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(v_m_985_, v_a_boxed_988_, v_b_987_);
return v_res_989_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_990_ = lean_box(0);
v___x_991_ = lean_box(0);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v___x_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg(lean_object* v_e_993_, lean_object* v_as_x27_994_, lean_object* v_b_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
if (lean_obj_tag(v_as_x27_994_) == 0)
{
lean_object* v___x_1001_; 
lean_dec_ref(v_e_993_);
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v_b_995_);
return v___x_1001_;
}
else
{
lean_object* v_head_1002_; lean_object* v_tail_1003_; lean_object* v___x_1004_; 
lean_dec_ref(v_b_995_);
v_head_1002_ = lean_ctor_get(v_as_x27_994_, 0);
v_tail_1003_ = lean_ctor_get(v_as_x27_994_, 1);
lean_inc(v_head_1002_);
lean_inc_ref(v_e_993_);
v___x_1004_ = l_Lean_Meta_isExprDefEq(v_e_993_, v_head_1002_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1018_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1018_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1018_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_unbox(v_a_1005_);
lean_dec(v_a_1005_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
lean_del_object(v___x_1007_);
v___x_1011_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0);
v_as_x27_994_ = v_tail_1003_;
v_b_995_ = v___x_1011_;
goto _start;
}
else
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_dec_ref(v_e_993_);
lean_inc(v_head_1002_);
v___x_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_head_1002_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_1009_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1014_);
v___x_1016_ = v___x_1007_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_dec_ref(v_e_993_);
v_a_1019_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1004_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1004_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___boxed(lean_object* v_e_1027_, lean_object* v_as_x27_1028_, lean_object* v_b_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg(v_e_1027_, v_as_x27_1028_, v_b_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v_as_x27_1028_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_canon(lean_object* v_e_1036_, uint8_t v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v___x_1044_; 
lean_inc_ref(v_e_1036_);
v___x_1044_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey(v_e_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1162_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1162_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1162_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; uint64_t v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = lean_st_ref_get(v_a_1042_);
lean_dec(v___x_1049_);
v___x_1050_ = lean_st_ref_get(v_a_1038_);
v___x_1051_ = lean_unbox_uint64(v_a_1045_);
v___x_1052_ = l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_canon_unsafe__1(v___x_1051_, v___x_1050_);
lean_dec(v___x_1050_);
if (lean_obj_tag(v___x_1052_) == 1)
{
lean_object* v_val_1053_; lean_object* v___x_1054_; uint8_t v_foApprox_1055_; uint8_t v_ctxApprox_1056_; uint8_t v_quasiPatternApprox_1057_; uint8_t v_constApprox_1058_; uint8_t v_isDefEqStuckEx_1059_; uint8_t v_unificationHints_1060_; uint8_t v_proofIrrelevance_1061_; uint8_t v_assignSyntheticOpaque_1062_; uint8_t v_offsetCnstrs_1063_; uint8_t v_etaStruct_1064_; uint8_t v_univApprox_1065_; uint8_t v_iota_1066_; uint8_t v_beta_1067_; uint8_t v_proj_1068_; uint8_t v_zeta_1069_; uint8_t v_zetaDelta_1070_; uint8_t v_zetaUnused_1071_; uint8_t v_zetaHave_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1142_; 
lean_del_object(v___x_1047_);
v_val_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_val_1053_);
lean_dec_ref(v___x_1052_);
v___x_1054_ = l_Lean_Meta_Context_config(v_a_1039_);
v_foApprox_1055_ = lean_ctor_get_uint8(v___x_1054_, 0);
v_ctxApprox_1056_ = lean_ctor_get_uint8(v___x_1054_, 1);
v_quasiPatternApprox_1057_ = lean_ctor_get_uint8(v___x_1054_, 2);
v_constApprox_1058_ = lean_ctor_get_uint8(v___x_1054_, 3);
v_isDefEqStuckEx_1059_ = lean_ctor_get_uint8(v___x_1054_, 4);
v_unificationHints_1060_ = lean_ctor_get_uint8(v___x_1054_, 5);
v_proofIrrelevance_1061_ = lean_ctor_get_uint8(v___x_1054_, 6);
v_assignSyntheticOpaque_1062_ = lean_ctor_get_uint8(v___x_1054_, 7);
v_offsetCnstrs_1063_ = lean_ctor_get_uint8(v___x_1054_, 8);
v_etaStruct_1064_ = lean_ctor_get_uint8(v___x_1054_, 10);
v_univApprox_1065_ = lean_ctor_get_uint8(v___x_1054_, 11);
v_iota_1066_ = lean_ctor_get_uint8(v___x_1054_, 12);
v_beta_1067_ = lean_ctor_get_uint8(v___x_1054_, 13);
v_proj_1068_ = lean_ctor_get_uint8(v___x_1054_, 14);
v_zeta_1069_ = lean_ctor_get_uint8(v___x_1054_, 15);
v_zetaDelta_1070_ = lean_ctor_get_uint8(v___x_1054_, 16);
v_zetaUnused_1071_ = lean_ctor_get_uint8(v___x_1054_, 17);
v_zetaHave_1072_ = lean_ctor_get_uint8(v___x_1054_, 18);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1074_ = v___x_1054_;
v_isShared_1075_ = v_isSharedCheck_1142_;
goto v_resetjp_1073_;
}
else
{
lean_dec(v___x_1054_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1142_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
uint8_t v_trackZetaDelta_1076_; lean_object* v_zetaDeltaSet_1077_; lean_object* v_lctx_1078_; lean_object* v_localInstances_1079_; lean_object* v_defEqCtx_x3f_1080_; lean_object* v_synthPendingDepth_1081_; lean_object* v_canUnfold_x3f_1082_; uint8_t v_univApprox_1083_; uint8_t v_inTypeClassResolution_1084_; uint8_t v_cacheInferType_1085_; lean_object* v_config_1087_; 
v_trackZetaDelta_1076_ = lean_ctor_get_uint8(v_a_1039_, sizeof(void*)*7);
v_zetaDeltaSet_1077_ = lean_ctor_get(v_a_1039_, 1);
v_lctx_1078_ = lean_ctor_get(v_a_1039_, 2);
v_localInstances_1079_ = lean_ctor_get(v_a_1039_, 3);
v_defEqCtx_x3f_1080_ = lean_ctor_get(v_a_1039_, 4);
v_synthPendingDepth_1081_ = lean_ctor_get(v_a_1039_, 5);
v_canUnfold_x3f_1082_ = lean_ctor_get(v_a_1039_, 6);
v_univApprox_1083_ = lean_ctor_get_uint8(v_a_1039_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1084_ = lean_ctor_get_uint8(v_a_1039_, sizeof(void*)*7 + 2);
v_cacheInferType_1085_ = lean_ctor_get_uint8(v_a_1039_, sizeof(void*)*7 + 3);
if (v_isShared_1075_ == 0)
{
v_config_1087_ = v___x_1074_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 0, v_foApprox_1055_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 1, v_ctxApprox_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 2, v_quasiPatternApprox_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 3, v_constApprox_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 4, v_isDefEqStuckEx_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 5, v_unificationHints_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 6, v_proofIrrelevance_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 7, v_assignSyntheticOpaque_1062_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 8, v_offsetCnstrs_1063_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 10, v_etaStruct_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 11, v_univApprox_1065_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 12, v_iota_1066_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 13, v_beta_1067_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 14, v_proj_1068_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 15, v_zeta_1069_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 16, v_zetaDelta_1070_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 17, v_zetaUnused_1071_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, 18, v_zetaHave_1072_);
v_config_1087_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
uint64_t v___x_1088_; uint64_t v___x_1089_; uint64_t v___x_1090_; lean_object* v___x_1091_; uint64_t v___x_1092_; uint64_t v___x_1093_; uint64_t v_key_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_ctor_set_uint8(v_config_1087_, 9, v_a_1037_);
v___x_1088_ = l_Lean_Meta_Context_configKey(v_a_1039_);
v___x_1089_ = 2ULL;
v___x_1090_ = lean_uint64_shift_right(v___x_1088_, v___x_1089_);
v___x_1091_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg___closed__0);
v___x_1092_ = lean_uint64_shift_left(v___x_1090_, v___x_1089_);
v___x_1093_ = l_Lean_Meta_TransparencyMode_toUInt64(v_a_1037_);
v_key_1094_ = lean_uint64_lor(v___x_1092_, v___x_1093_);
v___x_1095_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1095_, 0, v_config_1087_);
lean_ctor_set_uint64(v___x_1095_, sizeof(void*)*1, v_key_1094_);
lean_inc(v_canUnfold_x3f_1082_);
lean_inc(v_synthPendingDepth_1081_);
lean_inc(v_defEqCtx_x3f_1080_);
lean_inc_ref(v_localInstances_1079_);
lean_inc_ref(v_lctx_1078_);
lean_inc(v_zetaDeltaSet_1077_);
v___x_1096_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
lean_ctor_set(v___x_1096_, 1, v_zetaDeltaSet_1077_);
lean_ctor_set(v___x_1096_, 2, v_lctx_1078_);
lean_ctor_set(v___x_1096_, 3, v_localInstances_1079_);
lean_ctor_set(v___x_1096_, 4, v_defEqCtx_x3f_1080_);
lean_ctor_set(v___x_1096_, 5, v_synthPendingDepth_1081_);
lean_ctor_set(v___x_1096_, 6, v_canUnfold_x3f_1082_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*7, v_trackZetaDelta_1076_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*7 + 1, v_univApprox_1083_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1084_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*7 + 3, v_cacheInferType_1085_);
lean_inc_ref(v_e_1036_);
v___x_1097_ = l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg(v_e_1036_, v_val_1053_, v___x_1091_, v___x_1096_, v_a_1040_, v_a_1041_, v_a_1042_);
lean_dec_ref(v___x_1096_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1132_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1100_ = v___x_1097_;
v_isShared_1101_ = v_isSharedCheck_1132_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1132_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v_fst_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1130_; 
v_fst_1102_ = lean_ctor_get(v_a_1098_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_a_1098_);
if (v_isSharedCheck_1130_ == 0)
{
lean_object* v_unused_1131_; 
v_unused_1131_ = lean_ctor_get(v_a_1098_, 1);
lean_dec(v_unused_1131_);
v___x_1104_ = v_a_1098_;
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_fst_1102_);
lean_dec(v_a_1098_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
if (lean_obj_tag(v_fst_1102_) == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v_cache_1108_; lean_object* v_keyToExprs_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1125_; 
v___x_1106_ = lean_st_ref_get(v_a_1042_);
lean_dec(v___x_1106_);
v___x_1107_ = lean_st_ref_take(v_a_1038_);
v_cache_1108_ = lean_ctor_get(v___x_1107_, 0);
v_keyToExprs_1109_ = lean_ctor_get(v___x_1107_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1111_ = v___x_1107_;
v_isShared_1112_ = v_isSharedCheck_1125_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_keyToExprs_1109_);
lean_inc(v_cache_1108_);
lean_dec(v___x_1107_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1125_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
lean_inc_ref(v_e_1036_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set_tag(v___x_1104_, 1);
lean_ctor_set(v___x_1104_, 1, v_val_1053_);
lean_ctor_set(v___x_1104_, 0, v_e_1036_);
v___x_1114_ = v___x_1104_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_e_1036_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v_val_1053_);
v___x_1114_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
uint64_t v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1115_ = lean_unbox_uint64(v_a_1045_);
lean_dec(v_a_1045_);
v___x_1116_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(v_keyToExprs_1109_, v___x_1115_, v___x_1114_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 1, v___x_1116_);
v___x_1118_ = v___x_1111_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_cache_1108_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1119_ = lean_st_ref_set(v_a_1038_, v___x_1118_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v_e_1036_);
v___x_1121_ = v___x_1100_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_e_1036_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
else
{
lean_object* v_val_1126_; lean_object* v___x_1128_; 
lean_del_object(v___x_1104_);
lean_dec(v_val_1053_);
lean_dec(v_a_1045_);
lean_dec_ref(v_e_1036_);
v_val_1126_ = lean_ctor_get(v_fst_1102_, 0);
lean_inc(v_val_1126_);
lean_dec_ref(v_fst_1102_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v_val_1126_);
v___x_1128_ = v___x_1100_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_val_1126_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
lean_dec(v_val_1053_);
lean_dec(v_a_1045_);
lean_dec_ref(v_e_1036_);
v_a_1133_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1097_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1097_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v_cache_1145_; lean_object* v_keyToExprs_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v___x_1052_);
v___x_1143_ = lean_st_ref_get(v_a_1042_);
lean_dec(v___x_1143_);
v___x_1144_ = lean_st_ref_take(v_a_1038_);
v_cache_1145_ = lean_ctor_get(v___x_1144_, 0);
v_keyToExprs_1146_ = lean_ctor_get(v___x_1144_, 1);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1148_ = v___x_1144_;
v_isShared_1149_ = v_isSharedCheck_1161_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_keyToExprs_1146_);
lean_inc(v_cache_1145_);
lean_dec(v___x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1161_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; uint64_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1150_ = lean_box(0);
lean_inc_ref(v_e_1036_);
v___x_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1151_, 0, v_e_1036_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_unbox_uint64(v_a_1045_);
lean_dec(v_a_1045_);
v___x_1153_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(v_keyToExprs_1146_, v___x_1152_, v___x_1151_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 1, v___x_1153_);
v___x_1155_ = v___x_1148_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_cache_1145_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1156_ = lean_st_ref_set(v_a_1038_, v___x_1155_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v_e_1036_);
v___x_1158_ = v___x_1047_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_e_1036_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec_ref(v_e_1036_);
v_a_1163_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1044_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1044_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Canonicalizer_canon___boxed(lean_object* v_e_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
uint8_t v_a_boxed_1179_; lean_object* v_res_1180_; 
v_a_boxed_1179_ = lean_unbox(v_a_1172_);
v_res_1180_ = l_Lean_Meta_Canonicalizer_canon(v_e_1171_, v_a_boxed_1179_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0(lean_object* v_e_1181_, lean_object* v_as_1182_, lean_object* v_as_x27_1183_, lean_object* v_b_1184_, lean_object* v_a_1185_, uint8_t v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___redArg(v_e_1181_, v_as_x27_1183_, v_b_1184_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0___boxed(lean_object* v_e_1194_, lean_object* v_as_1195_, lean_object* v_as_x27_1196_, lean_object* v_b_1197_, lean_object* v_a_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v___y_11757__boxed_1206_; lean_object* v_res_1207_; 
v___y_11757__boxed_1206_ = lean_unbox(v___y_1199_);
v_res_1207_ = l_List_forIn_x27_loop___at___00Lean_Meta_Canonicalizer_canon_spec__0(v_e_1194_, v_as_1195_, v_as_x27_1196_, v_b_1197_, v_a_1198_, v___y_11757__boxed_1206_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec(v_as_x27_1196_);
lean_dec(v_as_1195_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1(lean_object* v_00_u03b2_1208_, lean_object* v_m_1209_, uint64_t v_a_1210_, lean_object* v_b_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___redArg(v_m_1209_, v_a_1210_, v_b_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1___boxed(lean_object* v_00_u03b2_1213_, lean_object* v_m_1214_, lean_object* v_a_1215_, lean_object* v_b_1216_){
_start:
{
uint64_t v_a_boxed_1217_; lean_object* v_res_1218_; 
v_a_boxed_1217_ = lean_unbox_uint64(v_a_1215_);
lean_dec_ref(v_a_1215_);
v_res_1218_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1(v_00_u03b2_1213_, v_m_1214_, v_a_boxed_1217_, v_b_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1(lean_object* v_00_u03b2_1219_, uint64_t v_a_1220_, lean_object* v_x_1221_){
_start:
{
uint8_t v___x_1222_; 
v___x_1222_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___redArg(v_a_1220_, v_x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1223_, lean_object* v_a_1224_, lean_object* v_x_1225_){
_start:
{
uint64_t v_a_boxed_1226_; uint8_t v_res_1227_; lean_object* v_r_1228_; 
v_a_boxed_1226_ = lean_unbox_uint64(v_a_1224_);
lean_dec_ref(v_a_1224_);
v_res_1227_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__1(v_00_u03b2_1223_, v_a_boxed_1226_, v_x_1225_);
lean_dec(v_x_1225_);
v_r_1228_ = lean_box(v_res_1227_);
return v_r_1228_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2(lean_object* v_00_u03b2_1229_, lean_object* v_data_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2___redArg(v_data_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3(lean_object* v_00_u03b2_1232_, uint64_t v_a_1233_, lean_object* v_b_1234_, lean_object* v_x_1235_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___redArg(v_a_1233_, v_b_1234_, v_x_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1237_, lean_object* v_a_1238_, lean_object* v_b_1239_, lean_object* v_x_1240_){
_start:
{
uint64_t v_a_boxed_1241_; lean_object* v_res_1242_; 
v_a_boxed_1241_ = lean_unbox_uint64(v_a_1238_);
lean_dec_ref(v_a_1238_);
v_res_1242_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__3(v_00_u03b2_1237_, v_a_boxed_1241_, v_b_1239_, v_x_1240_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1243_, lean_object* v_i_1244_, lean_object* v_source_1245_, lean_object* v_target_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3___redArg(v_i_1244_, v_source_1245_, v_target_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1248_, lean_object* v_x_1249_, lean_object* v_x_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Canonicalizer_canon_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1249_, v_x_1250_);
return v___x_1251_;
}
}
lean_object* runtime_initialize_Lean_Util_ShareCommon(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Raw(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Canonicalizer(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Raw(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default = _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default();
lean_mark_persistent(l_Lean_Meta_Canonicalizer_instInhabitedExprVisited_default);
l_Lean_Meta_Canonicalizer_instInhabitedExprVisited = _init_l_Lean_Meta_Canonicalizer_instInhabitedExprVisited();
lean_mark_persistent(l_Lean_Meta_Canonicalizer_instInhabitedExprVisited);
l_Lean_Meta_Canonicalizer_instBEqExprVisited = _init_l_Lean_Meta_Canonicalizer_instBEqExprVisited();
lean_mark_persistent(l_Lean_Meta_Canonicalizer_instBEqExprVisited);
l_Lean_Meta_Canonicalizer_instHashableExprVisited = _init_l_Lean_Meta_Canonicalizer_instHashableExprVisited();
lean_mark_persistent(l_Lean_Meta_Canonicalizer_instHashableExprVisited);
l_Lean_Meta_Canonicalizer_instInhabitedState = _init_l_Lean_Meta_Canonicalizer_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_Canonicalizer_instInhabitedState);
l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1 = _init_l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1();
lean_mark_persistent(l___private_Lean_Meta_Canonicalizer_0__Lean_Meta_Canonicalizer_mkKey___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Canonicalizer(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ShareCommon(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Raw(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Canonicalizer(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Raw(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Canonicalizer(builtin);
}
#ifdef __cplusplus
}
#endif
