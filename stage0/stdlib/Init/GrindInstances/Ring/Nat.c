// Lean compiler output
// Module: Init.GrindInstances.Ring.Nat
// Imports: public import Init.Grind.Ordered.Ring import Init.Data.Nat.Lemmas import Init.Omega
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
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
lean_object* l_instPowNat___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instHAdd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instSMulOfMul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instOfNatNat___boxed(lean_object*);
lean_object* l_instNatCastNat___lam__0___boxed(lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommSemiringNat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommSemiringNat___closed__8;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommSemiringNat;
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__2(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_instNatCastNat___lam__0___boxed), 1, 0);
return v___f_3_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___f_5_; 
v___x_4_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__1, &l_Lean_Grind_instCommSemiringNat___closed__1_once, _init_l_Lean_Grind_instCommSemiringNat___closed__1);
v___f_5_ = lean_alloc_closure((void*)(l_instSMulOfMul___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5_, 0, v___x_4_);
return v___f_5_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__4(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_closure((void*)(l_Nat_pow___boxed), 2, 0);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__5(void){
_start:
{
lean_object* v___x_7_; lean_object* v___f_8_; 
v___x_7_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__4, &l_Lean_Grind_instCommSemiringNat___closed__4_once, _init_l_Lean_Grind_instCommSemiringNat___closed__4);
v___f_8_ = lean_alloc_closure((void*)(l_instPowNat___redArg___lam__0), 3, 1);
lean_closure_set(v___f_8_, 0, v___x_7_);
return v___f_8_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__6(void){
_start:
{
lean_object* v___f_9_; lean_object* v___f_10_; 
v___f_9_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__5, &l_Lean_Grind_instCommSemiringNat___closed__5_once, _init_l_Lean_Grind_instCommSemiringNat___closed__5);
v___f_10_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_10_, 0, v___f_9_);
return v___f_10_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__7(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_closure((void*)(l_instOfNatNat___boxed), 1, 0);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat___closed__8(void){
_start:
{
lean_object* v___f_12_; lean_object* v___f_13_; lean_object* v___x_14_; lean_object* v___f_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___f_12_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__6, &l_Lean_Grind_instCommSemiringNat___closed__6_once, _init_l_Lean_Grind_instCommSemiringNat___closed__6);
v___f_13_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__3, &l_Lean_Grind_instCommSemiringNat___closed__3_once, _init_l_Lean_Grind_instCommSemiringNat___closed__3);
v___x_14_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__7, &l_Lean_Grind_instCommSemiringNat___closed__7_once, _init_l_Lean_Grind_instCommSemiringNat___closed__7);
v___f_15_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__2, &l_Lean_Grind_instCommSemiringNat___closed__2_once, _init_l_Lean_Grind_instCommSemiringNat___closed__2);
v___x_16_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__1, &l_Lean_Grind_instCommSemiringNat___closed__1_once, _init_l_Lean_Grind_instCommSemiringNat___closed__1);
v___x_17_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__0, &l_Lean_Grind_instCommSemiringNat___closed__0_once, _init_l_Lean_Grind_instCommSemiringNat___closed__0);
v___x_18_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
lean_ctor_set(v___x_18_, 2, v___f_15_);
lean_ctor_set(v___x_18_, 3, v___x_14_);
lean_ctor_set(v___x_18_, 4, v___f_13_);
lean_ctor_set(v___x_18_, 5, v___f_12_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Grind_instCommSemiringNat(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_obj_once(&l_Lean_Grind_instCommSemiringNat___closed__8, &l_Lean_Grind_instCommSemiringNat___closed__8_once, _init_l_Lean_Grind_instCommSemiringNat___closed__8);
return v___x_19_;
}
}
lean_object* runtime_initialize_Init_Grind_Ordered_Ring(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GrindInstances_Ring_Nat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ordered_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_instCommSemiringNat = _init_l_Lean_Grind_instCommSemiringNat();
lean_mark_persistent(l_Lean_Grind_instCommSemiringNat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GrindInstances_Ring_Nat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ordered_Ring(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GrindInstances_Ring_Nat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ordered_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_Ring_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GrindInstances_Ring_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GrindInstances_Ring_Nat(builtin);
}
#ifdef __cplusplus
}
#endif
