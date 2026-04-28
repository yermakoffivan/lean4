// Lean compiler output
// Module: Lean.Meta.CheckTactic
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0;
static lean_once_cell_t l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1;
static lean_once_cell_t l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2;
static lean_once_cell_t l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3;
static lean_once_cell_t l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0;
static lean_once_cell_t l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1;
static lean_once_cell_t l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2;
static lean_once_cell_t l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("CheckTactic", 11, 11);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("CheckGoalType", 13, 13);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType(lean_object* v_val_10_, lean_object* v_type_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Meta_mkFreshLevelMVar(v_a_12_, v_a_13_, v_a_14_, v_a_15_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_30_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_30_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_30_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_30_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_22_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4);
v___x_23_ = lean_box(0);
v___x_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_24_, 0, v_a_18_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = l_Lean_mkConst(v___x_22_, v___x_24_);
v___x_26_ = l_Lean_mkAppB(v___x_25_, v_type_11_, v_val_10_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v___x_26_);
v___x_28_ = v___x_20_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
else
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
lean_dec_ref(v_type_11_);
lean_dec_ref(v_val_10_);
v_a_31_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_17_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_17_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType___boxed(lean_object* v_val_39_, lean_object* v_type_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Meta_CheckTactic_mkCheckGoalType(v_val_39_, v_type_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1(lean_object* v_msgData_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v___x_53_; lean_object* v_env_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v_mctx_57_; lean_object* v_lctx_58_; lean_object* v_options_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_53_ = lean_st_ref_get(v___y_51_);
v_env_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc_ref(v_env_54_);
lean_dec(v___x_53_);
v___x_55_ = lean_st_ref_get(v___y_51_);
lean_dec(v___x_55_);
v___x_56_ = lean_st_ref_get(v___y_49_);
v_mctx_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc_ref(v_mctx_57_);
lean_dec(v___x_56_);
v_lctx_58_ = lean_ctor_get(v___y_48_, 2);
v_options_59_ = lean_ctor_get(v___y_50_, 2);
lean_inc_ref(v_options_59_);
lean_inc_ref(v_lctx_58_);
v___x_60_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_60_, 0, v_env_54_);
lean_ctor_set(v___x_60_, 1, v_mctx_57_);
lean_ctor_set(v___x_60_, 2, v_lctx_58_);
lean_ctor_set(v___x_60_, 3, v_options_59_);
v___x_61_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v_msgData_47_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1(v_msgData_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg(lean_object* v_msg_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_ref_76_; lean_object* v___x_77_; lean_object* v_a_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_86_; 
v_ref_76_ = lean_ctor_get(v___y_73_, 5);
v___x_77_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0_spec__1(v_msg_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
v_a_78_ = lean_ctor_get(v___x_77_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_86_ == 0)
{
v___x_80_ = v___x_77_;
v_isShared_81_ = v_isSharedCheck_86_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_a_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_86_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v___x_84_; 
lean_inc(v_ref_76_);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v_ref_76_);
lean_ctor_set(v___x_82_, 1, v_a_78_);
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 1);
lean_ctor_set(v___x_80_, 0, v___x_82_);
v___x_84_ = v___x_80_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg___boxed(lean_object* v_msg_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg(v_msg_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg(lean_object* v_ref_94_, lean_object* v_msg_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_fileName_101_; lean_object* v_fileMap_102_; lean_object* v_options_103_; lean_object* v_currRecDepth_104_; lean_object* v_maxRecDepth_105_; lean_object* v_ref_106_; lean_object* v_currNamespace_107_; lean_object* v_openDecls_108_; lean_object* v_initHeartbeats_109_; lean_object* v_maxHeartbeats_110_; lean_object* v_quotContext_111_; lean_object* v_currMacroScope_112_; uint8_t v_diag_113_; lean_object* v_cancelTk_x3f_114_; uint8_t v_suppressElabErrors_115_; lean_object* v_inheritedTraceOptions_116_; lean_object* v_ref_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_fileName_101_ = lean_ctor_get(v___y_98_, 0);
v_fileMap_102_ = lean_ctor_get(v___y_98_, 1);
v_options_103_ = lean_ctor_get(v___y_98_, 2);
v_currRecDepth_104_ = lean_ctor_get(v___y_98_, 3);
v_maxRecDepth_105_ = lean_ctor_get(v___y_98_, 4);
v_ref_106_ = lean_ctor_get(v___y_98_, 5);
v_currNamespace_107_ = lean_ctor_get(v___y_98_, 6);
v_openDecls_108_ = lean_ctor_get(v___y_98_, 7);
v_initHeartbeats_109_ = lean_ctor_get(v___y_98_, 8);
v_maxHeartbeats_110_ = lean_ctor_get(v___y_98_, 9);
v_quotContext_111_ = lean_ctor_get(v___y_98_, 10);
v_currMacroScope_112_ = lean_ctor_get(v___y_98_, 11);
v_diag_113_ = lean_ctor_get_uint8(v___y_98_, sizeof(void*)*14);
v_cancelTk_x3f_114_ = lean_ctor_get(v___y_98_, 12);
v_suppressElabErrors_115_ = lean_ctor_get_uint8(v___y_98_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_116_ = lean_ctor_get(v___y_98_, 13);
v_ref_117_ = l_Lean_replaceRef(v_ref_94_, v_ref_106_);
lean_inc_ref(v_inheritedTraceOptions_116_);
lean_inc(v_cancelTk_x3f_114_);
lean_inc(v_currMacroScope_112_);
lean_inc(v_quotContext_111_);
lean_inc(v_maxHeartbeats_110_);
lean_inc(v_initHeartbeats_109_);
lean_inc(v_openDecls_108_);
lean_inc(v_currNamespace_107_);
lean_inc(v_maxRecDepth_105_);
lean_inc(v_currRecDepth_104_);
lean_inc_ref(v_options_103_);
lean_inc_ref(v_fileMap_102_);
lean_inc_ref(v_fileName_101_);
v___x_118_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_118_, 0, v_fileName_101_);
lean_ctor_set(v___x_118_, 1, v_fileMap_102_);
lean_ctor_set(v___x_118_, 2, v_options_103_);
lean_ctor_set(v___x_118_, 3, v_currRecDepth_104_);
lean_ctor_set(v___x_118_, 4, v_maxRecDepth_105_);
lean_ctor_set(v___x_118_, 5, v_ref_117_);
lean_ctor_set(v___x_118_, 6, v_currNamespace_107_);
lean_ctor_set(v___x_118_, 7, v_openDecls_108_);
lean_ctor_set(v___x_118_, 8, v_initHeartbeats_109_);
lean_ctor_set(v___x_118_, 9, v_maxHeartbeats_110_);
lean_ctor_set(v___x_118_, 10, v_quotContext_111_);
lean_ctor_set(v___x_118_, 11, v_currMacroScope_112_);
lean_ctor_set(v___x_118_, 12, v_cancelTk_x3f_114_);
lean_ctor_set(v___x_118_, 13, v_inheritedTraceOptions_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*14, v_diag_113_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*14 + 1, v_suppressElabErrors_115_);
v___x_119_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg(v_msg_95_, v___y_96_, v___y_97_, v___x_118_, v___y_99_);
lean_dec_ref(v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg___boxed(lean_object* v_ref_120_, lean_object* v_msg_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg(v_ref_120_, v_msg_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v_ref_120_);
return v_res_127_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("Goal", 4, 4);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0, &l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0_once, _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__0);
v___x_130_ = l_Lean_stringToMessageData(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_mk_string_unchecked("\nis expected to match ", 22, 22);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2, &l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2_once, _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__2);
v___x_133_ = l_Lean_stringToMessageData(v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType(lean_object* v_stx_134_, lean_object* v_goalType_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lean_Meta_mkFreshLevelMVar(v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc_n(v_a_142_, 2);
lean_dec_ref(v___x_141_);
v___x_143_ = l_Lean_Expr_sort___override(v_a_142_);
v___x_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
v___x_145_ = 0;
v___x_146_ = lean_box(0);
v___x_147_ = l_Lean_Meta_mkFreshExprMVar(v___x_144_, v___x_145_, v___x_146_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc_n(v_a_148_, 2);
lean_dec_ref(v___x_147_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v_a_148_);
v___x_150_ = l_Lean_Meta_mkFreshExprMVar(v___x_149_, v___x_145_, v___x_146_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_197_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_197_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_197_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_197_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_161_ = lean_obj_once(&l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4, &l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4_once, _init_l_Lean_Meta_CheckTactic_mkCheckGoalType___closed__4);
v___x_162_ = lean_box(0);
lean_inc(v_a_142_);
v___x_163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_163_, 0, v_a_142_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = l_Lean_Expr_const___override(v___x_161_, v___x_163_);
v___x_165_ = lean_unsigned_to_nat(2u);
v___x_166_ = lean_mk_empty_array_with_capacity(v___x_165_);
lean_inc(v_a_148_);
v___x_167_ = lean_array_push(v___x_166_, v_a_148_);
lean_inc(v_a_151_);
v___x_168_ = lean_array_push(v___x_167_, v_a_151_);
v___x_169_ = l_Lean_mkAppN(v___x_164_, v___x_168_);
lean_dec_ref(v___x_168_);
lean_inc_ref(v___x_169_);
lean_inc_ref(v_goalType_135_);
v___x_170_ = l_Lean_Meta_isExprDefEq(v_goalType_135_, v___x_169_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; uint8_t v___x_172_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_a_171_);
lean_dec_ref(v___x_170_);
v___x_172_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_del_object(v___x_153_);
lean_dec(v_a_151_);
lean_dec(v_a_148_);
lean_dec(v_a_142_);
v___x_173_ = lean_obj_once(&l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1, &l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1_once, _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__1);
v___x_174_ = l_Lean_indentExpr(v_goalType_135_);
v___x_175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = lean_obj_once(&l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3, &l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3_once, _init_l_Lean_Meta_CheckTactic_matchCheckGoalType___closed__3);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = l_Lean_indentExpr(v___x_169_);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg(v_stx_134_, v___x_179_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
v_a_181_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_180_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_180_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_dec_ref(v___x_169_);
lean_dec_ref(v_goalType_135_);
goto v___jp_155_;
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v___x_169_);
lean_del_object(v___x_153_);
lean_dec(v_a_151_);
lean_dec(v_a_148_);
lean_dec(v_a_142_);
lean_dec_ref(v_goalType_135_);
v_a_189_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_170_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_170_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
v___jp_155_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v_a_148_);
lean_ctor_set(v___x_156_, 1, v_a_142_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v_a_151_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_157_);
v___x_159_ = v___x_153_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_dec(v_a_148_);
lean_dec(v_a_142_);
lean_dec_ref(v_goalType_135_);
v_a_198_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_150_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_150_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
lean_dec(v_a_142_);
lean_dec_ref(v_goalType_135_);
v_a_206_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_213_ == 0)
{
v___x_208_ = v___x_147_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_147_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec_ref(v_goalType_135_);
v_a_214_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_141_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_141_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType___boxed(lean_object* v_stx_222_, lean_object* v_goalType_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Meta_CheckTactic_matchCheckGoalType(v_stx_222_, v_goalType_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_stx_222_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0(lean_object* v_00_u03b1_230_, lean_object* v_ref_231_, lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___redArg(v_ref_231_, v_msg_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0___boxed(lean_object* v_00_u03b1_239_, lean_object* v_ref_240_, lean_object* v_msg_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0(v_00_u03b1_239_, v_ref_240_, v_msg_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec(v_ref_240_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0(lean_object* v_00_u03b1_248_, lean_object* v_msg_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___redArg(v_msg_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0___boxed(lean_object* v_00_u03b1_256_, lean_object* v_msg_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_CheckTactic_matchCheckGoalType_spec__0_spec__0(v_00_u03b1_256_, v_msg_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_263_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_CheckTactic(builtin);
}
#ifdef __cplusplus
}
#endif
