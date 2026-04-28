// Lean compiler output
// Module: Lean.Linter.Basic
// Imports: public import Lean.MonadEnv import Init.Data.Function
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
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_logWarningAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_instEmptyCollectionLinterSets___aux__1;
LEAN_EXPORT lean_object* l_Lean_Linter_instEmptyCollectionLinterSets;
LEAN_EXPORT lean_object* l_Lean_Linter_instInhabitedLinterSets___aux__1;
LEAN_EXPORT lean_object* l_Lean_Linter_instInhabitedLinterSets;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_insertLinterSetEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linterSetsExt;
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_all;
LEAN_EXPORT uint8_t l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterAll(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterValue___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_logLint___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___redArg___closed__0;
static lean_once_cell_t l_Lean_Linter_logLint___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___redArg___closed__1;
static lean_once_cell_t l_Lean_Linter_logLint___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___redArg___closed__2;
static lean_once_cell_t l_Lean_Linter_logLint___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Linter_instEmptyCollectionLinterSets___aux__1(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(1);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Linter_instEmptyCollectionLinterSets(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(1);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Linter_instInhabitedLinterSets___aux__1(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(1);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Linter_instInhabitedLinterSets(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(1);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(lean_object* v_t_5_, lean_object* v_k_6_, lean_object* v_fallback_7_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_k_8_; lean_object* v_v_9_; lean_object* v_l_10_; lean_object* v_r_11_; uint8_t v___x_12_; 
v_k_8_ = lean_ctor_get(v_t_5_, 1);
v_v_9_ = lean_ctor_get(v_t_5_, 2);
v_l_10_ = lean_ctor_get(v_t_5_, 3);
v_r_11_ = lean_ctor_get(v_t_5_, 4);
v___x_12_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_6_, v_k_8_);
switch(v___x_12_)
{
case 0:
{
v_t_5_ = v_l_10_;
goto _start;
}
case 1:
{
lean_inc(v_v_9_);
return v_v_9_;
}
default: 
{
v_t_5_ = v_r_11_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_7_);
return v_fallback_7_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg___boxed(lean_object* v_t_15_, lean_object* v_k_16_, lean_object* v_fallback_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(v_t_15_, v_k_16_, v_fallback_17_);
lean_dec(v_fallback_17_);
lean_dec(v_k_16_);
lean_dec(v_t_15_);
return v_res_18_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_unsigned_to_nat(0u);
v___x_20_ = lean_mk_empty_array_with_capacity(v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(lean_object* v_setName_21_, lean_object* v_init_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
lean_object* v_k_24_; lean_object* v_l_25_; lean_object* v_r_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_k_24_ = lean_ctor_get(v_x_23_, 1);
lean_inc(v_k_24_);
v_l_25_ = lean_ctor_get(v_x_23_, 3);
lean_inc(v_l_25_);
v_r_26_ = lean_ctor_get(v_x_23_, 4);
lean_inc(v_r_26_);
lean_dec_ref(v_x_23_);
lean_inc_n(v_setName_21_, 2);
v___x_27_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(v_setName_21_, v_init_22_, v_l_25_);
v___x_28_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0);
v___x_29_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(v___x_27_, v_k_24_, v___x_28_);
v___x_30_ = lean_array_push(v___x_29_, v_setName_21_);
v___x_31_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_24_, v___x_30_, v___x_27_);
v_init_22_ = v___x_31_;
v_x_23_ = v_r_26_;
goto _start;
}
else
{
lean_dec(v_setName_21_);
return v_init_22_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_insertLinterSetEntry(lean_object* v_map_33_, lean_object* v_setName_34_, lean_object* v_options_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(v_setName_34_, v_map_33_, v_options_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0(lean_object* v_00_u03b4_37_, lean_object* v_t_38_, lean_object* v_k_39_, lean_object* v_fallback_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(v_t_38_, v_k_39_, v_fallback_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___boxed(lean_object* v_00_u03b4_42_, lean_object* v_t_43_, lean_object* v_k_44_, lean_object* v_fallback_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0(v_00_u03b4_42_, v_t_43_, v_k_44_, v_fallback_45_);
lean_dec(v_fallback_45_);
lean_dec(v_k_44_);
lean_dec(v_t_43_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1(lean_object* v_setName_47_, lean_object* v_init_48_, lean_object* v_t_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(v_setName_47_, v_init_48_, v_t_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(lean_object* v_x_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_fst_53_; lean_object* v_snd_54_; lean_object* v___x_55_; 
v_fst_53_ = lean_ctor_get(v___y_52_, 0);
lean_inc(v_fst_53_);
v_snd_54_ = lean_ctor_get(v___y_52_, 1);
lean_inc(v_snd_54_);
lean_dec_ref(v___y_52_);
v___x_55_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(v_fst_53_, v_x_51_, v_snd_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(lean_object* v_es_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_array_mk(v_es_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_58_, size_t v_i_59_, size_t v_stop_60_, lean_object* v_b_61_){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = lean_usize_dec_eq(v_i_59_, v_stop_60_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v_fst_64_; lean_object* v_snd_65_; lean_object* v___x_66_; size_t v___x_67_; size_t v___x_68_; 
v___x_63_ = lean_array_uget_borrowed(v_as_58_, v_i_59_);
v_fst_64_ = lean_ctor_get(v___x_63_, 0);
v_snd_65_ = lean_ctor_get(v___x_63_, 1);
lean_inc(v_snd_65_);
lean_inc(v_fst_64_);
v___x_66_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1(v_fst_64_, v_b_61_, v_snd_65_);
v___x_67_ = ((size_t)1ULL);
v___x_68_ = lean_usize_add(v_i_59_, v___x_67_);
v_i_59_ = v___x_68_;
v_b_61_ = v___x_66_;
goto _start;
}
else
{
return v_b_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_70_, lean_object* v_i_71_, lean_object* v_stop_72_, lean_object* v_b_73_){
_start:
{
size_t v_i_boxed_74_; size_t v_stop_boxed_75_; lean_object* v_res_76_; 
v_i_boxed_74_ = lean_unbox_usize(v_i_71_);
lean_dec(v_i_71_);
v_stop_boxed_75_ = lean_unbox_usize(v_stop_72_);
lean_dec(v_stop_72_);
v_res_76_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0(v_as_70_, v_i_boxed_74_, v_stop_boxed_75_, v_b_73_);
lean_dec_ref(v_as_70_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_77_, size_t v_i_78_, size_t v_stop_79_, lean_object* v_b_80_){
_start:
{
lean_object* v___y_82_; uint8_t v___x_86_; 
v___x_86_ = lean_usize_dec_eq(v_i_78_, v_stop_79_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_87_ = lean_array_uget_borrowed(v_as_77_, v_i_78_);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = lean_array_get_size(v___x_87_);
v___x_90_ = lean_nat_dec_lt(v___x_88_, v___x_89_);
if (v___x_90_ == 0)
{
v___y_82_ = v_b_80_;
goto v___jp_81_;
}
else
{
uint8_t v___x_91_; 
v___x_91_ = lean_nat_dec_le(v___x_89_, v___x_89_);
if (v___x_91_ == 0)
{
if (v___x_90_ == 0)
{
v___y_82_ = v_b_80_;
goto v___jp_81_;
}
else
{
size_t v___x_92_; size_t v___x_93_; lean_object* v___x_94_; 
v___x_92_ = ((size_t)0ULL);
v___x_93_ = lean_usize_of_nat(v___x_89_);
v___x_94_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0(v___x_87_, v___x_92_, v___x_93_, v_b_80_);
v___y_82_ = v___x_94_;
goto v___jp_81_;
}
}
else
{
size_t v___x_95_; size_t v___x_96_; lean_object* v___x_97_; 
v___x_95_ = ((size_t)0ULL);
v___x_96_ = lean_usize_of_nat(v___x_89_);
v___x_97_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__0(v___x_87_, v___x_95_, v___x_96_, v_b_80_);
v___y_82_ = v___x_97_;
goto v___jp_81_;
}
}
}
else
{
return v_b_80_;
}
v___jp_81_:
{
size_t v___x_83_; size_t v___x_84_; 
v___x_83_ = ((size_t)1ULL);
v___x_84_ = lean_usize_add(v_i_78_, v___x_83_);
v_i_78_ = v___x_84_;
v_b_80_ = v___y_82_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_98_, lean_object* v_i_99_, lean_object* v_stop_100_, lean_object* v_b_101_){
_start:
{
size_t v_i_boxed_102_; size_t v_stop_boxed_103_; lean_object* v_res_104_; 
v_i_boxed_102_ = lean_unbox_usize(v_i_99_);
lean_dec(v_i_99_);
v_stop_boxed_103_ = lean_unbox_usize(v_stop_100_);
lean_dec(v_stop_100_);
v_res_104_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1(v_as_98_, v_i_boxed_102_, v_stop_boxed_103_, v_b_101_);
lean_dec_ref(v_as_98_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0(lean_object* v_initState_105_, lean_object* v_as_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_107_ = lean_unsigned_to_nat(0u);
v___x_108_ = lean_array_get_size(v_as_106_);
v___x_109_ = lean_nat_dec_lt(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
return v_initState_105_;
}
else
{
uint8_t v___x_110_; 
v___x_110_ = lean_nat_dec_le(v___x_108_, v___x_108_);
if (v___x_110_ == 0)
{
if (v___x_109_ == 0)
{
return v_initState_105_;
}
else
{
size_t v___x_111_; size_t v___x_112_; lean_object* v___x_113_; 
v___x_111_ = ((size_t)0ULL);
v___x_112_ = lean_usize_of_nat(v___x_108_);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1(v_as_106_, v___x_111_, v___x_112_, v_initState_105_);
return v___x_113_;
}
}
else
{
size_t v___x_114_; size_t v___x_115_; lean_object* v___x_116_; 
v___x_114_ = ((size_t)0ULL);
v___x_115_ = lean_usize_of_nat(v___x_108_);
v___x_116_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0_spec__1(v_as_106_, v___x_114_, v___x_115_, v_initState_105_);
return v___x_116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_117_, lean_object* v_as_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0(v_initState_117_, v_as_118_);
lean_dec_ref(v_as_118_);
return v_res_119_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_120_; 
v___f_120_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_), 2, 0);
return v___f_120_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_121_; 
v___f_121_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_), 1, 0);
return v___f_121_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_122_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_mk_string_unchecked("Linter", 6, 6);
return v___x_123_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("linterSetsExt", 13, 13);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_125_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_126_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_127_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_128_ = l_Lean_Name_mkStr3(v___x_127_, v___x_126_, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_box(1);
v___x_130_ = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__spec__0___boxed), 2, 1);
lean_closure_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v___f_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_131_ = lean_box(2);
v___x_132_ = lean_box(0);
v___f_133_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_134_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___f_135_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_136_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_137_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___f_135_);
lean_ctor_set(v___x_137_, 2, v___x_134_);
lean_ctor_set(v___x_137_, 3, v___f_133_);
lean_ctor_set(v___x_137_, 4, v___x_132_);
lean_ctor_set(v___x_137_, 5, v___x_131_);
lean_ctor_set(v___x_137_, 6, v___x_132_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_140_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2____boxed(lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_();
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___redArg(lean_object* v_inst_143_, lean_object* v_o_144_, lean_object* v_k_145_, lean_object* v_defVal_146_){
_start:
{
lean_object* v_toOptions_147_; lean_object* v_map_148_; lean_object* v_ofDataValue_x3f_149_; lean_object* v___x_150_; 
v_toOptions_147_ = lean_ctor_get(v_o_144_, 0);
v_map_148_ = lean_ctor_get(v_toOptions_147_, 0);
v_ofDataValue_x3f_149_ = lean_ctor_get(v_inst_143_, 1);
lean_inc_ref(v_ofDataValue_x3f_149_);
lean_dec_ref(v_inst_143_);
v___x_150_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_148_, v_k_145_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_149_);
lean_inc(v_defVal_146_);
return v_defVal_146_;
}
else
{
lean_object* v_val_151_; lean_object* v___x_152_; 
v_val_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_val_151_);
lean_dec_ref(v___x_150_);
v___x_152_ = lean_apply_1(v_ofDataValue_x3f_149_, v_val_151_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_inc(v_defVal_146_);
return v_defVal_146_;
}
else
{
lean_object* v_val_153_; 
v_val_153_ = lean_ctor_get(v___x_152_, 0);
lean_inc(v_val_153_);
lean_dec_ref(v___x_152_);
return v_val_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___redArg___boxed(lean_object* v_inst_154_, lean_object* v_o_155_, lean_object* v_k_156_, lean_object* v_defVal_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_Linter_LinterOptions_get___redArg(v_inst_154_, v_o_155_, v_k_156_, v_defVal_157_);
lean_dec(v_defVal_157_);
lean_dec(v_k_156_);
lean_dec_ref(v_o_155_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get(lean_object* v_00_u03b1_159_, lean_object* v_inst_160_, lean_object* v_o_161_, lean_object* v_k_162_, lean_object* v_defVal_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Linter_LinterOptions_get___redArg(v_inst_160_, v_o_161_, v_k_162_, v_defVal_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___boxed(lean_object* v_00_u03b1_165_, lean_object* v_inst_166_, lean_object* v_o_167_, lean_object* v_k_168_, lean_object* v_defVal_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Linter_LinterOptions_get(v_00_u03b1_165_, v_inst_166_, v_o_167_, v_k_168_, v_defVal_169_);
lean_dec(v_defVal_169_);
lean_dec(v_k_168_);
lean_dec_ref(v_o_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___redArg(lean_object* v_inst_171_, lean_object* v_o_172_, lean_object* v_k_173_){
_start:
{
lean_object* v_toOptions_174_; lean_object* v_map_175_; lean_object* v_ofDataValue_x3f_176_; lean_object* v___x_177_; 
v_toOptions_174_ = lean_ctor_get(v_o_172_, 0);
v_map_175_ = lean_ctor_get(v_toOptions_174_, 0);
v_ofDataValue_x3f_176_ = lean_ctor_get(v_inst_171_, 1);
lean_inc_ref(v_ofDataValue_x3f_176_);
lean_dec_ref(v_inst_171_);
v___x_177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_175_, v_k_173_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v___x_178_; 
lean_dec_ref(v_ofDataValue_x3f_176_);
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
lean_object* v_val_179_; lean_object* v___x_180_; 
v_val_179_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_val_179_);
lean_dec_ref(v___x_177_);
v___x_180_ = lean_apply_1(v_ofDataValue_x3f_176_, v_val_179_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___redArg___boxed(lean_object* v_inst_181_, lean_object* v_o_182_, lean_object* v_k_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Linter_LinterOptions_get_x3f___redArg(v_inst_181_, v_o_182_, v_k_183_);
lean_dec(v_k_183_);
lean_dec_ref(v_o_182_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f(lean_object* v_00_u03b1_185_, lean_object* v_inst_186_, lean_object* v_o_187_, lean_object* v_k_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_Linter_LinterOptions_get_x3f___redArg(v_inst_186_, v_o_187_, v_k_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___boxed(lean_object* v_00_u03b1_190_, lean_object* v_inst_191_, lean_object* v_o_192_, lean_object* v_k_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Linter_LinterOptions_get_x3f(v_00_u03b1_190_, v_inst_191_, v_o_192_, v_k_193_);
lean_dec(v_k_193_);
lean_dec_ref(v_o_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___redArg___lam__0(lean_object* v___x_195_, lean_object* v_o_196_, lean_object* v_toPure_197_, lean_object* v_____do__lift_198_){
_start:
{
lean_object* v___x_199_; lean_object* v_toEnvExtension_200_; lean_object* v_asyncMode_201_; lean_object* v___x_202_; lean_object* v_linterSets_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_199_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_200_ = lean_ctor_get(v___x_199_, 0);
v_asyncMode_201_ = lean_ctor_get(v_toEnvExtension_200_, 2);
v___x_202_ = lean_box(0);
v_linterSets_203_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_195_, v___x_199_, v_____do__lift_198_, v_asyncMode_201_, v___x_202_);
v___x_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_204_, 0, v_o_196_);
lean_ctor_set(v___x_204_, 1, v_linterSets_203_);
v___x_205_ = lean_apply_2(v_toPure_197_, lean_box(0), v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___redArg(lean_object* v_inst_206_, lean_object* v_inst_207_, lean_object* v_o_208_){
_start:
{
lean_object* v_toApplicative_209_; lean_object* v_toBind_210_; lean_object* v_getEnv_211_; lean_object* v_toPure_212_; lean_object* v___x_213_; lean_object* v___f_214_; lean_object* v___x_215_; 
v_toApplicative_209_ = lean_ctor_get(v_inst_206_, 0);
lean_inc_ref(v_toApplicative_209_);
v_toBind_210_ = lean_ctor_get(v_inst_206_, 1);
lean_inc(v_toBind_210_);
lean_dec_ref(v_inst_206_);
v_getEnv_211_ = lean_ctor_get(v_inst_207_, 0);
lean_inc(v_getEnv_211_);
lean_dec_ref(v_inst_207_);
v_toPure_212_ = lean_ctor_get(v_toApplicative_209_, 1);
lean_inc(v_toPure_212_);
lean_dec_ref(v_toApplicative_209_);
v___x_213_ = lean_box(1);
v___f_214_ = lean_alloc_closure((void*)(l_Lean_Options_toLinterOptions___redArg___lam__0), 4, 3);
lean_closure_set(v___f_214_, 0, v___x_213_);
lean_closure_set(v___f_214_, 1, v_o_208_);
lean_closure_set(v___f_214_, 2, v_toPure_212_);
v___x_215_ = lean_apply_4(v_toBind_210_, lean_box(0), lean_box(0), v_getEnv_211_, v___f_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions(lean_object* v_m_216_, lean_object* v_inst_217_, lean_object* v_inst_218_, lean_object* v_o_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Options_toLinterOptions___redArg(v_inst_217_, v_inst_218_, v_o_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___redArg(lean_object* v_o_221_, lean_object* v_opt_222_){
_start:
{
lean_object* v_linterSets_223_; lean_object* v_name_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_linterSets_223_ = lean_ctor_get(v_o_221_, 1);
v_name_224_ = lean_ctor_get(v_opt_222_, 0);
v___x_225_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0, &l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Linter_insertLinterSetEntry_spec__1_spec__1___closed__0);
v___x_226_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Linter_insertLinterSetEntry_spec__0___redArg(v_linterSets_223_, v_name_224_, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___redArg___boxed(lean_object* v_o_227_, lean_object* v_opt_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Linter_LinterOptions_getSet___redArg(v_o_227_, v_opt_228_);
lean_dec_ref(v_opt_228_);
lean_dec_ref(v_o_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet(lean_object* v_00_u03b1_230_, lean_object* v_o_231_, lean_object* v_opt_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_Linter_LinterOptions_getSet___redArg(v_o_231_, v_opt_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_getSet___boxed(lean_object* v_00_u03b1_234_, lean_object* v_o_235_, lean_object* v_opt_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Linter_LinterOptions_getSet(v_00_u03b1_234_, v_o_235_, v_opt_236_);
lean_dec_ref(v_opt_236_);
lean_dec_ref(v_o_235_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___redArg___lam__0(lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_____do__lift_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Lean_Options_toLinterOptions___redArg(v_inst_238_, v_inst_239_, v_____do__lift_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___redArg(lean_object* v_inst_242_, lean_object* v_inst_243_, lean_object* v_inst_244_){
_start:
{
lean_object* v_toBind_245_; lean_object* v___f_246_; lean_object* v___x_247_; 
v_toBind_245_ = lean_ctor_get(v_inst_242_, 1);
lean_inc(v_toBind_245_);
v___f_246_ = lean_alloc_closure((void*)(l_Lean_Linter_getLinterOptions___redArg___lam__0), 3, 2);
lean_closure_set(v___f_246_, 0, v_inst_242_);
lean_closure_set(v___f_246_, 1, v_inst_244_);
v___x_247_ = lean_apply_4(v_toBind_245_, lean_box(0), lean_box(0), v_inst_243_, v___f_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions(lean_object* v_m_248_, lean_object* v_inst_249_, lean_object* v_inst_250_, lean_object* v_inst_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_Linter_getLinterOptions___redArg(v_inst_249_, v_inst_250_, v_inst_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0(lean_object* v_name_253_, lean_object* v_decl_254_, lean_object* v_ref_255_){
_start:
{
lean_object* v_defValue_257_; lean_object* v_descr_258_; lean_object* v_deprecation_x3f_259_; lean_object* v___x_260_; uint8_t v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_defValue_257_ = lean_ctor_get(v_decl_254_, 0);
v_descr_258_ = lean_ctor_get(v_decl_254_, 1);
v_deprecation_x3f_259_ = lean_ctor_get(v_decl_254_, 2);
v___x_260_ = lean_alloc_ctor(1, 0, 1);
v___x_261_ = lean_unbox(v_defValue_257_);
lean_ctor_set_uint8(v___x_260_, 0, v___x_261_);
lean_inc(v_deprecation_x3f_259_);
lean_inc_ref(v_descr_258_);
lean_inc_n(v_name_253_, 2);
v___x_262_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_262_, 0, v_name_253_);
lean_ctor_set(v___x_262_, 1, v_ref_255_);
lean_ctor_set(v___x_262_, 2, v___x_260_);
lean_ctor_set(v___x_262_, 3, v_descr_258_);
lean_ctor_set(v___x_262_, 4, v_deprecation_x3f_259_);
v___x_263_ = lean_register_option(v_name_253_, v___x_262_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_271_; 
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_271_ == 0)
{
lean_object* v_unused_272_; 
v_unused_272_ = lean_ctor_get(v___x_263_, 0);
lean_dec(v_unused_272_);
v___x_265_ = v___x_263_;
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
else
{
lean_dec(v___x_263_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; lean_object* v___x_269_; 
lean_inc(v_defValue_257_);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v_name_253_);
lean_ctor_set(v___x_267_, 1, v_defValue_257_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_267_);
v___x_269_ = v___x_265_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_name_253_);
v_a_273_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_263_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_263_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_281_, lean_object* v_decl_282_, lean_object* v_ref_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0(v_name_281_, v_decl_282_, v_ref_283_);
lean_dec_ref(v_decl_282_);
return v_res_285_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_mk_string_unchecked("linter", 6, 6);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_mk_string_unchecked("all", 3, 3);
return v___x_287_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_289_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_290_ = l_Lean_Name_mkStr2(v___x_289_, v___x_288_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lean_mk_string_unchecked("enable all linters", 18, 18);
return v___x_291_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_292_ = lean_box(0);
v___x_293_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_294_ = 0;
v___x_295_ = lean_box(v___x_294_);
v___x_296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v___x_293_);
lean_ctor_set(v___x_296_, 2, v___x_292_);
return v___x_296_;
}
}
static lean_object* _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_297_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_298_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_299_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_300_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_);
v___x_301_ = l_Lean_Name_mkStr4(v___x_300_, v___x_299_, v___x_298_, v___x_297_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_303_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_304_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_305_ = lean_obj_once(&l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_, &l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__once, _init_l___private_Lean_Linter_Basic_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_);
v___x_306_ = l_Lean_Option_register___at___00__private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4__spec__0(v___x_303_, v___x_304_, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4____boxed(lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_();
return v_res_308_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0(lean_object* v_o_309_, lean_object* v_k_310_, uint8_t v_defVal_311_){
_start:
{
lean_object* v_toOptions_312_; lean_object* v_map_313_; lean_object* v___x_314_; 
v_toOptions_312_ = lean_ctor_get(v_o_309_, 0);
v_map_313_ = lean_ctor_get(v_toOptions_312_, 0);
v___x_314_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_313_, v_k_310_);
if (lean_obj_tag(v___x_314_) == 0)
{
return v_defVal_311_;
}
else
{
lean_object* v_val_315_; 
v_val_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_val_315_);
lean_dec_ref(v___x_314_);
if (lean_obj_tag(v_val_315_) == 1)
{
uint8_t v_v_316_; 
v_v_316_ = lean_ctor_get_uint8(v_val_315_, 0);
lean_dec_ref(v_val_315_);
return v_v_316_;
}
else
{
lean_dec(v_val_315_);
return v_defVal_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0___boxed(lean_object* v_o_317_, lean_object* v_k_318_, lean_object* v_defVal_319_){
_start:
{
uint8_t v_defVal_boxed_320_; uint8_t v_res_321_; lean_object* v_r_322_; 
v_defVal_boxed_320_ = lean_unbox(v_defVal_319_);
v_res_321_ = l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0(v_o_317_, v_k_318_, v_defVal_boxed_320_);
lean_dec(v_k_318_);
lean_dec_ref(v_o_317_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterAll(lean_object* v_o_323_, uint8_t v_defValue_324_){
_start:
{
lean_object* v___x_325_; lean_object* v_name_326_; uint8_t v___x_327_; 
v___x_325_ = l_Lean_Linter_linter_all;
v_name_326_ = lean_ctor_get(v___x_325_, 0);
v___x_327_ = l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0(v_o_323_, v_name_326_, v_defValue_324_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterAll___boxed(lean_object* v_o_328_, lean_object* v_defValue_329_){
_start:
{
uint8_t v_defValue_boxed_330_; uint8_t v_res_331_; lean_object* v_r_332_; 
v_defValue_boxed_330_ = lean_unbox(v_defValue_329_);
v_res_331_ = l_Lean_Linter_getLinterAll(v_o_328_, v_defValue_boxed_330_);
lean_dec_ref(v_o_328_);
v_r_332_ = lean_box(v_res_331_);
return v_r_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0(lean_object* v_o_333_, lean_object* v_k_334_){
_start:
{
lean_object* v_toOptions_335_; lean_object* v_map_336_; lean_object* v___x_337_; 
v_toOptions_335_ = lean_ctor_get(v_o_333_, 0);
v_map_336_ = lean_ctor_get(v_toOptions_335_, 0);
v___x_337_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_336_, v_k_334_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v___x_338_; 
v___x_338_ = lean_box(0);
return v___x_338_;
}
else
{
lean_object* v_val_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_349_; 
v_val_339_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_349_ == 0)
{
v___x_341_ = v___x_337_;
v_isShared_342_ = v_isSharedCheck_349_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_val_339_);
lean_dec(v___x_337_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_349_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
if (lean_obj_tag(v_val_339_) == 1)
{
uint8_t v_v_343_; lean_object* v___x_344_; lean_object* v___x_346_; 
v_v_343_ = lean_ctor_get_uint8(v_val_339_, 0);
lean_dec_ref(v_val_339_);
v___x_344_ = lean_box(v_v_343_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_344_);
v___x_346_ = v___x_341_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
else
{
lean_object* v___x_348_; 
lean_del_object(v___x_341_);
lean_dec(v_val_339_);
v___x_348_ = lean_box(0);
return v___x_348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0___boxed(lean_object* v_o_350_, lean_object* v_k_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0(v_o_350_, v_k_351_);
lean_dec(v_k_351_);
lean_dec_ref(v_o_350_);
return v_res_352_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1(lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
if (lean_obj_tag(v_x_353_) == 0)
{
if (lean_obj_tag(v_x_354_) == 0)
{
uint8_t v___x_355_; 
v___x_355_ = 1;
return v___x_355_;
}
else
{
uint8_t v___x_356_; 
v___x_356_ = 0;
return v___x_356_;
}
}
else
{
if (lean_obj_tag(v_x_354_) == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 0;
return v___x_357_;
}
else
{
lean_object* v_val_358_; uint8_t v___x_359_; 
v_val_358_ = lean_ctor_get(v_x_353_, 0);
v___x_359_ = lean_unbox(v_val_358_);
if (v___x_359_ == 0)
{
lean_object* v_val_360_; uint8_t v___x_361_; 
v_val_360_ = lean_ctor_get(v_x_354_, 0);
v___x_361_ = lean_unbox(v_val_360_);
if (v___x_361_ == 0)
{
uint8_t v___x_362_; 
v___x_362_ = 1;
return v___x_362_;
}
else
{
uint8_t v___x_363_; 
v___x_363_ = lean_unbox(v_val_358_);
return v___x_363_;
}
}
else
{
lean_object* v_val_364_; uint8_t v___x_365_; 
v_val_364_ = lean_ctor_get(v_x_354_, 0);
v___x_365_ = lean_unbox(v_val_364_);
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1___boxed(lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1(v_x_366_, v_x_367_);
lean_dec(v_x_367_);
lean_dec(v_x_366_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0(void){
_start:
{
uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_370_ = 1;
v___x_371_ = lean_box(v___x_370_);
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2(lean_object* v_o_373_, lean_object* v_as_374_, size_t v_i_375_, size_t v_stop_376_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = lean_usize_dec_eq(v_i_375_, v_stop_376_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_378_ = 1;
v___x_379_ = lean_array_uget_borrowed(v_as_374_, v_i_375_);
v___x_380_ = l_Lean_Linter_LinterOptions_get_x3f___at___00Lean_Linter_getLinterValue_spec__0(v_o_373_, v___x_379_);
v___x_381_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___closed__0);
v___x_382_ = l_Option_instBEq_beq___at___00Lean_Linter_getLinterValue_spec__1(v___x_380_, v___x_381_);
lean_dec(v___x_380_);
if (v___x_382_ == 0)
{
size_t v___x_383_; size_t v___x_384_; 
v___x_383_ = ((size_t)1ULL);
v___x_384_ = lean_usize_add(v_i_375_, v___x_383_);
v_i_375_ = v___x_384_;
goto _start;
}
else
{
return v___x_378_;
}
}
else
{
uint8_t v___x_386_; 
v___x_386_ = 0;
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2___boxed(lean_object* v_o_387_, lean_object* v_as_388_, lean_object* v_i_389_, lean_object* v_stop_390_){
_start:
{
size_t v_i_boxed_391_; size_t v_stop_boxed_392_; uint8_t v_res_393_; lean_object* v_r_394_; 
v_i_boxed_391_ = lean_unbox_usize(v_i_389_);
lean_dec(v_i_389_);
v_stop_boxed_392_ = lean_unbox_usize(v_stop_390_);
lean_dec(v_stop_390_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2(v_o_387_, v_as_388_, v_i_boxed_391_, v_stop_boxed_392_);
lean_dec_ref(v_as_388_);
lean_dec_ref(v_o_387_);
v_r_394_ = lean_box(v_res_393_);
return v_r_394_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterValue(lean_object* v_opt_395_, lean_object* v_o_396_){
_start:
{
lean_object* v_name_397_; lean_object* v_defValue_398_; uint8_t v___y_400_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v_name_397_ = lean_ctor_get(v_opt_395_, 0);
v_defValue_398_ = lean_ctor_get(v_opt_395_, 1);
v___x_403_ = l_Lean_Linter_LinterOptions_getSet___redArg(v_o_396_, v_opt_395_);
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_array_get_size(v___x_403_);
v___x_406_ = lean_nat_dec_lt(v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
uint8_t v___x_407_; 
lean_dec_ref(v___x_403_);
v___x_407_ = lean_unbox(v_defValue_398_);
v___y_400_ = v___x_407_;
goto v___jp_399_;
}
else
{
if (v___x_406_ == 0)
{
uint8_t v___x_408_; 
lean_dec_ref(v___x_403_);
v___x_408_ = lean_unbox(v_defValue_398_);
v___y_400_ = v___x_408_;
goto v___jp_399_;
}
else
{
size_t v___x_409_; size_t v___x_410_; uint8_t v___x_411_; 
v___x_409_ = ((size_t)0ULL);
v___x_410_ = lean_usize_of_nat(v___x_405_);
v___x_411_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Linter_getLinterValue_spec__2(v_o_396_, v___x_403_, v___x_409_, v___x_410_);
lean_dec_ref(v___x_403_);
if (v___x_411_ == 0)
{
uint8_t v___x_412_; 
v___x_412_ = lean_unbox(v_defValue_398_);
v___y_400_ = v___x_412_;
goto v___jp_399_;
}
else
{
v___y_400_ = v___x_411_;
goto v___jp_399_;
}
}
}
v___jp_399_:
{
uint8_t v___x_401_; uint8_t v___x_402_; 
v___x_401_ = l_Lean_Linter_getLinterAll(v_o_396_, v___y_400_);
v___x_402_ = l_Lean_Linter_LinterOptions_get___at___00Lean_Linter_getLinterAll_spec__0(v_o_396_, v_name_397_, v___x_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterValue___boxed(lean_object* v_opt_413_, lean_object* v_o_414_){
_start:
{
uint8_t v_res_415_; lean_object* v_r_416_; 
v_res_415_ = l_Lean_Linter_getLinterValue(v_opt_413_, v_o_414_);
lean_dec_ref(v_o_414_);
lean_dec_ref(v_opt_413_);
v_r_416_ = lean_box(v_res_415_);
return v_r_416_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___redArg___closed__0(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_mk_string_unchecked("This linter can be disabled with `set_option ", 45, 45);
return v___x_417_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___redArg___closed__1(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l_Lean_Linter_logLint___redArg___closed__0, &l_Lean_Linter_logLint___redArg___closed__0_once, _init_l_Lean_Linter_logLint___redArg___closed__0);
v___x_419_ = l_Lean_stringToMessageData(v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___redArg___closed__2(void){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_mk_string_unchecked(" false`", 7, 7);
return v___x_420_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___redArg___closed__3(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_obj_once(&l_Lean_Linter_logLint___redArg___closed__2, &l_Lean_Linter_logLint___redArg___closed__2_once, _init_l_Lean_Linter_logLint___redArg___closed__2);
v___x_422_ = l_Lean_stringToMessageData(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___redArg(lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_inst_425_, lean_object* v_inst_426_, lean_object* v_linterOption_427_, lean_object* v_stx_428_, lean_object* v_msg_429_){
_start:
{
lean_object* v_name_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_445_; 
v_name_430_ = lean_ctor_get(v_linterOption_427_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v_linterOption_427_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v_linterOption_427_, 1);
lean_dec(v_unused_446_);
v___x_432_ = v_linterOption_427_;
v_isShared_433_ = v_isSharedCheck_445_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_name_430_);
lean_dec(v_linterOption_427_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_445_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
v___x_434_ = lean_obj_once(&l_Lean_Linter_logLint___redArg___closed__1, &l_Lean_Linter_logLint___redArg___closed__1_once, _init_l_Lean_Linter_logLint___redArg___closed__1);
lean_inc(v_name_430_);
v___x_435_ = l_Lean_MessageData_ofName(v_name_430_);
if (v_isShared_433_ == 0)
{
lean_ctor_set_tag(v___x_432_, 7);
lean_ctor_set(v___x_432_, 1, v___x_435_);
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_437_ = v___x_432_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_435_);
v___x_437_ = v_reuseFailAlloc_444_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v_disable_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_438_ = lean_obj_once(&l_Lean_Linter_logLint___redArg___closed__3, &l_Lean_Linter_logLint___redArg___closed__3_once, _init_l_Lean_Linter_logLint___redArg___closed__3);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v_disable_440_ = l_Lean_MessageData_note(v___x_439_);
v___x_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_441_, 0, v_msg_429_);
lean_ctor_set(v___x_441_, 1, v_disable_440_);
v___x_442_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_442_, 0, v_name_430_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = l_Lean_logWarningAt___redArg(v_inst_423_, v_inst_424_, v_inst_425_, v_inst_426_, v_stx_428_, v___x_442_);
return v___x_443_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint(lean_object* v_m_447_, lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_inst_451_, lean_object* v_linterOption_452_, lean_object* v_stx_453_, lean_object* v_msg_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_Linter_logLint___redArg(v_inst_448_, v_inst_449_, v_inst_450_, v_inst_451_, v_linterOption_452_, v_stx_453_, v_msg_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg___lam__0(lean_object* v_linterOption_456_, lean_object* v_toApplicative_457_, lean_object* v_inst_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_stx_462_, lean_object* v_msg_463_, lean_object* v_____do__lift_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_Linter_getLinterValue(v_linterOption_456_, v_____do__lift_464_);
if (v___x_465_ == 0)
{
lean_object* v_toPure_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec_ref(v_msg_463_);
lean_dec(v_stx_462_);
lean_dec(v_inst_461_);
lean_dec(v_inst_460_);
lean_dec_ref(v_inst_459_);
lean_dec_ref(v_inst_458_);
lean_dec_ref(v_linterOption_456_);
v_toPure_466_ = lean_ctor_get(v_toApplicative_457_, 1);
lean_inc(v_toPure_466_);
lean_dec_ref(v_toApplicative_457_);
v___x_467_ = lean_box(0);
v___x_468_ = lean_apply_2(v_toPure_466_, lean_box(0), v___x_467_);
return v___x_468_;
}
else
{
lean_object* v___x_469_; 
lean_dec_ref(v_toApplicative_457_);
v___x_469_ = l_Lean_Linter_logLint___redArg(v_inst_458_, v_inst_459_, v_inst_460_, v_inst_461_, v_linterOption_456_, v_stx_462_, v_msg_463_);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg___lam__0___boxed(lean_object* v_linterOption_470_, lean_object* v_toApplicative_471_, lean_object* v_inst_472_, lean_object* v_inst_473_, lean_object* v_inst_474_, lean_object* v_inst_475_, lean_object* v_stx_476_, lean_object* v_msg_477_, lean_object* v_____do__lift_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Linter_logLintIf___redArg___lam__0(v_linterOption_470_, v_toApplicative_471_, v_inst_472_, v_inst_473_, v_inst_474_, v_inst_475_, v_stx_476_, v_msg_477_, v_____do__lift_478_);
lean_dec_ref(v_____do__lift_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___redArg(lean_object* v_inst_480_, lean_object* v_inst_481_, lean_object* v_inst_482_, lean_object* v_inst_483_, lean_object* v_inst_484_, lean_object* v_linterOption_485_, lean_object* v_stx_486_, lean_object* v_msg_487_){
_start:
{
lean_object* v_toApplicative_488_; lean_object* v_toBind_489_; lean_object* v___f_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_toApplicative_488_ = lean_ctor_get(v_inst_480_, 0);
v_toBind_489_ = lean_ctor_get(v_inst_480_, 1);
lean_inc(v_toBind_489_);
lean_inc(v_inst_483_);
lean_inc_ref(v_inst_480_);
lean_inc_ref(v_toApplicative_488_);
v___f_490_ = lean_alloc_closure((void*)(l_Lean_Linter_logLintIf___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_490_, 0, v_linterOption_485_);
lean_closure_set(v___f_490_, 1, v_toApplicative_488_);
lean_closure_set(v___f_490_, 2, v_inst_480_);
lean_closure_set(v___f_490_, 3, v_inst_481_);
lean_closure_set(v___f_490_, 4, v_inst_482_);
lean_closure_set(v___f_490_, 5, v_inst_483_);
lean_closure_set(v___f_490_, 6, v_stx_486_);
lean_closure_set(v___f_490_, 7, v_msg_487_);
v___x_491_ = l_Lean_Linter_getLinterOptions___redArg(v_inst_480_, v_inst_483_, v_inst_484_);
v___x_492_ = lean_apply_4(v_toBind_489_, lean_box(0), lean_box(0), v___x_491_, v___f_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf(lean_object* v_m_493_, lean_object* v_inst_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_linterOption_499_, lean_object* v_stx_500_, lean_object* v_msg_501_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Linter_logLintIf___redArg(v_inst_494_, v_inst_495_, v_inst_496_, v_inst_497_, v_inst_498_, v_linterOption_499_, v_stx_500_, v_msg_501_);
return v___x_502_;
}
}
lean_object* runtime_initialize_Lean_MonadEnv(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Linter_instEmptyCollectionLinterSets___aux__1 = _init_l_Lean_Linter_instEmptyCollectionLinterSets___aux__1();
lean_mark_persistent(l_Lean_Linter_instEmptyCollectionLinterSets___aux__1);
l_Lean_Linter_instEmptyCollectionLinterSets = _init_l_Lean_Linter_instEmptyCollectionLinterSets();
lean_mark_persistent(l_Lean_Linter_instEmptyCollectionLinterSets);
l_Lean_Linter_instInhabitedLinterSets___aux__1 = _init_l_Lean_Linter_instInhabitedLinterSets___aux__1();
lean_mark_persistent(l_Lean_Linter_instInhabitedLinterSets___aux__1);
l_Lean_Linter_instInhabitedLinterSets = _init_l_Lean_Linter_instInhabitedLinterSets();
lean_mark_persistent(l_Lean_Linter_instInhabitedLinterSets);
res = l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_1102181608____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linterSetsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linterSetsExt);
lean_dec_ref(res);
res = l___private_Lean_Linter_Basic_0__Lean_Linter_initFn_00___x40_Lean_Linter_Basic_3413348210____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_all = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_all);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_MonadEnv(uint8_t builtin);
lean_object* initialize_Init_Data_Function(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
