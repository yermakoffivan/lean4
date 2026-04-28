// Lean compiler output
// Module: Lean.Compiler.ModPkgExt
// Imports: public import Lean.Environment import Lean.Compiler.NameMangling
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPackageSymbolPrefix(lean_object*);
lean_object* l_Lean_Name_mangle(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__0;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__1;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__2;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__3;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__4;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__5;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__6;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__7;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__8;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__9;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__10;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__11;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__12;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__13;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__14;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__15;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__16;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__17;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__18;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__19;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__20;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__21;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__22;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__23;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__24;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__25;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__26;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__27;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__4(lean_object*);
static lean_once_cell_t l_Lean_registerModuleEnvExtension___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___redArg___closed__0;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___redArg___closed__1;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___redArg___closed__2;
static lean_once_cell_t l_Lean_registerModuleEnvExtension___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerModuleEnvExtension___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0;
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0;
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0;
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1;
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2;
static lean_once_cell_t l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackageByIdx_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackageByIdx_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackage_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_setModulePackage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_symbol_stem(lean_object*, lean_object*);
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__3, &l_Lean_registerModuleEnvExtension___auto__1___closed__3_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__2, &l_Lean_registerModuleEnvExtension___auto__1___closed__2_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__1, &l_Lean_registerModuleEnvExtension___auto__1___closed__1_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__6, &l_Lean_registerModuleEnvExtension___auto__1___closed__6_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__6);
v___x_14_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__2, &l_Lean_registerModuleEnvExtension___auto__1___closed__2_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__2);
v___x_15_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__1, &l_Lean_registerModuleEnvExtension___auto__1___closed__1_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__1);
v___x_16_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__8, &l_Lean_registerModuleEnvExtension___auto__1___closed__8_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__10, &l_Lean_registerModuleEnvExtension___auto__1___closed__10_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__10);
v___x_23_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__2, &l_Lean_registerModuleEnvExtension___auto__1___closed__2_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__2);
v___x_24_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__1, &l_Lean_registerModuleEnvExtension___auto__1___closed__1_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__1);
v___x_25_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__10, &l_Lean_registerModuleEnvExtension___auto__1___closed__10_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__12, &l_Lean_registerModuleEnvExtension___auto__1___closed__12_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__12);
v___x_30_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__5, &l_Lean_registerModuleEnvExtension___auto__1___closed__5_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__15(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("declName", 8, 8);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_34_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__15, &l_Lean_registerModuleEnvExtension___auto__1___closed__15_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__15);
v___x_35_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__14, &l_Lean_registerModuleEnvExtension___auto__1___closed__14_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__14);
v___x_36_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__1, &l_Lean_registerModuleEnvExtension___auto__1___closed__1_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__1);
v___x_37_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_38_ = l_Lean_Name_mkStr4(v___x_37_, v___x_36_, v___x_35_, v___x_34_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__17(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("decl_name%", 10, 10);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__18(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__17, &l_Lean_registerModuleEnvExtension___auto__1___closed__17_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__17);
v___x_41_ = l_Lean_mkAtom(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__19(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__18, &l_Lean_registerModuleEnvExtension___auto__1___closed__18_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__18);
v___x_43_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__5, &l_Lean_registerModuleEnvExtension___auto__1___closed__5_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5);
v___x_44_ = lean_array_push(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__20(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__19, &l_Lean_registerModuleEnvExtension___auto__1___closed__19_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__19);
v___x_46_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__16, &l_Lean_registerModuleEnvExtension___auto__1___closed__16_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__16);
v___x_47_ = lean_box(2);
v___x_48_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__21(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__20, &l_Lean_registerModuleEnvExtension___auto__1___closed__20_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__20);
v___x_50_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__13, &l_Lean_registerModuleEnvExtension___auto__1___closed__13_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__13);
v___x_51_ = lean_array_push(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__22(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__21, &l_Lean_registerModuleEnvExtension___auto__1___closed__21_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__21);
v___x_53_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__11, &l_Lean_registerModuleEnvExtension___auto__1___closed__11_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__11);
v___x_54_ = lean_box(2);
v___x_55_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__23(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__22, &l_Lean_registerModuleEnvExtension___auto__1___closed__22_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__22);
v___x_57_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__5, &l_Lean_registerModuleEnvExtension___auto__1___closed__5_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5);
v___x_58_ = lean_array_push(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__24(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__23, &l_Lean_registerModuleEnvExtension___auto__1___closed__23_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__23);
v___x_60_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__9, &l_Lean_registerModuleEnvExtension___auto__1___closed__9_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__9);
v___x_61_ = lean_box(2);
v___x_62_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__25(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__24, &l_Lean_registerModuleEnvExtension___auto__1___closed__24_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__24);
v___x_64_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__5, &l_Lean_registerModuleEnvExtension___auto__1___closed__5_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5);
v___x_65_ = lean_array_push(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__26(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__25, &l_Lean_registerModuleEnvExtension___auto__1___closed__25_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__25);
v___x_67_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__7, &l_Lean_registerModuleEnvExtension___auto__1___closed__7_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__7);
v___x_68_ = lean_box(2);
v___x_69_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__27(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__26, &l_Lean_registerModuleEnvExtension___auto__1___closed__26_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__26);
v___x_71_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__5, &l_Lean_registerModuleEnvExtension___auto__1___closed__5_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__5);
v___x_72_ = lean_array_push(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1___closed__28(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_73_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__27, &l_Lean_registerModuleEnvExtension___auto__1___closed__27_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__27);
v___x_74_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__4, &l_Lean_registerModuleEnvExtension___auto__1___closed__4_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__4);
v___x_75_ = lean_box(2);
v___x_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
lean_ctor_set(v___x_76_, 2, v___x_73_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___auto__1(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__28, &l_Lean_registerModuleEnvExtension___auto__1___closed__28_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__28);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__0(lean_object* v_mkInitial_78_, lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_apply_1(v_mkInitial_78_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__0___boxed(lean_object* v_mkInitial_83_, lean_object* v_x_84_, lean_object* v_x_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_registerModuleEnvExtension___redArg___lam__0(v_mkInitial_83_, v_x_84_, v_x_85_);
lean_dec_ref(v_x_85_);
lean_dec_ref(v_x_84_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__1(lean_object* v_s_88_, lean_object* v_x_89_){
_start:
{
lean_inc(v_s_88_);
return v_s_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__1___boxed(lean_object* v_s_90_, lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_registerModuleEnvExtension___redArg___lam__1(v_s_90_, v_x_91_);
lean_dec(v_x_91_);
lean_dec(v_s_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__2(lean_object* v_x_93_, lean_object* v_s_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_mk_empty_array_with_capacity(v___x_95_);
v___x_97_ = lean_array_push(v___x_96_, v_s_94_);
lean_inc_ref_n(v___x_97_, 2);
v___x_98_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
lean_ctor_set(v___x_98_, 2, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__2___boxed(lean_object* v_x_99_, lean_object* v_s_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_registerModuleEnvExtension___redArg___lam__2(v_x_99_, v_s_100_);
lean_dec_ref(v_x_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__3(lean_object* v_x_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_box(0);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__3___boxed(lean_object* v_x_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_registerModuleEnvExtension___redArg___lam__3(v_x_104_);
lean_dec(v_x_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___lam__4(lean_object* v_s_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_unsigned_to_nat(1u);
v___x_108_ = lean_mk_empty_array_with_capacity(v___x_107_);
v___x_109_ = lean_array_push(v___x_108_, v_s_106_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___redArg___closed__0(void){
_start:
{
lean_object* v___f_110_; 
v___f_110_ = lean_alloc_closure((void*)(l_Lean_registerModuleEnvExtension___redArg___lam__1___boxed), 2, 0);
return v___f_110_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___redArg___closed__1(void){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Lean_registerModuleEnvExtension___redArg___lam__2___boxed), 2, 0);
return v___f_111_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___redArg___closed__2(void){
_start:
{
lean_object* v___f_112_; 
v___f_112_ = lean_alloc_closure((void*)(l_Lean_registerModuleEnvExtension___redArg___lam__3___boxed), 1, 0);
return v___f_112_;
}
}
static lean_object* _init_l_Lean_registerModuleEnvExtension___redArg___closed__3(void){
_start:
{
lean_object* v___f_113_; 
v___f_113_ = lean_alloc_closure((void*)(l_Lean_registerModuleEnvExtension___redArg___lam__4), 1, 0);
return v___f_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg(lean_object* v_mkInitial_114_, lean_object* v_name_115_){
_start:
{
lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
lean_inc_ref(v_mkInitial_114_);
v___f_117_ = lean_alloc_closure((void*)(l_Lean_registerModuleEnvExtension___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_117_, 0, v_mkInitial_114_);
v___f_118_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__0, &l_Lean_registerModuleEnvExtension___redArg___closed__0_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__0);
v___f_119_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__1, &l_Lean_registerModuleEnvExtension___redArg___closed__1_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__1);
v___f_120_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__2, &l_Lean_registerModuleEnvExtension___redArg___closed__2_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__2);
v___f_121_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__3, &l_Lean_registerModuleEnvExtension___redArg___closed__3_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__3);
v___x_122_ = lean_box(2);
v___x_123_ = lean_box(0);
v___x_124_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_124_, 0, v_name_115_);
lean_ctor_set(v___x_124_, 1, v_mkInitial_114_);
lean_ctor_set(v___x_124_, 2, v___f_117_);
lean_ctor_set(v___x_124_, 3, v___f_118_);
lean_ctor_set(v___x_124_, 4, v___f_119_);
lean_ctor_set(v___x_124_, 5, v___f_120_);
lean_ctor_set(v___x_124_, 6, v___x_122_);
lean_ctor_set(v___x_124_, 7, v___x_123_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___f_121_);
v___x_126_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___redArg___boxed(lean_object* v_mkInitial_127_, lean_object* v_name_128_, lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_registerModuleEnvExtension___redArg(v_mkInitial_127_, v_name_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension(lean_object* v_00_u03c3_131_, lean_object* v_inst_132_, lean_object* v_mkInitial_133_, lean_object* v_name_134_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_registerModuleEnvExtension___redArg(v_mkInitial_133_, v_name_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerModuleEnvExtension___boxed(lean_object* v_00_u03c3_137_, lean_object* v_inst_138_, lean_object* v_mkInitial_139_, lean_object* v_name_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_registerModuleEnvExtension(v_00_u03c3_137_, v_inst_138_, v_mkInitial_139_, v_name_140_);
lean_dec(v_inst_138_);
return v_res_142_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_mk_string_unchecked("(`Inhabited.default` for `IO.Error`)", 36, 36);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__0);
v___x_145_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0(lean_object* v_x_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___closed__1);
v___x_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___boxed(lean_object* v_x_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0(v_x_151_, v___y_152_);
lean_dec_ref(v___y_152_);
lean_dec_ref(v_x_151_);
return v_res_154_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_mk_empty_array_with_capacity(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__0);
v___x_158_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
lean_ctor_set(v___x_158_, 2, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2(lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___closed__1);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___boxed(lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2(v_x_162_, v_x_163_);
lean_dec(v_x_163_);
lean_dec_ref(v_x_162_);
return v_res_164_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0(void){
_start:
{
lean_object* v___f_165_; 
v___f_165_ = lean_alloc_closure((void*)(l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__0___boxed), 3, 0);
return v___f_165_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1(void){
_start:
{
lean_object* v___f_166_; 
v___f_166_ = lean_alloc_closure((void*)(l_Lean_ModuleEnvExtension_instInhabited___aux__1___lam__2___boxed), 2, 0);
return v___f_166_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_instInhabitedEnvExtension_default(lean_box(0));
return v___x_167_;
}
}
static lean_object* _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3(void){
_start:
{
lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___f_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___f_168_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__2, &l_Lean_registerModuleEnvExtension___redArg___closed__2_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__2);
v___f_169_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__1);
v___f_170_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___redArg___closed__0, &l_Lean_registerModuleEnvExtension___redArg___closed__0_once, _init_l_Lean_registerModuleEnvExtension___redArg___closed__0);
v___f_171_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__0);
v___x_172_ = lean_box(0);
v___x_173_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__2);
v___x_174_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___f_171_);
lean_ctor_set(v___x_174_, 3, v___f_170_);
lean_ctor_set(v___x_174_, 4, v___f_169_);
lean_ctor_set(v___x_174_, 5, v___f_168_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___aux__1(lean_object* v_00_u03c3_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited(lean_object* v_00_u03c3_177_, lean_object* v_inst_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3, &l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3_once, _init_l_Lean_ModuleEnvExtension_instInhabited___aux__1___closed__3);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_instInhabited___boxed(lean_object* v_00_u03c3_180_, lean_object* v_inst_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_ModuleEnvExtension_instInhabited(v_00_u03c3_180_, v_inst_181_);
lean_dec(v_inst_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg(lean_object* v_inst_183_, lean_object* v_ext_184_, lean_object* v_env_185_, lean_object* v_idx_186_){
_start:
{
uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_187_ = 0;
v___x_188_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v_inst_183_, v_ext_184_, v_env_185_, v_idx_186_, v___x_187_);
v___x_189_ = lean_unsigned_to_nat(0u);
v___x_190_ = lean_array_get_size(v___x_188_);
v___x_191_ = lean_nat_dec_lt(v___x_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
lean_dec_ref(v___x_188_);
v___x_192_ = lean_box(0);
return v___x_192_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_array_fget(v___x_188_, v___x_189_);
lean_dec_ref(v___x_188_);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg___boxed(lean_object* v_inst_195_, lean_object* v_ext_196_, lean_object* v_env_197_, lean_object* v_idx_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg(v_inst_195_, v_ext_196_, v_env_197_, v_idx_198_);
lean_dec(v_idx_198_);
lean_dec_ref(v_env_197_);
lean_dec_ref(v_ext_196_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f(lean_object* v_00_u03c3_200_, lean_object* v_inst_201_, lean_object* v_ext_202_, lean_object* v_env_203_, lean_object* v_idx_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg(v_inst_201_, v_ext_202_, v_env_203_, v_idx_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleEnvExtension_getStateByIdx_x3f___boxed(lean_object* v_00_u03c3_206_, lean_object* v_inst_207_, lean_object* v_ext_208_, lean_object* v_env_209_, lean_object* v_idx_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_ModuleEnvExtension_getStateByIdx_x3f(v_00_u03c3_206_, v_inst_207_, v_ext_208_, v_env_209_, v_idx_210_);
lean_dec(v_idx_210_);
lean_dec_ref(v_env_209_);
lean_dec_ref(v_ext_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(lean_object* v___x_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2____boxed(lean_object* v___x_215_, lean_object* v___y_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(v___x_215_);
return v_res_217_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_218_; lean_object* v___f_219_; 
v___x_218_ = lean_box(0);
v___f_219_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___lam__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_219_, 0, v___x_218_);
return v___f_219_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_220_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__1_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_222_ = lean_box(0);
v___x_223_ = l_Lean_Name_str___override(v___x_222_, v___x_221_);
return v___x_223_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_225_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__2_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_226_ = l_Lean_Name_str___override(v___x_225_, v___x_224_);
return v___x_226_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_mk_string_unchecked("Compiler", 8, 8);
return v___x_227_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__4_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_229_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__3_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_230_ = l_Lean_Name_str___override(v___x_229_, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lean_mk_string_unchecked("ModPkgExt", 9, 9);
return v___x_231_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__6_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_233_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__5_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_234_ = l_Lean_Name_str___override(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__7_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_237_ = l_Lean_Name_num___override(v___x_236_, v___x_235_);
return v___x_237_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Lean_registerModuleEnvExtension___auto__1___closed__0, &l_Lean_registerModuleEnvExtension___auto__1___closed__0_once, _init_l_Lean_registerModuleEnvExtension___auto__1___closed__0);
v___x_239_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__8_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_240_ = l_Lean_Name_str___override(v___x_239_, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_mk_string_unchecked("modPkgExt", 9, 9);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__10_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_243_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__9_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_244_ = l_Lean_Name_str___override(v___x_243_, v___x_242_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___f_246_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__0_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_247_ = lean_obj_once(&l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_, &l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn___closed__11_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_);
v___x_248_ = l_Lean_registerModuleEnvExtension___redArg(v___f_246_, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2____boxed(lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_();
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackageByIdx_x3f(lean_object* v_env_251_, lean_object* v_idx_252_){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = lean_box(0);
v___x_254_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v___x_255_ = l_Lean_ModuleEnvExtension_getStateByIdx_x3f___redArg(v___x_253_, v___x_254_, v_env_251_, v_idx_252_);
if (lean_obj_tag(v___x_255_) == 0)
{
return v___x_253_;
}
else
{
lean_object* v_val_256_; 
v_val_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_val_256_);
lean_dec_ref(v___x_255_);
return v_val_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackageByIdx_x3f___boxed(lean_object* v_env_257_, lean_object* v_idx_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_Environment_getModulePackageByIdx_x3f(v_env_257_, v_idx_258_);
lean_dec(v_idx_258_);
lean_dec_ref(v_env_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModulePackage_x3f(lean_object* v_env_260_){
_start:
{
lean_object* v___x_261_; lean_object* v_toEnvExtension_262_; lean_object* v_asyncMode_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_261_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_262_ = lean_ctor_get(v___x_261_, 0);
v_asyncMode_263_ = lean_ctor_get(v_toEnvExtension_262_, 2);
v___x_264_ = lean_box(0);
v___x_265_ = lean_box(0);
v___x_266_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_264_, v___x_261_, v_env_260_, v_asyncMode_263_, v___x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_setModulePackage(lean_object* v_pkg_x3f_267_, lean_object* v_env_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v___x_270_ = l_Lean_PersistentEnvExtension_setState___redArg(v___x_269_, v_env_268_, v_pkg_x3f_267_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* lean_get_symbol_stem(lean_object* v_env_271_, lean_object* v_declName_272_){
_start:
{
lean_object* v___y_274_; lean_object* v___x_277_; 
v___x_277_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_271_, v_declName_272_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_278_; lean_object* v_toEnvExtension_279_; lean_object* v_asyncMode_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_278_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_279_ = lean_ctor_get(v___x_278_, 0);
v_asyncMode_280_ = lean_ctor_get(v_toEnvExtension_279_, 2);
v___x_281_ = lean_box(0);
v___x_282_ = lean_box(0);
v___x_283_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_281_, v___x_278_, v_env_271_, v_asyncMode_280_, v___x_282_);
v___y_274_ = v___x_283_;
goto v___jp_273_;
}
else
{
lean_object* v_val_284_; lean_object* v___x_285_; 
v_val_284_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_val_284_);
lean_dec_ref(v___x_277_);
v___x_285_ = l_Lean_Environment_getModulePackageByIdx_x3f(v_env_271_, v_val_284_);
lean_dec(v_val_284_);
lean_dec_ref(v_env_271_);
v___y_274_ = v___x_285_;
goto v___jp_273_;
}
v___jp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = l_Lean_mkPackageSymbolPrefix(v___y_274_);
lean_dec(v___y_274_);
v___x_276_ = l_Lean_Name_mangle(v_declName_272_, v___x_275_);
return v___x_276_;
}
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NameMangling(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_ModPkgExt_0__Lean_initFn_00___x40_Lean_Compiler_ModPkgExt_1816862366____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_registerModuleEnvExtension___auto__1 = _init_l_Lean_registerModuleEnvExtension___auto__1();
lean_mark_persistent(l_Lean_registerModuleEnvExtension___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NameMangling(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_ModPkgExt(builtin);
}
#ifdef __cplusplus
}
#endif
