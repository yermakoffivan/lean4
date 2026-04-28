// Lean compiler output
// Module: Lean.Elab.MatchAltView
// Imports: public import Lean.Elab.Term
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0, &l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0_once, _init_l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__0);
v___x_4_ = lean_box(0);
v___x_5_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_3_);
lean_ctor_set(v___x_5_, 2, v___x_4_);
lean_ctor_set(v___x_5_, 3, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default(lean_object* v_k_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1, &l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1_once, _init_l_Lean_Elab_Term_instInhabitedMatchAltView_default___closed__1);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView_default___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Elab_Term_instInhabitedMatchAltView_default(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView(lean_object* v_a_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Elab_Term_instInhabitedMatchAltView_default(v_a_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedMatchAltView___boxed(lean_object* v_a_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Elab_Term_instInhabitedMatchAltView(v_a_12_);
lean_dec(v_a_12_);
return v_res_13_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_MatchAltView(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_MatchAltView(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_MatchAltView(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MatchAltView(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_MatchAltView(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_MatchAltView(builtin);
}
#ifdef __cplusplus
}
#endif
