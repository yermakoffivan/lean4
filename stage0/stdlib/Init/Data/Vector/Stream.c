// Lean compiler output
// Module: Init.Data.Vector.Stream
// Imports: public import Init.Data.Stream public import Init.Data.Vector.Basic import Init.Data.Slice.Array.Basic
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
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray___lam__0(lean_object*);
static lean_once_cell_t l_Vector_instToStreamSubarray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Vector_instToStreamSubarray___closed__0;
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray___lam__0(lean_object* v_xs_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = lean_unsigned_to_nat(0u);
v___x_3_ = lean_array_get_size(v_xs_1_);
v___x_4_ = l_Array_toSubarray___redArg(v_xs_1_, v___x_2_, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Vector_instToStreamSubarray___closed__0(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Vector_instToStreamSubarray___lam__0), 1, 0);
return v___f_5_;
}
}
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray(lean_object* v_00_u03b1_6_, lean_object* v_n_7_){
_start:
{
lean_object* v___f_8_; 
v___f_8_ = lean_obj_once(&l_Vector_instToStreamSubarray___closed__0, &l_Vector_instToStreamSubarray___closed__0_once, _init_l_Vector_instToStreamSubarray___closed__0);
return v___f_8_;
}
}
LEAN_EXPORT lean_object* l_Vector_instToStreamSubarray___boxed(lean_object* v_00_u03b1_9_, lean_object* v_n_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Vector_instToStreamSubarray(v_00_u03b1_9_, v_n_10_);
lean_dec(v_n_10_);
return v_res_11_;
}
}
lean_object* runtime_initialize_Init_Data_Stream(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Slice_Array_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Stream(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Stream(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Stream(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Slice_Array_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Stream(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Slice_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Stream(builtin);
}
#ifdef __cplusplus
}
#endif
