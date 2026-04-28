// Lean compiler output
// Module: Lake.CLI.BuiltinLint
// Imports: public import Lean.Linter.EnvLinter import Lean.CoreM import Lake.Config.Workspace
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
lean_object* lean_get_stdout();
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_enable_initializer_execution();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_formatLinterResults(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_getChecks(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_lintCore(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00Lake_BuiltinLint_run_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__2;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_enable_initializer_execution();
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object* v_a_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
return v_res_4_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0(lean_object* v_opts_5_, lean_object* v_opt_6_){
_start:
{
lean_object* v_name_7_; lean_object* v_defValue_8_; lean_object* v_map_9_; lean_object* v___x_10_; 
v_name_7_ = lean_ctor_get(v_opt_6_, 0);
v_defValue_8_ = lean_ctor_get(v_opt_6_, 1);
v_map_9_ = lean_ctor_get(v_opts_5_, 0);
v___x_10_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_9_, v_name_7_);
if (lean_obj_tag(v___x_10_) == 0)
{
uint8_t v___x_11_; 
v___x_11_ = lean_unbox(v_defValue_8_);
return v___x_11_;
}
else
{
lean_object* v_val_12_; 
v_val_12_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_val_12_);
lean_dec_ref(v___x_10_);
if (lean_obj_tag(v_val_12_) == 1)
{
uint8_t v_v_13_; 
v_v_13_ = lean_ctor_get_uint8(v_val_12_, 0);
lean_dec_ref(v_val_12_);
return v_v_13_;
}
else
{
uint8_t v___x_14_; 
lean_dec(v_val_12_);
v___x_14_ = lean_unbox(v_defValue_8_);
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0(v_opts_15_, v_opt_16_);
lean_dec_ref(v_opt_16_);
lean_dec_ref(v_opts_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1(lean_object* v_opts_19_, lean_object* v_opt_20_){
_start:
{
lean_object* v_name_21_; lean_object* v_defValue_22_; lean_object* v_map_23_; lean_object* v___x_24_; 
v_name_21_ = lean_ctor_get(v_opt_20_, 0);
v_defValue_22_ = lean_ctor_get(v_opt_20_, 1);
v_map_23_ = lean_ctor_get(v_opts_19_, 0);
v___x_24_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_23_, v_name_21_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_inc(v_defValue_22_);
return v_defValue_22_;
}
else
{
lean_object* v_val_25_; 
v_val_25_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_val_25_);
lean_dec_ref(v___x_24_);
if (lean_obj_tag(v_val_25_) == 3)
{
lean_object* v_v_26_; 
v_v_26_ = lean_ctor_get(v_val_25_, 0);
lean_inc(v_v_26_);
lean_dec_ref(v_val_25_);
return v_v_26_;
}
else
{
lean_dec(v_val_25_);
lean_inc(v_defValue_22_);
return v_defValue_22_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object* v_opts_27_, lean_object* v_opt_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1(v_opts_27_, v_opt_28_);
lean_dec_ref(v_opt_28_);
lean_dec_ref(v_opts_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00Lake_BuiltinLint_run_spec__3(lean_object* v_s_30_){
_start:
{
lean_object* v___x_32_; lean_object* v_putStr_33_; lean_object* v___x_34_; 
v___x_32_ = lean_get_stdout();
v_putStr_33_ = lean_ctor_get(v___x_32_, 4);
lean_inc_ref(v_putStr_33_);
lean_dec_ref(v___x_32_);
v___x_34_ = lean_apply_2(v_putStr_33_, v_s_30_, lean_box(0));
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object* v_s_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_IO_print___at___00Lake_BuiltinLint_run_spec__3(v_s_35_);
return v_res_37_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4(lean_object* v___x_38_, lean_object* v_as_39_, size_t v_i_40_, size_t v_stop_41_){
_start:
{
uint8_t v___x_42_; 
v___x_42_ = lean_usize_dec_eq(v_i_40_, v_stop_41_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v_snd_44_; lean_object* v_size_45_; lean_object* v___x_46_; uint8_t v___x_47_; uint8_t v___x_48_; 
v___x_43_ = lean_array_uget_borrowed(v_as_39_, v_i_40_);
v_snd_44_ = lean_ctor_get(v___x_43_, 1);
v_size_45_ = lean_ctor_get(v_snd_44_, 0);
v___x_46_ = lean_unsigned_to_nat(0u);
v___x_47_ = 1;
v___x_48_ = lean_nat_dec_eq(v_size_45_, v___x_46_);
if (v___x_48_ == 0)
{
return v___x_47_;
}
else
{
uint8_t v___x_49_; 
v___x_49_ = lean_nat_dec_eq(v___x_38_, v___x_46_);
if (v___x_49_ == 0)
{
size_t v___x_50_; size_t v___x_51_; 
v___x_50_ = ((size_t)1ULL);
v___x_51_ = lean_usize_add(v_i_40_, v___x_50_);
v_i_40_ = v___x_51_;
goto _start;
}
else
{
return v___x_47_;
}
}
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object* v___x_54_, lean_object* v_as_55_, lean_object* v_i_56_, lean_object* v_stop_57_){
_start:
{
size_t v_i_boxed_58_; size_t v_stop_boxed_59_; uint8_t v_res_60_; lean_object* v_r_61_; 
v_i_boxed_58_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_stop_boxed_59_ = lean_unbox_usize(v_stop_57_);
lean_dec(v_stop_57_);
v_res_60_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4(v___x_54_, v_as_55_, v_i_boxed_58_, v_stop_boxed_59_);
lean_dec_ref(v_as_55_);
lean_dec(v___x_54_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__2(lean_object* v_s_62_){
_start:
{
uint32_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = 10;
v___x_65_ = lean_string_push(v_s_62_, v___x_64_);
v___x_66_ = l_IO_print___at___00Lake_BuiltinLint_run_spec__3(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object* v_s_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__2(v_s_67_);
return v_res_69_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_mk_string_unchecked("internal exception #", 20, 20);
return v___x_70_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_71_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_mk_string_unchecked("Linter", 6, 6);
return v___x_72_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked("EnvLinter", 9, 9);
return v___x_73_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__3);
v___x_75_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__2);
v___x_76_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__1);
v___x_77_ = l_Lean_Name_mkStr3(v___x_76_, v___x_75_, v___x_74_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_mk_empty_array_with_capacity(v___x_78_);
return v___x_79_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_unsigned_to_nat(32u);
v___x_81_ = lean_mk_empty_array_with_capacity(v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7(void){
_start:
{
size_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_83_ = ((size_t)5ULL);
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_unsigned_to_nat(32u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__6);
v___x_88_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_84_);
lean_ctor_set(v___x_88_, 3, v___x_84_);
lean_ctor_set_usize(v___x_88_, 4, v___x_83_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_89_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__8);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = l_Lean_NameSet_empty;
v___x_95_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7);
v___x_96_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
lean_ctor_set(v___x_96_, 2, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = l_Lean_firstFrontendMacroScope;
v___x_99_ = lean_nat_add(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("_uniq", 5, 5);
return v___x_100_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__13);
v___x_102_ = l_Lean_Name_mkStr1(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__14);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = lean_box(0);
v___x_107_ = lean_unsigned_to_nat(1u);
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
lean_ctor_set(v___x_109_, 2, v___x_106_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17(void){
_start:
{
lean_object* v___x_110_; uint64_t v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7);
v___x_111_ = 0ULL;
v___x_112_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint64(v___x_112_, sizeof(void*)*1, v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v_anyFailed_115_; lean_object* v___x_116_; 
v___x_113_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__7);
v___x_114_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__9);
v_anyFailed_115_ = 1;
v___x_116_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set(v___x_116_, 2, v___x_113_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*3, v_anyFailed_115_);
return v___x_116_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_mk_string_unchecked("-- Linting passed for ", 22, 22);
return v___x_117_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_118_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_mk_string_unchecked("in ", 3, 3);
return v___x_119_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22(void){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_mk_string_unchecked("", 0, 0);
return v___x_120_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = l_Lean_Options_empty;
v___x_122_ = l_Lean_Core_getMaxHeartbeats(v___x_121_);
return v___x_122_;
}
}
static uint8_t _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = l_Lean_diagnostics;
v___x_124_ = l_Lean_Options_empty;
v___x_125_ = l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__0(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = l_Lean_maxRecDepth;
v___x_127_ = l_Lean_Options_empty;
v___x_128_ = l_Lean_Option_get___at___00Lake_BuiltinLint_run_spec__1(v___x_127_, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("-- No linters registered for ", 29, 29);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object* v___x_130_, uint8_t v_scope_131_, lean_object* v___y_132_, uint8_t v___y_133_, lean_object* v_as_134_, size_t v_sz_135_, size_t v_i_136_, uint8_t v_b_137_){
_start:
{
uint8_t v_a_140_; lean_object* v_msg_145_; lean_object* v_a_150_; lean_object* v___x_158_; uint8_t v_anyFailed_159_; uint8_t v_anyFailed_160_; lean_object* v___x_161_; lean_object* v_envLinterModule_162_; uint8_t v___x_163_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v_anyFailed_159_ = lean_nat_dec_eq(v___x_130_, v___x_158_);
v_anyFailed_160_ = 1;
v___x_161_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__4);
v_envLinterModule_162_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_envLinterModule_162_, 0, v___x_161_);
lean_ctor_set_uint8(v_envLinterModule_162_, sizeof(void*)*1, v_anyFailed_159_);
lean_ctor_set_uint8(v_envLinterModule_162_, sizeof(void*)*1 + 1, v_anyFailed_160_);
lean_ctor_set_uint8(v_envLinterModule_162_, sizeof(void*)*1 + 2, v_anyFailed_159_);
v___x_163_ = lean_usize_dec_lt(v_i_136_, v_sz_135_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec_ref(v_envLinterModule_162_);
v___x_164_ = lean_box(v_b_137_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_enable_initializer_execution();
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; uint32_t v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec_ref(v___x_166_);
v_a_167_ = lean_array_uget_borrowed(v_as_134_, v_i_136_);
lean_inc(v_a_167_);
v___x_168_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_168_, 0, v_a_167_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v_anyFailed_159_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1 + 1, v_anyFailed_160_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1 + 2, v_anyFailed_159_);
v___x_169_ = lean_unsigned_to_nat(2u);
v___x_170_ = lean_mk_empty_array_with_capacity(v___x_169_);
v___x_171_ = lean_array_push(v___x_170_, v___x_168_);
v___x_172_ = lean_array_push(v___x_171_, v_envLinterModule_162_);
v___x_173_ = l_Lean_Options_empty;
v___x_174_ = 1024;
v___x_175_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__5);
v___x_176_ = 2;
v___x_177_ = lean_box(1);
v___x_178_ = l_Lean_importModules(v___x_172_, v___x_173_, v___x_174_, v___x_175_, v_anyFailed_159_, v_anyFailed_160_, v___x_176_, v___x_177_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v_a_194_; uint8_t v___y_197_; lean_object* v___y_198_; lean_object* v___y_199_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; uint8_t v___y_204_; lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_225_; lean_object* v___y_226_; lean_object* v___y_227_; uint8_t v___y_228_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_env_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v_fileName_261_; lean_object* v_fileMap_262_; lean_object* v_currRecDepth_263_; lean_object* v_ref_264_; lean_object* v_currNamespace_265_; lean_object* v_openDecls_266_; lean_object* v_initHeartbeats_267_; lean_object* v_maxHeartbeats_268_; lean_object* v_quotContext_269_; lean_object* v_currMacroScope_270_; lean_object* v_cancelTk_x3f_271_; uint8_t v_suppressElabErrors_272_; lean_object* v_inheritedTraceOptions_273_; lean_object* v___y_274_; uint8_t v___y_310_; uint8_t v___x_330_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref(v___x_178_);
v___x_180_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__10);
v___x_181_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__11);
v___x_182_ = lean_io_get_num_heartbeats();
v___x_183_ = l_Lean_firstFrontendMacroScope;
v___x_184_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__12);
v___x_185_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__15);
v___x_186_ = lean_box(0);
v___x_187_ = lean_box(0);
v___x_188_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__16);
v___x_189_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__17);
v___x_190_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__18);
v___x_191_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_191_, 0, v_a_179_);
lean_ctor_set(v___x_191_, 1, v___x_184_);
lean_ctor_set(v___x_191_, 2, v___x_185_);
lean_ctor_set(v___x_191_, 3, v___x_188_);
lean_ctor_set(v___x_191_, 4, v___x_189_);
lean_ctor_set(v___x_191_, 5, v___x_180_);
lean_ctor_set(v___x_191_, 6, v___x_181_);
lean_ctor_set(v___x_191_, 7, v___x_190_);
lean_ctor_set(v___x_191_, 8, v___x_175_);
v___x_192_ = lean_st_mk_ref(v___x_191_);
v___x_249_ = l_Lean_inheritedTraceOptions;
v___x_250_ = lean_st_ref_get(v___x_249_);
v___x_251_ = lean_st_ref_get(v___x_192_);
v_env_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc_ref(v_env_252_);
lean_dec(v___x_251_);
v___x_253_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__22);
v___x_254_ = l_Lean_instInhabitedFileMap_default;
v___x_255_ = lean_box(0);
v___x_256_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__23);
v___x_257_ = lean_box(0);
v___x_258_ = l_Lean_Name_getRoot(v_a_167_);
v___x_259_ = lean_uint8_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__24);
v___x_330_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_252_);
lean_dec_ref(v_env_252_);
if (v___x_330_ == 0)
{
if (v___x_259_ == 0)
{
v___y_310_ = v___x_163_;
goto v___jp_309_;
}
else
{
v___y_310_ = v___x_330_;
goto v___jp_309_;
}
}
else
{
v___y_310_ = v___x_259_;
goto v___jp_309_;
}
v___jp_193_:
{
lean_object* v___x_195_; 
v___x_195_ = lean_st_ref_get(v___x_192_);
lean_dec(v___x_192_);
lean_dec(v___x_195_);
if (v_a_194_ == 0)
{
v_a_140_ = v_b_137_;
goto v___jp_139_;
}
else
{
v_a_140_ = v_anyFailed_160_;
goto v___jp_139_;
}
}
v___jp_196_:
{
uint8_t v___x_205_; lean_object* v___x_206_; 
v___x_205_ = 1;
v___x_206_ = l_Lean_Linter_EnvLinter_formatLinterResults(v___y_199_, v___y_201_, v_anyFailed_160_, v___y_202_, v___y_204_, v___x_205_, v___y_198_, v_anyFailed_160_, v___y_200_, v___y_203_);
lean_dec_ref(v___y_200_);
lean_dec_ref(v___y_201_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref(v___x_206_);
v___x_208_ = lean_st_ref_get(v___y_203_);
lean_dec(v___y_203_);
lean_dec(v___x_208_);
v___x_209_ = l_Lean_MessageData_toString(v_a_207_);
v___x_210_ = l_IO_print___at___00Lake_BuiltinLint_run_spec__3(v___x_209_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_dec_ref(v___x_210_);
v_a_194_ = v___y_197_;
goto v___jp_193_;
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_220_; 
lean_dec(v___x_192_);
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_220_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_220_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_220_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = lean_io_error_to_string(v_a_211_);
if (v_isShared_214_ == 0)
{
lean_ctor_set_tag(v___x_213_, 3);
lean_ctor_set(v___x_213_, 0, v___x_215_);
v___x_217_ = v___x_213_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_219_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_MessageData_ofFormat(v___x_217_);
v_msg_145_ = v___x_218_;
goto v___jp_144_;
}
}
}
}
else
{
lean_object* v_a_221_; 
lean_dec(v___y_203_);
lean_dec(v___x_192_);
v_a_221_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_221_);
lean_dec_ref(v___x_206_);
v_a_150_ = v_a_221_;
goto v___jp_149_;
}
}
v___jp_222_:
{
if (v___y_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
v___x_229_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__19);
lean_inc(v_a_167_);
v___x_230_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_167_, v_anyFailed_160_);
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_232_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20);
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
v___x_234_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__2(v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_dec_ref(v___x_234_);
v_a_194_ = v___y_228_;
goto v___jp_193_;
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_244_; 
lean_dec(v___x_192_);
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_244_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_239_ = lean_io_error_to_string(v_a_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 3);
lean_ctor_set(v___x_237_, 0, v___x_239_);
v___x_241_ = v___x_237_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_MessageData_ofFormat(v___x_241_);
v_msg_145_ = v___x_242_;
goto v___jp_144_;
}
}
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__21);
lean_inc(v_a_167_);
v___x_246_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_167_, v___y_228_);
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
lean_dec_ref(v___x_246_);
if (v___y_133_ == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 2;
v___y_197_ = v___y_228_;
v___y_198_ = v___y_223_;
v___y_199_ = v___y_224_;
v___y_200_ = v___y_225_;
v___y_201_ = v___y_226_;
v___y_202_ = v___x_247_;
v___y_203_ = v___y_227_;
v___y_204_ = v___x_248_;
goto v___jp_196_;
}
else
{
v___y_197_ = v___y_228_;
v___y_198_ = v___y_223_;
v___y_199_ = v___y_224_;
v___y_200_ = v___y_225_;
v___y_201_ = v___y_226_;
v___y_202_ = v___x_247_;
v___y_203_ = v___y_227_;
v___y_204_ = v_scope_131_;
goto v___jp_196_;
}
}
}
v___jp_260_:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(v___x_258_, v___y_274_);
lean_dec(v___x_258_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref(v___x_275_);
v___x_277_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__25);
lean_inc(v_cancelTk_x3f_271_);
lean_inc(v_currMacroScope_270_);
lean_inc(v_quotContext_269_);
lean_inc(v_maxHeartbeats_268_);
lean_inc(v_openDecls_266_);
lean_inc(v_currNamespace_265_);
lean_inc(v_ref_264_);
lean_inc_ref(v_fileMap_262_);
lean_inc_ref(v_fileName_261_);
v___x_278_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_278_, 0, v_fileName_261_);
lean_ctor_set(v___x_278_, 1, v_fileMap_262_);
lean_ctor_set(v___x_278_, 2, v___x_173_);
lean_ctor_set(v___x_278_, 3, v_currRecDepth_263_);
lean_ctor_set(v___x_278_, 4, v___x_277_);
lean_ctor_set(v___x_278_, 5, v_ref_264_);
lean_ctor_set(v___x_278_, 6, v_currNamespace_265_);
lean_ctor_set(v___x_278_, 7, v_openDecls_266_);
lean_ctor_set(v___x_278_, 8, v_initHeartbeats_267_);
lean_ctor_set(v___x_278_, 9, v_maxHeartbeats_268_);
lean_ctor_set(v___x_278_, 10, v_quotContext_269_);
lean_ctor_set(v___x_278_, 11, v_currMacroScope_270_);
lean_ctor_set(v___x_278_, 12, v_cancelTk_x3f_271_);
lean_ctor_set(v___x_278_, 13, v_inheritedTraceOptions_273_);
lean_ctor_set_uint8(v___x_278_, sizeof(void*)*14, v___x_259_);
lean_ctor_set_uint8(v___x_278_, sizeof(void*)*14 + 1, v_suppressElabErrors_272_);
v___x_279_ = l_Lean_Linter_EnvLinter_getChecks(v_scope_131_, v___y_132_, v___x_278_, v___y_274_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_280_);
lean_dec_ref(v___x_279_);
v___x_281_ = lean_array_get_size(v_a_280_);
v___x_282_ = lean_nat_dec_eq(v___x_281_, v___x_158_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_Linter_EnvLinter_lintCore(v_a_276_, v_a_280_, v___x_278_, v___y_274_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_284_);
lean_dec_ref(v___x_283_);
v___x_285_ = lean_array_get_size(v_a_284_);
v___x_286_ = lean_nat_dec_lt(v___x_158_, v___x_285_);
if (v___x_286_ == 0)
{
v___y_223_ = v___x_281_;
v___y_224_ = v_a_284_;
v___y_225_ = v___x_278_;
v___y_226_ = v_a_276_;
v___y_227_ = v___y_274_;
v___y_228_ = v___x_282_;
goto v___jp_222_;
}
else
{
if (v___x_286_ == 0)
{
v___y_223_ = v___x_281_;
v___y_224_ = v_a_284_;
v___y_225_ = v___x_278_;
v___y_226_ = v_a_276_;
v___y_227_ = v___y_274_;
v___y_228_ = v___x_282_;
goto v___jp_222_;
}
else
{
size_t v___x_287_; size_t v___x_288_; uint8_t v___x_289_; 
v___x_287_ = ((size_t)0ULL);
v___x_288_ = lean_usize_of_nat(v___x_285_);
v___x_289_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_BuiltinLint_run_spec__4(v___x_281_, v_a_284_, v___x_287_, v___x_288_);
v___y_223_ = v___x_281_;
v___y_224_ = v_a_284_;
v___y_225_ = v___x_278_;
v___y_226_ = v_a_276_;
v___y_227_ = v___y_274_;
v___y_228_ = v___x_289_;
goto v___jp_222_;
}
}
}
else
{
lean_object* v_a_290_; 
lean_dec_ref(v___x_278_);
lean_dec(v_a_276_);
lean_dec(v___y_274_);
lean_dec(v___x_192_);
v_a_290_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_290_);
lean_dec_ref(v___x_283_);
v_a_150_ = v_a_290_;
goto v___jp_149_;
}
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
lean_dec(v_a_280_);
lean_dec_ref(v___x_278_);
lean_dec(v_a_276_);
lean_dec(v___y_274_);
v___x_291_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__26);
lean_inc(v_a_167_);
v___x_292_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_167_, v___x_282_);
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
lean_dec_ref(v___x_292_);
v___x_294_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__20);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
v___x_296_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__2(v___x_295_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_dec_ref(v___x_296_);
v_a_194_ = v_anyFailed_159_;
goto v___jp_193_;
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_306_; 
lean_dec(v___x_192_);
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_306_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_306_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_306_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_301_ = lean_io_error_to_string(v_a_297_);
if (v_isShared_300_ == 0)
{
lean_ctor_set_tag(v___x_299_, 3);
lean_ctor_set(v___x_299_, 0, v___x_301_);
v___x_303_ = v___x_299_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_305_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_MessageData_ofFormat(v___x_303_);
v_msg_145_ = v___x_304_;
goto v___jp_144_;
}
}
}
}
}
else
{
lean_object* v_a_307_; 
lean_dec_ref(v___x_278_);
lean_dec(v_a_276_);
lean_dec(v___y_274_);
lean_dec(v___x_192_);
v_a_307_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_307_);
lean_dec_ref(v___x_279_);
v_a_150_ = v_a_307_;
goto v___jp_149_;
}
}
else
{
lean_object* v_a_308_; 
lean_dec(v___y_274_);
lean_dec_ref(v_inheritedTraceOptions_273_);
lean_dec(v_initHeartbeats_267_);
lean_dec(v_currRecDepth_263_);
lean_dec(v___x_192_);
v_a_308_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_308_);
lean_dec_ref(v___x_275_);
v_a_150_ = v_a_308_;
goto v___jp_149_;
}
}
v___jp_309_:
{
if (v___y_310_ == 0)
{
lean_object* v___x_311_; lean_object* v_env_312_; lean_object* v_nextMacroScope_313_; lean_object* v_ngen_314_; lean_object* v_auxDeclNGen_315_; lean_object* v_traceState_316_; lean_object* v_messages_317_; lean_object* v_infoState_318_; lean_object* v_snapshotTasks_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_328_; 
v___x_311_ = lean_st_ref_take(v___x_192_);
v_env_312_ = lean_ctor_get(v___x_311_, 0);
v_nextMacroScope_313_ = lean_ctor_get(v___x_311_, 1);
v_ngen_314_ = lean_ctor_get(v___x_311_, 2);
v_auxDeclNGen_315_ = lean_ctor_get(v___x_311_, 3);
v_traceState_316_ = lean_ctor_get(v___x_311_, 4);
v_messages_317_ = lean_ctor_get(v___x_311_, 6);
v_infoState_318_ = lean_ctor_get(v___x_311_, 7);
v_snapshotTasks_319_ = lean_ctor_get(v___x_311_, 8);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v___x_311_, 5);
lean_dec(v_unused_329_);
v___x_321_ = v___x_311_;
v_isShared_322_ = v_isSharedCheck_328_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_snapshotTasks_319_);
lean_inc(v_infoState_318_);
lean_inc(v_messages_317_);
lean_inc(v_traceState_316_);
lean_inc(v_auxDeclNGen_315_);
lean_inc(v_ngen_314_);
lean_inc(v_nextMacroScope_313_);
lean_inc(v_env_312_);
lean_dec(v___x_311_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_328_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_323_ = l_Lean_Kernel_enableDiag(v_env_312_, v___x_259_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 5, v___x_180_);
lean_ctor_set(v___x_321_, 0, v___x_323_);
v___x_325_ = v___x_321_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_nextMacroScope_313_);
lean_ctor_set(v_reuseFailAlloc_327_, 2, v_ngen_314_);
lean_ctor_set(v_reuseFailAlloc_327_, 3, v_auxDeclNGen_315_);
lean_ctor_set(v_reuseFailAlloc_327_, 4, v_traceState_316_);
lean_ctor_set(v_reuseFailAlloc_327_, 5, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_327_, 6, v_messages_317_);
lean_ctor_set(v_reuseFailAlloc_327_, 7, v_infoState_318_);
lean_ctor_set(v_reuseFailAlloc_327_, 8, v_snapshotTasks_319_);
v___x_325_ = v_reuseFailAlloc_327_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_st_ref_set(v___x_192_, v___x_325_);
lean_inc(v___x_192_);
v_fileName_261_ = v___x_253_;
v_fileMap_262_ = v___x_254_;
v_currRecDepth_263_ = v___x_158_;
v_ref_264_ = v___x_255_;
v_currNamespace_265_ = v___x_186_;
v_openDecls_266_ = v___x_187_;
v_initHeartbeats_267_ = v___x_182_;
v_maxHeartbeats_268_ = v___x_256_;
v_quotContext_269_ = v___x_186_;
v_currMacroScope_270_ = v___x_183_;
v_cancelTk_x3f_271_ = v___x_257_;
v_suppressElabErrors_272_ = v_anyFailed_159_;
v_inheritedTraceOptions_273_ = v___x_250_;
v___y_274_ = v___x_192_;
goto v___jp_260_;
}
}
}
else
{
lean_inc(v___x_192_);
v_fileName_261_ = v___x_253_;
v_fileMap_262_ = v___x_254_;
v_currRecDepth_263_ = v___x_158_;
v_ref_264_ = v___x_255_;
v_currNamespace_265_ = v___x_186_;
v_openDecls_266_ = v___x_187_;
v_initHeartbeats_267_ = v___x_182_;
v_maxHeartbeats_268_ = v___x_256_;
v_quotContext_269_ = v___x_186_;
v_currMacroScope_270_ = v___x_183_;
v_cancelTk_x3f_271_ = v___x_257_;
v_suppressElabErrors_272_ = v_anyFailed_159_;
v_inheritedTraceOptions_273_ = v___x_250_;
v___y_274_ = v___x_192_;
goto v___jp_260_;
}
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
v_a_331_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_178_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_178_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec_ref(v_envLinterModule_162_);
v_a_339_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_166_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_166_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
v___jp_139_:
{
size_t v___x_141_; size_t v___x_142_; 
v___x_141_ = ((size_t)1ULL);
v___x_142_ = lean_usize_add(v_i_136_, v___x_141_);
v_i_136_ = v___x_142_;
v_b_137_ = v_a_140_;
goto _start;
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = l_Lean_MessageData_toString(v_msg_145_);
v___x_147_ = lean_mk_io_user_error(v___x_146_);
v___x_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
return v___x_148_;
}
v___jp_149_:
{
if (lean_obj_tag(v_a_150_) == 0)
{
lean_object* v_msg_151_; 
v_msg_151_ = lean_ctor_get(v_a_150_, 1);
lean_inc_ref(v_msg_151_);
lean_dec_ref(v_a_150_);
v_msg_145_ = v_msg_151_;
goto v___jp_144_;
}
else
{
lean_object* v_id_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_id_152_ = lean_ctor_get(v_a_150_, 0);
lean_inc(v_id_152_);
lean_dec_ref(v_a_150_);
v___x_153_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___closed__0);
v___x_154_ = l_Nat_reprFast(v_id_152_);
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
lean_dec_ref(v___x_154_);
v___x_156_ = lean_mk_io_user_error(v___x_155_);
v___x_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object* v___x_347_, lean_object* v_scope_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v_as_351_, lean_object* v_sz_352_, lean_object* v_i_353_, lean_object* v_b_354_, lean_object* v___y_355_){
_start:
{
uint8_t v_scope_boxed_356_; uint8_t v___y_6900__boxed_357_; size_t v_sz_boxed_358_; size_t v_i_boxed_359_; uint8_t v_b_boxed_360_; lean_object* v_res_361_; 
v_scope_boxed_356_ = lean_unbox(v_scope_348_);
v___y_6900__boxed_357_ = lean_unbox(v___y_350_);
v_sz_boxed_358_ = lean_unbox_usize(v_sz_352_);
lean_dec(v_sz_352_);
v_i_boxed_359_ = lean_unbox_usize(v_i_353_);
lean_dec(v_i_353_);
v_b_boxed_360_ = lean_unbox(v_b_354_);
v_res_361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v___x_347_, v_scope_boxed_356_, v___y_349_, v___y_6900__boxed_357_, v_as_351_, v_sz_boxed_358_, v_i_boxed_359_, v_b_boxed_360_);
lean_dec_ref(v_as_351_);
lean_dec(v___y_349_);
lean_dec(v___x_347_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6(lean_object* v_s_362_){
_start:
{
lean_object* v___x_364_; lean_object* v_putStr_365_; lean_object* v___x_366_; 
v___x_364_ = lean_get_stderr();
v_putStr_365_ = lean_ctor_get(v___x_364_, 4);
lean_inc_ref(v_putStr_365_);
lean_dec_ref(v___x_364_);
v___x_366_ = lean_apply_2(v_putStr_365_, v_s_362_, lean_box(0));
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6___boxed(lean_object* v_s_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6(v_s_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6(lean_object* v_s_370_){
_start:
{
uint32_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = 10;
v___x_373_ = lean_string_push(v_s_370_, v___x_372_);
v___x_374_ = l_IO_eprint___at___00IO_eprintln___at___00Lake_BuiltinLint_run_spec__6_spec__6(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6___boxed(lean_object* v_s_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6(v_s_375_);
return v_res_377_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__0(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("lake lint: no modules specified for builtin linting", 51, 51);
return v___x_378_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__1(void){
_start:
{
uint32_t v___x_379_; lean_object* v___x_380_; 
v___x_379_ = 0;
v___x_380_ = lean_box_uint32(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__2(void){
_start:
{
uint32_t v___x_381_; lean_object* v___x_382_; 
v___x_381_ = 1;
v___x_382_ = lean_box_uint32(v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object* v_args_383_){
_start:
{
uint8_t v_scope_385_; lean_object* v_only_386_; lean_object* v_mods_387_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v_anyFailed_390_; 
v_scope_385_ = lean_ctor_get_uint8(v_args_383_, sizeof(void*)*2);
v_only_386_ = lean_ctor_get(v_args_383_, 0);
lean_inc_ref(v_only_386_);
v_mods_387_ = lean_ctor_get(v_args_383_, 1);
lean_inc_ref(v_mods_387_);
lean_dec_ref(v_args_383_);
v___x_388_ = lean_array_get_size(v_mods_387_);
v___x_389_ = lean_unsigned_to_nat(0u);
v_anyFailed_390_ = lean_nat_dec_eq(v___x_388_, v___x_389_);
if (v_anyFailed_390_ == 0)
{
lean_object* v___x_391_; uint8_t v___x_392_; lean_object* v___y_394_; 
v___x_391_ = lean_array_get_size(v_only_386_);
v___x_392_ = lean_nat_dec_eq(v___x_391_, v___x_389_);
if (v___x_392_ == 0)
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = lean_array_to_list(v_only_386_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
v___y_394_ = v___x_421_;
goto v___jp_393_;
}
else
{
lean_object* v___x_422_; 
lean_dec_ref(v_only_386_);
v___x_422_ = lean_box(0);
v___y_394_ = v___x_422_;
goto v___jp_393_;
}
v___jp_393_:
{
size_t v_sz_395_; size_t v___x_396_; lean_object* v___x_397_; 
v_sz_395_ = lean_array_size(v_mods_387_);
v___x_396_ = ((size_t)0ULL);
v___x_397_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v___x_388_, v_scope_385_, v___y_394_, v___x_392_, v_mods_387_, v_sz_395_, v___x_396_, v_anyFailed_390_);
lean_dec_ref(v_mods_387_);
lean_dec(v___y_394_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_411_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_411_ == 0)
{
v___x_400_ = v___x_397_;
v_isShared_401_ = v_isSharedCheck_411_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_411_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
uint8_t v___x_402_; 
v___x_402_ = lean_unbox(v_a_398_);
lean_dec(v_a_398_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_403_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_403_);
v___x_405_ = v___x_400_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
else
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_407_);
v___x_409_ = v___x_400_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_a_412_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_397_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_397_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
else
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref(v_mods_387_);
lean_dec_ref(v_only_386_);
v___x_423_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__0, &l_Lake_BuiltinLint_run___closed__0_once, _init_l_Lake_BuiltinLint_run___closed__0);
v___x_424_ = l_IO_eprintln___at___00Lake_BuiltinLint_run_spec__6(v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_432_; 
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_432_ == 0)
{
lean_object* v_unused_433_; 
v_unused_433_ = lean_ctor_get(v___x_424_, 0);
lean_dec(v_unused_433_);
v___x_426_ = v___x_424_;
v_isShared_427_ = v_isSharedCheck_432_;
goto v_resetjp_425_;
}
else
{
lean_dec(v___x_424_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_432_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v___x_428_);
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_424_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_424_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object* v_args_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lake_BuiltinLint_run(v_args_442_);
return v_res_444_;
}
}
lean_object* runtime_initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_BuiltinLint_run___boxed__const__1 = _init_l_Lake_BuiltinLint_run___boxed__const__1();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__1);
l_Lake_BuiltinLint_run___boxed__const__2 = _init_l_Lake_BuiltinLint_run___boxed__const__2();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_BuiltinLint(builtin);
}
#ifdef __cplusplus
}
#endif
