// Lean compiler output
// Module: Lake.Build.Executable
// Imports: public import Lake.Config.FacetConfig import Lake.Build.Job.Register import Lake.Build.Target.Fetch import Lake.Build.Common import Lake.Build.Infos
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lake_ExternLib_staticFacet;
extern lean_object* l_Lake_ExternLib_keyword;
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lake_ModuleFacet_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_LeanExe_exeFacet;
extern lean_object* l_Lake_LeanExe_keyword;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg(lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
lean_object* lean_io_wait(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
extern lean_object* l_Lake_Package_transDepsFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
extern lean_object* l_System_FilePath_exeExtension;
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lake_LeanExe_linkArgs(lean_object*);
extern uint8_t l_System_Platform_isWindows;
uint8_t lean_strict_and(uint8_t, uint8_t);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_buildLeanExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
extern lean_object* l_Lake_LeanExe_defaultFacet;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0;
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1;
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2;
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0;
static lean_once_cell_t l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanExe_exeFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_exeFacetConfig___closed__0;
static lean_once_cell_t l_Lake_LeanExe_exeFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_exeFacetConfig___closed__1;
static lean_once_cell_t l_Lake_LeanExe_exeFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_exeFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanExe_defaultFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_defaultFacetConfig___closed__0;
static lean_once_cell_t l_Lake_LeanExe_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanExe_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanExe_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_LeanExe_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExe_initFacetConfigs___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanExe_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("type mismatch in target '", 25, 25);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("': expected '", 13, 13);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2(void){
_start:
{
uint8_t v___x_3_; lean_object* v_name_4_; lean_object* v___x_5_; 
v___x_3_ = 1;
v_name_4_ = l_Lake_instDataKindDynlib;
v___x_5_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("', got ", 7, 7);
return v___x_6_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_7_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("unknown", 7, 7);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3(lean_object* v_defaultPkg_9_, lean_object* v_self_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
uint8_t v___x_18_; lean_object* v___x_19_; 
v___x_18_ = 1;
lean_inc_ref_n(v_self_10_, 2);
v___x_19_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_9_, v_self_10_, v_self_10_, v___x_18_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, v_a_15_, v_a_16_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v_snd_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_62_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc(v_a_20_);
v_snd_21_ = lean_ctor_get(v_a_20_, 1);
v_isSharedCheck_62_ = !lean_is_exclusive(v_a_20_);
if (v_isSharedCheck_62_ == 0)
{
lean_object* v_unused_63_; 
v_unused_63_ = lean_ctor_get(v_a_20_, 0);
lean_dec(v_unused_63_);
v___x_23_ = v_a_20_;
v_isShared_24_ = v_isSharedCheck_62_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_snd_21_);
lean_dec(v_a_20_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_62_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_60_; 
v_a_25_ = lean_ctor_get(v___x_19_, 1);
v_isSharedCheck_60_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_60_ == 0)
{
lean_object* v_unused_61_; 
v_unused_61_ = lean_ctor_get(v___x_19_, 0);
lean_dec(v_unused_61_);
v___x_27_ = v___x_19_;
v_isShared_28_ = v_isSharedCheck_60_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_19_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_60_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_kind_29_; lean_object* v_name_30_; lean_object* v___y_32_; uint8_t v___x_50_; 
v_kind_29_ = lean_ctor_get(v_snd_21_, 1);
v_name_30_ = l_Lake_instDataKindDynlib;
v___x_50_ = lean_name_eq(v_kind_29_, v_name_30_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
lean_inc(v_kind_29_);
lean_del_object(v___x_23_);
lean_dec(v_snd_21_);
v___x_51_ = l_Lean_Name_isAnonymous(v_kind_29_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4);
v___x_53_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_29_, v___x_18_);
v___x_54_ = lean_string_append(v___x_52_, v___x_53_);
lean_dec_ref(v___x_53_);
v___x_55_ = lean_string_append(v___x_54_, v___x_52_);
v___y_32_ = v___x_55_;
goto v___jp_31_;
}
else
{
lean_object* v___x_56_; 
lean_dec(v_kind_29_);
v___x_56_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5);
v___y_32_ = v___x_56_;
goto v___jp_31_;
}
}
else
{
lean_object* v___x_58_; 
lean_del_object(v___x_27_);
lean_dec_ref(v_self_10_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v_a_25_);
lean_ctor_set(v___x_23_, 0, v_snd_21_);
v___x_58_ = v___x_23_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v_snd_21_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v_a_25_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
v___jp_31_:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_33_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0);
v___x_34_ = l_Lake_PartialBuildKey_toString(v_self_10_);
v___x_35_ = lean_string_append(v___x_33_, v___x_34_);
lean_dec_ref(v___x_34_);
v___x_36_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1);
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___x_38_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__2);
v___x_39_ = lean_string_append(v___x_37_, v___x_38_);
v___x_40_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3);
v___x_41_ = lean_string_append(v___x_39_, v___x_40_);
v___x_42_ = lean_string_append(v___x_41_, v___y_32_);
lean_dec_ref(v___y_32_);
v___x_43_ = 3;
v___x_44_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*1, v___x_43_);
v___x_45_ = lean_array_get_size(v_a_25_);
v___x_46_ = lean_array_push(v_a_25_, v___x_44_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 1);
lean_ctor_set(v___x_27_, 1, v___x_46_);
lean_ctor_set(v___x_27_, 0, v___x_45_);
v___x_48_ = v___x_27_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
else
{
lean_object* v_a_64_; lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
lean_dec_ref(v_self_10_);
v_a_64_ = lean_ctor_get(v___x_19_, 0);
v_a_65_ = lean_ctor_get(v___x_19_, 1);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_19_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_inc(v_a_64_);
lean_dec(v___x_19_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_64_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___boxed(lean_object* v_defaultPkg_73_, lean_object* v_self_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3(v_defaultPkg_73_, v_self_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec(v_a_77_);
lean_dec(v_a_76_);
return v_res_82_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0(void){
_start:
{
uint8_t v___x_83_; lean_object* v_name_84_; lean_object* v___x_85_; 
v___x_83_ = 1;
v_name_84_ = l_Lake_instDataKindFilePath;
v___x_85_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_84_, v___x_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4(lean_object* v_defaultPkg_86_, lean_object* v_self_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
uint8_t v___x_95_; lean_object* v___x_96_; 
v___x_95_ = 1;
lean_inc_ref_n(v_self_87_, 2);
v___x_96_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_86_, v_self_87_, v_self_87_, v___x_95_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v_snd_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_139_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
v_snd_98_ = lean_ctor_get(v_a_97_, 1);
v_isSharedCheck_139_ = !lean_is_exclusive(v_a_97_);
if (v_isSharedCheck_139_ == 0)
{
lean_object* v_unused_140_; 
v_unused_140_ = lean_ctor_get(v_a_97_, 0);
lean_dec(v_unused_140_);
v___x_100_ = v_a_97_;
v_isShared_101_ = v_isSharedCheck_139_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_snd_98_);
lean_dec(v_a_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_139_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_137_; 
v_a_102_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_137_ == 0)
{
lean_object* v_unused_138_; 
v_unused_138_ = lean_ctor_get(v___x_96_, 0);
lean_dec(v_unused_138_);
v___x_104_ = v___x_96_;
v_isShared_105_ = v_isSharedCheck_137_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_96_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_137_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v_kind_106_; lean_object* v_name_107_; lean_object* v___y_109_; uint8_t v___x_127_; 
v_kind_106_ = lean_ctor_get(v_snd_98_, 1);
v_name_107_ = l_Lake_instDataKindFilePath;
v___x_127_ = lean_name_eq(v_kind_106_, v_name_107_);
if (v___x_127_ == 0)
{
uint8_t v___x_128_; 
lean_inc(v_kind_106_);
lean_del_object(v___x_100_);
lean_dec(v_snd_98_);
v___x_128_ = l_Lean_Name_isAnonymous(v_kind_106_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__4);
v___x_130_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_106_, v___x_95_);
v___x_131_ = lean_string_append(v___x_129_, v___x_130_);
lean_dec_ref(v___x_130_);
v___x_132_ = lean_string_append(v___x_131_, v___x_129_);
v___y_109_ = v___x_132_;
goto v___jp_108_;
}
else
{
lean_object* v___x_133_; 
lean_dec(v_kind_106_);
v___x_133_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__5);
v___y_109_ = v___x_133_;
goto v___jp_108_;
}
}
else
{
lean_object* v___x_135_; 
lean_del_object(v___x_104_);
lean_dec_ref(v_self_87_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v_a_102_);
lean_ctor_set(v___x_100_, 0, v_snd_98_);
v___x_135_ = v___x_100_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_snd_98_);
lean_ctor_set(v_reuseFailAlloc_136_, 1, v_a_102_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
v___jp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_110_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__0);
v___x_111_ = l_Lake_PartialBuildKey_toString(v_self_87_);
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
lean_dec_ref(v___x_111_);
v___x_113_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__1);
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
v___x_115_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___closed__0);
v___x_116_ = lean_string_append(v___x_114_, v___x_115_);
v___x_117_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3___closed__3);
v___x_118_ = lean_string_append(v___x_116_, v___x_117_);
v___x_119_ = lean_string_append(v___x_118_, v___y_109_);
lean_dec_ref(v___y_109_);
v___x_120_ = 3;
v___x_121_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*1, v___x_120_);
v___x_122_ = lean_array_get_size(v_a_102_);
v___x_123_ = lean_array_push(v_a_102_, v___x_121_);
if (v_isShared_105_ == 0)
{
lean_ctor_set_tag(v___x_104_, 1);
lean_ctor_set(v___x_104_, 1, v___x_123_);
lean_ctor_set(v___x_104_, 0, v___x_122_);
v___x_125_ = v___x_104_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
else
{
lean_object* v_a_141_; lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec_ref(v_self_87_);
v_a_141_ = lean_ctor_get(v___x_96_, 0);
v_a_142_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_96_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_inc(v_a_141_);
lean_dec(v___x_96_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_141_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4___boxed(lean_object* v_defaultPkg_150_, lean_object* v_self_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4(v_defaultPkg_150_, v_self_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec(v_a_155_);
lean_dec(v_a_154_);
lean_dec(v_a_153_);
return v_res_159_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_unsigned_to_nat(16u);
v___x_162_ = lean_mk_array(v___x_161_, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__0);
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_mk_empty_array_with_capacity(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__2);
v___x_169_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__1);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13___closed__3);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9(lean_object* v___x_172_, lean_object* v_as_173_, size_t v_sz_174_, size_t v_i_175_, lean_object* v_b_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
uint8_t v___x_184_; 
v___x_184_ = lean_usize_dec_lt(v_i_175_, v_sz_174_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_dec_ref(v___y_177_);
lean_dec_ref(v___x_172_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_b_176_);
lean_ctor_set(v___x_185_, 1, v___y_182_);
return v___x_185_;
}
else
{
lean_object* v_a_186_; lean_object* v___x_187_; 
v_a_186_ = lean_array_uget_borrowed(v_as_173_, v_i_175_);
lean_inc_ref(v___y_177_);
lean_inc(v_a_186_);
lean_inc_ref(v___x_172_);
v___x_187_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4(v___x_172_, v_a_186_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v_a_189_; lean_object* v___x_190_; size_t v___x_191_; size_t v___x_192_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_188_);
v_a_189_ = lean_ctor_get(v___x_187_, 1);
lean_inc(v_a_189_);
lean_dec_ref(v___x_187_);
v___x_190_ = lean_array_push(v_b_176_, v_a_188_);
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_add(v_i_175_, v___x_191_);
v_i_175_ = v___x_192_;
v_b_176_ = v___x_190_;
v___y_182_ = v_a_189_;
goto _start;
}
else
{
lean_object* v_a_194_; lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec_ref(v___y_177_);
lean_dec_ref(v_b_176_);
lean_dec_ref(v___x_172_);
v_a_194_ = lean_ctor_get(v___x_187_, 0);
v_a_195_ = lean_ctor_get(v___x_187_, 1);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_187_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_inc(v_a_194_);
lean_dec(v___x_187_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_194_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9___boxed(lean_object* v___x_203_, lean_object* v_as_204_, lean_object* v_sz_205_, lean_object* v_i_206_, lean_object* v_b_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
size_t v_sz_boxed_215_; size_t v_i_boxed_216_; lean_object* v_res_217_; 
v_sz_boxed_215_ = lean_unbox_usize(v_sz_205_);
lean_dec(v_sz_205_);
v_i_boxed_216_ = lean_unbox_usize(v_i_206_);
lean_dec(v_i_206_);
v_res_217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9(v___x_203_, v_as_204_, v_sz_boxed_215_, v_i_boxed_216_, v_b_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v_as_204_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2(lean_object* v_a_218_, lean_object* v_as_219_, size_t v_i_220_, size_t v_stop_221_, lean_object* v_b_222_){
_start:
{
lean_object* v___y_224_; uint8_t v___x_228_; 
v___x_228_ = lean_usize_dec_eq(v_i_220_, v_stop_221_);
if (v___x_228_ == 0)
{
lean_object* v_toConfigDecl_229_; lean_object* v_name_230_; lean_object* v_kind_231_; lean_object* v_config_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v_toConfigDecl_229_ = lean_array_uget_borrowed(v_as_219_, v_i_220_);
v_name_230_ = lean_ctor_get(v_toConfigDecl_229_, 1);
v_kind_231_ = lean_ctor_get(v_toConfigDecl_229_, 2);
v_config_232_ = lean_ctor_get(v_toConfigDecl_229_, 3);
v___x_233_ = l_Lake_ExternLib_keyword;
v___x_234_ = lean_name_eq(v_kind_231_, v___x_233_);
if (v___x_234_ == 0)
{
v___y_224_ = v_b_222_;
goto v___jp_223_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; 
lean_inc(v_config_232_);
lean_inc(v_name_230_);
lean_inc_ref(v_a_218_);
v___x_235_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_235_, 0, v_a_218_);
lean_ctor_set(v___x_235_, 1, v_name_230_);
lean_ctor_set(v___x_235_, 2, v_config_232_);
v___x_236_ = lean_array_push(v_b_222_, v___x_235_);
v___y_224_ = v___x_236_;
goto v___jp_223_;
}
}
else
{
lean_dec_ref(v_a_218_);
return v_b_222_;
}
v___jp_223_:
{
size_t v___x_225_; size_t v___x_226_; 
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_220_, v___x_225_);
v_i_220_ = v___x_226_;
v_b_222_ = v___y_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2___boxed(lean_object* v_a_237_, lean_object* v_as_238_, lean_object* v_i_239_, lean_object* v_stop_240_, lean_object* v_b_241_){
_start:
{
size_t v_i_boxed_242_; size_t v_stop_boxed_243_; lean_object* v_res_244_; 
v_i_boxed_242_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_stop_boxed_243_ = lean_unbox_usize(v_stop_240_);
lean_dec(v_stop_240_);
v_res_244_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2(v_a_237_, v_as_238_, v_i_boxed_242_, v_stop_boxed_243_, v_b_241_);
lean_dec_ref(v_as_238_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1(lean_object* v_as_245_, size_t v_sz_246_, size_t v_i_247_, lean_object* v_b_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
uint8_t v___x_256_; 
v___x_256_ = lean_usize_dec_lt(v_i_247_, v_sz_246_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
lean_dec_ref(v___y_249_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_b_248_);
lean_ctor_set(v___x_257_, 1, v___y_254_);
return v___x_257_;
}
else
{
lean_object* v_a_258_; lean_object* v_pkg_259_; lean_object* v_name_260_; lean_object* v_keyName_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_a_258_ = lean_array_uget_borrowed(v_as_245_, v_i_247_);
v_pkg_259_ = lean_ctor_get(v_a_258_, 0);
v_name_260_ = lean_ctor_get(v_a_258_, 1);
v_keyName_261_ = lean_ctor_get(v_pkg_259_, 2);
v___x_262_ = l_Lake_ExternLib_staticFacet;
lean_inc(v_name_260_);
lean_inc(v_keyName_261_);
v___x_263_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_263_, 0, v_keyName_261_);
lean_ctor_set(v___x_263_, 1, v_name_260_);
v___x_264_ = l_Lake_ExternLib_keyword;
lean_inc(v_a_258_);
v___x_265_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
lean_ctor_set(v___x_265_, 2, v_a_258_);
lean_ctor_set(v___x_265_, 3, v___x_262_);
lean_inc_ref(v___y_249_);
lean_inc_ref(v___y_253_);
lean_inc(v___y_252_);
lean_inc(v___y_251_);
lean_inc(v___y_250_);
v___x_266_ = lean_apply_7(v___y_249_, v___x_265_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, lean_box(0));
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v_a_268_; lean_object* v___x_269_; size_t v___x_270_; size_t v___x_271_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_267_);
v_a_268_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_a_268_);
lean_dec_ref(v___x_266_);
v___x_269_ = lean_array_push(v_b_248_, v_a_267_);
v___x_270_ = ((size_t)1ULL);
v___x_271_ = lean_usize_add(v_i_247_, v___x_270_);
v_i_247_ = v___x_271_;
v_b_248_ = v___x_269_;
v___y_254_ = v_a_268_;
goto _start;
}
else
{
lean_object* v_a_273_; lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
lean_dec_ref(v___y_249_);
lean_dec_ref(v_b_248_);
v_a_273_ = lean_ctor_get(v___x_266_, 0);
v_a_274_ = lean_ctor_get(v___x_266_, 1);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_266_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_inc(v_a_273_);
lean_dec(v___x_266_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_273_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1___boxed(lean_object* v_as_282_, lean_object* v_sz_283_, lean_object* v_i_284_, lean_object* v_b_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
size_t v_sz_boxed_293_; size_t v_i_boxed_294_; lean_object* v_res_295_; 
v_sz_boxed_293_ = lean_unbox_usize(v_sz_283_);
lean_dec(v_sz_283_);
v_i_boxed_294_ = lean_unbox_usize(v_i_284_);
lean_dec(v_i_284_);
v_res_295_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1(v_as_282_, v_sz_boxed_293_, v_i_boxed_294_, v_b_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v_as_282_);
return v_res_295_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_mk_empty_array_with_capacity(v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12(lean_object* v_as_298_, size_t v_sz_299_, size_t v_i_300_, lean_object* v_b_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___y_310_; uint8_t v___x_319_; 
v___x_319_ = lean_usize_dec_lt(v_i_300_, v_sz_299_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v___y_302_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_b_301_);
lean_ctor_set(v___x_320_, 1, v___y_307_);
return v___x_320_;
}
else
{
lean_object* v_a_321_; lean_object* v_targetDecls_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_a_321_ = lean_array_uget_borrowed(v_as_298_, v_i_300_);
v_targetDecls_322_ = lean_ctor_get(v_a_321_, 14);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___closed__0);
v___x_325_ = lean_array_get_size(v_targetDecls_322_);
v___x_326_ = lean_nat_dec_lt(v___x_323_, v___x_325_);
if (v___x_326_ == 0)
{
v___y_310_ = v___x_324_;
goto v___jp_309_;
}
else
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_le(v___x_325_, v___x_325_);
if (v___x_327_ == 0)
{
if (v___x_326_ == 0)
{
v___y_310_ = v___x_324_;
goto v___jp_309_;
}
else
{
size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; 
v___x_328_ = ((size_t)0ULL);
v___x_329_ = lean_usize_of_nat(v___x_325_);
lean_inc(v_a_321_);
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2(v_a_321_, v_targetDecls_322_, v___x_328_, v___x_329_, v___x_324_);
v___y_310_ = v___x_330_;
goto v___jp_309_;
}
}
else
{
size_t v___x_331_; size_t v___x_332_; lean_object* v___x_333_; 
v___x_331_ = ((size_t)0ULL);
v___x_332_ = lean_usize_of_nat(v___x_325_);
lean_inc(v_a_321_);
v___x_333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__2(v_a_321_, v_targetDecls_322_, v___x_331_, v___x_332_, v___x_324_);
v___y_310_ = v___x_333_;
goto v___jp_309_;
}
}
}
v___jp_309_:
{
size_t v_sz_311_; size_t v___x_312_; lean_object* v___x_313_; 
v_sz_311_ = lean_array_size(v___y_310_);
v___x_312_ = ((size_t)0ULL);
lean_inc_ref(v___y_302_);
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__1(v___y_310_, v_sz_311_, v___x_312_, v_b_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec_ref(v___y_310_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v_a_315_; size_t v___x_316_; size_t v___x_317_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
v_a_315_ = lean_ctor_get(v___x_313_, 1);
lean_inc(v_a_315_);
lean_dec_ref(v___x_313_);
v___x_316_ = ((size_t)1ULL);
v___x_317_ = lean_usize_add(v_i_300_, v___x_316_);
v_i_300_ = v___x_317_;
v_b_301_ = v_a_314_;
v___y_307_ = v_a_315_;
goto _start;
}
else
{
lean_dec_ref(v___y_302_);
return v___x_313_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12___boxed(lean_object* v_as_334_, lean_object* v_sz_335_, lean_object* v_i_336_, lean_object* v_b_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
size_t v_sz_boxed_345_; size_t v_i_boxed_346_; lean_object* v_res_347_; 
v_sz_boxed_345_ = lean_unbox_usize(v_sz_335_);
lean_dec(v_sz_335_);
v_i_boxed_346_ = lean_unbox_usize(v_i_336_);
lean_dec(v_i_336_);
v_res_347_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12(v_as_334_, v_sz_boxed_345_, v_i_boxed_346_, v_b_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v_as_334_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(lean_object* v_a_348_, lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
uint8_t v___x_350_; 
v___x_350_ = 0;
return v___x_350_;
}
else
{
lean_object* v_key_351_; lean_object* v_tail_352_; lean_object* v_name_353_; lean_object* v_name_354_; uint8_t v___x_355_; 
v_key_351_ = lean_ctor_get(v_x_349_, 0);
v_tail_352_ = lean_ctor_get(v_x_349_, 2);
v_name_353_ = lean_ctor_get(v_key_351_, 1);
v_name_354_ = lean_ctor_get(v_a_348_, 1);
v___x_355_ = lean_name_eq(v_name_353_, v_name_354_);
if (v___x_355_ == 0)
{
v_x_349_ = v_tail_352_;
goto _start;
}
else
{
return v___x_355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_a_357_, lean_object* v_x_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(v_a_357_, v_x_358_);
lean_dec(v_x_358_);
lean_dec_ref(v_a_357_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_361_; uint64_t v___x_362_; 
v___x_361_ = lean_unsigned_to_nat(1723u);
v___x_362_ = lean_uint64_of_nat(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg(lean_object* v_m_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_buckets_365_; lean_object* v_name_366_; lean_object* v___x_367_; uint64_t v___y_369_; 
v_buckets_365_ = lean_ctor_get(v_m_363_, 1);
v_name_366_ = lean_ctor_get(v_a_364_, 1);
v___x_367_ = lean_array_get_size(v_buckets_365_);
if (lean_obj_tag(v_name_366_) == 0)
{
uint64_t v___x_383_; 
v___x_383_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0);
v___y_369_ = v___x_383_;
goto v___jp_368_;
}
else
{
uint64_t v_hash_384_; 
v_hash_384_ = lean_ctor_get_uint64(v_name_366_, sizeof(void*)*2);
v___y_369_ = v_hash_384_;
goto v___jp_368_;
}
v___jp_368_:
{
uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v_fold_372_; uint64_t v___x_373_; uint64_t v___x_374_; uint64_t v___x_375_; size_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_370_ = 32ULL;
v___x_371_ = lean_uint64_shift_right(v___y_369_, v___x_370_);
v_fold_372_ = lean_uint64_xor(v___y_369_, v___x_371_);
v___x_373_ = 16ULL;
v___x_374_ = lean_uint64_shift_right(v_fold_372_, v___x_373_);
v___x_375_ = lean_uint64_xor(v_fold_372_, v___x_374_);
v___x_376_ = lean_uint64_to_usize(v___x_375_);
v___x_377_ = lean_usize_of_nat(v___x_367_);
v___x_378_ = ((size_t)1ULL);
v___x_379_ = lean_usize_sub(v___x_377_, v___x_378_);
v___x_380_ = lean_usize_land(v___x_376_, v___x_379_);
v___x_381_ = lean_array_uget_borrowed(v_buckets_365_, v___x_380_);
v___x_382_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(v_a_364_, v___x_381_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___boxed(lean_object* v_m_385_, lean_object* v_a_386_){
_start:
{
uint8_t v_res_387_; lean_object* v_r_388_; 
v_res_387_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg(v_m_385_, v_a_386_);
lean_dec_ref(v_a_386_);
lean_dec_ref(v_m_385_);
v_r_388_ = lean_box(v_res_387_);
return v_r_388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19___redArg(lean_object* v_x_389_, lean_object* v_x_390_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
return v_x_389_;
}
else
{
lean_object* v_key_391_; lean_object* v_value_392_; lean_object* v_tail_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_420_; 
v_key_391_ = lean_ctor_get(v_x_390_, 0);
v_value_392_ = lean_ctor_get(v_x_390_, 1);
v_tail_393_ = lean_ctor_get(v_x_390_, 2);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_390_);
if (v_isSharedCheck_420_ == 0)
{
v___x_395_ = v_x_390_;
v_isShared_396_ = v_isSharedCheck_420_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_tail_393_);
lean_inc(v_value_392_);
lean_inc(v_key_391_);
lean_dec(v_x_390_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_420_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_name_397_; lean_object* v___x_398_; uint64_t v___y_400_; 
v_name_397_ = lean_ctor_get(v_key_391_, 1);
v___x_398_ = lean_array_get_size(v_x_389_);
if (lean_obj_tag(v_name_397_) == 0)
{
uint64_t v___x_418_; 
v___x_418_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0);
v___y_400_ = v___x_418_;
goto v___jp_399_;
}
else
{
uint64_t v_hash_419_; 
v_hash_419_ = lean_ctor_get_uint64(v_name_397_, sizeof(void*)*2);
v___y_400_ = v_hash_419_;
goto v___jp_399_;
}
v___jp_399_:
{
uint64_t v___x_401_; uint64_t v___x_402_; uint64_t v_fold_403_; uint64_t v___x_404_; uint64_t v___x_405_; uint64_t v___x_406_; size_t v___x_407_; size_t v___x_408_; size_t v___x_409_; size_t v___x_410_; size_t v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_401_ = 32ULL;
v___x_402_ = lean_uint64_shift_right(v___y_400_, v___x_401_);
v_fold_403_ = lean_uint64_xor(v___y_400_, v___x_402_);
v___x_404_ = 16ULL;
v___x_405_ = lean_uint64_shift_right(v_fold_403_, v___x_404_);
v___x_406_ = lean_uint64_xor(v_fold_403_, v___x_405_);
v___x_407_ = lean_uint64_to_usize(v___x_406_);
v___x_408_ = lean_usize_of_nat(v___x_398_);
v___x_409_ = ((size_t)1ULL);
v___x_410_ = lean_usize_sub(v___x_408_, v___x_409_);
v___x_411_ = lean_usize_land(v___x_407_, v___x_410_);
v___x_412_ = lean_array_uget_borrowed(v_x_389_, v___x_411_);
lean_inc(v___x_412_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 2, v___x_412_);
v___x_414_ = v___x_395_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_key_391_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_value_392_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v___x_412_);
v___x_414_ = v_reuseFailAlloc_417_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; 
v___x_415_ = lean_array_uset(v_x_389_, v___x_411_, v___x_414_);
v_x_389_ = v___x_415_;
v_x_390_ = v_tail_393_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18___redArg(lean_object* v_i_421_, lean_object* v_source_422_, lean_object* v_target_423_){
_start:
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = lean_array_get_size(v_source_422_);
v___x_425_ = lean_nat_dec_lt(v_i_421_, v___x_424_);
if (v___x_425_ == 0)
{
lean_dec_ref(v_source_422_);
lean_dec(v_i_421_);
return v_target_423_;
}
else
{
lean_object* v_es_426_; lean_object* v___x_427_; lean_object* v_source_428_; lean_object* v_target_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_es_426_ = lean_array_fget(v_source_422_, v_i_421_);
v___x_427_ = lean_box(0);
v_source_428_ = lean_array_fset(v_source_422_, v_i_421_, v___x_427_);
v_target_429_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19___redArg(v_target_423_, v_es_426_);
v___x_430_ = lean_unsigned_to_nat(1u);
v___x_431_ = lean_nat_add(v_i_421_, v___x_430_);
lean_dec(v_i_421_);
v_i_421_ = v___x_431_;
v_source_422_ = v_source_428_;
v_target_423_ = v_target_429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6___redArg(lean_object* v_data_433_){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_nbuckets_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_434_ = lean_array_get_size(v_data_433_);
v___x_435_ = lean_unsigned_to_nat(2u);
v_nbuckets_436_ = lean_nat_mul(v___x_434_, v___x_435_);
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = lean_box(0);
v___x_439_ = lean_mk_array(v_nbuckets_436_, v___x_438_);
v___x_440_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18___redArg(v___x_437_, v_data_433_, v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1___redArg(lean_object* v_m_441_, lean_object* v_a_442_, lean_object* v_b_443_){
_start:
{
lean_object* v_size_444_; lean_object* v_buckets_445_; lean_object* v_name_446_; lean_object* v___x_447_; uint64_t v___y_449_; 
v_size_444_ = lean_ctor_get(v_m_441_, 0);
v_buckets_445_ = lean_ctor_get(v_m_441_, 1);
v_name_446_ = lean_ctor_get(v_a_442_, 1);
v___x_447_ = lean_array_get_size(v_buckets_445_);
if (lean_obj_tag(v_name_446_) == 0)
{
uint64_t v___x_486_; 
v___x_486_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg___closed__0);
v___y_449_ = v___x_486_;
goto v___jp_448_;
}
else
{
uint64_t v_hash_487_; 
v_hash_487_ = lean_ctor_get_uint64(v_name_446_, sizeof(void*)*2);
v___y_449_ = v_hash_487_;
goto v___jp_448_;
}
v___jp_448_:
{
uint64_t v___x_450_; uint64_t v___x_451_; uint64_t v_fold_452_; uint64_t v___x_453_; uint64_t v___x_454_; uint64_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; size_t v___x_460_; lean_object* v_bkt_461_; uint8_t v___x_462_; 
v___x_450_ = 32ULL;
v___x_451_ = lean_uint64_shift_right(v___y_449_, v___x_450_);
v_fold_452_ = lean_uint64_xor(v___y_449_, v___x_451_);
v___x_453_ = 16ULL;
v___x_454_ = lean_uint64_shift_right(v_fold_452_, v___x_453_);
v___x_455_ = lean_uint64_xor(v_fold_452_, v___x_454_);
v___x_456_ = lean_uint64_to_usize(v___x_455_);
v___x_457_ = lean_usize_of_nat(v___x_447_);
v___x_458_ = ((size_t)1ULL);
v___x_459_ = lean_usize_sub(v___x_457_, v___x_458_);
v___x_460_ = lean_usize_land(v___x_456_, v___x_459_);
v_bkt_461_ = lean_array_uget_borrowed(v_buckets_445_, v___x_460_);
v___x_462_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(v_a_442_, v_bkt_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_483_; 
lean_inc_ref(v_buckets_445_);
lean_inc(v_size_444_);
v_isSharedCheck_483_ = !lean_is_exclusive(v_m_441_);
if (v_isSharedCheck_483_ == 0)
{
lean_object* v_unused_484_; lean_object* v_unused_485_; 
v_unused_484_ = lean_ctor_get(v_m_441_, 1);
lean_dec(v_unused_484_);
v_unused_485_ = lean_ctor_get(v_m_441_, 0);
lean_dec(v_unused_485_);
v___x_464_ = v_m_441_;
v_isShared_465_ = v_isSharedCheck_483_;
goto v_resetjp_463_;
}
else
{
lean_dec(v_m_441_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_483_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v_size_x27_467_; lean_object* v___x_468_; lean_object* v_buckets_x27_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_466_ = lean_unsigned_to_nat(1u);
v_size_x27_467_ = lean_nat_add(v_size_444_, v___x_466_);
lean_dec(v_size_444_);
lean_inc(v_bkt_461_);
v___x_468_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_468_, 0, v_a_442_);
lean_ctor_set(v___x_468_, 1, v_b_443_);
lean_ctor_set(v___x_468_, 2, v_bkt_461_);
v_buckets_x27_469_ = lean_array_uset(v_buckets_445_, v___x_460_, v___x_468_);
v___x_470_ = lean_unsigned_to_nat(4u);
v___x_471_ = lean_nat_mul(v_size_x27_467_, v___x_470_);
v___x_472_ = lean_unsigned_to_nat(3u);
v___x_473_ = lean_nat_div(v___x_471_, v___x_472_);
lean_dec(v___x_471_);
v___x_474_ = lean_array_get_size(v_buckets_x27_469_);
v___x_475_ = lean_nat_dec_le(v___x_473_, v___x_474_);
lean_dec(v___x_473_);
if (v___x_475_ == 0)
{
lean_object* v_val_476_; lean_object* v___x_478_; 
v_val_476_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6___redArg(v_buckets_x27_469_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 1, v_val_476_);
lean_ctor_set(v___x_464_, 0, v_size_x27_467_);
v___x_478_ = v___x_464_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_size_x27_467_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_val_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
else
{
lean_object* v___x_481_; 
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 1, v_buckets_x27_469_);
lean_ctor_set(v___x_464_, 0, v_size_x27_467_);
v___x_481_ = v___x_464_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_size_x27_467_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_buckets_x27_469_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_dec(v_b_443_);
lean_dec_ref(v_a_442_);
return v_m_441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0(lean_object* v_self_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_toHashSet_490_; lean_object* v_toArray_491_; uint8_t v___x_492_; 
v_toHashSet_490_ = lean_ctor_get(v_self_488_, 0);
v_toArray_491_ = lean_ctor_get(v_self_488_, 1);
v___x_492_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg(v_toHashSet_490_, v_a_489_);
if (v___x_492_ == 0)
{
lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_502_; 
lean_inc_ref(v_toArray_491_);
lean_inc_ref(v_toHashSet_490_);
v_isSharedCheck_502_ = !lean_is_exclusive(v_self_488_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_503_ = lean_ctor_get(v_self_488_, 1);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_self_488_, 0);
lean_dec(v_unused_504_);
v___x_494_ = v_self_488_;
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
else
{
lean_dec(v_self_488_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_496_ = lean_box(0);
lean_inc_ref(v_a_489_);
v___x_497_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1___redArg(v_toHashSet_490_, v_a_489_, v___x_496_);
v___x_498_ = lean_array_push(v_toArray_491_, v_a_489_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 1, v___x_498_);
lean_ctor_set(v___x_494_, 0, v___x_497_);
v___x_500_ = v___x_494_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
else
{
lean_dec_ref(v_a_489_);
return v_self_488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14(lean_object* v_as_505_, size_t v_i_506_, size_t v_stop_507_, lean_object* v_b_508_){
_start:
{
uint8_t v___x_509_; 
v___x_509_ = lean_usize_dec_eq(v_i_506_, v_stop_507_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v_lib_511_; lean_object* v___x_512_; size_t v___x_513_; size_t v___x_514_; 
v___x_510_ = lean_array_uget_borrowed(v_as_505_, v_i_506_);
v_lib_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc_ref(v_lib_511_);
v___x_512_ = l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0(v_b_508_, v_lib_511_);
v___x_513_ = ((size_t)1ULL);
v___x_514_ = lean_usize_add(v_i_506_, v___x_513_);
v_i_506_ = v___x_514_;
v_b_508_ = v___x_512_;
goto _start;
}
else
{
return v_b_508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14___boxed(lean_object* v_as_516_, lean_object* v_i_517_, lean_object* v_stop_518_, lean_object* v_b_519_){
_start:
{
size_t v_i_boxed_520_; size_t v_stop_boxed_521_; lean_object* v_res_522_; 
v_i_boxed_520_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_stop_boxed_521_ = lean_unbox_usize(v_stop_518_);
lean_dec(v_stop_518_);
v_res_522_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14(v_as_516_, v_i_boxed_520_, v_stop_boxed_521_, v_b_519_);
lean_dec_ref(v_as_516_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7(lean_object* v_a_523_, lean_object* v_as_524_, size_t v_sz_525_, size_t v_i_526_, lean_object* v_b_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
uint8_t v___x_535_; 
v___x_535_ = lean_usize_dec_lt(v_i_526_, v_sz_525_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_dec_ref(v___y_528_);
lean_dec_ref(v_a_523_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_b_527_);
lean_ctor_set(v___x_536_, 1, v___y_533_);
return v___x_536_;
}
else
{
lean_object* v_a_537_; lean_object* v___x_538_; 
v_a_537_ = lean_array_uget_borrowed(v_as_524_, v_i_526_);
lean_inc_ref(v___y_528_);
lean_inc_ref(v_a_523_);
lean_inc(v_a_537_);
v___x_538_ = l_Lake_ModuleFacet_fetch___redArg(v_a_537_, v_a_523_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v_a_540_; lean_object* v___x_541_; size_t v___x_542_; size_t v___x_543_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
v_a_540_ = lean_ctor_get(v___x_538_, 1);
lean_inc(v_a_540_);
lean_dec_ref(v___x_538_);
v___x_541_ = lean_array_push(v_b_527_, v_a_539_);
v___x_542_ = ((size_t)1ULL);
v___x_543_ = lean_usize_add(v_i_526_, v___x_542_);
v_i_526_ = v___x_543_;
v_b_527_ = v___x_541_;
v___y_533_ = v_a_540_;
goto _start;
}
else
{
lean_object* v_a_545_; lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec_ref(v___y_528_);
lean_dec_ref(v_b_527_);
lean_dec_ref(v_a_523_);
v_a_545_ = lean_ctor_get(v___x_538_, 0);
v_a_546_ = lean_ctor_get(v___x_538_, 1);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_538_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_inc(v_a_545_);
lean_dec(v___x_538_);
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
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_545_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_a_546_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7___boxed(lean_object* v_a_554_, lean_object* v_as_555_, lean_object* v_sz_556_, lean_object* v_i_557_, lean_object* v_b_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
size_t v_sz_boxed_566_; size_t v_i_boxed_567_; lean_object* v_res_568_; 
v_sz_boxed_566_ = lean_unbox_usize(v_sz_556_);
lean_dec(v_sz_556_);
v_i_boxed_567_ = lean_unbox_usize(v_i_557_);
lean_dec(v_i_557_);
v_res_568_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7(v_a_554_, v_as_555_, v_sz_boxed_566_, v_i_boxed_567_, v_b_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v_as_555_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8(uint8_t v_shouldExport_569_, lean_object* v_as_570_, size_t v_sz_571_, size_t v_i_572_, lean_object* v_b_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
uint8_t v___x_581_; 
v___x_581_ = lean_usize_dec_lt(v_i_572_, v_sz_571_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
lean_dec_ref(v___y_574_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v_b_573_);
lean_ctor_set(v___x_582_, 1, v___y_579_);
return v___x_582_;
}
else
{
lean_object* v_a_583_; lean_object* v_lib_584_; lean_object* v_config_585_; lean_object* v_nativeFacets_586_; lean_object* v___x_587_; lean_object* v___x_588_; size_t v_sz_589_; size_t v___x_590_; lean_object* v___x_591_; 
v_a_583_ = lean_array_uget_borrowed(v_as_570_, v_i_572_);
v_lib_584_ = lean_ctor_get(v_a_583_, 0);
v_config_585_ = lean_ctor_get(v_lib_584_, 2);
v_nativeFacets_586_ = lean_ctor_get(v_config_585_, 8);
v___x_587_ = lean_box(v_shouldExport_569_);
lean_inc_ref(v_nativeFacets_586_);
v___x_588_ = lean_apply_1(v_nativeFacets_586_, v___x_587_);
v_sz_589_ = lean_array_size(v___x_588_);
v___x_590_ = ((size_t)0ULL);
lean_inc_ref(v___y_574_);
lean_inc(v_a_583_);
v___x_591_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7(v_a_583_, v___x_588_, v_sz_589_, v___x_590_, v_b_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec_ref(v___x_588_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v_a_593_; size_t v___x_594_; size_t v___x_595_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
v_a_593_ = lean_ctor_get(v___x_591_, 1);
lean_inc(v_a_593_);
lean_dec_ref(v___x_591_);
v___x_594_ = ((size_t)1ULL);
v___x_595_ = lean_usize_add(v_i_572_, v___x_594_);
v_i_572_ = v___x_595_;
v_b_573_ = v_a_592_;
v___y_579_ = v_a_593_;
goto _start;
}
else
{
lean_dec_ref(v___y_574_);
return v___x_591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8___boxed(lean_object* v_shouldExport_597_, lean_object* v_as_598_, lean_object* v_sz_599_, lean_object* v_i_600_, lean_object* v_b_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
uint8_t v_shouldExport_boxed_609_; size_t v_sz_boxed_610_; size_t v_i_boxed_611_; lean_object* v_res_612_; 
v_shouldExport_boxed_609_ = lean_unbox(v_shouldExport_597_);
v_sz_boxed_610_ = lean_unbox_usize(v_sz_599_);
lean_dec(v_sz_599_);
v_i_boxed_611_ = lean_unbox_usize(v_i_600_);
lean_dec(v_i_600_);
v_res_612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8(v_shouldExport_boxed_609_, v_as_598_, v_sz_boxed_610_, v_i_boxed_611_, v_b_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v_as_598_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5(lean_object* v_a_613_, lean_object* v_as_614_, size_t v_sz_615_, size_t v_i_616_, lean_object* v_b_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = lean_usize_dec_lt(v_i_616_, v_sz_615_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
lean_dec_ref(v___y_618_);
lean_dec_ref(v_a_613_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v_b_617_);
lean_ctor_set(v___x_626_, 1, v___y_623_);
return v___x_626_;
}
else
{
lean_object* v_pkg_627_; lean_object* v_a_628_; lean_object* v___x_629_; 
v_pkg_627_ = lean_ctor_get(v_a_613_, 0);
v_a_628_ = lean_array_uget_borrowed(v_as_614_, v_i_616_);
lean_inc_ref(v___y_618_);
lean_inc(v_a_628_);
lean_inc_ref(v_pkg_627_);
v___x_629_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__4(v_pkg_627_, v_a_628_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v_a_631_; lean_object* v___x_632_; size_t v___x_633_; size_t v___x_634_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_630_);
v_a_631_ = lean_ctor_get(v___x_629_, 1);
lean_inc(v_a_631_);
lean_dec_ref(v___x_629_);
v___x_632_ = lean_array_push(v_b_617_, v_a_630_);
v___x_633_ = ((size_t)1ULL);
v___x_634_ = lean_usize_add(v_i_616_, v___x_633_);
v_i_616_ = v___x_634_;
v_b_617_ = v___x_632_;
v___y_623_ = v_a_631_;
goto _start;
}
else
{
lean_object* v_a_636_; lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v___y_618_);
lean_dec_ref(v_b_617_);
lean_dec_ref(v_a_613_);
v_a_636_ = lean_ctor_get(v___x_629_, 0);
v_a_637_ = lean_ctor_get(v___x_629_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_629_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_inc(v_a_636_);
lean_dec(v___x_629_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_636_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5___boxed(lean_object* v_a_645_, lean_object* v_as_646_, lean_object* v_sz_647_, lean_object* v_i_648_, lean_object* v_b_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
size_t v_sz_boxed_657_; size_t v_i_boxed_658_; lean_object* v_res_659_; 
v_sz_boxed_657_ = lean_unbox_usize(v_sz_647_);
lean_dec(v_sz_647_);
v_i_boxed_658_ = lean_unbox_usize(v_i_648_);
lean_dec(v_i_648_);
v_res_659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5(v_a_645_, v_as_646_, v_sz_boxed_657_, v_i_boxed_658_, v_b_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v_as_646_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6(lean_object* v_a_660_, lean_object* v_as_661_, size_t v_sz_662_, size_t v_i_663_, lean_object* v_b_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
uint8_t v___x_672_; 
v___x_672_ = lean_usize_dec_lt(v_i_663_, v_sz_662_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; 
lean_dec_ref(v___y_665_);
lean_dec_ref(v_a_660_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v_b_664_);
lean_ctor_set(v___x_673_, 1, v___y_670_);
return v___x_673_;
}
else
{
lean_object* v_pkg_674_; lean_object* v_a_675_; lean_object* v___x_676_; 
v_pkg_674_ = lean_ctor_get(v_a_660_, 0);
v_a_675_ = lean_array_uget_borrowed(v_as_661_, v_i_663_);
lean_inc_ref(v___y_665_);
lean_inc(v_a_675_);
lean_inc_ref(v_pkg_674_);
v___x_676_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3(v_pkg_674_, v_a_675_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v_a_678_; lean_object* v___x_679_; size_t v___x_680_; size_t v___x_681_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
v_a_678_ = lean_ctor_get(v___x_676_, 1);
lean_inc(v_a_678_);
lean_dec_ref(v___x_676_);
v___x_679_ = lean_array_push(v_b_664_, v_a_677_);
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_add(v_i_663_, v___x_680_);
v_i_663_ = v___x_681_;
v_b_664_ = v___x_679_;
v___y_670_ = v_a_678_;
goto _start;
}
else
{
lean_object* v_a_683_; lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref(v___y_665_);
lean_dec_ref(v_b_664_);
lean_dec_ref(v_a_660_);
v_a_683_ = lean_ctor_get(v___x_676_, 0);
v_a_684_ = lean_ctor_get(v___x_676_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_676_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_inc(v_a_683_);
lean_dec(v___x_676_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_683_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6___boxed(lean_object* v_a_692_, lean_object* v_as_693_, lean_object* v_sz_694_, lean_object* v_i_695_, lean_object* v_b_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
size_t v_sz_boxed_704_; size_t v_i_boxed_705_; lean_object* v_res_706_; 
v_sz_boxed_704_ = lean_unbox_usize(v_sz_694_);
lean_dec(v_sz_694_);
v_i_boxed_705_ = lean_unbox_usize(v_i_695_);
lean_dec(v_i_695_);
v_res_706_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6(v_a_692_, v_as_693_, v_sz_boxed_704_, v_i_boxed_705_, v_b_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v_as_693_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10(lean_object* v_as_707_, size_t v_sz_708_, size_t v_i_709_, lean_object* v_b_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_a_719_; lean_object* v_a_720_; uint8_t v___x_722_; 
v___x_722_ = lean_usize_dec_lt(v_i_709_, v_sz_708_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec_ref(v___y_711_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_b_710_);
lean_ctor_set(v___x_723_, 1, v___y_716_);
return v___x_723_;
}
else
{
lean_object* v_fst_724_; lean_object* v_snd_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_760_; 
v_fst_724_ = lean_ctor_get(v_b_710_, 0);
v_snd_725_ = lean_ctor_get(v_b_710_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_b_710_);
if (v_isSharedCheck_760_ == 0)
{
v___x_727_ = v_b_710_;
v_isShared_728_ = v_isSharedCheck_760_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_snd_725_);
lean_inc(v_fst_724_);
lean_dec(v_b_710_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_760_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v_a_729_; lean_object* v_pkg_730_; lean_object* v_config_731_; lean_object* v_toLeanConfig_732_; lean_object* v_config_733_; lean_object* v_toLeanConfig_734_; lean_object* v_moreLinkObjs_735_; lean_object* v_moreLinkLibs_736_; lean_object* v_moreLinkObjs_737_; lean_object* v_moreLinkLibs_738_; lean_object* v___x_739_; size_t v_sz_740_; size_t v___x_741_; lean_object* v___x_742_; 
v_a_729_ = lean_array_uget_borrowed(v_as_707_, v_i_709_);
v_pkg_730_ = lean_ctor_get(v_a_729_, 0);
v_config_731_ = lean_ctor_get(v_pkg_730_, 6);
v_toLeanConfig_732_ = lean_ctor_get(v_config_731_, 1);
v_config_733_ = lean_ctor_get(v_a_729_, 2);
v_toLeanConfig_734_ = lean_ctor_get(v_config_733_, 0);
v_moreLinkObjs_735_ = lean_ctor_get(v_toLeanConfig_732_, 6);
v_moreLinkLibs_736_ = lean_ctor_get(v_toLeanConfig_732_, 7);
v_moreLinkObjs_737_ = lean_ctor_get(v_toLeanConfig_734_, 6);
v_moreLinkLibs_738_ = lean_ctor_get(v_toLeanConfig_734_, 7);
lean_inc_ref(v_moreLinkObjs_735_);
v___x_739_ = l_Array_append___redArg(v_moreLinkObjs_735_, v_moreLinkObjs_737_);
v_sz_740_ = lean_array_size(v___x_739_);
v___x_741_ = ((size_t)0ULL);
lean_inc_ref(v___y_711_);
lean_inc(v_a_729_);
v___x_742_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__5(v_a_729_, v___x_739_, v_sz_740_, v___x_741_, v_fst_724_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
lean_dec_ref(v___x_739_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v_a_744_; lean_object* v___x_745_; size_t v_sz_746_; lean_object* v___x_747_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
v_a_744_ = lean_ctor_get(v___x_742_, 1);
lean_inc(v_a_744_);
lean_dec_ref(v___x_742_);
lean_inc_ref(v_moreLinkLibs_736_);
v___x_745_ = l_Array_append___redArg(v_moreLinkLibs_736_, v_moreLinkLibs_738_);
v_sz_746_ = lean_array_size(v___x_745_);
lean_inc_ref(v___y_711_);
lean_inc(v_a_729_);
v___x_747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__6(v_a_729_, v___x_745_, v_sz_746_, v___x_741_, v_snd_725_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v_a_744_);
lean_dec_ref(v___x_745_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
v_a_749_ = lean_ctor_get(v___x_747_, 1);
lean_inc(v_a_749_);
lean_dec_ref(v___x_747_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v_a_748_);
lean_ctor_set(v___x_727_, 0, v_a_743_);
v___x_751_ = v___x_727_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_743_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_a_748_);
v___x_751_ = v_reuseFailAlloc_755_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
size_t v___x_752_; size_t v___x_753_; 
v___x_752_ = ((size_t)1ULL);
v___x_753_ = lean_usize_add(v_i_709_, v___x_752_);
v_i_709_ = v___x_753_;
v_b_710_ = v___x_751_;
v___y_716_ = v_a_749_;
goto _start;
}
}
else
{
lean_object* v_a_756_; lean_object* v_a_757_; 
lean_dec(v_a_743_);
lean_del_object(v___x_727_);
lean_dec_ref(v___y_711_);
v_a_756_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_756_);
v_a_757_ = lean_ctor_get(v___x_747_, 1);
lean_inc(v_a_757_);
lean_dec_ref(v___x_747_);
v_a_719_ = v_a_756_;
v_a_720_ = v_a_757_;
goto v___jp_718_;
}
}
else
{
lean_object* v_a_758_; lean_object* v_a_759_; 
lean_del_object(v___x_727_);
lean_dec(v_snd_725_);
lean_dec_ref(v___y_711_);
v_a_758_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_758_);
v_a_759_ = lean_ctor_get(v___x_742_, 1);
lean_inc(v_a_759_);
lean_dec_ref(v___x_742_);
v_a_719_ = v_a_758_;
v_a_720_ = v_a_759_;
goto v___jp_718_;
}
}
}
v___jp_718_:
{
lean_object* v___x_721_; 
v___x_721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_721_, 0, v_a_719_);
lean_ctor_set(v___x_721_, 1, v_a_720_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10___boxed(lean_object* v_as_761_, lean_object* v_sz_762_, lean_object* v_i_763_, lean_object* v_b_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
size_t v_sz_boxed_772_; size_t v_i_boxed_773_; lean_object* v_res_774_; 
v_sz_boxed_772_ = lean_unbox_usize(v_sz_762_);
lean_dec(v_sz_762_);
v_i_boxed_773_ = lean_unbox_usize(v_i_763_);
lean_dec(v_i_763_);
v_res_774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10(v_as_761_, v_sz_boxed_772_, v_i_boxed_773_, v_b_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v_as_761_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11(lean_object* v___x_775_, lean_object* v_as_776_, size_t v_sz_777_, size_t v_i_778_, lean_object* v_b_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
uint8_t v___x_787_; 
v___x_787_ = lean_usize_dec_lt(v_i_778_, v_sz_777_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; 
lean_dec_ref(v___y_780_);
lean_dec_ref(v___x_775_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v_b_779_);
lean_ctor_set(v___x_788_, 1, v___y_785_);
return v___x_788_;
}
else
{
lean_object* v_a_789_; lean_object* v___x_790_; 
v_a_789_ = lean_array_uget_borrowed(v_as_776_, v_i_778_);
lean_inc_ref(v___y_780_);
lean_inc(v_a_789_);
lean_inc_ref(v___x_775_);
v___x_790_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__3(v___x_775_, v_a_789_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v_a_792_; lean_object* v___x_793_; size_t v___x_794_; size_t v___x_795_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
v_a_792_ = lean_ctor_get(v___x_790_, 1);
lean_inc(v_a_792_);
lean_dec_ref(v___x_790_);
v___x_793_ = lean_array_push(v_b_779_, v_a_791_);
v___x_794_ = ((size_t)1ULL);
v___x_795_ = lean_usize_add(v_i_778_, v___x_794_);
v_i_778_ = v___x_795_;
v_b_779_ = v___x_793_;
v___y_785_ = v_a_792_;
goto _start;
}
else
{
lean_object* v_a_797_; lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v___y_780_);
lean_dec_ref(v_b_779_);
lean_dec_ref(v___x_775_);
v_a_797_ = lean_ctor_get(v___x_790_, 0);
v_a_798_ = lean_ctor_get(v___x_790_, 1);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_790_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_inc(v_a_797_);
lean_dec(v___x_790_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_797_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11___boxed(lean_object* v___x_806_, lean_object* v_as_807_, lean_object* v_sz_808_, lean_object* v_i_809_, lean_object* v_b_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
size_t v_sz_boxed_818_; size_t v_i_boxed_819_; lean_object* v_res_820_; 
v_sz_boxed_818_ = lean_unbox_usize(v_sz_808_);
lean_dec(v_sz_808_);
v_i_boxed_819_ = lean_unbox_usize(v_i_809_);
lean_dec(v_i_809_);
v_res_820_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11(v___x_806_, v_as_807_, v_sz_boxed_818_, v_i_boxed_819_, v_b_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec(v___y_813_);
lean_dec(v___y_812_);
lean_dec_ref(v_as_807_);
return v_res_820_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0(void){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = lean_mk_string_unchecked("<nil>", 5, 5);
return v___x_821_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__0);
v___x_823_ = l_Lake_BuildTrace_nil(v___x_822_);
return v___x_823_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2(void){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_mk_string_unchecked("bad imports (see the '", 22, 22);
return v___x_824_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3(void){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = lean_mk_string_unchecked("' job for details)", 18, 18);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0(lean_object* v___x_826_, lean_object* v___x_827_, size_t v_sz_828_, size_t v___x_829_, lean_object* v_objJobs_830_, lean_object* v___x_831_, lean_object* v_pkg_832_, lean_object* v_root_833_, uint8_t v_supportInterpreter_834_, lean_object* v_toLeanConfig_835_, lean_object* v_libJobs_836_, lean_object* v_exeName_837_, lean_object* v_self_838_, lean_object* v___x_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; 
lean_inc_ref(v___y_840_);
lean_inc_ref(v___x_826_);
v___x_847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__7(v___x_826_, v___x_827_, v_sz_828_, v___x_829_, v_objJobs_830_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v_a_849_; lean_object* v_keyName_850_; lean_object* v_dir_851_; lean_object* v_config_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
v_a_849_ = lean_ctor_get(v___x_847_, 1);
lean_inc(v_a_849_);
lean_dec_ref(v___x_847_);
v_keyName_850_ = lean_ctor_get(v_pkg_832_, 2);
v_dir_851_ = lean_ctor_get(v_pkg_832_, 4);
lean_inc_ref(v_dir_851_);
v_config_852_ = lean_ctor_get(v_pkg_832_, 6);
lean_inc_ref(v_config_852_);
v___x_853_ = l_Lake_Module_transImportsFacet;
lean_inc(v_root_833_);
lean_inc(v_keyName_850_);
v___x_854_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_854_, 0, v_keyName_850_);
lean_ctor_set(v___x_854_, 1, v_root_833_);
v___x_855_ = l_Lake_Module_keyword;
v___x_856_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
lean_ctor_set(v___x_856_, 2, v___x_826_);
lean_ctor_set(v___x_856_, 3, v___x_853_);
lean_inc_ref(v___y_840_);
lean_inc_ref(v___y_844_);
lean_inc(v___y_843_);
lean_inc(v___y_842_);
lean_inc(v___x_831_);
v___x_857_ = lean_apply_7(v___y_840_, v___x_856_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_849_, lean_box(0));
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_1021_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_a_859_ = lean_ctor_get(v___x_857_, 1);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_861_ = v___x_857_;
v_isShared_862_ = v_isSharedCheck_1021_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_1021_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v_task_863_; lean_object* v___x_864_; 
v_task_863_ = lean_ctor_get(v_a_858_, 0);
lean_inc_ref(v_task_863_);
lean_dec(v_a_858_);
v___x_864_ = lean_io_wait(v_task_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; size_t v_sz_866_; lean_object* v___x_867_; 
lean_del_object(v___x_861_);
lean_dec(v_root_833_);
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref(v___x_864_);
v_sz_866_ = lean_array_size(v_a_865_);
lean_inc_ref(v___y_840_);
v___x_867_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__8(v_supportInterpreter_834_, v_a_865_, v_sz_866_, v___x_829_, v_a_848_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_859_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v_a_869_; lean_object* v_moreLinkObjs_870_; lean_object* v_moreLinkLibs_871_; lean_object* v_weakLinkArgs_872_; size_t v_sz_873_; lean_object* v___x_874_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
v_a_869_ = lean_ctor_get(v___x_867_, 1);
lean_inc(v_a_869_);
lean_dec_ref(v___x_867_);
v_moreLinkObjs_870_ = lean_ctor_get(v_toLeanConfig_835_, 6);
v_moreLinkLibs_871_ = lean_ctor_get(v_toLeanConfig_835_, 7);
v_weakLinkArgs_872_ = lean_ctor_get(v_toLeanConfig_835_, 9);
v_sz_873_ = lean_array_size(v_moreLinkObjs_870_);
lean_inc_ref(v___y_840_);
lean_inc_ref(v_pkg_832_);
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__9(v_pkg_832_, v_moreLinkObjs_870_, v_sz_873_, v___x_829_, v_a_868_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_869_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v_a_876_; lean_object* v___y_878_; lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
v_a_876_ = lean_ctor_get(v___x_874_, 1);
lean_inc(v_a_876_);
lean_dec_ref(v___x_874_);
v___x_982_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13;
v___x_983_ = lean_array_get_size(v_a_865_);
v___x_984_ = lean_nat_dec_lt(v___x_839_, v___x_983_);
if (v___x_984_ == 0)
{
lean_dec(v_a_865_);
v___y_878_ = v___x_982_;
goto v___jp_877_;
}
else
{
uint8_t v___x_985_; 
v___x_985_ = lean_nat_dec_le(v___x_983_, v___x_983_);
if (v___x_985_ == 0)
{
if (v___x_984_ == 0)
{
lean_dec(v_a_865_);
v___y_878_ = v___x_982_;
goto v___jp_877_;
}
else
{
size_t v___x_986_; lean_object* v___x_987_; 
v___x_986_ = lean_usize_of_nat(v___x_983_);
v___x_987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14(v_a_865_, v___x_829_, v___x_986_, v___x_982_);
lean_dec(v_a_865_);
v___y_878_ = v___x_987_;
goto v___jp_877_;
}
}
else
{
size_t v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_usize_of_nat(v___x_983_);
v___x_989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__14(v_a_865_, v___x_829_, v___x_988_, v___x_982_);
lean_dec(v_a_865_);
v___y_878_ = v___x_989_;
goto v___jp_877_;
}
}
v___jp_877_:
{
lean_object* v_toArray_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_980_; 
v_toArray_879_ = lean_ctor_get(v___y_878_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v___y_878_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; 
v_unused_981_ = lean_ctor_get(v___y_878_, 0);
lean_dec(v_unused_981_);
v___x_881_ = v___y_878_;
v_isShared_882_ = v_isSharedCheck_980_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_toArray_879_);
lean_dec(v___y_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_980_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 1, v_libJobs_836_);
lean_ctor_set(v___x_881_, 0, v_a_875_);
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_875_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_libJobs_836_);
v___x_884_ = v_reuseFailAlloc_979_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
size_t v_sz_885_; lean_object* v___x_886_; 
v_sz_885_ = lean_array_size(v_toArray_879_);
lean_inc_ref(v___y_840_);
v___x_886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__10(v_toArray_879_, v_sz_885_, v___x_829_, v___x_884_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_876_);
lean_dec_ref(v_toArray_879_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v_a_888_; lean_object* v_fst_889_; lean_object* v_snd_890_; size_t v_sz_891_; lean_object* v___x_892_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
v_a_888_ = lean_ctor_get(v___x_886_, 1);
lean_inc(v_a_888_);
lean_dec_ref(v___x_886_);
v_fst_889_ = lean_ctor_get(v_a_887_, 0);
lean_inc(v_fst_889_);
v_snd_890_ = lean_ctor_get(v_a_887_, 1);
lean_inc(v_snd_890_);
lean_dec(v_a_887_);
v_sz_891_ = lean_array_size(v_moreLinkLibs_871_);
lean_inc_ref(v___y_840_);
lean_inc_ref(v_pkg_832_);
v___x_892_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__11(v_pkg_832_, v_moreLinkLibs_871_, v_sz_891_, v___x_829_, v_snd_890_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_888_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
v_a_894_ = lean_ctor_get(v___x_892_, 1);
lean_inc(v_a_894_);
lean_dec_ref(v___x_892_);
v___x_895_ = l_Lake_Package_transDepsFacet;
lean_inc(v_keyName_850_);
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_keyName_850_);
v___x_897_ = l_Lake_Package_keyword;
lean_inc_ref(v_pkg_832_);
v___x_898_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_898_, 0, v___x_896_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
lean_ctor_set(v___x_898_, 2, v_pkg_832_);
lean_ctor_set(v___x_898_, 3, v___x_895_);
lean_inc_ref(v___y_840_);
lean_inc_ref(v___y_844_);
lean_inc(v___y_843_);
lean_inc(v___y_842_);
lean_inc(v___x_831_);
v___x_899_ = lean_apply_7(v___y_840_, v___x_898_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_894_, lean_box(0));
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v_a_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
v_a_901_ = lean_ctor_get(v___x_899_, 1);
lean_inc(v_a_901_);
lean_dec_ref(v___x_899_);
v___x_902_ = l_Lake_Job_await___redArg(v_a_900_, v_a_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v_a_904_; lean_object* v___x_905_; size_t v_sz_906_; lean_object* v___x_907_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
v_a_904_ = lean_ctor_get(v___x_902_, 1);
lean_inc(v_a_904_);
lean_dec_ref(v___x_902_);
v___x_905_ = lean_array_push(v_a_903_, v_pkg_832_);
v_sz_906_ = lean_array_size(v___x_905_);
lean_inc_ref(v___y_840_);
v___x_907_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__12(v___x_905_, v_sz_906_, v___x_829_, v_fst_889_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v_a_904_);
lean_dec_ref(v___x_905_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_toLeanConfig_908_; lean_object* v_a_909_; lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_933_; 
v_toLeanConfig_908_ = lean_ctor_get(v_config_852_, 1);
lean_inc_ref(v_toLeanConfig_908_);
v_a_909_ = lean_ctor_get(v___x_907_, 0);
v_a_910_ = lean_ctor_get(v___x_907_, 1);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_933_ == 0)
{
v___x_912_ = v___x_907_;
v_isShared_913_ = v_isSharedCheck_933_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_inc(v_a_909_);
lean_dec(v___x_907_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_933_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v_buildDir_914_; lean_object* v_binDir_915_; lean_object* v_weakLinkArgs_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v_buildDir_914_ = lean_ctor_get(v_config_852_, 5);
lean_inc_ref(v_buildDir_914_);
v_binDir_915_ = lean_ctor_get(v_config_852_, 8);
lean_inc_ref(v_binDir_915_);
lean_dec_ref(v_config_852_);
v_weakLinkArgs_916_ = lean_ctor_get(v_toLeanConfig_908_, 9);
lean_inc_ref(v_weakLinkArgs_916_);
lean_dec_ref(v_toLeanConfig_908_);
v___x_917_ = l_System_FilePath_normalize(v_buildDir_914_);
v___x_918_ = l_Lake_joinRelative(v_dir_851_, v___x_917_);
v___x_919_ = l_System_FilePath_normalize(v_binDir_915_);
v___x_920_ = l_Lake_joinRelative(v___x_918_, v___x_919_);
v___x_921_ = l_System_FilePath_exeExtension;
v___x_922_ = l_System_FilePath_addExtension(v_exeName_837_, v___x_921_);
v___x_923_ = l_Lake_joinRelative(v___x_920_, v___x_922_);
v___x_924_ = l_Array_append___redArg(v_weakLinkArgs_916_, v_weakLinkArgs_872_);
v___x_925_ = l_Lake_LeanExe_linkArgs(v_self_838_);
v___x_926_ = l_System_Platform_isWindows;
v___x_927_ = lean_strict_and(v___x_926_, v_supportInterpreter_834_);
v___x_928_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__1);
v___x_929_ = l_Lake_buildLeanExe(v___x_923_, v_a_909_, v_a_893_, v___x_924_, v___x_925_, v___x_927_, v___y_840_, v___x_831_, v___y_842_, v___y_843_, v___y_844_, v___x_928_);
lean_dec(v___x_831_);
lean_dec(v_a_909_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_929_);
v___x_931_ = v___x_912_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v_a_910_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec(v_a_893_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec(v___x_831_);
v_a_934_ = lean_ctor_get(v___x_907_, 0);
v_a_935_ = lean_ctor_get(v___x_907_, 1);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_907_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_inc(v_a_934_);
lean_dec(v___x_907_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_934_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
lean_object* v_a_943_; lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_a_893_);
lean_dec(v_fst_889_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_943_ = lean_ctor_get(v___x_902_, 0);
v_a_944_ = lean_ctor_get(v___x_902_, 1);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_902_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_inc(v_a_943_);
lean_dec(v___x_902_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_943_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
else
{
lean_object* v_a_952_; lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v_a_893_);
lean_dec(v_fst_889_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_952_ = lean_ctor_get(v___x_899_, 0);
v_a_953_ = lean_ctor_get(v___x_899_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_899_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_inc(v_a_952_);
lean_dec(v___x_899_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_952_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_fst_889_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_961_ = lean_ctor_get(v___x_892_, 0);
v_a_962_ = lean_ctor_get(v___x_892_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_892_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_inc(v_a_961_);
lean_dec(v___x_892_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_961_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_970_ = lean_ctor_get(v___x_886_, 0);
v_a_971_ = lean_ctor_get(v___x_886_, 1);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_886_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_inc(v_a_970_);
lean_dec(v___x_886_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_970_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_990_; lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_a_865_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_libJobs_836_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_990_ = lean_ctor_get(v___x_874_, 0);
v_a_991_ = lean_ctor_get(v___x_874_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_874_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_inc(v_a_990_);
lean_dec(v___x_874_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_990_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
else
{
lean_object* v_a_999_; lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_a_865_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_libJobs_836_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_999_ = lean_ctor_get(v___x_867_, 0);
v_a_1000_ = lean_ctor_get(v___x_867_, 1);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_867_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_inc(v_a_999_);
lean_dec(v___x_867_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_999_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
else
{
lean_object* v___x_1008_; uint8_t v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
lean_dec(v___x_864_);
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec(v_a_848_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_libJobs_836_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v___x_1008_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__2);
v___x_1009_ = 1;
v___x_1010_ = l_Lean_Name_toString(v_root_833_, v___x_1009_);
v___x_1011_ = lean_string_append(v___x_1008_, v___x_1010_);
lean_dec_ref(v___x_1010_);
v___x_1012_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___closed__3);
v___x_1013_ = lean_string_append(v___x_1011_, v___x_1012_);
v___x_1014_ = 3;
v___x_1015_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set_uint8(v___x_1015_, sizeof(void*)*1, v___x_1014_);
v___x_1016_ = lean_array_get_size(v_a_859_);
v___x_1017_ = lean_array_push(v_a_859_, v___x_1015_);
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 1);
lean_ctor_set(v___x_861_, 1, v___x_1017_);
lean_ctor_set(v___x_861_, 0, v___x_1016_);
v___x_1019_ = v___x_861_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec_ref(v_config_852_);
lean_dec_ref(v_dir_851_);
lean_dec(v_a_848_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_libJobs_836_);
lean_dec(v_root_833_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
v_a_1022_ = lean_ctor_get(v___x_857_, 0);
v_a_1023_ = lean_ctor_get(v___x_857_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_857_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_inc(v_a_1022_);
lean_dec(v___x_857_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1022_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec_ref(v___y_840_);
lean_dec_ref(v_self_838_);
lean_dec_ref(v_exeName_837_);
lean_dec_ref(v_libJobs_836_);
lean_dec(v_root_833_);
lean_dec_ref(v_pkg_832_);
lean_dec(v___x_831_);
lean_dec_ref(v___x_826_);
v_a_1031_ = lean_ctor_get(v___x_847_, 0);
v_a_1032_ = lean_ctor_get(v___x_847_, 1);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_847_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_inc(v_a_1031_);
lean_dec(v___x_847_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1031_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___boxed(lean_object** _args){
lean_object* v___x_1040_ = _args[0];
lean_object* v___x_1041_ = _args[1];
lean_object* v_sz_1042_ = _args[2];
lean_object* v___x_1043_ = _args[3];
lean_object* v_objJobs_1044_ = _args[4];
lean_object* v___x_1045_ = _args[5];
lean_object* v_pkg_1046_ = _args[6];
lean_object* v_root_1047_ = _args[7];
lean_object* v_supportInterpreter_1048_ = _args[8];
lean_object* v_toLeanConfig_1049_ = _args[9];
lean_object* v_libJobs_1050_ = _args[10];
lean_object* v_exeName_1051_ = _args[11];
lean_object* v_self_1052_ = _args[12];
lean_object* v___x_1053_ = _args[13];
lean_object* v___y_1054_ = _args[14];
lean_object* v___y_1055_ = _args[15];
lean_object* v___y_1056_ = _args[16];
lean_object* v___y_1057_ = _args[17];
lean_object* v___y_1058_ = _args[18];
lean_object* v___y_1059_ = _args[19];
lean_object* v___y_1060_ = _args[20];
_start:
{
size_t v_sz_boxed_1061_; size_t v___x_108791__boxed_1062_; uint8_t v_supportInterpreter_boxed_1063_; lean_object* v_res_1064_; 
v_sz_boxed_1061_ = lean_unbox_usize(v_sz_1042_);
lean_dec(v_sz_1042_);
v___x_108791__boxed_1062_ = lean_unbox_usize(v___x_1043_);
lean_dec(v___x_1043_);
v_supportInterpreter_boxed_1063_ = lean_unbox(v_supportInterpreter_1048_);
v_res_1064_ = l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0(v___x_1040_, v___x_1041_, v_sz_boxed_1061_, v___x_108791__boxed_1062_, v_objJobs_1044_, v___x_1045_, v_pkg_1046_, v_root_1047_, v_supportInterpreter_boxed_1063_, v_toLeanConfig_1049_, v_libJobs_1050_, v_exeName_1051_, v_self_1052_, v___x_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec(v___x_1053_);
lean_dec_ref(v_toLeanConfig_1049_);
lean_dec_ref(v___x_1041_);
return v_res_1064_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0(void){
_start:
{
lean_object* v___x_1065_; lean_object* v_objJobs_1066_; 
v___x_1065_ = lean_unsigned_to_nat(0u);
v_objJobs_1066_ = lean_mk_empty_array_with_capacity(v___x_1065_);
return v_objJobs_1066_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1(void){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_mk_string_unchecked(":exe", 4, 4);
return v___x_1067_;
}
}
static lean_object* _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1(void){
_start:
{
size_t v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((size_t)0ULL);
v___x_1069_ = lean_box_usize(v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe(lean_object* v_self_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_config_1078_; lean_object* v_pkg_1079_; lean_object* v_name_1080_; lean_object* v_toLeanConfig_1081_; lean_object* v_root_1082_; lean_object* v_exeName_1083_; uint8_t v_supportInterpreter_1084_; lean_object* v___x_1085_; lean_object* v_nativeFacets_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v_objJobs_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; size_t v_sz_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___f_1099_; lean_object* v___x_1100_; 
v_config_1078_ = lean_ctor_get(v_self_1070_, 2);
v_pkg_1079_ = lean_ctor_get(v_self_1070_, 0);
lean_inc_ref_n(v_pkg_1079_, 3);
v_name_1080_ = lean_ctor_get(v_self_1070_, 1);
lean_inc_n(v_name_1080_, 2);
v_toLeanConfig_1081_ = lean_ctor_get(v_config_1078_, 0);
lean_inc_ref(v_toLeanConfig_1081_);
v_root_1082_ = lean_ctor_get(v_config_1078_, 2);
lean_inc_n(v_root_1082_, 2);
v_exeName_1083_ = lean_ctor_get(v_config_1078_, 3);
lean_inc_ref(v_exeName_1083_);
v_supportInterpreter_1084_ = lean_ctor_get_uint8(v_config_1078_, sizeof(void*)*7);
v___x_1085_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_1078_);
v_nativeFacets_1086_ = lean_ctor_get(v___x_1085_, 8);
lean_inc_ref(v_nativeFacets_1086_);
v___x_1087_ = l_Lake_instDataKindFilePath;
v___x_1088_ = lean_unsigned_to_nat(0u);
v_objJobs_1089_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__0);
v___x_1090_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1090_, 0, v_pkg_1079_);
lean_ctor_set(v___x_1090_, 1, v_name_1080_);
lean_ctor_set(v___x_1090_, 2, v___x_1085_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v_root_1082_);
v___x_1092_ = lean_box(v_supportInterpreter_1084_);
v___x_1093_ = lean_apply_1(v_nativeFacets_1086_, v___x_1092_);
v_sz_1094_ = lean_array_size(v___x_1093_);
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_pkg_1079_);
v___x_1096_ = lean_box_usize(v_sz_1094_);
v___x_1097_ = l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1;
v___x_1098_ = lean_box(v_supportInterpreter_1084_);
v___f_1099_ = lean_alloc_closure((void*)(l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___lam__0___boxed), 21, 14);
lean_closure_set(v___f_1099_, 0, v___x_1091_);
lean_closure_set(v___f_1099_, 1, v___x_1093_);
lean_closure_set(v___f_1099_, 2, v___x_1096_);
lean_closure_set(v___f_1099_, 3, v___x_1097_);
lean_closure_set(v___f_1099_, 4, v_objJobs_1089_);
lean_closure_set(v___f_1099_, 5, v___x_1095_);
lean_closure_set(v___f_1099_, 6, v_pkg_1079_);
lean_closure_set(v___f_1099_, 7, v_root_1082_);
lean_closure_set(v___f_1099_, 8, v___x_1098_);
lean_closure_set(v___f_1099_, 9, v_toLeanConfig_1081_);
lean_closure_set(v___f_1099_, 10, v_objJobs_1089_);
lean_closure_set(v___f_1099_, 11, v_exeName_1083_);
lean_closure_set(v___f_1099_, 12, v_self_1070_);
lean_closure_set(v___f_1099_, 13, v___x_1088_);
v___x_1100_ = l_Lake_ensureJob___redArg(v___x_1087_, v___f_1099_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1130_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
v_a_1102_ = lean_ctor_get(v___x_1100_, 1);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1104_ = v___x_1100_;
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_inc(v_a_1101_);
lean_dec(v___x_1100_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v_task_1106_; lean_object* v_kind_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1128_; 
v_task_1106_ = lean_ctor_get(v_a_1101_, 0);
v_kind_1107_ = lean_ctor_get(v_a_1101_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_a_1101_);
if (v_isSharedCheck_1128_ == 0)
{
lean_object* v_unused_1129_; 
v_unused_1129_ = lean_ctor_get(v_a_1101_, 2);
lean_dec(v_unused_1129_);
v___x_1109_ = v_a_1101_;
v_isShared_1110_ = v_isSharedCheck_1128_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_kind_1107_);
lean_inc(v_task_1106_);
lean_dec(v_a_1101_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1128_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v_registeredJobs_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; lean_object* v_job_1119_; 
v_registeredJobs_1111_ = lean_ctor_get(v_a_1075_, 3);
v___x_1112_ = lean_st_ref_take(v_registeredJobs_1111_);
v___x_1113_ = 1;
v___x_1114_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1080_, v___x_1113_);
v___x_1115_ = lean_obj_once(&l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1, &l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1_once, _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___closed__1);
v___x_1116_ = lean_string_append(v___x_1114_, v___x_1115_);
v___x_1117_ = 0;
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 2, v___x_1116_);
v_job_1119_ = v___x_1109_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_task_1106_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_kind_1107_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v___x_1116_);
v_job_1119_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
lean_ctor_set_uint8(v_job_1119_, sizeof(void*)*3, v___x_1117_);
lean_inc_ref(v_job_1119_);
v___x_1120_ = l_Lake_Job_toOpaque___redArg(v_job_1119_);
v___x_1121_ = lean_array_push(v___x_1112_, v___x_1120_);
v___x_1122_ = lean_st_ref_set(v_registeredJobs_1111_, v___x_1121_);
v___x_1123_ = l_Lake_Job_renew___redArg(v_job_1119_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1123_);
v___x_1125_ = v___x_1104_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_a_1102_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
else
{
lean_dec(v_name_1080_);
return v___x_1100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed(lean_object* v_self_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe(v_self_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec(v_a_1134_);
lean_dec(v_a_1133_);
return v_res_1139_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0(lean_object* v_00_u03b2_1140_, lean_object* v_m_1141_, lean_object* v_a_1142_){
_start:
{
uint8_t v___x_1143_; 
v___x_1143_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___redArg(v_m_1141_, v_a_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1144_, lean_object* v_m_1145_, lean_object* v_a_1146_){
_start:
{
uint8_t v_res_1147_; lean_object* v_r_1148_; 
v_res_1147_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0(v_00_u03b2_1144_, v_m_1145_, v_a_1146_);
lean_dec_ref(v_a_1146_);
lean_dec_ref(v_m_1145_);
v_r_1148_ = lean_box(v_res_1147_);
return v_r_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1(lean_object* v_00_u03b2_1149_, lean_object* v_m_1150_, lean_object* v_a_1151_, lean_object* v_b_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1___redArg(v_m_1150_, v_a_1151_, v_b_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_1154_, lean_object* v_a_1155_, lean_object* v_x_1156_){
_start:
{
uint8_t v___x_1157_; 
v___x_1157_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___redArg(v_a_1155_, v_x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_1158_, lean_object* v_a_1159_, lean_object* v_x_1160_){
_start:
{
uint8_t v_res_1161_; lean_object* v_r_1162_; 
v_res_1161_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__0_spec__4(v_00_u03b2_1158_, v_a_1159_, v_x_1160_);
lean_dec(v_x_1160_);
lean_dec_ref(v_a_1159_);
v_r_1162_ = lean_box(v_res_1161_);
return v_r_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_1163_, lean_object* v_data_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6___redArg(v_data_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18(lean_object* v_00_u03b2_1166_, lean_object* v_i_1167_, lean_object* v_source_1168_, lean_object* v_target_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18___redArg(v_i_1167_, v_source_1168_, v_target_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19(lean_object* v_00_u03b2_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__0_spec__1_spec__6_spec__18_spec__19___redArg(v_x_1172_, v_x_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0(uint8_t v_fmt_1175_, lean_object* v_a_1176_){
_start:
{
if (v_fmt_1175_ == 0)
{
return v_a_1176_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = l_Lake_mkRelPathString(v_a_1176_);
v___x_1178_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
v___x_1179_ = l_Lean_Json_compress(v___x_1178_);
return v___x_1179_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0___boxed(lean_object* v_fmt_1180_, lean_object* v_a_1181_){
_start:
{
uint8_t v_fmt_boxed_1182_; lean_object* v_res_1183_; 
v_fmt_boxed_1182_ = lean_unbox(v_fmt_1180_);
v_res_1183_ = l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0(v_fmt_boxed_1182_, v_a_1181_);
return v_res_1183_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacetConfig___closed__0(void){
_start:
{
lean_object* v___f_1184_; 
v___f_1184_ = lean_alloc_closure((void*)(l_Lake_formatQuery___at___00Lake_LeanExe_exeFacetConfig_spec__0___boxed), 2, 0);
return v___f_1184_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacetConfig___closed__1(void){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_alloc_closure((void*)(l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed), 8, 0);
return v___x_1185_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_1186_; uint8_t v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___f_1186_ = lean_obj_once(&l_Lake_LeanExe_exeFacetConfig___closed__0, &l_Lake_LeanExe_exeFacetConfig___closed__0_once, _init_l_Lake_LeanExe_exeFacetConfig___closed__0);
v___x_1187_ = 1;
v___x_1188_ = l_Lake_instDataKindFilePath;
v___x_1189_ = lean_obj_once(&l_Lake_LeanExe_exeFacetConfig___closed__1, &l_Lake_LeanExe_exeFacetConfig___closed__1_once, _init_l_Lake_LeanExe_exeFacetConfig___closed__1);
v___x_1190_ = l_Lake_LeanExe_keyword;
v___x_1191_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
lean_ctor_set(v___x_1191_, 1, v___x_1189_);
lean_ctor_set(v___x_1191_, 2, v___x_1188_);
lean_ctor_set(v___x_1191_, 3, v___f_1186_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*4, v___x_1187_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*4 + 1, v___x_1187_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lake_LeanExe_exeFacetConfig(void){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_obj_once(&l_Lake_LeanExe_exeFacetConfig___closed__2, &l_Lake_LeanExe_exeFacetConfig___closed__2_once, _init_l_Lake_LeanExe_exeFacetConfig___closed__2);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault(lean_object* v_lib_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_pkg_1201_; lean_object* v_name_1202_; lean_object* v_keyName_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_pkg_1201_ = lean_ctor_get(v_lib_1193_, 0);
v_name_1202_ = lean_ctor_get(v_lib_1193_, 1);
v_keyName_1203_ = lean_ctor_get(v_pkg_1201_, 2);
v___x_1204_ = l_Lake_LeanExe_exeFacet;
lean_inc(v_name_1202_);
lean_inc(v_keyName_1203_);
v___x_1205_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1205_, 0, v_keyName_1203_);
lean_ctor_set(v___x_1205_, 1, v_name_1202_);
v___x_1206_ = l_Lake_LeanExe_keyword;
v___x_1207_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1205_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
lean_ctor_set(v___x_1207_, 2, v_lib_1193_);
lean_ctor_set(v___x_1207_, 3, v___x_1204_);
lean_inc_ref(v_a_1198_);
lean_inc(v_a_1197_);
lean_inc(v_a_1196_);
lean_inc(v_a_1195_);
v___x_1208_ = lean_apply_7(v_a_1194_, v___x_1207_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_, lean_box(0));
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault___boxed(lean_object* v_lib_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault(v_lib_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
lean_dec_ref(v_a_1214_);
lean_dec(v_a_1213_);
lean_dec(v_a_1212_);
lean_dec(v_a_1211_);
return v_res_1217_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacetConfig___closed__0(void){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_alloc_closure((void*)(l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildDefault___boxed), 8, 0);
return v___x_1218_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacetConfig___closed__1(void){
_start:
{
uint8_t v___x_1219_; lean_object* v___f_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1219_ = 0;
v___f_1220_ = lean_obj_once(&l_Lake_LeanExe_exeFacetConfig___closed__0, &l_Lake_LeanExe_exeFacetConfig___closed__0_once, _init_l_Lake_LeanExe_exeFacetConfig___closed__0);
v___x_1221_ = 1;
v___x_1222_ = l_Lake_instDataKindFilePath;
v___x_1223_ = lean_obj_once(&l_Lake_LeanExe_defaultFacetConfig___closed__0, &l_Lake_LeanExe_defaultFacetConfig___closed__0_once, _init_l_Lake_LeanExe_defaultFacetConfig___closed__0);
v___x_1224_ = l_Lake_LeanExe_keyword;
v___x_1225_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
lean_ctor_set(v___x_1225_, 1, v___x_1223_);
lean_ctor_set(v___x_1225_, 2, v___x_1222_);
lean_ctor_set(v___x_1225_, 3, v___f_1220_);
lean_ctor_set_uint8(v___x_1225_, sizeof(void*)*4, v___x_1221_);
lean_ctor_set_uint8(v___x_1225_, sizeof(void*)*4 + 1, v___x_1219_);
return v___x_1225_;
}
}
static lean_object* _init_l_Lake_LeanExe_defaultFacetConfig(void){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_obj_once(&l_Lake_LeanExe_defaultFacetConfig___closed__1, &l_Lake_LeanExe_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanExe_defaultFacetConfig___closed__1);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(lean_object* v_k_1227_, lean_object* v_v_1228_, lean_object* v_t_1229_){
_start:
{
if (lean_obj_tag(v_t_1229_) == 0)
{
lean_object* v_size_1230_; lean_object* v_k_1231_; lean_object* v_v_1232_; lean_object* v_l_1233_; lean_object* v_r_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1514_; 
v_size_1230_ = lean_ctor_get(v_t_1229_, 0);
v_k_1231_ = lean_ctor_get(v_t_1229_, 1);
v_v_1232_ = lean_ctor_get(v_t_1229_, 2);
v_l_1233_ = lean_ctor_get(v_t_1229_, 3);
v_r_1234_ = lean_ctor_get(v_t_1229_, 4);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_t_1229_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1236_ = v_t_1229_;
v_isShared_1237_ = v_isSharedCheck_1514_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_r_1234_);
lean_inc(v_l_1233_);
lean_inc(v_v_1232_);
lean_inc(v_k_1231_);
lean_inc(v_size_1230_);
lean_dec(v_t_1229_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1514_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
uint8_t v___x_1238_; 
v___x_1238_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1227_, v_k_1231_);
switch(v___x_1238_)
{
case 0:
{
lean_object* v_impl_1239_; lean_object* v___x_1240_; 
lean_dec(v_size_1230_);
v_impl_1239_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(v_k_1227_, v_v_1228_, v_l_1233_);
v___x_1240_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1234_) == 0)
{
lean_object* v_size_1241_; lean_object* v_size_1242_; lean_object* v_k_1243_; lean_object* v_v_1244_; lean_object* v_l_1245_; lean_object* v_r_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v_size_1241_ = lean_ctor_get(v_r_1234_, 0);
v_size_1242_ = lean_ctor_get(v_impl_1239_, 0);
lean_inc(v_size_1242_);
v_k_1243_ = lean_ctor_get(v_impl_1239_, 1);
lean_inc(v_k_1243_);
v_v_1244_ = lean_ctor_get(v_impl_1239_, 2);
lean_inc(v_v_1244_);
v_l_1245_ = lean_ctor_get(v_impl_1239_, 3);
lean_inc(v_l_1245_);
v_r_1246_ = lean_ctor_get(v_impl_1239_, 4);
lean_inc(v_r_1246_);
v___x_1247_ = lean_unsigned_to_nat(3u);
v___x_1248_ = lean_nat_mul(v___x_1247_, v_size_1241_);
v___x_1249_ = lean_nat_dec_lt(v___x_1248_, v_size_1242_);
lean_dec(v___x_1248_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
lean_dec(v_r_1246_);
lean_dec(v_l_1245_);
lean_dec(v_v_1244_);
lean_dec(v_k_1243_);
v___x_1250_ = lean_nat_add(v___x_1240_, v_size_1242_);
lean_dec(v_size_1242_);
v___x_1251_ = lean_nat_add(v___x_1250_, v_size_1241_);
lean_dec(v___x_1250_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 3, v_impl_1239_);
lean_ctor_set(v___x_1236_, 0, v___x_1251_);
v___x_1253_ = v___x_1236_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1254_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1254_, 3, v_impl_1239_);
lean_ctor_set(v_reuseFailAlloc_1254_, 4, v_r_1234_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
else
{
lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1320_; 
v_isSharedCheck_1320_ = !lean_is_exclusive(v_impl_1239_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; lean_object* v_unused_1322_; lean_object* v_unused_1323_; lean_object* v_unused_1324_; lean_object* v_unused_1325_; 
v_unused_1321_ = lean_ctor_get(v_impl_1239_, 4);
lean_dec(v_unused_1321_);
v_unused_1322_ = lean_ctor_get(v_impl_1239_, 3);
lean_dec(v_unused_1322_);
v_unused_1323_ = lean_ctor_get(v_impl_1239_, 2);
lean_dec(v_unused_1323_);
v_unused_1324_ = lean_ctor_get(v_impl_1239_, 1);
lean_dec(v_unused_1324_);
v_unused_1325_ = lean_ctor_get(v_impl_1239_, 0);
lean_dec(v_unused_1325_);
v___x_1256_ = v_impl_1239_;
v_isShared_1257_ = v_isSharedCheck_1320_;
goto v_resetjp_1255_;
}
else
{
lean_dec(v_impl_1239_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1320_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v_size_1258_; lean_object* v_size_1259_; lean_object* v_k_1260_; lean_object* v_v_1261_; lean_object* v_l_1262_; lean_object* v_r_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v_size_1258_ = lean_ctor_get(v_l_1245_, 0);
v_size_1259_ = lean_ctor_get(v_r_1246_, 0);
v_k_1260_ = lean_ctor_get(v_r_1246_, 1);
v_v_1261_ = lean_ctor_get(v_r_1246_, 2);
v_l_1262_ = lean_ctor_get(v_r_1246_, 3);
v_r_1263_ = lean_ctor_get(v_r_1246_, 4);
v___x_1264_ = lean_unsigned_to_nat(2u);
v___x_1265_ = lean_nat_mul(v___x_1264_, v_size_1258_);
v___x_1266_ = lean_nat_dec_lt(v_size_1259_, v___x_1265_);
lean_dec(v___x_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1295_; 
lean_inc(v_r_1263_);
lean_inc(v_l_1262_);
lean_inc(v_v_1261_);
lean_inc(v_k_1260_);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_r_1246_);
if (v_isSharedCheck_1295_ == 0)
{
lean_object* v_unused_1296_; lean_object* v_unused_1297_; lean_object* v_unused_1298_; lean_object* v_unused_1299_; lean_object* v_unused_1300_; 
v_unused_1296_ = lean_ctor_get(v_r_1246_, 4);
lean_dec(v_unused_1296_);
v_unused_1297_ = lean_ctor_get(v_r_1246_, 3);
lean_dec(v_unused_1297_);
v_unused_1298_ = lean_ctor_get(v_r_1246_, 2);
lean_dec(v_unused_1298_);
v_unused_1299_ = lean_ctor_get(v_r_1246_, 1);
lean_dec(v_unused_1299_);
v_unused_1300_ = lean_ctor_get(v_r_1246_, 0);
lean_dec(v_unused_1300_);
v___x_1268_ = v_r_1246_;
v_isShared_1269_ = v_isSharedCheck_1295_;
goto v_resetjp_1267_;
}
else
{
lean_dec(v_r_1246_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1295_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___x_1283_; lean_object* v___y_1285_; 
v___x_1270_ = lean_nat_add(v___x_1240_, v_size_1242_);
lean_dec(v_size_1242_);
v___x_1271_ = lean_nat_add(v___x_1270_, v_size_1241_);
lean_dec(v___x_1270_);
v___x_1283_ = lean_nat_add(v___x_1240_, v_size_1258_);
if (lean_obj_tag(v_l_1262_) == 0)
{
lean_object* v_size_1293_; 
v_size_1293_ = lean_ctor_get(v_l_1262_, 0);
lean_inc(v_size_1293_);
v___y_1285_ = v_size_1293_;
goto v___jp_1284_;
}
else
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_unsigned_to_nat(0u);
v___y_1285_ = v___x_1294_;
goto v___jp_1284_;
}
v___jp_1272_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_nat_add(v___y_1274_, v___y_1275_);
lean_dec(v___y_1275_);
lean_dec(v___y_1274_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 4, v_r_1234_);
lean_ctor_set(v___x_1268_, 3, v_r_1263_);
lean_ctor_set(v___x_1268_, 2, v_v_1232_);
lean_ctor_set(v___x_1268_, 1, v_k_1231_);
lean_ctor_set(v___x_1268_, 0, v___x_1276_);
v___x_1278_ = v___x_1268_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1282_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1282_, 3, v_r_1263_);
lean_ctor_set(v_reuseFailAlloc_1282_, 4, v_r_1234_);
v___x_1278_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1280_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 4, v___x_1278_);
lean_ctor_set(v___x_1256_, 3, v___y_1273_);
lean_ctor_set(v___x_1256_, 2, v_v_1261_);
lean_ctor_set(v___x_1256_, 1, v_k_1260_);
lean_ctor_set(v___x_1256_, 0, v___x_1271_);
v___x_1280_ = v___x_1256_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1271_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v_k_1260_);
lean_ctor_set(v_reuseFailAlloc_1281_, 2, v_v_1261_);
lean_ctor_set(v_reuseFailAlloc_1281_, 3, v___y_1273_);
lean_ctor_set(v_reuseFailAlloc_1281_, 4, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
v___jp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1286_ = lean_nat_add(v___x_1283_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec(v___x_1283_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_l_1262_);
lean_ctor_set(v___x_1236_, 3, v_l_1245_);
lean_ctor_set(v___x_1236_, 2, v_v_1244_);
lean_ctor_set(v___x_1236_, 1, v_k_1243_);
lean_ctor_set(v___x_1236_, 0, v___x_1286_);
v___x_1288_ = v___x_1236_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1286_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v_k_1243_);
lean_ctor_set(v_reuseFailAlloc_1292_, 2, v_v_1244_);
lean_ctor_set(v_reuseFailAlloc_1292_, 3, v_l_1245_);
lean_ctor_set(v_reuseFailAlloc_1292_, 4, v_l_1262_);
v___x_1288_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
lean_object* v___x_1289_; 
v___x_1289_ = lean_nat_add(v___x_1240_, v_size_1241_);
if (lean_obj_tag(v_r_1263_) == 0)
{
lean_object* v_size_1290_; 
v_size_1290_ = lean_ctor_get(v_r_1263_, 0);
lean_inc(v_size_1290_);
v___y_1273_ = v___x_1288_;
v___y_1274_ = v___x_1289_;
v___y_1275_ = v_size_1290_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_unsigned_to_nat(0u);
v___y_1273_ = v___x_1288_;
v___y_1274_ = v___x_1289_;
v___y_1275_ = v___x_1291_;
goto v___jp_1272_;
}
}
}
}
}
else
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1306_; 
lean_del_object(v___x_1236_);
v___x_1301_ = lean_nat_add(v___x_1240_, v_size_1242_);
lean_dec(v_size_1242_);
v___x_1302_ = lean_nat_add(v___x_1301_, v_size_1241_);
lean_dec(v___x_1301_);
v___x_1303_ = lean_nat_add(v___x_1240_, v_size_1241_);
v___x_1304_ = lean_nat_add(v___x_1303_, v_size_1259_);
lean_dec(v___x_1303_);
lean_inc_ref(v_r_1234_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 4, v_r_1234_);
lean_ctor_set(v___x_1256_, 3, v_r_1246_);
lean_ctor_set(v___x_1256_, 2, v_v_1232_);
lean_ctor_set(v___x_1256_, 1, v_k_1231_);
lean_ctor_set(v___x_1256_, 0, v___x_1304_);
v___x_1306_ = v___x_1256_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1319_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1319_, 3, v_r_1246_);
lean_ctor_set(v_reuseFailAlloc_1319_, 4, v_r_1234_);
v___x_1306_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
v_isSharedCheck_1313_ = !lean_is_exclusive(v_r_1234_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; lean_object* v_unused_1315_; lean_object* v_unused_1316_; lean_object* v_unused_1317_; lean_object* v_unused_1318_; 
v_unused_1314_ = lean_ctor_get(v_r_1234_, 4);
lean_dec(v_unused_1314_);
v_unused_1315_ = lean_ctor_get(v_r_1234_, 3);
lean_dec(v_unused_1315_);
v_unused_1316_ = lean_ctor_get(v_r_1234_, 2);
lean_dec(v_unused_1316_);
v_unused_1317_ = lean_ctor_get(v_r_1234_, 1);
lean_dec(v_unused_1317_);
v_unused_1318_ = lean_ctor_get(v_r_1234_, 0);
lean_dec(v_unused_1318_);
v___x_1308_ = v_r_1234_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_dec(v_r_1234_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 4, v___x_1306_);
lean_ctor_set(v___x_1308_, 3, v_l_1245_);
lean_ctor_set(v___x_1308_, 2, v_v_1244_);
lean_ctor_set(v___x_1308_, 1, v_k_1243_);
lean_ctor_set(v___x_1308_, 0, v___x_1302_);
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_k_1243_);
lean_ctor_set(v_reuseFailAlloc_1312_, 2, v_v_1244_);
lean_ctor_set(v_reuseFailAlloc_1312_, 3, v_l_1245_);
lean_ctor_set(v_reuseFailAlloc_1312_, 4, v___x_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1326_; 
v_l_1326_ = lean_ctor_get(v_impl_1239_, 3);
lean_inc(v_l_1326_);
if (lean_obj_tag(v_l_1326_) == 0)
{
lean_object* v_r_1327_; lean_object* v_k_1328_; lean_object* v_v_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1340_; 
v_r_1327_ = lean_ctor_get(v_impl_1239_, 4);
v_k_1328_ = lean_ctor_get(v_impl_1239_, 1);
v_v_1329_ = lean_ctor_get(v_impl_1239_, 2);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_impl_1239_);
if (v_isSharedCheck_1340_ == 0)
{
lean_object* v_unused_1341_; lean_object* v_unused_1342_; 
v_unused_1341_ = lean_ctor_get(v_impl_1239_, 3);
lean_dec(v_unused_1341_);
v_unused_1342_ = lean_ctor_get(v_impl_1239_, 0);
lean_dec(v_unused_1342_);
v___x_1331_ = v_impl_1239_;
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_r_1327_);
lean_inc(v_v_1329_);
lean_inc(v_k_1328_);
lean_dec(v_impl_1239_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; lean_object* v___x_1335_; 
v___x_1333_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1327_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 3, v_r_1327_);
lean_ctor_set(v___x_1331_, 2, v_v_1232_);
lean_ctor_set(v___x_1331_, 1, v_k_1231_);
lean_ctor_set(v___x_1331_, 0, v___x_1240_);
v___x_1335_ = v___x_1331_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1339_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1339_, 3, v_r_1327_);
lean_ctor_set(v_reuseFailAlloc_1339_, 4, v_r_1327_);
v___x_1335_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
lean_object* v___x_1337_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v___x_1335_);
lean_ctor_set(v___x_1236_, 3, v_l_1326_);
lean_ctor_set(v___x_1236_, 2, v_v_1329_);
lean_ctor_set(v___x_1236_, 1, v_k_1328_);
lean_ctor_set(v___x_1236_, 0, v___x_1333_);
v___x_1337_ = v___x_1236_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_k_1328_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_v_1329_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v_l_1326_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
else
{
lean_object* v_r_1343_; 
v_r_1343_ = lean_ctor_get(v_impl_1239_, 4);
lean_inc(v_r_1343_);
if (lean_obj_tag(v_r_1343_) == 0)
{
lean_object* v_k_1344_; lean_object* v_v_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1368_; 
v_k_1344_ = lean_ctor_get(v_impl_1239_, 1);
v_v_1345_ = lean_ctor_get(v_impl_1239_, 2);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_impl_1239_);
if (v_isSharedCheck_1368_ == 0)
{
lean_object* v_unused_1369_; lean_object* v_unused_1370_; lean_object* v_unused_1371_; 
v_unused_1369_ = lean_ctor_get(v_impl_1239_, 4);
lean_dec(v_unused_1369_);
v_unused_1370_ = lean_ctor_get(v_impl_1239_, 3);
lean_dec(v_unused_1370_);
v_unused_1371_ = lean_ctor_get(v_impl_1239_, 0);
lean_dec(v_unused_1371_);
v___x_1347_ = v_impl_1239_;
v_isShared_1348_ = v_isSharedCheck_1368_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_v_1345_);
lean_inc(v_k_1344_);
lean_dec(v_impl_1239_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1368_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v_k_1349_; lean_object* v_v_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1364_; 
v_k_1349_ = lean_ctor_get(v_r_1343_, 1);
v_v_1350_ = lean_ctor_get(v_r_1343_, 2);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_r_1343_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; lean_object* v_unused_1366_; lean_object* v_unused_1367_; 
v_unused_1365_ = lean_ctor_get(v_r_1343_, 4);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v_r_1343_, 3);
lean_dec(v_unused_1366_);
v_unused_1367_ = lean_ctor_get(v_r_1343_, 0);
lean_dec(v_unused_1367_);
v___x_1352_ = v_r_1343_;
v_isShared_1353_ = v_isSharedCheck_1364_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_v_1350_);
lean_inc(v_k_1349_);
lean_dec(v_r_1343_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1364_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1354_ = lean_unsigned_to_nat(3u);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 4, v_l_1326_);
lean_ctor_set(v___x_1352_, 3, v_l_1326_);
lean_ctor_set(v___x_1352_, 2, v_v_1345_);
lean_ctor_set(v___x_1352_, 1, v_k_1344_);
lean_ctor_set(v___x_1352_, 0, v___x_1240_);
v___x_1356_ = v___x_1352_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_k_1344_);
lean_ctor_set(v_reuseFailAlloc_1363_, 2, v_v_1345_);
lean_ctor_set(v_reuseFailAlloc_1363_, 3, v_l_1326_);
lean_ctor_set(v_reuseFailAlloc_1363_, 4, v_l_1326_);
v___x_1356_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1358_; 
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 4, v_l_1326_);
lean_ctor_set(v___x_1347_, 2, v_v_1232_);
lean_ctor_set(v___x_1347_, 1, v_k_1231_);
lean_ctor_set(v___x_1347_, 0, v___x_1240_);
v___x_1358_ = v___x_1347_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1362_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1362_, 3, v_l_1326_);
lean_ctor_set(v_reuseFailAlloc_1362_, 4, v_l_1326_);
v___x_1358_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1360_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v___x_1358_);
lean_ctor_set(v___x_1236_, 3, v___x_1356_);
lean_ctor_set(v___x_1236_, 2, v_v_1350_);
lean_ctor_set(v___x_1236_, 1, v_k_1349_);
lean_ctor_set(v___x_1236_, 0, v___x_1354_);
v___x_1360_ = v___x_1236_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v_k_1349_);
lean_ctor_set(v_reuseFailAlloc_1361_, 2, v_v_1350_);
lean_ctor_set(v_reuseFailAlloc_1361_, 3, v___x_1356_);
lean_ctor_set(v_reuseFailAlloc_1361_, 4, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1372_ = lean_unsigned_to_nat(2u);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_r_1343_);
lean_ctor_set(v___x_1236_, 3, v_impl_1239_);
lean_ctor_set(v___x_1236_, 0, v___x_1372_);
v___x_1374_ = v___x_1236_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1375_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1375_, 3, v_impl_1239_);
lean_ctor_set(v_reuseFailAlloc_1375_, 4, v_r_1343_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1377_; 
lean_dec(v_v_1232_);
lean_dec(v_k_1231_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 2, v_v_1228_);
lean_ctor_set(v___x_1236_, 1, v_k_1227_);
v___x_1377_ = v___x_1236_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_size_1230_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_k_1227_);
lean_ctor_set(v_reuseFailAlloc_1378_, 2, v_v_1228_);
lean_ctor_set(v_reuseFailAlloc_1378_, 3, v_l_1233_);
lean_ctor_set(v_reuseFailAlloc_1378_, 4, v_r_1234_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
default: 
{
lean_object* v_impl_1379_; lean_object* v___x_1380_; 
lean_dec(v_size_1230_);
v_impl_1379_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(v_k_1227_, v_v_1228_, v_r_1234_);
v___x_1380_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1233_) == 0)
{
lean_object* v_size_1381_; lean_object* v_size_1382_; lean_object* v_k_1383_; lean_object* v_v_1384_; lean_object* v_l_1385_; lean_object* v_r_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; 
v_size_1381_ = lean_ctor_get(v_l_1233_, 0);
v_size_1382_ = lean_ctor_get(v_impl_1379_, 0);
lean_inc(v_size_1382_);
v_k_1383_ = lean_ctor_get(v_impl_1379_, 1);
lean_inc(v_k_1383_);
v_v_1384_ = lean_ctor_get(v_impl_1379_, 2);
lean_inc(v_v_1384_);
v_l_1385_ = lean_ctor_get(v_impl_1379_, 3);
lean_inc(v_l_1385_);
v_r_1386_ = lean_ctor_get(v_impl_1379_, 4);
lean_inc(v_r_1386_);
v___x_1387_ = lean_unsigned_to_nat(3u);
v___x_1388_ = lean_nat_mul(v___x_1387_, v_size_1381_);
v___x_1389_ = lean_nat_dec_lt(v___x_1388_, v_size_1382_);
lean_dec(v___x_1388_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
lean_dec(v_r_1386_);
lean_dec(v_l_1385_);
lean_dec(v_v_1384_);
lean_dec(v_k_1383_);
v___x_1390_ = lean_nat_add(v___x_1380_, v_size_1381_);
v___x_1391_ = lean_nat_add(v___x_1390_, v_size_1382_);
lean_dec(v_size_1382_);
lean_dec(v___x_1390_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_impl_1379_);
lean_ctor_set(v___x_1236_, 0, v___x_1391_);
v___x_1393_ = v___x_1236_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1394_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1394_, 3, v_l_1233_);
lean_ctor_set(v_reuseFailAlloc_1394_, 4, v_impl_1379_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
else
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1458_; 
v_isSharedCheck_1458_ = !lean_is_exclusive(v_impl_1379_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; lean_object* v_unused_1460_; lean_object* v_unused_1461_; lean_object* v_unused_1462_; lean_object* v_unused_1463_; 
v_unused_1459_ = lean_ctor_get(v_impl_1379_, 4);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_impl_1379_, 3);
lean_dec(v_unused_1460_);
v_unused_1461_ = lean_ctor_get(v_impl_1379_, 2);
lean_dec(v_unused_1461_);
v_unused_1462_ = lean_ctor_get(v_impl_1379_, 1);
lean_dec(v_unused_1462_);
v_unused_1463_ = lean_ctor_get(v_impl_1379_, 0);
lean_dec(v_unused_1463_);
v___x_1396_ = v_impl_1379_;
v_isShared_1397_ = v_isSharedCheck_1458_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v_impl_1379_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1458_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v_size_1398_; lean_object* v_k_1399_; lean_object* v_v_1400_; lean_object* v_l_1401_; lean_object* v_r_1402_; lean_object* v_size_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v_size_1398_ = lean_ctor_get(v_l_1385_, 0);
v_k_1399_ = lean_ctor_get(v_l_1385_, 1);
v_v_1400_ = lean_ctor_get(v_l_1385_, 2);
v_l_1401_ = lean_ctor_get(v_l_1385_, 3);
v_r_1402_ = lean_ctor_get(v_l_1385_, 4);
v_size_1403_ = lean_ctor_get(v_r_1386_, 0);
v___x_1404_ = lean_unsigned_to_nat(2u);
v___x_1405_ = lean_nat_mul(v___x_1404_, v_size_1403_);
v___x_1406_ = lean_nat_dec_lt(v_size_1398_, v___x_1405_);
lean_dec(v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1434_; 
lean_inc(v_r_1402_);
lean_inc(v_l_1401_);
lean_inc(v_v_1400_);
lean_inc(v_k_1399_);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_l_1385_);
if (v_isSharedCheck_1434_ == 0)
{
lean_object* v_unused_1435_; lean_object* v_unused_1436_; lean_object* v_unused_1437_; lean_object* v_unused_1438_; lean_object* v_unused_1439_; 
v_unused_1435_ = lean_ctor_get(v_l_1385_, 4);
lean_dec(v_unused_1435_);
v_unused_1436_ = lean_ctor_get(v_l_1385_, 3);
lean_dec(v_unused_1436_);
v_unused_1437_ = lean_ctor_get(v_l_1385_, 2);
lean_dec(v_unused_1437_);
v_unused_1438_ = lean_ctor_get(v_l_1385_, 1);
lean_dec(v_unused_1438_);
v_unused_1439_ = lean_ctor_get(v_l_1385_, 0);
lean_dec(v_unused_1439_);
v___x_1408_ = v_l_1385_;
v_isShared_1409_ = v_isSharedCheck_1434_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v_l_1385_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1434_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1424_; 
v___x_1410_ = lean_nat_add(v___x_1380_, v_size_1381_);
v___x_1411_ = lean_nat_add(v___x_1410_, v_size_1382_);
lean_dec(v_size_1382_);
if (lean_obj_tag(v_l_1401_) == 0)
{
lean_object* v_size_1432_; 
v_size_1432_ = lean_ctor_get(v_l_1401_, 0);
lean_inc(v_size_1432_);
v___y_1424_ = v_size_1432_;
goto v___jp_1423_;
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___y_1424_ = v___x_1433_;
goto v___jp_1423_;
}
v___jp_1412_:
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1416_ = lean_nat_add(v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec(v___y_1414_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 4, v_r_1386_);
lean_ctor_set(v___x_1408_, 3, v_r_1402_);
lean_ctor_set(v___x_1408_, 2, v_v_1384_);
lean_ctor_set(v___x_1408_, 1, v_k_1383_);
lean_ctor_set(v___x_1408_, 0, v___x_1416_);
v___x_1418_ = v___x_1408_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v_k_1383_);
lean_ctor_set(v_reuseFailAlloc_1422_, 2, v_v_1384_);
lean_ctor_set(v_reuseFailAlloc_1422_, 3, v_r_1402_);
lean_ctor_set(v_reuseFailAlloc_1422_, 4, v_r_1386_);
v___x_1418_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1420_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 4, v___x_1418_);
lean_ctor_set(v___x_1396_, 3, v___y_1413_);
lean_ctor_set(v___x_1396_, 2, v_v_1400_);
lean_ctor_set(v___x_1396_, 1, v_k_1399_);
lean_ctor_set(v___x_1396_, 0, v___x_1411_);
v___x_1420_ = v___x_1396_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v_k_1399_);
lean_ctor_set(v_reuseFailAlloc_1421_, 2, v_v_1400_);
lean_ctor_set(v_reuseFailAlloc_1421_, 3, v___y_1413_);
lean_ctor_set(v_reuseFailAlloc_1421_, 4, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
v___jp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1425_ = lean_nat_add(v___x_1410_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec(v___x_1410_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_l_1401_);
lean_ctor_set(v___x_1236_, 0, v___x_1425_);
v___x_1427_ = v___x_1236_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1431_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1431_, 3, v_l_1233_);
lean_ctor_set(v_reuseFailAlloc_1431_, 4, v_l_1401_);
v___x_1427_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_nat_add(v___x_1380_, v_size_1403_);
if (lean_obj_tag(v_r_1402_) == 0)
{
lean_object* v_size_1429_; 
v_size_1429_ = lean_ctor_get(v_r_1402_, 0);
lean_inc(v_size_1429_);
v___y_1413_ = v___x_1427_;
v___y_1414_ = v___x_1428_;
v___y_1415_ = v_size_1429_;
goto v___jp_1412_;
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = lean_unsigned_to_nat(0u);
v___y_1413_ = v___x_1427_;
v___y_1414_ = v___x_1428_;
v___y_1415_ = v___x_1430_;
goto v___jp_1412_;
}
}
}
}
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1444_; 
lean_del_object(v___x_1236_);
v___x_1440_ = lean_nat_add(v___x_1380_, v_size_1381_);
v___x_1441_ = lean_nat_add(v___x_1440_, v_size_1382_);
lean_dec(v_size_1382_);
v___x_1442_ = lean_nat_add(v___x_1440_, v_size_1398_);
lean_dec(v___x_1440_);
lean_inc_ref(v_l_1233_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 4, v_l_1385_);
lean_ctor_set(v___x_1396_, 3, v_l_1233_);
lean_ctor_set(v___x_1396_, 2, v_v_1232_);
lean_ctor_set(v___x_1396_, 1, v_k_1231_);
lean_ctor_set(v___x_1396_, 0, v___x_1442_);
v___x_1444_ = v___x_1396_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1457_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1457_, 3, v_l_1233_);
lean_ctor_set(v_reuseFailAlloc_1457_, 4, v_l_1385_);
v___x_1444_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
v_isSharedCheck_1451_ = !lean_is_exclusive(v_l_1233_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; lean_object* v_unused_1455_; lean_object* v_unused_1456_; 
v_unused_1452_ = lean_ctor_get(v_l_1233_, 4);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_l_1233_, 3);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_l_1233_, 2);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_l_1233_, 1);
lean_dec(v_unused_1455_);
v_unused_1456_ = lean_ctor_get(v_l_1233_, 0);
lean_dec(v_unused_1456_);
v___x_1446_ = v_l_1233_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_dec(v_l_1233_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 4, v_r_1386_);
lean_ctor_set(v___x_1446_, 3, v___x_1444_);
lean_ctor_set(v___x_1446_, 2, v_v_1384_);
lean_ctor_set(v___x_1446_, 1, v_k_1383_);
lean_ctor_set(v___x_1446_, 0, v___x_1441_);
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_k_1383_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_v_1384_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_r_1386_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1464_; 
v_l_1464_ = lean_ctor_get(v_impl_1379_, 3);
lean_inc(v_l_1464_);
if (lean_obj_tag(v_l_1464_) == 0)
{
lean_object* v_r_1465_; lean_object* v_k_1466_; lean_object* v_v_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1490_; 
v_r_1465_ = lean_ctor_get(v_impl_1379_, 4);
v_k_1466_ = lean_ctor_get(v_impl_1379_, 1);
v_v_1467_ = lean_ctor_get(v_impl_1379_, 2);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_impl_1379_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; lean_object* v_unused_1492_; 
v_unused_1491_ = lean_ctor_get(v_impl_1379_, 3);
lean_dec(v_unused_1491_);
v_unused_1492_ = lean_ctor_get(v_impl_1379_, 0);
lean_dec(v_unused_1492_);
v___x_1469_ = v_impl_1379_;
v_isShared_1470_ = v_isSharedCheck_1490_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_r_1465_);
lean_inc(v_v_1467_);
lean_inc(v_k_1466_);
lean_dec(v_impl_1379_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1490_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v_k_1471_; lean_object* v_v_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1486_; 
v_k_1471_ = lean_ctor_get(v_l_1464_, 1);
v_v_1472_ = lean_ctor_get(v_l_1464_, 2);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_l_1464_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; lean_object* v_unused_1488_; lean_object* v_unused_1489_; 
v_unused_1487_ = lean_ctor_get(v_l_1464_, 4);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v_l_1464_, 3);
lean_dec(v_unused_1488_);
v_unused_1489_ = lean_ctor_get(v_l_1464_, 0);
lean_dec(v_unused_1489_);
v___x_1474_ = v_l_1464_;
v_isShared_1475_ = v_isSharedCheck_1486_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_v_1472_);
lean_inc(v_k_1471_);
lean_dec(v_l_1464_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1486_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1476_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1465_, 2);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 4, v_r_1465_);
lean_ctor_set(v___x_1474_, 3, v_r_1465_);
lean_ctor_set(v___x_1474_, 2, v_v_1232_);
lean_ctor_set(v___x_1474_, 1, v_k_1231_);
lean_ctor_set(v___x_1474_, 0, v___x_1380_);
v___x_1478_ = v___x_1474_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1485_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1485_, 3, v_r_1465_);
lean_ctor_set(v_reuseFailAlloc_1485_, 4, v_r_1465_);
v___x_1478_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
lean_object* v___x_1480_; 
lean_inc(v_r_1465_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 3, v_r_1465_);
lean_ctor_set(v___x_1469_, 0, v___x_1380_);
v___x_1480_ = v___x_1469_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_k_1466_);
lean_ctor_set(v_reuseFailAlloc_1484_, 2, v_v_1467_);
lean_ctor_set(v_reuseFailAlloc_1484_, 3, v_r_1465_);
lean_ctor_set(v_reuseFailAlloc_1484_, 4, v_r_1465_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1482_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v___x_1480_);
lean_ctor_set(v___x_1236_, 3, v___x_1478_);
lean_ctor_set(v___x_1236_, 2, v_v_1472_);
lean_ctor_set(v___x_1236_, 1, v_k_1471_);
lean_ctor_set(v___x_1236_, 0, v___x_1476_);
v___x_1482_ = v___x_1236_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1476_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_k_1471_);
lean_ctor_set(v_reuseFailAlloc_1483_, 2, v_v_1472_);
lean_ctor_set(v_reuseFailAlloc_1483_, 3, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1483_, 4, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
}
}
else
{
lean_object* v_r_1493_; 
v_r_1493_ = lean_ctor_get(v_impl_1379_, 4);
lean_inc(v_r_1493_);
if (lean_obj_tag(v_r_1493_) == 0)
{
lean_object* v_k_1494_; lean_object* v_v_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1506_; 
v_k_1494_ = lean_ctor_get(v_impl_1379_, 1);
v_v_1495_ = lean_ctor_get(v_impl_1379_, 2);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_impl_1379_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; lean_object* v_unused_1508_; lean_object* v_unused_1509_; 
v_unused_1507_ = lean_ctor_get(v_impl_1379_, 4);
lean_dec(v_unused_1507_);
v_unused_1508_ = lean_ctor_get(v_impl_1379_, 3);
lean_dec(v_unused_1508_);
v_unused_1509_ = lean_ctor_get(v_impl_1379_, 0);
lean_dec(v_unused_1509_);
v___x_1497_ = v_impl_1379_;
v_isShared_1498_ = v_isSharedCheck_1506_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_v_1495_);
lean_inc(v_k_1494_);
lean_dec(v_impl_1379_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1506_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1499_ = lean_unsigned_to_nat(3u);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 4, v_l_1464_);
lean_ctor_set(v___x_1497_, 2, v_v_1232_);
lean_ctor_set(v___x_1497_, 1, v_k_1231_);
lean_ctor_set(v___x_1497_, 0, v___x_1380_);
v___x_1501_ = v___x_1497_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v_l_1464_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v_l_1464_);
v___x_1501_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1503_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_r_1493_);
lean_ctor_set(v___x_1236_, 3, v___x_1501_);
lean_ctor_set(v___x_1236_, 2, v_v_1495_);
lean_ctor_set(v___x_1236_, 1, v_k_1494_);
lean_ctor_set(v___x_1236_, 0, v___x_1499_);
v___x_1503_ = v___x_1236_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v_k_1494_);
lean_ctor_set(v_reuseFailAlloc_1504_, 2, v_v_1495_);
lean_ctor_set(v_reuseFailAlloc_1504_, 3, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1504_, 4, v_r_1493_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1510_ = lean_unsigned_to_nat(2u);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 4, v_impl_1379_);
lean_ctor_set(v___x_1236_, 3, v_r_1493_);
lean_ctor_set(v___x_1236_, 0, v___x_1510_);
v___x_1512_ = v___x_1236_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v_r_1493_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v_impl_1379_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = lean_unsigned_to_nat(1u);
v___x_1516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
lean_ctor_set(v___x_1516_, 1, v_k_1227_);
lean_ctor_set(v___x_1516_, 2, v_v_1228_);
lean_ctor_set(v___x_1516_, 3, v_t_1229_);
lean_ctor_set(v___x_1516_, 4, v_t_1229_);
return v___x_1516_;
}
}
}
static lean_object* _init_l_Lake_LeanExe_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1517_ = lean_box(1);
v___x_1518_ = l_Lake_LeanExe_defaultFacetConfig;
v___x_1519_ = l_Lake_LeanExe_defaultFacet;
v___x_1520_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(v___x_1519_, v___x_1518_, v___x_1517_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lake_LeanExe_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1521_ = lean_obj_once(&l_Lake_LeanExe_initFacetConfigs___closed__0, &l_Lake_LeanExe_initFacetConfigs___closed__0_once, _init_l_Lake_LeanExe_initFacetConfigs___closed__0);
v___x_1522_ = l_Lake_LeanExe_exeFacetConfig;
v___x_1523_ = l_Lake_LeanExe_exeFacet;
v___x_1524_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(v___x_1523_, v___x_1522_, v___x_1521_);
return v___x_1524_;
}
}
static lean_object* _init_l_Lake_LeanExe_initFacetConfigs(void){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_obj_once(&l_Lake_LeanExe_initFacetConfigs___closed__1, &l_Lake_LeanExe_initFacetConfigs___closed__1_once, _init_l_Lake_LeanExe_initFacetConfigs___closed__1);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0(lean_object* v_00_u03b2_1526_, lean_object* v_k_1527_, lean_object* v_v_1528_, lean_object* v_t_1529_, lean_object* v_hl_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanExe_initFacetConfigs_spec__0___redArg(v_k_1527_, v_v_1528_, v_t_1529_);
return v___x_1531_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Executable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe_spec__13);
l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1 = _init_l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1();
lean_mark_persistent(l___private_Lake_Build_Executable_0__Lake_LeanExe_recBuildExe___boxed__const__1);
l_Lake_LeanExe_exeFacetConfig = _init_l_Lake_LeanExe_exeFacetConfig();
lean_mark_persistent(l_Lake_LeanExe_exeFacetConfig);
l_Lake_LeanExe_defaultFacetConfig = _init_l_Lake_LeanExe_defaultFacetConfig();
lean_mark_persistent(l_Lake_LeanExe_defaultFacetConfig);
l_Lake_LeanExe_initFacetConfigs = _init_l_Lake_LeanExe_initFacetConfigs();
lean_mark_persistent(l_Lake_LeanExe_initFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Executable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Executable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Executable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Executable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Executable(builtin);
}
#ifdef __cplusplus
}
#endif
