// Lean compiler output
// Module: Lake.Config.Defaults
// Imports: public import Init.System.FilePath
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
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_defaultLakeDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultLakeDir___closed__0;
LEAN_EXPORT lean_object* l_Lake_defaultLakeDir;
static lean_once_cell_t l_Lake_defaultPackagesDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultPackagesDir___closed__0;
static lean_once_cell_t l_Lake_defaultPackagesDir___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultPackagesDir___closed__1;
LEAN_EXPORT lean_object* l_Lake_defaultPackagesDir;
static lean_once_cell_t l_Lake_defaultConfigFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultConfigFile___closed__0;
LEAN_EXPORT lean_object* l_Lake_defaultConfigFile;
static lean_once_cell_t l_Lake_defaultLeanConfigFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultLeanConfigFile___closed__0;
static lean_once_cell_t l_Lake_defaultLeanConfigFile___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultLeanConfigFile___closed__1;
LEAN_EXPORT lean_object* l_Lake_defaultLeanConfigFile;
static lean_once_cell_t l_Lake_defaultTomlConfigFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultTomlConfigFile___closed__0;
static lean_once_cell_t l_Lake_defaultTomlConfigFile___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultTomlConfigFile___closed__1;
LEAN_EXPORT lean_object* l_Lake_defaultTomlConfigFile;
static lean_once_cell_t l_Lake_defaultManifestFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultManifestFile___closed__0;
LEAN_EXPORT lean_object* l_Lake_defaultManifestFile;
static lean_once_cell_t l_Lake_defaultBuildDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultBuildDir___closed__0;
static lean_once_cell_t l_Lake_defaultBuildDir___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultBuildDir___closed__1;
LEAN_EXPORT lean_object* l_Lake_defaultBuildDir;
static lean_once_cell_t l_Lake_defaultLeanLibDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultLeanLibDir___closed__0;
static lean_once_cell_t l_Lake_defaultLeanLibDir___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultLeanLibDir___closed__1;
LEAN_EXPORT lean_object* l_Lake_defaultLeanLibDir;
LEAN_EXPORT lean_object* l_Lake_defaultNativeLibDir;
static lean_once_cell_t l_Lake_defaultBinDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultBinDir___closed__0;
LEAN_EXPORT lean_object* l_Lake_defaultBinDir;
static lean_once_cell_t l_Lake_defaultIrDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_defaultIrDir___closed__0;
LEAN_EXPORT lean_object* l_Lake_defaultIrDir;
static lean_object* _init_l_Lake_defaultLakeDir___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked(".lake", 5, 5);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_defaultLakeDir(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l_Lake_defaultLakeDir___closed__0, &l_Lake_defaultLakeDir___closed__0_once, _init_l_Lake_defaultLakeDir___closed__0);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_defaultPackagesDir___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("packages", 8, 8);
return v___x_3_;
}
}
static lean_object* _init_l_Lake_defaultPackagesDir___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lake_defaultPackagesDir___closed__0, &l_Lake_defaultPackagesDir___closed__0_once, _init_l_Lake_defaultPackagesDir___closed__0);
v___x_5_ = lean_obj_once(&l_Lake_defaultLakeDir___closed__0, &l_Lake_defaultLakeDir___closed__0_once, _init_l_Lake_defaultLakeDir___closed__0);
v___x_6_ = l_System_FilePath_join(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lake_defaultPackagesDir(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lake_defaultPackagesDir___closed__1, &l_Lake_defaultPackagesDir___closed__1_once, _init_l_Lake_defaultPackagesDir___closed__1);
return v___x_7_;
}
}
static lean_object* _init_l_Lake_defaultConfigFile___closed__0(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("lakefile", 8, 8);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_defaultConfigFile(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lake_defaultConfigFile___closed__0, &l_Lake_defaultConfigFile___closed__0_once, _init_l_Lake_defaultConfigFile___closed__0);
return v___x_9_;
}
}
static lean_object* _init_l_Lake_defaultLeanConfigFile___closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_10_;
}
}
static lean_object* _init_l_Lake_defaultLeanConfigFile___closed__1(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_obj_once(&l_Lake_defaultLeanConfigFile___closed__0, &l_Lake_defaultLeanConfigFile___closed__0_once, _init_l_Lake_defaultLeanConfigFile___closed__0);
v___x_12_ = lean_obj_once(&l_Lake_defaultConfigFile___closed__0, &l_Lake_defaultConfigFile___closed__0_once, _init_l_Lake_defaultConfigFile___closed__0);
v___x_13_ = l_System_FilePath_addExtension(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lake_defaultLeanConfigFile(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lake_defaultLeanConfigFile___closed__1, &l_Lake_defaultLeanConfigFile___closed__1_once, _init_l_Lake_defaultLeanConfigFile___closed__1);
return v___x_14_;
}
}
static lean_object* _init_l_Lake_defaultTomlConfigFile___closed__0(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("toml", 4, 4);
return v___x_15_;
}
}
static lean_object* _init_l_Lake_defaultTomlConfigFile___closed__1(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_obj_once(&l_Lake_defaultTomlConfigFile___closed__0, &l_Lake_defaultTomlConfigFile___closed__0_once, _init_l_Lake_defaultTomlConfigFile___closed__0);
v___x_17_ = lean_obj_once(&l_Lake_defaultConfigFile___closed__0, &l_Lake_defaultConfigFile___closed__0_once, _init_l_Lake_defaultConfigFile___closed__0);
v___x_18_ = l_System_FilePath_addExtension(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l_Lake_defaultTomlConfigFile(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_obj_once(&l_Lake_defaultTomlConfigFile___closed__1, &l_Lake_defaultTomlConfigFile___closed__1_once, _init_l_Lake_defaultTomlConfigFile___closed__1);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_defaultManifestFile___closed__0(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("lake-manifest.json", 18, 18);
return v___x_20_;
}
}
static lean_object* _init_l_Lake_defaultManifestFile(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&l_Lake_defaultManifestFile___closed__0, &l_Lake_defaultManifestFile___closed__0_once, _init_l_Lake_defaultManifestFile___closed__0);
return v___x_21_;
}
}
static lean_object* _init_l_Lake_defaultBuildDir___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("build", 5, 5);
return v___x_22_;
}
}
static lean_object* _init_l_Lake_defaultBuildDir___closed__1(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l_Lake_defaultBuildDir___closed__0, &l_Lake_defaultBuildDir___closed__0_once, _init_l_Lake_defaultBuildDir___closed__0);
v___x_24_ = lean_obj_once(&l_Lake_defaultLakeDir___closed__0, &l_Lake_defaultLakeDir___closed__0_once, _init_l_Lake_defaultLakeDir___closed__0);
v___x_25_ = l_System_FilePath_join(v___x_24_, v___x_23_);
return v___x_25_;
}
}
static lean_object* _init_l_Lake_defaultBuildDir(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Lake_defaultBuildDir___closed__1, &l_Lake_defaultBuildDir___closed__1_once, _init_l_Lake_defaultBuildDir___closed__1);
return v___x_26_;
}
}
static lean_object* _init_l_Lake_defaultLeanLibDir___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("lib", 3, 3);
return v___x_27_;
}
}
static lean_object* _init_l_Lake_defaultLeanLibDir___closed__1(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_obj_once(&l_Lake_defaultLeanConfigFile___closed__0, &l_Lake_defaultLeanConfigFile___closed__0_once, _init_l_Lake_defaultLeanConfigFile___closed__0);
v___x_29_ = lean_obj_once(&l_Lake_defaultLeanLibDir___closed__0, &l_Lake_defaultLeanLibDir___closed__0_once, _init_l_Lake_defaultLeanLibDir___closed__0);
v___x_30_ = l_System_FilePath_join(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_Lake_defaultLeanLibDir(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_obj_once(&l_Lake_defaultLeanLibDir___closed__1, &l_Lake_defaultLeanLibDir___closed__1_once, _init_l_Lake_defaultLeanLibDir___closed__1);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_defaultNativeLibDir(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l_Lake_defaultLeanLibDir___closed__0, &l_Lake_defaultLeanLibDir___closed__0_once, _init_l_Lake_defaultLeanLibDir___closed__0);
return v___x_32_;
}
}
static lean_object* _init_l_Lake_defaultBinDir___closed__0(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("bin", 3, 3);
return v___x_33_;
}
}
static lean_object* _init_l_Lake_defaultBinDir(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_obj_once(&l_Lake_defaultBinDir___closed__0, &l_Lake_defaultBinDir___closed__0_once, _init_l_Lake_defaultBinDir___closed__0);
return v___x_34_;
}
}
static lean_object* _init_l_Lake_defaultIrDir___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("ir", 2, 2);
return v___x_35_;
}
}
static lean_object* _init_l_Lake_defaultIrDir(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l_Lake_defaultIrDir___closed__0, &l_Lake_defaultIrDir___closed__0_once, _init_l_Lake_defaultIrDir___closed__0);
return v___x_36_;
}
}
lean_object* runtime_initialize_Init_System_FilePath(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Defaults(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_defaultLakeDir = _init_l_Lake_defaultLakeDir();
lean_mark_persistent(l_Lake_defaultLakeDir);
l_Lake_defaultPackagesDir = _init_l_Lake_defaultPackagesDir();
lean_mark_persistent(l_Lake_defaultPackagesDir);
l_Lake_defaultConfigFile = _init_l_Lake_defaultConfigFile();
lean_mark_persistent(l_Lake_defaultConfigFile);
l_Lake_defaultLeanConfigFile = _init_l_Lake_defaultLeanConfigFile();
lean_mark_persistent(l_Lake_defaultLeanConfigFile);
l_Lake_defaultTomlConfigFile = _init_l_Lake_defaultTomlConfigFile();
lean_mark_persistent(l_Lake_defaultTomlConfigFile);
l_Lake_defaultManifestFile = _init_l_Lake_defaultManifestFile();
lean_mark_persistent(l_Lake_defaultManifestFile);
l_Lake_defaultBuildDir = _init_l_Lake_defaultBuildDir();
lean_mark_persistent(l_Lake_defaultBuildDir);
l_Lake_defaultLeanLibDir = _init_l_Lake_defaultLeanLibDir();
lean_mark_persistent(l_Lake_defaultLeanLibDir);
l_Lake_defaultNativeLibDir = _init_l_Lake_defaultNativeLibDir();
lean_mark_persistent(l_Lake_defaultNativeLibDir);
l_Lake_defaultBinDir = _init_l_Lake_defaultBinDir();
lean_mark_persistent(l_Lake_defaultBinDir);
l_Lake_defaultIrDir = _init_l_Lake_defaultIrDir();
lean_mark_persistent(l_Lake_defaultIrDir);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Defaults(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_FilePath(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Defaults(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Defaults(builtin);
}
#ifdef __cplusplus
}
#endif
