// Lean compiler output
// Module: Init.Data.Array.Set
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_once_cell_t l_Array_set___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__0;
static lean_once_cell_t l_Array_set___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__1;
static lean_once_cell_t l_Array_set___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__2;
static lean_once_cell_t l_Array_set___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__3;
static lean_once_cell_t l_Array_set___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__4;
static lean_once_cell_t l_Array_set___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__5;
static lean_once_cell_t l_Array_set___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__6;
static lean_once_cell_t l_Array_set___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__7;
static lean_once_cell_t l_Array_set___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__8;
static lean_once_cell_t l_Array_set___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__9;
static lean_once_cell_t l_Array_set___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__10;
static lean_once_cell_t l_Array_set___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__11;
static lean_once_cell_t l_Array_set___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__12;
static lean_once_cell_t l_Array_set___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__13;
static lean_once_cell_t l_Array_set___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__14;
static lean_once_cell_t l_Array_set___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__15;
static lean_once_cell_t l_Array_set___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__16;
static lean_once_cell_t l_Array_set___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__17;
static lean_once_cell_t l_Array_set___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__18;
static lean_once_cell_t l_Array_set___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__19;
static lean_once_cell_t l_Array_set___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__20;
static lean_once_cell_t l_Array_set___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_set___auto__1___closed__21;
LEAN_EXPORT lean_object* l_Array_set___auto__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_setIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_setIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_setIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_setIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_set_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Array_set___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Array_set___auto__1___closed__3, &l_Array_set___auto__1___closed__3_once, _init_l_Array_set___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_Array_set___auto__1___closed__2, &l_Array_set___auto__1___closed__2_once, _init_l_Array_set___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_Array_set___auto__1___closed__1, &l_Array_set___auto__1___closed__1_once, _init_l_Array_set___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_Array_set___auto__1___closed__0, &l_Array_set___auto__1___closed__0_once, _init_l_Array_set___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Array_set___auto__1___closed__6, &l_Array_set___auto__1___closed__6_once, _init_l_Array_set___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_Array_set___auto__1___closed__2, &l_Array_set___auto__1___closed__2_once, _init_l_Array_set___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_Array_set___auto__1___closed__1, &l_Array_set___auto__1___closed__1_once, _init_l_Array_set___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_Array_set___auto__1___closed__0, &l_Array_set___auto__1___closed__0_once, _init_l_Array_set___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Array_set___auto__1___closed__8, &l_Array_set___auto__1___closed__8_once, _init_l_Array_set___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("tacticGet_elem_tactic", 21, 21);
return v___x_21_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Array_set___auto__1___closed__10, &l_Array_set___auto__1___closed__10_once, _init_l_Array_set___auto__1___closed__10);
v___x_23_ = l_Lean_Name_mkStr1(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__12(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_mk_string_unchecked("get_elem_tactic", 15, 15);
return v___x_24_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__13(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&l_Array_set___auto__1___closed__12, &l_Array_set___auto__1___closed__12_once, _init_l_Array_set___auto__1___closed__12);
v___x_26_ = l_Lean_mkAtom(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__14(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l_Array_set___auto__1___closed__13, &l_Array_set___auto__1___closed__13_once, _init_l_Array_set___auto__1___closed__13);
v___x_28_ = lean_obj_once(&l_Array_set___auto__1___closed__5, &l_Array_set___auto__1___closed__5_once, _init_l_Array_set___auto__1___closed__5);
v___x_29_ = lean_array_push(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__15(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = lean_obj_once(&l_Array_set___auto__1___closed__14, &l_Array_set___auto__1___closed__14_once, _init_l_Array_set___auto__1___closed__14);
v___x_31_ = lean_obj_once(&l_Array_set___auto__1___closed__11, &l_Array_set___auto__1___closed__11_once, _init_l_Array_set___auto__1___closed__11);
v___x_32_ = lean_box(2);
v___x_33_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
lean_ctor_set(v___x_33_, 2, v___x_30_);
return v___x_33_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_obj_once(&l_Array_set___auto__1___closed__15, &l_Array_set___auto__1___closed__15_once, _init_l_Array_set___auto__1___closed__15);
v___x_35_ = lean_obj_once(&l_Array_set___auto__1___closed__5, &l_Array_set___auto__1___closed__5_once, _init_l_Array_set___auto__1___closed__5);
v___x_36_ = lean_array_push(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__17(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_37_ = lean_obj_once(&l_Array_set___auto__1___closed__16, &l_Array_set___auto__1___closed__16_once, _init_l_Array_set___auto__1___closed__16);
v___x_38_ = lean_obj_once(&l_Array_set___auto__1___closed__9, &l_Array_set___auto__1___closed__9_once, _init_l_Array_set___auto__1___closed__9);
v___x_39_ = lean_box(2);
v___x_40_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set(v___x_40_, 2, v___x_37_);
return v___x_40_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__18(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_obj_once(&l_Array_set___auto__1___closed__17, &l_Array_set___auto__1___closed__17_once, _init_l_Array_set___auto__1___closed__17);
v___x_42_ = lean_obj_once(&l_Array_set___auto__1___closed__5, &l_Array_set___auto__1___closed__5_once, _init_l_Array_set___auto__1___closed__5);
v___x_43_ = lean_array_push(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__19(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_44_ = lean_obj_once(&l_Array_set___auto__1___closed__18, &l_Array_set___auto__1___closed__18_once, _init_l_Array_set___auto__1___closed__18);
v___x_45_ = lean_obj_once(&l_Array_set___auto__1___closed__7, &l_Array_set___auto__1___closed__7_once, _init_l_Array_set___auto__1___closed__7);
v___x_46_ = lean_box(2);
v___x_47_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_45_);
lean_ctor_set(v___x_47_, 2, v___x_44_);
return v___x_47_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__20(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l_Array_set___auto__1___closed__19, &l_Array_set___auto__1___closed__19_once, _init_l_Array_set___auto__1___closed__19);
v___x_49_ = lean_obj_once(&l_Array_set___auto__1___closed__5, &l_Array_set___auto__1___closed__5_once, _init_l_Array_set___auto__1___closed__5);
v___x_50_ = lean_array_push(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Array_set___auto__1___closed__21(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = lean_obj_once(&l_Array_set___auto__1___closed__20, &l_Array_set___auto__1___closed__20_once, _init_l_Array_set___auto__1___closed__20);
v___x_52_ = lean_obj_once(&l_Array_set___auto__1___closed__4, &l_Array_set___auto__1___closed__4_once, _init_l_Array_set___auto__1___closed__4);
v___x_53_ = lean_box(2);
v___x_54_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
lean_ctor_set(v___x_54_, 2, v___x_51_);
return v___x_54_;
}
}
static lean_object* _init_l_Array_set___auto__1(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l_Array_set___auto__1___closed__21, &l_Array_set___auto__1___closed__21_once, _init_l_Array_set___auto__1___closed__21);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Array_set___boxed(lean_object* v_00_u03b1_61_, lean_object* v_xs_62_, lean_object* v_i_63_, lean_object* v_v_64_, lean_object* v_h_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = lean_array_fset(v_xs_62_, v_i_63_, v_v_64_);
lean_dec(v_i_63_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Array_setIfInBounds___redArg(lean_object* v_xs_67_, lean_object* v_i_68_, lean_object* v_v_69_){
_start:
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = lean_array_get_size(v_xs_67_);
v___x_71_ = lean_nat_dec_lt(v_i_68_, v___x_70_);
if (v___x_71_ == 0)
{
lean_dec(v_v_69_);
return v_xs_67_;
}
else
{
lean_object* v___x_72_; 
v___x_72_ = lean_array_fset(v_xs_67_, v_i_68_, v_v_69_);
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l_Array_setIfInBounds___redArg___boxed(lean_object* v_xs_73_, lean_object* v_i_74_, lean_object* v_v_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Array_setIfInBounds___redArg(v_xs_73_, v_i_74_, v_v_75_);
lean_dec(v_i_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Array_setIfInBounds(lean_object* v_00_u03b1_77_, lean_object* v_xs_78_, lean_object* v_i_79_, lean_object* v_v_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = lean_array_get_size(v_xs_78_);
v___x_82_ = lean_nat_dec_lt(v_i_79_, v___x_81_);
if (v___x_82_ == 0)
{
lean_dec(v_v_80_);
return v_xs_78_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = lean_array_fset(v_xs_78_, v_i_79_, v_v_80_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l_Array_setIfInBounds___boxed(lean_object* v_00_u03b1_84_, lean_object* v_xs_85_, lean_object* v_i_86_, lean_object* v_v_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Array_setIfInBounds(v_00_u03b1_84_, v_xs_85_, v_i_86_, v_v_87_);
lean_dec(v_i_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Array_set_x21___boxed(lean_object* v_00_u03b1_93_, lean_object* v_xs_94_, lean_object* v_i_95_, lean_object* v_v_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lean_array_set(v_xs_94_, v_i_95_, v_v_96_);
lean_dec(v_i_95_);
return v_res_97_;
}
}
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Set(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Array_set___auto__1 = _init_l_Array_set___auto__1();
lean_mark_persistent(l_Array_set___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Set(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Set(builtin);
}
#ifdef __cplusplus
}
#endif
