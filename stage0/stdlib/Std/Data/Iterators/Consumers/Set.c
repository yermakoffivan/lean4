// Lean compiler output
// Module: Std.Data.Iterators.Consumers.Set
// Imports: public import Std.Data.Iterators.Consumers.Monadic.Set public import Init.Data.Iterators.Consumers.Total
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
uint8_t l_Std_DTreeMap_Internal_Impl_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Iter_toHashSet___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toHashSet___redArg___closed__0;
static lean_once_cell_t l_Std_Iter_toHashSet___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toHashSet___redArg___closed__1;
static lean_once_cell_t l_Std_Iter_toHashSet___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toHashSet___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__0;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__1;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__2;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__3;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__4;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__5;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__6;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__7;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__8;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__9;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__10;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__11;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__12;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__13;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__14;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__15;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__16;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__17;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__18;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__19;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__20;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__21;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__22;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__23;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__24;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__25;
static lean_once_cell_t l_Std_Iter_toTreeSet___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Iter_toTreeSet___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___auto__1;
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet___auto__1;
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___auto__1;
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet___auto__1;
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg___lam__0(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_f_3_, lean_object* v_x_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_apply_1(v_f_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_x1_8_, lean_object* v_x2_9_, lean_object* v_x3_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
v___x_12_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_6_, v_inst_7_, v_x3_10_, v_x1_8_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_Std_Iter_toHashSet___redArg___closed__0(void){
_start:
{
lean_object* v___f_14_; 
v___f_14_ = lean_alloc_closure((void*)(l_Std_Iter_toHashSet___redArg___lam__0), 4, 0);
return v___f_14_;
}
}
static lean_object* _init_l_Std_Iter_toHashSet___redArg___closed__1(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_box(0);
v___x_16_ = lean_unsigned_to_nat(16u);
v___x_17_ = lean_mk_array(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Iter_toHashSet___redArg___closed__2(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__1, &l_Std_Iter_toHashSet___redArg___closed__1_once, _init_l_Std_Iter_toHashSet___redArg___closed__1);
v___x_19_ = lean_unsigned_to_nat(0u);
v___x_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___redArg(lean_object* v_inst_21_, lean_object* v_inst_22_, lean_object* v_inst_23_, lean_object* v_it_24_){
_start:
{
lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___f_25_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_26_ = lean_alloc_closure((void*)(l_Std_Iter_toHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_26_, 0, v_inst_21_);
lean_closure_set(v___f_26_, 1, v_inst_22_);
v___x_27_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_28_ = lean_apply_6(v_inst_23_, v___f_25_, lean_box(0), lean_box(0), v_it_24_, v___x_27_, v___f_26_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet(lean_object* v_00_u03b1_29_, lean_object* v_00_u03b2_30_, lean_object* v_inst_31_, lean_object* v_inst_32_, lean_object* v_inst_33_, lean_object* v_inst_34_, lean_object* v_it_35_){
_start:
{
lean_object* v___f_36_; lean_object* v___f_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___f_36_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_37_ = lean_alloc_closure((void*)(l_Std_Iter_toHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_37_, 0, v_inst_31_);
lean_closure_set(v___f_37_, 1, v_inst_32_);
v___x_38_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_39_ = lean_apply_6(v_inst_34_, v___f_36_, lean_box(0), lean_box(0), v_it_35_, v___x_38_, v___f_37_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toHashSet___boxed(lean_object* v_00_u03b1_40_, lean_object* v_00_u03b2_41_, lean_object* v_inst_42_, lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_it_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Std_Iter_toHashSet(v_00_u03b1_40_, v_00_u03b2_41_, v_inst_42_, v_inst_43_, v_inst_44_, v_inst_45_, v_it_46_);
lean_dec(v_inst_44_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet___redArg(lean_object* v_inst_48_, lean_object* v_inst_49_, lean_object* v_inst_50_, lean_object* v_it_51_){
_start:
{
lean_object* v___f_52_; lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___f_52_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_53_ = lean_alloc_closure((void*)(l_Std_Iter_toHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_53_, 0, v_inst_48_);
lean_closure_set(v___f_53_, 1, v_inst_49_);
v___x_54_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_55_ = lean_apply_6(v_inst_50_, v___f_52_, lean_box(0), lean_box(0), v_it_51_, v___x_54_, v___f_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet(lean_object* v_00_u03b1_56_, lean_object* v_00_u03b2_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_inst_60_, lean_object* v_inst_61_, lean_object* v_inst_62_, lean_object* v_it_63_){
_start:
{
lean_object* v___f_64_; lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___f_64_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_65_ = lean_alloc_closure((void*)(l_Std_Iter_toHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_65_, 0, v_inst_58_);
lean_closure_set(v___f_65_, 1, v_inst_59_);
v___x_66_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_67_ = lean_apply_6(v_inst_62_, v___f_64_, lean_box(0), lean_box(0), v_it_63_, v___x_66_, v___f_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toHashSet___boxed(lean_object* v_00_u03b1_68_, lean_object* v_00_u03b2_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_inst_74_, lean_object* v_it_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Std_Iter_Total_toHashSet(v_00_u03b1_68_, v_00_u03b2_69_, v_inst_70_, v_inst_71_, v_inst_72_, v_inst_73_, v_inst_74_, v_it_75_);
lean_dec(v_inst_72_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___redArg___lam__1(lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_x1_79_, lean_object* v_x2_80_, lean_object* v_x3_81_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_box(0);
v___x_83_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v_inst_77_, v_inst_78_, v_x3_81_, v_x1_79_, v___x_82_);
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_it_88_){
_start:
{
lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___f_89_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_90_ = lean_alloc_closure((void*)(l_Std_Iter_toExtHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_90_, 0, v_inst_85_);
lean_closure_set(v___f_90_, 1, v_inst_86_);
v___x_91_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_92_ = lean_apply_6(v_inst_87_, v___f_89_, lean_box(0), lean_box(0), v_it_88_, v___x_91_, v___f_90_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet(lean_object* v_00_u03b1_93_, lean_object* v_00_u03b2_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_inst_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_it_101_){
_start:
{
lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___f_102_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_103_ = lean_alloc_closure((void*)(l_Std_Iter_toExtHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_103_, 0, v_inst_95_);
lean_closure_set(v___f_103_, 1, v_inst_96_);
v___x_104_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_105_ = lean_apply_6(v_inst_100_, v___f_102_, lean_box(0), lean_box(0), v_it_101_, v___x_104_, v___f_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtHashSet___boxed(lean_object* v_00_u03b1_106_, lean_object* v_00_u03b2_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_it_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Std_Iter_toExtHashSet(v_00_u03b1_106_, v_00_u03b2_107_, v_inst_108_, v_inst_109_, v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_it_114_);
lean_dec(v_inst_112_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet___redArg(lean_object* v_inst_116_, lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_it_119_){
_start:
{
lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___f_120_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_121_ = lean_alloc_closure((void*)(l_Std_Iter_toExtHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_121_, 0, v_inst_116_);
lean_closure_set(v___f_121_, 1, v_inst_117_);
v___x_122_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_123_ = lean_apply_6(v_inst_118_, v___f_120_, lean_box(0), lean_box(0), v_it_119_, v___x_122_, v___f_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet(lean_object* v_00_u03b1_124_, lean_object* v_00_u03b2_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_it_133_){
_start:
{
lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___f_134_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_135_ = lean_alloc_closure((void*)(l_Std_Iter_toExtHashSet___redArg___lam__1), 5, 2);
lean_closure_set(v___f_135_, 0, v_inst_126_);
lean_closure_set(v___f_135_, 1, v_inst_127_);
v___x_136_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__2, &l_Std_Iter_toHashSet___redArg___closed__2_once, _init_l_Std_Iter_toHashSet___redArg___closed__2);
v___x_137_ = lean_apply_6(v_inst_132_, v___f_134_, lean_box(0), lean_box(0), v_it_133_, v___x_136_, v___f_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtHashSet___boxed(lean_object* v_00_u03b1_138_, lean_object* v_00_u03b2_139_, lean_object* v_inst_140_, lean_object* v_inst_141_, lean_object* v_inst_142_, lean_object* v_inst_143_, lean_object* v_inst_144_, lean_object* v_inst_145_, lean_object* v_inst_146_, lean_object* v_it_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Std_Iter_Total_toExtHashSet(v_00_u03b1_138_, v_00_u03b2_139_, v_inst_140_, v_inst_141_, v_inst_142_, v_inst_143_, v_inst_144_, v_inst_145_, v_inst_146_, v_it_147_);
lean_dec(v_inst_144_);
return v_res_148_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__0(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_149_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__1(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_150_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__2(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_151_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__3(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_152_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__4(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_153_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__3, &l_Std_Iter_toTreeSet___auto__1___closed__3_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__3);
v___x_154_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__2, &l_Std_Iter_toTreeSet___auto__1___closed__2_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__2);
v___x_155_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__1, &l_Std_Iter_toTreeSet___auto__1___closed__1_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__1);
v___x_156_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__0, &l_Std_Iter_toTreeSet___auto__1___closed__0_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__0);
v___x_157_ = l_Lean_Name_mkStr4(v___x_156_, v___x_155_, v___x_154_, v___x_153_);
return v___x_157_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__5(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_mk_empty_array_with_capacity(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__6(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_160_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__7(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__6, &l_Std_Iter_toTreeSet___auto__1___closed__6_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__6);
v___x_162_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__2, &l_Std_Iter_toTreeSet___auto__1___closed__2_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__2);
v___x_163_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__1, &l_Std_Iter_toTreeSet___auto__1___closed__1_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__1);
v___x_164_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__0, &l_Std_Iter_toTreeSet___auto__1___closed__0_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__0);
v___x_165_ = l_Lean_Name_mkStr4(v___x_164_, v___x_163_, v___x_162_, v___x_161_);
return v___x_165_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__8(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_166_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__9(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__8, &l_Std_Iter_toTreeSet___auto__1___closed__8_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__8);
v___x_168_ = l_Lean_Name_mkStr1(v___x_167_);
return v___x_168_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__10(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_169_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__11(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_170_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__10, &l_Std_Iter_toTreeSet___auto__1___closed__10_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__10);
v___x_171_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__2, &l_Std_Iter_toTreeSet___auto__1___closed__2_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__2);
v___x_172_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__1, &l_Std_Iter_toTreeSet___auto__1___closed__1_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__1);
v___x_173_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__0, &l_Std_Iter_toTreeSet___auto__1___closed__0_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__0);
v___x_174_ = l_Lean_Name_mkStr4(v___x_173_, v___x_172_, v___x_171_, v___x_170_);
return v___x_174_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__12(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__10, &l_Std_Iter_toTreeSet___auto__1___closed__10_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__10);
v___x_176_ = l_Lean_mkAtom(v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__13(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__12, &l_Std_Iter_toTreeSet___auto__1___closed__12_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__12);
v___x_178_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__5, &l_Std_Iter_toTreeSet___auto__1___closed__5_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__5);
v___x_179_ = lean_array_push(v___x_178_, v___x_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__14(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_mk_string_unchecked("compare", 7, 7);
return v___x_180_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__15(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__14, &l_Std_Iter_toTreeSet___auto__1___closed__14_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__14);
v___x_182_ = lean_string_utf8_byte_size(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__16(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_183_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__15, &l_Std_Iter_toTreeSet___auto__1___closed__15_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__15);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__14, &l_Std_Iter_toTreeSet___auto__1___closed__14_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__14);
v___x_186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v___x_184_);
lean_ctor_set(v___x_186_, 2, v___x_183_);
return v___x_186_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__17(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__14, &l_Std_Iter_toTreeSet___auto__1___closed__14_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__14);
v___x_188_ = l_Lean_Name_mkStr1(v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__18(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_189_ = lean_box(0);
v___x_190_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__17, &l_Std_Iter_toTreeSet___auto__1___closed__17_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__17);
v___x_191_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__16, &l_Std_Iter_toTreeSet___auto__1___closed__16_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__16);
v___x_192_ = lean_box(2);
v___x_193_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_191_);
lean_ctor_set(v___x_193_, 2, v___x_190_);
lean_ctor_set(v___x_193_, 3, v___x_189_);
return v___x_193_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__19(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__18, &l_Std_Iter_toTreeSet___auto__1___closed__18_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__18);
v___x_195_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__13, &l_Std_Iter_toTreeSet___auto__1___closed__13_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__13);
v___x_196_ = lean_array_push(v___x_195_, v___x_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__20(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_197_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__19, &l_Std_Iter_toTreeSet___auto__1___closed__19_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__19);
v___x_198_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__11, &l_Std_Iter_toTreeSet___auto__1___closed__11_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__11);
v___x_199_ = lean_box(2);
v___x_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
lean_ctor_set(v___x_200_, 2, v___x_197_);
return v___x_200_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__21(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__20, &l_Std_Iter_toTreeSet___auto__1___closed__20_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__20);
v___x_202_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__5, &l_Std_Iter_toTreeSet___auto__1___closed__5_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__5);
v___x_203_ = lean_array_push(v___x_202_, v___x_201_);
return v___x_203_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__22(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_204_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__21, &l_Std_Iter_toTreeSet___auto__1___closed__21_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__21);
v___x_205_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__9, &l_Std_Iter_toTreeSet___auto__1___closed__9_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__9);
v___x_206_ = lean_box(2);
v___x_207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
lean_ctor_set(v___x_207_, 2, v___x_204_);
return v___x_207_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__23(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__22, &l_Std_Iter_toTreeSet___auto__1___closed__22_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__22);
v___x_209_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__5, &l_Std_Iter_toTreeSet___auto__1___closed__5_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__5);
v___x_210_ = lean_array_push(v___x_209_, v___x_208_);
return v___x_210_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__24(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_211_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__23, &l_Std_Iter_toTreeSet___auto__1___closed__23_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__23);
v___x_212_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__7, &l_Std_Iter_toTreeSet___auto__1___closed__7_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__7);
v___x_213_ = lean_box(2);
v___x_214_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
lean_ctor_set(v___x_214_, 2, v___x_211_);
return v___x_214_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__25(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__24, &l_Std_Iter_toTreeSet___auto__1___closed__24_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__24);
v___x_216_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__5, &l_Std_Iter_toTreeSet___auto__1___closed__5_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__5);
v___x_217_ = lean_array_push(v___x_216_, v___x_215_);
return v___x_217_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1___closed__26(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_218_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__25, &l_Std_Iter_toTreeSet___auto__1___closed__25_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__25);
v___x_219_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__4, &l_Std_Iter_toTreeSet___auto__1___closed__4_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__4);
v___x_220_ = lean_box(2);
v___x_221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_219_);
lean_ctor_set(v___x_221_, 2, v___x_218_);
return v___x_221_;
}
}
static lean_object* _init_l_Std_Iter_toTreeSet___auto__1(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__26, &l_Std_Iter_toTreeSet___auto__1___closed__26_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__26);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___redArg___lam__1(lean_object* v_cmp_223_, lean_object* v_x1_224_, lean_object* v_x2_225_, lean_object* v_x3_226_){
_start:
{
uint8_t v___x_227_; 
lean_inc(v_x3_226_);
lean_inc(v_x1_224_);
lean_inc_ref(v_cmp_223_);
v___x_227_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v_cmp_223_, v_x1_224_, v_x3_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
v___x_229_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v_cmp_223_, v_x1_224_, v___x_228_, v_x3_226_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
else
{
lean_object* v___x_231_; 
lean_dec(v_x1_224_);
lean_dec_ref(v_cmp_223_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v_x3_226_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___redArg(lean_object* v_inst_232_, lean_object* v_it_233_, lean_object* v_cmp_234_){
_start:
{
lean_object* v___f_235_; lean_object* v___f_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___f_235_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_236_ = lean_alloc_closure((void*)(l_Std_Iter_toTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_236_, 0, v_cmp_234_);
v___x_237_ = lean_box(1);
v___x_238_ = lean_apply_6(v_inst_232_, v___f_235_, lean_box(0), lean_box(0), v_it_233_, v___x_237_, v___f_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet(lean_object* v_00_u03b1_239_, lean_object* v_00_u03b2_240_, lean_object* v_inst_241_, lean_object* v_inst_242_, lean_object* v_it_243_, lean_object* v_cmp_244_){
_start:
{
lean_object* v___f_245_; lean_object* v___f_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___f_245_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_246_ = lean_alloc_closure((void*)(l_Std_Iter_toTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_246_, 0, v_cmp_244_);
v___x_247_ = lean_box(1);
v___x_248_ = lean_apply_6(v_inst_242_, v___f_245_, lean_box(0), lean_box(0), v_it_243_, v___x_247_, v___f_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toTreeSet___boxed(lean_object* v_00_u03b1_249_, lean_object* v_00_u03b2_250_, lean_object* v_inst_251_, lean_object* v_inst_252_, lean_object* v_it_253_, lean_object* v_cmp_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Iter_toTreeSet(v_00_u03b1_249_, v_00_u03b2_250_, v_inst_251_, v_inst_252_, v_it_253_, v_cmp_254_);
lean_dec(v_inst_251_);
return v_res_255_;
}
}
static lean_object* _init_l_Std_Iter_Total_toTreeSet___auto__1(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__26, &l_Std_Iter_toTreeSet___auto__1___closed__26_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__26);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet___redArg(lean_object* v_inst_257_, lean_object* v_it_258_, lean_object* v_cmp_259_){
_start:
{
lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___f_260_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_261_ = lean_alloc_closure((void*)(l_Std_Iter_toTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_261_, 0, v_cmp_259_);
v___x_262_ = lean_box(1);
v___x_263_ = lean_apply_6(v_inst_257_, v___f_260_, lean_box(0), lean_box(0), v_it_258_, v___x_262_, v___f_261_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_inst_268_, lean_object* v_it_269_, lean_object* v_cmp_270_){
_start:
{
lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___f_271_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_272_ = lean_alloc_closure((void*)(l_Std_Iter_toTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_272_, 0, v_cmp_270_);
v___x_273_ = lean_box(1);
v___x_274_ = lean_apply_6(v_inst_268_, v___f_271_, lean_box(0), lean_box(0), v_it_269_, v___x_273_, v___f_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toTreeSet___boxed(lean_object* v_00_u03b1_275_, lean_object* v_00_u03b2_276_, lean_object* v_inst_277_, lean_object* v_inst_278_, lean_object* v_inst_279_, lean_object* v_it_280_, lean_object* v_cmp_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Std_Iter_Total_toTreeSet(v_00_u03b1_275_, v_00_u03b2_276_, v_inst_277_, v_inst_278_, v_inst_279_, v_it_280_, v_cmp_281_);
lean_dec(v_inst_277_);
return v_res_282_;
}
}
static lean_object* _init_l_Std_Iter_toExtTreeSet___auto__1(void){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__26, &l_Std_Iter_toTreeSet___auto__1___closed__26_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__26);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___redArg___lam__1(lean_object* v_cmp_284_, lean_object* v_x1_285_, lean_object* v_x2_286_, lean_object* v_x3_287_){
_start:
{
uint8_t v___x_288_; 
lean_inc(v_x3_287_);
lean_inc(v_x1_285_);
lean_inc_ref(v_cmp_284_);
v___x_288_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v_cmp_284_, v_x1_285_, v_x3_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_box(0);
v___x_290_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v_cmp_284_, v_x1_285_, v___x_289_, v_x3_287_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
else
{
lean_object* v___x_292_; 
lean_dec(v_x1_285_);
lean_dec_ref(v_cmp_284_);
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v_x3_287_);
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___redArg(lean_object* v_inst_293_, lean_object* v_it_294_, lean_object* v_cmp_295_){
_start:
{
lean_object* v___f_296_; lean_object* v___f_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___f_296_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_297_ = lean_alloc_closure((void*)(l_Std_Iter_toExtTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_297_, 0, v_cmp_295_);
v___x_298_ = lean_box(1);
v___x_299_ = lean_apply_6(v_inst_293_, v___f_296_, lean_box(0), lean_box(0), v_it_294_, v___x_298_, v___f_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet(lean_object* v_00_u03b1_300_, lean_object* v_00_u03b2_301_, lean_object* v_inst_302_, lean_object* v_inst_303_, lean_object* v_it_304_, lean_object* v_cmp_305_, lean_object* v_inst_306_){
_start:
{
lean_object* v___f_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___f_307_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_308_ = lean_alloc_closure((void*)(l_Std_Iter_toExtTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_308_, 0, v_cmp_305_);
v___x_309_ = lean_box(1);
v___x_310_ = lean_apply_6(v_inst_303_, v___f_307_, lean_box(0), lean_box(0), v_it_304_, v___x_309_, v___f_308_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toExtTreeSet___boxed(lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_it_315_, lean_object* v_cmp_316_, lean_object* v_inst_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Std_Iter_toExtTreeSet(v_00_u03b1_311_, v_00_u03b2_312_, v_inst_313_, v_inst_314_, v_it_315_, v_cmp_316_, v_inst_317_);
lean_dec(v_inst_313_);
return v_res_318_;
}
}
static lean_object* _init_l_Std_Iter_Total_toExtTreeSet___auto__1(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_obj_once(&l_Std_Iter_toTreeSet___auto__1___closed__26, &l_Std_Iter_toTreeSet___auto__1___closed__26_once, _init_l_Std_Iter_toTreeSet___auto__1___closed__26);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet___redArg(lean_object* v_inst_320_, lean_object* v_it_321_, lean_object* v_cmp_322_){
_start:
{
lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___f_323_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_324_ = lean_alloc_closure((void*)(l_Std_Iter_toExtTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_324_, 0, v_cmp_322_);
v___x_325_ = lean_box(1);
v___x_326_ = lean_apply_6(v_inst_320_, v___f_323_, lean_box(0), lean_box(0), v_it_321_, v___x_325_, v___f_324_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet(lean_object* v_00_u03b1_327_, lean_object* v_00_u03b2_328_, lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_inst_331_, lean_object* v_it_332_, lean_object* v_cmp_333_, lean_object* v_inst_334_){
_start:
{
lean_object* v___f_335_; lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___f_335_ = lean_obj_once(&l_Std_Iter_toHashSet___redArg___closed__0, &l_Std_Iter_toHashSet___redArg___closed__0_once, _init_l_Std_Iter_toHashSet___redArg___closed__0);
v___f_336_ = lean_alloc_closure((void*)(l_Std_Iter_toExtTreeSet___redArg___lam__1), 4, 1);
lean_closure_set(v___f_336_, 0, v_cmp_333_);
v___x_337_ = lean_box(1);
v___x_338_ = lean_apply_6(v_inst_331_, v___f_335_, lean_box(0), lean_box(0), v_it_332_, v___x_337_, v___f_336_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Total_toExtTreeSet___boxed(lean_object* v_00_u03b1_339_, lean_object* v_00_u03b2_340_, lean_object* v_inst_341_, lean_object* v_inst_342_, lean_object* v_inst_343_, lean_object* v_it_344_, lean_object* v_cmp_345_, lean_object* v_inst_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Std_Iter_Total_toExtTreeSet(v_00_u03b1_339_, v_00_u03b2_340_, v_inst_341_, v_inst_342_, v_inst_343_, v_it_344_, v_cmp_345_, v_inst_346_);
lean_dec(v_inst_341_);
return v_res_347_;
}
}
lean_object* runtime_initialize_Std_Data_Iterators_Consumers_Monadic_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Total(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Data_Iterators_Consumers_Set(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Data_Iterators_Consumers_Monadic_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Total(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Data_Iterators_Consumers_Set(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Iter_toTreeSet___auto__1 = _init_l_Std_Iter_toTreeSet___auto__1();
lean_mark_persistent(l_Std_Iter_toTreeSet___auto__1);
l_Std_Iter_Total_toTreeSet___auto__1 = _init_l_Std_Iter_Total_toTreeSet___auto__1();
lean_mark_persistent(l_Std_Iter_Total_toTreeSet___auto__1);
l_Std_Iter_toExtTreeSet___auto__1 = _init_l_Std_Iter_toExtTreeSet___auto__1();
lean_mark_persistent(l_Std_Iter_toExtTreeSet___auto__1);
l_Std_Iter_Total_toExtTreeSet___auto__1 = _init_l_Std_Iter_Total_toExtTreeSet___auto__1();
lean_mark_persistent(l_Std_Iter_Total_toExtTreeSet___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_Iterators_Consumers_Monadic_Set(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Total(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_Iterators_Consumers_Set(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_Iterators_Consumers_Monadic_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Total(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_Iterators_Consumers_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Data_Iterators_Consumers_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Data_Iterators_Consumers_Set(builtin);
}
#ifdef __cplusplus
}
#endif
