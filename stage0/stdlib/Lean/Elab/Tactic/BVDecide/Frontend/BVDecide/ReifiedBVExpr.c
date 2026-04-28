// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.ReifiedBVExpr
// Imports: public import Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.Reflect public import Std.Tactic.BVDecide.Reflect import Lean.Meta.LitValues
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_M_lookup(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_var___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBitVecValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_M_atomsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("BVDecide", 8, 8);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("BVExpr", 6, 6);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("eval", 4, 4);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_6_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__4);
v___x_7_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3);
v___x_8_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2);
v___x_9_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1);
v___x_10_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0);
v___x_11_ = l_Lean_Name_mkStr5(v___x_10_, v___x_9_, v___x_8_, v___x_7_, v___x_6_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_box(0);
v___x_13_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__5);
v___x_14_ = l_Lean_mkConst(v___x_13_, v___x_12_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr(lean_object* v_w_15_, lean_object* v_expr_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Elab_Tactic_BVDecide_Frontend_M_atomsAssignment(v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_34_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_34_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_34_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_34_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_32_; 
v___x_28_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__6);
v___x_29_ = l_Lean_mkNatLit(v_w_15_);
v___x_30_ = l_Lean_mkApp3(v___x_28_, v___x_29_, v_a_24_, v_expr_16_);
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 0, v___x_30_);
v___x_32_ = v___x_26_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v___x_30_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
else
{
lean_dec_ref(v_expr_16_);
lean_dec(v_w_15_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___boxed(lean_object* v_w_35_, lean_object* v_expr_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr(v_w_35_, v_expr_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
return v_res_43_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__1);
v___x_47_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__0);
v___x_48_ = l_Lean_Name_mkStr2(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = l_Lean_Level_ofNat(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__3);
v___x_53_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__4);
v___x_55_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__2);
v___x_56_ = l_Lean_mkConst(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("BitVec", 6, 6);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6);
v___x_59_ = l_Lean_Name_mkStr1(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7);
v___x_62_ = l_Lean_mkConst(v___x_61_, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl(lean_object* v_w_63_, lean_object* v_expr_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__5);
v___x_66_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__8);
v___x_67_ = l_Lean_mkNatLit(v_w_63_);
v___x_68_ = l_Lean_Expr_app___override(v___x_66_, v___x_67_);
v___x_69_ = l_Lean_mkAppB(v___x_65_, v___x_68_, v_expr_64_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0(lean_object* v___x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_70_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0___boxed(lean_object* v___x_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0(v___x_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
return v_res_85_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_mk_string_unchecked("var", 3, 3);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_87_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__0);
v___x_88_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3);
v___x_89_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2);
v___x_90_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1);
v___x_91_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0);
v___x_92_ = l_Lean_Name_mkStr5(v___x_91_, v___x_90_, v___x_89_, v___x_88_, v___x_87_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_box(0);
v___x_94_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__1);
v___x_95_ = l_Lean_mkConst(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___f_97_; 
v___x_96_ = lean_box(0);
v___f_97_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___lam__0___boxed), 7, 1);
lean_closure_set(v___f_97_, 0, v___x_96_);
return v___f_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom(lean_object* v_e_98_, lean_object* v_width_99_, uint8_t v_synthetic_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v___x_107_; 
lean_inc(v_width_99_);
v___x_107_ = l_Lean_Elab_Tactic_BVDecide_Frontend_M_lookup(v_e_98_, v_width_99_, v_synthetic_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_122_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_122_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_122_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_122_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___f_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_112_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__2);
lean_inc_n(v_width_99_, 2);
v___x_113_ = l_Lean_mkNatLit(v_width_99_);
lean_inc(v_a_108_);
v___x_114_ = l_Lean_mkNatLit(v_a_108_);
v___x_115_ = l_Lean_mkAppB(v___x_112_, v___x_113_, v___x_114_);
v___f_116_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3);
v___x_117_ = l_Std_Tactic_BVDecide_BVExpr_var___override(v_width_99_, v_a_108_);
lean_inc_ref(v___x_115_);
v___x_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_118_, 0, v_width_99_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
lean_ctor_set(v___x_118_, 2, v___x_115_);
lean_ctor_set(v___x_118_, 3, v___f_116_);
lean_ctor_set(v___x_118_, 4, v___x_115_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_118_);
v___x_120_ = v___x_110_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_118_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_width_99_);
v_a_123_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_107_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_107_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___boxed(lean_object* v_e_131_, lean_object* v_width_132_, lean_object* v_synthetic_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
uint8_t v_synthetic_boxed_140_; lean_object* v_res_141_; 
v_synthetic_boxed_140_ = lean_unbox(v_synthetic_133_);
v_res_141_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom(v_e_131_, v_width_132_, v_synthetic_boxed_140_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
return v_res_141_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__0);
v___x_144_ = l_Lean_Name_mkStr1(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(lean_object* v_ty_145_, lean_object* v_expr_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_ty_145_, v_a_148_, v_a_150_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref(v___x_155_);
v___x_157_ = l_Lean_Expr_cleanupAnnotations(v_a_156_);
v___x_158_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___closed__1);
v___x_159_ = l_Lean_Expr_isConstOf(v___x_157_, v___x_158_);
if (v___x_159_ == 0)
{
uint8_t v___x_160_; 
v___x_160_ = l_Lean_Expr_isApp(v___x_157_);
if (v___x_160_ == 0)
{
lean_dec_ref(v___x_157_);
lean_dec_ref(v_expr_146_);
goto v___jp_152_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_161_ = l_Lean_Expr_appFnCleanup___redArg(v___x_157_);
v___x_162_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7);
v___x_163_ = l_Lean_Expr_isConstOf(v___x_161_, v___x_162_);
lean_dec_ref(v___x_161_);
if (v___x_163_ == 0)
{
lean_dec_ref(v_expr_146_);
goto v___jp_152_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Meta_getBitVecValue_x3f(v_expr_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_185_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_185_ == 0)
{
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_185_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_185_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
if (lean_obj_tag(v_a_165_) == 1)
{
lean_object* v_val_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_180_; 
v_val_169_ = lean_ctor_get(v_a_165_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_180_ == 0)
{
v___x_171_ = v_a_165_;
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_val_169_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_180_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_snd_173_; lean_object* v___x_175_; 
v_snd_173_ = lean_ctor_get(v_val_169_, 1);
lean_inc(v_snd_173_);
lean_dec(v_val_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v_snd_173_);
v___x_175_ = v___x_171_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_snd_173_);
v___x_175_ = v_reuseFailAlloc_179_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_177_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_175_);
v___x_177_ = v___x_167_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
else
{
lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec(v_a_165_);
v___x_181_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_181_);
v___x_183_ = v___x_167_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
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
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
v_a_186_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_164_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_164_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
}
else
{
lean_object* v___x_194_; 
lean_dec_ref(v___x_157_);
v___x_194_ = l_Lean_Meta_getNatValue_x3f(v_expr_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec_ref(v_expr_146_);
return v___x_194_;
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec_ref(v_expr_146_);
v_a_195_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_155_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_155_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
v___jp_152_:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_box(0);
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg___boxed(lean_object* v_ty_203_, lean_object* v_expr_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(v_ty_203_, v_expr_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f(lean_object* v_ty_211_, lean_object* v_expr_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(v_ty_211_, v_expr_212_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f___boxed(lean_object* v_ty_220_, lean_object* v_expr_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_getNatOrBvValue_x3f(v_ty_220_, v_expr_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg(lean_object* v_e_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = l_Lean_Expr_hasMVar(v_e_229_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v_e_229_);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_mctx_237_; lean_object* v___x_238_; lean_object* v_fst_239_; lean_object* v_snd_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_cache_243_; lean_object* v_zetaDeltaFVarIds_244_; lean_object* v_postponed_245_; lean_object* v_diag_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_255_; 
v___x_235_ = lean_st_ref_get(v___y_231_);
lean_dec(v___x_235_);
v___x_236_ = lean_st_ref_get(v___y_230_);
v_mctx_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc_ref(v_mctx_237_);
lean_dec(v___x_236_);
v___x_238_ = l_Lean_instantiateMVarsCore(v_mctx_237_, v_e_229_);
v_fst_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_fst_239_);
v_snd_240_ = lean_ctor_get(v___x_238_, 1);
lean_inc(v_snd_240_);
lean_dec_ref(v___x_238_);
v___x_241_ = lean_st_ref_get(v___y_231_);
lean_dec(v___x_241_);
v___x_242_ = lean_st_ref_take(v___y_230_);
v_cache_243_ = lean_ctor_get(v___x_242_, 1);
v_zetaDeltaFVarIds_244_ = lean_ctor_get(v___x_242_, 2);
v_postponed_245_ = lean_ctor_get(v___x_242_, 3);
v_diag_246_ = lean_ctor_get(v___x_242_, 4);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v___x_242_, 0);
lean_dec(v_unused_256_);
v___x_248_ = v___x_242_;
v_isShared_249_ = v_isSharedCheck_255_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_diag_246_);
lean_inc(v_postponed_245_);
lean_inc(v_zetaDeltaFVarIds_244_);
lean_inc(v_cache_243_);
lean_dec(v___x_242_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_255_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 0, v_snd_240_);
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_snd_240_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_cache_243_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_zetaDeltaFVarIds_244_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_postponed_245_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_diag_246_);
v___x_251_ = v_reuseFailAlloc_254_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_st_ref_set(v___y_230_, v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_fst_239_);
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg___boxed(lean_object* v_e_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg(v_e_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec(v___y_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0(lean_object* v_e_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg(v_e_262_, v___y_265_, v___y_267_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___boxed(lean_object* v_e_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0(v_e_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom(lean_object* v_x_278_, uint8_t v_synthetic_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; 
lean_inc(v_a_284_);
lean_inc_ref(v_a_283_);
lean_inc(v_a_282_);
lean_inc_ref(v_a_281_);
lean_inc_ref(v_x_278_);
v___x_286_ = lean_infer_type(v_x_278_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref(v___x_286_);
v___x_288_ = l_Lean_Meta_whnfR(v_a_287_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_290_; lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_349_; 
v_a_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_289_);
lean_dec_ref(v___x_288_);
v___x_290_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom_spec__0___redArg(v_a_289_, v_a_282_, v_a_284_);
v_a_291_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_349_ == 0)
{
v___x_293_ = v___x_290_;
v_isShared_294_ = v_isSharedCheck_349_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_290_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_349_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = l_Lean_Expr_cleanupAnnotations(v_a_291_);
v___x_301_ = l_Lean_Expr_isApp(v___x_300_);
if (v___x_301_ == 0)
{
lean_dec_ref(v___x_300_);
lean_dec_ref(v_x_278_);
goto v___jp_295_;
}
else
{
lean_object* v_arg_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_arg_302_ = lean_ctor_get(v___x_300_, 1);
lean_inc_ref(v_arg_302_);
v___x_303_ = l_Lean_Expr_appFnCleanup___redArg(v___x_300_);
v___x_304_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__7);
v___x_305_ = l_Lean_Expr_isConstOf(v___x_303_, v___x_304_);
lean_dec_ref(v___x_303_);
if (v___x_305_ == 0)
{
lean_dec_ref(v_arg_302_);
lean_dec_ref(v_x_278_);
goto v___jp_295_;
}
else
{
lean_object* v___x_306_; 
lean_del_object(v___x_293_);
v___x_306_ = l_Lean_Meta_getNatValue_x3f(v_arg_302_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
lean_dec_ref(v_arg_302_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_340_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_340_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_340_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_340_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
if (lean_obj_tag(v_a_307_) == 1)
{
lean_object* v_val_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_335_; 
lean_del_object(v___x_309_);
v_val_311_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_335_ == 0)
{
v___x_313_ = v_a_307_;
v_isShared_314_ = v_isSharedCheck_335_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_val_311_);
lean_dec(v_a_307_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_335_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom(v_x_278_, v_val_311_, v_synthetic_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_326_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_326_ == 0)
{
v___x_318_ = v___x_315_;
v_isShared_319_ = v_isSharedCheck_326_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_315_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_326_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v_a_316_);
v___x_321_ = v___x_313_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_325_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_323_; 
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_321_);
v___x_323_ = v___x_318_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
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
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_del_object(v___x_313_);
v_a_327_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_315_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_315_);
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
else
{
lean_object* v___x_336_; lean_object* v___x_338_; 
lean_dec(v_a_307_);
lean_dec_ref(v_x_278_);
v___x_336_ = lean_box(0);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_336_);
v___x_338_ = v___x_309_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_336_);
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
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec_ref(v_x_278_);
v_a_341_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_306_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_306_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
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
}
v___jp_295_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_box(0);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v___x_296_);
v___x_298_ = v___x_293_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
lean_dec_ref(v_x_278_);
v_a_350_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_288_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_288_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
lean_dec_ref(v_x_278_);
v_a_358_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_286_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_286_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom___boxed(lean_object* v_x_366_, lean_object* v_synthetic_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
uint8_t v_synthetic_boxed_374_; lean_object* v_res_375_; 
v_synthetic_boxed_374_ = lean_unbox(v_synthetic_367_);
v_res_375_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_bitVecAtom(v_x_366_, v_synthetic_boxed_374_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
return v_res_375_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0(void){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = lean_mk_string_unchecked("const", 5, 5);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_377_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__0);
v___x_378_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__3);
v___x_379_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__2);
v___x_380_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__1);
v___x_381_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkEvalExpr___closed__0);
v___x_382_ = l_Lean_Name_mkStr5(v___x_381_, v___x_380_, v___x_379_, v___x_378_, v___x_377_);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__1);
v___x_385_ = l_Lean_mkConst(v___x_384_, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3(void){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_mk_string_unchecked("ofNat", 5, 5);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__3);
v___x_388_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVRefl___closed__6);
v___x_389_ = l_Lean_Name_mkStr2(v___x_388_, v___x_387_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_box(0);
v___x_391_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__4);
v___x_392_ = l_Lean_Expr_const___override(v___x_391_, v___x_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg(lean_object* v_w_393_, lean_object* v_val_394_){
_start:
{
lean_object* v_bvExpr_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v_expr_402_; lean_object* v_proof_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
lean_inc(v_val_394_);
lean_inc_n(v_w_393_, 2);
v_bvExpr_396_ = l_Std_Tactic_BVDecide_BVExpr_const___override(v_w_393_, v_val_394_);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__2);
v___x_398_ = l_Lean_mkNatLit(v_w_393_);
v___x_399_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___closed__5);
v___x_400_ = l_Lean_mkNatLit(v_val_394_);
lean_inc_ref(v___x_398_);
v___x_401_ = l_Lean_mkAppB(v___x_399_, v___x_398_, v___x_400_);
lean_inc_ref(v___x_401_);
v_expr_402_ = l_Lean_mkAppB(v___x_397_, v___x_398_, v___x_401_);
v_proof_403_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkAtom___closed__3);
v___x_404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_404_, 0, v_w_393_);
lean_ctor_set(v___x_404_, 1, v_bvExpr_396_);
lean_ctor_set(v___x_404_, 2, v___x_401_);
lean_ctor_set(v___x_404_, 3, v_proof_403_);
lean_ctor_set(v___x_404_, 4, v_expr_402_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg___boxed(lean_object* v_w_406_, lean_object* v_val_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg(v_w_406_, v_val_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst(lean_object* v_w_410_, lean_object* v_val_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___redArg(v_w_410_, v_val_411_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst___boxed(lean_object* v_w_419_, lean_object* v_val_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Elab_Tactic_BVDecide_Frontend_ReifiedBVExpr_mkBVConst(v_w_419_, v_val_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
return v_res_427_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reflect(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reflect(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_BVDecide_ReifiedBVExpr(builtin);
}
#ifdef __cplusplus
}
#endif
