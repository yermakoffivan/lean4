// Lean compiler output
// Module: Lean.Compiler.LCNF.Renaming
// Imports: public import Lean.Compiler.LCNF.CompilerM
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(lean_object* v_t_1_, lean_object* v_k_2_){
_start:
{
if (lean_obj_tag(v_t_1_) == 0)
{
lean_object* v_k_3_; lean_object* v_v_4_; lean_object* v_l_5_; lean_object* v_r_6_; uint8_t v___x_7_; 
v_k_3_ = lean_ctor_get(v_t_1_, 1);
v_v_4_ = lean_ctor_get(v_t_1_, 2);
v_l_5_ = lean_ctor_get(v_t_1_, 3);
v_r_6_ = lean_ctor_get(v_t_1_, 4);
v___x_7_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2_, v_k_3_);
switch(v___x_7_)
{
case 0:
{
v_t_1_ = v_l_5_;
goto _start;
}
case 1:
{
lean_object* v___x_9_; 
lean_inc(v_v_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_v_4_);
return v___x_9_;
}
default: 
{
v_t_1_ = v_r_6_;
goto _start;
}
}
}
else
{
lean_object* v___x_11_; 
v___x_11_ = lean_box(0);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg___boxed(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(v_t_12_, v_k_13_);
lean_dec(v_k_13_);
lean_dec(v_t_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(uint8_t v_pu_15_, lean_object* v_param_16_, lean_object* v_r_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_fvarId_21_; lean_object* v_type_22_; uint8_t v_borrow_23_; lean_object* v___x_24_; 
v_fvarId_21_ = lean_ctor_get(v_param_16_, 0);
v_type_22_ = lean_ctor_get(v_param_16_, 2);
v_borrow_23_ = lean_ctor_get_uint8(v_param_16_, sizeof(void*)*3);
v___x_24_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(v_r_17_, v_fvarId_21_);
if (lean_obj_tag(v___x_24_) == 1)
{
lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_52_; 
lean_inc_ref(v_type_22_);
lean_inc(v_fvarId_21_);
v_isSharedCheck_52_ = !lean_is_exclusive(v_param_16_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; lean_object* v_unused_54_; lean_object* v_unused_55_; 
v_unused_53_ = lean_ctor_get(v_param_16_, 2);
lean_dec(v_unused_53_);
v_unused_54_ = lean_ctor_get(v_param_16_, 1);
lean_dec(v_unused_54_);
v_unused_55_ = lean_ctor_get(v_param_16_, 0);
lean_dec(v_unused_55_);
v___x_26_ = v_param_16_;
v_isShared_27_ = v_isSharedCheck_52_;
goto v_resetjp_25_;
}
else
{
lean_dec(v_param_16_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_52_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v_val_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_51_; 
v_val_28_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_51_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_51_ == 0)
{
v___x_30_ = v___x_24_;
v_isShared_31_ = v_isSharedCheck_51_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_val_28_);
lean_dec(v___x_24_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_51_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v_lctx_34_; lean_object* v_nextIdx_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_50_; 
v___x_32_ = lean_st_ref_get(v_a_19_);
lean_dec(v___x_32_);
v___x_33_ = lean_st_ref_take(v_a_18_);
v_lctx_34_ = lean_ctor_get(v___x_33_, 0);
v_nextIdx_35_ = lean_ctor_get(v___x_33_, 1);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_50_ == 0)
{
v___x_37_ = v___x_33_;
v_isShared_38_ = v_isSharedCheck_50_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_nextIdx_35_);
lean_inc(v_lctx_34_);
lean_dec(v___x_33_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_50_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v_param_40_; 
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 1, v_val_28_);
v_param_40_ = v___x_26_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_fvarId_21_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_val_28_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v_type_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_49_, sizeof(void*)*3, v_borrow_23_);
v_param_40_ = v_reuseFailAlloc_49_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_43_; 
lean_inc_ref(v_param_40_);
v___x_41_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_15_, v_lctx_34_, v_param_40_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v___x_41_);
v___x_43_ = v___x_37_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v_nextIdx_35_);
v___x_43_ = v_reuseFailAlloc_48_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
lean_object* v___x_44_; lean_object* v___x_46_; 
v___x_44_ = lean_st_ref_set(v_a_18_, v___x_43_);
if (v_isShared_31_ == 0)
{
lean_ctor_set_tag(v___x_30_, 0);
lean_ctor_set(v___x_30_, 0, v_param_40_);
v___x_46_ = v___x_30_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_param_40_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_56_; 
lean_dec(v___x_24_);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v_param_16_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg___boxed(lean_object* v_pu_57_, lean_object* v_param_58_, lean_object* v_r_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_pu_boxed_63_; lean_object* v_res_64_; 
v_pu_boxed_63_ = lean_unbox(v_pu_57_);
v_res_64_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_boxed_63_, v_param_58_, v_r_59_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec(v_a_60_);
lean_dec(v_r_59_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming(uint8_t v_pu_65_, lean_object* v_param_66_, lean_object* v_r_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_65_, v_param_66_, v_r_67_, v_a_69_, v_a_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___boxed(lean_object* v_pu_74_, lean_object* v_param_75_, lean_object* v_r_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
uint8_t v_pu_boxed_82_; lean_object* v_res_83_; 
v_pu_boxed_82_ = lean_unbox(v_pu_74_);
v_res_83_ = l_Lean_Compiler_LCNF_Param_applyRenaming(v_pu_boxed_82_, v_param_75_, v_r_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec(v_r_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0(lean_object* v_00_u03b4_84_, lean_object* v_t_85_, lean_object* v_k_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(v_t_85_, v_k_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___boxed(lean_object* v_00_u03b4_88_, lean_object* v_t_89_, lean_object* v_k_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0(v_00_u03b4_88_, v_t_89_, v_k_90_);
lean_dec(v_k_90_);
lean_dec(v_t_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(uint8_t v_pu_92_, lean_object* v_decl_93_, lean_object* v_r_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_fvarId_98_; lean_object* v_type_99_; lean_object* v_value_100_; lean_object* v___x_101_; 
v_fvarId_98_ = lean_ctor_get(v_decl_93_, 0);
v_type_99_ = lean_ctor_get(v_decl_93_, 2);
v_value_100_ = lean_ctor_get(v_decl_93_, 3);
v___x_101_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(v_r_94_, v_fvarId_98_);
if (lean_obj_tag(v___x_101_) == 1)
{
lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_129_; 
lean_inc(v_value_100_);
lean_inc_ref(v_type_99_);
lean_inc(v_fvarId_98_);
v_isSharedCheck_129_ = !lean_is_exclusive(v_decl_93_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; lean_object* v_unused_131_; lean_object* v_unused_132_; lean_object* v_unused_133_; 
v_unused_130_ = lean_ctor_get(v_decl_93_, 3);
lean_dec(v_unused_130_);
v_unused_131_ = lean_ctor_get(v_decl_93_, 2);
lean_dec(v_unused_131_);
v_unused_132_ = lean_ctor_get(v_decl_93_, 1);
lean_dec(v_unused_132_);
v_unused_133_ = lean_ctor_get(v_decl_93_, 0);
lean_dec(v_unused_133_);
v___x_103_ = v_decl_93_;
v_isShared_104_ = v_isSharedCheck_129_;
goto v_resetjp_102_;
}
else
{
lean_dec(v_decl_93_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_129_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_val_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_128_; 
v_val_105_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_128_ == 0)
{
v___x_107_ = v___x_101_;
v_isShared_108_ = v_isSharedCheck_128_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_val_105_);
lean_dec(v___x_101_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_128_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v_lctx_111_; lean_object* v_nextIdx_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_127_; 
v___x_109_ = lean_st_ref_get(v_a_96_);
lean_dec(v___x_109_);
v___x_110_ = lean_st_ref_take(v_a_95_);
v_lctx_111_ = lean_ctor_get(v___x_110_, 0);
v_nextIdx_112_ = lean_ctor_get(v___x_110_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_127_ == 0)
{
v___x_114_ = v___x_110_;
v_isShared_115_ = v_isSharedCheck_127_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_nextIdx_112_);
lean_inc(v_lctx_111_);
lean_dec(v___x_110_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_127_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v_decl_117_; 
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v_val_105_);
v_decl_117_ = v___x_103_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_fvarId_98_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_val_105_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v_type_99_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v_value_100_);
v_decl_117_ = v_reuseFailAlloc_126_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_120_; 
lean_inc_ref(v_decl_117_);
v___x_118_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_92_, v_lctx_111_, v_decl_117_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_118_);
v___x_120_ = v___x_114_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v_nextIdx_112_);
v___x_120_ = v_reuseFailAlloc_125_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_st_ref_set(v_a_95_, v___x_120_);
if (v_isShared_108_ == 0)
{
lean_ctor_set_tag(v___x_107_, 0);
lean_ctor_set(v___x_107_, 0, v_decl_117_);
v___x_123_ = v___x_107_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_decl_117_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_134_; 
lean_dec(v___x_101_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v_decl_93_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg___boxed(lean_object* v_pu_135_, lean_object* v_decl_136_, lean_object* v_r_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
uint8_t v_pu_boxed_141_; lean_object* v_res_142_; 
v_pu_boxed_141_ = lean_unbox(v_pu_135_);
v_res_142_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_boxed_141_, v_decl_136_, v_r_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec(v_a_138_);
lean_dec(v_r_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming(uint8_t v_pu_143_, lean_object* v_decl_144_, lean_object* v_r_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_143_, v_decl_144_, v_r_145_, v_a_147_, v_a_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___boxed(lean_object* v_pu_152_, lean_object* v_decl_153_, lean_object* v_r_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
uint8_t v_pu_boxed_160_; lean_object* v_res_161_; 
v_pu_boxed_160_ = lean_unbox(v_pu_152_);
v_res_161_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming(v_pu_boxed_160_, v_decl_153_, v_r_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_r_154_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(uint8_t v_pu_162_, lean_object* v_r_163_, lean_object* v_i_164_, lean_object* v_as_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_array_get_size(v_as_165_);
v___x_170_ = lean_nat_dec_lt(v_i_164_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_dec(v_i_164_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v_as_165_);
return v___x_171_;
}
else
{
lean_object* v_a_172_; lean_object* v___x_173_; 
v_a_172_ = lean_array_fget_borrowed(v_as_165_, v_i_164_);
lean_inc(v_a_172_);
v___x_173_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_162_, v_a_172_, v_r_163_, v___y_166_, v___y_167_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; size_t v___x_175_; size_t v___x_176_; uint8_t v___x_177_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref(v___x_173_);
v___x_175_ = lean_ptr_addr(v_a_172_);
v___x_176_ = lean_ptr_addr(v_a_174_);
v___x_177_ = lean_usize_dec_eq(v___x_175_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_i_164_, v___x_178_);
v___x_180_ = lean_array_fset(v_as_165_, v_i_164_, v_a_174_);
lean_dec(v_i_164_);
v_i_164_ = v___x_179_;
v_as_165_ = v___x_180_;
goto _start;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec(v_a_174_);
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_nat_add(v_i_164_, v___x_182_);
lean_dec(v_i_164_);
v_i_164_ = v___x_183_;
goto _start;
}
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
lean_dec_ref(v_as_165_);
lean_dec(v_i_164_);
v_a_185_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_173_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_173_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg___boxed(lean_object* v_pu_193_, lean_object* v_r_194_, lean_object* v_i_195_, lean_object* v_as_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
uint8_t v_pu_boxed_200_; lean_object* v_res_201_; 
v_pu_boxed_200_ = lean_unbox(v_pu_193_);
v_res_201_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_boxed_200_, v_r_194_, v_i_195_, v_as_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec(v___y_197_);
lean_dec(v_r_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(uint8_t v_pu_202_, lean_object* v_r_203_, lean_object* v_i_204_, lean_object* v_as_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_211_ = lean_array_get_size(v_as_205_);
v___x_212_ = lean_nat_dec_lt(v_i_204_, v___x_211_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; 
lean_dec(v_i_204_);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v_as_205_);
return v___x_213_;
}
else
{
lean_object* v_a_214_; lean_object* v_a_216_; 
v_a_214_ = lean_array_fget_borrowed(v_as_205_, v_i_204_);
switch(lean_obj_tag(v_a_214_))
{
case 0:
{
lean_object* v_params_227_; lean_object* v_code_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_params_227_ = lean_ctor_get(v_a_214_, 1);
v_code_228_ = lean_ctor_get(v_a_214_, 2);
v___x_229_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_params_227_);
v___x_230_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_202_, v_r_203_, v___x_229_, v_params_227_, v___y_207_, v___y_209_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_232_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref(v___x_230_);
lean_inc_ref(v_code_228_);
v___x_232_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_202_, v_code_228_, v_r_203_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref(v___x_232_);
lean_inc_ref(v_a_214_);
v___x_234_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v_pu_202_, v_a_214_, v_a_231_, v_a_233_);
v_a_216_ = v___x_234_;
goto v___jp_215_;
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec(v_a_231_);
lean_dec_ref(v_as_205_);
lean_dec(v_i_204_);
v_a_235_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_232_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_232_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_as_205_);
lean_dec(v_i_204_);
v_a_243_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_230_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_230_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
case 1:
{
lean_object* v_code_251_; lean_object* v___x_252_; 
v_code_251_ = lean_ctor_get(v_a_214_, 1);
lean_inc_ref(v_code_251_);
v___x_252_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_202_, v_code_251_, v_r_203_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_254_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref(v___x_252_);
lean_inc_ref(v_a_214_);
v___x_254_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_214_, v_a_253_);
v_a_216_ = v___x_254_;
goto v___jp_215_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_as_205_);
lean_dec(v_i_204_);
v_a_255_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_252_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_252_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
default: 
{
lean_object* v_code_263_; lean_object* v___x_264_; 
v_code_263_ = lean_ctor_get(v_a_214_, 0);
lean_inc_ref(v_code_263_);
v___x_264_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_202_, v_code_263_, v_r_203_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_266_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_265_);
lean_dec_ref(v___x_264_);
lean_inc_ref(v_a_214_);
v___x_266_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_214_, v_a_265_);
v_a_216_ = v___x_266_;
goto v___jp_215_;
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v_as_205_);
lean_dec(v_i_204_);
v_a_267_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_264_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_264_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
v___jp_215_:
{
size_t v___x_217_; size_t v___x_218_; uint8_t v___x_219_; 
v___x_217_ = lean_ptr_addr(v_a_214_);
v___x_218_ = lean_ptr_addr(v_a_216_);
v___x_219_ = lean_usize_dec_eq(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = lean_nat_add(v_i_204_, v___x_220_);
v___x_222_ = lean_array_fset(v_as_205_, v_i_204_, v_a_216_);
lean_dec(v_i_204_);
v_i_204_ = v___x_221_;
v_as_205_ = v___x_222_;
goto _start;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec_ref(v_a_216_);
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = lean_nat_add(v_i_204_, v___x_224_);
lean_dec(v_i_204_);
v_i_204_ = v___x_225_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming(uint8_t v_pu_275_, lean_object* v_code_276_, lean_object* v_r_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
switch(lean_obj_tag(v_code_276_))
{
case 0:
{
lean_object* v_decl_283_; lean_object* v_k_284_; lean_object* v___x_285_; 
v_decl_283_ = lean_ctor_get(v_code_276_, 0);
v_k_284_ = lean_ctor_get(v_code_276_, 1);
lean_inc_ref(v_decl_283_);
v___x_285_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_275_, v_decl_283_, v_r_277_, v_a_279_, v_a_281_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_287_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref(v___x_285_);
lean_inc_ref(v_k_284_);
v___x_287_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_284_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_315_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_315_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_315_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_315_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
uint8_t v___y_293_; size_t v___x_309_; size_t v___x_310_; uint8_t v___x_311_; 
v___x_309_ = lean_ptr_addr(v_k_284_);
v___x_310_ = lean_ptr_addr(v_a_288_);
v___x_311_ = lean_usize_dec_eq(v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
v___y_293_ = v___x_311_;
goto v___jp_292_;
}
else
{
size_t v___x_312_; size_t v___x_313_; uint8_t v___x_314_; 
v___x_312_ = lean_ptr_addr(v_decl_283_);
v___x_313_ = lean_ptr_addr(v_a_286_);
v___x_314_ = lean_usize_dec_eq(v___x_312_, v___x_313_);
v___y_293_ = v___x_314_;
goto v___jp_292_;
}
v___jp_292_:
{
if (v___y_293_ == 0)
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_303_; 
v_isSharedCheck_303_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_303_ == 0)
{
lean_object* v_unused_304_; lean_object* v_unused_305_; 
v_unused_304_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_305_);
v___x_295_ = v_code_276_;
v_isShared_296_ = v_isSharedCheck_303_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_code_276_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_303_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 1, v_a_288_);
lean_ctor_set(v___x_295_, 0, v_a_286_);
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_286_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_a_288_);
v___x_298_ = v_reuseFailAlloc_302_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_300_; 
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_298_);
v___x_300_ = v___x_290_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
else
{
lean_object* v___x_307_; 
lean_dec(v_a_288_);
lean_dec(v_a_286_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v_code_276_);
v___x_307_ = v___x_290_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_code_276_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
else
{
lean_dec(v_a_286_);
lean_dec_ref(v_code_276_);
return v___x_287_;
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec_ref(v_code_276_);
v_a_316_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_285_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_285_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
case 1:
{
lean_object* v_decl_324_; lean_object* v_k_325_; lean_object* v___x_326_; 
v_decl_324_ = lean_ctor_get(v_code_276_, 0);
v_k_325_ = lean_ctor_get(v_code_276_, 1);
lean_inc_ref(v_decl_324_);
v___x_326_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_275_, v_decl_324_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref(v___x_326_);
lean_inc_ref(v_k_325_);
v___x_328_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_325_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_356_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_356_ == 0)
{
v___x_331_ = v___x_328_;
v_isShared_332_ = v_isSharedCheck_356_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_328_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_356_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___y_334_; size_t v___x_350_; size_t v___x_351_; uint8_t v___x_352_; 
v___x_350_ = lean_ptr_addr(v_k_325_);
v___x_351_ = lean_ptr_addr(v_a_329_);
v___x_352_ = lean_usize_dec_eq(v___x_350_, v___x_351_);
if (v___x_352_ == 0)
{
v___y_334_ = v___x_352_;
goto v___jp_333_;
}
else
{
size_t v___x_353_; size_t v___x_354_; uint8_t v___x_355_; 
v___x_353_ = lean_ptr_addr(v_decl_324_);
v___x_354_ = lean_ptr_addr(v_a_327_);
v___x_355_ = lean_usize_dec_eq(v___x_353_, v___x_354_);
v___y_334_ = v___x_355_;
goto v___jp_333_;
}
v___jp_333_:
{
if (v___y_334_ == 0)
{
lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_344_; 
v_isSharedCheck_344_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; lean_object* v_unused_346_; 
v_unused_345_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_346_);
v___x_336_ = v_code_276_;
v_isShared_337_ = v_isSharedCheck_344_;
goto v_resetjp_335_;
}
else
{
lean_dec(v_code_276_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_344_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 1, v_a_329_);
lean_ctor_set(v___x_336_, 0, v_a_327_);
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_327_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_a_329_);
v___x_339_ = v_reuseFailAlloc_343_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_341_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_339_);
v___x_341_ = v___x_331_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v___x_348_; 
lean_dec(v_a_329_);
lean_dec(v_a_327_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v_code_276_);
v___x_348_ = v___x_331_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_code_276_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
else
{
lean_dec(v_a_327_);
lean_dec_ref(v_code_276_);
return v___x_328_;
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref(v_code_276_);
v_a_357_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_326_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_326_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
case 2:
{
lean_object* v_decl_365_; lean_object* v_k_366_; lean_object* v___x_367_; 
v_decl_365_ = lean_ctor_get(v_code_276_, 0);
v_k_366_ = lean_ctor_get(v_code_276_, 1);
lean_inc_ref(v_decl_365_);
v___x_367_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_275_, v_decl_365_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_369_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref(v___x_367_);
lean_inc_ref(v_k_366_);
v___x_369_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_366_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_397_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_397_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_397_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_397_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
uint8_t v___y_375_; size_t v___x_391_; size_t v___x_392_; uint8_t v___x_393_; 
v___x_391_ = lean_ptr_addr(v_k_366_);
v___x_392_ = lean_ptr_addr(v_a_370_);
v___x_393_ = lean_usize_dec_eq(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
v___y_375_ = v___x_393_;
goto v___jp_374_;
}
else
{
size_t v___x_394_; size_t v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_ptr_addr(v_decl_365_);
v___x_395_ = lean_ptr_addr(v_a_368_);
v___x_396_ = lean_usize_dec_eq(v___x_394_, v___x_395_);
v___y_375_ = v___x_396_;
goto v___jp_374_;
}
v___jp_374_:
{
if (v___y_375_ == 0)
{
lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_385_; 
v_isSharedCheck_385_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; lean_object* v_unused_387_; 
v_unused_386_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_386_);
v_unused_387_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_387_);
v___x_377_ = v_code_276_;
v_isShared_378_ = v_isSharedCheck_385_;
goto v_resetjp_376_;
}
else
{
lean_dec(v_code_276_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_385_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_a_370_);
lean_ctor_set(v___x_377_, 0, v_a_368_);
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_368_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_a_370_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_382_; 
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_380_);
v___x_382_ = v___x_372_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
else
{
lean_object* v___x_389_; 
lean_dec(v_a_370_);
lean_dec(v_a_368_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v_code_276_);
v___x_389_ = v___x_372_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_code_276_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
else
{
lean_dec(v_a_368_);
lean_dec_ref(v_code_276_);
return v___x_369_;
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec_ref(v_code_276_);
v_a_398_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_367_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_367_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
case 4:
{
lean_object* v_cases_406_; lean_object* v_typeName_407_; lean_object* v_resultType_408_; lean_object* v_discr_409_; lean_object* v_alts_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_449_; 
v_cases_406_ = lean_ctor_get(v_code_276_, 0);
lean_inc_ref(v_cases_406_);
v_typeName_407_ = lean_ctor_get(v_cases_406_, 0);
v_resultType_408_ = lean_ctor_get(v_cases_406_, 1);
v_discr_409_ = lean_ctor_get(v_cases_406_, 2);
v_alts_410_ = lean_ctor_get(v_cases_406_, 3);
v_isSharedCheck_449_ = !lean_is_exclusive(v_cases_406_);
if (v_isSharedCheck_449_ == 0)
{
v___x_412_ = v_cases_406_;
v_isShared_413_ = v_isSharedCheck_449_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_alts_410_);
lean_inc(v_discr_409_);
lean_inc(v_resultType_408_);
lean_inc(v_typeName_407_);
lean_dec(v_cases_406_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_449_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_410_);
v___x_415_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(v_pu_275_, v_r_277_, v___x_414_, v_alts_410_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_440_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_440_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
size_t v___x_420_; size_t v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lean_ptr_addr(v_alts_410_);
lean_dec_ref(v_alts_410_);
v___x_421_ = lean_ptr_addr(v_a_416_);
v___x_422_ = lean_usize_dec_eq(v___x_420_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_435_; 
v_isSharedCheck_435_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_435_ == 0)
{
lean_object* v_unused_436_; 
v_unused_436_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_436_);
v___x_424_ = v_code_276_;
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
else
{
lean_dec(v_code_276_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 3, v_a_416_);
v___x_427_ = v___x_412_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_typeName_407_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_resultType_408_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_discr_409_);
lean_ctor_set(v_reuseFailAlloc_434_, 3, v_a_416_);
v___x_427_ = v_reuseFailAlloc_434_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_427_);
v___x_429_ = v___x_424_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_433_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_431_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_429_);
v___x_431_ = v___x_418_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
}
else
{
lean_object* v___x_438_; 
lean_dec(v_a_416_);
lean_del_object(v___x_412_);
lean_dec(v_discr_409_);
lean_dec_ref(v_resultType_408_);
lean_dec(v_typeName_407_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v_code_276_);
v___x_438_ = v___x_418_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_code_276_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_del_object(v___x_412_);
lean_dec_ref(v_alts_410_);
lean_dec(v_discr_409_);
lean_dec_ref(v_resultType_408_);
lean_dec(v_typeName_407_);
lean_dec_ref(v_code_276_);
v_a_441_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_415_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_415_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_450_; lean_object* v_i_451_; lean_object* v_y_452_; lean_object* v_k_453_; lean_object* v___x_454_; 
v_fvarId_450_ = lean_ctor_get(v_code_276_, 0);
v_i_451_ = lean_ctor_get(v_code_276_, 1);
v_y_452_ = lean_ctor_get(v_code_276_, 2);
v_k_453_ = lean_ctor_get(v_code_276_, 3);
lean_inc_ref(v_k_453_);
v___x_454_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_453_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_479_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_479_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_479_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_479_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
size_t v___x_459_; size_t v___x_460_; uint8_t v___x_461_; 
v___x_459_ = lean_ptr_addr(v_k_453_);
v___x_460_ = lean_ptr_addr(v_a_455_);
v___x_461_ = lean_usize_dec_eq(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_471_; 
lean_inc(v_y_452_);
lean_inc(v_i_451_);
lean_inc(v_fvarId_450_);
v_isSharedCheck_471_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; 
v_unused_472_ = lean_ctor_get(v_code_276_, 3);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_475_);
v___x_463_ = v_code_276_;
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
else
{
lean_dec(v_code_276_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 3, v_a_455_);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_fvarId_450_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_i_451_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_y_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 3, v_a_455_);
v___x_466_ = v_reuseFailAlloc_470_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_466_);
v___x_468_ = v___x_457_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v___x_477_; 
lean_dec(v_a_455_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_code_276_);
v___x_477_ = v___x_457_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_code_276_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_454_;
}
}
case 8:
{
lean_object* v_fvarId_480_; lean_object* v_i_481_; lean_object* v_y_482_; lean_object* v_k_483_; lean_object* v___x_484_; 
v_fvarId_480_ = lean_ctor_get(v_code_276_, 0);
v_i_481_ = lean_ctor_get(v_code_276_, 1);
v_y_482_ = lean_ctor_get(v_code_276_, 2);
v_k_483_ = lean_ctor_get(v_code_276_, 3);
lean_inc_ref(v_k_483_);
v___x_484_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_483_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_509_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_509_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
size_t v___x_489_; size_t v___x_490_; uint8_t v___x_491_; 
v___x_489_ = lean_ptr_addr(v_k_483_);
v___x_490_ = lean_ptr_addr(v_a_485_);
v___x_491_ = lean_usize_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_501_; 
lean_inc(v_y_482_);
lean_inc(v_i_481_);
lean_inc(v_fvarId_480_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; lean_object* v_unused_504_; lean_object* v_unused_505_; 
v_unused_502_ = lean_ctor_get(v_code_276_, 3);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_504_);
v_unused_505_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_505_);
v___x_493_ = v_code_276_;
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
else
{
lean_dec(v_code_276_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 3, v_a_485_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_fvarId_480_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_i_481_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_y_482_);
lean_ctor_set(v_reuseFailAlloc_500_, 3, v_a_485_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_496_);
v___x_498_ = v___x_487_;
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
lean_object* v___x_507_; 
lean_dec(v_a_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_code_276_);
v___x_507_ = v___x_487_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_code_276_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_484_;
}
}
case 9:
{
lean_object* v_fvarId_510_; lean_object* v_i_511_; lean_object* v_offset_512_; lean_object* v_y_513_; lean_object* v_ty_514_; lean_object* v_k_515_; lean_object* v___x_516_; 
v_fvarId_510_ = lean_ctor_get(v_code_276_, 0);
v_i_511_ = lean_ctor_get(v_code_276_, 1);
v_offset_512_ = lean_ctor_get(v_code_276_, 2);
v_y_513_ = lean_ctor_get(v_code_276_, 3);
v_ty_514_ = lean_ctor_get(v_code_276_, 4);
v_k_515_ = lean_ctor_get(v_code_276_, 5);
lean_inc_ref(v_k_515_);
v___x_516_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_515_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_543_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_543_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_543_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_543_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
size_t v___x_521_; size_t v___x_522_; uint8_t v___x_523_; 
v___x_521_ = lean_ptr_addr(v_k_515_);
v___x_522_ = lean_ptr_addr(v_a_517_);
v___x_523_ = lean_usize_dec_eq(v___x_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_533_; 
lean_inc_ref(v_ty_514_);
lean_inc(v_y_513_);
lean_inc(v_offset_512_);
lean_inc(v_i_511_);
lean_inc(v_fvarId_510_);
v_isSharedCheck_533_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; lean_object* v_unused_535_; lean_object* v_unused_536_; lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; 
v_unused_534_ = lean_ctor_get(v_code_276_, 5);
lean_dec(v_unused_534_);
v_unused_535_ = lean_ctor_get(v_code_276_, 4);
lean_dec(v_unused_535_);
v_unused_536_ = lean_ctor_get(v_code_276_, 3);
lean_dec(v_unused_536_);
v_unused_537_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_539_);
v___x_525_ = v_code_276_;
v_isShared_526_ = v_isSharedCheck_533_;
goto v_resetjp_524_;
}
else
{
lean_dec(v_code_276_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_533_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 5, v_a_517_);
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_fvarId_510_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_i_511_);
lean_ctor_set(v_reuseFailAlloc_532_, 2, v_offset_512_);
lean_ctor_set(v_reuseFailAlloc_532_, 3, v_y_513_);
lean_ctor_set(v_reuseFailAlloc_532_, 4, v_ty_514_);
lean_ctor_set(v_reuseFailAlloc_532_, 5, v_a_517_);
v___x_528_ = v_reuseFailAlloc_532_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_530_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_528_);
v___x_530_ = v___x_519_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
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
else
{
lean_object* v___x_541_; 
lean_dec(v_a_517_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v_code_276_);
v___x_541_ = v___x_519_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_code_276_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_516_;
}
}
case 10:
{
lean_object* v_fvarId_544_; lean_object* v_cidx_545_; lean_object* v_k_546_; lean_object* v___x_547_; 
v_fvarId_544_ = lean_ctor_get(v_code_276_, 0);
v_cidx_545_ = lean_ctor_get(v_code_276_, 1);
v_k_546_ = lean_ctor_get(v_code_276_, 2);
lean_inc_ref(v_k_546_);
v___x_547_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_546_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_571_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_571_ == 0)
{
v___x_550_ = v___x_547_;
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_547_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
size_t v___x_552_; size_t v___x_553_; uint8_t v___x_554_; 
v___x_552_ = lean_ptr_addr(v_k_546_);
v___x_553_ = lean_ptr_addr(v_a_548_);
v___x_554_ = lean_usize_dec_eq(v___x_552_, v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_564_; 
lean_inc(v_cidx_545_);
lean_inc(v_fvarId_544_);
v_isSharedCheck_564_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; lean_object* v_unused_566_; lean_object* v_unused_567_; 
v_unused_565_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_566_);
v_unused_567_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_567_);
v___x_556_ = v_code_276_;
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_code_276_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 2, v_a_548_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_fvarId_544_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_cidx_545_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_a_548_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v___x_559_);
v___x_561_ = v___x_550_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
else
{
lean_object* v___x_569_; 
lean_dec(v_a_548_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_code_276_);
v___x_569_ = v___x_550_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_code_276_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_547_;
}
}
case 11:
{
lean_object* v_fvarId_572_; lean_object* v_n_573_; uint8_t v_check_574_; uint8_t v_persistent_575_; lean_object* v_k_576_; lean_object* v___x_577_; 
v_fvarId_572_ = lean_ctor_get(v_code_276_, 0);
v_n_573_ = lean_ctor_get(v_code_276_, 1);
v_check_574_ = lean_ctor_get_uint8(v_code_276_, sizeof(void*)*3);
v_persistent_575_ = lean_ctor_get_uint8(v_code_276_, sizeof(void*)*3 + 1);
v_k_576_ = lean_ctor_get(v_code_276_, 2);
lean_inc_ref(v_k_576_);
v___x_577_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_576_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_601_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_601_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_601_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_601_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
size_t v___x_582_; size_t v___x_583_; uint8_t v___x_584_; 
v___x_582_ = lean_ptr_addr(v_k_576_);
v___x_583_ = lean_ptr_addr(v_a_578_);
v___x_584_ = lean_usize_dec_eq(v___x_582_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_594_; 
lean_inc(v_n_573_);
lean_inc(v_fvarId_572_);
v_isSharedCheck_594_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_594_ == 0)
{
lean_object* v_unused_595_; lean_object* v_unused_596_; lean_object* v_unused_597_; 
v_unused_595_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_595_);
v_unused_596_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_596_);
v_unused_597_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_597_);
v___x_586_ = v_code_276_;
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
else
{
lean_dec(v_code_276_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 2, v_a_578_);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_fvarId_572_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v_n_573_);
lean_ctor_set(v_reuseFailAlloc_593_, 2, v_a_578_);
lean_ctor_set_uint8(v_reuseFailAlloc_593_, sizeof(void*)*3, v_check_574_);
lean_ctor_set_uint8(v_reuseFailAlloc_593_, sizeof(void*)*3 + 1, v_persistent_575_);
v___x_589_ = v_reuseFailAlloc_593_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_591_; 
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_589_);
v___x_591_ = v___x_580_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
else
{
lean_object* v___x_599_; 
lean_dec(v_a_578_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v_code_276_);
v___x_599_ = v___x_580_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_code_276_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_577_;
}
}
case 12:
{
lean_object* v_fvarId_602_; lean_object* v_n_603_; uint8_t v_check_604_; uint8_t v_persistent_605_; lean_object* v_k_606_; lean_object* v___x_607_; 
v_fvarId_602_ = lean_ctor_get(v_code_276_, 0);
v_n_603_ = lean_ctor_get(v_code_276_, 1);
v_check_604_ = lean_ctor_get_uint8(v_code_276_, sizeof(void*)*3);
v_persistent_605_ = lean_ctor_get_uint8(v_code_276_, sizeof(void*)*3 + 1);
v_k_606_ = lean_ctor_get(v_code_276_, 2);
lean_inc_ref(v_k_606_);
v___x_607_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_606_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_631_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_631_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_631_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_631_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
size_t v___x_612_; size_t v___x_613_; uint8_t v___x_614_; 
v___x_612_ = lean_ptr_addr(v_k_606_);
v___x_613_ = lean_ptr_addr(v_a_608_);
v___x_614_ = lean_usize_dec_eq(v___x_612_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_624_; 
lean_inc(v_n_603_);
lean_inc(v_fvarId_602_);
v_isSharedCheck_624_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; lean_object* v_unused_626_; lean_object* v_unused_627_; 
v_unused_625_ = lean_ctor_get(v_code_276_, 2);
lean_dec(v_unused_625_);
v_unused_626_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_626_);
v_unused_627_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_627_);
v___x_616_ = v_code_276_;
v_isShared_617_ = v_isSharedCheck_624_;
goto v_resetjp_615_;
}
else
{
lean_dec(v_code_276_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_624_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 2, v_a_608_);
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_fvarId_602_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_n_603_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_a_608_);
lean_ctor_set_uint8(v_reuseFailAlloc_623_, sizeof(void*)*3, v_check_604_);
lean_ctor_set_uint8(v_reuseFailAlloc_623_, sizeof(void*)*3 + 1, v_persistent_605_);
v___x_619_ = v_reuseFailAlloc_623_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_621_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_619_);
v___x_621_ = v___x_610_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v___x_629_; 
lean_dec(v_a_608_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v_code_276_);
v___x_629_ = v___x_610_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_code_276_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_607_;
}
}
case 13:
{
lean_object* v_fvarId_632_; lean_object* v_k_633_; lean_object* v___x_634_; 
v_fvarId_632_ = lean_ctor_get(v_code_276_, 0);
v_k_633_ = lean_ctor_get(v_code_276_, 1);
lean_inc_ref(v_k_633_);
v___x_634_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_275_, v_k_633_, v_r_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_657_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_657_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_657_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_657_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
size_t v___x_639_; size_t v___x_640_; uint8_t v___x_641_; 
v___x_639_ = lean_ptr_addr(v_k_633_);
v___x_640_ = lean_ptr_addr(v_a_635_);
v___x_641_ = lean_usize_dec_eq(v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_651_; 
lean_inc(v_fvarId_632_);
v_isSharedCheck_651_ = !lean_is_exclusive(v_code_276_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; lean_object* v_unused_653_; 
v_unused_652_ = lean_ctor_get(v_code_276_, 1);
lean_dec(v_unused_652_);
v_unused_653_ = lean_ctor_get(v_code_276_, 0);
lean_dec(v_unused_653_);
v___x_643_ = v_code_276_;
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
else
{
lean_dec(v_code_276_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_651_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 1, v_a_635_);
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_fvarId_632_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_a_635_);
v___x_646_ = v_reuseFailAlloc_650_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v___x_646_);
v___x_648_ = v___x_637_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
else
{
lean_object* v___x_655_; 
lean_dec(v_a_635_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v_code_276_);
v___x_655_ = v___x_637_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_code_276_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
else
{
lean_dec_ref(v_code_276_);
return v___x_634_;
}
}
default: 
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v_code_276_);
return v___x_658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming(uint8_t v_pu_659_, lean_object* v_decl_660_, lean_object* v_r_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_fvarId_667_; lean_object* v_params_668_; lean_object* v_type_669_; lean_object* v_value_670_; lean_object* v___x_671_; 
v_fvarId_667_ = lean_ctor_get(v_decl_660_, 0);
v_params_668_ = lean_ctor_get(v_decl_660_, 2);
lean_inc_ref(v_params_668_);
v_type_669_ = lean_ctor_get(v_decl_660_, 3);
lean_inc_ref(v_type_669_);
v_value_670_ = lean_ctor_get(v_decl_660_, 4);
v___x_671_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_Param_applyRenaming_spec__0___redArg(v_r_661_, v_fvarId_667_);
if (lean_obj_tag(v___x_671_) == 1)
{
lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_703_; 
lean_inc_ref(v_value_670_);
lean_inc(v_fvarId_667_);
v_isSharedCheck_703_ = !lean_is_exclusive(v_decl_660_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; lean_object* v_unused_705_; lean_object* v_unused_706_; lean_object* v_unused_707_; lean_object* v_unused_708_; 
v_unused_704_ = lean_ctor_get(v_decl_660_, 4);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v_decl_660_, 3);
lean_dec(v_unused_705_);
v_unused_706_ = lean_ctor_get(v_decl_660_, 2);
lean_dec(v_unused_706_);
v_unused_707_ = lean_ctor_get(v_decl_660_, 1);
lean_dec(v_unused_707_);
v_unused_708_ = lean_ctor_get(v_decl_660_, 0);
lean_dec(v_unused_708_);
v___x_673_ = v_decl_660_;
v_isShared_674_ = v_isSharedCheck_703_;
goto v_resetjp_672_;
}
else
{
lean_dec(v_decl_660_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_703_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v_val_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v_lctx_678_; lean_object* v_nextIdx_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_702_; 
v_val_675_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_val_675_);
lean_dec_ref(v___x_671_);
v___x_676_ = lean_st_ref_get(v_a_665_);
lean_dec(v___x_676_);
v___x_677_ = lean_st_ref_take(v_a_663_);
v_lctx_678_ = lean_ctor_get(v___x_677_, 0);
v_nextIdx_679_ = lean_ctor_get(v___x_677_, 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_702_ == 0)
{
v___x_681_ = v___x_677_;
v_isShared_682_ = v_isSharedCheck_702_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_nextIdx_679_);
lean_inc(v_lctx_678_);
lean_dec(v___x_677_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_702_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_decl_684_; 
lean_inc_ref(v_value_670_);
lean_inc_ref(v_type_669_);
lean_inc_ref(v_params_668_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v_val_675_);
v_decl_684_ = v___x_673_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_fvarId_667_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_val_675_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v_params_668_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v_type_669_);
lean_ctor_set(v_reuseFailAlloc_701_, 4, v_value_670_);
v_decl_684_ = v_reuseFailAlloc_701_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; lean_object* v___x_687_; 
lean_inc_ref(v_decl_684_);
v___x_685_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_659_, v_lctx_678_, v_decl_684_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_685_);
v___x_687_ = v___x_681_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_nextIdx_679_);
v___x_687_ = v_reuseFailAlloc_700_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_st_ref_set(v_a_663_, v___x_687_);
v___x_689_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_659_, v_value_670_, v_r_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_691_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref(v___x_689_);
v___x_691_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_659_, v_decl_684_, v_type_669_, v_params_668_, v_a_690_, v_a_663_, v_a_665_);
return v___x_691_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v_decl_684_);
lean_dec_ref(v_type_669_);
lean_dec_ref(v_params_668_);
v_a_692_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_689_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_689_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_709_; 
lean_dec(v___x_671_);
lean_inc_ref(v_value_670_);
v___x_709_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_659_, v_value_670_, v_r_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_711_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref(v___x_709_);
v___x_711_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_659_, v_decl_660_, v_type_669_, v_params_668_, v_a_710_, v_a_663_, v_a_665_);
return v___x_711_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v_type_669_);
lean_dec_ref(v_params_668_);
lean_dec_ref(v_decl_660_);
v_a_712_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_709_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_709_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming___boxed(lean_object* v_pu_720_, lean_object* v_decl_721_, lean_object* v_r_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
uint8_t v_pu_boxed_728_; lean_object* v_res_729_; 
v_pu_boxed_728_ = lean_unbox(v_pu_720_);
v_res_729_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_boxed_728_, v_decl_721_, v_r_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
lean_dec(v_a_726_);
lean_dec_ref(v_a_725_);
lean_dec(v_a_724_);
lean_dec_ref(v_a_723_);
lean_dec(v_r_722_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2___boxed(lean_object* v_pu_730_, lean_object* v_r_731_, lean_object* v_i_732_, lean_object* v_as_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
uint8_t v_pu_boxed_739_; lean_object* v_res_740_; 
v_pu_boxed_739_ = lean_unbox(v_pu_730_);
v_res_740_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(v_pu_boxed_739_, v_r_731_, v_i_732_, v_as_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v_r_731_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming___boxed(lean_object* v_pu_741_, lean_object* v_code_742_, lean_object* v_r_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
uint8_t v_pu_boxed_749_; lean_object* v_res_750_; 
v_pu_boxed_749_ = lean_unbox(v_pu_741_);
v_res_750_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_boxed_749_, v_code_742_, v_r_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
lean_dec(v_r_743_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(uint8_t v_pu_751_, lean_object* v_r_752_, lean_object* v_i_753_, lean_object* v_as_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_751_, v_r_752_, v_i_753_, v_as_754_, v___y_756_, v___y_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___boxed(lean_object* v_pu_761_, lean_object* v_r_762_, lean_object* v_i_763_, lean_object* v_as_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
uint8_t v_pu_boxed_770_; lean_object* v_res_771_; 
v_pu_boxed_770_ = lean_unbox(v_pu_761_);
v_res_771_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(v_pu_boxed_770_, v_r_762_, v_i_763_, v_as_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v_r_762_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(lean_object* v_f_772_, lean_object* v_v_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
if (lean_obj_tag(v_v_773_) == 0)
{
lean_object* v_code_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_803_; 
v_code_779_ = lean_ctor_get(v_v_773_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v_v_773_);
if (v_isSharedCheck_803_ == 0)
{
v___x_781_ = v_v_773_;
v_isShared_782_ = v_isSharedCheck_803_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_code_779_);
lean_dec(v_v_773_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_803_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; 
lean_inc(v___y_777_);
lean_inc_ref(v___y_776_);
lean_inc(v___y_775_);
lean_inc_ref(v___y_774_);
v___x_783_ = lean_apply_6(v_f_772_, v_code_779_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, lean_box(0));
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_794_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_794_ == 0)
{
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v_a_784_);
v___x_789_ = v___x_781_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_793_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_791_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_789_);
v___x_791_ = v___x_786_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_del_object(v___x_781_);
v_a_795_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_783_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_783_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
else
{
lean_object* v___x_804_; 
lean_dec_ref(v_f_772_);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v_v_773_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg___boxed(lean_object* v_f_805_, lean_object* v_v_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v_f_805_, v_v_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(uint8_t v_pu_813_, lean_object* v_f_814_, lean_object* v_v_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v_f_814_, v_v_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___boxed(lean_object* v_pu_822_, lean_object* v_f_823_, lean_object* v_v_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
uint8_t v_pu_boxed_830_; lean_object* v_res_831_; 
v_pu_boxed_830_ = lean_unbox(v_pu_822_);
v_res_831_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(v_pu_boxed_830_, v_f_823_, v_v_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(uint8_t v_pu_832_, lean_object* v_r_833_, lean_object* v_x_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_832_, v_x_834_, v_r_833_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed(lean_object* v_pu_841_, lean_object* v_r_842_, lean_object* v_x_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
uint8_t v_pu_boxed_849_; lean_object* v_res_850_; 
v_pu_boxed_849_ = lean_unbox(v_pu_841_);
v_res_850_ = l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(v_pu_boxed_849_, v_r_842_, v_x_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v_r_842_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming(uint8_t v_pu_851_, lean_object* v_decl_852_, lean_object* v_r_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
if (lean_obj_tag(v_r_853_) == 0)
{
lean_object* v_toSignature_859_; lean_object* v_value_860_; uint8_t v_recursive_861_; lean_object* v_inlineAttr_x3f_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_911_; 
v_toSignature_859_ = lean_ctor_get(v_decl_852_, 0);
v_value_860_ = lean_ctor_get(v_decl_852_, 1);
v_recursive_861_ = lean_ctor_get_uint8(v_decl_852_, sizeof(void*)*3);
v_inlineAttr_x3f_862_ = lean_ctor_get(v_decl_852_, 2);
v_isSharedCheck_911_ = !lean_is_exclusive(v_decl_852_);
if (v_isSharedCheck_911_ == 0)
{
v___x_864_ = v_decl_852_;
v_isShared_865_ = v_isSharedCheck_911_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_inlineAttr_x3f_862_);
lean_inc(v_value_860_);
lean_inc(v_toSignature_859_);
lean_dec(v_decl_852_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_911_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v_name_866_; lean_object* v_levelParams_867_; lean_object* v_type_868_; lean_object* v_params_869_; uint8_t v_safe_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_910_; 
v_name_866_ = lean_ctor_get(v_toSignature_859_, 0);
v_levelParams_867_ = lean_ctor_get(v_toSignature_859_, 1);
v_type_868_ = lean_ctor_get(v_toSignature_859_, 2);
v_params_869_ = lean_ctor_get(v_toSignature_859_, 3);
v_safe_870_ = lean_ctor_get_uint8(v_toSignature_859_, sizeof(void*)*4);
v_isSharedCheck_910_ = !lean_is_exclusive(v_toSignature_859_);
if (v_isSharedCheck_910_ == 0)
{
v___x_872_ = v_toSignature_859_;
v_isShared_873_ = v_isSharedCheck_910_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_params_869_);
lean_inc(v_type_868_);
lean_inc(v_levelParams_867_);
lean_inc(v_name_866_);
lean_dec(v_toSignature_859_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_910_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_unsigned_to_nat(0u);
v___x_875_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_851_, v_r_853_, v___x_874_, v_params_869_, v_a_855_, v_a_857_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___f_878_; lean_object* v___x_879_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref(v___x_875_);
v___x_877_ = lean_box(v_pu_851_);
v___f_878_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed), 8, 2);
lean_closure_set(v___f_878_, 0, v___x_877_);
lean_closure_set(v___f_878_, 1, v_r_853_);
v___x_879_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v___f_878_, v_value_860_, v_a_854_, v_a_855_, v_a_856_, v_a_857_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_893_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_893_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_893_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_893_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 3, v_a_876_);
v___x_885_ = v___x_872_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_name_866_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_levelParams_867_);
lean_ctor_set(v_reuseFailAlloc_892_, 2, v_type_868_);
lean_ctor_set(v_reuseFailAlloc_892_, 3, v_a_876_);
lean_ctor_set_uint8(v_reuseFailAlloc_892_, sizeof(void*)*4, v_safe_870_);
v___x_885_ = v_reuseFailAlloc_892_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_887_; 
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v_a_880_);
lean_ctor_set(v___x_864_, 0, v___x_885_);
v___x_887_ = v___x_864_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_a_880_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_inlineAttr_x3f_862_);
lean_ctor_set_uint8(v_reuseFailAlloc_891_, sizeof(void*)*3, v_recursive_861_);
v___x_887_ = v_reuseFailAlloc_891_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_889_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_887_);
v___x_889_ = v___x_882_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec(v_a_876_);
lean_del_object(v___x_872_);
lean_dec_ref(v_type_868_);
lean_dec(v_levelParams_867_);
lean_dec(v_name_866_);
lean_del_object(v___x_864_);
lean_dec(v_inlineAttr_x3f_862_);
v_a_894_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_879_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_879_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_del_object(v___x_872_);
lean_dec_ref(v_type_868_);
lean_dec(v_levelParams_867_);
lean_dec(v_name_866_);
lean_del_object(v___x_864_);
lean_dec(v_inlineAttr_x3f_862_);
lean_dec_ref(v_value_860_);
lean_dec_ref(v_r_853_);
v_a_902_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_875_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_875_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
}
else
{
lean_object* v___x_912_; 
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v_decl_852_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___boxed(lean_object* v_pu_913_, lean_object* v_decl_914_, lean_object* v_r_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
uint8_t v_pu_boxed_921_; lean_object* v_res_922_; 
v_pu_boxed_921_ = lean_unbox(v_pu_913_);
v_res_922_ = l_Lean_Compiler_LCNF_Decl_applyRenaming(v_pu_boxed_921_, v_decl_914_, v_r_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
return v_res_922_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Renaming(builtin);
}
#ifdef __cplusplus
}
#endif
