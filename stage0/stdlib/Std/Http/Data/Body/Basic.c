// Lean compiler output
// Module: Std.Http.Data.Body.Basic
// Imports: public import Std.Async public import Std.Async.ContextAsync public import Std.Http.Data.Chunk public import Std.Http.Data.Headers public import Std.Http.Data.Body.Length
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
lean_object* l_String_toUTF8___boxed(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Body_instToByteArrayByteArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instToByteArrayByteArray___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Body_instToByteArrayByteArray;
static lean_once_cell_t l_Std_Http_Body_instToByteArrayString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instToByteArrayString___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Body_instToByteArrayString;
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayByteArray___lam__0(lean_object*);
static lean_once_cell_t l_Std_Http_Body_instFromByteArrayByteArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instFromByteArrayByteArray___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayByteArray;
static lean_once_cell_t l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayString___lam__0(lean_object*);
static lean_once_cell_t l_Std_Http_Body_instFromByteArrayString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instFromByteArrayString___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayString;
static lean_object* _init_l_Std_Http_Body_instToByteArrayByteArray___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_alloc_closure((void*)(l_id___boxed), 2, 1);
lean_closure_set(v___x_1_, 0, lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Std_Http_Body_instToByteArrayByteArray(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l_Std_Http_Body_instToByteArrayByteArray___closed__0, &l_Std_Http_Body_instToByteArrayByteArray___closed__0_once, _init_l_Std_Http_Body_instToByteArrayByteArray___closed__0);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Http_Body_instToByteArrayString___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_alloc_closure((void*)(l_String_toUTF8___boxed), 1, 0);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Http_Body_instToByteArrayString(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Std_Http_Body_instToByteArrayString___closed__0, &l_Std_Http_Body_instToByteArrayString___closed__0_once, _init_l_Std_Http_Body_instToByteArrayString___closed__0);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayByteArray___lam__0(lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_a_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayByteArray___closed__0(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Std_Http_Body_instFromByteArrayByteArray___lam__0), 1, 0);
return v___f_7_;
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayByteArray(void){
_start:
{
lean_object* v___f_8_; 
v___f_8_ = lean_obj_once(&l_Std_Http_Body_instFromByteArrayByteArray___closed__0, &l_Std_Http_Body_instFromByteArrayByteArray___closed__0_once, _init_l_Std_Http_Body_instFromByteArrayByteArray___closed__0);
return v___f_8_;
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("invalid UTF-8 encoding", 22, 22);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_obj_once(&l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0, &l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0_once, _init_l_Std_Http_Body_instFromByteArrayString___lam__0___closed__0);
v___x_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instFromByteArrayString___lam__0(lean_object* v_bs_12_){
_start:
{
uint8_t v___x_13_; 
v___x_13_ = lean_string_validate_utf8(v_bs_12_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; 
lean_dec_ref(v_bs_12_);
v___x_14_ = lean_obj_once(&l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1, &l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1_once, _init_l_Std_Http_Body_instFromByteArrayString___lam__0___closed__1);
return v___x_14_;
}
else
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_string_from_utf8_unchecked(v_bs_12_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayString___closed__0(void){
_start:
{
lean_object* v___f_17_; 
v___f_17_ = lean_alloc_closure((void*)(l_Std_Http_Body_instFromByteArrayString___lam__0), 1, 0);
return v___f_17_;
}
}
static lean_object* _init_l_Std_Http_Body_instFromByteArrayString(void){
_start:
{
lean_object* v___f_18_; 
v___f_18_ = lean_obj_once(&l_Std_Http_Body_instFromByteArrayString___closed__0, &l_Std_Http_Body_instFromByteArrayString___closed__0_once, _init_l_Std_Http_Body_instFromByteArrayString___closed__0);
return v___f_18_;
}
}
lean_object* runtime_initialize_Std_Async(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Length(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Body_instToByteArrayByteArray = _init_l_Std_Http_Body_instToByteArrayByteArray();
lean_mark_persistent(l_Std_Http_Body_instToByteArrayByteArray);
l_Std_Http_Body_instToByteArrayString = _init_l_Std_Http_Body_instToByteArrayString();
lean_mark_persistent(l_Std_Http_Body_instToByteArrayString);
l_Std_Http_Body_instFromByteArrayByteArray = _init_l_Std_Http_Body_instFromByteArrayByteArray();
lean_mark_persistent(l_Std_Http_Body_instFromByteArrayByteArray);
l_Std_Http_Body_instFromByteArrayString = _init_l_Std_Http_Body_instFromByteArrayString();
lean_mark_persistent(l_Std_Http_Body_instFromByteArrayString);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Async(uint8_t builtin);
lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
