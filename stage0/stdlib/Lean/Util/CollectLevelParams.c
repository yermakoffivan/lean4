// Lean compiler output
// Module: Lean.Util.CollectLevelParams
// Imports: public import Lean.Expr
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
uint64_t l_Lean_Level_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
static lean_once_cell_t l_Lean_CollectLevelParams_instInhabitedState___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__0;
static lean_once_cell_t l_Lean_CollectLevelParams_instInhabitedState___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__1;
static lean_once_cell_t l_Lean_CollectLevelParams_instInhabitedState___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__2;
static lean_once_cell_t l_Lean_CollectLevelParams_instInhabitedState___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__3;
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_instInhabitedState;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_collect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitLevel(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_CollectLevelParams_visitLevels_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitLevels(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitExpr(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_getUnusedLevelParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_getUnusedLevelParam___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_collect(lean_object*, lean_object*);
static lean_object* _init_l_Lean_CollectLevelParams_instInhabitedState___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_CollectLevelParams_instInhabitedState___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_CollectLevelParams_instInhabitedState___closed__0, &l_Lean_CollectLevelParams_instInhabitedState___closed__0_once, _init_l_Lean_CollectLevelParams_instInhabitedState___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_CollectLevelParams_instInhabitedState___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_mk_empty_array_with_capacity(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_CollectLevelParams_instInhabitedState___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_Lean_CollectLevelParams_instInhabitedState___closed__2, &l_Lean_CollectLevelParams_instInhabitedState___closed__2_once, _init_l_Lean_CollectLevelParams_instInhabitedState___closed__2);
v___x_10_ = lean_obj_once(&l_Lean_CollectLevelParams_instInhabitedState___closed__1, &l_Lean_CollectLevelParams_instInhabitedState___closed__1_once, _init_l_Lean_CollectLevelParams_instInhabitedState___closed__1);
v___x_11_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
lean_ctor_set(v___x_11_, 2, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_CollectLevelParams_instInhabitedState(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_CollectLevelParams_instInhabitedState___closed__3, &l_Lean_CollectLevelParams_instInhabitedState___closed__3_once, _init_l_Lean_CollectLevelParams_instInhabitedState___closed__3);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_14_) == 0)
{
return v_x_13_;
}
else
{
lean_object* v_key_15_; lean_object* v_value_16_; lean_object* v_tail_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_40_; 
v_key_15_ = lean_ctor_get(v_x_14_, 0);
v_value_16_ = lean_ctor_get(v_x_14_, 1);
v_tail_17_ = lean_ctor_get(v_x_14_, 2);
v_isSharedCheck_40_ = !lean_is_exclusive(v_x_14_);
if (v_isSharedCheck_40_ == 0)
{
v___x_19_ = v_x_14_;
v_isShared_20_ = v_isSharedCheck_40_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tail_17_);
lean_inc(v_value_16_);
lean_inc(v_key_15_);
lean_dec(v_x_14_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_40_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; uint64_t v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v_fold_25_; uint64_t v___x_26_; uint64_t v___x_27_; uint64_t v___x_28_; size_t v___x_29_; size_t v___x_30_; size_t v___x_31_; size_t v___x_32_; size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_36_; 
v___x_21_ = lean_array_get_size(v_x_13_);
v___x_22_ = l_Lean_Level_hash(v_key_15_);
v___x_23_ = 32ULL;
v___x_24_ = lean_uint64_shift_right(v___x_22_, v___x_23_);
v_fold_25_ = lean_uint64_xor(v___x_22_, v___x_24_);
v___x_26_ = 16ULL;
v___x_27_ = lean_uint64_shift_right(v_fold_25_, v___x_26_);
v___x_28_ = lean_uint64_xor(v_fold_25_, v___x_27_);
v___x_29_ = lean_uint64_to_usize(v___x_28_);
v___x_30_ = lean_usize_of_nat(v___x_21_);
v___x_31_ = ((size_t)1ULL);
v___x_32_ = lean_usize_sub(v___x_30_, v___x_31_);
v___x_33_ = lean_usize_land(v___x_29_, v___x_32_);
v___x_34_ = lean_array_uget_borrowed(v_x_13_, v___x_33_);
lean_inc(v___x_34_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 2, v___x_34_);
v___x_36_ = v___x_19_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_key_15_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_value_16_);
lean_ctor_set(v_reuseFailAlloc_39_, 2, v___x_34_);
v___x_36_ = v_reuseFailAlloc_39_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
lean_object* v___x_37_; 
v___x_37_ = lean_array_uset(v_x_13_, v___x_33_, v___x_36_);
v_x_13_ = v___x_37_;
v_x_14_ = v_tail_17_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4___redArg(lean_object* v_i_41_, lean_object* v_source_42_, lean_object* v_target_43_){
_start:
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_array_get_size(v_source_42_);
v___x_45_ = lean_nat_dec_lt(v_i_41_, v___x_44_);
if (v___x_45_ == 0)
{
lean_dec_ref(v_source_42_);
lean_dec(v_i_41_);
return v_target_43_;
}
else
{
lean_object* v_es_46_; lean_object* v___x_47_; lean_object* v_source_48_; lean_object* v_target_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_es_46_ = lean_array_fget(v_source_42_, v_i_41_);
v___x_47_ = lean_box(0);
v_source_48_ = lean_array_fset(v_source_42_, v_i_41_, v___x_47_);
v_target_49_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5___redArg(v_target_43_, v_es_46_);
v___x_50_ = lean_unsigned_to_nat(1u);
v___x_51_ = lean_nat_add(v_i_41_, v___x_50_);
lean_dec(v_i_41_);
v_i_41_ = v___x_51_;
v_source_42_ = v_source_48_;
v_target_43_ = v_target_49_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3___redArg(lean_object* v_data_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v_nbuckets_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_54_ = lean_array_get_size(v_data_53_);
v___x_55_ = lean_unsigned_to_nat(2u);
v_nbuckets_56_ = lean_nat_mul(v___x_54_, v___x_55_);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_box(0);
v___x_59_ = lean_mk_array(v_nbuckets_56_, v___x_58_);
v___x_60_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4___redArg(v___x_57_, v_data_53_, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(lean_object* v_a_61_, lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
else
{
lean_object* v_key_64_; lean_object* v_tail_65_; uint8_t v___x_66_; 
v_key_64_ = lean_ctor_get(v_x_62_, 0);
v_tail_65_ = lean_ctor_get(v_x_62_, 2);
v___x_66_ = lean_level_eq(v_key_64_, v_a_61_);
if (v___x_66_ == 0)
{
v_x_62_ = v_tail_65_;
goto _start;
}
else
{
return v___x_66_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg___boxed(lean_object* v_a_68_, lean_object* v_x_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(v_a_68_, v_x_69_);
lean_dec(v_x_69_);
lean_dec(v_a_68_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1___redArg(lean_object* v_m_72_, lean_object* v_a_73_, lean_object* v_b_74_){
_start:
{
lean_object* v_size_75_; lean_object* v_buckets_76_; lean_object* v___x_77_; uint64_t v___x_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v_fold_81_; uint64_t v___x_82_; uint64_t v___x_83_; uint64_t v___x_84_; size_t v___x_85_; size_t v___x_86_; size_t v___x_87_; size_t v___x_88_; size_t v___x_89_; lean_object* v_bkt_90_; uint8_t v___x_91_; 
v_size_75_ = lean_ctor_get(v_m_72_, 0);
v_buckets_76_ = lean_ctor_get(v_m_72_, 1);
v___x_77_ = lean_array_get_size(v_buckets_76_);
v___x_78_ = l_Lean_Level_hash(v_a_73_);
v___x_79_ = 32ULL;
v___x_80_ = lean_uint64_shift_right(v___x_78_, v___x_79_);
v_fold_81_ = lean_uint64_xor(v___x_78_, v___x_80_);
v___x_82_ = 16ULL;
v___x_83_ = lean_uint64_shift_right(v_fold_81_, v___x_82_);
v___x_84_ = lean_uint64_xor(v_fold_81_, v___x_83_);
v___x_85_ = lean_uint64_to_usize(v___x_84_);
v___x_86_ = lean_usize_of_nat(v___x_77_);
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_sub(v___x_86_, v___x_87_);
v___x_89_ = lean_usize_land(v___x_85_, v___x_88_);
v_bkt_90_ = lean_array_uget_borrowed(v_buckets_76_, v___x_89_);
v___x_91_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(v_a_73_, v_bkt_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_112_; 
lean_inc_ref(v_buckets_76_);
lean_inc(v_size_75_);
v_isSharedCheck_112_ = !lean_is_exclusive(v_m_72_);
if (v_isSharedCheck_112_ == 0)
{
lean_object* v_unused_113_; lean_object* v_unused_114_; 
v_unused_113_ = lean_ctor_get(v_m_72_, 1);
lean_dec(v_unused_113_);
v_unused_114_ = lean_ctor_get(v_m_72_, 0);
lean_dec(v_unused_114_);
v___x_93_ = v_m_72_;
v_isShared_94_ = v_isSharedCheck_112_;
goto v_resetjp_92_;
}
else
{
lean_dec(v_m_72_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_112_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_95_; lean_object* v_size_x27_96_; lean_object* v___x_97_; lean_object* v_buckets_x27_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_95_ = lean_unsigned_to_nat(1u);
v_size_x27_96_ = lean_nat_add(v_size_75_, v___x_95_);
lean_dec(v_size_75_);
lean_inc(v_bkt_90_);
v___x_97_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_97_, 0, v_a_73_);
lean_ctor_set(v___x_97_, 1, v_b_74_);
lean_ctor_set(v___x_97_, 2, v_bkt_90_);
v_buckets_x27_98_ = lean_array_uset(v_buckets_76_, v___x_89_, v___x_97_);
v___x_99_ = lean_unsigned_to_nat(4u);
v___x_100_ = lean_nat_mul(v_size_x27_96_, v___x_99_);
v___x_101_ = lean_unsigned_to_nat(3u);
v___x_102_ = lean_nat_div(v___x_100_, v___x_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_array_get_size(v_buckets_x27_98_);
v___x_104_ = lean_nat_dec_le(v___x_102_, v___x_103_);
lean_dec(v___x_102_);
if (v___x_104_ == 0)
{
lean_object* v_val_105_; lean_object* v___x_107_; 
v_val_105_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3___redArg(v_buckets_x27_98_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v_val_105_);
lean_ctor_set(v___x_93_, 0, v_size_x27_96_);
v___x_107_ = v___x_93_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_size_x27_96_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_val_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
else
{
lean_object* v___x_110_; 
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v_buckets_x27_98_);
lean_ctor_set(v___x_93_, 0, v_size_x27_96_);
v___x_110_ = v___x_93_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_size_x27_96_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_buckets_x27_98_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
else
{
lean_dec(v_b_74_);
lean_dec(v_a_73_);
return v_m_72_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(lean_object* v_m_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_buckets_117_; lean_object* v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; uint64_t v_fold_122_; uint64_t v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v_buckets_117_ = lean_ctor_get(v_m_115_, 1);
v___x_118_ = lean_array_get_size(v_buckets_117_);
v___x_119_ = l_Lean_Level_hash(v_a_116_);
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
v___x_132_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(v_a_116_, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg___boxed(lean_object* v_m_133_, lean_object* v_a_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(v_m_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_m_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_collect(lean_object* v_x_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_u_140_; lean_object* v_v_141_; lean_object* v___y_142_; 
switch(lean_obj_tag(v_x_137_))
{
case 1:
{
lean_object* v_a_145_; lean_object* v___x_146_; 
v_a_145_ = lean_ctor_get(v_x_137_, 0);
lean_inc(v_a_145_);
lean_dec_ref(v_x_137_);
v___x_146_ = l_Lean_CollectLevelParams_visitLevel(v_a_145_, v_a_138_);
return v___x_146_;
}
case 2:
{
lean_object* v_a_147_; lean_object* v_a_148_; 
v_a_147_ = lean_ctor_get(v_x_137_, 0);
lean_inc(v_a_147_);
v_a_148_ = lean_ctor_get(v_x_137_, 1);
lean_inc(v_a_148_);
lean_dec_ref(v_x_137_);
v_u_140_ = v_a_147_;
v_v_141_ = v_a_148_;
v___y_142_ = v_a_138_;
goto v___jp_139_;
}
case 3:
{
lean_object* v_a_149_; lean_object* v_a_150_; 
v_a_149_ = lean_ctor_get(v_x_137_, 0);
lean_inc(v_a_149_);
v_a_150_ = lean_ctor_get(v_x_137_, 1);
lean_inc(v_a_150_);
lean_dec_ref(v_x_137_);
v_u_140_ = v_a_149_;
v_v_141_ = v_a_150_;
v___y_142_ = v_a_138_;
goto v___jp_139_;
}
case 4:
{
lean_object* v_a_151_; lean_object* v_visitedLevel_152_; lean_object* v_visitedExpr_153_; lean_object* v_params_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_162_; 
v_a_151_ = lean_ctor_get(v_x_137_, 0);
lean_inc(v_a_151_);
lean_dec_ref(v_x_137_);
v_visitedLevel_152_ = lean_ctor_get(v_a_138_, 0);
v_visitedExpr_153_ = lean_ctor_get(v_a_138_, 1);
v_params_154_ = lean_ctor_get(v_a_138_, 2);
v_isSharedCheck_162_ = !lean_is_exclusive(v_a_138_);
if (v_isSharedCheck_162_ == 0)
{
v___x_156_ = v_a_138_;
v_isShared_157_ = v_isSharedCheck_162_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_params_154_);
lean_inc(v_visitedExpr_153_);
lean_inc(v_visitedLevel_152_);
lean_dec(v_a_138_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_162_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = lean_array_push(v_params_154_, v_a_151_);
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 2, v___x_158_);
v___x_160_ = v___x_156_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_visitedLevel_152_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_visitedExpr_153_);
lean_ctor_set(v_reuseFailAlloc_161_, 2, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
default: 
{
lean_dec(v_x_137_);
return v_a_138_;
}
}
v___jp_139_:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = l_Lean_CollectLevelParams_visitLevel(v_u_140_, v___y_142_);
v___x_144_ = l_Lean_CollectLevelParams_visitLevel(v_v_141_, v___x_143_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitLevel(lean_object* v_u_163_, lean_object* v_s_164_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = l_Lean_Level_hasParam(v_u_163_);
if (v___x_165_ == 0)
{
lean_dec(v_u_163_);
return v_s_164_;
}
else
{
lean_object* v_visitedLevel_166_; lean_object* v_visitedExpr_167_; lean_object* v_params_168_; uint8_t v___x_169_; 
v_visitedLevel_166_ = lean_ctor_get(v_s_164_, 0);
v_visitedExpr_167_ = lean_ctor_get(v_s_164_, 1);
v_params_168_ = lean_ctor_get(v_s_164_, 2);
v___x_169_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(v_visitedLevel_166_, v_u_163_);
if (v___x_169_ == 0)
{
lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_179_; 
lean_inc_ref(v_params_168_);
lean_inc_ref(v_visitedExpr_167_);
lean_inc_ref(v_visitedLevel_166_);
v_isSharedCheck_179_ = !lean_is_exclusive(v_s_164_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; lean_object* v_unused_182_; 
v_unused_180_ = lean_ctor_get(v_s_164_, 2);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_s_164_, 1);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_s_164_, 0);
lean_dec(v_unused_182_);
v___x_171_ = v_s_164_;
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
else
{
lean_dec(v_s_164_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_173_ = lean_box(0);
lean_inc(v_u_163_);
v___x_174_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1___redArg(v_visitedLevel_166_, v_u_163_, v___x_173_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_174_);
v___x_176_ = v___x_171_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_visitedExpr_167_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v_params_168_);
v___x_176_ = v_reuseFailAlloc_178_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_CollectLevelParams_collect(v_u_163_, v___x_176_);
return v___x_177_;
}
}
}
else
{
lean_dec(v_u_163_);
return v_s_164_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0(lean_object* v_00_u03b2_183_, lean_object* v_m_184_, lean_object* v_a_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(v_m_184_, v_a_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___boxed(lean_object* v_00_u03b2_187_, lean_object* v_m_188_, lean_object* v_a_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0(v_00_u03b2_187_, v_m_188_, v_a_189_);
lean_dec(v_a_189_);
lean_dec_ref(v_m_188_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1(lean_object* v_00_u03b2_192_, lean_object* v_m_193_, lean_object* v_a_194_, lean_object* v_b_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1___redArg(v_m_193_, v_a_194_, v_b_195_);
return v___x_196_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1(lean_object* v_00_u03b2_197_, lean_object* v_a_198_, lean_object* v_x_199_){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___redArg(v_a_198_, v_x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1___boxed(lean_object* v_00_u03b2_201_, lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
uint8_t v_res_204_; lean_object* v_r_205_; 
v_res_204_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0_spec__1(v_00_u03b2_201_, v_a_202_, v_x_203_);
lean_dec(v_x_203_);
lean_dec(v_a_202_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3(lean_object* v_00_u03b2_206_, lean_object* v_data_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3___redArg(v_data_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_209_, lean_object* v_i_210_, lean_object* v_source_211_, lean_object* v_target_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4___redArg(v_i_210_, v_source_211_, v_target_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitLevel_spec__1_spec__3_spec__4_spec__5___redArg(v_x_215_, v_x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_CollectLevelParams_visitLevels_spec__0(lean_object* v_x_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
return v_x_218_;
}
else
{
lean_object* v_head_220_; lean_object* v_tail_221_; lean_object* v___x_222_; 
v_head_220_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_head_220_);
v_tail_221_ = lean_ctor_get(v_x_219_, 1);
lean_inc(v_tail_221_);
lean_dec_ref(v_x_219_);
v___x_222_ = l_Lean_CollectLevelParams_visitLevel(v_head_220_, v_x_218_);
v_x_218_ = v___x_222_;
v_x_219_ = v_tail_221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitLevels(lean_object* v_us_224_, lean_object* v_s_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_List_foldl___at___00Lean_CollectLevelParams_visitLevels_spec__0(v_s_225_, v_us_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_227_, lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_228_) == 0)
{
return v_x_227_;
}
else
{
lean_object* v_key_229_; lean_object* v_value_230_; lean_object* v_tail_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_254_; 
v_key_229_ = lean_ctor_get(v_x_228_, 0);
v_value_230_ = lean_ctor_get(v_x_228_, 1);
v_tail_231_ = lean_ctor_get(v_x_228_, 2);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_228_);
if (v_isSharedCheck_254_ == 0)
{
v___x_233_ = v_x_228_;
v_isShared_234_ = v_isSharedCheck_254_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_tail_231_);
lean_inc(v_value_230_);
lean_inc(v_key_229_);
lean_dec(v_x_228_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_254_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v_fold_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; size_t v___x_243_; size_t v___x_244_; size_t v___x_245_; size_t v___x_246_; size_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_235_ = lean_array_get_size(v_x_227_);
v___x_236_ = l_Lean_Expr_hash(v_key_229_);
v___x_237_ = 32ULL;
v___x_238_ = lean_uint64_shift_right(v___x_236_, v___x_237_);
v_fold_239_ = lean_uint64_xor(v___x_236_, v___x_238_);
v___x_240_ = 16ULL;
v___x_241_ = lean_uint64_shift_right(v_fold_239_, v___x_240_);
v___x_242_ = lean_uint64_xor(v_fold_239_, v___x_241_);
v___x_243_ = lean_uint64_to_usize(v___x_242_);
v___x_244_ = lean_usize_of_nat(v___x_235_);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_sub(v___x_244_, v___x_245_);
v___x_247_ = lean_usize_land(v___x_243_, v___x_246_);
v___x_248_ = lean_array_uget_borrowed(v_x_227_, v___x_247_);
lean_inc(v___x_248_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 2, v___x_248_);
v___x_250_ = v___x_233_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_key_229_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_value_230_);
lean_ctor_set(v_reuseFailAlloc_253_, 2, v___x_248_);
v___x_250_ = v_reuseFailAlloc_253_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_251_; 
v___x_251_ = lean_array_uset(v_x_227_, v___x_247_, v___x_250_);
v_x_227_ = v___x_251_;
v_x_228_ = v_tail_231_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4___redArg(lean_object* v_i_255_, lean_object* v_source_256_, lean_object* v_target_257_){
_start:
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_array_get_size(v_source_256_);
v___x_259_ = lean_nat_dec_lt(v_i_255_, v___x_258_);
if (v___x_259_ == 0)
{
lean_dec_ref(v_source_256_);
lean_dec(v_i_255_);
return v_target_257_;
}
else
{
lean_object* v_es_260_; lean_object* v___x_261_; lean_object* v_source_262_; lean_object* v_target_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v_es_260_ = lean_array_fget(v_source_256_, v_i_255_);
v___x_261_ = lean_box(0);
v_source_262_ = lean_array_fset(v_source_256_, v_i_255_, v___x_261_);
v_target_263_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5___redArg(v_target_257_, v_es_260_);
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_nat_add(v_i_255_, v___x_264_);
lean_dec(v_i_255_);
v_i_255_ = v___x_265_;
v_source_256_ = v_source_262_;
v_target_257_ = v_target_263_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3___redArg(lean_object* v_data_267_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_nbuckets_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_268_ = lean_array_get_size(v_data_267_);
v___x_269_ = lean_unsigned_to_nat(2u);
v_nbuckets_270_ = lean_nat_mul(v___x_268_, v___x_269_);
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_box(0);
v___x_273_ = lean_mk_array(v_nbuckets_270_, v___x_272_);
v___x_274_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4___redArg(v___x_271_, v_data_267_, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(lean_object* v_a_275_, lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
uint8_t v___x_277_; 
v___x_277_ = 0;
return v___x_277_;
}
else
{
lean_object* v_key_278_; lean_object* v_tail_279_; uint8_t v___x_280_; 
v_key_278_ = lean_ctor_get(v_x_276_, 0);
v_tail_279_ = lean_ctor_get(v_x_276_, 2);
v___x_280_ = lean_expr_eqv(v_key_278_, v_a_275_);
if (v___x_280_ == 0)
{
v_x_276_ = v_tail_279_;
goto _start;
}
else
{
return v___x_280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg___boxed(lean_object* v_a_282_, lean_object* v_x_283_){
_start:
{
uint8_t v_res_284_; lean_object* v_r_285_; 
v_res_284_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(v_a_282_, v_x_283_);
lean_dec(v_x_283_);
lean_dec_ref(v_a_282_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1___redArg(lean_object* v_m_286_, lean_object* v_a_287_, lean_object* v_b_288_){
_start:
{
lean_object* v_size_289_; lean_object* v_buckets_290_; lean_object* v___x_291_; uint64_t v___x_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v_fold_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; lean_object* v_bkt_304_; uint8_t v___x_305_; 
v_size_289_ = lean_ctor_get(v_m_286_, 0);
v_buckets_290_ = lean_ctor_get(v_m_286_, 1);
v___x_291_ = lean_array_get_size(v_buckets_290_);
v___x_292_ = l_Lean_Expr_hash(v_a_287_);
v___x_293_ = 32ULL;
v___x_294_ = lean_uint64_shift_right(v___x_292_, v___x_293_);
v_fold_295_ = lean_uint64_xor(v___x_292_, v___x_294_);
v___x_296_ = 16ULL;
v___x_297_ = lean_uint64_shift_right(v_fold_295_, v___x_296_);
v___x_298_ = lean_uint64_xor(v_fold_295_, v___x_297_);
v___x_299_ = lean_uint64_to_usize(v___x_298_);
v___x_300_ = lean_usize_of_nat(v___x_291_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_sub(v___x_300_, v___x_301_);
v___x_303_ = lean_usize_land(v___x_299_, v___x_302_);
v_bkt_304_ = lean_array_uget_borrowed(v_buckets_290_, v___x_303_);
v___x_305_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(v_a_287_, v_bkt_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_326_; 
lean_inc_ref(v_buckets_290_);
lean_inc(v_size_289_);
v_isSharedCheck_326_ = !lean_is_exclusive(v_m_286_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; lean_object* v_unused_328_; 
v_unused_327_ = lean_ctor_get(v_m_286_, 1);
lean_dec(v_unused_327_);
v_unused_328_ = lean_ctor_get(v_m_286_, 0);
lean_dec(v_unused_328_);
v___x_307_ = v_m_286_;
v_isShared_308_ = v_isSharedCheck_326_;
goto v_resetjp_306_;
}
else
{
lean_dec(v_m_286_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_326_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; lean_object* v_size_x27_310_; lean_object* v___x_311_; lean_object* v_buckets_x27_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v_size_x27_310_ = lean_nat_add(v_size_289_, v___x_309_);
lean_dec(v_size_289_);
lean_inc(v_bkt_304_);
v___x_311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_311_, 0, v_a_287_);
lean_ctor_set(v___x_311_, 1, v_b_288_);
lean_ctor_set(v___x_311_, 2, v_bkt_304_);
v_buckets_x27_312_ = lean_array_uset(v_buckets_290_, v___x_303_, v___x_311_);
v___x_313_ = lean_unsigned_to_nat(4u);
v___x_314_ = lean_nat_mul(v_size_x27_310_, v___x_313_);
v___x_315_ = lean_unsigned_to_nat(3u);
v___x_316_ = lean_nat_div(v___x_314_, v___x_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_array_get_size(v_buckets_x27_312_);
v___x_318_ = lean_nat_dec_le(v___x_316_, v___x_317_);
lean_dec(v___x_316_);
if (v___x_318_ == 0)
{
lean_object* v_val_319_; lean_object* v___x_321_; 
v_val_319_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3___redArg(v_buckets_x27_312_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 1, v_val_319_);
lean_ctor_set(v___x_307_, 0, v_size_x27_310_);
v___x_321_ = v___x_307_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_size_x27_310_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_val_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
else
{
lean_object* v___x_324_; 
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 1, v_buckets_x27_312_);
lean_ctor_set(v___x_307_, 0, v_size_x27_310_);
v___x_324_ = v___x_307_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_size_x27_310_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_buckets_x27_312_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_dec(v_b_288_);
lean_dec_ref(v_a_287_);
return v_m_286_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg(lean_object* v_m_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_buckets_331_; lean_object* v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v_fold_336_; uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v___x_343_; size_t v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_buckets_331_ = lean_ctor_get(v_m_329_, 1);
v___x_332_ = lean_array_get_size(v_buckets_331_);
v___x_333_ = l_Lean_Expr_hash(v_a_330_);
v___x_334_ = 32ULL;
v___x_335_ = lean_uint64_shift_right(v___x_333_, v___x_334_);
v_fold_336_ = lean_uint64_xor(v___x_333_, v___x_335_);
v___x_337_ = 16ULL;
v___x_338_ = lean_uint64_shift_right(v_fold_336_, v___x_337_);
v___x_339_ = lean_uint64_xor(v_fold_336_, v___x_338_);
v___x_340_ = lean_uint64_to_usize(v___x_339_);
v___x_341_ = lean_usize_of_nat(v___x_332_);
v___x_342_ = ((size_t)1ULL);
v___x_343_ = lean_usize_sub(v___x_341_, v___x_342_);
v___x_344_ = lean_usize_land(v___x_340_, v___x_343_);
v___x_345_ = lean_array_uget_borrowed(v_buckets_331_, v___x_344_);
v___x_346_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(v_a_330_, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg___boxed(lean_object* v_m_347_, lean_object* v_a_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg(v_m_347_, v_a_348_);
lean_dec_ref(v_a_348_);
lean_dec_ref(v_m_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_main(lean_object* v_x_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_d_354_; lean_object* v_b_355_; lean_object* v___y_356_; 
switch(lean_obj_tag(v_x_351_))
{
case 11:
{
lean_object* v_struct_359_; lean_object* v___x_360_; 
v_struct_359_ = lean_ctor_get(v_x_351_, 2);
lean_inc_ref(v_struct_359_);
lean_dec_ref(v_x_351_);
v___x_360_ = l_Lean_CollectLevelParams_visitExpr(v_struct_359_, v_a_352_);
return v___x_360_;
}
case 7:
{
lean_object* v_binderType_361_; lean_object* v_body_362_; 
v_binderType_361_ = lean_ctor_get(v_x_351_, 1);
lean_inc_ref(v_binderType_361_);
v_body_362_ = lean_ctor_get(v_x_351_, 2);
lean_inc_ref(v_body_362_);
lean_dec_ref(v_x_351_);
v_d_354_ = v_binderType_361_;
v_b_355_ = v_body_362_;
v___y_356_ = v_a_352_;
goto v___jp_353_;
}
case 6:
{
lean_object* v_binderType_363_; lean_object* v_body_364_; 
v_binderType_363_ = lean_ctor_get(v_x_351_, 1);
lean_inc_ref(v_binderType_363_);
v_body_364_ = lean_ctor_get(v_x_351_, 2);
lean_inc_ref(v_body_364_);
lean_dec_ref(v_x_351_);
v_d_354_ = v_binderType_363_;
v_b_355_ = v_body_364_;
v___y_356_ = v_a_352_;
goto v___jp_353_;
}
case 8:
{
lean_object* v_type_365_; lean_object* v_value_366_; lean_object* v_body_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_type_365_ = lean_ctor_get(v_x_351_, 1);
lean_inc_ref(v_type_365_);
v_value_366_ = lean_ctor_get(v_x_351_, 2);
lean_inc_ref(v_value_366_);
v_body_367_ = lean_ctor_get(v_x_351_, 3);
lean_inc_ref(v_body_367_);
lean_dec_ref(v_x_351_);
v___x_368_ = l_Lean_CollectLevelParams_visitExpr(v_type_365_, v_a_352_);
v___x_369_ = l_Lean_CollectLevelParams_visitExpr(v_value_366_, v___x_368_);
v___x_370_ = l_Lean_CollectLevelParams_visitExpr(v_body_367_, v___x_369_);
return v___x_370_;
}
case 5:
{
lean_object* v_fn_371_; lean_object* v_arg_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v_fn_371_ = lean_ctor_get(v_x_351_, 0);
lean_inc_ref(v_fn_371_);
v_arg_372_ = lean_ctor_get(v_x_351_, 1);
lean_inc_ref(v_arg_372_);
lean_dec_ref(v_x_351_);
v___x_373_ = l_Lean_CollectLevelParams_visitExpr(v_fn_371_, v_a_352_);
v___x_374_ = l_Lean_CollectLevelParams_visitExpr(v_arg_372_, v___x_373_);
return v___x_374_;
}
case 10:
{
lean_object* v_expr_375_; lean_object* v___x_376_; 
v_expr_375_ = lean_ctor_get(v_x_351_, 1);
lean_inc_ref(v_expr_375_);
lean_dec_ref(v_x_351_);
v___x_376_ = l_Lean_CollectLevelParams_visitExpr(v_expr_375_, v_a_352_);
return v___x_376_;
}
case 4:
{
lean_object* v_us_377_; lean_object* v___x_378_; 
v_us_377_ = lean_ctor_get(v_x_351_, 1);
lean_inc(v_us_377_);
lean_dec_ref(v_x_351_);
v___x_378_ = l_List_foldl___at___00Lean_CollectLevelParams_visitLevels_spec__0(v_a_352_, v_us_377_);
return v___x_378_;
}
case 3:
{
lean_object* v_u_379_; lean_object* v___x_380_; 
v_u_379_ = lean_ctor_get(v_x_351_, 0);
lean_inc(v_u_379_);
lean_dec_ref(v_x_351_);
v___x_380_ = l_Lean_CollectLevelParams_visitLevel(v_u_379_, v_a_352_);
return v___x_380_;
}
default: 
{
lean_dec_ref(v_x_351_);
return v_a_352_;
}
}
v___jp_353_:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = l_Lean_CollectLevelParams_visitExpr(v_d_354_, v___y_356_);
v___x_358_ = l_Lean_CollectLevelParams_visitExpr(v_b_355_, v___x_357_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_visitExpr(lean_object* v_e_381_, lean_object* v_s_382_){
_start:
{
uint8_t v___x_383_; 
v___x_383_ = l_Lean_Expr_hasLevelParam(v_e_381_);
if (v___x_383_ == 0)
{
lean_dec_ref(v_e_381_);
return v_s_382_;
}
else
{
lean_object* v_visitedLevel_384_; lean_object* v_visitedExpr_385_; lean_object* v_params_386_; uint8_t v___x_387_; 
v_visitedLevel_384_ = lean_ctor_get(v_s_382_, 0);
v_visitedExpr_385_ = lean_ctor_get(v_s_382_, 1);
v_params_386_ = lean_ctor_get(v_s_382_, 2);
v___x_387_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg(v_visitedExpr_385_, v_e_381_);
if (v___x_387_ == 0)
{
lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_397_; 
lean_inc_ref(v_params_386_);
lean_inc_ref(v_visitedExpr_385_);
lean_inc_ref(v_visitedLevel_384_);
v_isSharedCheck_397_ = !lean_is_exclusive(v_s_382_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; lean_object* v_unused_399_; lean_object* v_unused_400_; 
v_unused_398_ = lean_ctor_get(v_s_382_, 2);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_s_382_, 1);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_s_382_, 0);
lean_dec(v_unused_400_);
v___x_389_ = v_s_382_;
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
else
{
lean_dec(v_s_382_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_391_ = lean_box(0);
lean_inc_ref(v_e_381_);
v___x_392_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1___redArg(v_visitedExpr_385_, v_e_381_, v___x_391_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v___x_392_);
v___x_394_ = v___x_389_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_visitedLevel_384_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_392_);
lean_ctor_set(v_reuseFailAlloc_396_, 2, v_params_386_);
v___x_394_ = v_reuseFailAlloc_396_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_CollectLevelParams_main(v_e_381_, v___x_394_);
return v___x_395_;
}
}
}
else
{
lean_dec_ref(v_e_381_);
return v_s_382_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0(lean_object* v_00_u03b2_401_, lean_object* v_m_402_, lean_object* v_a_403_){
_start:
{
uint8_t v___x_404_; 
v___x_404_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___redArg(v_m_402_, v_a_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0___boxed(lean_object* v_00_u03b2_405_, lean_object* v_m_406_, lean_object* v_a_407_){
_start:
{
uint8_t v_res_408_; lean_object* v_r_409_; 
v_res_408_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0(v_00_u03b2_405_, v_m_406_, v_a_407_);
lean_dec_ref(v_a_407_);
lean_dec_ref(v_m_406_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1(lean_object* v_00_u03b2_410_, lean_object* v_m_411_, lean_object* v_a_412_, lean_object* v_b_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1___redArg(v_m_411_, v_a_412_, v_b_413_);
return v___x_414_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1(lean_object* v_00_u03b2_415_, lean_object* v_a_416_, lean_object* v_x_417_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___redArg(v_a_416_, v_x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1___boxed(lean_object* v_00_u03b2_419_, lean_object* v_a_420_, lean_object* v_x_421_){
_start:
{
uint8_t v_res_422_; lean_object* v_r_423_; 
v_res_422_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitExpr_spec__0_spec__1(v_00_u03b2_419_, v_a_420_, v_x_421_);
lean_dec(v_x_421_);
lean_dec_ref(v_a_420_);
v_r_423_ = lean_box(v_res_422_);
return v_r_423_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3(lean_object* v_00_u03b2_424_, lean_object* v_data_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3___redArg(v_data_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_427_, lean_object* v_i_428_, lean_object* v_source_429_, lean_object* v_target_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4___redArg(v_i_428_, v_source_429_, v_target_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_432_, lean_object* v_x_433_, lean_object* v_x_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_CollectLevelParams_visitExpr_spec__1_spec__3_spec__4_spec__5___redArg(v_x_433_, v_x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop(lean_object* v_s_436_, lean_object* v_pre_437_, lean_object* v_i_438_){
_start:
{
lean_object* v_visitedLevel_439_; lean_object* v___x_440_; lean_object* v_v_441_; uint8_t v___x_442_; 
v_visitedLevel_439_ = lean_ctor_get(v_s_436_, 0);
lean_inc(v_i_438_);
lean_inc(v_pre_437_);
v___x_440_ = lean_name_append_index_after(v_pre_437_, v_i_438_);
v_v_441_ = l_Lean_mkLevelParam(v___x_440_);
v___x_442_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(v_visitedLevel_439_, v_v_441_);
if (v___x_442_ == 0)
{
lean_dec(v_i_438_);
lean_dec(v_pre_437_);
return v_v_441_;
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_v_441_);
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = lean_nat_add(v_i_438_, v___x_443_);
lean_dec(v_i_438_);
v_i_438_ = v___x_444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop___boxed(lean_object* v_s_446_, lean_object* v_pre_447_, lean_object* v_i_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop(v_s_446_, v_pre_447_, v_i_448_);
lean_dec_ref(v_s_446_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_getUnusedLevelParam(lean_object* v_s_450_, lean_object* v_pre_451_){
_start:
{
lean_object* v_visitedLevel_452_; lean_object* v_v_453_; uint8_t v___x_454_; 
v_visitedLevel_452_ = lean_ctor_get(v_s_450_, 0);
lean_inc(v_pre_451_);
v_v_453_ = l_Lean_mkLevelParam(v_pre_451_);
v___x_454_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_CollectLevelParams_visitLevel_spec__0___redArg(v_visitedLevel_452_, v_v_453_);
if (v___x_454_ == 0)
{
lean_dec(v_pre_451_);
return v_v_453_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec(v_v_453_);
v___x_455_ = lean_unsigned_to_nat(1u);
v___x_456_ = l___private_Lean_Util_CollectLevelParams_0__Lean_CollectLevelParams_State_getUnusedLevelParam_loop(v_s_450_, v_pre_451_, v___x_455_);
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_getUnusedLevelParam___boxed(lean_object* v_s_457_, lean_object* v_pre_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_CollectLevelParams_State_getUnusedLevelParam(v_s_457_, v_pre_458_);
lean_dec_ref(v_s_457_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectLevelParams(lean_object* v_s_460_, lean_object* v_e_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Lean_CollectLevelParams_main(v_e_461_, v_s_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_CollectLevelParams_State_collect(lean_object* v_s_463_, lean_object* v_e_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_CollectLevelParams_main(v_e_464_, v_s_463_);
return v___x_465_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_CollectLevelParams_instInhabitedState = _init_l_Lean_CollectLevelParams_instInhabitedState();
lean_mark_persistent(l_Lean_CollectLevelParams_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_CollectLevelParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_CollectLevelParams(builtin);
}
#ifdef __cplusplus
}
#endif
