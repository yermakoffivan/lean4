// Lean compiler output
// Module: Lake.Util.NativeLib
// Imports: public import Init.System.IO import Init.Data.ToString.Macro import Init.System.Platform
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
extern uint8_t l_System_Platform_isWindows;
extern uint8_t l_System_Platform_isOSX;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_System_SearchPath_parse(lean_object*);
static lean_once_cell_t l_Lake_sharedLibExt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibExt___closed__0;
static lean_once_cell_t l_Lake_sharedLibExt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibExt___closed__1;
static lean_once_cell_t l_Lake_sharedLibExt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibExt___closed__2;
LEAN_EXPORT lean_object* l_Lake_sharedLibExt;
static lean_once_cell_t l_Lake_nameToStaticLib___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nameToStaticLib___closed__0;
static lean_once_cell_t l_Lake_nameToStaticLib___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nameToStaticLib___closed__1;
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_nameToSharedLib___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nameToSharedLib___closed__0;
static lean_once_cell_t l_Lake_nameToSharedLib___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nameToSharedLib___closed__1;
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_sharedLibPathEnvVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibPathEnvVar___closed__0;
static lean_once_cell_t l_Lake_sharedLibPathEnvVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibPathEnvVar___closed__1;
static lean_once_cell_t l_Lake_sharedLibPathEnvVar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_sharedLibPathEnvVar___closed__2;
LEAN_EXPORT lean_object* l_Lake_sharedLibPathEnvVar;
LEAN_EXPORT lean_object* l_Lake_getSearchPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getSearchPath___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lake_sharedLibExt___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("so", 2, 2);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_sharedLibExt___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("dylib", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_sharedLibExt___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("dll", 3, 3);
return v___x_3_;
}
}
static lean_object* _init_l_Lake_sharedLibExt(void){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_System_Platform_isWindows;
if (v___x_4_ == 0)
{
uint8_t v___x_5_; 
v___x_5_ = l_System_Platform_isOSX;
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lake_sharedLibExt___closed__0, &l_Lake_sharedLibExt___closed__0_once, _init_l_Lake_sharedLibExt___closed__0);
return v___x_6_;
}
else
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lake_sharedLibExt___closed__1, &l_Lake_sharedLibExt___closed__1_once, _init_l_Lake_sharedLibExt___closed__1);
return v___x_7_;
}
}
else
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lake_sharedLibExt___closed__2, &l_Lake_sharedLibExt___closed__2_once, _init_l_Lake_sharedLibExt___closed__2);
return v___x_8_;
}
}
}
static lean_object* _init_l_Lake_nameToStaticLib___closed__0(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("lib", 3, 3);
return v___x_9_;
}
}
static lean_object* _init_l_Lake_nameToStaticLib___closed__1(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked(".a", 2, 2);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib(lean_object* v_name_11_, uint8_t v_libPrefixOnWindows_12_){
_start:
{
if (v_libPrefixOnWindows_12_ == 0)
{
uint8_t v___x_18_; 
v___x_18_ = l_System_Platform_isWindows;
if (v___x_18_ == 0)
{
goto v___jp_13_;
}
else
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Lake_nameToStaticLib___closed__1, &l_Lake_nameToStaticLib___closed__1_once, _init_l_Lake_nameToStaticLib___closed__1);
v___x_20_ = lean_string_append(v_name_11_, v___x_19_);
return v___x_20_;
}
}
else
{
goto v___jp_13_;
}
v___jp_13_:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_14_ = lean_obj_once(&l_Lake_nameToStaticLib___closed__0, &l_Lake_nameToStaticLib___closed__0_once, _init_l_Lake_nameToStaticLib___closed__0);
v___x_15_ = lean_string_append(v___x_14_, v_name_11_);
lean_dec_ref(v_name_11_);
v___x_16_ = lean_obj_once(&l_Lake_nameToStaticLib___closed__1, &l_Lake_nameToStaticLib___closed__1_once, _init_l_Lake_nameToStaticLib___closed__1);
v___x_17_ = lean_string_append(v___x_15_, v___x_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nameToStaticLib___boxed(lean_object* v_name_21_, lean_object* v_libPrefixOnWindows_22_){
_start:
{
uint8_t v_libPrefixOnWindows_boxed_23_; lean_object* v_res_24_; 
v_libPrefixOnWindows_boxed_23_ = lean_unbox(v_libPrefixOnWindows_22_);
v_res_24_ = l_Lake_nameToStaticLib(v_name_21_, v_libPrefixOnWindows_boxed_23_);
return v_res_24_;
}
}
static lean_object* _init_l_Lake_nameToSharedLib___closed__0(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_25_;
}
}
static lean_object* _init_l_Lake_nameToSharedLib___closed__1(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("", 0, 0);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib(lean_object* v_name_27_, uint8_t v_libPrefixOnWindows_28_){
_start:
{
lean_object* v___y_30_; 
if (v_libPrefixOnWindows_28_ == 0)
{
uint8_t v___x_38_; 
v___x_38_ = l_System_Platform_isWindows;
if (v___x_38_ == 0)
{
goto v___jp_36_;
}
else
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&l_Lake_nameToSharedLib___closed__1, &l_Lake_nameToSharedLib___closed__1_once, _init_l_Lake_nameToSharedLib___closed__1);
v___y_30_ = v___x_39_;
goto v___jp_29_;
}
}
else
{
goto v___jp_36_;
}
v___jp_29_:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
lean_inc_ref(v___y_30_);
v___x_31_ = lean_string_append(v___y_30_, v_name_27_);
v___x_32_ = lean_obj_once(&l_Lake_nameToSharedLib___closed__0, &l_Lake_nameToSharedLib___closed__0_once, _init_l_Lake_nameToSharedLib___closed__0);
v___x_33_ = lean_string_append(v___x_31_, v___x_32_);
v___x_34_ = l_Lake_sharedLibExt;
v___x_35_ = lean_string_append(v___x_33_, v___x_34_);
return v___x_35_;
}
v___jp_36_:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l_Lake_nameToStaticLib___closed__0, &l_Lake_nameToStaticLib___closed__0_once, _init_l_Lake_nameToStaticLib___closed__0);
v___y_30_ = v___x_37_;
goto v___jp_29_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nameToSharedLib___boxed(lean_object* v_name_40_, lean_object* v_libPrefixOnWindows_41_){
_start:
{
uint8_t v_libPrefixOnWindows_boxed_42_; lean_object* v_res_43_; 
v_libPrefixOnWindows_boxed_42_ = lean_unbox(v_libPrefixOnWindows_41_);
v_res_43_ = l_Lake_nameToSharedLib(v_name_40_, v_libPrefixOnWindows_boxed_42_);
lean_dec_ref(v_name_40_);
return v_res_43_;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__0(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_mk_string_unchecked("LD_LIBRARY_PATH", 15, 15);
return v___x_44_;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__1(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_mk_string_unchecked("DYLD_LIBRARY_PATH", 17, 17);
return v___x_45_;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar___closed__2(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_mk_string_unchecked("PATH", 4, 4);
return v___x_46_;
}
}
static lean_object* _init_l_Lake_sharedLibPathEnvVar(void){
_start:
{
uint8_t v___x_47_; 
v___x_47_ = l_System_Platform_isWindows;
if (v___x_47_ == 0)
{
uint8_t v___x_48_; 
v___x_48_ = l_System_Platform_isOSX;
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l_Lake_sharedLibPathEnvVar___closed__0, &l_Lake_sharedLibPathEnvVar___closed__0_once, _init_l_Lake_sharedLibPathEnvVar___closed__0);
return v___x_49_;
}
else
{
lean_object* v___x_50_; 
v___x_50_ = lean_obj_once(&l_Lake_sharedLibPathEnvVar___closed__1, &l_Lake_sharedLibPathEnvVar___closed__1_once, _init_l_Lake_sharedLibPathEnvVar___closed__1);
return v___x_50_;
}
}
else
{
lean_object* v___x_51_; 
v___x_51_ = lean_obj_once(&l_Lake_sharedLibPathEnvVar___closed__2, &l_Lake_sharedLibPathEnvVar___closed__2_once, _init_l_Lake_sharedLibPathEnvVar___closed__2);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSearchPath(lean_object* v_envVar_52_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_io_getenv(v_envVar_52_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v___x_55_; 
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v_val_56_; lean_object* v___x_57_; 
v_val_56_ = lean_ctor_get(v___x_54_, 0);
lean_inc(v_val_56_);
lean_dec_ref(v___x_54_);
v___x_57_ = l_System_SearchPath_parse(v_val_56_);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSearchPath___boxed(lean_object* v_envVar_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lake_getSearchPath(v_envVar_58_);
lean_dec_ref(v_envVar_58_);
return v_res_60_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_NativeLib(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_sharedLibExt = _init_l_Lake_sharedLibExt();
lean_mark_persistent(l_Lake_sharedLibExt);
l_Lake_sharedLibPathEnvVar = _init_l_Lake_sharedLibPathEnvVar();
lean_mark_persistent(l_Lake_sharedLibPathEnvVar);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_NativeLib(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_NativeLib(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_NativeLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_NativeLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_NativeLib(builtin);
}
#ifdef __cplusplus
}
#endif
