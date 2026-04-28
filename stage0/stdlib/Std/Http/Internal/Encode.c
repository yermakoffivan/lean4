// Lean compiler output
// Module: Std.Http.Internal.Encode
// Imports: public import Std.Http.Internal.ChunkedBuffer public import Std.Http.Data.Version
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
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1;
static lean_once_cell_t l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2;
static lean_once_cell_t l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Internal_instEncodeV11Version___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_instEncodeV11Version___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Internal_instEncodeV11Version;
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("HTTP/1.0", 8, 8);
return v___x_1_;
}
}
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("HTTP/1.1", 8, 8);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("HTTP/2.0", 8, 8);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("HTTP/3.0", 8, 8);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0(lean_object* v_buffer_5_, uint8_t v___y_6_){
_start:
{
lean_object* v___y_8_; 
switch(v___y_6_)
{
case 0:
{
lean_object* v___x_22_; 
v___x_22_ = lean_obj_once(&l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0, &l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0_once, _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__0);
v___y_8_ = v___x_22_;
goto v___jp_7_;
}
case 1:
{
lean_object* v___x_23_; 
v___x_23_ = lean_obj_once(&l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1, &l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1_once, _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__1);
v___y_8_ = v___x_23_;
goto v___jp_7_;
}
case 2:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2, &l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2_once, _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__2);
v___y_8_ = v___x_24_;
goto v___jp_7_;
}
default: 
{
lean_object* v___x_25_; 
v___x_25_ = lean_obj_once(&l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3, &l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3_once, _init_l_Std_Http_Internal_instEncodeV11Version___lam__0___closed__3);
v___y_8_ = v___x_25_;
goto v___jp_7_;
}
}
v___jp_7_:
{
lean_object* v_data_9_; lean_object* v_size_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_21_; 
v_data_9_ = lean_ctor_get(v_buffer_5_, 0);
v_size_10_ = lean_ctor_get(v_buffer_5_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v_buffer_5_);
if (v_isSharedCheck_21_ == 0)
{
v___x_12_ = v_buffer_5_;
v_isShared_13_ = v_isSharedCheck_21_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_size_10_);
lean_inc(v_data_9_);
lean_dec(v_buffer_5_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_21_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_14_ = lean_string_to_utf8(v___y_8_);
lean_inc_ref(v___x_14_);
v___x_15_ = lean_array_push(v_data_9_, v___x_14_);
v___x_16_ = lean_byte_array_size(v___x_14_);
lean_dec_ref(v___x_14_);
v___x_17_ = lean_nat_add(v_size_10_, v___x_16_);
lean_dec(v_size_10_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 1, v___x_17_);
lean_ctor_set(v___x_12_, 0, v___x_15_);
v___x_19_ = v___x_12_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_15_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v___x_17_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instEncodeV11Version___lam__0___boxed(lean_object* v_buffer_26_, lean_object* v___y_27_){
_start:
{
uint8_t v___y_52__boxed_28_; lean_object* v_res_29_; 
v___y_52__boxed_28_ = lean_unbox(v___y_27_);
v_res_29_ = l_Std_Http_Internal_instEncodeV11Version___lam__0(v_buffer_26_, v___y_52__boxed_28_);
return v_res_29_;
}
}
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version___closed__0(void){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = lean_alloc_closure((void*)(l_Std_Http_Internal_instEncodeV11Version___lam__0___boxed), 2, 0);
return v___f_30_;
}
}
static lean_object* _init_l_Std_Http_Internal_instEncodeV11Version(void){
_start:
{
lean_object* v___f_31_; 
v___f_31_ = lean_obj_once(&l_Std_Http_Internal_instEncodeV11Version___closed__0, &l_Std_Http_Internal_instEncodeV11Version___closed__0_once, _init_l_Std_Http_Internal_instEncodeV11Version___closed__0);
return v___f_31_;
}
}
lean_object* runtime_initialize_Std_Http_Internal_ChunkedBuffer(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Version(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Internal_Encode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Http_Internal_ChunkedBuffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Internal_instEncodeV11Version = _init_l_Std_Http_Internal_instEncodeV11Version();
lean_mark_persistent(l_Std_Http_Internal_instEncodeV11Version);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Internal_Encode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Internal_ChunkedBuffer(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Version(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Internal_Encode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Internal_ChunkedBuffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_Encode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Internal_Encode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Internal_Encode(builtin);
}
#ifdef __cplusplus
}
#endif
