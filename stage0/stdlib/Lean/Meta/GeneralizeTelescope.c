// Lean compiler output
// Module: Lean.Meta.GeneralizeTelescope
// Imports: public import Lean.Meta.KAbstract public import Lean.Meta.Check
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_generalizeTelescope___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTelescope___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes(lean_object* v_e_1_, lean_object* v_eNew_2_, lean_object* v_entries_3_, lean_object* v_i_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_array_get_size(v_entries_3_);
v___x_11_ = lean_nat_dec_lt(v_i_4_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; 
lean_dec(v_i_4_);
lean_dec_ref(v_e_1_);
v___x_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_12_, 0, v_entries_3_);
return v___x_12_;
}
else
{
lean_object* v_entry_13_; lean_object* v_expr_14_; lean_object* v_type_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_42_; 
v_entry_13_ = lean_array_fget(v_entries_3_, v_i_4_);
v_expr_14_ = lean_ctor_get(v_entry_13_, 0);
v_type_15_ = lean_ctor_get(v_entry_13_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_entry_13_);
if (v_isSharedCheck_42_ == 0)
{
v___x_17_ = v_entry_13_;
v_isShared_18_ = v_isSharedCheck_42_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_type_15_);
lean_inc(v_expr_14_);
lean_dec(v_entry_13_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_42_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_box(0);
lean_inc_ref(v_e_1_);
v___x_20_ = l_Lean_Meta_kabstract(v_type_15_, v_e_1_, v___x_19_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; uint8_t v___x_22_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_a_21_);
lean_dec_ref(v___x_20_);
v___x_22_ = l_Lean_Expr_hasLooseBVars(v_a_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_a_21_);
lean_del_object(v___x_17_);
lean_dec_ref(v_expr_14_);
v___x_23_ = lean_unsigned_to_nat(1u);
v___x_24_ = lean_nat_add(v_i_4_, v___x_23_);
lean_dec(v_i_4_);
v_i_4_ = v___x_24_;
goto _start;
}
else
{
lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_26_ = lean_expr_instantiate1(v_a_21_, v_eNew_2_);
lean_dec(v_a_21_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_26_);
v___x_28_ = v___x_17_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_expr_14_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v___x_26_);
v___x_28_ = v_reuseFailAlloc_33_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
lean_ctor_set_uint8(v___x_28_, sizeof(void*)*2, v___x_22_);
v___x_29_ = lean_array_fset(v_entries_3_, v_i_4_, v___x_28_);
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = lean_nat_add(v_i_4_, v___x_30_);
lean_dec(v_i_4_);
v_entries_3_ = v___x_29_;
v_i_4_ = v___x_31_;
goto _start;
}
}
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
lean_del_object(v___x_17_);
lean_dec_ref(v_expr_14_);
lean_dec(v_i_4_);
lean_dec_ref(v_entries_3_);
lean_dec_ref(v_e_1_);
v_a_34_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_20_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_20_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes___boxed(lean_object* v_e_43_, lean_object* v_eNew_44_, lean_object* v_entries_45_, lean_object* v_i_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Meta_GeneralizeTelescope_updateTypes(v_e_43_, v_eNew_44_, v_entries_45_, v_i_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_eNew_44_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
if (lean_obj_tag(v_a_53_) == 0)
{
lean_object* v___x_55_; 
v___x_55_ = l_List_reverse___redArg(v_a_54_);
return v___x_55_;
}
else
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_66_; 
v_head_56_ = lean_ctor_get(v_a_53_, 0);
v_tail_57_ = lean_ctor_get(v_a_53_, 1);
v_isSharedCheck_66_ = !lean_is_exclusive(v_a_53_);
if (v_isSharedCheck_66_ == 0)
{
v___x_59_ = v_a_53_;
v_isShared_60_ = v_isSharedCheck_66_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_tail_57_);
lean_inc(v_head_56_);
lean_dec(v_a_53_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_66_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; lean_object* v___x_63_; 
v___x_61_ = l_Lean_MessageData_ofExpr(v_head_56_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v_a_54_);
lean_ctor_set(v___x_59_, 0, v___x_61_);
v___x_63_ = v___x_59_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_61_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v_a_54_);
v___x_63_ = v_reuseFailAlloc_65_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
v_a_53_ = v_tail_57_;
v_a_54_ = v___x_63_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(lean_object* v_msgData_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v___x_73_; lean_object* v_env_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_mctx_77_; lean_object* v_lctx_78_; lean_object* v_options_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_73_ = lean_st_ref_get(v___y_71_);
v_env_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc_ref(v_env_74_);
lean_dec(v___x_73_);
v___x_75_ = lean_st_ref_get(v___y_71_);
lean_dec(v___x_75_);
v___x_76_ = lean_st_ref_get(v___y_69_);
v_mctx_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_ref(v_mctx_77_);
lean_dec(v___x_76_);
v_lctx_78_ = lean_ctor_get(v___y_68_, 2);
v_options_79_ = lean_ctor_get(v___y_70_, 2);
lean_inc_ref(v_options_79_);
lean_inc_ref(v_lctx_78_);
v___x_80_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_80_, 0, v_env_74_);
lean_ctor_set(v___x_80_, 1, v_mctx_77_);
lean_ctor_set(v___x_80_, 2, v_lctx_78_);
lean_ctor_set(v___x_80_, 3, v_options_79_);
v___x_81_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v_msgData_67_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4___boxed(lean_object* v_msgData_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(v_msgData_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(lean_object* v_msg_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_ref_96_; lean_object* v___x_97_; lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_ref_96_ = lean_ctor_get(v___y_93_, 5);
v___x_97_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(v_msg_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
lean_inc(v_ref_96_);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v_ref_96_);
lean_ctor_set(v___x_102_, 1, v_a_98_);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 1);
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg___boxed(lean_object* v_msg_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v_msg_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(size_t v_sz_114_, size_t v_i_115_, lean_object* v_bs_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = lean_usize_dec_lt(v_i_115_, v_sz_114_);
if (v___x_117_ == 0)
{
return v_bs_116_;
}
else
{
lean_object* v_v_118_; lean_object* v_expr_119_; lean_object* v___x_120_; lean_object* v_bs_x27_121_; size_t v___x_122_; size_t v___x_123_; lean_object* v___x_124_; 
v_v_118_ = lean_array_uget_borrowed(v_bs_116_, v_i_115_);
v_expr_119_ = lean_ctor_get(v_v_118_, 0);
lean_inc_ref(v_expr_119_);
v___x_120_ = lean_unsigned_to_nat(0u);
v_bs_x27_121_ = lean_array_uset(v_bs_116_, v_i_115_, v___x_120_);
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_115_, v___x_122_);
v___x_124_ = lean_array_uset(v_bs_x27_121_, v_i_115_, v_expr_119_);
v_i_115_ = v___x_123_;
v_bs_116_ = v___x_124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1___boxed(lean_object* v_sz_126_, lean_object* v_i_127_, lean_object* v_bs_128_){
_start:
{
size_t v_sz_boxed_129_; size_t v_i_boxed_130_; lean_object* v_res_131_; 
v_sz_boxed_129_ = lean_unbox_usize(v_sz_126_);
lean_dec(v_sz_126_);
v_i_boxed_130_ = lean_unbox_usize(v_i_127_);
lean_dec(v_i_127_);
v_res_131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(v_sz_boxed_129_, v_i_boxed_130_, v_bs_128_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(lean_object* v_k_132_, lean_object* v_b_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v___x_139_; 
lean_inc(v___y_137_);
lean_inc_ref(v___y_136_);
lean_inc(v___y_135_);
lean_inc_ref(v___y_134_);
v___x_139_ = lean_apply_6(v_k_132_, v_b_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, lean_box(0));
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_140_, lean_object* v_b_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(v_k_140_, v_b_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(lean_object* v_name_148_, uint8_t v_bi_149_, lean_object* v_type_150_, lean_object* v_k_151_, uint8_t v_kind_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___f_158_; lean_object* v___x_159_; 
v___f_158_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_158_, 0, v_k_151_);
v___x_159_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_148_, v_bi_149_, v_type_150_, v___f_158_, v_kind_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_a_168_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_159_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_159_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___boxed(lean_object* v_name_176_, lean_object* v_bi_177_, lean_object* v_type_178_, lean_object* v_k_179_, lean_object* v_kind_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
uint8_t v_bi_boxed_186_; uint8_t v_kind_boxed_187_; lean_object* v_res_188_; 
v_bi_boxed_186_ = lean_unbox(v_bi_177_);
v_kind_boxed_187_ = lean_unbox(v_kind_180_);
v_res_188_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_176_, v_bi_boxed_186_, v_type_178_, v_k_179_, v_kind_boxed_187_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(lean_object* v_name_189_, lean_object* v_type_190_, lean_object* v_k_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
uint8_t v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; 
v___x_197_ = 0;
v___x_198_ = 0;
v___x_199_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_189_, v___x_197_, v_type_190_, v_k_191_, v___x_198_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg___boxed(lean_object* v_name_200_, lean_object* v_type_201_, lean_object* v_k_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_name_200_, v_type_201_, v_k_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed(lean_object* v_i_209_, lean_object* v_e_210_, lean_object* v_entries_211_, lean_object* v_fvars_212_, lean_object* v_k_213_, lean_object* v_x_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(v_i_209_, v_e_210_, v_entries_211_, v_fvars_212_, v_k_213_, v_x_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v_i_209_);
return v_res_220_;
}
}
static lean_object* _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_obj_once(&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0, &l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0_once, _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0);
v___x_223_ = l_Lean_Name_mkStr1(v___x_222_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_mk_string_unchecked("failed to create telescope generalizing ", 40, 40);
return v___x_224_;
}
}
static lean_object* _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_obj_once(&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2, &l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2_once, _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2);
v___x_226_ = l_Lean_stringToMessageData(v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(lean_object* v_k_227_, lean_object* v_entries_228_, lean_object* v_i_229_, lean_object* v_fvars_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_baseUserName_237_; lean_object* v_e_238_; lean_object* v_type_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_array_get_size(v_entries_228_);
v___x_265_ = lean_nat_dec_lt(v_i_229_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; 
lean_dec(v_i_229_);
lean_dec_ref(v_entries_228_);
lean_inc(v_a_234_);
lean_inc_ref(v_a_233_);
lean_inc(v_a_232_);
lean_inc_ref(v_a_231_);
v___x_266_ = lean_apply_6(v_k_227_, v_fvars_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, lean_box(0));
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v_expr_268_; lean_object* v_type_269_; uint8_t v_modified_270_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; 
v___x_267_ = lean_array_fget_borrowed(v_entries_228_, v_i_229_);
v_expr_268_ = lean_ctor_get(v___x_267_, 0);
v_type_269_ = lean_ctor_get(v___x_267_, 1);
v_modified_270_ = lean_ctor_get_uint8(v___x_267_, sizeof(void*)*2);
if (lean_obj_tag(v_expr_268_) == 1)
{
if (v_modified_270_ == 0)
{
lean_object* v_fvarId_305_; lean_object* v___x_306_; 
v_fvarId_305_ = lean_ctor_get(v_expr_268_, 0);
lean_inc(v_fvarId_305_);
v___x_306_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_305_, v_a_231_, v_a_233_, v_a_234_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref(v___x_306_);
if (lean_obj_tag(v_a_307_) == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec_ref(v_a_307_);
v___x_308_ = lean_unsigned_to_nat(1u);
v___x_309_ = lean_nat_add(v_i_229_, v___x_308_);
lean_dec(v_i_229_);
lean_inc_ref(v_expr_268_);
v___x_310_ = lean_array_push(v_fvars_230_, v_expr_268_);
v_i_229_ = v___x_309_;
v_fvars_230_ = v___x_310_;
goto _start;
}
else
{
lean_object* v___x_312_; 
v___x_312_ = l_Lean_LocalDecl_userName(v_a_307_);
lean_dec_ref(v_a_307_);
lean_inc_ref(v_type_269_);
lean_inc_ref(v_expr_268_);
v_baseUserName_237_ = v___x_312_;
v_e_238_ = v_expr_268_;
v_type_239_ = v_type_269_;
v___y_240_ = v_a_231_;
v___y_241_ = v_a_232_;
v___y_242_ = v_a_233_;
v___y_243_ = v_a_234_;
goto v___jp_236_;
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec_ref(v_fvars_230_);
lean_dec(v_i_229_);
lean_dec_ref(v_entries_228_);
lean_dec_ref(v_k_227_);
v_a_313_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_306_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_306_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
v___y_272_ = v_a_231_;
v___y_273_ = v_a_232_;
v___y_274_ = v_a_233_;
v___y_275_ = v_a_234_;
goto v___jp_271_;
}
}
else
{
v___y_272_ = v_a_231_;
v___y_273_ = v_a_232_;
v___y_274_ = v_a_233_;
v___y_275_ = v_a_234_;
goto v___jp_271_;
}
v___jp_271_:
{
if (v_modified_270_ == 0)
{
lean_inc_ref(v_expr_268_);
lean_inc_ref(v_type_269_);
v___y_257_ = v_type_269_;
v___y_258_ = v_expr_268_;
v___y_259_ = v___y_272_;
v___y_260_ = v___y_273_;
v___y_261_ = v___y_274_;
v___y_262_ = v___y_275_;
goto v___jp_256_;
}
else
{
lean_object* v___x_276_; 
lean_inc_ref(v_type_269_);
v___x_276_ = l_Lean_Meta_isTypeCorrect(v_type_269_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; uint8_t v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref(v___x_276_);
v___x_278_ = lean_unbox(v_a_277_);
lean_dec(v_a_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; size_t v_sz_280_; size_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_279_ = lean_obj_once(&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3, &l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3_once, _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3);
v_sz_280_ = lean_array_size(v_entries_228_);
v___x_281_ = ((size_t)0ULL);
lean_inc_ref(v_entries_228_);
v___x_282_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(v_sz_280_, v___x_281_, v_entries_228_);
v___x_283_ = lean_array_to_list(v___x_282_);
v___x_284_ = lean_box(0);
v___x_285_ = l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(v___x_283_, v___x_284_);
v___x_286_ = l_Lean_MessageData_ofList(v___x_285_);
v___x_287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_279_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v___x_287_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_dec_ref(v___x_288_);
lean_inc_ref(v_expr_268_);
lean_inc_ref(v_type_269_);
v___y_257_ = v_type_269_;
v___y_258_ = v_expr_268_;
v___y_259_ = v___y_272_;
v___y_260_ = v___y_273_;
v___y_261_ = v___y_274_;
v___y_262_ = v___y_275_;
goto v___jp_256_;
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_fvars_230_);
lean_dec(v_i_229_);
lean_dec_ref(v_entries_228_);
lean_dec_ref(v_k_227_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_inc_ref(v_expr_268_);
lean_inc_ref(v_type_269_);
v___y_257_ = v_type_269_;
v___y_258_ = v_expr_268_;
v___y_259_ = v___y_272_;
v___y_260_ = v___y_273_;
v___y_261_ = v___y_274_;
v___y_262_ = v___y_275_;
goto v___jp_256_;
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec_ref(v_fvars_230_);
lean_dec(v_i_229_);
lean_dec_ref(v_entries_228_);
lean_dec_ref(v_k_227_);
v_a_297_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_276_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_276_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
v___jp_236_:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Core_mkFreshUserName(v_baseUserName_237_, v___y_242_, v___y_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___f_246_; lean_object* v___x_247_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref(v___x_244_);
v___f_246_ = lean_alloc_closure((void*)(l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_246_, 0, v_i_229_);
lean_closure_set(v___f_246_, 1, v_e_238_);
lean_closure_set(v___f_246_, 2, v_entries_228_);
lean_closure_set(v___f_246_, 3, v_fvars_230_);
lean_closure_set(v___f_246_, 4, v_k_227_);
v___x_247_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_a_245_, v_type_239_, v___f_246_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
return v___x_247_;
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v_type_239_);
lean_dec_ref(v_e_238_);
lean_dec_ref(v_fvars_230_);
lean_dec(v_i_229_);
lean_dec_ref(v_entries_228_);
lean_dec_ref(v_k_227_);
v_a_248_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_244_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_244_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
v___jp_256_:
{
lean_object* v___x_263_; 
v___x_263_ = lean_obj_once(&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1, &l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1_once, _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1);
v_baseUserName_237_ = v___x_263_;
v_e_238_ = v___y_258_;
v_type_239_ = v___y_257_;
v___y_240_ = v___y_259_;
v___y_241_ = v___y_260_;
v___y_242_ = v___y_261_;
v___y_243_ = v___y_262_;
goto v___jp_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(lean_object* v_i_321_, lean_object* v_e_322_, lean_object* v_entries_323_, lean_object* v_fvars_324_, lean_object* v_k_325_, lean_object* v_x_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_add(v_i_321_, v___x_332_);
lean_inc(v___x_333_);
v___x_334_ = l_Lean_Meta_GeneralizeTelescope_updateTypes(v_e_322_, v_x_326_, v_entries_323_, v___x_333_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = lean_array_push(v_fvars_324_, v_x_326_);
v___x_337_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_325_, v_a_335_, v___x_333_, v___x_336_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
return v___x_337_;
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v___x_333_);
lean_dec_ref(v_x_326_);
lean_dec_ref(v_k_325_);
lean_dec_ref(v_fvars_324_);
v_a_338_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_334_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_334_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___boxed(lean_object* v_k_346_, lean_object* v_entries_347_, lean_object* v_i_348_, lean_object* v_fvars_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_346_, v_entries_347_, v_i_348_, v_fvars_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
lean_dec(v_a_353_);
lean_dec_ref(v_a_352_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(lean_object* v_00_u03b1_356_, lean_object* v_k_357_, lean_object* v_entries_358_, lean_object* v_i_359_, lean_object* v_fvars_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_357_, v_entries_358_, v_i_359_, v_fvars_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___boxed(lean_object* v_00_u03b1_367_, lean_object* v_k_368_, lean_object* v_entries_369_, lean_object* v_i_370_, lean_object* v_fvars_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(v_00_u03b1_367_, v_k_368_, v_entries_369_, v_i_370_, v_fvars_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(lean_object* v_00_u03b1_378_, lean_object* v_name_379_, uint8_t v_bi_380_, lean_object* v_type_381_, lean_object* v_k_382_, uint8_t v_kind_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_379_, v_bi_380_, v_type_381_, v_k_382_, v_kind_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_390_, lean_object* v_name_391_, lean_object* v_bi_392_, lean_object* v_type_393_, lean_object* v_k_394_, lean_object* v_kind_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
uint8_t v_bi_boxed_401_; uint8_t v_kind_boxed_402_; lean_object* v_res_403_; 
v_bi_boxed_401_ = lean_unbox(v_bi_392_);
v_kind_boxed_402_ = lean_unbox(v_kind_395_);
v_res_403_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(v_00_u03b1_390_, v_name_391_, v_bi_boxed_401_, v_type_393_, v_k_394_, v_kind_boxed_402_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(lean_object* v_00_u03b1_404_, lean_object* v_name_405_, lean_object* v_type_406_, lean_object* v_k_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_name_405_, v_type_406_, v_k_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___boxed(lean_object* v_00_u03b1_414_, lean_object* v_name_415_, lean_object* v_type_416_, lean_object* v_k_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(v_00_u03b1_414_, v_name_415_, v_type_416_, v_k_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(lean_object* v_00_u03b1_424_, lean_object* v_msg_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v_msg_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___boxed(lean_object* v_00_u03b1_432_, lean_object* v_msg_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(v_00_u03b1_432_, v_msg_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(lean_object* v_e_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
uint8_t v___x_444_; 
v___x_444_ = l_Lean_Expr_hasMVar(v_e_440_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; 
v___x_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_445_, 0, v_e_440_);
return v___x_445_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_mctx_448_; lean_object* v___x_449_; lean_object* v_fst_450_; lean_object* v_snd_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v_cache_454_; lean_object* v_zetaDeltaFVarIds_455_; lean_object* v_postponed_456_; lean_object* v_diag_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_466_; 
v___x_446_ = lean_st_ref_get(v___y_442_);
lean_dec(v___x_446_);
v___x_447_ = lean_st_ref_get(v___y_441_);
v_mctx_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc_ref(v_mctx_448_);
lean_dec(v___x_447_);
v___x_449_ = l_Lean_instantiateMVarsCore(v_mctx_448_, v_e_440_);
v_fst_450_ = lean_ctor_get(v___x_449_, 0);
lean_inc(v_fst_450_);
v_snd_451_ = lean_ctor_get(v___x_449_, 1);
lean_inc(v_snd_451_);
lean_dec_ref(v___x_449_);
v___x_452_ = lean_st_ref_get(v___y_442_);
lean_dec(v___x_452_);
v___x_453_ = lean_st_ref_take(v___y_441_);
v_cache_454_ = lean_ctor_get(v___x_453_, 1);
v_zetaDeltaFVarIds_455_ = lean_ctor_get(v___x_453_, 2);
v_postponed_456_ = lean_ctor_get(v___x_453_, 3);
v_diag_457_ = lean_ctor_get(v___x_453_, 4);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; 
v_unused_467_ = lean_ctor_get(v___x_453_, 0);
lean_dec(v_unused_467_);
v___x_459_ = v___x_453_;
v_isShared_460_ = v_isSharedCheck_466_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_diag_457_);
lean_inc(v_postponed_456_);
lean_inc(v_zetaDeltaFVarIds_455_);
lean_inc(v_cache_454_);
lean_dec(v___x_453_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_466_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v_snd_451_);
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_snd_451_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v_cache_454_);
lean_ctor_set(v_reuseFailAlloc_465_, 2, v_zetaDeltaFVarIds_455_);
lean_ctor_set(v_reuseFailAlloc_465_, 3, v_postponed_456_);
lean_ctor_set(v_reuseFailAlloc_465_, 4, v_diag_457_);
v___x_462_ = v_reuseFailAlloc_465_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_st_ref_set(v___y_441_, v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v_fst_450_);
return v___x_464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg___boxed(lean_object* v_e_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_e_468_, v___y_469_, v___y_470_);
lean_dec(v___y_470_);
lean_dec(v___y_469_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(lean_object* v_e_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_e_473_, v___y_475_, v___y_477_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___boxed(lean_object* v_e_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(v_e_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(size_t v_sz_487_, size_t v_i_488_, lean_object* v_bs_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = lean_usize_dec_lt(v_i_488_, v_sz_487_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v_bs_489_);
return v___x_496_;
}
else
{
lean_object* v_v_497_; lean_object* v___x_498_; 
v_v_497_ = lean_array_uget(v_bs_489_, v_i_488_);
lean_inc(v___y_493_);
lean_inc_ref(v___y_492_);
lean_inc(v___y_491_);
lean_inc_ref(v___y_490_);
lean_inc(v_v_497_);
v___x_498_ = lean_infer_type(v_v_497_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_500_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref(v___x_498_);
v___x_500_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_a_499_, v___y_491_, v___y_493_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_502_; lean_object* v_bs_x27_503_; uint8_t v___x_504_; lean_object* v___x_505_; size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref(v___x_500_);
v___x_502_ = lean_unsigned_to_nat(0u);
v_bs_x27_503_ = lean_array_uset(v_bs_489_, v_i_488_, v___x_502_);
v___x_504_ = 0;
v___x_505_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_505_, 0, v_v_497_);
lean_ctor_set(v___x_505_, 1, v_a_501_);
lean_ctor_set_uint8(v___x_505_, sizeof(void*)*2, v___x_504_);
v___x_506_ = ((size_t)1ULL);
v___x_507_ = lean_usize_add(v_i_488_, v___x_506_);
v___x_508_ = lean_array_uset(v_bs_x27_503_, v_i_488_, v___x_505_);
v_i_488_ = v___x_507_;
v_bs_489_ = v___x_508_;
goto _start;
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_v_497_);
lean_dec_ref(v_bs_489_);
v_a_510_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_500_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_500_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec(v_v_497_);
lean_dec_ref(v_bs_489_);
v_a_518_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_498_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_498_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1___boxed(lean_object* v_sz_526_, lean_object* v_i_527_, lean_object* v_bs_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
size_t v_sz_boxed_534_; size_t v_i_boxed_535_; lean_object* v_res_536_; 
v_sz_boxed_534_ = lean_unbox_usize(v_sz_526_);
lean_dec(v_sz_526_);
v_i_boxed_535_ = lean_unbox_usize(v_i_527_);
lean_dec(v_i_527_);
v_res_536_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(v_sz_boxed_534_, v_i_boxed_535_, v_bs_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v_res_536_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTelescope___redArg___closed__0(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg(lean_object* v_es_539_, lean_object* v_k_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_){
_start:
{
size_t v_sz_546_; size_t v___x_547_; lean_object* v___x_548_; 
v_sz_546_ = lean_array_size(v_es_539_);
v___x_547_ = ((size_t)0ULL);
v___x_548_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(v_sz_546_, v___x_547_, v_es_539_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref(v___x_548_);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_obj_once(&l_Lean_Meta_generalizeTelescope___redArg___closed__0, &l_Lean_Meta_generalizeTelescope___redArg___closed__0_once, _init_l_Lean_Meta_generalizeTelescope___redArg___closed__0);
v___x_552_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_540_, v_a_549_, v___x_550_, v___x_551_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
return v___x_552_;
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec_ref(v_k_540_);
v_a_553_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_548_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_548_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg___boxed(lean_object* v_es_561_, lean_object* v_k_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Meta_generalizeTelescope___redArg(v_es_561_, v_k_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope(lean_object* v_00_u03b1_569_, lean_object* v_es_570_, lean_object* v_k_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lean_Meta_generalizeTelescope___redArg(v_es_570_, v_k_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___boxed(lean_object* v_00_u03b1_578_, lean_object* v_es_579_, lean_object* v_k_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Meta_generalizeTelescope(v_00_u03b1_578_, v_es_579_, v_k_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
return v_res_586_;
}
}
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeTelescope(builtin);
}
#ifdef __cplusplus
}
#endif
