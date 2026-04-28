// Lean compiler output
// Module: Std.Tactic.Do.ProofMode
// Imports: public import Std.Do.SPred.SPred
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__0;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__1;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__2;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__3;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__4;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__5;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__6;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__7;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__8;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__9;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__10;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__11;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__12;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__13;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__14;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__15;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__16;
static lean_once_cell_t l_Std_Tactic_Do_mgoalHyp___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalHyp___closed__17;
LEAN_EXPORT lean_object* l_Std_Tactic_Do_mgoalHyp;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__0;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__1;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__2;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__3;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__4;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__5;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__6;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__7;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__8;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__9;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__10;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__11;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__12;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__13;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__14;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__15;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__16;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__17;
static lean_once_cell_t l_Std_Tactic_Do_mgoalStx___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_Do_mgoalStx___closed__18;
LEAN_EXPORT lean_object* l_Std_Tactic_Do_mgoalStx;
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("mgoalHyp", 8, 8);
return v___x_1_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__0, &l_Std_Tactic_Do_mgoalHyp___closed__0_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__0);
v___x_6_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__3, &l_Std_Tactic_Do_mgoalHyp___closed__3_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__3);
v___x_7_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__2, &l_Std_Tactic_Do_mgoalHyp___closed__2_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__2);
v___x_8_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__1, &l_Std_Tactic_Do_mgoalHyp___closed__1_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__1);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__5, &l_Std_Tactic_Do_mgoalHyp___closed__5_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__5);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__7(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_13_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__8(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__7, &l_Std_Tactic_Do_mgoalHyp___closed__7_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__7);
v___x_15_ = l_Lean_Name_mkStr1(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__9(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__8, &l_Std_Tactic_Do_mgoalHyp___closed__8_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__8);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__10(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_18_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__11(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__10, &l_Std_Tactic_Do_mgoalHyp___closed__10_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__10);
v___x_20_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__12(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_21_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__11, &l_Std_Tactic_Do_mgoalHyp___closed__11_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__11);
v___x_22_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__9, &l_Std_Tactic_Do_mgoalHyp___closed__9_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__9);
v___x_23_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_24_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
lean_ctor_set(v___x_24_, 1, v___x_22_);
lean_ctor_set(v___x_24_, 2, v___x_21_);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__13(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__14(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__13, &l_Std_Tactic_Do_mgoalHyp___closed__13_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__13);
v___x_27_ = l_Lean_Name_mkStr1(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__15(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__14, &l_Std_Tactic_Do_mgoalHyp___closed__14_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__14);
v___x_30_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__16(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_31_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__15, &l_Std_Tactic_Do_mgoalHyp___closed__15_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__15);
v___x_32_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__12, &l_Std_Tactic_Do_mgoalHyp___closed__12_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__12);
v___x_33_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_34_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
lean_ctor_set(v___x_34_, 2, v___x_31_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp___closed__17(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_35_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__16, &l_Std_Tactic_Do_mgoalHyp___closed__16_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__16);
v___x_36_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__4, &l_Std_Tactic_Do_mgoalHyp___closed__4_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__4);
v___x_37_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__0, &l_Std_Tactic_Do_mgoalHyp___closed__0_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__0);
v___x_38_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_35_);
return v___x_38_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalHyp(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__17, &l_Std_Tactic_Do_mgoalHyp___closed__17_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__17);
return v___x_39_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__0(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked("mgoalStx", 8, 8);
return v___x_40_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__1(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_41_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__0, &l_Std_Tactic_Do_mgoalStx___closed__0_once, _init_l_Std_Tactic_Do_mgoalStx___closed__0);
v___x_42_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__3, &l_Std_Tactic_Do_mgoalHyp___closed__3_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__3);
v___x_43_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__2, &l_Std_Tactic_Do_mgoalHyp___closed__2_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__2);
v___x_44_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__1, &l_Std_Tactic_Do_mgoalHyp___closed__1_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__1);
v___x_45_ = l_Lean_Name_mkStr4(v___x_44_, v___x_43_, v___x_42_, v___x_41_);
return v___x_45_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__2(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("many", 4, 4);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__3(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__2, &l_Std_Tactic_Do_mgoalStx___closed__2_once, _init_l_Std_Tactic_Do_mgoalStx___closed__2);
v___x_48_ = l_Lean_Name_mkStr1(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__4(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("ppDedent", 8, 8);
return v___x_49_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__5(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__4, &l_Std_Tactic_Do_mgoalStx___closed__4_once, _init_l_Std_Tactic_Do_mgoalStx___closed__4);
v___x_51_ = l_Lean_Name_mkStr1(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__6(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("ppLine", 6, 6);
return v___x_52_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__7(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__6, &l_Std_Tactic_Do_mgoalStx___closed__6_once, _init_l_Std_Tactic_Do_mgoalStx___closed__6);
v___x_54_ = l_Lean_Name_mkStr1(v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__8(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__7, &l_Std_Tactic_Do_mgoalStx___closed__7_once, _init_l_Std_Tactic_Do_mgoalStx___closed__7);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__9(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = l_Std_Tactic_Do_mgoalHyp;
v___x_58_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__8, &l_Std_Tactic_Do_mgoalStx___closed__8_once, _init_l_Std_Tactic_Do_mgoalStx___closed__8);
v___x_59_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_60_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
lean_ctor_set(v___x_60_, 2, v___x_57_);
return v___x_60_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__10(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__9, &l_Std_Tactic_Do_mgoalStx___closed__9_once, _init_l_Std_Tactic_Do_mgoalStx___closed__9);
v___x_62_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__5, &l_Std_Tactic_Do_mgoalStx___closed__5_once, _init_l_Std_Tactic_Do_mgoalStx___closed__5);
v___x_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__11(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__10, &l_Std_Tactic_Do_mgoalStx___closed__10_once, _init_l_Std_Tactic_Do_mgoalStx___closed__10);
v___x_65_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__3, &l_Std_Tactic_Do_mgoalStx___closed__3_once, _init_l_Std_Tactic_Do_mgoalStx___closed__3);
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__12(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_mk_string_unchecked("⊢ₛ ", 7, 3);
return v___x_67_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__13(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__12, &l_Std_Tactic_Do_mgoalStx___closed__12_once, _init_l_Std_Tactic_Do_mgoalStx___closed__12);
v___x_69_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__14(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__13, &l_Std_Tactic_Do_mgoalStx___closed__13_once, _init_l_Std_Tactic_Do_mgoalStx___closed__13);
v___x_71_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__8, &l_Std_Tactic_Do_mgoalStx___closed__8_once, _init_l_Std_Tactic_Do_mgoalStx___closed__8);
v___x_72_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_73_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__15(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__15, &l_Std_Tactic_Do_mgoalHyp___closed__15_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__15);
v___x_75_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__14, &l_Std_Tactic_Do_mgoalStx___closed__14_once, _init_l_Std_Tactic_Do_mgoalStx___closed__14);
v___x_76_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_77_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_75_);
lean_ctor_set(v___x_77_, 2, v___x_74_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__16(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__15, &l_Std_Tactic_Do_mgoalStx___closed__15_once, _init_l_Std_Tactic_Do_mgoalStx___closed__15);
v___x_79_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__5, &l_Std_Tactic_Do_mgoalStx___closed__5_once, _init_l_Std_Tactic_Do_mgoalStx___closed__5);
v___x_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__17(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__16, &l_Std_Tactic_Do_mgoalStx___closed__16_once, _init_l_Std_Tactic_Do_mgoalStx___closed__16);
v___x_82_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__11, &l_Std_Tactic_Do_mgoalStx___closed__11_once, _init_l_Std_Tactic_Do_mgoalStx___closed__11);
v___x_83_ = lean_obj_once(&l_Std_Tactic_Do_mgoalHyp___closed__6, &l_Std_Tactic_Do_mgoalHyp___closed__6_once, _init_l_Std_Tactic_Do_mgoalHyp___closed__6);
v___x_84_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_82_);
lean_ctor_set(v___x_84_, 2, v___x_81_);
return v___x_84_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx___closed__18(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__17, &l_Std_Tactic_Do_mgoalStx___closed__17_once, _init_l_Std_Tactic_Do_mgoalStx___closed__17);
v___x_86_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__1, &l_Std_Tactic_Do_mgoalStx___closed__1_once, _init_l_Std_Tactic_Do_mgoalStx___closed__1);
v___x_87_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__0, &l_Std_Tactic_Do_mgoalStx___closed__0_once, _init_l_Std_Tactic_Do_mgoalStx___closed__0);
v___x_88_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_85_);
return v___x_88_;
}
}
static lean_object* _init_l_Std_Tactic_Do_mgoalStx(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Std_Tactic_Do_mgoalStx___closed__18, &l_Std_Tactic_Do_mgoalStx___closed__18_once, _init_l_Std_Tactic_Do_mgoalStx___closed__18);
return v___x_89_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_SPred(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_Do_ProofMode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Do_SPred_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_Do_ProofMode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Tactic_Do_mgoalHyp = _init_l_Std_Tactic_Do_mgoalHyp();
lean_mark_persistent(l_Std_Tactic_Do_mgoalHyp);
l_Std_Tactic_Do_mgoalStx = _init_l_Std_Tactic_Do_mgoalStx();
lean_mark_persistent(l_Std_Tactic_Do_mgoalStx);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_SPred(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_Do_ProofMode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_Do_ProofMode(builtin);
}
#ifdef __cplusplus
}
#endif
