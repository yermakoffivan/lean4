// Lean compiler output
// Module: Lean.Meta.HasAssignableMVar
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
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MetavarContext_getLevelDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_hasAssignableMVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_hasAssignableMVar___closed__0;
static lean_once_cell_t l_Lean_Meta_hasAssignableMVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_hasAssignableMVar___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg(lean_object* v_mvarId_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v_levelAssignDepth_8_; lean_object* v_decl_9_; lean_object* v_depth_10_; uint8_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_5_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_5_);
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v_levelAssignDepth_8_ = lean_ctor_get(v_mctx_7_, 1);
lean_inc(v_levelAssignDepth_8_);
v_decl_9_ = l_Lean_MetavarContext_getLevelDecl(v_mctx_7_, v_mvarId_1_);
lean_dec_ref(v_mctx_7_);
v_depth_10_ = lean_ctor_get(v_decl_9_, 0);
lean_inc(v_depth_10_);
lean_dec_ref(v_decl_9_);
v___x_11_ = lean_nat_dec_le(v_levelAssignDepth_8_, v_depth_10_);
lean_dec(v_depth_10_);
lean_dec(v_levelAssignDepth_8_);
v___x_12_ = lean_box(v___x_11_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg___boxed(lean_object* v_mvarId_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg(v_mvarId_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0(lean_object* v_mvarId_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg(v_mvarId_19_, v___y_21_, v___y_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___boxed(lean_object* v_mvarId_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0(v_mvarId_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object* v_x_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; lean_object* v___y_43_; lean_object* v___y_44_; lean_object* v___y_45_; uint8_t v_a_46_; lean_object* v_lvl_u2081_52_; lean_object* v_lvl_u2082_53_; lean_object* v___y_54_; lean_object* v___y_55_; lean_object* v___y_56_; lean_object* v___y_57_; 
switch(lean_obj_tag(v_x_33_))
{
case 1:
{
lean_object* v_a_64_; uint8_t v___x_65_; 
v_a_64_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_a_64_);
lean_dec_ref(v_x_33_);
v___x_65_ = l_Lean_Level_hasMVar(v_a_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; 
lean_dec(v_a_64_);
v___x_66_ = lean_box(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
else
{
v_x_33_ = v_a_64_;
goto _start;
}
}
case 2:
{
lean_object* v_a_69_; lean_object* v_a_70_; 
v_a_69_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_a_69_);
v_a_70_ = lean_ctor_get(v_x_33_, 1);
lean_inc(v_a_70_);
lean_dec_ref(v_x_33_);
v_lvl_u2081_52_ = v_a_69_;
v_lvl_u2082_53_ = v_a_70_;
v___y_54_ = v_a_34_;
v___y_55_ = v_a_35_;
v___y_56_ = v_a_36_;
v___y_57_ = v_a_37_;
goto v___jp_51_;
}
case 3:
{
lean_object* v_a_71_; lean_object* v_a_72_; 
v_a_71_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_a_71_);
v_a_72_ = lean_ctor_get(v_x_33_, 1);
lean_inc(v_a_72_);
lean_dec_ref(v_x_33_);
v_lvl_u2081_52_ = v_a_71_;
v_lvl_u2082_53_ = v_a_72_;
v___y_54_ = v_a_34_;
v___y_55_ = v_a_35_;
v___y_56_ = v_a_36_;
v___y_57_ = v_a_37_;
goto v___jp_51_;
}
case 5:
{
lean_object* v_a_73_; lean_object* v___x_74_; 
v_a_73_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_a_73_);
lean_dec_ref(v_x_33_);
v___x_74_ = l_Lean_isLevelMVarAssignable___at___00Lean_Meta_hasAssignableLevelMVar_spec__0___redArg(v_a_73_, v_a_35_, v_a_37_);
return v___x_74_;
}
default: 
{
uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec(v_x_33_);
v___x_75_ = 0;
v___x_76_ = lean_box(v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
v___jp_39_:
{
if (v_a_46_ == 0)
{
uint8_t v___x_47_; 
lean_dec_ref(v___y_45_);
v___x_47_ = l_Lean_Level_hasMVar(v___y_44_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v___y_44_);
v___x_48_ = lean_box(v___x_47_);
v___x_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
return v___x_49_;
}
else
{
v_x_33_ = v___y_44_;
v_a_34_ = v___y_40_;
v_a_35_ = v___y_41_;
v_a_36_ = v___y_42_;
v_a_37_ = v___y_43_;
goto _start;
}
}
else
{
lean_dec(v___y_44_);
return v___y_45_;
}
}
v___jp_51_:
{
uint8_t v___x_58_; 
v___x_58_ = l_Lean_Level_hasMVar(v_lvl_u2081_52_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_lvl_u2081_52_);
v___x_59_ = lean_box(v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
v___y_40_ = v___y_54_;
v___y_41_ = v___y_55_;
v___y_42_ = v___y_56_;
v___y_43_ = v___y_57_;
v___y_44_ = v_lvl_u2082_53_;
v___y_45_ = v___x_60_;
v_a_46_ = v___x_58_;
goto v___jp_39_;
}
else
{
lean_object* v___x_61_; lean_object* v_a_62_; uint8_t v___x_63_; 
v___x_61_ = l_Lean_Meta_hasAssignableLevelMVar(v_lvl_u2081_52_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
v_a_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc(v_a_62_);
v___x_63_ = lean_unbox(v_a_62_);
lean_dec(v_a_62_);
v___y_40_ = v___y_54_;
v___y_41_ = v___y_55_;
v___y_42_ = v___y_56_;
v___y_43_ = v___y_57_;
v___y_44_ = v_lvl_u2082_53_;
v___y_45_ = v___x_61_;
v_a_46_ = v___x_63_;
goto v___jp_39_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar___boxed(lean_object* v_x_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Meta_hasAssignableLevelMVar(v_x_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(lean_object* v_mvarId_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v_mctx_91_; lean_object* v_decl_92_; lean_object* v_depth_93_; lean_object* v_depth_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_89_ = lean_st_ref_get(v___y_87_);
lean_dec(v___x_89_);
v___x_90_ = lean_st_ref_get(v___y_86_);
v_mctx_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc_ref(v_mctx_91_);
lean_dec(v___x_90_);
v_decl_92_ = l_Lean_MetavarContext_getDecl(v_mctx_91_, v_mvarId_85_);
v_depth_93_ = lean_ctor_get(v_decl_92_, 3);
lean_inc(v_depth_93_);
lean_dec_ref(v_decl_92_);
v_depth_94_ = lean_ctor_get(v_mctx_91_, 0);
lean_inc(v_depth_94_);
lean_dec_ref(v_mctx_91_);
v___x_95_ = lean_nat_dec_eq(v_depth_93_, v_depth_94_);
lean_dec(v_depth_94_);
lean_dec(v_depth_93_);
v___x_96_ = lean_box(v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg___boxed(lean_object* v_mvarId_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec(v___y_99_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(lean_object* v_mvarId_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_103_, v___y_106_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___boxed(lean_object* v_mvarId_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(v_mvarId_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_119_, lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 0)
{
return v_x_119_;
}
else
{
lean_object* v_key_121_; lean_object* v_value_122_; lean_object* v_tail_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_146_; 
v_key_121_ = lean_ctor_get(v_x_120_, 0);
v_value_122_ = lean_ctor_get(v_x_120_, 1);
v_tail_123_ = lean_ctor_get(v_x_120_, 2);
v_isSharedCheck_146_ = !lean_is_exclusive(v_x_120_);
if (v_isSharedCheck_146_ == 0)
{
v___x_125_ = v_x_120_;
v_isShared_126_ = v_isSharedCheck_146_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_tail_123_);
lean_inc(v_value_122_);
lean_inc(v_key_121_);
lean_dec(v_x_120_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_146_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; uint64_t v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v_fold_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; size_t v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_127_ = lean_array_get_size(v_x_119_);
v___x_128_ = l_Lean_Expr_hash(v_key_121_);
v___x_129_ = 32ULL;
v___x_130_ = lean_uint64_shift_right(v___x_128_, v___x_129_);
v_fold_131_ = lean_uint64_xor(v___x_128_, v___x_130_);
v___x_132_ = 16ULL;
v___x_133_ = lean_uint64_shift_right(v_fold_131_, v___x_132_);
v___x_134_ = lean_uint64_xor(v_fold_131_, v___x_133_);
v___x_135_ = lean_uint64_to_usize(v___x_134_);
v___x_136_ = lean_usize_of_nat(v___x_127_);
v___x_137_ = ((size_t)1ULL);
v___x_138_ = lean_usize_sub(v___x_136_, v___x_137_);
v___x_139_ = lean_usize_land(v___x_135_, v___x_138_);
v___x_140_ = lean_array_uget_borrowed(v_x_119_, v___x_139_);
lean_inc(v___x_140_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 2, v___x_140_);
v___x_142_ = v___x_125_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_key_121_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_value_122_);
lean_ctor_set(v_reuseFailAlloc_145_, 2, v___x_140_);
v___x_142_ = v_reuseFailAlloc_145_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_array_uset(v_x_119_, v___x_139_, v___x_142_);
v_x_119_ = v___x_143_;
v_x_120_ = v_tail_123_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(lean_object* v_i_147_, lean_object* v_source_148_, lean_object* v_target_149_){
_start:
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_array_get_size(v_source_148_);
v___x_151_ = lean_nat_dec_lt(v_i_147_, v___x_150_);
if (v___x_151_ == 0)
{
lean_dec_ref(v_source_148_);
lean_dec(v_i_147_);
return v_target_149_;
}
else
{
lean_object* v_es_152_; lean_object* v___x_153_; lean_object* v_source_154_; lean_object* v_target_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_es_152_ = lean_array_fget(v_source_148_, v_i_147_);
v___x_153_ = lean_box(0);
v_source_154_ = lean_array_fset(v_source_148_, v_i_147_, v___x_153_);
v_target_155_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_target_149_, v_es_152_);
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_i_147_, v___x_156_);
lean_dec(v_i_147_);
v_i_147_ = v___x_157_;
v_source_148_ = v_source_154_;
v_target_149_ = v_target_155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(lean_object* v_data_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v_nbuckets_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_160_ = lean_array_get_size(v_data_159_);
v___x_161_ = lean_unsigned_to_nat(2u);
v_nbuckets_162_ = lean_nat_mul(v___x_160_, v___x_161_);
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_box(0);
v___x_165_ = lean_mk_array(v_nbuckets_162_, v___x_164_);
v___x_166_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(v___x_163_, v_data_159_, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(lean_object* v_a_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_168_) == 0)
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
else
{
lean_object* v_key_170_; lean_object* v_tail_171_; uint8_t v___x_172_; 
v_key_170_ = lean_ctor_get(v_x_168_, 0);
v_tail_171_ = lean_ctor_get(v_x_168_, 2);
v___x_172_ = lean_expr_eqv(v_key_170_, v_a_167_);
if (v___x_172_ == 0)
{
v_x_168_ = v_tail_171_;
goto _start;
}
else
{
return v___x_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg___boxed(lean_object* v_a_174_, lean_object* v_x_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_174_, v_x_175_);
lean_dec(v_x_175_);
lean_dec_ref(v_a_174_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(lean_object* v_m_178_, lean_object* v_a_179_, lean_object* v_b_180_){
_start:
{
lean_object* v_size_181_; lean_object* v_buckets_182_; lean_object* v___x_183_; uint64_t v___x_184_; uint64_t v___x_185_; uint64_t v___x_186_; uint64_t v_fold_187_; uint64_t v___x_188_; uint64_t v___x_189_; uint64_t v___x_190_; size_t v___x_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; size_t v___x_195_; lean_object* v_bkt_196_; uint8_t v___x_197_; 
v_size_181_ = lean_ctor_get(v_m_178_, 0);
v_buckets_182_ = lean_ctor_get(v_m_178_, 1);
v___x_183_ = lean_array_get_size(v_buckets_182_);
v___x_184_ = l_Lean_Expr_hash(v_a_179_);
v___x_185_ = 32ULL;
v___x_186_ = lean_uint64_shift_right(v___x_184_, v___x_185_);
v_fold_187_ = lean_uint64_xor(v___x_184_, v___x_186_);
v___x_188_ = 16ULL;
v___x_189_ = lean_uint64_shift_right(v_fold_187_, v___x_188_);
v___x_190_ = lean_uint64_xor(v_fold_187_, v___x_189_);
v___x_191_ = lean_uint64_to_usize(v___x_190_);
v___x_192_ = lean_usize_of_nat(v___x_183_);
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_sub(v___x_192_, v___x_193_);
v___x_195_ = lean_usize_land(v___x_191_, v___x_194_);
v_bkt_196_ = lean_array_uget_borrowed(v_buckets_182_, v___x_195_);
v___x_197_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_179_, v_bkt_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_218_; 
lean_inc_ref(v_buckets_182_);
lean_inc(v_size_181_);
v_isSharedCheck_218_ = !lean_is_exclusive(v_m_178_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; lean_object* v_unused_220_; 
v_unused_219_ = lean_ctor_get(v_m_178_, 1);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v_m_178_, 0);
lean_dec(v_unused_220_);
v___x_199_ = v_m_178_;
v_isShared_200_ = v_isSharedCheck_218_;
goto v_resetjp_198_;
}
else
{
lean_dec(v_m_178_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_218_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v_size_x27_202_; lean_object* v___x_203_; lean_object* v_buckets_x27_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_201_ = lean_unsigned_to_nat(1u);
v_size_x27_202_ = lean_nat_add(v_size_181_, v___x_201_);
lean_dec(v_size_181_);
lean_inc(v_bkt_196_);
v___x_203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_203_, 0, v_a_179_);
lean_ctor_set(v___x_203_, 1, v_b_180_);
lean_ctor_set(v___x_203_, 2, v_bkt_196_);
v_buckets_x27_204_ = lean_array_uset(v_buckets_182_, v___x_195_, v___x_203_);
v___x_205_ = lean_unsigned_to_nat(4u);
v___x_206_ = lean_nat_mul(v_size_x27_202_, v___x_205_);
v___x_207_ = lean_unsigned_to_nat(3u);
v___x_208_ = lean_nat_div(v___x_206_, v___x_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_array_get_size(v_buckets_x27_204_);
v___x_210_ = lean_nat_dec_le(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
if (v___x_210_ == 0)
{
lean_object* v_val_211_; lean_object* v___x_213_; 
v_val_211_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(v_buckets_x27_204_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_val_211_);
lean_ctor_set(v___x_199_, 0, v_size_x27_202_);
v___x_213_ = v___x_199_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_size_x27_202_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_val_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
else
{
lean_object* v___x_216_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_buckets_x27_204_);
lean_ctor_set(v___x_199_, 0, v_size_x27_202_);
v___x_216_ = v___x_199_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_size_x27_202_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v_buckets_x27_204_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_dec(v_b_180_);
lean_dec_ref(v_a_179_);
return v_m_178_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(lean_object* v_m_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_buckets_223_; lean_object* v___x_224_; uint64_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v_fold_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; size_t v___x_232_; size_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v_buckets_223_ = lean_ctor_get(v_m_221_, 1);
v___x_224_ = lean_array_get_size(v_buckets_223_);
v___x_225_ = l_Lean_Expr_hash(v_a_222_);
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
v___x_237_ = lean_array_uget_borrowed(v_buckets_223_, v___x_236_);
v___x_238_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_222_, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg___boxed(lean_object* v_m_239_, lean_object* v_a_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v_m_239_, v_a_240_);
lean_dec_ref(v_a_240_);
lean_dec_ref(v_m_239_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(lean_object* v_x_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = 0;
v___x_250_ = lean_box(v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
else
{
lean_object* v_head_252_; lean_object* v_tail_253_; lean_object* v___x_254_; lean_object* v_a_255_; uint8_t v___x_256_; 
v_head_252_ = lean_ctor_get(v_x_243_, 0);
lean_inc(v_head_252_);
v_tail_253_ = lean_ctor_get(v_x_243_, 1);
lean_inc(v_tail_253_);
lean_dec_ref(v_x_243_);
v___x_254_ = l_Lean_Meta_hasAssignableLevelMVar(v_head_252_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
v___x_256_ = lean_unbox(v_a_255_);
lean_dec(v_a_255_);
if (v___x_256_ == 0)
{
lean_dec_ref(v___x_254_);
v_x_243_ = v_tail_253_;
goto _start;
}
else
{
lean_dec(v_tail_253_);
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg___boxed(lean_object* v_x_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_x_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_264_;
}
}
static lean_object* _init_l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0(void){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_mk_string_unchecked("hasAssignableMVar", 17, 17);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(lean_object* v_e_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_d_274_; lean_object* v_b_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; 
switch(lean_obj_tag(v_e_266_))
{
case 2:
{
lean_object* v_mvarId_295_; lean_object* v___x_296_; 
v_mvarId_295_ = lean_ctor_get(v_e_266_, 0);
lean_inc(v_mvarId_295_);
lean_dec_ref(v_e_266_);
v___x_296_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_295_, v_a_269_, v_a_271_);
return v___x_296_;
}
case 3:
{
lean_object* v_u_297_; lean_object* v___x_298_; 
v_u_297_ = lean_ctor_get(v_e_266_, 0);
lean_inc(v_u_297_);
lean_dec_ref(v_e_266_);
v___x_298_ = l_Lean_Meta_hasAssignableLevelMVar(v_u_297_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_298_;
}
case 4:
{
lean_object* v_us_299_; lean_object* v___x_300_; 
v_us_299_ = lean_ctor_get(v_e_266_, 1);
lean_inc(v_us_299_);
lean_dec_ref(v_e_266_);
v___x_300_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_us_299_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_300_;
}
case 5:
{
lean_object* v_fn_301_; lean_object* v_arg_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_fn_301_ = lean_ctor_get(v_e_266_, 0);
lean_inc_ref(v_fn_301_);
v_arg_302_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_arg_302_);
lean_dec_ref(v_e_266_);
v___x_303_ = lean_obj_once(&l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0, &l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_once, _init_l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0);
v___x_304_ = l_Lean_Core_checkSystem(v___x_303_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_305_; 
lean_dec_ref(v___x_304_);
v___x_305_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_fn_301_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; uint8_t v___x_307_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_306_);
v___x_307_ = lean_unbox(v_a_306_);
lean_dec(v_a_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
lean_dec_ref(v___x_305_);
v___x_308_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_arg_302_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_308_;
}
else
{
lean_dec_ref(v_arg_302_);
return v___x_305_;
}
}
else
{
lean_dec_ref(v_arg_302_);
return v___x_305_;
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec_ref(v_arg_302_);
lean_dec_ref(v_fn_301_);
v_a_309_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_304_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_304_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
case 6:
{
lean_object* v_binderType_317_; lean_object* v_body_318_; 
v_binderType_317_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_binderType_317_);
v_body_318_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_body_318_);
lean_dec_ref(v_e_266_);
v_d_274_ = v_binderType_317_;
v_b_275_ = v_body_318_;
v___y_276_ = v_a_267_;
v___y_277_ = v_a_268_;
v___y_278_ = v_a_269_;
v___y_279_ = v_a_270_;
v___y_280_ = v_a_271_;
goto v___jp_273_;
}
case 7:
{
lean_object* v_binderType_319_; lean_object* v_body_320_; 
v_binderType_319_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_binderType_319_);
v_body_320_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_body_320_);
lean_dec_ref(v_e_266_);
v_d_274_ = v_binderType_319_;
v_b_275_ = v_body_320_;
v___y_276_ = v_a_267_;
v___y_277_ = v_a_268_;
v___y_278_ = v_a_269_;
v___y_279_ = v_a_270_;
v___y_280_ = v_a_271_;
goto v___jp_273_;
}
case 8:
{
lean_object* v_type_321_; lean_object* v_value_322_; lean_object* v_body_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_type_321_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_type_321_);
v_value_322_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_value_322_);
v_body_323_ = lean_ctor_get(v_e_266_, 3);
lean_inc_ref(v_body_323_);
lean_dec_ref(v_e_266_);
v___x_324_ = lean_obj_once(&l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0, &l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_once, _init_l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0);
v___x_325_ = l_Lean_Core_checkSystem(v___x_324_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v___x_326_; 
lean_dec_ref(v___x_325_);
v___x_326_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_type_321_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; uint8_t v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
v___x_328_ = lean_unbox(v_a_327_);
lean_dec(v_a_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
lean_dec_ref(v___x_326_);
v___x_329_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_value_322_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; uint8_t v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
v___x_331_ = lean_unbox(v_a_330_);
lean_dec(v_a_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; 
lean_dec_ref(v___x_329_);
v___x_332_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_body_323_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_332_;
}
else
{
lean_dec_ref(v_body_323_);
return v___x_329_;
}
}
else
{
lean_dec_ref(v_body_323_);
return v___x_329_;
}
}
else
{
lean_dec_ref(v_body_323_);
lean_dec_ref(v_value_322_);
return v___x_326_;
}
}
else
{
lean_dec_ref(v_body_323_);
lean_dec_ref(v_value_322_);
return v___x_326_;
}
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec_ref(v_body_323_);
lean_dec_ref(v_value_322_);
lean_dec_ref(v_type_321_);
v_a_333_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_325_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_325_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
case 10:
{
lean_object* v_expr_341_; lean_object* v___x_342_; 
v_expr_341_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_expr_341_);
lean_dec_ref(v_e_266_);
v___x_342_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_expr_341_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_342_;
}
case 11:
{
lean_object* v_struct_343_; lean_object* v___x_344_; 
v_struct_343_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_struct_343_);
lean_dec_ref(v_e_266_);
v___x_344_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_struct_343_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_344_;
}
default: 
{
uint8_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec_ref(v_e_266_);
v___x_345_ = 0;
v___x_346_ = lean_box(v___x_345_);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
v___jp_273_:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_obj_once(&l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0, &l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_once, _init_l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0);
v___x_282_ = l_Lean_Core_checkSystem(v___x_281_, v___y_279_, v___y_280_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_283_; 
lean_dec_ref(v___x_282_);
v___x_283_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_d_274_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; uint8_t v___x_285_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_284_);
v___x_285_ = lean_unbox(v_a_284_);
lean_dec(v_a_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
lean_dec_ref(v___x_283_);
v___x_286_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_b_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
return v___x_286_;
}
else
{
lean_dec_ref(v_b_275_);
return v___x_283_;
}
}
else
{
lean_dec_ref(v_b_275_);
return v___x_283_;
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v_b_275_);
lean_dec_ref(v_d_274_);
v_a_287_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_282_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_282_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(lean_object* v_e_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
uint8_t v___x_355_; 
v___x_355_ = l_Lean_Expr_hasMVar(v_e_348_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec_ref(v_e_348_);
v___x_356_ = lean_box(v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_358_ = lean_st_ref_get(v_a_353_);
lean_dec(v___x_358_);
v___x_359_ = lean_st_ref_get(v_a_349_);
v___x_360_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v___x_359_, v_e_348_);
lean_dec(v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_361_ = lean_st_ref_get(v_a_353_);
lean_dec(v___x_361_);
v___x_362_ = lean_st_ref_take(v_a_349_);
v___x_363_ = lean_box(0);
lean_inc_ref(v_e_348_);
v___x_364_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(v___x_362_, v_e_348_, v___x_363_);
v___x_365_ = lean_st_ref_set(v_a_349_, v___x_364_);
v___x_366_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
return v___x_366_;
}
else
{
uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
lean_dec_ref(v_e_348_);
v___x_367_ = 0;
v___x_368_ = lean_box(v___x_367_);
v___x_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit___boxed(lean_object* v_e_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_e_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___boxed(lean_object* v_e_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
lean_dec(v_a_379_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(lean_object* v_x_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_x_386_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___boxed(lean_object* v_x_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(v_x_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
return v_res_401_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(lean_object* v_00_u03b2_402_, lean_object* v_m_403_, lean_object* v_a_404_){
_start:
{
uint8_t v___x_405_; 
v___x_405_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v_m_403_, v_a_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___boxed(lean_object* v_00_u03b2_406_, lean_object* v_m_407_, lean_object* v_a_408_){
_start:
{
uint8_t v_res_409_; lean_object* v_r_410_; 
v_res_409_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(v_00_u03b2_406_, v_m_407_, v_a_408_);
lean_dec_ref(v_a_408_);
lean_dec_ref(v_m_407_);
v_r_410_ = lean_box(v_res_409_);
return v_r_410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4(lean_object* v_00_u03b2_411_, lean_object* v_m_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(v_m_412_, v_a_413_, v_b_414_);
return v___x_415_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(lean_object* v_00_u03b2_416_, lean_object* v_a_417_, lean_object* v_x_418_){
_start:
{
uint8_t v___x_419_; 
v___x_419_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_417_, v_x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___boxed(lean_object* v_00_u03b2_420_, lean_object* v_a_421_, lean_object* v_x_422_){
_start:
{
uint8_t v_res_423_; lean_object* v_r_424_; 
v_res_423_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(v_00_u03b2_420_, v_a_421_, v_x_422_);
lean_dec(v_x_422_);
lean_dec_ref(v_a_421_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5(lean_object* v_00_u03b2_425_, lean_object* v_data_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(v_data_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_428_, lean_object* v_i_429_, lean_object* v_source_430_, lean_object* v_target_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(v_i_429_, v_source_430_, v_target_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_433_, lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_x_434_, v_x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_Meta_hasAssignableMVar___closed__0(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_437_ = lean_box(0);
v___x_438_ = lean_unsigned_to_nat(16u);
v___x_439_ = lean_mk_array(v___x_438_, v___x_437_);
return v___x_439_;
}
}
static lean_object* _init_l_Lean_Meta_hasAssignableMVar___closed__1(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_440_ = lean_obj_once(&l_Lean_Meta_hasAssignableMVar___closed__0, &l_Lean_Meta_hasAssignableMVar___closed__0_once, _init_l_Lean_Meta_hasAssignableMVar___closed__0);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___x_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar(lean_object* v_e_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
uint8_t v___x_449_; 
v___x_449_ = l_Lean_Expr_hasMVar(v_e_443_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec_ref(v_e_443_);
v___x_450_ = lean_box(v___x_449_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = lean_st_ref_get(v_a_447_);
lean_dec(v___x_452_);
v___x_453_ = lean_obj_once(&l_Lean_Meta_hasAssignableMVar___closed__1, &l_Lean_Meta_hasAssignableMVar___closed__1_once, _init_l_Lean_Meta_hasAssignableMVar___closed__1);
v___x_454_ = lean_st_mk_ref(v___x_453_);
v___x_455_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_443_, v___x_454_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_465_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_465_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_460_ = lean_st_ref_get(v_a_447_);
lean_dec(v___x_460_);
v___x_461_ = lean_st_ref_get(v___x_454_);
lean_dec(v___x_454_);
lean_dec(v___x_461_);
if (v_isShared_459_ == 0)
{
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_456_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_dec(v___x_454_);
return v___x_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar___boxed(lean_object* v_e_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_Meta_hasAssignableMVar(v_e_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_472_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HasAssignableMVar(builtin);
}
#ifdef __cplusplus
}
#endif
