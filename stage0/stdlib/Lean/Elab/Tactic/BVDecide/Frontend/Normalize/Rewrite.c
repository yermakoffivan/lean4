// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Rewrite
// Imports: public import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeExt;
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeSimprocExt;
lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSEvalTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg(lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_9_ = lean_apply_7(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed(lean_object* v_x_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(v_x_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_12_);
lean_dec_ref(v___y_11_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(lean_object* v_mvarId_19_, lean_object* v_x_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
lean_inc(v___y_22_);
lean_inc_ref(v___y_21_);
v___f_28_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_28_, 0, v_x_20_);
lean_closure_set(v___f_28_, 1, v___y_21_);
lean_closure_set(v___f_28_, 2, v___y_22_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_19_, v___f_28_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
return v___x_29_;
}
else
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___boxed(lean_object* v_mvarId_38_, lean_object* v_x_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_mvarId_38_, v_x_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(lean_object* v_00_u03b1_48_, lean_object* v_mvarId_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_mvarId_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___boxed(lean_object* v_00_u03b1_59_, lean_object* v_mvarId_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(v_00_u03b1_59_, v_mvarId_60_, v_x_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
return v_res_69_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(lean_object* v_a_70_, lean_object* v_x_71_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
uint8_t v___x_72_; 
v___x_72_ = 0;
return v___x_72_;
}
else
{
lean_object* v_key_73_; lean_object* v_tail_74_; uint8_t v___x_75_; 
v_key_73_ = lean_ctor_get(v_x_71_, 0);
v_tail_74_ = lean_ctor_get(v_x_71_, 2);
v___x_75_ = l_Lean_instBEqFVarId_beq(v_key_73_, v_a_70_);
if (v___x_75_ == 0)
{
v_x_71_ = v_tail_74_;
goto _start;
}
else
{
return v___x_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg___boxed(lean_object* v_a_77_, lean_object* v_x_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_77_, v_x_78_);
lean_dec(v_x_78_);
lean_dec(v_a_77_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(lean_object* v_m_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_buckets_83_; lean_object* v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; uint64_t v___x_87_; uint64_t v_fold_88_; uint64_t v___x_89_; uint64_t v___x_90_; uint64_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; size_t v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_buckets_83_ = lean_ctor_get(v_m_81_, 1);
v___x_84_ = lean_array_get_size(v_buckets_83_);
v___x_85_ = l_Lean_instHashableFVarId_hash(v_a_82_);
v___x_86_ = 32ULL;
v___x_87_ = lean_uint64_shift_right(v___x_85_, v___x_86_);
v_fold_88_ = lean_uint64_xor(v___x_85_, v___x_87_);
v___x_89_ = 16ULL;
v___x_90_ = lean_uint64_shift_right(v_fold_88_, v___x_89_);
v___x_91_ = lean_uint64_xor(v_fold_88_, v___x_90_);
v___x_92_ = lean_uint64_to_usize(v___x_91_);
v___x_93_ = lean_usize_of_nat(v___x_84_);
v___x_94_ = ((size_t)1ULL);
v___x_95_ = lean_usize_sub(v___x_93_, v___x_94_);
v___x_96_ = lean_usize_land(v___x_92_, v___x_95_);
v___x_97_ = lean_array_uget_borrowed(v_buckets_83_, v___x_96_);
v___x_98_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_82_, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg___boxed(lean_object* v_m_99_, lean_object* v_a_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_m_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_m_99_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(lean_object* v_as_103_, size_t v_i_104_, size_t v_stop_105_, lean_object* v_b_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_a_111_; uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_104_, v_stop_105_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_rewriteCache_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_116_ = lean_st_ref_get(v___y_108_);
lean_dec(v___x_116_);
v___x_117_ = lean_st_ref_get(v___y_107_);
v_rewriteCache_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc_ref(v_rewriteCache_118_);
lean_dec(v___x_117_);
v___x_119_ = lean_array_uget_borrowed(v_as_103_, v_i_104_);
v___x_120_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_rewriteCache_118_, v___x_119_);
lean_dec_ref(v_rewriteCache_118_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
lean_inc(v___x_119_);
v___x_121_ = lean_array_push(v_b_106_, v___x_119_);
v_a_111_ = v___x_121_;
goto v___jp_110_;
}
else
{
v_a_111_ = v_b_106_;
goto v___jp_110_;
}
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v_b_106_);
return v___x_122_;
}
v___jp_110_:
{
size_t v___x_112_; size_t v___x_113_; 
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_104_, v___x_112_);
v_i_104_ = v___x_113_;
v_b_106_ = v_a_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg___boxed(lean_object* v_as_123_, lean_object* v_i_124_, lean_object* v_stop_125_, lean_object* v_b_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
size_t v_i_boxed_130_; size_t v_stop_boxed_131_; lean_object* v_res_132_; 
v_i_boxed_130_ = lean_unbox_usize(v_i_124_);
lean_dec(v_i_124_);
v_stop_boxed_131_ = lean_unbox_usize(v_stop_125_);
lean_dec(v_stop_125_);
v_res_132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_as_123_, v_i_boxed_130_, v_stop_boxed_131_, v_b_126_, v___y_127_, v___y_128_);
lean_dec(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v_as_123_);
return v_res_132_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_mk_empty_array_with_capacity(v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_getPropHyps(v___y_137_, v___y_138_, v___y_139_, v___y_140_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_164_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_164_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_164_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_164_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_array_get_size(v_a_143_);
v___x_149_ = lean_obj_once(&l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0, &l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0_once, _init_l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0);
v___x_150_ = lean_nat_dec_lt(v___x_147_, v___x_148_);
if (v___x_150_ == 0)
{
lean_object* v___x_152_; 
lean_dec(v_a_143_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_149_);
v___x_152_ = v___x_145_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_149_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
else
{
uint8_t v___x_154_; 
v___x_154_ = lean_nat_dec_le(v___x_148_, v___x_148_);
if (v___x_154_ == 0)
{
if (v___x_150_ == 0)
{
lean_object* v___x_156_; 
lean_dec(v_a_143_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_149_);
v___x_156_ = v___x_145_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_149_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
else
{
size_t v___x_158_; size_t v___x_159_; lean_object* v___x_160_; 
lean_del_object(v___x_145_);
v___x_158_ = ((size_t)0ULL);
v___x_159_ = lean_usize_of_nat(v___x_148_);
v___x_160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_a_143_, v___x_158_, v___x_159_, v___x_149_, v___y_136_, v___y_140_);
lean_dec(v_a_143_);
return v___x_160_;
}
}
else
{
size_t v___x_161_; size_t v___x_162_; lean_object* v___x_163_; 
lean_del_object(v___x_145_);
v___x_161_ = ((size_t)0ULL);
v___x_162_ = lean_usize_of_nat(v___x_148_);
v___x_163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_a_143_, v___x_161_, v___x_162_, v___x_149_, v___y_136_, v___y_140_);
lean_dec(v_a_143_);
return v___x_163_;
}
}
}
}
else
{
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed(lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_172_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0(void){
_start:
{
lean_object* v___f_173_; 
v___f_173_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed), 7, 0);
return v___f_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(lean_object* v_goal_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___f_182_; lean_object* v___x_183_; 
v___f_182_ = lean_obj_once(&l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0, &l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0_once, _init_l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0);
v___x_183_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_goal_174_, v___f_182_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___boxed(lean_object* v_goal_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(v_goal_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
return v_res_192_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(lean_object* v_00_u03b2_193_, lean_object* v_m_194_, lean_object* v_a_195_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_m_194_, v_a_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___boxed(lean_object* v_00_u03b2_197_, lean_object* v_m_198_, lean_object* v_a_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(v_00_u03b2_197_, v_m_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_m_198_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(lean_object* v_as_202_, size_t v_i_203_, size_t v_stop_204_, lean_object* v_b_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_as_202_, v_i_203_, v_stop_204_, v_b_205_, v___y_207_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___boxed(lean_object* v_as_214_, lean_object* v_i_215_, lean_object* v_stop_216_, lean_object* v_b_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
size_t v_i_boxed_225_; size_t v_stop_boxed_226_; lean_object* v_res_227_; 
v_i_boxed_225_ = lean_unbox_usize(v_i_215_);
lean_dec(v_i_215_);
v_stop_boxed_226_ = lean_unbox_usize(v_stop_216_);
lean_dec(v_stop_216_);
v_res_227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(v_as_214_, v_i_boxed_225_, v_stop_boxed_226_, v_b_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec_ref(v_as_214_);
return v_res_227_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(lean_object* v_00_u03b2_228_, lean_object* v_a_229_, lean_object* v_x_230_){
_start:
{
uint8_t v___x_231_; 
v___x_231_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_229_, v_x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___boxed(lean_object* v_00_u03b2_232_, lean_object* v_a_233_, lean_object* v_x_234_){
_start:
{
uint8_t v_res_235_; lean_object* v_r_236_; 
v_res_235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(v_00_u03b2_232_, v_a_233_, v_x_234_);
lean_dec(v_x_234_);
lean_dec(v_a_233_);
v_r_236_ = lean_box(v_res_235_);
return v_r_236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
return v_x_237_;
}
else
{
lean_object* v_key_239_; lean_object* v_value_240_; lean_object* v_tail_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_264_; 
v_key_239_ = lean_ctor_get(v_x_238_, 0);
v_value_240_ = lean_ctor_get(v_x_238_, 1);
v_tail_241_ = lean_ctor_get(v_x_238_, 2);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_264_ == 0)
{
v___x_243_ = v_x_238_;
v_isShared_244_ = v_isSharedCheck_264_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_tail_241_);
lean_inc(v_value_240_);
lean_inc(v_key_239_);
lean_dec(v_x_238_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_264_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; uint64_t v___x_246_; uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v_fold_249_; uint64_t v___x_250_; uint64_t v___x_251_; uint64_t v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_245_ = lean_array_get_size(v_x_237_);
v___x_246_ = l_Lean_instHashableFVarId_hash(v_key_239_);
v___x_247_ = 32ULL;
v___x_248_ = lean_uint64_shift_right(v___x_246_, v___x_247_);
v_fold_249_ = lean_uint64_xor(v___x_246_, v___x_248_);
v___x_250_ = 16ULL;
v___x_251_ = lean_uint64_shift_right(v_fold_249_, v___x_250_);
v___x_252_ = lean_uint64_xor(v_fold_249_, v___x_251_);
v___x_253_ = lean_uint64_to_usize(v___x_252_);
v___x_254_ = lean_usize_of_nat(v___x_245_);
v___x_255_ = ((size_t)1ULL);
v___x_256_ = lean_usize_sub(v___x_254_, v___x_255_);
v___x_257_ = lean_usize_land(v___x_253_, v___x_256_);
v___x_258_ = lean_array_uget_borrowed(v_x_237_, v___x_257_);
lean_inc(v___x_258_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 2, v___x_258_);
v___x_260_ = v___x_243_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_key_239_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v_value_240_);
lean_ctor_set(v_reuseFailAlloc_263_, 2, v___x_258_);
v___x_260_ = v_reuseFailAlloc_263_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; 
v___x_261_ = lean_array_uset(v_x_237_, v___x_257_, v___x_260_);
v_x_237_ = v___x_261_;
v_x_238_ = v_tail_241_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1___redArg(lean_object* v_i_265_, lean_object* v_source_266_, lean_object* v_target_267_){
_start:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = lean_array_get_size(v_source_266_);
v___x_269_ = lean_nat_dec_lt(v_i_265_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec_ref(v_source_266_);
lean_dec(v_i_265_);
return v_target_267_;
}
else
{
lean_object* v_es_270_; lean_object* v___x_271_; lean_object* v_source_272_; lean_object* v_target_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_es_270_ = lean_array_fget(v_source_266_, v_i_265_);
v___x_271_ = lean_box(0);
v_source_272_ = lean_array_fset(v_source_266_, v_i_265_, v___x_271_);
v_target_273_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3___redArg(v_target_267_, v_es_270_);
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = lean_nat_add(v_i_265_, v___x_274_);
lean_dec(v_i_265_);
v_i_265_ = v___x_275_;
v_source_266_ = v_source_272_;
v_target_267_ = v_target_273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(lean_object* v_data_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_nbuckets_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_278_ = lean_array_get_size(v_data_277_);
v___x_279_ = lean_unsigned_to_nat(2u);
v_nbuckets_280_ = lean_nat_mul(v___x_278_, v___x_279_);
v___x_281_ = lean_unsigned_to_nat(0u);
v___x_282_ = lean_box(0);
v___x_283_ = lean_mk_array(v_nbuckets_280_, v___x_282_);
v___x_284_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1___redArg(v___x_281_, v_data_277_, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(lean_object* v_m_285_, lean_object* v_a_286_, lean_object* v_b_287_){
_start:
{
lean_object* v_size_288_; lean_object* v_buckets_289_; lean_object* v___x_290_; uint64_t v___x_291_; uint64_t v___x_292_; uint64_t v___x_293_; uint64_t v_fold_294_; uint64_t v___x_295_; uint64_t v___x_296_; uint64_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; lean_object* v_bkt_303_; uint8_t v___x_304_; 
v_size_288_ = lean_ctor_get(v_m_285_, 0);
v_buckets_289_ = lean_ctor_get(v_m_285_, 1);
v___x_290_ = lean_array_get_size(v_buckets_289_);
v___x_291_ = l_Lean_instHashableFVarId_hash(v_a_286_);
v___x_292_ = 32ULL;
v___x_293_ = lean_uint64_shift_right(v___x_291_, v___x_292_);
v_fold_294_ = lean_uint64_xor(v___x_291_, v___x_293_);
v___x_295_ = 16ULL;
v___x_296_ = lean_uint64_shift_right(v_fold_294_, v___x_295_);
v___x_297_ = lean_uint64_xor(v_fold_294_, v___x_296_);
v___x_298_ = lean_uint64_to_usize(v___x_297_);
v___x_299_ = lean_usize_of_nat(v___x_290_);
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_sub(v___x_299_, v___x_300_);
v___x_302_ = lean_usize_land(v___x_298_, v___x_301_);
v_bkt_303_ = lean_array_uget_borrowed(v_buckets_289_, v___x_302_);
v___x_304_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_286_, v_bkt_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_325_; 
lean_inc_ref(v_buckets_289_);
lean_inc(v_size_288_);
v_isSharedCheck_325_ = !lean_is_exclusive(v_m_285_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; lean_object* v_unused_327_; 
v_unused_326_ = lean_ctor_get(v_m_285_, 1);
lean_dec(v_unused_326_);
v_unused_327_ = lean_ctor_get(v_m_285_, 0);
lean_dec(v_unused_327_);
v___x_306_ = v_m_285_;
v_isShared_307_ = v_isSharedCheck_325_;
goto v_resetjp_305_;
}
else
{
lean_dec(v_m_285_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_325_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v_size_x27_309_; lean_object* v___x_310_; lean_object* v_buckets_x27_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_308_ = lean_unsigned_to_nat(1u);
v_size_x27_309_ = lean_nat_add(v_size_288_, v___x_308_);
lean_dec(v_size_288_);
lean_inc(v_bkt_303_);
v___x_310_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_310_, 0, v_a_286_);
lean_ctor_set(v___x_310_, 1, v_b_287_);
lean_ctor_set(v___x_310_, 2, v_bkt_303_);
v_buckets_x27_311_ = lean_array_uset(v_buckets_289_, v___x_302_, v___x_310_);
v___x_312_ = lean_unsigned_to_nat(4u);
v___x_313_ = lean_nat_mul(v_size_x27_309_, v___x_312_);
v___x_314_ = lean_unsigned_to_nat(3u);
v___x_315_ = lean_nat_div(v___x_313_, v___x_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_array_get_size(v_buckets_x27_311_);
v___x_317_ = lean_nat_dec_le(v___x_315_, v___x_316_);
lean_dec(v___x_315_);
if (v___x_317_ == 0)
{
lean_object* v_val_318_; lean_object* v___x_320_; 
v_val_318_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(v_buckets_x27_311_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_val_318_);
lean_ctor_set(v___x_306_, 0, v_size_x27_309_);
v___x_320_ = v___x_306_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_size_x27_309_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_val_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
lean_object* v___x_323_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_buckets_x27_311_);
lean_ctor_set(v___x_306_, 0, v_size_x27_309_);
v___x_323_ = v___x_306_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_size_x27_309_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_buckets_x27_311_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_dec(v_b_287_);
lean_dec(v_a_286_);
return v_m_285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(lean_object* v_as_328_, size_t v_i_329_, size_t v_stop_330_, lean_object* v_b_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = lean_usize_dec_eq(v_i_329_, v_stop_330_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v_rewriteCache_338_; lean_object* v_acNfCache_339_; lean_object* v_typeAnalysis_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_354_; 
v___x_336_ = lean_st_ref_get(v___y_333_);
lean_dec(v___x_336_);
v___x_337_ = lean_st_ref_take(v___y_332_);
v_rewriteCache_338_ = lean_ctor_get(v___x_337_, 0);
v_acNfCache_339_ = lean_ctor_get(v___x_337_, 1);
v_typeAnalysis_340_ = lean_ctor_get(v___x_337_, 2);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_354_ == 0)
{
v___x_342_ = v___x_337_;
v_isShared_343_ = v_isSharedCheck_354_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_typeAnalysis_340_);
lean_inc(v_acNfCache_339_);
lean_inc(v_rewriteCache_338_);
lean_dec(v___x_337_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_354_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_344_ = lean_array_uget_borrowed(v_as_328_, v_i_329_);
v___x_345_ = lean_box(0);
lean_inc(v___x_344_);
v___x_346_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(v_rewriteCache_338_, v___x_344_, v___x_345_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___x_346_);
v___x_348_ = v___x_342_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_acNfCache_339_);
lean_ctor_set(v_reuseFailAlloc_353_, 2, v_typeAnalysis_340_);
v___x_348_ = v_reuseFailAlloc_353_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; 
v___x_349_ = lean_st_ref_set(v___y_332_, v___x_348_);
v___x_350_ = ((size_t)1ULL);
v___x_351_ = lean_usize_add(v_i_329_, v___x_350_);
v_i_329_ = v___x_351_;
v_b_331_ = v___x_345_;
goto _start;
}
}
}
else
{
lean_object* v___x_355_; 
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v_b_331_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object* v_as_356_, lean_object* v_i_357_, lean_object* v_stop_358_, lean_object* v_b_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
size_t v_i_boxed_363_; size_t v_stop_boxed_364_; lean_object* v_res_365_; 
v_i_boxed_363_ = lean_unbox_usize(v_i_357_);
lean_dec(v_i_357_);
v_stop_boxed_364_ = lean_unbox_usize(v_stop_358_);
lean_dec(v_stop_358_);
v_res_365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(v_as_356_, v_i_boxed_363_, v_stop_boxed_364_, v_b_359_, v___y_360_, v___y_361_);
lean_dec(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v_as_356_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(lean_object* v___x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = l_Lean_Meta_getPropHyps(v___y_369_, v___y_370_, v___y_371_, v___y_372_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_395_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_395_ == 0)
{
v___x_377_ = v___x_374_;
v_isShared_378_ = v_isSharedCheck_395_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_374_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_395_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_379_ = lean_array_get_size(v_a_375_);
v___x_380_ = lean_box(0);
v___x_381_ = lean_nat_dec_lt(v___x_366_, v___x_379_);
if (v___x_381_ == 0)
{
lean_object* v___x_383_; 
lean_dec(v_a_375_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_380_);
v___x_383_ = v___x_377_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_380_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
else
{
uint8_t v___x_385_; 
v___x_385_ = lean_nat_dec_le(v___x_379_, v___x_379_);
if (v___x_385_ == 0)
{
if (v___x_381_ == 0)
{
lean_object* v___x_387_; 
lean_dec(v_a_375_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_380_);
v___x_387_ = v___x_377_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_380_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
else
{
size_t v___x_389_; size_t v___x_390_; lean_object* v___x_391_; 
lean_del_object(v___x_377_);
v___x_389_ = ((size_t)0ULL);
v___x_390_ = lean_usize_of_nat(v___x_379_);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(v_a_375_, v___x_389_, v___x_390_, v___x_380_, v___y_368_, v___y_372_);
lean_dec(v_a_375_);
return v___x_391_;
}
}
else
{
size_t v___x_392_; size_t v___x_393_; lean_object* v___x_394_; 
lean_del_object(v___x_377_);
v___x_392_ = ((size_t)0ULL);
v___x_393_ = lean_usize_of_nat(v___x_379_);
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(v_a_375_, v___x_392_, v___x_393_, v___x_380_, v___y_368_, v___y_372_);
lean_dec(v_a_375_);
return v___x_394_;
}
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_374_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_374_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed(lean_object* v___x_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(v___x_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___x_404_);
return v_res_412_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0(void){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_413_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__0);
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_unsigned_to_nat(32u);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_419_);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4(void){
_start:
{
size_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_422_ = ((size_t)5ULL);
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_unsigned_to_nat(32u);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
v___x_426_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__3);
v___x_427_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set(v___x_427_, 2, v___x_423_);
lean_ctor_set(v___x_427_, 3, v___x_423_);
lean_ctor_set_usize(v___x_427_, 4, v___x_422_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__4);
v___x_429_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__1);
v___x_430_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
lean_ctor_set(v___x_430_, 2, v___x_429_);
lean_ctor_set(v___x_430_, 3, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__5);
v___x_432_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__2);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_431_);
return v___x_433_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7(void){
_start:
{
lean_object* v___x_434_; lean_object* v___f_435_; 
v___x_434_ = lean_unsigned_to_nat(0u);
v___f_435_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed), 8, 1);
lean_closure_set(v___f_435_, 0, v___x_434_);
return v___f_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(lean_object* v_goal_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeExt;
v___x_445_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_444_, v___y_442_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref(v___x_445_);
v___x_447_ = l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeSimprocExt;
v___x_448_ = l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(v___x_447_, v___y_442_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref(v___x_448_);
v___x_450_ = l_Lean_Meta_getSEvalTheorems___redArg(v___y_442_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref(v___x_450_);
v___x_452_ = l_Lean_Meta_Simp_getSEvalSimprocs___redArg(v___y_442_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_454_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref(v___x_452_);
v___x_454_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_442_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v_maxSteps_456_; lean_object* v___x_457_; uint8_t v___x_458_; uint8_t v___x_459_; uint8_t v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref(v___x_454_);
v_maxSteps_456_ = lean_ctor_get(v___y_437_, 1);
v___x_457_ = lean_unsigned_to_nat(2u);
v___x_458_ = 0;
v___x_459_ = 1;
v___x_460_ = 0;
v___x_461_ = lean_box(0);
lean_inc(v_maxSteps_456_);
v___x_462_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_462_, 0, v_maxSteps_456_);
lean_ctor_set(v___x_462_, 1, v___x_457_);
lean_ctor_set(v___x_462_, 2, v___x_461_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 1, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 2, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 3, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 4, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 5, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 6, v___x_460_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 7, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 8, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 9, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 10, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 11, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 12, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 13, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 14, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 15, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 16, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 17, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 18, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 19, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 20, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 21, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 22, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 23, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 24, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 25, v___x_459_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 26, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 27, v___x_458_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*3 + 28, v___x_459_);
v___x_463_ = lean_mk_empty_array_with_capacity(v___x_457_);
lean_inc_ref(v___x_463_);
v___x_464_ = lean_array_push(v___x_463_, v_a_446_);
v___x_465_ = lean_array_push(v___x_464_, v_a_451_);
v___x_466_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_462_, v___x_465_, v_a_455_, v___y_439_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref(v___x_466_);
lean_inc(v_goal_436_);
v___x_468_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(v_goal_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_528_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_528_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_528_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_528_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_473_ = lean_array_get_size(v_a_469_);
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
lean_del_object(v___x_471_);
v___x_476_ = lean_array_push(v___x_463_, v_a_449_);
v___x_477_ = lean_array_push(v___x_476_, v_a_453_);
v___x_478_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__6);
v___x_479_ = l_Lean_Meta_simpGoal(v_goal_436_, v_a_467_, v___x_477_, v___x_461_, v___x_459_, v_a_469_, v___x_478_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_515_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_515_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_515_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_515_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v_fst_484_; 
v_fst_484_ = lean_ctor_get(v_a_480_, 0);
lean_inc(v_fst_484_);
lean_dec(v_a_480_);
if (lean_obj_tag(v_fst_484_) == 1)
{
lean_object* v_val_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_511_; 
lean_del_object(v___x_482_);
v_val_485_ = lean_ctor_get(v_fst_484_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_fst_484_);
if (v_isSharedCheck_511_ == 0)
{
v___x_487_ = v_fst_484_;
v_isShared_488_ = v_isSharedCheck_511_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_val_485_);
lean_dec(v_fst_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_511_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v_snd_489_; lean_object* v___f_490_; lean_object* v___x_491_; 
v_snd_489_ = lean_ctor_get(v_val_485_, 1);
lean_inc_n(v_snd_489_, 2);
lean_dec(v_val_485_);
v___f_490_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___closed__7);
v___x_491_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_snd_489_, v___f_490_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_501_; 
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; 
v_unused_502_ = lean_ctor_get(v___x_491_, 0);
lean_dec(v_unused_502_);
v___x_493_ = v___x_491_;
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
else
{
lean_dec(v___x_491_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_snd_489_);
v___x_496_ = v___x_487_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_snd_489_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_496_);
v___x_498_ = v___x_493_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_snd_489_);
lean_del_object(v___x_487_);
v_a_503_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_491_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_491_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
else
{
lean_object* v___x_513_; 
lean_dec(v_fst_484_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_461_);
v___x_513_ = v___x_482_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_461_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
v_a_516_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_479_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_479_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_526_; 
lean_dec(v_a_469_);
lean_dec(v_a_467_);
lean_dec_ref(v___x_463_);
lean_dec(v_a_453_);
lean_dec(v_a_449_);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v_goal_436_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_524_);
v___x_526_ = v___x_471_;
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
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_a_467_);
lean_dec_ref(v___x_463_);
lean_dec(v_a_453_);
lean_dec(v_a_449_);
lean_dec(v_goal_436_);
v_a_529_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_468_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_468_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v___x_463_);
lean_dec(v_a_453_);
lean_dec(v_a_449_);
lean_dec(v_goal_436_);
v_a_537_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_466_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_466_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
lean_dec(v_a_453_);
lean_dec(v_a_451_);
lean_dec(v_a_449_);
lean_dec(v_a_446_);
lean_dec(v_goal_436_);
v_a_545_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v___x_454_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_454_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_a_451_);
lean_dec(v_a_449_);
lean_dec(v_a_446_);
lean_dec(v_goal_436_);
v_a_553_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_452_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_452_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
lean_dec(v_a_449_);
lean_dec(v_a_446_);
lean_dec(v_goal_436_);
v_a_561_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_450_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_450_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_dec(v_a_446_);
lean_dec(v_goal_436_);
v_a_569_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_448_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_448_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
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
lean_dec(v_goal_436_);
v_a_577_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_445_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_445_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed(lean_object* v_goal_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(v_goal_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_593_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0(void){
_start:
{
lean_object* v___f_594_; 
v___f_594_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed), 8, 0);
return v___f_594_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1(void){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = lean_mk_string_unchecked("rewriteRules", 12, 12);
return v___x_595_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1);
v___x_597_ = l_Lean_Name_mkStr1(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3(void){
_start:
{
lean_object* v___f_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___f_598_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0);
v___x_599_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
lean_ctor_set(v___x_600_, 1, v___f_598_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass(void){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0(lean_object* v_00_u03b2_602_, lean_object* v_m_603_, lean_object* v_a_604_, lean_object* v_b_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(v_m_603_, v_a_604_, v_b_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(lean_object* v_as_607_, size_t v_i_608_, size_t v_stop_609_, lean_object* v_b_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___redArg(v_as_607_, v_i_608_, v_stop_609_, v_b_610_, v___y_612_, v___y_616_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___boxed(lean_object* v_as_619_, lean_object* v_i_620_, lean_object* v_stop_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
size_t v_i_boxed_630_; size_t v_stop_boxed_631_; lean_object* v_res_632_; 
v_i_boxed_630_ = lean_unbox_usize(v_i_620_);
lean_dec(v_i_620_);
v_stop_boxed_631_ = lean_unbox_usize(v_stop_621_);
lean_dec(v_stop_621_);
v_res_632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(v_as_619_, v_i_boxed_630_, v_stop_boxed_631_, v_b_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec_ref(v_as_619_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object* v_00_u03b2_633_, lean_object* v_data_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(v_data_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_636_, lean_object* v_i_637_, lean_object* v_source_638_, lean_object* v_target_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1___redArg(v_i_637_, v_source_638_, v_target_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_641_, lean_object* v_x_642_, lean_object* v_x_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__1_spec__3___redArg(v_x_642_, v_x_643_);
return v___x_644_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass = _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
