// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.SatAtBVLogical
// Imports: public import Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.Reify
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_evalsAtAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkRefl(lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_M_atomsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg(v_e_34_, v___y_38_, v___y_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___boxed(lean_object* v_e_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0(v_e_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec(v___y_44_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0(lean_object* v_expr_52_, lean_object* v_val_53_, lean_object* v___x_54_, lean_object* v_arg_55_, lean_object* v_h_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkEvalExpr(v_expr_52_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_65_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_64_);
lean_dec_ref(v___x_63_);
v___x_65_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_evalsAtAtoms(v_val_53_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_80_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_80_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_80_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_80_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___y_71_; 
if (lean_obj_tag(v_a_66_) == 0)
{
lean_object* v___x_78_; 
lean_inc(v_a_64_);
v___x_78_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkRefl(v_a_64_);
v___y_71_ = v___x_78_;
goto v___jp_70_;
}
else
{
lean_object* v_val_79_; 
v_val_79_ = lean_ctor_get(v_a_66_, 0);
lean_inc(v_val_79_);
lean_dec_ref(v_a_66_);
v___y_71_ = v_val_79_;
goto v___jp_70_;
}
v___jp_70_:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_72_ = lean_box(0);
v___x_73_ = l_Lean_mkConst(v___x_54_, v___x_72_);
v___x_74_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_mkTrans(v_a_64_, v_arg_55_, v___x_73_, v___y_71_, v_h_56_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_74_);
v___x_76_ = v___x_68_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec(v_a_64_);
lean_dec_ref(v_h_56_);
lean_dec_ref(v_arg_55_);
lean_dec(v___x_54_);
v_a_81_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_65_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_65_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
else
{
lean_dec_ref(v_h_56_);
lean_dec_ref(v_arg_55_);
lean_dec(v___x_54_);
lean_dec_ref(v_val_53_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0___boxed(lean_object* v_expr_89_, lean_object* v_val_90_, lean_object* v___x_91_, lean_object* v_arg_92_, lean_object* v_h_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0(v_expr_89_, v_val_90_, v___x_91_, v_arg_92_, v_h_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
return v_res_100_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__0);
v___x_103_ = l_Lean_Name_mkStr1(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2);
v___x_106_ = l_Lean_Name_mkStr1(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4(void){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__4);
v___x_109_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2);
v___x_110_ = l_Lean_Name_mkStr2(v___x_109_, v___x_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of(lean_object* v_h_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v___x_119_; 
lean_inc(v_a_117_);
lean_inc_ref(v_a_116_);
lean_inc(v_a_115_);
lean_inc_ref(v_a_114_);
lean_inc_ref(v_h_111_);
v___x_119_ = lean_infer_type(v_h_111_, v_a_114_, v_a_115_, v_a_116_, v_a_117_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; lean_object* v___x_121_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref(v___x_119_);
v___x_121_ = l_Lean_Meta_whnfR(v_a_120_, v_a_114_, v_a_115_, v_a_116_, v_a_117_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_123_; lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_206_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref(v___x_121_);
v___x_123_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of_spec__0___redArg(v_a_122_, v_a_115_, v_a_117_);
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_206_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_206_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_206_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_124_, v_a_115_, v_a_117_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_197_; 
v_a_129_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_197_ == 0)
{
v___x_131_ = v___x_128_;
v_isShared_132_ = v_isSharedCheck_197_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_128_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_197_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = l_Lean_Expr_cleanupAnnotations(v_a_129_);
v___x_139_ = l_Lean_Expr_isApp(v___x_138_);
if (v___x_139_ == 0)
{
lean_dec_ref(v___x_138_);
lean_del_object(v___x_126_);
lean_dec_ref(v_h_111_);
goto v___jp_133_;
}
else
{
lean_object* v_arg_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_arg_140_ = lean_ctor_get(v___x_138_, 1);
lean_inc_ref(v_arg_140_);
v___x_141_ = l_Lean_Expr_appFnCleanup___redArg(v___x_138_);
v___x_142_ = l_Lean_Expr_isApp(v___x_141_);
if (v___x_142_ == 0)
{
lean_dec_ref(v___x_141_);
lean_dec_ref(v_arg_140_);
lean_del_object(v___x_126_);
lean_dec_ref(v_h_111_);
goto v___jp_133_;
}
else
{
lean_object* v_arg_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_arg_143_ = lean_ctor_get(v___x_141_, 1);
lean_inc_ref(v_arg_143_);
v___x_144_ = l_Lean_Expr_appFnCleanup___redArg(v___x_141_);
v___x_145_ = l_Lean_Expr_isApp(v___x_144_);
if (v___x_145_ == 0)
{
lean_dec_ref(v___x_144_);
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_arg_140_);
lean_del_object(v___x_126_);
lean_dec_ref(v_h_111_);
goto v___jp_133_;
}
else
{
lean_object* v_arg_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_arg_146_ = lean_ctor_get(v___x_144_, 1);
lean_inc_ref(v_arg_146_);
v___x_147_ = l_Lean_Expr_appFnCleanup___redArg(v___x_144_);
v___x_148_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__1);
v___x_149_ = l_Lean_Expr_isConstOf(v___x_147_, v___x_148_);
lean_dec_ref(v___x_147_);
if (v___x_149_ == 0)
{
lean_dec_ref(v_arg_146_);
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_arg_140_);
lean_del_object(v___x_126_);
lean_dec_ref(v_h_111_);
goto v___jp_133_;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
lean_del_object(v___x_131_);
v___x_150_ = l_Lean_Expr_cleanupAnnotations(v_arg_146_);
v___x_151_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__3);
v___x_152_ = l_Lean_Expr_isConstOf(v___x_150_, v___x_151_);
lean_dec_ref(v___x_150_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_arg_140_);
lean_dec_ref(v_h_111_);
v___x_153_ = lean_box(0);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 0, v___x_153_);
v___x_155_ = v___x_126_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = l_Lean_Expr_cleanupAnnotations(v_arg_140_);
v___x_158_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__5);
v___x_159_ = l_Lean_Expr_isConstOf(v___x_157_, v___x_158_);
lean_dec_ref(v___x_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_162_; 
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_h_111_);
v___x_160_ = lean_box(0);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 0, v___x_160_);
v___x_162_ = v___x_126_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
else
{
lean_object* v___x_164_; 
lean_del_object(v___x_126_);
lean_inc_ref(v_arg_143_);
v___x_164_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVLogical_of(v_arg_143_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_188_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_188_ == 0)
{
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_188_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_188_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
if (lean_obj_tag(v_a_165_) == 1)
{
lean_object* v_val_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_183_; 
v_val_169_ = lean_ctor_get(v_a_165_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_183_ == 0)
{
v___x_171_ = v_a_165_;
v_isShared_172_ = v_isSharedCheck_183_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_val_169_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_183_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_bvExpr_173_; lean_object* v_expr_174_; lean_object* v___f_175_; lean_object* v___x_176_; lean_object* v___x_178_; 
v_bvExpr_173_ = lean_ctor_get(v_val_169_, 0);
lean_inc_ref(v_bvExpr_173_);
v_expr_174_ = lean_ctor_get(v_val_169_, 3);
lean_inc_ref_n(v_expr_174_, 2);
v___f_175_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___lam__0___boxed), 11, 5);
lean_closure_set(v___f_175_, 0, v_expr_174_);
lean_closure_set(v___f_175_, 1, v_val_169_);
lean_closure_set(v___f_175_, 2, v___x_158_);
lean_closure_set(v___f_175_, 3, v_arg_143_);
lean_closure_set(v___f_175_, 4, v_h_111_);
v___x_176_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_176_, 0, v_bvExpr_173_);
lean_ctor_set(v___x_176_, 1, v___f_175_);
lean_ctor_set(v___x_176_, 2, v_expr_174_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_176_);
v___x_178_ = v___x_171_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_182_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_180_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_178_);
v___x_180_ = v___x_167_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
else
{
lean_object* v___x_184_; lean_object* v___x_186_; 
lean_dec(v_a_165_);
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_h_111_);
v___x_184_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_184_);
v___x_186_ = v___x_167_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v_arg_143_);
lean_dec_ref(v_h_111_);
v_a_189_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_164_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_164_);
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
}
}
}
}
}
}
v___jp_133_:
{
lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_134_ = lean_box(0);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 0, v___x_134_);
v___x_136_ = v___x_131_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_del_object(v___x_126_);
lean_dec_ref(v_h_111_);
v_a_198_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_128_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_128_);
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
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec_ref(v_h_111_);
v_a_207_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_121_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_121_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_h_111_);
v_a_215_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_119_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_119_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___boxed(lean_object* v_h_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of(v_h_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
lean_dec(v_a_225_);
lean_dec(v_a_224_);
return v_res_231_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_232_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1(void){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_mk_string_unchecked("BVDecide", 8, 8);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_mk_string_unchecked("BVLogicalExpr", 13, 13);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_mk_string_unchecked("sat_and", 7, 7);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_237_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__4);
v___x_238_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3);
v___x_239_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_240_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_241_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_242_ = l_Lean_Name_mkStr5(v___x_241_, v___x_240_, v___x_239_, v___x_238_, v___x_237_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_box(0);
v___x_244_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__5);
v___x_245_ = l_Lean_mkConst(v___x_244_, v___x_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0(lean_object* v_satAtAtoms_246_, lean_object* v_satAtAtoms_247_, lean_object* v_expr_248_, lean_object* v_expr_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_Elab_Tactic_BVDecide_Frontend_M_atomsAssignment(v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref(v___x_256_);
lean_inc(v___y_254_);
lean_inc_ref(v___y_253_);
lean_inc(v___y_252_);
lean_inc_ref(v___y_251_);
lean_inc(v___y_250_);
v___x_258_ = lean_apply_6(v_satAtAtoms_246_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, lean_box(0));
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_260_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref(v___x_258_);
lean_inc(v___y_254_);
lean_inc_ref(v___y_253_);
lean_inc(v___y_252_);
lean_inc_ref(v___y_251_);
lean_inc(v___y_250_);
v___x_260_ = lean_apply_6(v_satAtAtoms_247_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, lean_box(0));
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_270_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_270_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_265_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__6);
v___x_266_ = l_Lean_mkApp5(v___x_265_, v_expr_248_, v_expr_249_, v_a_257_, v_a_259_, v_a_261_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_266_);
v___x_268_ = v___x_263_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_dec(v_a_259_);
lean_dec(v_a_257_);
lean_dec_ref(v_expr_249_);
lean_dec_ref(v_expr_248_);
return v___x_260_;
}
}
else
{
lean_dec(v_a_257_);
lean_dec_ref(v_expr_249_);
lean_dec_ref(v_expr_248_);
lean_dec_ref(v_satAtAtoms_247_);
return v___x_258_;
}
}
else
{
lean_dec_ref(v_expr_249_);
lean_dec_ref(v_expr_248_);
lean_dec_ref(v_satAtAtoms_247_);
lean_dec_ref(v_satAtAtoms_246_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___boxed(lean_object* v_satAtAtoms_271_, lean_object* v_satAtAtoms_272_, lean_object* v_expr_273_, lean_object* v_expr_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0(v_satAtAtoms_271_, v_satAtAtoms_272_, v_expr_273_, v_expr_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
return v_res_281_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = lean_mk_string_unchecked("BoolExpr", 8, 8);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1(void){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = lean_mk_string_unchecked("gate", 4, 4);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_284_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__1);
v___x_285_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__0);
v___x_286_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_287_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_288_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_289_ = l_Lean_Name_mkStr5(v___x_288_, v___x_287_, v___x_286_, v___x_285_, v___x_284_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = lean_box(0);
v___x_291_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__2);
v___x_292_ = l_Lean_mkConst(v___x_291_, v___x_290_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("BVPred", 6, 6);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_294_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__4);
v___x_295_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_296_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_297_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_298_ = l_Lean_Name_mkStr4(v___x_297_, v___x_296_, v___x_295_, v___x_294_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_box(0);
v___x_300_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__5);
v___x_301_ = l_Lean_mkConst(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_mk_string_unchecked("Gate", 4, 4);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_mk_string_unchecked("and", 3, 3);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_304_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__8);
v___x_305_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__7);
v___x_306_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_307_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_308_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_309_ = l_Lean_Name_mkStr5(v___x_308_, v___x_307_, v___x_306_, v___x_305_, v___x_304_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_box(0);
v___x_311_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__9);
v___x_312_ = l_Lean_mkConst(v___x_311_, v___x_310_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and(lean_object* v_x_313_, lean_object* v_y_314_){
_start:
{
lean_object* v_bvExpr_315_; lean_object* v_satAtAtoms_316_; lean_object* v_expr_317_; lean_object* v_bvExpr_318_; lean_object* v_satAtAtoms_319_; lean_object* v_expr_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_334_; 
v_bvExpr_315_ = lean_ctor_get(v_x_313_, 0);
lean_inc_ref(v_bvExpr_315_);
v_satAtAtoms_316_ = lean_ctor_get(v_x_313_, 1);
lean_inc_ref(v_satAtAtoms_316_);
v_expr_317_ = lean_ctor_get(v_x_313_, 2);
lean_inc_ref(v_expr_317_);
lean_dec_ref(v_x_313_);
v_bvExpr_318_ = lean_ctor_get(v_y_314_, 0);
v_satAtAtoms_319_ = lean_ctor_get(v_y_314_, 1);
v_expr_320_ = lean_ctor_get(v_y_314_, 2);
v_isSharedCheck_334_ = !lean_is_exclusive(v_y_314_);
if (v_isSharedCheck_334_ == 0)
{
v___x_322_ = v_y_314_;
v_isShared_323_ = v_isSharedCheck_334_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_expr_320_);
lean_inc(v_satAtAtoms_319_);
lean_inc(v_bvExpr_318_);
lean_dec(v_y_314_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_334_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
uint8_t v___x_324_; lean_object* v___f_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_324_ = 0;
lean_inc_ref(v_expr_320_);
lean_inc_ref(v_expr_317_);
v___f_325_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___boxed), 10, 4);
lean_closure_set(v___f_325_, 0, v_satAtAtoms_316_);
lean_closure_set(v___f_325_, 1, v_satAtAtoms_319_);
lean_closure_set(v___f_325_, 2, v_expr_317_);
lean_closure_set(v___f_325_, 3, v_expr_320_);
v___x_326_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_326_, 0, v_bvExpr_315_);
lean_ctor_set(v___x_326_, 1, v_bvExpr_318_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*2, v___x_324_);
v___x_327_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__3);
v___x_328_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__6);
v___x_329_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___closed__10);
v___x_330_ = l_Lean_mkApp4(v___x_327_, v___x_328_, v___x_329_, v_expr_317_, v_expr_320_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 2, v___x_330_);
lean_ctor_set(v___x_322_, 1, v___f_325_);
lean_ctor_set(v___x_322_, 0, v___x_326_);
v___x_332_ = v___x_322_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_326_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v___f_325_);
lean_ctor_set(v_reuseFailAlloc_333_, 2, v___x_330_);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0(lean_object* v_msgData_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v___x_341_; lean_object* v_env_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_mctx_345_; lean_object* v_lctx_346_; lean_object* v_options_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_341_ = lean_st_ref_get(v___y_339_);
v_env_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc_ref(v_env_342_);
lean_dec(v___x_341_);
v___x_343_ = lean_st_ref_get(v___y_339_);
lean_dec(v___x_343_);
v___x_344_ = lean_st_ref_get(v___y_337_);
v_mctx_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc_ref(v_mctx_345_);
lean_dec(v___x_344_);
v_lctx_346_ = lean_ctor_get(v___y_336_, 2);
v_options_347_ = lean_ctor_get(v___y_338_, 2);
lean_inc_ref(v_options_347_);
lean_inc_ref(v_lctx_346_);
v___x_348_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_348_, 0, v_env_342_);
lean_ctor_set(v___x_348_, 1, v_mctx_345_);
lean_ctor_set(v___x_348_, 2, v_lctx_346_);
lean_ctor_set(v___x_348_, 3, v_options_347_);
v___x_349_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v_msgData_335_);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0___boxed(lean_object* v_msgData_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0(v_msgData_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg(lean_object* v_msg_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_ref_364_; lean_object* v___x_365_; lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
v_ref_364_ = lean_ctor_get(v___y_361_, 5);
v___x_365_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0_spec__0(v_msg_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_374_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_372_; 
lean_inc(v_ref_364_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v_ref_364_);
lean_ctor_set(v___x_370_, 1, v_a_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set_tag(v___x_368_, 1);
lean_ctor_set(v___x_368_, 0, v___x_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg___boxed(lean_object* v_msg_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg(v_msg_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_381_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0(void){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lean_mk_string_unchecked("eval", 4, 4);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_383_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__0);
v___x_384_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__3);
v___x_385_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_386_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_387_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_388_ = l_Lean_Name_mkStr5(v___x_387_, v___x_386_, v___x_385_, v___x_384_, v___x_383_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_box(0);
v___x_390_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__1);
v___x_391_ = l_Lean_mkConst(v___x_390_, v___x_389_);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3(void){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_mk_string_unchecked("Reflect", 7, 7);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4(void){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_mk_string_unchecked("false_of_eq_true_of_eq_false", 28, 28);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_394_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__4);
v___x_395_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_of___closed__2);
v___x_396_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__3);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__2);
v___x_398_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__1);
v___x_399_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_and___lam__0___closed__0);
v___x_400_ = l_Lean_Name_mkStr6(v___x_399_, v___x_398_, v___x_397_, v___x_396_, v___x_395_, v___x_394_);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_box(0);
v___x_402_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__5);
v___x_403_ = l_Lean_mkConst(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7(void){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_mk_string_unchecked("Unable to identify any relevant atoms.", 38, 38);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__7);
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse(lean_object* v_x_407_, lean_object* v_h_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_atoms_417_; lean_object* v_size_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_415_ = lean_st_ref_get(v_a_413_);
lean_dec(v___x_415_);
v___x_416_ = lean_st_ref_get(v_a_409_);
v_atoms_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc_ref(v_atoms_417_);
lean_dec(v___x_416_);
v_size_418_ = lean_ctor_get(v_atoms_417_, 0);
lean_inc(v_size_418_);
lean_dec_ref(v_atoms_417_);
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = lean_nat_dec_eq(v_size_418_, v___x_419_);
lean_dec(v_size_418_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Elab_Tactic_BVDecide_Frontend_M_atomsAssignment(v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v_satAtAtoms_423_; lean_object* v_expr_424_; lean_object* v___x_425_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref(v___x_421_);
v_satAtAtoms_423_ = lean_ctor_get(v_x_407_, 1);
lean_inc_ref(v_satAtAtoms_423_);
v_expr_424_ = lean_ctor_get(v_x_407_, 2);
lean_inc_ref(v_expr_424_);
lean_dec_ref(v_x_407_);
lean_inc(v_a_413_);
lean_inc_ref(v_a_412_);
lean_inc(v_a_411_);
lean_inc_ref(v_a_410_);
lean_inc(v_a_409_);
v___x_425_ = lean_apply_6(v_satAtAtoms_423_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, lean_box(0));
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_438_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_438_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_438_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_438_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_430_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__2);
lean_inc(v_a_422_);
v___x_431_ = l_Lean_mkAppB(v___x_430_, v_a_422_, v_expr_424_);
v___x_432_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__6);
v___x_433_ = l_Lean_Expr_app___override(v_h_408_, v_a_422_);
v___x_434_ = l_Lean_mkApp3(v___x_432_, v___x_431_, v_a_426_, v___x_433_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_434_);
v___x_436_ = v___x_428_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
else
{
lean_dec_ref(v_expr_424_);
lean_dec(v_a_422_);
lean_dec_ref(v_h_408_);
return v___x_425_;
}
}
else
{
lean_dec_ref(v_h_408_);
lean_dec_ref(v_x_407_);
return v___x_421_;
}
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref(v_h_408_);
lean_dec_ref(v_x_407_);
v___x_439_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8, &l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___closed__8);
v___x_440_ = l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg(v___x_439_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
return v___x_440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse___boxed(lean_object* v_x_441_, lean_object* v_h_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse(v_x_441_, v_h_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
lean_dec(v_a_443_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0(lean_object* v_00_u03b1_450_, lean_object* v_msg_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___redArg(v_msg_451_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0___boxed(lean_object* v_00_u03b1_459_, lean_object* v_msg_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_throwError___at___00Lean_Elab_Tactic_BVDecide_Frontend_SatAtBVLogical_proveFalse_spec__0(v_00_u03b1_459_, v_msg_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
return v_res_467_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reify(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_SatAtBVLogical(builtin);
}
#ifdef __cplusplus
}
#endif
