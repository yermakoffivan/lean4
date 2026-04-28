// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Config
// Imports: public import Init.Core
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
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedConfig;
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0(void){
_start:
{
uint8_t v___x_1_; uint8_t v___x_2_; lean_object* v___x_3_; 
v___x_1_ = 1;
v___x_2_ = 0;
v___x_3_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3_, 0, v___x_2_);
lean_ctor_set_uint8(v___x_3_, 1, v___x_2_);
lean_ctor_set_uint8(v___x_3_, 2, v___x_2_);
lean_ctor_set_uint8(v___x_3_, 3, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0, &l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default;
return v___x_5_;
}
}
lean_object* runtime_initialize_Init_Core(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default = _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instInhabitedConfig_default);
l_Lean_Compiler_LCNF_Simp_instInhabitedConfig = _init_l_Lean_Compiler_LCNF_Simp_instInhabitedConfig();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instInhabitedConfig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
}
#ifdef __cplusplus
}
#endif
