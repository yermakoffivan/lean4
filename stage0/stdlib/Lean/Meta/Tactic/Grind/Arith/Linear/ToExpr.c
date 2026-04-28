// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.ToExpr
// Imports: public import Init.Grind.Ordered.Linarith public import Lean.ToExpr
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprPoly;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_instToExprExpr;
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Linarith", 8, 8);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Poly", 4, 4);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("nil", 3, 3);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__4);
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_10_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_11_ = l_Lean_Name_mkStr5(v___x_10_, v___x_9_, v___x_8_, v___x_7_, v___x_6_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_box(0);
v___x_13_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__5);
v___x_14_ = l_Lean_mkConst(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("add", 3, 3);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_16_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7);
v___x_17_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_19_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_20_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_21_ = l_Lean_Name_mkStr5(v___x_20_, v___x_19_, v___x_18_, v___x_17_, v___x_16_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__8);
v___x_24_ = l_Lean_mkConst(v___x_23_, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_nat_to_int(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12);
v___x_30_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__11);
v___x_31_ = l_Lean_Name_mkStr2(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = l_Lean_Level_ofNat(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_box(0);
v___x_35_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__14);
v___x_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__15);
v___x_38_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__13);
v___x_39_ = l_Lean_Expr_const___override(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17);
v___x_42_ = l_Lean_Name_mkStr1(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__18);
v___x_45_ = l_Lean_Expr_const___override(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__20);
v___x_48_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__17);
v___x_49_ = l_Lean_Name_mkStr2(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_box(0);
v___x_51_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__21);
v___x_52_ = l_Lean_Expr_const___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_ofPoly(lean_object* v_p_53_){
_start:
{
if (lean_obj_tag(v_p_53_) == 0)
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__6);
return v___x_54_;
}
else
{
lean_object* v_k_55_; lean_object* v_v_56_; lean_object* v_p_57_; lean_object* v___x_58_; lean_object* v___y_60_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_k_55_ = lean_ctor_get(v_p_53_, 0);
lean_inc(v_k_55_);
v_v_56_ = lean_ctor_get(v_p_53_, 1);
lean_inc(v_v_56_);
v_p_57_ = lean_ctor_get(v_p_53_, 2);
lean_inc(v_p_57_);
lean_dec_ref(v_p_53_);
v___x_58_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__9);
v___x_64_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10);
v___x_65_ = lean_int_dec_le(v___x_64_, v_k_55_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_66_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16);
v___x_67_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19);
v___x_68_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22);
v___x_69_ = lean_int_neg(v_k_55_);
lean_dec(v_k_55_);
v___x_70_ = l_Int_toNat(v___x_69_);
lean_dec(v___x_69_);
v___x_71_ = l_Lean_instToExprInt_mkNat(v___x_70_);
v___x_72_ = l_Lean_mkApp3(v___x_66_, v___x_67_, v___x_68_, v___x_71_);
v___y_60_ = v___x_72_;
goto v___jp_59_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = l_Int_toNat(v_k_55_);
lean_dec(v_k_55_);
v___x_74_ = l_Lean_instToExprInt_mkNat(v___x_73_);
v___y_60_ = v___x_74_;
goto v___jp_59_;
}
v___jp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = l_Lean_mkNatLit(v_v_56_);
v___x_62_ = l_Lean_Meta_Grind_Arith_Linear_ofPoly(v_p_57_);
v___x_63_ = l_Lean_mkApp3(v___x_58_, v___y_60_, v___x_61_, v___x_62_);
return v___x_63_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_ofPoly), 1, 0);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_76_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__3);
v___x_77_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_78_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_79_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_80_ = l_Lean_Name_mkStr4(v___x_79_, v___x_78_, v___x_77_, v___x_76_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_box(0);
v___x_82_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__1);
v___x_83_ = l_Lean_mkConst(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__2);
v___x_85_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__0);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3, &l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly___closed__3);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_mk_string_unchecked("Expr", 4, 4);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("zero", 4, 4);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_90_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__1);
v___x_91_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_92_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_93_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_94_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_95_ = l_Lean_Name_mkStr5(v___x_94_, v___x_93_, v___x_92_, v___x_91_, v___x_90_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
v___x_97_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__2);
v___x_98_ = l_Lean_mkConst(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_mk_string_unchecked("var", 3, 3);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__4);
v___x_101_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_102_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_103_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_104_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_105_ = l_Lean_Name_mkStr5(v___x_104_, v___x_103_, v___x_102_, v___x_101_, v___x_100_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = lean_box(0);
v___x_107_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__5);
v___x_108_ = l_Lean_mkConst(v___x_107_, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_109_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__7);
v___x_110_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_111_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_112_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_113_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_114_ = l_Lean_Name_mkStr5(v___x_113_, v___x_112_, v___x_111_, v___x_110_, v___x_109_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_box(0);
v___x_116_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__7);
v___x_117_ = l_Lean_mkConst(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked("sub", 3, 3);
return v___x_118_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__9);
v___x_120_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_121_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_122_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_123_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_124_ = l_Lean_Name_mkStr5(v___x_123_, v___x_122_, v___x_121_, v___x_120_, v___x_119_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_box(0);
v___x_126_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__10);
v___x_127_ = l_Lean_mkConst(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_128_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__12);
v___x_129_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_130_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_131_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_132_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_133_ = l_Lean_Name_mkStr5(v___x_132_, v___x_131_, v___x_130_, v___x_129_, v___x_128_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_box(0);
v___x_135_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__12);
v___x_136_ = l_Lean_mkConst(v___x_135_, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("natMul", 6, 6);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_138_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__14);
v___x_139_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_140_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_141_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_142_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_143_ = l_Lean_Name_mkStr5(v___x_142_, v___x_141_, v___x_140_, v___x_139_, v___x_138_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_box(0);
v___x_145_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__15);
v___x_146_ = l_Lean_mkConst(v___x_145_, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_mk_string_unchecked("intMul", 6, 6);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_148_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__17);
v___x_149_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_150_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_151_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_152_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_153_ = l_Lean_Name_mkStr5(v___x_152_, v___x_151_, v___x_150_, v___x_149_, v___x_148_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_box(0);
v___x_155_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__18);
v___x_156_ = l_Lean_mkConst(v___x_155_, v___x_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(lean_object* v_e_157_){
_start:
{
switch(lean_obj_tag(v_e_157_))
{
case 0:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__3);
return v___x_158_;
}
case 1:
{
lean_object* v_i_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_i_159_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_i_159_);
lean_dec_ref(v_e_157_);
v___x_160_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__6);
v___x_161_ = l_Lean_mkNatLit(v_i_159_);
v___x_162_ = l_Lean_Expr_app___override(v___x_160_, v___x_161_);
return v___x_162_;
}
case 2:
{
lean_object* v_a_163_; lean_object* v_b_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v_a_163_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_a_163_);
v_b_164_ = lean_ctor_get(v_e_157_, 1);
lean_inc(v_b_164_);
lean_dec_ref(v_e_157_);
v___x_165_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__8);
v___x_166_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_a_163_);
v___x_167_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_b_164_);
v___x_168_ = l_Lean_mkAppB(v___x_165_, v___x_166_, v___x_167_);
return v___x_168_;
}
case 3:
{
lean_object* v_a_169_; lean_object* v_b_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v_a_169_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_a_169_);
v_b_170_ = lean_ctor_get(v_e_157_, 1);
lean_inc(v_b_170_);
lean_dec_ref(v_e_157_);
v___x_171_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__11);
v___x_172_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_a_169_);
v___x_173_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_b_170_);
v___x_174_ = l_Lean_mkAppB(v___x_171_, v___x_172_, v___x_173_);
return v___x_174_;
}
case 4:
{
lean_object* v_a_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_a_175_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_a_175_);
lean_dec_ref(v_e_157_);
v___x_176_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__13);
v___x_177_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_a_175_);
v___x_178_ = l_Lean_Expr_app___override(v___x_176_, v___x_177_);
return v___x_178_;
}
case 5:
{
lean_object* v_k_179_; lean_object* v_a_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_k_179_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_k_179_);
v_a_180_ = lean_ctor_get(v_e_157_, 1);
lean_inc(v_a_180_);
lean_dec_ref(v_e_157_);
v___x_181_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__16);
v___x_182_ = l_Lean_mkNatLit(v_k_179_);
v___x_183_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_a_180_);
v___x_184_ = l_Lean_mkAppB(v___x_181_, v___x_182_, v___x_183_);
return v___x_184_;
}
default: 
{
lean_object* v_k_185_; lean_object* v_a_186_; lean_object* v___x_187_; lean_object* v___y_189_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_k_185_ = lean_ctor_get(v_e_157_, 0);
lean_inc(v_k_185_);
v_a_186_ = lean_ctor_get(v_e_157_, 1);
lean_inc(v_a_186_);
lean_dec_ref(v_e_157_);
v___x_187_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__19);
v___x_192_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__10);
v___x_193_ = lean_int_dec_le(v___x_192_, v_k_185_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_194_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__16);
v___x_195_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__19);
v___x_196_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__22);
v___x_197_ = lean_int_neg(v_k_185_);
lean_dec(v_k_185_);
v___x_198_ = l_Int_toNat(v___x_197_);
lean_dec(v___x_197_);
v___x_199_ = l_Lean_instToExprInt_mkNat(v___x_198_);
v___x_200_ = l_Lean_mkApp3(v___x_194_, v___x_195_, v___x_196_, v___x_199_);
v___y_189_ = v___x_200_;
goto v___jp_188_;
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = l_Int_toNat(v_k_185_);
lean_dec(v_k_185_);
v___x_202_ = l_Lean_instToExprInt_mkNat(v___x_201_);
v___y_189_ = v___x_202_;
goto v___jp_188_;
}
v___jp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = l_Lean_Meta_Grind_Arith_Linear_ofLinExpr(v_a_186_);
v___x_191_ = l_Lean_mkAppB(v___x_187_, v___y_189_, v___x_190_);
return v___x_191_;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_ofLinExpr), 1, 0);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_204_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofLinExpr___closed__0);
v___x_205_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__2);
v___x_206_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__1);
v___x_207_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0, &l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_ofPoly___closed__0);
v___x_208_ = l_Lean_Name_mkStr4(v___x_207_, v___x_206_, v___x_205_, v___x_204_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_box(0);
v___x_210_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1, &l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__1);
v___x_211_ = l_Lean_mkConst(v___x_210_, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2, &l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__2);
v___x_213_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0, &l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__0);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3, &l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr___closed__3);
return v___x_215_;
}
}
lean_object* runtime_initialize_Init_Grind_Ordered_Linarith(uint8_t builtin);
lean_object* runtime_initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ordered_Linarith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_Linear_instToExprPoly = _init_l_Lean_Meta_Grind_Arith_Linear_instToExprPoly();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Linear_instToExprPoly);
l_Lean_Meta_Grind_Arith_Linear_instToExprExpr = _init_l_Lean_Meta_Grind_Arith_Linear_instToExprExpr();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Linear_instToExprExpr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ordered_Linarith(uint8_t builtin);
lean_object* initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ordered_Linarith(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_ToExpr(builtin);
}
#ifdef __cplusplus
}
#endif
