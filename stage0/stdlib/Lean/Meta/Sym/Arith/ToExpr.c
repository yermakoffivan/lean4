// Lean compiler output
// Module: Lean.Meta.Sym.Arith.ToExpr
// Imports: public import Init.Grind.Ring.CommSemiringAdapter public import Lean.ToExpr
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
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPower___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPower___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofPower(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPower___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPower___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPower___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPower___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPower___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPower___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPower___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPower___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instToExprPower;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofMon___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofMon___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofMon(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprMon___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprMon___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprMon___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprMon___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprMon___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprMon___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprMon___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprMon___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instToExprMon;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofPoly___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofPoly___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofPoly(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instToExprPoly;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instToExprExpr;
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("CommRing", 8, 8);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Power", 5, 5);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__4, &l_Lean_Meta_Sym_Arith_ofPower___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__4);
v___x_7_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__3, &l_Lean_Meta_Sym_Arith_ofPower___closed__3_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__3);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_10_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_11_ = l_Lean_Name_mkStr5(v___x_10_, v___x_9_, v___x_8_, v___x_7_, v___x_6_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPower___closed__6(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_box(0);
v___x_13_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__5, &l_Lean_Meta_Sym_Arith_ofPower___closed__5_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__5);
v___x_14_ = l_Lean_mkConst(v___x_13_, v___x_12_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofPower(lean_object* v_p_15_){
_start:
{
lean_object* v_x_16_; lean_object* v_k_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_x_16_ = lean_ctor_get(v_p_15_, 0);
lean_inc(v_x_16_);
v_k_17_ = lean_ctor_get(v_p_15_, 1);
lean_inc(v_k_17_);
lean_dec_ref(v_p_15_);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__6, &l_Lean_Meta_Sym_Arith_ofPower___closed__6_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__6);
v___x_19_ = l_Lean_mkNatLit(v_x_16_);
v___x_20_ = l_Lean_mkNatLit(v_k_17_);
v___x_21_ = l_Lean_mkAppB(v___x_18_, v___x_19_, v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_ofPower), 1, 0);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__1(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__3, &l_Lean_Meta_Sym_Arith_ofPower___closed__3_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__3);
v___x_24_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_25_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_26_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_27_ = l_Lean_Name_mkStr4(v___x_26_, v___x_25_, v___x_24_, v___x_23_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__2(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_box(0);
v___x_29_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPower___closed__1, &l_Lean_Meta_Sym_Arith_instToExprPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__1);
v___x_30_ = l_Lean_mkConst(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPower___closed__2, &l_Lean_Meta_Sym_Arith_instToExprPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__2);
v___x_32_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPower___closed__0, &l_Lean_Meta_Sym_Arith_instToExprPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__0);
v___x_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPower(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPower___closed__3, &l_Lean_Meta_Sym_Arith_instToExprPower___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instToExprPower___closed__3);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("Mon", 3, 3);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__1(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("unit", 4, 4);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__2(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_37_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__1, &l_Lean_Meta_Sym_Arith_ofMon___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__1);
v___x_38_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__0, &l_Lean_Meta_Sym_Arith_ofMon___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__0);
v___x_39_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_40_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_41_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_42_ = l_Lean_Name_mkStr5(v___x_41_, v___x_40_, v___x_39_, v___x_38_, v___x_37_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__2, &l_Lean_Meta_Sym_Arith_ofMon___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__2);
v___x_45_ = l_Lean_mkConst(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__4(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("mult", 4, 4);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__5(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_47_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__4, &l_Lean_Meta_Sym_Arith_ofMon___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__4);
v___x_48_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__0, &l_Lean_Meta_Sym_Arith_ofMon___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__0);
v___x_49_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_50_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_51_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_52_ = l_Lean_Name_mkStr5(v___x_51_, v___x_50_, v___x_49_, v___x_48_, v___x_47_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofMon___closed__6(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_box(0);
v___x_54_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__5, &l_Lean_Meta_Sym_Arith_ofMon___closed__5_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__5);
v___x_55_ = l_Lean_mkConst(v___x_54_, v___x_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofMon(lean_object* v_m_56_){
_start:
{
if (lean_obj_tag(v_m_56_) == 0)
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__3, &l_Lean_Meta_Sym_Arith_ofMon___closed__3_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__3);
return v___x_57_;
}
else
{
lean_object* v_p_58_; lean_object* v_m_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_p_58_ = lean_ctor_get(v_m_56_, 0);
lean_inc_ref(v_p_58_);
v_m_59_ = lean_ctor_get(v_m_56_, 1);
lean_inc(v_m_59_);
lean_dec_ref(v_m_56_);
v___x_60_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__6, &l_Lean_Meta_Sym_Arith_ofMon___closed__6_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__6);
v___x_61_ = l_Lean_Meta_Sym_Arith_ofPower(v_p_58_);
v___x_62_ = l_Lean_Meta_Sym_Arith_ofMon(v_m_59_);
v___x_63_ = l_Lean_mkAppB(v___x_60_, v___x_61_, v___x_62_);
return v___x_63_;
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__0(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_ofMon), 1, 0);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__1(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofMon___closed__0, &l_Lean_Meta_Sym_Arith_ofMon___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofMon___closed__0);
v___x_66_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_67_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_68_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_69_ = l_Lean_Name_mkStr4(v___x_68_, v___x_67_, v___x_66_, v___x_65_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__2(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_box(0);
v___x_71_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprMon___closed__1, &l_Lean_Meta_Sym_Arith_instToExprMon___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__1);
v___x_72_ = l_Lean_mkConst(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__3(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprMon___closed__2, &l_Lean_Meta_Sym_Arith_instToExprMon___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__2);
v___x_74_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprMon___closed__0, &l_Lean_Meta_Sym_Arith_instToExprMon___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__0);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprMon(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprMon___closed__3, &l_Lean_Meta_Sym_Arith_instToExprMon___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instToExprMon___closed__3);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__0(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked("Poly", 4, 4);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__1(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__2(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_79_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__1, &l_Lean_Meta_Sym_Arith_ofPoly___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__1);
v___x_80_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__0, &l_Lean_Meta_Sym_Arith_ofPoly___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__0);
v___x_81_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_82_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_83_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_84_ = l_Lean_Name_mkStr5(v___x_83_, v___x_82_, v___x_81_, v___x_80_, v___x_79_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__3(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_box(0);
v___x_86_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__2, &l_Lean_Meta_Sym_Arith_ofPoly___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__2);
v___x_87_ = l_Lean_mkConst(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = lean_nat_to_int(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__5(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__6(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__7(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__6, &l_Lean_Meta_Sym_Arith_ofPoly___closed__6_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__6);
v___x_93_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__5, &l_Lean_Meta_Sym_Arith_ofPoly___closed__5_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__5);
v___x_94_ = l_Lean_Name_mkStr2(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__8(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = l_Lean_Level_ofNat(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__9(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_box(0);
v___x_98_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__8, &l_Lean_Meta_Sym_Arith_ofPoly___closed__8_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__8);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__10(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__9, &l_Lean_Meta_Sym_Arith_ofPoly___closed__9_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__9);
v___x_101_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__7, &l_Lean_Meta_Sym_Arith_ofPoly___closed__7_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__7);
v___x_102_ = l_Lean_Expr_const___override(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__11(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__12(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__11, &l_Lean_Meta_Sym_Arith_ofPoly___closed__11_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__11);
v___x_105_ = l_Lean_Name_mkStr1(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__13(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = lean_box(0);
v___x_107_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__12, &l_Lean_Meta_Sym_Arith_ofPoly___closed__12_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__12);
v___x_108_ = l_Lean_Expr_const___override(v___x_107_, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__14(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__15(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__14, &l_Lean_Meta_Sym_Arith_ofPoly___closed__14_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__14);
v___x_111_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__11, &l_Lean_Meta_Sym_Arith_ofPoly___closed__11_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__11);
v___x_112_ = l_Lean_Name_mkStr2(v___x_111_, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__16(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_box(0);
v___x_114_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__15, &l_Lean_Meta_Sym_Arith_ofPoly___closed__15_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__15);
v___x_115_ = l_Lean_Expr_const___override(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__17(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_mk_string_unchecked("add", 3, 3);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__18(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_117_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__17, &l_Lean_Meta_Sym_Arith_ofPoly___closed__17_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__17);
v___x_118_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__0, &l_Lean_Meta_Sym_Arith_ofPoly___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__0);
v___x_119_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_120_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_121_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_122_ = l_Lean_Name_mkStr5(v___x_121_, v___x_120_, v___x_119_, v___x_118_, v___x_117_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__19(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__18, &l_Lean_Meta_Sym_Arith_ofPoly___closed__18_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__18);
v___x_125_ = l_Lean_mkConst(v___x_124_, v___x_123_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofPoly(lean_object* v_p_126_){
_start:
{
if (lean_obj_tag(v_p_126_) == 0)
{
lean_object* v_k_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v_k_127_ = lean_ctor_get(v_p_126_, 0);
lean_inc(v_k_127_);
lean_dec_ref(v_p_126_);
v___x_128_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__3, &l_Lean_Meta_Sym_Arith_ofPoly___closed__3_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__3);
v___x_129_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__4, &l_Lean_Meta_Sym_Arith_ofPoly___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__4);
v___x_130_ = lean_int_dec_le(v___x_129_, v_k_127_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_131_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__10, &l_Lean_Meta_Sym_Arith_ofPoly___closed__10_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__10);
v___x_132_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__13, &l_Lean_Meta_Sym_Arith_ofPoly___closed__13_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__13);
v___x_133_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__16, &l_Lean_Meta_Sym_Arith_ofPoly___closed__16_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__16);
v___x_134_ = lean_int_neg(v_k_127_);
lean_dec(v_k_127_);
v___x_135_ = l_Int_toNat(v___x_134_);
lean_dec(v___x_134_);
v___x_136_ = l_Lean_instToExprInt_mkNat(v___x_135_);
v___x_137_ = l_Lean_mkApp3(v___x_131_, v___x_132_, v___x_133_, v___x_136_);
v___x_138_ = l_Lean_Expr_app___override(v___x_128_, v___x_137_);
return v___x_138_;
}
else
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = l_Int_toNat(v_k_127_);
lean_dec(v_k_127_);
v___x_140_ = l_Lean_instToExprInt_mkNat(v___x_139_);
v___x_141_ = l_Lean_Expr_app___override(v___x_128_, v___x_140_);
return v___x_141_;
}
}
else
{
lean_object* v_k_142_; lean_object* v_v_143_; lean_object* v_p_144_; lean_object* v___x_145_; lean_object* v___y_147_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_k_142_ = lean_ctor_get(v_p_126_, 0);
lean_inc(v_k_142_);
v_v_143_ = lean_ctor_get(v_p_126_, 1);
lean_inc(v_v_143_);
v_p_144_ = lean_ctor_get(v_p_126_, 2);
lean_inc_ref(v_p_144_);
lean_dec_ref(v_p_126_);
v___x_145_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__19, &l_Lean_Meta_Sym_Arith_ofPoly___closed__19_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__19);
v___x_151_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__4, &l_Lean_Meta_Sym_Arith_ofPoly___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__4);
v___x_152_ = lean_int_dec_le(v___x_151_, v_k_142_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_153_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__10, &l_Lean_Meta_Sym_Arith_ofPoly___closed__10_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__10);
v___x_154_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__13, &l_Lean_Meta_Sym_Arith_ofPoly___closed__13_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__13);
v___x_155_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__16, &l_Lean_Meta_Sym_Arith_ofPoly___closed__16_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__16);
v___x_156_ = lean_int_neg(v_k_142_);
lean_dec(v_k_142_);
v___x_157_ = l_Int_toNat(v___x_156_);
lean_dec(v___x_156_);
v___x_158_ = l_Lean_instToExprInt_mkNat(v___x_157_);
v___x_159_ = l_Lean_mkApp3(v___x_153_, v___x_154_, v___x_155_, v___x_158_);
v___y_147_ = v___x_159_;
goto v___jp_146_;
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = l_Int_toNat(v_k_142_);
lean_dec(v_k_142_);
v___x_161_ = l_Lean_instToExprInt_mkNat(v___x_160_);
v___y_147_ = v___x_161_;
goto v___jp_146_;
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = l_Lean_Meta_Sym_Arith_ofMon(v_v_143_);
v___x_149_ = l_Lean_Meta_Sym_Arith_ofPoly(v_p_144_);
v___x_150_ = l_Lean_mkApp3(v___x_145_, v___y_147_, v___x_148_, v___x_149_);
return v___x_150_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_ofPoly), 1, 0);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_163_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__0, &l_Lean_Meta_Sym_Arith_ofPoly___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__0);
v___x_164_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_165_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_166_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_167_ = l_Lean_Name_mkStr4(v___x_166_, v___x_165_, v___x_164_, v___x_163_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_box(0);
v___x_169_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1, &l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__1);
v___x_170_ = l_Lean_mkConst(v___x_169_, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2, &l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__2);
v___x_172_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0, &l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__0);
v___x_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v___x_171_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprPoly(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3, &l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instToExprPoly___closed__3);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_mk_string_unchecked("Expr", 4, 4);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_176_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__1, &l_Lean_Meta_Sym_Arith_ofPoly___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__1);
v___x_177_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_178_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_179_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_180_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_181_ = l_Lean_Name_mkStr5(v___x_180_, v___x_179_, v___x_178_, v___x_177_, v___x_176_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_box(0);
v___x_183_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__1);
v___x_184_ = l_Lean_mkConst(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_mk_string_unchecked("natCast", 7, 7);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_186_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__3);
v___x_187_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_188_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_189_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_190_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_191_ = l_Lean_Name_mkStr5(v___x_190_, v___x_189_, v___x_188_, v___x_187_, v___x_186_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_box(0);
v___x_193_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__4);
v___x_194_ = l_Lean_mkConst(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_mk_string_unchecked("intCast", 7, 7);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_196_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__6);
v___x_197_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_198_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_199_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_200_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_201_ = l_Lean_Name_mkStr5(v___x_200_, v___x_199_, v___x_198_, v___x_197_, v___x_196_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = lean_box(0);
v___x_203_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__7);
v___x_204_ = l_Lean_mkConst(v___x_203_, v___x_202_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_mk_string_unchecked("var", 3, 3);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_206_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__9);
v___x_207_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_208_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_209_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_210_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_211_ = l_Lean_Name_mkStr5(v___x_210_, v___x_209_, v___x_208_, v___x_207_, v___x_206_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_box(0);
v___x_213_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__10);
v___x_214_ = l_Lean_mkConst(v___x_213_, v___x_212_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_215_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__6, &l_Lean_Meta_Sym_Arith_ofPoly___closed__6_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__6);
v___x_216_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_217_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_218_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_219_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_220_ = l_Lean_Name_mkStr5(v___x_219_, v___x_218_, v___x_217_, v___x_216_, v___x_215_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_box(0);
v___x_222_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__12);
v___x_223_ = l_Lean_mkConst(v___x_222_, v___x_221_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_224_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__17, &l_Lean_Meta_Sym_Arith_ofPoly___closed__17_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__17);
v___x_225_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_226_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_227_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_228_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_229_ = l_Lean_Name_mkStr5(v___x_228_, v___x_227_, v___x_226_, v___x_225_, v___x_224_);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_box(0);
v___x_231_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__14);
v___x_232_ = l_Lean_mkConst(v___x_231_, v___x_230_);
return v___x_232_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16(void){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_mk_string_unchecked("sub", 3, 3);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_234_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__16);
v___x_235_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_236_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_237_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_238_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_239_ = l_Lean_Name_mkStr5(v___x_238_, v___x_237_, v___x_236_, v___x_235_, v___x_234_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_box(0);
v___x_241_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__17);
v___x_242_ = l_Lean_mkConst(v___x_241_, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_mk_string_unchecked("mul", 3, 3);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_244_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__19);
v___x_245_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_246_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_247_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_248_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_249_ = l_Lean_Name_mkStr5(v___x_248_, v___x_247_, v___x_246_, v___x_245_, v___x_244_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = lean_box(0);
v___x_251_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__20);
v___x_252_ = l_Lean_mkConst(v___x_251_, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22(void){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_mk_string_unchecked("pow", 3, 3);
return v___x_253_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_254_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__22);
v___x_255_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_256_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_257_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_258_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_259_ = l_Lean_Name_mkStr5(v___x_258_, v___x_257_, v___x_256_, v___x_255_, v___x_254_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_box(0);
v___x_261_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__23);
v___x_262_ = l_Lean_mkConst(v___x_261_, v___x_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ofRingExpr(lean_object* v_e_263_){
_start:
{
switch(lean_obj_tag(v_e_263_))
{
case 0:
{
lean_object* v_k_264_; lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_k_264_ = lean_ctor_get(v_e_263_, 0);
lean_inc(v_k_264_);
lean_dec_ref(v_e_263_);
v___x_265_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__2);
v___x_266_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__4, &l_Lean_Meta_Sym_Arith_ofPoly___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__4);
v___x_267_ = lean_int_dec_le(v___x_266_, v_k_264_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_268_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__10, &l_Lean_Meta_Sym_Arith_ofPoly___closed__10_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__10);
v___x_269_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__13, &l_Lean_Meta_Sym_Arith_ofPoly___closed__13_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__13);
v___x_270_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__16, &l_Lean_Meta_Sym_Arith_ofPoly___closed__16_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__16);
v___x_271_ = lean_int_neg(v_k_264_);
lean_dec(v_k_264_);
v___x_272_ = l_Int_toNat(v___x_271_);
lean_dec(v___x_271_);
v___x_273_ = l_Lean_instToExprInt_mkNat(v___x_272_);
v___x_274_ = l_Lean_mkApp3(v___x_268_, v___x_269_, v___x_270_, v___x_273_);
v___x_275_ = l_Lean_Expr_app___override(v___x_265_, v___x_274_);
return v___x_275_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = l_Int_toNat(v_k_264_);
lean_dec(v_k_264_);
v___x_277_ = l_Lean_instToExprInt_mkNat(v___x_276_);
v___x_278_ = l_Lean_Expr_app___override(v___x_265_, v___x_277_);
return v___x_278_;
}
}
case 1:
{
lean_object* v_k_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_k_279_ = lean_ctor_get(v_e_263_, 0);
lean_inc(v_k_279_);
lean_dec_ref(v_e_263_);
v___x_280_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__5);
v___x_281_ = l_Lean_mkNatLit(v_k_279_);
v___x_282_ = l_Lean_Expr_app___override(v___x_280_, v___x_281_);
return v___x_282_;
}
case 2:
{
lean_object* v_k_283_; lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_k_283_ = lean_ctor_get(v_e_263_, 0);
lean_inc(v_k_283_);
lean_dec_ref(v_e_263_);
v___x_284_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__8);
v___x_285_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__4, &l_Lean_Meta_Sym_Arith_ofPoly___closed__4_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__4);
v___x_286_ = lean_int_dec_le(v___x_285_, v_k_283_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_287_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__10, &l_Lean_Meta_Sym_Arith_ofPoly___closed__10_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__10);
v___x_288_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__13, &l_Lean_Meta_Sym_Arith_ofPoly___closed__13_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__13);
v___x_289_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPoly___closed__16, &l_Lean_Meta_Sym_Arith_ofPoly___closed__16_once, _init_l_Lean_Meta_Sym_Arith_ofPoly___closed__16);
v___x_290_ = lean_int_neg(v_k_283_);
lean_dec(v_k_283_);
v___x_291_ = l_Int_toNat(v___x_290_);
lean_dec(v___x_290_);
v___x_292_ = l_Lean_instToExprInt_mkNat(v___x_291_);
v___x_293_ = l_Lean_mkApp3(v___x_287_, v___x_288_, v___x_289_, v___x_292_);
v___x_294_ = l_Lean_Expr_app___override(v___x_284_, v___x_293_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = l_Int_toNat(v_k_283_);
lean_dec(v_k_283_);
v___x_296_ = l_Lean_instToExprInt_mkNat(v___x_295_);
v___x_297_ = l_Lean_Expr_app___override(v___x_284_, v___x_296_);
return v___x_297_;
}
}
case 3:
{
lean_object* v_i_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_i_298_ = lean_ctor_get(v_e_263_, 0);
lean_inc(v_i_298_);
lean_dec_ref(v_e_263_);
v___x_299_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__11);
v___x_300_ = l_Lean_mkNatLit(v_i_298_);
v___x_301_ = l_Lean_Expr_app___override(v___x_299_, v___x_300_);
return v___x_301_;
}
case 4:
{
lean_object* v_a_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_a_302_ = lean_ctor_get(v_e_263_, 0);
lean_inc_ref(v_a_302_);
lean_dec_ref(v_e_263_);
v___x_303_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__13);
v___x_304_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_a_302_);
v___x_305_ = l_Lean_Expr_app___override(v___x_303_, v___x_304_);
return v___x_305_;
}
case 5:
{
lean_object* v_a_306_; lean_object* v_b_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_a_306_ = lean_ctor_get(v_e_263_, 0);
lean_inc_ref(v_a_306_);
v_b_307_ = lean_ctor_get(v_e_263_, 1);
lean_inc_ref(v_b_307_);
lean_dec_ref(v_e_263_);
v___x_308_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__15);
v___x_309_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_a_306_);
v___x_310_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_b_307_);
v___x_311_ = l_Lean_mkAppB(v___x_308_, v___x_309_, v___x_310_);
return v___x_311_;
}
case 6:
{
lean_object* v_a_312_; lean_object* v_b_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_a_312_ = lean_ctor_get(v_e_263_, 0);
lean_inc_ref(v_a_312_);
v_b_313_ = lean_ctor_get(v_e_263_, 1);
lean_inc_ref(v_b_313_);
lean_dec_ref(v_e_263_);
v___x_314_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__18);
v___x_315_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_a_312_);
v___x_316_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_b_313_);
v___x_317_ = l_Lean_mkAppB(v___x_314_, v___x_315_, v___x_316_);
return v___x_317_;
}
case 7:
{
lean_object* v_a_318_; lean_object* v_b_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_a_318_ = lean_ctor_get(v_e_263_, 0);
lean_inc_ref(v_a_318_);
v_b_319_ = lean_ctor_get(v_e_263_, 1);
lean_inc_ref(v_b_319_);
lean_dec_ref(v_e_263_);
v___x_320_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__21);
v___x_321_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_a_318_);
v___x_322_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_b_319_);
v___x_323_ = l_Lean_mkAppB(v___x_320_, v___x_321_, v___x_322_);
return v___x_323_;
}
default: 
{
lean_object* v_a_324_; lean_object* v_k_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_a_324_ = lean_ctor_get(v_e_263_, 0);
lean_inc_ref(v_a_324_);
v_k_325_ = lean_ctor_get(v_e_263_, 1);
lean_inc(v_k_325_);
lean_dec_ref(v_e_263_);
v___x_326_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__24);
v___x_327_ = l_Lean_Meta_Sym_Arith_ofRingExpr(v_a_324_);
v___x_328_ = l_Lean_mkNatLit(v_k_325_);
v___x_329_ = l_Lean_mkAppB(v___x_326_, v___x_327_, v___x_328_);
return v___x_329_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_ofRingExpr), 1, 0);
return v___x_330_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_331_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0, &l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofRingExpr___closed__0);
v___x_332_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__2, &l_Lean_Meta_Sym_Arith_ofPower___closed__2_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__2);
v___x_333_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__1, &l_Lean_Meta_Sym_Arith_ofPower___closed__1_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__1);
v___x_334_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_ofPower___closed__0, &l_Lean_Meta_Sym_Arith_ofPower___closed__0_once, _init_l_Lean_Meta_Sym_Arith_ofPower___closed__0);
v___x_335_ = l_Lean_Name_mkStr4(v___x_334_, v___x_333_, v___x_332_, v___x_331_);
return v___x_335_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = lean_box(0);
v___x_337_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1, &l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__1);
v___x_338_ = l_Lean_mkConst(v___x_337_, v___x_336_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2, &l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__2);
v___x_340_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0, &l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__0);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instToExprExpr(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3, &l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instToExprExpr___closed__3);
return v___x_342_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* runtime_initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Arith_instToExprPower = _init_l_Lean_Meta_Sym_Arith_instToExprPower();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instToExprPower);
l_Lean_Meta_Sym_Arith_instToExprMon = _init_l_Lean_Meta_Sym_Arith_instToExprMon();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instToExprMon);
l_Lean_Meta_Sym_Arith_instToExprPoly = _init_l_Lean_Meta_Sym_Arith_instToExprPoly();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instToExprPoly);
l_Lean_Meta_Sym_Arith_instToExprExpr = _init_l_Lean_Meta_Sym_Arith_instToExprExpr();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instToExprExpr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_ToExpr(builtin);
}
#ifdef __cplusplus
}
#endif
