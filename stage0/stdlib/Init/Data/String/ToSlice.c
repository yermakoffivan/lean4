// Lean compiler output
// Module: Init.Data.String.ToSlice
// Imports: public import Init.Data.String.Defs
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
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_String_toSlice(lean_object*);
static lean_once_cell_t l_String_instToSliceSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instToSliceSlice___closed__0;
LEAN_EXPORT lean_object* l_String_instToSliceSlice;
static lean_once_cell_t l_String_instToSlice___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_instToSlice___closed__0;
LEAN_EXPORT lean_object* l_String_instToSlice;
static lean_object* _init_l_String_instToSliceSlice___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_alloc_closure((void*)(l_id___boxed), 2, 1);
lean_closure_set(v___x_1_, 0, lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_String_instToSliceSlice(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l_String_instToSliceSlice___closed__0, &l_String_instToSliceSlice___closed__0_once, _init_l_String_instToSliceSlice___closed__0);
return v___x_2_;
}
}
static lean_object* _init_l_String_instToSlice___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_alloc_closure((void*)(l_String_toSlice), 1, 0);
return v___x_3_;
}
}
static lean_object* _init_l_String_instToSlice(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_String_instToSlice___closed__0, &l_String_instToSlice___closed__0_once, _init_l_String_instToSlice___closed__0);
return v___x_4_;
}
}
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_ToSlice(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_instToSliceSlice = _init_l_String_instToSliceSlice();
lean_mark_persistent(l_String_instToSliceSlice);
l_String_instToSlice = _init_l_String_instToSlice();
lean_mark_persistent(l_String_instToSlice);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_ToSlice(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_ToSlice(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_ToSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_ToSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_ToSlice(builtin);
}
#ifdef __cplusplus
}
#endif
