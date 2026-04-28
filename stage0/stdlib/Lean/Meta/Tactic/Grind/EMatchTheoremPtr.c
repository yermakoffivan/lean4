// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.EMatchTheoremPtr
// Imports: public import Lean.Meta.Tactic.Grind.EMatchTheorem
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
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isSameEMatchTheoremPtr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSameEMatchTheoremPtr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_hashEMatchTheoremPtr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_hashEMatchTheoremPtr___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremPtr;
static lean_once_cell_t l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremPtr;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1(lean_object* v_a_1_, lean_object* v_b_2_){
_start:
{
size_t v___x_3_; size_t v___x_4_; uint8_t v___x_5_; 
v___x_3_ = lean_ptr_addr(v_a_1_);
v___x_4_ = lean_ptr_addr(v_b_2_);
v___x_5_ = lean_usize_dec_eq(v___x_3_, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1___boxed(lean_object* v_a_6_, lean_object* v_b_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1(v_a_6_, v_b_7_);
lean_dec_ref(v_b_7_);
lean_dec_ref(v_a_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isSameEMatchTheoremPtr(lean_object* v_a_10_, lean_object* v_b_11_){
_start:
{
uint8_t v___x_12_; 
v___x_12_ = l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1(v_a_10_, v_b_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isSameEMatchTheoremPtr___boxed(lean_object* v_a_13_, lean_object* v_b_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Meta_Grind_isSameEMatchTheoremPtr(v_a_13_, v_b_14_);
lean_dec_ref(v_b_14_);
lean_dec_ref(v_a_13_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1(lean_object* v_thm_17_){
_start:
{
size_t v___x_18_; size_t v___x_19_; size_t v___x_20_; uint64_t v___x_21_; 
v___x_18_ = lean_ptr_addr(v_thm_17_);
v___x_19_ = ((size_t)3ULL);
v___x_20_ = lean_usize_shift_right(v___x_18_, v___x_19_);
v___x_21_ = lean_usize_to_uint64(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1___boxed(lean_object* v_thm_22_){
_start:
{
uint64_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1(v_thm_22_);
lean_dec_ref(v_thm_22_);
v_r_24_ = lean_box_uint64(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_hashEMatchTheoremPtr(lean_object* v_thm_25_){
_start:
{
uint64_t v___x_26_; 
v___x_26_ = l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1(v_thm_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_hashEMatchTheoremPtr___boxed(lean_object* v_thm_27_){
_start:
{
uint64_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Lean_Meta_Grind_hashEMatchTheoremPtr(v_thm_27_);
lean_dec_ref(v_thm_27_);
v_r_29_ = lean_box_uint64(v_res_28_);
return v_r_29_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0(void){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_hashEMatchTheoremPtr_unsafe__1___boxed), 1, 0);
return v___f_30_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instHashableEMatchTheoremPtr(void){
_start:
{
lean_object* v___f_31_; 
v___f_31_ = lean_obj_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0, &l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremPtr___closed__0);
return v___f_31_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0(void){
_start:
{
lean_object* v___f_32_; 
v___f_32_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_EMatchTheoremPtr_0__Lean_Meta_Grind_isSameEMatchTheoremPtr_unsafe__1___boxed), 2, 0);
return v___f_32_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instBEqEMatchTheoremPtr(void){
_start:
{
lean_object* v___f_33_; 
v___f_33_ = lean_obj_once(&l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0, &l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0_once, _init_l_Lean_Meta_Grind_instBEqEMatchTheoremPtr___closed__0);
return v___f_33_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheorem(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheorem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instHashableEMatchTheoremPtr = _init_l_Lean_Meta_Grind_instHashableEMatchTheoremPtr();
lean_mark_persistent(l_Lean_Meta_Grind_instHashableEMatchTheoremPtr);
l_Lean_Meta_Grind_instBEqEMatchTheoremPtr = _init_l_Lean_Meta_Grind_instBEqEMatchTheoremPtr();
lean_mark_persistent(l_Lean_Meta_Grind_instBEqEMatchTheoremPtr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchTheorem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_EMatchTheorem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_EMatchTheoremPtr(builtin);
}
#ifdef __cplusplus
}
#endif
