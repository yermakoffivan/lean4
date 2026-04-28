// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Telescope
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.Have import Lean.Meta.Sym.Simp.Forall
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
lean_object* l_Lean_Meta_Sym_Simp_simpLambda_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpTelescope___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpTelescope___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpTelescope___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2_, 0, v___x_1_);
lean_ctor_set_uint8(v___x_2_, 1, v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpTelescope___boxed(lean_object* v_e_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Meta_Sym_Simp_simpTelescope(v_e_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
lean_dec(v_a_12_);
lean_dec_ref(v_a_11_);
lean_dec(v_a_10_);
lean_dec_ref(v_a_9_);
lean_dec(v_a_8_);
lean_dec_ref(v_a_7_);
lean_dec(v_a_6_);
lean_dec_ref(v_a_5_);
lean_dec(v_a_4_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpTelescope(lean_object* v_e_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
switch(lean_obj_tag(v_e_15_))
{
case 8:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpTelescope___boxed), 11, 0);
v___x_27_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpLambda_x27___boxed), 12, 1);
lean_closure_set(v___x_27_, 0, v___x_26_);
v___x_28_ = l_Lean_Meta_Sym_Simp_simpLet_x27(v___x_27_, v_e_15_, v_a_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_28_;
}
case 7:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_29_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpTelescope___boxed), 11, 0);
lean_inc_ref(v___x_29_);
v___x_30_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpArrowTelescope___boxed), 12, 1);
lean_closure_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpLambda_x27___boxed), 12, 1);
lean_closure_set(v___x_31_, 0, v___x_29_);
v___x_32_ = l_Lean_Meta_Sym_Simp_simpForall_x27(v___x_30_, v___x_31_, v_e_15_, v_a_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_32_;
}
default: 
{
lean_object* v___x_33_; lean_object* v___x_34_; 
lean_dec_ref(v_e_15_);
v___x_33_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpTelescope___closed__0, &l_Lean_Meta_Sym_Simp_simpTelescope___closed__0_once, _init_l_Lean_Meta_Sym_Simp_simpTelescope___closed__0);
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Telescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Telescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Telescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Telescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Telescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Telescope(builtin);
}
#ifdef __cplusplus
}
#endif
