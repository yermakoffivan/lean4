// Lean compiler output
// Module: Lean.Util.RecDepth
// Imports: public import Lean.Data.Options
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
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_defaultMaxRecDepth;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_maxRecDepth;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
lean_inc(v_defValue_5_);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v_defValue_5_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_9_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_9_, 0, v_name_1_);
lean_ctor_set(v___x_9_, 1, v_ref_3_);
lean_ctor_set(v___x_9_, 2, v___x_8_);
lean_ctor_set(v___x_9_, 3, v_descr_6_);
lean_ctor_set(v___x_9_, 4, v_deprecation_x3f_7_);
v___x_10_ = lean_register_option(v_name_1_, v___x_9_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_18_; 
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_18_ == 0)
{
lean_object* v_unused_19_; 
v_unused_19_ = lean_ctor_get(v___x_10_, 0);
lean_dec(v_unused_19_);
v___x_12_ = v___x_10_;
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
else
{
lean_dec(v___x_10_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
lean_inc(v_defValue_5_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v_name_1_);
lean_ctor_set(v___x_14_, 1, v_defValue_5_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_14_);
v___x_16_ = v___x_12_;
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
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec(v_name_1_);
v_a_20_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_10_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_10_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_28_, lean_object* v_decl_29_, lean_object* v_ref_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0(v_name_28_, v_decl_29_, v_ref_30_);
lean_dec_ref(v_decl_29_);
return v_res_32_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_33_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_35_ = l_Lean_Name_mkStr1(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("maximum recursion depth for many Lean procedures, 0 means no limit", 66, 66);
return v___x_36_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_37_ = lean_box(0);
v___x_38_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__2_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_39_ = l_Lean_defaultMaxRecDepth;
v___x_40_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set(v___x_40_, 2, v___x_37_);
return v___x_40_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__0_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_43_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__4_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_44_ = l_Lean_Name_mkStr2(v___x_43_, v___x_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_46_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__1_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_47_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__3_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_48_ = lean_obj_once(&l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_, &l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__once, _init_l___private_Lean_Util_RecDepth_0__Lean_initFn___closed__5_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_);
v___x_49_ = l_Lean_Option_register___at___00__private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4__spec__0(v___x_46_, v___x_47_, v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4____boxed(lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_();
return v_res_51_;
}
}
lean_object* runtime_initialize_Lean_Data_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_RecDepth(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Util_RecDepth_0__Lean_initFn_00___x40_Lean_Util_RecDepth_1478977426____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_maxRecDepth = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_maxRecDepth);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_RecDepth(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_RecDepth(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_RecDepth(builtin);
}
#ifdef __cplusplus
}
#endif
