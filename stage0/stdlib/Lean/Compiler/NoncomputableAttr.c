// Lean compiler output
// Module: Lean.Compiler.NoncomputableAttr
// Imports: public import Lean.EnvExtension
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_noncomputableExt;
LEAN_EXPORT lean_object* l_Lean_addNoncomputable(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNoncomputable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isNoncomputable___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("noncomputableExt", 16, 16);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_, &l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_);
v___x_4_ = lean_obj_once(&l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_, &l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_obj_once(&l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_, &l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_);
v___x_8_ = lean_box(0);
v___x_9_ = l_Lean_mkTagDeclarationExtension(v___x_7_, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2____boxed(lean_object* v_a_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_();
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_addNoncomputable(lean_object* v_env_12_, lean_object* v_declName_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = l_Lean_noncomputableExt;
v___x_15_ = l_Lean_TagDeclarationExtension_tag(v___x_14_, v_env_12_, v_declName_13_);
return v___x_15_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNoncomputable(lean_object* v_env_16_, lean_object* v_declName_17_, lean_object* v_asyncMode_18_){
_start:
{
lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_19_ = l_Lean_noncomputableExt;
v___x_20_ = l_Lean_TagDeclarationExtension_isTagged(v___x_19_, v_env_16_, v_declName_17_, v_asyncMode_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_isNoncomputable___boxed(lean_object* v_env_21_, lean_object* v_declName_22_, lean_object* v_asyncMode_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l_Lean_isNoncomputable(v_env_21_, v_declName_22_, v_asyncMode_23_);
lean_dec(v_asyncMode_23_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_NoncomputableAttr_0__Lean_initFn_00___x40_Lean_Compiler_NoncomputableAttr_3990781425____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_noncomputableExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_noncomputableExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_NoncomputableAttr(builtin);
}
#ifdef __cplusplus
}
#endif
