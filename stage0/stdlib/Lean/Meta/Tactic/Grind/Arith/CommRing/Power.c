// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.Power
// Imports: import Init.Grind import Lean.Meta.Tactic.Grind.Arith.Simproc import Lean.Meta.NatInstTesters public import Lean.Meta.Tactic.Grind.PropagatorAttr
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
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0___boxed(lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v_x_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
lean_dec(v___y_17_);
lean_dec(v___y_16_);
return v_res_27_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_box(0);
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_30_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_31_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("Semiring", 8, 8);
return v___x_32_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("pow_add_congr", 13, 13);
return v___x_33_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_34_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__4);
v___x_35_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__3);
v___x_36_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__2);
v___x_37_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__1);
v___x_38_ = l_Lean_Name_mkStr4(v___x_37_, v___x_36_, v___x_35_, v___x_34_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_39_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_40_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__7);
v___x_42_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__6);
v___x_43_ = l_Lean_Name_mkStr2(v___x_42_, v___x_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0(lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_e_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v_snd_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_239_; 
v___x_61_ = lean_st_ref_get(v___y_59_);
lean_dec(v___x_61_);
v___x_62_ = lean_st_ref_get(v___y_50_);
v_snd_63_ = lean_ctor_get(v_b_49_, 1);
v_isSharedCheck_239_ = !lean_is_exclusive(v_b_49_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; 
v_unused_240_ = lean_ctor_get(v_b_49_, 0);
lean_dec(v_unused_240_);
v___x_65_ = v_b_49_;
v_isShared_66_ = v_isSharedCheck_239_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_snd_63_);
lean_dec(v_b_49_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_239_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; 
lean_inc(v_snd_63_);
v___x_67_ = l_Lean_Meta_Grind_Goal_getENode(v___x_62_, v_snd_63_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___x_62_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v_a_68_; lean_object* v_self_69_; lean_object* v_next_70_; lean_object* v___x_71_; 
v_a_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_a_68_);
lean_dec_ref(v___x_67_);
v_self_69_ = lean_ctor_get(v_a_68_, 0);
lean_inc_ref_n(v_self_69_, 2);
v_next_70_ = lean_ctor_get(v_a_68_, 1);
lean_inc_ref(v_next_70_);
lean_dec(v_a_68_);
v___x_71_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_self_69_, v___y_57_, v___y_59_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_222_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_222_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_222_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_222_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_76_; lean_object* v___y_91_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_76_ = lean_box(0);
v___x_100_ = l_Lean_Expr_cleanupAnnotations(v_a_72_);
v___x_101_ = l_Lean_Expr_isApp(v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec_ref(v___x_100_);
lean_dec_ref(v_self_69_);
v___x_102_ = lean_box(0);
v___x_103_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_102_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_103_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v_arg_104_ = lean_ctor_get(v___x_100_, 1);
lean_inc_ref(v_arg_104_);
v___x_105_ = l_Lean_Expr_appFnCleanup___redArg(v___x_100_);
v___x_106_ = l_Lean_Expr_isApp(v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec_ref(v___x_105_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_107_ = lean_box(0);
v___x_108_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_107_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_108_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v_arg_109_ = lean_ctor_get(v___x_105_, 1);
lean_inc_ref(v_arg_109_);
v___x_110_ = l_Lean_Expr_appFnCleanup___redArg(v___x_105_);
v___x_111_ = l_Lean_Expr_isApp(v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec_ref(v___x_110_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_112_ = lean_box(0);
v___x_113_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_112_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_113_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_arg_114_ = lean_ctor_get(v___x_110_, 1);
lean_inc_ref(v_arg_114_);
v___x_115_ = l_Lean_Expr_appFnCleanup___redArg(v___x_110_);
v___x_116_ = l_Lean_Expr_isApp(v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec_ref(v___x_115_);
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_117_ = lean_box(0);
v___x_118_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_117_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_118_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_119_; uint8_t v___y_121_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_arg_119_ = lean_ctor_get(v___x_115_, 1);
lean_inc_ref(v_arg_119_);
v___x_205_ = l_Lean_Expr_appFnCleanup___redArg(v___x_115_);
v___x_206_ = l_Lean_Expr_isApp(v___x_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
lean_dec_ref(v___x_205_);
lean_dec_ref(v_arg_119_);
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_207_ = lean_box(0);
v___x_208_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_207_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_208_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_arg_209_ = lean_ctor_get(v___x_205_, 1);
lean_inc_ref(v_arg_209_);
v___x_210_ = l_Lean_Expr_appFnCleanup___redArg(v___x_205_);
v___x_211_ = l_Lean_Expr_isApp(v___x_210_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec_ref(v___x_210_);
lean_dec_ref(v_arg_209_);
lean_dec_ref(v_arg_119_);
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_212_ = lean_box(0);
v___x_213_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_212_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_213_;
goto v___jp_90_;
}
else
{
lean_object* v_arg_214_; lean_object* v___x_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v_arg_214_ = lean_ctor_get(v___x_210_, 1);
lean_inc_ref(v_arg_214_);
v___x_215_ = l_Lean_Expr_appFnCleanup___redArg(v___x_210_);
v___x_216_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__8);
v___x_217_ = l_Lean_Expr_isConstOf(v___x_215_, v___x_216_);
lean_dec_ref(v___x_215_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref(v_arg_214_);
lean_dec_ref(v_arg_209_);
lean_dec_ref(v_arg_119_);
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___x_218_ = lean_box(0);
v___x_219_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___lam__0(v___x_218_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_219_;
goto v___jp_90_;
}
else
{
uint8_t v___x_220_; 
v___x_220_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_45_, v_arg_214_);
lean_dec_ref(v_arg_214_);
if (v___x_220_ == 0)
{
lean_dec_ref(v_arg_209_);
v___y_121_ = v___x_220_;
goto v___jp_120_;
}
else
{
uint8_t v___x_221_; 
v___x_221_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_45_, v_arg_209_);
lean_dec_ref(v_arg_209_);
v___y_121_ = v___x_221_;
goto v___jp_120_;
}
}
}
}
v___jp_120_:
{
if (v___y_121_ == 0)
{
lean_dec_ref(v_arg_119_);
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
goto v___jp_77_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_45_, v_arg_119_);
lean_dec_ref(v_arg_119_);
if (v___x_122_ == 0)
{
lean_dec_ref(v_arg_114_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
goto v___jp_77_;
}
else
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Meta_Structural_isInstHAddNat___redArg(v_arg_114_, v___y_57_, v___y_59_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; uint8_t v___x_125_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref(v___x_123_);
v___x_125_ = lean_unbox(v_a_124_);
lean_dec(v_a_124_);
if (v___x_125_ == 0)
{
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
goto v___jp_77_;
}
else
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = l_Lean_Expr_appFn_x21(v_e_46_);
v___x_127_ = l_Lean_Expr_appFn_x21(v___x_126_);
lean_dec_ref(v___x_126_);
lean_inc_ref(v_arg_109_);
lean_inc_ref_n(v_a_47_, 2);
lean_inc_ref(v___x_127_);
v___x_128_ = l_Lean_mkAppB(v___x_127_, v_a_47_, v_arg_109_);
lean_inc_ref(v_arg_104_);
v___x_129_ = l_Lean_mkAppB(v___x_127_, v_a_47_, v_arg_104_);
v___x_130_ = l_Lean_Meta_mkMul(v___x_128_, v___x_129_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_132_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_a_131_);
lean_dec_ref(v___x_130_);
lean_inc(v___y_59_);
lean_inc_ref(v___y_58_);
lean_inc(v___y_57_);
lean_inc_ref(v___y_56_);
lean_inc(v___y_55_);
lean_inc_ref(v___y_54_);
lean_inc(v___y_53_);
lean_inc_ref(v___y_52_);
lean_inc(v___y_51_);
lean_inc(v___y_50_);
v___x_132_ = lean_grind_preprocess(v_a_131_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_134_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_a_133_);
lean_dec_ref(v___x_132_);
v___x_134_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_46_, v___y_50_, v___y_59_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v_expr_136_; lean_object* v___x_137_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref(v___x_134_);
v_expr_136_ = lean_ctor_get(v_a_133_, 0);
lean_inc_ref_n(v_expr_136_, 2);
lean_inc(v___y_59_);
lean_inc_ref(v___y_58_);
lean_inc(v___y_57_);
lean_inc_ref(v___y_56_);
lean_inc(v___y_55_);
lean_inc_ref(v___y_54_);
lean_inc(v___y_53_);
lean_inc_ref(v___y_52_);
lean_inc(v___y_51_);
lean_inc(v___y_50_);
v___x_137_ = lean_grind_internalize(v_expr_136_, v_a_135_, v___x_76_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec_ref(v___x_137_);
v___x_138_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__5);
lean_inc_ref(v_a_48_);
v___x_139_ = l_Lean_Meta_Grind_Arith_mkSemiringThm(v___x_138_, v_a_48_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_140_);
lean_dec_ref(v___x_139_);
if (lean_obj_tag(v_a_140_) == 1)
{
lean_object* v_val_141_; lean_object* v___x_142_; 
v_val_141_ = lean_ctor_get(v_a_140_, 0);
lean_inc(v_val_141_);
lean_dec_ref(v_a_140_);
lean_inc(v___y_59_);
lean_inc_ref(v___y_58_);
lean_inc(v___y_57_);
lean_inc_ref(v___y_56_);
lean_inc(v___y_55_);
lean_inc_ref(v___y_54_);
lean_inc(v___y_53_);
lean_inc_ref(v___y_52_);
lean_inc(v___y_51_);
lean_inc(v___y_50_);
lean_inc_ref(v_a_44_);
v___x_142_ = lean_grind_mk_eq_proof(v_a_44_, v_self_69_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_144_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref(v___x_142_);
v___x_144_ = l_Lean_Meta_Simp_Result_getProof(v_a_133_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_146_; uint8_t v___x_147_; lean_object* v___x_148_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_a_145_);
lean_dec_ref(v___x_144_);
lean_inc_ref(v_a_44_);
lean_inc_ref(v_expr_136_);
lean_inc_ref(v_a_47_);
v___x_146_ = l_Lean_mkApp7(v_val_141_, v_a_47_, v_expr_136_, v_a_44_, v_arg_109_, v_arg_104_, v_a_143_, v_a_145_);
v___x_147_ = 0;
lean_inc_ref(v_e_46_);
v___x_148_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_46_, v_expr_136_, v___x_146_, v___x_147_, v___y_50_, v___y_52_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
v___y_91_ = v___x_148_;
goto v___jp_90_;
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
lean_dec(v_a_143_);
lean_dec(v_val_141_);
lean_dec_ref(v_expr_136_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_149_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_144_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_144_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_dec(v_val_141_);
lean_dec_ref(v_expr_136_);
lean_dec(v_a_133_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_157_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_142_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_142_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
else
{
lean_dec(v_a_140_);
lean_dec_ref(v_expr_136_);
lean_dec(v_a_133_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
goto v___jp_77_;
}
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec_ref(v_expr_136_);
lean_dec(v_a_133_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_165_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_139_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_139_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
else
{
lean_dec_ref(v_expr_136_);
lean_dec(v_a_133_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_dec_ref(v_self_69_);
v___y_91_ = v___x_137_;
goto v___jp_90_;
}
}
else
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
lean_dec(v_a_133_);
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_173_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_134_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_134_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_181_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_132_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_132_);
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
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_189_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_130_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_130_);
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
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_dec_ref(v_arg_109_);
lean_dec_ref(v_arg_104_);
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_197_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_123_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_123_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
}
}
}
}
}
v___jp_77_:
{
uint8_t v___x_78_; 
v___x_78_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_next_70_, v_a_44_);
if (v___x_78_ == 0)
{
lean_object* v___x_80_; 
lean_del_object(v___x_74_);
lean_dec(v_snd_63_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 1, v_next_70_);
lean_ctor_set(v___x_65_, 0, v___x_76_);
v___x_80_ = v___x_65_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_76_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v_next_70_);
v___x_80_ = v_reuseFailAlloc_82_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_b_49_ = v___x_80_;
goto _start;
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_85_; 
lean_dec_ref(v_next_70_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v___x_83_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___closed__0);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_83_);
v___x_85_ = v___x_65_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_snd_63_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_87_; 
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_85_);
v___x_87_ = v___x_74_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
v___jp_90_:
{
if (lean_obj_tag(v___y_91_) == 0)
{
lean_dec_ref(v___y_91_);
goto v___jp_77_;
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_del_object(v___x_74_);
lean_dec_ref(v_next_70_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_92_ = lean_ctor_get(v___y_91_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___y_91_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___y_91_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___y_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec_ref(v_next_70_);
lean_dec_ref(v_self_69_);
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_223_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_71_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_71_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_del_object(v___x_65_);
lean_dec(v_snd_63_);
lean_dec_ref(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_e_46_);
lean_dec_ref(v_a_44_);
v_a_231_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_67_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_67_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0___boxed(lean_object** _args){
lean_object* v_a_241_ = _args[0];
lean_object* v_a_242_ = _args[1];
lean_object* v_e_243_ = _args[2];
lean_object* v_a_244_ = _args[3];
lean_object* v_a_245_ = _args[4];
lean_object* v_b_246_ = _args[5];
lean_object* v___y_247_ = _args[6];
lean_object* v___y_248_ = _args[7];
lean_object* v___y_249_ = _args[8];
lean_object* v___y_250_ = _args[9];
lean_object* v___y_251_ = _args[10];
lean_object* v___y_252_ = _args[11];
lean_object* v___y_253_ = _args[12];
lean_object* v___y_254_ = _args[13];
lean_object* v___y_255_ = _args[14];
lean_object* v___y_256_ = _args[15];
lean_object* v___y_257_ = _args[16];
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0(v_a_241_, v_a_242_, v_e_243_, v_a_244_, v_a_245_, v_b_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v_a_242_);
return v_res_258_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_mk_string_unchecked("HPow", 4, 4);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_mk_string_unchecked("hPow", 4, 4);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__1);
v___x_262_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__0);
v___x_263_ = l_Lean_Name_mkStr2(v___x_262_, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3(void){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_264_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__3);
v___x_266_ = l_Lean_Name_mkStr1(v___x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower(lean_object* v_e_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v___x_282_; uint8_t v___x_283_; 
lean_inc_ref(v_e_267_);
v___x_282_ = l_Lean_Expr_cleanupAnnotations(v_e_267_);
v___x_283_ = l_Lean_Expr_isApp(v___x_282_);
if (v___x_283_ == 0)
{
lean_dec_ref(v___x_282_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v_arg_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_arg_284_ = lean_ctor_get(v___x_282_, 1);
lean_inc_ref(v_arg_284_);
v___x_285_ = l_Lean_Expr_appFnCleanup___redArg(v___x_282_);
v___x_286_ = l_Lean_Expr_isApp(v___x_285_);
if (v___x_286_ == 0)
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v_arg_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_arg_287_ = lean_ctor_get(v___x_285_, 1);
lean_inc_ref(v_arg_287_);
v___x_288_ = l_Lean_Expr_appFnCleanup___redArg(v___x_285_);
v___x_289_ = l_Lean_Expr_isApp(v___x_288_);
if (v___x_289_ == 0)
{
lean_dec_ref(v___x_288_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = l_Lean_Expr_appFnCleanup___redArg(v___x_288_);
v___x_291_ = l_Lean_Expr_isApp(v___x_290_);
if (v___x_291_ == 0)
{
lean_dec_ref(v___x_290_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v_arg_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v_arg_292_ = lean_ctor_get(v___x_290_, 1);
lean_inc_ref(v_arg_292_);
v___x_293_ = l_Lean_Expr_appFnCleanup___redArg(v___x_290_);
v___x_294_ = l_Lean_Expr_isApp(v___x_293_);
if (v___x_294_ == 0)
{
lean_dec_ref(v___x_293_);
lean_dec_ref(v_arg_292_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v_arg_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_arg_295_ = lean_ctor_get(v___x_293_, 1);
lean_inc_ref(v_arg_295_);
v___x_296_ = l_Lean_Expr_appFnCleanup___redArg(v___x_293_);
v___x_297_ = l_Lean_Expr_isApp(v___x_296_);
if (v___x_297_ == 0)
{
lean_dec_ref(v___x_296_);
lean_dec_ref(v_arg_295_);
lean_dec_ref(v_arg_292_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v_arg_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v_arg_298_ = lean_ctor_get(v___x_296_, 1);
lean_inc_ref(v_arg_298_);
v___x_299_ = l_Lean_Expr_appFnCleanup___redArg(v___x_296_);
v___x_300_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2);
v___x_301_ = l_Lean_Expr_isConstOf(v___x_299_, v___x_300_);
lean_dec_ref(v___x_299_);
if (v___x_301_ == 0)
{
lean_dec_ref(v_arg_298_);
lean_dec_ref(v_arg_295_);
lean_dec_ref(v_arg_292_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
goto v___jp_279_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
lean_inc_ref(v_arg_295_);
v___x_302_ = l_Lean_Expr_cleanupAnnotations(v_arg_295_);
v___x_303_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__4);
v___x_304_ = l_Lean_Expr_isConstOf(v___x_302_, v___x_303_);
lean_dec_ref(v___x_302_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec_ref(v_arg_298_);
lean_dec_ref(v_arg_295_);
lean_dec_ref(v_arg_292_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
v___x_305_ = lean_box(0);
v___x_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
return v___x_306_;
}
else
{
uint8_t v___x_307_; 
v___x_307_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_298_, v_arg_292_);
lean_dec_ref(v_arg_292_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec_ref(v_arg_298_);
lean_dec_ref(v_arg_295_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_e_267_);
v___x_308_ = lean_box(0);
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
return v___x_309_;
}
else
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_box(0);
lean_inc_ref(v_arg_284_);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v_arg_284_);
v___x_312_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_Arith_CommRing_propagatePower_spec__0(v_arg_284_, v_arg_295_, v_e_267_, v_arg_287_, v_arg_298_, v___x_311_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_);
lean_dec_ref(v_arg_295_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_326_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_326_ == 0)
{
v___x_315_ = v___x_312_;
v_isShared_316_ = v_isSharedCheck_326_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_312_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_326_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v_fst_317_; 
v_fst_317_ = lean_ctor_get(v_a_313_, 0);
lean_inc(v_fst_317_);
lean_dec(v_a_313_);
if (lean_obj_tag(v_fst_317_) == 0)
{
lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_318_ = lean_box(0);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_318_);
v___x_320_ = v___x_315_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
lean_object* v_val_322_; lean_object* v___x_324_; 
v_val_322_ = lean_ctor_get(v_fst_317_, 0);
lean_inc(v_val_322_);
lean_dec_ref(v_fst_317_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v_val_322_);
v___x_324_ = v___x_315_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_val_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
v_a_327_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_312_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_312_);
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
}
}
}
}
}
}
v___jp_279_:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_box(0);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_propagatePower___boxed(lean_object* v_e_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_Meta_Grind_Arith_CommRing_propagatePower(v_e_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec(v_a_336_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_propagatePower___closed__2);
v___x_350_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_propagatePower___boxed), 12, 0);
v___x_351_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14____boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14_();
return v_res_353_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_0__Lean_Meta_Grind_Arith_CommRing_propagatePower___regBuiltin_Lean_Meta_Grind_Arith_CommRing_propagatePower_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_CommRing_Power_4089623348____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Power(builtin);
}
#ifdef __cplusplus
}
#endif
