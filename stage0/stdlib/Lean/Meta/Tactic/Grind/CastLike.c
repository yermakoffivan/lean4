// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.CastLike
// Imports: public import Lean.Expr import Init.Grind.Ring.Envelope import Init.Grind.Module.Envelope
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
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_isCastLikeDeclName___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___closed__17;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeDeclName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeFn___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeApp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeApp___boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("ToInt", 5, 5);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("toInt", 5, 5);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__3, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__3_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__2, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__2_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__1, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__1_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__0, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__0_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("NatCast", 7, 7);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__6(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("natCast", 7, 7);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__7(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__6, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__6_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__6);
v___x_13_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__5, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__5_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__5);
v___x_14_ = l_Lean_Name_mkStr2(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__8(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("IntCast", 7, 7);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__9(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked("intCast", 7, 7);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__9, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__9_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__9);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__8, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__8_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__8);
v___x_19_ = l_Lean_Name_mkStr2(v___x_18_, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__11(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("Ring", 4, 4);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__12(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("OfSemiring", 10, 10);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__13(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("toQ", 3, 3);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__14(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__13, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__13_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__13);
v___x_24_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__12, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__12_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__12);
v___x_25_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__11, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__11_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__11);
v___x_26_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__1, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__1_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__1);
v___x_27_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__0, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__0_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__0);
v___x_28_ = l_Lean_Name_mkStr5(v___x_27_, v___x_26_, v___x_25_, v___x_24_, v___x_23_);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__15(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("IntModule", 9, 9);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__16(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("OfNatModule", 11, 11);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__17(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_31_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__13, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__13_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__13);
v___x_32_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__16, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__16_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__16);
v___x_33_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__15, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__15_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__15);
v___x_34_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__1, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__1_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__1);
v___x_35_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__0, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__0_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__0);
v___x_36_ = l_Lean_Name_mkStr5(v___x_35_, v___x_34_, v___x_33_, v___x_32_, v___x_31_);
return v___x_36_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeDeclName(lean_object* v_declName_37_){
_start:
{
uint8_t v___y_39_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_46_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__14, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__14_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__14);
v___x_47_ = lean_name_eq(v_declName_37_, v___x_46_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__17, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__17_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__17);
v___x_49_ = lean_name_eq(v_declName_37_, v___x_48_);
v___y_39_ = v___x_49_;
goto v___jp_38_;
}
else
{
v___y_39_ = v___x_47_;
goto v___jp_38_;
}
v___jp_38_:
{
if (v___y_39_ == 0)
{
lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__4, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__4_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__4);
v___x_41_ = lean_name_eq(v_declName_37_, v___x_40_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__7, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__7_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__7);
v___x_43_ = lean_name_eq(v_declName_37_, v___x_42_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_obj_once(&l_Lean_Meta_Grind_isCastLikeDeclName___closed__10, &l_Lean_Meta_Grind_isCastLikeDeclName___closed__10_once, _init_l_Lean_Meta_Grind_isCastLikeDeclName___closed__10);
v___x_45_ = lean_name_eq(v_declName_37_, v___x_44_);
return v___x_45_;
}
else
{
return v___x_43_;
}
}
else
{
return v___x_41_;
}
}
else
{
return v___y_39_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeDeclName___boxed(lean_object* v_declName_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lean_Meta_Grind_isCastLikeDeclName(v_declName_50_);
lean_dec(v_declName_50_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeFn(lean_object* v_f_53_){
_start:
{
if (lean_obj_tag(v_f_53_) == 4)
{
lean_object* v_declName_54_; uint8_t v___x_55_; 
v_declName_54_ = lean_ctor_get(v_f_53_, 0);
v___x_55_ = l_Lean_Meta_Grind_isCastLikeDeclName(v_declName_54_);
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeFn___boxed(lean_object* v_f_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Lean_Meta_Grind_isCastLikeFn(v_f_57_);
lean_dec_ref(v_f_57_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isCastLikeApp(lean_object* v_e_60_){
_start:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = l_Lean_Expr_getAppFn(v_e_60_);
v___x_62_ = l_Lean_Meta_Grind_isCastLikeFn(v___x_61_);
lean_dec_ref(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isCastLikeApp___boxed(lean_object* v_e_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l_Lean_Meta_Grind_isCastLikeApp(v_e_63_);
lean_dec_ref(v_e_63_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_Envelope(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CastLike(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_CastLike(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_Envelope(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_CastLike(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CastLike(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_CastLike(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_CastLike(builtin);
}
#ifdef __cplusplus
}
#endif
