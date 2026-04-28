// Lean compiler output
// Module: Init.Data.Vector.Range
// Imports: import all Init.Data.Array.Basic import all Init.Data.Vector.Basic public import Init.BinderPredicates public import Init.Data.Vector.Basic import Init.ByCases import Init.Data.Array.Find import Init.Data.Array.Range import Init.Data.Vector.MapIdx import Init.Data.Vector.Zip
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__0;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__1;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__2;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__3;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__4;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__5;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__6;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__7;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__8;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__9;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__10;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__11;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__12;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__13;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__14;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__15;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__16;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__17;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__18;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__19;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__20;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__21;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__22;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__23;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__24;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__25;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__26;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__27;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__28;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__29;
static lean_once_cell_t l_Vector_count__range_x27___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_count__range_x27___auto__1___closed__30;
LEAN_EXPORT lean_object* l_Vector_count__range_x27___auto__1;
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__3, &l_Vector_count__range_x27___auto__1___closed__3_once, _init_l_Vector_count__range_x27___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__2, &l_Vector_count__range_x27___auto__1___closed__2_once, _init_l_Vector_count__range_x27___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__1, &l_Vector_count__range_x27___auto__1___closed__1_once, _init_l_Vector_count__range_x27___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__0, &l_Vector_count__range_x27___auto__1___closed__0_once, _init_l_Vector_count__range_x27___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__6, &l_Vector_count__range_x27___auto__1___closed__6_once, _init_l_Vector_count__range_x27___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__2, &l_Vector_count__range_x27___auto__1___closed__2_once, _init_l_Vector_count__range_x27___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__1, &l_Vector_count__range_x27___auto__1___closed__1_once, _init_l_Vector_count__range_x27___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__0, &l_Vector_count__range_x27___auto__1___closed__0_once, _init_l_Vector_count__range_x27___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__8, &l_Vector_count__range_x27___auto__1___closed__8_once, _init_l_Vector_count__range_x27___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("simp", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__10, &l_Vector_count__range_x27___auto__1___closed__10_once, _init_l_Vector_count__range_x27___auto__1___closed__10);
v___x_23_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__2, &l_Vector_count__range_x27___auto__1___closed__2_once, _init_l_Vector_count__range_x27___auto__1___closed__2);
v___x_24_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__1, &l_Vector_count__range_x27___auto__1___closed__1_once, _init_l_Vector_count__range_x27___auto__1___closed__1);
v___x_25_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__0, &l_Vector_count__range_x27___auto__1___closed__0_once, _init_l_Vector_count__range_x27___auto__1___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__10, &l_Vector_count__range_x27___auto__1___closed__10_once, _init_l_Vector_count__range_x27___auto__1___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__12, &l_Vector_count__range_x27___auto__1___closed__12_once, _init_l_Vector_count__range_x27___auto__1___closed__12);
v___x_30_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("optConfig", 9, 9);
return v___x_32_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_33_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__14, &l_Vector_count__range_x27___auto__1___closed__14_once, _init_l_Vector_count__range_x27___auto__1___closed__14);
v___x_34_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__2, &l_Vector_count__range_x27___auto__1___closed__2_once, _init_l_Vector_count__range_x27___auto__1___closed__2);
v___x_35_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__1, &l_Vector_count__range_x27___auto__1___closed__1_once, _init_l_Vector_count__range_x27___auto__1___closed__1);
v___x_36_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__0, &l_Vector_count__range_x27___auto__1___closed__0_once, _init_l_Vector_count__range_x27___auto__1___closed__0);
v___x_37_ = l_Lean_Name_mkStr4(v___x_36_, v___x_35_, v___x_34_, v___x_33_);
return v___x_37_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__16(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_39_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__9, &l_Vector_count__range_x27___auto__1___closed__9_once, _init_l_Vector_count__range_x27___auto__1___closed__9);
v___x_40_ = lean_box(2);
v___x_41_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set(v___x_41_, 2, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__17(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__16, &l_Vector_count__range_x27___auto__1___closed__16_once, _init_l_Vector_count__range_x27___auto__1___closed__16);
v___x_43_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_44_ = lean_array_push(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__18(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__17, &l_Vector_count__range_x27___auto__1___closed__17_once, _init_l_Vector_count__range_x27___auto__1___closed__17);
v___x_46_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__15, &l_Vector_count__range_x27___auto__1___closed__15_once, _init_l_Vector_count__range_x27___auto__1___closed__15);
v___x_47_ = lean_box(2);
v___x_48_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__19(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__18, &l_Vector_count__range_x27___auto__1___closed__18_once, _init_l_Vector_count__range_x27___auto__1___closed__18);
v___x_50_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__13, &l_Vector_count__range_x27___auto__1___closed__13_once, _init_l_Vector_count__range_x27___auto__1___closed__13);
v___x_51_ = lean_array_push(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__20(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__16, &l_Vector_count__range_x27___auto__1___closed__16_once, _init_l_Vector_count__range_x27___auto__1___closed__16);
v___x_53_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__19, &l_Vector_count__range_x27___auto__1___closed__19_once, _init_l_Vector_count__range_x27___auto__1___closed__19);
v___x_54_ = lean_array_push(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__21(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__16, &l_Vector_count__range_x27___auto__1___closed__16_once, _init_l_Vector_count__range_x27___auto__1___closed__16);
v___x_56_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__20, &l_Vector_count__range_x27___auto__1___closed__20_once, _init_l_Vector_count__range_x27___auto__1___closed__20);
v___x_57_ = lean_array_push(v___x_56_, v___x_55_);
return v___x_57_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__22(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__16, &l_Vector_count__range_x27___auto__1___closed__16_once, _init_l_Vector_count__range_x27___auto__1___closed__16);
v___x_59_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__21, &l_Vector_count__range_x27___auto__1___closed__21_once, _init_l_Vector_count__range_x27___auto__1___closed__21);
v___x_60_ = lean_array_push(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__23(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__16, &l_Vector_count__range_x27___auto__1___closed__16_once, _init_l_Vector_count__range_x27___auto__1___closed__16);
v___x_62_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__22, &l_Vector_count__range_x27___auto__1___closed__22_once, _init_l_Vector_count__range_x27___auto__1___closed__22);
v___x_63_ = lean_array_push(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__24(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__23, &l_Vector_count__range_x27___auto__1___closed__23_once, _init_l_Vector_count__range_x27___auto__1___closed__23);
v___x_65_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__11, &l_Vector_count__range_x27___auto__1___closed__11_once, _init_l_Vector_count__range_x27___auto__1___closed__11);
v___x_66_ = lean_box(2);
v___x_67_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
return v___x_67_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__25(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__24, &l_Vector_count__range_x27___auto__1___closed__24_once, _init_l_Vector_count__range_x27___auto__1___closed__24);
v___x_69_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_70_ = lean_array_push(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__26(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__25, &l_Vector_count__range_x27___auto__1___closed__25_once, _init_l_Vector_count__range_x27___auto__1___closed__25);
v___x_72_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__9, &l_Vector_count__range_x27___auto__1___closed__9_once, _init_l_Vector_count__range_x27___auto__1___closed__9);
v___x_73_ = lean_box(2);
v___x_74_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__27(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__26, &l_Vector_count__range_x27___auto__1___closed__26_once, _init_l_Vector_count__range_x27___auto__1___closed__26);
v___x_76_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_77_ = lean_array_push(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__28(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__27, &l_Vector_count__range_x27___auto__1___closed__27_once, _init_l_Vector_count__range_x27___auto__1___closed__27);
v___x_79_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__7, &l_Vector_count__range_x27___auto__1___closed__7_once, _init_l_Vector_count__range_x27___auto__1___closed__7);
v___x_80_ = lean_box(2);
v___x_81_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_79_);
lean_ctor_set(v___x_81_, 2, v___x_78_);
return v___x_81_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__29(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__28, &l_Vector_count__range_x27___auto__1___closed__28_once, _init_l_Vector_count__range_x27___auto__1___closed__28);
v___x_83_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__5, &l_Vector_count__range_x27___auto__1___closed__5_once, _init_l_Vector_count__range_x27___auto__1___closed__5);
v___x_84_ = lean_array_push(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1___closed__30(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__29, &l_Vector_count__range_x27___auto__1___closed__29_once, _init_l_Vector_count__range_x27___auto__1___closed__29);
v___x_86_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__4, &l_Vector_count__range_x27___auto__1___closed__4_once, _init_l_Vector_count__range_x27___auto__1___closed__4);
v___x_87_ = lean_box(2);
v___x_88_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_85_);
return v___x_88_;
}
}
static lean_object* _init_l_Vector_count__range_x27___auto__1(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Vector_count__range_x27___auto__1___closed__30, &l_Vector_count__range_x27___auto__1___closed__30_once, _init_l_Vector_count__range_x27___auto__1___closed__30);
return v___x_89_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Find(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Zip(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Range(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Find(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Range(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Vector_count__range_x27___auto__1 = _init_l_Vector_count__range_x27___auto__1();
lean_mark_persistent(l_Vector_count__range_x27___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Find(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Range(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Zip(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Range(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Find(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Range(builtin);
}
#ifdef __cplusplus
}
#endif
