// Lean compiler output
// Module: Lean.Compiler.BorrowedAnnotation
// Imports: public import Lean.Expr
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_markBorrowed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_markBorrowed___closed__0;
static lean_once_cell_t l_Lean_markBorrowed___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_markBorrowed___closed__1;
LEAN_EXPORT lean_object* l_Lean_markBorrowed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isMarkedBorrowed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isMarkedBorrowed___boxed(lean_object*);
static lean_object* _init_l_Lean_markBorrowed___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("borrowed", 8, 8);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_markBorrowed___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_markBorrowed___closed__0, &l_Lean_markBorrowed___closed__0_once, _init_l_Lean_markBorrowed___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_markBorrowed(lean_object* v_e_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_markBorrowed___closed__1, &l_Lean_markBorrowed___closed__1_once, _init_l_Lean_markBorrowed___closed__1);
v___x_6_ = l_Lean_mkAnnotation(v___x_5_, v_e_4_);
return v___x_6_;
}
}
LEAN_EXPORT uint8_t l_Lean_isMarkedBorrowed(lean_object* v_e_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_obj_once(&l_Lean_markBorrowed___closed__1, &l_Lean_markBorrowed___closed__1_once, _init_l_Lean_markBorrowed___closed__1);
v___x_9_ = l_Lean_annotation_x3f(v___x_8_, v_e_7_);
if (lean_obj_tag(v___x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
else
{
uint8_t v___x_11_; 
lean_dec_ref(v___x_9_);
v___x_11_ = 1;
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isMarkedBorrowed___boxed(lean_object* v_e_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_isMarkedBorrowed(v_e_12_);
lean_dec_ref(v_e_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_BorrowedAnnotation(builtin);
}
#ifdef __cplusplus
}
#endif
