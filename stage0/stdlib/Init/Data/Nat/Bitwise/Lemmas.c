// Lean compiler output
// Module: Init.Data.Nat.Bitwise.Lemmas
// Imports: import all Init.Data.Nat.Bitwise.Basic public import Init.BinderPredicates public import Init.Data.Bool public import Init.Data.Nat.Log2 import Init.ByCases import Init.Data.Int.Pow import Init.Data.Nat.Lemmas import Init.Omega import Init.RCases import Init.TacticsExtra
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__0;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__1;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__2;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__3;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__4;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__5;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__6;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__7;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__8;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__9;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__10;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__11;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__12;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__13;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__14;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__15;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__16;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__17;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__18;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__19;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__20;
static lean_once_cell_t l_Nat_bitwise__div__two__pow___auto__9___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_bitwise__div__two__pow___auto__9___closed__21;
LEAN_EXPORT lean_object* l_Nat_bitwise__div__two__pow___auto__9;
LEAN_EXPORT lean_object* l_Nat_bitwise__mod__two__pow___auto__9;
LEAN_EXPORT lean_object* l_Nat_bitwise__mul__two__pow___auto__9;
LEAN_EXPORT lean_object* l_Nat_shiftLeft__bitwise__distrib___auto__5;
LEAN_EXPORT lean_object* l_Nat_shiftRight__bitwise__distrib___auto__5;
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__3, &l_Nat_bitwise__div__two__pow___auto__9___closed__3_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__3);
v___x_6_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__2, &l_Nat_bitwise__div__two__pow___auto__9___closed__2_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__2);
v___x_7_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__1, &l_Nat_bitwise__div__two__pow___auto__9___closed__1_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__1);
v___x_8_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__0, &l_Nat_bitwise__div__two__pow___auto__9___closed__0_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__6, &l_Nat_bitwise__div__two__pow___auto__9___closed__6_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__6);
v___x_14_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__2, &l_Nat_bitwise__div__two__pow___auto__9___closed__2_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__2);
v___x_15_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__1, &l_Nat_bitwise__div__two__pow___auto__9___closed__1_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__1);
v___x_16_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__0, &l_Nat_bitwise__div__two__pow___auto__9___closed__0_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__8, &l_Nat_bitwise__div__two__pow___auto__9___closed__8_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("tacticRfl", 9, 9);
return v___x_21_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__10, &l_Nat_bitwise__div__two__pow___auto__9___closed__10_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__10);
v___x_23_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__2, &l_Nat_bitwise__div__two__pow___auto__9___closed__2_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__2);
v___x_24_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__1, &l_Nat_bitwise__div__two__pow___auto__9___closed__1_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__1);
v___x_25_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__0, &l_Nat_bitwise__div__two__pow___auto__9___closed__0_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__12(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("rfl", 3, 3);
return v___x_27_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__13(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__12, &l_Nat_bitwise__div__two__pow___auto__9___closed__12_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__12);
v___x_29_ = l_Lean_mkAtom(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__14(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__13, &l_Nat_bitwise__div__two__pow___auto__9___closed__13_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__13);
v___x_31_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__5, &l_Nat_bitwise__div__two__pow___auto__9___closed__5_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__5);
v___x_32_ = lean_array_push(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_33_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__14, &l_Nat_bitwise__div__two__pow___auto__9___closed__14_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__14);
v___x_34_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__11, &l_Nat_bitwise__div__two__pow___auto__9___closed__11_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__11);
v___x_35_ = lean_box(2);
v___x_36_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set(v___x_36_, 2, v___x_33_);
return v___x_36_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__16(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__15, &l_Nat_bitwise__div__two__pow___auto__9___closed__15_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__15);
v___x_38_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__5, &l_Nat_bitwise__div__two__pow___auto__9___closed__5_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__5);
v___x_39_ = lean_array_push(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__17(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_40_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__16, &l_Nat_bitwise__div__two__pow___auto__9___closed__16_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__16);
v___x_41_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__9, &l_Nat_bitwise__div__two__pow___auto__9___closed__9_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__9);
v___x_42_ = lean_box(2);
v___x_43_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___x_40_);
return v___x_43_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__18(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__17, &l_Nat_bitwise__div__two__pow___auto__9___closed__17_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__17);
v___x_45_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__5, &l_Nat_bitwise__div__two__pow___auto__9___closed__5_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__5);
v___x_46_ = lean_array_push(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__19(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_47_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__18, &l_Nat_bitwise__div__two__pow___auto__9___closed__18_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__18);
v___x_48_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__7, &l_Nat_bitwise__div__two__pow___auto__9___closed__7_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__7);
v___x_49_ = lean_box(2);
v___x_50_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_48_);
lean_ctor_set(v___x_50_, 2, v___x_47_);
return v___x_50_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__20(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__19, &l_Nat_bitwise__div__two__pow___auto__9___closed__19_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__19);
v___x_52_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__5, &l_Nat_bitwise__div__two__pow___auto__9___closed__5_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__5);
v___x_53_ = lean_array_push(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__20, &l_Nat_bitwise__div__two__pow___auto__9___closed__20_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__20);
v___x_55_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__4, &l_Nat_bitwise__div__two__pow___auto__9___closed__4_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__4);
v___x_56_ = lean_box(2);
v___x_57_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___x_55_);
lean_ctor_set(v___x_57_, 2, v___x_54_);
return v___x_57_;
}
}
static lean_object* _init_l_Nat_bitwise__div__two__pow___auto__9(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__21, &l_Nat_bitwise__div__two__pow___auto__9___closed__21_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21);
return v___x_58_;
}
}
static lean_object* _init_l_Nat_bitwise__mod__two__pow___auto__9(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__21, &l_Nat_bitwise__div__two__pow___auto__9___closed__21_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21);
return v___x_59_;
}
}
static lean_object* _init_l_Nat_bitwise__mul__two__pow___auto__9(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__21, &l_Nat_bitwise__div__two__pow___auto__9___closed__21_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21);
return v___x_60_;
}
}
static lean_object* _init_l_Nat_shiftLeft__bitwise__distrib___auto__5(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__21, &l_Nat_bitwise__div__two__pow___auto__9___closed__21_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21);
return v___x_61_;
}
}
static lean_object* _init_l_Nat_shiftRight__bitwise__distrib___auto__5(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_obj_once(&l_Nat_bitwise__div__two__pow___auto__9___closed__21, &l_Nat_bitwise__div__two__pow___auto__9___closed__21_once, _init_l_Nat_bitwise__div__two__pow___auto__9___closed__21);
return v___x_62_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Log2(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_RCases(uint8_t builtin);
lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Nat_Bitwise_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Log2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Nat_Bitwise_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Nat_bitwise__div__two__pow___auto__9 = _init_l_Nat_bitwise__div__two__pow___auto__9();
lean_mark_persistent(l_Nat_bitwise__div__two__pow___auto__9);
l_Nat_bitwise__mod__two__pow___auto__9 = _init_l_Nat_bitwise__mod__two__pow___auto__9();
lean_mark_persistent(l_Nat_bitwise__mod__two__pow___auto__9);
l_Nat_bitwise__mul__two__pow___auto__9 = _init_l_Nat_bitwise__mul__two__pow___auto__9();
lean_mark_persistent(l_Nat_bitwise__mul__two__pow___auto__9);
l_Nat_shiftLeft__bitwise__distrib___auto__5 = _init_l_Nat_shiftLeft__bitwise__distrib___auto__5();
lean_mark_persistent(l_Nat_shiftLeft__bitwise__distrib___auto__5);
l_Nat_shiftRight__bitwise__distrib___auto__5 = _init_l_Nat_shiftRight__bitwise__distrib___auto__5();
lean_mark_persistent(l_Nat_shiftRight__bitwise__distrib___auto__5);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
lean_object* initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Log2(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_RCases(uint8_t builtin);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Nat_Bitwise_Lemmas(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Log2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Bitwise_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Nat_Bitwise_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Nat_Bitwise_Lemmas(builtin);
}
#ifdef __cplusplus
}
#endif
