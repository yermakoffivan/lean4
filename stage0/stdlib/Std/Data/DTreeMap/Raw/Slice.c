// Lean compiler output
// Module: Std.Data.DTreeMap.Raw.Slice
// Imports: public import Std.Data.DTreeMap.Internal.Zipper public import Std.Data.DTreeMap.Raw.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25;
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__rii___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__ric___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__rio___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__rci___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__rco___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__rcc___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__roi___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__roc___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_toList__roo___auto__1;
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_21_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10);
v___x_23_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_24_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_25_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__12);
v___x_30_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("compare", 7, 7);
return v___x_32_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_34_ = lean_string_utf8_byte_size(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_35_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__15);
v___x_36_ = lean_unsigned_to_nat(0u);
v___x_37_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_38_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_35_);
return v___x_38_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_40_ = l_Lean_Name_mkStr1(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__17);
v___x_43_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__16);
v___x_44_ = lean_box(2);
v___x_45_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
lean_ctor_set(v___x_45_, 3, v___x_41_);
return v___x_45_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__18);
v___x_47_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__13);
v___x_48_ = lean_array_push(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_49_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__19);
v___x_50_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__11);
v___x_51_ = lean_box(2);
v___x_52_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_49_);
return v___x_52_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__20);
v___x_54_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_55_ = lean_array_push(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__21);
v___x_57_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__9);
v___x_58_ = lean_box(2);
v___x_59_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__22);
v___x_61_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_62_ = lean_array_push(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_63_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__23);
v___x_64_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__7);
v___x_65_ = lean_box(2);
v___x_66_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_63_);
return v___x_66_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__24);
v___x_68_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_69_ = lean_array_push(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__25);
v___x_71_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__4);
v___x_72_ = lean_box(2);
v___x_73_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___lam__0(lean_object* v_carrier_75_, lean_object* v_range_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_77_, 0, v_carrier_75_);
lean_ctor_set(v___x_77_, 1, v_range_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0(void){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRiiSlice___lam__0), 2, 0);
return v___f_78_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice(lean_object* v_00_u03b1_79_, lean_object* v_00_u03b2_80_, lean_object* v_cmp_81_){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___closed__0);
return v___f_82_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRiiSlice___boxed(lean_object* v_00_u03b1_83_, lean_object* v_00_u03b2_84_, lean_object* v_cmp_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Std_DTreeMap_Raw_instSliceableRiiSlice(v_00_u03b1_83_, v_00_u03b2_84_, v_cmp_85_);
lean_dec_ref(v_cmp_85_);
return v_res_86_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__rii___auto__1(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_87_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRicSlice___auto__1(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___lam__0(lean_object* v_carrier_89_, lean_object* v_range_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_carrier_89_);
lean_ctor_set(v___x_91_, 1, v_range_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0(void){
_start:
{
lean_object* v___f_92_; 
v___f_92_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRicSlice___lam__0), 2, 0);
return v___f_92_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice(lean_object* v_00_u03b1_93_, lean_object* v_00_u03b2_94_, lean_object* v_cmp_95_){
_start:
{
lean_object* v___f_96_; 
v___f_96_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRicSlice___closed__0);
return v___f_96_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRicSlice___boxed(lean_object* v_00_u03b1_97_, lean_object* v_00_u03b2_98_, lean_object* v_cmp_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Std_DTreeMap_Raw_instSliceableRicSlice(v_00_u03b1_97_, v_00_u03b2_98_, v_cmp_99_);
lean_dec_ref(v_cmp_99_);
return v_res_100_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__ric___auto__1(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_101_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRioSlice___auto__1(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___lam__0(lean_object* v_carrier_103_, lean_object* v_range_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v_carrier_103_);
lean_ctor_set(v___x_105_, 1, v_range_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0(void){
_start:
{
lean_object* v___f_106_; 
v___f_106_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRioSlice___lam__0), 2, 0);
return v___f_106_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice(lean_object* v_00_u03b1_107_, lean_object* v_00_u03b2_108_, lean_object* v_cmp_109_){
_start:
{
lean_object* v___f_110_; 
v___f_110_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRioSlice___closed__0);
return v___f_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRioSlice___boxed(lean_object* v_00_u03b1_111_, lean_object* v_00_u03b2_112_, lean_object* v_cmp_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Std_DTreeMap_Raw_instSliceableRioSlice(v_00_u03b1_111_, v_00_u03b2_112_, v_cmp_113_);
lean_dec_ref(v_cmp_113_);
return v_res_114_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__rio___auto__1(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_115_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRciSlice___auto__1(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___lam__0(lean_object* v_carrier_117_, lean_object* v_range_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v_carrier_117_);
lean_ctor_set(v___x_119_, 1, v_range_118_);
return v___x_119_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0(void){
_start:
{
lean_object* v___f_120_; 
v___f_120_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRciSlice___lam__0), 2, 0);
return v___f_120_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice(lean_object* v_00_u03b1_121_, lean_object* v_00_u03b2_122_, lean_object* v_cmp_123_){
_start:
{
lean_object* v___f_124_; 
v___f_124_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRciSlice___closed__0);
return v___f_124_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRciSlice___boxed(lean_object* v_00_u03b1_125_, lean_object* v_00_u03b2_126_, lean_object* v_cmp_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Std_DTreeMap_Raw_instSliceableRciSlice(v_00_u03b1_125_, v_00_u03b2_126_, v_cmp_127_);
lean_dec_ref(v_cmp_127_);
return v_res_128_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__rci___auto__1(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_129_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRcoSlice___auto__1(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___lam__0(lean_object* v_carrier_131_, lean_object* v_range_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v_carrier_131_);
lean_ctor_set(v___x_133_, 1, v_range_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0(void){
_start:
{
lean_object* v___f_134_; 
v___f_134_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRcoSlice___lam__0), 2, 0);
return v___f_134_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice(lean_object* v_00_u03b1_135_, lean_object* v_00_u03b2_136_, lean_object* v_cmp_137_){
_start:
{
lean_object* v___f_138_; 
v___f_138_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRcoSlice___closed__0);
return v___f_138_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRcoSlice___boxed(lean_object* v_00_u03b1_139_, lean_object* v_00_u03b2_140_, lean_object* v_cmp_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Std_DTreeMap_Raw_instSliceableRcoSlice(v_00_u03b1_139_, v_00_u03b2_140_, v_cmp_141_);
lean_dec_ref(v_cmp_141_);
return v_res_142_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__rco___auto__1(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_143_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRccSlice___auto__1(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___lam__0(lean_object* v_carrier_145_, lean_object* v_range_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_147_, 0, v_carrier_145_);
lean_ctor_set(v___x_147_, 1, v_range_146_);
return v___x_147_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0(void){
_start:
{
lean_object* v___f_148_; 
v___f_148_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRccSlice___lam__0), 2, 0);
return v___f_148_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice(lean_object* v_00_u03b1_149_, lean_object* v_00_u03b2_150_, lean_object* v_cmp_151_){
_start:
{
lean_object* v___f_152_; 
v___f_152_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRccSlice___closed__0);
return v___f_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRccSlice___boxed(lean_object* v_00_u03b1_153_, lean_object* v_00_u03b2_154_, lean_object* v_cmp_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_DTreeMap_Raw_instSliceableRccSlice(v_00_u03b1_153_, v_00_u03b2_154_, v_cmp_155_);
lean_dec_ref(v_cmp_155_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__rcc___auto__1(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_157_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRoiSlice___auto__1(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___lam__0(lean_object* v_carrier_159_, lean_object* v_range_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v_carrier_159_);
lean_ctor_set(v___x_161_, 1, v_range_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0(void){
_start:
{
lean_object* v___f_162_; 
v___f_162_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRoiSlice___lam__0), 2, 0);
return v___f_162_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice(lean_object* v_00_u03b1_163_, lean_object* v_00_u03b2_164_, lean_object* v_cmp_165_){
_start:
{
lean_object* v___f_166_; 
v___f_166_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRoiSlice___closed__0);
return v___f_166_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRoiSlice___boxed(lean_object* v_00_u03b1_167_, lean_object* v_00_u03b2_168_, lean_object* v_cmp_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Std_DTreeMap_Raw_instSliceableRoiSlice(v_00_u03b1_167_, v_00_u03b2_168_, v_cmp_169_);
lean_dec_ref(v_cmp_169_);
return v_res_170_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__roi___auto__1(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_171_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRocSlice___auto__1(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___lam__0(lean_object* v_carrier_173_, lean_object* v_range_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v_carrier_173_);
lean_ctor_set(v___x_175_, 1, v_range_174_);
return v___x_175_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0(void){
_start:
{
lean_object* v___f_176_; 
v___f_176_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRocSlice___lam__0), 2, 0);
return v___f_176_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice(lean_object* v_00_u03b1_177_, lean_object* v_00_u03b2_178_, lean_object* v_cmp_179_){
_start:
{
lean_object* v___f_180_; 
v___f_180_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRocSlice___closed__0);
return v___f_180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRocSlice___boxed(lean_object* v_00_u03b1_181_, lean_object* v_00_u03b2_182_, lean_object* v_cmp_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Std_DTreeMap_Raw_instSliceableRocSlice(v_00_u03b1_181_, v_00_u03b2_182_, v_cmp_183_);
lean_dec_ref(v_cmp_183_);
return v_res_184_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__roc___auto__1(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_185_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRooSlice___auto__1(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___lam__0(lean_object* v_carrier_187_, lean_object* v_range_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_carrier_187_);
lean_ctor_set(v___x_189_, 1, v_range_188_);
return v___x_189_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0(void){
_start:
{
lean_object* v___f_190_; 
v___f_190_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Raw_instSliceableRooSlice___lam__0), 2, 0);
return v___f_190_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice(lean_object* v_00_u03b1_191_, lean_object* v_00_u03b2_192_, lean_object* v_cmp_193_){
_start:
{
lean_object* v___f_194_; 
v___f_194_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0, &l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0_once, _init_l_Std_DTreeMap_Raw_instSliceableRooSlice___closed__0);
return v___f_194_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Raw_instSliceableRooSlice___boxed(lean_object* v_00_u03b1_195_, lean_object* v_00_u03b2_196_, lean_object* v_cmp_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Std_DTreeMap_Raw_instSliceableRooSlice(v_00_u03b1_195_, v_00_u03b2_196_, v_cmp_197_);
lean_dec_ref(v_cmp_197_);
return v_res_198_;
}
}
static lean_object* _init_l_Std_DTreeMap_Raw_toList__roo___auto__1(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_obj_once(&l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_199_;
}
}
lean_object* runtime_initialize_Std_Data_DTreeMap_Internal_Zipper(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_DTreeMap_Raw_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Data_DTreeMap_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Data_DTreeMap_Internal_Zipper(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DTreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Data_DTreeMap_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRiiSlice___auto__1);
l_Std_DTreeMap_Raw_toList__rii___auto__1 = _init_l_Std_DTreeMap_Raw_toList__rii___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__rii___auto__1);
l_Std_DTreeMap_Raw_instSliceableRicSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRicSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRicSlice___auto__1);
l_Std_DTreeMap_Raw_toList__ric___auto__1 = _init_l_Std_DTreeMap_Raw_toList__ric___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__ric___auto__1);
l_Std_DTreeMap_Raw_instSliceableRioSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRioSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRioSlice___auto__1);
l_Std_DTreeMap_Raw_toList__rio___auto__1 = _init_l_Std_DTreeMap_Raw_toList__rio___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__rio___auto__1);
l_Std_DTreeMap_Raw_instSliceableRciSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRciSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRciSlice___auto__1);
l_Std_DTreeMap_Raw_toList__rci___auto__1 = _init_l_Std_DTreeMap_Raw_toList__rci___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__rci___auto__1);
l_Std_DTreeMap_Raw_instSliceableRcoSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRcoSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRcoSlice___auto__1);
l_Std_DTreeMap_Raw_toList__rco___auto__1 = _init_l_Std_DTreeMap_Raw_toList__rco___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__rco___auto__1);
l_Std_DTreeMap_Raw_instSliceableRccSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRccSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRccSlice___auto__1);
l_Std_DTreeMap_Raw_toList__rcc___auto__1 = _init_l_Std_DTreeMap_Raw_toList__rcc___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__rcc___auto__1);
l_Std_DTreeMap_Raw_instSliceableRoiSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRoiSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRoiSlice___auto__1);
l_Std_DTreeMap_Raw_toList__roi___auto__1 = _init_l_Std_DTreeMap_Raw_toList__roi___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__roi___auto__1);
l_Std_DTreeMap_Raw_instSliceableRocSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRocSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRocSlice___auto__1);
l_Std_DTreeMap_Raw_toList__roc___auto__1 = _init_l_Std_DTreeMap_Raw_toList__roc___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__roc___auto__1);
l_Std_DTreeMap_Raw_instSliceableRooSlice___auto__1 = _init_l_Std_DTreeMap_Raw_instSliceableRooSlice___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_instSliceableRooSlice___auto__1);
l_Std_DTreeMap_Raw_toList__roo___auto__1 = _init_l_Std_DTreeMap_Raw_toList__roo___auto__1();
lean_mark_persistent(l_Std_DTreeMap_Raw_toList__roo___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_DTreeMap_Internal_Zipper(uint8_t builtin);
lean_object* initialize_Std_Data_DTreeMap_Raw_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_DTreeMap_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_DTreeMap_Internal_Zipper(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DTreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_DTreeMap_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Data_DTreeMap_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Data_DTreeMap_Raw_Slice(builtin);
}
#ifdef __cplusplus
}
#endif
