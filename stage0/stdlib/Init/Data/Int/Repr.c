// Lean compiler output
// Module: Init.Data.Int.Repr
// Imports: public import Init.Data.Repr public import Init.Data.String.Defs
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
static lean_once_cell_t l_Int_repr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_repr___closed__0;
static lean_once_cell_t l_Int_repr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_repr___closed__1;
LEAN_EXPORT lean_object* l_Int_repr(lean_object*);
LEAN_EXPORT lean_object* l_Int_repr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instRepr___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Int_instRepr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instRepr___closed__0;
LEAN_EXPORT lean_object* l_Int_instRepr;
static lean_object* _init_l_Int_repr___closed__0(void){
_start:
{
lean_object* v_natZero_1_; lean_object* v_intZero_2_; 
v_natZero_1_ = lean_unsigned_to_nat(0u);
v_intZero_2_ = lean_nat_to_int(v_natZero_1_);
return v_intZero_2_;
}
}
static lean_object* _init_l_Int_repr___closed__1(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("-", 1, 1);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Int_repr(lean_object* v_x_4_){
_start:
{
lean_object* v_intZero_5_; uint8_t v_isNeg_6_; 
v_intZero_5_ = lean_obj_once(&l_Int_repr___closed__0, &l_Int_repr___closed__0_once, _init_l_Int_repr___closed__0);
v_isNeg_6_ = lean_int_dec_lt(v_x_4_, v_intZero_5_);
if (v_isNeg_6_ == 0)
{
lean_object* v_a_7_; lean_object* v___x_8_; 
v_a_7_ = lean_nat_abs(v_x_4_);
v___x_8_ = l_Nat_reprFast(v_a_7_);
return v___x_8_;
}
else
{
lean_object* v_abs_9_; lean_object* v_one_10_; lean_object* v_a_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_abs_9_ = lean_nat_abs(v_x_4_);
v_one_10_ = lean_unsigned_to_nat(1u);
v_a_11_ = lean_nat_sub(v_abs_9_, v_one_10_);
lean_dec(v_abs_9_);
v___x_12_ = lean_obj_once(&l_Int_repr___closed__1, &l_Int_repr___closed__1_once, _init_l_Int_repr___closed__1);
v___x_13_ = lean_nat_add(v_a_11_, v_one_10_);
lean_dec(v_a_11_);
v___x_14_ = l_Nat_reprFast(v___x_13_);
v___x_15_ = lean_string_append(v___x_12_, v___x_14_);
lean_dec_ref(v___x_14_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Int_repr___boxed(lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Int_repr(v_x_16_);
lean_dec(v_x_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Int_instRepr___lam__0(lean_object* v_i_18_, lean_object* v_prec_19_){
_start:
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_obj_once(&l_Int_repr___closed__0, &l_Int_repr___closed__0_once, _init_l_Int_repr___closed__0);
v___x_21_ = lean_int_dec_lt(v_i_18_, v___x_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = l_Int_repr(v_i_18_);
v___x_23_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = l_Int_repr(v_i_18_);
v___x_25_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
v___x_26_ = l_Repr_addAppParen(v___x_25_, v_prec_19_);
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Int_instRepr___lam__0___boxed(lean_object* v_i_27_, lean_object* v_prec_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Int_instRepr___lam__0(v_i_27_, v_prec_28_);
lean_dec(v_prec_28_);
lean_dec(v_i_27_);
return v_res_29_;
}
}
static lean_object* _init_l_Int_instRepr___closed__0(void){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = lean_alloc_closure((void*)(l_Int_instRepr___lam__0___boxed), 2, 0);
return v___f_30_;
}
}
static lean_object* _init_l_Int_instRepr(void){
_start:
{
lean_object* v___f_31_; 
v___f_31_ = lean_obj_once(&l_Int_instRepr___closed__0, &l_Int_instRepr___closed__0_once, _init_l_Int_instRepr___closed__0);
return v___f_31_;
}
}
lean_object* runtime_initialize_Init_Data_Repr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Int_Repr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_instRepr = _init_l_Int_instRepr();
lean_mark_persistent(l_Int_instRepr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Int_Repr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Repr(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Int_Repr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Int_Repr(builtin);
}
#ifdef __cplusplus
}
#endif
