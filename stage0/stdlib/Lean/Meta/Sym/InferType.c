// Lean compiler output
// Module: Lean.Meta.Sym.InferType
// Imports: public import Lean.Meta.Sym.SymM
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v_keyedConfig_7_; uint8_t v_trackZetaDelta_8_; lean_object* v_zetaDeltaSet_9_; lean_object* v_lctx_10_; lean_object* v_localInstances_11_; lean_object* v_defEqCtx_x3f_12_; lean_object* v_synthPendingDepth_13_; lean_object* v_canUnfold_x3f_14_; uint8_t v_univApprox_15_; uint8_t v_inTypeClassResolution_16_; uint8_t v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_keyedConfig_7_ = lean_ctor_get(v_a_2_, 0);
v_trackZetaDelta_8_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*7);
v_zetaDeltaSet_9_ = lean_ctor_get(v_a_2_, 1);
v_lctx_10_ = lean_ctor_get(v_a_2_, 2);
v_localInstances_11_ = lean_ctor_get(v_a_2_, 3);
v_defEqCtx_x3f_12_ = lean_ctor_get(v_a_2_, 4);
v_synthPendingDepth_13_ = lean_ctor_get(v_a_2_, 5);
v_canUnfold_x3f_14_ = lean_ctor_get(v_a_2_, 6);
v_univApprox_15_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_16_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*7 + 2);
v___x_17_ = 0;
lean_inc(v_canUnfold_x3f_14_);
lean_inc(v_synthPendingDepth_13_);
lean_inc(v_defEqCtx_x3f_12_);
lean_inc_ref(v_localInstances_11_);
lean_inc_ref(v_lctx_10_);
lean_inc(v_zetaDeltaSet_9_);
lean_inc_ref(v_keyedConfig_7_);
v___x_18_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_18_, 0, v_keyedConfig_7_);
lean_ctor_set(v___x_18_, 1, v_zetaDeltaSet_9_);
lean_ctor_set(v___x_18_, 2, v_lctx_10_);
lean_ctor_set(v___x_18_, 3, v_localInstances_11_);
lean_ctor_set(v___x_18_, 4, v_defEqCtx_x3f_12_);
lean_ctor_set(v___x_18_, 5, v_synthPendingDepth_13_);
lean_ctor_set(v___x_18_, 6, v_canUnfold_x3f_14_);
lean_ctor_set_uint8(v___x_18_, sizeof(void*)*7, v_trackZetaDelta_8_);
lean_ctor_set_uint8(v___x_18_, sizeof(void*)*7 + 1, v_univApprox_15_);
lean_ctor_set_uint8(v___x_18_, sizeof(void*)*7 + 2, v_inTypeClassResolution_16_);
lean_ctor_set_uint8(v___x_18_, sizeof(void*)*7 + 3, v___x_17_);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v_a_3_);
v___x_19_ = lean_infer_type(v_e_1_, v___x_18_, v_a_3_, v_a_4_, v_a_5_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache___boxed(lean_object* v_e_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(v_e_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(lean_object* v_type_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_keyedConfig_33_; uint8_t v_trackZetaDelta_34_; lean_object* v_zetaDeltaSet_35_; lean_object* v_lctx_36_; lean_object* v_localInstances_37_; lean_object* v_defEqCtx_x3f_38_; lean_object* v_synthPendingDepth_39_; lean_object* v_canUnfold_x3f_40_; uint8_t v_univApprox_41_; uint8_t v_inTypeClassResolution_42_; uint8_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_keyedConfig_33_ = lean_ctor_get(v_a_28_, 0);
v_trackZetaDelta_34_ = lean_ctor_get_uint8(v_a_28_, sizeof(void*)*7);
v_zetaDeltaSet_35_ = lean_ctor_get(v_a_28_, 1);
v_lctx_36_ = lean_ctor_get(v_a_28_, 2);
v_localInstances_37_ = lean_ctor_get(v_a_28_, 3);
v_defEqCtx_x3f_38_ = lean_ctor_get(v_a_28_, 4);
v_synthPendingDepth_39_ = lean_ctor_get(v_a_28_, 5);
v_canUnfold_x3f_40_ = lean_ctor_get(v_a_28_, 6);
v_univApprox_41_ = lean_ctor_get_uint8(v_a_28_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_42_ = lean_ctor_get_uint8(v_a_28_, sizeof(void*)*7 + 2);
v___x_43_ = 0;
lean_inc(v_canUnfold_x3f_40_);
lean_inc(v_synthPendingDepth_39_);
lean_inc(v_defEqCtx_x3f_38_);
lean_inc_ref(v_localInstances_37_);
lean_inc_ref(v_lctx_36_);
lean_inc(v_zetaDeltaSet_35_);
lean_inc_ref(v_keyedConfig_33_);
v___x_44_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_44_, 0, v_keyedConfig_33_);
lean_ctor_set(v___x_44_, 1, v_zetaDeltaSet_35_);
lean_ctor_set(v___x_44_, 2, v_lctx_36_);
lean_ctor_set(v___x_44_, 3, v_localInstances_37_);
lean_ctor_set(v___x_44_, 4, v_defEqCtx_x3f_38_);
lean_ctor_set(v___x_44_, 5, v_synthPendingDepth_39_);
lean_ctor_set(v___x_44_, 6, v_canUnfold_x3f_40_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*7, v_trackZetaDelta_34_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*7 + 1, v_univApprox_41_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*7 + 2, v_inTypeClassResolution_42_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*7 + 3, v___x_43_);
v___x_45_ = l_Lean_Meta_getLevel(v_type_27_, v___x_44_, v_a_29_, v_a_30_, v_a_31_);
lean_dec_ref(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache___boxed(lean_object* v_type_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(v_type_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_53_, lean_object* v_x_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
lean_object* v_ks_57_; lean_object* v_vs_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_82_; 
v_ks_57_ = lean_ctor_get(v_x_53_, 0);
v_vs_58_ = lean_ctor_get(v_x_53_, 1);
v_isSharedCheck_82_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_82_ == 0)
{
v___x_60_ = v_x_53_;
v_isShared_61_ = v_isSharedCheck_82_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_vs_58_);
lean_inc(v_ks_57_);
lean_dec(v_x_53_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_82_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = lean_array_get_size(v_ks_57_);
v___x_63_ = lean_nat_dec_lt(v_x_54_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
lean_dec(v_x_54_);
v___x_64_ = lean_array_push(v_ks_57_, v_x_55_);
v___x_65_ = lean_array_push(v_vs_58_, v_x_56_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___x_65_);
lean_ctor_set(v___x_60_, 0, v___x_64_);
v___x_67_ = v___x_60_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
else
{
lean_object* v_k_x27_69_; uint8_t v___x_70_; 
v_k_x27_69_ = lean_array_fget_borrowed(v_ks_57_, v_x_54_);
v___x_70_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_55_, v_k_x27_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_72_; 
if (v_isShared_61_ == 0)
{
v___x_72_ = v___x_60_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_ks_57_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_vs_58_);
v___x_72_ = v_reuseFailAlloc_76_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_add(v_x_54_, v___x_73_);
lean_dec(v_x_54_);
v_x_53_ = v___x_72_;
v_x_54_ = v___x_74_;
goto _start;
}
}
else
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_77_ = lean_array_fset(v_ks_57_, v_x_54_, v_x_55_);
v___x_78_ = lean_array_fset(v_vs_58_, v_x_54_, v_x_56_);
lean_dec(v_x_54_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___x_78_);
lean_ctor_set(v___x_60_, 0, v___x_77_);
v___x_80_ = v___x_60_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(lean_object* v_n_83_, lean_object* v_k_84_, lean_object* v_v_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(v_n_83_, v___x_86_, v_k_84_, v_v_85_);
return v___x_87_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_88_; size_t v___x_89_; size_t v___x_90_; 
v___x_88_ = ((size_t)5ULL);
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_shift_left(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; 
v___x_91_ = ((size_t)1ULL);
v___x_92_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0);
v___x_93_ = lean_usize_sub(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(lean_object* v_x_95_, size_t v_x_96_, size_t v_x_97_, lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v_es_100_; size_t v___x_101_; size_t v___x_102_; size_t v___x_103_; size_t v___x_104_; lean_object* v_j_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_es_100_ = lean_ctor_get(v_x_95_, 0);
v___x_101_ = ((size_t)5ULL);
v___x_102_ = ((size_t)1ULL);
v___x_103_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1);
v___x_104_ = lean_usize_land(v_x_96_, v___x_103_);
v_j_105_ = lean_usize_to_nat(v___x_104_);
v___x_106_ = lean_array_get_size(v_es_100_);
v___x_107_ = lean_nat_dec_lt(v_j_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec(v_j_105_);
lean_dec(v_x_99_);
lean_dec_ref(v_x_98_);
return v_x_95_;
}
else
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_144_; 
lean_inc_ref(v_es_100_);
v_isSharedCheck_144_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; 
v_unused_145_ = lean_ctor_get(v_x_95_, 0);
lean_dec(v_unused_145_);
v___x_109_ = v_x_95_;
v_isShared_110_ = v_isSharedCheck_144_;
goto v_resetjp_108_;
}
else
{
lean_dec(v_x_95_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_144_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_v_111_; lean_object* v___x_112_; lean_object* v_xs_x27_113_; lean_object* v___y_115_; 
v_v_111_ = lean_array_fget(v_es_100_, v_j_105_);
v___x_112_ = lean_box(0);
v_xs_x27_113_ = lean_array_fset(v_es_100_, v_j_105_, v___x_112_);
switch(lean_obj_tag(v_v_111_))
{
case 0:
{
lean_object* v_key_120_; lean_object* v_val_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_131_; 
v_key_120_ = lean_ctor_get(v_v_111_, 0);
v_val_121_ = lean_ctor_get(v_v_111_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_v_111_);
if (v_isSharedCheck_131_ == 0)
{
v___x_123_ = v_v_111_;
v_isShared_124_ = v_isSharedCheck_131_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_val_121_);
lean_inc(v_key_120_);
lean_dec(v_v_111_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_131_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
uint8_t v___x_125_; 
v___x_125_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_98_, v_key_120_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_del_object(v___x_123_);
v___x_126_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_120_, v_val_121_, v_x_98_, v_x_99_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
v___y_115_ = v___x_127_;
goto v___jp_114_;
}
else
{
lean_object* v___x_129_; 
lean_dec(v_val_121_);
lean_dec(v_key_120_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v_x_99_);
lean_ctor_set(v___x_123_, 0, v_x_98_);
v___x_129_ = v___x_123_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_x_98_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_x_99_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
v___y_115_ = v___x_129_;
goto v___jp_114_;
}
}
}
}
case 1:
{
lean_object* v_node_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_142_; 
v_node_132_ = lean_ctor_get(v_v_111_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v_v_111_);
if (v_isSharedCheck_142_ == 0)
{
v___x_134_ = v_v_111_;
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_node_132_);
lean_dec(v_v_111_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
size_t v___x_136_; size_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_136_ = lean_usize_shift_right(v_x_96_, v___x_101_);
v___x_137_ = lean_usize_add(v_x_97_, v___x_102_);
v___x_138_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_node_132_, v___x_136_, v___x_137_, v_x_98_, v_x_99_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_138_);
v___x_140_ = v___x_134_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
v___y_115_ = v___x_140_;
goto v___jp_114_;
}
}
}
default: 
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v_x_98_);
lean_ctor_set(v___x_143_, 1, v_x_99_);
v___y_115_ = v___x_143_;
goto v___jp_114_;
}
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_116_ = lean_array_fset(v_xs_x27_113_, v_j_105_, v___y_115_);
lean_dec(v_j_105_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_116_);
v___x_118_ = v___x_109_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
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
else
{
lean_object* v_ks_146_; lean_object* v_vs_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_167_; 
v_ks_146_ = lean_ctor_get(v_x_95_, 0);
v_vs_147_ = lean_ctor_get(v_x_95_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_167_ == 0)
{
v___x_149_ = v_x_95_;
v_isShared_150_ = v_isSharedCheck_167_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_vs_147_);
lean_inc(v_ks_146_);
lean_dec(v_x_95_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_167_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_ks_146_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_vs_147_);
v___x_152_ = v_reuseFailAlloc_166_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v_newNode_153_; uint8_t v___y_155_; size_t v___x_161_; uint8_t v___x_162_; 
v_newNode_153_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(v___x_152_, v_x_98_, v_x_99_);
v___x_161_ = ((size_t)7ULL);
v___x_162_ = lean_usize_dec_le(v___x_161_, v_x_97_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_163_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_153_);
v___x_164_ = lean_unsigned_to_nat(4u);
v___x_165_ = lean_nat_dec_lt(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
v___y_155_ = v___x_165_;
goto v___jp_154_;
}
else
{
v___y_155_ = v___x_162_;
goto v___jp_154_;
}
v___jp_154_:
{
if (v___y_155_ == 0)
{
lean_object* v_ks_156_; lean_object* v_vs_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_ks_156_ = lean_ctor_get(v_newNode_153_, 0);
lean_inc_ref(v_ks_156_);
v_vs_157_ = lean_ctor_get(v_newNode_153_, 1);
lean_inc_ref(v_vs_157_);
lean_dec_ref(v_newNode_153_);
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__2);
v___x_160_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_x_97_, v_ks_156_, v_vs_157_, v___x_158_, v___x_159_);
lean_dec_ref(v_vs_157_);
lean_dec_ref(v_ks_156_);
return v___x_160_;
}
else
{
return v_newNode_153_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(size_t v_depth_168_, lean_object* v_keys_169_, lean_object* v_vals_170_, lean_object* v_i_171_, lean_object* v_entries_172_){
_start:
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = lean_array_get_size(v_keys_169_);
v___x_174_ = lean_nat_dec_lt(v_i_171_, v___x_173_);
if (v___x_174_ == 0)
{
lean_dec(v_i_171_);
return v_entries_172_;
}
else
{
lean_object* v_k_175_; lean_object* v_v_176_; uint64_t v___x_177_; size_t v_h_178_; size_t v___x_179_; lean_object* v___x_180_; size_t v___x_181_; size_t v___x_182_; size_t v___x_183_; size_t v_h_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_k_175_ = lean_array_fget_borrowed(v_keys_169_, v_i_171_);
v_v_176_ = lean_array_fget_borrowed(v_vals_170_, v_i_171_);
v___x_177_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_175_);
v_h_178_ = lean_uint64_to_usize(v___x_177_);
v___x_179_ = ((size_t)5ULL);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_sub(v_depth_168_, v___x_181_);
v___x_183_ = lean_usize_mul(v___x_179_, v___x_182_);
v_h_184_ = lean_usize_shift_right(v_h_178_, v___x_183_);
v___x_185_ = lean_nat_add(v_i_171_, v___x_180_);
lean_dec(v_i_171_);
lean_inc(v_v_176_);
lean_inc(v_k_175_);
v___x_186_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_entries_172_, v_h_184_, v_depth_168_, v_k_175_, v_v_176_);
v_i_171_ = v___x_185_;
v_entries_172_ = v___x_186_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_188_, lean_object* v_keys_189_, lean_object* v_vals_190_, lean_object* v_i_191_, lean_object* v_entries_192_){
_start:
{
size_t v_depth_boxed_193_; lean_object* v_res_194_; 
v_depth_boxed_193_ = lean_unbox_usize(v_depth_188_);
lean_dec(v_depth_188_);
v_res_194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_depth_boxed_193_, v_keys_189_, v_vals_190_, v_i_191_, v_entries_192_);
lean_dec_ref(v_vals_190_);
lean_dec_ref(v_keys_189_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___boxed(lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
size_t v_x_3259__boxed_200_; size_t v_x_3260__boxed_201_; lean_object* v_res_202_; 
v_x_3259__boxed_200_ = lean_unbox_usize(v_x_196_);
lean_dec(v_x_196_);
v_x_3260__boxed_201_ = lean_unbox_usize(v_x_197_);
lean_dec(v_x_197_);
v_res_202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_195_, v_x_3259__boxed_200_, v_x_3260__boxed_201_, v_x_198_, v_x_199_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(lean_object* v_x_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
uint64_t v___x_206_; size_t v___x_207_; size_t v___x_208_; lean_object* v___x_209_; 
v___x_206_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_204_);
v___x_207_ = lean_uint64_to_usize(v___x_206_);
v___x_208_ = ((size_t)1ULL);
v___x_209_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_203_, v___x_207_, v___x_208_, v_x_204_, v_x_205_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_210_, lean_object* v_vals_211_, lean_object* v_i_212_, lean_object* v_k_213_){
_start:
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = lean_array_get_size(v_keys_210_);
v___x_215_ = lean_nat_dec_lt(v_i_212_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
lean_dec(v_i_212_);
v___x_216_ = lean_box(0);
return v___x_216_;
}
else
{
lean_object* v_k_x27_217_; uint8_t v___x_218_; 
v_k_x27_217_ = lean_array_fget_borrowed(v_keys_210_, v_i_212_);
v___x_218_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_213_, v_k_x27_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = lean_nat_add(v_i_212_, v___x_219_);
lean_dec(v_i_212_);
v_i_212_ = v___x_220_;
goto _start;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_array_fget_borrowed(v_vals_211_, v_i_212_);
lean_dec(v_i_212_);
lean_inc(v___x_222_);
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_224_, lean_object* v_vals_225_, lean_object* v_i_226_, lean_object* v_k_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_keys_224_, v_vals_225_, v_i_226_, v_k_227_);
lean_dec_ref(v_k_227_);
lean_dec_ref(v_vals_225_);
lean_dec_ref(v_keys_224_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(lean_object* v_x_229_, size_t v_x_230_, lean_object* v_x_231_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_object* v_es_232_; lean_object* v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v_j_237_; lean_object* v___x_238_; 
v_es_232_ = lean_ctor_get(v_x_229_, 0);
v___x_233_ = lean_box(2);
v___x_234_ = ((size_t)5ULL);
v___x_235_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__1);
v___x_236_ = lean_usize_land(v_x_230_, v___x_235_);
v_j_237_ = lean_usize_to_nat(v___x_236_);
v___x_238_ = lean_array_get_borrowed(v___x_233_, v_es_232_, v_j_237_);
lean_dec(v_j_237_);
switch(lean_obj_tag(v___x_238_))
{
case 0:
{
lean_object* v_key_239_; lean_object* v_val_240_; uint8_t v___x_241_; 
v_key_239_ = lean_ctor_get(v___x_238_, 0);
v_val_240_ = lean_ctor_get(v___x_238_, 1);
v___x_241_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_231_, v_key_239_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
v___x_242_ = lean_box(0);
return v___x_242_;
}
else
{
lean_object* v___x_243_; 
lean_inc(v_val_240_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_val_240_);
return v___x_243_;
}
}
case 1:
{
lean_object* v_node_244_; size_t v___x_245_; 
v_node_244_ = lean_ctor_get(v___x_238_, 0);
v___x_245_ = lean_usize_shift_right(v_x_230_, v___x_234_);
v_x_229_ = v_node_244_;
v_x_230_ = v___x_245_;
goto _start;
}
default: 
{
lean_object* v___x_247_; 
v___x_247_ = lean_box(0);
return v___x_247_;
}
}
}
else
{
lean_object* v_ks_248_; lean_object* v_vs_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_ks_248_ = lean_ctor_get(v_x_229_, 0);
v_vs_249_ = lean_ctor_get(v_x_229_, 1);
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_ks_248_, v_vs_249_, v___x_250_, v_x_231_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg___boxed(lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
size_t v_x_3459__boxed_255_; lean_object* v_res_256_; 
v_x_3459__boxed_255_ = lean_unbox_usize(v_x_253_);
lean_dec(v_x_253_);
v_res_256_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_252_, v_x_3459__boxed_255_, v_x_254_);
lean_dec_ref(v_x_254_);
lean_dec_ref(v_x_252_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
uint64_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_258_);
v___x_260_ = lean_uint64_to_usize(v___x_259_);
v___x_261_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_257_, v___x_260_, v_x_258_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg___boxed(lean_object* v_x_262_, lean_object* v_x_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_x_262_, v_x_263_);
lean_dec_ref(v_x_263_);
lean_dec_ref(v_x_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object* v_e_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_inferType_274_; lean_object* v___x_275_; 
v___x_272_ = lean_st_ref_get(v_a_270_);
lean_dec(v___x_272_);
v___x_273_ = lean_st_ref_get(v_a_266_);
v_inferType_274_ = lean_ctor_get(v___x_273_, 3);
lean_inc_ref(v_inferType_274_);
lean_dec(v___x_273_);
v___x_275_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_inferType_274_, v_e_265_);
lean_dec_ref(v_inferType_274_);
if (lean_obj_tag(v___x_275_) == 1)
{
lean_object* v_val_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_dec_ref(v_e_265_);
v_val_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_val_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 0);
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_val_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
else
{
lean_object* v___x_284_; 
lean_dec(v___x_275_);
lean_inc_ref(v_e_265_);
v___x_284_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(v_e_265_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref(v___x_284_);
v___x_286_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_a_285_, v_a_266_, v_a_270_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_316_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_316_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_316_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_316_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v_share_293_; lean_object* v_maxFVar_294_; lean_object* v_proofInstInfo_295_; lean_object* v_inferType_296_; lean_object* v_getLevel_297_; lean_object* v_congrInfo_298_; lean_object* v_defEqI_299_; lean_object* v_extensions_300_; lean_object* v_issues_301_; lean_object* v_canon_302_; uint8_t v_debug_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_315_; 
v___x_291_ = lean_st_ref_get(v_a_270_);
lean_dec(v___x_291_);
v___x_292_ = lean_st_ref_take(v_a_266_);
v_share_293_ = lean_ctor_get(v___x_292_, 0);
v_maxFVar_294_ = lean_ctor_get(v___x_292_, 1);
v_proofInstInfo_295_ = lean_ctor_get(v___x_292_, 2);
v_inferType_296_ = lean_ctor_get(v___x_292_, 3);
v_getLevel_297_ = lean_ctor_get(v___x_292_, 4);
v_congrInfo_298_ = lean_ctor_get(v___x_292_, 5);
v_defEqI_299_ = lean_ctor_get(v___x_292_, 6);
v_extensions_300_ = lean_ctor_get(v___x_292_, 7);
v_issues_301_ = lean_ctor_get(v___x_292_, 8);
v_canon_302_ = lean_ctor_get(v___x_292_, 9);
v_debug_303_ = lean_ctor_get_uint8(v___x_292_, sizeof(void*)*10);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_315_ == 0)
{
v___x_305_ = v___x_292_;
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_canon_302_);
lean_inc(v_issues_301_);
lean_inc(v_extensions_300_);
lean_inc(v_defEqI_299_);
lean_inc(v_congrInfo_298_);
lean_inc(v_getLevel_297_);
lean_inc(v_inferType_296_);
lean_inc(v_proofInstInfo_295_);
lean_inc(v_maxFVar_294_);
lean_inc(v_share_293_);
lean_dec(v___x_292_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
lean_inc(v_a_287_);
v___x_307_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_inferType_296_, v_e_265_, v_a_287_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 3, v___x_307_);
v___x_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_share_293_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_maxFVar_294_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_proofInstInfo_295_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_getLevel_297_);
lean_ctor_set(v_reuseFailAlloc_314_, 5, v_congrInfo_298_);
lean_ctor_set(v_reuseFailAlloc_314_, 6, v_defEqI_299_);
lean_ctor_set(v_reuseFailAlloc_314_, 7, v_extensions_300_);
lean_ctor_set(v_reuseFailAlloc_314_, 8, v_issues_301_);
lean_ctor_set(v_reuseFailAlloc_314_, 9, v_canon_302_);
lean_ctor_set_uint8(v_reuseFailAlloc_314_, sizeof(void*)*10, v_debug_303_);
v___x_309_ = v_reuseFailAlloc_314_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = lean_st_ref_set(v_a_266_, v___x_309_);
if (v_isShared_290_ == 0)
{
v___x_312_ = v___x_289_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_287_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_265_);
return v___x_286_;
}
}
else
{
lean_dec_ref(v_e_265_);
return v___x_284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___redArg___boxed(lean_object* v_e_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Sym_inferType___redArg(v_e_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType(lean_object* v_e_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_Meta_Sym_inferType___redArg(v_e_325_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___boxed(lean_object* v_e_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Meta_Sym_inferType(v_e_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(lean_object* v_00_u03b2_343_, lean_object* v_x_344_, lean_object* v_x_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_x_344_, v_x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___boxed(lean_object* v_00_u03b2_347_, lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(v_00_u03b2_347_, v_x_348_, v_x_349_);
lean_dec_ref(v_x_349_);
lean_dec_ref(v_x_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1(lean_object* v_00_u03b2_351_, lean_object* v_x_352_, lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_x_352_, v_x_353_, v_x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(lean_object* v_00_u03b2_356_, lean_object* v_x_357_, size_t v_x_358_, lean_object* v_x_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_357_, v_x_358_, v_x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___boxed(lean_object* v_00_u03b2_361_, lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_){
_start:
{
size_t v_x_3612__boxed_365_; lean_object* v_res_366_; 
v_x_3612__boxed_365_ = lean_unbox_usize(v_x_363_);
lean_dec(v_x_363_);
v_res_366_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(v_00_u03b2_361_, v_x_362_, v_x_3612__boxed_365_, v_x_364_);
lean_dec_ref(v_x_364_);
lean_dec_ref(v_x_362_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(lean_object* v_00_u03b2_367_, lean_object* v_x_368_, size_t v_x_369_, size_t v_x_370_, lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_368_, v_x_369_, v_x_370_, v_x_371_, v_x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___boxed(lean_object* v_00_u03b2_374_, lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
size_t v_x_3623__boxed_380_; size_t v_x_3624__boxed_381_; lean_object* v_res_382_; 
v_x_3623__boxed_380_ = lean_unbox_usize(v_x_376_);
lean_dec(v_x_376_);
v_x_3624__boxed_381_ = lean_unbox_usize(v_x_377_);
lean_dec(v_x_377_);
v_res_382_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(v_00_u03b2_374_, v_x_375_, v_x_3623__boxed_380_, v_x_3624__boxed_381_, v_x_378_, v_x_379_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_383_, lean_object* v_keys_384_, lean_object* v_vals_385_, lean_object* v_heq_386_, lean_object* v_i_387_, lean_object* v_k_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_keys_384_, v_vals_385_, v_i_387_, v_k_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_390_, lean_object* v_keys_391_, lean_object* v_vals_392_, lean_object* v_heq_393_, lean_object* v_i_394_, lean_object* v_k_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(v_00_u03b2_390_, v_keys_391_, v_vals_392_, v_heq_393_, v_i_394_, v_k_395_);
lean_dec_ref(v_k_395_);
lean_dec_ref(v_vals_392_);
lean_dec_ref(v_keys_391_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_397_, lean_object* v_n_398_, lean_object* v_k_399_, lean_object* v_v_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(v_n_398_, v_k_399_, v_v_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_402_, size_t v_depth_403_, lean_object* v_keys_404_, lean_object* v_vals_405_, lean_object* v_heq_406_, lean_object* v_i_407_, lean_object* v_entries_408_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_depth_403_, v_keys_404_, v_vals_405_, v_i_407_, v_entries_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_410_, lean_object* v_depth_411_, lean_object* v_keys_412_, lean_object* v_vals_413_, lean_object* v_heq_414_, lean_object* v_i_415_, lean_object* v_entries_416_){
_start:
{
size_t v_depth_boxed_417_; lean_object* v_res_418_; 
v_depth_boxed_417_ = lean_unbox_usize(v_depth_411_);
lean_dec(v_depth_411_);
v_res_418_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(v_00_u03b2_410_, v_depth_boxed_417_, v_keys_412_, v_vals_413_, v_heq_414_, v_i_415_, v_entries_416_);
lean_dec_ref(v_vals_413_);
lean_dec_ref(v_keys_412_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_419_, lean_object* v_x_420_, lean_object* v_x_421_, lean_object* v_x_422_, lean_object* v_x_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(v_x_420_, v_x_421_, v_x_422_, v_x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object* v_type_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_getLevel_434_; lean_object* v___x_435_; 
v___x_432_ = lean_st_ref_get(v_a_430_);
lean_dec(v___x_432_);
v___x_433_ = lean_st_ref_get(v_a_426_);
v_getLevel_434_ = lean_ctor_get(v___x_433_, 4);
lean_inc_ref(v_getLevel_434_);
lean_dec(v___x_433_);
v___x_435_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_getLevel_434_, v_type_425_);
lean_dec_ref(v_getLevel_434_);
if (lean_obj_tag(v___x_435_) == 1)
{
lean_object* v_val_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v_type_425_);
v_val_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_val_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set_tag(v___x_438_, 0);
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_val_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
else
{
lean_object* v___x_444_; 
lean_dec(v___x_435_);
lean_inc_ref(v_type_425_);
v___x_444_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(v_type_425_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_474_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_474_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_474_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_474_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v_share_451_; lean_object* v_maxFVar_452_; lean_object* v_proofInstInfo_453_; lean_object* v_inferType_454_; lean_object* v_getLevel_455_; lean_object* v_congrInfo_456_; lean_object* v_defEqI_457_; lean_object* v_extensions_458_; lean_object* v_issues_459_; lean_object* v_canon_460_; uint8_t v_debug_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_473_; 
v___x_449_ = lean_st_ref_get(v_a_430_);
lean_dec(v___x_449_);
v___x_450_ = lean_st_ref_take(v_a_426_);
v_share_451_ = lean_ctor_get(v___x_450_, 0);
v_maxFVar_452_ = lean_ctor_get(v___x_450_, 1);
v_proofInstInfo_453_ = lean_ctor_get(v___x_450_, 2);
v_inferType_454_ = lean_ctor_get(v___x_450_, 3);
v_getLevel_455_ = lean_ctor_get(v___x_450_, 4);
v_congrInfo_456_ = lean_ctor_get(v___x_450_, 5);
v_defEqI_457_ = lean_ctor_get(v___x_450_, 6);
v_extensions_458_ = lean_ctor_get(v___x_450_, 7);
v_issues_459_ = lean_ctor_get(v___x_450_, 8);
v_canon_460_ = lean_ctor_get(v___x_450_, 9);
v_debug_461_ = lean_ctor_get_uint8(v___x_450_, sizeof(void*)*10);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_473_ == 0)
{
v___x_463_ = v___x_450_;
v_isShared_464_ = v_isSharedCheck_473_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_canon_460_);
lean_inc(v_issues_459_);
lean_inc(v_extensions_458_);
lean_inc(v_defEqI_457_);
lean_inc(v_congrInfo_456_);
lean_inc(v_getLevel_455_);
lean_inc(v_inferType_454_);
lean_inc(v_proofInstInfo_453_);
lean_inc(v_maxFVar_452_);
lean_inc(v_share_451_);
lean_dec(v___x_450_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_473_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_467_; 
lean_inc(v_a_445_);
v___x_465_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_getLevel_455_, v_type_425_, v_a_445_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 4, v___x_465_);
v___x_467_ = v___x_463_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_share_451_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_maxFVar_452_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_proofInstInfo_453_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v_inferType_454_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_472_, 5, v_congrInfo_456_);
lean_ctor_set(v_reuseFailAlloc_472_, 6, v_defEqI_457_);
lean_ctor_set(v_reuseFailAlloc_472_, 7, v_extensions_458_);
lean_ctor_set(v_reuseFailAlloc_472_, 8, v_issues_459_);
lean_ctor_set(v_reuseFailAlloc_472_, 9, v_canon_460_);
lean_ctor_set_uint8(v_reuseFailAlloc_472_, sizeof(void*)*10, v_debug_461_);
v___x_467_ = v_reuseFailAlloc_472_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = lean_st_ref_set(v_a_426_, v___x_467_);
if (v_isShared_448_ == 0)
{
v___x_470_ = v___x_447_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_445_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_425_);
return v___x_444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg___boxed(lean_object* v_type_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
lean_dec(v_a_480_);
lean_dec_ref(v_a_479_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel(lean_object* v_type_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_483_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___boxed(lean_object* v_type_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Meta_Sym_getLevel(v_type_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
return v_res_500_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0(void){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_502_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_obj_once(&l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1, &l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1_once, _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__1);
v___x_504_ = lean_obj_once(&l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0, &l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0_once, _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__0);
v___x_505_ = l_Lean_Name_mkStr2(v___x_504_, v___x_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg(lean_object* v_e_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___x_513_; 
lean_inc_ref(v_e_506_);
v___x_513_ = l_Lean_Meta_Sym_inferType___redArg(v_e_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc_n(v_a_514_, 2);
lean_dec_ref(v___x_513_);
v___x_515_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_514_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_528_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_528_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_528_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_528_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_520_ = lean_obj_once(&l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2, &l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2_once, _init_l_Lean_Meta_Sym_mkEqRefl___redArg___closed__2);
v___x_521_ = lean_box(0);
v___x_522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_522_, 0, v_a_516_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = l_Lean_mkConst(v___x_520_, v___x_522_);
v___x_524_ = l_Lean_mkAppB(v___x_523_, v_a_514_, v_e_506_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_524_);
v___x_526_ = v___x_518_;
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
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_a_514_);
lean_dec_ref(v_e_506_);
v_a_529_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_515_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_515_);
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
lean_dec_ref(v_e_506_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg___boxed(lean_object* v_e_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Meta_Sym_mkEqRefl___redArg(v_e_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object* v_e_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_Meta_Sym_mkEqRefl___redArg(v_e_545_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___boxed(lean_object* v_e_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Meta_Sym_mkEqRefl(v_e_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
return v_res_562_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_InferType(builtin);
}
#ifdef __cplusplus
}
#endif
