// Lean compiler output
// Module: Init.Data.Array.MinMax
// Imports: public import Init.Data.Array.Lemmas import Init.Data.List.MinMax public import Init.Data.Order.Classes import Init.Data.Array.Bootstrap import Init.Data.Array.DecidableEq import Init.Data.List.TakeDrop import Init.Data.Order.Lemmas
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_min___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_min___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__0;
static lean_once_cell_t l_Array_min___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__1;
static lean_once_cell_t l_Array_min___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__2;
static lean_once_cell_t l_Array_min___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__3;
static lean_once_cell_t l_Array_min___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__4;
static lean_once_cell_t l_Array_min___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__5;
static lean_once_cell_t l_Array_min___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__6;
static lean_once_cell_t l_Array_min___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__7;
static lean_once_cell_t l_Array_min___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__8;
static lean_once_cell_t l_Array_min___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_min___redArg___closed__9;
LEAN_EXPORT lean_object* l_Array_min___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_min(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_min_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_min_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_max___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_max(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_max_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_max_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_min___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x1_2_, lean_object* v_x2_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_inst_1_, v_x1_2_, v_x2_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__0(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_5_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__1(void){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_6_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__2(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_7_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__3(void){
_start:
{
lean_object* v___f_8_; 
v___f_8_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_8_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__4(void){
_start:
{
lean_object* v___f_9_; 
v___f_9_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_9_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__5(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_10_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__6(void){
_start:
{
lean_object* v___f_11_; 
v___f_11_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_11_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__7(void){
_start:
{
lean_object* v___f_12_; lean_object* v___f_13_; lean_object* v___x_14_; 
v___f_12_ = lean_obj_once(&l_Array_min___redArg___closed__1, &l_Array_min___redArg___closed__1_once, _init_l_Array_min___redArg___closed__1);
v___f_13_ = lean_obj_once(&l_Array_min___redArg___closed__0, &l_Array_min___redArg___closed__0_once, _init_l_Array_min___redArg___closed__0);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___f_13_);
lean_ctor_set(v___x_14_, 1, v___f_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__8(void){
_start:
{
lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___f_17_; lean_object* v___f_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___f_15_ = lean_obj_once(&l_Array_min___redArg___closed__5, &l_Array_min___redArg___closed__5_once, _init_l_Array_min___redArg___closed__5);
v___f_16_ = lean_obj_once(&l_Array_min___redArg___closed__4, &l_Array_min___redArg___closed__4_once, _init_l_Array_min___redArg___closed__4);
v___f_17_ = lean_obj_once(&l_Array_min___redArg___closed__3, &l_Array_min___redArg___closed__3_once, _init_l_Array_min___redArg___closed__3);
v___f_18_ = lean_obj_once(&l_Array_min___redArg___closed__2, &l_Array_min___redArg___closed__2_once, _init_l_Array_min___redArg___closed__2);
v___x_19_ = lean_obj_once(&l_Array_min___redArg___closed__7, &l_Array_min___redArg___closed__7_once, _init_l_Array_min___redArg___closed__7);
v___x_20_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
lean_ctor_set(v___x_20_, 1, v___f_18_);
lean_ctor_set(v___x_20_, 2, v___f_17_);
lean_ctor_set(v___x_20_, 3, v___f_16_);
lean_ctor_set(v___x_20_, 4, v___f_15_);
return v___x_20_;
}
}
static lean_object* _init_l_Array_min___redArg___closed__9(void){
_start:
{
lean_object* v___f_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___f_21_ = lean_obj_once(&l_Array_min___redArg___closed__6, &l_Array_min___redArg___closed__6_once, _init_l_Array_min___redArg___closed__6);
v___x_22_ = lean_obj_once(&l_Array_min___redArg___closed__8, &l_Array_min___redArg___closed__8_once, _init_l_Array_min___redArg___closed__8);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___f_21_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Array_min___redArg(lean_object* v_inst_24_, lean_object* v_arr_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = lean_array_fget(v_arr_25_, v___x_26_);
v___x_28_ = lean_unsigned_to_nat(1u);
v___x_29_ = lean_array_get_size(v_arr_25_);
v___x_30_ = lean_obj_once(&l_Array_min___redArg___closed__9, &l_Array_min___redArg___closed__9_once, _init_l_Array_min___redArg___closed__9);
v___x_31_ = lean_nat_dec_lt(v___x_28_, v___x_29_);
if (v___x_31_ == 0)
{
lean_dec_ref(v_arr_25_);
lean_dec(v_inst_24_);
return v___x_27_;
}
else
{
lean_object* v___f_32_; uint8_t v___x_33_; 
v___f_32_ = lean_alloc_closure((void*)(l_Array_min___redArg___lam__0), 3, 1);
lean_closure_set(v___f_32_, 0, v_inst_24_);
v___x_33_ = lean_nat_dec_le(v___x_29_, v___x_29_);
if (v___x_33_ == 0)
{
if (v___x_31_ == 0)
{
lean_dec_ref(v___f_32_);
lean_dec_ref(v_arr_25_);
return v___x_27_;
}
else
{
size_t v___x_34_; size_t v___x_35_; lean_object* v___x_36_; 
v___x_34_ = ((size_t)1ULL);
v___x_35_ = lean_usize_of_nat(v___x_29_);
v___x_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_30_, v___f_32_, v_arr_25_, v___x_34_, v___x_35_, v___x_27_);
return v___x_36_;
}
}
else
{
size_t v___x_37_; size_t v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((size_t)1ULL);
v___x_38_ = lean_usize_of_nat(v___x_29_);
v___x_39_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_30_, v___f_32_, v_arr_25_, v___x_37_, v___x_38_, v___x_27_);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_min(lean_object* v_00_u03b1_40_, lean_object* v_inst_41_, lean_object* v_arr_42_, lean_object* v_h_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Array_min___redArg(v_inst_41_, v_arr_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Array_min_x3f___redArg(lean_object* v_inst_45_, lean_object* v_arr_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_47_ = lean_array_get_size(v_arr_46_);
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = lean_nat_dec_eq(v___x_47_, v___x_48_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = l_Array_min___redArg(v_inst_45_, v_arr_46_);
v___x_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
else
{
lean_object* v___x_52_; 
lean_dec_ref(v_arr_46_);
lean_dec(v_inst_45_);
v___x_52_ = lean_box(0);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Array_min_x3f(lean_object* v_00_u03b1_53_, lean_object* v_inst_54_, lean_object* v_arr_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Array_min_x3f___redArg(v_inst_54_, v_arr_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Array_max___redArg(lean_object* v_inst_57_, lean_object* v_arr_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = lean_array_fget(v_arr_58_, v___x_59_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_array_get_size(v_arr_58_);
v___x_63_ = lean_obj_once(&l_Array_min___redArg___closed__9, &l_Array_min___redArg___closed__9_once, _init_l_Array_min___redArg___closed__9);
v___x_64_ = lean_nat_dec_lt(v___x_61_, v___x_62_);
if (v___x_64_ == 0)
{
lean_dec_ref(v_arr_58_);
lean_dec(v_inst_57_);
return v___x_60_;
}
else
{
lean_object* v___f_65_; uint8_t v___x_66_; 
v___f_65_ = lean_alloc_closure((void*)(l_Array_min___redArg___lam__0), 3, 1);
lean_closure_set(v___f_65_, 0, v_inst_57_);
v___x_66_ = lean_nat_dec_le(v___x_62_, v___x_62_);
if (v___x_66_ == 0)
{
if (v___x_64_ == 0)
{
lean_dec_ref(v___f_65_);
lean_dec_ref(v_arr_58_);
return v___x_60_;
}
else
{
size_t v___x_67_; size_t v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((size_t)1ULL);
v___x_68_ = lean_usize_of_nat(v___x_62_);
v___x_69_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_63_, v___f_65_, v_arr_58_, v___x_67_, v___x_68_, v___x_60_);
return v___x_69_;
}
}
else
{
size_t v___x_70_; size_t v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((size_t)1ULL);
v___x_71_ = lean_usize_of_nat(v___x_62_);
v___x_72_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_63_, v___f_65_, v_arr_58_, v___x_70_, v___x_71_, v___x_60_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_max(lean_object* v_00_u03b1_73_, lean_object* v_inst_74_, lean_object* v_arr_75_, lean_object* v_h_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Array_max___redArg(v_inst_74_, v_arr_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Array_max_x3f___redArg(lean_object* v_inst_78_, lean_object* v_arr_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_array_get_size(v_arr_79_);
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_nat_dec_eq(v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = l_Array_max___redArg(v_inst_78_, v_arr_79_);
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
lean_dec_ref(v_arr_79_);
lean_dec(v_inst_78_);
v___x_85_ = lean_box(0);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Array_max_x3f(lean_object* v_00_u03b1_86_, lean_object* v_inst_87_, lean_object* v_arr_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Array_max_x3f___redArg(v_inst_87_, v_arr_88_);
return v___x_89_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MinMax(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Classes(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_MinMax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Classes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_MinMax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_MinMax(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Classes(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_MinMax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Classes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_MinMax(builtin);
}
#ifdef __cplusplus
}
#endif
