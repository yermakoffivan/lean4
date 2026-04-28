// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.Basic
// Imports: public import Lean.Compiler.LCNF.CompilerM
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
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(uint8_t v_pu_1_, lean_object* v_fvarId_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_1_, v_fvarId_2_, v_a_3_, v_a_4_);
if (lean_obj_tag(v___x_6_) == 0)
{
lean_object* v_a_7_; 
v_a_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_a_7_);
if (lean_obj_tag(v_a_7_) == 1)
{
lean_dec_ref(v_a_7_);
lean_dec(v_fvarId_2_);
return v___x_6_;
}
else
{
lean_object* v___x_8_; 
lean_dec(v_a_7_);
lean_dec_ref(v___x_6_);
v___x_8_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v_pu_1_, v_fvarId_2_, v_a_3_, v_a_4_);
lean_dec(v_fvarId_2_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_25_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_25_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_25_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_25_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
if (lean_obj_tag(v_a_9_) == 1)
{
lean_object* v_val_18_; 
v_val_18_ = lean_ctor_get(v_a_9_, 0);
lean_inc(v_val_18_);
lean_dec_ref(v_a_9_);
if (lean_obj_tag(v_val_18_) == 4)
{
lean_object* v_fvarId_19_; lean_object* v_args_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v_fvarId_19_ = lean_ctor_get(v_val_18_, 0);
lean_inc(v_fvarId_19_);
v_args_20_ = lean_ctor_get(v_val_18_, 1);
lean_inc_ref(v_args_20_);
lean_dec_ref(v_val_18_);
v___x_21_ = lean_array_get_size(v_args_20_);
lean_dec_ref(v_args_20_);
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_nat_dec_eq(v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
lean_dec(v_fvarId_19_);
goto v___jp_13_;
}
else
{
lean_del_object(v___x_11_);
v_fvarId_2_ = v_fvarId_19_;
goto _start;
}
}
else
{
lean_dec(v_val_18_);
goto v___jp_13_;
}
}
else
{
lean_dec(v_a_9_);
goto v___jp_13_;
}
v___jp_13_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v___x_14_);
v___x_16_ = v___x_11_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
else
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_33_; 
v_a_26_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_33_ == 0)
{
v___x_28_ = v___x_8_;
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v___x_8_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_31_; 
if (v_isShared_29_ == 0)
{
v___x_31_ = v___x_28_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v_a_26_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
}
else
{
lean_dec(v_fvarId_2_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg___boxed(lean_object* v_pu_34_, lean_object* v_fvarId_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
uint8_t v_pu_boxed_39_; lean_object* v_res_40_; 
v_pu_boxed_39_ = lean_unbox(v_pu_34_);
v_res_40_ = l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(v_pu_boxed_39_, v_fvarId_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec(v_a_36_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f(uint8_t v_pu_41_, lean_object* v_fvarId_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___redArg(v_pu_41_, v_fvarId_42_, v_a_44_, v_a_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f___boxed(lean_object* v_pu_49_, lean_object* v_fvarId_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
uint8_t v_pu_boxed_56_; lean_object* v_res_57_; 
v_pu_boxed_56_ = lean_unbox(v_pu_49_);
v_res_57_ = l_Lean_Compiler_LCNF_Simp_findFunDecl_x27_x3f(v_pu_boxed_56_, v_fvarId_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
return v_res_57_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
