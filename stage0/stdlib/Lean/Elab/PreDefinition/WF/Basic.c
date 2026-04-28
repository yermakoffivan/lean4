// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Basic
// Imports: public import Lean.Elab.Tactic.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_rawDecreasingByGoal;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__1;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__2;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__3;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__4;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__5;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__6;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__7;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__8;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__9;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__10;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__11;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__12;
static lean_once_cell_t l_Lean_Elab_WF_applyCleanWfTactic___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_applyCleanWfTactic___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_applyCleanWfTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("rawDecreasingByGoal", 19, 19);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_37_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_38_ = l_Lean_Name_mkStr2(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("Shows the raw `decreasing_by` goal including internal implementation detail instead of cleaning it up with the `clean_wf` tactic. Can be enabled for debugging purposes. Please report an issue if you have to use this option for other reasons.", 241, 241);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_40_ = lean_box(0);
v___x_41_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_42_ = 0;
v___x_43_ = lean_box(v___x_42_);
v___x_44_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_41_);
lean_ctor_set(v___x_44_, 2, v___x_40_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked("WF", 2, 2);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_48_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_49_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_50_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_51_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_52_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_53_ = l_Lean_Name_mkStr5(v___x_52_, v___x_51_, v___x_50_, v___x_49_, v___x_48_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_55_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_56_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_57_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_58_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__spec__0(v___x_55_, v___x_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4____boxed(lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_();
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0(lean_object* v_opts_61_, lean_object* v_opt_62_){
_start:
{
lean_object* v_name_63_; lean_object* v_defValue_64_; lean_object* v_map_65_; lean_object* v___x_66_; 
v_name_63_ = lean_ctor_get(v_opt_62_, 0);
v_defValue_64_ = lean_ctor_get(v_opt_62_, 1);
v_map_65_ = lean_ctor_get(v_opts_61_, 0);
v___x_66_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_65_, v_name_63_);
if (lean_obj_tag(v___x_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = lean_unbox(v_defValue_64_);
return v___x_67_;
}
else
{
lean_object* v_val_68_; 
v_val_68_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_val_68_);
lean_dec_ref(v___x_66_);
if (lean_obj_tag(v_val_68_) == 1)
{
uint8_t v_v_69_; 
v_v_69_ = lean_ctor_get_uint8(v_val_68_, 0);
lean_dec_ref(v_val_68_);
return v_v_69_;
}
else
{
uint8_t v___x_70_; 
lean_dec(v_val_68_);
v___x_70_ = lean_unbox(v_defValue_64_);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0___boxed(lean_object* v_opts_71_, lean_object* v_opt_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0(v_opts_71_, v_opt_72_);
lean_dec_ref(v_opt_72_);
lean_dec_ref(v_opts_71_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__1(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__2(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked("allGoals", 8, 8);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__3(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__2, &l_Lean_Elab_WF_applyCleanWfTactic___closed__2_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__2);
v___x_79_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__1, &l_Lean_Elab_WF_applyCleanWfTactic___closed__1_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__1);
v___x_80_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__0, &l_Lean_Elab_WF_applyCleanWfTactic___closed__0_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__0);
v___x_81_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_82_ = l_Lean_Name_mkStr4(v___x_81_, v___x_80_, v___x_79_, v___x_78_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__4(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_mk_string_unchecked("all_goals", 9, 9);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__5(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__6(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__5, &l_Lean_Elab_WF_applyCleanWfTactic___closed__5_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__5);
v___x_86_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__1, &l_Lean_Elab_WF_applyCleanWfTactic___closed__1_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__1);
v___x_87_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__0, &l_Lean_Elab_WF_applyCleanWfTactic___closed__0_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__0);
v___x_88_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_89_ = l_Lean_Name_mkStr4(v___x_88_, v___x_87_, v___x_86_, v___x_85_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__7(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__8(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__7, &l_Lean_Elab_WF_applyCleanWfTactic___closed__7_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__7);
v___x_92_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__1, &l_Lean_Elab_WF_applyCleanWfTactic___closed__1_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__1);
v___x_93_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__0, &l_Lean_Elab_WF_applyCleanWfTactic___closed__0_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__0);
v___x_94_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_);
v___x_95_ = l_Lean_Name_mkStr4(v___x_94_, v___x_93_, v___x_92_, v___x_91_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__9(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__10(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__9, &l_Lean_Elab_WF_applyCleanWfTactic___closed__9_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__9);
v___x_98_ = l_Lean_Name_mkStr1(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__11(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_mk_string_unchecked("tacticClean_wf", 14, 14);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__12(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__11, &l_Lean_Elab_WF_applyCleanWfTactic___closed__11_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__11);
v___x_101_ = l_Lean_Name_mkStr1(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__13(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("clean_wf", 8, 8);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v_options_112_; lean_object* v_ref_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v_options_112_ = lean_ctor_get(v_a_109_, 2);
v_ref_113_ = lean_ctor_get(v_a_109_, 5);
v___x_114_ = l_Lean_Elab_WF_debug_rawDecreasingByGoal;
v___x_115_ = l_Lean_Option_get___at___00Lean_Elab_WF_applyCleanWfTactic_spec__0(v_options_112_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_116_ = l_Lean_SourceInfo_fromRef(v_ref_113_, v___x_115_);
v___x_117_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__3, &l_Lean_Elab_WF_applyCleanWfTactic___closed__3_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__3);
v___x_118_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__4, &l_Lean_Elab_WF_applyCleanWfTactic___closed__4_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__4);
lean_inc_n(v___x_116_, 6);
v___x_119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_116_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__6, &l_Lean_Elab_WF_applyCleanWfTactic___closed__6_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__6);
v___x_121_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__8, &l_Lean_Elab_WF_applyCleanWfTactic___closed__8_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__8);
v___x_122_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__10, &l_Lean_Elab_WF_applyCleanWfTactic___closed__10_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__10);
v___x_123_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__12, &l_Lean_Elab_WF_applyCleanWfTactic___closed__12_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__12);
v___x_124_ = lean_obj_once(&l_Lean_Elab_WF_applyCleanWfTactic___closed__13, &l_Lean_Elab_WF_applyCleanWfTactic___closed__13_once, _init_l_Lean_Elab_WF_applyCleanWfTactic___closed__13);
v___x_125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_116_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = l_Lean_Syntax_node1(v___x_116_, v___x_123_, v___x_125_);
v___x_127_ = l_Lean_Syntax_node1(v___x_116_, v___x_122_, v___x_126_);
v___x_128_ = l_Lean_Syntax_node1(v___x_116_, v___x_121_, v___x_127_);
v___x_129_ = l_Lean_Syntax_node1(v___x_116_, v___x_120_, v___x_128_);
v___x_130_ = l_Lean_Syntax_node2(v___x_116_, v___x_117_, v___x_119_, v___x_129_);
v___x_131_ = l_Lean_Elab_Tactic_evalTactic(v___x_130_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_box(0);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_applyCleanWfTactic___boxed(lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_Elab_WF_applyCleanWfTactic(v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
return v_res_143_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Basic_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Basic_1409780955____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_rawDecreasingByGoal = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_rawDecreasingByGoal);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
