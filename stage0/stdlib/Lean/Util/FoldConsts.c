// Lean compiler output
// Module: Lean.Util.FoldConsts
// Imports: public import Lean.Util.PtrSet public import Lean.Declaration
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
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_NameSet_ofList(lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2;
static lean_once_cell_t l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstants___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_getUsedConstants___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getUsedConstants___closed__0;
static lean_once_cell_t l_Lean_Expr_getUsedConstants___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getUsedConstants___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstantsAsSet___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_getUsedConstantsAsSet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getUsedConstantsAsSet___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstantsAsSet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_getUsedConstantsAsSet(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg(lean_object* v_m_14_, lean_object* v_a_15_){
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
v___x_34_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(v_a_15_, v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg___boxed(lean_object* v_m_35_, lean_object* v_a_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg(v_m_35_, v_a_36_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_m_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_39_, lean_object* v_x_40_){
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
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3___redArg(lean_object* v_i_70_, lean_object* v_source_71_, lean_object* v_target_72_){
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
v_target_78_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4___redArg(v_target_72_, v_es_75_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2___redArg(lean_object* v_data_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_nbuckets_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_83_ = lean_array_get_size(v_data_82_);
v___x_84_ = lean_unsigned_to_nat(2u);
v_nbuckets_85_ = lean_nat_mul(v___x_83_, v___x_84_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_box(0);
v___x_88_ = lean_mk_array(v_nbuckets_85_, v___x_87_);
v___x_89_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3___redArg(v___x_86_, v_data_82_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1___redArg(lean_object* v_m_90_, lean_object* v_a_91_, lean_object* v_b_92_){
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
v___x_112_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(v_a_91_, v_bkt_111_);
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
v_val_126_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2___redArg(v_buckets_x27_119_);
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
LEAN_EXPORT lean_object* l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(lean_object* v_f_136_, lean_object* v_e_137_, lean_object* v_acc_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_d_141_; lean_object* v_b_142_; lean_object* v___y_143_; lean_object* v_visited_148_; lean_object* v_visitedConsts_149_; uint8_t v___x_150_; 
v_visited_148_ = lean_ctor_get(v_a_139_, 0);
v_visitedConsts_149_ = lean_ctor_get(v_a_139_, 1);
v___x_150_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg(v_visited_148_, v_e_137_);
if (v___x_150_ == 0)
{
lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_191_; 
lean_inc_ref(v_visitedConsts_149_);
lean_inc_ref(v_visited_148_);
v_isSharedCheck_191_ = !lean_is_exclusive(v_a_139_);
if (v_isSharedCheck_191_ == 0)
{
lean_object* v_unused_192_; lean_object* v_unused_193_; 
v_unused_192_ = lean_ctor_get(v_a_139_, 1);
lean_dec(v_unused_192_);
v_unused_193_ = lean_ctor_get(v_a_139_, 0);
lean_dec(v_unused_193_);
v___x_152_ = v_a_139_;
v_isShared_153_ = v_isSharedCheck_191_;
goto v_resetjp_151_;
}
else
{
lean_dec(v_a_139_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_191_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_154_ = lean_box(0);
lean_inc_ref(v_e_137_);
v___x_155_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1___redArg(v_visited_148_, v_e_137_, v___x_154_);
lean_inc_ref(v_visitedConsts_149_);
lean_inc_ref(v___x_155_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_155_);
v___x_157_ = v___x_152_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_visitedConsts_149_);
v___x_157_ = v_reuseFailAlloc_190_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
switch(lean_obj_tag(v_e_137_))
{
case 7:
{
lean_object* v_binderType_158_; lean_object* v_body_159_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_binderType_158_ = lean_ctor_get(v_e_137_, 1);
lean_inc_ref(v_binderType_158_);
v_body_159_ = lean_ctor_get(v_e_137_, 2);
lean_inc_ref(v_body_159_);
lean_dec_ref(v_e_137_);
v_d_141_ = v_binderType_158_;
v_b_142_ = v_body_159_;
v___y_143_ = v___x_157_;
goto v___jp_140_;
}
case 6:
{
lean_object* v_binderType_160_; lean_object* v_body_161_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_binderType_160_ = lean_ctor_get(v_e_137_, 1);
lean_inc_ref(v_binderType_160_);
v_body_161_ = lean_ctor_get(v_e_137_, 2);
lean_inc_ref(v_body_161_);
lean_dec_ref(v_e_137_);
v_d_141_ = v_binderType_160_;
v_b_142_ = v_body_161_;
v___y_143_ = v___x_157_;
goto v___jp_140_;
}
case 10:
{
lean_object* v_expr_162_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_expr_162_ = lean_ctor_get(v_e_137_, 1);
lean_inc_ref(v_expr_162_);
lean_dec_ref(v_e_137_);
v_e_137_ = v_expr_162_;
v_a_139_ = v___x_157_;
goto _start;
}
case 8:
{
lean_object* v_type_164_; lean_object* v_value_165_; lean_object* v_body_166_; lean_object* v___x_167_; lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_170_; lean_object* v_fst_171_; lean_object* v_snd_172_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_type_164_ = lean_ctor_get(v_e_137_, 1);
lean_inc_ref(v_type_164_);
v_value_165_ = lean_ctor_get(v_e_137_, 2);
lean_inc_ref(v_value_165_);
v_body_166_ = lean_ctor_get(v_e_137_, 3);
lean_inc_ref(v_body_166_);
lean_dec_ref(v_e_137_);
lean_inc_n(v_f_136_, 2);
v___x_167_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_136_, v_type_164_, v_acc_138_, v___x_157_);
v_fst_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_fst_168_);
v_snd_169_ = lean_ctor_get(v___x_167_, 1);
lean_inc(v_snd_169_);
lean_dec_ref(v___x_167_);
v___x_170_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_136_, v_value_165_, v_fst_168_, v_snd_169_);
v_fst_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_fst_171_);
v_snd_172_ = lean_ctor_get(v___x_170_, 1);
lean_inc(v_snd_172_);
lean_dec_ref(v___x_170_);
v_e_137_ = v_body_166_;
v_acc_138_ = v_fst_171_;
v_a_139_ = v_snd_172_;
goto _start;
}
case 5:
{
lean_object* v_fn_174_; lean_object* v_arg_175_; lean_object* v___x_176_; lean_object* v_fst_177_; lean_object* v_snd_178_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_fn_174_ = lean_ctor_get(v_e_137_, 0);
lean_inc_ref(v_fn_174_);
v_arg_175_ = lean_ctor_get(v_e_137_, 1);
lean_inc_ref(v_arg_175_);
lean_dec_ref(v_e_137_);
lean_inc(v_f_136_);
v___x_176_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_136_, v_fn_174_, v_acc_138_, v___x_157_);
v_fst_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_fst_177_);
v_snd_178_ = lean_ctor_get(v___x_176_, 1);
lean_inc(v_snd_178_);
lean_dec_ref(v___x_176_);
v_e_137_ = v_arg_175_;
v_acc_138_ = v_fst_177_;
v_a_139_ = v_snd_178_;
goto _start;
}
case 11:
{
lean_object* v_struct_180_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
v_struct_180_ = lean_ctor_get(v_e_137_, 2);
lean_inc_ref(v_struct_180_);
lean_dec_ref(v_e_137_);
v_e_137_ = v_struct_180_;
v_a_139_ = v___x_157_;
goto _start;
}
case 4:
{
lean_object* v_declName_182_; uint8_t v___x_183_; 
v_declName_182_ = lean_ctor_get(v_e_137_, 0);
lean_inc(v_declName_182_);
lean_dec_ref(v_e_137_);
v___x_183_ = l_Lean_NameHashSet_contains(v_visitedConsts_149_, v_declName_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec_ref(v___x_157_);
lean_inc(v_declName_182_);
v___x_184_ = l_Lean_NameHashSet_insert(v_visitedConsts_149_, v_declName_182_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_155_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = lean_apply_2(v_f_136_, v_declName_182_, v_acc_138_);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; 
lean_dec(v_declName_182_);
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
lean_dec(v_f_136_);
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v_acc_138_);
lean_ctor_set(v___x_188_, 1, v___x_157_);
return v___x_188_;
}
}
default: 
{
lean_object* v___x_189_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_visitedConsts_149_);
lean_dec_ref(v_e_137_);
lean_dec(v_f_136_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_acc_138_);
lean_ctor_set(v___x_189_, 1, v___x_157_);
return v___x_189_;
}
}
}
}
}
else
{
lean_object* v___x_194_; 
lean_dec_ref(v_e_137_);
lean_dec(v_f_136_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_acc_138_);
lean_ctor_set(v___x_194_, 1, v_a_139_);
return v___x_194_;
}
v___jp_140_:
{
lean_object* v___x_144_; lean_object* v_fst_145_; lean_object* v_snd_146_; 
lean_inc(v_f_136_);
v___x_144_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_136_, v_d_141_, v_acc_138_, v___y_143_);
v_fst_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_fst_145_);
v_snd_146_ = lean_ctor_get(v___x_144_, 1);
lean_inc(v_snd_146_);
lean_dec_ref(v___x_144_);
v_e_137_ = v_b_142_;
v_acc_138_ = v_fst_145_;
v_a_139_ = v_snd_146_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit(lean_object* v_00_u03b1_195_, lean_object* v_f_196_, lean_object* v_e_197_, lean_object* v_acc_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_196_, v_e_197_, v_acc_198_, v_a_199_);
return v___x_200_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0(lean_object* v_00_u03b2_201_, lean_object* v_m_202_, lean_object* v_a_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___redArg(v_m_202_, v_a_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0___boxed(lean_object* v_00_u03b2_205_, lean_object* v_m_206_, lean_object* v_a_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0(v_00_u03b2_205_, v_m_206_, v_a_207_);
lean_dec_ref(v_a_207_);
lean_dec_ref(v_m_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1(lean_object* v_00_u03b2_210_, lean_object* v_m_211_, lean_object* v_a_212_, lean_object* v_b_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1___redArg(v_m_211_, v_a_212_, v_b_213_);
return v___x_214_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0(lean_object* v_00_u03b2_215_, lean_object* v_a_216_, lean_object* v_x_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___redArg(v_a_216_, v_x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_219_, lean_object* v_a_220_, lean_object* v_x_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__0_spec__0(v_00_u03b2_219_, v_a_220_, v_x_221_);
lean_dec(v_x_221_);
lean_dec_ref(v_a_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2(lean_object* v_00_u03b2_224_, lean_object* v_data_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2___redArg(v_data_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_227_, lean_object* v_i_228_, lean_object* v_source_229_, lean_object* v_target_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3___redArg(v_i_228_, v_source_229_, v_target_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_232_, lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit_spec__1_spec__2_spec__3_spec__4___redArg(v_x_233_, v_x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_fold___redArg(lean_object* v_f_236_, lean_object* v_e_237_, lean_object* v_acc_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_236_, v_e_237_, v_acc_238_, v_a_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_fold(lean_object* v_00_u03b1_241_, lean_object* v_f_242_, lean_object* v_e_243_, lean_object* v_acc_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_242_, v_e_243_, v_acc_244_, v_a_245_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_unsigned_to_nat(64u);
v___x_248_ = l_Lean_mkPtrSet___redArg(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
v___x_250_ = lean_unsigned_to_nat(16u);
v___x_251_ = lean_mk_array(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__1);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__2);
v___x_256_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__0);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg(lean_object* v_e_258_, lean_object* v_init_259_, lean_object* v_f_260_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_fst_263_; 
v___x_261_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3);
v___x_262_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_260_, v_e_258_, v_init_259_, v___x_261_);
v_fst_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_fst_263_);
lean_dec_ref(v___x_262_);
return v_fst_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_FoldConstsImpl_foldUnsafe(lean_object* v_00_u03b1_264_, lean_object* v_e_265_, lean_object* v_init_266_, lean_object* v_f_267_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_fst_270_; 
v___x_268_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3);
v___x_269_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v_f_267_, v_e_265_, v_init_266_, v___x_268_);
v_fst_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_fst_270_);
lean_dec_ref(v___x_269_);
return v_fst_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstants___lam__0(lean_object* v_c_271_, lean_object* v_cs_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_array_push(v_cs_272_, v_c_271_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_Expr_getUsedConstants___closed__0(void){
_start:
{
lean_object* v___f_274_; 
v___f_274_ = lean_alloc_closure((void*)(l_Lean_Expr_getUsedConstants___lam__0), 2, 0);
return v___f_274_;
}
}
static lean_object* _init_l_Lean_Expr_getUsedConstants___closed__1(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_mk_empty_array_with_capacity(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstants(lean_object* v_e_277_){
_start:
{
lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_fst_282_; 
v___f_278_ = lean_obj_once(&l_Lean_Expr_getUsedConstants___closed__0, &l_Lean_Expr_getUsedConstants___closed__0_once, _init_l_Lean_Expr_getUsedConstants___closed__0);
v___x_279_ = lean_obj_once(&l_Lean_Expr_getUsedConstants___closed__1, &l_Lean_Expr_getUsedConstants___closed__1_once, _init_l_Lean_Expr_getUsedConstants___closed__1);
v___x_280_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3);
v___x_281_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v___f_278_, v_e_277_, v___x_279_, v___x_280_);
v_fst_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_fst_282_);
lean_dec_ref(v___x_281_);
return v_fst_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstantsAsSet___lam__0(lean_object* v_c_283_, lean_object* v_cs_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_NameSet_insert(v_cs_284_, v_c_283_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Expr_getUsedConstantsAsSet___closed__0(void){
_start:
{
lean_object* v___f_286_; 
v___f_286_ = lean_alloc_closure((void*)(l_Lean_Expr_getUsedConstantsAsSet___lam__0), 2, 0);
return v___f_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getUsedConstantsAsSet(lean_object* v_e_287_){
_start:
{
lean_object* v___f_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v_fst_292_; 
v___f_288_ = lean_obj_once(&l_Lean_Expr_getUsedConstantsAsSet___closed__0, &l_Lean_Expr_getUsedConstantsAsSet___closed__0_once, _init_l_Lean_Expr_getUsedConstantsAsSet___closed__0);
v___x_289_ = l_Lean_NameSet_empty;
v___x_290_ = lean_obj_once(&l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3, &l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3_once, _init_l_Lean_Expr_FoldConstsImpl_foldUnsafe___redArg___closed__3);
v___x_291_ = l___private_Lean_Util_FoldConsts_0__Lean_Expr_FoldConstsImpl_fold_visit___redArg(v___f_288_, v_e_287_, v___x_289_, v___x_290_);
v_fst_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_fst_292_);
lean_dec_ref(v___x_291_);
return v_fst_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_getUsedConstantsAsSet(lean_object* v_c_293_){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; lean_object* v___x_297_; 
v___x_294_ = l_Lean_ConstantInfo_type(v_c_293_);
v___x_295_ = l_Lean_Expr_getUsedConstantsAsSet(v___x_294_);
v___x_296_ = 1;
lean_inc_ref(v_c_293_);
v___x_297_ = l_Lean_ConstantInfo_value_x3f(v_c_293_, v___x_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
switch(lean_obj_tag(v_c_293_))
{
case 5:
{
lean_object* v_val_298_; lean_object* v_ctors_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_val_298_ = lean_ctor_get(v_c_293_, 0);
lean_inc_ref(v_val_298_);
lean_dec_ref(v_c_293_);
v_ctors_299_ = lean_ctor_get(v_val_298_, 4);
lean_inc(v_ctors_299_);
lean_dec_ref(v_val_298_);
v___x_300_ = l_Lean_NameSet_ofList(v_ctors_299_);
lean_dec(v_ctors_299_);
v___x_301_ = l_Lean_NameSet_append(v___x_295_, v___x_300_);
return v___x_301_;
}
case 6:
{
lean_object* v_val_302_; lean_object* v_toConstantVal_303_; lean_object* v_name_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_val_302_ = lean_ctor_get(v_c_293_, 0);
lean_inc_ref(v_val_302_);
lean_dec_ref(v_c_293_);
v_toConstantVal_303_ = lean_ctor_get(v_val_302_, 0);
lean_inc_ref(v_toConstantVal_303_);
lean_dec_ref(v_val_302_);
v_name_304_ = lean_ctor_get(v_toConstantVal_303_, 0);
lean_inc(v_name_304_);
lean_dec_ref(v_toConstantVal_303_);
v___x_305_ = l_Lean_NameSet_empty;
v___x_306_ = l_Lean_NameSet_insert(v___x_305_, v_name_304_);
v___x_307_ = l_Lean_NameSet_append(v___x_295_, v___x_306_);
return v___x_307_;
}
case 7:
{
lean_object* v_val_308_; lean_object* v_all_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_val_308_ = lean_ctor_get(v_c_293_, 0);
lean_inc_ref(v_val_308_);
lean_dec_ref(v_c_293_);
v_all_309_ = lean_ctor_get(v_val_308_, 1);
lean_inc(v_all_309_);
lean_dec_ref(v_val_308_);
v___x_310_ = l_Lean_NameSet_ofList(v_all_309_);
lean_dec(v_all_309_);
v___x_311_ = l_Lean_NameSet_append(v___x_295_, v___x_310_);
return v___x_311_;
}
default: 
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec_ref(v_c_293_);
v___x_312_ = l_Lean_NameSet_empty;
v___x_313_ = l_Lean_NameSet_append(v___x_295_, v___x_312_);
return v___x_313_;
}
}
}
else
{
lean_object* v_val_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec_ref(v_c_293_);
v_val_314_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_val_314_);
lean_dec_ref(v___x_297_);
v___x_315_ = l_Lean_Expr_getUsedConstantsAsSet(v_val_314_);
v___x_316_ = l_Lean_NameSet_append(v___x_295_, v___x_315_);
return v___x_316_;
}
}
}
lean_object* runtime_initialize_Lean_Util_PtrSet(uint8_t builtin);
lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_FoldConsts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_FoldConsts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_PtrSet(uint8_t builtin);
lean_object* initialize_Lean_Declaration(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_FoldConsts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_FoldConsts(builtin);
}
#ifdef __cplusplus
}
#endif
