// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Used
// Imports: public import Lean.Compiler.LCNF.Simp.SimpM import Init.Omega
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
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
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2___redArg(lean_object* v_i_29_, lean_object* v_source_30_, lean_object* v_target_31_){
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
v_target_37_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3___redArg(v_target_31_, v_es_34_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1___redArg(lean_object* v_data_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_nbuckets_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_42_ = lean_array_get_size(v_data_41_);
v___x_43_ = lean_unsigned_to_nat(2u);
v_nbuckets_44_ = lean_nat_mul(v___x_42_, v___x_43_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_box(0);
v___x_47_ = lean_mk_array(v_nbuckets_44_, v___x_46_);
v___x_48_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2___redArg(v___x_45_, v_data_41_, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(lean_object* v_a_49_, lean_object* v_x_50_){
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_56_, lean_object* v_x_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(v_a_56_, v_x_57_);
lean_dec(v_x_57_);
lean_dec(v_a_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0___redArg(lean_object* v_m_60_, lean_object* v_a_61_, lean_object* v_b_62_){
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
v___x_79_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(v_a_61_, v_bkt_78_);
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
v_val_93_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1___redArg(v_buckets_x27_86_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(lean_object* v_fvarId_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_subst_109_; lean_object* v_used_110_; lean_object* v_binderRenaming_111_; lean_object* v_funDeclInfoMap_112_; uint8_t v_simplified_113_; lean_object* v_visited_114_; lean_object* v_inline_115_; lean_object* v_inlineLocal_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_127_; 
v___x_107_ = lean_st_ref_get(v_a_105_);
lean_dec(v___x_107_);
v___x_108_ = lean_st_ref_take(v_a_104_);
v_subst_109_ = lean_ctor_get(v___x_108_, 0);
v_used_110_ = lean_ctor_get(v___x_108_, 1);
v_binderRenaming_111_ = lean_ctor_get(v___x_108_, 2);
v_funDeclInfoMap_112_ = lean_ctor_get(v___x_108_, 3);
v_simplified_113_ = lean_ctor_get_uint8(v___x_108_, sizeof(void*)*7);
v_visited_114_ = lean_ctor_get(v___x_108_, 4);
v_inline_115_ = lean_ctor_get(v___x_108_, 5);
v_inlineLocal_116_ = lean_ctor_get(v___x_108_, 6);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_127_ == 0)
{
v___x_118_ = v___x_108_;
v_isShared_119_ = v_isSharedCheck_127_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_inlineLocal_116_);
lean_inc(v_inline_115_);
lean_inc(v_visited_114_);
lean_inc(v_funDeclInfoMap_112_);
lean_inc(v_binderRenaming_111_);
lean_inc(v_used_110_);
lean_inc(v_subst_109_);
lean_dec(v___x_108_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_127_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_120_ = lean_box(0);
v___x_121_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0___redArg(v_used_110_, v_fvarId_103_, v___x_120_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_subst_109_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v_binderRenaming_111_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v_funDeclInfoMap_112_);
lean_ctor_set(v_reuseFailAlloc_126_, 4, v_visited_114_);
lean_ctor_set(v_reuseFailAlloc_126_, 5, v_inline_115_);
lean_ctor_set(v_reuseFailAlloc_126_, 6, v_inlineLocal_116_);
lean_ctor_set_uint8(v_reuseFailAlloc_126_, sizeof(void*)*7, v_simplified_113_);
v___x_123_ = v_reuseFailAlloc_126_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_st_ref_set(v_a_104_, v___x_123_);
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_120_);
return v___x_125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg___boxed(lean_object* v_fvarId_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_128_, v_a_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec(v_a_129_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar(lean_object* v_fvarId_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_133_, v_a_135_, v_a_140_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFVar___boxed(lean_object* v_fvarId_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar(v_fvarId_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0(lean_object* v_00_u03b2_153_, lean_object* v_m_154_, lean_object* v_a_155_, lean_object* v_b_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0___redArg(v_m_154_, v_a_155_, v_b_156_);
return v___x_157_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0(lean_object* v_00_u03b2_158_, lean_object* v_a_159_, lean_object* v_x_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(v_a_159_, v_x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_162_, lean_object* v_a_163_, lean_object* v_x_164_){
_start:
{
uint8_t v_res_165_; lean_object* v_r_166_; 
v_res_165_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0(v_00_u03b2_162_, v_a_163_, v_x_164_);
lean_dec(v_x_164_);
lean_dec(v_a_163_);
v_r_166_ = lean_box(v_res_165_);
return v_r_166_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1(lean_object* v_00_u03b2_167_, lean_object* v_data_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1___redArg(v_data_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_170_, lean_object* v_i_171_, lean_object* v_source_172_, lean_object* v_target_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2___redArg(v_i_171_, v_source_172_, v_target_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_175_, lean_object* v_x_176_, lean_object* v_x_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__1_spec__2_spec__3___redArg(v_x_176_, v_x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(lean_object* v_arg_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
if (lean_obj_tag(v_arg_179_) == 1)
{
lean_object* v_fvarId_183_; lean_object* v___x_184_; 
v_fvarId_183_ = lean_ctor_get(v_arg_179_, 0);
lean_inc(v_fvarId_183_);
lean_dec_ref(v_arg_179_);
v___x_184_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_183_, v_a_180_, v_a_181_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_arg_179_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg___boxed(lean_object* v_arg_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v_arg_187_, v_a_188_, v_a_189_);
lean_dec(v_a_189_);
lean_dec(v_a_188_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg(lean_object* v_arg_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v_arg_192_, v_a_194_, v_a_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedArg___boxed(lean_object* v_arg_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Compiler_LCNF_Simp_markUsedArg(v_arg_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec(v_a_209_);
lean_dec_ref(v_a_208_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec_ref(v_a_205_);
lean_dec(v_a_204_);
lean_dec_ref(v_a_203_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(lean_object* v_as_212_, size_t v_i_213_, size_t v_stop_214_, lean_object* v_b_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_eq(v_i_213_, v_stop_214_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_array_uget_borrowed(v_as_212_, v_i_213_);
lean_inc(v___x_220_);
v___x_221_ = l_Lean_Compiler_LCNF_Simp_markUsedArg___redArg(v___x_220_, v___y_216_, v___y_217_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; size_t v___x_223_; size_t v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_a_222_);
lean_dec_ref(v___x_221_);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_add(v_i_213_, v___x_223_);
v_i_213_ = v___x_224_;
v_b_215_ = v_a_222_;
goto _start;
}
else
{
return v___x_221_;
}
}
else
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v_b_215_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg___boxed(lean_object* v_as_227_, lean_object* v_i_228_, lean_object* v_stop_229_, lean_object* v_b_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
size_t v_i_boxed_234_; size_t v_stop_boxed_235_; lean_object* v_res_236_; 
v_i_boxed_234_ = lean_unbox_usize(v_i_228_);
lean_dec(v_i_228_);
v_stop_boxed_235_ = lean_unbox_usize(v_stop_229_);
lean_dec(v_stop_229_);
v_res_236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_as_227_, v_i_boxed_234_, v_stop_boxed_235_, v_b_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v_as_227_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetValue(lean_object* v_e_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
switch(lean_obj_tag(v_e_237_))
{
case 0:
{
lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_253_; 
v_isSharedCheck_253_ = !lean_is_exclusive(v_e_237_);
if (v_isSharedCheck_253_ == 0)
{
lean_object* v_unused_254_; 
v_unused_254_ = lean_ctor_get(v_e_237_, 0);
lean_dec(v_unused_254_);
v___x_247_ = v_e_237_;
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
else
{
lean_dec(v_e_237_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_253_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v___x_249_);
v___x_251_ = v___x_247_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
case 1:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_box(0);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
case 2:
{
lean_object* v_struct_257_; lean_object* v___x_258_; 
v_struct_257_ = lean_ctor_get(v_e_237_, 2);
lean_inc(v_struct_257_);
lean_dec_ref(v_e_237_);
v___x_258_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_struct_257_, v_a_239_, v_a_244_);
return v___x_258_;
}
case 3:
{
lean_object* v_args_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v_args_259_ = lean_ctor_get(v_e_237_, 2);
lean_inc_ref(v_args_259_);
lean_dec_ref(v_e_237_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_array_get_size(v_args_259_);
v___x_262_ = lean_box(0);
v___x_263_ = lean_nat_dec_lt(v___x_260_, v___x_261_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
lean_dec_ref(v_args_259_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = lean_nat_dec_le(v___x_261_, v___x_261_);
if (v___x_265_ == 0)
{
if (v___x_263_ == 0)
{
lean_object* v___x_266_; 
lean_dec_ref(v_args_259_);
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v___x_262_);
return v___x_266_;
}
else
{
size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; 
v___x_267_ = ((size_t)0ULL);
v___x_268_ = lean_usize_of_nat(v___x_261_);
v___x_269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_259_, v___x_267_, v___x_268_, v___x_262_, v_a_239_, v_a_244_);
lean_dec_ref(v_args_259_);
return v___x_269_;
}
}
else
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((size_t)0ULL);
v___x_271_ = lean_usize_of_nat(v___x_261_);
v___x_272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_259_, v___x_270_, v___x_271_, v___x_262_, v_a_239_, v_a_244_);
lean_dec_ref(v_args_259_);
return v___x_272_;
}
}
}
default: 
{
lean_object* v_fvarId_273_; lean_object* v_args_274_; lean_object* v___x_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_296_; 
v_fvarId_273_ = lean_ctor_get(v_e_237_, 0);
lean_inc(v_fvarId_273_);
v_args_274_ = lean_ctor_get(v_e_237_, 1);
lean_inc_ref(v_args_274_);
lean_dec_ref(v_e_237_);
v___x_275_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_273_, v_a_239_, v_a_244_);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_296_ == 0)
{
lean_object* v_unused_297_; 
v_unused_297_ = lean_ctor_get(v___x_275_, 0);
lean_dec(v_unused_297_);
v___x_277_ = v___x_275_;
v_isShared_278_ = v_isSharedCheck_296_;
goto v_resetjp_276_;
}
else
{
lean_dec(v___x_275_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_296_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_279_ = lean_unsigned_to_nat(0u);
v___x_280_ = lean_array_get_size(v_args_274_);
v___x_281_ = lean_box(0);
v___x_282_ = lean_nat_dec_lt(v___x_279_, v___x_280_);
if (v___x_282_ == 0)
{
lean_object* v___x_284_; 
lean_dec_ref(v_args_274_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_281_);
v___x_284_ = v___x_277_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_281_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
else
{
uint8_t v___x_286_; 
v___x_286_ = lean_nat_dec_le(v___x_280_, v___x_280_);
if (v___x_286_ == 0)
{
if (v___x_282_ == 0)
{
lean_object* v___x_288_; 
lean_dec_ref(v_args_274_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_281_);
v___x_288_ = v___x_277_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_281_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
else
{
size_t v___x_290_; size_t v___x_291_; lean_object* v___x_292_; 
lean_del_object(v___x_277_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = lean_usize_of_nat(v___x_280_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_274_, v___x_290_, v___x_291_, v___x_281_, v_a_239_, v_a_244_);
lean_dec_ref(v_args_274_);
return v___x_292_;
}
}
else
{
size_t v___x_293_; size_t v___x_294_; lean_object* v___x_295_; 
lean_del_object(v___x_277_);
v___x_293_ = ((size_t)0ULL);
v___x_294_ = lean_usize_of_nat(v___x_280_);
v___x_295_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_274_, v___x_293_, v___x_294_, v___x_281_, v_a_239_, v_a_244_);
lean_dec_ref(v_args_274_);
return v___x_295_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetValue___boxed(lean_object* v_e_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Compiler_LCNF_Simp_markUsedLetValue(v_e_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0(lean_object* v_as_308_, size_t v_i_309_, size_t v_stop_310_, lean_object* v_b_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_as_308_, v_i_309_, v_stop_310_, v_b_311_, v___y_313_, v___y_318_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___boxed(lean_object* v_as_321_, lean_object* v_i_322_, lean_object* v_stop_323_, lean_object* v_b_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
size_t v_i_boxed_333_; size_t v_stop_boxed_334_; lean_object* v_res_335_; 
v_i_boxed_333_ = lean_unbox_usize(v_i_322_);
lean_dec(v_i_322_);
v_stop_boxed_334_ = lean_unbox_usize(v_stop_323_);
lean_dec(v_stop_323_);
v_res_335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0(v_as_321_, v_i_boxed_333_, v_stop_boxed_334_, v_b_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec_ref(v_as_321_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(lean_object* v_letDecl_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_value_345_; lean_object* v___x_346_; 
v_value_345_ = lean_ctor_get(v_letDecl_336_, 3);
lean_inc(v_value_345_);
lean_dec_ref(v_letDecl_336_);
v___x_346_ = l_Lean_Compiler_LCNF_Simp_markUsedLetValue(v_value_345_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedLetDecl___boxed(lean_object* v_letDecl_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v_letDecl_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0(lean_object* v_as_357_, size_t v_i_358_, size_t v_stop_359_, lean_object* v_b_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___y_370_; uint8_t v___x_376_; 
v___x_376_ = lean_usize_dec_eq(v_i_358_, v_stop_359_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; 
v___x_377_ = lean_array_uget_borrowed(v_as_357_, v_i_358_);
switch(lean_obj_tag(v___x_377_))
{
case 0:
{
lean_object* v_code_378_; 
v_code_378_ = lean_ctor_get(v___x_377_, 2);
lean_inc_ref(v_code_378_);
v___y_370_ = v_code_378_;
goto v___jp_369_;
}
case 1:
{
lean_object* v_code_379_; 
v_code_379_ = lean_ctor_get(v___x_377_, 1);
lean_inc_ref(v_code_379_);
v___y_370_ = v_code_379_;
goto v___jp_369_;
}
default: 
{
lean_object* v_code_380_; 
v_code_380_ = lean_ctor_get(v___x_377_, 0);
lean_inc_ref(v_code_380_);
v___y_370_ = v_code_380_;
goto v___jp_369_;
}
}
}
else
{
lean_object* v___x_381_; 
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v_b_360_);
return v___x_381_;
}
v___jp_369_:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Compiler_LCNF_Simp_markUsedCode(v___y_370_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; size_t v___x_373_; size_t v___x_374_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref(v___x_371_);
v___x_373_ = ((size_t)1ULL);
v___x_374_ = lean_usize_add(v_i_358_, v___x_373_);
v_i_358_ = v___x_374_;
v_b_360_ = v_a_372_;
goto _start;
}
else
{
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedCode(lean_object* v_code_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_decl_392_; lean_object* v_k_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; 
switch(lean_obj_tag(v_code_382_))
{
case 0:
{
lean_object* v_decl_403_; lean_object* v_k_404_; lean_object* v___x_405_; 
v_decl_403_ = lean_ctor_get(v_code_382_, 0);
lean_inc_ref(v_decl_403_);
v_k_404_ = lean_ctor_get(v_code_382_, 1);
lean_inc_ref(v_k_404_);
lean_dec_ref(v_code_382_);
v___x_405_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v_decl_403_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_dec_ref(v___x_405_);
v_code_382_ = v_k_404_;
goto _start;
}
else
{
lean_dec_ref(v_k_404_);
return v___x_405_;
}
}
case 3:
{
lean_object* v_fvarId_407_; lean_object* v_args_408_; lean_object* v___x_409_; 
v_fvarId_407_ = lean_ctor_get(v_code_382_, 0);
lean_inc(v_fvarId_407_);
v_args_408_ = lean_ctor_get(v_code_382_, 1);
lean_inc_ref(v_args_408_);
lean_dec_ref(v_code_382_);
v___x_409_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_407_, v_a_384_, v_a_389_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_430_; 
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; 
v_unused_431_ = lean_ctor_get(v___x_409_, 0);
lean_dec(v_unused_431_);
v___x_411_ = v___x_409_;
v_isShared_412_ = v_isSharedCheck_430_;
goto v_resetjp_410_;
}
else
{
lean_dec(v___x_409_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_430_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_413_ = lean_unsigned_to_nat(0u);
v___x_414_ = lean_array_get_size(v_args_408_);
v___x_415_ = lean_box(0);
v___x_416_ = lean_nat_dec_lt(v___x_413_, v___x_414_);
if (v___x_416_ == 0)
{
lean_object* v___x_418_; 
lean_dec_ref(v_args_408_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_415_);
v___x_418_ = v___x_411_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_415_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
else
{
uint8_t v___x_420_; 
v___x_420_ = lean_nat_dec_le(v___x_414_, v___x_414_);
if (v___x_420_ == 0)
{
if (v___x_416_ == 0)
{
lean_object* v___x_422_; 
lean_dec_ref(v_args_408_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_415_);
v___x_422_ = v___x_411_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_415_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
else
{
size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; 
lean_del_object(v___x_411_);
v___x_424_ = ((size_t)0ULL);
v___x_425_ = lean_usize_of_nat(v___x_414_);
v___x_426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_408_, v___x_424_, v___x_425_, v___x_415_, v_a_384_, v_a_389_);
lean_dec_ref(v_args_408_);
return v___x_426_;
}
}
else
{
size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; 
lean_del_object(v___x_411_);
v___x_427_ = ((size_t)0ULL);
v___x_428_ = lean_usize_of_nat(v___x_414_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedLetValue_spec__0___redArg(v_args_408_, v___x_427_, v___x_428_, v___x_415_, v_a_384_, v_a_389_);
lean_dec_ref(v_args_408_);
return v___x_429_;
}
}
}
}
else
{
lean_dec_ref(v_args_408_);
return v___x_409_;
}
}
case 4:
{
lean_object* v_cases_432_; lean_object* v_discr_433_; lean_object* v_alts_434_; lean_object* v___x_435_; 
v_cases_432_ = lean_ctor_get(v_code_382_, 0);
lean_inc_ref(v_cases_432_);
lean_dec_ref(v_code_382_);
v_discr_433_ = lean_ctor_get(v_cases_432_, 2);
lean_inc(v_discr_433_);
v_alts_434_ = lean_ctor_get(v_cases_432_, 3);
lean_inc_ref(v_alts_434_);
lean_dec_ref(v_cases_432_);
v___x_435_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_discr_433_, v_a_384_, v_a_389_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_456_; 
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; 
v_unused_457_ = lean_ctor_get(v___x_435_, 0);
lean_dec(v_unused_457_);
v___x_437_ = v___x_435_;
v_isShared_438_ = v_isSharedCheck_456_;
goto v_resetjp_436_;
}
else
{
lean_dec(v___x_435_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_456_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_439_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_array_get_size(v_alts_434_);
v___x_441_ = lean_box(0);
v___x_442_ = lean_nat_dec_lt(v___x_439_, v___x_440_);
if (v___x_442_ == 0)
{
lean_object* v___x_444_; 
lean_dec_ref(v_alts_434_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_441_);
v___x_444_ = v___x_437_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_441_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
else
{
uint8_t v___x_446_; 
v___x_446_ = lean_nat_dec_le(v___x_440_, v___x_440_);
if (v___x_446_ == 0)
{
if (v___x_442_ == 0)
{
lean_object* v___x_448_; 
lean_dec_ref(v_alts_434_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_441_);
v___x_448_ = v___x_437_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_441_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
else
{
size_t v___x_450_; size_t v___x_451_; lean_object* v___x_452_; 
lean_del_object(v___x_437_);
v___x_450_ = ((size_t)0ULL);
v___x_451_ = lean_usize_of_nat(v___x_440_);
v___x_452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0(v_alts_434_, v___x_450_, v___x_451_, v___x_441_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
lean_dec_ref(v_alts_434_);
return v___x_452_;
}
}
else
{
size_t v___x_453_; size_t v___x_454_; lean_object* v___x_455_; 
lean_del_object(v___x_437_);
v___x_453_ = ((size_t)0ULL);
v___x_454_ = lean_usize_of_nat(v___x_440_);
v___x_455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0(v_alts_434_, v___x_453_, v___x_454_, v___x_441_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
lean_dec_ref(v_alts_434_);
return v___x_455_;
}
}
}
}
else
{
lean_dec_ref(v_alts_434_);
return v___x_435_;
}
}
case 5:
{
lean_object* v_fvarId_458_; lean_object* v___x_459_; 
v_fvarId_458_ = lean_ctor_get(v_code_382_, 0);
lean_inc(v_fvarId_458_);
lean_dec_ref(v_code_382_);
v___x_459_ = l_Lean_Compiler_LCNF_Simp_markUsedFVar___redArg(v_fvarId_458_, v_a_384_, v_a_389_);
return v___x_459_;
}
case 6:
{
lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_467_; 
v_isSharedCheck_467_ = !lean_is_exclusive(v_code_382_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; 
v_unused_468_ = lean_ctor_get(v_code_382_, 0);
lean_dec(v_unused_468_);
v___x_461_ = v_code_382_;
v_isShared_462_ = v_isSharedCheck_467_;
goto v_resetjp_460_;
}
else
{
lean_dec(v_code_382_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_467_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_box(0);
if (v_isShared_462_ == 0)
{
lean_ctor_set_tag(v___x_461_, 0);
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_465_ = v___x_461_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
default: 
{
lean_object* v_decl_469_; lean_object* v_k_470_; 
v_decl_469_ = lean_ctor_get(v_code_382_, 0);
lean_inc_ref(v_decl_469_);
v_k_470_ = lean_ctor_get(v_code_382_, 1);
lean_inc_ref(v_k_470_);
lean_dec_ref(v_code_382_);
v_decl_392_ = v_decl_469_;
v_k_393_ = v_k_470_;
v___y_394_ = v_a_383_;
v___y_395_ = v_a_384_;
v___y_396_ = v_a_385_;
v___y_397_ = v_a_386_;
v___y_398_ = v_a_387_;
v___y_399_ = v_a_388_;
v___y_400_ = v_a_389_;
goto v___jp_391_;
}
}
v___jp_391_:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_392_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_dec_ref(v___x_401_);
v_code_382_ = v_k_393_;
v_a_383_ = v___y_394_;
v_a_384_ = v___y_395_;
v_a_385_ = v___y_396_;
v_a_386_ = v___y_397_;
v_a_387_ = v___y_398_;
v_a_388_ = v___y_399_;
v_a_389_ = v___y_400_;
goto _start;
}
else
{
lean_dec_ref(v_k_393_);
return v___x_401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(lean_object* v_funDecl_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v_value_480_; lean_object* v___x_481_; 
v_value_480_ = lean_ctor_get(v_funDecl_471_, 4);
lean_inc_ref(v_value_480_);
lean_dec_ref(v_funDecl_471_);
v___x_481_ = l_Lean_Compiler_LCNF_Simp_markUsedCode(v_value_480_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedFunDecl___boxed(lean_object* v_funDecl_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_funDecl_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0___boxed(lean_object* v_as_492_, lean_object* v_i_493_, lean_object* v_stop_494_, lean_object* v_b_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
size_t v_i_boxed_504_; size_t v_stop_boxed_505_; lean_object* v_res_506_; 
v_i_boxed_504_ = lean_unbox_usize(v_i_493_);
lean_dec(v_i_493_);
v_stop_boxed_505_ = lean_unbox_usize(v_stop_494_);
lean_dec(v_stop_494_);
v_res_506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_markUsedCode_spec__0(v_as_492_, v_i_boxed_504_, v_stop_boxed_505_, v_b_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec_ref(v_as_492_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markUsedCode___boxed(lean_object* v_code_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_Compiler_LCNF_Simp_markUsedCode(v_code_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
lean_dec(v_a_512_);
lean_dec_ref(v_a_511_);
lean_dec_ref(v_a_510_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
return v_res_516_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg(lean_object* v_m_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_buckets_519_; lean_object* v___x_520_; uint64_t v___x_521_; uint64_t v___x_522_; uint64_t v___x_523_; uint64_t v_fold_524_; uint64_t v___x_525_; uint64_t v___x_526_; uint64_t v___x_527_; size_t v___x_528_; size_t v___x_529_; size_t v___x_530_; size_t v___x_531_; size_t v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; 
v_buckets_519_ = lean_ctor_get(v_m_517_, 1);
v___x_520_ = lean_array_get_size(v_buckets_519_);
v___x_521_ = l_Lean_instHashableFVarId_hash(v_a_518_);
v___x_522_ = 32ULL;
v___x_523_ = lean_uint64_shift_right(v___x_521_, v___x_522_);
v_fold_524_ = lean_uint64_xor(v___x_521_, v___x_523_);
v___x_525_ = 16ULL;
v___x_526_ = lean_uint64_shift_right(v_fold_524_, v___x_525_);
v___x_527_ = lean_uint64_xor(v_fold_524_, v___x_526_);
v___x_528_ = lean_uint64_to_usize(v___x_527_);
v___x_529_ = lean_usize_of_nat(v___x_520_);
v___x_530_ = ((size_t)1ULL);
v___x_531_ = lean_usize_sub(v___x_529_, v___x_530_);
v___x_532_ = lean_usize_land(v___x_528_, v___x_531_);
v___x_533_ = lean_array_uget_borrowed(v_buckets_519_, v___x_532_);
v___x_534_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_Simp_markUsedFVar_spec__0_spec__0___redArg(v_a_518_, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg___boxed(lean_object* v_m_535_, lean_object* v_a_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg(v_m_535_, v_a_536_);
lean_dec(v_a_536_);
lean_dec_ref(v_m_535_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object* v_fvarId_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v_used_545_; uint8_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_543_ = lean_st_ref_get(v_a_541_);
lean_dec(v___x_543_);
v___x_544_ = lean_st_ref_get(v_a_540_);
v_used_545_ = lean_ctor_get(v___x_544_, 1);
lean_inc_ref(v_used_545_);
lean_dec(v___x_544_);
v___x_546_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg(v_used_545_, v_fvarId_539_);
lean_dec_ref(v_used_545_);
v___x_547_ = lean_box(v___x_546_);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg___boxed(lean_object* v_fvarId_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_549_, v_a_550_, v_a_551_);
lean_dec(v_a_551_);
lean_dec(v_a_550_);
lean_dec(v_fvarId_549_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed(lean_object* v_fvarId_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_554_, v_a_556_, v_a_561_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___boxed(lean_object* v_fvarId_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Compiler_LCNF_Simp_isUsed(v_fvarId_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_fvarId_564_);
return v_res_573_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0(lean_object* v_00_u03b2_574_, lean_object* v_m_575_, lean_object* v_a_576_){
_start:
{
uint8_t v___x_577_; 
v___x_577_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___redArg(v_m_575_, v_a_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0___boxed(lean_object* v_00_u03b2_578_, lean_object* v_m_579_, lean_object* v_a_580_){
_start:
{
uint8_t v_res_581_; lean_object* v_r_582_; 
v_res_581_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_Simp_isUsed_spec__0(v_00_u03b2_578_, v_m_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_m_579_);
v_r_582_ = lean_box(v_res_581_);
return v_r_582_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0(void){
_start:
{
uint8_t v___x_583_; lean_object* v___x_584_; 
v___x_583_ = 0;
v___x_584_ = l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default(v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go(lean_object* v_decls_585_, lean_object* v_i_586_, lean_object* v_code_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_){
_start:
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = lean_nat_dec_lt(v___x_596_, v_i_586_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
lean_dec(v_i_586_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v_code_587_);
return v___x_598_;
}
else
{
uint8_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v_decl_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v_a_606_; uint8_t v___x_607_; 
v___x_599_ = 0;
v___x_600_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___closed__0);
v___x_601_ = lean_unsigned_to_nat(1u);
v___x_602_ = lean_nat_sub(v_i_586_, v___x_601_);
lean_dec(v_i_586_);
v_decl_603_ = lean_array_get_borrowed(v___x_600_, v_decls_585_, v___x_602_);
v___x_604_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v_decl_603_);
v___x_605_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v___x_604_, v_a_589_, v_a_594_);
lean_dec(v___x_604_);
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
v___x_607_ = lean_unbox(v_a_606_);
lean_dec(v_a_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v___x_599_, v_decl_603_, v_a_592_, v_a_594_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_dec_ref(v___x_608_);
v_i_586_ = v___x_602_;
goto _start;
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec(v___x_602_);
lean_dec_ref(v_code_587_);
v_a_610_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_608_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_608_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
switch(lean_obj_tag(v_decl_603_))
{
case 0:
{
lean_object* v_decl_618_; lean_object* v___x_619_; 
v_decl_618_ = lean_ctor_get(v_decl_603_, 0);
lean_inc_ref(v_decl_618_);
v___x_619_ = l_Lean_Compiler_LCNF_Simp_markUsedLetDecl(v_decl_618_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v___x_620_; 
lean_dec_ref(v___x_619_);
lean_inc_ref(v_decl_618_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v_decl_618_);
lean_ctor_set(v___x_620_, 1, v_code_587_);
v_i_586_ = v___x_602_;
v_code_587_ = v___x_620_;
goto _start;
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
lean_dec(v___x_602_);
lean_dec_ref(v_code_587_);
v_a_622_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_619_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_619_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
case 1:
{
lean_object* v_decl_630_; lean_object* v___x_631_; 
v_decl_630_ = lean_ctor_get(v_decl_603_, 0);
lean_inc_ref(v_decl_630_);
v___x_631_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_630_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v___x_632_; 
lean_dec_ref(v___x_631_);
lean_inc_ref(v_decl_630_);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v_decl_630_);
lean_ctor_set(v___x_632_, 1, v_code_587_);
v_i_586_ = v___x_602_;
v_code_587_ = v___x_632_;
goto _start;
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec(v___x_602_);
lean_dec_ref(v_code_587_);
v_a_634_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_631_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_631_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
default: 
{
lean_object* v_decl_642_; lean_object* v___x_643_; 
v_decl_642_ = lean_ctor_get(v_decl_603_, 0);
lean_inc_ref(v_decl_642_);
v___x_643_ = l_Lean_Compiler_LCNF_Simp_markUsedFunDecl(v_decl_642_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v___x_644_; 
lean_dec_ref(v___x_643_);
lean_inc_ref(v_decl_642_);
v___x_644_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_644_, 0, v_decl_642_);
lean_ctor_set(v___x_644_, 1, v_code_587_);
v_i_586_ = v___x_602_;
v_code_587_ = v___x_644_;
goto _start;
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v___x_602_);
lean_dec_ref(v_code_587_);
v_a_646_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_643_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_643_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go___boxed(lean_object* v_decls_654_, lean_object* v_i_655_, lean_object* v_code_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go(v_decls_654_, v_i_655_, v_code_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
lean_dec_ref(v_decls_654_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go_match__1_splitter___redArg(lean_object* v_decl_666_, lean_object* v_h__1_667_, lean_object* v_h__2_668_, lean_object* v_h__3_669_){
_start:
{
switch(lean_obj_tag(v_decl_666_))
{
case 0:
{
lean_object* v_decl_670_; lean_object* v___x_671_; 
lean_dec(v_h__3_669_);
lean_dec(v_h__2_668_);
v_decl_670_ = lean_ctor_get(v_decl_666_, 0);
lean_inc_ref(v_decl_670_);
lean_dec_ref(v_decl_666_);
v___x_671_ = lean_apply_1(v_h__1_667_, v_decl_670_);
return v___x_671_;
}
case 1:
{
lean_object* v_decl_672_; lean_object* v___x_673_; 
lean_dec(v_h__3_669_);
lean_dec(v_h__1_667_);
v_decl_672_ = lean_ctor_get(v_decl_666_, 0);
lean_inc_ref(v_decl_672_);
lean_dec_ref(v_decl_666_);
v___x_673_ = lean_apply_1(v_h__2_668_, v_decl_672_);
return v___x_673_;
}
default: 
{
lean_object* v_decl_674_; lean_object* v___x_675_; 
lean_dec(v_h__2_668_);
lean_dec(v_h__1_667_);
v_decl_674_ = lean_ctor_get(v_decl_666_, 0);
lean_inc_ref(v_decl_674_);
lean_dec_ref(v_decl_666_);
v___x_675_ = lean_apply_1(v_h__3_669_, v_decl_674_);
return v___x_675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go_match__1_splitter(lean_object* v_motive_676_, lean_object* v_decl_677_, lean_object* v_h__1_678_, lean_object* v_h__2_679_, lean_object* v_h__3_680_){
_start:
{
switch(lean_obj_tag(v_decl_677_))
{
case 0:
{
lean_object* v_decl_681_; lean_object* v___x_682_; 
lean_dec(v_h__3_680_);
lean_dec(v_h__2_679_);
v_decl_681_ = lean_ctor_get(v_decl_677_, 0);
lean_inc_ref(v_decl_681_);
lean_dec_ref(v_decl_677_);
v___x_682_ = lean_apply_1(v_h__1_678_, v_decl_681_);
return v___x_682_;
}
case 1:
{
lean_object* v_decl_683_; lean_object* v___x_684_; 
lean_dec(v_h__3_680_);
lean_dec(v_h__1_678_);
v_decl_683_ = lean_ctor_get(v_decl_677_, 0);
lean_inc_ref(v_decl_683_);
lean_dec_ref(v_decl_677_);
v___x_684_ = lean_apply_1(v_h__2_679_, v_decl_683_);
return v___x_684_;
}
default: 
{
lean_object* v_decl_685_; lean_object* v___x_686_; 
lean_dec(v_h__2_679_);
lean_dec(v_h__1_678_);
v_decl_685_ = lean_ctor_get(v_decl_677_, 0);
lean_inc_ref(v_decl_685_);
lean_dec_ref(v_decl_677_);
v___x_686_ = lean_apply_1(v_h__3_680_, v_decl_685_);
return v___x_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls(lean_object* v_decls_687_, lean_object* v_code_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_array_get_size(v_decls_687_);
v___x_698_ = l___private_Lean_Compiler_LCNF_Simp_Used_0__Lean_Compiler_LCNF_Simp_attachCodeDecls_go(v_decls_687_, v___x_697_, v_code_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_attachCodeDecls___boxed(lean_object* v_decls_699_, lean_object* v_code_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Compiler_LCNF_Simp_attachCodeDecls(v_decls_699_, v_code_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec_ref(v_decls_699_);
return v_res_709_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
}
#ifdef __cplusplus
}
#endif
