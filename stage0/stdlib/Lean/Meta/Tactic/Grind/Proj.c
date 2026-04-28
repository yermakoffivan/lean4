// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Proj
// Imports: public import Lean.Meta.Tactic.Grind.Types
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(lean_object* v_declName_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_env_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_env_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_env_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_5_, v_declName_1_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg___boxed(lean_object* v_declName_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_8_, v___y_9_);
lean_dec(v___y_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(lean_object* v_declName_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_12_, v___y_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___boxed(lean_object* v_declName_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(v_declName_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
lean_dec_ref(v___y_30_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
lean_dec(v___y_26_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(lean_object* v_msgData_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v___x_44_; lean_object* v_env_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v_mctx_48_; lean_object* v_lctx_49_; lean_object* v_options_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_44_ = lean_st_ref_get(v___y_42_);
v_env_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc_ref(v_env_45_);
lean_dec(v___x_44_);
v___x_46_ = lean_st_ref_get(v___y_42_);
lean_dec(v___x_46_);
v___x_47_ = lean_st_ref_get(v___y_40_);
v_mctx_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc_ref(v_mctx_48_);
lean_dec(v___x_47_);
v_lctx_49_ = lean_ctor_get(v___y_39_, 2);
v_options_50_ = lean_ctor_get(v___y_41_, 2);
lean_inc_ref(v_options_50_);
lean_inc_ref(v_lctx_49_);
v___x_51_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_51_, 0, v_env_45_);
lean_ctor_set(v___x_51_, 1, v_mctx_48_);
lean_ctor_set(v___x_51_, 2, v_lctx_49_);
lean_ctor_set(v___x_51_, 3, v_options_50_);
v___x_52_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v_msgData_38_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1___boxed(lean_object* v_msgData_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(v_msgData_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_60_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_61_; double v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = lean_float_of_nat(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_mk_string_unchecked("", 0, 0);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = lean_mk_empty_array_with_capacity(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(lean_object* v_cls_66_, lean_object* v_msg_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v_ref_73_; lean_object* v___x_74_; lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_119_; 
v_ref_73_ = lean_ctor_get(v___y_70_, 5);
v___x_74_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(v_msg_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
v_a_75_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_119_ == 0)
{
v___x_77_ = v___x_74_;
v_isShared_78_ = v_isSharedCheck_119_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_74_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_119_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; lean_object* v_traceState_80_; lean_object* v_env_81_; lean_object* v_nextMacroScope_82_; lean_object* v_ngen_83_; lean_object* v_auxDeclNGen_84_; lean_object* v_cache_85_; lean_object* v_messages_86_; lean_object* v_infoState_87_; lean_object* v_snapshotTasks_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_118_; 
v___x_79_ = lean_st_ref_take(v___y_71_);
v_traceState_80_ = lean_ctor_get(v___x_79_, 4);
v_env_81_ = lean_ctor_get(v___x_79_, 0);
v_nextMacroScope_82_ = lean_ctor_get(v___x_79_, 1);
v_ngen_83_ = lean_ctor_get(v___x_79_, 2);
v_auxDeclNGen_84_ = lean_ctor_get(v___x_79_, 3);
v_cache_85_ = lean_ctor_get(v___x_79_, 5);
v_messages_86_ = lean_ctor_get(v___x_79_, 6);
v_infoState_87_ = lean_ctor_get(v___x_79_, 7);
v_snapshotTasks_88_ = lean_ctor_get(v___x_79_, 8);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_118_ == 0)
{
v___x_90_ = v___x_79_;
v_isShared_91_ = v_isSharedCheck_118_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_snapshotTasks_88_);
lean_inc(v_infoState_87_);
lean_inc(v_messages_86_);
lean_inc(v_cache_85_);
lean_inc(v_traceState_80_);
lean_inc(v_auxDeclNGen_84_);
lean_inc(v_ngen_83_);
lean_inc(v_nextMacroScope_82_);
lean_inc(v_env_81_);
lean_dec(v___x_79_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_118_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
uint64_t v_tid_92_; lean_object* v_traces_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_117_; 
v_tid_92_ = lean_ctor_get_uint64(v_traceState_80_, sizeof(void*)*1);
v_traces_93_ = lean_ctor_get(v_traceState_80_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v_traceState_80_);
if (v_isSharedCheck_117_ == 0)
{
v___x_95_ = v_traceState_80_;
v_isShared_96_ = v_isSharedCheck_117_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_traces_93_);
lean_dec(v_traceState_80_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_117_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; double v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_97_ = lean_box(0);
v___x_98_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0);
v___x_99_ = 0;
v___x_100_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1);
v___x_101_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_101_, 0, v_cls_66_);
lean_ctor_set(v___x_101_, 1, v___x_97_);
lean_ctor_set(v___x_101_, 2, v___x_100_);
lean_ctor_set_float(v___x_101_, sizeof(void*)*3, v___x_98_);
lean_ctor_set_float(v___x_101_, sizeof(void*)*3 + 8, v___x_98_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*3 + 16, v___x_99_);
v___x_102_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2, &l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2);
v___x_103_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_103_, 0, v___x_101_);
lean_ctor_set(v___x_103_, 1, v_a_75_);
lean_ctor_set(v___x_103_, 2, v___x_102_);
lean_inc(v_ref_73_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_ref_73_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = l_Lean_PersistentArray_push___redArg(v_traces_93_, v___x_104_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v___x_105_);
v___x_107_ = v___x_95_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_105_);
lean_ctor_set_uint64(v_reuseFailAlloc_116_, sizeof(void*)*1, v_tid_92_);
v___x_107_ = v_reuseFailAlloc_116_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_109_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 4, v___x_107_);
v___x_109_ = v___x_90_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_env_81_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v_nextMacroScope_82_);
lean_ctor_set(v_reuseFailAlloc_115_, 2, v_ngen_83_);
lean_ctor_set(v_reuseFailAlloc_115_, 3, v_auxDeclNGen_84_);
lean_ctor_set(v_reuseFailAlloc_115_, 4, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_115_, 5, v_cache_85_);
lean_ctor_set(v_reuseFailAlloc_115_, 6, v_messages_86_);
lean_ctor_set(v_reuseFailAlloc_115_, 7, v_infoState_87_);
lean_ctor_set(v_reuseFailAlloc_115_, 8, v_snapshotTasks_88_);
v___x_109_ = v_reuseFailAlloc_115_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_110_ = lean_st_ref_set(v___y_71_, v___x_109_);
v___x_111_ = lean_box(0);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v___x_111_);
v___x_113_ = v___x_77_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___boxed(lean_object* v_cls_120_, lean_object* v_msg_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v_cls_120_, v_msg_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(lean_object* v_a_128_, lean_object* v_b_129_){
_start:
{
lean_object* v_array_130_; lean_object* v_start_131_; lean_object* v_stop_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_145_; 
v_array_130_ = lean_ctor_get(v_a_128_, 0);
v_start_131_ = lean_ctor_get(v_a_128_, 1);
v_stop_132_ = lean_ctor_get(v_a_128_, 2);
v_isSharedCheck_145_ = !lean_is_exclusive(v_a_128_);
if (v_isSharedCheck_145_ == 0)
{
v___x_134_ = v_a_128_;
v_isShared_135_ = v_isSharedCheck_145_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_stop_132_);
lean_inc(v_start_131_);
lean_inc(v_array_130_);
lean_dec(v_a_128_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_145_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
uint8_t v___x_136_; 
v___x_136_ = lean_nat_dec_lt(v_start_131_, v_stop_132_);
if (v___x_136_ == 0)
{
lean_del_object(v___x_134_);
lean_dec(v_stop_132_);
lean_dec(v_start_131_);
lean_dec_ref(v_array_130_);
return v_b_129_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = lean_nat_add(v_start_131_, v___x_137_);
lean_inc_ref(v_array_130_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___x_138_);
v___x_140_ = v___x_134_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_array_130_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_stop_132_);
v___x_140_ = v_reuseFailAlloc_144_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_array_fget(v_array_130_, v_start_131_);
lean_dec(v_start_131_);
lean_dec_ref(v_array_130_);
v___x_142_ = lean_array_push(v_b_129_, v___x_141_);
v_a_128_ = v___x_140_;
v_b_129_ = v___x_142_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__0(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__1(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__2(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("proj", 4, 4);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__3(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__2, &l_Lean_Meta_Grind_propagateProjEq___closed__2_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__2);
v___x_150_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__1, &l_Lean_Meta_Grind_propagateProjEq___closed__1_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__1);
v___x_151_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__0, &l_Lean_Meta_Grind_propagateProjEq___closed__0_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__0);
v___x_152_ = l_Lean_Name_mkStr3(v___x_151_, v___x_150_, v___x_149_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__4(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__5(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__4, &l_Lean_Meta_Grind_propagateProjEq___closed__4_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__4);
v___x_155_ = l_Lean_Name_mkStr1(v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__6(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__3, &l_Lean_Meta_Grind_propagateProjEq___closed__3_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__3);
v___x_157_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__5, &l_Lean_Meta_Grind_propagateProjEq___closed__5_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__5);
v___x_158_ = l_Lean_Name_append(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__7(void){
_start:
{
lean_object* v___x_159_; lean_object* v_dummy_160_; 
v___x_159_ = lean_box(0);
v_dummy_160_ = l_Lean_Expr_sort___override(v___x_159_);
return v_dummy_160_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__8(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_mk_empty_array_with_capacity(v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq(lean_object* v_parent_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_projFn_175_; 
v_projFn_175_ = l_Lean_Expr_getAppFn(v_parent_163_);
if (lean_obj_tag(v_projFn_175_) == 4)
{
lean_object* v_declName_176_; lean_object* v___x_177_; lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_348_; 
v_declName_176_ = lean_ctor_get(v_projFn_175_, 0);
lean_inc(v_declName_176_);
v___x_177_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_176_, v_a_173_);
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_348_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_348_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_348_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
if (lean_obj_tag(v_a_178_) == 1)
{
lean_object* v_val_182_; lean_object* v_ctorName_183_; lean_object* v_numParams_184_; lean_object* v_i_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_val_182_ = lean_ctor_get(v_a_178_, 0);
lean_inc(v_val_182_);
lean_dec_ref(v_a_178_);
v_ctorName_183_ = lean_ctor_get(v_val_182_, 0);
lean_inc(v_ctorName_183_);
v_numParams_184_ = lean_ctor_get(v_val_182_, 1);
lean_inc(v_numParams_184_);
v_i_185_ = lean_ctor_get(v_val_182_, 2);
lean_inc(v_i_185_);
lean_dec(v_val_182_);
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_add(v_numParams_184_, v___x_186_);
v___x_188_ = l_Lean_Expr_getAppNumArgs(v_parent_163_);
v___x_189_ = lean_nat_dec_eq(v___x_187_, v___x_188_);
lean_dec(v___x_188_);
lean_dec(v___x_187_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec(v_ctorName_183_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v___x_190_ = lean_box(0);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_190_);
v___x_192_ = v___x_180_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
else
{
lean_object* v___x_194_; 
lean_del_object(v___x_180_);
lean_inc_ref(v_parent_163_);
v___x_194_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_parent_163_, v_a_164_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_335_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_335_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_335_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_335_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
uint8_t v___x_199_; 
v___x_199_ = lean_unbox(v_a_195_);
lean_dec(v_a_195_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_202_; 
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec(v_ctorName_183_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v___x_200_ = lean_box(0);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_200_);
v___x_202_ = v___x_197_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_200_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = l_Lean_Expr_appArg_x21(v_parent_163_);
lean_inc_ref(v___x_204_);
v___x_205_ = l_Lean_Meta_Grind_getRootENode___redArg(v___x_204_, v_a_164_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_326_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_326_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_326_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_326_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_self_210_; uint8_t v_heqProofs_211_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v_parentNew_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v_parentNew_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; uint8_t v___x_287_; 
v_self_210_ = lean_ctor_get(v_a_206_, 0);
lean_inc_ref(v_self_210_);
v_heqProofs_211_ = lean_ctor_get_uint8(v_a_206_, sizeof(void*)*11 + 4);
lean_dec(v_a_206_);
v___x_287_ = l_Lean_Expr_isAppOf(v_self_210_, v_ctorName_183_);
lean_dec(v_ctorName_183_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_290_; 
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec_ref(v___x_204_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v___x_288_ = lean_box(0);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_288_);
v___x_290_ = v___x_197_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
else
{
uint8_t v___x_292_; 
lean_del_object(v___x_197_);
v___x_292_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_204_, v_self_210_);
lean_dec_ref(v___x_204_);
if (v___x_292_ == 0)
{
if (v_heqProofs_211_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec_ref(v_projFn_175_);
v___x_293_ = l_Lean_Expr_appFn_x21(v_parent_163_);
lean_inc_ref(v_self_210_);
v___x_294_ = l_Lean_Expr_app___override(v___x_293_, v_self_210_);
v___x_295_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_294_, v_a_169_, v_a_173_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_296_);
lean_dec_ref(v___x_295_);
v_parentNew_264_ = v_a_296_;
v___y_265_ = v_a_164_;
v___y_266_ = v_a_165_;
v___y_267_ = v_a_166_;
v___y_268_ = v_a_167_;
v___y_269_ = v_a_168_;
v___y_270_ = v_a_169_;
v___y_271_ = v_a_170_;
v___y_272_ = v_a_171_;
v___y_273_ = v_a_172_;
v___y_274_ = v_a_173_;
goto v___jp_263_;
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec_ref(v_parent_163_);
v_a_297_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_295_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_295_);
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
else
{
lean_object* v_dummy_305_; lean_object* v_nargs_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_dummy_305_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__7, &l_Lean_Meta_Grind_propagateProjEq___closed__7_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__7);
v_nargs_306_ = l_Lean_Expr_getAppNumArgs(v_self_210_);
lean_inc(v_nargs_306_);
v___x_307_ = lean_mk_array(v_nargs_306_, v_dummy_305_);
v___x_308_ = lean_nat_sub(v_nargs_306_, v___x_186_);
lean_dec(v_nargs_306_);
lean_inc_ref_n(v_self_210_, 2);
v___x_309_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_self_210_, v___x_307_, v___x_308_);
v___x_310_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_184_);
v___x_311_ = l_Array_toSubarray___redArg(v___x_309_, v___x_310_, v_numParams_184_);
v___x_312_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__8, &l_Lean_Meta_Grind_propagateProjEq___closed__8_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__8);
v___x_313_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(v___x_311_, v___x_312_);
v___x_314_ = l_Lean_mkAppN(v_projFn_175_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = l_Lean_Expr_app___override(v___x_314_, v_self_210_);
v___x_316_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_315_, v_a_169_, v_a_173_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref(v___x_316_);
v_parentNew_264_ = v_a_317_;
v___y_265_ = v_a_164_;
v___y_266_ = v_a_165_;
v___y_267_ = v_a_166_;
v___y_268_ = v_a_167_;
v___y_269_ = v_a_168_;
v___y_270_ = v_a_169_;
v___y_271_ = v_a_170_;
v___y_272_ = v_a_171_;
v___y_273_ = v_a_172_;
v___y_274_ = v_a_173_;
goto v___jp_263_;
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec_ref(v_parent_163_);
v_a_318_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_316_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_316_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
else
{
lean_dec_ref(v_projFn_175_);
v_parentNew_243_ = v_parent_163_;
v___y_244_ = v_a_164_;
v___y_245_ = v_a_165_;
v___y_246_ = v_a_166_;
v___y_247_ = v_a_167_;
v___y_248_ = v_a_168_;
v___y_249_ = v_a_169_;
v___y_250_ = v_a_170_;
v___y_251_ = v_a_171_;
v___y_252_ = v_a_172_;
v___y_253_ = v_a_173_;
goto v___jp_242_;
}
}
v___jp_212_:
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = lean_nat_add(v_numParams_184_, v_i_185_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
v___x_221_ = l_Lean_Expr_getAppNumArgs(v_self_210_);
v___x_222_ = lean_nat_dec_lt(v___x_220_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_225_; 
lean_dec(v___x_221_);
lean_dec(v___x_220_);
lean_dec_ref(v___y_213_);
lean_dec_ref(v_self_210_);
v___x_223_ = lean_box(0);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_223_);
v___x_225_ = v___x_208_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
else
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_del_object(v___x_208_);
v___x_227_ = lean_nat_sub(v___x_221_, v___x_220_);
lean_dec(v___x_220_);
lean_dec(v___x_221_);
v___x_228_ = lean_nat_sub(v___x_227_, v___x_186_);
lean_dec(v___x_227_);
v___x_229_ = l_Lean_Expr_getRevArg_x21(v_self_210_, v___x_228_);
lean_dec_ref(v_self_210_);
lean_inc_ref(v___x_229_);
v___x_230_ = l_Lean_Meta_mkEqRefl(v___x_229_, v___y_216_, v___y_217_, v___y_218_, v___y_219_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; uint8_t v___x_232_; lean_object* v___x_233_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref(v___x_230_);
v___x_232_ = 0;
v___x_233_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___y_213_, v___x_229_, v_a_231_, v___x_232_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_);
return v___x_233_;
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec_ref(v___x_229_);
lean_dec_ref(v___y_213_);
v_a_234_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_230_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_230_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
v___jp_242_:
{
lean_object* v_options_254_; uint8_t v_hasTrace_255_; 
v_options_254_ = lean_ctor_get(v___y_252_, 2);
v_hasTrace_255_ = lean_ctor_get_uint8(v_options_254_, sizeof(void*)*1);
if (v_hasTrace_255_ == 0)
{
v___y_213_ = v_parentNew_243_;
v___y_214_ = v___y_244_;
v___y_215_ = v___y_246_;
v___y_216_ = v___y_250_;
v___y_217_ = v___y_251_;
v___y_218_ = v___y_252_;
v___y_219_ = v___y_253_;
goto v___jp_212_;
}
else
{
lean_object* v_inheritedTraceOptions_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_inheritedTraceOptions_256_ = lean_ctor_get(v___y_252_, 13);
v___x_257_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__3, &l_Lean_Meta_Grind_propagateProjEq___closed__3_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__3);
v___x_258_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__6, &l_Lean_Meta_Grind_propagateProjEq___closed__6_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__6);
v___x_259_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_256_, v_options_254_, v___x_258_);
if (v___x_259_ == 0)
{
v___y_213_ = v_parentNew_243_;
v___y_214_ = v___y_244_;
v___y_215_ = v___y_246_;
v___y_216_ = v___y_250_;
v___y_217_ = v___y_251_;
v___y_218_ = v___y_252_;
v___y_219_ = v___y_253_;
goto v___jp_212_;
}
else
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Meta_Grind_updateLastTag(v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref(v___x_260_);
lean_inc_ref(v_parentNew_243_);
v___x_261_ = l_Lean_MessageData_ofExpr(v_parentNew_243_);
v___x_262_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v___x_257_, v___x_261_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_dec_ref(v___x_262_);
v___y_213_ = v_parentNew_243_;
v___y_214_ = v___y_244_;
v___y_215_ = v___y_246_;
v___y_216_ = v___y_250_;
v___y_217_ = v___y_251_;
v___y_218_ = v___y_252_;
v___y_219_ = v___y_253_;
goto v___jp_212_;
}
else
{
lean_dec_ref(v_parentNew_243_);
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
return v___x_262_;
}
}
else
{
lean_dec_ref(v_parentNew_243_);
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
return v___x_260_;
}
}
}
}
v___jp_263_:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lean_Meta_Grind_getGeneration___redArg(v_parent_163_, v___y_265_, v___y_274_);
lean_dec_ref(v_parent_163_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref(v___x_275_);
v___x_277_ = lean_box(0);
lean_inc(v___y_274_);
lean_inc_ref(v___y_273_);
lean_inc(v___y_272_);
lean_inc_ref(v___y_271_);
lean_inc(v___y_270_);
lean_inc_ref(v___y_269_);
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc(v___y_265_);
lean_inc_ref(v_parentNew_264_);
v___x_278_ = lean_grind_internalize(v_parentNew_264_, v_a_276_, v___x_277_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_dec_ref(v___x_278_);
v_parentNew_243_ = v_parentNew_264_;
v___y_244_ = v___y_265_;
v___y_245_ = v___y_266_;
v___y_246_ = v___y_267_;
v___y_247_ = v___y_268_;
v___y_248_ = v___y_269_;
v___y_249_ = v___y_270_;
v___y_250_ = v___y_271_;
v___y_251_ = v___y_272_;
v___y_252_ = v___y_273_;
v___y_253_ = v___y_274_;
goto v___jp_242_;
}
else
{
lean_dec_ref(v_parentNew_264_);
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
return v___x_278_;
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref(v_parentNew_264_);
lean_dec_ref(v_self_210_);
lean_del_object(v___x_208_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
v_a_279_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_275_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_275_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec_ref(v___x_204_);
lean_del_object(v___x_197_);
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec(v_ctorName_183_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v_a_327_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_205_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_205_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v_i_185_);
lean_dec(v_numParams_184_);
lean_dec(v_ctorName_183_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v_a_336_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_194_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_194_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
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
}
else
{
lean_object* v___x_344_; lean_object* v___x_346_; 
lean_dec(v_a_178_);
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v___x_344_ = lean_box(0);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_344_);
v___x_346_ = v___x_180_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec_ref(v_projFn_175_);
lean_dec_ref(v_parent_163_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq___boxed(lean_object* v_parent_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Meta_Grind_propagateProjEq(v_parent_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec_ref(v_a_356_);
lean_dec(v_a_355_);
lean_dec_ref(v_a_354_);
lean_dec(v_a_353_);
lean_dec(v_a_352_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(lean_object* v_cls_364_, lean_object* v_msg_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v_cls_364_, v_msg_365_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___boxed(lean_object* v_cls_378_, lean_object* v_msg_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(v_cls_378_, v_msg_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec(v___y_380_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2(lean_object* v_inst_392_, lean_object* v_R_393_, lean_object* v_a_394_, lean_object* v_b_395_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(v_a_394_, v_b_395_);
return v___x_396_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
}
#ifdef __cplusplus
}
#endif
