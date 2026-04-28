// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Insts
// Imports: public import Lean.Meta.Tactic.Grind.Arith.EvalNum public import Lean.Meta.Tactic.Grind.SynthInstance import Init.Grind.Ring
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_evalNat_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(v_e_34_, v___y_42_, v___y_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___boxed(lean_object* v_e_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0(v_e_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec(v___y_48_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(lean_object* v_k_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___x_72_; 
lean_inc(v___y_66_);
lean_inc_ref(v___y_65_);
lean_inc(v___y_64_);
lean_inc_ref(v___y_63_);
lean_inc(v___y_62_);
lean_inc(v___y_61_);
v___x_72_ = lean_apply_11(v_k_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, lean_box(0));
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed(lean_object* v_k_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(v_k_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec(v___y_74_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(lean_object* v_k_86_, uint8_t v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___f_99_; lean_object* v___x_100_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc(v___y_89_);
lean_inc(v___y_88_);
v___f_99_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_99_, 0, v_k_86_);
lean_closure_set(v___f_99_, 1, v___y_88_);
lean_closure_set(v___f_99_, 2, v___y_89_);
lean_closure_set(v___f_99_, 3, v___y_90_);
lean_closure_set(v___f_99_, 4, v___y_91_);
lean_closure_set(v___f_99_, 5, v___y_92_);
lean_closure_set(v___f_99_, 6, v___y_93_);
v___x_100_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_87_, v___f_99_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
return v___x_100_;
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg___boxed(lean_object* v_k_109_, lean_object* v_allowLevelAssignments_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_122_; lean_object* v_res_123_; 
v_allowLevelAssignments_boxed_122_ = lean_unbox(v_allowLevelAssignments_110_);
v_res_123_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(v_k_109_, v_allowLevelAssignments_boxed_122_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec(v___y_111_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1(lean_object* v_00_u03b1_124_, lean_object* v_k_125_, uint8_t v_allowLevelAssignments_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(v_k_125_, v_allowLevelAssignments_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___boxed(lean_object* v_00_u03b1_139_, lean_object* v_k_140_, lean_object* v_allowLevelAssignments_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_153_; lean_object* v_res_154_; 
v_allowLevelAssignments_boxed_153_ = lean_unbox(v_allowLevelAssignments_141_);
v_res_154_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1(v_00_u03b1_139_, v_k_140_, v_allowLevelAssignments_boxed_153_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec(v___y_142_);
return v_res_154_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("IsCharP", 7, 7);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_158_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__2);
v___x_159_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1);
v___x_160_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0);
v___x_161_ = l_Lean_Name_mkStr3(v___x_160_, v___x_159_, v___x_158_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0(lean_object* v___x_162_, uint8_t v___x_163_, lean_object* v___x_164_, lean_object* v_u_165_, lean_object* v___x_166_, lean_object* v_type_167_, lean_object* v_semiringInst_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_Meta_mkFreshExprMVar(v___x_162_, v___x_163_, v___x_164_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_charType_185_; lean_object* v___x_186_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_n(v_a_181_, 2);
lean_dec_ref(v___x_180_);
v___x_182_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__3);
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v_u_165_);
lean_ctor_set(v___x_183_, 1, v___x_166_);
v___x_184_ = l_Lean_mkConst(v___x_182_, v___x_183_);
v_charType_185_ = l_Lean_mkApp3(v___x_184_, v_type_167_, v_semiringInst_168_, v_a_181_);
v___x_186_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_charType_185_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_228_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_228_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_228_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_228_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
if (lean_obj_tag(v_a_187_) == 1)
{
lean_object* v_val_191_; lean_object* v___x_192_; lean_object* v_a_193_; lean_object* v___x_194_; 
lean_del_object(v___x_189_);
v_val_191_ = lean_ctor_get(v_a_187_, 0);
lean_inc(v_val_191_);
lean_dec_ref(v_a_187_);
v___x_192_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_181_, v___y_176_, v___y_178_);
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref(v___x_192_);
v___x_194_ = l_Lean_Meta_Grind_Arith_evalNat_x3f(v_a_193_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_215_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_215_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_215_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_215_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
if (lean_obj_tag(v_a_195_) == 1)
{
lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_210_; 
v_val_199_ = lean_ctor_get(v_a_195_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v_a_195_);
if (v_isSharedCheck_210_ == 0)
{
v___x_201_ = v_a_195_;
v_isShared_202_ = v_isSharedCheck_210_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_dec(v_a_195_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_210_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v_val_191_);
lean_ctor_set(v___x_203_, 1, v_val_199_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_203_);
v___x_205_ = v___x_201_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_209_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_207_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_205_);
v___x_207_ = v___x_197_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v___x_211_; lean_object* v___x_213_; 
lean_dec(v_a_195_);
lean_dec(v_val_191_);
v___x_211_ = lean_box(0);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_211_);
v___x_213_ = v___x_197_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec(v_val_191_);
v_a_216_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_194_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_194_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v___x_224_; lean_object* v___x_226_; 
lean_dec(v_a_187_);
lean_dec(v_a_181_);
v___x_224_ = lean_box(0);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_224_);
v___x_226_ = v___x_189_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_a_181_);
v_a_229_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_186_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_186_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec_ref(v_semiringInst_168_);
lean_dec_ref(v_type_167_);
lean_dec(v___x_166_);
lean_dec(v_u_165_);
v_a_237_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_180_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_180_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___boxed(lean_object** _args){
lean_object* v___x_245_ = _args[0];
lean_object* v___x_246_ = _args[1];
lean_object* v___x_247_ = _args[2];
lean_object* v_u_248_ = _args[3];
lean_object* v___x_249_ = _args[4];
lean_object* v_type_250_ = _args[5];
lean_object* v_semiringInst_251_ = _args[6];
lean_object* v___y_252_ = _args[7];
lean_object* v___y_253_ = _args[8];
lean_object* v___y_254_ = _args[9];
lean_object* v___y_255_ = _args[10];
lean_object* v___y_256_ = _args[11];
lean_object* v___y_257_ = _args[12];
lean_object* v___y_258_ = _args[13];
lean_object* v___y_259_ = _args[14];
lean_object* v___y_260_ = _args[15];
lean_object* v___y_261_ = _args[16];
lean_object* v___y_262_ = _args[17];
_start:
{
uint8_t v___x_9172__boxed_263_; lean_object* v_res_264_; 
v___x_9172__boxed_263_ = lean_unbox(v___x_246_);
v_res_264_ = l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0(v___x_245_, v___x_9172__boxed_263_, v___x_247_, v_u_248_, v___x_249_, v_type_250_, v_semiringInst_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec(v___y_252_);
return v_res_264_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0(void){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__0);
v___x_267_ = l_Lean_Name_mkStr1(v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_box(0);
v___x_269_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1);
v___x_270_ = l_Lean_mkConst(v___x_269_, v___x_268_);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__2);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(lean_object* v_u_273_, lean_object* v_type_274_, lean_object* v_semiringInst_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___f_292_; uint8_t v___x_293_; lean_object* v___x_294_; 
v___x_287_ = lean_box(0);
v___x_288_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__3);
v___x_289_ = 0;
v___x_290_ = lean_box(0);
v___x_291_ = lean_box(v___x_289_);
v___f_292_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___boxed), 18, 7);
lean_closure_set(v___f_292_, 0, v___x_288_);
lean_closure_set(v___f_292_, 1, v___x_291_);
lean_closure_set(v___f_292_, 2, v___x_290_);
lean_closure_set(v___f_292_, 3, v_u_273_);
lean_closure_set(v___f_292_, 4, v___x_287_);
lean_closure_set(v___f_292_, 5, v_type_274_);
lean_closure_set(v___f_292_, 6, v_semiringInst_275_);
v___x_293_ = 0;
v___x_294_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(v___f_292_, v___x_293_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___boxed(lean_object* v_u_295_, lean_object* v_type_296_, lean_object* v_semiringInst_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(v_u_295_, v_type_296_, v_semiringInst_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_a_299_);
lean_dec(v_a_298_);
return v_res_309_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0(void){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_mk_string_unchecked("PowIdentity", 11, 11);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0(lean_object* v___x_311_, uint8_t v___x_312_, lean_object* v___x_313_, lean_object* v___x_314_, lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v___x_317_, lean_object* v_type_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v___x_330_; 
lean_inc(v___x_313_);
v___x_330_ = l_Lean_Meta_mkFreshExprMVar(v___x_311_, v___x_312_, v___x_313_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_331_);
lean_dec_ref(v___x_330_);
v___x_332_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___closed__1);
v___x_333_ = l_Lean_mkConst(v___x_332_, v___x_314_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
v___x_335_ = l_Lean_Meta_mkFreshExprMVar(v___x_334_, v___x_312_, v___x_313_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc_n(v_a_336_, 2);
lean_dec_ref(v___x_335_);
v___x_337_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___closed__0);
v___x_338_ = l_Lean_Name_mkStr3(v___x_315_, v___x_316_, v___x_337_);
v___x_339_ = l_Lean_mkConst(v___x_338_, v___x_317_);
lean_inc(v_a_331_);
v___x_340_ = l_Lean_mkApp3(v___x_339_, v_type_318_, v_a_331_, v_a_336_);
v___x_341_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_340_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_386_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_386_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_386_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_386_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
if (lean_obj_tag(v_a_342_) == 1)
{
lean_object* v_val_346_; lean_object* v___x_347_; lean_object* v_a_348_; lean_object* v___x_349_; lean_object* v_a_350_; lean_object* v___x_351_; 
lean_del_object(v___x_344_);
v_val_346_ = lean_ctor_get(v_a_342_, 0);
lean_inc(v_val_346_);
lean_dec_ref(v_a_342_);
v___x_347_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_331_, v___y_326_, v___y_328_);
v_a_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_a_348_);
lean_dec_ref(v___x_347_);
v___x_349_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_336_, v___y_326_, v___y_328_);
v_a_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_350_);
lean_dec_ref(v___x_349_);
v___x_351_ = l_Lean_Meta_Grind_Arith_evalNat_x3f(v_a_350_, v___y_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_373_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_373_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_373_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_373_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
if (lean_obj_tag(v_a_352_) == 1)
{
lean_object* v_val_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_368_; 
v_val_356_ = lean_ctor_get(v_a_352_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v_a_352_);
if (v_isSharedCheck_368_ == 0)
{
v___x_358_ = v_a_352_;
v_isShared_359_ = v_isSharedCheck_368_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_val_356_);
lean_dec(v_a_352_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_368_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_a_348_);
lean_ctor_set(v___x_360_, 1, v_val_356_);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_val_346_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 0, v___x_361_);
v___x_363_ = v___x_358_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_367_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_365_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_363_);
v___x_365_ = v___x_354_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
else
{
lean_object* v___x_369_; lean_object* v___x_371_; 
lean_dec(v_a_352_);
lean_dec(v_a_348_);
lean_dec(v_val_346_);
v___x_369_ = lean_box(0);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_369_);
v___x_371_ = v___x_354_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_a_348_);
lean_dec(v_val_346_);
v_a_374_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_351_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_351_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_object* v___x_382_; lean_object* v___x_384_; 
lean_dec(v_a_342_);
lean_dec(v_a_336_);
lean_dec(v_a_331_);
v___x_382_ = lean_box(0);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v___x_382_);
v___x_384_ = v___x_344_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
else
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
lean_dec(v_a_336_);
lean_dec(v_a_331_);
v_a_387_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_341_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_341_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_387_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_a_331_);
lean_dec_ref(v_type_318_);
lean_dec(v___x_317_);
lean_dec_ref(v___x_316_);
lean_dec_ref(v___x_315_);
v_a_395_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_335_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_335_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec_ref(v_type_318_);
lean_dec(v___x_317_);
lean_dec_ref(v___x_316_);
lean_dec_ref(v___x_315_);
lean_dec(v___x_314_);
lean_dec(v___x_313_);
v_a_403_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_330_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_330_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___boxed(lean_object** _args){
lean_object* v___x_411_ = _args[0];
lean_object* v___x_412_ = _args[1];
lean_object* v___x_413_ = _args[2];
lean_object* v___x_414_ = _args[3];
lean_object* v___x_415_ = _args[4];
lean_object* v___x_416_ = _args[5];
lean_object* v___x_417_ = _args[6];
lean_object* v_type_418_ = _args[7];
lean_object* v___y_419_ = _args[8];
lean_object* v___y_420_ = _args[9];
lean_object* v___y_421_ = _args[10];
lean_object* v___y_422_ = _args[11];
lean_object* v___y_423_ = _args[12];
lean_object* v___y_424_ = _args[13];
lean_object* v___y_425_ = _args[14];
lean_object* v___y_426_ = _args[15];
lean_object* v___y_427_ = _args[16];
lean_object* v___y_428_ = _args[17];
lean_object* v___y_429_ = _args[18];
_start:
{
uint8_t v___x_6988__boxed_430_; lean_object* v_res_431_; 
v___x_6988__boxed_430_ = lean_unbox(v___x_412_);
v_res_431_ = l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0(v___x_411_, v___x_6988__boxed_430_, v___x_413_, v___x_414_, v___x_415_, v___x_416_, v___x_417_, v_type_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec(v___y_419_);
return v_res_431_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_mk_string_unchecked("CommSemiring", 12, 12);
return v___x_432_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_433_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0, &l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__0);
v___x_434_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1);
v___x_435_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0);
v___x_436_ = l_Lean_Name_mkStr3(v___x_435_, v___x_434_, v___x_433_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f(lean_object* v_u_437_, lean_object* v_type_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___f_461_; uint8_t v___x_462_; lean_object* v___x_463_; 
v___x_450_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0);
v___x_451_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1);
v___x_452_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1, &l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___closed__1);
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v_u_437_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
lean_inc_ref(v___x_454_);
v___x_455_ = l_Lean_mkConst(v___x_452_, v___x_454_);
lean_inc_ref(v_type_438_);
v___x_456_ = l_Lean_Expr_app___override(v___x_455_, v_type_438_);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
v___x_458_ = 0;
v___x_459_ = lean_box(0);
v___x_460_ = lean_box(v___x_458_);
v___f_461_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___lam__0___boxed), 19, 8);
lean_closure_set(v___f_461_, 0, v___x_457_);
lean_closure_set(v___f_461_, 1, v___x_460_);
lean_closure_set(v___f_461_, 2, v___x_459_);
lean_closure_set(v___f_461_, 3, v___x_453_);
lean_closure_set(v___f_461_, 4, v___x_450_);
lean_closure_set(v___f_461_, 5, v___x_451_);
lean_closure_set(v___f_461_, 6, v___x_454_);
lean_closure_set(v___f_461_, 7, v_type_438_);
v___x_462_ = 0;
v___x_463_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_Arith_getIsCharInst_x3f_spec__1___redArg(v___f_461_, v___x_462_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f___boxed(lean_object* v_u_464_, lean_object* v_type_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Meta_Grind_Arith_getPowIdentityInst_x3f(v_u_464_, v_type_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
lean_dec(v_a_469_);
lean_dec_ref(v_a_468_);
lean_dec(v_a_467_);
lean_dec(v_a_466_);
return v_res_477_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_mk_string_unchecked("NatModule", 9, 9);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_479_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0, &l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__0);
v___x_480_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1);
v___x_481_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0);
v___x_482_ = l_Lean_Name_mkStr3(v___x_481_, v___x_480_, v___x_479_);
return v___x_482_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_mk_string_unchecked("NoNatZeroDivisors", 17, 17);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_484_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2, &l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__2);
v___x_485_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__1);
v___x_486_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIsCharInst_x3f___lam__0___closed__0);
v___x_487_ = l_Lean_Name_mkStr3(v___x_486_, v___x_485_, v___x_484_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg(lean_object* v_u_488_, lean_object* v_type_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v_natModuleType_499_; lean_object* v___x_500_; 
v___x_495_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1, &l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__1);
v___x_496_ = lean_box(0);
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v_u_488_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
lean_inc_ref(v___x_497_);
v___x_498_ = l_Lean_mkConst(v___x_495_, v___x_497_);
lean_inc_ref(v_type_489_);
v_natModuleType_499_ = l_Lean_Expr_app___override(v___x_498_, v_type_489_);
v___x_500_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_natModuleType_499_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_514_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_514_ == 0)
{
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_514_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_514_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
if (lean_obj_tag(v_a_501_) == 1)
{
lean_object* v_val_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_503_);
v_val_505_ = lean_ctor_get(v_a_501_, 0);
lean_inc(v_val_505_);
lean_dec_ref(v_a_501_);
v___x_506_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3, &l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___closed__3);
v___x_507_ = l_Lean_mkConst(v___x_506_, v___x_497_);
v___x_508_ = l_Lean_mkAppB(v___x_507_, v_type_489_, v_val_505_);
v___x_509_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_508_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
return v___x_509_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_512_; 
lean_dec(v_a_501_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_type_489_);
v___x_510_ = lean_box(0);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v___x_510_);
v___x_512_ = v___x_503_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
else
{
lean_dec_ref(v___x_497_);
lean_dec_ref(v_type_489_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg___boxed(lean_object* v_u_515_, lean_object* v_type_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg(v_u_515_, v_type_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f(lean_object* v_u_523_, lean_object* v_type_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___redArg(v_u_523_, v_type_524_, v_a_531_, v_a_532_, v_a_533_, v_a_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f___boxed(lean_object* v_u_537_, lean_object* v_type_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Meta_Grind_Arith_getNoZeroDivInst_x3f(v_u_537_, v_type_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec(v_a_539_);
return v_res_550_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_EvalNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_EvalNum(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
}
#ifdef __cplusplus
}
#endif
