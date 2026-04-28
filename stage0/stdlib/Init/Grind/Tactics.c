// Lean compiler output
// Module: Init.Grind.Tactics
// Imports: public import Init.Core public import Init.Grind.Interactive
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
extern lean_object* l_Lean_Parser_Tactic_Grind_grindSeq;
extern lean_object* l_Lean_Parser_Tactic_grindParam;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_optConfig;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__14;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__15;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__16;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__17;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__18;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__19;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__20;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__21;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__22;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__23;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__24;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__25;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__26;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__27;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__28;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__29;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__30;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__31;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__32;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__33;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__34;
static lean_once_cell_t l_Lean_Parser_Tactic_grind___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind___closed__35;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_grind;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_grindTrace___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grindTrace___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_grindTrace;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_sym___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_sym___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_sym;
static lean_once_cell_t l_Lean_Parser_Tactic_cutsat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_cutsat___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_cutsat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_cutsat___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_cutsat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_cutsat___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_cutsat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_cutsat___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_cutsat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_cutsat___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_cutsat;
static lean_once_cell_t l_Lean_Parser_Tactic_lia___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_lia___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_lia___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_lia___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_lia___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_lia___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_lia___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_lia___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_lia___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_lia___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_lia;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__order___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__order___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__order___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__order___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__order___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__order___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__order___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__order___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__order___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__order___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_grind__order;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__linarith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__linarith___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__linarith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__linarith___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__linarith___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__linarith___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__linarith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__linarith___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_grind__linarith___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grind__linarith___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_grind__linarith;
static lean_once_cell_t l_Lean_Parser_Tactic_grobner___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grobner___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_grobner___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grobner___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_grobner___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grobner___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_grobner___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grobner___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_grobner___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_grobner___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_grobner;
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__3, &l_Lean_Parser_Tactic_grind___closed__3_once, _init_l_Lean_Parser_Tactic_grind___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__5, &l_Lean_Parser_Tactic_grind___closed__5_once, _init_l_Lean_Parser_Tactic_grind___closed__5);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__7(void){
_start:
{
uint8_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = 0;
v___x_14_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__3, &l_Lean_Parser_Tactic_grind___closed__3_once, _init_l_Lean_Parser_Tactic_grind___closed__3);
v___x_15_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*1, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = l_Lean_Parser_Tactic_optConfig;
v___x_17_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__7, &l_Lean_Parser_Tactic_grind___closed__7_once, _init_l_Lean_Parser_Tactic_grind___closed__7);
v___x_18_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_19_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
lean_ctor_set(v___x_19_, 2, v___x_16_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__9(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__10(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__9, &l_Lean_Parser_Tactic_grind___closed__9_once, _init_l_Lean_Parser_Tactic_grind___closed__9);
v___x_22_ = l_Lean_Name_mkStr1(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__11(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked(" only", 5, 5);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__12(void){
_start:
{
uint8_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = 0;
v___x_25_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__11, &l_Lean_Parser_Tactic_grind___closed__11_once, _init_l_Lean_Parser_Tactic_grind___closed__11);
v___x_26_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set_uint8(v___x_26_, sizeof(void*)*1, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__13(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__12, &l_Lean_Parser_Tactic_grind___closed__12_once, _init_l_Lean_Parser_Tactic_grind___closed__12);
v___x_28_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__10, &l_Lean_Parser_Tactic_grind___closed__10_once, _init_l_Lean_Parser_Tactic_grind___closed__10);
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__14(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__13, &l_Lean_Parser_Tactic_grind___closed__13_once, _init_l_Lean_Parser_Tactic_grind___closed__13);
v___x_31_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__8, &l_Lean_Parser_Tactic_grind___closed__8_once, _init_l_Lean_Parser_Tactic_grind___closed__8);
v___x_32_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_33_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
lean_ctor_set(v___x_33_, 2, v___x_30_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__15(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked(" [", 2, 2);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__16(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__15, &l_Lean_Parser_Tactic_grind___closed__15_once, _init_l_Lean_Parser_Tactic_grind___closed__15);
v___x_36_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__17(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_mk_string_unchecked("withoutPosition", 15, 15);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__17, &l_Lean_Parser_Tactic_grind___closed__17_once, _init_l_Lean_Parser_Tactic_grind___closed__17);
v___x_39_ = l_Lean_Name_mkStr1(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__19(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__20(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__21(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__20, &l_Lean_Parser_Tactic_grind___closed__20_once, _init_l_Lean_Parser_Tactic_grind___closed__20);
v___x_43_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__22(void){
_start:
{
uint8_t v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_44_ = 0;
v___x_45_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__21, &l_Lean_Parser_Tactic_grind___closed__21_once, _init_l_Lean_Parser_Tactic_grind___closed__21);
v___x_46_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__19, &l_Lean_Parser_Tactic_grind___closed__19_once, _init_l_Lean_Parser_Tactic_grind___closed__19);
v___x_47_ = l_Lean_Parser_Tactic_grindParam;
v___x_48_ = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*3, v___x_44_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__23(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__22, &l_Lean_Parser_Tactic_grind___closed__22_once, _init_l_Lean_Parser_Tactic_grind___closed__22);
v___x_50_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__18, &l_Lean_Parser_Tactic_grind___closed__18_once, _init_l_Lean_Parser_Tactic_grind___closed__18);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__24(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__23, &l_Lean_Parser_Tactic_grind___closed__23_once, _init_l_Lean_Parser_Tactic_grind___closed__23);
v___x_53_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__16, &l_Lean_Parser_Tactic_grind___closed__16_once, _init_l_Lean_Parser_Tactic_grind___closed__16);
v___x_54_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_55_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__25(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__26(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__25, &l_Lean_Parser_Tactic_grind___closed__25_once, _init_l_Lean_Parser_Tactic_grind___closed__25);
v___x_58_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__27(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__26, &l_Lean_Parser_Tactic_grind___closed__26_once, _init_l_Lean_Parser_Tactic_grind___closed__26);
v___x_60_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__24, &l_Lean_Parser_Tactic_grind___closed__24_once, _init_l_Lean_Parser_Tactic_grind___closed__24);
v___x_61_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_62_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__28(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__27, &l_Lean_Parser_Tactic_grind___closed__27_once, _init_l_Lean_Parser_Tactic_grind___closed__27);
v___x_64_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__10, &l_Lean_Parser_Tactic_grind___closed__10_once, _init_l_Lean_Parser_Tactic_grind___closed__10);
v___x_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__29(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__28, &l_Lean_Parser_Tactic_grind___closed__28_once, _init_l_Lean_Parser_Tactic_grind___closed__28);
v___x_67_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__14, &l_Lean_Parser_Tactic_grind___closed__14_once, _init_l_Lean_Parser_Tactic_grind___closed__14);
v___x_68_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_69_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__30(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_mk_string_unchecked(" => ", 4, 4);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__31(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__30, &l_Lean_Parser_Tactic_grind___closed__30_once, _init_l_Lean_Parser_Tactic_grind___closed__30);
v___x_72_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__32(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_73_ = l_Lean_Parser_Tactic_Grind_grindSeq;
v___x_74_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__31, &l_Lean_Parser_Tactic_grind___closed__31_once, _init_l_Lean_Parser_Tactic_grind___closed__31);
v___x_75_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_76_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
lean_ctor_set(v___x_76_, 2, v___x_73_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__33(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__32, &l_Lean_Parser_Tactic_grind___closed__32_once, _init_l_Lean_Parser_Tactic_grind___closed__32);
v___x_78_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__10, &l_Lean_Parser_Tactic_grind___closed__10_once, _init_l_Lean_Parser_Tactic_grind___closed__10);
v___x_79_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__34(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__33, &l_Lean_Parser_Tactic_grind___closed__33_once, _init_l_Lean_Parser_Tactic_grind___closed__33);
v___x_81_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__29, &l_Lean_Parser_Tactic_grind___closed__29_once, _init_l_Lean_Parser_Tactic_grind___closed__29);
v___x_82_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_83_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
lean_ctor_set(v___x_83_, 2, v___x_80_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind___closed__35(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__34, &l_Lean_Parser_Tactic_grind___closed__34_once, _init_l_Lean_Parser_Tactic_grind___closed__34);
v___x_85_ = lean_unsigned_to_nat(1022u);
v___x_86_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__4, &l_Lean_Parser_Tactic_grind___closed__4_once, _init_l_Lean_Parser_Tactic_grind___closed__4);
v___x_87_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_84_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__35, &l_Lean_Parser_Tactic_grind___closed__35_once, _init_l_Lean_Parser_Tactic_grind___closed__35);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__0(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("grindTrace", 10, 10);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__1(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_90_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__0, &l_Lean_Parser_Tactic_grindTrace___closed__0_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__0);
v___x_91_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_92_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_93_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_94_ = l_Lean_Name_mkStr4(v___x_93_, v___x_92_, v___x_91_, v___x_90_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__2(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("grind\?", 6, 6);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__3(void){
_start:
{
uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = 0;
v___x_97_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__2, &l_Lean_Parser_Tactic_grindTrace___closed__2_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__2);
v___x_98_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*1, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__4(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = l_Lean_Parser_Tactic_optConfig;
v___x_100_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__3, &l_Lean_Parser_Tactic_grindTrace___closed__3_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__3);
v___x_101_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_102_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_100_);
lean_ctor_set(v___x_102_, 2, v___x_99_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__5(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__13, &l_Lean_Parser_Tactic_grind___closed__13_once, _init_l_Lean_Parser_Tactic_grind___closed__13);
v___x_104_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__4, &l_Lean_Parser_Tactic_grindTrace___closed__4_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__4);
v___x_105_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_106_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
lean_ctor_set(v___x_106_, 2, v___x_103_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__6(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__28, &l_Lean_Parser_Tactic_grind___closed__28_once, _init_l_Lean_Parser_Tactic_grind___closed__28);
v___x_108_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__5, &l_Lean_Parser_Tactic_grindTrace___closed__5_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__5);
v___x_109_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_110_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace___closed__7(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__6, &l_Lean_Parser_Tactic_grindTrace___closed__6_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__6);
v___x_112_ = lean_unsigned_to_nat(1022u);
v___x_113_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__1, &l_Lean_Parser_Tactic_grindTrace___closed__1_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__1);
v___x_114_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grindTrace(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_Parser_Tactic_grindTrace___closed__7, &l_Lean_Parser_Tactic_grindTrace___closed__7_once, _init_l_Lean_Parser_Tactic_grindTrace___closed__7);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__0(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_mk_string_unchecked("sym", 3, 3);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__1(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_117_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__0, &l_Lean_Parser_Tactic_sym___closed__0_once, _init_l_Lean_Parser_Tactic_sym___closed__0);
v___x_118_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_119_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_120_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_121_ = l_Lean_Name_mkStr4(v___x_120_, v___x_119_, v___x_118_, v___x_117_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__2(void){
_start:
{
uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = 0;
v___x_123_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__0, &l_Lean_Parser_Tactic_sym___closed__0_once, _init_l_Lean_Parser_Tactic_sym___closed__0);
v___x_124_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_124_, sizeof(void*)*1, v___x_122_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__3(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_125_ = l_Lean_Parser_Tactic_optConfig;
v___x_126_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__2, &l_Lean_Parser_Tactic_sym___closed__2_once, _init_l_Lean_Parser_Tactic_sym___closed__2);
v___x_127_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_128_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
lean_ctor_set(v___x_128_, 2, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__4(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__13, &l_Lean_Parser_Tactic_grind___closed__13_once, _init_l_Lean_Parser_Tactic_grind___closed__13);
v___x_130_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__3, &l_Lean_Parser_Tactic_sym___closed__3_once, _init_l_Lean_Parser_Tactic_sym___closed__3);
v___x_131_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_132_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_130_);
lean_ctor_set(v___x_132_, 2, v___x_129_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__5(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__28, &l_Lean_Parser_Tactic_grind___closed__28_once, _init_l_Lean_Parser_Tactic_grind___closed__28);
v___x_134_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__4, &l_Lean_Parser_Tactic_sym___closed__4_once, _init_l_Lean_Parser_Tactic_sym___closed__4);
v___x_135_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_136_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
lean_ctor_set(v___x_136_, 2, v___x_133_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__6(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_137_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__31, &l_Lean_Parser_Tactic_grind___closed__31_once, _init_l_Lean_Parser_Tactic_grind___closed__31);
v___x_138_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__5, &l_Lean_Parser_Tactic_sym___closed__5_once, _init_l_Lean_Parser_Tactic_sym___closed__5);
v___x_139_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_140_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
lean_ctor_set(v___x_140_, 2, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__7(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = l_Lean_Parser_Tactic_Grind_grindSeq;
v___x_142_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__6, &l_Lean_Parser_Tactic_sym___closed__6_once, _init_l_Lean_Parser_Tactic_sym___closed__6);
v___x_143_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_144_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
lean_ctor_set(v___x_144_, 2, v___x_141_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym___closed__8(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_145_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__7, &l_Lean_Parser_Tactic_sym___closed__7_once, _init_l_Lean_Parser_Tactic_sym___closed__7);
v___x_146_ = lean_unsigned_to_nat(1022u);
v___x_147_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__1, &l_Lean_Parser_Tactic_sym___closed__1_once, _init_l_Lean_Parser_Tactic_sym___closed__1);
v___x_148_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_145_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_sym(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_obj_once(&l_Lean_Parser_Tactic_sym___closed__8, &l_Lean_Parser_Tactic_sym___closed__8_once, _init_l_Lean_Parser_Tactic_sym___closed__8);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat___closed__0(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("cutsat", 6, 6);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat___closed__1(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_151_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__0, &l_Lean_Parser_Tactic_cutsat___closed__0_once, _init_l_Lean_Parser_Tactic_cutsat___closed__0);
v___x_152_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_153_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_154_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_155_ = l_Lean_Name_mkStr4(v___x_154_, v___x_153_, v___x_152_, v___x_151_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat___closed__2(void){
_start:
{
uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = 0;
v___x_157_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__0, &l_Lean_Parser_Tactic_cutsat___closed__0_once, _init_l_Lean_Parser_Tactic_cutsat___closed__0);
v___x_158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat___closed__3(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = l_Lean_Parser_Tactic_optConfig;
v___x_160_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__2, &l_Lean_Parser_Tactic_cutsat___closed__2_once, _init_l_Lean_Parser_Tactic_cutsat___closed__2);
v___x_161_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_162_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set(v___x_162_, 2, v___x_159_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat___closed__4(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__3, &l_Lean_Parser_Tactic_cutsat___closed__3_once, _init_l_Lean_Parser_Tactic_cutsat___closed__3);
v___x_164_ = lean_unsigned_to_nat(1022u);
v___x_165_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__1, &l_Lean_Parser_Tactic_cutsat___closed__1_once, _init_l_Lean_Parser_Tactic_cutsat___closed__1);
v___x_166_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set(v___x_166_, 2, v___x_163_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_cutsat(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Lean_Parser_Tactic_cutsat___closed__4, &l_Lean_Parser_Tactic_cutsat___closed__4_once, _init_l_Lean_Parser_Tactic_cutsat___closed__4);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia___closed__0(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_mk_string_unchecked("lia", 3, 3);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia___closed__1(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_169_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__0, &l_Lean_Parser_Tactic_lia___closed__0_once, _init_l_Lean_Parser_Tactic_lia___closed__0);
v___x_170_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_171_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_172_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_173_ = l_Lean_Name_mkStr4(v___x_172_, v___x_171_, v___x_170_, v___x_169_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia___closed__2(void){
_start:
{
uint8_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = 0;
v___x_175_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__0, &l_Lean_Parser_Tactic_lia___closed__0_once, _init_l_Lean_Parser_Tactic_lia___closed__0);
v___x_176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia___closed__3(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_177_ = l_Lean_Parser_Tactic_optConfig;
v___x_178_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__2, &l_Lean_Parser_Tactic_lia___closed__2_once, _init_l_Lean_Parser_Tactic_lia___closed__2);
v___x_179_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_180_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v___x_178_);
lean_ctor_set(v___x_180_, 2, v___x_177_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia___closed__4(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_181_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__3, &l_Lean_Parser_Tactic_lia___closed__3_once, _init_l_Lean_Parser_Tactic_lia___closed__3);
v___x_182_ = lean_unsigned_to_nat(1022u);
v___x_183_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__1, &l_Lean_Parser_Tactic_lia___closed__1_once, _init_l_Lean_Parser_Tactic_lia___closed__1);
v___x_184_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___x_182_);
lean_ctor_set(v___x_184_, 2, v___x_181_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_lia(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Lean_Parser_Tactic_lia___closed__4, &l_Lean_Parser_Tactic_lia___closed__4_once, _init_l_Lean_Parser_Tactic_lia___closed__4);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_mk_string_unchecked("grind_order", 11, 11);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_187_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__0, &l_Lean_Parser_Tactic_grind__order___closed__0_once, _init_l_Lean_Parser_Tactic_grind__order___closed__0);
v___x_188_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_189_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_190_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_191_ = l_Lean_Name_mkStr4(v___x_190_, v___x_189_, v___x_188_, v___x_187_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order___closed__2(void){
_start:
{
uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = 0;
v___x_193_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__0, &l_Lean_Parser_Tactic_grind__order___closed__0_once, _init_l_Lean_Parser_Tactic_grind__order___closed__0);
v___x_194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*1, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order___closed__3(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_195_ = l_Lean_Parser_Tactic_optConfig;
v___x_196_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__2, &l_Lean_Parser_Tactic_grind__order___closed__2_once, _init_l_Lean_Parser_Tactic_grind__order___closed__2);
v___x_197_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_198_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___x_196_);
lean_ctor_set(v___x_198_, 2, v___x_195_);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order___closed__4(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__3, &l_Lean_Parser_Tactic_grind__order___closed__3_once, _init_l_Lean_Parser_Tactic_grind__order___closed__3);
v___x_200_ = lean_unsigned_to_nat(1022u);
v___x_201_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__1, &l_Lean_Parser_Tactic_grind__order___closed__1_once, _init_l_Lean_Parser_Tactic_grind__order___closed__1);
v___x_202_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___x_200_);
lean_ctor_set(v___x_202_, 2, v___x_199_);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__order(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__order___closed__4, &l_Lean_Parser_Tactic_grind__order___closed__4_once, _init_l_Lean_Parser_Tactic_grind__order___closed__4);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith___closed__0(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_mk_string_unchecked("grind_linarith", 14, 14);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith___closed__1(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_205_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__0, &l_Lean_Parser_Tactic_grind__linarith___closed__0_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__0);
v___x_206_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_207_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_208_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_209_ = l_Lean_Name_mkStr4(v___x_208_, v___x_207_, v___x_206_, v___x_205_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith___closed__2(void){
_start:
{
uint8_t v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = 0;
v___x_211_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__0, &l_Lean_Parser_Tactic_grind__linarith___closed__0_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__0);
v___x_212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_212_, sizeof(void*)*1, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith___closed__3(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_213_ = l_Lean_Parser_Tactic_optConfig;
v___x_214_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__2, &l_Lean_Parser_Tactic_grind__linarith___closed__2_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__2);
v___x_215_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_216_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_214_);
lean_ctor_set(v___x_216_, 2, v___x_213_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith___closed__4(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_217_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__3, &l_Lean_Parser_Tactic_grind__linarith___closed__3_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__3);
v___x_218_ = lean_unsigned_to_nat(1022u);
v___x_219_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__1, &l_Lean_Parser_Tactic_grind__linarith___closed__1_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__1);
v___x_220_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_218_);
lean_ctor_set(v___x_220_, 2, v___x_217_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grind__linarith(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Lean_Parser_Tactic_grind__linarith___closed__4, &l_Lean_Parser_Tactic_grind__linarith___closed__4_once, _init_l_Lean_Parser_Tactic_grind__linarith___closed__4);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner___closed__0(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lean_mk_string_unchecked("grobner", 7, 7);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner___closed__1(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__0, &l_Lean_Parser_Tactic_grobner___closed__0_once, _init_l_Lean_Parser_Tactic_grobner___closed__0);
v___x_224_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__2, &l_Lean_Parser_Tactic_grind___closed__2_once, _init_l_Lean_Parser_Tactic_grind___closed__2);
v___x_225_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__1, &l_Lean_Parser_Tactic_grind___closed__1_once, _init_l_Lean_Parser_Tactic_grind___closed__1);
v___x_226_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__0, &l_Lean_Parser_Tactic_grind___closed__0_once, _init_l_Lean_Parser_Tactic_grind___closed__0);
v___x_227_ = l_Lean_Name_mkStr4(v___x_226_, v___x_225_, v___x_224_, v___x_223_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner___closed__2(void){
_start:
{
uint8_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = 0;
v___x_229_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__0, &l_Lean_Parser_Tactic_grobner___closed__0_once, _init_l_Lean_Parser_Tactic_grobner___closed__0);
v___x_230_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*1, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner___closed__3(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_231_ = l_Lean_Parser_Tactic_optConfig;
v___x_232_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__2, &l_Lean_Parser_Tactic_grobner___closed__2_once, _init_l_Lean_Parser_Tactic_grobner___closed__2);
v___x_233_ = lean_obj_once(&l_Lean_Parser_Tactic_grind___closed__6, &l_Lean_Parser_Tactic_grind___closed__6_once, _init_l_Lean_Parser_Tactic_grind___closed__6);
v___x_234_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_232_);
lean_ctor_set(v___x_234_, 2, v___x_231_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner___closed__4(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_235_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__3, &l_Lean_Parser_Tactic_grobner___closed__3_once, _init_l_Lean_Parser_Tactic_grobner___closed__3);
v___x_236_ = lean_unsigned_to_nat(1022u);
v___x_237_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__1, &l_Lean_Parser_Tactic_grobner___closed__1_once, _init_l_Lean_Parser_Tactic_grobner___closed__1);
v___x_238_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v___x_236_);
lean_ctor_set(v___x_238_, 2, v___x_235_);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_grobner(void){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_Parser_Tactic_grobner___closed__4, &l_Lean_Parser_Tactic_grobner___closed__4_once, _init_l_Lean_Parser_Tactic_grobner___closed__4);
return v___x_239_;
}
}
lean_object* runtime_initialize_Init_Core(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Interactive(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_Tactics(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_Tactic_grind = _init_l_Lean_Parser_Tactic_grind();
lean_mark_persistent(l_Lean_Parser_Tactic_grind);
l_Lean_Parser_Tactic_grindTrace = _init_l_Lean_Parser_Tactic_grindTrace();
lean_mark_persistent(l_Lean_Parser_Tactic_grindTrace);
l_Lean_Parser_Tactic_sym = _init_l_Lean_Parser_Tactic_sym();
lean_mark_persistent(l_Lean_Parser_Tactic_sym);
l_Lean_Parser_Tactic_cutsat = _init_l_Lean_Parser_Tactic_cutsat();
lean_mark_persistent(l_Lean_Parser_Tactic_cutsat);
l_Lean_Parser_Tactic_lia = _init_l_Lean_Parser_Tactic_lia();
lean_mark_persistent(l_Lean_Parser_Tactic_lia);
l_Lean_Parser_Tactic_grind__order = _init_l_Lean_Parser_Tactic_grind__order();
lean_mark_persistent(l_Lean_Parser_Tactic_grind__order);
l_Lean_Parser_Tactic_grind__linarith = _init_l_Lean_Parser_Tactic_grind__linarith();
lean_mark_persistent(l_Lean_Parser_Tactic_grind__linarith);
l_Lean_Parser_Tactic_grobner = _init_l_Lean_Parser_Tactic_grobner();
lean_mark_persistent(l_Lean_Parser_Tactic_grobner);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Core(uint8_t builtin);
lean_object* initialize_Init_Grind_Interactive(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Tactics(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_Tactics(builtin);
}
#ifdef __cplusplus
}
#endif
