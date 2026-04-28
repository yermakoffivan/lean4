// Lean compiler output
// Module: Init.Grind.Injective
// Imports: public import Init.Data.Function public import Init.NotationExtra import Init.Classical
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__0;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__1;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__2;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__3;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__4;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__5;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__6;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__7;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__8;
static lean_once_cell_t l_Lean_Grind_leftInvUnexpander___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_leftInvUnexpander___closed__9;
LEAN_EXPORT lean_object* l_Lean_Grind_leftInvUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_leftInvUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__3, &l_Lean_Grind_leftInvUnexpander___closed__3_once, _init_l_Lean_Grind_leftInvUnexpander___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__2, &l_Lean_Grind_leftInvUnexpander___closed__2_once, _init_l_Lean_Grind_leftInvUnexpander___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__1, &l_Lean_Grind_leftInvUnexpander___closed__1_once, _init_l_Lean_Grind_leftInvUnexpander___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__0, &l_Lean_Grind_leftInvUnexpander___closed__0_once, _init_l_Lean_Grind_leftInvUnexpander___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("term_⁻¹", 10, 7);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__5, &l_Lean_Grind_leftInvUnexpander___closed__5_once, _init_l_Lean_Grind_leftInvUnexpander___closed__5);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__7(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("⁻¹", 5, 2);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__8(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Grind_leftInvUnexpander___closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__8, &l_Lean_Grind_leftInvUnexpander___closed__8_once, _init_l_Lean_Grind_leftInvUnexpander___closed__8);
v___x_16_ = l_Lean_Name_mkStr1(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_leftInvUnexpander(lean_object* v_stx_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__4, &l_Lean_Grind_leftInvUnexpander___closed__4_once, _init_l_Lean_Grind_leftInvUnexpander___closed__4);
lean_inc(v_stx_17_);
v___x_21_ = l_Lean_Syntax_isOfKind(v_stx_17_, v___x_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
lean_dec(v_stx_17_);
v___x_22_ = lean_box(0);
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_a_19_);
return v___x_23_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_unsigned_to_nat(1u);
v___x_26_ = l_Lean_Syntax_getArg(v_stx_17_, v___x_25_);
lean_dec(v_stx_17_);
v___x_27_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_26_);
v___x_28_ = l_Lean_Syntax_matchesNull(v___x_26_, v___x_27_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_26_);
v___x_30_ = l_Lean_Syntax_matchesNull(v___x_26_, v___x_29_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; lean_object* v___x_32_; 
lean_dec(v___x_26_);
v___x_31_ = lean_box(0);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v_a_19_);
return v___x_32_;
}
else
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_33_ = l_Lean_Syntax_getArg(v___x_26_, v___x_24_);
v___x_34_ = l_Lean_Syntax_getArg(v___x_26_, v___x_27_);
lean_dec(v___x_26_);
v___x_35_ = l_Lean_SourceInfo_fromRef(v_a_18_, v___x_28_);
v___x_36_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__6, &l_Lean_Grind_leftInvUnexpander___closed__6_once, _init_l_Lean_Grind_leftInvUnexpander___closed__6);
v___x_37_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__7, &l_Lean_Grind_leftInvUnexpander___closed__7_once, _init_l_Lean_Grind_leftInvUnexpander___closed__7);
lean_inc_n(v___x_35_, 3);
v___x_38_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_35_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = l_Lean_Syntax_node2(v___x_35_, v___x_36_, v___x_33_, v___x_38_);
v___x_40_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__9, &l_Lean_Grind_leftInvUnexpander___closed__9_once, _init_l_Lean_Grind_leftInvUnexpander___closed__9);
v___x_41_ = l_Lean_Syntax_node1(v___x_35_, v___x_40_, v___x_34_);
v___x_42_ = l_Lean_Syntax_node2(v___x_35_, v___x_20_, v___x_39_, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v_a_19_);
return v___x_43_;
}
}
else
{
lean_object* v___x_44_; uint8_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_44_ = l_Lean_Syntax_getArg(v___x_26_, v___x_24_);
lean_dec(v___x_26_);
v___x_45_ = 0;
v___x_46_ = l_Lean_SourceInfo_fromRef(v_a_18_, v___x_45_);
v___x_47_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__6, &l_Lean_Grind_leftInvUnexpander___closed__6_once, _init_l_Lean_Grind_leftInvUnexpander___closed__6);
v___x_48_ = lean_obj_once(&l_Lean_Grind_leftInvUnexpander___closed__7, &l_Lean_Grind_leftInvUnexpander___closed__7_once, _init_l_Lean_Grind_leftInvUnexpander___closed__7);
lean_inc(v___x_46_);
v___x_49_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_46_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = l_Lean_Syntax_node2(v___x_46_, v___x_47_, v___x_44_, v___x_49_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v_a_19_);
return v___x_51_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_leftInvUnexpander___boxed(lean_object* v_stx_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_Grind_leftInvUnexpander(v_stx_52_, v_a_53_, v_a_54_);
lean_dec(v_a_53_);
return v_res_55_;
}
}
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_Classical(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_Injective(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_Injective(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Function(uint8_t builtin);
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
lean_object* initialize_Init_Classical(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Injective(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_Injective(builtin);
}
#ifdef __cplusplus
}
#endif
