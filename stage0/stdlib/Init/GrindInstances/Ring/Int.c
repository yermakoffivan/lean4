// Lean compiler output
// Module: Init.GrindInstances.Ring.Int
// Imports: public import Init.Grind.Ring.Basic public import Init.Data.Int.Lemmas public import Init.Data.Int.Pow import Init.Data.Int.DivMod.Lemmas import Init.Meta
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
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_instSMulOfMul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instIntCastInt___lam__0___boxed(lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_pow___boxed(lean_object*, lean_object*);
lean_object* l_instPowNat___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instHAdd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instOfNat(lean_object*);
lean_object* l_Int_ofNat___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__10;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__11;
static lean_once_cell_t l_Lean_Grind_instCommRingInt___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt___closed__12;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt___lam__0(lean_object* v_x1_1_, lean_object* v_x2_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_nat_to_int(v_x1_1_);
v___x_4_ = lean_int_mul(v___x_3_, v_x2_2_);
lean_dec(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt___lam__0___boxed(lean_object* v_x1_5_, lean_object* v_x2_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Grind_instCommRingInt___lam__0(v_x1_5_, v_x2_6_);
lean_dec(v_x2_6_);
return v_res_7_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__0(void){
_start:
{
lean_object* v___f_8_; 
v___f_8_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt___lam__0___boxed), 2, 0);
return v___f_8_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__1(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_alloc_closure((void*)(l_Int_add___boxed), 2, 0);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__2(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_closure((void*)(l_Int_mul___boxed), 2, 0);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__3(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_closure((void*)(l_Int_pow___boxed), 2, 0);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__4(void){
_start:
{
lean_object* v___x_12_; lean_object* v___f_13_; 
v___x_12_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__3, &l_Lean_Grind_instCommRingInt___closed__3_once, _init_l_Lean_Grind_instCommRingInt___closed__3);
v___f_13_ = lean_alloc_closure((void*)(l_instPowNat___redArg___lam__0), 3, 1);
lean_closure_set(v___f_13_, 0, v___x_12_);
return v___f_13_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__5(void){
_start:
{
lean_object* v___f_14_; lean_object* v___f_15_; 
v___f_14_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__4, &l_Lean_Grind_instCommRingInt___closed__4_once, _init_l_Lean_Grind_instCommRingInt___closed__4);
v___f_15_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_15_, 0, v___f_14_);
return v___f_15_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__6(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_alloc_closure((void*)(l_Int_neg___boxed), 1, 0);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__7(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_closure((void*)(l_Int_sub___boxed), 2, 0);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__8(void){
_start:
{
lean_object* v___f_18_; 
v___f_18_ = lean_alloc_closure((void*)(l_instIntCastInt___lam__0___boxed), 1, 0);
return v___f_18_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___f_20_; 
v___x_19_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__2, &l_Lean_Grind_instCommRingInt___closed__2_once, _init_l_Lean_Grind_instCommRingInt___closed__2);
v___f_20_ = lean_alloc_closure((void*)(l_instSMulOfMul___redArg___lam__0), 3, 1);
lean_closure_set(v___f_20_, 0, v___x_19_);
return v___f_20_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_alloc_closure((void*)(l_instOfNat), 1, 0);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__11(void){
_start:
{
lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___x_24_; lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___f_22_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__5, &l_Lean_Grind_instCommRingInt___closed__5_once, _init_l_Lean_Grind_instCommRingInt___closed__5);
v___f_23_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__0, &l_Lean_Grind_instCommRingInt___closed__0_once, _init_l_Lean_Grind_instCommRingInt___closed__0);
v___x_24_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__10, &l_Lean_Grind_instCommRingInt___closed__10_once, _init_l_Lean_Grind_instCommRingInt___closed__10);
v___f_25_ = lean_alloc_closure((void*)(l_Int_ofNat___boxed), 1, 0);
v___x_26_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__2, &l_Lean_Grind_instCommRingInt___closed__2_once, _init_l_Lean_Grind_instCommRingInt___closed__2);
v___x_27_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__1, &l_Lean_Grind_instCommRingInt___closed__1_once, _init_l_Lean_Grind_instCommRingInt___closed__1);
v___x_28_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
lean_ctor_set(v___x_28_, 1, v___x_26_);
lean_ctor_set(v___x_28_, 2, v___f_25_);
lean_ctor_set(v___x_28_, 3, v___x_24_);
lean_ctor_set(v___x_28_, 4, v___f_23_);
lean_ctor_set(v___x_28_, 5, v___f_22_);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt___closed__12(void){
_start:
{
lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___f_29_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__9, &l_Lean_Grind_instCommRingInt___closed__9_once, _init_l_Lean_Grind_instCommRingInt___closed__9);
v___f_30_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__8, &l_Lean_Grind_instCommRingInt___closed__8_once, _init_l_Lean_Grind_instCommRingInt___closed__8);
v___x_31_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__7, &l_Lean_Grind_instCommRingInt___closed__7_once, _init_l_Lean_Grind_instCommRingInt___closed__7);
v___x_32_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__6, &l_Lean_Grind_instCommRingInt___closed__6_once, _init_l_Lean_Grind_instCommRingInt___closed__6);
v___x_33_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__11, &l_Lean_Grind_instCommRingInt___closed__11_once, _init_l_Lean_Grind_instCommRingInt___closed__11);
v___x_34_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
lean_ctor_set(v___x_34_, 2, v___x_31_);
lean_ctor_set(v___x_34_, 3, v___f_30_);
lean_ctor_set(v___x_34_, 4, v___f_29_);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l_Lean_Grind_instCommRingInt___closed__12, &l_Lean_Grind_instCommRingInt___closed__12_once, _init_l_Lean_Grind_instCommRingInt___closed__12);
return v___x_35_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Meta(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GrindInstances_Ring_Int(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_instCommRingInt = _init_l_Lean_Grind_instCommRingInt();
lean_mark_persistent(l_Lean_Grind_instCommRingInt);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GrindInstances_Ring_Int(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GrindInstances_Ring_Int(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_Ring_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GrindInstances_Ring_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GrindInstances_Ring_Int(builtin);
}
#ifdef __cplusplus
}
#endif
