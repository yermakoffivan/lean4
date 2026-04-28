// Lean compiler output
// Module: Init.Data.Option.Coe
// Imports: public import Init.Coe
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
LEAN_EXPORT lean_object* l_optionCoe___lam__0(lean_object*);
static lean_once_cell_t l_optionCoe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_optionCoe___closed__0;
LEAN_EXPORT lean_object* l_optionCoe(lean_object*);
LEAN_EXPORT lean_object* l_optionCoe___lam__0(lean_object* v_val_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2_, 0, v_val_1_);
return v___x_2_;
}
}
static lean_object* _init_l_optionCoe___closed__0(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_optionCoe___lam__0), 1, 0);
return v___f_3_;
}
}
LEAN_EXPORT lean_object* l_optionCoe(lean_object* v_00_u03b1_4_){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_obj_once(&l_optionCoe___closed__0, &l_optionCoe___closed__0_once, _init_l_optionCoe___closed__0);
return v___f_5_;
}
}
lean_object* runtime_initialize_Init_Coe(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Option_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Option_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
