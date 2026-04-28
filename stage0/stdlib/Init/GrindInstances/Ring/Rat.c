// Lean compiler output
// Module: Init.GrindInstances.Ring.Rat
// Imports: public import Init.Grind.Ring.OfScientific public import Init.Data.Rat.Lemmas import Init.Data.Int.DivMod.Lemmas import Init.Data.Int.Lemmas
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
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_instNatCast___lam__0(lean_object*);
lean_object* l_Rat_zpow___boxed(lean_object*, lean_object*);
lean_object* l_instHAdd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_sub(lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
lean_object* l_Rat_pow___boxed(lean_object*, lean_object*);
lean_object* l_Rat_instOfNat(lean_object*);
lean_object* l_Rat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Rat_div___boxed(lean_object*, lean_object*);
lean_object* l_Rat_inv(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_instFieldRat___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_instFieldRat___lam__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__0;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__1;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__2;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__3;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__4;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__5;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__6;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__7;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__8;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__9;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__10;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__11;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__12;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__13;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__14;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__15;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__16;
static lean_once_cell_t l_Lean_Grind_instFieldRat___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instFieldRat___closed__17;
LEAN_EXPORT lean_object* l_Lean_Grind_instFieldRat;
LEAN_EXPORT lean_object* l_Lean_Grind_instFieldRat___lam__0(lean_object* v_x1_1_, lean_object* v_x2_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = l_Rat_instNatCast___lam__0(v_x1_1_);
v___x_4_ = l_Rat_mul(v___x_3_, v_x2_2_);
lean_dec_ref(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instFieldRat___lam__1(lean_object* v_x1_5_, lean_object* v_x2_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = l_Rat_ofInt(v_x1_5_);
v___x_8_ = l_Rat_mul(v___x_7_, v_x2_6_);
lean_dec_ref(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__0(void){
_start:
{
lean_object* v___f_9_; 
v___f_9_ = lean_alloc_closure((void*)(l_Lean_Grind_instFieldRat___lam__0), 2, 0);
return v___f_9_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__1(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lean_Grind_instFieldRat___lam__1), 2, 0);
return v___f_10_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__2(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_closure((void*)(l_Rat_add), 2, 0);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__3(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_alloc_closure((void*)(l_Rat_mul___boxed), 2, 0);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__4(void){
_start:
{
lean_object* v___f_13_; 
v___f_13_ = lean_alloc_closure((void*)(l_Rat_instNatCast___lam__0), 1, 0);
return v___f_13_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__5(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_alloc_closure((void*)(l_Rat_pow___boxed), 2, 0);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__6(void){
_start:
{
lean_object* v___x_15_; lean_object* v___f_16_; 
v___x_15_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__5, &l_Lean_Grind_instFieldRat___closed__5_once, _init_l_Lean_Grind_instFieldRat___closed__5);
v___f_16_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_16_, 0, v___x_15_);
return v___f_16_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__7(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_closure((void*)(l_Rat_neg), 1, 0);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_closure((void*)(l_Rat_sub), 2, 0);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__9(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_closure((void*)(l_Rat_ofInt), 1, 0);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__10(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_alloc_closure((void*)(l_Rat_inv), 1, 0);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__11(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_alloc_closure((void*)(l_Rat_div___boxed), 2, 0);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__12(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_alloc_closure((void*)(l_Rat_zpow___boxed), 2, 0);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__13(void){
_start:
{
lean_object* v___x_23_; lean_object* v___f_24_; 
v___x_23_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__12, &l_Lean_Grind_instFieldRat___closed__12_once, _init_l_Lean_Grind_instFieldRat___closed__12);
v___f_24_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_24_, 0, v___x_23_);
return v___f_24_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__14(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_closure((void*)(l_Rat_instOfNat), 1, 0);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__15(void){
_start:
{
lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___x_28_; lean_object* v___f_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___f_26_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__6, &l_Lean_Grind_instFieldRat___closed__6_once, _init_l_Lean_Grind_instFieldRat___closed__6);
v___f_27_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__0, &l_Lean_Grind_instFieldRat___closed__0_once, _init_l_Lean_Grind_instFieldRat___closed__0);
v___x_28_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__14, &l_Lean_Grind_instFieldRat___closed__14_once, _init_l_Lean_Grind_instFieldRat___closed__14);
v___f_29_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__4, &l_Lean_Grind_instFieldRat___closed__4_once, _init_l_Lean_Grind_instFieldRat___closed__4);
v___x_30_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__3, &l_Lean_Grind_instFieldRat___closed__3_once, _init_l_Lean_Grind_instFieldRat___closed__3);
v___x_31_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__2, &l_Lean_Grind_instFieldRat___closed__2_once, _init_l_Lean_Grind_instFieldRat___closed__2);
v___x_32_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_30_);
lean_ctor_set(v___x_32_, 2, v___f_29_);
lean_ctor_set(v___x_32_, 3, v___x_28_);
lean_ctor_set(v___x_32_, 4, v___f_27_);
lean_ctor_set(v___x_32_, 5, v___f_26_);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__16(void){
_start:
{
lean_object* v___f_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___f_33_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__1, &l_Lean_Grind_instFieldRat___closed__1_once, _init_l_Lean_Grind_instFieldRat___closed__1);
v___x_34_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__9, &l_Lean_Grind_instFieldRat___closed__9_once, _init_l_Lean_Grind_instFieldRat___closed__9);
v___x_35_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__8, &l_Lean_Grind_instFieldRat___closed__8_once, _init_l_Lean_Grind_instFieldRat___closed__8);
v___x_36_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__7, &l_Lean_Grind_instFieldRat___closed__7_once, _init_l_Lean_Grind_instFieldRat___closed__7);
v___x_37_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__15, &l_Lean_Grind_instFieldRat___closed__15_once, _init_l_Lean_Grind_instFieldRat___closed__15);
v___x_38_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_35_);
lean_ctor_set(v___x_38_, 3, v___x_34_);
lean_ctor_set(v___x_38_, 4, v___f_33_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat___closed__17(void){
_start:
{
lean_object* v___f_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___f_39_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__13, &l_Lean_Grind_instFieldRat___closed__13_once, _init_l_Lean_Grind_instFieldRat___closed__13);
v___x_40_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__11, &l_Lean_Grind_instFieldRat___closed__11_once, _init_l_Lean_Grind_instFieldRat___closed__11);
v___x_41_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__10, &l_Lean_Grind_instFieldRat___closed__10_once, _init_l_Lean_Grind_instFieldRat___closed__10);
v___x_42_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__16, &l_Lean_Grind_instFieldRat___closed__16_once, _init_l_Lean_Grind_instFieldRat___closed__16);
v___x_43_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___x_40_);
lean_ctor_set(v___x_43_, 3, v___f_39_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Grind_instFieldRat(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_obj_once(&l_Lean_Grind_instFieldRat___closed__17, &l_Lean_Grind_instFieldRat___closed__17_once, _init_l_Lean_Grind_instFieldRat___closed__17);
return v___x_44_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_OfScientific(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Rat_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GrindInstances_Ring_Rat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ring_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Rat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_instFieldRat = _init_l_Lean_Grind_instFieldRat();
lean_mark_persistent(l_Lean_Grind_instFieldRat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GrindInstances_Ring_Rat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_OfScientific(uint8_t builtin);
lean_object* initialize_Init_Data_Rat_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Int_DivMod_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GrindInstances_Ring_Rat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Rat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_DivMod_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_Ring_Rat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GrindInstances_Ring_Rat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GrindInstances_Ring_Rat(builtin);
}
#ifdef __cplusplus
}
#endif
