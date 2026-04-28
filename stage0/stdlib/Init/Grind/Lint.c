// Lean compiler output
// Module: Init.Grind.Lint
// Imports: public import Init.Tactics
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_configItem;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__0;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__1;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__2;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__3;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__4;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__5;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__6;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__7;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__8;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__9;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__10;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__11;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__12;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__13;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__14;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__15;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__16;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__17;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__18;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__19;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__20;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__21;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__22;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__23;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__24;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__25;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__26;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__27;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__28;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__29;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__30;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__31;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__32;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__33;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__34;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__35;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__36;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__37;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__38;
static lean_once_cell_t l_Lean_Grind_grindLintCheck___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintCheck___closed__39;
LEAN_EXPORT lean_object* l_Lean_Grind_grindLintCheck;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__0;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__1;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__2;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__3;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__4;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__5;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__6;
static lean_once_cell_t l_Lean_Grind_grindLintInspect___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintInspect___closed__7;
LEAN_EXPORT lean_object* l_Lean_Grind_grindLintInspect;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__0;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__1;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__2;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__3;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__4;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__5;
static lean_once_cell_t l_Lean_Grind_grindLintMute___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintMute___closed__6;
LEAN_EXPORT lean_object* l_Lean_Grind_grindLintMute;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__0;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__1;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__2;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__3;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__4;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__5;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__6;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__7;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__8;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__9;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__10;
static lean_once_cell_t l_Lean_Grind_grindLintSkip___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_grindLintSkip___closed__11;
LEAN_EXPORT lean_object* l_Lean_Grind_grindLintSkip;
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("grindLintCheck", 14, 14);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__2, &l_Lean_Grind_grindLintCheck___closed__2_once, _init_l_Lean_Grind_grindLintCheck___closed__2);
v___x_5_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__1, &l_Lean_Grind_grindLintCheck___closed__1_once, _init_l_Lean_Grind_grindLintCheck___closed__1);
v___x_6_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__0, &l_Lean_Grind_grindLintCheck___closed__0_once, _init_l_Lean_Grind_grindLintCheck___closed__0);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__4(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__4, &l_Lean_Grind_grindLintCheck___closed__4_once, _init_l_Lean_Grind_grindLintCheck___closed__4);
v___x_10_ = l_Lean_Name_mkStr1(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__6(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("#grind_lint", 11, 11);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__7(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__6, &l_Lean_Grind_grindLintCheck___closed__6_once, _init_l_Lean_Grind_grindLintCheck___closed__6);
v___x_13_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__8(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("ppSpace", 7, 7);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__8, &l_Lean_Grind_grindLintCheck___closed__8_once, _init_l_Lean_Grind_grindLintCheck___closed__8);
v___x_16_ = l_Lean_Name_mkStr1(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__9, &l_Lean_Grind_grindLintCheck___closed__9_once, _init_l_Lean_Grind_grindLintCheck___closed__9);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__11(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_19_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__10, &l_Lean_Grind_grindLintCheck___closed__10_once, _init_l_Lean_Grind_grindLintCheck___closed__10);
v___x_20_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__7, &l_Lean_Grind_grindLintCheck___closed__7_once, _init_l_Lean_Grind_grindLintCheck___closed__7);
v___x_21_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_22_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
lean_ctor_set(v___x_22_, 1, v___x_20_);
lean_ctor_set(v___x_22_, 2, v___x_19_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__12(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked("check", 5, 5);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__13(void){
_start:
{
uint8_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = 0;
v___x_25_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__12, &l_Lean_Grind_grindLintCheck___closed__12_once, _init_l_Lean_Grind_grindLintCheck___closed__12);
v___x_26_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set_uint8(v___x_26_, sizeof(void*)*1, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__14(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__13, &l_Lean_Grind_grindLintCheck___closed__13_once, _init_l_Lean_Grind_grindLintCheck___closed__13);
v___x_28_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__11, &l_Lean_Grind_grindLintCheck___closed__11_once, _init_l_Lean_Grind_grindLintCheck___closed__11);
v___x_29_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_30_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_27_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__15(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("many", 4, 4);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__16(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__15, &l_Lean_Grind_grindLintCheck___closed__15_once, _init_l_Lean_Grind_grindLintCheck___closed__15);
v___x_33_ = l_Lean_Name_mkStr1(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__17(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = l_Lean_Parser_Tactic_configItem;
v___x_35_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__10, &l_Lean_Grind_grindLintCheck___closed__10_once, _init_l_Lean_Grind_grindLintCheck___closed__10);
v___x_36_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_37_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
lean_ctor_set(v___x_37_, 2, v___x_34_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__17, &l_Lean_Grind_grindLintCheck___closed__17_once, _init_l_Lean_Grind_grindLintCheck___closed__17);
v___x_39_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__16, &l_Lean_Grind_grindLintCheck___closed__16_once, _init_l_Lean_Grind_grindLintCheck___closed__16);
v___x_40_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__19(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_41_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__18, &l_Lean_Grind_grindLintCheck___closed__18_once, _init_l_Lean_Grind_grindLintCheck___closed__18);
v___x_42_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__14, &l_Lean_Grind_grindLintCheck___closed__14_once, _init_l_Lean_Grind_grindLintCheck___closed__14);
v___x_43_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_44_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
lean_ctor_set(v___x_44_, 2, v___x_41_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__20(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__21(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__20, &l_Lean_Grind_grindLintCheck___closed__20_once, _init_l_Lean_Grind_grindLintCheck___closed__20);
v___x_47_ = l_Lean_Name_mkStr1(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__22(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("in", 2, 2);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__23(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__22, &l_Lean_Grind_grindLintCheck___closed__22_once, _init_l_Lean_Grind_grindLintCheck___closed__22);
v___x_50_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__24(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__23, &l_Lean_Grind_grindLintCheck___closed__23_once, _init_l_Lean_Grind_grindLintCheck___closed__23);
v___x_52_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__10, &l_Lean_Grind_grindLintCheck___closed__10_once, _init_l_Lean_Grind_grindLintCheck___closed__10);
v___x_53_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_54_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
lean_ctor_set(v___x_54_, 2, v___x_51_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__25(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("module", 6, 6);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__26(void){
_start:
{
uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = 0;
v___x_57_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__25, &l_Lean_Grind_grindLintCheck___closed__25_once, _init_l_Lean_Grind_grindLintCheck___closed__25);
v___x_58_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*1, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__27(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__26, &l_Lean_Grind_grindLintCheck___closed__26_once, _init_l_Lean_Grind_grindLintCheck___closed__26);
v___x_60_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__10, &l_Lean_Grind_grindLintCheck___closed__10_once, _init_l_Lean_Grind_grindLintCheck___closed__10);
v___x_61_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_62_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__28(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__27, &l_Lean_Grind_grindLintCheck___closed__27_once, _init_l_Lean_Grind_grindLintCheck___closed__27);
v___x_64_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__21, &l_Lean_Grind_grindLintCheck___closed__21_once, _init_l_Lean_Grind_grindLintCheck___closed__21);
v___x_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__29(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__28, &l_Lean_Grind_grindLintCheck___closed__28_once, _init_l_Lean_Grind_grindLintCheck___closed__28);
v___x_67_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__24, &l_Lean_Grind_grindLintCheck___closed__24_once, _init_l_Lean_Grind_grindLintCheck___closed__24);
v___x_68_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_69_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__30(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_mk_string_unchecked("many1", 5, 5);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__31(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__30, &l_Lean_Grind_grindLintCheck___closed__30_once, _init_l_Lean_Grind_grindLintCheck___closed__30);
v___x_72_ = l_Lean_Name_mkStr1(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__32(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__33(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__32, &l_Lean_Grind_grindLintCheck___closed__32_once, _init_l_Lean_Grind_grindLintCheck___closed__32);
v___x_75_ = l_Lean_Name_mkStr1(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__34(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__33, &l_Lean_Grind_grindLintCheck___closed__33_once, _init_l_Lean_Grind_grindLintCheck___closed__33);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__35(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__34, &l_Lean_Grind_grindLintCheck___closed__34_once, _init_l_Lean_Grind_grindLintCheck___closed__34);
v___x_79_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__31, &l_Lean_Grind_grindLintCheck___closed__31_once, _init_l_Lean_Grind_grindLintCheck___closed__31);
v___x_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__36(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__35, &l_Lean_Grind_grindLintCheck___closed__35_once, _init_l_Lean_Grind_grindLintCheck___closed__35);
v___x_82_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__29, &l_Lean_Grind_grindLintCheck___closed__29_once, _init_l_Lean_Grind_grindLintCheck___closed__29);
v___x_83_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_84_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_82_);
lean_ctor_set(v___x_84_, 2, v___x_81_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__37(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__36, &l_Lean_Grind_grindLintCheck___closed__36_once, _init_l_Lean_Grind_grindLintCheck___closed__36);
v___x_86_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__21, &l_Lean_Grind_grindLintCheck___closed__21_once, _init_l_Lean_Grind_grindLintCheck___closed__21);
v___x_87_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__38(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_88_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__37, &l_Lean_Grind_grindLintCheck___closed__37_once, _init_l_Lean_Grind_grindLintCheck___closed__37);
v___x_89_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__19, &l_Lean_Grind_grindLintCheck___closed__19_once, _init_l_Lean_Grind_grindLintCheck___closed__19);
v___x_90_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_91_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
lean_ctor_set(v___x_91_, 2, v___x_88_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck___closed__39(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_92_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__38, &l_Lean_Grind_grindLintCheck___closed__38_once, _init_l_Lean_Grind_grindLintCheck___closed__38);
v___x_93_ = lean_unsigned_to_nat(1022u);
v___x_94_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__3, &l_Lean_Grind_grindLintCheck___closed__3_once, _init_l_Lean_Grind_grindLintCheck___closed__3);
v___x_95_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_93_);
lean_ctor_set(v___x_95_, 2, v___x_92_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintCheck(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__39, &l_Lean_Grind_grindLintCheck___closed__39_once, _init_l_Lean_Grind_grindLintCheck___closed__39);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__0(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_mk_string_unchecked("grindLintInspect", 16, 16);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__1(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__0, &l_Lean_Grind_grindLintInspect___closed__0_once, _init_l_Lean_Grind_grindLintInspect___closed__0);
v___x_99_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__1, &l_Lean_Grind_grindLintCheck___closed__1_once, _init_l_Lean_Grind_grindLintCheck___closed__1);
v___x_100_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__0, &l_Lean_Grind_grindLintCheck___closed__0_once, _init_l_Lean_Grind_grindLintCheck___closed__0);
v___x_101_ = l_Lean_Name_mkStr3(v___x_100_, v___x_99_, v___x_98_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__2(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("inspect", 7, 7);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__3(void){
_start:
{
uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = 0;
v___x_104_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__2, &l_Lean_Grind_grindLintInspect___closed__2_once, _init_l_Lean_Grind_grindLintInspect___closed__2);
v___x_105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_105_, sizeof(void*)*1, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__4(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__3, &l_Lean_Grind_grindLintInspect___closed__3_once, _init_l_Lean_Grind_grindLintInspect___closed__3);
v___x_107_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__11, &l_Lean_Grind_grindLintCheck___closed__11_once, _init_l_Lean_Grind_grindLintCheck___closed__11);
v___x_108_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_109_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
lean_ctor_set(v___x_109_, 2, v___x_106_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__5(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__18, &l_Lean_Grind_grindLintCheck___closed__18_once, _init_l_Lean_Grind_grindLintCheck___closed__18);
v___x_111_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__4, &l_Lean_Grind_grindLintInspect___closed__4_once, _init_l_Lean_Grind_grindLintInspect___closed__4);
v___x_112_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_113_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
lean_ctor_set(v___x_113_, 2, v___x_110_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__6(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__35, &l_Lean_Grind_grindLintCheck___closed__35_once, _init_l_Lean_Grind_grindLintCheck___closed__35);
v___x_115_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__5, &l_Lean_Grind_grindLintInspect___closed__5_once, _init_l_Lean_Grind_grindLintInspect___closed__5);
v___x_116_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_117_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect___closed__7(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__6, &l_Lean_Grind_grindLintInspect___closed__6_once, _init_l_Lean_Grind_grindLintInspect___closed__6);
v___x_119_ = lean_unsigned_to_nat(1022u);
v___x_120_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__1, &l_Lean_Grind_grindLintInspect___closed__1_once, _init_l_Lean_Grind_grindLintInspect___closed__1);
v___x_121_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_118_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintInspect(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lean_Grind_grindLintInspect___closed__7, &l_Lean_Grind_grindLintInspect___closed__7_once, _init_l_Lean_Grind_grindLintInspect___closed__7);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_mk_string_unchecked("grindLintMute", 13, 13);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__1(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_124_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__0, &l_Lean_Grind_grindLintMute___closed__0_once, _init_l_Lean_Grind_grindLintMute___closed__0);
v___x_125_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__1, &l_Lean_Grind_grindLintCheck___closed__1_once, _init_l_Lean_Grind_grindLintCheck___closed__1);
v___x_126_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__0, &l_Lean_Grind_grindLintCheck___closed__0_once, _init_l_Lean_Grind_grindLintCheck___closed__0);
v___x_127_ = l_Lean_Name_mkStr3(v___x_126_, v___x_125_, v___x_124_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__2(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("mute", 4, 4);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__3(void){
_start:
{
uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = 0;
v___x_130_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__2, &l_Lean_Grind_grindLintMute___closed__2_once, _init_l_Lean_Grind_grindLintMute___closed__2);
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__4(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__3, &l_Lean_Grind_grindLintMute___closed__3_once, _init_l_Lean_Grind_grindLintMute___closed__3);
v___x_133_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__11, &l_Lean_Grind_grindLintCheck___closed__11_once, _init_l_Lean_Grind_grindLintCheck___closed__11);
v___x_134_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_135_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__5(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_136_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__35, &l_Lean_Grind_grindLintCheck___closed__35_once, _init_l_Lean_Grind_grindLintCheck___closed__35);
v___x_137_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__4, &l_Lean_Grind_grindLintMute___closed__4_once, _init_l_Lean_Grind_grindLintMute___closed__4);
v___x_138_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_139_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_137_);
lean_ctor_set(v___x_139_, 2, v___x_136_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute___closed__6(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_140_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__5, &l_Lean_Grind_grindLintMute___closed__5_once, _init_l_Lean_Grind_grindLintMute___closed__5);
v___x_141_ = lean_unsigned_to_nat(1022u);
v___x_142_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__1, &l_Lean_Grind_grindLintMute___closed__1_once, _init_l_Lean_Grind_grindLintMute___closed__1);
v___x_143_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_141_);
lean_ctor_set(v___x_143_, 2, v___x_140_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintMute(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_Grind_grindLintMute___closed__6, &l_Lean_Grind_grindLintMute___closed__6_once, _init_l_Lean_Grind_grindLintMute___closed__6);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__0(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_mk_string_unchecked("grindLintSkip", 13, 13);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__1(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__0, &l_Lean_Grind_grindLintSkip___closed__0_once, _init_l_Lean_Grind_grindLintSkip___closed__0);
v___x_147_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__1, &l_Lean_Grind_grindLintCheck___closed__1_once, _init_l_Lean_Grind_grindLintCheck___closed__1);
v___x_148_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__0, &l_Lean_Grind_grindLintCheck___closed__0_once, _init_l_Lean_Grind_grindLintCheck___closed__0);
v___x_149_ = l_Lean_Name_mkStr3(v___x_148_, v___x_147_, v___x_146_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__2(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("skip", 4, 4);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__3(void){
_start:
{
uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = 0;
v___x_152_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__2, &l_Lean_Grind_grindLintSkip___closed__2_once, _init_l_Lean_Grind_grindLintSkip___closed__2);
v___x_153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*1, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__4(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__3, &l_Lean_Grind_grindLintSkip___closed__3_once, _init_l_Lean_Grind_grindLintSkip___closed__3);
v___x_155_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__11, &l_Lean_Grind_grindLintCheck___closed__11_once, _init_l_Lean_Grind_grindLintCheck___closed__11);
v___x_156_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_157_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
lean_ctor_set(v___x_157_, 2, v___x_154_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__5(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_mk_string_unchecked("suffix", 6, 6);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__6(void){
_start:
{
uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = 0;
v___x_160_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__5, &l_Lean_Grind_grindLintSkip___closed__5_once, _init_l_Lean_Grind_grindLintSkip___closed__5);
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__7(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__6, &l_Lean_Grind_grindLintSkip___closed__6_once, _init_l_Lean_Grind_grindLintSkip___closed__6);
v___x_163_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__10, &l_Lean_Grind_grindLintCheck___closed__10_once, _init_l_Lean_Grind_grindLintCheck___closed__10);
v___x_164_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_165_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__8(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__7, &l_Lean_Grind_grindLintSkip___closed__7_once, _init_l_Lean_Grind_grindLintSkip___closed__7);
v___x_167_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__21, &l_Lean_Grind_grindLintCheck___closed__21_once, _init_l_Lean_Grind_grindLintCheck___closed__21);
v___x_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__9(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_169_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__8, &l_Lean_Grind_grindLintSkip___closed__8_once, _init_l_Lean_Grind_grindLintSkip___closed__8);
v___x_170_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__4, &l_Lean_Grind_grindLintSkip___closed__4_once, _init_l_Lean_Grind_grindLintSkip___closed__4);
v___x_171_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_172_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
lean_ctor_set(v___x_172_, 2, v___x_169_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__10(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_173_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__35, &l_Lean_Grind_grindLintCheck___closed__35_once, _init_l_Lean_Grind_grindLintCheck___closed__35);
v___x_174_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__9, &l_Lean_Grind_grindLintSkip___closed__9_once, _init_l_Lean_Grind_grindLintSkip___closed__9);
v___x_175_ = lean_obj_once(&l_Lean_Grind_grindLintCheck___closed__5, &l_Lean_Grind_grindLintCheck___closed__5_once, _init_l_Lean_Grind_grindLintCheck___closed__5);
v___x_176_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
lean_ctor_set(v___x_176_, 2, v___x_173_);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip___closed__11(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_177_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__10, &l_Lean_Grind_grindLintSkip___closed__10_once, _init_l_Lean_Grind_grindLintSkip___closed__10);
v___x_178_ = lean_unsigned_to_nat(1022u);
v___x_179_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__1, &l_Lean_Grind_grindLintSkip___closed__1_once, _init_l_Lean_Grind_grindLintSkip___closed__1);
v___x_180_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v___x_178_);
lean_ctor_set(v___x_180_, 2, v___x_177_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Grind_grindLintSkip(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Lean_Grind_grindLintSkip___closed__11, &l_Lean_Grind_grindLintSkip___closed__11_once, _init_l_Lean_Grind_grindLintSkip___closed__11);
return v___x_181_;
}
}
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_Lint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_Lint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Grind_grindLintCheck = _init_l_Lean_Grind_grindLintCheck();
lean_mark_persistent(l_Lean_Grind_grindLintCheck);
l_Lean_Grind_grindLintInspect = _init_l_Lean_Grind_grindLintInspect();
lean_mark_persistent(l_Lean_Grind_grindLintInspect);
l_Lean_Grind_grindLintMute = _init_l_Lean_Grind_grindLintMute();
lean_mark_persistent(l_Lean_Grind_grindLintMute);
l_Lean_Grind_grindLintSkip = _init_l_Lean_Grind_grindLintSkip();
lean_mark_persistent(l_Lean_Grind_grindLintSkip);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Lint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Lint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_Lint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_Lint(builtin);
}
#ifdef __cplusplus
}
#endif
