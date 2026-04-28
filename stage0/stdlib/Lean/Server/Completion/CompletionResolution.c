// Lean compiler output
// Module: Lean.Server.Completion.CompletionResolution
// Imports: public import Lean.Data.Lsp public import Lean.Server.Completion.CompletionInfoSelection public import Lean.Linter.Deprecated
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
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_CompletionInfo_lctx(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default;
extern lean_object* l_Lean_Linter_deprecatedAttr;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__0;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__1;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__2;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__3;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__4;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__5;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__6;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__7;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__8;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_resolve___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_8_ = lean_apply_6(v_k_1_, v_b_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0___boxed(lean_object* v_k_9_, lean_object* v_b_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0(v_k_9_, v_b_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
lean_dec(v___y_12_);
lean_dec_ref(v___y_11_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg(lean_object* v_name_17_, uint8_t v_bi_18_, lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_kind_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_17_, v_bi_18_, v_type_19_, v___f_27_, v_kind_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
v_a_29_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_28_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
v_a_37_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_28_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_28_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg___boxed(lean_object* v_name_45_, lean_object* v_bi_46_, lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_kind_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_bi_boxed_55_; uint8_t v_kind_boxed_56_; lean_object* v_res_57_; 
v_bi_boxed_55_ = lean_unbox(v_bi_46_);
v_kind_boxed_56_ = lean_unbox(v_kind_49_);
v_res_57_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg(v_name_45_, v_bi_boxed_55_, v_type_47_, v_k_48_, v_kind_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0(lean_object* v_00_u03b1_58_, lean_object* v_name_59_, uint8_t v_bi_60_, lean_object* v_type_61_, lean_object* v_k_62_, uint8_t v_kind_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg(v_name_59_, v_bi_60_, v_type_61_, v_k_62_, v_kind_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___boxed(lean_object* v_00_u03b1_70_, lean_object* v_name_71_, lean_object* v_bi_72_, lean_object* v_type_73_, lean_object* v_k_74_, lean_object* v_kind_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
uint8_t v_bi_boxed_81_; uint8_t v_kind_boxed_82_; lean_object* v_res_83_; 
v_bi_boxed_81_ = lean_unbox(v_bi_72_);
v_kind_boxed_82_ = lean_unbox(v_kind_75_);
v_res_83_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0(v_00_u03b1_70_, v_name_71_, v_bi_boxed_81_, v_type_73_, v_k_74_, v_kind_boxed_82_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0___boxed(lean_object* v_body_84_, lean_object* v_k_85_, lean_object* v_arg_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0(v_body_84_, v_k_85_, v_arg_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec_ref(v_arg_86_);
lean_dec_ref(v_body_84_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(lean_object* v_e_93_, lean_object* v_k_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
if (lean_obj_tag(v_e_93_) == 7)
{
lean_object* v_binderName_100_; lean_object* v_binderType_101_; lean_object* v_body_102_; uint8_t v_binderInfo_103_; uint8_t v___x_104_; uint8_t v___x_105_; 
v_binderName_100_ = lean_ctor_get(v_e_93_, 0);
v_binderType_101_ = lean_ctor_get(v_e_93_, 1);
v_body_102_ = lean_ctor_get(v_e_93_, 2);
v_binderInfo_103_ = lean_ctor_get_uint8(v_e_93_, sizeof(void*)*3 + 8);
v___x_104_ = 1;
v___x_105_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
lean_inc(v_a_98_);
lean_inc_ref(v_a_97_);
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
v___x_106_ = lean_apply_6(v_k_94_, v_e_93_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, lean_box(0));
return v___x_106_;
}
else
{
lean_object* v___f_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
lean_inc_ref(v_body_102_);
lean_inc_ref(v_binderType_101_);
lean_inc(v_binderName_100_);
lean_dec_ref(v_e_93_);
v___f_107_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_107_, 0, v_body_102_);
lean_closure_set(v___f_107_, 1, v_k_94_);
v___x_108_ = 0;
v___x_109_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix_spec__0___redArg(v_binderName_100_, v_binderInfo_103_, v_binderType_101_, v___f_107_, v___x_108_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
return v___x_109_;
}
}
else
{
lean_object* v___x_110_; 
lean_inc(v_a_98_);
lean_inc_ref(v_a_97_);
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
v___x_110_ = lean_apply_6(v_k_94_, v_e_93_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, lean_box(0));
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___lam__0(lean_object* v_body_111_, lean_object* v_k_112_, lean_object* v_arg_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_expr_instantiate1(v_body_111_, v_arg_113_);
v___x_120_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(v___x_119_, v_k_112_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg___boxed(lean_object* v_e_121_, lean_object* v_k_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(v_e_121_, v_k_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix(lean_object* v_00_u03b1_129_, lean_object* v_e_130_, lean_object* v_k_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(v_e_130_, v_k_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___boxed(lean_object* v_00_u03b1_138_, lean_object* v_e_139_, lean_object* v_k_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix(v_00_u03b1_138_, v_e_139_, v_k_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__0(lean_object* v_docValue_147_){
_start:
{
uint8_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = 1;
v___x_149_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_149_, 0, v_docValue_147_);
lean_ctor_set_uint8(v___x_149_, sizeof(void*)*1, v___x_148_);
v___x_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__1(lean_object* v_documentation_x3f_151_, lean_object* v___f_152_, lean_object* v_docStringPrefix_153_){
_start:
{
if (lean_obj_tag(v_docStringPrefix_153_) == 0)
{
lean_dec_ref(v___f_152_);
lean_inc(v_documentation_x3f_151_);
return v_documentation_x3f_151_;
}
else
{
lean_object* v_val_154_; lean_object* v___x_155_; 
v_val_154_ = lean_ctor_get(v_docStringPrefix_153_, 0);
lean_inc(v_val_154_);
lean_dec_ref(v_docStringPrefix_153_);
v___x_155_ = lean_apply_1(v___f_152_, v_val_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__1___boxed(lean_object* v_documentation_x3f_156_, lean_object* v___f_157_, lean_object* v_docStringPrefix_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Lsp_CompletionItem_resolve___lam__1(v_documentation_x3f_156_, v___f_157_, v_docStringPrefix_158_);
lean_dec(v_documentation_x3f_156_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__2(lean_object* v_typeWithoutImplicits_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_Meta_ppExpr(v_typeWithoutImplicits_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_177_; 
v_a_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_177_ == 0)
{
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_177_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_177_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_171_ = l_Std_Format_defWidth;
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = l_Std_Format_pretty(v_a_167_, v___x_171_, v___x_172_, v___x_172_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_173_);
v___x_175_ = v___x_169_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_173_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
v_a_178_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_166_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_166_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lam__2___boxed(lean_object* v_typeWithoutImplicits_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_Lsp_CompletionItem_resolve___lam__2(v_typeWithoutImplicits_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
return v_res_192_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__0(void){
_start:
{
lean_object* v___f_193_; 
v___f_193_ = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lam__0), 1, 0);
return v___f_193_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__1(void){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lean_mk_string_unchecked("\n\n", 2, 2);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__2(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__3(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("(some ", 6, 6);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__4(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__5(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__6(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("` has been deprecated, use `", 28, 28);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__7(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("` instead.", 10, 10);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__8(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_mk_string_unchecked("` has been deprecated.", 22, 22);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__9(void){
_start:
{
lean_object* v___f_202_; 
v___f_202_ = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lam__2___boxed), 6, 0);
return v___f_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve(lean_object* v_item_203_, lean_object* v_id_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___y_211_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___x_221_; lean_object* v_env_222_; lean_object* v_label_223_; lean_object* v_detail_x3f_224_; lean_object* v_documentation_x3f_225_; lean_object* v_kind_x3f_226_; lean_object* v_textEdit_x3f_227_; lean_object* v_sortText_x3f_228_; lean_object* v_data_x3f_229_; lean_object* v_tags_x3f_230_; lean_object* v___f_231_; lean_object* v___y_233_; lean_object* v___y_234_; lean_object* v___y_235_; lean_object* v___y_236_; lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_255_; lean_object* v___y_256_; lean_object* v_docString_x3f_257_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; uint8_t v___y_283_; lean_object* v___y_284_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; uint8_t v___y_321_; lean_object* v___y_322_; lean_object* v_item_325_; lean_object* v_label_326_; lean_object* v_detail_x3f_327_; lean_object* v_documentation_x3f_328_; lean_object* v_kind_x3f_329_; lean_object* v_textEdit_x3f_330_; lean_object* v_sortText_x3f_331_; lean_object* v_data_x3f_332_; lean_object* v_tags_x3f_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v_a_388_; 
v___x_221_ = lean_st_ref_get(v_a_208_);
v_env_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc_ref(v_env_222_);
lean_dec(v___x_221_);
v_label_223_ = lean_ctor_get(v_item_203_, 0);
lean_inc_ref(v_label_223_);
v_detail_x3f_224_ = lean_ctor_get(v_item_203_, 1);
lean_inc(v_detail_x3f_224_);
v_documentation_x3f_225_ = lean_ctor_get(v_item_203_, 2);
lean_inc(v_documentation_x3f_225_);
v_kind_x3f_226_ = lean_ctor_get(v_item_203_, 3);
lean_inc(v_kind_x3f_226_);
v_textEdit_x3f_227_ = lean_ctor_get(v_item_203_, 4);
lean_inc(v_textEdit_x3f_227_);
v_sortText_x3f_228_ = lean_ctor_get(v_item_203_, 5);
lean_inc(v_sortText_x3f_228_);
v_data_x3f_229_ = lean_ctor_get(v_item_203_, 6);
lean_inc(v_data_x3f_229_);
v_tags_x3f_230_ = lean_ctor_get(v_item_203_, 7);
lean_inc(v_tags_x3f_230_);
v___f_231_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__0, &l_Lean_Lsp_CompletionItem_resolve___closed__0_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__0);
if (lean_obj_tag(v_detail_x3f_224_) == 0)
{
lean_object* v___f_390_; lean_object* v_val_392_; 
lean_dec_ref(v_item_203_);
v___f_390_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__9, &l_Lean_Lsp_CompletionItem_resolve___closed__9_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__9);
if (lean_obj_tag(v_id_204_) == 0)
{
lean_object* v_declName_404_; uint8_t v___x_405_; lean_object* v___x_406_; 
v_declName_404_ = lean_ctor_get(v_id_204_, 0);
v___x_405_ = 0;
lean_inc(v_declName_404_);
lean_inc_ref(v_env_222_);
v___x_406_ = l_Lean_Environment_find_x3f(v_env_222_, v_declName_404_, v___x_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
v_a_388_ = v_detail_x3f_224_;
goto v___jp_387_;
}
else
{
lean_object* v_val_407_; lean_object* v___x_408_; 
v_val_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_val_407_);
lean_dec_ref(v___x_406_);
v___x_408_ = l_Lean_ConstantInfo_type(v_val_407_);
lean_dec(v_val_407_);
v_val_392_ = v___x_408_;
goto v___jp_391_;
}
}
else
{
lean_object* v_id_409_; lean_object* v_lctx_410_; lean_object* v___x_411_; 
v_id_409_ = lean_ctor_get(v_id_204_, 0);
v_lctx_410_ = lean_ctor_get(v_a_205_, 2);
lean_inc(v_id_409_);
lean_inc_ref(v_lctx_410_);
v___x_411_ = lean_local_ctx_find(v_lctx_410_, v_id_409_);
if (lean_obj_tag(v___x_411_) == 0)
{
v_a_388_ = v_detail_x3f_224_;
goto v___jp_387_;
}
else
{
lean_object* v_val_412_; lean_object* v___x_413_; 
v_val_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_val_412_);
lean_dec_ref(v___x_411_);
v___x_413_ = l_Lean_LocalDecl_type(v_val_412_);
lean_dec(v_val_412_);
v_val_392_ = v___x_413_;
goto v___jp_391_;
}
}
v___jp_391_:
{
lean_object* v___x_393_; 
v___x_393_ = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___redArg(v_val_392_, v___f_390_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_395_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref(v___x_393_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v_a_394_);
v_a_388_ = v___x_395_;
goto v___jp_387_;
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec(v_tags_x3f_230_);
lean_dec(v_data_x3f_229_);
lean_dec(v_sortText_x3f_228_);
lean_dec(v_textEdit_x3f_227_);
lean_dec(v_kind_x3f_226_);
lean_dec(v_documentation_x3f_225_);
lean_dec_ref(v_label_223_);
lean_dec_ref(v_env_222_);
lean_dec_ref(v_id_204_);
v_a_396_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_393_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_393_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
else
{
v_item_325_ = v_item_203_;
v_label_326_ = v_label_223_;
v_detail_x3f_327_ = v_detail_x3f_224_;
v_documentation_x3f_328_ = v_documentation_x3f_225_;
v_kind_x3f_329_ = v_kind_x3f_226_;
v_textEdit_x3f_330_ = v_textEdit_x3f_227_;
v_sortText_x3f_331_ = v_sortText_x3f_228_;
v_data_x3f_332_ = v_data_x3f_229_;
v_tags_x3f_333_ = v_tags_x3f_230_;
v___y_334_ = v_a_207_;
v___y_335_ = v_a_208_;
goto v___jp_324_;
}
v___jp_210_:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_219_, 0, v___y_217_);
lean_ctor_set(v___x_219_, 1, v___y_211_);
lean_ctor_set(v___x_219_, 2, v___y_218_);
lean_ctor_set(v___x_219_, 3, v___y_213_);
lean_ctor_set(v___x_219_, 4, v___y_216_);
lean_ctor_set(v___x_219_, 5, v___y_214_);
lean_ctor_set(v___x_219_, 6, v___y_212_);
lean_ctor_set(v___x_219_, 7, v___y_215_);
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
v___jp_232_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_242_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__1, &l_Lean_Lsp_CompletionItem_resolve___closed__1_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__1);
v___x_243_ = lean_string_append(v___y_241_, v___x_242_);
v___x_244_ = lean_string_append(v___x_243_, v___y_233_);
lean_dec_ref(v___y_233_);
v___x_245_ = l_Lean_Lsp_CompletionItem_resolve___lam__0(v___x_244_);
v___y_211_ = v___y_234_;
v___y_212_ = v___y_235_;
v___y_213_ = v___y_236_;
v___y_214_ = v___y_237_;
v___y_215_ = v___y_238_;
v___y_216_ = v___y_239_;
v___y_217_ = v___y_240_;
v___y_218_ = v___x_245_;
goto v___jp_210_;
}
v___jp_246_:
{
if (lean_obj_tag(v___y_247_) == 0)
{
if (lean_obj_tag(v_docString_x3f_257_) == 0)
{
lean_dec_ref(v___y_252_);
v___y_211_ = v___y_249_;
v___y_212_ = v___y_250_;
v___y_213_ = v___y_251_;
v___y_214_ = v___y_253_;
v___y_215_ = v___y_254_;
v___y_216_ = v___y_255_;
v___y_217_ = v___y_256_;
v___y_218_ = v___y_248_;
goto v___jp_210_;
}
else
{
lean_object* v___x_258_; 
lean_dec(v___y_248_);
v___x_258_ = lean_apply_1(v___y_252_, v_docString_x3f_257_);
v___y_211_ = v___y_249_;
v___y_212_ = v___y_250_;
v___y_213_ = v___y_251_;
v___y_214_ = v___y_253_;
v___y_215_ = v___y_254_;
v___y_216_ = v___y_255_;
v___y_217_ = v___y_256_;
v___y_218_ = v___x_258_;
goto v___jp_210_;
}
}
else
{
lean_dec(v___y_248_);
if (lean_obj_tag(v_docString_x3f_257_) == 0)
{
lean_object* v_val_259_; lean_object* v___x_260_; 
v_val_259_ = lean_ctor_get(v___y_247_, 0);
lean_inc(v_val_259_);
lean_dec_ref(v___y_247_);
v___x_260_ = lean_apply_1(v___y_252_, v_val_259_);
v___y_211_ = v___y_249_;
v___y_212_ = v___y_250_;
v___y_213_ = v___y_251_;
v___y_214_ = v___y_253_;
v___y_215_ = v___y_254_;
v___y_216_ = v___y_255_;
v___y_217_ = v___y_256_;
v___y_218_ = v___x_260_;
goto v___jp_210_;
}
else
{
lean_object* v_val_261_; 
lean_dec_ref(v___y_252_);
v_val_261_ = lean_ctor_get(v___y_247_, 0);
lean_inc(v_val_261_);
lean_dec_ref(v___y_247_);
if (lean_obj_tag(v_val_261_) == 0)
{
lean_object* v_val_262_; lean_object* v___x_263_; 
v_val_262_ = lean_ctor_get(v_docString_x3f_257_, 0);
lean_inc(v_val_262_);
lean_dec_ref(v_docString_x3f_257_);
v___x_263_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__2, &l_Lean_Lsp_CompletionItem_resolve___closed__2_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__2);
v___y_233_ = v_val_262_;
v___y_234_ = v___y_249_;
v___y_235_ = v___y_250_;
v___y_236_ = v___y_251_;
v___y_237_ = v___y_253_;
v___y_238_ = v___y_254_;
v___y_239_ = v___y_255_;
v___y_240_ = v___y_256_;
v___y_241_ = v___x_263_;
goto v___jp_232_;
}
else
{
lean_object* v_val_264_; lean_object* v_val_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_val_264_ = lean_ctor_get(v_docString_x3f_257_, 0);
lean_inc(v_val_264_);
lean_dec_ref(v_docString_x3f_257_);
v_val_265_ = lean_ctor_get(v_val_261_, 0);
lean_inc(v_val_265_);
lean_dec_ref(v_val_261_);
v___x_266_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__3, &l_Lean_Lsp_CompletionItem_resolve___closed__3_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__3);
v___x_267_ = l_addParenHeuristic(v_val_265_);
v___x_268_ = lean_string_append(v___x_266_, v___x_267_);
lean_dec_ref(v___x_267_);
v___x_269_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__4, &l_Lean_Lsp_CompletionItem_resolve___closed__4_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__4);
v___x_270_ = lean_string_append(v___x_268_, v___x_269_);
v___y_233_ = v_val_264_;
v___y_234_ = v___y_249_;
v___y_235_ = v___y_250_;
v___y_236_ = v___y_251_;
v___y_237_ = v___y_253_;
v___y_238_ = v___y_254_;
v___y_239_ = v___y_255_;
v___y_240_ = v___y_256_;
v___y_241_ = v___x_270_;
goto v___jp_232_;
}
}
}
}
v___jp_271_:
{
if (lean_obj_tag(v_id_204_) == 0)
{
lean_object* v_declName_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_307_; 
v_declName_285_ = lean_ctor_get(v_id_204_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_id_204_);
if (v_isSharedCheck_307_ == 0)
{
v___x_287_ = v_id_204_;
v_isShared_288_ = v_isSharedCheck_307_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_declName_285_);
lean_dec(v_id_204_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_307_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_st_ref_get(v___y_272_);
lean_dec(v___x_289_);
v___x_290_ = l_Lean_findDocString_x3f(v_env_222_, v_declName_285_, v___y_283_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; 
lean_del_object(v___x_287_);
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref(v___x_290_);
v___y_247_ = v___y_284_;
v___y_248_ = v___y_278_;
v___y_249_ = v___y_274_;
v___y_250_ = v___y_275_;
v___y_251_ = v___y_279_;
v___y_252_ = v___y_280_;
v___y_253_ = v___y_281_;
v___y_254_ = v___y_276_;
v___y_255_ = v___y_277_;
v___y_256_ = v___y_282_;
v_docString_x3f_257_ = v_a_291_;
goto v___jp_246_;
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_306_; 
lean_dec(v___y_284_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec(v___y_278_);
lean_dec(v___y_277_);
lean_dec(v___y_276_);
lean_dec(v___y_275_);
lean_dec(v___y_274_);
v_a_292_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_306_ == 0)
{
v___x_294_ = v___x_290_;
v_isShared_295_ = v_isSharedCheck_306_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_290_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_306_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v_ref_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
v_ref_296_ = lean_ctor_get(v___y_273_, 5);
v___x_297_ = lean_io_error_to_string(v_a_292_);
if (v_isShared_288_ == 0)
{
lean_ctor_set_tag(v___x_287_, 3);
lean_ctor_set(v___x_287_, 0, v___x_297_);
v___x_299_ = v___x_287_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_305_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_300_ = l_Lean_MessageData_ofFormat(v___x_299_);
lean_inc(v_ref_296_);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v_ref_296_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_301_);
v___x_303_ = v___x_294_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
}
else
{
lean_object* v___x_308_; 
lean_dec_ref(v_env_222_);
lean_dec_ref(v_id_204_);
v___x_308_ = lean_box(0);
v___y_247_ = v___y_284_;
v___y_248_ = v___y_278_;
v___y_249_ = v___y_274_;
v___y_250_ = v___y_275_;
v___y_251_ = v___y_279_;
v___y_252_ = v___y_280_;
v___y_253_ = v___y_281_;
v___y_254_ = v___y_276_;
v___y_255_ = v___y_277_;
v___y_256_ = v___y_282_;
v_docString_x3f_257_ = v___x_308_;
goto v___jp_246_;
}
}
v___jp_309_:
{
lean_object* v___x_323_; 
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v___y_322_);
v___y_272_ = v___y_310_;
v___y_273_ = v___y_311_;
v___y_274_ = v___y_312_;
v___y_275_ = v___y_313_;
v___y_276_ = v___y_314_;
v___y_277_ = v___y_315_;
v___y_278_ = v___y_316_;
v___y_279_ = v___y_317_;
v___y_280_ = v___y_318_;
v___y_281_ = v___y_319_;
v___y_282_ = v___y_320_;
v___y_283_ = v___y_321_;
v___y_284_ = v___x_323_;
goto v___jp_271_;
}
v___jp_324_:
{
if (lean_obj_tag(v_documentation_x3f_328_) == 0)
{
lean_object* v___f_336_; uint8_t v___x_337_; 
lean_dec_ref(v_item_325_);
v___f_336_ = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lam__1___boxed), 3, 2);
lean_closure_set(v___f_336_, 0, v_documentation_x3f_328_);
lean_closure_set(v___f_336_, 1, v___f_231_);
v___x_337_ = 1;
if (lean_obj_tag(v_id_204_) == 0)
{
lean_object* v_declName_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_declName_338_ = lean_ctor_get(v_id_204_, 0);
v___x_339_ = l_Lean_Linter_instInhabitedDeprecationEntry_default;
v___x_340_ = l_Lean_Linter_deprecatedAttr;
lean_inc(v_declName_338_);
lean_inc_ref(v_env_222_);
v___x_341_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_339_, v___x_340_, v_env_222_, v_declName_338_);
if (lean_obj_tag(v___x_341_) == 1)
{
lean_object* v_val_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_376_; 
v_val_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_376_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_376_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_val_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_376_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v_text_x3f_346_; 
v_text_x3f_346_ = lean_ctor_get(v_val_342_, 1);
if (lean_obj_tag(v_text_x3f_346_) == 1)
{
lean_object* v___x_348_; 
lean_inc_ref(v_text_x3f_346_);
lean_dec(v_val_342_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v_text_x3f_346_);
v___x_348_ = v___x_344_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_text_x3f_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
v___y_272_ = v___y_335_;
v___y_273_ = v___y_334_;
v___y_274_ = v_detail_x3f_327_;
v___y_275_ = v_data_x3f_332_;
v___y_276_ = v_tags_x3f_333_;
v___y_277_ = v_textEdit_x3f_330_;
v___y_278_ = v_documentation_x3f_328_;
v___y_279_ = v_kind_x3f_329_;
v___y_280_ = v___f_336_;
v___y_281_ = v_sortText_x3f_331_;
v___y_282_ = v_label_326_;
v___y_283_ = v___x_337_;
v___y_284_ = v___x_348_;
goto v___jp_271_;
}
}
else
{
lean_object* v_newName_x3f_350_; 
v_newName_x3f_350_ = lean_ctor_get(v_val_342_, 0);
lean_inc(v_newName_x3f_350_);
lean_dec(v_val_342_);
if (lean_obj_tag(v_newName_x3f_350_) == 1)
{
lean_object* v_val_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_367_; 
lean_del_object(v___x_344_);
v_val_351_ = lean_ctor_get(v_newName_x3f_350_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v_newName_x3f_350_);
if (v_isSharedCheck_367_ == 0)
{
v___x_353_ = v_newName_x3f_350_;
v_isShared_354_ = v_isSharedCheck_367_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_val_351_);
lean_dec(v_newName_x3f_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_367_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_355_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__5, &l_Lean_Lsp_CompletionItem_resolve___closed__5_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__5);
lean_inc(v_declName_338_);
v___x_356_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_338_, v___x_337_);
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
lean_dec_ref(v___x_356_);
v___x_358_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__6, &l_Lean_Lsp_CompletionItem_resolve___closed__6_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__6);
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
v___x_360_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_351_, v___x_337_);
v___x_361_ = lean_string_append(v___x_359_, v___x_360_);
lean_dec_ref(v___x_360_);
v___x_362_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__7, &l_Lean_Lsp_CompletionItem_resolve___closed__7_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__7);
v___x_363_ = lean_string_append(v___x_361_, v___x_362_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_363_);
v___x_365_ = v___x_353_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
v___y_310_ = v___y_335_;
v___y_311_ = v___y_334_;
v___y_312_ = v_detail_x3f_327_;
v___y_313_ = v_data_x3f_332_;
v___y_314_ = v_tags_x3f_333_;
v___y_315_ = v_textEdit_x3f_330_;
v___y_316_ = v_documentation_x3f_328_;
v___y_317_ = v_kind_x3f_329_;
v___y_318_ = v___f_336_;
v___y_319_ = v_sortText_x3f_331_;
v___y_320_ = v_label_326_;
v___y_321_ = v___x_337_;
v___y_322_ = v___x_365_;
goto v___jp_309_;
}
}
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
lean_dec(v_newName_x3f_350_);
v___x_368_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__5, &l_Lean_Lsp_CompletionItem_resolve___closed__5_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__5);
lean_inc(v_declName_338_);
v___x_369_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_338_, v___x_337_);
v___x_370_ = lean_string_append(v___x_368_, v___x_369_);
lean_dec_ref(v___x_369_);
v___x_371_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_resolve___closed__8, &l_Lean_Lsp_CompletionItem_resolve___closed__8_once, _init_l_Lean_Lsp_CompletionItem_resolve___closed__8);
v___x_372_ = lean_string_append(v___x_370_, v___x_371_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v___x_372_);
v___x_374_ = v___x_344_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
v___y_310_ = v___y_335_;
v___y_311_ = v___y_334_;
v___y_312_ = v_detail_x3f_327_;
v___y_313_ = v_data_x3f_332_;
v___y_314_ = v_tags_x3f_333_;
v___y_315_ = v_textEdit_x3f_330_;
v___y_316_ = v_documentation_x3f_328_;
v___y_317_ = v_kind_x3f_329_;
v___y_318_ = v___f_336_;
v___y_319_ = v_sortText_x3f_331_;
v___y_320_ = v_label_326_;
v___y_321_ = v___x_337_;
v___y_322_ = v___x_374_;
goto v___jp_309_;
}
}
}
}
}
else
{
lean_object* v___x_377_; 
lean_dec(v___x_341_);
v___x_377_ = lean_box(0);
v___y_272_ = v___y_335_;
v___y_273_ = v___y_334_;
v___y_274_ = v_detail_x3f_327_;
v___y_275_ = v_data_x3f_332_;
v___y_276_ = v_tags_x3f_333_;
v___y_277_ = v_textEdit_x3f_330_;
v___y_278_ = v_documentation_x3f_328_;
v___y_279_ = v_kind_x3f_329_;
v___y_280_ = v___f_336_;
v___y_281_ = v_sortText_x3f_331_;
v___y_282_ = v_label_326_;
v___y_283_ = v___x_337_;
v___y_284_ = v___x_377_;
goto v___jp_271_;
}
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_box(0);
v___y_272_ = v___y_335_;
v___y_273_ = v___y_334_;
v___y_274_ = v_detail_x3f_327_;
v___y_275_ = v_data_x3f_332_;
v___y_276_ = v_tags_x3f_333_;
v___y_277_ = v_textEdit_x3f_330_;
v___y_278_ = v_documentation_x3f_328_;
v___y_279_ = v_kind_x3f_329_;
v___y_280_ = v___f_336_;
v___y_281_ = v_sortText_x3f_331_;
v___y_282_ = v_label_326_;
v___y_283_ = v___x_337_;
v___y_284_ = v___x_378_;
goto v___jp_271_;
}
}
else
{
lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_tags_x3f_333_);
lean_dec(v_data_x3f_332_);
lean_dec(v_sortText_x3f_331_);
lean_dec(v_textEdit_x3f_330_);
lean_dec(v_kind_x3f_329_);
lean_dec(v_detail_x3f_327_);
lean_dec_ref(v_label_326_);
lean_dec_ref(v_env_222_);
lean_dec_ref(v_id_204_);
v_isSharedCheck_385_ = !lean_is_exclusive(v_documentation_x3f_328_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_documentation_x3f_328_, 0);
lean_dec(v_unused_386_);
v___x_380_ = v_documentation_x3f_328_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_dec(v_documentation_x3f_328_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 0);
lean_ctor_set(v___x_380_, 0, v_item_325_);
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_item_325_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
v___jp_387_:
{
lean_object* v___x_389_; 
lean_inc(v_tags_x3f_230_);
lean_inc(v_data_x3f_229_);
lean_inc(v_sortText_x3f_228_);
lean_inc(v_textEdit_x3f_227_);
lean_inc(v_kind_x3f_226_);
lean_inc(v_documentation_x3f_225_);
lean_inc(v_a_388_);
lean_inc_ref(v_label_223_);
v___x_389_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_389_, 0, v_label_223_);
lean_ctor_set(v___x_389_, 1, v_a_388_);
lean_ctor_set(v___x_389_, 2, v_documentation_x3f_225_);
lean_ctor_set(v___x_389_, 3, v_kind_x3f_226_);
lean_ctor_set(v___x_389_, 4, v_textEdit_x3f_227_);
lean_ctor_set(v___x_389_, 5, v_sortText_x3f_228_);
lean_ctor_set(v___x_389_, 6, v_data_x3f_229_);
lean_ctor_set(v___x_389_, 7, v_tags_x3f_230_);
v_item_325_ = v___x_389_;
v_label_326_ = v_label_223_;
v_detail_x3f_327_ = v_a_388_;
v_documentation_x3f_328_ = v_documentation_x3f_225_;
v_kind_x3f_329_ = v_kind_x3f_226_;
v_textEdit_x3f_330_ = v_textEdit_x3f_227_;
v_sortText_x3f_331_ = v_sortText_x3f_228_;
v_data_x3f_332_ = v_data_x3f_229_;
v_tags_x3f_333_ = v_tags_x3f_230_;
v___y_334_ = v_a_207_;
v___y_335_ = v_a_208_;
goto v___jp_324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___boxed(lean_object* v_item_414_, lean_object* v_id_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Lsp_CompletionItem_resolve(v_item_414_, v_id_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f(lean_object* v_fileMap_422_, lean_object* v_hoverPos_423_, lean_object* v_cmdStx_424_, lean_object* v_infoTree_425_, lean_object* v_item_426_, lean_object* v_id_427_, lean_object* v_completionInfoPos_428_){
_start:
{
lean_object* v___x_430_; lean_object* v_fst_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_430_ = l_Lean_Server_Completion_findCompletionInfosAt(v_fileMap_422_, v_hoverPos_423_, v_cmdStx_424_, v_infoTree_425_);
v_fst_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_fst_431_);
lean_dec_ref(v___x_430_);
v___x_432_ = lean_array_get_size(v_fst_431_);
v___x_433_ = lean_nat_dec_lt(v_completionInfoPos_428_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
lean_dec(v_fst_431_);
lean_dec_ref(v_id_427_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_item_426_);
return v___x_434_;
}
else
{
lean_object* v___x_435_; lean_object* v_ctx_436_; lean_object* v_info_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_435_ = lean_array_fget(v_fst_431_, v_completionInfoPos_428_);
lean_dec(v_fst_431_);
v_ctx_436_ = lean_ctor_get(v___x_435_, 1);
lean_inc_ref(v_ctx_436_);
v_info_437_ = lean_ctor_get(v___x_435_, 2);
lean_inc_ref(v_info_437_);
lean_dec(v___x_435_);
v___x_438_ = l_Lean_Elab_CompletionInfo_lctx(v_info_437_);
lean_dec_ref(v_info_437_);
v___x_439_ = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___boxed), 7, 2);
lean_closure_set(v___x_439_, 0, v_item_426_);
lean_closure_set(v___x_439_, 1, v_id_427_);
v___x_440_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_436_, v___x_438_, v___x_439_);
return v___x_440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f___boxed(lean_object* v_fileMap_441_, lean_object* v_hoverPos_442_, lean_object* v_cmdStx_443_, lean_object* v_infoTree_444_, lean_object* v_item_445_, lean_object* v_id_446_, lean_object* v_completionInfoPos_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_Server_Completion_resolveCompletionItem_x3f(v_fileMap_441_, v_hoverPos_442_, v_cmdStx_443_, v_infoTree_444_, v_item_445_, v_id_446_, v_completionInfoPos_447_);
lean_dec(v_completionInfoPos_447_);
return v_res_449_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Deprecated(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin);
lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionResolution(builtin);
}
#ifdef __cplusplus
}
#endif
