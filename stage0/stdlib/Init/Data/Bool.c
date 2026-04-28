// Lean compiler output
// Module: Init.Data.Bool
// Imports: public import Init.NotationExtra
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Bool_xor(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Bool_xor___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__0;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__1;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__2;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__3;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__4;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__5;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__6;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__7;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__8;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__9;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__10;
static lean_once_cell_t l_Bool_term___x5e_x5e___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_term___x5e_x5e___00__closed__11;
LEAN_EXPORT lean_object* l_Bool_term___x5e_x5e__;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12;
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0;
static lean_once_cell_t l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1;
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Bool_instDecidableForallOfDecidablePred___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Bool_instDecidableForallOfDecidablePred___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Bool_instDecidableForallOfDecidablePred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool_instDecidableForallOfDecidablePred___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Bool_instDecidableExistsOfDecidablePred___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Bool_instDecidableExistsOfDecidablePred___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Bool_instDecidableExistsOfDecidablePred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool_instDecidableExistsOfDecidablePred___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool_instLE;
LEAN_EXPORT lean_object* l_Bool_instLT;
LEAN_EXPORT uint8_t l_Bool_instDecidableLe(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Bool_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Bool_instDecidableLt(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Bool_instDecidableLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Bool_instMax___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Bool_instMax___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Bool_instMax___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_instMax___closed__0;
LEAN_EXPORT lean_object* l_Bool_instMax;
LEAN_EXPORT uint8_t l_Bool_instMin___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Bool_instMin___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Bool_instMin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_instMin___closed__0;
LEAN_EXPORT lean_object* l_Bool_instMin;
LEAN_EXPORT lean_object* l_Bool_toNat(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toNat___boxed(lean_object*);
static lean_once_cell_t l_Bool_toInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_toInt___closed__0;
static lean_once_cell_t l_Bool_toInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Bool_toInt___closed__1;
LEAN_EXPORT lean_object* l_Bool_toInt(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_boolPredToPred(lean_object*);
LEAN_EXPORT lean_object* l_boolRelToRel(lean_object*);
LEAN_EXPORT uint8_t l_Bool_xor(uint8_t v_a_1_, uint8_t v_b_2_){
_start:
{
if (v_a_1_ == 0)
{
return v_b_2_;
}
else
{
if (v_b_2_ == 0)
{
return v_a_1_;
}
else
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
}
}
}
LEAN_EXPORT lean_object* l_Bool_xor___boxed(lean_object* v_a_4_, lean_object* v_b_5_){
_start:
{
uint8_t v_a_boxed_6_; uint8_t v_b_boxed_7_; uint8_t v_res_8_; lean_object* v_r_9_; 
v_a_boxed_6_ = lean_unbox(v_a_4_);
v_b_boxed_7_ = lean_unbox(v_b_5_);
v_res_8_ = l_Bool_xor(v_a_boxed_6_, v_b_boxed_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_10_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__1(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("term_^^_", 8, 8);
return v___x_11_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__2(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__1, &l_Bool_term___x5e_x5e___00__closed__1_once, _init_l_Bool_term___x5e_x5e___00__closed__1);
v___x_13_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__0, &l_Bool_term___x5e_x5e___00__closed__0_once, _init_l_Bool_term___x5e_x5e___00__closed__0);
v___x_14_ = l_Lean_Name_mkStr2(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__3(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_15_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__4(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__3, &l_Bool_term___x5e_x5e___00__closed__3_once, _init_l_Bool_term___x5e_x5e___00__closed__3);
v___x_17_ = l_Lean_Name_mkStr1(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__5(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked(" ^^ ", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__6(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__5, &l_Bool_term___x5e_x5e___00__closed__5_once, _init_l_Bool_term___x5e_x5e___00__closed__5);
v___x_20_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__7(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__8(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__7, &l_Bool_term___x5e_x5e___00__closed__7_once, _init_l_Bool_term___x5e_x5e___00__closed__7);
v___x_23_ = l_Lean_Name_mkStr1(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__9(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_unsigned_to_nat(34u);
v___x_25_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__8, &l_Bool_term___x5e_x5e___00__closed__8_once, _init_l_Bool_term___x5e_x5e___00__closed__8);
v___x_26_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__10(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__9, &l_Bool_term___x5e_x5e___00__closed__9_once, _init_l_Bool_term___x5e_x5e___00__closed__9);
v___x_28_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__6, &l_Bool_term___x5e_x5e___00__closed__6_once, _init_l_Bool_term___x5e_x5e___00__closed__6);
v___x_29_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__4, &l_Bool_term___x5e_x5e___00__closed__4_once, _init_l_Bool_term___x5e_x5e___00__closed__4);
v___x_30_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_27_);
return v___x_30_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e___00__closed__11(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_31_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__10, &l_Bool_term___x5e_x5e___00__closed__10_once, _init_l_Bool_term___x5e_x5e___00__closed__10);
v___x_32_ = lean_unsigned_to_nat(33u);
v___x_33_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__2, &l_Bool_term___x5e_x5e___00__closed__2_once, _init_l_Bool_term___x5e_x5e___00__closed__2);
v___x_34_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
lean_ctor_set(v___x_34_, 2, v___x_32_);
lean_ctor_set(v___x_34_, 3, v___x_31_);
return v___x_34_;
}
}
static lean_object* _init_l_Bool_term___x5e_x5e__(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__11, &l_Bool_term___x5e_x5e___00__closed__11_once, _init_l_Bool_term___x5e_x5e___00__closed__11);
return v___x_35_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_36_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_37_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_38_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_39_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_40_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__3);
v___x_41_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__2);
v___x_42_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__1);
v___x_43_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__0);
v___x_44_ = l_Lean_Name_mkStr4(v___x_43_, v___x_42_, v___x_41_, v___x_40_);
return v___x_44_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("xor", 3, 3);
return v___x_45_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5);
v___x_47_ = l_String_toRawSubstring_x27(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5);
v___x_49_ = l_Lean_Name_mkStr1(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__5);
v___x_51_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__0, &l_Bool_term___x5e_x5e___00__closed__0_once, _init_l_Bool_term___x5e_x5e___00__closed__0);
v___x_52_ = l_Lean_Name_mkStr2(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_box(0);
v___x_54_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__8);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__9);
v___x_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_59_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__11);
v___x_61_ = l_Lean_Name_mkStr1(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1(lean_object* v_x_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__2, &l_Bool_term___x5e_x5e___00__closed__2_once, _init_l_Bool_term___x5e_x5e___00__closed__2);
lean_inc(v_x_62_);
v___x_66_ = l_Lean_Syntax_isOfKind(v_x_62_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; lean_object* v___x_68_; 
lean_dec(v_x_62_);
v___x_67_ = lean_box(1);
v___x_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v_a_64_);
return v___x_68_;
}
else
{
lean_object* v_quotContext_69_; lean_object* v_currMacroScope_70_; lean_object* v_ref_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v_quotContext_69_ = lean_ctor_get(v_a_63_, 1);
v_currMacroScope_70_ = lean_ctor_get(v_a_63_, 2);
v_ref_71_ = lean_ctor_get(v_a_63_, 5);
v___x_72_ = lean_unsigned_to_nat(0u);
v___x_73_ = l_Lean_Syntax_getArg(v_x_62_, v___x_72_);
v___x_74_ = lean_unsigned_to_nat(2u);
v___x_75_ = l_Lean_Syntax_getArg(v_x_62_, v___x_74_);
lean_dec(v_x_62_);
v___x_76_ = 0;
v___x_77_ = l_Lean_SourceInfo_fromRef(v_ref_71_, v___x_76_);
v___x_78_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4);
v___x_79_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__6);
v___x_80_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__7);
lean_inc(v_currMacroScope_70_);
lean_inc(v_quotContext_69_);
v___x_81_ = l_Lean_addMacroScope(v_quotContext_69_, v___x_80_, v_currMacroScope_70_);
v___x_82_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__10);
lean_inc_n(v___x_77_, 2);
v___x_83_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_83_, 0, v___x_77_);
lean_ctor_set(v___x_83_, 1, v___x_79_);
lean_ctor_set(v___x_83_, 2, v___x_81_);
lean_ctor_set(v___x_83_, 3, v___x_82_);
v___x_84_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__12);
v___x_85_ = l_Lean_Syntax_node2(v___x_77_, v___x_84_, v___x_73_, v___x_75_);
v___x_86_ = l_Lean_Syntax_node2(v___x_77_, v___x_78_, v___x_83_, v___x_85_);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v_a_64_);
return v___x_87_;
}
}
}
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___boxed(lean_object* v_x_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1(v_x_88_, v_a_89_, v_a_90_);
lean_dec_ref(v_a_89_);
return v_res_91_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_92_;
}
}
static lean_object* _init_l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0, &l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0_once, _init_l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__0);
v___x_94_ = l_Lean_Name_mkStr1(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1(lean_object* v_x_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4, &l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4_once, _init_l_Bool___aux__Init__Data__Bool______macroRules__Bool__term___x5e_x5e____1___closed__4);
lean_inc(v_x_95_);
v___x_99_ = l_Lean_Syntax_isOfKind(v_x_95_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_dec(v_x_95_);
v___x_100_ = lean_box(0);
v___x_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_a_97_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = l_Lean_Syntax_getArg(v_x_95_, v___x_102_);
v___x_104_ = lean_obj_once(&l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1, &l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1_once, _init_l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___closed__1);
lean_inc(v___x_103_);
v___x_105_ = l_Lean_Syntax_isOfKind(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; 
lean_dec(v___x_103_);
lean_dec(v_x_95_);
v___x_106_ = lean_box(0);
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v_a_97_);
return v___x_107_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_108_ = lean_unsigned_to_nat(1u);
v___x_109_ = l_Lean_Syntax_getArg(v_x_95_, v___x_108_);
lean_dec(v_x_95_);
v___x_110_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_109_);
v___x_111_ = l_Lean_Syntax_matchesNull(v___x_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec(v___x_109_);
lean_dec(v___x_103_);
v___x_112_ = lean_box(0);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v_a_97_);
return v___x_113_;
}
else
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v_ref_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_114_ = l_Lean_Syntax_getArg(v___x_109_, v___x_102_);
v___x_115_ = l_Lean_Syntax_getArg(v___x_109_, v___x_108_);
lean_dec(v___x_109_);
v_ref_116_ = l_Lean_replaceRef(v___x_103_, v_a_96_);
lean_dec(v___x_103_);
v___x_117_ = 0;
v___x_118_ = l_Lean_SourceInfo_fromRef(v_ref_116_, v___x_117_);
lean_dec(v_ref_116_);
v___x_119_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__2, &l_Bool_term___x5e_x5e___00__closed__2_once, _init_l_Bool_term___x5e_x5e___00__closed__2);
v___x_120_ = lean_obj_once(&l_Bool_term___x5e_x5e___00__closed__5, &l_Bool_term___x5e_x5e___00__closed__5_once, _init_l_Bool_term___x5e_x5e___00__closed__5);
lean_inc(v___x_118_);
v___x_121_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = l_Lean_Syntax_node3(v___x_118_, v___x_119_, v___x_114_, v___x_121_, v___x_115_);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v_a_97_);
return v___x_123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1___boxed(lean_object* v_x_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Bool___aux__Init__Data__Bool______unexpand__Bool__xor__1(v_x_124_, v_a_125_, v_a_126_);
lean_dec(v_a_125_);
return v_res_127_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableForallOfDecidablePred___redArg(lean_object* v_inst_128_){
_start:
{
uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_129_ = 1;
v___x_130_ = lean_box(v___x_129_);
lean_inc_ref(v_inst_128_);
v___x_131_ = lean_apply_1(v_inst_128_, v___x_130_);
v___x_132_ = lean_unbox(v___x_131_);
if (v___x_132_ == 0)
{
uint8_t v___x_133_; 
lean_dec_ref(v_inst_128_);
v___x_133_ = lean_unbox(v___x_131_);
return v___x_133_;
}
else
{
uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_134_ = 0;
v___x_135_ = lean_box(v___x_134_);
v___x_136_ = lean_apply_1(v_inst_128_, v___x_135_);
v___x_137_ = lean_unbox(v___x_136_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableForallOfDecidablePred___redArg___boxed(lean_object* v_inst_138_){
_start:
{
uint8_t v_res_139_; lean_object* v_r_140_; 
v_res_139_ = l_Bool_instDecidableForallOfDecidablePred___redArg(v_inst_138_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableForallOfDecidablePred(lean_object* v_p_141_, lean_object* v_inst_142_){
_start:
{
uint8_t v___x_143_; 
v___x_143_ = l_Bool_instDecidableForallOfDecidablePred___redArg(v_inst_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableForallOfDecidablePred___boxed(lean_object* v_p_144_, lean_object* v_inst_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l_Bool_instDecidableForallOfDecidablePred(v_p_144_, v_inst_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableExistsOfDecidablePred___redArg(lean_object* v_inst_148_){
_start:
{
uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_149_ = 1;
v___x_150_ = lean_box(v___x_149_);
lean_inc_ref(v_inst_148_);
v___x_151_ = lean_apply_1(v_inst_148_, v___x_150_);
v___x_152_ = lean_unbox(v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_apply_1(v_inst_148_, v___x_151_);
v___x_154_ = lean_unbox(v___x_153_);
return v___x_154_;
}
else
{
uint8_t v___x_155_; 
lean_dec_ref(v_inst_148_);
v___x_155_ = lean_unbox(v___x_151_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableExistsOfDecidablePred___redArg___boxed(lean_object* v_inst_156_){
_start:
{
uint8_t v_res_157_; lean_object* v_r_158_; 
v_res_157_ = l_Bool_instDecidableExistsOfDecidablePred___redArg(v_inst_156_);
v_r_158_ = lean_box(v_res_157_);
return v_r_158_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableExistsOfDecidablePred(lean_object* v_p_159_, lean_object* v_inst_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = l_Bool_instDecidableExistsOfDecidablePred___redArg(v_inst_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableExistsOfDecidablePred___boxed(lean_object* v_p_162_, lean_object* v_inst_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_Bool_instDecidableExistsOfDecidablePred(v_p_162_, v_inst_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
static lean_object* _init_l_Bool_instLE(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_box(0);
return v___x_166_;
}
}
static lean_object* _init_l_Bool_instLT(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_box(0);
return v___x_167_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableLe(uint8_t v_x_168_, uint8_t v_y_169_){
_start:
{
if (v_x_168_ == 0)
{
uint8_t v___x_170_; 
v___x_170_ = 1;
return v___x_170_;
}
else
{
return v_y_169_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableLe___boxed(lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
uint8_t v_x_boxed_173_; uint8_t v_y_boxed_174_; uint8_t v_res_175_; lean_object* v_r_176_; 
v_x_boxed_173_ = lean_unbox(v_x_171_);
v_y_boxed_174_ = lean_unbox(v_y_172_);
v_res_175_ = l_Bool_instDecidableLe(v_x_boxed_173_, v_y_boxed_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT uint8_t l_Bool_instDecidableLt(uint8_t v_x_177_, uint8_t v_y_178_){
_start:
{
if (v_x_177_ == 0)
{
return v_y_178_;
}
else
{
uint8_t v___x_179_; 
v___x_179_ = 0;
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instDecidableLt___boxed(lean_object* v_x_180_, lean_object* v_y_181_){
_start:
{
uint8_t v_x_boxed_182_; uint8_t v_y_boxed_183_; uint8_t v_res_184_; lean_object* v_r_185_; 
v_x_boxed_182_ = lean_unbox(v_x_180_);
v_y_boxed_183_ = lean_unbox(v_y_181_);
v_res_184_ = l_Bool_instDecidableLt(v_x_boxed_182_, v_y_boxed_183_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
LEAN_EXPORT uint8_t l_Bool_instMax___lam__0(uint8_t v_x_186_, uint8_t v_y_187_){
_start:
{
if (v_x_186_ == 0)
{
return v_y_187_;
}
else
{
return v_x_186_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instMax___lam__0___boxed(lean_object* v_x_188_, lean_object* v_y_189_){
_start:
{
uint8_t v_x_boxed_190_; uint8_t v_y_boxed_191_; uint8_t v_res_192_; lean_object* v_r_193_; 
v_x_boxed_190_ = lean_unbox(v_x_188_);
v_y_boxed_191_ = lean_unbox(v_y_189_);
v_res_192_ = l_Bool_instMax___lam__0(v_x_boxed_190_, v_y_boxed_191_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
static lean_object* _init_l_Bool_instMax___closed__0(void){
_start:
{
lean_object* v___f_194_; 
v___f_194_ = lean_alloc_closure((void*)(l_Bool_instMax___lam__0___boxed), 2, 0);
return v___f_194_;
}
}
static lean_object* _init_l_Bool_instMax(void){
_start:
{
lean_object* v___f_195_; 
v___f_195_ = lean_obj_once(&l_Bool_instMax___closed__0, &l_Bool_instMax___closed__0_once, _init_l_Bool_instMax___closed__0);
return v___f_195_;
}
}
LEAN_EXPORT uint8_t l_Bool_instMin___lam__0(uint8_t v_x_196_, uint8_t v_y_197_){
_start:
{
if (v_x_196_ == 0)
{
return v_x_196_;
}
else
{
return v_y_197_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_instMin___lam__0___boxed(lean_object* v_x_198_, lean_object* v_y_199_){
_start:
{
uint8_t v_x_boxed_200_; uint8_t v_y_boxed_201_; uint8_t v_res_202_; lean_object* v_r_203_; 
v_x_boxed_200_ = lean_unbox(v_x_198_);
v_y_boxed_201_ = lean_unbox(v_y_199_);
v_res_202_ = l_Bool_instMin___lam__0(v_x_boxed_200_, v_y_boxed_201_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
static lean_object* _init_l_Bool_instMin___closed__0(void){
_start:
{
lean_object* v___f_204_; 
v___f_204_ = lean_alloc_closure((void*)(l_Bool_instMin___lam__0___boxed), 2, 0);
return v___f_204_;
}
}
static lean_object* _init_l_Bool_instMin(void){
_start:
{
lean_object* v___f_205_; 
v___f_205_ = lean_obj_once(&l_Bool_instMin___closed__0, &l_Bool_instMin___closed__0_once, _init_l_Bool_instMin___closed__0);
return v___f_205_;
}
}
LEAN_EXPORT lean_object* l_Bool_toNat(uint8_t v_b_206_){
_start:
{
if (v_b_206_ == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_unsigned_to_nat(0u);
return v___x_207_;
}
else
{
lean_object* v___x_208_; 
v___x_208_ = lean_unsigned_to_nat(1u);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_toNat___boxed(lean_object* v_b_209_){
_start:
{
uint8_t v_b_boxed_210_; lean_object* v_res_211_; 
v_b_boxed_210_ = lean_unbox(v_b_209_);
v_res_211_ = l_Bool_toNat(v_b_boxed_210_);
return v_res_211_;
}
}
static lean_object* _init_l_Bool_toInt___closed__0(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Bool_toInt___closed__1(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Bool_toInt(uint8_t v_b_216_){
_start:
{
if (v_b_216_ == 0)
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Bool_toInt___closed__0, &l_Bool_toInt___closed__0_once, _init_l_Bool_toInt___closed__0);
return v___x_217_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Bool_toInt___closed__1, &l_Bool_toInt___closed__1_once, _init_l_Bool_toInt___closed__1);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Bool_toInt___boxed(lean_object* v_b_219_){
_start:
{
uint8_t v_b_boxed_220_; lean_object* v_res_221_; 
v_b_boxed_220_ = lean_unbox(v_b_219_);
v_res_221_ = l_Bool_toInt(v_b_boxed_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_boolPredToPred(lean_object* v_00_u03b1_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_box(0);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_boolRelToRel(lean_object* v_00_u03b1_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_box(0);
return v___x_225_;
}
}
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Bool_instLE = _init_l_Bool_instLE();
lean_mark_persistent(l_Bool_instLE);
l_Bool_instLT = _init_l_Bool_instLT();
lean_mark_persistent(l_Bool_instLT);
l_Bool_instMax = _init_l_Bool_instMax();
lean_mark_persistent(l_Bool_instMax);
l_Bool_instMin = _init_l_Bool_instMin();
lean_mark_persistent(l_Bool_instMin);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Bool(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Bool_term___x5e_x5e__ = _init_l_Bool_term___x5e_x5e__();
lean_mark_persistent(l_Bool_term___x5e_x5e__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Bool(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Bool(builtin);
}
#ifdef __cplusplus
}
#endif
