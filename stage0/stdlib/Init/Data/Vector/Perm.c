// Lean compiler output
// Module: Init.Data.Vector.Perm
// Imports: import all Init.Data.Array.Basic public import Init.Data.Array.Perm import all Init.Data.Vector.Basic public import Init.Data.Vector.Basic import Init.Data.List.Nat.Perm import Init.Data.Vector.Lemmas
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Vector_term___x7e___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__0;
static lean_once_cell_t l_Vector_term___x7e___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__1;
static lean_once_cell_t l_Vector_term___x7e___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__2;
static lean_once_cell_t l_Vector_term___x7e___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__3;
static lean_once_cell_t l_Vector_term___x7e___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__4;
static lean_once_cell_t l_Vector_term___x7e___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__5;
static lean_once_cell_t l_Vector_term___x7e___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__6;
static lean_once_cell_t l_Vector_term___x7e___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__7;
static lean_once_cell_t l_Vector_term___x7e___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__8;
static lean_once_cell_t l_Vector_term___x7e___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__9;
static lean_once_cell_t l_Vector_term___x7e___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__10;
static lean_once_cell_t l_Vector_term___x7e___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_term___x7e___00__closed__11;
LEAN_EXPORT lean_object* l_Vector_term___x7e__;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22;
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0;
static lean_once_cell_t l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1;
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instTransPerm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instTransPerm___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Vector_term___x7e___00__closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Vector", 6, 6);
return v___x_1_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("term_~_", 7, 7);
return v___x_2_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l_Vector_term___x7e___00__closed__1, &l_Vector_term___x7e___00__closed__1_once, _init_l_Vector_term___x7e___00__closed__1);
v___x_4_ = lean_obj_once(&l_Vector_term___x7e___00__closed__0, &l_Vector_term___x7e___00__closed__0_once, _init_l_Vector_term___x7e___00__closed__0);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__3(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_6_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Vector_term___x7e___00__closed__3, &l_Vector_term___x7e___00__closed__3_once, _init_l_Vector_term___x7e___00__closed__3);
v___x_8_ = l_Lean_Name_mkStr1(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__5(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked(" ~ ", 3, 3);
return v___x_9_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__6(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_obj_once(&l_Vector_term___x7e___00__closed__5, &l_Vector_term___x7e___00__closed__5_once, _init_l_Vector_term___x7e___00__closed__5);
v___x_11_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__7(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_12_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__8(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_obj_once(&l_Vector_term___x7e___00__closed__7, &l_Vector_term___x7e___00__closed__7_once, _init_l_Vector_term___x7e___00__closed__7);
v___x_14_ = l_Lean_Name_mkStr1(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_unsigned_to_nat(51u);
v___x_16_ = lean_obj_once(&l_Vector_term___x7e___00__closed__8, &l_Vector_term___x7e___00__closed__8_once, _init_l_Vector_term___x7e___00__closed__8);
v___x_17_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__10(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_18_ = lean_obj_once(&l_Vector_term___x7e___00__closed__9, &l_Vector_term___x7e___00__closed__9_once, _init_l_Vector_term___x7e___00__closed__9);
v___x_19_ = lean_obj_once(&l_Vector_term___x7e___00__closed__6, &l_Vector_term___x7e___00__closed__6_once, _init_l_Vector_term___x7e___00__closed__6);
v___x_20_ = lean_obj_once(&l_Vector_term___x7e___00__closed__4, &l_Vector_term___x7e___00__closed__4_once, _init_l_Vector_term___x7e___00__closed__4);
v___x_21_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___x_19_);
lean_ctor_set(v___x_21_, 2, v___x_18_);
return v___x_21_;
}
}
static lean_object* _init_l_Vector_term___x7e___00__closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = lean_obj_once(&l_Vector_term___x7e___00__closed__10, &l_Vector_term___x7e___00__closed__10_once, _init_l_Vector_term___x7e___00__closed__10);
v___x_23_ = lean_unsigned_to_nat(50u);
v___x_24_ = lean_obj_once(&l_Vector_term___x7e___00__closed__2, &l_Vector_term___x7e___00__closed__2_once, _init_l_Vector_term___x7e___00__closed__2);
v___x_25_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set(v___x_25_, 2, v___x_23_);
lean_ctor_set(v___x_25_, 3, v___x_22_);
return v___x_25_;
}
}
static lean_object* _init_l_Vector_term___x7e__(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Vector_term___x7e___00__closed__11, &l_Vector_term___x7e___00__closed__11_once, _init_l_Vector_term___x7e___00__closed__11);
return v___x_26_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_27_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_28_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_29_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_30_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_31_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__3);
v___x_32_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__2);
v___x_33_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__1);
v___x_34_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__0);
v___x_35_ = l_Lean_Name_mkStr4(v___x_34_, v___x_33_, v___x_32_, v___x_31_);
return v___x_35_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("Perm", 4, 4);
return v___x_36_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5);
v___x_38_ = l_String_toRawSubstring_x27(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5);
v___x_40_ = l_Lean_Name_mkStr1(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5);
v___x_42_ = lean_obj_once(&l_Vector_term___x7e___00__closed__0, &l_Vector_term___x7e___00__closed__0_once, _init_l_Vector_term___x7e___00__closed__0);
v___x_43_ = l_Lean_Name_mkStr2(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_box(0);
v___x_45_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8);
v___x_46_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__8);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Array", 5, 5);
return v___x_49_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5);
v___x_51_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__11);
v___x_52_ = l_Lean_Name_mkStr2(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__12);
v___x_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("List", 4, 4);
return v___x_55_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__5);
v___x_57_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__14);
v___x_58_ = l_Lean_Name_mkStr2(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__15);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_box(0);
v___x_62_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__16);
v___x_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__17);
v___x_65_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__13);
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__18);
v___x_68_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__10);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__19);
v___x_71_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__9);
v___x_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_73_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__21);
v___x_75_ = l_Lean_Name_mkStr1(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1(lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_79_ = lean_obj_once(&l_Vector_term___x7e___00__closed__2, &l_Vector_term___x7e___00__closed__2_once, _init_l_Vector_term___x7e___00__closed__2);
lean_inc(v_x_76_);
v___x_80_ = l_Lean_Syntax_isOfKind(v_x_76_, v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec(v_x_76_);
v___x_81_ = lean_box(1);
v___x_82_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v_a_78_);
return v___x_82_;
}
else
{
lean_object* v_quotContext_83_; lean_object* v_currMacroScope_84_; lean_object* v_ref_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_quotContext_83_ = lean_ctor_get(v_a_77_, 1);
v_currMacroScope_84_ = lean_ctor_get(v_a_77_, 2);
v_ref_85_ = lean_ctor_get(v_a_77_, 5);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = l_Lean_Syntax_getArg(v_x_76_, v___x_86_);
v___x_88_ = lean_unsigned_to_nat(2u);
v___x_89_ = l_Lean_Syntax_getArg(v_x_76_, v___x_88_);
lean_dec(v_x_76_);
v___x_90_ = 0;
v___x_91_ = l_Lean_SourceInfo_fromRef(v_ref_85_, v___x_90_);
v___x_92_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4);
v___x_93_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__6);
v___x_94_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__7);
lean_inc(v_currMacroScope_84_);
lean_inc(v_quotContext_83_);
v___x_95_ = l_Lean_addMacroScope(v_quotContext_83_, v___x_94_, v_currMacroScope_84_);
v___x_96_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__20);
lean_inc_n(v___x_91_, 2);
v___x_97_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_97_, 0, v___x_91_);
lean_ctor_set(v___x_97_, 1, v___x_93_);
lean_ctor_set(v___x_97_, 2, v___x_95_);
lean_ctor_set(v___x_97_, 3, v___x_96_);
v___x_98_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__22);
v___x_99_ = l_Lean_Syntax_node2(v___x_91_, v___x_98_, v___x_87_, v___x_89_);
v___x_100_ = l_Lean_Syntax_node2(v___x_91_, v___x_92_, v___x_97_, v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_a_78_);
return v___x_101_;
}
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___boxed(lean_object* v_x_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1(v_x_102_, v_a_103_, v_a_104_);
lean_dec_ref(v_a_103_);
return v_res_105_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_106_;
}
}
static lean_object* _init_l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0, &l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0_once, _init_l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__0);
v___x_108_ = l_Lean_Name_mkStr1(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1(lean_object* v_x_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4, &l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4_once, _init_l_Vector___aux__Init__Data__Vector__Perm______macroRules__Vector__term___x7e____1___closed__4);
lean_inc(v_x_109_);
v___x_113_ = l_Lean_Syntax_isOfKind(v_x_109_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; 
lean_dec(v_x_109_);
v___x_114_ = lean_box(0);
v___x_115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v_a_111_);
return v___x_115_;
}
else
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = l_Lean_Syntax_getArg(v_x_109_, v___x_116_);
v___x_118_ = lean_obj_once(&l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1, &l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1_once, _init_l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___closed__1);
lean_inc(v___x_117_);
v___x_119_ = l_Lean_Syntax_isOfKind(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v___x_117_);
lean_dec(v_x_109_);
v___x_120_ = lean_box(0);
v___x_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v_a_111_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_122_ = lean_unsigned_to_nat(1u);
v___x_123_ = l_Lean_Syntax_getArg(v_x_109_, v___x_122_);
lean_dec(v_x_109_);
v___x_124_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_123_);
v___x_125_ = l_Lean_Syntax_matchesNull(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_dec(v___x_123_);
lean_dec(v___x_117_);
v___x_126_ = lean_box(0);
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v_a_111_);
return v___x_127_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v_ref_130_; uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_128_ = l_Lean_Syntax_getArg(v___x_123_, v___x_116_);
v___x_129_ = l_Lean_Syntax_getArg(v___x_123_, v___x_122_);
lean_dec(v___x_123_);
v_ref_130_ = l_Lean_replaceRef(v___x_117_, v_a_110_);
lean_dec(v___x_117_);
v___x_131_ = 0;
v___x_132_ = l_Lean_SourceInfo_fromRef(v_ref_130_, v___x_131_);
lean_dec(v_ref_130_);
v___x_133_ = lean_obj_once(&l_Vector_term___x7e___00__closed__2, &l_Vector_term___x7e___00__closed__2_once, _init_l_Vector_term___x7e___00__closed__2);
v___x_134_ = lean_obj_once(&l_Vector_term___x7e___00__closed__5, &l_Vector_term___x7e___00__closed__5_once, _init_l_Vector_term___x7e___00__closed__5);
lean_inc(v___x_132_);
v___x_135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_132_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
v___x_136_ = l_Lean_Syntax_node3(v___x_132_, v___x_133_, v___x_128_, v___x_135_, v___x_129_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v_a_111_);
return v___x_137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1___boxed(lean_object* v_x_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Vector___aux__Init__Data__Vector__Perm______unexpand__Vector__Perm__1(v_x_138_, v_a_139_, v_a_140_);
lean_dec(v_a_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Vector_instTransPerm(lean_object* v_00_u03b1_142_, lean_object* v_n_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_box(0);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Vector_instTransPerm___boxed(lean_object* v_00_u03b1_145_, lean_object* v_n_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Vector_instTransPerm(v_00_u03b1_145_, v_n_146_);
lean_dec(v_n_146_);
return v_res_147_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Perm(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_Perm(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Perm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Perm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Vector_term___x7e__ = _init_l_Vector_term___x7e__();
lean_mark_persistent(l_Vector_term___x7e__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Perm(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_Perm(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Perm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Perm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Perm(builtin);
}
#ifdef __cplusplus
}
#endif
