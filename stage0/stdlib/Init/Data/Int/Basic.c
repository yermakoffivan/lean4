// Lean compiler output
// Module: Init.Data.Int.Basic
// Imports: public import Init.Data.Cast public import Init.Data.Nat.Basic
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat___boxed(lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instNatCastInt;
LEAN_EXPORT lean_object* l_instOfNat(lean_object*);
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__0;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__1;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__2;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__3;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__4;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__5;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__6;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__7;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__8;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__9;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__10;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__11;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__12;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__13;
static lean_once_cell_t l_Int_term_x2d_x5b___x2b1_x5d___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__14;
LEAN_EXPORT lean_object* l_Int_term_x2d_x5b___x2b1_x5d;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14;
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1;
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Int_instInhabited;
LEAN_EXPORT lean_object* l_Int_negOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Int_negOfNat___boxed(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_Int_neg___boxed(lean_object*);
static lean_once_cell_t l_Int_instNegInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instNegInt___closed__0;
LEAN_EXPORT lean_object* l_Int_instNegInt;
LEAN_EXPORT lean_object* l_Int_subNatNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_subNatNat___boxed(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_add___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instAdd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instAdd___closed__0;
LEAN_EXPORT lean_object* l_Int_instAdd;
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instMul___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instMul___closed__0;
LEAN_EXPORT lean_object* l_Int_instMul;
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instSub___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instSub___closed__0;
LEAN_EXPORT lean_object* l_Int_instSub;
LEAN_EXPORT lean_object* l_Int_instLEInt;
LEAN_EXPORT lean_object* l_Int_instLTInt;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_nonneg(lean_object*);
LEAN_EXPORT lean_object* l_Int_decNonneg___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decLe___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decLt___boxed(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Int_natAbs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_sign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_sign___closed__0;
static lean_once_cell_t l_Int_sign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_sign___closed__1;
LEAN_EXPORT lean_object* l_Int_sign(lean_object*);
LEAN_EXPORT lean_object* l_Int_sign___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_instDvd;
LEAN_EXPORT lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_pow___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instNatPow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instNatPow___closed__0;
LEAN_EXPORT lean_object* l_Int_instNatPow;
LEAN_EXPORT lean_object* l_Int_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instMin___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instMin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instMin___closed__0;
LEAN_EXPORT lean_object* l_Int_instMin;
LEAN_EXPORT lean_object* l_Int_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instMax___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instMax___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instMax___closed__0;
LEAN_EXPORT lean_object* l_Int_instMax;
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instIntCastInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instIntCastInt___closed__0;
LEAN_EXPORT lean_object* l_instIntCastInt;
LEAN_EXPORT lean_object* l_Int_cast___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_nat_to_int(v_a_00___x40___internal___hyg_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc___boxed(lean_object* v_a_00___x40___internal___hyg_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lean_int_neg_succ_of_nat(v_a_00___x40___internal___hyg_5_);
return v_res_6_;
}
}
static lean_object* _init_l_instNatCastInt(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Int_ofNat___boxed), 1, 0);
return v___f_7_;
}
}
LEAN_EXPORT lean_object* l_instOfNat(lean_object* v_n_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_nat_to_int(v_n_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_10_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__1(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("term-[_+1]", 10, 10);
return v___x_11_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__2(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__1, &l_Int_term_x2d_x5b___x2b1_x5d___closed__1_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__1);
v___x_13_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__0, &l_Int_term_x2d_x5b___x2b1_x5d___closed__0_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__0);
v___x_14_ = l_Lean_Name_mkStr2(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__3(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_15_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__4(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__3, &l_Int_term_x2d_x5b___x2b1_x5d___closed__3_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__3);
v___x_17_ = l_Lean_Name_mkStr1(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__5(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("-[", 2, 2);
return v___x_18_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__6(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__5, &l_Int_term_x2d_x5b___x2b1_x5d___closed__5_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__5);
v___x_20_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__7(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__8(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__7, &l_Int_term_x2d_x5b___x2b1_x5d___closed__7_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__7);
v___x_23_ = l_Lean_Name_mkStr1(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__9(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__8, &l_Int_term_x2d_x5b___x2b1_x5d___closed__8_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__8);
v___x_26_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__10(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__9, &l_Int_term_x2d_x5b___x2b1_x5d___closed__9_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__9);
v___x_28_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__6, &l_Int_term_x2d_x5b___x2b1_x5d___closed__6_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__6);
v___x_29_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__4, &l_Int_term_x2d_x5b___x2b1_x5d___closed__4_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__4);
v___x_30_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_27_);
return v___x_30_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__11(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("+1]", 3, 3);
return v___x_31_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__12(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__11, &l_Int_term_x2d_x5b___x2b1_x5d___closed__11_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__11);
v___x_33_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__13(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__12, &l_Int_term_x2d_x5b___x2b1_x5d___closed__12_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__12);
v___x_35_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__10, &l_Int_term_x2d_x5b___x2b1_x5d___closed__10_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__10);
v___x_36_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__4, &l_Int_term_x2d_x5b___x2b1_x5d___closed__4_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__4);
v___x_37_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
lean_ctor_set(v___x_37_, 2, v___x_34_);
return v___x_37_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__14(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__13, &l_Int_term_x2d_x5b___x2b1_x5d___closed__13_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__13);
v___x_39_ = lean_unsigned_to_nat(1024u);
v___x_40_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__2, &l_Int_term_x2d_x5b___x2b1_x5d___closed__2_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__2);
v___x_41_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set(v___x_41_, 2, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_l_Int_term_x2d_x5b___x2b1_x5d(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__14, &l_Int_term_x2d_x5b___x2b1_x5d___closed__14_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__14);
return v___x_42_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_43_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_44_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_45_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_46_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_47_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3);
v___x_48_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2);
v___x_49_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1);
v___x_50_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0);
v___x_51_ = l_Lean_Name_mkStr4(v___x_50_, v___x_49_, v___x_48_, v___x_47_);
return v___x_51_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("negSucc", 7, 7);
return v___x_52_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5);
v___x_54_ = l_String_toRawSubstring_x27(v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5);
v___x_56_ = l_Lean_Name_mkStr1(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5);
v___x_58_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__0, &l_Int_term_x2d_x5b___x2b1_x5d___closed__0_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__0);
v___x_59_ = l_Lean_Name_mkStr2(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8);
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = lean_box(0);
v___x_66_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10);
v___x_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11);
v___x_69_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9);
v___x_70_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_71_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13);
v___x_73_ = l_Lean_Name_mkStr1(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__2, &l_Int_term_x2d_x5b___x2b1_x5d___closed__2_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__2);
lean_inc(v_x_74_);
v___x_78_ = l_Lean_Syntax_isOfKind(v_x_74_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec(v_x_74_);
v___x_79_ = lean_box(1);
v___x_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v_a_76_);
return v___x_80_;
}
else
{
lean_object* v_quotContext_81_; lean_object* v_currMacroScope_82_; lean_object* v_ref_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_quotContext_81_ = lean_ctor_get(v_a_75_, 1);
v_currMacroScope_82_ = lean_ctor_get(v_a_75_, 2);
v_ref_83_ = lean_ctor_get(v_a_75_, 5);
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = l_Lean_Syntax_getArg(v_x_74_, v___x_84_);
lean_dec(v_x_74_);
v___x_86_ = 0;
v___x_87_ = l_Lean_SourceInfo_fromRef(v_ref_83_, v___x_86_);
v___x_88_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4);
v___x_89_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6);
v___x_90_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7);
lean_inc(v_currMacroScope_82_);
lean_inc(v_quotContext_81_);
v___x_91_ = l_Lean_addMacroScope(v_quotContext_81_, v___x_90_, v_currMacroScope_82_);
v___x_92_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12);
lean_inc_n(v___x_87_, 2);
v___x_93_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_93_, 0, v___x_87_);
lean_ctor_set(v___x_93_, 1, v___x_89_);
lean_ctor_set(v___x_93_, 2, v___x_91_);
lean_ctor_set(v___x_93_, 3, v___x_92_);
v___x_94_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14);
v___x_95_ = l_Lean_Syntax_node1(v___x_87_, v___x_94_, v___x_85_);
v___x_96_ = l_Lean_Syntax_node2(v___x_87_, v___x_88_, v___x_93_, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_76_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___boxed(lean_object* v_x_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(v_x_98_, v_a_99_, v_a_100_);
lean_dec_ref(v_a_99_);
return v_res_101_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_102_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0, &l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0_once, _init_l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0);
v___x_104_ = l_Lean_Name_mkStr1(v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(lean_object* v_x_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4);
lean_inc(v_x_105_);
v___x_109_ = l_Lean_Syntax_isOfKind(v_x_105_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v_x_105_);
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_107_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = l_Lean_Syntax_getArg(v_x_105_, v___x_112_);
v___x_114_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1, &l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1_once, _init_l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1);
lean_inc(v___x_113_);
v___x_115_ = l_Lean_Syntax_isOfKind(v___x_113_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec(v___x_113_);
lean_dec(v_x_105_);
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_a_107_);
return v___x_117_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = l_Lean_Syntax_getArg(v_x_105_, v___x_118_);
lean_dec(v_x_105_);
lean_inc(v___x_119_);
v___x_120_ = l_Lean_Syntax_matchesNull(v___x_119_, v___x_118_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec(v___x_119_);
lean_dec(v___x_113_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_a_107_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v_ref_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_123_ = l_Lean_Syntax_getArg(v___x_119_, v___x_112_);
lean_dec(v___x_119_);
v_ref_124_ = l_Lean_replaceRef(v___x_113_, v_a_106_);
lean_dec(v___x_113_);
v___x_125_ = 0;
v___x_126_ = l_Lean_SourceInfo_fromRef(v_ref_124_, v___x_125_);
lean_dec(v_ref_124_);
v___x_127_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__2, &l_Int_term_x2d_x5b___x2b1_x5d___closed__2_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__2);
v___x_128_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__5, &l_Int_term_x2d_x5b___x2b1_x5d___closed__5_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__5);
lean_inc_n(v___x_126_, 2);
v___x_129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_126_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_obj_once(&l_Int_term_x2d_x5b___x2b1_x5d___closed__11, &l_Int_term_x2d_x5b___x2b1_x5d___closed__11_once, _init_l_Int_term_x2d_x5b___x2b1_x5d___closed__11);
v___x_131_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_126_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = l_Lean_Syntax_node3(v___x_126_, v___x_127_, v___x_129_, v___x_123_, v___x_131_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_a_107_);
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___boxed(lean_object* v_x_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(v_x_134_, v_a_135_, v_a_136_);
lean_dec(v_a_135_);
return v_res_137_;
}
}
static lean_object* _init_l_Int_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_nat_to_int(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Int_instInhabited(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Int_negOfNat(lean_object* v_x_141_){
_start:
{
lean_object* v_zero_142_; uint8_t v_isZero_143_; 
v_zero_142_ = lean_unsigned_to_nat(0u);
v_isZero_143_ = lean_nat_dec_eq(v_x_141_, v_zero_142_);
if (v_isZero_143_ == 1)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
return v___x_144_;
}
else
{
lean_object* v_one_145_; lean_object* v_n_146_; lean_object* v___x_147_; 
v_one_145_ = lean_unsigned_to_nat(1u);
v_n_146_ = lean_nat_sub(v_x_141_, v_one_145_);
v___x_147_ = lean_int_neg_succ_of_nat(v_n_146_);
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* l_Int_negOfNat___boxed(lean_object* v_x_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Int_negOfNat(v_x_148_);
lean_dec(v_x_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Int_neg___boxed(lean_object* v_n_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lean_int_neg(v_n_151_);
lean_dec(v_n_151_);
return v_res_152_;
}
}
static lean_object* _init_l_Int_instNegInt___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_closure((void*)(l_Int_neg___boxed), 1, 0);
return v___x_153_;
}
}
static lean_object* _init_l_Int_instNegInt(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_Int_instNegInt___closed__0, &l_Int_instNegInt___closed__0_once, _init_l_Int_instNegInt___closed__0);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Int_subNatNat(lean_object* v_m_155_, lean_object* v_n_156_){
_start:
{
lean_object* v___x_157_; lean_object* v_zero_158_; uint8_t v_isZero_159_; 
v___x_157_ = lean_nat_sub(v_n_156_, v_m_155_);
v_zero_158_ = lean_unsigned_to_nat(0u);
v_isZero_159_ = lean_nat_dec_eq(v___x_157_, v_zero_158_);
if (v_isZero_159_ == 1)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v___x_157_);
v___x_160_ = lean_nat_sub(v_m_155_, v_n_156_);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
else
{
lean_object* v_one_162_; lean_object* v_n_163_; lean_object* v___x_164_; 
v_one_162_ = lean_unsigned_to_nat(1u);
v_n_163_ = lean_nat_sub(v___x_157_, v_one_162_);
lean_dec(v___x_157_);
v___x_164_ = lean_int_neg_succ_of_nat(v_n_163_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Int_subNatNat___boxed(lean_object* v_m_165_, lean_object* v_n_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Int_subNatNat(v_m_165_, v_n_166_);
lean_dec(v_n_166_);
lean_dec(v_m_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Int_add___boxed(lean_object* v_m_170_, lean_object* v_n_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = lean_int_add(v_m_170_, v_n_171_);
lean_dec(v_n_171_);
lean_dec(v_m_170_);
return v_res_172_;
}
}
static lean_object* _init_l_Int_instAdd___closed__0(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_closure((void*)(l_Int_add___boxed), 2, 0);
return v___x_173_;
}
}
static lean_object* _init_l_Int_instAdd(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Int_instAdd___closed__0, &l_Int_instAdd___closed__0_once, _init_l_Int_instAdd___closed__0);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Int_mul___boxed(lean_object* v_m_177_, lean_object* v_n_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = lean_int_mul(v_m_177_, v_n_178_);
lean_dec(v_n_178_);
lean_dec(v_m_177_);
return v_res_179_;
}
}
static lean_object* _init_l_Int_instMul___closed__0(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_alloc_closure((void*)(l_Int_mul___boxed), 2, 0);
return v___x_180_;
}
}
static lean_object* _init_l_Int_instMul(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Int_instMul___closed__0, &l_Int_instMul___closed__0_once, _init_l_Int_instMul___closed__0);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Int_sub___boxed(lean_object* v_m_184_, lean_object* v_n_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lean_int_sub(v_m_184_, v_n_185_);
lean_dec(v_n_185_);
lean_dec(v_m_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Int_instSub___closed__0(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_closure((void*)(l_Int_sub___boxed), 2, 0);
return v___x_187_;
}
}
static lean_object* _init_l_Int_instSub(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&l_Int_instSub___closed__0, &l_Int_instSub___closed__0_once, _init_l_Int_instSub___closed__0);
return v___x_188_;
}
}
static lean_object* _init_l_Int_instLEInt(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
return v___x_189_;
}
}
static lean_object* _init_l_Int_instLTInt(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(0);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Int_decEq___boxed(lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = lean_int_dec_eq(v_a_193_, v_b_194_);
lean_dec(v_b_194_);
lean_dec(v_a_193_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT uint8_t l_Int_instDecidableEq(lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = lean_int_dec_eq(v_a_197_, v_b_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Int_instDecidableEq___boxed(lean_object* v_a_200_, lean_object* v_b_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = l_Int_instDecidableEq(v_a_200_, v_b_201_);
lean_dec(v_b_201_);
lean_dec(v_a_200_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT lean_object* l_Int_decNonneg___boxed(lean_object* v_m_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = lean_int_dec_nonneg(v_m_205_);
lean_dec(v_m_205_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT lean_object* l_Int_decLe___boxed(lean_object* v_a_210_, lean_object* v_b_211_){
_start:
{
uint8_t v_res_212_; lean_object* v_r_213_; 
v_res_212_ = lean_int_dec_le(v_a_210_, v_b_211_);
lean_dec(v_b_211_);
lean_dec(v_a_210_);
v_r_213_ = lean_box(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* l_Int_decLt___boxed(lean_object* v_a_216_, lean_object* v_b_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = lean_int_dec_lt(v_a_216_, v_b_217_);
lean_dec(v_b_217_);
lean_dec(v_a_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Int_natAbs___boxed(lean_object* v_m_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = lean_nat_abs(v_m_221_);
lean_dec(v_m_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorIdx(lean_object* v_x_223_){
_start:
{
lean_object* v_natZero_224_; lean_object* v_intZero_225_; uint8_t v_isNeg_226_; 
v_natZero_224_ = lean_unsigned_to_nat(0u);
v_intZero_225_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_226_ = lean_int_dec_lt(v_x_223_, v_intZero_225_);
if (v_isNeg_226_ == 0)
{
return v_natZero_224_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(1u);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_Int_ctorIdx___boxed(lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Int_ctorIdx(v_x_228_);
lean_dec(v_x_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg(lean_object* v_t_230_, lean_object* v_k_231_){
_start:
{
lean_object* v_intZero_232_; uint8_t v_isNeg_233_; 
v_intZero_232_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_233_ = lean_int_dec_lt(v_t_230_, v_intZero_232_);
if (v_isNeg_233_ == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_nat_abs(v_t_230_);
v___x_235_ = lean_apply_1(v_k_231_, v_a_234_);
return v___x_235_;
}
else
{
lean_object* v_abs_236_; lean_object* v_one_237_; lean_object* v_a_238_; lean_object* v___x_239_; 
v_abs_236_ = lean_nat_abs(v_t_230_);
v_one_237_ = lean_unsigned_to_nat(1u);
v_a_238_ = lean_nat_sub(v_abs_236_, v_one_237_);
lean_dec(v_abs_236_);
v___x_239_ = lean_apply_1(v_k_231_, v_a_238_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg___boxed(lean_object* v_t_240_, lean_object* v_k_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Int_ctorElim___redArg(v_t_240_, v_k_241_);
lean_dec(v_t_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim(lean_object* v_motive_243_, lean_object* v_ctorIdx_244_, lean_object* v_t_245_, lean_object* v_h_246_, lean_object* v_k_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Int_ctorElim___redArg(v_t_245_, v_k_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___boxed(lean_object* v_motive_249_, lean_object* v_ctorIdx_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_k_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Int_ctorElim(v_motive_249_, v_ctorIdx_250_, v_t_251_, v_h_252_, v_k_253_);
lean_dec(v_t_251_);
lean_dec(v_ctorIdx_250_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg(lean_object* v_t_255_, lean_object* v_ofNat_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Int_ctorElim___redArg(v_t_255_, v_ofNat_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg___boxed(lean_object* v_t_258_, lean_object* v_ofNat_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Int_ofNat_elim___redArg(v_t_258_, v_ofNat_259_);
lean_dec(v_t_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim(lean_object* v_motive_261_, lean_object* v_t_262_, lean_object* v_h_263_, lean_object* v_ofNat_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l_Int_ctorElim___redArg(v_t_262_, v_ofNat_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___boxed(lean_object* v_motive_266_, lean_object* v_t_267_, lean_object* v_h_268_, lean_object* v_ofNat_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Int_ofNat_elim(v_motive_266_, v_t_267_, v_h_268_, v_ofNat_269_);
lean_dec(v_t_267_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg(lean_object* v_t_271_, lean_object* v_negSucc_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l_Int_ctorElim___redArg(v_t_271_, v_negSucc_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg___boxed(lean_object* v_t_274_, lean_object* v_negSucc_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Int_negSucc_elim___redArg(v_t_274_, v_negSucc_275_);
lean_dec(v_t_274_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim(lean_object* v_motive_277_, lean_object* v_t_278_, lean_object* v_h_279_, lean_object* v_negSucc_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Int_ctorElim___redArg(v_t_278_, v_negSucc_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___boxed(lean_object* v_motive_282_, lean_object* v_t_283_, lean_object* v_h_284_, lean_object* v_negSucc_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Int_negSucc_elim(v_motive_282_, v_t_283_, v_h_284_, v_negSucc_285_);
lean_dec(v_t_283_);
return v_res_286_;
}
}
static lean_object* _init_l_Int_sign___closed__0(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_nat_to_int(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l_Int_sign___closed__1(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_obj_once(&l_Int_sign___closed__0, &l_Int_sign___closed__0_once, _init_l_Int_sign___closed__0);
v___x_290_ = lean_int_neg(v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Int_sign(lean_object* v_x_291_){
_start:
{
lean_object* v_natZero_292_; lean_object* v_intZero_293_; uint8_t v_isNeg_294_; 
v_natZero_292_ = lean_unsigned_to_nat(0u);
v_intZero_293_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_294_ = lean_int_dec_lt(v_x_291_, v_intZero_293_);
if (v_isNeg_294_ == 0)
{
lean_object* v_a_295_; uint8_t v_isZero_296_; 
v_a_295_ = lean_nat_abs(v_x_291_);
v_isZero_296_ = lean_nat_dec_eq(v_a_295_, v_natZero_292_);
lean_dec(v_a_295_);
if (v_isZero_296_ == 1)
{
return v_intZero_293_;
}
else
{
lean_object* v___x_297_; 
v___x_297_ = lean_obj_once(&l_Int_sign___closed__0, &l_Int_sign___closed__0_once, _init_l_Int_sign___closed__0);
return v___x_297_;
}
}
else
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&l_Int_sign___closed__1, &l_Int_sign___closed__1_once, _init_l_Int_sign___closed__1);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l_Int_sign___boxed(lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Int_sign(v_x_299_);
lean_dec(v_x_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Int_toNat(lean_object* v_x_301_){
_start:
{
lean_object* v_natZero_302_; lean_object* v_intZero_303_; uint8_t v_isNeg_304_; 
v_natZero_302_ = lean_unsigned_to_nat(0u);
v_intZero_303_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_304_ = lean_int_dec_lt(v_x_301_, v_intZero_303_);
if (v_isNeg_304_ == 0)
{
lean_object* v_a_305_; 
v_a_305_ = lean_nat_abs(v_x_301_);
return v_a_305_;
}
else
{
return v_natZero_302_;
}
}
}
LEAN_EXPORT lean_object* l_Int_toNat___boxed(lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Int_toNat(v_x_306_);
lean_dec(v_x_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Int_toNat_x3f(lean_object* v_x_308_){
_start:
{
lean_object* v_intZero_309_; uint8_t v_isNeg_310_; 
v_intZero_309_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_310_ = lean_int_dec_lt(v_x_308_, v_intZero_309_);
if (v_isNeg_310_ == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; 
v_a_311_ = lean_nat_abs(v_x_308_);
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v_a_311_);
return v___x_312_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Int_toNat_x3f___boxed(lean_object* v_x_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Int_toNat_x3f(v_x_314_);
lean_dec(v_x_314_);
return v_res_315_;
}
}
static lean_object* _init_l_Int_instDvd(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lean_box(0);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Int_pow(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
lean_object* v_natZero_319_; lean_object* v_intZero_320_; uint8_t v_isNeg_321_; 
v_natZero_319_ = lean_unsigned_to_nat(0u);
v_intZero_320_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_321_ = lean_int_dec_lt(v_x_317_, v_intZero_320_);
if (v_isNeg_321_ == 0)
{
lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_a_322_ = lean_nat_abs(v_x_317_);
v___x_323_ = lean_nat_pow(v_a_322_, v_x_318_);
lean_dec(v_a_322_);
v___x_324_ = lean_nat_to_int(v___x_323_);
return v___x_324_;
}
else
{
lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_325_ = lean_unsigned_to_nat(2u);
v___x_326_ = lean_nat_mod(v_x_318_, v___x_325_);
v___x_327_ = lean_nat_dec_eq(v___x_326_, v_natZero_319_);
lean_dec(v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_328_ = lean_nat_abs(v_x_317_);
v___x_329_ = lean_nat_pow(v___x_328_, v_x_318_);
lean_dec(v___x_328_);
v___x_330_ = lean_nat_to_int(v___x_329_);
v___x_331_ = lean_int_neg(v___x_330_);
lean_dec(v___x_330_);
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_nat_abs(v_x_317_);
v___x_333_ = lean_nat_pow(v___x_332_, v_x_318_);
lean_dec(v___x_332_);
v___x_334_ = lean_nat_to_int(v___x_333_);
return v___x_334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_pow___boxed(lean_object* v_x_335_, lean_object* v_x_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Int_pow(v_x_335_, v_x_336_);
lean_dec(v_x_336_);
lean_dec(v_x_335_);
return v_res_337_;
}
}
static lean_object* _init_l_Int_instNatPow___closed__0(void){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lean_alloc_closure((void*)(l_Int_pow___boxed), 2, 0);
return v___x_338_;
}
}
static lean_object* _init_l_Int_instNatPow(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_obj_once(&l_Int_instNatPow___closed__0, &l_Int_instNatPow___closed__0_once, _init_l_Int_instNatPow___closed__0);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Int_instMin___lam__0(lean_object* v_x_340_, lean_object* v_y_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lean_int_dec_le(v_x_340_, v_y_341_);
if (v___x_342_ == 0)
{
lean_inc(v_y_341_);
return v_y_341_;
}
else
{
lean_inc(v_x_340_);
return v_x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Int_instMin___lam__0___boxed(lean_object* v_x_343_, lean_object* v_y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Int_instMin___lam__0(v_x_343_, v_y_344_);
lean_dec(v_y_344_);
lean_dec(v_x_343_);
return v_res_345_;
}
}
static lean_object* _init_l_Int_instMin___closed__0(void){
_start:
{
lean_object* v___f_346_; 
v___f_346_ = lean_alloc_closure((void*)(l_Int_instMin___lam__0___boxed), 2, 0);
return v___f_346_;
}
}
static lean_object* _init_l_Int_instMin(void){
_start:
{
lean_object* v___f_347_; 
v___f_347_ = lean_obj_once(&l_Int_instMin___closed__0, &l_Int_instMin___closed__0_once, _init_l_Int_instMin___closed__0);
return v___f_347_;
}
}
LEAN_EXPORT lean_object* l_Int_instMax___lam__0(lean_object* v_x_348_, lean_object* v_y_349_){
_start:
{
uint8_t v___x_350_; 
v___x_350_ = lean_int_dec_le(v_x_348_, v_y_349_);
if (v___x_350_ == 0)
{
lean_inc(v_x_348_);
return v_x_348_;
}
else
{
lean_inc(v_y_349_);
return v_y_349_;
}
}
}
LEAN_EXPORT lean_object* l_Int_instMax___lam__0___boxed(lean_object* v_x_351_, lean_object* v_y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Int_instMax___lam__0(v_x_351_, v_y_352_);
lean_dec(v_y_352_);
lean_dec(v_x_351_);
return v_res_353_;
}
}
static lean_object* _init_l_Int_instMax___closed__0(void){
_start:
{
lean_object* v___f_354_; 
v___f_354_ = lean_alloc_closure((void*)(l_Int_instMax___lam__0___boxed), 2, 0);
return v___f_354_;
}
}
static lean_object* _init_l_Int_instMax(void){
_start:
{
lean_object* v___f_355_; 
v___f_355_ = lean_obj_once(&l_Int_instMax___closed__0, &l_Int_instMax___closed__0_once, _init_l_Int_instMax___closed__0);
return v___f_355_;
}
}
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0(lean_object* v_n_356_){
_start:
{
lean_inc(v_n_356_);
return v_n_356_;
}
}
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0___boxed(lean_object* v_n_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_instIntCastInt___lam__0(v_n_357_);
lean_dec(v_n_357_);
return v_res_358_;
}
}
static lean_object* _init_l_instIntCastInt___closed__0(void){
_start:
{
lean_object* v___f_359_; 
v___f_359_ = lean_alloc_closure((void*)(l_instIntCastInt___lam__0___boxed), 1, 0);
return v___f_359_;
}
}
static lean_object* _init_l_instIntCastInt(void){
_start:
{
lean_object* v___f_360_; 
v___f_360_ = lean_obj_once(&l_instIntCastInt___closed__0, &l_instIntCastInt___closed__0_once, _init_l_instIntCastInt___closed__0);
return v___f_360_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___redArg(lean_object* v_inst_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_apply_1(v_inst_361_, v_a_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Int_cast(lean_object* v_R_364_, lean_object* v_inst_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = lean_apply_1(v_inst_365_, v_a_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast___redArg(lean_object* v_inst_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_369_, 0, lean_box(0));
lean_closure_set(v___x_369_, 1, v_inst_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast(lean_object* v_R_370_, lean_object* v_inst_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_372_, 0, lean_box(0));
lean_closure_set(v___x_372_, 1, v_inst_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast___redArg(lean_object* v_inst_373_){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_374_, 0, lean_box(0));
lean_closure_set(v___x_374_, 1, v_inst_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast(lean_object* v_R_375_, lean_object* v_inst_376_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_377_, 0, lean_box(0));
lean_closure_set(v___x_377_, 1, v_inst_376_);
return v___x_377_;
}
}
lean_object* runtime_initialize_Init_Data_Cast(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instNatCastInt = _init_l_instNatCastInt();
lean_mark_persistent(l_instNatCastInt);
l_Int_instInhabited = _init_l_Int_instInhabited();
lean_mark_persistent(l_Int_instInhabited);
l_Int_instNegInt = _init_l_Int_instNegInt();
lean_mark_persistent(l_Int_instNegInt);
l_Int_instAdd = _init_l_Int_instAdd();
lean_mark_persistent(l_Int_instAdd);
l_Int_instMul = _init_l_Int_instMul();
lean_mark_persistent(l_Int_instMul);
l_Int_instSub = _init_l_Int_instSub();
lean_mark_persistent(l_Int_instSub);
l_Int_instLEInt = _init_l_Int_instLEInt();
lean_mark_persistent(l_Int_instLEInt);
l_Int_instLTInt = _init_l_Int_instLTInt();
lean_mark_persistent(l_Int_instLTInt);
l_Int_instDvd = _init_l_Int_instDvd();
lean_mark_persistent(l_Int_instDvd);
l_Int_instNatPow = _init_l_Int_instNatPow();
lean_mark_persistent(l_Int_instNatPow);
l_Int_instMin = _init_l_Int_instMin();
lean_mark_persistent(l_Int_instMin);
l_Int_instMax = _init_l_Int_instMax();
lean_mark_persistent(l_Int_instMax);
l_instIntCastInt = _init_l_instIntCastInt();
lean_mark_persistent(l_instIntCastInt);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Int_term_x2d_x5b___x2b1_x5d = _init_l_Int_term_x2d_x5b___x2b1_x5d();
lean_mark_persistent(l_Int_term_x2d_x5b___x2b1_x5d);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Cast(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Int_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
