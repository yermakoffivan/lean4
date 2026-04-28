// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.Action
// Imports: public import Lean.Meta.Tactic.Grind.Action import Lean.Meta.Tactic.Grind.Arith.CommRing.EqCnstr
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
lean_object* l_Lean_Meta_Grind_Arith_CommRing_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_solverAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Action_ring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Action_ring___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("ring", 4, 4);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__4, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__4_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__4);
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__3, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__3_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__3);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__2, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__2);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__1, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__1);
v___x_10_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__0, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__0);
v___x_11_ = l_Lean_Name_mkStr5(v___x_10_, v___x_9_, v___x_8_, v___x_7_, v___x_6_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___lam__0(lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_){
_start:
{
lean_object* v_ref_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v_ref_22_ = lean_ctor_get(v___y_19_, 5);
v___x_23_ = 0;
v___x_24_ = l_Lean_SourceInfo_fromRef(v_ref_22_, v___x_23_);
v___x_25_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__4, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__4_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__4);
v___x_26_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___lam__0___closed__5, &l_Lean_Meta_Grind_Action_ring___lam__0___closed__5_once, _init_l_Lean_Meta_Grind_Action_ring___lam__0___closed__5);
lean_inc(v___x_24_);
v___x_27_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_24_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
v___x_28_ = l_Lean_Syntax_node1(v___x_24_, v___x_26_, v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___lam__0___boxed(lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Meta_Grind_Action_ring___lam__0(v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
lean_dec(v___y_36_);
lean_dec_ref(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
return v_res_40_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___closed__0(void){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_ring___lam__0___boxed), 10, 0);
return v___f_41_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Action_ring___closed__1(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_check___boxed), 11, 0);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring(lean_object* v_a_43_, lean_object* v_kna_44_, lean_object* v_kp_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___f_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___f_56_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___closed__0, &l_Lean_Meta_Grind_Action_ring___closed__0_once, _init_l_Lean_Meta_Grind_Action_ring___closed__0);
v___x_57_ = lean_obj_once(&l_Lean_Meta_Grind_Action_ring___closed__1, &l_Lean_Meta_Grind_Action_ring___closed__1_once, _init_l_Lean_Meta_Grind_Action_ring___closed__1);
v___x_58_ = l_Lean_Meta_Grind_Action_solverAction(v___x_57_, v___f_56_, v_a_43_, v_kna_44_, v_kp_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Action_ring___boxed(lean_object* v_a_59_, lean_object* v_kna_60_, lean_object* v_kp_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Meta_Grind_Action_ring(v_a_59_, v_kna_60_, v_kp_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
return v_res_72_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_EqCnstr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_EqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Action(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_EqCnstr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_EqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Action(builtin);
}
#ifdef __cplusplus
}
#endif
