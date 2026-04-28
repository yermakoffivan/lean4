// Lean compiler output
// Module: Lean.Util.SortExprs
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_sortExprs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__0;
static lean_once_cell_t l_Lean_sortExprs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__1;
static lean_once_cell_t l_Lean_sortExprs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__2;
LEAN_EXPORT lean_object* l_Lean_sortExprs(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_sortExprs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(lean_object* v_hi_1_, lean_object* v_pivot_2_, lean_object* v_as_3_, lean_object* v_i_4_, lean_object* v_k_5_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_nat_dec_lt(v_k_5_, v_hi_1_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; 
lean_dec(v_k_5_);
v___x_7_ = lean_array_fswap(v_as_3_, v_i_4_, v_hi_1_);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v_i_4_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v_fst_10_; lean_object* v_fst_11_; uint8_t v___x_12_; 
v___x_9_ = lean_array_fget_borrowed(v_as_3_, v_k_5_);
v_fst_10_ = lean_ctor_get(v___x_9_, 0);
v_fst_11_ = lean_ctor_get(v_pivot_2_, 0);
v___x_12_ = lean_expr_lt(v_fst_10_, v_fst_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_unsigned_to_nat(1u);
v___x_14_ = lean_nat_add(v_k_5_, v___x_13_);
lean_dec(v_k_5_);
v_k_5_ = v___x_14_;
goto _start;
}
else
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = lean_array_fswap(v_as_3_, v_i_4_, v_k_5_);
v___x_17_ = lean_unsigned_to_nat(1u);
v___x_18_ = lean_nat_add(v_i_4_, v___x_17_);
lean_dec(v_i_4_);
v___x_19_ = lean_nat_add(v_k_5_, v___x_17_);
lean_dec(v_k_5_);
v_as_3_ = v___x_16_;
v_i_4_ = v___x_18_;
v_k_5_ = v___x_19_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg___boxed(lean_object* v_hi_21_, lean_object* v_pivot_22_, lean_object* v_as_23_, lean_object* v_i_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_21_, v_pivot_22_, v_as_23_, v_i_24_, v_k_25_);
lean_dec_ref(v_pivot_22_);
lean_dec(v_hi_21_);
return v_res_26_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
lean_object* v_fst_29_; lean_object* v_fst_30_; uint8_t v___x_31_; 
v_fst_29_ = lean_ctor_get(v_x_27_, 0);
v_fst_30_ = lean_ctor_get(v_x_28_, 0);
v___x_31_ = lean_expr_lt(v_fst_29_, v_fst_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0___boxed(lean_object* v_x_32_, lean_object* v_x_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v_x_32_, v_x_33_);
lean_dec_ref(v_x_33_);
lean_dec_ref(v_x_32_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(lean_object* v_n_36_, lean_object* v_as_37_, lean_object* v_lo_38_, lean_object* v_hi_39_){
_start:
{
lean_object* v___y_41_; uint8_t v___x_51_; 
v___x_51_ = lean_nat_dec_lt(v_lo_38_, v_hi_39_);
if (v___x_51_ == 0)
{
lean_dec(v_lo_38_);
return v_as_37_;
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v_mid_54_; lean_object* v___y_56_; lean_object* v___y_62_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_52_ = lean_nat_add(v_lo_38_, v_hi_39_);
v___x_53_ = lean_unsigned_to_nat(1u);
v_mid_54_ = lean_nat_shiftr(v___x_52_, v___x_53_);
lean_dec(v___x_52_);
v___x_67_ = lean_array_fget_borrowed(v_as_37_, v_mid_54_);
v___x_68_ = lean_array_fget_borrowed(v_as_37_, v_lo_38_);
v___x_69_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_67_, v___x_68_);
if (v___x_69_ == 0)
{
v___y_62_ = v_as_37_;
goto v___jp_61_;
}
else
{
lean_object* v___x_70_; 
v___x_70_ = lean_array_fswap(v_as_37_, v_lo_38_, v_mid_54_);
v___y_62_ = v___x_70_;
goto v___jp_61_;
}
v___jp_55_:
{
lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_57_ = lean_array_fget_borrowed(v___y_56_, v_mid_54_);
v___x_58_ = lean_array_fget_borrowed(v___y_56_, v_hi_39_);
v___x_59_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_57_, v___x_58_);
if (v___x_59_ == 0)
{
lean_dec(v_mid_54_);
v___y_41_ = v___y_56_;
goto v___jp_40_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_array_fswap(v___y_56_, v_mid_54_, v_hi_39_);
lean_dec(v_mid_54_);
v___y_41_ = v___x_60_;
goto v___jp_40_;
}
}
v___jp_61_:
{
lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_63_ = lean_array_fget_borrowed(v___y_62_, v_hi_39_);
v___x_64_ = lean_array_fget_borrowed(v___y_62_, v_lo_38_);
v___x_65_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
v___y_56_ = v___y_62_;
goto v___jp_55_;
}
else
{
lean_object* v___x_66_; 
v___x_66_ = lean_array_fswap(v___y_62_, v_lo_38_, v_hi_39_);
v___y_56_ = v___x_66_;
goto v___jp_55_;
}
}
}
v___jp_40_:
{
lean_object* v_pivot_42_; lean_object* v___x_43_; lean_object* v_fst_44_; lean_object* v_snd_45_; uint8_t v___x_46_; 
v_pivot_42_ = lean_array_fget(v___y_41_, v_hi_39_);
lean_inc_n(v_lo_38_, 2);
v___x_43_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_39_, v_pivot_42_, v___y_41_, v_lo_38_, v_lo_38_);
lean_dec(v_pivot_42_);
v_fst_44_ = lean_ctor_get(v___x_43_, 0);
lean_inc(v_fst_44_);
v_snd_45_ = lean_ctor_get(v___x_43_, 1);
lean_inc(v_snd_45_);
lean_dec_ref(v___x_43_);
v___x_46_ = lean_nat_dec_le(v_hi_39_, v_fst_44_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_36_, v_snd_45_, v_lo_38_, v_fst_44_);
v___x_48_ = lean_unsigned_to_nat(1u);
v___x_49_ = lean_nat_add(v_fst_44_, v___x_48_);
lean_dec(v_fst_44_);
v_as_37_ = v___x_47_;
v_lo_38_ = v___x_49_;
goto _start;
}
else
{
lean_dec(v_fst_44_);
lean_dec(v_lo_38_);
return v_snd_45_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___boxed(lean_object* v_n_71_, lean_object* v_as_72_, lean_object* v_lo_73_, lean_object* v_hi_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_71_, v_as_72_, v_lo_73_, v_hi_74_);
lean_dec(v_hi_74_);
lean_dec(v_n_71_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(size_t v_sz_76_, size_t v_i_77_, lean_object* v_bs_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_usize_dec_lt(v_i_77_, v_sz_76_);
if (v___x_79_ == 0)
{
return v_bs_78_;
}
else
{
lean_object* v_v_80_; lean_object* v_fst_81_; lean_object* v___x_82_; lean_object* v_bs_x27_83_; size_t v___x_84_; size_t v___x_85_; lean_object* v___x_86_; 
v_v_80_ = lean_array_uget_borrowed(v_bs_78_, v_i_77_);
v_fst_81_ = lean_ctor_get(v_v_80_, 0);
lean_inc(v_fst_81_);
v___x_82_ = lean_unsigned_to_nat(0u);
v_bs_x27_83_ = lean_array_uset(v_bs_78_, v_i_77_, v___x_82_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_add(v_i_77_, v___x_84_);
v___x_86_ = lean_array_uset(v_bs_x27_83_, v_i_77_, v_fst_81_);
v_i_77_ = v___x_85_;
v_bs_78_ = v___x_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1___boxed(lean_object* v_sz_88_, lean_object* v_i_89_, lean_object* v_bs_90_){
_start:
{
size_t v_sz_boxed_91_; size_t v_i_boxed_92_; lean_object* v_res_93_; 
v_sz_boxed_91_ = lean_unbox_usize(v_sz_88_);
lean_dec(v_sz_88_);
v_i_boxed_92_ = lean_unbox_usize(v_i_89_);
lean_dec(v_i_89_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(v_sz_boxed_91_, v_i_boxed_92_, v_bs_90_);
return v_res_93_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(lean_object* v_x_94_, lean_object* v_x_95_){
_start:
{
lean_object* v_fst_96_; lean_object* v_fst_97_; uint8_t v___x_98_; 
v_fst_96_ = lean_ctor_get(v_x_94_, 0);
v_fst_97_ = lean_ctor_get(v_x_95_, 0);
v___x_98_ = lean_expr_lt(v_fst_97_, v_fst_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0___boxed(lean_object* v_x_99_, lean_object* v_x_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v_x_99_, v_x_100_);
lean_dec_ref(v_x_100_);
lean_dec_ref(v_x_99_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(lean_object* v_hi_103_, lean_object* v_pivot_104_, lean_object* v_as_105_, lean_object* v_i_106_, lean_object* v_k_107_){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = lean_nat_dec_lt(v_k_107_, v_hi_103_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec(v_k_107_);
v___x_109_ = lean_array_fswap(v_as_105_, v_i_106_, v_hi_103_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v_i_106_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v_fst_112_; lean_object* v_fst_113_; uint8_t v___x_114_; 
v___x_111_ = lean_array_fget_borrowed(v_as_105_, v_k_107_);
v_fst_112_ = lean_ctor_get(v___x_111_, 0);
v_fst_113_ = lean_ctor_get(v_pivot_104_, 0);
v___x_114_ = lean_expr_lt(v_fst_113_, v_fst_112_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_k_107_, v___x_115_);
lean_dec(v_k_107_);
v_k_107_ = v___x_116_;
goto _start;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = lean_array_fswap(v_as_105_, v_i_106_, v_k_107_);
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_add(v_i_106_, v___x_119_);
lean_dec(v_i_106_);
v___x_121_ = lean_nat_add(v_k_107_, v___x_119_);
lean_dec(v_k_107_);
v_as_105_ = v___x_118_;
v_i_106_ = v___x_120_;
v_k_107_ = v___x_121_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg___boxed(lean_object* v_hi_123_, lean_object* v_pivot_124_, lean_object* v_as_125_, lean_object* v_i_126_, lean_object* v_k_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_123_, v_pivot_124_, v_as_125_, v_i_126_, v_k_127_);
lean_dec_ref(v_pivot_124_);
lean_dec(v_hi_123_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(lean_object* v_n_129_, lean_object* v_as_130_, lean_object* v_lo_131_, lean_object* v_hi_132_){
_start:
{
lean_object* v___y_134_; uint8_t v___x_144_; 
v___x_144_ = lean_nat_dec_lt(v_lo_131_, v_hi_132_);
if (v___x_144_ == 0)
{
lean_dec(v_lo_131_);
return v_as_130_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v_mid_147_; lean_object* v___y_149_; lean_object* v___y_155_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_145_ = lean_nat_add(v_lo_131_, v_hi_132_);
v___x_146_ = lean_unsigned_to_nat(1u);
v_mid_147_ = lean_nat_shiftr(v___x_145_, v___x_146_);
lean_dec(v___x_145_);
v___x_160_ = lean_array_fget_borrowed(v_as_130_, v_mid_147_);
v___x_161_ = lean_array_fget_borrowed(v_as_130_, v_lo_131_);
v___x_162_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_160_, v___x_161_);
if (v___x_162_ == 0)
{
v___y_155_ = v_as_130_;
goto v___jp_154_;
}
else
{
lean_object* v___x_163_; 
v___x_163_ = lean_array_fswap(v_as_130_, v_lo_131_, v_mid_147_);
v___y_155_ = v___x_163_;
goto v___jp_154_;
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_150_ = lean_array_fget_borrowed(v___y_149_, v_mid_147_);
v___x_151_ = lean_array_fget_borrowed(v___y_149_, v_hi_132_);
v___x_152_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_dec(v_mid_147_);
v___y_134_ = v___y_149_;
goto v___jp_133_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_array_fswap(v___y_149_, v_mid_147_, v_hi_132_);
lean_dec(v_mid_147_);
v___y_134_ = v___x_153_;
goto v___jp_133_;
}
}
v___jp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_156_ = lean_array_fget_borrowed(v___y_155_, v_hi_132_);
v___x_157_ = lean_array_fget_borrowed(v___y_155_, v_lo_131_);
v___x_158_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_156_, v___x_157_);
if (v___x_158_ == 0)
{
v___y_149_ = v___y_155_;
goto v___jp_148_;
}
else
{
lean_object* v___x_159_; 
v___x_159_ = lean_array_fswap(v___y_155_, v_lo_131_, v_hi_132_);
v___y_149_ = v___x_159_;
goto v___jp_148_;
}
}
}
v___jp_133_:
{
lean_object* v_pivot_135_; lean_object* v___x_136_; lean_object* v_fst_137_; lean_object* v_snd_138_; uint8_t v___x_139_; 
v_pivot_135_ = lean_array_fget(v___y_134_, v_hi_132_);
lean_inc_n(v_lo_131_, 2);
v___x_136_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_132_, v_pivot_135_, v___y_134_, v_lo_131_, v_lo_131_);
lean_dec(v_pivot_135_);
v_fst_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_fst_137_);
v_snd_138_ = lean_ctor_get(v___x_136_, 1);
lean_inc(v_snd_138_);
lean_dec_ref(v___x_136_);
v___x_139_ = lean_nat_dec_le(v_hi_132_, v_fst_137_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_129_, v_snd_138_, v_lo_131_, v_fst_137_);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_add(v_fst_137_, v___x_141_);
lean_dec(v_fst_137_);
v_as_130_ = v___x_140_;
v_lo_131_ = v___x_142_;
goto _start;
}
else
{
lean_dec(v_fst_137_);
lean_dec(v_lo_131_);
return v_snd_138_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___boxed(lean_object* v_n_164_, lean_object* v_as_165_, lean_object* v_lo_166_, lean_object* v_hi_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_164_, v_as_165_, v_lo_166_, v_hi_167_);
lean_dec(v_hi_167_);
lean_dec(v_n_164_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg(lean_object* v_as_169_, lean_object* v_i_170_, lean_object* v_j_171_, lean_object* v_bs_172_){
_start:
{
lean_object* v_zero_173_; uint8_t v_isZero_174_; 
v_zero_173_ = lean_unsigned_to_nat(0u);
v_isZero_174_ = lean_nat_dec_eq(v_i_170_, v_zero_173_);
if (v_isZero_174_ == 1)
{
lean_dec(v_j_171_);
lean_dec(v_i_170_);
return v_bs_172_;
}
else
{
lean_object* v_one_175_; lean_object* v_n_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_one_175_ = lean_unsigned_to_nat(1u);
v_n_176_ = lean_nat_sub(v_i_170_, v_one_175_);
lean_dec(v_i_170_);
v___x_177_ = lean_array_fget_borrowed(v_as_169_, v_j_171_);
lean_inc(v_j_171_);
lean_inc(v___x_177_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_j_171_);
v___x_179_ = lean_nat_add(v_j_171_, v_one_175_);
lean_dec(v_j_171_);
v___x_180_ = lean_array_push(v_bs_172_, v___x_178_);
v_i_170_ = v_n_176_;
v_j_171_ = v___x_179_;
v_bs_172_ = v___x_180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg___boxed(lean_object* v_as_182_, lean_object* v_i_183_, lean_object* v_j_184_, lean_object* v_bs_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg(v_as_182_, v_i_183_, v_j_184_, v_bs_185_);
lean_dec_ref(v_as_182_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(lean_object* v_a_187_, lean_object* v_b_188_, lean_object* v_x_189_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_dec(v_b_188_);
lean_dec(v_a_187_);
return v_x_189_;
}
else
{
lean_object* v_key_190_; lean_object* v_value_191_; lean_object* v_tail_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_204_; 
v_key_190_ = lean_ctor_get(v_x_189_, 0);
v_value_191_ = lean_ctor_get(v_x_189_, 1);
v_tail_192_ = lean_ctor_get(v_x_189_, 2);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_189_);
if (v_isSharedCheck_204_ == 0)
{
v___x_194_ = v_x_189_;
v_isShared_195_ = v_isSharedCheck_204_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_tail_192_);
lean_inc(v_value_191_);
lean_inc(v_key_190_);
lean_dec(v_x_189_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_204_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
uint8_t v___x_196_; 
v___x_196_ = lean_nat_dec_eq(v_key_190_, v_a_187_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_197_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_187_, v_b_188_, v_tail_192_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 2, v___x_197_);
v___x_199_ = v___x_194_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_key_190_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_value_191_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v___x_197_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
else
{
lean_object* v___x_202_; 
lean_dec(v_value_191_);
lean_dec(v_key_190_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 1, v_b_188_);
lean_ctor_set(v___x_194_, 0, v_a_187_);
v___x_202_ = v___x_194_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_187_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_b_188_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_tail_192_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(lean_object* v_a_205_, lean_object* v_x_206_){
_start:
{
if (lean_obj_tag(v_x_206_) == 0)
{
uint8_t v___x_207_; 
v___x_207_ = 0;
return v___x_207_;
}
else
{
lean_object* v_key_208_; lean_object* v_tail_209_; uint8_t v___x_210_; 
v_key_208_ = lean_ctor_get(v_x_206_, 0);
v_tail_209_ = lean_ctor_get(v_x_206_, 2);
v___x_210_ = lean_nat_dec_eq(v_key_208_, v_a_205_);
if (v___x_210_ == 0)
{
v_x_206_ = v_tail_209_;
goto _start;
}
else
{
return v___x_210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg___boxed(lean_object* v_a_212_, lean_object* v_x_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_212_, v_x_213_);
lean_dec(v_x_213_);
lean_dec(v_a_212_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
if (lean_obj_tag(v_x_217_) == 0)
{
return v_x_216_;
}
else
{
lean_object* v_key_218_; lean_object* v_value_219_; lean_object* v_tail_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_243_; 
v_key_218_ = lean_ctor_get(v_x_217_, 0);
v_value_219_ = lean_ctor_get(v_x_217_, 1);
v_tail_220_ = lean_ctor_get(v_x_217_, 2);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_217_);
if (v_isSharedCheck_243_ == 0)
{
v___x_222_ = v_x_217_;
v_isShared_223_ = v_isSharedCheck_243_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_tail_220_);
lean_inc(v_value_219_);
lean_inc(v_key_218_);
lean_dec(v_x_217_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_243_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; uint64_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v_fold_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; size_t v___x_232_; size_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_224_ = lean_array_get_size(v_x_216_);
v___x_225_ = lean_uint64_of_nat(v_key_218_);
v___x_226_ = 32ULL;
v___x_227_ = lean_uint64_shift_right(v___x_225_, v___x_226_);
v_fold_228_ = lean_uint64_xor(v___x_225_, v___x_227_);
v___x_229_ = 16ULL;
v___x_230_ = lean_uint64_shift_right(v_fold_228_, v___x_229_);
v___x_231_ = lean_uint64_xor(v_fold_228_, v___x_230_);
v___x_232_ = lean_uint64_to_usize(v___x_231_);
v___x_233_ = lean_usize_of_nat(v___x_224_);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_sub(v___x_233_, v___x_234_);
v___x_236_ = lean_usize_land(v___x_232_, v___x_235_);
v___x_237_ = lean_array_uget_borrowed(v_x_216_, v___x_236_);
lean_inc(v___x_237_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 2, v___x_237_);
v___x_239_ = v___x_222_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_key_218_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_value_219_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v___x_237_);
v___x_239_ = v_reuseFailAlloc_242_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_array_uset(v_x_216_, v___x_236_, v___x_239_);
v_x_216_ = v___x_240_;
v_x_217_ = v_tail_220_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(lean_object* v_i_244_, lean_object* v_source_245_, lean_object* v_target_246_){
_start:
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = lean_array_get_size(v_source_245_);
v___x_248_ = lean_nat_dec_lt(v_i_244_, v___x_247_);
if (v___x_248_ == 0)
{
lean_dec_ref(v_source_245_);
lean_dec(v_i_244_);
return v_target_246_;
}
else
{
lean_object* v_es_249_; lean_object* v___x_250_; lean_object* v_source_251_; lean_object* v_target_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_es_249_ = lean_array_fget(v_source_245_, v_i_244_);
v___x_250_ = lean_box(0);
v_source_251_ = lean_array_fset(v_source_245_, v_i_244_, v___x_250_);
v_target_252_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(v_target_246_, v_es_249_);
v___x_253_ = lean_unsigned_to_nat(1u);
v___x_254_ = lean_nat_add(v_i_244_, v___x_253_);
lean_dec(v_i_244_);
v_i_244_ = v___x_254_;
v_source_245_ = v_source_251_;
v_target_246_ = v_target_252_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(lean_object* v_data_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_nbuckets_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_257_ = lean_array_get_size(v_data_256_);
v___x_258_ = lean_unsigned_to_nat(2u);
v_nbuckets_259_ = lean_nat_mul(v___x_257_, v___x_258_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_box(0);
v___x_262_ = lean_mk_array(v_nbuckets_259_, v___x_261_);
v___x_263_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(v___x_260_, v_data_256_, v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object* v_m_264_, lean_object* v_a_265_, lean_object* v_b_266_){
_start:
{
lean_object* v_size_267_; lean_object* v_buckets_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_311_; 
v_size_267_ = lean_ctor_get(v_m_264_, 0);
v_buckets_268_ = lean_ctor_get(v_m_264_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v_m_264_);
if (v_isSharedCheck_311_ == 0)
{
v___x_270_ = v_m_264_;
v_isShared_271_ = v_isSharedCheck_311_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_buckets_268_);
lean_inc(v_size_267_);
lean_dec(v_m_264_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_311_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_272_; uint64_t v___x_273_; uint64_t v___x_274_; uint64_t v___x_275_; uint64_t v_fold_276_; uint64_t v___x_277_; uint64_t v___x_278_; uint64_t v___x_279_; size_t v___x_280_; size_t v___x_281_; size_t v___x_282_; size_t v___x_283_; size_t v___x_284_; lean_object* v_bkt_285_; uint8_t v___x_286_; 
v___x_272_ = lean_array_get_size(v_buckets_268_);
v___x_273_ = lean_uint64_of_nat(v_a_265_);
v___x_274_ = 32ULL;
v___x_275_ = lean_uint64_shift_right(v___x_273_, v___x_274_);
v_fold_276_ = lean_uint64_xor(v___x_273_, v___x_275_);
v___x_277_ = 16ULL;
v___x_278_ = lean_uint64_shift_right(v_fold_276_, v___x_277_);
v___x_279_ = lean_uint64_xor(v_fold_276_, v___x_278_);
v___x_280_ = lean_uint64_to_usize(v___x_279_);
v___x_281_ = lean_usize_of_nat(v___x_272_);
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_sub(v___x_281_, v___x_282_);
v___x_284_ = lean_usize_land(v___x_280_, v___x_283_);
v_bkt_285_ = lean_array_uget_borrowed(v_buckets_268_, v___x_284_);
v___x_286_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_265_, v_bkt_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; lean_object* v_size_x27_288_; lean_object* v___x_289_; lean_object* v_buckets_x27_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v_size_x27_288_ = lean_nat_add(v_size_267_, v___x_287_);
lean_dec(v_size_267_);
lean_inc(v_bkt_285_);
v___x_289_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_289_, 0, v_a_265_);
lean_ctor_set(v___x_289_, 1, v_b_266_);
lean_ctor_set(v___x_289_, 2, v_bkt_285_);
v_buckets_x27_290_ = lean_array_uset(v_buckets_268_, v___x_284_, v___x_289_);
v___x_291_ = lean_unsigned_to_nat(4u);
v___x_292_ = lean_nat_mul(v_size_x27_288_, v___x_291_);
v___x_293_ = lean_unsigned_to_nat(3u);
v___x_294_ = lean_nat_div(v___x_292_, v___x_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_array_get_size(v_buckets_x27_290_);
v___x_296_ = lean_nat_dec_le(v___x_294_, v___x_295_);
lean_dec(v___x_294_);
if (v___x_296_ == 0)
{
lean_object* v_val_297_; lean_object* v___x_299_; 
v_val_297_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(v_buckets_x27_290_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v_val_297_);
lean_ctor_set(v___x_270_, 0, v_size_x27_288_);
v___x_299_ = v___x_270_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_size_x27_288_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_val_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
else
{
lean_object* v___x_302_; 
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v_buckets_x27_290_);
lean_ctor_set(v___x_270_, 0, v_size_x27_288_);
v___x_302_ = v___x_270_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_size_x27_288_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_buckets_x27_290_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
else
{
lean_object* v___x_304_; lean_object* v_buckets_x27_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
lean_inc(v_bkt_285_);
v___x_304_ = lean_box(0);
v_buckets_x27_305_ = lean_array_uset(v_buckets_268_, v___x_284_, v___x_304_);
v___x_306_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_265_, v_b_266_, v_bkt_285_);
v___x_307_ = lean_array_uset(v_buckets_x27_305_, v___x_284_, v___x_306_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 1, v___x_307_);
v___x_309_ = v___x_270_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_size_267_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(lean_object* v_as_312_, size_t v_i_313_, size_t v_stop_314_, lean_object* v_b_315_){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = lean_usize_dec_eq(v_i_313_, v_stop_314_);
if (v___x_316_ == 0)
{
lean_object* v_fst_317_; lean_object* v_snd_318_; lean_object* v___x_319_; lean_object* v_snd_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_333_; 
v_fst_317_ = lean_ctor_get(v_b_315_, 0);
lean_inc(v_fst_317_);
v_snd_318_ = lean_ctor_get(v_b_315_, 1);
lean_inc(v_snd_318_);
lean_dec_ref(v_b_315_);
v___x_319_ = lean_array_uget(v_as_312_, v_i_313_);
v_snd_320_ = lean_ctor_get(v___x_319_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v___x_319_, 0);
lean_dec(v_unused_334_);
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_333_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_snd_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_333_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = lean_nat_add(v_fst_317_, v___x_324_);
v___x_326_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_snd_318_, v_snd_320_, v_fst_317_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 1, v___x_326_);
lean_ctor_set(v___x_322_, 0, v___x_325_);
v___x_328_ = v___x_322_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_326_);
v___x_328_ = v_reuseFailAlloc_332_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
size_t v___x_329_; size_t v___x_330_; 
v___x_329_ = ((size_t)1ULL);
v___x_330_ = lean_usize_add(v_i_313_, v___x_329_);
v_i_313_ = v___x_330_;
v_b_315_ = v___x_328_;
goto _start;
}
}
}
else
{
return v_b_315_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2___boxed(lean_object* v_as_335_, lean_object* v_i_336_, lean_object* v_stop_337_, lean_object* v_b_338_){
_start:
{
size_t v_i_boxed_339_; size_t v_stop_boxed_340_; lean_object* v_res_341_; 
v_i_boxed_339_ = lean_unbox_usize(v_i_336_);
lean_dec(v_i_336_);
v_stop_boxed_340_ = lean_unbox_usize(v_stop_337_);
lean_dec(v_stop_337_);
v_res_341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v_as_335_, v_i_boxed_339_, v_stop_boxed_340_, v_b_338_);
lean_dec_ref(v_as_335_);
return v_res_341_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__0(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_box(0);
v___x_343_ = lean_unsigned_to_nat(16u);
v___x_344_ = lean_mk_array(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__1(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_obj_once(&l_Lean_sortExprs___closed__0, &l_Lean_sortExprs___closed__0_once, _init_l_Lean_sortExprs___closed__0);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__2(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_obj_once(&l_Lean_sortExprs___closed__1, &l_Lean_sortExprs___closed__1_once, _init_l_Lean_sortExprs___closed__1);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___x_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_sortExprs(lean_object* v_es_351_, uint8_t v_lt_352_){
_start:
{
lean_object* v___y_354_; lean_object* v_snd_355_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_365_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_es_381_; 
v___x_378_ = lean_array_get_size(v_es_351_);
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = lean_mk_empty_array_with_capacity(v___x_378_);
v_es_381_ = l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg(v_es_351_, v___x_378_, v___x_379_, v___x_380_);
if (v_lt_352_ == 0)
{
lean_object* v___x_382_; lean_object* v___y_384_; lean_object* v___y_385_; uint8_t v___x_387_; 
v___x_382_ = lean_array_get_size(v_es_381_);
v___x_387_ = lean_nat_dec_eq(v___x_382_, v___x_379_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___y_391_; uint8_t v___x_393_; 
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = lean_nat_sub(v___x_382_, v___x_388_);
v___x_393_ = lean_nat_dec_le(v___x_379_, v___x_389_);
if (v___x_393_ == 0)
{
lean_inc(v___x_389_);
v___y_391_ = v___x_389_;
goto v___jp_390_;
}
else
{
v___y_391_ = v___x_379_;
goto v___jp_390_;
}
v___jp_390_:
{
uint8_t v___x_392_; 
v___x_392_ = lean_nat_dec_le(v___y_391_, v___x_389_);
if (v___x_392_ == 0)
{
lean_dec(v___x_389_);
lean_inc(v___y_391_);
v___y_384_ = v___y_391_;
v___y_385_ = v___y_391_;
goto v___jp_383_;
}
else
{
v___y_384_ = v___y_391_;
v___y_385_ = v___x_389_;
goto v___jp_383_;
}
}
}
else
{
v___y_365_ = v_es_381_;
goto v___jp_364_;
}
v___jp_383_:
{
lean_object* v___x_386_; 
v___x_386_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v___x_382_, v_es_381_, v___y_384_, v___y_385_);
lean_dec(v___y_385_);
v___y_365_ = v___x_386_;
goto v___jp_364_;
}
}
else
{
lean_object* v___x_394_; lean_object* v___y_396_; lean_object* v___y_397_; uint8_t v___x_399_; 
v___x_394_ = lean_array_get_size(v_es_381_);
v___x_399_ = lean_nat_dec_eq(v___x_394_, v___x_379_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___y_403_; uint8_t v___x_405_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_sub(v___x_394_, v___x_400_);
v___x_405_ = lean_nat_dec_le(v___x_379_, v___x_401_);
if (v___x_405_ == 0)
{
lean_inc(v___x_401_);
v___y_403_ = v___x_401_;
goto v___jp_402_;
}
else
{
v___y_403_ = v___x_379_;
goto v___jp_402_;
}
v___jp_402_:
{
uint8_t v___x_404_; 
v___x_404_ = lean_nat_dec_le(v___y_403_, v___x_401_);
if (v___x_404_ == 0)
{
lean_dec(v___x_401_);
lean_inc(v___y_403_);
v___y_396_ = v___y_403_;
v___y_397_ = v___y_403_;
goto v___jp_395_;
}
else
{
v___y_396_ = v___y_403_;
v___y_397_ = v___x_401_;
goto v___jp_395_;
}
}
}
else
{
v___y_365_ = v_es_381_;
goto v___jp_364_;
}
v___jp_395_:
{
lean_object* v___x_398_; 
v___x_398_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v___x_394_, v_es_381_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
v___y_365_ = v___x_398_;
goto v___jp_364_;
}
}
v___jp_353_:
{
size_t v_sz_356_; size_t v___x_357_; lean_object* v_es_358_; lean_object* v___x_359_; 
v_sz_356_ = lean_array_size(v___y_354_);
v___x_357_ = ((size_t)0ULL);
v_es_358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(v_sz_356_, v___x_357_, v___y_354_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v_es_358_);
lean_ctor_set(v___x_359_, 1, v_snd_355_);
return v___x_359_;
}
v___jp_360_:
{
lean_object* v_snd_363_; 
v_snd_363_ = lean_ctor_get(v___y_362_, 1);
lean_inc(v_snd_363_);
lean_dec_ref(v___y_362_);
v___y_354_ = v___y_361_;
v_snd_355_ = v_snd_363_;
goto v___jp_353_;
}
v___jp_364_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = lean_obj_once(&l_Lean_sortExprs___closed__1, &l_Lean_sortExprs___closed__1_once, _init_l_Lean_sortExprs___closed__1);
v___x_368_ = lean_array_get_size(v___y_365_);
v___x_369_ = lean_nat_dec_lt(v___x_366_, v___x_368_);
if (v___x_369_ == 0)
{
v___y_354_ = v___y_365_;
v_snd_355_ = v___x_367_;
goto v___jp_353_;
}
else
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_obj_once(&l_Lean_sortExprs___closed__2, &l_Lean_sortExprs___closed__2_once, _init_l_Lean_sortExprs___closed__2);
v___x_371_ = lean_nat_dec_le(v___x_368_, v___x_368_);
if (v___x_371_ == 0)
{
if (v___x_369_ == 0)
{
v___y_354_ = v___y_365_;
v_snd_355_ = v___x_367_;
goto v___jp_353_;
}
else
{
size_t v___x_372_; size_t v___x_373_; lean_object* v___x_374_; 
v___x_372_ = ((size_t)0ULL);
v___x_373_ = lean_usize_of_nat(v___x_368_);
v___x_374_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v___y_365_, v___x_372_, v___x_373_, v___x_370_);
v___y_361_ = v___y_365_;
v___y_362_ = v___x_374_;
goto v___jp_360_;
}
}
else
{
size_t v___x_375_; size_t v___x_376_; lean_object* v___x_377_; 
v___x_375_ = ((size_t)0ULL);
v___x_376_ = lean_usize_of_nat(v___x_368_);
v___x_377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v___y_365_, v___x_375_, v___x_376_, v___x_370_);
v___y_361_ = v___y_365_;
v___y_362_ = v___x_377_;
goto v___jp_360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_sortExprs___boxed(lean_object* v_es_406_, lean_object* v_lt_407_){
_start:
{
uint8_t v_lt_boxed_408_; lean_object* v_res_409_; 
v_lt_boxed_408_ = lean_unbox(v_lt_407_);
v_res_409_ = l_Lean_sortExprs(v_es_406_, v_lt_boxed_408_);
lean_dec_ref(v_es_406_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0(lean_object* v_00_u03b2_410_, lean_object* v_m_411_, lean_object* v_a_412_, lean_object* v_b_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_m_411_, v_a_412_, v_b_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3(lean_object* v_as_415_, lean_object* v_i_416_, lean_object* v_j_417_, lean_object* v_inv_418_, lean_object* v_bs_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___redArg(v_as_415_, v_i_416_, v_j_417_, v_bs_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3___boxed(lean_object* v_as_421_, lean_object* v_i_422_, lean_object* v_j_423_, lean_object* v_inv_424_, lean_object* v_bs_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Array_mapFinIdxM_map___at___00Lean_sortExprs_spec__3(v_as_421_, v_i_422_, v_j_423_, v_inv_424_, v_bs_425_);
lean_dec_ref(v_as_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(lean_object* v_n_427_, lean_object* v_as_428_, lean_object* v_lo_429_, lean_object* v_hi_430_, lean_object* v_w_431_, lean_object* v_hlo_432_, lean_object* v_hhi_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_427_, v_as_428_, v_lo_429_, v_hi_430_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___boxed(lean_object* v_n_435_, lean_object* v_as_436_, lean_object* v_lo_437_, lean_object* v_hi_438_, lean_object* v_w_439_, lean_object* v_hlo_440_, lean_object* v_hhi_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(v_n_435_, v_as_436_, v_lo_437_, v_hi_438_, v_w_439_, v_hlo_440_, v_hhi_441_);
lean_dec(v_hi_438_);
lean_dec(v_n_435_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(lean_object* v_n_443_, lean_object* v_as_444_, lean_object* v_lo_445_, lean_object* v_hi_446_, lean_object* v_w_447_, lean_object* v_hlo_448_, lean_object* v_hhi_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_443_, v_as_444_, v_lo_445_, v_hi_446_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___boxed(lean_object* v_n_451_, lean_object* v_as_452_, lean_object* v_lo_453_, lean_object* v_hi_454_, lean_object* v_w_455_, lean_object* v_hlo_456_, lean_object* v_hhi_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(v_n_451_, v_as_452_, v_lo_453_, v_hi_454_, v_w_455_, v_hlo_456_, v_hhi_457_);
lean_dec(v_hi_454_);
lean_dec(v_n_451_);
return v_res_458_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(lean_object* v_00_u03b2_459_, lean_object* v_a_460_, lean_object* v_x_461_){
_start:
{
uint8_t v___x_462_; 
v___x_462_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_460_, v_x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_463_, lean_object* v_a_464_, lean_object* v_x_465_){
_start:
{
uint8_t v_res_466_; lean_object* v_r_467_; 
v_res_466_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(v_00_u03b2_463_, v_a_464_, v_x_465_);
lean_dec(v_x_465_);
lean_dec(v_a_464_);
v_r_467_ = lean_box(v_res_466_);
return v_r_467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1(lean_object* v_00_u03b2_468_, lean_object* v_data_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(v_data_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2(lean_object* v_00_u03b2_471_, lean_object* v_a_472_, lean_object* v_b_473_, lean_object* v_x_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_472_, v_b_473_, v_x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(lean_object* v_n_476_, lean_object* v_lo_477_, lean_object* v_hi_478_, lean_object* v_hhi_479_, lean_object* v_pivot_480_, lean_object* v_as_481_, lean_object* v_i_482_, lean_object* v_k_483_, lean_object* v_ilo_484_, lean_object* v_ik_485_, lean_object* v_w_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_478_, v_pivot_480_, v_as_481_, v_i_482_, v_k_483_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___boxed(lean_object* v_n_488_, lean_object* v_lo_489_, lean_object* v_hi_490_, lean_object* v_hhi_491_, lean_object* v_pivot_492_, lean_object* v_as_493_, lean_object* v_i_494_, lean_object* v_k_495_, lean_object* v_ilo_496_, lean_object* v_ik_497_, lean_object* v_w_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(v_n_488_, v_lo_489_, v_hi_490_, v_hhi_491_, v_pivot_492_, v_as_493_, v_i_494_, v_k_495_, v_ilo_496_, v_ik_497_, v_w_498_);
lean_dec_ref(v_pivot_492_);
lean_dec(v_hi_490_);
lean_dec(v_lo_489_);
lean_dec(v_n_488_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(lean_object* v_n_500_, lean_object* v_lo_501_, lean_object* v_hi_502_, lean_object* v_hhi_503_, lean_object* v_pivot_504_, lean_object* v_as_505_, lean_object* v_i_506_, lean_object* v_k_507_, lean_object* v_ilo_508_, lean_object* v_ik_509_, lean_object* v_w_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_502_, v_pivot_504_, v_as_505_, v_i_506_, v_k_507_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___boxed(lean_object* v_n_512_, lean_object* v_lo_513_, lean_object* v_hi_514_, lean_object* v_hhi_515_, lean_object* v_pivot_516_, lean_object* v_as_517_, lean_object* v_i_518_, lean_object* v_k_519_, lean_object* v_ilo_520_, lean_object* v_ik_521_, lean_object* v_w_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(v_n_512_, v_lo_513_, v_hi_514_, v_hhi_515_, v_pivot_516_, v_as_517_, v_i_518_, v_k_519_, v_ilo_520_, v_ik_521_, v_w_522_);
lean_dec_ref(v_pivot_516_);
lean_dec(v_hi_514_);
lean_dec(v_lo_513_);
lean_dec(v_n_512_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_524_, lean_object* v_i_525_, lean_object* v_source_526_, lean_object* v_target_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(v_i_525_, v_source_526_, v_target_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8(lean_object* v_00_u03b2_529_, lean_object* v_x_530_, lean_object* v_x_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(v_x_530_, v_x_531_);
return v___x_532_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_SortExprs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_SortExprs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_SortExprs(builtin);
}
#ifdef __cplusplus
}
#endif
