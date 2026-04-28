// Lean compiler output
// Module: LeanChecker
// Imports: public import Init public meta import Init public import Lean.CoreM public import Lean.Replay public import Lake.Load.Manifest
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
lean_object* l_Lean_findSysroot(lean_object*);
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_searchPathRef;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_SearchPath_findAllWithExt(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_searchModuleNameOfFileName(lean_object*, lean_object*);
uint8_t l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_3406481216____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_findOLean(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1554998348____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_replay(lean_object*, lean_object*);
lean_object* lean_environment_free_regions(lean_object*);
lean_object* lean_read_module_data_parts(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_OLeanLevel_adjustFileName(lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(lean_object*);
lean_object* lean_mk_empty_environment(uint32_t);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_withImportModules___redArg(lean_object*, lean_object*, lean_object*, uint32_t);
lean_object* l_Lake_Manifest_load_x3f(lean_object*);
lean_object* l_Lean_Name_capitalize(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_replayFromImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__0;
static lean_once_cell_t l_replayFromImports___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_replayFromImports___closed__1;
static lean_once_cell_t l_replayFromImports___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__2;
static lean_once_cell_t l_replayFromImports___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__3;
static lean_once_cell_t l_replayFromImports___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__4;
static lean_once_cell_t l_replayFromImports___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__5;
static lean_once_cell_t l_replayFromImports___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__6;
LEAN_EXPORT lean_object* l_replayFromImports(lean_object*);
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_replayFromFresh___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromFresh___closed__0;
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_getCurrentModule___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_getCurrentModule___closed__0;
LEAN_EXPORT lean_object* l_getCurrentModule();
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_partition_loop___at___00main_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_partition_loop___at___00main_spec__0___closed__0;
static lean_once_cell_t l_List_partition_loop___at___00main_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_partition_loop___at___00main_spec__0___closed__1;
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapM_loop___at___00main_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00main_spec__6___closed__0;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__0;
static lean_once_cell_t l_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__1;
static lean_once_cell_t l_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__2;
static lean_once_cell_t l_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__3;
static lean_once_cell_t l_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__4;
static lean_once_cell_t l_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__5;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object* v_as_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_b_4_);
return v___x_7_;
}
else
{
lean_object* v_snd_8_; lean_object* v_fst_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_42_; 
v_snd_8_ = lean_ctor_get(v_b_4_, 1);
v_fst_9_ = lean_ctor_get(v_b_4_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v_b_4_);
if (v_isSharedCheck_42_ == 0)
{
v___x_11_ = v_b_4_;
v_isShared_12_ = v_isSharedCheck_42_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_snd_8_);
lean_inc(v_fst_9_);
lean_dec(v_b_4_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_42_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v_array_13_; lean_object* v_start_14_; lean_object* v_stop_15_; uint8_t v___x_16_; 
v_array_13_ = lean_ctor_get(v_snd_8_, 0);
v_start_14_ = lean_ctor_get(v_snd_8_, 1);
v_stop_15_ = lean_ctor_get(v_snd_8_, 2);
v___x_16_ = lean_nat_dec_lt(v_start_14_, v_stop_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_18_; 
if (v_isShared_12_ == 0)
{
v___x_18_ = v___x_11_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_fst_9_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v_snd_8_);
v___x_18_ = v_reuseFailAlloc_20_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
return v___x_19_;
}
}
else
{
lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_38_; 
lean_inc(v_stop_15_);
lean_inc(v_start_14_);
lean_inc_ref(v_array_13_);
v_isSharedCheck_38_ = !lean_is_exclusive(v_snd_8_);
if (v_isSharedCheck_38_ == 0)
{
lean_object* v_unused_39_; lean_object* v_unused_40_; lean_object* v_unused_41_; 
v_unused_39_ = lean_ctor_get(v_snd_8_, 2);
lean_dec(v_unused_39_);
v_unused_40_ = lean_ctor_get(v_snd_8_, 1);
lean_dec(v_unused_40_);
v_unused_41_ = lean_ctor_get(v_snd_8_, 0);
lean_dec(v_unused_41_);
v___x_22_ = v_snd_8_;
v_isShared_23_ = v_isSharedCheck_38_;
goto v_resetjp_21_;
}
else
{
lean_dec(v_snd_8_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_38_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_a_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v_a_24_ = lean_array_uget_borrowed(v_as_1_, v_i_3_);
v___x_25_ = lean_array_fget(v_array_13_, v_start_14_);
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_add(v_start_14_, v___x_26_);
lean_dec(v_start_14_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_27_);
v___x_29_ = v___x_22_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_array_13_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_37_, 2, v_stop_15_);
v___x_29_ = v_reuseFailAlloc_37_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; lean_object* v___x_32_; 
lean_inc(v_a_24_);
v___x_30_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_1554998348____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_9_, v_a_24_, v___x_25_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 1, v___x_29_);
lean_ctor_set(v___x_11_, 0, v___x_30_);
v___x_32_ = v___x_11_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_29_);
v___x_32_ = v_reuseFailAlloc_36_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
size_t v___x_33_; size_t v___x_34_; 
v___x_33_ = ((size_t)1ULL);
v___x_34_ = lean_usize_add(v_i_3_, v___x_33_);
v_i_3_ = v___x_34_;
v_b_4_ = v___x_32_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object* v_as_43_, lean_object* v_sz_44_, lean_object* v_i_45_, lean_object* v_b_46_, lean_object* v___y_47_){
_start:
{
size_t v_sz_boxed_48_; size_t v_i_boxed_49_; lean_object* v_res_50_; 
v_sz_boxed_48_ = lean_unbox_usize(v_sz_44_);
lean_dec(v_sz_44_);
v_i_boxed_49_ = lean_unbox_usize(v_i_45_);
lean_dec(v_i_45_);
v_res_50_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_as_43_, v_sz_boxed_48_, v_i_boxed_49_, v_b_46_);
lean_dec_ref(v_as_43_);
return v_res_50_;
}
}
static lean_object* _init_l_replayFromImports___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_unsigned_to_nat(16u);
v___x_53_ = lean_mk_array(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static uint8_t _init_l_replayFromImports___closed__1(void){
_start:
{
uint8_t v___x_54_; uint8_t v___x_55_; 
v___x_54_ = 2;
v___x_55_ = l_Lean_instOrdOLeanLevel_ord(v___x_54_, v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_replayFromImports___closed__2(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("failed to read module data", 26, 26);
return v___x_56_;
}
}
static lean_object* _init_l_replayFromImports___closed__3(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_replayFromImports___closed__2, &l_replayFromImports___closed__2_once, _init_l_replayFromImports___closed__2);
v___x_58_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_replayFromImports___closed__4(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("object file '", 13, 13);
return v___x_59_;
}
}
static lean_object* _init_l_replayFromImports___closed__5(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_mk_string_unchecked("' of module ", 12, 12);
return v___x_60_;
}
}
static lean_object* _init_l_replayFromImports___closed__6(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked(" does not exist", 15, 15);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_replayFromImports(lean_object* v_module_62_){
_start:
{
lean_object* v___x_64_; 
lean_inc(v_module_62_);
v___x_64_ = l_Lean_findOLean(v_module_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_190_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_190_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_190_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_190_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
uint8_t v___x_69_; uint8_t v___y_71_; lean_object* v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v___y_75_; uint8_t v___y_76_; lean_object* v___y_77_; uint8_t v___y_78_; lean_object* v_fnames_139_; 
v___x_69_ = l_System_FilePath_pathExists(v_a_65_);
if (v___x_69_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_166_ = lean_obj_once(&l_replayFromImports___closed__4, &l_replayFromImports___closed__4_once, _init_l_replayFromImports___closed__4);
v___x_167_ = lean_string_append(v___x_166_, v_a_65_);
lean_dec(v_a_65_);
v___x_168_ = lean_obj_once(&l_replayFromImports___closed__5, &l_replayFromImports___closed__5_once, _init_l_replayFromImports___closed__5);
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
v___x_170_ = 1;
v___x_171_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_62_, v___x_170_);
v___x_172_ = lean_string_append(v___x_169_, v___x_171_);
lean_dec_ref(v___x_171_);
v___x_173_ = lean_obj_once(&l_replayFromImports___closed__6, &l_replayFromImports___closed__6_once, _init_l_replayFromImports___closed__6);
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
v___x_175_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 1);
lean_ctor_set(v___x_67_, 0, v___x_175_);
v___x_177_ = v___x_67_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
lean_del_object(v___x_67_);
lean_dec(v_module_62_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_mk_empty_array_with_capacity(v___x_179_);
lean_inc_n(v_a_65_, 2);
v___x_181_ = lean_array_push(v___x_180_, v_a_65_);
v___x_182_ = 1;
v___x_183_ = l_Lean_OLeanLevel_adjustFileName(v_a_65_, v___x_182_);
v___x_184_ = l_System_FilePath_pathExists(v___x_183_);
if (v___x_184_ == 0)
{
lean_dec_ref(v___x_183_);
lean_dec(v_a_65_);
v_fnames_139_ = v___x_181_;
goto v___jp_138_;
}
else
{
uint8_t v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; 
v___x_185_ = 2;
v___x_186_ = l_Lean_OLeanLevel_adjustFileName(v_a_65_, v___x_185_);
v___x_187_ = l_System_FilePath_pathExists(v___x_186_);
v___x_188_ = lean_array_push(v___x_181_, v___x_183_);
if (v___x_187_ == 0)
{
lean_dec_ref(v___x_186_);
v_fnames_139_ = v___x_188_;
goto v___jp_138_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_array_push(v___x_188_, v___x_186_);
v_fnames_139_ = v___x_189_;
goto v___jp_138_;
}
}
}
v___jp_70_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v_imports_81_; lean_object* v___x_82_; 
v___x_79_ = l_Lean_instInhabitedImportState_default;
v___x_80_ = lean_st_mk_ref(v___x_79_);
v_imports_81_ = lean_ctor_get(v___y_72_, 0);
lean_inc_ref(v_imports_81_);
lean_dec_ref(v___y_72_);
lean_inc(v___y_77_);
v___x_82_ = l_Lean_importModulesCore(v_imports_81_, v___y_76_, v___y_77_, v___y_78_, v___x_80_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; uint32_t v___x_85_; lean_object* v___x_86_; 
lean_dec_ref(v___x_82_);
v___x_83_ = lean_st_ref_get(v___x_80_);
lean_dec(v___x_80_);
v___x_84_ = l_Lean_Options_empty;
v___x_85_ = 0;
v___x_86_ = l_Lean_finalizeImport(v___x_83_, v_imports_81_, v___x_84_, v___x_85_, v___y_71_, v___y_71_, v___y_76_, v___x_69_);
lean_dec(v___x_83_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v_fst_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_128_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref(v___x_86_);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_sub(v___y_74_, v___x_88_);
lean_dec(v___y_74_);
v___x_90_ = lean_array_fget(v___y_75_, v___x_89_);
lean_dec(v___x_89_);
lean_dec_ref(v___y_75_);
v_fst_91_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_90_, 1);
lean_dec(v_unused_129_);
v___x_93_ = v___x_90_;
v_isShared_94_ = v_isSharedCheck_128_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_fst_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_128_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_constNames_95_; lean_object* v_constants_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v_constNames_95_ = lean_ctor_get(v_fst_91_, 1);
lean_inc_ref(v_constNames_95_);
v_constants_96_ = lean_ctor_get(v_fst_91_, 2);
lean_inc_ref(v_constants_96_);
lean_dec(v_fst_91_);
v___x_97_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
lean_inc(v___y_73_);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___y_73_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_array_get_size(v_constants_96_);
v___x_100_ = l_Array_toSubarray___redArg(v_constants_96_, v___y_73_, v___x_99_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___x_100_);
lean_ctor_set(v___x_93_, 0, v___x_98_);
v___x_102_ = v___x_93_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_127_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
size_t v_sz_103_; size_t v___x_104_; lean_object* v___x_105_; 
v_sz_103_ = lean_array_size(v_constNames_95_);
v___x_104_ = ((size_t)0ULL);
v___x_105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_constNames_95_, v_sz_103_, v___x_104_, v___x_102_);
lean_dec_ref(v_constNames_95_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_fst_107_; lean_object* v___x_108_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref(v___x_105_);
v_fst_107_ = lean_ctor_get(v_a_106_, 0);
lean_inc(v_fst_107_);
lean_dec(v_a_106_);
v___x_108_ = l_Lean_Environment_replay(v_fst_107_, v_a_87_);
lean_dec(v_fst_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_110_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_a_109_);
lean_dec_ref(v___x_108_);
v___x_110_ = lean_environment_free_regions(v_a_109_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_108_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_108_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v_a_87_);
v_a_119_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_105_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_105_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec(v___y_73_);
v_a_130_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_86_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_86_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_dec_ref(v_imports_81_);
lean_dec(v___x_80_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec(v___y_73_);
return v___x_82_;
}
}
v___jp_138_:
{
lean_object* v___x_140_; 
v___x_140_ = lean_read_module_data_parts(v_fnames_139_);
lean_dec_ref(v_fnames_139_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_157_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_157_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_157_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_157_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_145_ = lean_array_get_size(v_a_141_);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = lean_nat_dec_eq(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v_fst_149_; uint8_t v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
lean_del_object(v___x_143_);
v___x_148_ = lean_array_fget_borrowed(v_a_141_, v___x_146_);
v_fst_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_fst_149_);
v___x_150_ = 2;
v___x_151_ = lean_box(1);
v___x_152_ = lean_uint8_once(&l_replayFromImports___closed__1, &l_replayFromImports___closed__1_once, _init_l_replayFromImports___closed__1);
if (v___x_152_ == 0)
{
v___y_71_ = v___x_147_;
v___y_72_ = v_fst_149_;
v___y_73_ = v___x_146_;
v___y_74_ = v___x_145_;
v___y_75_ = v_a_141_;
v___y_76_ = v___x_150_;
v___y_77_ = v___x_151_;
v___y_78_ = v___x_69_;
goto v___jp_70_;
}
else
{
v___y_71_ = v___x_147_;
v___y_72_ = v_fst_149_;
v___y_73_ = v___x_146_;
v___y_74_ = v___x_145_;
v___y_75_ = v_a_141_;
v___y_76_ = v___x_150_;
v___y_77_ = v___x_151_;
v___y_78_ = v___x_147_;
goto v___jp_70_;
}
}
else
{
lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec(v_a_141_);
v___x_153_ = lean_obj_once(&l_replayFromImports___closed__3, &l_replayFromImports___closed__3_once, _init_l_replayFromImports___closed__3);
if (v_isShared_144_ == 0)
{
lean_ctor_set_tag(v___x_143_, 1);
lean_ctor_set(v___x_143_, 0, v___x_153_);
v___x_155_ = v___x_143_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
v_a_158_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_140_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_140_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec(v_module_62_);
v_a_191_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_64_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_64_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object* v_module_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_replayFromImports(v_module_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object* v_env_202_){
_start:
{
uint32_t v___x_204_; lean_object* v___x_205_; 
v___x_204_ = 0;
v___x_205_ = lean_mk_empty_environment(v___x_204_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_207_; lean_object* v_map_u2081_208_; lean_object* v___x_209_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
lean_dec_ref(v___x_205_);
v___x_207_ = l_Lean_Environment_constants(v_env_202_);
v_map_u2081_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc_ref(v_map_u2081_208_);
lean_dec_ref(v___x_207_);
v___x_209_ = l_Lean_Environment_replay(v_map_u2081_208_, v_a_206_);
lean_dec_ref(v_map_u2081_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_217_; 
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; 
v_unused_218_ = lean_ctor_get(v___x_209_, 0);
lean_dec(v_unused_218_);
v___x_211_ = v___x_209_;
v_isShared_212_ = v_isSharedCheck_217_;
goto v_resetjp_210_;
}
else
{
lean_dec(v___x_209_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_217_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_box(0);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_213_);
v___x_215_ = v___x_211_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
v_a_219_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_209_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_209_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_dec_ref(v_env_202_);
v_a_227_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_205_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_205_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object* v_env_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_replayFromFresh___lam__0(v_env_235_);
return v_res_237_;
}
}
static lean_object* _init_l_replayFromFresh___closed__0(void){
_start:
{
lean_object* v___f_238_; 
v___f_238_ = lean_alloc_closure((void*)(l_replayFromFresh___lam__0___boxed), 2, 0);
return v___f_238_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object* v_module_239_){
_start:
{
lean_object* v___f_241_; uint8_t v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint32_t v___x_249_; lean_object* v___x_250_; 
v___f_241_ = lean_obj_once(&l_replayFromFresh___closed__0, &l_replayFromFresh___closed__0_once, _init_l_replayFromFresh___closed__0);
v___x_242_ = 0;
v___x_243_ = 1;
v___x_244_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_244_, 0, v_module_239_);
lean_ctor_set_uint8(v___x_244_, sizeof(void*)*1, v___x_242_);
lean_ctor_set_uint8(v___x_244_, sizeof(void*)*1 + 1, v___x_243_);
lean_ctor_set_uint8(v___x_244_, sizeof(void*)*1 + 2, v___x_242_);
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_mk_empty_array_with_capacity(v___x_245_);
v___x_247_ = lean_array_push(v___x_246_, v___x_244_);
v___x_248_ = l_Lean_Options_empty;
v___x_249_ = 0;
v___x_250_ = l_Lean_withImportModules___redArg(v___x_247_, v___x_248_, v___f_241_, v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object* v_module_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_replayFromFresh(v_module_251_);
return v_res_253_;
}
}
static lean_object* _init_l_getCurrentModule___closed__0(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_mk_string_unchecked("lake-manifest.json", 18, 18);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_getCurrentModule(){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_obj_once(&l_getCurrentModule___closed__0, &l_getCurrentModule___closed__0_once, _init_l_getCurrentModule___closed__0);
v___x_257_ = l_Lake_Manifest_load_x3f(v___x_256_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_272_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_272_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_272_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_272_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
if (lean_obj_tag(v_a_258_) == 0)
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = lean_box(0);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_262_);
v___x_264_ = v___x_260_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
else
{
lean_object* v_val_266_; lean_object* v_name_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
v_val_266_ = lean_ctor_get(v_a_258_, 0);
lean_inc(v_val_266_);
lean_dec_ref(v_a_258_);
v_name_267_ = lean_ctor_get(v_val_266_, 0);
lean_inc(v_name_267_);
lean_dec(v_val_266_);
v___x_268_ = l_Lean_Name_capitalize(v_name_267_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_268_);
v___x_270_ = v___x_260_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_268_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_257_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_257_);
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
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object* v_a_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_getCurrentModule();
return v_res_282_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0(void){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = lean_mk_string_unchecked("leanchecker found a problem in ", 31, 31);
return v___x_283_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_mk_string_unchecked("replaying ", 10, 10);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(uint8_t v___y_285_, lean_object* v_as_286_, size_t v_sz_287_, size_t v_i_288_, lean_object* v_b_289_){
_start:
{
uint8_t v___x_291_; 
v___x_291_ = lean_usize_dec_lt(v_i_288_, v_sz_287_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v_b_289_);
return v___x_292_;
}
else
{
lean_object* v_a_293_; lean_object* v_fst_294_; lean_object* v_snd_295_; lean_object* v___x_296_; 
v_a_293_ = lean_array_uget_borrowed(v_as_286_, v_i_288_);
v_fst_294_ = lean_ctor_get(v_a_293_, 0);
v_snd_295_ = lean_ctor_get(v_a_293_, 1);
v___x_296_ = lean_box(0);
if (v___y_285_ == 0)
{
goto v___jp_297_;
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_315_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1);
lean_inc(v_fst_294_);
v___x_316_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_294_, v___y_285_);
v___x_317_ = lean_string_append(v___x_315_, v___x_316_);
lean_dec_ref(v___x_316_);
v___x_318_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v___x_317_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_dec_ref(v___x_318_);
goto v___jp_297_;
}
else
{
return v___x_318_;
}
}
v___jp_297_:
{
lean_object* v___x_298_; 
lean_inc(v_snd_295_);
v___x_298_ = lean_task_get_own(v_snd_295_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_a_299_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0);
lean_inc(v_fst_294_);
v___x_301_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_294_, v___x_291_);
v___x_302_ = lean_string_append(v___x_300_, v___x_301_);
lean_dec_ref(v___x_301_);
v___x_303_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v___x_303_, 0);
lean_dec(v_unused_311_);
v___x_305_ = v___x_303_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_dec(v___x_303_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set_tag(v___x_305_, 1);
lean_ctor_set(v___x_305_, 0, v_a_299_);
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_299_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
else
{
lean_dec(v_a_299_);
return v___x_303_;
}
}
else
{
size_t v___x_312_; size_t v___x_313_; 
lean_dec(v___x_298_);
v___x_312_ = ((size_t)1ULL);
v___x_313_ = lean_usize_add(v_i_288_, v___x_312_);
v_i_288_ = v___x_313_;
v_b_289_ = v___x_296_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___boxed(lean_object* v___y_319_, lean_object* v_as_320_, lean_object* v_sz_321_, lean_object* v_i_322_, lean_object* v_b_323_, lean_object* v___y_324_){
_start:
{
uint8_t v___y_5237__boxed_325_; size_t v_sz_boxed_326_; size_t v_i_boxed_327_; lean_object* v_res_328_; 
v___y_5237__boxed_325_ = lean_unbox(v___y_319_);
v_sz_boxed_326_ = lean_unbox_usize(v_sz_321_);
lean_dec(v_sz_321_);
v_i_boxed_327_ = lean_unbox_usize(v_i_322_);
lean_dec(v_i_322_);
v_res_328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(v___y_5237__boxed_325_, v_as_320_, v_sz_boxed_326_, v_i_boxed_327_, v_b_323_);
lean_dec_ref(v_as_320_);
return v_res_328_;
}
}
static lean_object* _init_l_List_partition_loop___at___00main_spec__0___closed__0(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_mk_string_unchecked("-", 1, 1);
return v___x_329_;
}
}
static lean_object* _init_l_List_partition_loop___at___00main_spec__0___closed__1(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l_List_partition_loop___at___00main_spec__0___closed__0, &l_List_partition_loop___at___00main_spec__0___closed__0_once, _init_l_List_partition_loop___at___00main_spec__0___closed__0);
v___x_331_ = lean_string_utf8_byte_size(v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
if (lean_obj_tag(v_a_332_) == 0)
{
lean_object* v_fst_334_; lean_object* v_snd_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_344_; 
v_fst_334_ = lean_ctor_get(v_a_333_, 0);
v_snd_335_ = lean_ctor_get(v_a_333_, 1);
v_isSharedCheck_344_ = !lean_is_exclusive(v_a_333_);
if (v_isSharedCheck_344_ == 0)
{
v___x_337_ = v_a_333_;
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_snd_335_);
lean_inc(v_fst_334_);
lean_dec(v_a_333_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_339_ = l_List_reverse___redArg(v_fst_334_);
v___x_340_ = l_List_reverse___redArg(v_snd_335_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 1, v___x_340_);
lean_ctor_set(v___x_337_, 0, v___x_339_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_339_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_head_345_; lean_object* v_tail_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_373_; 
v_head_345_ = lean_ctor_get(v_a_332_, 0);
v_tail_346_ = lean_ctor_get(v_a_332_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v_a_332_);
if (v_isSharedCheck_373_ == 0)
{
v___x_348_ = v_a_332_;
v_isShared_349_ = v_isSharedCheck_373_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_tail_346_);
lean_inc(v_head_345_);
lean_dec(v_a_332_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_373_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v_fst_350_; lean_object* v_snd_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_372_; 
v_fst_350_ = lean_ctor_get(v_a_333_, 0);
v_snd_351_ = lean_ctor_get(v_a_333_, 1);
v_isSharedCheck_372_ = !lean_is_exclusive(v_a_333_);
if (v_isSharedCheck_372_ == 0)
{
v___x_353_ = v_a_333_;
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_snd_351_);
lean_inc(v_fst_350_);
lean_dec(v_a_333_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_363_ = lean_obj_once(&l_List_partition_loop___at___00main_spec__0___closed__0, &l_List_partition_loop___at___00main_spec__0___closed__0_once, _init_l_List_partition_loop___at___00main_spec__0___closed__0);
v___x_364_ = lean_string_utf8_byte_size(v_head_345_);
v___x_365_ = lean_obj_once(&l_List_partition_loop___at___00main_spec__0___closed__1, &l_List_partition_loop___at___00main_spec__0___closed__1_once, _init_l_List_partition_loop___at___00main_spec__0___closed__1);
v___x_366_ = lean_nat_dec_le(v___x_365_, v___x_364_);
if (v___x_366_ == 0)
{
goto v___jp_355_;
}
else
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_string_memcmp(v_head_345_, v___x_363_, v___x_367_, v___x_367_, v___x_365_);
if (v___x_368_ == 0)
{
goto v___jp_355_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; 
lean_del_object(v___x_353_);
lean_del_object(v___x_348_);
v___x_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_369_, 0, v_head_345_);
lean_ctor_set(v___x_369_, 1, v_fst_350_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
lean_ctor_set(v___x_370_, 1, v_snd_351_);
v_a_332_ = v_tail_346_;
v_a_333_ = v___x_370_;
goto _start;
}
}
v___jp_355_:
{
lean_object* v___x_357_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 1, v_snd_351_);
v___x_357_ = v___x_348_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_head_345_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_snd_351_);
v___x_357_ = v_reuseFailAlloc_362_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_359_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___x_357_);
v___x_359_ = v___x_353_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_fst_350_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v___x_357_);
v___x_359_ = v_reuseFailAlloc_361_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
v_a_332_ = v_tail_346_;
v_a_333_ = v___x_359_;
goto _start;
}
}
}
}
}
}
}
}
static lean_object* _init_l_List_mapM_loop___at___00main_spec__6___closed__0(void){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_mk_string_unchecked("Could not resolve module: ", 26, 26);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6(lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_List_reverse___redArg(v_x_376_);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
else
{
lean_object* v_head_380_; lean_object* v_tail_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_395_; 
v_head_380_ = lean_ctor_get(v_x_375_, 0);
v_tail_381_ = lean_ctor_get(v_x_375_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_395_ == 0)
{
v___x_383_ = v_x_375_;
v_isShared_384_ = v_isSharedCheck_395_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_tail_381_);
lean_inc(v_head_380_);
lean_dec(v_x_375_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_395_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; uint8_t v___x_386_; 
lean_inc(v_head_380_);
v___x_385_ = l_String_toName(v_head_380_);
v___x_386_ = l_Lean_Name_isAnonymous(v___x_385_);
if (v___x_386_ == 0)
{
lean_object* v___x_388_; 
lean_dec(v_head_380_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 1, v_x_376_);
lean_ctor_set(v___x_383_, 0, v___x_385_);
v___x_388_ = v___x_383_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_x_376_);
v___x_388_ = v_reuseFailAlloc_390_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
v_x_375_ = v_tail_381_;
v_x_376_ = v___x_388_;
goto _start;
}
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec(v___x_385_);
lean_del_object(v___x_383_);
lean_dec(v_tail_381_);
lean_dec(v_x_376_);
v___x_391_ = lean_obj_once(&l_List_mapM_loop___at___00main_spec__6___closed__0, &l_List_mapM_loop___at___00main_spec__6___closed__0_once, _init_l_List_mapM_loop___at___00main_spec__6___closed__0);
v___x_392_ = lean_string_append(v___x_391_, v_head_380_);
lean_dec(v_head_380_);
v___x_393_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6___boxed(lean_object* v_x_396_, lean_object* v_x_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_List_mapM_loop___at___00main_spec__6(v_x_396_, v_x_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(lean_object* v_head_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_replayFromImports(v_head_400_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 1);
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
v_a_411_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_402_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_402_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
lean_ctor_set_tag(v___x_413_, 0);
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed(lean_object* v_head_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(v_head_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg(lean_object* v_as_x27_422_, lean_object* v_b_423_){
_start:
{
if (lean_obj_tag(v_as_x27_422_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v_b_423_);
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v___f_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_head_426_ = lean_ctor_get(v_as_x27_422_, 0);
v_tail_427_ = lean_ctor_get(v_as_x27_422_, 1);
lean_inc_n(v_head_426_, 2);
v___f_428_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_428_, 0, v_head_426_);
v___x_429_ = lean_unsigned_to_nat(0u);
v___x_430_ = lean_io_as_task(v___f_428_, v___x_429_);
v___x_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_431_, 0, v_head_426_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_array_push(v_b_423_, v___x_431_);
v_as_x27_422_ = v_tail_427_;
v_b_423_ = v___x_432_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___boxed(lean_object* v_as_x27_434_, lean_object* v_b_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_as_x27_434_, v_b_435_);
lean_dec(v_as_x27_434_);
return v_res_437_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0(void){
_start:
{
lean_object* v___x_438_; lean_object* v___f_439_; 
v___x_438_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_439_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_439_, 0, v___x_438_);
return v___f_439_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1(void){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lean_mk_string_unchecked("--fresh", 7, 7);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(lean_object* v_val_441_, lean_object* v_a_442_, lean_object* v_fst_443_, lean_object* v_as_444_, size_t v_sz_445_, size_t v_i_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_a_450_; uint8_t v___x_454_; 
v___x_454_ = lean_usize_dec_lt(v_i_446_, v_sz_445_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; 
lean_dec(v_fst_443_);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v_b_447_);
return v___x_455_;
}
else
{
lean_object* v_a_456_; lean_object* v___x_457_; 
v_a_456_ = lean_array_uget_borrowed(v_as_444_, v_i_446_);
lean_inc(v_a_456_);
v___x_457_ = l_Lean_searchModuleNameOfFileName(v_a_456_, v_val_441_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___y_460_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref(v___x_457_);
if (lean_obj_tag(v_a_458_) == 1)
{
lean_object* v_fst_463_; lean_object* v_snd_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_481_; 
v_fst_463_ = lean_ctor_get(v_b_447_, 0);
v_snd_464_ = lean_ctor_get(v_b_447_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v_b_447_);
if (v_isSharedCheck_481_ == 0)
{
v___x_466_ = v_b_447_;
v_isShared_467_ = v_isSharedCheck_481_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_snd_464_);
lean_inc(v_fst_463_);
lean_dec(v_b_447_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_481_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v_val_468_; lean_object* v___f_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_val_468_ = lean_ctor_get(v_a_458_, 0);
lean_inc(v_val_468_);
lean_dec_ref(v_a_458_);
v___f_477_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0);
v___x_478_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1);
lean_inc(v_fst_443_);
v___x_479_ = l_List_elem___redArg(v___f_477_, v___x_478_, v_fst_443_);
if (v___x_479_ == 0)
{
uint8_t v___x_480_; 
v___x_480_ = l_Lean_Name_isPrefixOf(v_a_442_, v_val_468_);
if (v___x_480_ == 0)
{
goto v___jp_472_;
}
else
{
lean_del_object(v___x_466_);
lean_dec(v_snd_464_);
goto v___jp_469_;
}
}
else
{
goto v___jp_472_;
}
v___jp_469_:
{
uint8_t v___x_470_; 
v___x_470_ = l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_3406481216____hygCtx___hyg_2__spec__1(v_val_468_, v_fst_463_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
v___x_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_471_, 0, v_val_468_);
lean_ctor_set(v___x_471_, 1, v_fst_463_);
v___y_460_ = v___x_471_;
goto v___jp_459_;
}
else
{
lean_dec(v_val_468_);
v___y_460_ = v_fst_463_;
goto v___jp_459_;
}
}
v___jp_472_:
{
uint8_t v___x_473_; 
v___x_473_ = lean_name_eq(v_a_442_, v_val_468_);
if (v___x_473_ == 0)
{
lean_object* v___x_475_; 
lean_dec(v_val_468_);
if (v_isShared_467_ == 0)
{
v___x_475_ = v___x_466_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_fst_463_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_snd_464_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
v_a_450_ = v___x_475_;
goto v___jp_449_;
}
}
else
{
lean_del_object(v___x_466_);
lean_dec(v_snd_464_);
goto v___jp_469_;
}
}
}
}
else
{
lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_dec(v_a_458_);
v_fst_482_ = lean_ctor_get(v_b_447_, 0);
v_snd_483_ = lean_ctor_get(v_b_447_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_b_447_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v_b_447_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snd_483_);
lean_inc(v_fst_482_);
lean_dec(v_b_447_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_fst_482_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v_snd_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
v_a_450_ = v___x_488_;
goto v___jp_449_;
}
}
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_box(v___x_454_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___y_460_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
v_a_450_ = v___x_462_;
goto v___jp_449_;
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec_ref(v_b_447_);
lean_dec(v_fst_443_);
v_a_491_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_457_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_457_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
v___jp_449_:
{
size_t v___x_451_; size_t v___x_452_; 
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_add(v_i_446_, v___x_451_);
v_i_446_ = v___x_452_;
v_b_447_ = v_a_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___boxed(lean_object* v_val_499_, lean_object* v_a_500_, lean_object* v_fst_501_, lean_object* v_as_502_, lean_object* v_sz_503_, lean_object* v_i_504_, lean_object* v_b_505_, lean_object* v___y_506_){
_start:
{
size_t v_sz_boxed_507_; size_t v_i_boxed_508_; lean_object* v_res_509_; 
v_sz_boxed_507_ = lean_unbox_usize(v_sz_503_);
lean_dec(v_sz_503_);
v_i_boxed_508_ = lean_unbox_usize(v_i_504_);
lean_dec(v_i_504_);
v_res_509_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(v_val_499_, v_a_500_, v_fst_501_, v_as_502_, v_sz_boxed_507_, v_i_boxed_508_, v_b_505_);
lean_dec_ref(v_as_502_);
lean_dec(v_a_500_);
lean_dec(v_val_499_);
return v_res_509_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = lean_mk_string_unchecked("olean", 5, 5);
return v___x_510_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_mk_string_unchecked("Could not find any oleans for: ", 31, 31);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg(lean_object* v_val_512_, lean_object* v_fst_513_, lean_object* v_as_x27_514_, lean_object* v_b_515_){
_start:
{
if (lean_obj_tag(v_as_x27_514_) == 0)
{
lean_object* v___x_517_; 
lean_dec(v_fst_513_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_b_515_);
return v___x_517_;
}
else
{
lean_object* v_head_518_; lean_object* v_tail_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_head_518_ = lean_ctor_get(v_as_x27_514_, 0);
v_tail_519_ = lean_ctor_get(v_as_x27_514_, 1);
v___x_520_ = lean_obj_once(&l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0);
v___x_521_ = l_Lean_SearchPath_findAllWithExt(v_val_512_, v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; size_t v_sz_526_; size_t v___x_527_; lean_object* v___x_528_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref(v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_box(v___x_523_);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v_b_515_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v_sz_526_ = lean_array_size(v_a_522_);
v___x_527_ = ((size_t)0ULL);
lean_inc(v_fst_513_);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(v_val_512_, v_head_518_, v_fst_513_, v_a_522_, v_sz_526_, v___x_527_, v___x_525_);
lean_dec(v_a_522_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_545_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_545_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_545_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_545_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v_snd_533_; uint8_t v___x_534_; 
v_snd_533_ = lean_ctor_get(v_a_529_, 1);
v___x_534_ = lean_unbox(v_snd_533_);
if (v___x_534_ == 0)
{
uint8_t v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
lean_dec(v_a_529_);
lean_dec(v_fst_513_);
v___x_535_ = 1;
v___x_536_ = lean_obj_once(&l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1, &l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1);
lean_inc(v_head_518_);
v___x_537_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_518_, v___x_535_);
v___x_538_ = lean_string_append(v___x_536_, v___x_537_);
lean_dec_ref(v___x_537_);
v___x_539_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
if (v_isShared_532_ == 0)
{
lean_ctor_set_tag(v___x_531_, 1);
lean_ctor_set(v___x_531_, 0, v___x_539_);
v___x_541_ = v___x_531_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
else
{
lean_object* v_fst_543_; 
lean_del_object(v___x_531_);
v_fst_543_ = lean_ctor_get(v_a_529_, 0);
lean_inc(v_fst_543_);
lean_dec(v_a_529_);
v_as_x27_514_ = v_tail_519_;
v_b_515_ = v_fst_543_;
goto _start;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec(v_fst_513_);
v_a_546_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_528_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_528_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_b_515_);
lean_dec(v_fst_513_);
v_a_554_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_521_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_521_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___boxed(lean_object* v_val_562_, lean_object* v_fst_563_, lean_object* v_as_x27_564_, lean_object* v_b_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v_val_562_, v_fst_563_, v_as_x27_564_, v_b_565_);
lean_dec(v_as_x27_564_);
lean_dec(v_val_562_);
return v_res_567_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_mk_string_unchecked(" with --fresh", 13, 13);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg(uint8_t v___y_569_, lean_object* v_as_x27_570_, lean_object* v_b_571_){
_start:
{
if (lean_obj_tag(v_as_x27_570_) == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v_b_571_);
return v___x_573_;
}
else
{
lean_object* v_head_574_; lean_object* v_tail_575_; lean_object* v___x_576_; 
v_head_574_ = lean_ctor_get(v_as_x27_570_, 0);
v_tail_575_ = lean_ctor_get(v_as_x27_570_, 1);
v___x_576_ = lean_box(0);
if (v___y_569_ == 0)
{
goto v___jp_577_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_580_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__1);
lean_inc(v_head_574_);
v___x_581_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_574_, v___y_569_);
v___x_582_ = lean_string_append(v___x_580_, v___x_581_);
lean_dec_ref(v___x_581_);
v___x_583_ = lean_obj_once(&l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0, &l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0);
v___x_584_ = lean_string_append(v___x_582_, v___x_583_);
v___x_585_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v___x_584_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_dec_ref(v___x_585_);
goto v___jp_577_;
}
else
{
return v___x_585_;
}
}
v___jp_577_:
{
lean_object* v___x_578_; 
lean_inc(v_head_574_);
v___x_578_ = l_replayFromFresh(v_head_574_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_dec_ref(v___x_578_);
v_as_x27_570_ = v_tail_575_;
v_b_571_ = v___x_576_;
goto _start;
}
else
{
return v___x_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___boxed(lean_object* v___y_586_, lean_object* v_as_x27_587_, lean_object* v_b_588_, lean_object* v___y_589_){
_start:
{
uint8_t v___y_5715__boxed_590_; lean_object* v_res_591_; 
v___y_5715__boxed_590_ = lean_unbox(v___y_586_);
v_res_591_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_5715__boxed_590_, v_as_x27_587_, v_b_588_);
lean_dec(v_as_x27_587_);
return v_res_591_;
}
}
static lean_object* _init_l_main___closed__0(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_592_;
}
}
static lean_object* _init_l_main___closed__1(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_box(0);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
return v___x_594_;
}
}
static lean_object* _init_l_main___closed__2(void){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_mk_empty_array_with_capacity(v___x_595_);
return v___x_596_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_mk_string_unchecked("--fresh flag is only valid when specifying a single module:\n", 60, 60);
return v___x_597_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_mk_string_unchecked("-v", 2, 2);
return v___x_598_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_mk_string_unchecked("--verbose", 9, 9);
return v___x_599_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_600_; lean_object* v___x_601_; 
v___x_600_ = 0;
v___x_601_ = lean_box_uint32(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_602_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_obj_once(&l_main___closed__0, &l_main___closed__0_once, _init_l_main___closed__0);
v___x_608_ = l_Lean_findSysroot(v___x_607_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref(v___x_608_);
v___x_610_ = lean_box(0);
v___x_611_ = l_Lean_initSearchPath(v_a_609_, v___x_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_713_; 
lean_dec_ref(v___x_611_);
v___x_612_ = lean_obj_once(&l_main___closed__1, &l_main___closed__1_once, _init_l_main___closed__1);
v___x_613_ = l_List_partition_loop___at___00main_spec__0(v_args_602_, v___x_612_);
v_fst_614_ = lean_ctor_get(v___x_613_, 0);
v_snd_615_ = lean_ctor_get(v___x_613_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_713_ == 0)
{
v___x_617_ = v___x_613_;
v_isShared_618_ = v_isSharedCheck_713_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snd_615_);
lean_inc(v_fst_614_);
lean_dec(v___x_613_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_713_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___f_619_; uint8_t v___y_621_; lean_object* v_targets_622_; uint8_t v___y_685_; lean_object* v___x_709_; uint8_t v___x_710_; 
v___f_619_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0);
v___x_709_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
lean_inc(v_fst_614_);
v___x_710_ = l_List_elem___redArg(v___f_619_, v___x_709_, v_fst_614_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
lean_inc(v_fst_614_);
v___x_712_ = l_List_elem___redArg(v___f_619_, v___x_711_, v_fst_614_);
v___y_685_ = v___x_712_;
goto v___jp_684_;
}
else
{
v___y_685_ = v___x_710_;
goto v___jp_684_;
}
v___jp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_623_ = l_Lean_searchPathRef;
v___x_624_ = lean_st_ref_get(v___x_623_);
lean_inc(v_fst_614_);
v___x_625_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v___x_624_, v_fst_614_, v_targets_622_, v___x_610_);
lean_dec(v_targets_622_);
lean_dec(v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_675_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_675_ == 0)
{
v___x_628_ = v___x_625_;
v_isShared_629_ = v_isSharedCheck_675_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_625_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_675_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_630_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1);
v___x_631_ = l_List_elem___redArg(v___f_619_, v___x_630_, v_fst_614_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_del_object(v___x_628_);
v___x_632_ = lean_obj_once(&l_main___closed__2, &l_main___closed__2_once, _init_l_main___closed__2);
v___x_633_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_a_626_, v___x_632_);
lean_dec(v_a_626_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; size_t v_sz_636_; size_t v___x_637_; lean_object* v___x_638_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref(v___x_633_);
v___x_635_ = lean_box(0);
v_sz_636_ = lean_array_size(v_a_634_);
v___x_637_ = ((size_t)0ULL);
v___x_638_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(v___y_621_, v_a_634_, v_sz_636_, v___x_637_, v___x_635_);
lean_dec(v_a_634_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_dec_ref(v___x_638_);
goto v___jp_604_;
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_647_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_633_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_633_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_655_ = l_List_lengthTR___redArg(v_a_626_);
v___x_656_ = lean_unsigned_to_nat(1u);
v___x_657_ = lean_nat_dec_eq(v___x_655_, v___x_656_);
lean_dec(v___x_655_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_658_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_659_ = l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(v_a_626_);
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
lean_dec_ref(v___x_659_);
v___x_661_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
if (v_isShared_629_ == 0)
{
lean_ctor_set_tag(v___x_628_, 1);
lean_ctor_set(v___x_628_, 0, v___x_661_);
v___x_663_ = v___x_628_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
lean_del_object(v___x_628_);
v___x_665_ = lean_box(0);
v___x_666_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_621_, v_a_626_, v___x_665_);
lean_dec(v_a_626_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_dec_ref(v___x_666_);
goto v___jp_604_;
}
else
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_674_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_674_ == 0)
{
v___x_669_ = v___x_666_;
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v_fst_614_);
v_a_676_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_625_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_625_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
v___jp_684_:
{
if (lean_obj_tag(v_snd_615_) == 0)
{
lean_object* v___x_686_; 
v___x_686_ = l_getCurrentModule();
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref(v___x_686_);
if (v_isShared_618_ == 0)
{
lean_ctor_set_tag(v___x_617_, 1);
lean_ctor_set(v___x_617_, 1, v___x_610_);
lean_ctor_set(v___x_617_, 0, v_a_687_);
v___x_689_ = v___x_617_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_687_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_610_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
v___y_621_ = v___y_685_;
v_targets_622_ = v___x_689_;
goto v___jp_620_;
}
}
else
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_698_; 
lean_del_object(v___x_617_);
lean_dec(v_fst_614_);
v_a_691_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_698_ == 0)
{
v___x_693_ = v___x_686_;
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_686_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_691_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
else
{
lean_object* v___x_699_; 
lean_del_object(v___x_617_);
v___x_699_ = l_List_mapM_loop___at___00main_spec__6(v_snd_615_, v___x_610_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref(v___x_699_);
v___y_621_ = v___y_685_;
v_targets_622_ = v_a_700_;
goto v___jp_620_;
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v_fst_614_);
v_a_701_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_699_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_699_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec(v_args_602_);
v_a_714_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_611_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_611_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v_args_602_);
v_a_722_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_608_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_608_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
v___jp_604_:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = l_main___boxed__const__1;
v___x_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = _lean_main(v_args_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2(lean_object* v_val_733_, lean_object* v_fst_734_, lean_object* v_as_735_, lean_object* v_as_x27_736_, lean_object* v_b_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v_val_733_, v_fst_734_, v_as_x27_736_, v_b_737_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___boxed(lean_object* v_val_741_, lean_object* v_fst_742_, lean_object* v_as_743_, lean_object* v_as_x27_744_, lean_object* v_b_745_, lean_object* v_a_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_List_forIn_x27_loop___at___00main_spec__2(v_val_741_, v_fst_742_, v_as_743_, v_as_x27_744_, v_b_745_, v_a_746_);
lean_dec(v_as_x27_744_);
lean_dec(v_as_743_);
lean_dec(v_val_741_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3(lean_object* v_as_749_, lean_object* v_as_x27_750_, lean_object* v_b_751_, lean_object* v_a_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_as_x27_750_, v_b_751_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___boxed(lean_object* v_as_755_, lean_object* v_as_x27_756_, lean_object* v_b_757_, lean_object* v_a_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_List_forIn_x27_loop___at___00main_spec__3(v_as_755_, v_as_x27_756_, v_b_757_, v_a_758_);
lean_dec(v_as_x27_756_);
lean_dec(v_as_755_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5(uint8_t v___y_761_, lean_object* v_as_762_, lean_object* v_as_x27_763_, lean_object* v_b_764_, lean_object* v_a_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_761_, v_as_x27_763_, v_b_764_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___boxed(lean_object* v___y_768_, lean_object* v_as_769_, lean_object* v_as_x27_770_, lean_object* v_b_771_, lean_object* v_a_772_, lean_object* v___y_773_){
_start:
{
uint8_t v___y_6062__boxed_774_; lean_object* v_res_775_; 
v___y_6062__boxed_774_ = lean_unbox(v___y_768_);
v_res_775_ = l_List_forIn_x27_loop___at___00main_spec__5(v___y_6062__boxed_774_, v_as_769_, v_as_x27_770_, v_b_771_, v_a_772_);
lean_dec(v_as_x27_770_);
lean_dec(v_as_769_);
return v_res_775_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Replay(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanChecker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize();
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  lean_initialize();
  res = initialize_LeanChecker(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
