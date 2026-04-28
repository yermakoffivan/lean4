// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Arith.Util
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15;
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearCnstr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearCnstr___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2;
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isDvdCnstr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isDvdCnstr___boxed(lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_4_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2);
v___x_6_ = l_Lean_Name_mkStr1(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(lean_object* v_type_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_8_ = l_Lean_Expr_cleanupAnnotations(v_type_7_);
v___x_9_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1);
v___x_10_ = l_Lean_Expr_isConstOf(v___x_8_, v___x_9_);
if (v___x_10_ == 0)
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__3);
v___x_12_ = l_Lean_Expr_isConstOf(v___x_8_, v___x_11_);
lean_dec_ref(v___x_8_);
return v___x_12_;
}
else
{
lean_dec_ref(v___x_8_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___boxed(lean_object* v_type_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_type_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType(lean_object* v_type_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_17_ = l_Lean_Expr_cleanupAnnotations(v_type_16_);
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__1);
v___x_19_ = l_Lean_Expr_isConstOf(v___x_17_, v___x_18_);
lean_dec_ref(v___x_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType___boxed(lean_object* v_type_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType(v_type_20_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked("succ", 4, 4);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__0);
v___x_25_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2, &l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType___closed__2);
v___x_26_ = l_Lean_Name_mkStr2(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__3);
v___x_30_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__2);
v___x_31_ = l_Lean_Name_mkStr2(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("HSub", 4, 4);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("hSub", 4, 4);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__6);
v___x_35_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__5);
v___x_36_ = l_Lean_Name_mkStr2(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_mk_string_unchecked("HMul", 4, 4);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked("hMul", 4, 4);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__9);
v___x_40_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__8);
v___x_41_ = l_Lean_Name_mkStr2(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__12);
v___x_45_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__11);
v___x_46_ = l_Lean_Name_mkStr2(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = l_Lean_Nat_mkType;
v___x_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm_x3f(lean_object* v_e_49_){
_start:
{
lean_object* v_00_u03b1_51_; lean_object* v_00_u03b1_56_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = l_Lean_Expr_cleanupAnnotations(v_e_49_);
v___x_61_ = l_Lean_Expr_isApp(v___x_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_dec_ref(v___x_60_);
v___x_62_ = lean_box(0);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_63_ = l_Lean_Expr_appFnCleanup___redArg(v___x_60_);
v___x_64_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__1);
v___x_65_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
uint8_t v___x_66_; 
v___x_66_ = l_Lean_Expr_isApp(v___x_63_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
lean_dec_ref(v___x_63_);
v___x_67_ = lean_box(0);
return v___x_67_;
}
else
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = l_Lean_Expr_appFnCleanup___redArg(v___x_63_);
v___x_69_ = l_Lean_Expr_isApp(v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; 
lean_dec_ref(v___x_68_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
else
{
lean_object* v_arg_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; 
v_arg_71_ = lean_ctor_get(v___x_68_, 1);
lean_inc_ref(v_arg_71_);
v___x_72_ = l_Lean_Expr_appFnCleanup___redArg(v___x_68_);
v___x_73_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__4);
v___x_74_ = l_Lean_Expr_isConstOf(v___x_72_, v___x_73_);
if (v___x_74_ == 0)
{
uint8_t v___x_75_; 
lean_dec_ref(v_arg_71_);
v___x_75_ = l_Lean_Expr_isApp(v___x_72_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec_ref(v___x_72_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = l_Lean_Expr_appFnCleanup___redArg(v___x_72_);
v___x_78_ = l_Lean_Expr_isApp(v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_dec_ref(v___x_77_);
v___x_79_ = lean_box(0);
return v___x_79_;
}
else
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = l_Lean_Expr_appFnCleanup___redArg(v___x_77_);
v___x_81_ = l_Lean_Expr_isApp(v___x_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
lean_dec_ref(v___x_80_);
v___x_82_ = lean_box(0);
return v___x_82_;
}
else
{
lean_object* v_arg_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_arg_83_ = lean_ctor_get(v___x_80_, 1);
lean_inc_ref(v_arg_83_);
v___x_84_ = l_Lean_Expr_appFnCleanup___redArg(v___x_80_);
v___x_85_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__7);
v___x_86_ = l_Lean_Expr_isConstOf(v___x_84_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_87_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__10);
v___x_88_ = l_Lean_Expr_isConstOf(v___x_84_, v___x_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__13);
v___x_90_ = l_Lean_Expr_isConstOf(v___x_84_, v___x_89_);
lean_dec_ref(v___x_84_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
lean_dec_ref(v_arg_83_);
v___x_91_ = lean_box(0);
return v___x_91_;
}
else
{
v_00_u03b1_56_ = v_arg_83_;
goto v___jp_55_;
}
}
else
{
lean_dec_ref(v___x_84_);
v_00_u03b1_56_ = v_arg_83_;
goto v___jp_55_;
}
}
else
{
lean_dec_ref(v___x_84_);
v_00_u03b1_51_ = v_arg_83_;
goto v___jp_50_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_72_);
v_00_u03b1_51_ = v_arg_71_;
goto v___jp_50_;
}
}
}
}
else
{
lean_object* v___x_92_; 
lean_dec_ref(v___x_63_);
v___x_92_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14, &l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14_once, _init_l_Lean_Meta_Simp_Arith_isLinearTerm_x3f___closed__14);
return v___x_92_;
}
}
v___jp_50_:
{
uint8_t v___x_52_; 
lean_inc_ref(v_00_u03b1_51_);
v___x_52_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedCommRingType(v_00_u03b1_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
lean_dec_ref(v_00_u03b1_51_);
v___x_53_ = lean_box(0);
return v___x_53_;
}
else
{
lean_object* v___x_54_; 
v___x_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_54_, 0, v_00_u03b1_51_);
return v___x_54_;
}
}
v___jp_55_:
{
uint8_t v___x_57_; 
lean_inc_ref(v_00_u03b1_56_);
v___x_57_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_00_u03b1_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec_ref(v_00_u03b1_56_);
v___x_58_ = lean_box(0);
return v___x_58_;
}
else
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_59_, 0, v_00_u03b1_56_);
return v___x_59_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearTerm(lean_object* v_e_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_Simp_Arith_isLinearTerm_x3f(v_e_93_);
if (lean_obj_tag(v___x_94_) == 0)
{
uint8_t v___x_95_; 
v___x_95_ = 0;
return v___x_95_;
}
else
{
uint8_t v___x_96_; 
lean_dec_ref(v___x_94_);
v___x_96_ = 1;
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearTerm___boxed(lean_object* v_e_97_){
_start:
{
uint8_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = l_Lean_Meta_Simp_Arith_isLinearTerm(v_e_97_);
v_r_99_ = lean_box(v_res_98_);
return v_r_99_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("Ne", 2, 2);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__0);
v___x_102_ = l_Lean_Name_mkStr1(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__2);
v___x_105_ = l_Lean_Name_mkStr1(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("GE", 2, 2);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5(void){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lean_mk_string_unchecked("ge", 2, 2);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__5);
v___x_109_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__4);
v___x_110_ = l_Lean_Name_mkStr2(v___x_109_, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("GT", 2, 2);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_mk_string_unchecked("gt", 2, 2);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__8);
v___x_114_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__7);
v___x_115_ = l_Lean_Name_mkStr2(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_mk_string_unchecked("LT", 2, 2);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_mk_string_unchecked("lt", 2, 2);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__11);
v___x_119_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__10);
v___x_120_ = l_Lean_Name_mkStr2(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_mk_string_unchecked("LE", 2, 2);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_mk_string_unchecked("le", 2, 2);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__14);
v___x_124_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__13);
v___x_125_ = l_Lean_Name_mkStr2(v___x_124_, v___x_123_);
return v___x_125_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearPosCnstr(lean_object* v_e_126_){
_start:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = l_Lean_Expr_cleanupAnnotations(v_e_126_);
v___x_128_ = l_Lean_Expr_isApp(v___x_127_);
if (v___x_128_ == 0)
{
lean_dec_ref(v___x_127_);
return v___x_128_;
}
else
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = l_Lean_Expr_appFnCleanup___redArg(v___x_127_);
v___x_130_ = l_Lean_Expr_isApp(v___x_129_);
if (v___x_130_ == 0)
{
lean_dec_ref(v___x_129_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = l_Lean_Expr_appFnCleanup___redArg(v___x_129_);
v___x_132_ = l_Lean_Expr_isApp(v___x_131_);
if (v___x_132_ == 0)
{
lean_dec_ref(v___x_131_);
return v___x_132_;
}
else
{
lean_object* v_arg_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v_arg_133_ = lean_ctor_get(v___x_131_, 1);
lean_inc_ref(v_arg_133_);
v___x_134_ = l_Lean_Expr_appFnCleanup___redArg(v___x_131_);
v___x_135_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__1);
v___x_136_ = l_Lean_Expr_isConstOf(v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_137_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__3);
v___x_138_ = l_Lean_Expr_isConstOf(v___x_134_, v___x_137_);
if (v___x_138_ == 0)
{
uint8_t v___x_139_; 
lean_dec_ref(v_arg_133_);
v___x_139_ = l_Lean_Expr_isApp(v___x_134_);
if (v___x_139_ == 0)
{
lean_dec_ref(v___x_134_);
return v___x_139_;
}
else
{
lean_object* v_arg_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_arg_140_ = lean_ctor_get(v___x_134_, 1);
lean_inc_ref(v_arg_140_);
v___x_141_ = l_Lean_Expr_appFnCleanup___redArg(v___x_134_);
v___x_142_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__6);
v___x_143_ = l_Lean_Expr_isConstOf(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__9);
v___x_145_ = l_Lean_Expr_isConstOf(v___x_141_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_146_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__12);
v___x_147_ = l_Lean_Expr_isConstOf(v___x_141_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15, &l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15_once, _init_l_Lean_Meta_Simp_Arith_isLinearPosCnstr___closed__15);
v___x_149_ = l_Lean_Expr_isConstOf(v___x_141_, v___x_148_);
lean_dec_ref(v___x_141_);
if (v___x_149_ == 0)
{
lean_dec_ref(v_arg_140_);
return v___x_149_;
}
else
{
uint8_t v___x_150_; 
v___x_150_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_140_);
return v___x_150_;
}
}
else
{
uint8_t v___x_151_; 
lean_dec_ref(v___x_141_);
v___x_151_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_140_);
return v___x_151_;
}
}
else
{
uint8_t v___x_152_; 
lean_dec_ref(v___x_141_);
v___x_152_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_140_);
return v___x_152_;
}
}
else
{
uint8_t v___x_153_; 
lean_dec_ref(v___x_141_);
v___x_153_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_140_);
return v___x_153_;
}
}
}
else
{
uint8_t v___x_154_; 
lean_dec_ref(v___x_134_);
v___x_154_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_133_);
return v___x_154_;
}
}
else
{
uint8_t v___x_155_; 
lean_dec_ref(v___x_134_);
v___x_155_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_133_);
return v___x_155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearPosCnstr___boxed(lean_object* v_e_156_){
_start:
{
uint8_t v_res_157_; lean_object* v_r_158_; 
v_res_157_ = l_Lean_Meta_Simp_Arith_isLinearPosCnstr(v_e_156_);
v_r_158_ = lean_box(v_res_157_);
return v_r_158_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked("Not", 3, 3);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0, &l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0_once, _init_l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__0);
v___x_161_ = l_Lean_Name_mkStr1(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isLinearCnstr(lean_object* v_e_162_){
_start:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
lean_inc_ref(v_e_162_);
v___x_163_ = l_Lean_Expr_cleanupAnnotations(v_e_162_);
v___x_164_ = l_Lean_Expr_isApp(v___x_163_);
if (v___x_164_ == 0)
{
uint8_t v___x_165_; 
lean_dec_ref(v___x_163_);
v___x_165_ = l_Lean_Meta_Simp_Arith_isLinearPosCnstr(v_e_162_);
return v___x_165_;
}
else
{
lean_object* v_arg_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v_arg_166_ = lean_ctor_get(v___x_163_, 1);
lean_inc_ref(v_arg_166_);
v___x_167_ = l_Lean_Expr_appFnCleanup___redArg(v___x_163_);
v___x_168_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1, &l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1_once, _init_l_Lean_Meta_Simp_Arith_isLinearCnstr___closed__1);
v___x_169_ = l_Lean_Expr_isConstOf(v___x_167_, v___x_168_);
lean_dec_ref(v___x_167_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; 
lean_dec_ref(v_arg_166_);
v___x_170_ = l_Lean_Meta_Simp_Arith_isLinearPosCnstr(v_e_162_);
return v___x_170_;
}
else
{
uint8_t v___x_171_; 
lean_dec_ref(v_e_162_);
v___x_171_ = l_Lean_Meta_Simp_Arith_isLinearPosCnstr(v_arg_166_);
return v___x_171_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isLinearCnstr___boxed(lean_object* v_e_172_){
_start:
{
uint8_t v_res_173_; lean_object* v_r_174_; 
v_res_173_ = l_Lean_Meta_Simp_Arith_isLinearCnstr(v_e_172_);
v_r_174_ = lean_box(v_res_173_);
return v_r_174_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_mk_string_unchecked("Dvd", 3, 3);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("dvd", 3, 3);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1, &l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1_once, _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__1);
v___x_178_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0, &l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0_once, _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__0);
v___x_179_ = l_Lean_Name_mkStr2(v___x_178_, v___x_177_);
return v___x_179_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_Arith_isDvdCnstr(lean_object* v_e_180_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = l_Lean_Expr_cleanupAnnotations(v_e_180_);
v___x_182_ = l_Lean_Expr_isApp(v___x_181_);
if (v___x_182_ == 0)
{
lean_dec_ref(v___x_181_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = l_Lean_Expr_appFnCleanup___redArg(v___x_181_);
v___x_184_ = l_Lean_Expr_isApp(v___x_183_);
if (v___x_184_ == 0)
{
lean_dec_ref(v___x_183_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = l_Lean_Expr_appFnCleanup___redArg(v___x_183_);
v___x_186_ = l_Lean_Expr_isApp(v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v___x_185_);
return v___x_186_;
}
else
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = l_Lean_Expr_appFnCleanup___redArg(v___x_185_);
v___x_188_ = l_Lean_Expr_isApp(v___x_187_);
if (v___x_188_ == 0)
{
lean_dec_ref(v___x_187_);
return v___x_188_;
}
else
{
lean_object* v_arg_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v_arg_189_ = lean_ctor_get(v___x_187_, 1);
lean_inc_ref(v_arg_189_);
v___x_190_ = l_Lean_Expr_appFnCleanup___redArg(v___x_187_);
v___x_191_ = lean_obj_once(&l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2, &l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2_once, _init_l_Lean_Meta_Simp_Arith_isDvdCnstr___closed__2);
v___x_192_ = l_Lean_Expr_isConstOf(v___x_190_, v___x_191_);
lean_dec_ref(v___x_190_);
if (v___x_192_ == 0)
{
lean_dec_ref(v_arg_189_);
return v___x_192_;
}
else
{
uint8_t v___x_193_; 
v___x_193_ = l___private_Lean_Meta_Tactic_Simp_Arith_Util_0__Lean_Meta_Simp_Arith_isSupportedType(v_arg_189_);
return v___x_193_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Arith_isDvdCnstr___boxed(lean_object* v_e_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = l_Lean_Meta_Simp_Arith_isDvdCnstr(v_e_194_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_Arith_Util(builtin);
}
#ifdef __cplusplus
}
#endif
