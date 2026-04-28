// Lean compiler output
// Module: Std.Data.TreeSet.Raw.Slice
// Imports: public import Std.Data.TreeMap.Raw.Slice public import Std.Data.TreeSet.Raw.Basic
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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25;
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__rii___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__ric___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__rio___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__rci___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__rco___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__rcc___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__roi___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__roc___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___auto__1;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0;
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_toList__roo___auto__1;
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_21_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10);
v___x_23_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__2);
v___x_24_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__1);
v___x_25_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__12);
v___x_30_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("compare", 7, 7);
return v___x_32_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_34_ = lean_string_utf8_byte_size(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_35_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__15);
v___x_36_ = lean_unsigned_to_nat(0u);
v___x_37_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_38_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_35_);
return v___x_38_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__14);
v___x_40_ = l_Lean_Name_mkStr1(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__17);
v___x_43_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__16);
v___x_44_ = lean_box(2);
v___x_45_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
lean_ctor_set(v___x_45_, 3, v___x_41_);
return v___x_45_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__18);
v___x_47_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__13);
v___x_48_ = lean_array_push(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_49_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__19);
v___x_50_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__11);
v___x_51_ = lean_box(2);
v___x_52_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_49_);
return v___x_52_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__20);
v___x_54_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_55_ = lean_array_push(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__21);
v___x_57_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__9);
v___x_58_ = lean_box(2);
v___x_59_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__22);
v___x_61_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_62_ = lean_array_push(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_63_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__23);
v___x_64_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__7);
v___x_65_ = lean_box(2);
v___x_66_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_63_);
return v___x_66_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__24);
v___x_68_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__5);
v___x_69_ = lean_array_push(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__25);
v___x_71_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__4);
v___x_72_ = lean_box(2);
v___x_73_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___lam__0(lean_object* v_carrier_75_, lean_object* v_range_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_77_, 0, v_carrier_75_);
lean_ctor_set(v___x_77_, 1, v_range_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0(void){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRiiSlice___lam__0), 2, 0);
return v___f_78_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice(lean_object* v_00_u03b1_79_, lean_object* v_cmp_80_){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___closed__0);
return v___f_81_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRiiSlice___boxed(lean_object* v_00_u03b1_82_, lean_object* v_cmp_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Std_TreeSet_Raw_instSliceableRiiSlice(v_00_u03b1_82_, v_cmp_83_);
lean_dec_ref(v_cmp_83_);
return v_res_84_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__rii___auto__1(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_85_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRicSlice___auto__1(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___lam__0(lean_object* v_carrier_87_, lean_object* v_range_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v_carrier_87_);
lean_ctor_set(v___x_89_, 1, v_range_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0(void){
_start:
{
lean_object* v___f_90_; 
v___f_90_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRicSlice___lam__0), 2, 0);
return v___f_90_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice(lean_object* v_00_u03b1_91_, lean_object* v_cmp_92_){
_start:
{
lean_object* v___f_93_; 
v___f_93_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRicSlice___closed__0);
return v___f_93_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRicSlice___boxed(lean_object* v_00_u03b1_94_, lean_object* v_cmp_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Std_TreeSet_Raw_instSliceableRicSlice(v_00_u03b1_94_, v_cmp_95_);
lean_dec_ref(v_cmp_95_);
return v_res_96_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__ric___auto__1(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_97_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRioSlice___auto__1(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___lam__0(lean_object* v_carrier_99_, lean_object* v_range_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v_carrier_99_);
lean_ctor_set(v___x_101_, 1, v_range_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0(void){
_start:
{
lean_object* v___f_102_; 
v___f_102_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRioSlice___lam__0), 2, 0);
return v___f_102_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice(lean_object* v_00_u03b1_103_, lean_object* v_cmp_104_){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRioSlice___closed__0);
return v___f_105_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRioSlice___boxed(lean_object* v_00_u03b1_106_, lean_object* v_cmp_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Std_TreeSet_Raw_instSliceableRioSlice(v_00_u03b1_106_, v_cmp_107_);
lean_dec_ref(v_cmp_107_);
return v_res_108_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__rio___auto__1(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_109_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRciSlice___auto__1(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___lam__0(lean_object* v_carrier_111_, lean_object* v_range_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v_carrier_111_);
lean_ctor_set(v___x_113_, 1, v_range_112_);
return v___x_113_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0(void){
_start:
{
lean_object* v___f_114_; 
v___f_114_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRciSlice___lam__0), 2, 0);
return v___f_114_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice(lean_object* v_00_u03b1_115_, lean_object* v_cmp_116_){
_start:
{
lean_object* v___f_117_; 
v___f_117_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRciSlice___closed__0);
return v___f_117_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRciSlice___boxed(lean_object* v_00_u03b1_118_, lean_object* v_cmp_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Std_TreeSet_Raw_instSliceableRciSlice(v_00_u03b1_118_, v_cmp_119_);
lean_dec_ref(v_cmp_119_);
return v_res_120_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__rci___auto__1(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_121_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRcoSlice___auto__1(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___lam__0(lean_object* v_carrier_123_, lean_object* v_range_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v_carrier_123_);
lean_ctor_set(v___x_125_, 1, v_range_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0(void){
_start:
{
lean_object* v___f_126_; 
v___f_126_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRcoSlice___lam__0), 2, 0);
return v___f_126_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice(lean_object* v_00_u03b1_127_, lean_object* v_cmp_128_){
_start:
{
lean_object* v___f_129_; 
v___f_129_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRcoSlice___closed__0);
return v___f_129_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRcoSlice___boxed(lean_object* v_00_u03b1_130_, lean_object* v_cmp_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Std_TreeSet_Raw_instSliceableRcoSlice(v_00_u03b1_130_, v_cmp_131_);
lean_dec_ref(v_cmp_131_);
return v_res_132_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__rco___auto__1(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_133_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRccSlice___auto__1(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___lam__0(lean_object* v_carrier_135_, lean_object* v_range_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_carrier_135_);
lean_ctor_set(v___x_137_, 1, v_range_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0(void){
_start:
{
lean_object* v___f_138_; 
v___f_138_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRccSlice___lam__0), 2, 0);
return v___f_138_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice(lean_object* v_00_u03b1_139_, lean_object* v_cmp_140_){
_start:
{
lean_object* v___f_141_; 
v___f_141_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRccSlice___closed__0);
return v___f_141_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRccSlice___boxed(lean_object* v_00_u03b1_142_, lean_object* v_cmp_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Std_TreeSet_Raw_instSliceableRccSlice(v_00_u03b1_142_, v_cmp_143_);
lean_dec_ref(v_cmp_143_);
return v_res_144_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__rcc___auto__1(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_145_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRoiSlice___auto__1(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___lam__0(lean_object* v_carrier_147_, lean_object* v_range_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v_carrier_147_);
lean_ctor_set(v___x_149_, 1, v_range_148_);
return v___x_149_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0(void){
_start:
{
lean_object* v___f_150_; 
v___f_150_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRoiSlice___lam__0), 2, 0);
return v___f_150_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice(lean_object* v_00_u03b1_151_, lean_object* v_cmp_152_){
_start:
{
lean_object* v___f_153_; 
v___f_153_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRoiSlice___closed__0);
return v___f_153_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRoiSlice___boxed(lean_object* v_00_u03b1_154_, lean_object* v_cmp_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_TreeSet_Raw_instSliceableRoiSlice(v_00_u03b1_154_, v_cmp_155_);
lean_dec_ref(v_cmp_155_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__roi___auto__1(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_157_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRocSlice___auto__1(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___lam__0(lean_object* v_carrier_159_, lean_object* v_range_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v_carrier_159_);
lean_ctor_set(v___x_161_, 1, v_range_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0(void){
_start:
{
lean_object* v___f_162_; 
v___f_162_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRocSlice___lam__0), 2, 0);
return v___f_162_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice(lean_object* v_00_u03b1_163_, lean_object* v_cmp_164_){
_start:
{
lean_object* v___f_165_; 
v___f_165_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRocSlice___closed__0);
return v___f_165_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRocSlice___boxed(lean_object* v_00_u03b1_166_, lean_object* v_cmp_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Std_TreeSet_Raw_instSliceableRocSlice(v_00_u03b1_166_, v_cmp_167_);
lean_dec_ref(v_cmp_167_);
return v_res_168_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__roc___auto__1(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_169_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRooSlice___auto__1(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___lam__0(lean_object* v_carrier_171_, lean_object* v_range_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_173_, 0, v_carrier_171_);
lean_ctor_set(v___x_173_, 1, v_range_172_);
return v___x_173_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0(void){
_start:
{
lean_object* v___f_174_; 
v___f_174_ = lean_alloc_closure((void*)(l_Std_TreeSet_Raw_instSliceableRooSlice___lam__0), 2, 0);
return v___f_174_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice(lean_object* v_00_u03b1_175_, lean_object* v_cmp_176_){
_start:
{
lean_object* v___f_177_; 
v___f_177_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0, &l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0_once, _init_l_Std_TreeSet_Raw_instSliceableRooSlice___closed__0);
return v___f_177_;
}
}
LEAN_EXPORT lean_object* l_Std_TreeSet_Raw_instSliceableRooSlice___boxed(lean_object* v_00_u03b1_178_, lean_object* v_cmp_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Std_TreeSet_Raw_instSliceableRooSlice(v_00_u03b1_178_, v_cmp_179_);
lean_dec_ref(v_cmp_179_);
return v_res_180_;
}
}
static lean_object* _init_l_Std_TreeSet_Raw_toList__roo___auto__1(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26, &l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26_once, _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1___closed__26);
return v___x_181_;
}
}
lean_object* runtime_initialize_Std_Data_TreeMap_Raw_Slice(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeSet_Raw_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Data_TreeSet_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Data_TreeMap_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeSet_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Data_TreeSet_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRiiSlice___auto__1);
l_Std_TreeSet_Raw_toList__rii___auto__1 = _init_l_Std_TreeSet_Raw_toList__rii___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__rii___auto__1);
l_Std_TreeSet_Raw_instSliceableRicSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRicSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRicSlice___auto__1);
l_Std_TreeSet_Raw_toList__ric___auto__1 = _init_l_Std_TreeSet_Raw_toList__ric___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__ric___auto__1);
l_Std_TreeSet_Raw_instSliceableRioSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRioSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRioSlice___auto__1);
l_Std_TreeSet_Raw_toList__rio___auto__1 = _init_l_Std_TreeSet_Raw_toList__rio___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__rio___auto__1);
l_Std_TreeSet_Raw_instSliceableRciSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRciSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRciSlice___auto__1);
l_Std_TreeSet_Raw_toList__rci___auto__1 = _init_l_Std_TreeSet_Raw_toList__rci___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__rci___auto__1);
l_Std_TreeSet_Raw_instSliceableRcoSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRcoSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRcoSlice___auto__1);
l_Std_TreeSet_Raw_toList__rco___auto__1 = _init_l_Std_TreeSet_Raw_toList__rco___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__rco___auto__1);
l_Std_TreeSet_Raw_instSliceableRccSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRccSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRccSlice___auto__1);
l_Std_TreeSet_Raw_toList__rcc___auto__1 = _init_l_Std_TreeSet_Raw_toList__rcc___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__rcc___auto__1);
l_Std_TreeSet_Raw_instSliceableRoiSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRoiSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRoiSlice___auto__1);
l_Std_TreeSet_Raw_toList__roi___auto__1 = _init_l_Std_TreeSet_Raw_toList__roi___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__roi___auto__1);
l_Std_TreeSet_Raw_instSliceableRocSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRocSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRocSlice___auto__1);
l_Std_TreeSet_Raw_toList__roc___auto__1 = _init_l_Std_TreeSet_Raw_toList__roc___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__roc___auto__1);
l_Std_TreeSet_Raw_instSliceableRooSlice___auto__1 = _init_l_Std_TreeSet_Raw_instSliceableRooSlice___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_instSliceableRooSlice___auto__1);
l_Std_TreeSet_Raw_toList__roo___auto__1 = _init_l_Std_TreeSet_Raw_toList__roo___auto__1();
lean_mark_persistent(l_Std_TreeSet_Raw_toList__roo___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_TreeMap_Raw_Slice(uint8_t builtin);
lean_object* initialize_Std_Data_TreeSet_Raw_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_TreeSet_Raw_Slice(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_TreeMap_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeSet_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeSet_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Data_TreeSet_Raw_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Data_TreeSet_Raw_Slice(builtin);
}
#ifdef __cplusplus
}
#endif
