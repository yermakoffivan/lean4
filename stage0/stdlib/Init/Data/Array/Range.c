// Lean compiler output
// Module: Init.Data.Array.Range
// Imports: import all Init.Data.Array.Basic import all Init.Data.Array.OfFn public import Init.BinderPredicates public import Init.Data.Nat.Lemmas public import Init.Ext import Init.ByCases import Init.Data.Array.Count import Init.Data.Array.MapIdx import Init.Data.Array.Zip import Init.Data.List.Find import Init.Data.List.Nat.Range import Init.Data.List.Range
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__0;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__1;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__2;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__3;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__4;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__5;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__6;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__7;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__8;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__9;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__10;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__11;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__12;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__13;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__14;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__15;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__16;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__17;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__18;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__19;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__20;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__21;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__22;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__23;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__24;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__25;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__26;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__27;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__28;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__29;
static lean_once_cell_t l_Array_count__range_x27___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_count__range_x27___auto__1___closed__30;
LEAN_EXPORT lean_object* l_Array_count__range_x27___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_){
_start:
{
lean_object* v_zero_4_; uint8_t v_isZero_5_; 
v_zero_4_ = lean_unsigned_to_nat(0u);
v_isZero_5_ = lean_nat_dec_eq(v_x_1_, v_zero_4_);
if (v_isZero_5_ == 1)
{
lean_object* v___x_6_; 
lean_dec(v_h__1_2_);
v___x_6_ = lean_apply_1(v_h__2_3_, lean_box(0));
return v___x_6_;
}
else
{
lean_object* v_one_7_; lean_object* v_n_8_; lean_object* v___x_9_; 
lean_dec(v_h__2_3_);
v_one_7_ = lean_unsigned_to_nat(1u);
v_n_8_ = lean_nat_sub(v_x_1_, v_one_7_);
v___x_9_ = lean_apply_2(v_h__1_2_, v_n_8_, lean_box(0));
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___redArg___boxed(lean_object* v_x_10_, lean_object* v_h__1_11_, lean_object* v_h__2_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___redArg(v_x_10_, v_h__1_11_, v_h__2_12_);
lean_dec(v_x_10_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(lean_object* v_n_14_, lean_object* v_motive_15_, lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_h__1_18_, lean_object* v_h__2_19_){
_start:
{
lean_object* v_zero_20_; uint8_t v_isZero_21_; 
v_zero_20_ = lean_unsigned_to_nat(0u);
v_isZero_21_ = lean_nat_dec_eq(v_x_16_, v_zero_20_);
if (v_isZero_21_ == 1)
{
lean_object* v___x_22_; 
lean_dec(v_h__1_18_);
v___x_22_ = lean_apply_1(v_h__2_19_, lean_box(0));
return v___x_22_;
}
else
{
lean_object* v_one_23_; lean_object* v_n_24_; lean_object* v___x_25_; 
lean_dec(v_h__2_19_);
v_one_23_ = lean_unsigned_to_nat(1u);
v_n_24_ = lean_nat_sub(v_x_16_, v_one_23_);
v___x_25_ = lean_apply_2(v_h__1_18_, v_n_24_, lean_box(0));
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter___boxed(lean_object* v_n_26_, lean_object* v_motive_27_, lean_object* v_x_28_, lean_object* v_x_29_, lean_object* v_h__1_30_, lean_object* v_h__2_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l___private_Init_Data_Array_Range_0__Array_ofFn_go_match__1_splitter(v_n_26_, v_motive_27_, v_x_28_, v_x_29_, v_h__1_30_, v_h__2_31_);
lean_dec(v_x_28_);
lean_dec(v_n_26_);
return v_res_32_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__0(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_33_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__1(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_34_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__2(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_35_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__3(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_36_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__4(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_37_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__3, &l_Array_count__range_x27___auto__1___closed__3_once, _init_l_Array_count__range_x27___auto__1___closed__3);
v___x_38_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__2, &l_Array_count__range_x27___auto__1___closed__2_once, _init_l_Array_count__range_x27___auto__1___closed__2);
v___x_39_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__1, &l_Array_count__range_x27___auto__1___closed__1_once, _init_l_Array_count__range_x27___auto__1___closed__1);
v___x_40_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__0, &l_Array_count__range_x27___auto__1___closed__0_once, _init_l_Array_count__range_x27___auto__1___closed__0);
v___x_41_ = l_Lean_Name_mkStr4(v___x_40_, v___x_39_, v___x_38_, v___x_37_);
return v___x_41_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__5(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(0u);
v___x_43_ = lean_mk_empty_array_with_capacity(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__6(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_44_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__7(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_45_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__6, &l_Array_count__range_x27___auto__1___closed__6_once, _init_l_Array_count__range_x27___auto__1___closed__6);
v___x_46_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__2, &l_Array_count__range_x27___auto__1___closed__2_once, _init_l_Array_count__range_x27___auto__1___closed__2);
v___x_47_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__1, &l_Array_count__range_x27___auto__1___closed__1_once, _init_l_Array_count__range_x27___auto__1___closed__1);
v___x_48_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__0, &l_Array_count__range_x27___auto__1___closed__0_once, _init_l_Array_count__range_x27___auto__1___closed__0);
v___x_49_ = l_Lean_Name_mkStr4(v___x_48_, v___x_47_, v___x_46_, v___x_45_);
return v___x_49_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__8(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_50_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__9(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__8, &l_Array_count__range_x27___auto__1___closed__8_once, _init_l_Array_count__range_x27___auto__1___closed__8);
v___x_52_ = l_Lean_Name_mkStr1(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__10(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked("simp", 4, 4);
return v___x_53_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__11(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_54_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__10, &l_Array_count__range_x27___auto__1___closed__10_once, _init_l_Array_count__range_x27___auto__1___closed__10);
v___x_55_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__2, &l_Array_count__range_x27___auto__1___closed__2_once, _init_l_Array_count__range_x27___auto__1___closed__2);
v___x_56_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__1, &l_Array_count__range_x27___auto__1___closed__1_once, _init_l_Array_count__range_x27___auto__1___closed__1);
v___x_57_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__0, &l_Array_count__range_x27___auto__1___closed__0_once, _init_l_Array_count__range_x27___auto__1___closed__0);
v___x_58_ = l_Lean_Name_mkStr4(v___x_57_, v___x_56_, v___x_55_, v___x_54_);
return v___x_58_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__12(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__10, &l_Array_count__range_x27___auto__1___closed__10_once, _init_l_Array_count__range_x27___auto__1___closed__10);
v___x_60_ = l_Lean_mkAtom(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__13(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__12, &l_Array_count__range_x27___auto__1___closed__12_once, _init_l_Array_count__range_x27___auto__1___closed__12);
v___x_62_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_63_ = lean_array_push(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__14(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked("optConfig", 9, 9);
return v___x_64_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__15(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__14, &l_Array_count__range_x27___auto__1___closed__14_once, _init_l_Array_count__range_x27___auto__1___closed__14);
v___x_66_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__2, &l_Array_count__range_x27___auto__1___closed__2_once, _init_l_Array_count__range_x27___auto__1___closed__2);
v___x_67_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__1, &l_Array_count__range_x27___auto__1___closed__1_once, _init_l_Array_count__range_x27___auto__1___closed__1);
v___x_68_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__0, &l_Array_count__range_x27___auto__1___closed__0_once, _init_l_Array_count__range_x27___auto__1___closed__0);
v___x_69_ = l_Lean_Name_mkStr4(v___x_68_, v___x_67_, v___x_66_, v___x_65_);
return v___x_69_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__16(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_71_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__9, &l_Array_count__range_x27___auto__1___closed__9_once, _init_l_Array_count__range_x27___auto__1___closed__9);
v___x_72_ = lean_box(2);
v___x_73_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__17(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__16, &l_Array_count__range_x27___auto__1___closed__16_once, _init_l_Array_count__range_x27___auto__1___closed__16);
v___x_75_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_76_ = lean_array_push(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__18(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__17, &l_Array_count__range_x27___auto__1___closed__17_once, _init_l_Array_count__range_x27___auto__1___closed__17);
v___x_78_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__15, &l_Array_count__range_x27___auto__1___closed__15_once, _init_l_Array_count__range_x27___auto__1___closed__15);
v___x_79_ = lean_box(2);
v___x_80_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
lean_ctor_set(v___x_80_, 2, v___x_77_);
return v___x_80_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__19(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__18, &l_Array_count__range_x27___auto__1___closed__18_once, _init_l_Array_count__range_x27___auto__1___closed__18);
v___x_82_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__13, &l_Array_count__range_x27___auto__1___closed__13_once, _init_l_Array_count__range_x27___auto__1___closed__13);
v___x_83_ = lean_array_push(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__20(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__16, &l_Array_count__range_x27___auto__1___closed__16_once, _init_l_Array_count__range_x27___auto__1___closed__16);
v___x_85_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__19, &l_Array_count__range_x27___auto__1___closed__19_once, _init_l_Array_count__range_x27___auto__1___closed__19);
v___x_86_ = lean_array_push(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__21(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__16, &l_Array_count__range_x27___auto__1___closed__16_once, _init_l_Array_count__range_x27___auto__1___closed__16);
v___x_88_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__20, &l_Array_count__range_x27___auto__1___closed__20_once, _init_l_Array_count__range_x27___auto__1___closed__20);
v___x_89_ = lean_array_push(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__22(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__16, &l_Array_count__range_x27___auto__1___closed__16_once, _init_l_Array_count__range_x27___auto__1___closed__16);
v___x_91_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__21, &l_Array_count__range_x27___auto__1___closed__21_once, _init_l_Array_count__range_x27___auto__1___closed__21);
v___x_92_ = lean_array_push(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__23(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__16, &l_Array_count__range_x27___auto__1___closed__16_once, _init_l_Array_count__range_x27___auto__1___closed__16);
v___x_94_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__22, &l_Array_count__range_x27___auto__1___closed__22_once, _init_l_Array_count__range_x27___auto__1___closed__22);
v___x_95_ = lean_array_push(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__24(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__23, &l_Array_count__range_x27___auto__1___closed__23_once, _init_l_Array_count__range_x27___auto__1___closed__23);
v___x_97_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__11, &l_Array_count__range_x27___auto__1___closed__11_once, _init_l_Array_count__range_x27___auto__1___closed__11);
v___x_98_ = lean_box(2);
v___x_99_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_97_);
lean_ctor_set(v___x_99_, 2, v___x_96_);
return v___x_99_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__25(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__24, &l_Array_count__range_x27___auto__1___closed__24_once, _init_l_Array_count__range_x27___auto__1___closed__24);
v___x_101_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_102_ = lean_array_push(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__26(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__25, &l_Array_count__range_x27___auto__1___closed__25_once, _init_l_Array_count__range_x27___auto__1___closed__25);
v___x_104_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__9, &l_Array_count__range_x27___auto__1___closed__9_once, _init_l_Array_count__range_x27___auto__1___closed__9);
v___x_105_ = lean_box(2);
v___x_106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
lean_ctor_set(v___x_106_, 2, v___x_103_);
return v___x_106_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__27(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__26, &l_Array_count__range_x27___auto__1___closed__26_once, _init_l_Array_count__range_x27___auto__1___closed__26);
v___x_108_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_109_ = lean_array_push(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__28(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__27, &l_Array_count__range_x27___auto__1___closed__27_once, _init_l_Array_count__range_x27___auto__1___closed__27);
v___x_111_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__7, &l_Array_count__range_x27___auto__1___closed__7_once, _init_l_Array_count__range_x27___auto__1___closed__7);
v___x_112_ = lean_box(2);
v___x_113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
lean_ctor_set(v___x_113_, 2, v___x_110_);
return v___x_113_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__29(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__28, &l_Array_count__range_x27___auto__1___closed__28_once, _init_l_Array_count__range_x27___auto__1___closed__28);
v___x_115_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__5, &l_Array_count__range_x27___auto__1___closed__5_once, _init_l_Array_count__range_x27___auto__1___closed__5);
v___x_116_ = lean_array_push(v___x_115_, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1___closed__30(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__29, &l_Array_count__range_x27___auto__1___closed__29_once, _init_l_Array_count__range_x27___auto__1___closed__29);
v___x_118_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__4, &l_Array_count__range_x27___auto__1___closed__4_once, _init_l_Array_count__range_x27___auto__1___closed__4);
v___x_119_ = lean_box(2);
v___x_120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Array_count__range_x27___auto__1(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Array_count__range_x27___auto__1___closed__30, &l_Array_count__range_x27___auto__1___closed__30_once, _init_l_Array_count__range_x27___auto__1___closed__30);
return v___x_121_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_OfFn(uint8_t builtin);
lean_object* runtime_initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Ext(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Count(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Zip(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Find(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Range(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Range(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Find(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Range(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Array_count__range_x27___auto__1 = _init_l_Array_count__range_x27___auto__1();
lean_mark_persistent(l_Array_count__range_x27___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_OfFn(uint8_t builtin);
lean_object* initialize_Init_BinderPredicates(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Ext(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Count(uint8_t builtin);
lean_object* initialize_Init_Data_Array_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Zip(uint8_t builtin);
lean_object* initialize_Init_Data_List_Find(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_Range(uint8_t builtin);
lean_object* initialize_Init_Data_List_Range(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Range(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderPredicates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Find(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Range(builtin);
}
#ifdef __cplusplus
}
#endif
