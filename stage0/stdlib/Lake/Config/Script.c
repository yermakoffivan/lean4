// Lean compiler output
// Module: Lake.Config.Script
// Imports: public import Init.Dynamic public import Init.System.IO public import Lake.Util.Exit public import Lake.Config.Context
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
static lean_once_cell_t l_Lake_instTypeNameScriptFn_unsafe__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameScriptFn_unsafe__1___closed__0;
static lean_once_cell_t l_Lake_instTypeNameScriptFn_unsafe__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameScriptFn_unsafe__1___closed__1;
static lean_once_cell_t l_Lake_instTypeNameScriptFn_unsafe__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instTypeNameScriptFn_unsafe__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_instTypeNameScriptFn_unsafe__1;
LEAN_EXPORT lean_object* l_Lake_instTypeNameScriptFn;
static lean_once_cell_t l_Lake_instInhabitedScript_default___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedScript_default___lam__0___closed__0;
static lean_once_cell_t l_Lake_instInhabitedScript_default___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedScript_default___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedScript_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedScript_default___closed__0;
static lean_once_cell_t l_Lake_instInhabitedScript_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedScript_default___closed__1;
static lean_once_cell_t l_Lake_instInhabitedScript_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedScript_default___closed__2;
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript;
LEAN_EXPORT lean_object* l_Lake_Script_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Script_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lake", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("ScriptFn", 8, 8);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l_Lake_instTypeNameScriptFn_unsafe__1___closed__1, &l_Lake_instTypeNameScriptFn_unsafe__1___closed__1_once, _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__1);
v___x_4_ = lean_obj_once(&l_Lake_instTypeNameScriptFn_unsafe__1___closed__0, &l_Lake_instTypeNameScriptFn_unsafe__1___closed__0_once, _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__0);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lake_instTypeNameScriptFn_unsafe__1(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lake_instTypeNameScriptFn_unsafe__1___closed__2, &l_Lake_instTypeNameScriptFn_unsafe__1___closed__2_once, _init_l_Lake_instTypeNameScriptFn_unsafe__1___closed__2);
return v___x_6_;
}
}
static lean_object* _init_l_Lake_instTypeNameScriptFn(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lake_instTypeNameScriptFn_unsafe__1;
return v___x_7_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default___lam__0___closed__0(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("(`Inhabited.default` for `IO.Error`)", 36, 36);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default___lam__0___closed__1(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Lake_instInhabitedScript_default___lam__0___closed__0, &l_Lake_instInhabitedScript_default___lam__0___closed__0_once, _init_l_Lake_instInhabitedScript_default___lam__0___closed__0);
v___x_10_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript_default___lam__0(lean_object* v_x_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_Lake_instInhabitedScript_default___lam__0___closed__1, &l_Lake_instInhabitedScript_default___lam__0___closed__1_once, _init_l_Lake_instInhabitedScript_default___lam__0___closed__1);
v___x_15_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_instInhabitedScript_default___lam__0___boxed(lean_object* v_x_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lake_instInhabitedScript_default___lam__0(v_x_16_, v___y_17_);
lean_dec(v___y_17_);
lean_dec(v_x_16_);
return v_res_19_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default___closed__0(void){
_start:
{
lean_object* v___f_20_; 
v___f_20_ = lean_alloc_closure((void*)(l_Lake_instInhabitedScript_default___lam__0___boxed), 3, 0);
return v___f_20_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default___closed__1(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("", 0, 0);
return v___x_21_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default___closed__2(void){
_start:
{
lean_object* v___x_22_; lean_object* v___f_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = lean_box(0);
v___f_23_ = lean_obj_once(&l_Lake_instInhabitedScript_default___closed__0, &l_Lake_instInhabitedScript_default___closed__0_once, _init_l_Lake_instInhabitedScript_default___closed__0);
v___x_24_ = lean_obj_once(&l_Lake_instInhabitedScript_default___closed__1, &l_Lake_instInhabitedScript_default___closed__1_once, _init_l_Lake_instInhabitedScript_default___closed__1);
v___x_25_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___f_23_);
lean_ctor_set(v___x_25_, 2, v___x_22_);
return v___x_25_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript_default(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Lake_instInhabitedScript_default___closed__2, &l_Lake_instInhabitedScript_default___closed__2_once, _init_l_Lake_instInhabitedScript_default___closed__2);
return v___x_26_;
}
}
static lean_object* _init_l_Lake_instInhabitedScript(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lake_instInhabitedScript_default;
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_Script_run(lean_object* v_args_28_, lean_object* v_self_29_, lean_object* v_a_30_){
_start:
{
lean_object* v_fn_32_; lean_object* v___x_33_; 
v_fn_32_ = lean_ctor_get(v_self_29_, 1);
lean_inc_ref(v_fn_32_);
lean_dec_ref(v_self_29_);
lean_inc(v_a_30_);
v___x_33_ = lean_apply_3(v_fn_32_, v_args_28_, v_a_30_, lean_box(0));
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_Script_run___boxed(lean_object* v_args_34_, lean_object* v_self_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_Script_run(v_args_34_, v_self_35_, v_a_36_);
lean_dec(v_a_36_);
return v_res_38_;
}
}
lean_object* runtime_initialize_Init_Dynamic(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Context(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Script(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instTypeNameScriptFn_unsafe__1 = _init_l_Lake_instTypeNameScriptFn_unsafe__1();
lean_mark_persistent(l_Lake_instTypeNameScriptFn_unsafe__1);
l_Lake_instTypeNameScriptFn = _init_l_Lake_instTypeNameScriptFn();
lean_mark_persistent(l_Lake_instTypeNameScriptFn);
l_Lake_instInhabitedScript_default = _init_l_Lake_instInhabitedScript_default();
lean_mark_persistent(l_Lake_instInhabitedScript_default);
l_Lake_instInhabitedScript = _init_l_Lake_instInhabitedScript();
lean_mark_persistent(l_Lake_instInhabitedScript);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Script(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Dynamic(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* initialize_Lake_Config_Context(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Script(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Script(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Script(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Script(builtin);
}
#ifdef __cplusplus
}
#endif
