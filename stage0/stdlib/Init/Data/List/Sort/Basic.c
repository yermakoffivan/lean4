// Lean compiler output
// Module: Init.Data.List.Sort.Basic
// Imports: public import Init.Ext import Init.Data.List.Nat.TakeDrop import Init.Data.List.TakeDrop import Init.Data.Nat.Lemmas import Init.Omega
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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_List_splitAt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
static lean_once_cell_t l_List_merge___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__0;
static lean_once_cell_t l_List_merge___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__1;
static lean_once_cell_t l_List_merge___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__2;
static lean_once_cell_t l_List_merge___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__3;
static lean_once_cell_t l_List_merge___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__4;
static lean_once_cell_t l_List_merge___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__5;
static lean_once_cell_t l_List_merge___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__6;
static lean_once_cell_t l_List_merge___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__7;
static lean_once_cell_t l_List_merge___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__8;
static lean_once_cell_t l_List_merge___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__9;
static lean_once_cell_t l_List_merge___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__10;
static lean_once_cell_t l_List_merge___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__11;
static lean_once_cell_t l_List_merge___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__12;
static lean_once_cell_t l_List_merge___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__13;
static lean_once_cell_t l_List_merge___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__14;
static lean_once_cell_t l_List_merge___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__15;
static lean_once_cell_t l_List_merge___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__16;
static lean_once_cell_t l_List_merge___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__17;
static lean_once_cell_t l_List_merge___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__18;
static lean_once_cell_t l_List_merge___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__19;
static lean_once_cell_t l_List_merge___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__20;
static lean_once_cell_t l_List_merge___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__21;
static lean_once_cell_t l_List_merge___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__22;
static lean_once_cell_t l_List_merge___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__23;
static lean_once_cell_t l_List_merge___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__24;
static lean_once_cell_t l_List_merge___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__25;
static lean_once_cell_t l_List_merge___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__26;
static lean_once_cell_t l_List_merge___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__27;
static lean_once_cell_t l_List_merge___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__28;
static lean_once_cell_t l_List_merge___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__29;
static lean_once_cell_t l_List_merge___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__30;
static lean_once_cell_t l_List_merge___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__31;
static lean_once_cell_t l_List_merge___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__32;
static lean_once_cell_t l_List_merge___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__33;
static lean_once_cell_t l_List_merge___auto__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__34;
static lean_once_cell_t l_List_merge___auto__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__35;
static lean_once_cell_t l_List_merge___auto__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__36;
static lean_once_cell_t l_List_merge___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__37;
static lean_once_cell_t l_List_merge___auto__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__38;
static lean_once_cell_t l_List_merge___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__39;
static lean_once_cell_t l_List_merge___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__40;
static lean_once_cell_t l_List_merge___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__41;
static lean_once_cell_t l_List_merge___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__42;
static lean_once_cell_t l_List_merge___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__43;
static lean_once_cell_t l_List_merge___auto__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__44;
static lean_once_cell_t l_List_merge___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__45;
static lean_once_cell_t l_List_merge___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__46;
static lean_once_cell_t l_List_merge___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__47;
static lean_once_cell_t l_List_merge___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__48;
static lean_once_cell_t l_List_merge___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__49;
static lean_once_cell_t l_List_merge___auto__1___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__50;
static lean_once_cell_t l_List_merge___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__51;
static lean_once_cell_t l_List_merge___auto__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__52;
static lean_once_cell_t l_List_merge___auto__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__53;
static lean_once_cell_t l_List_merge___auto__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__54;
static lean_once_cell_t l_List_merge___auto__1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__55;
static lean_once_cell_t l_List_merge___auto__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__56;
static lean_once_cell_t l_List_merge___auto__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__57;
static lean_once_cell_t l_List_merge___auto__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_merge___auto__1___closed__58;
LEAN_EXPORT lean_object* l_List_merge___auto__1;
LEAN_EXPORT lean_object* l_List_merge___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_merge(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_merge_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_merge_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mergeSort___auto__1;
LEAN_EXPORT lean_object* l_List_mergeSort___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mergeSort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_mergeSort_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_mergeSort_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_zipIdxLE___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdxLE___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_zipIdxLE(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdxLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_List_merge___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_List_merge___auto__1___closed__3, &l_List_merge___auto__1___closed__3_once, _init_l_List_merge___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_List_merge___auto__1___closed__2, &l_List_merge___auto__1___closed__2_once, _init_l_List_merge___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_List_merge___auto__1___closed__1, &l_List_merge___auto__1___closed__1_once, _init_l_List_merge___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_List_merge___auto__1___closed__0, &l_List_merge___auto__1___closed__0_once, _init_l_List_merge___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_List_merge___auto__1___closed__6, &l_List_merge___auto__1___closed__6_once, _init_l_List_merge___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_List_merge___auto__1___closed__2, &l_List_merge___auto__1___closed__2_once, _init_l_List_merge___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_List_merge___auto__1___closed__1, &l_List_merge___auto__1___closed__1_once, _init_l_List_merge___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_List_merge___auto__1___closed__0, &l_List_merge___auto__1___closed__0_once, _init_l_List_merge___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_List_merge___auto__1___closed__8, &l_List_merge___auto__1___closed__8_once, _init_l_List_merge___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_21_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_List_merge___auto__1___closed__10, &l_List_merge___auto__1___closed__10_once, _init_l_List_merge___auto__1___closed__10);
v___x_23_ = lean_obj_once(&l_List_merge___auto__1___closed__2, &l_List_merge___auto__1___closed__2_once, _init_l_List_merge___auto__1___closed__2);
v___x_24_ = lean_obj_once(&l_List_merge___auto__1___closed__1, &l_List_merge___auto__1___closed__1_once, _init_l_List_merge___auto__1___closed__1);
v___x_25_ = lean_obj_once(&l_List_merge___auto__1___closed__0, &l_List_merge___auto__1___closed__0_once, _init_l_List_merge___auto__1___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_List_merge___auto__1___closed__10, &l_List_merge___auto__1___closed__10_once, _init_l_List_merge___auto__1___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_List_merge___auto__1___closed__12, &l_List_merge___auto__1___closed__12_once, _init_l_List_merge___auto__1___closed__12);
v___x_30_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_32_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__15(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("fun", 3, 3);
return v___x_33_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_34_ = lean_obj_once(&l_List_merge___auto__1___closed__15, &l_List_merge___auto__1___closed__15_once, _init_l_List_merge___auto__1___closed__15);
v___x_35_ = lean_obj_once(&l_List_merge___auto__1___closed__14, &l_List_merge___auto__1___closed__14_once, _init_l_List_merge___auto__1___closed__14);
v___x_36_ = lean_obj_once(&l_List_merge___auto__1___closed__1, &l_List_merge___auto__1___closed__1_once, _init_l_List_merge___auto__1___closed__1);
v___x_37_ = lean_obj_once(&l_List_merge___auto__1___closed__0, &l_List_merge___auto__1___closed__0_once, _init_l_List_merge___auto__1___closed__0);
v___x_38_ = l_Lean_Name_mkStr4(v___x_37_, v___x_36_, v___x_35_, v___x_34_);
return v___x_38_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__17(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_List_merge___auto__1___closed__15, &l_List_merge___auto__1___closed__15_once, _init_l_List_merge___auto__1___closed__15);
v___x_40_ = l_Lean_mkAtom(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__18(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_obj_once(&l_List_merge___auto__1___closed__17, &l_List_merge___auto__1___closed__17_once, _init_l_List_merge___auto__1___closed__17);
v___x_42_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_43_ = lean_array_push(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__19(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("basicFun", 8, 8);
return v___x_44_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__20(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_45_ = lean_obj_once(&l_List_merge___auto__1___closed__19, &l_List_merge___auto__1___closed__19_once, _init_l_List_merge___auto__1___closed__19);
v___x_46_ = lean_obj_once(&l_List_merge___auto__1___closed__14, &l_List_merge___auto__1___closed__14_once, _init_l_List_merge___auto__1___closed__14);
v___x_47_ = lean_obj_once(&l_List_merge___auto__1___closed__1, &l_List_merge___auto__1___closed__1_once, _init_l_List_merge___auto__1___closed__1);
v___x_48_ = lean_obj_once(&l_List_merge___auto__1___closed__0, &l_List_merge___auto__1___closed__0_once, _init_l_List_merge___auto__1___closed__0);
v___x_49_ = l_Lean_Name_mkStr4(v___x_48_, v___x_47_, v___x_46_, v___x_45_);
return v___x_49_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__21(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("a", 1, 1);
return v___x_50_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__22(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&l_List_merge___auto__1___closed__21, &l_List_merge___auto__1___closed__21_once, _init_l_List_merge___auto__1___closed__21);
v___x_52_ = lean_string_utf8_byte_size(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__23(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = lean_obj_once(&l_List_merge___auto__1___closed__22, &l_List_merge___auto__1___closed__22_once, _init_l_List_merge___auto__1___closed__22);
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = lean_obj_once(&l_List_merge___auto__1___closed__21, &l_List_merge___auto__1___closed__21_once, _init_l_List_merge___auto__1___closed__21);
v___x_56_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
lean_ctor_set(v___x_56_, 2, v___x_53_);
return v___x_56_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__24(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_List_merge___auto__1___closed__21, &l_List_merge___auto__1___closed__21_once, _init_l_List_merge___auto__1___closed__21);
v___x_58_ = l_Lean_Name_mkStr1(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__25(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_59_ = lean_box(0);
v___x_60_ = lean_obj_once(&l_List_merge___auto__1___closed__24, &l_List_merge___auto__1___closed__24_once, _init_l_List_merge___auto__1___closed__24);
v___x_61_ = lean_obj_once(&l_List_merge___auto__1___closed__23, &l_List_merge___auto__1___closed__23_once, _init_l_List_merge___auto__1___closed__23);
v___x_62_ = lean_box(2);
v___x_63_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
lean_ctor_set(v___x_63_, 2, v___x_60_);
lean_ctor_set(v___x_63_, 3, v___x_59_);
return v___x_63_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__26(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_List_merge___auto__1___closed__25, &l_List_merge___auto__1___closed__25_once, _init_l_List_merge___auto__1___closed__25);
v___x_65_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_66_ = lean_array_push(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__27(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_mk_string_unchecked("b", 1, 1);
return v___x_67_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__28(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_List_merge___auto__1___closed__27, &l_List_merge___auto__1___closed__27_once, _init_l_List_merge___auto__1___closed__27);
v___x_69_ = lean_string_utf8_byte_size(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__29(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_List_merge___auto__1___closed__28, &l_List_merge___auto__1___closed__28_once, _init_l_List_merge___auto__1___closed__28);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_obj_once(&l_List_merge___auto__1___closed__27, &l_List_merge___auto__1___closed__27_once, _init_l_List_merge___auto__1___closed__27);
v___x_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__30(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&l_List_merge___auto__1___closed__27, &l_List_merge___auto__1___closed__27_once, _init_l_List_merge___auto__1___closed__27);
v___x_75_ = l_Lean_Name_mkStr1(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__31(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_76_ = lean_box(0);
v___x_77_ = lean_obj_once(&l_List_merge___auto__1___closed__30, &l_List_merge___auto__1___closed__30_once, _init_l_List_merge___auto__1___closed__30);
v___x_78_ = lean_obj_once(&l_List_merge___auto__1___closed__29, &l_List_merge___auto__1___closed__29_once, _init_l_List_merge___auto__1___closed__29);
v___x_79_ = lean_box(2);
v___x_80_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
lean_ctor_set(v___x_80_, 2, v___x_77_);
lean_ctor_set(v___x_80_, 3, v___x_76_);
return v___x_80_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__32(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_List_merge___auto__1___closed__31, &l_List_merge___auto__1___closed__31_once, _init_l_List_merge___auto__1___closed__31);
v___x_82_ = lean_obj_once(&l_List_merge___auto__1___closed__26, &l_List_merge___auto__1___closed__26_once, _init_l_List_merge___auto__1___closed__26);
v___x_83_ = lean_array_push(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__33(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_obj_once(&l_List_merge___auto__1___closed__32, &l_List_merge___auto__1___closed__32_once, _init_l_List_merge___auto__1___closed__32);
v___x_85_ = lean_obj_once(&l_List_merge___auto__1___closed__9, &l_List_merge___auto__1___closed__9_once, _init_l_List_merge___auto__1___closed__9);
v___x_86_ = lean_box(2);
v___x_87_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_84_);
return v___x_87_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__34(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = lean_obj_once(&l_List_merge___auto__1___closed__33, &l_List_merge___auto__1___closed__33_once, _init_l_List_merge___auto__1___closed__33);
v___x_89_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_90_ = lean_array_push(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__35(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_92_ = lean_obj_once(&l_List_merge___auto__1___closed__9, &l_List_merge___auto__1___closed__9_once, _init_l_List_merge___auto__1___closed__9);
v___x_93_ = lean_box(2);
v___x_94_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v___x_92_);
lean_ctor_set(v___x_94_, 2, v___x_91_);
return v___x_94_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__36(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l_List_merge___auto__1___closed__35, &l_List_merge___auto__1___closed__35_once, _init_l_List_merge___auto__1___closed__35);
v___x_96_ = lean_obj_once(&l_List_merge___auto__1___closed__34, &l_List_merge___auto__1___closed__34_once, _init_l_List_merge___auto__1___closed__34);
v___x_97_ = lean_array_push(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__37(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_mk_string_unchecked("=>", 2, 2);
return v___x_98_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__38(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l_List_merge___auto__1___closed__37, &l_List_merge___auto__1___closed__37_once, _init_l_List_merge___auto__1___closed__37);
v___x_100_ = l_Lean_mkAtom(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__39(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_List_merge___auto__1___closed__38, &l_List_merge___auto__1___closed__38_once, _init_l_List_merge___auto__1___closed__38);
v___x_102_ = lean_obj_once(&l_List_merge___auto__1___closed__36, &l_List_merge___auto__1___closed__36_once, _init_l_List_merge___auto__1___closed__36);
v___x_103_ = lean_array_push(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__40(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("term_≤_", 9, 7);
return v___x_104_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__41(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_List_merge___auto__1___closed__40, &l_List_merge___auto__1___closed__40_once, _init_l_List_merge___auto__1___closed__40);
v___x_106_ = l_Lean_Name_mkStr1(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__42(void){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lean_mk_string_unchecked("≤", 3, 1);
return v___x_107_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__43(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = lean_obj_once(&l_List_merge___auto__1___closed__42, &l_List_merge___auto__1___closed__42_once, _init_l_List_merge___auto__1___closed__42);
v___x_109_ = l_Lean_mkAtom(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__44(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&l_List_merge___auto__1___closed__43, &l_List_merge___auto__1___closed__43_once, _init_l_List_merge___auto__1___closed__43);
v___x_111_ = lean_obj_once(&l_List_merge___auto__1___closed__26, &l_List_merge___auto__1___closed__26_once, _init_l_List_merge___auto__1___closed__26);
v___x_112_ = lean_array_push(v___x_111_, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__45(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_obj_once(&l_List_merge___auto__1___closed__31, &l_List_merge___auto__1___closed__31_once, _init_l_List_merge___auto__1___closed__31);
v___x_114_ = lean_obj_once(&l_List_merge___auto__1___closed__44, &l_List_merge___auto__1___closed__44_once, _init_l_List_merge___auto__1___closed__44);
v___x_115_ = lean_array_push(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__46(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_116_ = lean_obj_once(&l_List_merge___auto__1___closed__45, &l_List_merge___auto__1___closed__45_once, _init_l_List_merge___auto__1___closed__45);
v___x_117_ = lean_obj_once(&l_List_merge___auto__1___closed__41, &l_List_merge___auto__1___closed__41_once, _init_l_List_merge___auto__1___closed__41);
v___x_118_ = lean_box(2);
v___x_119_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
lean_ctor_set(v___x_119_, 2, v___x_116_);
return v___x_119_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__47(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l_List_merge___auto__1___closed__46, &l_List_merge___auto__1___closed__46_once, _init_l_List_merge___auto__1___closed__46);
v___x_121_ = lean_obj_once(&l_List_merge___auto__1___closed__39, &l_List_merge___auto__1___closed__39_once, _init_l_List_merge___auto__1___closed__39);
v___x_122_ = lean_array_push(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__48(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_123_ = lean_obj_once(&l_List_merge___auto__1___closed__47, &l_List_merge___auto__1___closed__47_once, _init_l_List_merge___auto__1___closed__47);
v___x_124_ = lean_obj_once(&l_List_merge___auto__1___closed__20, &l_List_merge___auto__1___closed__20_once, _init_l_List_merge___auto__1___closed__20);
v___x_125_ = lean_box(2);
v___x_126_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
lean_ctor_set(v___x_126_, 2, v___x_123_);
return v___x_126_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__49(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = lean_obj_once(&l_List_merge___auto__1___closed__48, &l_List_merge___auto__1___closed__48_once, _init_l_List_merge___auto__1___closed__48);
v___x_128_ = lean_obj_once(&l_List_merge___auto__1___closed__18, &l_List_merge___auto__1___closed__18_once, _init_l_List_merge___auto__1___closed__18);
v___x_129_ = lean_array_push(v___x_128_, v___x_127_);
return v___x_129_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__50(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_130_ = lean_obj_once(&l_List_merge___auto__1___closed__49, &l_List_merge___auto__1___closed__49_once, _init_l_List_merge___auto__1___closed__49);
v___x_131_ = lean_obj_once(&l_List_merge___auto__1___closed__16, &l_List_merge___auto__1___closed__16_once, _init_l_List_merge___auto__1___closed__16);
v___x_132_ = lean_box(2);
v___x_133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_131_);
lean_ctor_set(v___x_133_, 2, v___x_130_);
return v___x_133_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__51(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_obj_once(&l_List_merge___auto__1___closed__50, &l_List_merge___auto__1___closed__50_once, _init_l_List_merge___auto__1___closed__50);
v___x_135_ = lean_obj_once(&l_List_merge___auto__1___closed__13, &l_List_merge___auto__1___closed__13_once, _init_l_List_merge___auto__1___closed__13);
v___x_136_ = lean_array_push(v___x_135_, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__52(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_137_ = lean_obj_once(&l_List_merge___auto__1___closed__51, &l_List_merge___auto__1___closed__51_once, _init_l_List_merge___auto__1___closed__51);
v___x_138_ = lean_obj_once(&l_List_merge___auto__1___closed__11, &l_List_merge___auto__1___closed__11_once, _init_l_List_merge___auto__1___closed__11);
v___x_139_ = lean_box(2);
v___x_140_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
lean_ctor_set(v___x_140_, 2, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__53(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = lean_obj_once(&l_List_merge___auto__1___closed__52, &l_List_merge___auto__1___closed__52_once, _init_l_List_merge___auto__1___closed__52);
v___x_142_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_143_ = lean_array_push(v___x_142_, v___x_141_);
return v___x_143_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__54(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = lean_obj_once(&l_List_merge___auto__1___closed__53, &l_List_merge___auto__1___closed__53_once, _init_l_List_merge___auto__1___closed__53);
v___x_145_ = lean_obj_once(&l_List_merge___auto__1___closed__9, &l_List_merge___auto__1___closed__9_once, _init_l_List_merge___auto__1___closed__9);
v___x_146_ = lean_box(2);
v___x_147_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
lean_ctor_set(v___x_147_, 1, v___x_145_);
lean_ctor_set(v___x_147_, 2, v___x_144_);
return v___x_147_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__55(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_obj_once(&l_List_merge___auto__1___closed__54, &l_List_merge___auto__1___closed__54_once, _init_l_List_merge___auto__1___closed__54);
v___x_149_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_150_ = lean_array_push(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__56(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_151_ = lean_obj_once(&l_List_merge___auto__1___closed__55, &l_List_merge___auto__1___closed__55_once, _init_l_List_merge___auto__1___closed__55);
v___x_152_ = lean_obj_once(&l_List_merge___auto__1___closed__7, &l_List_merge___auto__1___closed__7_once, _init_l_List_merge___auto__1___closed__7);
v___x_153_ = lean_box(2);
v___x_154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
lean_ctor_set(v___x_154_, 2, v___x_151_);
return v___x_154_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__57(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_obj_once(&l_List_merge___auto__1___closed__56, &l_List_merge___auto__1___closed__56_once, _init_l_List_merge___auto__1___closed__56);
v___x_156_ = lean_obj_once(&l_List_merge___auto__1___closed__5, &l_List_merge___auto__1___closed__5_once, _init_l_List_merge___auto__1___closed__5);
v___x_157_ = lean_array_push(v___x_156_, v___x_155_);
return v___x_157_;
}
}
static lean_object* _init_l_List_merge___auto__1___closed__58(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_158_ = lean_obj_once(&l_List_merge___auto__1___closed__57, &l_List_merge___auto__1___closed__57_once, _init_l_List_merge___auto__1___closed__57);
v___x_159_ = lean_obj_once(&l_List_merge___auto__1___closed__4, &l_List_merge___auto__1___closed__4_once, _init_l_List_merge___auto__1___closed__4);
v___x_160_ = lean_box(2);
v___x_161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
lean_ctor_set(v___x_161_, 2, v___x_158_);
return v___x_161_;
}
}
static lean_object* _init_l_List_merge___auto__1(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_List_merge___auto__1___closed__58, &l_List_merge___auto__1___closed__58_once, _init_l_List_merge___auto__1___closed__58);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_List_merge___redArg(lean_object* v_xs_163_, lean_object* v_ys_164_, lean_object* v_le_165_){
_start:
{
if (lean_obj_tag(v_xs_163_) == 0)
{
lean_dec_ref(v_le_165_);
return v_ys_164_;
}
else
{
if (lean_obj_tag(v_ys_164_) == 0)
{
lean_dec_ref(v_le_165_);
return v_xs_163_;
}
else
{
lean_object* v_head_166_; lean_object* v_tail_167_; lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v_head_166_ = lean_ctor_get(v_xs_163_, 0);
v_tail_167_ = lean_ctor_get(v_xs_163_, 1);
v_head_168_ = lean_ctor_get(v_ys_164_, 0);
v_tail_169_ = lean_ctor_get(v_ys_164_, 1);
lean_inc_ref(v_le_165_);
lean_inc(v_head_168_);
lean_inc(v_head_166_);
v___x_170_ = lean_apply_2(v_le_165_, v_head_166_, v_head_168_);
v___x_171_ = lean_unbox(v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_179_; 
lean_inc(v_tail_169_);
lean_inc(v_head_168_);
v_isSharedCheck_179_ = !lean_is_exclusive(v_ys_164_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_180_ = lean_ctor_get(v_ys_164_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_ys_164_, 0);
lean_dec(v_unused_181_);
v___x_173_ = v_ys_164_;
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
else
{
lean_dec(v_ys_164_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = l_List_merge___redArg(v_xs_163_, v_tail_169_, v_le_165_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_head_168_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_189_; 
lean_inc(v_tail_167_);
lean_inc(v_head_166_);
v_isSharedCheck_189_ = !lean_is_exclusive(v_xs_163_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; lean_object* v_unused_191_; 
v_unused_190_ = lean_ctor_get(v_xs_163_, 1);
lean_dec(v_unused_190_);
v_unused_191_ = lean_ctor_get(v_xs_163_, 0);
lean_dec(v_unused_191_);
v___x_183_ = v_xs_163_;
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_xs_163_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_185_ = l_List_merge___redArg(v_tail_167_, v_ys_164_, v_le_165_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v___x_185_);
v___x_187_ = v___x_183_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_head_166_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_merge(lean_object* v_00_u03b1_192_, lean_object* v_xs_193_, lean_object* v_ys_194_, lean_object* v_le_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_List_merge___redArg(v_xs_193_, v_ys_194_, v_le_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_merge_match__1_splitter___redArg(lean_object* v_xs_197_, lean_object* v_ys_198_, lean_object* v_h__1_199_, lean_object* v_h__2_200_, lean_object* v_h__3_201_){
_start:
{
if (lean_obj_tag(v_xs_197_) == 0)
{
lean_object* v___x_202_; 
lean_dec(v_h__3_201_);
lean_dec(v_h__2_200_);
v___x_202_ = lean_apply_1(v_h__1_199_, v_ys_198_);
return v___x_202_;
}
else
{
lean_dec(v_h__1_199_);
if (lean_obj_tag(v_ys_198_) == 0)
{
lean_object* v___x_203_; 
lean_dec(v_h__3_201_);
v___x_203_ = lean_apply_2(v_h__2_200_, v_xs_197_, lean_box(0));
return v___x_203_;
}
else
{
lean_object* v_head_204_; lean_object* v_tail_205_; lean_object* v_head_206_; lean_object* v_tail_207_; lean_object* v___x_208_; 
lean_dec(v_h__2_200_);
v_head_204_ = lean_ctor_get(v_xs_197_, 0);
lean_inc(v_head_204_);
v_tail_205_ = lean_ctor_get(v_xs_197_, 1);
lean_inc(v_tail_205_);
lean_dec_ref(v_xs_197_);
v_head_206_ = lean_ctor_get(v_ys_198_, 0);
lean_inc(v_head_206_);
v_tail_207_ = lean_ctor_get(v_ys_198_, 1);
lean_inc(v_tail_207_);
lean_dec_ref(v_ys_198_);
v___x_208_ = lean_apply_4(v_h__3_201_, v_head_204_, v_tail_205_, v_head_206_, v_tail_207_);
return v___x_208_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_merge_match__1_splitter(lean_object* v_00_u03b1_209_, lean_object* v_motive_210_, lean_object* v_xs_211_, lean_object* v_ys_212_, lean_object* v_h__1_213_, lean_object* v_h__2_214_, lean_object* v_h__3_215_){
_start:
{
if (lean_obj_tag(v_xs_211_) == 0)
{
lean_object* v___x_216_; 
lean_dec(v_h__3_215_);
lean_dec(v_h__2_214_);
v___x_216_ = lean_apply_1(v_h__1_213_, v_ys_212_);
return v___x_216_;
}
else
{
lean_dec(v_h__1_213_);
if (lean_obj_tag(v_ys_212_) == 0)
{
lean_object* v___x_217_; 
lean_dec(v_h__3_215_);
v___x_217_ = lean_apply_2(v_h__2_214_, v_xs_211_, lean_box(0));
return v___x_217_;
}
else
{
lean_object* v_head_218_; lean_object* v_tail_219_; lean_object* v_head_220_; lean_object* v_tail_221_; lean_object* v___x_222_; 
lean_dec(v_h__2_214_);
v_head_218_ = lean_ctor_get(v_xs_211_, 0);
lean_inc(v_head_218_);
v_tail_219_ = lean_ctor_get(v_xs_211_, 1);
lean_inc(v_tail_219_);
lean_dec_ref(v_xs_211_);
v_head_220_ = lean_ctor_get(v_ys_212_, 0);
lean_inc(v_head_220_);
v_tail_221_ = lean_ctor_get(v_ys_212_, 1);
lean_inc(v_tail_221_);
lean_dec_ref(v_ys_212_);
v___x_222_ = lean_apply_4(v_h__3_215_, v_head_218_, v_tail_219_, v_head_220_, v_tail_221_);
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___redArg(lean_object* v_n_223_, lean_object* v_l_224_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v_r_228_; lean_object* v_fst_229_; lean_object* v_snd_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_add(v_n_223_, v___x_225_);
v___x_227_ = lean_nat_shiftr(v___x_226_, v___x_225_);
lean_dec(v___x_226_);
v_r_228_ = l_List_splitAt___redArg(v___x_227_, v_l_224_);
v_fst_229_ = lean_ctor_get(v_r_228_, 0);
v_snd_230_ = lean_ctor_get(v_r_228_, 1);
v_isSharedCheck_237_ = !lean_is_exclusive(v_r_228_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v_r_228_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_snd_230_);
lean_inc(v_fst_229_);
lean_dec(v_r_228_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_fst_229_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v_snd_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___redArg___boxed(lean_object* v_n_238_, lean_object* v_l_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_List_MergeSort_Internal_splitInTwo___redArg(v_n_238_, v_l_239_);
lean_dec(v_n_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo(lean_object* v_00_u03b1_241_, lean_object* v_n_242_, lean_object* v_l_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_List_MergeSort_Internal_splitInTwo___redArg(v_n_242_, v_l_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_List_MergeSort_Internal_splitInTwo___boxed(lean_object* v_00_u03b1_245_, lean_object* v_n_246_, lean_object* v_l_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_List_MergeSort_Internal_splitInTwo(v_00_u03b1_245_, v_n_246_, v_l_247_);
lean_dec(v_n_246_);
return v_res_248_;
}
}
static lean_object* _init_l_List_mergeSort___auto__1(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&l_List_merge___auto__1___closed__58, &l_List_merge___auto__1___closed__58_once, _init_l_List_merge___auto__1___closed__58);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_List_mergeSort___redArg(lean_object* v_x_250_, lean_object* v_x_251_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_dec_ref(v_x_251_);
return v_x_250_;
}
else
{
lean_object* v_tail_252_; 
v_tail_252_ = lean_ctor_get(v_x_250_, 1);
if (lean_obj_tag(v_tail_252_) == 0)
{
lean_dec_ref(v_x_251_);
return v_x_250_;
}
else
{
lean_object* v___x_253_; lean_object* v_lr_254_; lean_object* v_fst_255_; lean_object* v_snd_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_253_ = l_List_lengthTR___redArg(v_x_250_);
v_lr_254_ = l_List_MergeSort_Internal_splitInTwo___redArg(v___x_253_, v_x_250_);
lean_dec(v___x_253_);
v_fst_255_ = lean_ctor_get(v_lr_254_, 0);
lean_inc(v_fst_255_);
v_snd_256_ = lean_ctor_get(v_lr_254_, 1);
lean_inc(v_snd_256_);
lean_dec_ref(v_lr_254_);
lean_inc_ref_n(v_x_251_, 2);
v___x_257_ = l_List_mergeSort___redArg(v_fst_255_, v_x_251_);
v___x_258_ = l_List_mergeSort___redArg(v_snd_256_, v_x_251_);
v___x_259_ = l_List_merge___redArg(v___x_257_, v___x_258_, v_x_251_);
return v___x_259_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mergeSort(lean_object* v_00_u03b1_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_List_mergeSort___redArg(v_x_261_, v_x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_mergeSort_match__1_splitter___redArg(lean_object* v_x_264_, lean_object* v_x_265_, lean_object* v_h__1_266_, lean_object* v_h__2_267_, lean_object* v_h__3_268_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
lean_object* v___x_269_; 
lean_dec(v_h__3_268_);
lean_dec(v_h__2_267_);
v___x_269_ = lean_apply_1(v_h__1_266_, v_x_265_);
return v___x_269_;
}
else
{
lean_object* v_tail_270_; 
lean_dec(v_h__1_266_);
v_tail_270_ = lean_ctor_get(v_x_264_, 1);
if (lean_obj_tag(v_tail_270_) == 0)
{
lean_object* v_head_271_; lean_object* v___x_272_; 
lean_dec(v_h__3_268_);
v_head_271_ = lean_ctor_get(v_x_264_, 0);
lean_inc(v_head_271_);
lean_dec_ref(v_x_264_);
v___x_272_ = lean_apply_2(v_h__2_267_, v_head_271_, v_x_265_);
return v___x_272_;
}
else
{
lean_object* v_head_273_; lean_object* v_head_274_; lean_object* v_tail_275_; lean_object* v___x_276_; 
lean_inc_ref(v_tail_270_);
lean_dec(v_h__2_267_);
v_head_273_ = lean_ctor_get(v_x_264_, 0);
lean_inc(v_head_273_);
lean_dec_ref(v_x_264_);
v_head_274_ = lean_ctor_get(v_tail_270_, 0);
lean_inc(v_head_274_);
v_tail_275_ = lean_ctor_get(v_tail_270_, 1);
lean_inc(v_tail_275_);
lean_dec_ref(v_tail_270_);
v___x_276_ = lean_apply_4(v_h__3_268_, v_head_273_, v_head_274_, v_tail_275_, v_x_265_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Sort_Basic_0__List_mergeSort_match__1_splitter(lean_object* v_00_u03b1_277_, lean_object* v_motive_278_, lean_object* v_x_279_, lean_object* v_x_280_, lean_object* v_h__1_281_, lean_object* v_h__2_282_, lean_object* v_h__3_283_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v___x_284_; 
lean_dec(v_h__3_283_);
lean_dec(v_h__2_282_);
v___x_284_ = lean_apply_1(v_h__1_281_, v_x_280_);
return v___x_284_;
}
else
{
lean_object* v_tail_285_; 
lean_dec(v_h__1_281_);
v_tail_285_ = lean_ctor_get(v_x_279_, 1);
if (lean_obj_tag(v_tail_285_) == 0)
{
lean_object* v_head_286_; lean_object* v___x_287_; 
lean_dec(v_h__3_283_);
v_head_286_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_286_);
lean_dec_ref(v_x_279_);
v___x_287_ = lean_apply_2(v_h__2_282_, v_head_286_, v_x_280_);
return v___x_287_;
}
else
{
lean_object* v_head_288_; lean_object* v_head_289_; lean_object* v_tail_290_; lean_object* v___x_291_; 
lean_inc_ref(v_tail_285_);
lean_dec(v_h__2_282_);
v_head_288_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_288_);
lean_dec_ref(v_x_279_);
v_head_289_ = lean_ctor_get(v_tail_285_, 0);
lean_inc(v_head_289_);
v_tail_290_ = lean_ctor_get(v_tail_285_, 1);
lean_inc(v_tail_290_);
lean_dec_ref(v_tail_285_);
v___x_291_ = lean_apply_4(v_h__3_283_, v_head_288_, v_head_289_, v_tail_290_, v_x_280_);
return v___x_291_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_zipIdxLE___redArg(lean_object* v_le_292_, lean_object* v_a_293_, lean_object* v_b_294_){
_start:
{
lean_object* v_fst_295_; lean_object* v_snd_296_; lean_object* v_fst_297_; lean_object* v_snd_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v_fst_295_ = lean_ctor_get(v_a_293_, 0);
lean_inc_n(v_fst_295_, 2);
v_snd_296_ = lean_ctor_get(v_a_293_, 1);
lean_inc(v_snd_296_);
lean_dec_ref(v_a_293_);
v_fst_297_ = lean_ctor_get(v_b_294_, 0);
lean_inc_n(v_fst_297_, 2);
v_snd_298_ = lean_ctor_get(v_b_294_, 1);
lean_inc(v_snd_298_);
lean_dec_ref(v_b_294_);
lean_inc_ref(v_le_292_);
v___x_299_ = lean_apply_2(v_le_292_, v_fst_295_, v_fst_297_);
v___x_300_ = lean_unbox(v___x_299_);
if (v___x_300_ == 0)
{
uint8_t v___x_301_; 
lean_dec(v_snd_298_);
lean_dec(v_fst_297_);
lean_dec(v_snd_296_);
lean_dec(v_fst_295_);
lean_dec_ref(v_le_292_);
v___x_301_ = lean_unbox(v___x_299_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_apply_2(v_le_292_, v_fst_297_, v_fst_295_);
v___x_303_ = lean_unbox(v___x_302_);
if (v___x_303_ == 0)
{
uint8_t v___x_304_; 
lean_dec(v_snd_298_);
lean_dec(v_snd_296_);
v___x_304_ = lean_unbox(v___x_299_);
return v___x_304_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = lean_nat_dec_le(v_snd_296_, v_snd_298_);
lean_dec(v_snd_298_);
lean_dec(v_snd_296_);
return v___x_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipIdxLE___redArg___boxed(lean_object* v_le_306_, lean_object* v_a_307_, lean_object* v_b_308_){
_start:
{
uint8_t v_res_309_; lean_object* v_r_310_; 
v_res_309_ = l_List_zipIdxLE___redArg(v_le_306_, v_a_307_, v_b_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT uint8_t l_List_zipIdxLE(lean_object* v_00_u03b1_311_, lean_object* v_le_312_, lean_object* v_a_313_, lean_object* v_b_314_){
_start:
{
uint8_t v___x_315_; 
v___x_315_ = l_List_zipIdxLE___redArg(v_le_312_, v_a_313_, v_b_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_List_zipIdxLE___boxed(lean_object* v_00_u03b1_316_, lean_object* v_le_317_, lean_object* v_a_318_, lean_object* v_b_319_){
_start:
{
uint8_t v_res_320_; lean_object* v_r_321_; 
v_res_320_ = l_List_zipIdxLE(v_00_u03b1_316_, v_le_317_, v_a_318_, v_b_319_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
lean_object* runtime_initialize_Init_Ext(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_List_merge___auto__1 = _init_l_List_merge___auto__1();
lean_mark_persistent(l_List_merge___auto__1);
l_List_mergeSort___auto__1 = _init_l_List_mergeSort___auto__1();
lean_mark_persistent(l_List_mergeSort___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Ext(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Sort_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Sort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Sort_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
