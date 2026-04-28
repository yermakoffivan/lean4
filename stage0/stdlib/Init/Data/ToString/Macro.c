// Lean compiler output
// Module: Init.Data.ToString.Macro
// Imports: public meta import Init.Meta public import Init.Notation
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_termS_x21___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__0;
static lean_once_cell_t l_termS_x21___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__1;
static lean_once_cell_t l_termS_x21___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__2;
static lean_once_cell_t l_termS_x21___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__3;
static lean_once_cell_t l_termS_x21___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__4;
static lean_once_cell_t l_termS_x21___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__5;
static lean_once_cell_t l_termS_x21___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__6;
static lean_once_cell_t l_termS_x21___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__7;
static lean_once_cell_t l_termS_x21___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__8;
static lean_once_cell_t l_termS_x21___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__9;
static lean_once_cell_t l_termS_x21___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__10;
static lean_once_cell_t l_termS_x21___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__11;
static lean_once_cell_t l_termS_x21___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__12;
static lean_once_cell_t l_termS_x21___00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termS_x21___00__closed__13;
LEAN_EXPORT lean_object* l_termS_x21__;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12;
static lean_once_cell_t l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13;
LEAN_EXPORT lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_termS_x21___00__closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("termS!_", 7, 7);
return v___x_1_;
}
}
static lean_object* _init_l_termS_x21___00__closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_termS_x21___00__closed__0, &l_termS_x21___00__closed__0_once, _init_l_termS_x21___00__closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_termS_x21___00__closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_4_;
}
}
static lean_object* _init_l_termS_x21___00__closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_termS_x21___00__closed__2, &l_termS_x21___00__closed__2_once, _init_l_termS_x21___00__closed__2);
v___x_6_ = l_Lean_Name_mkStr1(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_termS_x21___00__closed__4(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("s!", 2, 2);
return v___x_7_;
}
}
static lean_object* _init_l_termS_x21___00__closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_obj_once(&l_termS_x21___00__closed__4, &l_termS_x21___00__closed__4_once, _init_l_termS_x21___00__closed__4);
v___x_9_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_termS_x21___00__closed__6(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("interpolatedStr", 15, 15);
return v___x_10_;
}
}
static lean_object* _init_l_termS_x21___00__closed__7(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_termS_x21___00__closed__6, &l_termS_x21___00__closed__6_once, _init_l_termS_x21___00__closed__6);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_termS_x21___00__closed__8(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_13_;
}
}
static lean_object* _init_l_termS_x21___00__closed__9(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_termS_x21___00__closed__8, &l_termS_x21___00__closed__8_once, _init_l_termS_x21___00__closed__8);
v___x_15_ = l_Lean_Name_mkStr1(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_termS_x21___00__closed__10(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_obj_once(&l_termS_x21___00__closed__9, &l_termS_x21___00__closed__9_once, _init_l_termS_x21___00__closed__9);
v___x_18_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l_termS_x21___00__closed__11(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = lean_obj_once(&l_termS_x21___00__closed__10, &l_termS_x21___00__closed__10_once, _init_l_termS_x21___00__closed__10);
v___x_20_ = lean_obj_once(&l_termS_x21___00__closed__7, &l_termS_x21___00__closed__7_once, _init_l_termS_x21___00__closed__7);
v___x_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l_termS_x21___00__closed__12(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = lean_obj_once(&l_termS_x21___00__closed__11, &l_termS_x21___00__closed__11_once, _init_l_termS_x21___00__closed__11);
v___x_23_ = lean_obj_once(&l_termS_x21___00__closed__5, &l_termS_x21___00__closed__5_once, _init_l_termS_x21___00__closed__5);
v___x_24_ = lean_obj_once(&l_termS_x21___00__closed__3, &l_termS_x21___00__closed__3_once, _init_l_termS_x21___00__closed__3);
v___x_25_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set(v___x_25_, 2, v___x_22_);
return v___x_25_;
}
}
static lean_object* _init_l_termS_x21___00__closed__13(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_26_ = lean_obj_once(&l_termS_x21___00__closed__12, &l_termS_x21___00__closed__12_once, _init_l_termS_x21___00__closed__12);
v___x_27_ = lean_unsigned_to_nat(1024u);
v___x_28_ = lean_obj_once(&l_termS_x21___00__closed__1, &l_termS_x21___00__closed__1_once, _init_l_termS_x21___00__closed__1);
v___x_29_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
lean_ctor_set(v___x_29_, 2, v___x_26_);
return v___x_29_;
}
}
static lean_object* _init_l_termS_x21__(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_obj_once(&l_termS_x21___00__closed__13, &l_termS_x21___00__closed__13_once, _init_l_termS_x21___00__closed__13);
return v___x_30_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("String", 6, 6);
return v___x_31_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0);
v___x_33_ = l_String_toRawSubstring_x27(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__0);
v___x_35_ = l_Lean_Name_mkStr1(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_box(0);
v___x_37_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__4);
v___x_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__5);
v___x_45_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__3);
v___x_46_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked("toString", 8, 8);
return v___x_47_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7);
v___x_49_ = l_String_toRawSubstring_x27(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7);
v___x_51_ = l_Lean_Name_mkStr1(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("ToString", 8, 8);
return v___x_52_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__7);
v___x_54_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__10);
v___x_55_ = l_Lean_Name_mkStr2(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__11);
v___x_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_box(0);
v___x_60_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__12);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___x_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1(lean_object* v_x_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_obj_once(&l_termS_x21___00__closed__1, &l_termS_x21___00__closed__1_once, _init_l_termS_x21___00__closed__1);
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
lean_object* v_quotContext_69_; lean_object* v_currMacroScope_70_; lean_object* v_ref_71_; lean_object* v___x_72_; lean_object* v_interpStr_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_quotContext_69_ = lean_ctor_get(v_a_63_, 1);
v_currMacroScope_70_ = lean_ctor_get(v_a_63_, 2);
v_ref_71_ = lean_ctor_get(v_a_63_, 5);
v___x_72_ = lean_unsigned_to_nat(1u);
v_interpStr_73_ = l_Lean_Syntax_getArg(v_x_62_, v___x_72_);
lean_dec(v_x_62_);
v___x_74_ = 0;
v___x_75_ = l_Lean_SourceInfo_fromRef(v_ref_71_, v___x_74_);
v___x_76_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__1);
v___x_77_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__2);
lean_inc_n(v_currMacroScope_70_, 2);
lean_inc_n(v_quotContext_69_, 2);
v___x_78_ = l_Lean_addMacroScope(v_quotContext_69_, v___x_77_, v_currMacroScope_70_);
v___x_79_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__6);
lean_inc(v___x_75_);
v___x_80_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_80_, 0, v___x_75_);
lean_ctor_set(v___x_80_, 1, v___x_76_);
lean_ctor_set(v___x_80_, 2, v___x_78_);
lean_ctor_set(v___x_80_, 3, v___x_79_);
v___x_81_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__8);
v___x_82_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__9);
v___x_83_ = l_Lean_addMacroScope(v_quotContext_69_, v___x_82_, v_currMacroScope_70_);
v___x_84_ = lean_obj_once(&l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13, &l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13_once, _init_l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___closed__13);
v___x_85_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_85_, 0, v___x_75_);
lean_ctor_set(v___x_85_, 1, v___x_81_);
lean_ctor_set(v___x_85_, 2, v___x_83_);
lean_ctor_set(v___x_85_, 3, v___x_84_);
lean_inc_ref(v___x_85_);
v___x_86_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_73_, v___x_80_, v___x_85_, v___x_85_, v_a_63_, v_a_64_);
lean_dec(v_interpStr_73_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
v_a_88_ = lean_ctor_get(v___x_86_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_86_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_inc(v_a_87_);
lean_dec(v___x_86_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_87_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v_a_96_; lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
v_a_96_ = lean_ctor_get(v___x_86_, 0);
v_a_97_ = lean_ctor_get(v___x_86_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_86_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_inc(v_a_96_);
lean_dec(v___x_86_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_96_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1___boxed(lean_object* v_x_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___aux__Init__Data__ToString__Macro______macroRules__termS_x21____1(v_x_105_, v_a_106_, v_a_107_);
lean_dec_ref(v_a_106_);
return v_res_108_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_ToString_Macro(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_termS_x21__ = _init_l_termS_x21__();
lean_mark_persistent(l_termS_x21__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Meta(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_ToString_Macro(builtin);
}
#ifdef __cplusplus
}
#endif
