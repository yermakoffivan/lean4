// Lean compiler output
// Module: Lean.Util.NumApps
// Imports: public import Lean.Expr public import Lean.Util.PtrSet
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
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_NumApps_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_visit___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_NumApps_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_main___closed__0;
static lean_once_cell_t l_Lean_Expr_NumApps_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_main___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_main(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_NumApps_0__Lean_Expr_numApps_unsafe__1(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_numApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_numApps___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_numApps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_numApps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; size_t v___x_6_; size_t v___x_7_; uint8_t v___x_8_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v___x_6_ = lean_ptr_addr(v_key_4_);
v___x_7_ = lean_ptr_addr(v_a_1_);
v___x_8_ = lean_usize_dec_eq(v___x_6_, v___x_7_);
if (v___x_8_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(lean_object* v_m_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_buckets_16_; lean_object* v___x_17_; size_t v___x_18_; uint64_t v___x_19_; uint64_t v___x_20_; uint64_t v___x_21_; uint64_t v___x_22_; uint64_t v___x_23_; uint64_t v_fold_24_; uint64_t v___x_25_; uint64_t v___x_26_; uint64_t v___x_27_; size_t v___x_28_; size_t v___x_29_; size_t v___x_30_; size_t v___x_31_; size_t v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v_buckets_16_ = lean_ctor_get(v_m_14_, 1);
v___x_17_ = lean_array_get_size(v_buckets_16_);
v___x_18_ = lean_ptr_addr(v_a_15_);
v___x_19_ = lean_usize_to_uint64(v___x_18_);
v___x_20_ = 11ULL;
v___x_21_ = lean_uint64_mix_hash(v___x_19_, v___x_20_);
v___x_22_ = 32ULL;
v___x_23_ = lean_uint64_shift_right(v___x_21_, v___x_22_);
v_fold_24_ = lean_uint64_xor(v___x_21_, v___x_23_);
v___x_25_ = 16ULL;
v___x_26_ = lean_uint64_shift_right(v_fold_24_, v___x_25_);
v___x_27_ = lean_uint64_xor(v_fold_24_, v___x_26_);
v___x_28_ = lean_uint64_to_usize(v___x_27_);
v___x_29_ = lean_usize_of_nat(v___x_17_);
v___x_30_ = ((size_t)1ULL);
v___x_31_ = lean_usize_sub(v___x_29_, v___x_30_);
v___x_32_ = lean_usize_land(v___x_28_, v___x_31_);
v___x_33_ = lean_array_uget_borrowed(v_buckets_16_, v___x_32_);
v___x_34_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_15_, v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg___boxed(lean_object* v_m_35_, lean_object* v_a_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_m_35_, v_a_36_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_m_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
return v_x_39_;
}
else
{
lean_object* v_key_41_; lean_object* v_value_42_; lean_object* v_tail_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_69_; 
v_key_41_ = lean_ctor_get(v_x_40_, 0);
v_value_42_ = lean_ctor_get(v_x_40_, 1);
v_tail_43_ = lean_ctor_get(v_x_40_, 2);
v_isSharedCheck_69_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_69_ == 0)
{
v___x_45_ = v_x_40_;
v_isShared_46_ = v_isSharedCheck_69_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_tail_43_);
lean_inc(v_value_42_);
lean_inc(v_key_41_);
lean_dec(v_x_40_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_69_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; size_t v___x_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v_fold_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; size_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; size_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_47_ = lean_array_get_size(v_x_39_);
v___x_48_ = lean_ptr_addr(v_key_41_);
v___x_49_ = lean_usize_to_uint64(v___x_48_);
v___x_50_ = 11ULL;
v___x_51_ = lean_uint64_mix_hash(v___x_49_, v___x_50_);
v___x_52_ = 32ULL;
v___x_53_ = lean_uint64_shift_right(v___x_51_, v___x_52_);
v_fold_54_ = lean_uint64_xor(v___x_51_, v___x_53_);
v___x_55_ = 16ULL;
v___x_56_ = lean_uint64_shift_right(v_fold_54_, v___x_55_);
v___x_57_ = lean_uint64_xor(v_fold_54_, v___x_56_);
v___x_58_ = lean_uint64_to_usize(v___x_57_);
v___x_59_ = lean_usize_of_nat(v___x_47_);
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_sub(v___x_59_, v___x_60_);
v___x_62_ = lean_usize_land(v___x_58_, v___x_61_);
v___x_63_ = lean_array_uget_borrowed(v_x_39_, v___x_62_);
lean_inc(v___x_63_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 2, v___x_63_);
v___x_65_ = v___x_45_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_key_41_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_value_42_);
lean_ctor_set(v_reuseFailAlloc_68_, 2, v___x_63_);
v___x_65_ = v_reuseFailAlloc_68_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_array_uset(v_x_39_, v___x_62_, v___x_65_);
v_x_39_ = v___x_66_;
v_x_40_ = v_tail_43_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(lean_object* v_i_70_, lean_object* v_source_71_, lean_object* v_target_72_){
_start:
{
lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_73_ = lean_array_get_size(v_source_71_);
v___x_74_ = lean_nat_dec_lt(v_i_70_, v___x_73_);
if (v___x_74_ == 0)
{
lean_dec_ref(v_source_71_);
lean_dec(v_i_70_);
return v_target_72_;
}
else
{
lean_object* v_es_75_; lean_object* v___x_76_; lean_object* v_source_77_; lean_object* v_target_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_es_75_ = lean_array_fget(v_source_71_, v_i_70_);
v___x_76_ = lean_box(0);
v_source_77_ = lean_array_fset(v_source_71_, v_i_70_, v___x_76_);
v_target_78_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_target_72_, v_es_75_);
v___x_79_ = lean_unsigned_to_nat(1u);
v___x_80_ = lean_nat_add(v_i_70_, v___x_79_);
lean_dec(v_i_70_);
v_i_70_ = v___x_80_;
v_source_71_ = v_source_77_;
v_target_72_ = v_target_78_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(lean_object* v_data_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_nbuckets_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_83_ = lean_array_get_size(v_data_82_);
v___x_84_ = lean_unsigned_to_nat(2u);
v_nbuckets_85_ = lean_nat_mul(v___x_83_, v___x_84_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_box(0);
v___x_88_ = lean_mk_array(v_nbuckets_85_, v___x_87_);
v___x_89_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(v___x_86_, v_data_82_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(lean_object* v_m_90_, lean_object* v_a_91_, lean_object* v_b_92_){
_start:
{
lean_object* v_size_93_; lean_object* v_buckets_94_; lean_object* v___x_95_; size_t v___x_96_; uint64_t v___x_97_; uint64_t v___x_98_; uint64_t v___x_99_; uint64_t v___x_100_; uint64_t v___x_101_; uint64_t v_fold_102_; uint64_t v___x_103_; uint64_t v___x_104_; uint64_t v___x_105_; size_t v___x_106_; size_t v___x_107_; size_t v___x_108_; size_t v___x_109_; size_t v___x_110_; lean_object* v_bkt_111_; uint8_t v___x_112_; 
v_size_93_ = lean_ctor_get(v_m_90_, 0);
v_buckets_94_ = lean_ctor_get(v_m_90_, 1);
v___x_95_ = lean_array_get_size(v_buckets_94_);
v___x_96_ = lean_ptr_addr(v_a_91_);
v___x_97_ = lean_usize_to_uint64(v___x_96_);
v___x_98_ = 11ULL;
v___x_99_ = lean_uint64_mix_hash(v___x_97_, v___x_98_);
v___x_100_ = 32ULL;
v___x_101_ = lean_uint64_shift_right(v___x_99_, v___x_100_);
v_fold_102_ = lean_uint64_xor(v___x_99_, v___x_101_);
v___x_103_ = 16ULL;
v___x_104_ = lean_uint64_shift_right(v_fold_102_, v___x_103_);
v___x_105_ = lean_uint64_xor(v_fold_102_, v___x_104_);
v___x_106_ = lean_uint64_to_usize(v___x_105_);
v___x_107_ = lean_usize_of_nat(v___x_95_);
v___x_108_ = ((size_t)1ULL);
v___x_109_ = lean_usize_sub(v___x_107_, v___x_108_);
v___x_110_ = lean_usize_land(v___x_106_, v___x_109_);
v_bkt_111_ = lean_array_uget_borrowed(v_buckets_94_, v___x_110_);
v___x_112_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_91_, v_bkt_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_133_; 
lean_inc_ref(v_buckets_94_);
lean_inc(v_size_93_);
v_isSharedCheck_133_ = !lean_is_exclusive(v_m_90_);
if (v_isSharedCheck_133_ == 0)
{
lean_object* v_unused_134_; lean_object* v_unused_135_; 
v_unused_134_ = lean_ctor_get(v_m_90_, 1);
lean_dec(v_unused_134_);
v_unused_135_ = lean_ctor_get(v_m_90_, 0);
lean_dec(v_unused_135_);
v___x_114_ = v_m_90_;
v_isShared_115_ = v_isSharedCheck_133_;
goto v_resetjp_113_;
}
else
{
lean_dec(v_m_90_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_133_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v_size_x27_117_; lean_object* v___x_118_; lean_object* v_buckets_x27_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_116_ = lean_unsigned_to_nat(1u);
v_size_x27_117_ = lean_nat_add(v_size_93_, v___x_116_);
lean_dec(v_size_93_);
lean_inc(v_bkt_111_);
v___x_118_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_118_, 0, v_a_91_);
lean_ctor_set(v___x_118_, 1, v_b_92_);
lean_ctor_set(v___x_118_, 2, v_bkt_111_);
v_buckets_x27_119_ = lean_array_uset(v_buckets_94_, v___x_110_, v___x_118_);
v___x_120_ = lean_unsigned_to_nat(4u);
v___x_121_ = lean_nat_mul(v_size_x27_117_, v___x_120_);
v___x_122_ = lean_unsigned_to_nat(3u);
v___x_123_ = lean_nat_div(v___x_121_, v___x_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_array_get_size(v_buckets_x27_119_);
v___x_125_ = lean_nat_dec_le(v___x_123_, v___x_124_);
lean_dec(v___x_123_);
if (v___x_125_ == 0)
{
lean_object* v_val_126_; lean_object* v___x_128_; 
v_val_126_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(v_buckets_x27_119_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 1, v_val_126_);
lean_ctor_set(v___x_114_, 0, v_size_x27_117_);
v___x_128_ = v___x_114_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_size_x27_117_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_val_126_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
else
{
lean_object* v___x_131_; 
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 1, v_buckets_x27_119_);
lean_ctor_set(v___x_114_, 0, v_size_x27_117_);
v___x_131_ = v___x_114_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_size_x27_117_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_buckets_x27_119_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
else
{
lean_dec(v_b_92_);
lean_dec_ref(v_a_91_);
return v_m_90_;
}
}
}
static lean_object* _init_l_Lean_Expr_NumApps_visit___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v_dummy_137_; 
v___x_136_ = lean_box(0);
v_dummy_137_ = l_Lean_Expr_sort___override(v___x_136_);
return v_dummy_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(lean_object* v_x_138_, lean_object* v_x_139_, lean_object* v_x_140_, lean_object* v___y_141_){
_start:
{
lean_object* v___y_143_; 
if (lean_obj_tag(v_x_138_) == 5)
{
lean_object* v_fn_168_; lean_object* v_arg_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_fn_168_ = lean_ctor_get(v_x_138_, 0);
lean_inc_ref(v_fn_168_);
v_arg_169_ = lean_ctor_get(v_x_138_, 1);
lean_inc_ref(v_arg_169_);
lean_dec_ref(v_x_138_);
v___x_170_ = lean_array_set(v_x_139_, v_x_140_, v_arg_169_);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_sub(v_x_140_, v___x_171_);
lean_dec(v_x_140_);
v_x_138_ = v_fn_168_;
v_x_139_ = v___x_170_;
v_x_140_ = v___x_172_;
goto _start;
}
else
{
lean_dec(v_x_140_);
if (lean_obj_tag(v_x_138_) == 4)
{
lean_object* v_declName_174_; lean_object* v_visited_175_; lean_object* v_counters_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_191_; 
v_declName_174_ = lean_ctor_get(v_x_138_, 0);
v_visited_175_ = lean_ctor_get(v___y_141_, 0);
v_counters_176_ = lean_ctor_get(v___y_141_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v___y_141_);
if (v_isSharedCheck_191_ == 0)
{
v___x_178_ = v___y_141_;
v_isShared_179_ = v_isSharedCheck_191_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_counters_176_);
lean_inc(v_visited_175_);
lean_dec(v___y_141_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_191_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___y_181_; lean_object* v___x_188_; 
v___x_188_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_counters_176_, v_declName_174_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_unsigned_to_nat(0u);
v___y_181_ = v___x_189_;
goto v___jp_180_;
}
else
{
lean_object* v_val_190_; 
v_val_190_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_val_190_);
lean_dec_ref(v___x_188_);
v___y_181_ = v_val_190_;
goto v___jp_180_;
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_nat_add(v___y_181_, v___x_182_);
lean_dec(v___y_181_);
lean_inc(v_declName_174_);
v___x_184_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_174_, v___x_183_, v_counters_176_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_184_);
v___x_186_ = v___x_178_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_visited_175_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
v___y_143_ = v___x_186_;
goto v___jp_142_;
}
}
}
}
else
{
v___y_143_ = v___y_141_;
goto v___jp_142_;
}
}
v___jp_142_:
{
lean_object* v___x_144_; lean_object* v_snd_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_166_; 
v___x_144_ = l_Lean_Expr_NumApps_visit(v_x_138_, v___y_143_);
v_snd_145_ = lean_ctor_get(v___x_144_, 1);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_166_ == 0)
{
lean_object* v_unused_167_; 
v_unused_167_ = lean_ctor_get(v___x_144_, 0);
lean_dec(v_unused_167_);
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_166_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_snd_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_166_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_array_get_size(v_x_139_);
v___x_151_ = lean_box(0);
v___x_152_ = lean_nat_dec_lt(v___x_149_, v___x_150_);
if (v___x_152_ == 0)
{
lean_object* v___x_154_; 
lean_dec_ref(v_x_139_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_151_);
v___x_154_ = v___x_147_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_snd_145_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
else
{
uint8_t v___x_156_; 
v___x_156_ = lean_nat_dec_le(v___x_150_, v___x_150_);
if (v___x_156_ == 0)
{
if (v___x_152_ == 0)
{
lean_object* v___x_158_; 
lean_dec_ref(v_x_139_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_151_);
v___x_158_ = v___x_147_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_snd_145_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
else
{
size_t v___x_160_; size_t v___x_161_; lean_object* v___x_162_; 
lean_del_object(v___x_147_);
v___x_160_ = ((size_t)0ULL);
v___x_161_ = lean_usize_of_nat(v___x_150_);
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_x_139_, v___x_160_, v___x_161_, v___x_151_, v_snd_145_);
lean_dec_ref(v_x_139_);
return v___x_162_;
}
}
else
{
size_t v___x_163_; size_t v___x_164_; lean_object* v___x_165_; 
lean_del_object(v___x_147_);
v___x_163_ = ((size_t)0ULL);
v___x_164_ = lean_usize_of_nat(v___x_150_);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_x_139_, v___x_163_, v___x_164_, v___x_151_, v_snd_145_);
lean_dec_ref(v_x_139_);
return v___x_165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_visit(lean_object* v_e_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_d_195_; lean_object* v_b_196_; lean_object* v___y_197_; lean_object* v_visited_201_; lean_object* v_counters_202_; uint8_t v___x_203_; 
v_visited_201_ = lean_ctor_get(v_a_193_, 0);
v_counters_202_ = lean_ctor_get(v_a_193_, 1);
v___x_203_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_visited_201_, v_e_192_);
if (v___x_203_ == 0)
{
lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_235_; 
lean_inc(v_counters_202_);
lean_inc_ref(v_visited_201_);
v_isSharedCheck_235_ = !lean_is_exclusive(v_a_193_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; lean_object* v_unused_237_; 
v_unused_236_ = lean_ctor_get(v_a_193_, 1);
lean_dec(v_unused_236_);
v_unused_237_ = lean_ctor_get(v_a_193_, 0);
lean_dec(v_unused_237_);
v___x_205_ = v_a_193_;
v_isShared_206_ = v_isSharedCheck_235_;
goto v_resetjp_204_;
}
else
{
lean_dec(v_a_193_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_235_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_207_ = lean_box(0);
lean_inc_ref(v_e_192_);
v___x_208_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(v_visited_201_, v_e_192_, v___x_207_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_208_);
v___x_210_ = v___x_205_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_208_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v_counters_202_);
v___x_210_ = v_reuseFailAlloc_234_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
switch(lean_obj_tag(v_e_192_))
{
case 7:
{
lean_object* v_binderType_211_; lean_object* v_body_212_; 
v_binderType_211_ = lean_ctor_get(v_e_192_, 1);
lean_inc_ref(v_binderType_211_);
v_body_212_ = lean_ctor_get(v_e_192_, 2);
lean_inc_ref(v_body_212_);
lean_dec_ref(v_e_192_);
v_d_195_ = v_binderType_211_;
v_b_196_ = v_body_212_;
v___y_197_ = v___x_210_;
goto v___jp_194_;
}
case 6:
{
lean_object* v_binderType_213_; lean_object* v_body_214_; 
v_binderType_213_ = lean_ctor_get(v_e_192_, 1);
lean_inc_ref(v_binderType_213_);
v_body_214_ = lean_ctor_get(v_e_192_, 2);
lean_inc_ref(v_body_214_);
lean_dec_ref(v_e_192_);
v_d_195_ = v_binderType_213_;
v_b_196_ = v_body_214_;
v___y_197_ = v___x_210_;
goto v___jp_194_;
}
case 10:
{
lean_object* v_expr_215_; 
v_expr_215_ = lean_ctor_get(v_e_192_, 1);
lean_inc_ref(v_expr_215_);
lean_dec_ref(v_e_192_);
v_e_192_ = v_expr_215_;
v_a_193_ = v___x_210_;
goto _start;
}
case 8:
{
lean_object* v_type_217_; lean_object* v_value_218_; lean_object* v_body_219_; lean_object* v___x_220_; lean_object* v_snd_221_; lean_object* v___x_222_; lean_object* v_snd_223_; 
v_type_217_ = lean_ctor_get(v_e_192_, 1);
lean_inc_ref(v_type_217_);
v_value_218_ = lean_ctor_get(v_e_192_, 2);
lean_inc_ref(v_value_218_);
v_body_219_ = lean_ctor_get(v_e_192_, 3);
lean_inc_ref(v_body_219_);
lean_dec_ref(v_e_192_);
v___x_220_ = l_Lean_Expr_NumApps_visit(v_type_217_, v___x_210_);
v_snd_221_ = lean_ctor_get(v___x_220_, 1);
lean_inc(v_snd_221_);
lean_dec_ref(v___x_220_);
v___x_222_ = l_Lean_Expr_NumApps_visit(v_value_218_, v_snd_221_);
v_snd_223_ = lean_ctor_get(v___x_222_, 1);
lean_inc(v_snd_223_);
lean_dec_ref(v___x_222_);
v_e_192_ = v_body_219_;
v_a_193_ = v_snd_223_;
goto _start;
}
case 5:
{
lean_object* v_dummy_225_; lean_object* v_nargs_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_dummy_225_ = lean_obj_once(&l_Lean_Expr_NumApps_visit___closed__0, &l_Lean_Expr_NumApps_visit___closed__0_once, _init_l_Lean_Expr_NumApps_visit___closed__0);
v_nargs_226_ = l_Lean_Expr_getAppNumArgs(v_e_192_);
lean_inc(v_nargs_226_);
v___x_227_ = lean_mk_array(v_nargs_226_, v_dummy_225_);
v___x_228_ = lean_unsigned_to_nat(1u);
v___x_229_ = lean_nat_sub(v_nargs_226_, v___x_228_);
lean_dec(v_nargs_226_);
v___x_230_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(v_e_192_, v___x_227_, v___x_229_, v___x_210_);
return v___x_230_;
}
case 11:
{
lean_object* v_struct_231_; 
v_struct_231_ = lean_ctor_get(v_e_192_, 2);
lean_inc_ref(v_struct_231_);
lean_dec_ref(v_e_192_);
v_e_192_ = v_struct_231_;
v_a_193_ = v___x_210_;
goto _start;
}
default: 
{
lean_object* v___x_233_; 
lean_dec_ref(v_e_192_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_207_);
lean_ctor_set(v___x_233_, 1, v___x_210_);
return v___x_233_;
}
}
}
}
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec_ref(v_e_192_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v_a_193_);
return v___x_239_;
}
v___jp_194_:
{
lean_object* v___x_198_; lean_object* v_snd_199_; 
v___x_198_ = l_Lean_Expr_NumApps_visit(v_d_195_, v___y_197_);
v_snd_199_ = lean_ctor_get(v___x_198_, 1);
lean_inc(v_snd_199_);
lean_dec_ref(v___x_198_);
v_e_192_ = v_b_196_;
v_a_193_ = v_snd_199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(lean_object* v_as_240_, size_t v_i_241_, size_t v_stop_242_, lean_object* v_b_243_, lean_object* v___y_244_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = lean_usize_dec_eq(v_i_241_, v_stop_242_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_fst_248_; lean_object* v_snd_249_; size_t v___x_250_; size_t v___x_251_; 
v___x_246_ = lean_array_uget_borrowed(v_as_240_, v_i_241_);
lean_inc(v___x_246_);
v___x_247_ = l_Lean_Expr_NumApps_visit(v___x_246_, v___y_244_);
v_fst_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_fst_248_);
v_snd_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_snd_249_);
lean_dec_ref(v___x_247_);
v___x_250_ = ((size_t)1ULL);
v___x_251_ = lean_usize_add(v_i_241_, v___x_250_);
v_i_241_ = v___x_251_;
v_b_243_ = v_fst_248_;
v___y_244_ = v_snd_249_;
goto _start;
}
else
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v_b_243_);
lean_ctor_set(v___x_253_, 1, v___y_244_);
return v___x_253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0___boxed(lean_object* v_as_254_, lean_object* v_i_255_, lean_object* v_stop_256_, lean_object* v_b_257_, lean_object* v___y_258_){
_start:
{
size_t v_i_boxed_259_; size_t v_stop_boxed_260_; lean_object* v_res_261_; 
v_i_boxed_259_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_stop_boxed_260_ = lean_unbox_usize(v_stop_256_);
lean_dec(v_stop_256_);
v_res_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_as_254_, v_i_boxed_259_, v_stop_boxed_260_, v_b_257_, v___y_258_);
lean_dec_ref(v_as_254_);
return v_res_261_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(lean_object* v_00_u03b2_262_, lean_object* v_m_263_, lean_object* v_a_264_){
_start:
{
uint8_t v___x_265_; 
v___x_265_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_m_263_, v_a_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___boxed(lean_object* v_00_u03b2_266_, lean_object* v_m_267_, lean_object* v_a_268_){
_start:
{
uint8_t v_res_269_; lean_object* v_r_270_; 
v_res_269_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(v_00_u03b2_266_, v_m_267_, v_a_268_);
lean_dec_ref(v_a_268_);
lean_dec_ref(v_m_267_);
v_r_270_ = lean_box(v_res_269_);
return v_r_270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2(lean_object* v_00_u03b2_271_, lean_object* v_m_272_, lean_object* v_a_273_, lean_object* v_b_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(v_m_272_, v_a_273_, v_b_274_);
return v___x_275_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(lean_object* v_00_u03b2_276_, lean_object* v_a_277_, lean_object* v_x_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_277_, v_x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___boxed(lean_object* v_00_u03b2_280_, lean_object* v_a_281_, lean_object* v_x_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(v_00_u03b2_280_, v_a_281_, v_x_282_);
lean_dec(v_x_282_);
lean_dec_ref(v_a_281_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3(lean_object* v_00_u03b2_285_, lean_object* v_data_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(v_data_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_288_, lean_object* v_i_289_, lean_object* v_source_290_, lean_object* v_target_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(v_i_289_, v_source_290_, v_target_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_293_, lean_object* v_x_294_, lean_object* v_x_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_x_294_, v_x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_main___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(64u);
v___x_298_ = l_Lean_mkPtrSet___redArg(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_main___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_box(1);
v___x_300_ = lean_obj_once(&l_Lean_Expr_NumApps_main___closed__0, &l_Lean_Expr_NumApps_main___closed__0_once, _init_l_Lean_Expr_NumApps_main___closed__0);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v___x_299_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_main(lean_object* v_e_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_snd_305_; lean_object* v_counters_306_; 
v___x_303_ = lean_obj_once(&l_Lean_Expr_NumApps_main___closed__1, &l_Lean_Expr_NumApps_main___closed__1_once, _init_l_Lean_Expr_NumApps_main___closed__1);
v___x_304_ = l_Lean_Expr_NumApps_visit(v_e_302_, v___x_303_);
v_snd_305_ = lean_ctor_get(v___x_304_, 1);
lean_inc(v_snd_305_);
lean_dec_ref(v___x_304_);
v_counters_306_ = lean_ctor_get(v_snd_305_, 1);
lean_inc(v_counters_306_);
lean_dec(v_snd_305_);
return v_counters_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_NumApps_0__Lean_Expr_numApps_unsafe__1(lean_object* v_e_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Expr_NumApps_main(v_e_307_);
return v___x_308_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(lean_object* v_a_309_, lean_object* v_b_310_){
_start:
{
lean_object* v_snd_311_; lean_object* v_snd_312_; uint8_t v___x_313_; 
v_snd_311_ = lean_ctor_get(v_b_310_, 1);
v_snd_312_ = lean_ctor_get(v_a_309_, 1);
v___x_313_ = lean_nat_dec_lt(v_snd_311_, v_snd_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0___boxed(lean_object* v_a_314_, lean_object* v_b_315_){
_start:
{
uint8_t v_res_316_; lean_object* v_r_317_; 
v_res_316_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v_a_314_, v_b_315_);
lean_dec_ref(v_b_315_);
lean_dec_ref(v_a_314_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(lean_object* v_hi_318_, lean_object* v_pivot_319_, lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_k_322_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_lt(v_k_322_, v_hi_318_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec(v_k_322_);
v___x_324_ = lean_array_fswap(v_as_320_, v_i_321_, v_hi_318_);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v_i_321_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
return v___x_325_;
}
else
{
lean_object* v_snd_326_; lean_object* v___x_327_; lean_object* v_snd_328_; uint8_t v___x_329_; 
v_snd_326_ = lean_ctor_get(v_pivot_319_, 1);
v___x_327_ = lean_array_fget_borrowed(v_as_320_, v_k_322_);
v_snd_328_ = lean_ctor_get(v___x_327_, 1);
v___x_329_ = lean_nat_dec_lt(v_snd_326_, v_snd_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_unsigned_to_nat(1u);
v___x_331_ = lean_nat_add(v_k_322_, v___x_330_);
lean_dec(v_k_322_);
v_k_322_ = v___x_331_;
goto _start;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = lean_array_fswap(v_as_320_, v_i_321_, v_k_322_);
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_i_321_, v___x_334_);
lean_dec(v_i_321_);
v___x_336_ = lean_nat_add(v_k_322_, v___x_334_);
lean_dec(v_k_322_);
v_as_320_ = v___x_333_;
v_i_321_ = v___x_335_;
v_k_322_ = v___x_336_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_338_, lean_object* v_pivot_339_, lean_object* v_as_340_, lean_object* v_i_341_, lean_object* v_k_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_338_, v_pivot_339_, v_as_340_, v_i_341_, v_k_342_);
lean_dec_ref(v_pivot_339_);
lean_dec(v_hi_338_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(lean_object* v_n_344_, lean_object* v_as_345_, lean_object* v_lo_346_, lean_object* v_hi_347_){
_start:
{
lean_object* v___y_349_; uint8_t v___x_359_; 
v___x_359_ = lean_nat_dec_lt(v_lo_346_, v_hi_347_);
if (v___x_359_ == 0)
{
lean_dec(v_lo_346_);
return v_as_345_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_mid_362_; lean_object* v___y_364_; lean_object* v___y_370_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_360_ = lean_nat_add(v_lo_346_, v_hi_347_);
v___x_361_ = lean_unsigned_to_nat(1u);
v_mid_362_ = lean_nat_shiftr(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
v___x_375_ = lean_array_fget_borrowed(v_as_345_, v_mid_362_);
v___x_376_ = lean_array_fget_borrowed(v_as_345_, v_lo_346_);
v___x_377_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_375_, v___x_376_);
if (v___x_377_ == 0)
{
v___y_370_ = v_as_345_;
goto v___jp_369_;
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_array_fswap(v_as_345_, v_lo_346_, v_mid_362_);
v___y_370_ = v___x_378_;
goto v___jp_369_;
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_365_ = lean_array_fget_borrowed(v___y_364_, v_mid_362_);
v___x_366_ = lean_array_fget_borrowed(v___y_364_, v_hi_347_);
v___x_367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_dec(v_mid_362_);
v___y_349_ = v___y_364_;
goto v___jp_348_;
}
else
{
lean_object* v___x_368_; 
v___x_368_ = lean_array_fswap(v___y_364_, v_mid_362_, v_hi_347_);
lean_dec(v_mid_362_);
v___y_349_ = v___x_368_;
goto v___jp_348_;
}
}
v___jp_369_:
{
lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_371_ = lean_array_fget_borrowed(v___y_370_, v_hi_347_);
v___x_372_ = lean_array_fget_borrowed(v___y_370_, v_lo_346_);
v___x_373_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_371_, v___x_372_);
if (v___x_373_ == 0)
{
v___y_364_ = v___y_370_;
goto v___jp_363_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = lean_array_fswap(v___y_370_, v_lo_346_, v_hi_347_);
v___y_364_ = v___x_374_;
goto v___jp_363_;
}
}
}
v___jp_348_:
{
lean_object* v_pivot_350_; lean_object* v___x_351_; lean_object* v_fst_352_; lean_object* v_snd_353_; uint8_t v___x_354_; 
v_pivot_350_ = lean_array_fget(v___y_349_, v_hi_347_);
lean_inc_n(v_lo_346_, 2);
v___x_351_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_347_, v_pivot_350_, v___y_349_, v_lo_346_, v_lo_346_);
lean_dec(v_pivot_350_);
v_fst_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_fst_352_);
v_snd_353_ = lean_ctor_get(v___x_351_, 1);
lean_inc(v_snd_353_);
lean_dec_ref(v___x_351_);
v___x_354_ = lean_nat_dec_le(v_hi_347_, v_fst_352_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_344_, v_snd_353_, v_lo_346_, v_fst_352_);
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = lean_nat_add(v_fst_352_, v___x_356_);
lean_dec(v_fst_352_);
v_as_345_ = v___x_355_;
v_lo_346_ = v___x_357_;
goto _start;
}
else
{
lean_dec(v_fst_352_);
lean_dec(v_lo_346_);
return v_snd_353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___boxed(lean_object* v_n_379_, lean_object* v_as_380_, lean_object* v_lo_381_, lean_object* v_hi_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_379_, v_as_380_, v_lo_381_, v_hi_382_);
lean_dec(v_hi_382_);
lean_dec(v_n_379_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(lean_object* v_threshold_384_, lean_object* v_init_385_, lean_object* v_x_386_){
_start:
{
lean_object* v_d_389_; 
if (lean_obj_tag(v_x_386_) == 0)
{
lean_object* v_k_392_; lean_object* v_v_393_; lean_object* v_l_394_; lean_object* v_r_395_; lean_object* v___x_396_; lean_object* v_a_397_; 
v_k_392_ = lean_ctor_get(v_x_386_, 1);
v_v_393_ = lean_ctor_get(v_x_386_, 2);
v_l_394_ = lean_ctor_get(v_x_386_, 3);
v_r_395_ = lean_ctor_get(v_x_386_, 4);
v___x_396_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_384_, v_init_385_, v_l_394_);
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
if (lean_obj_tag(v_a_397_) == 0)
{
lean_object* v_a_398_; 
lean_dec_ref(v___x_396_);
v_a_398_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_a_398_);
lean_dec_ref(v_a_397_);
v_d_389_ = v_a_398_;
goto v___jp_388_;
}
else
{
lean_object* v_a_399_; uint8_t v___x_400_; 
v_a_399_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_a_399_);
lean_dec_ref(v_a_397_);
v___x_400_ = lean_nat_dec_lt(v_threshold_384_, v_v_393_);
if (v___x_400_ == 0)
{
lean_object* v_a_401_; 
lean_dec(v_a_399_);
v_a_401_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_401_);
lean_dec_ref(v___x_396_);
if (lean_obj_tag(v_a_401_) == 0)
{
lean_object* v_a_402_; 
v_a_402_ = lean_ctor_get(v_a_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref(v_a_401_);
v_d_389_ = v_a_402_;
goto v___jp_388_;
}
else
{
lean_object* v_a_403_; 
v_a_403_ = lean_ctor_get(v_a_401_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v_a_401_);
v_init_385_ = v_a_403_;
v_x_386_ = v_r_395_;
goto _start;
}
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec_ref(v___x_396_);
lean_inc(v_v_393_);
lean_inc(v_k_392_);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v_k_392_);
lean_ctor_set(v___x_405_, 1, v_v_393_);
v___x_406_ = lean_array_push(v_a_399_, v___x_405_);
v_init_385_ = v___x_406_;
v_x_386_ = v_r_395_;
goto _start;
}
}
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v_init_385_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
v___jp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v_d_389_);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1___boxed(lean_object* v_threshold_410_, lean_object* v_init_411_, lean_object* v_x_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_410_, v_init_411_, v_x_412_);
lean_dec(v_x_412_);
lean_dec(v_threshold_410_);
return v_res_414_;
}
}
static lean_object* _init_l_Lean_Expr_numApps___closed__0(void){
_start:
{
lean_object* v___x_415_; lean_object* v_result_416_; 
v___x_415_ = lean_unsigned_to_nat(0u);
v_result_416_ = lean_mk_empty_array_with_capacity(v___x_415_);
return v_result_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_numApps(lean_object* v_e_417_, lean_object* v_threshold_418_){
_start:
{
lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_428_; lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v_counters_433_; lean_object* v___x_434_; lean_object* v_result_435_; lean_object* v___x_436_; lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_453_; 
v_counters_433_ = l_Lean_Expr_NumApps_main(v_e_417_);
v___x_434_ = lean_unsigned_to_nat(0u);
v_result_435_ = lean_obj_once(&l_Lean_Expr_numApps___closed__0, &l_Lean_Expr_numApps___closed__0_once, _init_l_Lean_Expr_numApps___closed__0);
v___x_436_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_418_, v_result_435_, v_counters_433_);
lean_dec(v_counters_433_);
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_453_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_453_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_453_;
goto v_resetjp_438_;
}
v___jp_420_:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v___y_421_, v___y_423_, v___y_422_, v___y_424_);
lean_dec(v___y_424_);
lean_dec(v___y_421_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
v___jp_427_:
{
uint8_t v___x_432_; 
v___x_432_ = lean_nat_dec_le(v___y_431_, v___y_429_);
if (v___x_432_ == 0)
{
lean_dec(v___y_429_);
lean_inc(v___y_431_);
v___y_421_ = v___y_428_;
v___y_422_ = v___y_431_;
v___y_423_ = v___y_430_;
v___y_424_ = v___y_431_;
goto v___jp_420_;
}
else
{
v___y_421_ = v___y_428_;
v___y_422_ = v___y_431_;
v___y_423_ = v___y_430_;
v___y_424_ = v___y_429_;
goto v___jp_420_;
}
}
v_resetjp_438_:
{
lean_object* v___y_442_; lean_object* v_a_443_; lean_object* v_a_449_; lean_object* v___x_451_; 
v_a_449_ = lean_ctor_get(v_a_437_, 0);
lean_inc_n(v_a_449_, 2);
lean_dec(v_a_437_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v_a_449_);
v___x_451_ = v___x_439_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v___jp_441_:
{
lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = lean_array_get_size(v_a_443_);
v___x_445_ = lean_nat_dec_eq(v___x_444_, v___x_434_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
lean_dec_ref(v___y_442_);
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = lean_nat_sub(v___x_444_, v___x_446_);
v___x_448_ = lean_nat_dec_le(v___x_434_, v___x_447_);
if (v___x_448_ == 0)
{
lean_inc(v___x_447_);
v___y_428_ = v___x_444_;
v___y_429_ = v___x_447_;
v___y_430_ = v_a_443_;
v___y_431_ = v___x_447_;
goto v___jp_427_;
}
else
{
v___y_428_ = v___x_444_;
v___y_429_ = v___x_447_;
v___y_430_ = v_a_443_;
v___y_431_ = v___x_434_;
goto v___jp_427_;
}
}
else
{
lean_dec_ref(v_a_443_);
return v___y_442_;
}
}
v_reusejp_450_:
{
v___y_442_ = v___x_451_;
v_a_443_ = v_a_449_;
goto v___jp_441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_numApps___boxed(lean_object* v_e_454_, lean_object* v_threshold_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_Expr_numApps(v_e_454_, v_threshold_455_);
lean_dec(v_threshold_455_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(lean_object* v_n_458_, lean_object* v_as_459_, lean_object* v_lo_460_, lean_object* v_hi_461_, lean_object* v_w_462_, lean_object* v_hlo_463_, lean_object* v_hhi_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_458_, v_as_459_, v_lo_460_, v_hi_461_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___boxed(lean_object* v_n_466_, lean_object* v_as_467_, lean_object* v_lo_468_, lean_object* v_hi_469_, lean_object* v_w_470_, lean_object* v_hlo_471_, lean_object* v_hhi_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(v_n_466_, v_as_467_, v_lo_468_, v_hi_469_, v_w_470_, v_hlo_471_, v_hhi_472_);
lean_dec(v_hi_469_);
lean_dec(v_n_466_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(lean_object* v_n_474_, lean_object* v_lo_475_, lean_object* v_hi_476_, lean_object* v_hhi_477_, lean_object* v_pivot_478_, lean_object* v_as_479_, lean_object* v_i_480_, lean_object* v_k_481_, lean_object* v_ilo_482_, lean_object* v_ik_483_, lean_object* v_w_484_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_476_, v_pivot_478_, v_as_479_, v_i_480_, v_k_481_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___boxed(lean_object* v_n_486_, lean_object* v_lo_487_, lean_object* v_hi_488_, lean_object* v_hhi_489_, lean_object* v_pivot_490_, lean_object* v_as_491_, lean_object* v_i_492_, lean_object* v_k_493_, lean_object* v_ilo_494_, lean_object* v_ik_495_, lean_object* v_w_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(v_n_486_, v_lo_487_, v_hi_488_, v_hhi_489_, v_pivot_490_, v_as_491_, v_i_492_, v_k_493_, v_ilo_494_, v_ik_495_, v_w_496_);
lean_dec_ref(v_pivot_490_);
lean_dec(v_hi_488_);
lean_dec(v_lo_487_);
lean_dec(v_n_486_);
return v_res_497_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_PtrSet(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Lean_Util_PtrSet(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_NumApps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_NumApps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_NumApps(builtin);
}
#ifdef __cplusplus
}
#endif
