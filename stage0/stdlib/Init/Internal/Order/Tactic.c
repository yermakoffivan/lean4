// Lean compiler output
// Module: Init.Internal.Order.Tactic
// Imports: public import Init.Notation
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Order_monotonicity___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__0;
static lean_once_cell_t l_Lean_Order_monotonicity___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__1;
static lean_once_cell_t l_Lean_Order_monotonicity___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__2;
static lean_once_cell_t l_Lean_Order_monotonicity___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__3;
static lean_once_cell_t l_Lean_Order_monotonicity___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__4;
static lean_once_cell_t l_Lean_Order_monotonicity___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_monotonicity___closed__5;
LEAN_EXPORT lean_object* l_Lean_Order_monotonicity;
static lean_object* _init_l_Lean_Order_monotonicity___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Order", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("monotonicity", 12, 12);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__2, &l_Lean_Order_monotonicity___closed__2_once, _init_l_Lean_Order_monotonicity___closed__2);
v___x_5_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__1, &l_Lean_Order_monotonicity___closed__1_once, _init_l_Lean_Order_monotonicity___closed__1);
v___x_6_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__0, &l_Lean_Order_monotonicity___closed__0_once, _init_l_Lean_Order_monotonicity___closed__0);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity___closed__4(void){
_start:
{
uint8_t v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = 0;
v___x_9_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__2, &l_Lean_Order_monotonicity___closed__2_once, _init_l_Lean_Order_monotonicity___closed__2);
v___x_10_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set_uint8(v___x_10_, sizeof(void*)*1, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity___closed__5(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_11_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__4, &l_Lean_Order_monotonicity___closed__4_once, _init_l_Lean_Order_monotonicity___closed__4);
v___x_12_ = lean_unsigned_to_nat(1024u);
v___x_13_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__3, &l_Lean_Order_monotonicity___closed__3_once, _init_l_Lean_Order_monotonicity___closed__3);
v___x_14_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_11_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Order_monotonicity(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_Order_monotonicity___closed__5, &l_Lean_Order_monotonicity___closed__5_once, _init_l_Lean_Order_monotonicity___closed__5);
return v___x_15_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Internal_Order_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Internal_Order_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Order_monotonicity = _init_l_Lean_Order_monotonicity();
lean_mark_persistent(l_Lean_Order_monotonicity);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Notation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Internal_Order_Tactic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Internal_Order_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Internal_Order_Tactic(builtin);
}
#ifdef __cplusplus
}
#endif
