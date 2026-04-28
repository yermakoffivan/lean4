// Lean compiler output
// Module: Lean.Elab.Eval
// Imports: public import Lean.Meta.Eval public import Lean.Elab.SyntheticMVars
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
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_e_1_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_mctx_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_cache_15_; lean_object* v_zetaDeltaFVarIds_16_; lean_object* v_postponed_17_; lean_object* v_diag_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v___x_7_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_7_);
v___x_8_ = lean_st_ref_get(v___y_2_);
v_mctx_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_mctx_9_);
lean_dec(v___x_8_);
v___x_10_ = l_Lean_instantiateMVarsCore(v_mctx_9_, v_e_1_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
v_snd_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_snd_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_13_);
v___x_14_ = lean_st_ref_take(v___y_2_);
v_cache_15_ = lean_ctor_get(v___x_14_, 1);
v_zetaDeltaFVarIds_16_ = lean_ctor_get(v___x_14_, 2);
v_postponed_17_ = lean_ctor_get(v___x_14_, 3);
v_diag_18_ = lean_ctor_get(v___x_14_, 4);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_28_);
v___x_20_ = v___x_14_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_diag_18_);
lean_inc(v_postponed_17_);
lean_inc(v_zetaDeltaFVarIds_16_);
lean_inc(v_cache_15_);
lean_dec(v___x_14_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v_snd_12_);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_12_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_cache_15_);
lean_ctor_set(v_reuseFailAlloc_26_, 2, v_zetaDeltaFVarIds_16_);
lean_ctor_set(v_reuseFailAlloc_26_, 3, v_postponed_17_);
lean_ctor_set(v_reuseFailAlloc_26_, 4, v_diag_18_);
v___x_23_ = v_reuseFailAlloc_26_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_st_ref_set(v___y_2_, v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_11_);
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg(v_e_34_, v___y_38_, v___y_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___boxed(lean_object* v_e_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0(v_e_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_51_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
v___x_53_ = l_Lean_Elab_abortTermExceptionId;
v___x_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg(){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___closed__0);
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg___boxed(lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg();
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1(lean_object* v_00_u03b1_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg();
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___boxed(lean_object* v_00_u03b1_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1(v_00_u03b1_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___lam__0(lean_object* v_value_78_, lean_object* v___x_79_, uint8_t v___x_80_, lean_object* v___x_81_, lean_object* v_type_82_, uint8_t v_safety_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_Elab_Term_elabTermEnsuringType(v_value_78_, v___x_79_, v___x_80_, v___x_80_, v___x_81_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; uint8_t v___x_93_; lean_object* v___x_94_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc(v_a_92_);
lean_dec_ref(v___x_91_);
v___x_93_ = 0;
v___x_94_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_93_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v___x_95_; 
lean_dec_ref(v___x_94_);
v___x_95_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_evalTerm_spec__0___redArg(v_a_92_, v___y_87_, v___y_89_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc_n(v_a_96_, 2);
lean_dec_ref(v___x_95_);
v___x_97_ = l_Lean_Meta_getMVars(v_a_96_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_98_);
lean_dec_ref(v___x_97_);
v___x_99_ = lean_box(0);
v___x_100_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_98_, v___x_99_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
lean_dec(v_a_98_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; uint8_t v___x_102_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
lean_dec_ref(v___x_100_);
v___x_102_ = lean_unbox(v_a_101_);
lean_dec(v_a_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_Meta_evalExpr___redArg(v_type_82_, v_a_96_, v_safety_83_, v___x_80_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_Term_evalTerm_spec__1___redArg();
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v___x_105_; 
lean_dec_ref(v___x_104_);
v___x_105_ = l_Lean_Meta_evalExpr___redArg(v_type_82_, v_a_96_, v_safety_83_, v___x_80_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_105_;
}
else
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
lean_dec(v_a_96_);
lean_dec_ref(v_type_82_);
v_a_106_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_104_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_104_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
lean_dec(v_a_96_);
lean_dec_ref(v_type_82_);
v_a_114_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_100_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_100_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec(v_a_96_);
lean_dec_ref(v_type_82_);
v_a_122_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_97_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_97_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec_ref(v_type_82_);
v_a_130_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_95_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_95_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec(v_a_92_);
lean_dec_ref(v_type_82_);
v_a_138_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_94_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_94_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
else
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec_ref(v_type_82_);
v_a_146_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_91_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_91_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___lam__0___boxed(lean_object* v_value_154_, lean_object* v___x_155_, lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v_type_158_, lean_object* v_safety_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
uint8_t v___x_3704__boxed_167_; uint8_t v_safety_boxed_168_; lean_object* v_res_169_; 
v___x_3704__boxed_167_ = lean_unbox(v___x_156_);
v_safety_boxed_168_ = lean_unbox(v_safety_159_);
v_res_169_ = l_Lean_Elab_Term_evalTerm___redArg___lam__0(v_value_154_, v___x_155_, v___x_3704__boxed_167_, v___x_157_, v_type_158_, v_safety_boxed_168_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_170_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__0);
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1);
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__1);
v___x_176_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
lean_ctor_set(v___x_176_, 2, v___x_175_);
lean_ctor_set(v___x_176_, 3, v___x_175_);
lean_ctor_set(v___x_176_, 4, v___x_175_);
lean_ctor_set(v___x_176_, 5, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(lean_object* v_env_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; lean_object* v_nextMacroScope_182_; lean_object* v_ngen_183_; lean_object* v_auxDeclNGen_184_; lean_object* v_traceState_185_; lean_object* v_messages_186_; lean_object* v_infoState_187_; lean_object* v_snapshotTasks_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v___x_181_ = lean_st_ref_take(v___y_179_);
v_nextMacroScope_182_ = lean_ctor_get(v___x_181_, 1);
v_ngen_183_ = lean_ctor_get(v___x_181_, 2);
v_auxDeclNGen_184_ = lean_ctor_get(v___x_181_, 3);
v_traceState_185_ = lean_ctor_get(v___x_181_, 4);
v_messages_186_ = lean_ctor_get(v___x_181_, 6);
v_infoState_187_ = lean_ctor_get(v___x_181_, 7);
v_snapshotTasks_188_ = lean_ctor_get(v___x_181_, 8);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_215_ == 0)
{
lean_object* v_unused_216_; lean_object* v_unused_217_; 
v_unused_216_ = lean_ctor_get(v___x_181_, 5);
lean_dec(v_unused_216_);
v_unused_217_ = lean_ctor_get(v___x_181_, 0);
lean_dec(v_unused_217_);
v___x_190_ = v___x_181_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_snapshotTasks_188_);
lean_inc(v_infoState_187_);
lean_inc(v_messages_186_);
lean_inc(v_traceState_185_);
lean_inc(v_auxDeclNGen_184_);
lean_inc(v_ngen_183_);
lean_inc(v_nextMacroScope_182_);
lean_dec(v___x_181_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__2);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 5, v___x_192_);
lean_ctor_set(v___x_190_, 0, v_env_177_);
v___x_194_ = v___x_190_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_env_177_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_nextMacroScope_182_);
lean_ctor_set(v_reuseFailAlloc_214_, 2, v_ngen_183_);
lean_ctor_set(v_reuseFailAlloc_214_, 3, v_auxDeclNGen_184_);
lean_ctor_set(v_reuseFailAlloc_214_, 4, v_traceState_185_);
lean_ctor_set(v_reuseFailAlloc_214_, 5, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_214_, 6, v_messages_186_);
lean_ctor_set(v_reuseFailAlloc_214_, 7, v_infoState_187_);
lean_ctor_set(v_reuseFailAlloc_214_, 8, v_snapshotTasks_188_);
v___x_194_ = v_reuseFailAlloc_214_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v_mctx_198_; lean_object* v_zetaDeltaFVarIds_199_; lean_object* v_postponed_200_; lean_object* v_diag_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_212_; 
v___x_195_ = lean_st_ref_set(v___y_179_, v___x_194_);
v___x_196_ = lean_st_ref_get(v___y_179_);
lean_dec(v___x_196_);
v___x_197_ = lean_st_ref_take(v___y_178_);
v_mctx_198_ = lean_ctor_get(v___x_197_, 0);
v_zetaDeltaFVarIds_199_ = lean_ctor_get(v___x_197_, 2);
v_postponed_200_ = lean_ctor_get(v___x_197_, 3);
v_diag_201_ = lean_ctor_get(v___x_197_, 4);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_212_ == 0)
{
lean_object* v_unused_213_; 
v_unused_213_ = lean_ctor_get(v___x_197_, 1);
lean_dec(v_unused_213_);
v___x_203_ = v___x_197_;
v_isShared_204_ = v_isSharedCheck_212_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_diag_201_);
lean_inc(v_postponed_200_);
lean_inc(v_zetaDeltaFVarIds_199_);
lean_inc(v_mctx_198_);
lean_dec(v___x_197_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_212_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_205_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___closed__3);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_205_);
v___x_207_ = v___x_203_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_mctx_198_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_211_, 2, v_zetaDeltaFVarIds_199_);
lean_ctor_set(v_reuseFailAlloc_211_, 3, v_postponed_200_);
lean_ctor_set(v_reuseFailAlloc_211_, 4, v_diag_201_);
v___x_207_ = v_reuseFailAlloc_211_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_st_ref_set(v___y_178_, v___x_207_);
v___x_209_ = lean_box(0);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg___boxed(lean_object* v_env_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(v_env_218_, v___y_219_, v___y_220_);
lean_dec(v___y_220_);
lean_dec(v___y_219_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg(lean_object* v_env_223_, lean_object* v_x_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v___x_232_; lean_object* v_env_233_; lean_object* v_a_235_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_232_ = lean_st_ref_get(v___y_230_);
v_env_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc_ref(v_env_233_);
lean_dec(v___x_232_);
v___x_245_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(v_env_223_, v___y_228_, v___y_230_);
lean_dec_ref(v___x_245_);
lean_inc(v___y_230_);
lean_inc_ref(v___y_229_);
lean_inc(v___y_228_);
lean_inc_ref(v___y_227_);
lean_inc(v___y_226_);
lean_inc_ref(v___y_225_);
v___x_246_ = lean_apply_7(v_x_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, lean_box(0));
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_a_247_);
lean_dec_ref(v___x_246_);
v___x_248_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(v_env_233_, v___y_228_, v___y_230_);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v___x_248_, 0);
lean_dec(v_unused_256_);
v___x_250_ = v___x_248_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_dec(v___x_248_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v_a_247_);
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_247_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
else
{
lean_object* v_a_257_; 
v_a_257_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_a_257_);
lean_dec_ref(v___x_246_);
v_a_235_ = v_a_257_;
goto v___jp_234_;
}
v___jp_234_:
{
lean_object* v___x_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v___x_236_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(v_env_233_, v___y_228_, v___y_230_);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v___x_236_, 0);
lean_dec(v_unused_244_);
v___x_238_ = v___x_236_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_dec(v___x_236_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
lean_ctor_set_tag(v___x_238_, 1);
lean_ctor_set(v___x_238_, 0, v_a_235_);
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_235_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg___boxed(lean_object* v_env_258_, lean_object* v_x_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg(v_env_258_, v_x_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg(lean_object* v_type_268_, lean_object* v_value_269_, uint8_t v_safety_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v___x_278_; lean_object* v_env_279_; lean_object* v___x_280_; uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_278_ = lean_st_ref_get(v_a_276_);
v_env_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc_ref(v_env_279_);
lean_dec(v___x_278_);
lean_inc_ref(v_type_268_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v_type_268_);
v___x_281_ = 1;
v___x_282_ = lean_box(0);
v___x_283_ = lean_box(v___x_281_);
v___x_284_ = lean_box(v_safety_270_);
v___f_285_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_evalTerm___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_285_, 0, v_value_269_);
lean_closure_set(v___f_285_, 1, v___x_280_);
lean_closure_set(v___f_285_, 2, v___x_283_);
lean_closure_set(v___f_285_, 3, v___x_282_);
lean_closure_set(v___f_285_, 4, v_type_268_);
lean_closure_set(v___f_285_, 5, v___x_284_);
v___x_286_ = l_Lean_Environment_unlockAsync(v_env_279_);
v___x_287_ = l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg(v___x_286_, v___f_285_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___redArg___boxed(lean_object* v_type_288_, lean_object* v_value_289_, lean_object* v_safety_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
uint8_t v_safety_boxed_298_; lean_object* v_res_299_; 
v_safety_boxed_298_ = lean_unbox(v_safety_290_);
v_res_299_ = l_Lean_Elab_Term_evalTerm___redArg(v_type_288_, v_value_289_, v_safety_boxed_298_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
lean_dec(v_a_292_);
lean_dec_ref(v_a_291_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm(lean_object* v_00_u03b1_300_, lean_object* v_type_301_, lean_object* v_value_302_, uint8_t v_safety_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_Elab_Term_evalTerm___redArg(v_type_301_, v_value_302_, v_safety_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_evalTerm___boxed(lean_object* v_00_u03b1_312_, lean_object* v_type_313_, lean_object* v_value_314_, lean_object* v_safety_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
uint8_t v_safety_boxed_323_; lean_object* v_res_324_; 
v_safety_boxed_323_ = lean_unbox(v_safety_315_);
v_res_324_ = l_Lean_Elab_Term_evalTerm(v_00_u03b1_312_, v_type_313_, v_value_314_, v_safety_boxed_323_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
lean_dec(v_a_317_);
lean_dec_ref(v_a_316_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2(lean_object* v_env_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___redArg(v_env_325_, v___y_329_, v___y_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2___boxed(lean_object* v_env_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2_spec__2(v_env_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2(lean_object* v_00_u03b1_343_, lean_object* v_env_344_, lean_object* v_x_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___redArg(v_env_344_, v_x_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2___boxed(lean_object* v_00_u03b1_354_, lean_object* v_env_355_, lean_object* v_x_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_withEnv___at___00Lean_Elab_Term_evalTerm_spec__2(v_00_u03b1_354_, v_env_355_, v_x_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_364_;
}
}
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Eval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Eval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Eval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Eval(builtin);
}
#ifdef __cplusplus
}
#endif
