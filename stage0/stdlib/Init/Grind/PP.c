// Lean compiler output
// Module: Init.Grind.PP
// Imports: public meta import Init.Data.String.Defs public import Init.Grind.Tactics
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDef_toCtorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__0;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__1;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__2;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__3;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__4;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__5;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__6;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_NodeDefUnexpander___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__0;
static lean_once_cell_t l_Lean_Grind_NodeDefUnexpander___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__1;
static lean_once_cell_t l_Lean_Grind_NodeDefUnexpander___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDef_toCtorIdx(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_node__def(lean_object* v_x_3_, lean_object* v_00_u03b1_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_box(0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___boxed(lean_object* v_x_7_, lean_object* v_00_u03b1_8_, lean_object* v_a_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Grind_node__def(v_x_7_, v_00_u03b1_8_, v_a_9_);
lean_dec(v_a_9_);
lean_dec(v_x_7_);
return v_res_10_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__0(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__1(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__2(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__3(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__4(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_15_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__3, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__3_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__3);
v___x_16_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__2, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__2_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__2);
v___x_17_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__1, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__1_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__1);
v___x_18_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__0, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__0_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__0);
v___x_19_ = l_Lean_Name_mkStr4(v___x_18_, v___x_17_, v___x_16_, v___x_15_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__5(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__6(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__5, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__5_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__5);
v___x_22_ = l_Lean_Name_mkStr1(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__7(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___redArg(lean_object* v_stx_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__4, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__4);
lean_inc(v_stx_24_);
v___x_27_ = l_Lean_Syntax_isOfKind(v_stx_24_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec(v_stx_24_);
v___x_28_ = lean_box(0);
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v_a_25_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = l_Lean_Syntax_getArg(v_stx_24_, v___x_30_);
lean_dec(v_stx_24_);
lean_inc(v___x_31_);
v___x_32_ = l_Lean_Syntax_matchesNull(v___x_31_, v___x_30_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
lean_dec(v___x_31_);
v___x_33_ = lean_box(0);
v___x_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v_a_25_);
return v___x_34_;
}
else
{
lean_object* v___x_35_; lean_object* v_id_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_35_ = lean_unsigned_to_nat(0u);
v_id_36_ = l_Lean_Syntax_getArg(v___x_31_, v___x_35_);
lean_dec(v___x_31_);
v___x_37_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__6, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__6_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__6);
lean_inc(v_id_36_);
v___x_38_ = l_Lean_Syntax_isOfKind(v_id_36_, v___x_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_40_; 
lean_dec(v_id_36_);
v___x_39_ = lean_box(0);
v___x_40_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v_a_25_);
return v___x_40_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_41_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__7, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__7_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__7);
v___x_42_ = l_Lean_TSyntax_getNat(v_id_36_);
lean_dec(v_id_36_);
v___x_43_ = l_Nat_reprFast(v___x_42_);
v___x_44_ = lean_string_append(v___x_41_, v___x_43_);
lean_dec_ref(v___x_43_);
v___x_45_ = lean_box(0);
v___x_46_ = l_Lean_Name_str___override(v___x_45_, v___x_44_);
v___x_47_ = lean_mk_syntax_ident(v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v_a_25_);
return v___x_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander(lean_object* v_stx_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Grind_nodeDefUnexpander___redArg(v_stx_49_, v_a_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___boxed(lean_object* v_stx_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Grind_nodeDefUnexpander(v_stx_53_, v_a_54_, v_a_55_);
lean_dec(v_a_54_);
return v_res_56_;
}
}
static lean_object* _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("NodeDef", 7, 7);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__1(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&l_Lean_Grind_NodeDefUnexpander___redArg___closed__0, &l_Lean_Grind_NodeDefUnexpander___redArg___closed__0_once, _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__0);
v___x_59_ = lean_box(0);
v___x_60_ = l_Lean_Name_str___override(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__2(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_Grind_NodeDefUnexpander___redArg___closed__1, &l_Lean_Grind_NodeDefUnexpander___redArg___closed__1_once, _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__1);
v___x_62_ = lean_mk_syntax_ident(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___redArg(lean_object* v_a_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Lean_Grind_NodeDefUnexpander___redArg___closed__2, &l_Lean_Grind_NodeDefUnexpander___redArg___closed__2_once, _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__2);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v_a_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander(lean_object* v_x_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Grind_NodeDefUnexpander___redArg(v_a_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___boxed(lean_object* v_x_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Grind_NodeDefUnexpander(v_x_70_, v_a_71_, v_a_72_);
lean_dec(v_a_71_);
lean_dec(v_x_70_);
return v_res_73_;
}
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_PP(builtin);
}
#ifdef __cplusplus
}
#endif
