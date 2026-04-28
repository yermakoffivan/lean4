// Lean compiler output
// Module: Lake.Build.Common
// Imports: public import Lake.Build.Job.Monad public import Lake.Config.Monad public import Lake.Util.JsonObject public import Lake.Util.IO public import Lake.Build.Actions
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* l_Lake_Hash_load_x3f(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object*);
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lake_Artifact_trace(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_io_hard_link(lean_object*, lean_object*);
lean_object* l_Lake_copyFile(lean_object*, lean_object*);
lean_object* l_IO_setAccessRights(lean_object*, lean_object*);
lean_object* l_Lake_Package_cacheScope(lean_object*);
lean_object* l_Lake_Cache_readOutputs_x3f(lean_object*, lean_object*, uint64_t, lean_object*);
lean_object* l_Lake_ArtifactDescr_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_render(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_CacheService_artifactUrl(uint64_t, lean_object*, lean_object*);
lean_object* l_Lake_downloadArtifactCore(uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_byte_array_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lake_writeBinFileIfNew(lean_object*, lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* l_Lake_writeFileIfNew(lean_object*, lean_object*);
lean_object* l_Lake_Dynlib_dir_x3f(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_LeanInstall_ccLinkFlags(uint8_t, lean_object*);
lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_System_Platform_target;
extern lean_object* l_System_FilePath_exeExtension;
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_sharedLibExt;
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___aux__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object*);
lean_object* l_ReaderT_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_JobM_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__0;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__1;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__2;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__3;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__4;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__5;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__6;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__7;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__8;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__9;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__10;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__11;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__12;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__13;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__14;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__15;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__16;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__17;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__18;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__19;
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceJobM;
static lean_once_cell_t l_Lake_platformTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__0;
static lean_once_cell_t l_Lake_platformTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__1;
static lean_once_cell_t l_Lake_platformTrace___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__2;
static lean_once_cell_t l_Lake_platformTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__3;
static lean_once_cell_t l_Lake_platformTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__4;
static lean_once_cell_t l_Lake_platformTrace___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__5;
LEAN_EXPORT lean_object* l_Lake_platformTrace;
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_addPureTrace___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_addPureTrace___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion;
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object*);
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__0;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__1;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__2;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__3;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__4;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__5;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__6;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__7;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object*);
static lean_once_cell_t l_Lake_instToJsonBuildMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instToJsonBuildMetadata___closed__0;
LEAN_EXPORT lean_object* l_Lake_instToJsonBuildMetadata;
static lean_once_cell_t l_Lake_BuildMetadata_ofStub___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_ofStub___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object*);
static lean_once_cell_t l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object*);
static lean_once_cell_t l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object*);
static lean_once_cell_t l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0;
static lean_once_cell_t l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object*);
static lean_once_cell_t l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object*);
static lean_once_cell_t l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0;
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object*);
static lean_once_cell_t l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object*);
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9;
static lean_once_cell_t l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lake_BuildMetadata_fromJson_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__0;
static lean_once_cell_t l_Lake_BuildMetadata_fromJson_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__1;
static lean_once_cell_t l_Lake_BuildMetadata_fromJson_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__2;
static lean_once_cell_t l_Lake_BuildMetadata_fromJson_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__3;
static lean_once_cell_t l_Lake_BuildMetadata_fromJson_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lake_instFromJsonBuildMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonBuildMetadata___closed__0;
LEAN_EXPORT lean_object* l_Lake_instFromJsonBuildMetadata;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_readTraceFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_readTraceFile___closed__0;
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object*);
static lean_once_cell_t l_Lake_instToOutputJsonPUnit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instToOutputJsonPUnit___closed__0;
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit;
static lean_once_cell_t l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instToOutputJsonArtifact___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_instToOutputJsonArtifact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instToOutputJsonArtifact___closed__0;
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildAction___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildAction___redArg___closed__0;
static lean_once_cell_t l_Lake_buildAction___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildAction___redArg___closed__1;
static lean_once_cell_t l_Lake_buildAction___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildAction___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_writeFileHash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_writeFileHash___closed__0;
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildFileUnlessUpToDate_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildFileUnlessUpToDate_x27___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Cache_saveArtifact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Cache_saveArtifact___closed__0;
static lean_once_cell_t l_Lake_Cache_saveArtifact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Cache_saveArtifact___closed__1;
static lean_once_cell_t l_Lake_Cache_saveArtifact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Cache_saveArtifact___closed__2;
static lean_once_cell_t l_Lake_Cache_saveArtifact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Cache_saveArtifact___closed__3;
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_cacheArtifact___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_cacheArtifact___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_resolveArtifact___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_resolveArtifact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__0;
static lean_once_cell_t l_Lake_resolveArtifact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__1;
static lean_once_cell_t l_Lake_resolveArtifact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__2;
static lean_once_cell_t l_Lake_resolveArtifact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__3;
static lean_once_cell_t l_Lake_resolveArtifact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__4;
static lean_once_cell_t l_Lake_resolveArtifact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__5;
static lean_once_cell_t l_Lake_resolveArtifact___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__6;
static lean_once_cell_t l_Lake_resolveArtifact___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__7;
static lean_once_cell_t l_Lake_resolveArtifact___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifact___closed__8;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_resolveArtifactOutput___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifactOutput___closed__0;
static lean_once_cell_t l_Lake_resolveArtifactOutput___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_resolveArtifactOutput___closed__1;
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_restoreArtifact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_restoreArtifact___closed__0;
static lean_once_cell_t l_Lake_restoreArtifact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_restoreArtifact___closed__1;
static lean_once_cell_t l_Lake_restoreArtifact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_restoreArtifact___closed__2;
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(uint8_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_inputBinFile___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_inputBinFile___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_inputDir___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_inputDir___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_inputDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_inputDir___closed__0;
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildO___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildO___lam__2___closed__0;
static lean_once_cell_t l_Lake_buildO___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildO___lam__2___closed__1;
static lean_once_cell_t l_Lake_buildO___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildO___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildO___closed__0;
static lean_once_cell_t l_Lake_buildO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildO___closed__1;
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildLeanO___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanO___lam__0___closed__0;
static lean_once_cell_t l_Lake_buildLeanO___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanO___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0;
static lean_once_cell_t l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1;
static lean_once_cell_t l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2;
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildStaticLib___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildStaticLib___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildStaticLib___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildStaticLib___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0;
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1;
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_buildSharedLib___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildSharedLib___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3___boxed(lean_object**);
static lean_once_cell_t l_Lake_buildSharedLib___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildSharedLib___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object**);
static lean_once_cell_t l_Lake_buildLeanSharedLib___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLib___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__0(void){
_start:
{
lean_object* v___f_1_; 
v___f_1_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_1_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__1(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_2_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__2(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_3_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__3(void){
_start:
{
lean_object* v___f_4_; 
v___f_4_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_4_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__4(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_5_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__5(void){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_6_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__6(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_7_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__7(void){
_start:
{
lean_object* v___f_8_; lean_object* v___f_9_; lean_object* v___x_10_; 
v___f_8_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__1, &l_Lake_instMonadWorkspaceJobM___closed__1_once, _init_l_Lake_instMonadWorkspaceJobM___closed__1);
v___f_9_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__0, &l_Lake_instMonadWorkspaceJobM___closed__0_once, _init_l_Lake_instMonadWorkspaceJobM___closed__0);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___f_9_);
lean_ctor_set(v___x_10_, 1, v___f_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__8(void){
_start:
{
lean_object* v___f_11_; lean_object* v___f_12_; lean_object* v___f_13_; lean_object* v___f_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___f_11_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__5, &l_Lake_instMonadWorkspaceJobM___closed__5_once, _init_l_Lake_instMonadWorkspaceJobM___closed__5);
v___f_12_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__4, &l_Lake_instMonadWorkspaceJobM___closed__4_once, _init_l_Lake_instMonadWorkspaceJobM___closed__4);
v___f_13_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__3, &l_Lake_instMonadWorkspaceJobM___closed__3_once, _init_l_Lake_instMonadWorkspaceJobM___closed__3);
v___f_14_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__2, &l_Lake_instMonadWorkspaceJobM___closed__2_once, _init_l_Lake_instMonadWorkspaceJobM___closed__2);
v___x_15_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__7, &l_Lake_instMonadWorkspaceJobM___closed__7_once, _init_l_Lake_instMonadWorkspaceJobM___closed__7);
v___x_16_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___f_14_);
lean_ctor_set(v___x_16_, 2, v___f_13_);
lean_ctor_set(v___x_16_, 3, v___f_12_);
lean_ctor_set(v___x_16_, 4, v___f_11_);
return v___x_16_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__9(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___f_17_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__6, &l_Lake_instMonadWorkspaceJobM___closed__6_once, _init_l_Lake_instMonadWorkspaceJobM___closed__6);
v___x_18_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__8, &l_Lake_instMonadWorkspaceJobM___closed__8_once, _init_l_Lake_instMonadWorkspaceJobM___closed__8);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___f_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__10(void){
_start:
{
lean_object* v___x_20_; lean_object* v___f_21_; 
v___x_20_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__7, &l_Lake_instMonadWorkspaceJobM___closed__7_once, _init_l_Lake_instMonadWorkspaceJobM___closed__7);
v___f_21_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_21_, 0, v___x_20_);
return v___f_21_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___f_23_; 
v___x_22_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__7, &l_Lake_instMonadWorkspaceJobM___closed__7_once, _init_l_Lake_instMonadWorkspaceJobM___closed__7);
v___f_23_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_23_, 0, v___x_22_);
return v___f_23_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__12(void){
_start:
{
lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___x_26_; 
v___f_24_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__11, &l_Lake_instMonadWorkspaceJobM___closed__11_once, _init_l_Lake_instMonadWorkspaceJobM___closed__11);
v___f_25_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__10, &l_Lake_instMonadWorkspaceJobM___closed__10_once, _init_l_Lake_instMonadWorkspaceJobM___closed__10);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v___f_25_);
lean_ctor_set(v___x_26_, 1, v___f_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__13(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__9, &l_Lake_instMonadWorkspaceJobM___closed__9_once, _init_l_Lake_instMonadWorkspaceJobM___closed__9);
v___x_28_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_28_, 0, lean_box(0));
lean_closure_set(v___x_28_, 1, lean_box(0));
lean_closure_set(v___x_28_, 2, v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__14(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__12, &l_Lake_instMonadWorkspaceJobM___closed__12_once, _init_l_Lake_instMonadWorkspaceJobM___closed__12);
v___x_30_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__13, &l_Lake_instMonadWorkspaceJobM___closed__13_once, _init_l_Lake_instMonadWorkspaceJobM___closed__13);
v___x_31_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__15(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_instMonadBaseIO;
v___x_33_ = l_Lake_instAlternativeELogTOfMonad___redArg(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__16(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_alloc_closure((void*)(l_instMonadBaseIO___aux__5___boxed), 3, 0);
return v___x_34_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__17(void){
_start:
{
lean_object* v___x_35_; lean_object* v___f_36_; 
v___x_35_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__16, &l_Lake_instMonadWorkspaceJobM___closed__16_once, _init_l_Lake_instMonadWorkspaceJobM___closed__16);
v___f_36_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_36_, 0, v___x_35_);
return v___f_36_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__18(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__12, &l_Lake_instMonadWorkspaceJobM___closed__12_once, _init_l_Lake_instMonadWorkspaceJobM___closed__12);
v___x_38_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__14, &l_Lake_instMonadWorkspaceJobM___closed__14_once, _init_l_Lake_instMonadWorkspaceJobM___closed__14);
v___x_39_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__19(void){
_start:
{
lean_object* v___x_40_; lean_object* v___f_41_; lean_object* v___x_42_; 
v___x_40_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__18, &l_Lake_instMonadWorkspaceJobM___closed__18_once, _init_l_Lake_instMonadWorkspaceJobM___closed__18);
v___f_41_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__17, &l_Lake_instMonadWorkspaceJobM___closed__17_once, _init_l_Lake_instMonadWorkspaceJobM___closed__17);
v___x_42_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 3);
lean_closure_set(v___x_42_, 0, v___f_41_);
lean_closure_set(v___x_42_, 1, lean_box(0));
lean_closure_set(v___x_42_, 2, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM(void){
_start:
{
lean_object* v___x_43_; lean_object* v_toApplicative_44_; lean_object* v_toBind_45_; lean_object* v_toFunctor_46_; lean_object* v_toPure_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___x_52_; lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___f_56_; lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v_toApplicative_63_; lean_object* v_toFunctor_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v_toApplicative_68_; lean_object* v_toFunctor_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_toApplicative_77_; lean_object* v_toFunctor_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v_toApplicative_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_106_; 
v___x_43_ = l_instMonadBaseIO;
v_toApplicative_44_ = lean_ctor_get(v___x_43_, 0);
v_toBind_45_ = lean_ctor_get(v___x_43_, 1);
v_toFunctor_46_ = lean_ctor_get(v_toApplicative_44_, 0);
v_toPure_47_ = lean_ctor_get(v_toApplicative_44_, 1);
lean_inc_n(v_toBind_45_, 3);
lean_inc_n(v_toPure_47_, 5);
v___f_48_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_48_, 0, v_toPure_47_);
lean_closure_set(v___f_48_, 1, v_toBind_45_);
v___f_49_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_49_, 0, v_toPure_47_);
lean_closure_set(v___f_49_, 1, v_toBind_45_);
lean_inc_ref(v___f_48_);
v___f_50_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_50_, 0, v_toPure_47_);
lean_closure_set(v___f_50_, 1, v___f_48_);
lean_inc_ref_n(v_toFunctor_46_, 2);
v___f_51_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_51_, 0, v_toFunctor_46_);
lean_closure_set(v___f_51_, 1, v_toPure_47_);
lean_closure_set(v___f_51_, 2, v_toBind_45_);
v___x_52_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_46_);
v___f_53_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_53_, 0, v_toPure_47_);
lean_inc_ref_n(v___x_52_, 2);
v___x_54_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set(v___x_54_, 1, v___f_53_);
lean_ctor_set(v___x_54_, 2, v___f_51_);
lean_ctor_set(v___x_54_, 3, v___f_50_);
lean_ctor_set(v___x_54_, 4, v___f_49_);
v___x_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___f_48_);
v___f_56_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_56_, 0, v___x_52_);
v___f_57_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_57_, 0, v___x_52_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v___f_56_);
lean_ctor_set(v___x_58_, 1, v___f_57_);
v___x_59_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__15, &l_Lake_instMonadWorkspaceJobM___closed__15_once, _init_l_Lake_instMonadWorkspaceJobM___closed__15);
lean_inc_ref(v___x_55_);
v___x_60_ = l_ReaderT_instAlternativeOfMonad___redArg(v___x_59_, v___x_55_);
v___x_61_ = l_ReaderT_instMonad___redArg(v___x_55_);
lean_inc_ref(v___x_61_);
v___x_62_ = l_StateRefT_x27_instAlternativeOfMonad___redArg(v___x_60_, v___x_61_);
v_toApplicative_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc_ref(v_toApplicative_63_);
lean_dec_ref(v___x_62_);
v_toFunctor_64_ = lean_ctor_get(v_toApplicative_63_, 0);
lean_inc_ref_n(v_toFunctor_64_, 2);
lean_dec_ref(v_toApplicative_63_);
v___x_65_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__19, &l_Lake_instMonadWorkspaceJobM___closed__19_once, _init_l_Lake_instMonadWorkspaceJobM___closed__19);
lean_inc_ref(v___x_58_);
v___x_66_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_65_, v___x_58_);
v___x_67_ = l_StateRefT_x27_instMonad___redArg(v___x_61_);
v_toApplicative_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc_ref(v_toApplicative_68_);
v_toFunctor_69_ = lean_ctor_get(v_toApplicative_68_, 0);
lean_inc_ref_n(v_toFunctor_69_, 2);
lean_dec_ref(v_toApplicative_68_);
v___x_70_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_66_, v___x_58_);
v___x_71_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_71_, 0, lean_box(0));
lean_closure_set(v___x_71_, 1, lean_box(0));
lean_closure_set(v___x_71_, 2, lean_box(0));
lean_closure_set(v___x_71_, 3, lean_box(0));
lean_closure_set(v___x_71_, 4, v___x_70_);
v___x_72_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_71_, v_toFunctor_64_);
v___f_73_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_73_, 0, v_toFunctor_69_);
v___f_74_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_74_, 0, v_toFunctor_69_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___f_73_);
lean_ctor_set(v___x_75_, 1, v___f_74_);
v___x_76_ = l_ReaderT_instMonad___redArg(v___x_67_);
v_toApplicative_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_ref(v_toApplicative_77_);
v_toFunctor_78_ = lean_ctor_get(v_toApplicative_77_, 0);
lean_inc_ref_n(v_toFunctor_78_, 2);
lean_dec_ref(v_toApplicative_77_);
v___x_79_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_72_, v_toFunctor_64_);
v___x_80_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_80_, 0, lean_box(0));
lean_closure_set(v___x_80_, 1, v___x_79_);
lean_inc_ref(v___x_75_);
v___x_81_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_80_, v___x_75_);
v___x_82_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_81_, v___x_75_);
v___x_83_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_83_, 0, lean_box(0));
lean_closure_set(v___x_83_, 1, v___x_82_);
v___f_84_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_84_, 0, v_toFunctor_78_);
v___f_85_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_85_, 0, v_toFunctor_78_);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___f_84_);
lean_ctor_set(v___x_86_, 1, v___f_85_);
lean_inc_ref_n(v___x_86_, 2);
v___x_87_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_83_, v___x_86_);
v___x_88_ = l_Lake_EquipT_instFunctor___redArg(v___x_86_);
v_toApplicative_89_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_76_, 1);
lean_dec(v_unused_107_);
v___x_91_ = v___x_76_;
v_isShared_92_ = v_isSharedCheck_106_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_toApplicative_89_);
lean_dec(v___x_76_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_106_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v_toFunctor_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_102_; 
v_toFunctor_93_ = lean_ctor_get(v_toApplicative_89_, 0);
lean_inc_ref_n(v_toFunctor_93_, 2);
lean_dec_ref(v_toApplicative_89_);
v___x_94_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_87_, v___x_86_);
v___x_95_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_95_, 0, lean_box(0));
lean_closure_set(v___x_95_, 1, lean_box(0));
lean_closure_set(v___x_95_, 2, lean_box(0));
lean_closure_set(v___x_95_, 3, v___x_94_);
lean_inc_ref(v___x_88_);
v___x_96_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_95_, v___x_88_);
v___x_97_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_96_, v___x_88_);
v___x_98_ = lean_alloc_closure((void*)(l_Lake_JobM_runFetchM___boxed), 9, 2);
lean_closure_set(v___x_98_, 0, lean_box(0));
lean_closure_set(v___x_98_, 1, v___x_97_);
v___f_99_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_99_, 0, v_toFunctor_93_);
v___f_100_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_100_, 0, v_toFunctor_93_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v___f_100_);
lean_ctor_set(v___x_91_, 0, v___f_99_);
v___x_102_ = v___x_91_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___f_99_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___f_100_);
v___x_102_ = v_reuseFailAlloc_105_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = l_Lake_EquipT_instFunctor___redArg(v___x_102_);
v___x_104_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_98_, v___x_103_);
return v___x_104_;
}
}
}
}
static uint64_t _init_l_Lake_platformTrace___closed__0(void){
_start:
{
lean_object* v___x_108_; uint64_t v___x_109_; 
v___x_108_ = l_System_Platform_target;
v___x_109_ = lean_string_hash(v___x_108_);
return v___x_109_;
}
}
static uint64_t _init_l_Lake_platformTrace___closed__1(void){
_start:
{
uint64_t v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; 
v___x_110_ = lean_uint64_once(&l_Lake_platformTrace___closed__0, &l_Lake_platformTrace___closed__0_once, _init_l_Lake_platformTrace___closed__0);
v___x_111_ = l_Lake_Hash_nil;
v___x_112_ = lean_uint64_mix_hash(v___x_111_, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__2(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = lean_mk_empty_array_with_capacity(v___x_113_);
return v___x_114_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__3(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(0u);
v___x_116_ = lean_nat_to_int(v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__4(void){
_start:
{
uint32_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = 0;
v___x_118_ = lean_obj_once(&l_Lake_platformTrace___closed__3, &l_Lake_platformTrace___closed__3_once, _init_l_Lake_platformTrace___closed__3);
v___x_119_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set_uint32(v___x_119_, sizeof(void*)*1, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__5(void){
_start:
{
lean_object* v___x_120_; uint64_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_120_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_121_ = lean_uint64_once(&l_Lake_platformTrace___closed__1, &l_Lake_platformTrace___closed__1_once, _init_l_Lake_platformTrace___closed__1);
v___x_122_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_123_ = l_System_Platform_target;
v___x_124_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_120_);
lean_ctor_set_uint64(v___x_124_, sizeof(void*)*3, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lake_platformTrace(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lake_platformTrace___closed__5, &l_Lake_platformTrace___closed__5_once, _init_l_Lake_platformTrace___closed__5);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object* v_a_126_){
_start:
{
lean_object* v_log_128_; uint8_t v_action_129_; uint8_t v_wantsRebuild_130_; lean_object* v_trace_131_; lean_object* v_buildTime_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_143_; 
v_log_128_ = lean_ctor_get(v_a_126_, 0);
v_action_129_ = lean_ctor_get_uint8(v_a_126_, sizeof(void*)*3);
v_wantsRebuild_130_ = lean_ctor_get_uint8(v_a_126_, sizeof(void*)*3 + 1);
v_trace_131_ = lean_ctor_get(v_a_126_, 1);
v_buildTime_132_ = lean_ctor_get(v_a_126_, 2);
v_isSharedCheck_143_ = !lean_is_exclusive(v_a_126_);
if (v_isSharedCheck_143_ == 0)
{
v___x_134_ = v_a_126_;
v_isShared_135_ = v_isSharedCheck_143_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_buildTime_132_);
lean_inc(v_trace_131_);
lean_inc(v_log_128_);
lean_dec(v_a_126_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_143_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_136_ = l_Lake_platformTrace;
v___x_137_ = lean_box(0);
v___x_138_ = l_Lake_BuildTrace_mix(v_trace_131_, v___x_136_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___x_138_);
v___x_140_ = v___x_134_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_log_128_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_buildTime_132_);
lean_ctor_set_uint8(v_reuseFailAlloc_142_, sizeof(void*)*3, v_action_129_);
lean_ctor_set_uint8(v_reuseFailAlloc_142_, sizeof(void*)*3 + 1, v_wantsRebuild_130_);
v___x_140_ = v_reuseFailAlloc_142_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_137_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
return v___x_141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lake_addPlatformTrace___redArg(v_a_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_log_154_; uint8_t v_action_155_; uint8_t v_wantsRebuild_156_; lean_object* v_trace_157_; lean_object* v_buildTime_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_169_; 
v_log_154_ = lean_ctor_get(v_a_152_, 0);
v_action_155_ = lean_ctor_get_uint8(v_a_152_, sizeof(void*)*3);
v_wantsRebuild_156_ = lean_ctor_get_uint8(v_a_152_, sizeof(void*)*3 + 1);
v_trace_157_ = lean_ctor_get(v_a_152_, 1);
v_buildTime_158_ = lean_ctor_get(v_a_152_, 2);
v_isSharedCheck_169_ = !lean_is_exclusive(v_a_152_);
if (v_isSharedCheck_169_ == 0)
{
v___x_160_ = v_a_152_;
v_isShared_161_ = v_isSharedCheck_169_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_buildTime_158_);
lean_inc(v_trace_157_);
lean_inc(v_log_154_);
lean_dec(v_a_152_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_169_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_162_ = l_Lake_platformTrace;
v___x_163_ = lean_box(0);
v___x_164_ = l_Lake_BuildTrace_mix(v_trace_157_, v___x_162_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_164_);
v___x_166_ = v___x_160_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_log_154_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_buildTime_158_);
lean_ctor_set_uint8(v_reuseFailAlloc_168_, sizeof(void*)*3, v_action_155_);
lean_ctor_set_uint8(v_reuseFailAlloc_168_, sizeof(void*)*3 + 1, v_wantsRebuild_156_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_163_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lake_addPlatformTrace(v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
lean_dec_ref(v_a_174_);
lean_dec(v_a_173_);
lean_dec(v_a_172_);
lean_dec(v_a_171_);
lean_dec_ref(v_a_170_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_log_181_; uint8_t v_action_182_; uint8_t v_wantsRebuild_183_; lean_object* v_trace_184_; lean_object* v_buildTime_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_196_; 
v_log_181_ = lean_ctor_get(v_a_179_, 0);
v_action_182_ = lean_ctor_get_uint8(v_a_179_, sizeof(void*)*3);
v_wantsRebuild_183_ = lean_ctor_get_uint8(v_a_179_, sizeof(void*)*3 + 1);
v_trace_184_ = lean_ctor_get(v_a_179_, 1);
v_buildTime_185_ = lean_ctor_get(v_a_179_, 2);
v_isSharedCheck_196_ = !lean_is_exclusive(v_a_179_);
if (v_isSharedCheck_196_ == 0)
{
v___x_187_ = v_a_179_;
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_buildTime_185_);
lean_inc(v_trace_184_);
lean_inc(v_log_181_);
lean_dec(v_a_179_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_196_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_leanTrace_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v_leanTrace_189_ = lean_ctor_get(v_a_178_, 2);
v___x_190_ = lean_box(0);
lean_inc_ref(v_leanTrace_189_);
v___x_191_ = l_Lake_BuildTrace_mix(v_trace_184_, v_leanTrace_189_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v___x_191_);
v___x_193_ = v___x_187_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_log_181_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v_buildTime_185_);
lean_ctor_set_uint8(v_reuseFailAlloc_195_, sizeof(void*)*3, v_action_182_);
lean_ctor_set_uint8(v_reuseFailAlloc_195_, sizeof(void*)*3 + 1, v_wantsRebuild_183_);
v___x_193_ = v_reuseFailAlloc_195_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_190_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lake_addLeanTrace___redArg(v_a_197_, v_a_198_);
lean_dec_ref(v_a_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_log_208_; uint8_t v_action_209_; uint8_t v_wantsRebuild_210_; lean_object* v_trace_211_; lean_object* v_buildTime_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_223_; 
v_log_208_ = lean_ctor_get(v_a_206_, 0);
v_action_209_ = lean_ctor_get_uint8(v_a_206_, sizeof(void*)*3);
v_wantsRebuild_210_ = lean_ctor_get_uint8(v_a_206_, sizeof(void*)*3 + 1);
v_trace_211_ = lean_ctor_get(v_a_206_, 1);
v_buildTime_212_ = lean_ctor_get(v_a_206_, 2);
v_isSharedCheck_223_ = !lean_is_exclusive(v_a_206_);
if (v_isSharedCheck_223_ == 0)
{
v___x_214_ = v_a_206_;
v_isShared_215_ = v_isSharedCheck_223_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_buildTime_212_);
lean_inc(v_trace_211_);
lean_inc(v_log_208_);
lean_dec(v_a_206_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_223_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_leanTrace_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v_leanTrace_216_ = lean_ctor_get(v_a_205_, 2);
v___x_217_ = lean_box(0);
lean_inc_ref(v_leanTrace_216_);
v___x_218_ = l_Lake_BuildTrace_mix(v_trace_211_, v_leanTrace_216_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v___x_218_);
v___x_220_ = v___x_214_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_log_208_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v_buildTime_212_);
lean_ctor_set_uint8(v_reuseFailAlloc_222_, sizeof(void*)*3, v_action_209_);
lean_ctor_set_uint8(v_reuseFailAlloc_222_, sizeof(void*)*3 + 1, v_wantsRebuild_210_);
v___x_220_ = v_reuseFailAlloc_222_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_217_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lake_addLeanTrace(v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
return v_res_231_;
}
}
static lean_object* _init_l_Lake_addPureTrace___redArg___closed__0(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_mk_string_unchecked(": ", 2, 2);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object* v_inst_233_, lean_object* v_inst_234_, lean_object* v_a_235_, lean_object* v_caption_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_log_239_; uint8_t v_action_240_; uint8_t v_wantsRebuild_241_; lean_object* v_trace_242_; lean_object* v_buildTime_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_262_; 
v_log_239_ = lean_ctor_get(v_a_237_, 0);
v_action_240_ = lean_ctor_get_uint8(v_a_237_, sizeof(void*)*3);
v_wantsRebuild_241_ = lean_ctor_get_uint8(v_a_237_, sizeof(void*)*3 + 1);
v_trace_242_ = lean_ctor_get(v_a_237_, 1);
v_buildTime_243_ = lean_ctor_get(v_a_237_, 2);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_237_);
if (v_isSharedCheck_262_ == 0)
{
v___x_245_ = v_a_237_;
v_isShared_246_ = v_isSharedCheck_262_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_buildTime_243_);
lean_inc(v_trace_242_);
lean_inc(v_log_239_);
lean_dec(v_a_237_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_262_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint64_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
lean_inc(v_a_235_);
v___x_247_ = lean_apply_1(v_inst_234_, v_a_235_);
v___x_248_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_249_ = lean_obj_once(&l_Lake_addPureTrace___redArg___closed__0, &l_Lake_addPureTrace___redArg___closed__0_once, _init_l_Lake_addPureTrace___redArg___closed__0);
v___x_250_ = lean_string_append(v_caption_236_, v___x_249_);
v___x_251_ = lean_apply_1(v_inst_233_, v_a_235_);
v___x_252_ = lean_string_append(v___x_250_, v___x_251_);
lean_dec_ref(v___x_251_);
v___x_253_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_254_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_248_);
lean_ctor_set(v___x_254_, 2, v___x_253_);
v___x_255_ = lean_unbox_uint64(v___x_247_);
lean_dec_ref(v___x_247_);
lean_ctor_set_uint64(v___x_254_, sizeof(void*)*3, v___x_255_);
v___x_256_ = lean_box(0);
v___x_257_ = l_Lake_BuildTrace_mix(v_trace_242_, v___x_254_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_257_);
v___x_259_ = v___x_245_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_log_239_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_261_, 2, v_buildTime_243_);
lean_ctor_set_uint8(v_reuseFailAlloc_261_, sizeof(void*)*3, v_action_240_);
lean_ctor_set_uint8(v_reuseFailAlloc_261_, sizeof(void*)*3 + 1, v_wantsRebuild_241_);
v___x_259_ = v_reuseFailAlloc_261_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; 
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_256_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_a_265_, lean_object* v_caption_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lake_addPureTrace___redArg(v_inst_263_, v_inst_264_, v_a_265_, v_caption_266_, v_a_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object* v_00_u03b1_270_, lean_object* v_inst_271_, lean_object* v_inst_272_, lean_object* v_a_273_, lean_object* v_caption_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_log_282_; uint8_t v_action_283_; uint8_t v_wantsRebuild_284_; lean_object* v_trace_285_; lean_object* v_buildTime_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_305_; 
v_log_282_ = lean_ctor_get(v_a_280_, 0);
v_action_283_ = lean_ctor_get_uint8(v_a_280_, sizeof(void*)*3);
v_wantsRebuild_284_ = lean_ctor_get_uint8(v_a_280_, sizeof(void*)*3 + 1);
v_trace_285_ = lean_ctor_get(v_a_280_, 1);
v_buildTime_286_ = lean_ctor_get(v_a_280_, 2);
v_isSharedCheck_305_ = !lean_is_exclusive(v_a_280_);
if (v_isSharedCheck_305_ == 0)
{
v___x_288_ = v_a_280_;
v_isShared_289_ = v_isSharedCheck_305_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_buildTime_286_);
lean_inc(v_trace_285_);
lean_inc(v_log_282_);
lean_dec(v_a_280_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_305_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; uint64_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_302_; 
lean_inc(v_a_273_);
v___x_290_ = lean_apply_1(v_inst_272_, v_a_273_);
v___x_291_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_292_ = lean_obj_once(&l_Lake_addPureTrace___redArg___closed__0, &l_Lake_addPureTrace___redArg___closed__0_once, _init_l_Lake_addPureTrace___redArg___closed__0);
v___x_293_ = lean_string_append(v_caption_274_, v___x_292_);
v___x_294_ = lean_apply_1(v_inst_271_, v_a_273_);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_297_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_291_);
lean_ctor_set(v___x_297_, 2, v___x_296_);
v___x_298_ = lean_unbox_uint64(v___x_290_);
lean_dec_ref(v___x_290_);
lean_ctor_set_uint64(v___x_297_, sizeof(void*)*3, v___x_298_);
v___x_299_ = lean_box(0);
v___x_300_ = l_Lake_BuildTrace_mix(v_trace_285_, v___x_297_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 1, v___x_300_);
v___x_302_ = v___x_288_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_log_282_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_304_, 2, v_buildTime_286_);
lean_ctor_set_uint8(v_reuseFailAlloc_304_, sizeof(void*)*3, v_action_283_);
lean_ctor_set_uint8(v_reuseFailAlloc_304_, sizeof(void*)*3 + 1, v_wantsRebuild_284_);
v___x_302_ = v_reuseFailAlloc_304_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_303_; 
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_299_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object* v_00_u03b1_306_, lean_object* v_inst_307_, lean_object* v_inst_308_, lean_object* v_a_309_, lean_object* v_caption_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lake_addPureTrace(v_00_u03b1_306_, v_inst_307_, v_inst_308_, v_a_309_, v_caption_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
lean_dec_ref(v_a_315_);
lean_dec(v_a_314_);
lean_dec(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
return v_res_318_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_mk_string_unchecked("2025-09-10", 10, 10);
return v___x_319_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion(void){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0, &l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_object* v___x_322_; 
v___x_322_ = lean_box(0);
return v___x_322_;
}
else
{
lean_object* v_val_323_; 
v_val_323_ = lean_ctor_get(v_x_321_, 0);
lean_inc(v_val_323_);
return v_val_323_;
}
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_x_324_);
lean_dec(v_x_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object* v_x_326_){
_start:
{
lean_object* v_fst_327_; lean_object* v_snd_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_fst_327_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_fst_327_);
v_snd_328_ = lean_ctor_get(v_x_326_, 1);
lean_inc(v_snd_328_);
lean_dec_ref(v_x_326_);
v___x_329_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_329_, 0, v_fst_327_);
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_330_);
v___x_332_ = lean_array_push(v___x_331_, v___x_329_);
v___x_333_ = lean_array_push(v___x_332_, v_snd_328_);
v___x_334_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t v_sz_335_, size_t v_i_336_, lean_object* v_bs_337_){
_start:
{
uint8_t v___x_338_; 
v___x_338_ = lean_usize_dec_lt(v_i_336_, v_sz_335_);
if (v___x_338_ == 0)
{
return v_bs_337_;
}
else
{
lean_object* v_v_339_; lean_object* v___x_340_; lean_object* v_bs_x27_341_; lean_object* v___x_342_; size_t v___x_343_; size_t v___x_344_; lean_object* v___x_345_; 
v_v_339_ = lean_array_uget(v_bs_337_, v_i_336_);
v___x_340_ = lean_unsigned_to_nat(0u);
v_bs_x27_341_ = lean_array_uset(v_bs_337_, v_i_336_, v___x_340_);
v___x_342_ = l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(v_v_339_);
v___x_343_ = ((size_t)1ULL);
v___x_344_ = lean_usize_add(v_i_336_, v___x_343_);
v___x_345_ = lean_array_uset(v_bs_x27_341_, v_i_336_, v___x_342_);
v_i_336_ = v___x_344_;
v_bs_337_ = v___x_345_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object* v_sz_347_, lean_object* v_i_348_, lean_object* v_bs_349_){
_start:
{
size_t v_sz_boxed_350_; size_t v_i_boxed_351_; lean_object* v_res_352_; 
v_sz_boxed_350_ = lean_unbox_usize(v_sz_347_);
lean_dec(v_sz_347_);
v_i_boxed_351_ = lean_unbox_usize(v_i_348_);
lean_dec(v_i_348_);
v_res_352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_boxed_350_, v_i_boxed_351_, v_bs_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object* v_a_353_){
_start:
{
size_t v_sz_354_; size_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_sz_354_ = lean_array_size(v_a_353_);
v___x_355_ = ((size_t)0ULL);
v___x_356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_354_, v___x_355_, v_a_353_);
v___x_357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t v_sz_358_, size_t v_i_359_, lean_object* v_bs_360_){
_start:
{
uint8_t v___x_361_; 
v___x_361_ = lean_usize_dec_lt(v_i_359_, v_sz_358_);
if (v___x_361_ == 0)
{
return v_bs_360_;
}
else
{
lean_object* v_v_362_; lean_object* v___x_363_; lean_object* v_bs_x27_364_; lean_object* v___x_365_; size_t v___x_366_; size_t v___x_367_; lean_object* v___x_368_; 
v_v_362_ = lean_array_uget(v_bs_360_, v_i_359_);
v___x_363_ = lean_unsigned_to_nat(0u);
v_bs_x27_364_ = lean_array_uset(v_bs_360_, v_i_359_, v___x_363_);
v___x_365_ = l_Lake_instToJsonLogEntry_toJson(v_v_362_);
lean_dec(v_v_362_);
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_usize_add(v_i_359_, v___x_366_);
v___x_368_ = lean_array_uset(v_bs_x27_364_, v_i_359_, v___x_365_);
v_i_359_ = v___x_367_;
v_bs_360_ = v___x_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object* v_sz_370_, lean_object* v_i_371_, lean_object* v_bs_372_){
_start:
{
size_t v_sz_boxed_373_; size_t v_i_boxed_374_; lean_object* v_res_375_; 
v_sz_boxed_373_ = lean_unbox_usize(v_sz_370_);
lean_dec(v_sz_370_);
v_i_boxed_374_ = lean_unbox_usize(v_i_371_);
lean_dec(v_i_371_);
v_res_375_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_boxed_373_, v_i_boxed_374_, v_bs_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object* v_a_376_){
_start:
{
size_t v_sz_377_; size_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v_sz_377_ = lean_array_size(v_a_376_);
v___x_378_ = ((size_t)0ULL);
v___x_379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_377_, v___x_378_, v_a_376_);
v___x_380_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__0(void){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_mk_string_unchecked("schemaVersion", 13, 13);
return v___x_381_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__1(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0, &l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0);
v___x_383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__2(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_384_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__1, &l_Lake_BuildMetadata_toJson___closed__1_once, _init_l_Lake_BuildMetadata_toJson___closed__1);
v___x_385_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__0, &l_Lake_BuildMetadata_toJson___closed__0_once, _init_l_Lake_BuildMetadata_toJson___closed__0);
v___x_386_ = lean_box(1);
v___x_387_ = l_Lake_JsonObject_insertJson(v___x_386_, v___x_385_, v___x_384_);
return v___x_387_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__3(void){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_mk_string_unchecked("depHash", 7, 7);
return v___x_388_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__4(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_mk_string_unchecked("inputs", 6, 6);
return v___x_389_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__5(void){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = lean_mk_string_unchecked("outputs", 7, 7);
return v___x_390_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__6(void){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_mk_string_unchecked("log", 3, 3);
return v___x_391_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__7(void){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_mk_string_unchecked("synthetic", 9, 9);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object* v_self_393_){
_start:
{
uint64_t v_depHash_394_; lean_object* v_inputs_395_; lean_object* v_outputs_x3f_396_; lean_object* v_log_397_; uint8_t v_synthetic_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_depHash_394_ = lean_ctor_get_uint64(v_self_393_, sizeof(void*)*3);
v_inputs_395_ = lean_ctor_get(v_self_393_, 0);
lean_inc_ref(v_inputs_395_);
v_outputs_x3f_396_ = lean_ctor_get(v_self_393_, 1);
lean_inc(v_outputs_x3f_396_);
v_log_397_ = lean_ctor_get(v_self_393_, 2);
lean_inc_ref(v_log_397_);
v_synthetic_398_ = lean_ctor_get_uint8(v_self_393_, sizeof(void*)*3 + 8);
lean_dec_ref(v_self_393_);
v___x_399_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__2, &l_Lake_BuildMetadata_toJson___closed__2_once, _init_l_Lake_BuildMetadata_toJson___closed__2);
v___x_400_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__3, &l_Lake_BuildMetadata_toJson___closed__3_once, _init_l_Lake_BuildMetadata_toJson___closed__3);
v___x_401_ = l_Lake_lowerHexUInt64(v_depHash_394_);
v___x_402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
v___x_403_ = l_Lake_JsonObject_insertJson(v___x_399_, v___x_400_, v___x_402_);
v___x_404_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__4, &l_Lake_BuildMetadata_toJson___closed__4_once, _init_l_Lake_BuildMetadata_toJson___closed__4);
v___x_405_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v_inputs_395_);
v___x_406_ = l_Lake_JsonObject_insertJson(v___x_403_, v___x_404_, v___x_405_);
v___x_407_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__5, &l_Lake_BuildMetadata_toJson___closed__5_once, _init_l_Lake_BuildMetadata_toJson___closed__5);
v___x_408_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_outputs_x3f_396_);
lean_dec(v_outputs_x3f_396_);
v___x_409_ = l_Lake_JsonObject_insertJson(v___x_406_, v___x_407_, v___x_408_);
v___x_410_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__6, &l_Lake_BuildMetadata_toJson___closed__6_once, _init_l_Lake_BuildMetadata_toJson___closed__6);
v___x_411_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(v_log_397_);
v___x_412_ = l_Lake_JsonObject_insertJson(v___x_409_, v___x_410_, v___x_411_);
v___x_413_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__7, &l_Lake_BuildMetadata_toJson___closed__7_once, _init_l_Lake_BuildMetadata_toJson___closed__7);
v___x_414_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_414_, 0, v_synthetic_398_);
v___x_415_ = l_Lake_JsonObject_insertJson(v___x_412_, v___x_413_, v___x_414_);
v___x_416_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l_Lake_instToJsonBuildMetadata___closed__0(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_alloc_closure((void*)(l_Lake_BuildMetadata_toJson), 1, 0);
return v___x_417_;
}
}
static lean_object* _init_l_Lake_instToJsonBuildMetadata(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_obj_once(&l_Lake_instToJsonBuildMetadata___closed__0, &l_Lake_instToJsonBuildMetadata___closed__0_once, _init_l_Lake_instToJsonBuildMetadata___closed__0);
return v___x_418_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_ofStub___closed__0(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t v_hash_421_){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; lean_object* v___x_425_; 
v___x_422_ = lean_obj_once(&l_Lake_BuildMetadata_ofStub___closed__0, &l_Lake_BuildMetadata_ofStub___closed__0_once, _init_l_Lake_BuildMetadata_ofStub___closed__0);
v___x_423_ = lean_box(0);
v___x_424_ = 0;
v___x_425_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_425_, 0, v___x_422_);
lean_ctor_set(v___x_425_, 1, v___x_423_);
lean_ctor_set(v___x_425_, 2, v___x_422_);
lean_ctor_set_uint64(v___x_425_, sizeof(void*)*3, v_hash_421_);
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*3 + 8, v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object* v_hash_426_){
_start:
{
uint64_t v_hash_boxed_427_; lean_object* v_res_428_; 
v_hash_boxed_427_ = lean_unbox_uint64(v_hash_426_);
lean_dec_ref(v_hash_426_);
v_res_428_ = l_Lake_BuildMetadata_ofStub(v_hash_boxed_427_);
return v_res_428_;
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_box(0);
v___x_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_431_) == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0, &l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_once, _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0);
return v___x_432_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_Json_getBool_x3f(v_x_431_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
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
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_450_; 
v_a_442_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_450_ == 0)
{
v___x_444_ = v___x_433_;
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_433_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_446_, 0, v_a_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v___x_446_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object* v_x_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_x_451_);
lean_dec(v_x_451_);
return v_res_452_;
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object* v_x_455_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_obj_once(&l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0, &l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_once, _init_l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0);
return v___x_456_;
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v_x_455_);
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_box(0);
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object* v_x_461_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_obj_once(&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0, &l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_once, _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0);
return v___x_462_;
}
else
{
lean_object* v___x_463_; lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_472_; 
v___x_463_ = l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(v_x_461_);
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_472_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_468_, 0, v_a_464_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t v_sz_473_, size_t v_i_474_, lean_object* v_bs_475_){
_start:
{
uint8_t v___x_476_; 
v___x_476_ = lean_usize_dec_lt(v_i_474_, v_sz_473_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v_bs_475_);
return v___x_477_;
}
else
{
lean_object* v_v_478_; lean_object* v___x_479_; 
v_v_478_ = lean_array_uget_borrowed(v_bs_475_, v_i_474_);
lean_inc(v_v_478_);
v___x_479_ = l_Lake_instFromJsonLogEntry_fromJson(v_v_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec_ref(v_bs_475_);
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_489_; lean_object* v_bs_x27_490_; size_t v___x_491_; size_t v___x_492_; lean_object* v___x_493_; 
v_a_488_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_a_488_);
lean_dec_ref(v___x_479_);
v___x_489_ = lean_unsigned_to_nat(0u);
v_bs_x27_490_ = lean_array_uset(v_bs_475_, v_i_474_, v___x_489_);
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_add(v_i_474_, v___x_491_);
v___x_493_ = lean_array_uset(v_bs_x27_490_, v_i_474_, v_a_488_);
v_i_474_ = v___x_492_;
v_bs_475_ = v___x_493_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_495_, lean_object* v_i_496_, lean_object* v_bs_497_){
_start:
{
size_t v_sz_boxed_498_; size_t v_i_boxed_499_; lean_object* v_res_500_; 
v_sz_boxed_498_ = lean_unbox_usize(v_sz_495_);
lean_dec(v_sz_495_);
v_i_boxed_499_ = lean_unbox_usize(v_i_496_);
lean_dec(v_i_496_);
v_res_500_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_boxed_498_, v_i_boxed_499_, v_bs_497_);
return v_res_500_;
}
}
static lean_object* _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_mk_string_unchecked("expected JSON array, got '", 26, 26);
return v___x_501_;
}
}
static lean_object* _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 4)
{
lean_object* v_elems_504_; size_t v_sz_505_; size_t v___x_506_; lean_object* v___x_507_; 
v_elems_504_ = lean_ctor_get(v_x_503_, 0);
lean_inc_ref(v_elems_504_);
lean_dec_ref(v_x_503_);
v_sz_505_ = lean_array_size(v_elems_504_);
v___x_506_ = ((size_t)0ULL);
v___x_507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_505_, v___x_506_, v_elems_504_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_508_ = lean_obj_once(&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0, &l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0_once, _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0);
v___x_509_ = lean_unsigned_to_nat(80u);
v___x_510_ = l_Lean_Json_pretty(v_x_503_, v___x_509_);
v___x_511_ = lean_string_append(v___x_508_, v___x_510_);
lean_dec_ref(v___x_510_);
v___x_512_ = lean_obj_once(&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1, &l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_once, _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1);
v___x_513_ = lean_string_append(v___x_511_, v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_box(0);
v___x_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object* v_x_517_){
_start:
{
if (lean_obj_tag(v_x_517_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = lean_obj_once(&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0, &l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_once, _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0);
return v___x_518_;
}
else
{
lean_object* v___x_519_; 
v___x_519_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(v_x_517_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_536_; 
v_a_528_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_536_ == 0)
{
v___x_530_ = v___x_519_;
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_519_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_532_, 0, v_a_528_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_532_);
v___x_534_ = v___x_530_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
}
static lean_object* _init_l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0(void){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = lean_mk_string_unchecked("expected pair, got '", 20, 20);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object* v_x_538_){
_start:
{
lean_object* v_j_540_; 
if (lean_obj_tag(v_x_538_) == 4)
{
lean_object* v_elems_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_elems_548_ = lean_ctor_get(v_x_538_, 0);
v___x_549_ = lean_array_get_size(v_elems_548_);
v___x_550_ = lean_unsigned_to_nat(2u);
v___x_551_ = lean_nat_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
v_j_540_ = v_x_538_;
goto v___jp_539_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
lean_inc_ref(v_elems_548_);
lean_dec_ref(v_x_538_);
v___x_552_ = lean_unsigned_to_nat(0u);
v___x_553_ = lean_array_fget_borrowed(v_elems_548_, v___x_552_);
lean_inc(v___x_553_);
v___x_554_ = l_Lean_Json_getStr_x3f(v___x_553_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref(v_elems_548_);
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_573_; 
v_a_563_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_573_ == 0)
{
v___x_565_ = v___x_554_;
v_isShared_566_ = v_isSharedCheck_573_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_554_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_573_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_567_ = lean_unsigned_to_nat(1u);
v___x_568_ = lean_array_fget(v_elems_548_, v___x_567_);
lean_dec_ref(v_elems_548_);
v___x_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_569_, 0, v_a_563_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_569_);
v___x_571_ = v___x_565_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
else
{
v_j_540_ = v_x_538_;
goto v___jp_539_;
}
v___jp_539_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_541_ = lean_obj_once(&l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0, &l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_once, _init_l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0);
v___x_542_ = lean_unsigned_to_nat(80u);
v___x_543_ = l_Lean_Json_pretty(v_j_540_, v___x_542_);
v___x_544_ = lean_string_append(v___x_541_, v___x_543_);
lean_dec_ref(v___x_543_);
v___x_545_ = lean_obj_once(&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1, &l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_once, _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t v_sz_574_, size_t v_i_575_, lean_object* v_bs_576_){
_start:
{
uint8_t v___x_577_; 
v___x_577_ = lean_usize_dec_lt(v_i_575_, v_sz_574_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; 
v___x_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_578_, 0, v_bs_576_);
return v___x_578_;
}
else
{
lean_object* v_v_579_; lean_object* v___x_580_; 
v_v_579_ = lean_array_uget_borrowed(v_bs_576_, v_i_575_);
lean_inc(v_v_579_);
v___x_580_ = l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(v_v_579_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_dec_ref(v_bs_576_);
v_a_581_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_580_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v_bs_x27_591_; size_t v___x_592_; size_t v___x_593_; lean_object* v___x_594_; 
v_a_589_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_a_589_);
lean_dec_ref(v___x_580_);
v___x_590_ = lean_unsigned_to_nat(0u);
v_bs_x27_591_ = lean_array_uset(v_bs_576_, v_i_575_, v___x_590_);
v___x_592_ = ((size_t)1ULL);
v___x_593_ = lean_usize_add(v_i_575_, v___x_592_);
v___x_594_ = lean_array_uset(v_bs_x27_591_, v_i_575_, v_a_589_);
v_i_575_ = v___x_593_;
v_bs_576_ = v___x_594_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_596_, lean_object* v_i_597_, lean_object* v_bs_598_){
_start:
{
size_t v_sz_boxed_599_; size_t v_i_boxed_600_; lean_object* v_res_601_; 
v_sz_boxed_599_ = lean_unbox_usize(v_sz_596_);
lean_dec(v_sz_596_);
v_i_boxed_600_ = lean_unbox_usize(v_i_597_);
lean_dec(v_i_597_);
v_res_601_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_boxed_599_, v_i_boxed_600_, v_bs_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object* v_x_602_){
_start:
{
if (lean_obj_tag(v_x_602_) == 4)
{
lean_object* v_elems_603_; size_t v_sz_604_; size_t v___x_605_; lean_object* v___x_606_; 
v_elems_603_ = lean_ctor_get(v_x_602_, 0);
lean_inc_ref(v_elems_603_);
lean_dec_ref(v_x_602_);
v_sz_604_ = lean_array_size(v_elems_603_);
v___x_605_ = ((size_t)0ULL);
v___x_606_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_604_, v___x_605_, v_elems_603_);
return v___x_606_;
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_607_ = lean_obj_once(&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0, &l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0_once, _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0);
v___x_608_ = lean_unsigned_to_nat(80u);
v___x_609_ = l_Lean_Json_pretty(v_x_602_, v___x_608_);
v___x_610_ = lean_string_append(v___x_607_, v___x_609_);
lean_dec_ref(v___x_609_);
v___x_611_ = lean_obj_once(&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1, &l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_once, _init_l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1);
v___x_612_ = lean_string_append(v___x_610_, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_box(0);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object* v_x_616_){
_start:
{
if (lean_obj_tag(v_x_616_) == 0)
{
lean_object* v___x_617_; 
v___x_617_ = lean_obj_once(&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0, &l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_once, _init_l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0);
return v___x_617_;
}
else
{
lean_object* v___x_618_; 
v___x_618_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(v_x_616_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_635_; 
v_a_627_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_635_ == 0)
{
v___x_629_ = v___x_618_;
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_618_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v_a_627_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 0, v___x_631_);
v___x_633_ = v___x_629_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0(void){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_mk_string_unchecked("synthetic: ", 11, 11);
return v___x_636_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_mk_empty_array_with_capacity(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2(void){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = lean_mk_string_unchecked("log: ", 5, 5);
return v___x_639_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3(void){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_mk_string_unchecked("outputs: ", 9, 9);
return v___x_640_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_mk_empty_array_with_capacity(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5(void){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_mk_string_unchecked("inputs: ", 8, 8);
return v___x_643_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6(void){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = lean_mk_string_unchecked("property not found: depHash", 27, 27);
return v___x_644_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8(void){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = lean_mk_string_unchecked("depHash: ", 9, 9);
return v___x_647_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9(void){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = lean_mk_string_unchecked("invalid trace: expected string 'depHash' of decimal digits", 58, 58);
return v___x_648_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object* v_obj_651_){
_start:
{
uint64_t v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; uint8_t v_a_657_; uint64_t v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; uint64_t v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v_a_670_; uint64_t v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; uint64_t v___y_702_; lean_object* v___y_703_; lean_object* v_a_704_; uint64_t v___y_730_; lean_object* v___y_731_; uint64_t v___y_734_; lean_object* v_a_735_; uint64_t v___y_761_; uint64_t v_depHash_764_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__0, &l_Lake_BuildMetadata_toJson___closed__0_once, _init_l_Lake_BuildMetadata_toJson___closed__0);
v___x_790_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__3, &l_Lake_BuildMetadata_toJson___closed__3_once, _init_l_Lake_BuildMetadata_toJson___closed__3);
v___x_792_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; 
v___x_793_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7);
return v___x_793_;
}
else
{
lean_object* v_val_794_; lean_object* v___x_795_; 
v_val_794_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_val_794_);
lean_dec_ref(v___x_792_);
v___x_795_ = l_Lean_Json_getStr_x3f(v_val_794_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_805_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_805_ == 0)
{
v___x_798_ = v___x_795_;
v_isShared_799_ = v_isSharedCheck_805_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_795_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_805_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_800_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8);
v___x_801_ = lean_string_append(v___x_800_, v_a_796_);
lean_dec(v_a_796_);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_801_);
v___x_803_ = v___x_798_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
else
{
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
v_a_806_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_795_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_795_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 0);
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_814_);
lean_dec_ref(v___x_795_);
v___x_815_ = l_Lake_Hash_ofDecimal_x3f(v_a_814_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v___x_816_; 
v___x_816_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10);
return v___x_816_;
}
else
{
lean_object* v_val_817_; uint64_t v___x_818_; 
v_val_817_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_val_817_);
lean_dec_ref(v___x_815_);
v___x_818_ = lean_unbox_uint64(v_val_817_);
lean_dec(v_val_817_);
v_depHash_764_ = v___x_818_;
goto v___jp_763_;
}
}
}
}
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec_ref(v___x_790_);
v___x_819_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__3, &l_Lake_BuildMetadata_toJson___closed__3_once, _init_l_Lake_BuildMetadata_toJson___closed__3);
v___x_820_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_821_; 
v___x_821_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7);
return v___x_821_;
}
else
{
lean_object* v_val_822_; lean_object* v___x_823_; 
v_val_822_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_val_822_);
lean_dec_ref(v___x_820_);
v___x_823_ = l_Lake_Hash_fromJson_x3f(v_val_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_833_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_833_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_833_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_833_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_828_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8);
v___x_829_ = lean_string_append(v___x_828_, v_a_824_);
lean_dec(v_a_824_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_829_);
v___x_831_ = v___x_826_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
v_a_834_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_823_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_823_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
lean_ctor_set_tag(v___x_836_, 0);
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
else
{
lean_object* v_a_842_; uint64_t v___x_843_; 
v_a_842_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_842_);
lean_dec_ref(v___x_823_);
v___x_843_ = lean_unbox_uint64(v_a_842_);
lean_dec(v_a_842_);
v_depHash_764_ = v___x_843_;
goto v___jp_763_;
}
}
}
}
v___jp_652_:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_658_, 0, v___y_656_);
lean_ctor_set(v___x_658_, 1, v___y_654_);
lean_ctor_set(v___x_658_, 2, v___y_655_);
lean_ctor_set_uint64(v___x_658_, sizeof(void*)*3, v___y_653_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*3 + 8, v_a_657_);
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
return v___x_659_;
}
v___jp_660_:
{
uint8_t v___x_665_; 
v___x_665_ = 0;
v___y_653_ = v___y_661_;
v___y_654_ = v___y_662_;
v___y_655_ = v___y_664_;
v___y_656_ = v___y_663_;
v_a_657_ = v___x_665_;
goto v___jp_652_;
}
v___jp_666_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__7, &l_Lake_BuildMetadata_toJson___closed__7_once, _init_l_Lake_BuildMetadata_toJson___closed__7);
v___x_672_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
v___y_661_ = v___y_667_;
v___y_662_ = v___y_668_;
v___y_663_ = v___y_669_;
v___y_664_ = v_a_670_;
goto v___jp_660_;
}
else
{
lean_object* v_val_673_; lean_object* v___x_674_; 
v_val_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_val_673_);
lean_dec_ref(v___x_672_);
v___x_674_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_val_673_);
lean_dec(v_val_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v_a_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_684_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_679_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0);
v___x_680_ = lean_string_append(v___x_679_, v_a_675_);
lean_dec(v_a_675_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_680_);
v___x_682_ = v___x_677_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
else
{
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec_ref(v_a_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
v_a_685_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_674_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_674_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 0);
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
else
{
lean_object* v_a_693_; 
v_a_693_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_693_);
lean_dec_ref(v___x_674_);
if (lean_obj_tag(v_a_693_) == 0)
{
v___y_661_ = v___y_667_;
v___y_662_ = v___y_668_;
v___y_663_ = v___y_669_;
v___y_664_ = v_a_670_;
goto v___jp_660_;
}
else
{
lean_object* v_val_694_; uint8_t v___x_695_; 
v_val_694_ = lean_ctor_get(v_a_693_, 0);
lean_inc(v_val_694_);
lean_dec_ref(v_a_693_);
v___x_695_ = lean_unbox(v_val_694_);
lean_dec(v_val_694_);
v___y_653_ = v___y_667_;
v___y_654_ = v___y_668_;
v___y_655_ = v_a_670_;
v___y_656_ = v___y_669_;
v_a_657_ = v___x_695_;
goto v___jp_652_;
}
}
}
}
}
v___jp_696_:
{
lean_object* v___x_700_; 
v___x_700_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1);
v___y_667_ = v___y_697_;
v___y_668_ = v___y_698_;
v___y_669_ = v___y_699_;
v_a_670_ = v___x_700_;
goto v___jp_666_;
}
v___jp_701_:
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__6, &l_Lake_BuildMetadata_toJson___closed__6_once, _init_l_Lake_BuildMetadata_toJson___closed__6);
v___x_706_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_705_);
if (lean_obj_tag(v___x_706_) == 0)
{
v___y_697_ = v___y_702_;
v___y_698_ = v_a_704_;
v___y_699_ = v___y_703_;
goto v___jp_696_;
}
else
{
lean_object* v_val_707_; lean_object* v___x_708_; 
v_val_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_val_707_);
lean_dec_ref(v___x_706_);
v___x_708_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(v_val_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_a_704_);
lean_dec_ref(v___y_703_);
v_a_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_718_ == 0)
{
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_718_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_718_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_713_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2);
v___x_714_ = lean_string_append(v___x_713_, v_a_709_);
lean_dec(v_a_709_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_714_);
v___x_716_ = v___x_711_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec(v_a_704_);
lean_dec_ref(v___y_703_);
v_a_719_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_708_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_708_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 0);
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
else
{
lean_object* v_a_727_; 
v_a_727_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_727_);
lean_dec_ref(v___x_708_);
if (lean_obj_tag(v_a_727_) == 0)
{
v___y_697_ = v___y_702_;
v___y_698_ = v_a_704_;
v___y_699_ = v___y_703_;
goto v___jp_696_;
}
else
{
lean_object* v_val_728_; 
v_val_728_ = lean_ctor_get(v_a_727_, 0);
lean_inc(v_val_728_);
lean_dec_ref(v_a_727_);
v___y_667_ = v___y_702_;
v___y_668_ = v_a_704_;
v___y_669_ = v___y_703_;
v_a_670_ = v_val_728_;
goto v___jp_666_;
}
}
}
}
}
v___jp_729_:
{
lean_object* v___x_732_; 
v___x_732_ = lean_box(0);
v___y_702_ = v___y_730_;
v___y_703_ = v___y_731_;
v_a_704_ = v___x_732_;
goto v___jp_701_;
}
v___jp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__5, &l_Lake_BuildMetadata_toJson___closed__5_once, _init_l_Lake_BuildMetadata_toJson___closed__5);
v___x_737_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
v___y_730_ = v___y_734_;
v___y_731_ = v_a_735_;
goto v___jp_729_;
}
else
{
lean_object* v_val_738_; lean_object* v___x_739_; 
v_val_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_738_);
lean_dec_ref(v___x_737_);
v___x_739_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(v_val_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref(v_a_735_);
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_749_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_744_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3);
v___x_745_ = lean_string_append(v___x_744_, v_a_740_);
lean_dec(v_a_740_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_745_);
v___x_747_ = v___x_742_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
else
{
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_a_735_);
v_a_750_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_739_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_739_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
lean_ctor_set_tag(v___x_752_, 0);
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
lean_object* v_a_758_; 
v_a_758_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_758_);
lean_dec_ref(v___x_739_);
if (lean_obj_tag(v_a_758_) == 0)
{
v___y_730_ = v___y_734_;
v___y_731_ = v_a_735_;
goto v___jp_729_;
}
else
{
lean_object* v_val_759_; 
v_val_759_ = lean_ctor_get(v_a_758_, 0);
lean_inc(v_val_759_);
lean_dec_ref(v_a_758_);
v___y_702_ = v___y_734_;
v___y_703_ = v_a_735_;
v_a_704_ = v_val_759_;
goto v___jp_701_;
}
}
}
}
}
v___jp_760_:
{
lean_object* v___x_762_; 
v___x_762_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4);
v___y_734_ = v___y_761_;
v_a_735_ = v___x_762_;
goto v___jp_733_;
}
v___jp_763_:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__4, &l_Lake_BuildMetadata_toJson___closed__4_once, _init_l_Lake_BuildMetadata_toJson___closed__4);
v___x_766_ = l_Lake_JsonObject_getJson_x3f(v_obj_651_, v___x_765_);
if (lean_obj_tag(v___x_766_) == 0)
{
v___y_761_ = v_depHash_764_;
goto v___jp_760_;
}
else
{
lean_object* v_val_767_; lean_object* v___x_768_; 
v_val_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_val_767_);
lean_dec_ref(v___x_766_);
v___x_768_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(v_val_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_778_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_778_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_773_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5);
v___x_774_ = lean_string_append(v___x_773_, v_a_769_);
lean_dec(v_a_769_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_774_);
v___x_776_ = v___x_771_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_768_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_768_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 0);
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
else
{
lean_object* v_a_787_; 
v_a_787_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_787_);
lean_dec_ref(v___x_768_);
if (lean_obj_tag(v_a_787_) == 0)
{
v___y_761_ = v_depHash_764_;
goto v___jp_760_;
}
else
{
lean_object* v_val_788_; 
v_val_788_ = lean_ctor_get(v_a_787_, 0);
lean_inc(v_val_788_);
lean_dec_ref(v_a_787_);
v___y_734_ = v_depHash_764_;
v_a_735_ = v_val_788_;
goto v___jp_733_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object* v_obj_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_obj_844_);
lean_dec(v_obj_844_);
return v_res_845_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJson_x3f___closed__0(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_mk_string_unchecked("invalid trace stub: ", 20, 20);
return v___x_846_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJson_x3f___closed__1(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_mk_string_unchecked("unknown trace format: ", 22, 22);
return v___x_847_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJson_x3f___closed__2(void){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_mk_string_unchecked("invalid trace: ", 15, 15);
return v___x_848_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJson_x3f___closed__3(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_mk_string_unchecked("unknown trace format: expected JSON number or object", 52, 52);
return v___x_849_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_fromJson_x3f___closed__4(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_obj_once(&l_Lake_BuildMetadata_fromJson_x3f___closed__3, &l_Lake_BuildMetadata_fromJson_x3f___closed__3_once, _init_l_Lake_BuildMetadata_fromJson_x3f___closed__3);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object* v_json_852_){
_start:
{
switch(lean_obj_tag(v_json_852_))
{
case 2:
{
lean_object* v_n_853_; lean_object* v___x_854_; 
v_n_853_ = lean_ctor_get(v_json_852_, 0);
v___x_854_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_864_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_864_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_864_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_864_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_859_ = lean_obj_once(&l_Lake_BuildMetadata_fromJson_x3f___closed__0, &l_Lake_BuildMetadata_fromJson_x3f___closed__0_once, _init_l_Lake_BuildMetadata_fromJson_x3f___closed__0);
v___x_860_ = lean_string_append(v___x_859_, v_a_855_);
lean_dec(v_a_855_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_860_);
v___x_862_ = v___x_857_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_874_; 
v_a_865_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_874_ == 0)
{
v___x_867_ = v___x_854_;
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_854_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
uint64_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = lean_unbox_uint64(v_a_865_);
lean_dec(v_a_865_);
v___x_870_ = l_Lake_BuildMetadata_ofStub(v___x_869_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_870_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
case 5:
{
lean_object* v_kvPairs_875_; lean_object* v___x_876_; 
v_kvPairs_875_ = lean_ctor_get(v_json_852_, 0);
v___x_876_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_kvPairs_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_902_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_902_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_902_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_902_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__0, &l_Lake_BuildMetadata_toJson___closed__0_once, _init_l_Lake_BuildMetadata_toJson___closed__0);
v___x_888_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_875_, v___x_887_);
if (lean_obj_tag(v___x_888_) == 1)
{
lean_object* v_val_889_; 
v_val_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_val_889_);
lean_dec_ref(v___x_888_);
if (lean_obj_tag(v_val_889_) == 3)
{
lean_object* v_s_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_901_; 
v_s_890_ = lean_ctor_get(v_val_889_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v_val_889_);
if (v_isSharedCheck_901_ == 0)
{
v___x_892_ = v_val_889_;
v_isShared_893_ = v_isSharedCheck_901_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_s_890_);
lean_dec(v_val_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_901_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0, &l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0);
v___x_895_ = lean_string_dec_eq(v_s_890_, v___x_894_);
lean_dec_ref(v_s_890_);
if (v___x_895_ == 0)
{
lean_del_object(v___x_892_);
goto v___jp_881_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
lean_del_object(v___x_879_);
v___x_896_ = lean_obj_once(&l_Lake_BuildMetadata_fromJson_x3f___closed__2, &l_Lake_BuildMetadata_fromJson_x3f___closed__2_once, _init_l_Lake_BuildMetadata_fromJson_x3f___closed__2);
v___x_897_ = lean_string_append(v___x_896_, v_a_877_);
lean_dec(v_a_877_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 0);
lean_ctor_set(v___x_892_, 0, v___x_897_);
v___x_899_ = v___x_892_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_dec(v_val_889_);
goto v___jp_881_;
}
}
else
{
lean_dec(v___x_888_);
goto v___jp_881_;
}
v___jp_881_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_882_ = lean_obj_once(&l_Lake_BuildMetadata_fromJson_x3f___closed__1, &l_Lake_BuildMetadata_fromJson_x3f___closed__1_once, _init_l_Lake_BuildMetadata_fromJson_x3f___closed__1);
v___x_883_ = lean_string_append(v___x_882_, v_a_877_);
lean_dec(v_a_877_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_883_);
v___x_885_ = v___x_879_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
else
{
return v___x_876_;
}
}
default: 
{
lean_object* v___x_903_; 
v___x_903_ = lean_obj_once(&l_Lake_BuildMetadata_fromJson_x3f___closed__4, &l_Lake_BuildMetadata_fromJson_x3f___closed__4_once, _init_l_Lake_BuildMetadata_fromJson_x3f___closed__4);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object* v_json_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lake_BuildMetadata_fromJson_x3f(v_json_904_);
lean_dec(v_json_904_);
return v_res_905_;
}
}
static lean_object* _init_l_Lake_instFromJsonBuildMetadata___closed__0(void){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = lean_alloc_closure((void*)(l_Lake_BuildMetadata_fromJson_x3f___boxed), 1, 0);
return v___x_906_;
}
}
static lean_object* _init_l_Lake_instFromJsonBuildMetadata(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&l_Lake_instFromJsonBuildMetadata___closed__0, &l_Lake_instFromJsonBuildMetadata___closed__0_once, _init_l_Lake_instFromJsonBuildMetadata___closed__0);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object* v_contents_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lean_Json_parse(v_contents_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_919_; 
v_a_918_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_918_);
lean_dec_ref(v___x_909_);
v___x_919_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_918_);
lean_dec(v_a_918_);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t v_inputHash_920_, lean_object* v_outputs_921_){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; lean_object* v___x_925_; 
v___x_922_ = lean_obj_once(&l_Lake_BuildMetadata_ofStub___closed__0, &l_Lake_BuildMetadata_ofStub___closed__0_once, _init_l_Lake_BuildMetadata_ofStub___closed__0);
v___x_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_923_, 0, v_outputs_921_);
v___x_924_ = 1;
v___x_925_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_925_, 0, v___x_922_);
lean_ctor_set(v___x_925_, 1, v___x_923_);
lean_ctor_set(v___x_925_, 2, v___x_922_);
lean_ctor_set_uint64(v___x_925_, sizeof(void*)*3, v_inputHash_920_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*3 + 8, v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object* v_inputHash_926_, lean_object* v_outputs_927_){
_start:
{
uint64_t v_inputHash_boxed_928_; lean_object* v_res_929_; 
v_inputHash_boxed_928_ = lean_unbox_uint64(v_inputHash_926_);
lean_dec_ref(v_inputHash_926_);
v_res_929_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_boxed_928_, v_outputs_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object* v_as_930_, size_t v_i_931_, size_t v_stop_932_, lean_object* v_b_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = lean_usize_dec_eq(v_i_931_, v_stop_932_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___y_937_; lean_object* v_inputs_944_; uint64_t v_hash_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_935_ = lean_array_uget_borrowed(v_as_930_, v_i_931_);
v_inputs_944_ = lean_ctor_get(v___x_935_, 1);
v_hash_945_ = lean_ctor_get_uint64(v___x_935_, sizeof(void*)*3);
v___x_946_ = lean_array_get_size(v_inputs_944_);
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_nat_dec_eq(v___x_946_, v___x_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_944_);
v___x_950_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v___x_949_);
v___y_937_ = v___x_950_;
goto v___jp_936_;
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = l_Lake_lowerHexUInt64(v_hash_945_);
v___x_952_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
v___y_937_ = v___x_952_;
goto v___jp_936_;
}
v___jp_936_:
{
lean_object* v_caption_938_; lean_object* v___x_939_; lean_object* v___x_940_; size_t v___x_941_; size_t v___x_942_; 
v_caption_938_ = lean_ctor_get(v___x_935_, 0);
lean_inc_ref(v_caption_938_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v_caption_938_);
lean_ctor_set(v___x_939_, 1, v___y_937_);
v___x_940_ = lean_array_push(v_b_933_, v___x_939_);
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_i_931_, v___x_941_);
v_i_931_ = v___x_942_;
v_b_933_ = v___x_940_;
goto _start;
}
}
else
{
return v_b_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object* v_inputs_953_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4);
v___x_956_ = lean_array_get_size(v_inputs_953_);
v___x_957_ = lean_nat_dec_lt(v___x_954_, v___x_956_);
if (v___x_957_ == 0)
{
return v___x_955_;
}
else
{
uint8_t v___x_958_; 
v___x_958_ = lean_nat_dec_le(v___x_956_, v___x_956_);
if (v___x_958_ == 0)
{
if (v___x_957_ == 0)
{
return v___x_955_;
}
else
{
size_t v___x_959_; size_t v___x_960_; lean_object* v___x_961_; 
v___x_959_ = ((size_t)0ULL);
v___x_960_ = lean_usize_of_nat(v___x_956_);
v___x_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_953_, v___x_959_, v___x_960_, v___x_955_);
return v___x_961_;
}
}
else
{
size_t v___x_962_; size_t v___x_963_; lean_object* v___x_964_; 
v___x_962_ = ((size_t)0ULL);
v___x_963_ = lean_usize_of_nat(v___x_956_);
v___x_964_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_953_, v___x_962_, v___x_963_, v___x_955_);
return v___x_964_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object* v_inputs_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_965_);
lean_dec_ref(v_inputs_965_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object* v_as_967_, lean_object* v_i_968_, lean_object* v_stop_969_, lean_object* v_b_970_){
_start:
{
size_t v_i_boxed_971_; size_t v_stop_boxed_972_; lean_object* v_res_973_; 
v_i_boxed_971_ = lean_unbox_usize(v_i_968_);
lean_dec(v_i_968_);
v_stop_boxed_972_ = lean_unbox_usize(v_stop_969_);
lean_dec(v_stop_969_);
v_res_973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_as_967_, v_i_boxed_971_, v_stop_boxed_972_, v_b_970_);
lean_dec_ref(v_as_967_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object* v_depTrace_974_, lean_object* v_outputs_975_, lean_object* v_log_976_){
_start:
{
lean_object* v_inputs_977_; uint64_t v_hash_978_; lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; lean_object* v___x_982_; 
v_inputs_977_ = lean_ctor_get(v_depTrace_974_, 1);
v_hash_978_ = lean_ctor_get_uint64(v_depTrace_974_, sizeof(void*)*3);
v___x_979_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_977_);
v___x_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_980_, 0, v_outputs_975_);
v___x_981_ = 0;
v___x_982_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_982_, 0, v___x_979_);
lean_ctor_set(v___x_982_, 1, v___x_980_);
lean_ctor_set(v___x_982_, 2, v_log_976_);
lean_ctor_set_uint64(v___x_982_, sizeof(void*)*3, v_hash_978_);
lean_ctor_set_uint8(v___x_982_, sizeof(void*)*3 + 8, v___x_981_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object* v_depTrace_983_, lean_object* v_outputs_984_, lean_object* v_log_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_983_, v_outputs_984_, v_log_985_);
lean_dec_ref(v_depTrace_983_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object* v_inst_987_, lean_object* v_depTrace_988_, lean_object* v_outputs_989_, lean_object* v_log_990_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_apply_1(v_inst_987_, v_outputs_989_);
v___x_992_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_988_, v___x_991_, v_log_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object* v_inst_993_, lean_object* v_depTrace_994_, lean_object* v_outputs_995_, lean_object* v_log_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lake_BuildMetadata_ofBuild___redArg(v_inst_993_, v_depTrace_994_, v_outputs_995_, v_log_996_);
lean_dec_ref(v_depTrace_994_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object* v_00_u03b1_998_, lean_object* v_inst_999_, lean_object* v_depTrace_1000_, lean_object* v_outputs_1001_, lean_object* v_log_1002_){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_apply_1(v_inst_999_, v_outputs_1001_);
v___x_1004_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1000_, v___x_1003_, v_log_1002_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object* v_00_u03b1_1005_, lean_object* v_inst_1006_, lean_object* v_depTrace_1007_, lean_object* v_outputs_1008_, lean_object* v_log_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lake_BuildMetadata_ofBuild(v_00_u03b1_1005_, v_inst_1006_, v_depTrace_1007_, v_outputs_1008_, v_log_1009_);
lean_dec_ref(v_depTrace_1007_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object* v_x_1011_){
_start:
{
switch(lean_obj_tag(v_x_1011_))
{
case 0:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_unsigned_to_nat(0u);
return v___x_1012_;
}
case 1:
{
lean_object* v___x_1013_; 
v___x_1013_ = lean_unsigned_to_nat(1u);
return v___x_1013_;
}
default: 
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_unsigned_to_nat(2u);
return v___x_1014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object* v_x_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lake_SavedTrace_ctorIdx(v_x_1015_);
lean_dec(v_x_1015_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object* v_t_1017_, lean_object* v_k_1018_){
_start:
{
if (lean_obj_tag(v_t_1017_) == 2)
{
lean_object* v_data_1019_; lean_object* v___x_1020_; 
v_data_1019_ = lean_ctor_get(v_t_1017_, 0);
lean_inc_ref(v_data_1019_);
lean_dec_ref(v_t_1017_);
v___x_1020_ = lean_apply_1(v_k_1018_, v_data_1019_);
return v___x_1020_;
}
else
{
lean_dec(v_t_1017_);
return v_k_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object* v_motive_1021_, lean_object* v_ctorIdx_1022_, lean_object* v_t_1023_, lean_object* v_h_1024_, lean_object* v_k_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1023_, v_k_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object* v_motive_1027_, lean_object* v_ctorIdx_1028_, lean_object* v_t_1029_, lean_object* v_h_1030_, lean_object* v_k_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lake_SavedTrace_ctorElim(v_motive_1027_, v_ctorIdx_1028_, v_t_1029_, v_h_1030_, v_k_1031_);
lean_dec(v_ctorIdx_1028_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object* v_t_1033_, lean_object* v_missing_1034_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1033_, v_missing_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object* v_motive_1036_, lean_object* v_t_1037_, lean_object* v_h_1038_, lean_object* v_missing_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1037_, v_missing_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object* v_t_1041_, lean_object* v_invalid_1042_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1041_, v_invalid_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object* v_motive_1044_, lean_object* v_t_1045_, lean_object* v_h_1046_, lean_object* v_invalid_1047_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1045_, v_invalid_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object* v_t_1049_, lean_object* v_ok_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1049_, v_ok_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object* v_motive_1052_, lean_object* v_t_1053_, lean_object* v_h_1054_, lean_object* v_ok_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1053_, v_ok_1055_);
return v___x_1056_;
}
}
static lean_object* _init_l_Lake_readTraceFile___closed__0(void){
_start:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_mk_string_unchecked(": read failed: ", 15, 15);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object* v_path_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_IO_FS_readFile(v_path_1058_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v_a_1064_; lean_object* v___x_1073_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref(v___x_1061_);
v___x_1073_ = l_Lean_Json_parse(v_a_1062_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref(v___x_1073_);
v_a_1064_ = v_a_1074_;
goto v___jp_1063_;
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1076_; 
v_a_1075_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1075_);
lean_dec_ref(v___x_1073_);
v___x_1076_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_1075_);
lean_dec(v_a_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref(v___x_1076_);
v_a_1064_ = v_a_1077_;
goto v___jp_1063_;
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v_path_1058_);
v_a_1078_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1080_ = v___x_1076_;
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1076_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
lean_ctor_set_tag(v___x_1080_, 2);
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
lean_ctor_set(v___x_1084_, 1, v_a_1059_);
return v___x_1084_;
}
}
}
}
v___jp_1063_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1065_ = lean_obj_once(&l_Lake_addPureTrace___redArg___closed__0, &l_Lake_addPureTrace___redArg___closed__0_once, _init_l_Lake_addPureTrace___redArg___closed__0);
v___x_1066_ = lean_string_append(v_path_1058_, v___x_1065_);
v___x_1067_ = lean_string_append(v___x_1066_, v_a_1064_);
lean_dec_ref(v_a_1064_);
v___x_1068_ = 2;
v___x_1069_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1068_);
v___x_1070_ = lean_array_push(v_a_1059_, v___x_1069_);
v___x_1071_ = lean_box(1);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___x_1070_);
return v___x_1072_;
}
}
else
{
lean_object* v_a_1087_; 
v_a_1087_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1087_);
lean_dec_ref(v___x_1061_);
if (lean_obj_tag(v_a_1087_) == 11)
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_dec_ref(v_a_1087_);
lean_dec_ref(v_path_1058_);
v___x_1088_ = lean_box(0);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v_a_1059_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1090_ = lean_obj_once(&l_Lake_readTraceFile___closed__0, &l_Lake_readTraceFile___closed__0_once, _init_l_Lake_readTraceFile___closed__0);
v___x_1091_ = lean_string_append(v_path_1058_, v___x_1090_);
v___x_1092_ = lean_io_error_to_string(v_a_1087_);
v___x_1093_ = lean_string_append(v___x_1091_, v___x_1092_);
lean_dec_ref(v___x_1092_);
v___x_1094_ = 3;
v___x_1095_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set_uint8(v___x_1095_, sizeof(void*)*1, v___x_1094_);
v___x_1096_ = lean_array_get_size(v_a_1059_);
v___x_1097_ = lean_array_push(v_a_1059_, v___x_1095_);
v___x_1098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
return v___x_1098_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object* v_path_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lake_readTraceFile(v_path_1099_, v_a_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object* v_path_1103_, lean_object* v_data_1104_){
_start:
{
lean_object* v___x_1106_; 
lean_inc_ref(v_path_1103_);
v___x_1106_ = l_Lake_createParentDirs(v_path_1103_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_dec_ref(v___x_1106_);
v___x_1107_ = l_Lake_BuildMetadata_toJson(v_data_1104_);
v___x_1108_ = lean_unsigned_to_nat(80u);
v___x_1109_ = l_Lean_Json_pretty(v___x_1107_, v___x_1108_);
v___x_1110_ = l_IO_FS_writeFile(v_path_1103_, v___x_1109_);
lean_dec_ref(v___x_1109_);
lean_dec_ref(v_path_1103_);
return v___x_1110_;
}
else
{
lean_dec_ref(v_data_1104_);
lean_dec_ref(v_path_1103_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object* v_path_1111_, lean_object* v_data_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lake_BuildMetadata_writeFile(v_path_1111_, v_data_1112_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object* v_path_1115_, uint64_t v_inputHash_1116_, lean_object* v_outputs_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_1116_, v_outputs_1117_);
v___x_1120_ = l_Lake_BuildMetadata_writeFile(v_path_1115_, v___x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object* v_path_1121_, lean_object* v_inputHash_1122_, lean_object* v_outputs_1123_, lean_object* v_a_1124_){
_start:
{
uint64_t v_inputHash_boxed_1125_; lean_object* v_res_1126_; 
v_inputHash_boxed_1125_ = lean_unbox_uint64(v_inputHash_1122_);
lean_dec_ref(v_inputHash_1122_);
v_res_1126_ = l_Lake_writeFetchTrace(v_path_1121_, v_inputHash_boxed_1125_, v_outputs_1123_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object* v_inst_1127_, lean_object* v_path_1128_, lean_object* v_depTrace_1129_, lean_object* v_outputs_1130_, lean_object* v_log_1131_){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_apply_1(v_inst_1127_, v_outputs_1130_);
v___x_1134_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1129_, v___x_1133_, v_log_1131_);
v___x_1135_ = l_Lake_BuildMetadata_writeFile(v_path_1128_, v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object* v_inst_1136_, lean_object* v_path_1137_, lean_object* v_depTrace_1138_, lean_object* v_outputs_1139_, lean_object* v_log_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lake_writeBuildTrace___redArg(v_inst_1136_, v_path_1137_, v_depTrace_1138_, v_outputs_1139_, v_log_1140_);
lean_dec_ref(v_depTrace_1138_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object* v_00_u03b1_1143_, lean_object* v_inst_1144_, lean_object* v_path_1145_, lean_object* v_depTrace_1146_, lean_object* v_outputs_1147_, lean_object* v_log_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1150_ = lean_apply_1(v_inst_1144_, v_outputs_1147_);
v___x_1151_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1146_, v___x_1150_, v_log_1148_);
v___x_1152_ = l_Lake_BuildMetadata_writeFile(v_path_1145_, v___x_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object* v_00_u03b1_1153_, lean_object* v_inst_1154_, lean_object* v_path_1155_, lean_object* v_depTrace_1156_, lean_object* v_outputs_1157_, lean_object* v_log_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lake_writeBuildTrace(v_00_u03b1_1153_, v_inst_1154_, v_path_1155_, v_depTrace_1156_, v_outputs_1157_, v_log_1158_);
lean_dec_ref(v_depTrace_1156_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t v_x_1161_){
_start:
{
switch(v_x_1161_)
{
case 0:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_unsigned_to_nat(0u);
return v___x_1162_;
}
case 1:
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
return v___x_1163_;
}
default: 
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_unsigned_to_nat(2u);
return v___x_1164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object* v_x_1165_){
_start:
{
uint8_t v_x_boxed_1166_; lean_object* v_res_1167_; 
v_x_boxed_1166_ = lean_unbox(v_x_1165_);
v_res_1167_ = l_Lake_OutputStatus_ctorIdx(v_x_boxed_1166_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx(uint8_t v_x_1168_){
_start:
{
lean_object* v___x_1169_; 
v___x_1169_ = l_Lake_OutputStatus_ctorIdx(v_x_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx___boxed(lean_object* v_x_1170_){
_start:
{
uint8_t v_x_4__boxed_1171_; lean_object* v_res_1172_; 
v_x_4__boxed_1171_ = lean_unbox(v_x_1170_);
v_res_1172_ = l_Lake_OutputStatus_toCtorIdx(v_x_4__boxed_1171_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object* v_k_1173_){
_start:
{
lean_inc(v_k_1173_);
return v_k_1173_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object* v_k_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lake_OutputStatus_ctorElim___redArg(v_k_1174_);
lean_dec(v_k_1174_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object* v_motive_1176_, lean_object* v_ctorIdx_1177_, uint8_t v_t_1178_, lean_object* v_h_1179_, lean_object* v_k_1180_){
_start:
{
lean_inc(v_k_1180_);
return v_k_1180_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object* v_motive_1181_, lean_object* v_ctorIdx_1182_, lean_object* v_t_1183_, lean_object* v_h_1184_, lean_object* v_k_1185_){
_start:
{
uint8_t v_t_boxed_1186_; lean_object* v_res_1187_; 
v_t_boxed_1186_ = lean_unbox(v_t_1183_);
v_res_1187_ = l_Lake_OutputStatus_ctorElim(v_motive_1181_, v_ctorIdx_1182_, v_t_boxed_1186_, v_h_1184_, v_k_1185_);
lean_dec(v_k_1185_);
lean_dec(v_ctorIdx_1182_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object* v_outOfDate_1188_){
_start:
{
lean_inc(v_outOfDate_1188_);
return v_outOfDate_1188_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object* v_outOfDate_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lake_OutputStatus_outOfDate_elim___redArg(v_outOfDate_1189_);
lean_dec(v_outOfDate_1189_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object* v_motive_1191_, uint8_t v_t_1192_, lean_object* v_h_1193_, lean_object* v_outOfDate_1194_){
_start:
{
lean_inc(v_outOfDate_1194_);
return v_outOfDate_1194_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object* v_motive_1195_, lean_object* v_t_1196_, lean_object* v_h_1197_, lean_object* v_outOfDate_1198_){
_start:
{
uint8_t v_t_boxed_1199_; lean_object* v_res_1200_; 
v_t_boxed_1199_ = lean_unbox(v_t_1196_);
v_res_1200_ = l_Lake_OutputStatus_outOfDate_elim(v_motive_1195_, v_t_boxed_1199_, v_h_1197_, v_outOfDate_1198_);
lean_dec(v_outOfDate_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object* v_mtimeUpToDate_1201_){
_start:
{
lean_inc(v_mtimeUpToDate_1201_);
return v_mtimeUpToDate_1201_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object* v_mtimeUpToDate_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(v_mtimeUpToDate_1202_);
lean_dec(v_mtimeUpToDate_1202_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object* v_motive_1204_, uint8_t v_t_1205_, lean_object* v_h_1206_, lean_object* v_mtimeUpToDate_1207_){
_start:
{
lean_inc(v_mtimeUpToDate_1207_);
return v_mtimeUpToDate_1207_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object* v_motive_1208_, lean_object* v_t_1209_, lean_object* v_h_1210_, lean_object* v_mtimeUpToDate_1211_){
_start:
{
uint8_t v_t_boxed_1212_; lean_object* v_res_1213_; 
v_t_boxed_1212_ = lean_unbox(v_t_1209_);
v_res_1213_ = l_Lake_OutputStatus_mtimeUpToDate_elim(v_motive_1208_, v_t_boxed_1212_, v_h_1210_, v_mtimeUpToDate_1211_);
lean_dec(v_mtimeUpToDate_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object* v_hashUpToDate_1214_){
_start:
{
lean_inc(v_hashUpToDate_1214_);
return v_hashUpToDate_1214_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object* v_hashUpToDate_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lake_OutputStatus_hashUpToDate_elim___redArg(v_hashUpToDate_1215_);
lean_dec(v_hashUpToDate_1215_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object* v_motive_1217_, uint8_t v_t_1218_, lean_object* v_h_1219_, lean_object* v_hashUpToDate_1220_){
_start:
{
lean_inc(v_hashUpToDate_1220_);
return v_hashUpToDate_1220_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object* v_motive_1221_, lean_object* v_t_1222_, lean_object* v_h_1223_, lean_object* v_hashUpToDate_1224_){
_start:
{
uint8_t v_t_boxed_1225_; lean_object* v_res_1226_; 
v_t_boxed_1225_ = lean_unbox(v_t_1222_);
v_res_1226_ = l_Lake_OutputStatus_hashUpToDate_elim(v_motive_1221_, v_t_boxed_1225_, v_h_1223_, v_hashUpToDate_1224_);
lean_dec(v_hashUpToDate_1224_);
return v_res_1226_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object* v_n_1227_){
_start:
{
lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = lean_nat_dec_le(v_n_1227_, v___x_1228_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; uint8_t v___x_1231_; 
v___x_1230_ = lean_unsigned_to_nat(1u);
v___x_1231_ = lean_nat_dec_le(v_n_1227_, v___x_1230_);
if (v___x_1231_ == 0)
{
uint8_t v___x_1232_; 
v___x_1232_ = 2;
return v___x_1232_;
}
else
{
uint8_t v___x_1233_; 
v___x_1233_ = 1;
return v___x_1233_;
}
}
else
{
uint8_t v___x_1234_; 
v___x_1234_ = 0;
return v___x_1234_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object* v_n_1235_){
_start:
{
uint8_t v_res_1236_; lean_object* v_r_1237_; 
v_res_1236_ = l_Lake_OutputStatus_ofNat(v_n_1235_);
lean_dec(v_n_1235_);
v_r_1237_ = lean_box(v_res_1236_);
return v_r_1237_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t v_x_1238_, uint8_t v_y_1239_){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1240_ = l_Lake_OutputStatus_ctorIdx(v_x_1238_);
v___x_1241_ = l_Lake_OutputStatus_ctorIdx(v_y_1239_);
v___x_1242_ = lean_nat_dec_eq(v___x_1240_, v___x_1241_);
lean_dec(v___x_1241_);
lean_dec(v___x_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object* v_x_1243_, lean_object* v_y_1244_){
_start:
{
uint8_t v_x_13__boxed_1245_; uint8_t v_y_14__boxed_1246_; uint8_t v_res_1247_; lean_object* v_r_1248_; 
v_x_13__boxed_1245_ = lean_unbox(v_x_1243_);
v_y_14__boxed_1246_ = lean_unbox(v_y_1244_);
v_res_1247_ = l_Lake_instDecidableEqOutputStatus(v_x_13__boxed_1245_, v_y_14__boxed_1246_);
v_r_1248_ = lean_box(v_res_1247_);
return v_r_1248_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t v_upToDate_1249_){
_start:
{
if (v_upToDate_1249_ == 0)
{
uint8_t v___x_1250_; 
v___x_1250_ = 0;
return v___x_1250_;
}
else
{
uint8_t v___x_1251_; 
v___x_1251_ = 2;
return v___x_1251_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object* v_upToDate_1252_){
_start:
{
uint8_t v_upToDate_boxed_1253_; uint8_t v_res_1254_; lean_object* v_r_1255_; 
v_upToDate_boxed_1253_ = lean_unbox(v_upToDate_1252_);
v_res_1254_ = l_Lake_OutputStatus_ofHashCheck(v_upToDate_boxed_1253_);
v_r_1255_ = lean_box(v_res_1254_);
return v_r_1255_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t v_upToDate_1256_){
_start:
{
if (v_upToDate_1256_ == 0)
{
uint8_t v___x_1257_; 
v___x_1257_ = 0;
return v___x_1257_;
}
else
{
uint8_t v___x_1258_; 
v___x_1258_ = 1;
return v___x_1258_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object* v_upToDate_1259_){
_start:
{
uint8_t v_upToDate_boxed_1260_; uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_upToDate_boxed_1260_ = lean_unbox(v_upToDate_1259_);
v_res_1261_ = l_Lake_OutputStatus_ofMTimeCheck(v_upToDate_boxed_1260_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t v_status_1263_){
_start:
{
uint8_t v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = 0;
v___x_1265_ = l_Lake_instDecidableEqOutputStatus(v_status_1263_, v___x_1264_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = 1;
return v___x_1266_;
}
else
{
uint8_t v___x_1267_; 
v___x_1267_ = 0;
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object* v_status_1268_){
_start:
{
uint8_t v_status_boxed_1269_; uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_status_boxed_1269_ = lean_unbox(v_status_1268_);
v_res_1270_ = l_Lake_OutputStatus_isUpToDate(v_status_boxed_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t v_status_1272_){
_start:
{
uint8_t v___x_1273_; uint8_t v___x_1274_; 
v___x_1273_ = 1;
v___x_1274_ = l_Lake_instDecidableEqOutputStatus(v_status_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
uint8_t v___x_1275_; 
v___x_1275_ = 1;
return v___x_1275_;
}
else
{
uint8_t v___x_1276_; 
v___x_1276_ = 0;
return v___x_1276_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object* v_status_1277_){
_start:
{
uint8_t v_status_boxed_1278_; uint8_t v_res_1279_; lean_object* v_r_1280_; 
v_status_boxed_1278_ = lean_unbox(v_status_1277_);
v_res_1279_ = l_Lake_OutputStatus_isCacheable(v_status_boxed_1278_);
v_r_1280_ = lean_box(v_res_1279_);
return v_r_1280_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___f_1282_; 
v___x_1281_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_1282_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1282_, 0, v___x_1281_);
return v___f_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object* v_inst_1283_, lean_object* v_inst_1284_, lean_object* v_info_1285_, lean_object* v_depTrace_1286_, lean_object* v_depHash_1287_, lean_object* v_oldTrace_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
uint64_t v_hash_1292_; lean_object* v___f_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; 
v_hash_1292_ = lean_ctor_get_uint64(v_depTrace_1286_, sizeof(void*)*3);
v___f_1293_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0);
v___x_1294_ = lean_box_uint64(v_hash_1292_);
v___x_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
v___x_1296_ = l_Option_instBEq_beq___redArg(v___f_1293_, v___x_1295_, v_depHash_1287_);
if (v___x_1296_ == 0)
{
lean_object* v_toBuildConfig_1297_; uint8_t v_oldMode_1298_; 
lean_dec_ref(v_inst_1283_);
v_toBuildConfig_1297_ = lean_ctor_get(v_a_1289_, 0);
v_oldMode_1298_ = lean_ctor_get_uint8(v_toBuildConfig_1297_, sizeof(void*)*2);
if (v_oldMode_1298_ == 0)
{
uint8_t v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec(v_info_1285_);
lean_dec_ref(v_inst_1284_);
v___x_1299_ = 0;
v___x_1300_ = lean_box(v___x_1299_);
v___x_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v_a_1290_);
return v___x_1301_;
}
else
{
uint8_t v___x_1302_; 
v___x_1302_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1284_, v_info_1285_, v_oldTrace_1288_);
if (v___x_1302_ == 0)
{
uint8_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = 0;
v___x_1304_ = lean_box(v___x_1303_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v_a_1290_);
return v___x_1305_;
}
else
{
uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = 1;
v___x_1307_ = lean_box(v___x_1306_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v_a_1290_);
return v___x_1308_;
}
}
}
else
{
lean_object* v___x_1309_; uint8_t v___x_1310_; 
lean_dec_ref(v_inst_1284_);
v___x_1309_ = lean_apply_2(v_inst_1283_, v_info_1285_, lean_box(0));
v___x_1310_ = lean_unbox(v___x_1309_);
if (v___x_1310_ == 0)
{
uint8_t v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = 0;
v___x_1312_ = lean_box(v___x_1311_);
v___x_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v_a_1290_);
return v___x_1313_;
}
else
{
uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = 2;
v___x_1315_ = lean_box(v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v_a_1290_);
return v___x_1316_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_info_1319_, lean_object* v_depTrace_1320_, lean_object* v_depHash_1321_, lean_object* v_oldTrace_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1317_, v_inst_1318_, v_info_1319_, v_depTrace_1320_, v_depHash_1321_, v_oldTrace_1322_, v_a_1323_, v_a_1324_);
lean_dec_ref(v_a_1323_);
lean_dec_ref(v_oldTrace_1322_);
lean_dec_ref(v_depTrace_1320_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object* v_00_u03b9_1327_, lean_object* v_inst_1328_, lean_object* v_inst_1329_, lean_object* v_info_1330_, lean_object* v_depTrace_1331_, lean_object* v_depHash_1332_, lean_object* v_oldTrace_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1328_, v_inst_1329_, v_info_1330_, v_depTrace_1331_, v_depHash_1332_, v_oldTrace_1333_, v_a_1338_, v_a_1339_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object* v_00_u03b9_1342_, lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_info_1345_, lean_object* v_depTrace_1346_, lean_object* v_depHash_1347_, lean_object* v_oldTrace_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(v_00_u03b9_1342_, v_inst_1343_, v_inst_1344_, v_info_1345_, v_depTrace_1346_, v_depHash_1347_, v_oldTrace_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_);
lean_dec_ref(v_a_1353_);
lean_dec(v_a_1352_);
lean_dec(v_a_1351_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_oldTrace_1348_);
lean_dec_ref(v_depTrace_1346_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object* v_inst_1357_, lean_object* v_inst_1358_, lean_object* v_info_1359_, lean_object* v_depTrace_1360_, lean_object* v_depHash_1361_, lean_object* v_oldTrace_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
lean_object* v___x_1366_; lean_object* v_a_1367_; lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1385_; 
v___x_1366_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1357_, v_inst_1358_, v_info_1359_, v_depTrace_1360_, v_depHash_1361_, v_oldTrace_1362_, v_a_1363_, v_a_1364_);
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_a_1368_ = lean_ctor_get(v___x_1366_, 1);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1370_ = v___x_1366_;
v_isShared_1371_ = v_isSharedCheck_1385_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1385_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
uint8_t v___x_1372_; uint8_t v___x_1373_; uint8_t v___x_1374_; 
v___x_1372_ = 0;
v___x_1373_ = lean_unbox(v_a_1367_);
lean_dec(v_a_1367_);
v___x_1374_ = l_Lake_instDecidableEqOutputStatus(v___x_1373_, v___x_1372_);
if (v___x_1374_ == 0)
{
uint8_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1378_; 
v___x_1375_ = 1;
v___x_1376_ = lean_box(v___x_1375_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1376_);
v___x_1378_ = v___x_1370_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_a_1368_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
else
{
uint8_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = 0;
v___x_1381_ = lean_box(v___x_1380_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1381_);
v___x_1383_ = v___x_1370_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_a_1368_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object* v_inst_1386_, lean_object* v_inst_1387_, lean_object* v_info_1388_, lean_object* v_depTrace_1389_, lean_object* v_depHash_1390_, lean_object* v_oldTrace_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lake_checkHashUpToDate___redArg(v_inst_1386_, v_inst_1387_, v_info_1388_, v_depTrace_1389_, v_depHash_1390_, v_oldTrace_1391_, v_a_1392_, v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec_ref(v_oldTrace_1391_);
lean_dec_ref(v_depTrace_1389_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object* v_00_u03b9_1396_, lean_object* v_inst_1397_, lean_object* v_inst_1398_, lean_object* v_info_1399_, lean_object* v_depTrace_1400_, lean_object* v_depHash_1401_, lean_object* v_oldTrace_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v___x_1410_; lean_object* v_a_1411_; lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1429_; 
v___x_1410_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1397_, v_inst_1398_, v_info_1399_, v_depTrace_1400_, v_depHash_1401_, v_oldTrace_1402_, v_a_1407_, v_a_1408_);
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_a_1412_ = lean_ctor_get(v___x_1410_, 1);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1414_ = v___x_1410_;
v_isShared_1415_ = v_isSharedCheck_1429_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1429_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
uint8_t v___x_1416_; uint8_t v___x_1417_; uint8_t v___x_1418_; 
v___x_1416_ = 0;
v___x_1417_ = lean_unbox(v_a_1411_);
lean_dec(v_a_1411_);
v___x_1418_ = l_Lake_instDecidableEqOutputStatus(v___x_1417_, v___x_1416_);
if (v___x_1418_ == 0)
{
uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1419_ = 1;
v___x_1420_ = lean_box(v___x_1419_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 0, v___x_1420_);
v___x_1422_ = v___x_1414_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_a_1412_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
else
{
uint8_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = 0;
v___x_1425_ = lean_box(v___x_1424_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 0, v___x_1425_);
v___x_1427_ = v___x_1414_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v_a_1412_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object* v_00_u03b9_1430_, lean_object* v_inst_1431_, lean_object* v_inst_1432_, lean_object* v_info_1433_, lean_object* v_depTrace_1434_, lean_object* v_depHash_1435_, lean_object* v_oldTrace_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lake_checkHashUpToDate(v_00_u03b9_1430_, v_inst_1431_, v_inst_1432_, v_info_1433_, v_depTrace_1434_, v_depHash_1435_, v_oldTrace_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec(v_a_1440_);
lean_dec(v_a_1439_);
lean_dec(v_a_1438_);
lean_dec_ref(v_a_1437_);
lean_dec_ref(v_oldTrace_1436_);
lean_dec_ref(v_depTrace_1434_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object* v_as_1445_, size_t v_i_1446_, size_t v_stop_1447_, lean_object* v_b_1448_, lean_object* v___y_1449_){
_start:
{
uint8_t v___x_1451_; 
v___x_1451_ = lean_usize_dec_eq(v_i_1446_, v_stop_1447_);
if (v___x_1451_ == 0)
{
lean_object* v_log_1452_; uint8_t v_action_1453_; uint8_t v_wantsRebuild_1454_; lean_object* v_trace_1455_; lean_object* v_buildTime_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1469_; 
v_log_1452_ = lean_ctor_get(v___y_1449_, 0);
v_action_1453_ = lean_ctor_get_uint8(v___y_1449_, sizeof(void*)*3);
v_wantsRebuild_1454_ = lean_ctor_get_uint8(v___y_1449_, sizeof(void*)*3 + 1);
v_trace_1455_ = lean_ctor_get(v___y_1449_, 1);
v_buildTime_1456_ = lean_ctor_get(v___y_1449_, 2);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___y_1449_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1458_ = v___y_1449_;
v_isShared_1459_ = v_isSharedCheck_1469_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_buildTime_1456_);
lean_inc(v_trace_1455_);
lean_inc(v_log_1452_);
lean_dec(v___y_1449_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1469_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1464_; 
v___x_1460_ = lean_array_uget_borrowed(v_as_1445_, v_i_1446_);
v___x_1461_ = lean_box(0);
lean_inc(v___x_1460_);
v___x_1462_ = lean_array_push(v_log_1452_, v___x_1460_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 0, v___x_1462_);
v___x_1464_ = v___x_1458_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_trace_1455_);
lean_ctor_set(v_reuseFailAlloc_1468_, 2, v_buildTime_1456_);
lean_ctor_set_uint8(v_reuseFailAlloc_1468_, sizeof(void*)*3, v_action_1453_);
lean_ctor_set_uint8(v_reuseFailAlloc_1468_, sizeof(void*)*3 + 1, v_wantsRebuild_1454_);
v___x_1464_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
size_t v___x_1465_; size_t v___x_1466_; 
v___x_1465_ = ((size_t)1ULL);
v___x_1466_ = lean_usize_add(v_i_1446_, v___x_1465_);
v_i_1446_ = v___x_1466_;
v_b_1448_ = v___x_1461_;
v___y_1449_ = v___x_1464_;
goto _start;
}
}
}
else
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_b_1448_);
lean_ctor_set(v___x_1470_, 1, v___y_1449_);
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object* v_as_1471_, lean_object* v_i_1472_, lean_object* v_stop_1473_, lean_object* v_b_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
size_t v_i_boxed_1477_; size_t v_stop_boxed_1478_; lean_object* v_res_1479_; 
v_i_boxed_1477_ = lean_unbox_usize(v_i_1472_);
lean_dec(v_i_1472_);
v_stop_boxed_1478_ = lean_unbox_usize(v_stop_1473_);
lean_dec(v_stop_1473_);
v_res_1479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1471_, v_i_boxed_1477_, v_stop_boxed_1478_, v_b_1474_, v___y_1475_);
lean_dec_ref(v_as_1471_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object* v_log_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1488_ = lean_unsigned_to_nat(0u);
v___x_1489_ = lean_array_get_size(v_log_1480_);
v___x_1490_ = lean_box(0);
v___x_1491_ = lean_nat_dec_lt(v___x_1488_, v___x_1489_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v_a_1486_);
return v___x_1492_;
}
else
{
uint8_t v___x_1493_; 
v___x_1493_ = lean_nat_dec_le(v___x_1489_, v___x_1489_);
if (v___x_1493_ == 0)
{
if (v___x_1491_ == 0)
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1490_);
lean_ctor_set(v___x_1494_, 1, v_a_1486_);
return v___x_1494_;
}
else
{
size_t v___x_1495_; size_t v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = ((size_t)0ULL);
v___x_1496_ = lean_usize_of_nat(v___x_1489_);
v___x_1497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1480_, v___x_1495_, v___x_1496_, v___x_1490_, v_a_1486_);
return v___x_1497_;
}
}
else
{
size_t v___x_1498_; size_t v___x_1499_; lean_object* v___x_1500_; 
v___x_1498_ = ((size_t)0ULL);
v___x_1499_ = lean_usize_of_nat(v___x_1489_);
v___x_1500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1480_, v___x_1498_, v___x_1499_, v___x_1490_, v_a_1486_);
return v___x_1500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object* v_log_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_);
lean_dec_ref(v_a_1506_);
lean_dec(v_a_1505_);
lean_dec(v_a_1504_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec_ref(v_log_1501_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object* v_as_1510_, size_t v_i_1511_, size_t v_stop_1512_, lean_object* v_b_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1510_, v_i_1511_, v_stop_1512_, v_b_1513_, v___y_1519_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object* v_as_1522_, lean_object* v_i_1523_, lean_object* v_stop_1524_, lean_object* v_b_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
size_t v_i_boxed_1533_; size_t v_stop_boxed_1534_; lean_object* v_res_1535_; 
v_i_boxed_1533_ = lean_unbox_usize(v_i_1523_);
lean_dec(v_i_1523_);
v_stop_boxed_1534_ = lean_unbox_usize(v_stop_1524_);
lean_dec(v_stop_1524_);
v_res_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(v_as_1522_, v_i_boxed_1533_, v_stop_boxed_1534_, v_b_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec_ref(v_as_1522_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object* v_inst_1536_, lean_object* v_inst_1537_, lean_object* v_info_1538_, lean_object* v_depTrace_1539_, lean_object* v_savedTrace_1540_, lean_object* v_oldTrace_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_){
_start:
{
if (lean_obj_tag(v_savedTrace_1540_) == 2)
{
lean_object* v_data_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1599_; 
v_data_1549_ = lean_ctor_get(v_savedTrace_1540_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_savedTrace_1540_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1551_ = v_savedTrace_1540_;
v_isShared_1552_ = v_isSharedCheck_1599_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_data_1549_);
lean_dec(v_savedTrace_1540_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1599_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
uint64_t v_depHash_1553_; lean_object* v_log_1554_; lean_object* v___x_1555_; lean_object* v___x_1557_; 
v_depHash_1553_ = lean_ctor_get_uint64(v_data_1549_, sizeof(void*)*3);
v_log_1554_ = lean_ctor_get(v_data_1549_, 2);
lean_inc_ref(v_log_1554_);
lean_dec_ref(v_data_1549_);
v___x_1555_ = lean_box_uint64(v_depHash_1553_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set_tag(v___x_1551_, 1);
lean_ctor_set(v___x_1551_, 0, v___x_1555_);
v___x_1557_ = v___x_1551_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1555_);
v___x_1557_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; lean_object* v_a_1559_; lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1597_; 
v___x_1558_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1536_, v_inst_1537_, v_info_1538_, v_depTrace_1539_, v___x_1557_, v_oldTrace_1541_, v_a_1546_, v_a_1547_);
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
v_a_1560_ = lean_ctor_get(v___x_1558_, 1);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1562_ = v___x_1558_;
v_isShared_1563_ = v_isSharedCheck_1597_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_inc(v_a_1559_);
lean_dec(v___x_1558_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1597_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___y_1565_; uint8_t v___x_1569_; uint8_t v___x_1570_; uint8_t v___x_1571_; 
v___x_1569_ = 0;
v___x_1570_ = lean_unbox(v_a_1559_);
v___x_1571_ = l_Lake_instDecidableEqOutputStatus(v___x_1570_, v___x_1569_);
if (v___x_1571_ == 0)
{
lean_object* v_log_1572_; uint8_t v_action_1573_; uint8_t v_wantsRebuild_1574_; lean_object* v_trace_1575_; lean_object* v_buildTime_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1596_; 
v_log_1572_ = lean_ctor_get(v_a_1560_, 0);
v_action_1573_ = lean_ctor_get_uint8(v_a_1560_, sizeof(void*)*3);
v_wantsRebuild_1574_ = lean_ctor_get_uint8(v_a_1560_, sizeof(void*)*3 + 1);
v_trace_1575_ = lean_ctor_get(v_a_1560_, 1);
v_buildTime_1576_ = lean_ctor_get(v_a_1560_, 2);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_a_1560_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1578_ = v_a_1560_;
v_isShared_1579_ = v_isSharedCheck_1596_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_buildTime_1576_);
lean_inc(v_trace_1575_);
lean_inc(v_log_1572_);
lean_dec(v_a_1560_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1596_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
uint8_t v___x_1580_; uint8_t v___x_1581_; lean_object* v___x_1583_; 
v___x_1580_ = 2;
v___x_1581_ = l_Lake_JobAction_merge(v_action_1573_, v___x_1580_);
if (v_isShared_1579_ == 0)
{
v___x_1583_ = v___x_1578_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_log_1572_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v_trace_1575_);
lean_ctor_set(v_reuseFailAlloc_1595_, 2, v_buildTime_1576_);
lean_ctor_set_uint8(v_reuseFailAlloc_1595_, sizeof(void*)*3 + 1, v_wantsRebuild_1574_);
v___x_1583_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; 
lean_ctor_set_uint8(v___x_1583_, sizeof(void*)*3, v___x_1581_);
v___x_1584_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1554_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v___x_1583_);
lean_dec_ref(v_log_1554_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 1);
lean_inc(v_a_1585_);
lean_dec_ref(v___x_1584_);
v___y_1565_ = v_a_1585_;
goto v___jp_1564_;
}
else
{
lean_object* v_a_1586_; lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_del_object(v___x_1562_);
lean_dec(v_a_1559_);
v_a_1586_ = lean_ctor_get(v___x_1584_, 0);
v_a_1587_ = lean_ctor_get(v___x_1584_, 1);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1584_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_inc(v_a_1586_);
lean_dec(v___x_1584_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1586_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_1554_);
v___y_1565_ = v_a_1560_;
goto v___jp_1564_;
}
v___jp_1564_:
{
lean_object* v___x_1567_; 
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 1, v___y_1565_);
v___x_1567_ = v___x_1562_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1559_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v___y_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_1600_; uint8_t v_oldMode_1601_; 
lean_dec(v_savedTrace_1540_);
lean_dec_ref(v_inst_1536_);
v_toBuildConfig_1600_ = lean_ctor_get(v_a_1546_, 0);
v_oldMode_1601_ = lean_ctor_get_uint8(v_toBuildConfig_1600_, sizeof(void*)*2);
if (v_oldMode_1601_ == 0)
{
uint8_t v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
lean_dec(v_info_1538_);
lean_dec_ref(v_inst_1537_);
v___x_1602_ = 0;
v___x_1603_ = lean_box(v___x_1602_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
lean_ctor_set(v___x_1604_, 1, v_a_1547_);
return v___x_1604_;
}
else
{
uint8_t v___x_1605_; 
v___x_1605_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1537_, v_info_1538_, v_oldTrace_1541_);
if (v___x_1605_ == 0)
{
uint8_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = 0;
v___x_1607_ = lean_box(v___x_1606_);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
lean_ctor_set(v___x_1608_, 1, v_a_1547_);
return v___x_1608_;
}
else
{
uint8_t v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1609_ = 1;
v___x_1610_ = lean_box(v___x_1609_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
lean_ctor_set(v___x_1611_, 1, v_a_1547_);
return v___x_1611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object* v_inst_1612_, lean_object* v_inst_1613_, lean_object* v_info_1614_, lean_object* v_depTrace_1615_, lean_object* v_savedTrace_1616_, lean_object* v_oldTrace_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1612_, v_inst_1613_, v_info_1614_, v_depTrace_1615_, v_savedTrace_1616_, v_oldTrace_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_);
lean_dec_ref(v_a_1622_);
lean_dec(v_a_1621_);
lean_dec(v_a_1620_);
lean_dec(v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec_ref(v_oldTrace_1617_);
lean_dec_ref(v_depTrace_1615_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object* v_00_u03b9_1626_, lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_info_1629_, lean_object* v_depTrace_1630_, lean_object* v_savedTrace_1631_, lean_object* v_oldTrace_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1627_, v_inst_1628_, v_info_1629_, v_depTrace_1630_, v_savedTrace_1631_, v_oldTrace_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object* v_00_u03b9_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_info_1644_, lean_object* v_depTrace_1645_, lean_object* v_savedTrace_1646_, lean_object* v_oldTrace_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lake_SavedTrace_replayIfUpToDate_x27(v_00_u03b9_1641_, v_inst_1642_, v_inst_1643_, v_info_1644_, v_depTrace_1645_, v_savedTrace_1646_, v_oldTrace_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
lean_dec_ref(v_a_1652_);
lean_dec(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_oldTrace_1647_);
lean_dec_ref(v_depTrace_1645_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object* v_inst_1656_, lean_object* v_inst_1657_, lean_object* v_info_1658_, lean_object* v_depTrace_1659_, lean_object* v_savedTrace_1660_, lean_object* v_oldTrace_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1656_, v_inst_1657_, v_info_1658_, v_depTrace_1659_, v_savedTrace_1660_, v_oldTrace_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1688_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_a_1671_ = lean_ctor_get(v___x_1669_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1673_ = v___x_1669_;
v_isShared_1674_ = v_isSharedCheck_1688_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1688_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
uint8_t v___x_1675_; uint8_t v___x_1676_; uint8_t v___x_1677_; 
v___x_1675_ = 0;
v___x_1676_ = lean_unbox(v_a_1670_);
lean_dec(v_a_1670_);
v___x_1677_ = l_Lake_instDecidableEqOutputStatus(v___x_1676_, v___x_1675_);
if (v___x_1677_ == 0)
{
uint8_t v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1678_ = 1;
v___x_1679_ = lean_box(v___x_1678_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1679_);
v___x_1681_ = v___x_1673_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_a_1671_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
else
{
uint8_t v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1683_ = 0;
v___x_1684_ = lean_box(v___x_1683_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1684_);
v___x_1686_ = v___x_1673_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_a_1671_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
else
{
lean_object* v_a_1689_; lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_a_1689_ = lean_ctor_get(v___x_1669_, 0);
v_a_1690_ = lean_ctor_get(v___x_1669_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1669_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_inc(v_a_1689_);
lean_dec(v___x_1669_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1689_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object* v_inst_1698_, lean_object* v_inst_1699_, lean_object* v_info_1700_, lean_object* v_depTrace_1701_, lean_object* v_savedTrace_1702_, lean_object* v_oldTrace_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lake_SavedTrace_replayIfUpToDate___redArg(v_inst_1698_, v_inst_1699_, v_info_1700_, v_depTrace_1701_, v_savedTrace_1702_, v_oldTrace_1703_, v_a_1704_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec(v_a_1706_);
lean_dec(v_a_1705_);
lean_dec_ref(v_a_1704_);
lean_dec_ref(v_oldTrace_1703_);
lean_dec_ref(v_depTrace_1701_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object* v_00_u03b9_1712_, lean_object* v_inst_1713_, lean_object* v_inst_1714_, lean_object* v_info_1715_, lean_object* v_depTrace_1716_, lean_object* v_savedTrace_1717_, lean_object* v_oldTrace_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1713_, v_inst_1714_, v_info_1715_, v_depTrace_1716_, v_savedTrace_1717_, v_oldTrace_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1745_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
v_a_1728_ = lean_ctor_get(v___x_1726_, 1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1730_ = v___x_1726_;
v_isShared_1731_ = v_isSharedCheck_1745_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_inc(v_a_1727_);
lean_dec(v___x_1726_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1745_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
uint8_t v___x_1732_; uint8_t v___x_1733_; uint8_t v___x_1734_; 
v___x_1732_ = 0;
v___x_1733_ = lean_unbox(v_a_1727_);
lean_dec(v_a_1727_);
v___x_1734_ = l_Lake_instDecidableEqOutputStatus(v___x_1733_, v___x_1732_);
if (v___x_1734_ == 0)
{
uint8_t v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1735_ = 1;
v___x_1736_ = lean_box(v___x_1735_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1736_);
v___x_1738_ = v___x_1730_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_a_1728_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
else
{
uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1740_ = 0;
v___x_1741_ = lean_box(v___x_1740_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1741_);
v___x_1743_ = v___x_1730_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v_a_1728_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
v_a_1746_ = lean_ctor_get(v___x_1726_, 0);
v_a_1747_ = lean_ctor_get(v___x_1726_, 1);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1726_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_inc(v_a_1746_);
lean_dec(v___x_1726_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1746_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object* v_00_u03b9_1755_, lean_object* v_inst_1756_, lean_object* v_inst_1757_, lean_object* v_info_1758_, lean_object* v_depTrace_1759_, lean_object* v_savedTrace_1760_, lean_object* v_oldTrace_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lake_SavedTrace_replayIfUpToDate(v_00_u03b9_1755_, v_inst_1756_, v_inst_1757_, v_info_1758_, v_depTrace_1759_, v_savedTrace_1760_, v_oldTrace_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_);
lean_dec_ref(v_a_1766_);
lean_dec(v_a_1765_);
lean_dec(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec_ref(v_a_1762_);
lean_dec_ref(v_oldTrace_1761_);
lean_dec_ref(v_depTrace_1759_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(uint64_t v_inputHash_1770_, lean_object* v_self_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v___y_1775_; 
if (lean_obj_tag(v_self_1771_) == 2)
{
lean_object* v_data_1793_; uint64_t v_depHash_1794_; lean_object* v_log_1795_; uint8_t v_synthetic_1796_; uint8_t v___x_1797_; lean_object* v___y_1799_; lean_object* v___y_1803_; 
v_data_1793_ = lean_ctor_get(v_self_1771_, 0);
v_depHash_1794_ = lean_ctor_get_uint64(v_data_1793_, sizeof(void*)*3);
v_log_1795_ = lean_ctor_get(v_data_1793_, 2);
v_synthetic_1796_ = lean_ctor_get_uint8(v_data_1793_, sizeof(void*)*3 + 8);
v___x_1797_ = lean_uint64_dec_eq(v_depHash_1794_, v_inputHash_1770_);
if (v___x_1797_ == 0)
{
v___y_1775_ = v_a_1772_;
goto v___jp_1774_;
}
else
{
if (v_synthetic_1796_ == 0)
{
goto v___jp_1814_;
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1840_ = lean_array_get_size(v_log_1795_);
v___x_1841_ = lean_unsigned_to_nat(0u);
v___x_1842_ = lean_nat_dec_eq(v___x_1840_, v___x_1841_);
if (v___x_1842_ == 0)
{
goto v___jp_1814_;
}
else
{
lean_object* v_log_1843_; uint8_t v_action_1844_; uint8_t v_wantsRebuild_1845_; lean_object* v_trace_1846_; lean_object* v_buildTime_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1856_; 
v_log_1843_ = lean_ctor_get(v_a_1772_, 0);
v_action_1844_ = lean_ctor_get_uint8(v_a_1772_, sizeof(void*)*3);
v_wantsRebuild_1845_ = lean_ctor_get_uint8(v_a_1772_, sizeof(void*)*3 + 1);
v_trace_1846_ = lean_ctor_get(v_a_1772_, 1);
v_buildTime_1847_ = lean_ctor_get(v_a_1772_, 2);
v_isSharedCheck_1856_ = !lean_is_exclusive(v_a_1772_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1849_ = v_a_1772_;
v_isShared_1850_ = v_isSharedCheck_1856_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_buildTime_1847_);
lean_inc(v_trace_1846_);
lean_inc(v_log_1843_);
lean_dec(v_a_1772_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1856_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
uint8_t v___x_1851_; uint8_t v___x_1852_; lean_object* v___x_1854_; 
v___x_1851_ = 1;
v___x_1852_ = l_Lake_JobAction_merge(v_action_1844_, v___x_1851_);
if (v_isShared_1850_ == 0)
{
v___x_1854_ = v___x_1849_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_log_1843_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v_trace_1846_);
lean_ctor_set(v_reuseFailAlloc_1855_, 2, v_buildTime_1847_);
lean_ctor_set_uint8(v_reuseFailAlloc_1855_, sizeof(void*)*3 + 1, v_wantsRebuild_1845_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*3, v___x_1852_);
v___y_1799_ = v___x_1854_;
goto v___jp_1798_;
}
}
}
}
}
v___jp_1798_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = lean_box(v___x_1797_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
lean_ctor_set(v___x_1801_, 1, v___y_1799_);
return v___x_1801_;
}
v___jp_1802_:
{
if (lean_obj_tag(v___y_1803_) == 0)
{
lean_object* v_a_1804_; 
v_a_1804_ = lean_ctor_get(v___y_1803_, 1);
lean_inc(v_a_1804_);
lean_dec_ref(v___y_1803_);
v___y_1799_ = v_a_1804_;
goto v___jp_1798_;
}
else
{
lean_object* v_a_1805_; lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
v_a_1805_ = lean_ctor_get(v___y_1803_, 0);
v_a_1806_ = lean_ctor_get(v___y_1803_, 1);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___y_1803_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___y_1803_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_inc(v_a_1805_);
lean_dec(v___y_1803_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1805_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
v___jp_1814_:
{
lean_object* v_log_1815_; uint8_t v_action_1816_; uint8_t v_wantsRebuild_1817_; lean_object* v_trace_1818_; lean_object* v_buildTime_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1839_; 
v_log_1815_ = lean_ctor_get(v_a_1772_, 0);
v_action_1816_ = lean_ctor_get_uint8(v_a_1772_, sizeof(void*)*3);
v_wantsRebuild_1817_ = lean_ctor_get_uint8(v_a_1772_, sizeof(void*)*3 + 1);
v_trace_1818_ = lean_ctor_get(v_a_1772_, 1);
v_buildTime_1819_ = lean_ctor_get(v_a_1772_, 2);
v_isSharedCheck_1839_ = !lean_is_exclusive(v_a_1772_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1821_ = v_a_1772_;
v_isShared_1822_ = v_isSharedCheck_1839_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_buildTime_1819_);
lean_inc(v_trace_1818_);
lean_inc(v_log_1815_);
lean_dec(v_a_1772_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1839_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
uint8_t v___x_1823_; uint8_t v___x_1824_; lean_object* v___x_1826_; 
v___x_1823_ = 2;
v___x_1824_ = l_Lake_JobAction_merge(v_action_1816_, v___x_1823_);
if (v_isShared_1822_ == 0)
{
v___x_1826_ = v___x_1821_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_log_1815_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v_trace_1818_);
lean_ctor_set(v_reuseFailAlloc_1838_, 2, v_buildTime_1819_);
lean_ctor_set_uint8(v_reuseFailAlloc_1838_, sizeof(void*)*3 + 1, v_wantsRebuild_1817_);
v___x_1826_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
lean_ctor_set_uint8(v___x_1826_, sizeof(void*)*3, v___x_1824_);
v___x_1827_ = lean_unsigned_to_nat(0u);
v___x_1828_ = lean_array_get_size(v_log_1795_);
v___x_1829_ = lean_nat_dec_lt(v___x_1827_, v___x_1828_);
if (v___x_1829_ == 0)
{
v___y_1799_ = v___x_1826_;
goto v___jp_1798_;
}
else
{
lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1830_ = lean_box(0);
v___x_1831_ = lean_nat_dec_le(v___x_1828_, v___x_1828_);
if (v___x_1831_ == 0)
{
if (v___x_1829_ == 0)
{
v___y_1799_ = v___x_1826_;
goto v___jp_1798_;
}
else
{
size_t v___x_1832_; size_t v___x_1833_; lean_object* v___x_1834_; 
v___x_1832_ = ((size_t)0ULL);
v___x_1833_ = lean_usize_of_nat(v___x_1828_);
v___x_1834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1795_, v___x_1832_, v___x_1833_, v___x_1830_, v___x_1826_);
v___y_1803_ = v___x_1834_;
goto v___jp_1802_;
}
}
else
{
size_t v___x_1835_; size_t v___x_1836_; lean_object* v___x_1837_; 
v___x_1835_ = ((size_t)0ULL);
v___x_1836_ = lean_usize_of_nat(v___x_1828_);
v___x_1837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1795_, v___x_1835_, v___x_1836_, v___x_1830_, v___x_1826_);
v___y_1803_ = v___x_1837_;
goto v___jp_1802_;
}
}
}
}
}
}
else
{
v___y_1775_ = v_a_1772_;
goto v___jp_1774_;
}
v___jp_1774_:
{
lean_object* v_log_1776_; uint8_t v_action_1777_; uint8_t v_wantsRebuild_1778_; lean_object* v_trace_1779_; lean_object* v_buildTime_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1792_; 
v_log_1776_ = lean_ctor_get(v___y_1775_, 0);
v_action_1777_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3);
v_wantsRebuild_1778_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3 + 1);
v_trace_1779_ = lean_ctor_get(v___y_1775_, 1);
v_buildTime_1780_ = lean_ctor_get(v___y_1775_, 2);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___y_1775_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1782_ = v___y_1775_;
v_isShared_1783_ = v_isSharedCheck_1792_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_buildTime_1780_);
lean_inc(v_trace_1779_);
lean_inc(v_log_1776_);
lean_dec(v___y_1775_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1792_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
uint8_t v___x_1784_; uint8_t v___x_1785_; lean_object* v___x_1787_; 
v___x_1784_ = 1;
v___x_1785_ = l_Lake_JobAction_merge(v_action_1777_, v___x_1784_);
if (v_isShared_1783_ == 0)
{
v___x_1787_ = v___x_1782_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_log_1776_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_trace_1779_);
lean_ctor_set(v_reuseFailAlloc_1791_, 2, v_buildTime_1780_);
lean_ctor_set_uint8(v_reuseFailAlloc_1791_, sizeof(void*)*3 + 1, v_wantsRebuild_1778_);
v___x_1787_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_ctor_set_uint8(v___x_1787_, sizeof(void*)*3, v___x_1785_);
v___x_1788_ = 0;
v___x_1789_ = lean_box(v___x_1788_);
v___x_1790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
lean_ctor_set(v___x_1790_, 1, v___x_1787_);
return v___x_1790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg___boxed(lean_object* v_inputHash_1857_, lean_object* v_self_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
uint64_t v_inputHash_boxed_1861_; lean_object* v_res_1862_; 
v_inputHash_boxed_1861_ = lean_unbox_uint64(v_inputHash_1857_);
lean_dec_ref(v_inputHash_1857_);
v_res_1862_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_boxed_1861_, v_self_1858_, v_a_1859_);
lean_dec(v_self_1858_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate(uint64_t v_inputHash_1863_, lean_object* v_self_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v___x_1872_; 
v___x_1872_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1863_, v_self_1864_, v_a_1870_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___boxed(lean_object* v_inputHash_1873_, lean_object* v_self_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
uint64_t v_inputHash_boxed_1882_; lean_object* v_res_1883_; 
v_inputHash_boxed_1882_ = lean_unbox_uint64(v_inputHash_1873_);
lean_dec_ref(v_inputHash_1873_);
v_res_1883_ = l_Lake_SavedTrace_replayCachedIfUpToDate(v_inputHash_boxed_1882_, v_self_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
lean_dec(v_self_1874_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t v_inputHash_1884_, lean_object* v_self_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1884_, v_self_1885_, v_a_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object* v_inputHash_1889_, lean_object* v_self_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
uint64_t v_inputHash_boxed_1893_; lean_object* v_res_1894_; 
v_inputHash_boxed_1893_ = lean_unbox_uint64(v_inputHash_1889_);
lean_dec_ref(v_inputHash_1889_);
v_res_1894_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_boxed_1893_, v_self_1890_, v_a_1891_);
lean_dec(v_self_1890_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t v_inputHash_1895_, lean_object* v_self_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1895_, v_self_1896_, v_a_1902_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object* v_inputHash_1905_, lean_object* v_self_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
uint64_t v_inputHash_boxed_1914_; lean_object* v_res_1915_; 
v_inputHash_boxed_1914_ = lean_unbox_uint64(v_inputHash_1905_);
lean_dec_ref(v_inputHash_1905_);
v_res_1915_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate(v_inputHash_boxed_1914_, v_self_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_);
lean_dec_ref(v_a_1911_);
lean_dec(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec(v_a_1908_);
lean_dec_ref(v_a_1907_);
lean_dec(v_self_1906_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object* v_x_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_box(0);
return v___x_1917_;
}
}
static lean_object* _init_l_Lake_instToOutputJsonPUnit___closed__0(void){
_start:
{
lean_object* v___f_1918_; 
v___f_1918_ = lean_alloc_closure((void*)(l_Lake_instToOutputJsonPUnit___lam__0), 1, 0);
return v___f_1918_;
}
}
static lean_object* _init_l_Lake_instToOutputJsonPUnit(void){
_start:
{
lean_object* v___f_1919_; 
v___f_1919_ = lean_obj_once(&l_Lake_instToOutputJsonPUnit___closed__0, &l_Lake_instToOutputJsonPUnit___closed__0_once, _init_l_Lake_instToOutputJsonPUnit___closed__0);
return v___f_1919_;
}
}
static lean_object* _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object* v_x_1921_){
_start:
{
lean_object* v_descr_1922_; uint64_t v_hash_1923_; lean_object* v_ext_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; 
v_descr_1922_ = lean_ctor_get(v_x_1921_, 0);
v_hash_1923_ = lean_ctor_get_uint64(v_descr_1922_, sizeof(void*)*1);
v_ext_1924_ = lean_ctor_get(v_descr_1922_, 0);
v___x_1925_ = lean_string_utf8_byte_size(v_ext_1924_);
v___x_1926_ = lean_unsigned_to_nat(0u);
v___x_1927_ = lean_nat_dec_eq(v___x_1925_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1928_ = l_Lake_lowerHexUInt64(v_hash_1923_);
v___x_1929_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_1930_ = lean_string_append(v___x_1928_, v___x_1929_);
v___x_1931_ = lean_string_append(v___x_1930_, v_ext_1924_);
v___x_1932_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
else
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = l_Lake_lowerHexUInt64(v_hash_1923_);
v___x_1934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
return v___x_1934_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object* v_x_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lake_instToOutputJsonArtifact___lam__0(v_x_1935_);
lean_dec_ref(v_x_1935_);
return v_res_1936_;
}
}
static lean_object* _init_l_Lake_instToOutputJsonArtifact___closed__0(void){
_start:
{
lean_object* v___f_1937_; 
v___f_1937_ = lean_alloc_closure((void*)(l_Lake_instToOutputJsonArtifact___lam__0___boxed), 1, 0);
return v___f_1937_;
}
}
static lean_object* _init_l_Lake_instToOutputJsonArtifact(void){
_start:
{
lean_object* v___f_1938_; 
v___f_1938_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___closed__0, &l_Lake_instToOutputJsonArtifact___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___closed__0);
return v___f_1938_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object* v_val_1939_, lean_object* v_a_x3f_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___x_1943_; lean_object* v_log_1944_; uint8_t v_action_1945_; uint8_t v_wantsRebuild_1946_; lean_object* v_trace_1947_; lean_object* v_buildTime_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1959_; 
v___x_1943_ = lean_io_mono_ms_now();
v_log_1944_ = lean_ctor_get(v___y_1941_, 0);
v_action_1945_ = lean_ctor_get_uint8(v___y_1941_, sizeof(void*)*3);
v_wantsRebuild_1946_ = lean_ctor_get_uint8(v___y_1941_, sizeof(void*)*3 + 1);
v_trace_1947_ = lean_ctor_get(v___y_1941_, 1);
v_buildTime_1948_ = lean_ctor_get(v___y_1941_, 2);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___y_1941_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1950_ = v___y_1941_;
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_buildTime_1948_);
lean_inc(v_trace_1947_);
lean_inc(v_log_1944_);
lean_dec(v___y_1941_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1956_; 
v___x_1952_ = lean_nat_sub(v___x_1943_, v_val_1939_);
lean_dec(v___x_1943_);
v___x_1953_ = lean_box(0);
v___x_1954_ = lean_nat_add(v_buildTime_1948_, v___x_1952_);
lean_dec(v___x_1952_);
lean_dec(v_buildTime_1948_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 2, v___x_1954_);
v___x_1956_ = v___x_1950_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_log_1944_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_trace_1947_);
lean_ctor_set(v_reuseFailAlloc_1958_, 2, v___x_1954_);
lean_ctor_set_uint8(v_reuseFailAlloc_1958_, sizeof(void*)*3, v_action_1945_);
lean_ctor_set_uint8(v_reuseFailAlloc_1958_, sizeof(void*)*3 + 1, v_wantsRebuild_1946_);
v___x_1956_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
lean_object* v___x_1957_; 
v___x_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1953_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
return v___x_1957_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object* v_val_1960_, lean_object* v_a_x3f_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_Lake_buildAction___redArg___lam__0(v_val_1960_, v_a_x3f_1961_, v___y_1962_);
lean_dec(v_a_x3f_1961_);
lean_dec(v_val_1960_);
return v_res_1964_;
}
}
static lean_object* _init_l_Lake_buildAction___redArg___closed__0(void){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_mk_string_unchecked("target is out-of-date and needs to be rebuilt", 45, 45);
return v___x_1965_;
}
}
static lean_object* _init_l_Lake_buildAction___redArg___closed__1(void){
_start:
{
lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__0, &l_Lake_buildAction___redArg___closed__0_once, _init_l_Lake_buildAction___redArg___closed__0);
v___x_1967_ = 3;
v___x_1968_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set_uint8(v___x_1968_, sizeof(void*)*1, v___x_1967_);
return v___x_1968_;
}
}
static lean_object* _init_l_Lake_buildAction___redArg___closed__2(void){
_start:
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_mk_string_unchecked("nobuild", 7, 7);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object* v_inst_1970_, lean_object* v_depTrace_1971_, lean_object* v_traceFile_1972_, lean_object* v_build_1973_, uint8_t v_action_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v_a_1983_; lean_object* v_a_1984_; lean_object* v_log_1987_; uint8_t v_action_1988_; uint8_t v_wantsRebuild_1989_; lean_object* v_trace_1990_; lean_object* v_buildTime_1991_; lean_object* v_toBuildConfig_1997_; lean_object* v_log_1998_; uint8_t v_action_1999_; uint8_t v_wantsRebuild_2000_; lean_object* v_trace_2001_; lean_object* v_buildTime_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2108_; 
v_toBuildConfig_1997_ = lean_ctor_get(v_a_1979_, 0);
v_log_1998_ = lean_ctor_get(v_a_1980_, 0);
v_action_1999_ = lean_ctor_get_uint8(v_a_1980_, sizeof(void*)*3);
v_wantsRebuild_2000_ = lean_ctor_get_uint8(v_a_1980_, sizeof(void*)*3 + 1);
v_trace_2001_ = lean_ctor_get(v_a_1980_, 1);
v_buildTime_2002_ = lean_ctor_get(v_a_1980_, 2);
v_isSharedCheck_2108_ = !lean_is_exclusive(v_a_1980_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2004_ = v_a_1980_;
v_isShared_2005_ = v_isSharedCheck_2108_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_buildTime_2002_);
lean_inc(v_trace_2001_);
lean_inc(v_log_1998_);
lean_dec(v_a_1980_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2108_;
goto v_resetjp_2003_;
}
v___jp_1982_:
{
lean_object* v___x_1985_; 
v___x_1985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1985_, 0, v_a_1983_);
lean_ctor_set(v___x_1985_, 1, v_a_1984_);
return v___x_1985_;
}
v___jp_1986_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1992_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__1, &l_Lake_buildAction___redArg___closed__1_once, _init_l_Lake_buildAction___redArg___closed__1);
v___x_1993_ = lean_array_get_size(v_log_1987_);
v___x_1994_ = lean_array_push(v_log_1987_, v___x_1992_);
v___x_1995_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1995_, 0, v___x_1994_);
lean_ctor_set(v___x_1995_, 1, v_trace_1990_);
lean_ctor_set(v___x_1995_, 2, v_buildTime_1991_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3, v_action_1988_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3 + 1, v_wantsRebuild_1989_);
v___x_1996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1993_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
return v___x_1996_;
}
v_resetjp_2003_:
{
uint8_t v_noBuild_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v_noBuild_2006_ = lean_ctor_get_uint8(v_toBuildConfig_1997_, sizeof(void*)*2 + 2);
v___x_2007_ = l_Lake_JobAction_merge(v_action_1999_, v_action_1974_);
v___x_2008_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__2, &l_Lake_buildAction___redArg___closed__2_once, _init_l_Lake_buildAction___redArg___closed__2);
lean_inc_ref(v_traceFile_1972_);
v___x_2009_ = l_System_FilePath_addExtension(v_traceFile_1972_, v___x_2008_);
if (v_noBuild_2006_ == 0)
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_1998_);
if (v_isShared_2005_ == 0)
{
v___x_2012_ = v___x_2004_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_log_1998_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_trace_2001_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v_buildTime_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2092_, sizeof(void*)*3 + 1, v_wantsRebuild_2000_);
v___x_2012_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v_a_2015_; lean_object* v_a_2016_; 
lean_ctor_set_uint8(v___x_2012_, sizeof(void*)*3, v___x_2007_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc(v_a_1977_);
lean_inc(v_a_1976_);
v___x_2013_ = lean_apply_7(v_build_1973_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v___x_2012_, lean_box(0));
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2020_; lean_object* v_a_2021_; lean_object* v_log_2022_; uint8_t v_action_2023_; uint8_t v_wantsRebuild_2024_; lean_object* v_trace_2025_; lean_object* v_buildTime_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v_a_2020_ = lean_ctor_get(v___x_2013_, 1);
lean_inc(v_a_2020_);
v_a_2021_ = lean_ctor_get(v___x_2013_, 0);
lean_inc_n(v_a_2021_, 2);
lean_dec_ref(v___x_2013_);
v_log_2022_ = lean_ctor_get(v_a_2020_, 0);
v_action_2023_ = lean_ctor_get_uint8(v_a_2020_, sizeof(void*)*3);
v_wantsRebuild_2024_ = lean_ctor_get_uint8(v_a_2020_, sizeof(void*)*3 + 1);
v_trace_2025_ = lean_ctor_get(v_a_2020_, 1);
v_buildTime_2026_ = lean_ctor_get(v_a_2020_, 2);
v___x_2027_ = lean_array_get_size(v_log_1998_);
lean_dec_ref(v_log_1998_);
v___x_2028_ = lean_array_get_size(v_log_2022_);
v___x_2029_ = l_Array_extract___redArg(v_log_2022_, v___x_2027_, v___x_2028_);
v___x_2030_ = lean_apply_1(v_inst_1970_, v_a_2021_);
v___x_2031_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1971_, v___x_2030_, v___x_2029_);
v___x_2032_ = l_Lake_BuildMetadata_writeFile(v_traceFile_1972_, v___x_2031_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2073_; 
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v___x_2032_, 0);
lean_dec(v_unused_2074_);
v___x_2034_ = v___x_2032_;
v_isShared_2035_ = v_isSharedCheck_2073_;
goto v_resetjp_2033_;
}
else
{
lean_dec(v___x_2032_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2073_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2036_; 
v___x_2036_ = l_Lake_removeFileIfExists(v___x_2009_);
lean_dec_ref(v___x_2009_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2056_; 
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2056_ == 0)
{
lean_object* v_unused_2057_; 
v_unused_2057_ = lean_ctor_get(v___x_2036_, 0);
lean_dec(v_unused_2057_);
v___x_2038_ = v___x_2036_;
v_isShared_2039_ = v_isSharedCheck_2056_;
goto v_resetjp_2037_;
}
else
{
lean_dec(v___x_2036_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2056_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
lean_inc(v_a_2021_);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v_a_2021_);
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2021_);
v___x_2041_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
lean_object* v___x_2043_; 
if (v_isShared_2035_ == 0)
{
lean_ctor_set_tag(v___x_2034_, 1);
lean_ctor_set(v___x_2034_, 0, v___x_2041_);
v___x_2043_ = v___x_2034_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2041_);
v___x_2043_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2044_; lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
v___x_2044_ = l_Lake_buildAction___redArg___lam__0(v___x_2010_, v___x_2043_, v_a_2020_);
lean_dec_ref(v___x_2043_);
lean_dec(v___x_2010_);
v_a_2045_ = lean_ctor_get(v___x_2044_, 1);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2052_ == 0)
{
lean_object* v_unused_2053_; 
v_unused_2053_ = lean_ctor_get(v___x_2044_, 0);
lean_dec(v_unused_2053_);
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v_a_2021_);
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2021_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
}
else
{
lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2069_; 
lean_inc(v_buildTime_2026_);
lean_inc_ref(v_trace_2025_);
lean_inc_ref(v_log_2022_);
lean_del_object(v___x_2034_);
lean_dec(v_a_2021_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_a_2020_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; 
v_unused_2070_ = lean_ctor_get(v_a_2020_, 2);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_a_2020_, 1);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_a_2020_, 0);
lean_dec(v_unused_2072_);
v___x_2059_ = v_a_2020_;
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
else
{
lean_dec(v_a_2020_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_a_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v_a_2061_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2061_);
lean_dec_ref(v___x_2036_);
v___x_2062_ = lean_io_error_to_string(v_a_2061_);
v___x_2063_ = 3;
v___x_2064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set_uint8(v___x_2064_, sizeof(void*)*1, v___x_2063_);
v___x_2065_ = lean_array_push(v_log_2022_, v___x_2064_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v___x_2065_);
v___x_2067_ = v___x_2059_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_trace_2025_);
lean_ctor_set(v_reuseFailAlloc_2068_, 2, v_buildTime_2026_);
lean_ctor_set_uint8(v_reuseFailAlloc_2068_, sizeof(void*)*3, v_action_2023_);
lean_ctor_set_uint8(v_reuseFailAlloc_2068_, sizeof(void*)*3 + 1, v_wantsRebuild_2024_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_a_2015_ = v___x_2028_;
v_a_2016_ = v___x_2067_;
goto v___jp_2014_;
}
}
}
}
}
else
{
lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2086_; 
lean_inc(v_buildTime_2026_);
lean_inc_ref(v_trace_2025_);
lean_inc_ref(v_log_2022_);
lean_dec(v_a_2021_);
lean_dec_ref(v___x_2009_);
v_isSharedCheck_2086_ = !lean_is_exclusive(v_a_2020_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; lean_object* v_unused_2088_; lean_object* v_unused_2089_; 
v_unused_2087_ = lean_ctor_get(v_a_2020_, 2);
lean_dec(v_unused_2087_);
v_unused_2088_ = lean_ctor_get(v_a_2020_, 1);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v_a_2020_, 0);
lean_dec(v_unused_2089_);
v___x_2076_ = v_a_2020_;
v_isShared_2077_ = v_isSharedCheck_2086_;
goto v_resetjp_2075_;
}
else
{
lean_dec(v_a_2020_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2086_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v_a_2078_; lean_object* v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2084_; 
v_a_2078_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2078_);
lean_dec_ref(v___x_2032_);
v___x_2079_ = lean_io_error_to_string(v_a_2078_);
v___x_2080_ = 3;
v___x_2081_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2081_, 0, v___x_2079_);
lean_ctor_set_uint8(v___x_2081_, sizeof(void*)*1, v___x_2080_);
v___x_2082_ = lean_array_push(v_log_2022_, v___x_2081_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v___x_2082_);
v___x_2084_ = v___x_2076_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v_trace_2025_);
lean_ctor_set(v_reuseFailAlloc_2085_, 2, v_buildTime_2026_);
lean_ctor_set_uint8(v_reuseFailAlloc_2085_, sizeof(void*)*3, v_action_2023_);
lean_ctor_set_uint8(v_reuseFailAlloc_2085_, sizeof(void*)*3 + 1, v_wantsRebuild_2024_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
v_a_2015_ = v___x_2028_;
v_a_2016_ = v___x_2084_;
goto v___jp_2014_;
}
}
}
}
else
{
lean_object* v_a_2090_; lean_object* v_a_2091_; 
lean_dec_ref(v___x_2009_);
lean_dec_ref(v_log_1998_);
lean_dec_ref(v_traceFile_1972_);
lean_dec_ref(v_inst_1970_);
v_a_2090_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2090_);
v_a_2091_ = lean_ctor_get(v___x_2013_, 1);
lean_inc(v_a_2091_);
lean_dec_ref(v___x_2013_);
v_a_2015_ = v_a_2090_;
v_a_2016_ = v_a_2091_;
goto v___jp_2014_;
}
v___jp_2014_:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v_a_2019_; 
v___x_2017_ = lean_box(0);
v___x_2018_ = l_Lake_buildAction___redArg___lam__0(v___x_2010_, v___x_2017_, v_a_2016_);
lean_dec(v___x_2010_);
v_a_2019_ = lean_ctor_get(v___x_2018_, 1);
lean_inc(v_a_2019_);
lean_dec_ref(v___x_2018_);
v_a_1983_ = v_a_2015_;
v_a_1984_ = v_a_2019_;
goto v___jp_1982_;
}
}
}
else
{
uint8_t v___x_2093_; 
lean_dec_ref(v_a_1975_);
lean_dec_ref(v_build_1973_);
lean_dec_ref(v_inst_1970_);
v___x_2093_ = l_System_FilePath_pathExists(v_traceFile_1972_);
lean_dec_ref(v_traceFile_1972_);
if (v___x_2093_ == 0)
{
lean_dec_ref(v___x_2009_);
lean_del_object(v___x_2004_);
v_log_1987_ = v_log_1998_;
v_action_1988_ = v___x_2007_;
v_wantsRebuild_1989_ = v_noBuild_2006_;
v_trace_1990_ = v_trace_2001_;
v_buildTime_1991_ = v_buildTime_2002_;
goto v___jp_1986_;
}
else
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2094_ = lean_box(0);
v___x_2095_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1);
v___x_2096_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1971_, v___x_2094_, v___x_2095_);
v___x_2097_ = l_Lake_BuildMetadata_writeFile(v___x_2009_, v___x_2096_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_dec_ref(v___x_2097_);
lean_del_object(v___x_2004_);
v_log_1987_ = v_log_1998_;
v_action_1988_ = v___x_2007_;
v_wantsRebuild_1989_ = v_noBuild_2006_;
v_trace_1990_ = v_trace_2001_;
v_buildTime_1991_ = v_buildTime_2002_;
goto v___jp_1986_;
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref(v___x_2097_);
v___x_2099_ = lean_io_error_to_string(v_a_2098_);
v___x_2100_ = 3;
v___x_2101_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2101_, 0, v___x_2099_);
lean_ctor_set_uint8(v___x_2101_, sizeof(void*)*1, v___x_2100_);
v___x_2102_ = lean_array_get_size(v_log_1998_);
v___x_2103_ = lean_array_push(v_log_1998_, v___x_2101_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2103_);
v___x_2105_ = v___x_2004_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2103_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v_trace_2001_);
lean_ctor_set(v_reuseFailAlloc_2107_, 2, v_buildTime_2002_);
v___x_2105_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
lean_object* v___x_2106_; 
lean_ctor_set_uint8(v___x_2105_, sizeof(void*)*3, v___x_2007_);
lean_ctor_set_uint8(v___x_2105_, sizeof(void*)*3 + 1, v_noBuild_2006_);
v___x_2106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2102_);
lean_ctor_set(v___x_2106_, 1, v___x_2105_);
return v___x_2106_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object* v_inst_2109_, lean_object* v_depTrace_2110_, lean_object* v_traceFile_2111_, lean_object* v_build_2112_, lean_object* v_action_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_){
_start:
{
uint8_t v_action_boxed_2121_; lean_object* v_res_2122_; 
v_action_boxed_2121_ = lean_unbox(v_action_2113_);
v_res_2122_ = l_Lake_buildAction___redArg(v_inst_2109_, v_depTrace_2110_, v_traceFile_2111_, v_build_2112_, v_action_boxed_2121_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_, v_a_2118_, v_a_2119_);
lean_dec_ref(v_a_2118_);
lean_dec(v_a_2117_);
lean_dec(v_a_2116_);
lean_dec(v_a_2115_);
lean_dec_ref(v_depTrace_2110_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object* v_00_u03b1_2123_, lean_object* v_inst_2124_, lean_object* v_depTrace_2125_, lean_object* v_traceFile_2126_, lean_object* v_build_2127_, uint8_t v_action_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Lake_buildAction___redArg(v_inst_2124_, v_depTrace_2125_, v_traceFile_2126_, v_build_2127_, v_action_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object* v_00_u03b1_2137_, lean_object* v_inst_2138_, lean_object* v_depTrace_2139_, lean_object* v_traceFile_2140_, lean_object* v_build_2141_, lean_object* v_action_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_){
_start:
{
uint8_t v_action_boxed_2150_; lean_object* v_res_2151_; 
v_action_boxed_2150_ = lean_unbox(v_action_2142_);
v_res_2151_ = l_Lake_buildAction(v_00_u03b1_2137_, v_inst_2138_, v_depTrace_2139_, v_traceFile_2140_, v_build_2141_, v_action_boxed_2150_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
lean_dec_ref(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec(v_a_2144_);
lean_dec_ref(v_depTrace_2139_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object* v_inst_2152_, lean_object* v_inst_2153_, lean_object* v_info_2154_, lean_object* v_depTrace_2155_, lean_object* v_traceFile_2156_, lean_object* v_build_2157_, uint8_t v_action_2158_, lean_object* v_oldTrace_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v_log_2167_; uint8_t v_action_2168_; uint8_t v_wantsRebuild_2169_; lean_object* v_trace_2170_; lean_object* v_buildTime_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2239_; 
v_log_2167_ = lean_ctor_get(v_a_2165_, 0);
v_action_2168_ = lean_ctor_get_uint8(v_a_2165_, sizeof(void*)*3);
v_wantsRebuild_2169_ = lean_ctor_get_uint8(v_a_2165_, sizeof(void*)*3 + 1);
v_trace_2170_ = lean_ctor_get(v_a_2165_, 1);
v_buildTime_2171_ = lean_ctor_get(v_a_2165_, 2);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_a_2165_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2173_ = v_a_2165_;
v_isShared_2174_ = v_isSharedCheck_2239_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_buildTime_2171_);
lean_inc(v_trace_2170_);
lean_inc(v_log_2167_);
lean_dec(v_a_2165_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2239_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2175_; 
lean_inc_ref(v_traceFile_2156_);
v___x_2175_ = l_Lake_readTraceFile(v_traceFile_2156_, v_log_2167_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v_a_2177_; lean_object* v___x_2179_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
lean_inc(v_a_2176_);
v_a_2177_ = lean_ctor_get(v___x_2175_, 1);
lean_inc(v_a_2177_);
lean_dec_ref(v___x_2175_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v_a_2177_);
v___x_2179_ = v___x_2173_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2177_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_trace_2170_);
lean_ctor_set(v_reuseFailAlloc_2226_, 2, v_buildTime_2171_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*3, v_action_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*3 + 1, v_wantsRebuild_2169_);
v___x_2179_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
lean_object* v___x_2180_; 
v___x_2180_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2152_, v_inst_2153_, v_info_2154_, v_depTrace_2155_, v_a_2176_, v_oldTrace_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v___x_2179_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2216_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
v_a_2182_ = lean_ctor_get(v___x_2180_, 1);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2184_ = v___x_2180_;
v_isShared_2185_ = v_isSharedCheck_2216_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_inc(v_a_2181_);
lean_dec(v___x_2180_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2216_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
uint8_t v___x_2186_; uint8_t v___x_2187_; uint8_t v___x_2188_; 
v___x_2186_ = 0;
v___x_2187_ = lean_unbox(v_a_2181_);
lean_dec(v_a_2181_);
v___x_2188_ = l_Lake_instDecidableEqOutputStatus(v___x_2187_, v___x_2186_);
if (v___x_2188_ == 0)
{
uint8_t v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
lean_dec_ref(v_a_2160_);
lean_dec_ref(v_build_2157_);
lean_dec_ref(v_traceFile_2156_);
v___x_2189_ = 1;
v___x_2190_ = lean_box(v___x_2189_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2190_);
v___x_2192_ = v___x_2184_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2190_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_a_2182_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
else
{
lean_object* v___f_2194_; lean_object* v___x_2195_; 
lean_del_object(v___x_2184_);
v___f_2194_ = lean_obj_once(&l_Lake_instToOutputJsonPUnit___closed__0, &l_Lake_instToOutputJsonPUnit___closed__0_once, _init_l_Lake_instToOutputJsonPUnit___closed__0);
v___x_2195_ = l_Lake_buildAction___redArg(v___f_2194_, v_depTrace_2155_, v_traceFile_2156_, v_build_2157_, v_action_2158_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2182_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2205_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 1);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2205_ == 0)
{
lean_object* v_unused_2206_; 
v_unused_2206_ = lean_ctor_get(v___x_2195_, 0);
lean_dec(v_unused_2206_);
v___x_2198_ = v___x_2195_;
v_isShared_2199_ = v_isSharedCheck_2205_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2195_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2205_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
uint8_t v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2203_; 
v___x_2200_ = 0;
v___x_2201_ = lean_box(v___x_2200_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v___x_2201_);
v___x_2203_ = v___x_2198_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_a_2196_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
else
{
lean_object* v_a_2207_; lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
v_a_2207_ = lean_ctor_get(v___x_2195_, 0);
v_a_2208_ = lean_ctor_get(v___x_2195_, 1);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2210_ = v___x_2195_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_inc(v_a_2207_);
lean_dec(v___x_2195_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2207_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v_a_2208_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_dec_ref(v_a_2160_);
lean_dec_ref(v_build_2157_);
lean_dec_ref(v_traceFile_2156_);
v_a_2217_ = lean_ctor_get(v___x_2180_, 0);
v_a_2218_ = lean_ctor_get(v___x_2180_, 1);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2180_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_inc(v_a_2217_);
lean_dec(v___x_2180_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2217_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref(v_a_2160_);
lean_dec_ref(v_build_2157_);
lean_dec_ref(v_traceFile_2156_);
lean_dec(v_info_2154_);
lean_dec_ref(v_inst_2153_);
lean_dec_ref(v_inst_2152_);
v_a_2227_ = lean_ctor_get(v___x_2175_, 0);
v_a_2228_ = lean_ctor_get(v___x_2175_, 1);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2230_ = v___x_2175_;
v_isShared_2231_ = v_isSharedCheck_2238_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_inc(v_a_2227_);
lean_dec(v___x_2175_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2238_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v_a_2228_);
v___x_2233_ = v___x_2173_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2228_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_trace_2170_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_buildTime_2171_);
lean_ctor_set_uint8(v_reuseFailAlloc_2237_, sizeof(void*)*3, v_action_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2237_, sizeof(void*)*3 + 1, v_wantsRebuild_2169_);
v___x_2233_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
lean_object* v___x_2235_; 
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 1, v___x_2233_);
v___x_2235_ = v___x_2230_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2227_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v___x_2233_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_info_2242_, lean_object* v_depTrace_2243_, lean_object* v_traceFile_2244_, lean_object* v_build_2245_, lean_object* v_action_2246_, lean_object* v_oldTrace_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_){
_start:
{
uint8_t v_action_boxed_2255_; lean_object* v_res_2256_; 
v_action_boxed_2255_ = lean_unbox(v_action_2246_);
v_res_2256_ = l_Lake_buildUnlessUpToDate_x3f___redArg(v_inst_2240_, v_inst_2241_, v_info_2242_, v_depTrace_2243_, v_traceFile_2244_, v_build_2245_, v_action_boxed_2255_, v_oldTrace_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
lean_dec_ref(v_a_2252_);
lean_dec(v_a_2251_);
lean_dec(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_oldTrace_2247_);
lean_dec_ref(v_depTrace_2243_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object* v_00_u03b9_2257_, lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v_info_2260_, lean_object* v_depTrace_2261_, lean_object* v_traceFile_2262_, lean_object* v_build_2263_, uint8_t v_action_2264_, lean_object* v_oldTrace_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v_log_2273_; uint8_t v_action_2274_; uint8_t v_wantsRebuild_2275_; lean_object* v_trace_2276_; lean_object* v_buildTime_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2345_; 
v_log_2273_ = lean_ctor_get(v_a_2271_, 0);
v_action_2274_ = lean_ctor_get_uint8(v_a_2271_, sizeof(void*)*3);
v_wantsRebuild_2275_ = lean_ctor_get_uint8(v_a_2271_, sizeof(void*)*3 + 1);
v_trace_2276_ = lean_ctor_get(v_a_2271_, 1);
v_buildTime_2277_ = lean_ctor_get(v_a_2271_, 2);
v_isSharedCheck_2345_ = !lean_is_exclusive(v_a_2271_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2279_ = v_a_2271_;
v_isShared_2280_ = v_isSharedCheck_2345_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_buildTime_2277_);
lean_inc(v_trace_2276_);
lean_inc(v_log_2273_);
lean_dec(v_a_2271_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2345_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2281_; 
lean_inc_ref(v_traceFile_2262_);
v___x_2281_ = l_Lake_readTraceFile(v_traceFile_2262_, v_log_2273_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v_a_2283_; lean_object* v___x_2285_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
v_a_2283_ = lean_ctor_get(v___x_2281_, 1);
lean_inc(v_a_2283_);
lean_dec_ref(v___x_2281_);
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v_a_2283_);
v___x_2285_ = v___x_2279_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2283_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v_trace_2276_);
lean_ctor_set(v_reuseFailAlloc_2332_, 2, v_buildTime_2277_);
lean_ctor_set_uint8(v_reuseFailAlloc_2332_, sizeof(void*)*3, v_action_2274_);
lean_ctor_set_uint8(v_reuseFailAlloc_2332_, sizeof(void*)*3 + 1, v_wantsRebuild_2275_);
v___x_2285_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2286_; 
v___x_2286_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2258_, v_inst_2259_, v_info_2260_, v_depTrace_2261_, v_a_2282_, v_oldTrace_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v___x_2285_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2322_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
v_a_2288_ = lean_ctor_get(v___x_2286_, 1);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2290_ = v___x_2286_;
v_isShared_2291_ = v_isSharedCheck_2322_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_inc(v_a_2287_);
lean_dec(v___x_2286_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2322_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
uint8_t v___x_2292_; uint8_t v___x_2293_; uint8_t v___x_2294_; 
v___x_2292_ = 0;
v___x_2293_ = lean_unbox(v_a_2287_);
lean_dec(v_a_2287_);
v___x_2294_ = l_Lake_instDecidableEqOutputStatus(v___x_2293_, v___x_2292_);
if (v___x_2294_ == 0)
{
uint8_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2298_; 
lean_dec_ref(v_a_2266_);
lean_dec_ref(v_build_2263_);
lean_dec_ref(v_traceFile_2262_);
v___x_2295_ = 1;
v___x_2296_ = lean_box(v___x_2295_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v___x_2296_);
v___x_2298_ = v___x_2290_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v_a_2288_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
else
{
lean_object* v___f_2300_; lean_object* v___x_2301_; 
lean_del_object(v___x_2290_);
v___f_2300_ = lean_obj_once(&l_Lake_instToOutputJsonPUnit___closed__0, &l_Lake_instToOutputJsonPUnit___closed__0_once, _init_l_Lake_instToOutputJsonPUnit___closed__0);
v___x_2301_ = l_Lake_buildAction___redArg(v___f_2300_, v_depTrace_2261_, v_traceFile_2262_, v_build_2263_, v_action_2264_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2288_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2311_; 
v_a_2302_ = lean_ctor_get(v___x_2301_, 1);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2311_ == 0)
{
lean_object* v_unused_2312_; 
v_unused_2312_ = lean_ctor_get(v___x_2301_, 0);
lean_dec(v_unused_2312_);
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2311_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2301_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2311_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
uint8_t v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2306_ = 0;
v___x_2307_ = lean_box(v___x_2306_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 0, v___x_2307_);
v___x_2309_ = v___x_2304_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_a_2302_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
v_a_2313_ = lean_ctor_get(v___x_2301_, 0);
v_a_2314_ = lean_ctor_get(v___x_2301_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2301_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_inc(v_a_2313_);
lean_dec(v___x_2301_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2313_);
lean_ctor_set(v_reuseFailAlloc_2320_, 1, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
}
else
{
lean_object* v_a_2323_; lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec_ref(v_a_2266_);
lean_dec_ref(v_build_2263_);
lean_dec_ref(v_traceFile_2262_);
v_a_2323_ = lean_ctor_get(v___x_2286_, 0);
v_a_2324_ = lean_ctor_get(v___x_2286_, 1);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2286_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_inc(v_a_2323_);
lean_dec(v___x_2286_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2323_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2344_; 
lean_dec_ref(v_a_2266_);
lean_dec_ref(v_build_2263_);
lean_dec_ref(v_traceFile_2262_);
lean_dec(v_info_2260_);
lean_dec_ref(v_inst_2259_);
lean_dec_ref(v_inst_2258_);
v_a_2333_ = lean_ctor_get(v___x_2281_, 0);
v_a_2334_ = lean_ctor_get(v___x_2281_, 1);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2336_ = v___x_2281_;
v_isShared_2337_ = v_isSharedCheck_2344_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_inc(v_a_2333_);
lean_dec(v___x_2281_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2344_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v_a_2334_);
v___x_2339_ = v___x_2279_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2334_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_trace_2276_);
lean_ctor_set(v_reuseFailAlloc_2343_, 2, v_buildTime_2277_);
lean_ctor_set_uint8(v_reuseFailAlloc_2343_, sizeof(void*)*3, v_action_2274_);
lean_ctor_set_uint8(v_reuseFailAlloc_2343_, sizeof(void*)*3 + 1, v_wantsRebuild_2275_);
v___x_2339_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2341_; 
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 1, v___x_2339_);
v___x_2341_ = v___x_2336_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2333_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v___x_2339_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object* v_00_u03b9_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_info_2349_, lean_object* v_depTrace_2350_, lean_object* v_traceFile_2351_, lean_object* v_build_2352_, lean_object* v_action_2353_, lean_object* v_oldTrace_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_){
_start:
{
uint8_t v_action_boxed_2362_; lean_object* v_res_2363_; 
v_action_boxed_2362_ = lean_unbox(v_action_2353_);
v_res_2363_ = l_Lake_buildUnlessUpToDate_x3f(v_00_u03b9_2346_, v_inst_2347_, v_inst_2348_, v_info_2349_, v_depTrace_2350_, v_traceFile_2351_, v_build_2352_, v_action_boxed_2362_, v_oldTrace_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
lean_dec_ref(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec(v_a_2356_);
lean_dec_ref(v_oldTrace_2354_);
lean_dec_ref(v_depTrace_2350_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object* v_inst_2364_, lean_object* v_inst_2365_, lean_object* v_info_2366_, lean_object* v_depTrace_2367_, lean_object* v_traceFile_2368_, lean_object* v_build_2369_, uint8_t v_action_2370_, lean_object* v_oldTrace_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_a_2380_; lean_object* v_a_2381_; lean_object* v_log_2383_; uint8_t v_action_2384_; uint8_t v_wantsRebuild_2385_; lean_object* v_trace_2386_; lean_object* v_buildTime_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2425_; 
v_log_2383_ = lean_ctor_get(v_a_2377_, 0);
v_action_2384_ = lean_ctor_get_uint8(v_a_2377_, sizeof(void*)*3);
v_wantsRebuild_2385_ = lean_ctor_get_uint8(v_a_2377_, sizeof(void*)*3 + 1);
v_trace_2386_ = lean_ctor_get(v_a_2377_, 1);
v_buildTime_2387_ = lean_ctor_get(v_a_2377_, 2);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_a_2377_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2389_ = v_a_2377_;
v_isShared_2390_ = v_isSharedCheck_2425_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_buildTime_2387_);
lean_inc(v_trace_2386_);
lean_inc(v_log_2383_);
lean_dec(v_a_2377_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2425_;
goto v_resetjp_2388_;
}
v___jp_2379_:
{
lean_object* v___x_2382_; 
v___x_2382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2382_, 0, v_a_2380_);
lean_ctor_set(v___x_2382_, 1, v_a_2381_);
return v___x_2382_;
}
v_resetjp_2388_:
{
lean_object* v___x_2391_; 
lean_inc_ref(v_traceFile_2368_);
v___x_2391_ = l_Lake_readTraceFile(v_traceFile_2368_, v_log_2383_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v_a_2393_; lean_object* v___x_2395_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2392_);
v_a_2393_ = lean_ctor_get(v___x_2391_, 1);
lean_inc(v_a_2393_);
lean_dec_ref(v___x_2391_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 0, v_a_2393_);
v___x_2395_ = v___x_2389_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2393_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v_trace_2386_);
lean_ctor_set(v_reuseFailAlloc_2419_, 2, v_buildTime_2387_);
lean_ctor_set_uint8(v_reuseFailAlloc_2419_, sizeof(void*)*3, v_action_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2419_, sizeof(void*)*3 + 1, v_wantsRebuild_2385_);
v___x_2395_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
lean_object* v___x_2396_; 
v___x_2396_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2364_, v_inst_2365_, v_info_2366_, v_depTrace_2367_, v_a_2392_, v_oldTrace_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v___x_2395_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2416_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_a_2398_ = lean_ctor_get(v___x_2396_, 1);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2400_ = v___x_2396_;
v_isShared_2401_ = v_isSharedCheck_2416_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2416_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2402_; lean_object* v_a_2404_; uint8_t v___x_2408_; uint8_t v___x_2409_; uint8_t v___x_2410_; 
v___x_2402_ = lean_box(0);
v___x_2408_ = 0;
v___x_2409_ = lean_unbox(v_a_2397_);
lean_dec(v_a_2397_);
v___x_2410_ = l_Lake_instDecidableEqOutputStatus(v___x_2409_, v___x_2408_);
if (v___x_2410_ == 0)
{
lean_dec_ref(v_a_2372_);
lean_dec_ref(v_build_2369_);
lean_dec_ref(v_traceFile_2368_);
v_a_2404_ = v_a_2398_;
goto v___jp_2403_;
}
else
{
lean_object* v___f_2411_; lean_object* v___x_2412_; 
v___f_2411_ = lean_obj_once(&l_Lake_instToOutputJsonPUnit___closed__0, &l_Lake_instToOutputJsonPUnit___closed__0_once, _init_l_Lake_instToOutputJsonPUnit___closed__0);
v___x_2412_ = l_Lake_buildAction___redArg(v___f_2411_, v_depTrace_2367_, v_traceFile_2368_, v_build_2369_, v_action_2370_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2398_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 1);
lean_inc(v_a_2413_);
lean_dec_ref(v___x_2412_);
v_a_2404_ = v_a_2413_;
goto v___jp_2403_;
}
else
{
lean_object* v_a_2414_; lean_object* v_a_2415_; 
lean_del_object(v___x_2400_);
v_a_2414_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2414_);
v_a_2415_ = lean_ctor_get(v___x_2412_, 1);
lean_inc(v_a_2415_);
lean_dec_ref(v___x_2412_);
v_a_2380_ = v_a_2414_;
v_a_2381_ = v_a_2415_;
goto v___jp_2379_;
}
}
v___jp_2403_:
{
lean_object* v___x_2406_; 
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 1, v_a_2404_);
lean_ctor_set(v___x_2400_, 0, v___x_2402_);
v___x_2406_ = v___x_2400_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2402_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v_a_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v_a_2418_; 
lean_dec_ref(v_a_2372_);
lean_dec_ref(v_build_2369_);
lean_dec_ref(v_traceFile_2368_);
v_a_2417_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2417_);
v_a_2418_ = lean_ctor_get(v___x_2396_, 1);
lean_inc(v_a_2418_);
lean_dec_ref(v___x_2396_);
v_a_2380_ = v_a_2417_;
v_a_2381_ = v_a_2418_;
goto v___jp_2379_;
}
}
}
else
{
lean_object* v_a_2420_; lean_object* v_a_2421_; lean_object* v___x_2423_; 
lean_dec_ref(v_a_2372_);
lean_dec_ref(v_build_2369_);
lean_dec_ref(v_traceFile_2368_);
lean_dec(v_info_2366_);
lean_dec_ref(v_inst_2365_);
lean_dec_ref(v_inst_2364_);
v_a_2420_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2420_);
v_a_2421_ = lean_ctor_get(v___x_2391_, 1);
lean_inc(v_a_2421_);
lean_dec_ref(v___x_2391_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 0, v_a_2421_);
v___x_2423_ = v___x_2389_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2421_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v_trace_2386_);
lean_ctor_set(v_reuseFailAlloc_2424_, 2, v_buildTime_2387_);
lean_ctor_set_uint8(v_reuseFailAlloc_2424_, sizeof(void*)*3, v_action_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2424_, sizeof(void*)*3 + 1, v_wantsRebuild_2385_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
v_a_2380_ = v_a_2420_;
v_a_2381_ = v___x_2423_;
goto v___jp_2379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_info_2428_, lean_object* v_depTrace_2429_, lean_object* v_traceFile_2430_, lean_object* v_build_2431_, lean_object* v_action_2432_, lean_object* v_oldTrace_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_){
_start:
{
uint8_t v_action_boxed_2441_; lean_object* v_res_2442_; 
v_action_boxed_2441_ = lean_unbox(v_action_2432_);
v_res_2442_ = l_Lake_buildUnlessUpToDate___redArg(v_inst_2426_, v_inst_2427_, v_info_2428_, v_depTrace_2429_, v_traceFile_2430_, v_build_2431_, v_action_boxed_2441_, v_oldTrace_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
lean_dec_ref(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec(v_a_2436_);
lean_dec(v_a_2435_);
lean_dec_ref(v_oldTrace_2433_);
lean_dec_ref(v_depTrace_2429_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object* v_00_u03b9_2443_, lean_object* v_inst_2444_, lean_object* v_inst_2445_, lean_object* v_info_2446_, lean_object* v_depTrace_2447_, lean_object* v_traceFile_2448_, lean_object* v_build_2449_, uint8_t v_action_2450_, lean_object* v_oldTrace_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
lean_object* v_a_2460_; lean_object* v_a_2461_; lean_object* v_log_2463_; uint8_t v_action_2464_; uint8_t v_wantsRebuild_2465_; lean_object* v_trace_2466_; lean_object* v_buildTime_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2505_; 
v_log_2463_ = lean_ctor_get(v_a_2457_, 0);
v_action_2464_ = lean_ctor_get_uint8(v_a_2457_, sizeof(void*)*3);
v_wantsRebuild_2465_ = lean_ctor_get_uint8(v_a_2457_, sizeof(void*)*3 + 1);
v_trace_2466_ = lean_ctor_get(v_a_2457_, 1);
v_buildTime_2467_ = lean_ctor_get(v_a_2457_, 2);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_a_2457_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2469_ = v_a_2457_;
v_isShared_2470_ = v_isSharedCheck_2505_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_buildTime_2467_);
lean_inc(v_trace_2466_);
lean_inc(v_log_2463_);
lean_dec(v_a_2457_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2505_;
goto v_resetjp_2468_;
}
v___jp_2459_:
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_a_2460_);
lean_ctor_set(v___x_2462_, 1, v_a_2461_);
return v___x_2462_;
}
v_resetjp_2468_:
{
lean_object* v___x_2471_; 
lean_inc_ref(v_traceFile_2448_);
v___x_2471_ = l_Lake_readTraceFile(v_traceFile_2448_, v_log_2463_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v_a_2472_; lean_object* v_a_2473_; lean_object* v___x_2475_; 
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_a_2472_);
v_a_2473_ = lean_ctor_get(v___x_2471_, 1);
lean_inc(v_a_2473_);
lean_dec_ref(v___x_2471_);
if (v_isShared_2470_ == 0)
{
lean_ctor_set(v___x_2469_, 0, v_a_2473_);
v___x_2475_ = v___x_2469_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_a_2473_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v_trace_2466_);
lean_ctor_set(v_reuseFailAlloc_2499_, 2, v_buildTime_2467_);
lean_ctor_set_uint8(v_reuseFailAlloc_2499_, sizeof(void*)*3, v_action_2464_);
lean_ctor_set_uint8(v_reuseFailAlloc_2499_, sizeof(void*)*3 + 1, v_wantsRebuild_2465_);
v___x_2475_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
lean_object* v___x_2476_; 
v___x_2476_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2444_, v_inst_2445_, v_info_2446_, v_depTrace_2447_, v_a_2472_, v_oldTrace_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v___x_2475_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2496_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
v_a_2478_ = lean_ctor_get(v___x_2476_, 1);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2480_ = v___x_2476_;
v_isShared_2481_ = v_isSharedCheck_2496_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_inc(v_a_2477_);
lean_dec(v___x_2476_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2496_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2482_; lean_object* v_a_2484_; uint8_t v___x_2488_; uint8_t v___x_2489_; uint8_t v___x_2490_; 
v___x_2482_ = lean_box(0);
v___x_2488_ = 0;
v___x_2489_ = lean_unbox(v_a_2477_);
lean_dec(v_a_2477_);
v___x_2490_ = l_Lake_instDecidableEqOutputStatus(v___x_2489_, v___x_2488_);
if (v___x_2490_ == 0)
{
lean_dec_ref(v_a_2452_);
lean_dec_ref(v_build_2449_);
lean_dec_ref(v_traceFile_2448_);
v_a_2484_ = v_a_2478_;
goto v___jp_2483_;
}
else
{
lean_object* v___f_2491_; lean_object* v___x_2492_; 
v___f_2491_ = lean_obj_once(&l_Lake_instToOutputJsonPUnit___closed__0, &l_Lake_instToOutputJsonPUnit___closed__0_once, _init_l_Lake_instToOutputJsonPUnit___closed__0);
v___x_2492_ = l_Lake_buildAction___redArg(v___f_2491_, v_depTrace_2447_, v_traceFile_2448_, v_build_2449_, v_action_2450_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2478_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 1);
lean_inc(v_a_2493_);
lean_dec_ref(v___x_2492_);
v_a_2484_ = v_a_2493_;
goto v___jp_2483_;
}
else
{
lean_object* v_a_2494_; lean_object* v_a_2495_; 
lean_del_object(v___x_2480_);
v_a_2494_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2494_);
v_a_2495_ = lean_ctor_get(v___x_2492_, 1);
lean_inc(v_a_2495_);
lean_dec_ref(v___x_2492_);
v_a_2460_ = v_a_2494_;
v_a_2461_ = v_a_2495_;
goto v___jp_2459_;
}
}
v___jp_2483_:
{
lean_object* v___x_2486_; 
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 1, v_a_2484_);
lean_ctor_set(v___x_2480_, 0, v___x_2482_);
v___x_2486_ = v___x_2480_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2482_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v_a_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v_a_2498_; 
lean_dec_ref(v_a_2452_);
lean_dec_ref(v_build_2449_);
lean_dec_ref(v_traceFile_2448_);
v_a_2497_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2497_);
v_a_2498_ = lean_ctor_get(v___x_2476_, 1);
lean_inc(v_a_2498_);
lean_dec_ref(v___x_2476_);
v_a_2460_ = v_a_2497_;
v_a_2461_ = v_a_2498_;
goto v___jp_2459_;
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v_a_2501_; lean_object* v___x_2503_; 
lean_dec_ref(v_a_2452_);
lean_dec_ref(v_build_2449_);
lean_dec_ref(v_traceFile_2448_);
lean_dec(v_info_2446_);
lean_dec_ref(v_inst_2445_);
lean_dec_ref(v_inst_2444_);
v_a_2500_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_a_2500_);
v_a_2501_ = lean_ctor_get(v___x_2471_, 1);
lean_inc(v_a_2501_);
lean_dec_ref(v___x_2471_);
if (v_isShared_2470_ == 0)
{
lean_ctor_set(v___x_2469_, 0, v_a_2501_);
v___x_2503_ = v___x_2469_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2501_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_trace_2466_);
lean_ctor_set(v_reuseFailAlloc_2504_, 2, v_buildTime_2467_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*3, v_action_2464_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*3 + 1, v_wantsRebuild_2465_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
v_a_2460_ = v_a_2500_;
v_a_2461_ = v___x_2503_;
goto v___jp_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object* v_00_u03b9_2506_, lean_object* v_inst_2507_, lean_object* v_inst_2508_, lean_object* v_info_2509_, lean_object* v_depTrace_2510_, lean_object* v_traceFile_2511_, lean_object* v_build_2512_, lean_object* v_action_2513_, lean_object* v_oldTrace_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
uint8_t v_action_boxed_2522_; lean_object* v_res_2523_; 
v_action_boxed_2522_ = lean_unbox(v_action_2513_);
v_res_2523_ = l_Lake_buildUnlessUpToDate(v_00_u03b9_2506_, v_inst_2507_, v_inst_2508_, v_info_2509_, v_depTrace_2510_, v_traceFile_2511_, v_build_2512_, v_action_boxed_2522_, v_oldTrace_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec(v_a_2518_);
lean_dec(v_a_2517_);
lean_dec(v_a_2516_);
lean_dec_ref(v_oldTrace_2514_);
lean_dec_ref(v_depTrace_2510_);
return v_res_2523_;
}
}
static lean_object* _init_l_Lake_writeFileHash___closed__0(void){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_mk_string_unchecked(".hash", 5, 5);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object* v_file_2525_, uint64_t v_hash_2526_){
_start:
{
lean_object* v___x_2528_; lean_object* v_hashFile_2529_; lean_object* v___x_2530_; 
v___x_2528_ = lean_obj_once(&l_Lake_writeFileHash___closed__0, &l_Lake_writeFileHash___closed__0_once, _init_l_Lake_writeFileHash___closed__0);
v_hashFile_2529_ = lean_string_append(v_file_2525_, v___x_2528_);
lean_inc_ref(v_hashFile_2529_);
v___x_2530_ = l_Lake_createParentDirs(v_hashFile_2529_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec_ref(v___x_2530_);
v___x_2531_ = l_Lake_lowerHexUInt64(v_hash_2526_);
v___x_2532_ = l_IO_FS_writeFile(v_hashFile_2529_, v___x_2531_);
lean_dec_ref(v___x_2531_);
lean_dec_ref(v_hashFile_2529_);
return v___x_2532_;
}
else
{
lean_dec_ref(v_hashFile_2529_);
return v___x_2530_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object* v_file_2533_, lean_object* v_hash_2534_, lean_object* v_a_2535_){
_start:
{
uint64_t v_hash_boxed_2536_; lean_object* v_res_2537_; 
v_hash_boxed_2536_ = lean_unbox_uint64(v_hash_2534_);
lean_dec_ref(v_hash_2534_);
v_res_2537_ = l_Lake_writeFileHash(v_file_2533_, v_hash_boxed_2536_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object* v_file_2538_, uint8_t v_text_2539_){
_start:
{
lean_object* v___y_2542_; 
if (v_text_2539_ == 0)
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lake_computeBinFileHash(v_file_2538_);
v___y_2542_ = v___x_2554_;
goto v___jp_2541_;
}
else
{
lean_object* v___x_2555_; 
v___x_2555_ = l_Lake_computeTextFileHash(v_file_2538_);
v___y_2542_ = v___x_2555_;
goto v___jp_2541_;
}
v___jp_2541_:
{
if (lean_obj_tag(v___y_2542_) == 0)
{
lean_object* v_a_2543_; uint64_t v___x_2544_; lean_object* v___x_2545_; 
v_a_2543_ = lean_ctor_get(v___y_2542_, 0);
lean_inc(v_a_2543_);
lean_dec_ref(v___y_2542_);
v___x_2544_ = lean_unbox_uint64(v_a_2543_);
lean_dec(v_a_2543_);
v___x_2545_ = l_Lake_writeFileHash(v_file_2538_, v___x_2544_);
return v___x_2545_;
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2553_; 
lean_dec_ref(v_file_2538_);
v_a_2546_ = lean_ctor_get(v___y_2542_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___y_2542_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2548_ = v___y_2542_;
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___y_2542_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2551_; 
if (v_isShared_2549_ == 0)
{
v___x_2551_ = v___x_2548_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_a_2546_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object* v_file_2556_, lean_object* v_text_2557_, lean_object* v_a_2558_){
_start:
{
uint8_t v_text_boxed_2559_; lean_object* v_res_2560_; 
v_text_boxed_2559_ = lean_unbox(v_text_2557_);
v_res_2560_ = l_Lake_cacheFileHash(v_file_2556_, v_text_boxed_2559_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object* v_file_2561_){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = lean_obj_once(&l_Lake_writeFileHash___closed__0, &l_Lake_writeFileHash___closed__0_once, _init_l_Lake_writeFileHash___closed__0);
v___x_2564_ = lean_string_append(v_file_2561_, v___x_2563_);
v___x_2565_ = l_Lake_removeFileIfExists(v___x_2564_);
lean_dec_ref(v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object* v_file_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lake_clearFileHash(v_file_2566_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object* v_file_2569_, uint8_t v_text_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_){
_start:
{
lean_object* v_toBuildConfig_2574_; uint8_t v_trustHash_2575_; lean_object* v___x_2576_; lean_object* v_hashFile_2577_; lean_object* v___y_2579_; lean_object* v_val_2580_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2665_; 
v_toBuildConfig_2574_ = lean_ctor_get(v_a_2571_, 0);
v_trustHash_2575_ = lean_ctor_get_uint8(v_toBuildConfig_2574_, sizeof(void*)*2 + 1);
v___x_2576_ = lean_obj_once(&l_Lake_writeFileHash___closed__0, &l_Lake_writeFileHash___closed__0_once, _init_l_Lake_writeFileHash___closed__0);
lean_inc_ref(v_file_2569_);
v_hashFile_2577_ = lean_string_append(v_file_2569_, v___x_2576_);
if (v_trustHash_2575_ == 0)
{
v___y_2665_ = v_a_2572_;
goto v___jp_2664_;
}
else
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Lake_Hash_load_x3f(v_hashFile_2577_);
if (lean_obj_tag(v___x_2670_) == 1)
{
lean_object* v_val_2671_; lean_object* v___x_2672_; 
lean_dec_ref(v_hashFile_2577_);
lean_dec_ref(v_file_2569_);
v_val_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_val_2671_);
lean_dec_ref(v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v_val_2671_);
lean_ctor_set(v___x_2672_, 1, v_a_2572_);
return v___x_2672_;
}
else
{
lean_dec(v___x_2670_);
v___y_2665_ = v_a_2572_;
goto v___jp_2664_;
}
}
v___jp_2578_:
{
if (lean_obj_tag(v_val_2580_) == 0)
{
uint8_t v_action_2581_; uint8_t v_wantsRebuild_2582_; lean_object* v_trace_2583_; lean_object* v_buildTime_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2628_; 
v_action_2581_ = lean_ctor_get_uint8(v___y_2579_, sizeof(void*)*3);
v_wantsRebuild_2582_ = lean_ctor_get_uint8(v___y_2579_, sizeof(void*)*3 + 1);
v_trace_2583_ = lean_ctor_get(v___y_2579_, 1);
v_buildTime_2584_ = lean_ctor_get(v___y_2579_, 2);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___y_2579_);
if (v_isSharedCheck_2628_ == 0)
{
lean_object* v_unused_2629_; 
v_unused_2629_ = lean_ctor_get(v___y_2579_, 0);
lean_dec(v_unused_2629_);
v___x_2586_ = v___y_2579_;
v_isShared_2587_ = v_isSharedCheck_2628_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_buildTime_2584_);
lean_inc(v_trace_2583_);
lean_dec(v___y_2579_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2628_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v_a_2588_; lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2627_; 
v_a_2588_ = lean_ctor_get(v_val_2580_, 0);
v_a_2589_ = lean_ctor_get(v_val_2580_, 1);
v_isSharedCheck_2627_ = !lean_is_exclusive(v_val_2580_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2591_ = v_val_2580_;
v_isShared_2592_ = v_isSharedCheck_2627_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_inc(v_a_2588_);
lean_dec(v_val_2580_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2627_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2593_; 
lean_inc_ref(v_hashFile_2577_);
v___x_2593_ = l_Lake_createParentDirs(v_hashFile_2577_);
if (lean_obj_tag(v___x_2593_) == 0)
{
uint64_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_dec_ref(v___x_2593_);
v___x_2594_ = lean_unbox_uint64(v_a_2588_);
v___x_2595_ = l_Lake_lowerHexUInt64(v___x_2594_);
v___x_2596_ = l_IO_FS_writeFile(v_hashFile_2577_, v___x_2595_);
lean_dec_ref(v___x_2595_);
lean_dec_ref(v_hashFile_2577_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v___x_2598_; 
lean_dec_ref(v___x_2596_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v_a_2589_);
v___x_2598_ = v___x_2586_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2589_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v_trace_2583_);
lean_ctor_set(v_reuseFailAlloc_2602_, 2, v_buildTime_2584_);
lean_ctor_set_uint8(v_reuseFailAlloc_2602_, sizeof(void*)*3, v_action_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2602_, sizeof(void*)*3 + 1, v_wantsRebuild_2582_);
v___x_2598_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2600_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 1, v___x_2598_);
v___x_2600_ = v___x_2591_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2588_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2610_; 
lean_dec(v_a_2588_);
v_a_2603_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2603_);
lean_dec_ref(v___x_2596_);
v___x_2604_ = lean_io_error_to_string(v_a_2603_);
v___x_2605_ = 3;
v___x_2606_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set_uint8(v___x_2606_, sizeof(void*)*1, v___x_2605_);
v___x_2607_ = lean_array_get_size(v_a_2589_);
v___x_2608_ = lean_array_push(v_a_2589_, v___x_2606_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2608_);
v___x_2610_ = v___x_2586_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_trace_2583_);
lean_ctor_set(v_reuseFailAlloc_2614_, 2, v_buildTime_2584_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*3, v_action_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2614_, sizeof(void*)*3 + 1, v_wantsRebuild_2582_);
v___x_2610_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2612_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set_tag(v___x_2591_, 1);
lean_ctor_set(v___x_2591_, 1, v___x_2610_);
lean_ctor_set(v___x_2591_, 0, v___x_2607_);
v___x_2612_ = v___x_2591_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2607_);
lean_ctor_set(v_reuseFailAlloc_2613_, 1, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2622_; 
lean_dec(v_a_2588_);
lean_dec_ref(v_hashFile_2577_);
v_a_2615_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2615_);
lean_dec_ref(v___x_2593_);
v___x_2616_ = lean_io_error_to_string(v_a_2615_);
v___x_2617_ = 3;
v___x_2618_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set_uint8(v___x_2618_, sizeof(void*)*1, v___x_2617_);
v___x_2619_ = lean_array_get_size(v_a_2589_);
v___x_2620_ = lean_array_push(v_a_2589_, v___x_2618_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2620_);
v___x_2622_ = v___x_2586_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v___x_2620_);
lean_ctor_set(v_reuseFailAlloc_2626_, 1, v_trace_2583_);
lean_ctor_set(v_reuseFailAlloc_2626_, 2, v_buildTime_2584_);
lean_ctor_set_uint8(v_reuseFailAlloc_2626_, sizeof(void*)*3, v_action_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2626_, sizeof(void*)*3 + 1, v_wantsRebuild_2582_);
v___x_2622_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
lean_object* v___x_2624_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set_tag(v___x_2591_, 1);
lean_ctor_set(v___x_2591_, 1, v___x_2622_);
lean_ctor_set(v___x_2591_, 0, v___x_2619_);
v___x_2624_ = v___x_2591_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2625_, 1, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
}
else
{
uint8_t v_action_2630_; uint8_t v_wantsRebuild_2631_; lean_object* v_trace_2632_; lean_object* v_buildTime_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2649_; 
lean_dec_ref(v_hashFile_2577_);
v_action_2630_ = lean_ctor_get_uint8(v___y_2579_, sizeof(void*)*3);
v_wantsRebuild_2631_ = lean_ctor_get_uint8(v___y_2579_, sizeof(void*)*3 + 1);
v_trace_2632_ = lean_ctor_get(v___y_2579_, 1);
v_buildTime_2633_ = lean_ctor_get(v___y_2579_, 2);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___y_2579_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v___y_2579_, 0);
lean_dec(v_unused_2650_);
v___x_2635_ = v___y_2579_;
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_buildTime_2633_);
lean_inc(v_trace_2632_);
lean_dec(v___y_2579_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v_a_2637_; lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2648_; 
v_a_2637_ = lean_ctor_get(v_val_2580_, 0);
v_a_2638_ = lean_ctor_get(v_val_2580_, 1);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_val_2580_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2640_ = v_val_2580_;
v_isShared_2641_ = v_isSharedCheck_2648_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_inc(v_a_2637_);
lean_dec(v_val_2580_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2648_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v_a_2638_);
v___x_2643_ = v___x_2635_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2638_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_trace_2632_);
lean_ctor_set(v_reuseFailAlloc_2647_, 2, v_buildTime_2633_);
lean_ctor_set_uint8(v_reuseFailAlloc_2647_, sizeof(void*)*3, v_action_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2647_, sizeof(void*)*3 + 1, v_wantsRebuild_2631_);
v___x_2643_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
lean_object* v___x_2645_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 1, v___x_2643_);
v___x_2645_ = v___x_2640_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2637_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
}
}
v___jp_2651_:
{
if (lean_obj_tag(v___y_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; 
v_a_2655_ = lean_ctor_get(v___y_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref(v___y_2654_);
v___x_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_a_2655_);
lean_ctor_set(v___x_2656_, 1, v___y_2653_);
v___y_2579_ = v___y_2652_;
v_val_2580_ = v___x_2656_;
goto v___jp_2578_;
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v_a_2657_ = lean_ctor_get(v___y_2654_, 0);
lean_inc(v_a_2657_);
lean_dec_ref(v___y_2654_);
v___x_2658_ = lean_io_error_to_string(v_a_2657_);
v___x_2659_ = 3;
v___x_2660_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2660_, 0, v___x_2658_);
lean_ctor_set_uint8(v___x_2660_, sizeof(void*)*1, v___x_2659_);
v___x_2661_ = lean_array_get_size(v___y_2653_);
v___x_2662_ = lean_array_push(v___y_2653_, v___x_2660_);
v___x_2663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2661_);
lean_ctor_set(v___x_2663_, 1, v___x_2662_);
v___y_2579_ = v___y_2652_;
v_val_2580_ = v___x_2663_;
goto v___jp_2578_;
}
}
v___jp_2664_:
{
if (v_text_2570_ == 0)
{
lean_object* v_log_2666_; lean_object* v___x_2667_; 
v_log_2666_ = lean_ctor_get(v___y_2665_, 0);
lean_inc_ref(v_log_2666_);
v___x_2667_ = l_Lake_computeBinFileHash(v_file_2569_);
lean_dec_ref(v_file_2569_);
v___y_2652_ = v___y_2665_;
v___y_2653_ = v_log_2666_;
v___y_2654_ = v___x_2667_;
goto v___jp_2651_;
}
else
{
lean_object* v_log_2668_; lean_object* v___x_2669_; 
v_log_2668_ = lean_ctor_get(v___y_2665_, 0);
lean_inc_ref(v_log_2668_);
v___x_2669_ = l_Lake_computeTextFileHash(v_file_2569_);
lean_dec_ref(v_file_2569_);
v___y_2652_ = v___y_2665_;
v___y_2653_ = v_log_2668_;
v___y_2654_ = v___x_2669_;
goto v___jp_2651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object* v_file_2673_, lean_object* v_text_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_){
_start:
{
uint8_t v_text_boxed_2678_; lean_object* v_res_2679_; 
v_text_boxed_2678_ = lean_unbox(v_text_2674_);
v_res_2679_ = l_Lake_fetchFileHash___redArg(v_file_2673_, v_text_boxed_2678_, v_a_2675_, v_a_2676_);
lean_dec_ref(v_a_2675_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object* v_file_2680_, uint8_t v_text_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lake_fetchFileHash___redArg(v_file_2680_, v_text_2681_, v_a_2686_, v_a_2687_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object* v_file_2690_, lean_object* v_text_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
uint8_t v_text_boxed_2699_; lean_object* v_res_2700_; 
v_text_boxed_2699_ = lean_unbox(v_text_2691_);
v_res_2700_ = l_Lake_fetchFileHash(v_file_2690_, v_text_boxed_2699_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_);
lean_dec_ref(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec(v_a_2694_);
lean_dec(v_a_2693_);
lean_dec_ref(v_a_2692_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object* v_file_2701_, uint8_t v_text_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
lean_object* v___x_2706_; 
lean_inc_ref(v_file_2701_);
v___x_2706_ = l_Lake_fetchFileHash___redArg(v_file_2701_, v_text_2702_, v_a_2703_, v_a_2704_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2745_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 1);
v_a_2708_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2710_ = v___x_2706_;
v_isShared_2711_ = v_isSharedCheck_2745_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2707_);
lean_inc(v_a_2708_);
lean_dec(v___x_2706_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2745_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v_log_2712_; uint8_t v_action_2713_; uint8_t v_wantsRebuild_2714_; lean_object* v_trace_2715_; lean_object* v_buildTime_2716_; lean_object* v___x_2717_; 
v_log_2712_ = lean_ctor_get(v_a_2707_, 0);
v_action_2713_ = lean_ctor_get_uint8(v_a_2707_, sizeof(void*)*3);
v_wantsRebuild_2714_ = lean_ctor_get_uint8(v_a_2707_, sizeof(void*)*3 + 1);
v_trace_2715_ = lean_ctor_get(v_a_2707_, 1);
v_buildTime_2716_ = lean_ctor_get(v_a_2707_, 2);
v___x_2717_ = lean_io_metadata(v_file_2701_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v_modified_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; uint64_t v___x_2722_; lean_object* v___x_2724_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref(v___x_2717_);
v_modified_2719_ = lean_ctor_get(v_a_2718_, 1);
lean_inc_ref(v_modified_2719_);
lean_dec(v_a_2718_);
v___x_2720_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_2721_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_2721_, 0, v_file_2701_);
lean_ctor_set(v___x_2721_, 1, v___x_2720_);
lean_ctor_set(v___x_2721_, 2, v_modified_2719_);
v___x_2722_ = lean_unbox_uint64(v_a_2708_);
lean_dec(v_a_2708_);
lean_ctor_set_uint64(v___x_2721_, sizeof(void*)*3, v___x_2722_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2721_);
v___x_2724_ = v___x_2710_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2721_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v_a_2707_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
else
{
lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2741_; 
lean_inc(v_buildTime_2716_);
lean_inc_ref(v_trace_2715_);
lean_inc_ref(v_log_2712_);
lean_dec(v_a_2708_);
lean_dec_ref(v_file_2701_);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_a_2707_);
if (v_isSharedCheck_2741_ == 0)
{
lean_object* v_unused_2742_; lean_object* v_unused_2743_; lean_object* v_unused_2744_; 
v_unused_2742_ = lean_ctor_get(v_a_2707_, 2);
lean_dec(v_unused_2742_);
v_unused_2743_ = lean_ctor_get(v_a_2707_, 1);
lean_dec(v_unused_2743_);
v_unused_2744_ = lean_ctor_get(v_a_2707_, 0);
lean_dec(v_unused_2744_);
v___x_2727_ = v_a_2707_;
v_isShared_2728_ = v_isSharedCheck_2741_;
goto v_resetjp_2726_;
}
else
{
lean_dec(v_a_2707_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2741_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v_a_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2736_; 
v_a_2729_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2729_);
lean_dec_ref(v___x_2717_);
v___x_2730_ = lean_io_error_to_string(v_a_2729_);
v___x_2731_ = 3;
v___x_2732_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2732_, 0, v___x_2730_);
lean_ctor_set_uint8(v___x_2732_, sizeof(void*)*1, v___x_2731_);
v___x_2733_ = lean_array_get_size(v_log_2712_);
v___x_2734_ = lean_array_push(v_log_2712_, v___x_2732_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___x_2734_);
v___x_2736_ = v___x_2727_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___x_2734_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v_trace_2715_);
lean_ctor_set(v_reuseFailAlloc_2740_, 2, v_buildTime_2716_);
lean_ctor_set_uint8(v_reuseFailAlloc_2740_, sizeof(void*)*3, v_action_2713_);
lean_ctor_set_uint8(v_reuseFailAlloc_2740_, sizeof(void*)*3 + 1, v_wantsRebuild_2714_);
v___x_2736_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
lean_object* v___x_2738_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 1);
lean_ctor_set(v___x_2710_, 1, v___x_2736_);
lean_ctor_set(v___x_2710_, 0, v___x_2733_);
v___x_2738_ = v___x_2710_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2733_);
lean_ctor_set(v_reuseFailAlloc_2739_, 1, v___x_2736_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v_file_2701_);
v_a_2746_ = lean_ctor_get(v___x_2706_, 0);
v_a_2747_ = lean_ctor_get(v___x_2706_, 1);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2706_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_inc(v_a_2746_);
lean_dec(v___x_2706_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2746_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object* v_file_2755_, lean_object* v_text_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_){
_start:
{
uint8_t v_text_boxed_2760_; lean_object* v_res_2761_; 
v_text_boxed_2760_ = lean_unbox(v_text_2756_);
v_res_2761_ = l_Lake_fetchFileTrace___redArg(v_file_2755_, v_text_boxed_2760_, v_a_2757_, v_a_2758_);
lean_dec_ref(v_a_2757_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object* v_file_2762_, uint8_t v_text_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = l_Lake_fetchFileTrace___redArg(v_file_2762_, v_text_2763_, v_a_2768_, v_a_2769_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object* v_file_2772_, lean_object* v_text_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_){
_start:
{
uint8_t v_text_boxed_2781_; lean_object* v_res_2782_; 
v_text_boxed_2781_ = lean_unbox(v_text_2773_);
v_res_2782_ = l_Lake_fetchFileTrace(v_file_2772_, v_text_boxed_2781_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
lean_dec_ref(v_a_2778_);
lean_dec(v_a_2777_);
lean_dec(v_a_2776_);
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object* v_val_2783_, lean_object* v_a_x3f_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v___x_2787_; lean_object* v_log_2788_; uint8_t v_action_2789_; uint8_t v_wantsRebuild_2790_; lean_object* v_trace_2791_; lean_object* v_buildTime_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2803_; 
v___x_2787_ = lean_io_mono_ms_now();
v_log_2788_ = lean_ctor_get(v___y_2785_, 0);
v_action_2789_ = lean_ctor_get_uint8(v___y_2785_, sizeof(void*)*3);
v_wantsRebuild_2790_ = lean_ctor_get_uint8(v___y_2785_, sizeof(void*)*3 + 1);
v_trace_2791_ = lean_ctor_get(v___y_2785_, 1);
v_buildTime_2792_ = lean_ctor_get(v___y_2785_, 2);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___y_2785_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2794_ = v___y_2785_;
v_isShared_2795_ = v_isSharedCheck_2803_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_buildTime_2792_);
lean_inc(v_trace_2791_);
lean_inc(v_log_2788_);
lean_dec(v___y_2785_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2803_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2800_; 
v___x_2796_ = lean_nat_sub(v___x_2787_, v_val_2783_);
lean_dec(v___x_2787_);
v___x_2797_ = lean_box(0);
v___x_2798_ = lean_nat_add(v_buildTime_2792_, v___x_2796_);
lean_dec(v___x_2796_);
lean_dec(v_buildTime_2792_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 2, v___x_2798_);
v___x_2800_ = v___x_2794_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_log_2788_);
lean_ctor_set(v_reuseFailAlloc_2802_, 1, v_trace_2791_);
lean_ctor_set(v_reuseFailAlloc_2802_, 2, v___x_2798_);
lean_ctor_set_uint8(v_reuseFailAlloc_2802_, sizeof(void*)*3, v_action_2789_);
lean_ctor_set_uint8(v_reuseFailAlloc_2802_, sizeof(void*)*3 + 1, v_wantsRebuild_2790_);
v___x_2800_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
lean_object* v___x_2801_; 
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2797_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
return v___x_2801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object* v_val_2804_, lean_object* v_a_x3f_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v_val_2804_, v_a_x3f_2805_, v___y_2806_);
lean_dec(v_a_x3f_2805_);
lean_dec(v_val_2804_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object* v_build_2809_, lean_object* v_file_2810_, lean_object* v_a_2811_, lean_object* v_depTrace_2812_, lean_object* v_traceFile_2813_, uint8_t v_action_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_a_2822_; lean_object* v_a_2823_; lean_object* v_log_2826_; uint8_t v_action_2827_; uint8_t v_wantsRebuild_2828_; lean_object* v_trace_2829_; lean_object* v_buildTime_2830_; lean_object* v_toBuildConfig_2836_; lean_object* v_log_2837_; uint8_t v_action_2838_; uint8_t v_wantsRebuild_2839_; lean_object* v_trace_2840_; lean_object* v_buildTime_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2964_; 
v_toBuildConfig_2836_ = lean_ctor_get(v_a_2818_, 0);
v_log_2837_ = lean_ctor_get(v_a_2819_, 0);
v_action_2838_ = lean_ctor_get_uint8(v_a_2819_, sizeof(void*)*3);
v_wantsRebuild_2839_ = lean_ctor_get_uint8(v_a_2819_, sizeof(void*)*3 + 1);
v_trace_2840_ = lean_ctor_get(v_a_2819_, 1);
v_buildTime_2841_ = lean_ctor_get(v_a_2819_, 2);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_a_2819_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2843_ = v_a_2819_;
v_isShared_2844_ = v_isSharedCheck_2964_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_buildTime_2841_);
lean_inc(v_trace_2840_);
lean_inc(v_log_2837_);
lean_dec(v_a_2819_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2964_;
goto v_resetjp_2842_;
}
v___jp_2821_:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2824_, 0, v_a_2822_);
lean_ctor_set(v___x_2824_, 1, v_a_2823_);
return v___x_2824_;
}
v___jp_2825_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2831_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__1, &l_Lake_buildAction___redArg___closed__1_once, _init_l_Lake_buildAction___redArg___closed__1);
v___x_2832_ = lean_array_get_size(v_log_2826_);
v___x_2833_ = lean_array_push(v_log_2826_, v___x_2831_);
v___x_2834_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
lean_ctor_set(v___x_2834_, 1, v_trace_2829_);
lean_ctor_set(v___x_2834_, 2, v_buildTime_2830_);
lean_ctor_set_uint8(v___x_2834_, sizeof(void*)*3, v_action_2827_);
lean_ctor_set_uint8(v___x_2834_, sizeof(void*)*3 + 1, v_wantsRebuild_2828_);
v___x_2835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2832_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
return v___x_2835_;
}
v_resetjp_2842_:
{
uint8_t v_noBuild_2845_; uint8_t v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v_noBuild_2845_ = lean_ctor_get_uint8(v_toBuildConfig_2836_, sizeof(void*)*2 + 2);
v___x_2846_ = l_Lake_JobAction_merge(v_action_2838_, v_action_2814_);
v___x_2847_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__2, &l_Lake_buildAction___redArg___closed__2_once, _init_l_Lake_buildAction___redArg___closed__2);
lean_inc_ref(v_traceFile_2813_);
v___x_2848_ = l_System_FilePath_addExtension(v_traceFile_2813_, v___x_2847_);
if (v_noBuild_2845_ == 0)
{
lean_object* v___x_2849_; lean_object* v___x_2851_; 
v___x_2849_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_2837_);
if (v_isShared_2844_ == 0)
{
v___x_2851_ = v___x_2843_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_log_2837_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_trace_2840_);
lean_ctor_set(v_reuseFailAlloc_2948_, 2, v_buildTime_2841_);
lean_ctor_set_uint8(v_reuseFailAlloc_2948_, sizeof(void*)*3 + 1, v_wantsRebuild_2839_);
v___x_2851_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; lean_object* v_a_2854_; lean_object* v_a_2855_; 
lean_ctor_set_uint8(v___x_2851_, sizeof(void*)*3, v___x_2846_);
lean_inc_ref(v_a_2818_);
lean_inc(v_a_2817_);
lean_inc(v_a_2816_);
lean_inc(v_a_2815_);
v___x_2852_ = lean_apply_7(v_build_2809_, v_a_2811_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v___x_2851_, lean_box(0));
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2859_; lean_object* v_log_2860_; uint8_t v_action_2861_; uint8_t v_wantsRebuild_2862_; lean_object* v_trace_2863_; lean_object* v_buildTime_2864_; lean_object* v___x_2865_; 
v_a_2859_ = lean_ctor_get(v___x_2852_, 1);
lean_inc(v_a_2859_);
lean_dec_ref(v___x_2852_);
v_log_2860_ = lean_ctor_get(v_a_2859_, 0);
v_action_2861_ = lean_ctor_get_uint8(v_a_2859_, sizeof(void*)*3);
v_wantsRebuild_2862_ = lean_ctor_get_uint8(v_a_2859_, sizeof(void*)*3 + 1);
v_trace_2863_ = lean_ctor_get(v_a_2859_, 1);
v_buildTime_2864_ = lean_ctor_get(v_a_2859_, 2);
v___x_2865_ = l_Lake_clearFileHash(v_file_2810_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2866_);
lean_dec_ref(v___x_2865_);
v___x_2867_ = lean_array_get_size(v_log_2837_);
lean_dec_ref(v_log_2837_);
v___x_2868_ = lean_array_get_size(v_log_2860_);
v___x_2869_ = l_Array_extract___redArg(v_log_2860_, v___x_2867_, v___x_2868_);
v___x_2870_ = lean_box(0);
v___x_2871_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2812_, v___x_2870_, v___x_2869_);
v___x_2872_ = l_Lake_BuildMetadata_writeFile(v_traceFile_2813_, v___x_2871_);
if (lean_obj_tag(v___x_2872_) == 0)
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2913_; 
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2913_ == 0)
{
lean_object* v_unused_2914_; 
v_unused_2914_ = lean_ctor_get(v___x_2872_, 0);
lean_dec(v_unused_2914_);
v___x_2874_ = v___x_2872_;
v_isShared_2875_ = v_isSharedCheck_2913_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v___x_2872_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2913_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lake_removeFileIfExists(v___x_2848_);
lean_dec_ref(v___x_2848_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2896_; 
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; 
v_unused_2897_ = lean_ctor_get(v___x_2876_, 0);
lean_dec(v_unused_2897_);
v___x_2878_ = v___x_2876_;
v_isShared_2879_ = v_isSharedCheck_2896_;
goto v_resetjp_2877_;
}
else
{
lean_dec(v___x_2876_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2896_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
lean_inc(v_a_2866_);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 0, v_a_2866_);
v___x_2881_ = v___x_2878_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2866_);
v___x_2881_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2883_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 1);
lean_ctor_set(v___x_2874_, 0, v___x_2881_);
v___x_2883_ = v___x_2874_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2881_);
v___x_2883_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
v___x_2884_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2849_, v___x_2883_, v_a_2859_);
lean_dec_ref(v___x_2883_);
lean_dec(v___x_2849_);
v_a_2885_ = lean_ctor_get(v___x_2884_, 1);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2892_ == 0)
{
lean_object* v_unused_2893_; 
v_unused_2893_ = lean_ctor_get(v___x_2884_, 0);
lean_dec(v_unused_2893_);
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v_a_2866_);
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2866_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
}
else
{
lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2909_; 
lean_inc(v_buildTime_2864_);
lean_inc_ref(v_trace_2863_);
lean_inc_ref(v_log_2860_);
lean_del_object(v___x_2874_);
lean_dec(v_a_2866_);
v_isSharedCheck_2909_ = !lean_is_exclusive(v_a_2859_);
if (v_isSharedCheck_2909_ == 0)
{
lean_object* v_unused_2910_; lean_object* v_unused_2911_; lean_object* v_unused_2912_; 
v_unused_2910_ = lean_ctor_get(v_a_2859_, 2);
lean_dec(v_unused_2910_);
v_unused_2911_ = lean_ctor_get(v_a_2859_, 1);
lean_dec(v_unused_2911_);
v_unused_2912_ = lean_ctor_get(v_a_2859_, 0);
lean_dec(v_unused_2912_);
v___x_2899_ = v_a_2859_;
v_isShared_2900_ = v_isSharedCheck_2909_;
goto v_resetjp_2898_;
}
else
{
lean_dec(v_a_2859_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2909_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v_a_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2907_; 
v_a_2901_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2901_);
lean_dec_ref(v___x_2876_);
v___x_2902_ = lean_io_error_to_string(v_a_2901_);
v___x_2903_ = 3;
v___x_2904_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2904_, 0, v___x_2902_);
lean_ctor_set_uint8(v___x_2904_, sizeof(void*)*1, v___x_2903_);
v___x_2905_ = lean_array_push(v_log_2860_, v___x_2904_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 0, v___x_2905_);
v___x_2907_ = v___x_2899_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2908_, 1, v_trace_2863_);
lean_ctor_set(v_reuseFailAlloc_2908_, 2, v_buildTime_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2908_, sizeof(void*)*3, v_action_2861_);
lean_ctor_set_uint8(v_reuseFailAlloc_2908_, sizeof(void*)*3 + 1, v_wantsRebuild_2862_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
v_a_2854_ = v___x_2868_;
v_a_2855_ = v___x_2907_;
goto v___jp_2853_;
}
}
}
}
}
else
{
lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2926_; 
lean_inc(v_buildTime_2864_);
lean_inc_ref(v_trace_2863_);
lean_inc_ref(v_log_2860_);
lean_dec(v_a_2866_);
lean_dec_ref(v___x_2848_);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_a_2859_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; lean_object* v_unused_2928_; lean_object* v_unused_2929_; 
v_unused_2927_ = lean_ctor_get(v_a_2859_, 2);
lean_dec(v_unused_2927_);
v_unused_2928_ = lean_ctor_get(v_a_2859_, 1);
lean_dec(v_unused_2928_);
v_unused_2929_ = lean_ctor_get(v_a_2859_, 0);
lean_dec(v_unused_2929_);
v___x_2916_ = v_a_2859_;
v_isShared_2917_ = v_isSharedCheck_2926_;
goto v_resetjp_2915_;
}
else
{
lean_dec(v_a_2859_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2926_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v_a_2918_; lean_object* v___x_2919_; uint8_t v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v_a_2918_ = lean_ctor_get(v___x_2872_, 0);
lean_inc(v_a_2918_);
lean_dec_ref(v___x_2872_);
v___x_2919_ = lean_io_error_to_string(v_a_2918_);
v___x_2920_ = 3;
v___x_2921_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2921_, 0, v___x_2919_);
lean_ctor_set_uint8(v___x_2921_, sizeof(void*)*1, v___x_2920_);
v___x_2922_ = lean_array_push(v_log_2860_, v___x_2921_);
if (v_isShared_2917_ == 0)
{
lean_ctor_set(v___x_2916_, 0, v___x_2922_);
v___x_2924_ = v___x_2916_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_trace_2863_);
lean_ctor_set(v_reuseFailAlloc_2925_, 2, v_buildTime_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2925_, sizeof(void*)*3, v_action_2861_);
lean_ctor_set_uint8(v_reuseFailAlloc_2925_, sizeof(void*)*3 + 1, v_wantsRebuild_2862_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
v_a_2854_ = v___x_2868_;
v_a_2855_ = v___x_2924_;
goto v___jp_2853_;
}
}
}
}
else
{
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2942_; 
lean_inc(v_buildTime_2864_);
lean_inc_ref(v_trace_2863_);
lean_inc_ref(v_log_2860_);
lean_dec_ref(v___x_2848_);
lean_dec_ref(v_log_2837_);
lean_dec_ref(v_traceFile_2813_);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_a_2859_);
if (v_isSharedCheck_2942_ == 0)
{
lean_object* v_unused_2943_; lean_object* v_unused_2944_; lean_object* v_unused_2945_; 
v_unused_2943_ = lean_ctor_get(v_a_2859_, 2);
lean_dec(v_unused_2943_);
v_unused_2944_ = lean_ctor_get(v_a_2859_, 1);
lean_dec(v_unused_2944_);
v_unused_2945_ = lean_ctor_get(v_a_2859_, 0);
lean_dec(v_unused_2945_);
v___x_2931_ = v_a_2859_;
v_isShared_2932_ = v_isSharedCheck_2942_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v_a_2859_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2942_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v_a_2933_; lean_object* v___x_2934_; uint8_t v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2940_; 
v_a_2933_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2933_);
lean_dec_ref(v___x_2865_);
v___x_2934_ = lean_io_error_to_string(v_a_2933_);
v___x_2935_ = 3;
v___x_2936_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2936_, 0, v___x_2934_);
lean_ctor_set_uint8(v___x_2936_, sizeof(void*)*1, v___x_2935_);
v___x_2937_ = lean_array_get_size(v_log_2860_);
v___x_2938_ = lean_array_push(v_log_2860_, v___x_2936_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v___x_2938_);
v___x_2940_ = v___x_2931_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2941_, 1, v_trace_2863_);
lean_ctor_set(v_reuseFailAlloc_2941_, 2, v_buildTime_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2941_, sizeof(void*)*3, v_action_2861_);
lean_ctor_set_uint8(v_reuseFailAlloc_2941_, sizeof(void*)*3 + 1, v_wantsRebuild_2862_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
v_a_2854_ = v___x_2937_;
v_a_2855_ = v___x_2940_;
goto v___jp_2853_;
}
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v_a_2947_; 
lean_dec_ref(v___x_2848_);
lean_dec_ref(v_log_2837_);
lean_dec_ref(v_traceFile_2813_);
lean_dec_ref(v_file_2810_);
v_a_2946_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2946_);
v_a_2947_ = lean_ctor_get(v___x_2852_, 1);
lean_inc(v_a_2947_);
lean_dec_ref(v___x_2852_);
v_a_2854_ = v_a_2946_;
v_a_2855_ = v_a_2947_;
goto v___jp_2853_;
}
v___jp_2853_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v_a_2858_; 
v___x_2856_ = lean_box(0);
v___x_2857_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2849_, v___x_2856_, v_a_2855_);
lean_dec(v___x_2849_);
v_a_2858_ = lean_ctor_get(v___x_2857_, 1);
lean_inc(v_a_2858_);
lean_dec_ref(v___x_2857_);
v_a_2822_ = v_a_2854_;
v_a_2823_ = v_a_2858_;
goto v___jp_2821_;
}
}
}
else
{
uint8_t v___x_2949_; 
lean_dec_ref(v_a_2811_);
lean_dec_ref(v_file_2810_);
lean_dec_ref(v_build_2809_);
v___x_2949_ = l_System_FilePath_pathExists(v_traceFile_2813_);
lean_dec_ref(v_traceFile_2813_);
if (v___x_2949_ == 0)
{
lean_dec_ref(v___x_2848_);
lean_del_object(v___x_2843_);
v_log_2826_ = v_log_2837_;
v_action_2827_ = v___x_2846_;
v_wantsRebuild_2828_ = v_noBuild_2845_;
v_trace_2829_ = v_trace_2840_;
v_buildTime_2830_ = v_buildTime_2841_;
goto v___jp_2825_;
}
else
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2950_ = lean_box(0);
v___x_2951_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1);
v___x_2952_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2812_, v___x_2950_, v___x_2951_);
v___x_2953_ = l_Lake_BuildMetadata_writeFile(v___x_2848_, v___x_2952_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_dec_ref(v___x_2953_);
lean_del_object(v___x_2843_);
v_log_2826_ = v_log_2837_;
v_action_2827_ = v___x_2846_;
v_wantsRebuild_2828_ = v_noBuild_2845_;
v_trace_2829_ = v_trace_2840_;
v_buildTime_2830_ = v_buildTime_2841_;
goto v___jp_2825_;
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc(v_a_2954_);
lean_dec_ref(v___x_2953_);
v___x_2955_ = lean_io_error_to_string(v_a_2954_);
v___x_2956_ = 3;
v___x_2957_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set_uint8(v___x_2957_, sizeof(void*)*1, v___x_2956_);
v___x_2958_ = lean_array_get_size(v_log_2837_);
v___x_2959_ = lean_array_push(v_log_2837_, v___x_2957_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 0, v___x_2959_);
v___x_2961_ = v___x_2843_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_trace_2840_);
lean_ctor_set(v_reuseFailAlloc_2963_, 2, v_buildTime_2841_);
v___x_2961_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
lean_ctor_set_uint8(v___x_2961_, sizeof(void*)*3, v___x_2846_);
lean_ctor_set_uint8(v___x_2961_, sizeof(void*)*3 + 1, v_noBuild_2845_);
v___x_2962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2958_);
lean_ctor_set(v___x_2962_, 1, v___x_2961_);
return v___x_2962_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object* v_build_2965_, lean_object* v_file_2966_, lean_object* v_a_2967_, lean_object* v_depTrace_2968_, lean_object* v_traceFile_2969_, lean_object* v_action_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_){
_start:
{
uint8_t v_action_boxed_2977_; lean_object* v_res_2978_; 
v_action_boxed_2977_ = lean_unbox(v_action_2970_);
v_res_2978_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_2965_, v_file_2966_, v_a_2967_, v_depTrace_2968_, v_traceFile_2969_, v_action_boxed_2977_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_);
lean_dec_ref(v_a_2974_);
lean_dec(v_a_2973_);
lean_dec(v_a_2972_);
lean_dec(v_a_2971_);
lean_dec_ref(v_depTrace_2968_);
return v_res_2978_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object* v_info_2979_, lean_object* v_self_2980_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = lean_io_metadata(v_info_2979_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v_modified_2984_; uint8_t v___x_2985_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref(v___x_2982_);
v_modified_2984_ = lean_ctor_get(v_a_2983_, 1);
lean_inc_ref(v_modified_2984_);
lean_dec(v_a_2983_);
v___x_2985_ = l_IO_FS_instOrdSystemTime_ord(v_self_2980_, v_modified_2984_);
lean_dec_ref(v_modified_2984_);
if (v___x_2985_ == 0)
{
uint8_t v___x_2986_; 
v___x_2986_ = 1;
return v___x_2986_;
}
else
{
uint8_t v___x_2987_; 
v___x_2987_ = 0;
return v___x_2987_;
}
}
else
{
uint8_t v___x_2988_; 
lean_dec_ref(v___x_2982_);
v___x_2988_ = 0;
return v___x_2988_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object* v_info_2989_, lean_object* v_self_2990_, lean_object* v_a_2991_){
_start:
{
uint8_t v_res_2992_; lean_object* v_r_2993_; 
v_res_2992_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2989_, v_self_2990_);
lean_dec_ref(v_self_2990_);
lean_dec_ref(v_info_2989_);
v_r_2993_ = lean_box(v_res_2992_);
return v_r_2993_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object* v_x_2994_, lean_object* v_x_2995_){
_start:
{
if (lean_obj_tag(v_x_2994_) == 0)
{
if (lean_obj_tag(v_x_2995_) == 0)
{
uint8_t v___x_2996_; 
v___x_2996_ = 1;
return v___x_2996_;
}
else
{
uint8_t v___x_2997_; 
v___x_2997_ = 0;
return v___x_2997_;
}
}
else
{
if (lean_obj_tag(v_x_2995_) == 0)
{
uint8_t v___x_2998_; 
v___x_2998_ = 0;
return v___x_2998_;
}
else
{
lean_object* v_val_2999_; lean_object* v_val_3000_; uint64_t v___x_3001_; uint64_t v___x_3002_; uint8_t v___x_3003_; 
v_val_2999_ = lean_ctor_get(v_x_2994_, 0);
v_val_3000_ = lean_ctor_get(v_x_2995_, 0);
v___x_3001_ = lean_unbox_uint64(v_val_2999_);
v___x_3002_ = lean_unbox_uint64(v_val_3000_);
v___x_3003_ = lean_uint64_dec_eq(v___x_3001_, v___x_3002_);
return v___x_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object* v_x_3004_, lean_object* v_x_3005_){
_start:
{
uint8_t v_res_3006_; lean_object* v_r_3007_; 
v_res_3006_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v_x_3004_, v_x_3005_);
lean_dec(v_x_3005_);
lean_dec(v_x_3004_);
v_r_3007_ = lean_box(v_res_3006_);
return v_r_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object* v_info_3008_, lean_object* v_depTrace_3009_, lean_object* v_depHash_3010_, lean_object* v_oldTrace_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_){
_start:
{
uint64_t v_hash_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; 
v_hash_3015_ = lean_ctor_get_uint64(v_depTrace_3009_, sizeof(void*)*3);
v___x_3016_ = lean_box_uint64(v_hash_3015_);
v___x_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
v___x_3018_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v___x_3017_, v_depHash_3010_);
lean_dec_ref(v___x_3017_);
if (v___x_3018_ == 0)
{
lean_object* v_toBuildConfig_3019_; uint8_t v_oldMode_3020_; 
v_toBuildConfig_3019_ = lean_ctor_get(v_a_3012_, 0);
v_oldMode_3020_ = lean_ctor_get_uint8(v_toBuildConfig_3019_, sizeof(void*)*2);
if (v_oldMode_3020_ == 0)
{
uint8_t v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3021_ = 0;
v___x_3022_ = lean_box(v___x_3021_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
lean_ctor_set(v___x_3023_, 1, v_a_3013_);
return v___x_3023_;
}
else
{
uint8_t v___x_3024_; 
v___x_3024_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_3008_, v_oldTrace_3011_);
if (v___x_3024_ == 0)
{
uint8_t v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3025_ = 0;
v___x_3026_ = lean_box(v___x_3025_);
v___x_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
lean_ctor_set(v___x_3027_, 1, v_a_3013_);
return v___x_3027_;
}
else
{
uint8_t v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3028_ = 1;
v___x_3029_ = lean_box(v___x_3028_);
v___x_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
lean_ctor_set(v___x_3030_, 1, v_a_3013_);
return v___x_3030_;
}
}
}
else
{
uint8_t v___x_3031_; 
v___x_3031_ = l_System_FilePath_pathExists(v_info_3008_);
if (v___x_3031_ == 0)
{
uint8_t v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = 0;
v___x_3033_ = lean_box(v___x_3032_);
v___x_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
lean_ctor_set(v___x_3034_, 1, v_a_3013_);
return v___x_3034_;
}
else
{
uint8_t v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3035_ = 2;
v___x_3036_ = lean_box(v___x_3035_);
v___x_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
lean_ctor_set(v___x_3037_, 1, v_a_3013_);
return v___x_3037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object* v_info_3038_, lean_object* v_depTrace_3039_, lean_object* v_depHash_3040_, lean_object* v_oldTrace_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3038_, v_depTrace_3039_, v_depHash_3040_, v_oldTrace_3041_, v_a_3042_, v_a_3043_);
lean_dec_ref(v_a_3042_);
lean_dec_ref(v_oldTrace_3041_);
lean_dec(v_depHash_3040_);
lean_dec_ref(v_depTrace_3039_);
lean_dec_ref(v_info_3038_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object* v_a_3046_, lean_object* v_info_3047_, lean_object* v_depTrace_3048_, lean_object* v_savedTrace_3049_, lean_object* v_oldTrace_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
if (lean_obj_tag(v_savedTrace_3049_) == 2)
{
lean_object* v_data_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3107_; 
v_data_3057_ = lean_ctor_get(v_savedTrace_3049_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_savedTrace_3049_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3059_ = v_savedTrace_3049_;
v_isShared_3060_ = v_isSharedCheck_3107_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_data_3057_);
lean_dec(v_savedTrace_3049_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3107_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
uint64_t v_depHash_3061_; lean_object* v_log_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v_depHash_3061_ = lean_ctor_get_uint64(v_data_3057_, sizeof(void*)*3);
v_log_3062_ = lean_ctor_get(v_data_3057_, 2);
lean_inc_ref(v_log_3062_);
lean_dec_ref(v_data_3057_);
v___x_3063_ = lean_box_uint64(v_depHash_3061_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set_tag(v___x_3059_, 1);
lean_ctor_set(v___x_3059_, 0, v___x_3063_);
v___x_3065_ = v___x_3059_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3063_);
v___x_3065_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3066_; lean_object* v_a_3067_; lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3105_; 
v___x_3066_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3047_, v_depTrace_3048_, v___x_3065_, v_oldTrace_3050_, v_a_3054_, v_a_3055_);
lean_dec_ref(v___x_3065_);
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_a_3068_ = lean_ctor_get(v___x_3066_, 1);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3070_ = v___x_3066_;
v_isShared_3071_ = v_isSharedCheck_3105_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3105_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___y_3073_; uint8_t v___x_3077_; uint8_t v___x_3078_; uint8_t v___x_3079_; 
v___x_3077_ = 0;
v___x_3078_ = lean_unbox(v_a_3067_);
v___x_3079_ = l_Lake_instDecidableEqOutputStatus(v___x_3078_, v___x_3077_);
if (v___x_3079_ == 0)
{
lean_object* v_log_3080_; uint8_t v_action_3081_; uint8_t v_wantsRebuild_3082_; lean_object* v_trace_3083_; lean_object* v_buildTime_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3104_; 
v_log_3080_ = lean_ctor_get(v_a_3068_, 0);
v_action_3081_ = lean_ctor_get_uint8(v_a_3068_, sizeof(void*)*3);
v_wantsRebuild_3082_ = lean_ctor_get_uint8(v_a_3068_, sizeof(void*)*3 + 1);
v_trace_3083_ = lean_ctor_get(v_a_3068_, 1);
v_buildTime_3084_ = lean_ctor_get(v_a_3068_, 2);
v_isSharedCheck_3104_ = !lean_is_exclusive(v_a_3068_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3086_ = v_a_3068_;
v_isShared_3087_ = v_isSharedCheck_3104_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_buildTime_3084_);
lean_inc(v_trace_3083_);
lean_inc(v_log_3080_);
lean_dec(v_a_3068_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3104_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
uint8_t v___x_3088_; uint8_t v___x_3089_; lean_object* v___x_3091_; 
v___x_3088_ = 2;
v___x_3089_ = l_Lake_JobAction_merge(v_action_3081_, v___x_3088_);
if (v_isShared_3087_ == 0)
{
v___x_3091_ = v___x_3086_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_log_3080_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v_trace_3083_);
lean_ctor_set(v_reuseFailAlloc_3103_, 2, v_buildTime_3084_);
lean_ctor_set_uint8(v_reuseFailAlloc_3103_, sizeof(void*)*3 + 1, v_wantsRebuild_3082_);
v___x_3091_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3092_; 
lean_ctor_set_uint8(v___x_3091_, sizeof(void*)*3, v___x_3089_);
v___x_3092_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_3062_, v_a_3046_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v___x_3091_);
lean_dec_ref(v_log_3062_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 1);
lean_inc(v_a_3093_);
lean_dec_ref(v___x_3092_);
v___y_3073_ = v_a_3093_;
goto v___jp_3072_;
}
else
{
lean_object* v_a_3094_; lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_del_object(v___x_3070_);
lean_dec(v_a_3067_);
v_a_3094_ = lean_ctor_get(v___x_3092_, 0);
v_a_3095_ = lean_ctor_get(v___x_3092_, 1);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3092_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_inc(v_a_3094_);
lean_dec(v___x_3092_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3094_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_3062_);
v___y_3073_ = v_a_3068_;
goto v___jp_3072_;
}
v___jp_3072_:
{
lean_object* v___x_3075_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 1, v___y_3073_);
v___x_3075_ = v___x_3070_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3067_);
lean_ctor_set(v_reuseFailAlloc_3076_, 1, v___y_3073_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_3108_; uint8_t v_oldMode_3109_; 
lean_dec(v_savedTrace_3049_);
v_toBuildConfig_3108_ = lean_ctor_get(v_a_3054_, 0);
v_oldMode_3109_ = lean_ctor_get_uint8(v_toBuildConfig_3108_, sizeof(void*)*2);
if (v_oldMode_3109_ == 0)
{
uint8_t v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3110_ = 0;
v___x_3111_ = lean_box(v___x_3110_);
v___x_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
lean_ctor_set(v___x_3112_, 1, v_a_3055_);
return v___x_3112_;
}
else
{
uint8_t v___x_3113_; 
v___x_3113_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_3047_, v_oldTrace_3050_);
if (v___x_3113_ == 0)
{
uint8_t v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = 0;
v___x_3115_ = lean_box(v___x_3114_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
lean_ctor_set(v___x_3116_, 1, v_a_3055_);
return v___x_3116_;
}
else
{
uint8_t v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = 1;
v___x_3118_ = lean_box(v___x_3117_);
v___x_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v_a_3055_);
return v___x_3119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object* v_a_3120_, lean_object* v_info_3121_, lean_object* v_depTrace_3122_, lean_object* v_savedTrace_3123_, lean_object* v_oldTrace_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3120_, v_info_3121_, v_depTrace_3122_, v_savedTrace_3123_, v_oldTrace_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_);
lean_dec_ref(v_a_3128_);
lean_dec(v_a_3127_);
lean_dec(v_a_3126_);
lean_dec(v_a_3125_);
lean_dec_ref(v_oldTrace_3124_);
lean_dec_ref(v_depTrace_3122_);
lean_dec_ref(v_info_3121_);
lean_dec_ref(v_a_3120_);
return v_res_3131_;
}
}
static lean_object* _init_l_Lake_buildFileUnlessUpToDate_x27___closed__0(void){
_start:
{
lean_object* v___x_3132_; 
v___x_3132_ = lean_mk_string_unchecked(".trace", 6, 6);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object* v_file_3133_, lean_object* v_build_3134_, uint8_t v_text_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_){
_start:
{
lean_object* v_a_3144_; lean_object* v_a_3145_; lean_object* v_a_3148_; lean_object* v_log_3181_; uint8_t v_action_3182_; uint8_t v_wantsRebuild_3183_; lean_object* v_trace_3184_; lean_object* v_buildTime_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3216_; 
v_log_3181_ = lean_ctor_get(v_a_3141_, 0);
v_action_3182_ = lean_ctor_get_uint8(v_a_3141_, sizeof(void*)*3);
v_wantsRebuild_3183_ = lean_ctor_get_uint8(v_a_3141_, sizeof(void*)*3 + 1);
v_trace_3184_ = lean_ctor_get(v_a_3141_, 1);
v_buildTime_3185_ = lean_ctor_get(v_a_3141_, 2);
v_isSharedCheck_3216_ = !lean_is_exclusive(v_a_3141_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3187_ = v_a_3141_;
v_isShared_3188_ = v_isSharedCheck_3216_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_buildTime_3185_);
lean_inc(v_trace_3184_);
lean_inc(v_log_3181_);
lean_dec(v_a_3141_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3216_;
goto v_resetjp_3186_;
}
v___jp_3143_:
{
lean_object* v___x_3146_; 
v___x_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3146_, 0, v_a_3144_);
lean_ctor_set(v___x_3146_, 1, v_a_3145_);
return v___x_3146_;
}
v___jp_3147_:
{
lean_object* v___x_3149_; 
v___x_3149_ = l_Lake_fetchFileTrace___redArg(v_file_3133_, v_text_3135_, v_a_3140_, v_a_3148_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3171_; 
v_a_3150_ = lean_ctor_get(v___x_3149_, 1);
v_a_3151_ = lean_ctor_get(v___x_3149_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3153_ = v___x_3149_;
v_isShared_3154_ = v_isSharedCheck_3171_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3150_);
lean_inc(v_a_3151_);
lean_dec(v___x_3149_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3171_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v_log_3155_; uint8_t v_action_3156_; uint8_t v_wantsRebuild_3157_; lean_object* v_buildTime_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3169_; 
v_log_3155_ = lean_ctor_get(v_a_3150_, 0);
v_action_3156_ = lean_ctor_get_uint8(v_a_3150_, sizeof(void*)*3);
v_wantsRebuild_3157_ = lean_ctor_get_uint8(v_a_3150_, sizeof(void*)*3 + 1);
v_buildTime_3158_ = lean_ctor_get(v_a_3150_, 2);
v_isSharedCheck_3169_ = !lean_is_exclusive(v_a_3150_);
if (v_isSharedCheck_3169_ == 0)
{
lean_object* v_unused_3170_; 
v_unused_3170_ = lean_ctor_get(v_a_3150_, 1);
lean_dec(v_unused_3170_);
v___x_3160_ = v_a_3150_;
v_isShared_3161_ = v_isSharedCheck_3169_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_buildTime_3158_);
lean_inc(v_log_3155_);
lean_dec(v_a_3150_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3169_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3162_; lean_object* v___x_3164_; 
v___x_3162_ = lean_box(0);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 1, v_a_3151_);
v___x_3164_ = v___x_3160_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_log_3155_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_a_3151_);
lean_ctor_set(v_reuseFailAlloc_3168_, 2, v_buildTime_3158_);
lean_ctor_set_uint8(v_reuseFailAlloc_3168_, sizeof(void*)*3, v_action_3156_);
lean_ctor_set_uint8(v_reuseFailAlloc_3168_, sizeof(void*)*3 + 1, v_wantsRebuild_3157_);
v___x_3164_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
lean_object* v___x_3166_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___x_3164_);
lean_ctor_set(v___x_3153_, 0, v___x_3162_);
v___x_3166_ = v___x_3153_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v___x_3162_);
lean_ctor_set(v_reuseFailAlloc_3167_, 1, v___x_3164_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v_a_3172_ = lean_ctor_get(v___x_3149_, 0);
v_a_3173_ = lean_ctor_get(v___x_3149_, 1);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3149_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_inc(v_a_3172_);
lean_dec(v___x_3149_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3172_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
v_resetjp_3186_:
{
lean_object* v___x_3189_; lean_object* v_traceFile_3190_; lean_object* v___x_3191_; 
v___x_3189_ = lean_obj_once(&l_Lake_buildFileUnlessUpToDate_x27___closed__0, &l_Lake_buildFileUnlessUpToDate_x27___closed__0_once, _init_l_Lake_buildFileUnlessUpToDate_x27___closed__0);
lean_inc_ref(v_file_3133_);
v_traceFile_3190_ = lean_string_append(v_file_3133_, v___x_3189_);
lean_inc_ref(v_traceFile_3190_);
v___x_3191_ = l_Lake_readTraceFile(v_traceFile_3190_, v_log_3181_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; lean_object* v_a_3193_; lean_object* v_mtime_3194_; lean_object* v___x_3196_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
v_a_3193_ = lean_ctor_get(v___x_3191_, 1);
lean_inc(v_a_3193_);
lean_dec_ref(v___x_3191_);
v_mtime_3194_ = lean_ctor_get(v_trace_3184_, 2);
lean_inc_ref(v_trace_3184_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v_a_3193_);
v___x_3196_ = v___x_3187_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3193_);
lean_ctor_set(v_reuseFailAlloc_3210_, 1, v_trace_3184_);
lean_ctor_set(v_reuseFailAlloc_3210_, 2, v_buildTime_3185_);
lean_ctor_set_uint8(v_reuseFailAlloc_3210_, sizeof(void*)*3, v_action_3182_);
lean_ctor_set_uint8(v_reuseFailAlloc_3210_, sizeof(void*)*3 + 1, v_wantsRebuild_3183_);
v___x_3196_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3136_, v_file_3133_, v_trace_3184_, v_a_3192_, v_mtime_3194_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v___x_3196_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v_a_3199_; uint8_t v___x_3200_; uint8_t v___x_3201_; uint8_t v___x_3202_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
v_a_3199_ = lean_ctor_get(v___x_3197_, 1);
lean_inc(v_a_3199_);
lean_dec_ref(v___x_3197_);
v___x_3200_ = 0;
v___x_3201_ = lean_unbox(v_a_3198_);
lean_dec(v_a_3198_);
v___x_3202_ = l_Lake_instDecidableEqOutputStatus(v___x_3201_, v___x_3200_);
if (v___x_3202_ == 0)
{
lean_dec_ref(v_traceFile_3190_);
lean_dec_ref(v_trace_3184_);
lean_dec_ref(v_a_3136_);
lean_dec_ref(v_build_3134_);
v_a_3148_ = v_a_3199_;
goto v___jp_3147_;
}
else
{
uint8_t v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = 5;
lean_inc_ref(v_file_3133_);
v___x_3204_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_3134_, v_file_3133_, v_a_3136_, v_trace_3184_, v_traceFile_3190_, v___x_3203_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3199_);
lean_dec_ref(v_trace_3184_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v_a_3205_; 
v_a_3205_ = lean_ctor_get(v___x_3204_, 1);
lean_inc(v_a_3205_);
lean_dec_ref(v___x_3204_);
v_a_3148_ = v_a_3205_;
goto v___jp_3147_;
}
else
{
lean_object* v_a_3206_; lean_object* v_a_3207_; 
lean_dec_ref(v_file_3133_);
v_a_3206_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_a_3206_);
v_a_3207_ = lean_ctor_get(v___x_3204_, 1);
lean_inc(v_a_3207_);
lean_dec_ref(v___x_3204_);
v_a_3144_ = v_a_3206_;
v_a_3145_ = v_a_3207_;
goto v___jp_3143_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v_a_3209_; 
lean_dec_ref(v_traceFile_3190_);
lean_dec_ref(v_trace_3184_);
lean_dec_ref(v_a_3136_);
lean_dec_ref(v_build_3134_);
lean_dec_ref(v_file_3133_);
v_a_3208_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3208_);
v_a_3209_ = lean_ctor_get(v___x_3197_, 1);
lean_inc(v_a_3209_);
lean_dec_ref(v___x_3197_);
v_a_3144_ = v_a_3208_;
v_a_3145_ = v_a_3209_;
goto v___jp_3143_;
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v_a_3212_; lean_object* v___x_3214_; 
lean_dec_ref(v_traceFile_3190_);
lean_dec_ref(v_a_3136_);
lean_dec_ref(v_build_3134_);
lean_dec_ref(v_file_3133_);
v_a_3211_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3211_);
v_a_3212_ = lean_ctor_get(v___x_3191_, 1);
lean_inc(v_a_3212_);
lean_dec_ref(v___x_3191_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v_a_3212_);
v___x_3214_ = v___x_3187_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3212_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v_trace_3184_);
lean_ctor_set(v_reuseFailAlloc_3215_, 2, v_buildTime_3185_);
lean_ctor_set_uint8(v_reuseFailAlloc_3215_, sizeof(void*)*3, v_action_3182_);
lean_ctor_set_uint8(v_reuseFailAlloc_3215_, sizeof(void*)*3 + 1, v_wantsRebuild_3183_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
v_a_3144_ = v_a_3211_;
v_a_3145_ = v___x_3214_;
goto v___jp_3143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object* v_file_3217_, lean_object* v_build_3218_, lean_object* v_text_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_){
_start:
{
uint8_t v_text_boxed_3227_; lean_object* v_res_3228_; 
v_text_boxed_3227_ = lean_unbox(v_text_3219_);
v_res_3228_ = l_Lake_buildFileUnlessUpToDate_x27(v_file_3217_, v_build_3218_, v_text_boxed_3227_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_);
lean_dec_ref(v_a_3224_);
lean_dec(v_a_3223_);
lean_dec(v_a_3222_);
lean_dec(v_a_3221_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object* v_a_3229_, lean_object* v_info_3230_, lean_object* v_depTrace_3231_, lean_object* v_depHash_3232_, lean_object* v_oldTrace_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_){
_start:
{
lean_object* v___x_3240_; 
v___x_3240_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3230_, v_depTrace_3231_, v_depHash_3232_, v_oldTrace_3233_, v_a_3237_, v_a_3238_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object* v_a_3241_, lean_object* v_info_3242_, lean_object* v_depTrace_3243_, lean_object* v_depHash_3244_, lean_object* v_oldTrace_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_){
_start:
{
lean_object* v_res_3252_; 
v_res_3252_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(v_a_3241_, v_info_3242_, v_depTrace_3243_, v_depHash_3244_, v_oldTrace_3245_, v_a_3246_, v_a_3247_, v_a_3248_, v_a_3249_, v_a_3250_);
lean_dec_ref(v_a_3249_);
lean_dec(v_a_3248_);
lean_dec(v_a_3247_);
lean_dec(v_a_3246_);
lean_dec_ref(v_oldTrace_3245_);
lean_dec(v_depHash_3244_);
lean_dec_ref(v_depTrace_3243_);
lean_dec_ref(v_info_3242_);
lean_dec_ref(v_a_3241_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object* v___x_3253_, lean_object* v___x_3254_, lean_object* v_file_3255_, uint64_t v___x_3256_, lean_object* v___x_3257_, uint8_t v_useLocalFile_3258_, lean_object* v_____r_3259_){
_start:
{
lean_object* v___x_3261_; 
v___x_3261_ = l_IO_setAccessRights(v___x_3253_, v___x_3254_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v___x_3262_; 
lean_dec_ref(v___x_3261_);
lean_inc_ref(v_file_3255_);
v___x_3262_ = l_Lake_writeFileHash(v_file_3255_, v___x_3256_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v___x_3263_; 
lean_dec_ref(v___x_3262_);
v___x_3263_ = lean_io_metadata(v___x_3253_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3276_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3266_ = v___x_3263_;
v_isShared_3267_ = v_isSharedCheck_3276_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3263_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3276_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v_modified_3268_; lean_object* v___y_3270_; 
v_modified_3268_ = lean_ctor_get(v_a_3264_, 1);
lean_inc_ref(v_modified_3268_);
lean_dec(v_a_3264_);
if (v_useLocalFile_3258_ == 0)
{
v___y_3270_ = v___x_3253_;
goto v___jp_3269_;
}
else
{
lean_dec_ref(v___x_3253_);
lean_inc_ref(v_file_3255_);
v___y_3270_ = v_file_3255_;
goto v___jp_3269_;
}
v___jp_3269_:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3271_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3257_);
lean_ctor_set(v___x_3271_, 1, v___y_3270_);
lean_ctor_set(v___x_3271_, 2, v_file_3255_);
lean_ctor_set(v___x_3271_, 3, v_modified_3268_);
v___x_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 0, v___x_3272_);
v___x_3274_ = v___x_3266_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec_ref(v___x_3257_);
lean_dec_ref(v_file_3255_);
lean_dec_ref(v___x_3253_);
v_a_3277_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3263_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3263_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec_ref(v___x_3257_);
lean_dec_ref(v_file_3255_);
lean_dec_ref(v___x_3253_);
v_a_3285_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3262_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3262_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec_ref(v___x_3257_);
lean_dec_ref(v_file_3255_);
lean_dec_ref(v___x_3253_);
v_a_3293_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3261_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3261_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object* v___x_3301_, lean_object* v___x_3302_, lean_object* v_file_3303_, lean_object* v___x_3304_, lean_object* v___x_3305_, lean_object* v_useLocalFile_3306_, lean_object* v_____r_3307_, lean_object* v___y_3308_){
_start:
{
uint64_t v___x_2969__boxed_3309_; uint8_t v_useLocalFile_boxed_3310_; lean_object* v_res_3311_; 
v___x_2969__boxed_3309_ = lean_unbox_uint64(v___x_3304_);
lean_dec_ref(v___x_3304_);
v_useLocalFile_boxed_3310_ = lean_unbox(v_useLocalFile_3306_);
v_res_3311_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3301_, v___x_3302_, v_file_3303_, v___x_2969__boxed_3309_, v___x_3305_, v_useLocalFile_boxed_3310_, v_____r_3307_);
lean_dec_ref(v___x_3302_);
return v_res_3311_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__0(void){
_start:
{
lean_object* v___x_3312_; 
v___x_3312_ = lean_mk_string_unchecked("failed to cache artifact: ", 26, 26);
return v___x_3312_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__1(void){
_start:
{
lean_object* v___x_3313_; 
v___x_3313_ = lean_mk_string_unchecked("artifacts", 9, 9);
return v___x_3313_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__2(void){
_start:
{
uint8_t v___x_3314_; uint8_t v___x_3315_; lean_object* v___x_3316_; 
v___x_3314_ = 0;
v___x_3315_ = 1;
v___x_3316_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_3316_, 0, v___x_3315_);
lean_ctor_set_uint8(v___x_3316_, 1, v___x_3314_);
lean_ctor_set_uint8(v___x_3316_, 2, v___x_3314_);
return v___x_3316_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__3(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__2, &l_Lake_Cache_saveArtifact___closed__2_once, _init_l_Lake_Cache_saveArtifact___closed__2);
v___x_3318_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
lean_ctor_set(v___x_3318_, 2, v___x_3317_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object* v_cache_3319_, lean_object* v_file_3320_, lean_object* v_ext_3321_, uint8_t v_text_3322_, uint8_t v_exe_3323_, uint8_t v_useLocalFile_3324_){
_start:
{
lean_object* v_a_3327_; lean_object* v___y_3334_; uint8_t v___x_3345_; 
v___x_3345_ = 1;
if (v_text_3322_ == 0)
{
lean_object* v___x_3346_; 
v___x_3346_ = l_IO_FS_readBinFile(v_file_3320_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; uint64_t v___x_3348_; uint64_t v___x_3349_; uint64_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___y_3355_; lean_object* v___x_3376_; lean_object* v___x_3377_; uint8_t v___x_3378_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref(v___x_3346_);
v___x_3348_ = l_Lake_Hash_nil;
v___x_3349_ = lean_byte_array_hash(v_a_3347_);
v___x_3350_ = lean_uint64_mix_hash(v___x_3348_, v___x_3349_);
lean_inc_ref(v_ext_3321_);
v___x_3351_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3351_, 0, v_ext_3321_);
lean_ctor_set_uint64(v___x_3351_, sizeof(void*)*1, v___x_3350_);
v___x_3352_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__1, &l_Lake_Cache_saveArtifact___closed__1_once, _init_l_Lake_Cache_saveArtifact___closed__1);
v___x_3353_ = l_System_FilePath_join(v_cache_3319_, v___x_3352_);
v___x_3376_ = lean_string_utf8_byte_size(v_ext_3321_);
v___x_3377_ = lean_unsigned_to_nat(0u);
v___x_3378_ = lean_nat_dec_eq(v___x_3376_, v___x_3377_);
if (v___x_3378_ == 0)
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3379_ = l_Lake_lowerHexUInt64(v___x_3350_);
v___x_3380_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_3381_ = lean_string_append(v___x_3379_, v___x_3380_);
v___x_3382_ = lean_string_append(v___x_3381_, v_ext_3321_);
lean_dec_ref(v_ext_3321_);
v___y_3355_ = v___x_3382_;
goto v___jp_3354_;
}
else
{
lean_object* v___x_3383_; 
lean_dec_ref(v_ext_3321_);
v___x_3383_ = l_Lake_lowerHexUInt64(v___x_3350_);
v___y_3355_ = v___x_3383_;
goto v___jp_3354_;
}
v___jp_3354_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3356_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_3356_, 0, v___x_3345_);
lean_ctor_set_uint8(v___x_3356_, 1, v_text_3322_);
lean_ctor_set_uint8(v___x_3356_, 2, v_exe_3323_);
lean_inc_ref_n(v___x_3356_, 2);
v___x_3357_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3356_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
lean_ctor_set(v___x_3357_, 2, v___x_3356_);
v___x_3358_ = l_IO_setAccessRights(v_file_3320_, v___x_3357_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v___x_3359_; uint8_t v___x_3360_; 
lean_dec_ref(v___x_3358_);
v___x_3359_ = l_Lake_joinRelative(v___x_3353_, v___y_3355_);
v___x_3360_ = l_System_FilePath_pathExists(v___x_3359_);
if (v___x_3360_ == 0)
{
lean_object* v___x_3361_; 
lean_inc_ref(v___x_3359_);
v___x_3361_ = l_Lake_createParentDirs(v___x_3359_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v___x_3362_; 
lean_dec_ref(v___x_3361_);
v___x_3362_ = lean_io_hard_link(v_file_3320_, v___x_3359_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
lean_dec_ref(v___x_3362_);
lean_dec(v_a_3347_);
v___x_3363_ = lean_box(0);
v___x_3364_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3359_, v___x_3357_, v_file_3320_, v___x_3350_, v___x_3351_, v_useLocalFile_3324_, v___x_3363_);
lean_dec_ref(v___x_3357_);
v___y_3334_ = v___x_3364_;
goto v___jp_3333_;
}
else
{
lean_object* v_a_3365_; 
v_a_3365_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3365_);
lean_dec_ref(v___x_3362_);
if (lean_obj_tag(v_a_3365_) == 0)
{
lean_object* v___x_3366_; lean_object* v___x_3367_; 
lean_dec_ref(v_a_3365_);
lean_dec(v_a_3347_);
v___x_3366_ = lean_box(0);
v___x_3367_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3359_, v___x_3357_, v_file_3320_, v___x_3350_, v___x_3351_, v_useLocalFile_3324_, v___x_3366_);
lean_dec_ref(v___x_3357_);
v___y_3334_ = v___x_3367_;
goto v___jp_3333_;
}
else
{
lean_object* v___x_3368_; 
lean_dec(v_a_3365_);
v___x_3368_ = l_Lake_writeBinFileIfNew(v___x_3359_, v_a_3347_);
lean_dec(v_a_3347_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3370_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref(v___x_3368_);
v___x_3370_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3359_, v___x_3357_, v_file_3320_, v___x_3350_, v___x_3351_, v_useLocalFile_3324_, v_a_3369_);
lean_dec_ref(v___x_3357_);
v___y_3334_ = v___x_3370_;
goto v___jp_3333_;
}
else
{
lean_object* v_a_3371_; 
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___x_3357_);
lean_dec_ref(v___x_3351_);
lean_dec_ref(v_file_3320_);
v_a_3371_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3371_);
lean_dec_ref(v___x_3368_);
v_a_3327_ = v_a_3371_;
goto v___jp_3326_;
}
}
}
}
else
{
lean_object* v_a_3372_; 
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___x_3357_);
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3347_);
lean_dec_ref(v_file_3320_);
v_a_3372_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3372_);
lean_dec_ref(v___x_3361_);
v_a_3327_ = v_a_3372_;
goto v___jp_3326_;
}
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec(v_a_3347_);
v___x_3373_ = lean_box(0);
v___x_3374_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3359_, v___x_3357_, v_file_3320_, v___x_3350_, v___x_3351_, v_useLocalFile_3324_, v___x_3373_);
lean_dec_ref(v___x_3357_);
v___y_3334_ = v___x_3374_;
goto v___jp_3333_;
}
}
else
{
lean_object* v_a_3375_; 
lean_dec_ref(v___x_3357_);
lean_dec_ref(v___y_3355_);
lean_dec_ref(v___x_3353_);
lean_dec_ref(v___x_3351_);
lean_dec(v_a_3347_);
lean_dec_ref(v_file_3320_);
v_a_3375_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3375_);
lean_dec_ref(v___x_3358_);
v_a_3327_ = v_a_3375_;
goto v___jp_3326_;
}
}
}
else
{
lean_object* v_a_3384_; 
lean_dec_ref(v_ext_3321_);
lean_dec_ref(v_file_3320_);
lean_dec_ref(v_cache_3319_);
v_a_3384_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3384_);
lean_dec_ref(v___x_3346_);
v_a_3327_ = v_a_3384_;
goto v___jp_3326_;
}
}
else
{
lean_object* v___x_3385_; 
v___x_3385_ = l_IO_FS_readFile(v_file_3320_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___x_3387_; uint64_t v___x_3388_; uint64_t v___x_3389_; uint64_t v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___y_3395_; lean_object* v___x_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref(v___x_3385_);
v___x_3387_ = l_String_crlfToLf(v_a_3386_);
lean_dec(v_a_3386_);
v___x_3388_ = l_Lake_Hash_nil;
v___x_3389_ = lean_string_hash(v___x_3387_);
v___x_3390_ = lean_uint64_mix_hash(v___x_3388_, v___x_3389_);
lean_inc_ref(v_ext_3321_);
v___x_3391_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3391_, 0, v_ext_3321_);
lean_ctor_set_uint64(v___x_3391_, sizeof(void*)*1, v___x_3390_);
v___x_3392_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__1, &l_Lake_Cache_saveArtifact___closed__1_once, _init_l_Lake_Cache_saveArtifact___closed__1);
v___x_3393_ = l_System_FilePath_join(v_cache_3319_, v___x_3392_);
v___x_3409_ = lean_string_utf8_byte_size(v_ext_3321_);
v___x_3410_ = lean_unsigned_to_nat(0u);
v___x_3411_ = lean_nat_dec_eq(v___x_3409_, v___x_3410_);
if (v___x_3411_ == 0)
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3412_ = l_Lake_lowerHexUInt64(v___x_3390_);
v___x_3413_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_3414_ = lean_string_append(v___x_3412_, v___x_3413_);
v___x_3415_ = lean_string_append(v___x_3414_, v_ext_3321_);
lean_dec_ref(v_ext_3321_);
v___y_3395_ = v___x_3415_;
goto v___jp_3394_;
}
else
{
lean_object* v___x_3416_; 
lean_dec_ref(v_ext_3321_);
v___x_3416_ = l_Lake_lowerHexUInt64(v___x_3390_);
v___y_3395_ = v___x_3416_;
goto v___jp_3394_;
}
v___jp_3394_:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__3, &l_Lake_Cache_saveArtifact___closed__3_once, _init_l_Lake_Cache_saveArtifact___closed__3);
v___x_3397_ = l_IO_setAccessRights(v_file_3320_, v___x_3396_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v___x_3398_; uint8_t v___x_3399_; 
lean_dec_ref(v___x_3397_);
v___x_3398_ = l_Lake_joinRelative(v___x_3393_, v___y_3395_);
v___x_3399_ = l_System_FilePath_pathExists(v___x_3398_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; 
lean_inc_ref(v___x_3398_);
v___x_3400_ = l_Lake_createParentDirs(v___x_3398_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v___x_3401_; 
lean_dec_ref(v___x_3400_);
v___x_3401_ = l_Lake_writeFileIfNew(v___x_3398_, v___x_3387_);
lean_dec_ref(v___x_3387_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3403_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3402_);
lean_dec_ref(v___x_3401_);
v___x_3403_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3398_, v___x_3396_, v_file_3320_, v___x_3390_, v___x_3391_, v_useLocalFile_3324_, v_a_3402_);
v___y_3334_ = v___x_3403_;
goto v___jp_3333_;
}
else
{
lean_object* v_a_3404_; 
lean_dec_ref(v___x_3398_);
lean_dec_ref(v___x_3391_);
lean_dec_ref(v_file_3320_);
v_a_3404_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3404_);
lean_dec_ref(v___x_3401_);
v_a_3327_ = v_a_3404_;
goto v___jp_3326_;
}
}
else
{
lean_object* v_a_3405_; 
lean_dec_ref(v___x_3398_);
lean_dec_ref(v___x_3391_);
lean_dec_ref(v___x_3387_);
lean_dec_ref(v_file_3320_);
v_a_3405_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3405_);
lean_dec_ref(v___x_3400_);
v_a_3327_ = v_a_3405_;
goto v___jp_3326_;
}
}
else
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
lean_dec_ref(v___x_3387_);
v___x_3406_ = lean_box(0);
v___x_3407_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3398_, v___x_3396_, v_file_3320_, v___x_3390_, v___x_3391_, v_useLocalFile_3324_, v___x_3406_);
v___y_3334_ = v___x_3407_;
goto v___jp_3333_;
}
}
else
{
lean_object* v_a_3408_; 
lean_dec_ref(v___y_3395_);
lean_dec_ref(v___x_3393_);
lean_dec_ref(v___x_3391_);
lean_dec_ref(v___x_3387_);
lean_dec_ref(v_file_3320_);
v_a_3408_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3408_);
lean_dec_ref(v___x_3397_);
v_a_3327_ = v_a_3408_;
goto v___jp_3326_;
}
}
}
else
{
lean_object* v_a_3417_; 
lean_dec_ref(v_ext_3321_);
lean_dec_ref(v_file_3320_);
lean_dec_ref(v_cache_3319_);
v_a_3417_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3417_);
lean_dec_ref(v___x_3385_);
v_a_3327_ = v_a_3417_;
goto v___jp_3326_;
}
}
v___jp_3326_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3328_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__0, &l_Lake_Cache_saveArtifact___closed__0_once, _init_l_Lake_Cache_saveArtifact___closed__0);
v___x_3329_ = lean_io_error_to_string(v_a_3327_);
v___x_3330_ = lean_string_append(v___x_3328_, v___x_3329_);
lean_dec_ref(v___x_3329_);
v___x_3331_ = lean_mk_io_user_error(v___x_3330_);
v___x_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
return v___x_3332_;
}
v___jp_3333_:
{
if (lean_obj_tag(v___y_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3343_; 
v_a_3335_ = lean_ctor_get(v___y_3334_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___y_3334_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3337_ = v___y_3334_;
v_isShared_3338_ = v_isSharedCheck_3343_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___y_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3343_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v_a_3339_; lean_object* v___x_3341_; 
v_a_3339_ = lean_ctor_get(v_a_3335_, 0);
lean_inc(v_a_3339_);
lean_dec(v_a_3335_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v_a_3339_);
v___x_3341_ = v___x_3337_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3339_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
else
{
lean_object* v_a_3344_; 
v_a_3344_ = lean_ctor_get(v___y_3334_, 0);
lean_inc(v_a_3344_);
lean_dec_ref(v___y_3334_);
v_a_3327_ = v_a_3344_;
goto v___jp_3326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object* v_cache_3418_, lean_object* v_file_3419_, lean_object* v_ext_3420_, lean_object* v_text_3421_, lean_object* v_exe_3422_, lean_object* v_useLocalFile_3423_, lean_object* v_a_3424_){
_start:
{
uint8_t v_text_boxed_3425_; uint8_t v_exe_boxed_3426_; uint8_t v_useLocalFile_boxed_3427_; lean_object* v_res_3428_; 
v_text_boxed_3425_ = lean_unbox(v_text_3421_);
v_exe_boxed_3426_ = lean_unbox(v_exe_3422_);
v_useLocalFile_boxed_3427_ = lean_unbox(v_useLocalFile_3423_);
v_res_3428_ = l_Lake_Cache_saveArtifact(v_cache_3418_, v_file_3419_, v_ext_3420_, v_text_boxed_3425_, v_exe_boxed_3426_, v_useLocalFile_boxed_3427_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object* v_x_3429_){
_start:
{
lean_object* v_lakeCache_3430_; 
v_lakeCache_3430_ = lean_ctor_get(v_x_3429_, 2);
lean_inc_ref(v_lakeCache_3430_);
return v_lakeCache_3430_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object* v_x_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_Lake_cacheArtifact___redArg___lam__0(v_x_3431_);
lean_dec_ref(v_x_3431_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object* v_file_3433_, lean_object* v_ext_3434_, uint8_t v_text_3435_, uint8_t v_exe_3436_, uint8_t v_useLocalFile_3437_, lean_object* v_inst_3438_, lean_object* v_____do__lift_3439_){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3440_ = lean_box(v_text_3435_);
v___x_3441_ = lean_box(v_exe_3436_);
v___x_3442_ = lean_box(v_useLocalFile_3437_);
v___x_3443_ = lean_alloc_closure((void*)(l_Lake_Cache_saveArtifact___boxed), 7, 6);
lean_closure_set(v___x_3443_, 0, v_____do__lift_3439_);
lean_closure_set(v___x_3443_, 1, v_file_3433_);
lean_closure_set(v___x_3443_, 2, v_ext_3434_);
lean_closure_set(v___x_3443_, 3, v___x_3440_);
lean_closure_set(v___x_3443_, 4, v___x_3441_);
lean_closure_set(v___x_3443_, 5, v___x_3442_);
v___x_3444_ = lean_apply_2(v_inst_3438_, lean_box(0), v___x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object* v_file_3445_, lean_object* v_ext_3446_, lean_object* v_text_3447_, lean_object* v_exe_3448_, lean_object* v_useLocalFile_3449_, lean_object* v_inst_3450_, lean_object* v_____do__lift_3451_){
_start:
{
uint8_t v_text_boxed_3452_; uint8_t v_exe_boxed_3453_; uint8_t v_useLocalFile_boxed_3454_; lean_object* v_res_3455_; 
v_text_boxed_3452_ = lean_unbox(v_text_3447_);
v_exe_boxed_3453_ = lean_unbox(v_exe_3448_);
v_useLocalFile_boxed_3454_ = lean_unbox(v_useLocalFile_3449_);
v_res_3455_ = l_Lake_cacheArtifact___redArg___lam__1(v_file_3445_, v_ext_3446_, v_text_boxed_3452_, v_exe_boxed_3453_, v_useLocalFile_boxed_3454_, v_inst_3450_, v_____do__lift_3451_);
return v_res_3455_;
}
}
static lean_object* _init_l_Lake_cacheArtifact___redArg___closed__0(void){
_start:
{
lean_object* v___f_3456_; 
v___f_3456_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__0___boxed), 1, 0);
return v___f_3456_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object* v_inst_3457_, lean_object* v_inst_3458_, lean_object* v_inst_3459_, lean_object* v_file_3460_, lean_object* v_ext_3461_, uint8_t v_text_3462_, uint8_t v_exe_3463_, uint8_t v_useLocalFile_3464_){
_start:
{
lean_object* v_toApplicative_3465_; lean_object* v_toFunctor_3466_; lean_object* v_toBind_3467_; lean_object* v_map_3468_; lean_object* v___f_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___f_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v_toApplicative_3465_ = lean_ctor_get(v_inst_3459_, 0);
v_toFunctor_3466_ = lean_ctor_get(v_toApplicative_3465_, 0);
lean_inc_ref(v_toFunctor_3466_);
v_toBind_3467_ = lean_ctor_get(v_inst_3459_, 1);
lean_inc(v_toBind_3467_);
lean_dec_ref(v_inst_3459_);
v_map_3468_ = lean_ctor_get(v_toFunctor_3466_, 0);
lean_inc(v_map_3468_);
lean_dec_ref(v_toFunctor_3466_);
v___f_3469_ = lean_obj_once(&l_Lake_cacheArtifact___redArg___closed__0, &l_Lake_cacheArtifact___redArg___closed__0_once, _init_l_Lake_cacheArtifact___redArg___closed__0);
v___x_3470_ = lean_box(v_text_3462_);
v___x_3471_ = lean_box(v_exe_3463_);
v___x_3472_ = lean_box(v_useLocalFile_3464_);
v___f_3473_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3473_, 0, v_file_3460_);
lean_closure_set(v___f_3473_, 1, v_ext_3461_);
lean_closure_set(v___f_3473_, 2, v___x_3470_);
lean_closure_set(v___f_3473_, 3, v___x_3471_);
lean_closure_set(v___f_3473_, 4, v___x_3472_);
lean_closure_set(v___f_3473_, 5, v_inst_3458_);
v___x_3474_ = lean_apply_4(v_map_3468_, lean_box(0), lean_box(0), v___f_3469_, v_inst_3457_);
v___x_3475_ = lean_apply_4(v_toBind_3467_, lean_box(0), lean_box(0), v___x_3474_, v___f_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object* v_inst_3476_, lean_object* v_inst_3477_, lean_object* v_inst_3478_, lean_object* v_file_3479_, lean_object* v_ext_3480_, lean_object* v_text_3481_, lean_object* v_exe_3482_, lean_object* v_useLocalFile_3483_){
_start:
{
uint8_t v_text_boxed_3484_; uint8_t v_exe_boxed_3485_; uint8_t v_useLocalFile_boxed_3486_; lean_object* v_res_3487_; 
v_text_boxed_3484_ = lean_unbox(v_text_3481_);
v_exe_boxed_3485_ = lean_unbox(v_exe_3482_);
v_useLocalFile_boxed_3486_ = lean_unbox(v_useLocalFile_3483_);
v_res_3487_ = l_Lake_cacheArtifact___redArg(v_inst_3476_, v_inst_3477_, v_inst_3478_, v_file_3479_, v_ext_3480_, v_text_boxed_3484_, v_exe_boxed_3485_, v_useLocalFile_boxed_3486_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object* v_m_3488_, lean_object* v_inst_3489_, lean_object* v_inst_3490_, lean_object* v_inst_3491_, lean_object* v_file_3492_, lean_object* v_ext_3493_, uint8_t v_text_3494_, uint8_t v_exe_3495_, uint8_t v_useLocalFile_3496_){
_start:
{
lean_object* v_toApplicative_3497_; lean_object* v_toFunctor_3498_; lean_object* v_toBind_3499_; lean_object* v_map_3500_; lean_object* v___f_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___f_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v_toApplicative_3497_ = lean_ctor_get(v_inst_3491_, 0);
v_toFunctor_3498_ = lean_ctor_get(v_toApplicative_3497_, 0);
lean_inc_ref(v_toFunctor_3498_);
v_toBind_3499_ = lean_ctor_get(v_inst_3491_, 1);
lean_inc(v_toBind_3499_);
lean_dec_ref(v_inst_3491_);
v_map_3500_ = lean_ctor_get(v_toFunctor_3498_, 0);
lean_inc(v_map_3500_);
lean_dec_ref(v_toFunctor_3498_);
v___f_3501_ = lean_obj_once(&l_Lake_cacheArtifact___redArg___closed__0, &l_Lake_cacheArtifact___redArg___closed__0_once, _init_l_Lake_cacheArtifact___redArg___closed__0);
v___x_3502_ = lean_box(v_text_3494_);
v___x_3503_ = lean_box(v_exe_3495_);
v___x_3504_ = lean_box(v_useLocalFile_3496_);
v___f_3505_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3505_, 0, v_file_3492_);
lean_closure_set(v___f_3505_, 1, v_ext_3493_);
lean_closure_set(v___f_3505_, 2, v___x_3502_);
lean_closure_set(v___f_3505_, 3, v___x_3503_);
lean_closure_set(v___f_3505_, 4, v___x_3504_);
lean_closure_set(v___f_3505_, 5, v_inst_3490_);
v___x_3506_ = lean_apply_4(v_map_3500_, lean_box(0), lean_box(0), v___f_3501_, v_inst_3489_);
v___x_3507_ = lean_apply_4(v_toBind_3499_, lean_box(0), lean_box(0), v___x_3506_, v___f_3505_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object* v_m_3508_, lean_object* v_inst_3509_, lean_object* v_inst_3510_, lean_object* v_inst_3511_, lean_object* v_file_3512_, lean_object* v_ext_3513_, lean_object* v_text_3514_, lean_object* v_exe_3515_, lean_object* v_useLocalFile_3516_){
_start:
{
uint8_t v_text_boxed_3517_; uint8_t v_exe_boxed_3518_; uint8_t v_useLocalFile_boxed_3519_; lean_object* v_res_3520_; 
v_text_boxed_3517_ = lean_unbox(v_text_3514_);
v_exe_boxed_3518_ = lean_unbox(v_exe_3515_);
v_useLocalFile_boxed_3519_ = lean_unbox(v_useLocalFile_3516_);
v_res_3520_ = l_Lake_cacheArtifact(v_m_3508_, v_inst_3509_, v_inst_3510_, v_inst_3511_, v_file_3512_, v_ext_3513_, v_text_boxed_3517_, v_exe_boxed_3518_, v_useLocalFile_boxed_3519_);
return v_res_3520_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3521_; 
v___x_3521_ = lean_mk_string_unchecked("\n- ", 3, 3);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object* v_x1_3522_, lean_object* v_x2_3523_){
_start:
{
lean_object* v_message_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v_message_3524_ = lean_ctor_get(v_x2_3523_, 0);
v___x_3525_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0);
v___x_3526_ = lean_string_append(v_x1_3522_, v___x_3525_);
v___x_3527_ = lean_string_append(v___x_3526_, v_message_3524_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object* v_x1_3528_, lean_object* v_x2_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(v_x1_3528_, v_x2_3529_);
lean_dec_ref(v_x2_3529_);
return v_res_3530_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_3531_; 
v___x_3531_ = lean_mk_string_unchecked("input '", 7, 7);
return v___x_3531_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = lean_mk_string_unchecked("' found in package artifact cache, but some output(s) have issues:", 66, 66);
return v___x_3532_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___f_3533_; 
v___f_3533_ = lean_alloc_closure((void*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed), 2, 0);
return v___f_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object* v_inst_3534_, uint64_t v_inputHash_3535_, lean_object* v_pkg_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_toContext_3544_; lean_object* v_log_3545_; uint8_t v_action_3546_; uint8_t v_wantsRebuild_3547_; lean_object* v_trace_3548_; lean_object* v_buildTime_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3644_; 
v_toContext_3544_ = lean_ctor_get(v_a_3541_, 1);
v_log_3545_ = lean_ctor_get(v_a_3542_, 0);
v_action_3546_ = lean_ctor_get_uint8(v_a_3542_, sizeof(void*)*3);
v_wantsRebuild_3547_ = lean_ctor_get_uint8(v_a_3542_, sizeof(void*)*3 + 1);
v_trace_3548_ = lean_ctor_get(v_a_3542_, 1);
v_buildTime_3549_ = lean_ctor_get(v_a_3542_, 2);
v_isSharedCheck_3644_ = !lean_is_exclusive(v_a_3542_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3551_ = v_a_3542_;
v_isShared_3552_ = v_isSharedCheck_3644_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_buildTime_3549_);
lean_inc(v_trace_3548_);
lean_inc(v_log_3545_);
lean_dec(v_a_3542_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3644_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v_lakeCache_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v_lakeCache_3553_ = lean_ctor_get(v_toContext_3544_, 2);
v___x_3554_ = l_Lake_Package_cacheScope(v_pkg_3536_);
lean_inc_ref(v_lakeCache_3553_);
v___x_3555_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_3553_, v___x_3554_, v_inputHash_3535_, v_log_3545_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3631_; 
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
v_a_3557_ = lean_ctor_get(v___x_3555_, 1);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3559_ = v___x_3555_;
v_isShared_3560_ = v_isSharedCheck_3631_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_inc(v_a_3556_);
lean_dec(v___x_3555_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3631_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v_a_3557_);
v___x_3562_ = v___x_3551_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_a_3557_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v_trace_3548_);
lean_ctor_set(v_reuseFailAlloc_3630_, 2, v_buildTime_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3630_, sizeof(void*)*3, v_action_3546_);
lean_ctor_set_uint8(v_reuseFailAlloc_3630_, sizeof(void*)*3 + 1, v_wantsRebuild_3547_);
v___x_3562_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
if (lean_obj_tag(v_a_3556_) == 1)
{
lean_object* v_val_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3625_; 
v_val_3563_ = lean_ctor_get(v_a_3556_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v_a_3556_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3565_ = v_a_3556_;
v_isShared_3566_ = v_isSharedCheck_3625_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_val_3563_);
lean_dec(v_a_3556_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3625_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; lean_object* v_r_3569_; lean_object* v___y_3570_; 
lean_inc_ref(v_a_3541_);
lean_inc(v_a_3540_);
lean_inc(v_a_3539_);
lean_inc(v_a_3538_);
v___x_3567_ = lean_apply_8(v_inst_3534_, v_val_3563_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_, v_a_3541_, v___x_3562_, lean_box(0));
if (lean_obj_tag(v___x_3567_) == 0)
{
lean_object* v_a_3574_; lean_object* v_a_3575_; lean_object* v___x_3577_; 
v_a_3574_ = lean_ctor_get(v___x_3567_, 0);
lean_inc(v_a_3574_);
v_a_3575_ = lean_ctor_get(v___x_3567_, 1);
lean_inc(v_a_3575_);
lean_dec_ref(v___x_3567_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 0, v_a_3574_);
v___x_3577_ = v___x_3565_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_a_3574_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
v_r_3569_ = v___x_3577_;
v___y_3570_ = v_a_3575_;
goto v___jp_3568_;
}
}
else
{
lean_object* v_a_3579_; lean_object* v_a_3580_; lean_object* v_log_3581_; uint8_t v_action_3582_; uint8_t v_wantsRebuild_3583_; lean_object* v_trace_3584_; lean_object* v_buildTime_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3624_; 
lean_del_object(v___x_3565_);
v_a_3579_ = lean_ctor_get(v___x_3567_, 1);
lean_inc(v_a_3579_);
v_a_3580_ = lean_ctor_get(v___x_3567_, 0);
lean_inc(v_a_3580_);
lean_dec_ref(v___x_3567_);
v_log_3581_ = lean_ctor_get(v_a_3579_, 0);
v_action_3582_ = lean_ctor_get_uint8(v_a_3579_, sizeof(void*)*3);
v_wantsRebuild_3583_ = lean_ctor_get_uint8(v_a_3579_, sizeof(void*)*3 + 1);
v_trace_3584_ = lean_ctor_get(v_a_3579_, 1);
v_buildTime_3585_ = lean_ctor_get(v_a_3579_, 2);
v_isSharedCheck_3624_ = !lean_is_exclusive(v_a_3579_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3587_ = v_a_3579_;
v_isShared_3588_ = v_isSharedCheck_3624_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_buildTime_3585_);
lean_inc(v_trace_3584_);
lean_inc(v_log_3581_);
lean_dec(v_a_3579_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3624_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___y_3593_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; uint8_t v___x_3615_; 
v___x_3589_ = lean_array_get_size(v_log_3581_);
lean_inc(v_a_3580_);
v___x_3590_ = l_Array_extract___redArg(v_log_3581_, v_a_3580_, v___x_3589_);
v___x_3591_ = l_Array_shrink___redArg(v_log_3581_, v_a_3580_);
lean_dec(v_a_3580_);
v___x_3601_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0);
v___x_3602_ = l_Lake_lowerHexUInt64(v_inputHash_3535_);
v___x_3603_ = lean_unsigned_to_nat(7u);
v___x_3604_ = lean_unsigned_to_nat(0u);
v___x_3605_ = lean_string_utf8_byte_size(v___x_3602_);
lean_inc_ref(v___x_3602_);
v___x_3606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3602_);
lean_ctor_set(v___x_3606_, 1, v___x_3604_);
lean_ctor_set(v___x_3606_, 2, v___x_3605_);
v___x_3607_ = l_String_Slice_Pos_nextn(v___x_3606_, v___x_3604_, v___x_3603_);
lean_dec_ref(v___x_3606_);
v___x_3608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3602_);
lean_ctor_set(v___x_3608_, 1, v___x_3604_);
lean_ctor_set(v___x_3608_, 2, v___x_3607_);
v___x_3609_ = l_String_Slice_toString(v___x_3608_);
lean_dec_ref(v___x_3608_);
v___x_3610_ = lean_string_append(v___x_3601_, v___x_3609_);
lean_dec_ref(v___x_3609_);
v___x_3611_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1);
v___x_3612_ = lean_string_append(v___x_3610_, v___x_3611_);
v___x_3613_ = lean_array_get_size(v___x_3590_);
v___x_3614_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__9, &l_Lake_instMonadWorkspaceJobM___closed__9_once, _init_l_Lake_instMonadWorkspaceJobM___closed__9);
v___x_3615_ = lean_nat_dec_lt(v___x_3604_, v___x_3613_);
if (v___x_3615_ == 0)
{
lean_dec_ref(v___x_3590_);
v___y_3593_ = v___x_3612_;
goto v___jp_3592_;
}
else
{
lean_object* v___f_3616_; uint8_t v___x_3617_; 
v___f_3616_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2);
v___x_3617_ = lean_nat_dec_le(v___x_3613_, v___x_3613_);
if (v___x_3617_ == 0)
{
if (v___x_3615_ == 0)
{
lean_dec_ref(v___x_3590_);
v___y_3593_ = v___x_3612_;
goto v___jp_3592_;
}
else
{
size_t v___x_3618_; size_t v___x_3619_; lean_object* v___x_3620_; 
v___x_3618_ = ((size_t)0ULL);
v___x_3619_ = lean_usize_of_nat(v___x_3613_);
v___x_3620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3614_, v___f_3616_, v___x_3590_, v___x_3618_, v___x_3619_, v___x_3612_);
v___y_3593_ = v___x_3620_;
goto v___jp_3592_;
}
}
else
{
size_t v___x_3621_; size_t v___x_3622_; lean_object* v___x_3623_; 
v___x_3621_ = ((size_t)0ULL);
v___x_3622_ = lean_usize_of_nat(v___x_3613_);
v___x_3623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3614_, v___f_3616_, v___x_3590_, v___x_3621_, v___x_3622_, v___x_3612_);
v___y_3593_ = v___x_3623_;
goto v___jp_3592_;
}
}
v___jp_3592_:
{
uint8_t v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3598_; 
v___x_3594_ = 2;
v___x_3595_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3595_, 0, v___y_3593_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*1, v___x_3594_);
v___x_3596_ = lean_array_push(v___x_3591_, v___x_3595_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v___x_3596_);
v___x_3598_ = v___x_3587_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v___x_3596_);
lean_ctor_set(v_reuseFailAlloc_3600_, 1, v_trace_3584_);
lean_ctor_set(v_reuseFailAlloc_3600_, 2, v_buildTime_3585_);
lean_ctor_set_uint8(v_reuseFailAlloc_3600_, sizeof(void*)*3, v_action_3582_);
lean_ctor_set_uint8(v_reuseFailAlloc_3600_, sizeof(void*)*3 + 1, v_wantsRebuild_3583_);
v___x_3598_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3599_; 
v___x_3599_ = lean_box(0);
v_r_3569_ = v___x_3599_;
v___y_3570_ = v___x_3598_;
goto v___jp_3568_;
}
}
}
}
v___jp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___y_3570_);
lean_ctor_set(v___x_3559_, 0, v_r_3569_);
v___x_3572_ = v___x_3559_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_r_3569_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v___y_3570_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
else
{
lean_object* v___x_3626_; lean_object* v___x_3628_; 
lean_dec(v_a_3556_);
lean_dec_ref(v_a_3537_);
lean_dec_ref(v_inst_3534_);
v___x_3626_ = lean_box(0);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___x_3562_);
lean_ctor_set(v___x_3559_, 0, v___x_3626_);
v___x_3628_ = v___x_3559_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v___x_3562_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
}
else
{
lean_object* v_a_3632_; lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3643_; 
lean_dec_ref(v_a_3537_);
lean_dec_ref(v_inst_3534_);
v_a_3632_ = lean_ctor_get(v___x_3555_, 0);
v_a_3633_ = lean_ctor_get(v___x_3555_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3635_ = v___x_3555_;
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_inc(v_a_3632_);
lean_dec(v___x_3555_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v_a_3633_);
v___x_3638_ = v___x_3551_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3633_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_trace_3548_);
lean_ctor_set(v_reuseFailAlloc_3642_, 2, v_buildTime_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3642_, sizeof(void*)*3, v_action_3546_);
lean_ctor_set_uint8(v_reuseFailAlloc_3642_, sizeof(void*)*3 + 1, v_wantsRebuild_3547_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3640_; 
if (v_isShared_3636_ == 0)
{
lean_ctor_set(v___x_3635_, 1, v___x_3638_);
v___x_3640_ = v___x_3635_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3632_);
lean_ctor_set(v_reuseFailAlloc_3641_, 1, v___x_3638_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object* v_inst_3645_, lean_object* v_inputHash_3646_, lean_object* v_pkg_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_){
_start:
{
uint64_t v_inputHash_boxed_3655_; lean_object* v_res_3656_; 
v_inputHash_boxed_3655_ = lean_unbox_uint64(v_inputHash_3646_);
lean_dec_ref(v_inputHash_3646_);
v_res_3656_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3645_, v_inputHash_boxed_3655_, v_pkg_3647_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
lean_dec_ref(v_a_3652_);
lean_dec(v_a_3651_);
lean_dec(v_a_3650_);
lean_dec(v_a_3649_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object* v_00_u03b1_3657_, lean_object* v_inst_3658_, uint64_t v_inputHash_3659_, lean_object* v_pkg_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_){
_start:
{
lean_object* v___x_3668_; 
v___x_3668_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3658_, v_inputHash_3659_, v_pkg_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object* v_00_u03b1_3669_, lean_object* v_inst_3670_, lean_object* v_inputHash_3671_, lean_object* v_pkg_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_){
_start:
{
uint64_t v_inputHash_boxed_3680_; lean_object* v_res_3681_; 
v_inputHash_boxed_3680_ = lean_unbox_uint64(v_inputHash_3671_);
lean_dec_ref(v_inputHash_3671_);
v_res_3681_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(v_00_u03b1_3669_, v_inst_3670_, v_inputHash_boxed_3680_, v_pkg_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_);
lean_dec_ref(v_a_3677_);
lean_dec(v_a_3676_);
lean_dec(v_a_3675_);
lean_dec(v_a_3674_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object* v_a_3682_, lean_object* v_____r_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3691_, 0, v_a_3682_);
v___x_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3691_);
v___x_3693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
lean_ctor_set(v___x_3693_, 1, v___y_3689_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object* v_a_3694_, lean_object* v_____r_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3694_, v_____r_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec(v___y_3698_);
lean_dec(v___y_3697_);
lean_dec_ref(v___y_3696_);
return v_res_3703_;
}
}
static lean_object* _init_l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = lean_mk_string_unchecked("could not write outputs to cache: ", 34, 34);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object* v_inst_3705_, uint64_t v_inputHash_3706_, lean_object* v_savedTrace_3707_, lean_object* v_pkg_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_){
_start:
{
lean_object* v___y_3717_; lean_object* v_a_3721_; lean_object* v_a_3722_; lean_object* v___y_3737_; 
if (lean_obj_tag(v_savedTrace_3707_) == 2)
{
lean_object* v_data_3752_; uint64_t v_depHash_3753_; lean_object* v_outputs_x3f_3754_; uint8_t v___x_3755_; 
v_data_3752_ = lean_ctor_get(v_savedTrace_3707_, 0);
lean_inc_ref(v_data_3752_);
lean_dec_ref(v_savedTrace_3707_);
v_depHash_3753_ = lean_ctor_get_uint64(v_data_3752_, sizeof(void*)*3);
v_outputs_x3f_3754_ = lean_ctor_get(v_data_3752_, 1);
lean_inc(v_outputs_x3f_3754_);
lean_dec_ref(v_data_3752_);
v___x_3755_ = lean_uint64_dec_eq(v_depHash_3753_, v_inputHash_3706_);
if (v___x_3755_ == 0)
{
lean_dec(v_outputs_x3f_3754_);
lean_dec_ref(v_a_3709_);
lean_dec_ref(v_pkg_3708_);
lean_dec_ref(v_inst_3705_);
v___y_3717_ = v_a_3714_;
goto v___jp_3716_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_3754_) == 1)
{
lean_object* v_val_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v_val_3756_ = lean_ctor_get(v_outputs_x3f_3754_, 0);
lean_inc_n(v_val_3756_, 2);
lean_dec_ref(v_outputs_x3f_3754_);
v___x_3757_ = lean_box(0);
v___x_3758_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3758_, 0, v_val_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
lean_ctor_set(v___x_3758_, 2, v___x_3757_);
lean_inc_ref(v_a_3713_);
lean_inc(v_a_3712_);
lean_inc(v_a_3711_);
lean_inc(v_a_3710_);
lean_inc_ref(v_a_3709_);
v___x_3759_ = lean_apply_8(v_inst_3705_, v___x_3758_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_, lean_box(0));
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_config_3760_; lean_object* v_a_3761_; lean_object* v_a_3762_; lean_object* v_enableArtifactCache_x3f_3763_; lean_object* v_a_3765_; uint8_t v_a_3769_; lean_object* v_a_3770_; 
v_config_3760_ = lean_ctor_get(v_pkg_3708_, 6);
v_a_3761_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3761_);
v_a_3762_ = lean_ctor_get(v___x_3759_, 1);
lean_inc(v_a_3762_);
lean_dec_ref(v___x_3759_);
v_enableArtifactCache_x3f_3763_ = lean_ctor_get(v_config_3760_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3763_) == 0)
{
lean_object* v_toContext_3801_; lean_object* v_lakeEnv_3802_; lean_object* v_enableArtifactCache_x3f_3803_; 
v_toContext_3801_ = lean_ctor_get(v_a_3713_, 1);
v_lakeEnv_3802_ = lean_ctor_get(v_toContext_3801_, 0);
v_enableArtifactCache_x3f_3803_ = lean_ctor_get(v_lakeEnv_3802_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_3803_) == 0)
{
lean_object* v_packages_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v_config_3807_; lean_object* v_enableArtifactCache_x3f_3808_; 
v_packages_3804_ = lean_ctor_get(v_toContext_3801_, 4);
v___x_3805_ = lean_unsigned_to_nat(0u);
v___x_3806_ = lean_array_fget_borrowed(v_packages_3804_, v___x_3805_);
v_config_3807_ = lean_ctor_get(v___x_3806_, 6);
v_enableArtifactCache_x3f_3808_ = lean_ctor_get(v_config_3807_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3808_) == 0)
{
lean_dec(v_val_3756_);
lean_dec_ref(v_pkg_3708_);
v_a_3765_ = v_a_3762_;
goto v___jp_3764_;
}
else
{
lean_object* v_val_3809_; uint8_t v___x_3810_; 
v_val_3809_ = lean_ctor_get(v_enableArtifactCache_x3f_3808_, 0);
v___x_3810_ = lean_unbox(v_val_3809_);
v_a_3769_ = v___x_3810_;
v_a_3770_ = v_a_3762_;
goto v___jp_3768_;
}
}
else
{
lean_object* v_val_3811_; uint8_t v___x_3812_; 
v_val_3811_ = lean_ctor_get(v_enableArtifactCache_x3f_3803_, 0);
v___x_3812_ = lean_unbox(v_val_3811_);
v_a_3769_ = v___x_3812_;
v_a_3770_ = v_a_3762_;
goto v___jp_3768_;
}
}
else
{
lean_object* v_val_3813_; uint8_t v___x_3814_; 
v_val_3813_ = lean_ctor_get(v_enableArtifactCache_x3f_3763_, 0);
v___x_3814_ = lean_unbox(v_val_3813_);
v_a_3769_ = v___x_3814_;
v_a_3770_ = v_a_3762_;
goto v___jp_3768_;
}
v___jp_3764_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = lean_box(0);
v___x_3767_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3761_, v___x_3766_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3765_);
lean_dec_ref(v_a_3709_);
v___y_3737_ = v___x_3767_;
goto v___jp_3736_;
}
v___jp_3768_:
{
if (v_a_3769_ == 0)
{
lean_dec(v_val_3756_);
lean_dec_ref(v_pkg_3708_);
v_a_3765_ = v_a_3770_;
goto v___jp_3764_;
}
else
{
lean_object* v_toContext_3771_; lean_object* v_log_3772_; uint8_t v_action_3773_; uint8_t v_wantsRebuild_3774_; lean_object* v_trace_3775_; lean_object* v_buildTime_3776_; lean_object* v_lakeCache_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v_toContext_3771_ = lean_ctor_get(v_a_3713_, 1);
v_log_3772_ = lean_ctor_get(v_a_3770_, 0);
v_action_3773_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*3);
v_wantsRebuild_3774_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*3 + 1);
v_trace_3775_ = lean_ctor_get(v_a_3770_, 1);
v_buildTime_3776_ = lean_ctor_get(v_a_3770_, 2);
v_lakeCache_3777_ = lean_ctor_get(v_toContext_3771_, 2);
v___x_3778_ = l_Lake_Package_cacheScope(v_pkg_3708_);
lean_inc_ref(v_lakeCache_3777_);
v___x_3779_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_3777_, v___x_3778_, v_inputHash_3706_, v_val_3756_, v___x_3757_, v___x_3757_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
lean_dec_ref(v___x_3779_);
v___x_3780_ = lean_box(0);
v___x_3781_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3761_, v___x_3780_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3770_);
lean_dec_ref(v_a_3709_);
v___y_3737_ = v___x_3781_;
goto v___jp_3736_;
}
else
{
lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3797_; 
lean_inc(v_buildTime_3776_);
lean_inc_ref(v_trace_3775_);
lean_inc_ref(v_log_3772_);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_a_3770_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; lean_object* v_unused_3799_; lean_object* v_unused_3800_; 
v_unused_3798_ = lean_ctor_get(v_a_3770_, 2);
lean_dec(v_unused_3798_);
v_unused_3799_ = lean_ctor_get(v_a_3770_, 1);
lean_dec(v_unused_3799_);
v_unused_3800_ = lean_ctor_get(v_a_3770_, 0);
lean_dec(v_unused_3800_);
v___x_3783_ = v_a_3770_;
v_isShared_3784_ = v_isSharedCheck_3797_;
goto v_resetjp_3782_;
}
else
{
lean_dec(v_a_3770_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3797_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v_a_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; uint8_t v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3794_; 
v_a_3785_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3785_);
lean_dec_ref(v___x_3779_);
v___x_3786_ = lean_obj_once(&l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0, &l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_once, _init_l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0);
v___x_3787_ = lean_io_error_to_string(v_a_3785_);
v___x_3788_ = lean_string_append(v___x_3786_, v___x_3787_);
lean_dec_ref(v___x_3787_);
v___x_3789_ = 2;
v___x_3790_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3790_, 0, v___x_3788_);
lean_ctor_set_uint8(v___x_3790_, sizeof(void*)*1, v___x_3789_);
v___x_3791_ = lean_box(0);
v___x_3792_ = lean_array_push(v_log_3772_, v___x_3790_);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 0, v___x_3792_);
v___x_3794_ = v___x_3783_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3792_);
lean_ctor_set(v_reuseFailAlloc_3796_, 1, v_trace_3775_);
lean_ctor_set(v_reuseFailAlloc_3796_, 2, v_buildTime_3776_);
lean_ctor_set_uint8(v_reuseFailAlloc_3796_, sizeof(void*)*3, v_action_3773_);
lean_ctor_set_uint8(v_reuseFailAlloc_3796_, sizeof(void*)*3 + 1, v_wantsRebuild_3774_);
v___x_3794_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
lean_object* v___x_3795_; 
v___x_3795_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3761_, v___x_3791_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v___x_3794_);
lean_dec_ref(v_a_3709_);
v___y_3737_ = v___x_3795_;
goto v___jp_3736_;
}
}
}
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v_a_3816_; 
lean_dec(v_val_3756_);
lean_dec_ref(v_a_3709_);
lean_dec_ref(v_pkg_3708_);
v_a_3815_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3815_);
v_a_3816_ = lean_ctor_get(v___x_3759_, 1);
lean_inc(v_a_3816_);
lean_dec_ref(v___x_3759_);
v_a_3721_ = v_a_3815_;
v_a_3722_ = v_a_3816_;
goto v___jp_3720_;
}
}
else
{
lean_dec(v_outputs_x3f_3754_);
lean_dec_ref(v_a_3709_);
lean_dec_ref(v_pkg_3708_);
lean_dec_ref(v_inst_3705_);
v___y_3717_ = v_a_3714_;
goto v___jp_3716_;
}
}
}
else
{
lean_dec_ref(v_a_3709_);
lean_dec_ref(v_pkg_3708_);
lean_dec(v_savedTrace_3707_);
lean_dec_ref(v_inst_3705_);
v___y_3717_ = v_a_3714_;
goto v___jp_3716_;
}
v___jp_3716_:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_box(0);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
lean_ctor_set(v___x_3719_, 1, v___y_3717_);
return v___x_3719_;
}
v___jp_3720_:
{
lean_object* v_log_3723_; uint8_t v_action_3724_; uint8_t v_wantsRebuild_3725_; lean_object* v_trace_3726_; lean_object* v_buildTime_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3735_; 
v_log_3723_ = lean_ctor_get(v_a_3722_, 0);
v_action_3724_ = lean_ctor_get_uint8(v_a_3722_, sizeof(void*)*3);
v_wantsRebuild_3725_ = lean_ctor_get_uint8(v_a_3722_, sizeof(void*)*3 + 1);
v_trace_3726_ = lean_ctor_get(v_a_3722_, 1);
v_buildTime_3727_ = lean_ctor_get(v_a_3722_, 2);
v_isSharedCheck_3735_ = !lean_is_exclusive(v_a_3722_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3729_ = v_a_3722_;
v_isShared_3730_ = v_isSharedCheck_3735_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_buildTime_3727_);
lean_inc(v_trace_3726_);
lean_inc(v_log_3723_);
lean_dec(v_a_3722_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3735_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; lean_object* v___x_3733_; 
v___x_3731_ = l_Array_shrink___redArg(v_log_3723_, v_a_3721_);
lean_dec(v_a_3721_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3731_);
v___x_3733_ = v___x_3729_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v___x_3731_);
lean_ctor_set(v_reuseFailAlloc_3734_, 1, v_trace_3726_);
lean_ctor_set(v_reuseFailAlloc_3734_, 2, v_buildTime_3727_);
lean_ctor_set_uint8(v_reuseFailAlloc_3734_, sizeof(void*)*3, v_action_3724_);
lean_ctor_set_uint8(v_reuseFailAlloc_3734_, sizeof(void*)*3 + 1, v_wantsRebuild_3725_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
v___y_3717_ = v___x_3733_;
goto v___jp_3716_;
}
}
}
v___jp_3736_:
{
if (lean_obj_tag(v___y_3737_) == 0)
{
lean_object* v_a_3738_; 
v_a_3738_ = lean_ctor_get(v___y_3737_, 0);
if (lean_obj_tag(v_a_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3747_; 
lean_inc_ref(v_a_3738_);
v_a_3739_ = lean_ctor_get(v___y_3737_, 1);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___y_3737_);
if (v_isSharedCheck_3747_ == 0)
{
lean_object* v_unused_3748_; 
v_unused_3748_ = lean_ctor_get(v___y_3737_, 0);
lean_dec(v_unused_3748_);
v___x_3741_ = v___y_3737_;
v_isShared_3742_ = v_isSharedCheck_3747_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___y_3737_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3747_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v_a_3743_; lean_object* v___x_3745_; 
v_a_3743_ = lean_ctor_get(v_a_3738_, 0);
lean_inc(v_a_3743_);
lean_dec_ref(v_a_3738_);
if (v_isShared_3742_ == 0)
{
lean_ctor_set(v___x_3741_, 0, v_a_3743_);
v___x_3745_ = v___x_3741_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3743_);
lean_ctor_set(v_reuseFailAlloc_3746_, 1, v_a_3739_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
else
{
lean_object* v_a_3749_; 
v_a_3749_ = lean_ctor_get(v___y_3737_, 1);
lean_inc(v_a_3749_);
lean_dec_ref(v___y_3737_);
v___y_3717_ = v_a_3749_;
goto v___jp_3716_;
}
}
else
{
lean_object* v_a_3750_; lean_object* v_a_3751_; 
v_a_3750_ = lean_ctor_get(v___y_3737_, 0);
lean_inc(v_a_3750_);
v_a_3751_ = lean_ctor_get(v___y_3737_, 1);
lean_inc(v_a_3751_);
lean_dec_ref(v___y_3737_);
v_a_3721_ = v_a_3750_;
v_a_3722_ = v_a_3751_;
goto v___jp_3720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object* v_inst_3817_, lean_object* v_inputHash_3818_, lean_object* v_savedTrace_3819_, lean_object* v_pkg_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_){
_start:
{
uint64_t v_inputHash_boxed_3828_; lean_object* v_res_3829_; 
v_inputHash_boxed_3828_ = lean_unbox_uint64(v_inputHash_3818_);
lean_dec_ref(v_inputHash_3818_);
v_res_3829_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3817_, v_inputHash_boxed_3828_, v_savedTrace_3819_, v_pkg_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_);
lean_dec_ref(v_a_3825_);
lean_dec(v_a_3824_);
lean_dec(v_a_3823_);
lean_dec(v_a_3822_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object* v_00_u03b1_3830_, lean_object* v_inst_3831_, uint64_t v_inputHash_3832_, lean_object* v_savedTrace_3833_, lean_object* v_pkg_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_){
_start:
{
lean_object* v___x_3842_; 
v___x_3842_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3831_, v_inputHash_3832_, v_savedTrace_3833_, v_pkg_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object* v_00_u03b1_3843_, lean_object* v_inst_3844_, lean_object* v_inputHash_3845_, lean_object* v_savedTrace_3846_, lean_object* v_pkg_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_){
_start:
{
uint64_t v_inputHash_boxed_3855_; lean_object* v_res_3856_; 
v_inputHash_boxed_3855_ = lean_unbox_uint64(v_inputHash_3845_);
lean_dec_ref(v_inputHash_3845_);
v_res_3856_ = l_Lake_getArtifactsUsingTrace_x3f(v_00_u03b1_3843_, v_inst_3844_, v_inputHash_boxed_3855_, v_savedTrace_3846_, v_pkg_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_);
lean_dec_ref(v_a_3852_);
lean_dec(v_a_3851_);
lean_dec(v_a_3850_);
lean_dec(v_a_3849_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object* v_inst_3857_, uint64_t v_inputHash_3858_, lean_object* v_savedTrace_3859_, lean_object* v_pkg_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v_a_3869_; lean_object* v___y_3870_; lean_object* v___x_3873_; 
lean_inc_ref(v_a_3861_);
lean_inc_ref(v_pkg_3860_);
lean_inc_ref(v_inst_3857_);
v___x_3873_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3857_, v_inputHash_3858_, v_pkg_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
if (lean_obj_tag(v___x_3873_) == 0)
{
lean_object* v_a_3874_; 
v_a_3874_ = lean_ctor_get(v___x_3873_, 0);
lean_inc(v_a_3874_);
if (lean_obj_tag(v_a_3874_) == 1)
{
lean_object* v_a_3875_; lean_object* v_val_3876_; 
lean_dec_ref(v_a_3861_);
lean_dec_ref(v_pkg_3860_);
lean_dec(v_savedTrace_3859_);
lean_dec_ref(v_inst_3857_);
v_a_3875_ = lean_ctor_get(v___x_3873_, 1);
lean_inc(v_a_3875_);
lean_dec_ref(v___x_3873_);
v_val_3876_ = lean_ctor_get(v_a_3874_, 0);
lean_inc(v_val_3876_);
lean_dec_ref(v_a_3874_);
v_a_3869_ = v_val_3876_;
v___y_3870_ = v_a_3875_;
goto v___jp_3868_;
}
else
{
lean_object* v_a_3877_; lean_object* v___x_3878_; lean_object* v_a_3879_; 
lean_dec(v_a_3874_);
v_a_3877_ = lean_ctor_get(v___x_3873_, 1);
lean_inc(v_a_3877_);
lean_dec_ref(v___x_3873_);
v___x_3878_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3857_, v_inputHash_3858_, v_savedTrace_3859_, v_pkg_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3877_);
v_a_3879_ = lean_ctor_get(v___x_3878_, 0);
lean_inc(v_a_3879_);
if (lean_obj_tag(v_a_3879_) == 1)
{
lean_object* v_a_3880_; lean_object* v_val_3881_; 
v_a_3880_ = lean_ctor_get(v___x_3878_, 1);
lean_inc(v_a_3880_);
lean_dec_ref(v___x_3878_);
v_val_3881_ = lean_ctor_get(v_a_3879_, 0);
lean_inc(v_val_3881_);
lean_dec_ref(v_a_3879_);
v_a_3869_ = v_val_3881_;
v___y_3870_ = v_a_3880_;
goto v___jp_3868_;
}
else
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3890_; 
lean_dec(v_a_3879_);
v_a_3882_ = lean_ctor_get(v___x_3878_, 1);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3878_);
if (v_isSharedCheck_3890_ == 0)
{
lean_object* v_unused_3891_; 
v_unused_3891_ = lean_ctor_get(v___x_3878_, 0);
lean_dec(v_unused_3891_);
v___x_3884_ = v___x_3878_;
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3878_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3886_; lean_object* v___x_3888_; 
v___x_3886_ = lean_box(0);
if (v_isShared_3885_ == 0)
{
lean_ctor_set(v___x_3884_, 0, v___x_3886_);
v___x_3888_ = v___x_3884_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v___x_3886_);
lean_ctor_set(v_reuseFailAlloc_3889_, 1, v_a_3882_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_3861_);
lean_dec_ref(v_pkg_3860_);
lean_dec(v_savedTrace_3859_);
lean_dec_ref(v_inst_3857_);
return v___x_3873_;
}
v___jp_3868_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3871_, 0, v_a_3869_);
v___x_3872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
lean_ctor_set(v___x_3872_, 1, v___y_3870_);
return v___x_3872_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object* v_inst_3892_, lean_object* v_inputHash_3893_, lean_object* v_savedTrace_3894_, lean_object* v_pkg_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_){
_start:
{
uint64_t v_inputHash_boxed_3903_; lean_object* v_res_3904_; 
v_inputHash_boxed_3903_ = lean_unbox_uint64(v_inputHash_3893_);
lean_dec_ref(v_inputHash_3893_);
v_res_3904_ = l_Lake_getArtifacts_x3f___redArg(v_inst_3892_, v_inputHash_boxed_3903_, v_savedTrace_3894_, v_pkg_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_, v_a_3901_);
lean_dec_ref(v_a_3900_);
lean_dec(v_a_3899_);
lean_dec(v_a_3898_);
lean_dec(v_a_3897_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object* v_00_u03b1_3905_, lean_object* v_inst_3906_, uint64_t v_inputHash_3907_, lean_object* v_savedTrace_3908_, lean_object* v_pkg_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_a_3918_; lean_object* v___y_3919_; lean_object* v___x_3922_; 
lean_inc_ref(v_a_3910_);
lean_inc_ref(v_pkg_3909_);
lean_inc_ref(v_inst_3906_);
v___x_3922_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3906_, v_inputHash_3907_, v_pkg_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3915_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
if (lean_obj_tag(v_a_3923_) == 1)
{
lean_object* v_a_3924_; lean_object* v_val_3925_; 
lean_dec_ref(v_a_3910_);
lean_dec_ref(v_pkg_3909_);
lean_dec(v_savedTrace_3908_);
lean_dec_ref(v_inst_3906_);
v_a_3924_ = lean_ctor_get(v___x_3922_, 1);
lean_inc(v_a_3924_);
lean_dec_ref(v___x_3922_);
v_val_3925_ = lean_ctor_get(v_a_3923_, 0);
lean_inc(v_val_3925_);
lean_dec_ref(v_a_3923_);
v_a_3918_ = v_val_3925_;
v___y_3919_ = v_a_3924_;
goto v___jp_3917_;
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3927_; lean_object* v_a_3928_; 
lean_dec(v_a_3923_);
v_a_3926_ = lean_ctor_get(v___x_3922_, 1);
lean_inc(v_a_3926_);
lean_dec_ref(v___x_3922_);
v___x_3927_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3906_, v_inputHash_3907_, v_savedTrace_3908_, v_pkg_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3926_);
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc(v_a_3928_);
if (lean_obj_tag(v_a_3928_) == 1)
{
lean_object* v_a_3929_; lean_object* v_val_3930_; 
v_a_3929_ = lean_ctor_get(v___x_3927_, 1);
lean_inc(v_a_3929_);
lean_dec_ref(v___x_3927_);
v_val_3930_ = lean_ctor_get(v_a_3928_, 0);
lean_inc(v_val_3930_);
lean_dec_ref(v_a_3928_);
v_a_3918_ = v_val_3930_;
v___y_3919_ = v_a_3929_;
goto v___jp_3917_;
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3939_; 
lean_dec(v_a_3928_);
v_a_3931_ = lean_ctor_get(v___x_3927_, 1);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3939_ == 0)
{
lean_object* v_unused_3940_; 
v_unused_3940_ = lean_ctor_get(v___x_3927_, 0);
lean_dec(v_unused_3940_);
v___x_3933_ = v___x_3927_;
v_isShared_3934_ = v_isSharedCheck_3939_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3927_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3939_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3935_; lean_object* v___x_3937_; 
v___x_3935_ = lean_box(0);
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 0, v___x_3935_);
v___x_3937_ = v___x_3933_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3935_);
lean_ctor_set(v_reuseFailAlloc_3938_, 1, v_a_3931_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_3910_);
lean_dec_ref(v_pkg_3909_);
lean_dec(v_savedTrace_3908_);
lean_dec_ref(v_inst_3906_);
return v___x_3922_;
}
v___jp_3917_:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3920_, 0, v_a_3918_);
v___x_3921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3920_);
lean_ctor_set(v___x_3921_, 1, v___y_3919_);
return v___x_3921_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object* v_00_u03b1_3941_, lean_object* v_inst_3942_, lean_object* v_inputHash_3943_, lean_object* v_savedTrace_3944_, lean_object* v_pkg_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_){
_start:
{
uint64_t v_inputHash_boxed_3953_; lean_object* v_res_3954_; 
v_inputHash_boxed_3953_ = lean_unbox_uint64(v_inputHash_3943_);
lean_dec_ref(v_inputHash_3943_);
v_res_3954_ = l_Lake_getArtifacts_x3f(v_00_u03b1_3941_, v_inst_3942_, v_inputHash_boxed_3953_, v_savedTrace_3944_, v_pkg_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_);
lean_dec_ref(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec(v_a_3947_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object* v_descr_3955_, lean_object* v___x_3956_, lean_object* v_mtime_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
lean_inc_ref(v___x_3956_);
v___x_3965_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3965_, 0, v_descr_3955_);
lean_ctor_set(v___x_3965_, 1, v___x_3956_);
lean_ctor_set(v___x_3965_, 2, v___x_3956_);
lean_ctor_set(v___x_3965_, 3, v_mtime_3957_);
v___x_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
lean_ctor_set(v___x_3966_, 1, v___y_3963_);
return v___x_3966_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object* v_descr_3967_, lean_object* v___x_3968_, lean_object* v_mtime_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
lean_object* v_res_3977_; 
v_res_3977_ = l_Lake_resolveArtifact___lam__0(v_descr_3967_, v___x_3968_, v_mtime_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
lean_dec_ref(v___y_3974_);
lean_dec(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
return v_res_3977_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_mk_string_unchecked("downloaded succeeded, but artifact failed to resolve: ", 54, 54);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object* v___x_3979_, lean_object* v___f_3980_, lean_object* v_____r_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_log_3989_; uint8_t v_action_3990_; uint8_t v_wantsRebuild_3991_; lean_object* v_trace_3992_; lean_object* v_buildTime_3993_; lean_object* v___x_3994_; 
v_log_3989_ = lean_ctor_get(v___y_3987_, 0);
v_action_3990_ = lean_ctor_get_uint8(v___y_3987_, sizeof(void*)*3);
v_wantsRebuild_3991_ = lean_ctor_get_uint8(v___y_3987_, sizeof(void*)*3 + 1);
v_trace_3992_ = lean_ctor_get(v___y_3987_, 1);
v_buildTime_3993_ = lean_ctor_get(v___y_3987_, 2);
v___x_3994_ = lean_io_metadata(v___x_3979_);
if (lean_obj_tag(v___x_3994_) == 0)
{
lean_object* v_a_3995_; lean_object* v_modified_3996_; lean_object* v___x_3997_; 
v_a_3995_ = lean_ctor_get(v___x_3994_, 0);
lean_inc(v_a_3995_);
lean_dec_ref(v___x_3994_);
v_modified_3996_ = lean_ctor_get(v_a_3995_, 1);
lean_inc_ref(v_modified_3996_);
lean_dec(v_a_3995_);
lean_inc_ref(v___y_3986_);
lean_inc(v___y_3985_);
lean_inc(v___y_3984_);
lean_inc(v___y_3983_);
v___x_3997_ = lean_apply_8(v___f_3980_, v_modified_3996_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_, lean_box(0));
return v___x_3997_;
}
else
{
lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4013_; 
lean_inc(v_buildTime_3993_);
lean_inc_ref(v_trace_3992_);
lean_inc_ref(v_log_3989_);
lean_dec_ref(v___y_3982_);
lean_dec_ref(v___f_3980_);
v_isSharedCheck_4013_ = !lean_is_exclusive(v___y_3987_);
if (v_isSharedCheck_4013_ == 0)
{
lean_object* v_unused_4014_; lean_object* v_unused_4015_; lean_object* v_unused_4016_; 
v_unused_4014_ = lean_ctor_get(v___y_3987_, 2);
lean_dec(v_unused_4014_);
v_unused_4015_ = lean_ctor_get(v___y_3987_, 1);
lean_dec(v_unused_4015_);
v_unused_4016_ = lean_ctor_get(v___y_3987_, 0);
lean_dec(v_unused_4016_);
v___x_3999_ = v___y_3987_;
v_isShared_4000_ = v_isSharedCheck_4013_;
goto v_resetjp_3998_;
}
else
{
lean_dec(v___y_3987_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4013_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v_a_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; uint8_t v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4010_; 
v_a_4001_ = lean_ctor_get(v___x_3994_, 0);
lean_inc(v_a_4001_);
lean_dec_ref(v___x_3994_);
v___x_4002_ = lean_obj_once(&l_Lake_resolveArtifact___lam__1___closed__0, &l_Lake_resolveArtifact___lam__1___closed__0_once, _init_l_Lake_resolveArtifact___lam__1___closed__0);
v___x_4003_ = lean_io_error_to_string(v_a_4001_);
v___x_4004_ = lean_string_append(v___x_4002_, v___x_4003_);
lean_dec_ref(v___x_4003_);
v___x_4005_ = 3;
v___x_4006_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4006_, 0, v___x_4004_);
lean_ctor_set_uint8(v___x_4006_, sizeof(void*)*1, v___x_4005_);
v___x_4007_ = lean_array_get_size(v_log_3989_);
v___x_4008_ = lean_array_push(v_log_3989_, v___x_4006_);
if (v_isShared_4000_ == 0)
{
lean_ctor_set(v___x_3999_, 0, v___x_4008_);
v___x_4010_ = v___x_3999_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_4008_);
lean_ctor_set(v_reuseFailAlloc_4012_, 1, v_trace_3992_);
lean_ctor_set(v_reuseFailAlloc_4012_, 2, v_buildTime_3993_);
lean_ctor_set_uint8(v_reuseFailAlloc_4012_, sizeof(void*)*3, v_action_3990_);
lean_ctor_set_uint8(v_reuseFailAlloc_4012_, sizeof(void*)*3 + 1, v_wantsRebuild_3991_);
v___x_4010_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
lean_object* v___x_4011_; 
v___x_4011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4007_);
lean_ctor_set(v___x_4011_, 1, v___x_4010_);
return v___x_4011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object* v___x_4017_, lean_object* v___f_4018_, lean_object* v_____r_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lake_resolveArtifact___lam__1(v___x_4017_, v___f_4018_, v_____r_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec(v___y_4022_);
lean_dec(v___y_4021_);
lean_dec_ref(v___x_4017_);
return v_res_4027_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__0(void){
_start:
{
lean_object* v___x_4028_; 
v___x_4028_ = lean_mk_string_unchecked("downloaded artifact ", 20, 20);
return v___x_4028_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__1(void){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_mk_string_unchecked("\n  local path: ", 15, 15);
return v___x_4029_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__2(void){
_start:
{
lean_object* v___x_4030_; 
v___x_4030_ = lean_mk_string_unchecked("\n  remote URL: ", 15, 15);
return v___x_4030_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__3(void){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = lean_mk_string_unchecked("could not mark downloaded artifact read-only: ", 46, 46);
return v___x_4031_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__4(void){
_start:
{
lean_object* v___x_4032_; 
v___x_4032_ = lean_mk_string_unchecked("artifact with associated cache service but no scope", 51, 51);
return v___x_4032_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__5(void){
_start:
{
lean_object* v___x_4033_; uint8_t v___x_4034_; lean_object* v___x_4035_; 
v___x_4033_ = lean_obj_once(&l_Lake_resolveArtifact___closed__4, &l_Lake_resolveArtifact___closed__4_once, _init_l_Lake_resolveArtifact___closed__4);
v___x_4034_ = 3;
v___x_4035_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4035_, 0, v___x_4033_);
lean_ctor_set_uint8(v___x_4035_, sizeof(void*)*1, v___x_4034_);
return v___x_4035_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__6(void){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = lean_mk_string_unchecked("artifact cache service is not configured: ", 42, 42);
return v___x_4036_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__7(void){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = lean_mk_string_unchecked("artifact not found in cache:\n  ", 31, 31);
return v___x_4037_;
}
}
static lean_object* _init_l_Lake_resolveArtifact___closed__8(void){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = lean_mk_string_unchecked("failed to retrieve artifact from cache: ", 40, 40);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object* v_descr_4039_, lean_object* v_service_x3f_4040_, lean_object* v_scope_x3f_4041_, uint8_t v_exe_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_){
_start:
{
lean_object* v___y_4051_; lean_object* v_a_4052_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v_toContext_4058_; lean_object* v_log_4059_; uint8_t v_action_4060_; uint8_t v_wantsRebuild_4061_; lean_object* v_trace_4062_; lean_object* v_buildTime_4063_; lean_object* v_lakeConfig_4064_; lean_object* v_lakeCache_4065_; uint64_t v_hash_4066_; lean_object* v_ext_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___y_4071_; lean_object* v___x_4169_; lean_object* v___x_4170_; uint8_t v___x_4171_; 
v_toContext_4058_ = lean_ctor_get(v_a_4047_, 1);
v_log_4059_ = lean_ctor_get(v_a_4048_, 0);
v_action_4060_ = lean_ctor_get_uint8(v_a_4048_, sizeof(void*)*3);
v_wantsRebuild_4061_ = lean_ctor_get_uint8(v_a_4048_, sizeof(void*)*3 + 1);
v_trace_4062_ = lean_ctor_get(v_a_4048_, 1);
v_buildTime_4063_ = lean_ctor_get(v_a_4048_, 2);
v_lakeConfig_4064_ = lean_ctor_get(v_toContext_4058_, 1);
v_lakeCache_4065_ = lean_ctor_get(v_toContext_4058_, 2);
v_hash_4066_ = lean_ctor_get_uint64(v_descr_4039_, sizeof(void*)*1);
v_ext_4067_ = lean_ctor_get(v_descr_4039_, 0);
v___x_4068_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__1, &l_Lake_Cache_saveArtifact___closed__1_once, _init_l_Lake_Cache_saveArtifact___closed__1);
lean_inc_ref(v_lakeCache_4065_);
v___x_4069_ = l_System_FilePath_join(v_lakeCache_4065_, v___x_4068_);
v___x_4169_ = lean_string_utf8_byte_size(v_ext_4067_);
v___x_4170_ = lean_unsigned_to_nat(0u);
v___x_4171_ = lean_nat_dec_eq(v___x_4169_, v___x_4170_);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4172_ = l_Lake_lowerHexUInt64(v_hash_4066_);
v___x_4173_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_4174_ = lean_string_append(v___x_4172_, v___x_4173_);
v___x_4175_ = lean_string_append(v___x_4174_, v_ext_4067_);
v___y_4071_ = v___x_4175_;
goto v___jp_4070_;
}
else
{
lean_object* v___x_4176_; 
v___x_4176_ = l_Lake_lowerHexUInt64(v_hash_4066_);
v___y_4071_ = v___x_4176_;
goto v___jp_4070_;
}
v___jp_4050_:
{
lean_object* v___x_4053_; 
v___x_4053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4053_, 0, v___y_4051_);
lean_ctor_set(v___x_4053_, 1, v_a_4052_);
return v___x_4053_;
}
v___jp_4054_:
{
if (lean_obj_tag(v___y_4056_) == 0)
{
lean_dec(v___y_4055_);
return v___y_4056_;
}
else
{
lean_object* v_a_4057_; 
v_a_4057_ = lean_ctor_get(v___y_4056_, 1);
lean_inc(v_a_4057_);
lean_dec_ref(v___y_4056_);
v___y_4051_ = v___y_4055_;
v_a_4052_ = v_a_4057_;
goto v___jp_4050_;
}
}
v___jp_4070_:
{
lean_object* v___x_4072_; lean_object* v___f_4073_; lean_object* v___x_4074_; 
v___x_4072_ = l_Lake_joinRelative(v___x_4069_, v___y_4071_);
lean_inc_ref(v___x_4072_);
lean_inc_ref(v_descr_4039_);
v___f_4073_ = lean_alloc_closure((void*)(l_Lake_resolveArtifact___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4073_, 0, v_descr_4039_);
lean_closure_set(v___f_4073_, 1, v___x_4072_);
v___x_4074_ = lean_io_metadata(v___x_4072_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v_modified_4076_; lean_object* v___x_4077_; 
lean_dec_ref(v___f_4073_);
lean_dec(v_scope_x3f_4041_);
lean_dec(v_service_x3f_4040_);
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref(v___x_4074_);
v_modified_4076_ = lean_ctor_get(v_a_4075_, 1);
lean_inc_ref(v_modified_4076_);
lean_dec(v_a_4075_);
v___x_4077_ = l_Lake_resolveArtifact___lam__0(v_descr_4039_, v___x_4072_, v_modified_4076_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_, v_a_4047_, v_a_4048_);
lean_dec_ref(v_a_4043_);
return v___x_4077_;
}
else
{
lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4165_; 
lean_inc(v_buildTime_4063_);
lean_inc_ref(v_trace_4062_);
lean_inc_ref(v_log_4059_);
lean_dec_ref(v_descr_4039_);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_a_4048_);
if (v_isSharedCheck_4165_ == 0)
{
lean_object* v_unused_4166_; lean_object* v_unused_4167_; lean_object* v_unused_4168_; 
v_unused_4166_ = lean_ctor_get(v_a_4048_, 2);
lean_dec(v_unused_4166_);
v_unused_4167_ = lean_ctor_get(v_a_4048_, 1);
lean_dec(v_unused_4167_);
v_unused_4168_ = lean_ctor_get(v_a_4048_, 0);
lean_dec(v_unused_4168_);
v___x_4079_ = v_a_4048_;
v_isShared_4080_ = v_isSharedCheck_4165_;
goto v_resetjp_4078_;
}
else
{
lean_dec(v_a_4048_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4165_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v_a_4081_; 
v_a_4081_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4081_);
lean_dec_ref(v___x_4074_);
if (lean_obj_tag(v_a_4081_) == 11)
{
lean_object* v___x_4082_; 
lean_dec_ref(v_a_4081_);
v___x_4082_ = lean_array_get_size(v_log_4059_);
if (lean_obj_tag(v_service_x3f_4040_) == 1)
{
lean_object* v_val_4083_; lean_object* v_cacheServices_4084_; uint8_t v___x_4085_; uint8_t v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v_val_4083_ = lean_ctor_get(v_service_x3f_4040_, 0);
lean_inc_n(v_val_4083_, 2);
lean_dec_ref(v_service_x3f_4040_);
v_cacheServices_4084_ = lean_ctor_get(v_lakeConfig_4064_, 3);
v___x_4085_ = 4;
v___x_4086_ = l_Lake_JobAction_merge(v_action_4060_, v___x_4085_);
v___x_4087_ = lean_box(0);
v___x_4088_ = l_Lean_Name_str___override(v___x_4087_, v_val_4083_);
v___x_4089_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_cacheServices_4084_, v___x_4088_);
lean_dec(v___x_4088_);
if (lean_obj_tag(v___x_4089_) == 1)
{
lean_dec(v_val_4083_);
if (lean_obj_tag(v_scope_x3f_4041_) == 1)
{
lean_object* v_val_4090_; lean_object* v_val_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; uint8_t v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v_val_4090_ = lean_ctor_get(v___x_4089_, 0);
lean_inc(v_val_4090_);
lean_dec_ref(v___x_4089_);
v_val_4091_ = lean_ctor_get(v_scope_x3f_4041_, 0);
lean_inc(v_val_4091_);
lean_dec_ref(v_scope_x3f_4041_);
v___x_4092_ = l_Lake_CacheService_artifactUrl(v_hash_4066_, v_val_4090_, v_val_4091_);
v___x_4093_ = lean_obj_once(&l_Lake_resolveArtifact___closed__0, &l_Lake_resolveArtifact___closed__0_once, _init_l_Lake_resolveArtifact___closed__0);
v___x_4094_ = l_Lake_lowerHexUInt64(v_hash_4066_);
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
lean_dec_ref(v___x_4094_);
v___x_4096_ = lean_obj_once(&l_Lake_resolveArtifact___closed__1, &l_Lake_resolveArtifact___closed__1_once, _init_l_Lake_resolveArtifact___closed__1);
v___x_4097_ = lean_string_append(v___x_4095_, v___x_4096_);
v___x_4098_ = lean_string_append(v___x_4097_, v___x_4072_);
v___x_4099_ = lean_obj_once(&l_Lake_resolveArtifact___closed__2, &l_Lake_resolveArtifact___closed__2_once, _init_l_Lake_resolveArtifact___closed__2);
v___x_4100_ = lean_string_append(v___x_4098_, v___x_4099_);
v___x_4101_ = lean_string_append(v___x_4100_, v___x_4092_);
v___x_4102_ = 0;
v___x_4103_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4103_, 0, v___x_4101_);
lean_ctor_set_uint8(v___x_4103_, sizeof(void*)*1, v___x_4102_);
v___x_4104_ = lean_array_push(v_log_4059_, v___x_4103_);
lean_inc_ref(v___x_4072_);
v___x_4105_ = l_Lake_downloadArtifactCore(v_hash_4066_, v___x_4092_, v___x_4072_, v___x_4104_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v_a_4106_; uint8_t v___x_4107_; uint8_t v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v_a_4106_ = lean_ctor_get(v___x_4105_, 1);
lean_inc(v_a_4106_);
lean_dec_ref(v___x_4105_);
v___x_4107_ = 1;
v___x_4108_ = 0;
v___x_4109_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4109_, 0, v___x_4107_);
lean_ctor_set_uint8(v___x_4109_, 1, v___x_4108_);
lean_ctor_set_uint8(v___x_4109_, 2, v_exe_4042_);
lean_inc_ref_n(v___x_4109_, 2);
v___x_4110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
lean_ctor_set(v___x_4110_, 1, v___x_4109_);
lean_ctor_set(v___x_4110_, 2, v___x_4109_);
v___x_4111_ = l_IO_setAccessRights(v___x_4072_, v___x_4110_);
lean_dec_ref(v___x_4110_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v___x_4113_; 
lean_dec_ref(v___x_4111_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v_a_4106_);
v___x_4113_ = v___x_4079_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4106_);
lean_ctor_set(v_reuseFailAlloc_4116_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4116_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4116_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4113_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; 
lean_ctor_set_uint8(v___x_4113_, sizeof(void*)*3, v___x_4086_);
v___x_4114_ = lean_box(0);
v___x_4115_ = l_Lake_resolveArtifact___lam__1(v___x_4072_, v___f_4073_, v___x_4114_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_, v_a_4047_, v___x_4113_);
lean_dec_ref(v___x_4072_);
v___y_4055_ = v___x_4082_;
v___y_4056_ = v___x_4115_;
goto v___jp_4054_;
}
}
else
{
lean_object* v_a_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; uint8_t v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4126_; 
v_a_4117_ = lean_ctor_get(v___x_4111_, 0);
lean_inc(v_a_4117_);
lean_dec_ref(v___x_4111_);
v___x_4118_ = lean_obj_once(&l_Lake_resolveArtifact___closed__3, &l_Lake_resolveArtifact___closed__3_once, _init_l_Lake_resolveArtifact___closed__3);
v___x_4119_ = lean_io_error_to_string(v_a_4117_);
v___x_4120_ = lean_string_append(v___x_4118_, v___x_4119_);
lean_dec_ref(v___x_4119_);
v___x_4121_ = 2;
v___x_4122_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4122_, 0, v___x_4120_);
lean_ctor_set_uint8(v___x_4122_, sizeof(void*)*1, v___x_4121_);
v___x_4123_ = lean_box(0);
v___x_4124_ = lean_array_push(v_a_4106_, v___x_4122_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4124_);
v___x_4126_ = v___x_4079_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4124_);
lean_ctor_set(v_reuseFailAlloc_4128_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4128_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4128_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4126_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
lean_object* v___x_4127_; 
lean_ctor_set_uint8(v___x_4126_, sizeof(void*)*3, v___x_4086_);
v___x_4127_ = l_Lake_resolveArtifact___lam__1(v___x_4072_, v___f_4073_, v___x_4123_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_, v_a_4047_, v___x_4126_);
lean_dec_ref(v___x_4072_);
v___y_4055_ = v___x_4082_;
v___y_4056_ = v___x_4127_;
goto v___jp_4054_;
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; 
lean_dec_ref(v___f_4073_);
lean_dec_ref(v___x_4072_);
lean_dec_ref(v_a_4043_);
v_a_4129_ = lean_ctor_get(v___x_4105_, 1);
lean_inc(v_a_4129_);
lean_dec_ref(v___x_4105_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v_a_4129_);
v___x_4131_ = v___x_4079_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_a_4129_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4132_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4132_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
lean_ctor_set_uint8(v___x_4131_, sizeof(void*)*3, v___x_4086_);
v___y_4051_ = v___x_4082_;
v_a_4052_ = v___x_4131_;
goto v___jp_4050_;
}
}
}
else
{
lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4136_; 
lean_dec_ref(v___x_4089_);
lean_dec_ref(v___f_4073_);
lean_dec_ref(v___x_4072_);
lean_dec_ref(v_a_4043_);
lean_dec(v_scope_x3f_4041_);
v___x_4133_ = lean_obj_once(&l_Lake_resolveArtifact___closed__5, &l_Lake_resolveArtifact___closed__5_once, _init_l_Lake_resolveArtifact___closed__5);
v___x_4134_ = lean_array_push(v_log_4059_, v___x_4133_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4134_);
v___x_4136_ = v___x_4079_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v___x_4134_);
lean_ctor_set(v_reuseFailAlloc_4137_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4137_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4137_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
lean_ctor_set_uint8(v___x_4136_, sizeof(void*)*3, v___x_4086_);
v___y_4051_ = v___x_4082_;
v_a_4052_ = v___x_4136_;
goto v___jp_4050_;
}
}
}
else
{
lean_object* v___x_4138_; lean_object* v___x_4139_; uint8_t v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4144_; 
lean_dec(v___x_4089_);
lean_dec_ref(v___f_4073_);
lean_dec_ref(v___x_4072_);
lean_dec_ref(v_a_4043_);
lean_dec(v_scope_x3f_4041_);
v___x_4138_ = lean_obj_once(&l_Lake_resolveArtifact___closed__6, &l_Lake_resolveArtifact___closed__6_once, _init_l_Lake_resolveArtifact___closed__6);
v___x_4139_ = lean_string_append(v___x_4138_, v_val_4083_);
lean_dec(v_val_4083_);
v___x_4140_ = 3;
v___x_4141_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4141_, 0, v___x_4139_);
lean_ctor_set_uint8(v___x_4141_, sizeof(void*)*1, v___x_4140_);
v___x_4142_ = lean_array_push(v_log_4059_, v___x_4141_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4142_);
v___x_4144_ = v___x_4079_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v___x_4142_);
lean_ctor_set(v_reuseFailAlloc_4145_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4145_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4145_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
lean_ctor_set_uint8(v___x_4144_, sizeof(void*)*3, v___x_4086_);
v___y_4051_ = v___x_4082_;
v_a_4052_ = v___x_4144_;
goto v___jp_4050_;
}
}
}
else
{
lean_object* v___x_4146_; lean_object* v___x_4147_; uint8_t v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
lean_dec_ref(v___f_4073_);
lean_dec_ref(v_a_4043_);
lean_dec(v_scope_x3f_4041_);
lean_dec(v_service_x3f_4040_);
v___x_4146_ = lean_obj_once(&l_Lake_resolveArtifact___closed__7, &l_Lake_resolveArtifact___closed__7_once, _init_l_Lake_resolveArtifact___closed__7);
v___x_4147_ = lean_string_append(v___x_4146_, v___x_4072_);
lean_dec_ref(v___x_4072_);
v___x_4148_ = 3;
v___x_4149_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4149_, 0, v___x_4147_);
lean_ctor_set_uint8(v___x_4149_, sizeof(void*)*1, v___x_4148_);
v___x_4150_ = lean_array_push(v_log_4059_, v___x_4149_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4150_);
v___x_4152_ = v___x_4079_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4150_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4153_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4153_, sizeof(void*)*3, v_action_4060_);
lean_ctor_set_uint8(v_reuseFailAlloc_4153_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
v___y_4051_ = v___x_4082_;
v_a_4052_ = v___x_4152_;
goto v___jp_4050_;
}
}
}
else
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; uint8_t v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4162_; 
lean_dec_ref(v___f_4073_);
lean_dec_ref(v___x_4072_);
lean_dec_ref(v_a_4043_);
lean_dec(v_scope_x3f_4041_);
lean_dec(v_service_x3f_4040_);
v___x_4154_ = lean_obj_once(&l_Lake_resolveArtifact___closed__8, &l_Lake_resolveArtifact___closed__8_once, _init_l_Lake_resolveArtifact___closed__8);
v___x_4155_ = lean_io_error_to_string(v_a_4081_);
v___x_4156_ = lean_string_append(v___x_4154_, v___x_4155_);
lean_dec_ref(v___x_4155_);
v___x_4157_ = 3;
v___x_4158_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4158_, 0, v___x_4156_);
lean_ctor_set_uint8(v___x_4158_, sizeof(void*)*1, v___x_4157_);
v___x_4159_ = lean_array_get_size(v_log_4059_);
v___x_4160_ = lean_array_push(v_log_4059_, v___x_4158_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4160_);
v___x_4162_ = v___x_4079_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v_trace_4062_);
lean_ctor_set(v_reuseFailAlloc_4164_, 2, v_buildTime_4063_);
lean_ctor_set_uint8(v_reuseFailAlloc_4164_, sizeof(void*)*3, v_action_4060_);
lean_ctor_set_uint8(v_reuseFailAlloc_4164_, sizeof(void*)*3 + 1, v_wantsRebuild_4061_);
v___x_4162_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4163_; 
v___x_4163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4159_);
lean_ctor_set(v___x_4163_, 1, v___x_4162_);
return v___x_4163_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object* v_descr_4177_, lean_object* v_service_x3f_4178_, lean_object* v_scope_x3f_4179_, lean_object* v_exe_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_){
_start:
{
uint8_t v_exe_boxed_4188_; lean_object* v_res_4189_; 
v_exe_boxed_4188_ = lean_unbox(v_exe_4180_);
v_res_4189_ = l_Lake_resolveArtifact(v_descr_4177_, v_service_x3f_4178_, v_scope_x3f_4179_, v_exe_boxed_4188_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_);
lean_dec_ref(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
return v_res_4189_;
}
}
static lean_object* _init_l_Lake_resolveArtifactOutput___closed__0(void){
_start:
{
lean_object* v___x_4190_; 
v___x_4190_ = lean_mk_string_unchecked("ill-formed artifact output:\n", 28, 28);
return v___x_4190_;
}
}
static lean_object* _init_l_Lake_resolveArtifactOutput___closed__1(void){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object* v_out_4192_, uint8_t v_exe_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_){
_start:
{
lean_object* v_data_4201_; lean_object* v_service_x3f_4202_; lean_object* v_scope_x3f_4203_; lean_object* v___x_4204_; 
v_data_4201_ = lean_ctor_get(v_out_4192_, 0);
lean_inc_n(v_data_4201_, 2);
v_service_x3f_4202_ = lean_ctor_get(v_out_4192_, 1);
lean_inc(v_service_x3f_4202_);
v_scope_x3f_4203_ = lean_ctor_get(v_out_4192_, 2);
lean_inc(v_scope_x3f_4203_);
lean_dec_ref(v_out_4192_);
v___x_4204_ = l_Lake_ArtifactDescr_fromJson_x3f(v_data_4201_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v_log_4206_; uint8_t v_action_4207_; uint8_t v_wantsRebuild_4208_; lean_object* v_trace_4209_; lean_object* v_buildTime_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4232_; 
lean_dec(v_scope_x3f_4203_);
lean_dec(v_service_x3f_4202_);
lean_dec_ref(v_a_4194_);
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref(v___x_4204_);
v_log_4206_ = lean_ctor_get(v_a_4199_, 0);
v_action_4207_ = lean_ctor_get_uint8(v_a_4199_, sizeof(void*)*3);
v_wantsRebuild_4208_ = lean_ctor_get_uint8(v_a_4199_, sizeof(void*)*3 + 1);
v_trace_4209_ = lean_ctor_get(v_a_4199_, 1);
v_buildTime_4210_ = lean_ctor_get(v_a_4199_, 2);
v_isSharedCheck_4232_ = !lean_is_exclusive(v_a_4199_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4212_ = v_a_4199_;
v_isShared_4213_ = v_isSharedCheck_4232_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_buildTime_4210_);
lean_inc(v_trace_4209_);
lean_inc(v_log_4206_);
lean_dec(v_a_4199_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4232_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; uint8_t v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4229_; 
v___x_4214_ = lean_obj_once(&l_Lake_resolveArtifactOutput___closed__0, &l_Lake_resolveArtifactOutput___closed__0_once, _init_l_Lake_resolveArtifactOutput___closed__0);
v___x_4215_ = l_Lean_Json_render(v_data_4201_);
v___x_4216_ = lean_unsigned_to_nat(80u);
v___x_4217_ = lean_unsigned_to_nat(2u);
v___x_4218_ = lean_unsigned_to_nat(0u);
v___x_4219_ = l_Std_Format_pretty(v___x_4215_, v___x_4216_, v___x_4217_, v___x_4218_);
v___x_4220_ = lean_string_append(v___x_4214_, v___x_4219_);
lean_dec_ref(v___x_4219_);
v___x_4221_ = lean_obj_once(&l_Lake_resolveArtifactOutput___closed__1, &l_Lake_resolveArtifactOutput___closed__1_once, _init_l_Lake_resolveArtifactOutput___closed__1);
v___x_4222_ = lean_string_append(v___x_4220_, v___x_4221_);
v___x_4223_ = lean_string_append(v___x_4222_, v_a_4205_);
lean_dec(v_a_4205_);
v___x_4224_ = 3;
v___x_4225_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4225_, 0, v___x_4223_);
lean_ctor_set_uint8(v___x_4225_, sizeof(void*)*1, v___x_4224_);
v___x_4226_ = lean_array_get_size(v_log_4206_);
v___x_4227_ = lean_array_push(v_log_4206_, v___x_4225_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4227_);
v___x_4229_ = v___x_4212_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4231_, 1, v_trace_4209_);
lean_ctor_set(v_reuseFailAlloc_4231_, 2, v_buildTime_4210_);
lean_ctor_set_uint8(v_reuseFailAlloc_4231_, sizeof(void*)*3, v_action_4207_);
lean_ctor_set_uint8(v_reuseFailAlloc_4231_, sizeof(void*)*3 + 1, v_wantsRebuild_4208_);
v___x_4229_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4230_; 
v___x_4230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4226_);
lean_ctor_set(v___x_4230_, 1, v___x_4229_);
return v___x_4230_;
}
}
}
else
{
lean_object* v_a_4233_; lean_object* v___x_4234_; 
lean_dec(v_data_4201_);
v_a_4233_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4233_);
lean_dec_ref(v___x_4204_);
v___x_4234_ = l_Lake_resolveArtifact(v_a_4233_, v_service_x3f_4202_, v_scope_x3f_4203_, v_exe_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_, v_a_4199_);
return v___x_4234_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object* v_out_4235_, lean_object* v_exe_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_){
_start:
{
uint8_t v_exe_boxed_4244_; lean_object* v_res_4245_; 
v_exe_boxed_4244_ = lean_unbox(v_exe_4236_);
v_res_4245_ = l_Lake_resolveArtifactOutput(v_out_4235_, v_exe_boxed_4244_, v_a_4237_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_);
lean_dec_ref(v_a_4241_);
lean_dec(v_a_4240_);
lean_dec(v_a_4239_);
lean_dec(v_a_4238_);
return v_res_4245_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t v_exe_4246_, lean_object* v_out_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v___x_4255_; 
v___x_4255_ = l_Lake_resolveArtifactOutput(v_out_4247_, v_exe_4246_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
return v___x_4255_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object* v_exe_4256_, lean_object* v_out_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_){
_start:
{
uint8_t v_exe_boxed_4265_; lean_object* v_res_4266_; 
v_exe_boxed_4265_ = lean_unbox(v_exe_4256_);
v_res_4266_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(v_exe_boxed_4265_, v_out_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_);
lean_dec_ref(v___y_4262_);
lean_dec(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec(v___y_4259_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t v_exe_4267_){
_start:
{
lean_object* v___x_4268_; lean_object* v___f_4269_; 
v___x_4268_ = lean_box(v_exe_4267_);
v___f_4269_ = lean_alloc_closure((void*)(l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4269_, 0, v___x_4268_);
return v___f_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object* v_exe_4270_){
_start:
{
uint8_t v_exe_boxed_4271_; lean_object* v_res_4272_; 
v_exe_boxed_4271_ = lean_unbox(v_exe_4270_);
v_res_4272_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(v_exe_boxed_4271_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object* v_path_4273_, lean_object* v_ext_4274_, uint8_t v_text_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_){
_start:
{
lean_object* v___x_4279_; 
lean_inc_ref(v_path_4273_);
v___x_4279_ = l_Lake_fetchFileHash___redArg(v_path_4273_, v_text_4275_, v_a_4276_, v_a_4277_);
if (lean_obj_tag(v___x_4279_) == 0)
{
lean_object* v_a_4280_; lean_object* v_a_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4298_; 
v_a_4280_ = lean_ctor_get(v___x_4279_, 0);
v_a_4281_ = lean_ctor_get(v___x_4279_, 1);
v_isSharedCheck_4298_ = !lean_is_exclusive(v___x_4279_);
if (v_isSharedCheck_4298_ == 0)
{
v___x_4283_ = v___x_4279_;
v_isShared_4284_ = v_isSharedCheck_4298_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_a_4281_);
lean_inc(v_a_4280_);
lean_dec(v___x_4279_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4298_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___x_4294_; 
v___x_4294_ = lean_io_metadata(v_path_4273_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v_modified_4296_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref(v___x_4294_);
v_modified_4296_ = lean_ctor_get(v_a_4295_, 1);
lean_inc_ref(v_modified_4296_);
lean_dec(v_a_4295_);
v___y_4286_ = v_a_4281_;
v___y_4287_ = v_modified_4296_;
goto v___jp_4285_;
}
else
{
lean_object* v___x_4297_; 
lean_dec_ref(v___x_4294_);
v___x_4297_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___y_4286_ = v_a_4281_;
v___y_4287_ = v___x_4297_;
goto v___jp_4285_;
}
v___jp_4285_:
{
lean_object* v___x_4288_; uint64_t v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4292_; 
v___x_4288_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4288_, 0, v_ext_4274_);
v___x_4289_ = lean_unbox_uint64(v_a_4280_);
lean_dec(v_a_4280_);
lean_ctor_set_uint64(v___x_4288_, sizeof(void*)*1, v___x_4289_);
lean_inc_ref(v_path_4273_);
v___x_4290_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4290_, 0, v___x_4288_);
lean_ctor_set(v___x_4290_, 1, v_path_4273_);
lean_ctor_set(v___x_4290_, 2, v_path_4273_);
lean_ctor_set(v___x_4290_, 3, v___y_4287_);
if (v_isShared_4284_ == 0)
{
lean_ctor_set(v___x_4283_, 1, v___y_4286_);
lean_ctor_set(v___x_4283_, 0, v___x_4290_);
v___x_4292_ = v___x_4283_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v___x_4290_);
lean_ctor_set(v_reuseFailAlloc_4293_, 1, v___y_4286_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
else
{
lean_object* v_a_4299_; lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
lean_dec_ref(v_ext_4274_);
lean_dec_ref(v_path_4273_);
v_a_4299_ = lean_ctor_get(v___x_4279_, 0);
v_a_4300_ = lean_ctor_get(v___x_4279_, 1);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4279_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4279_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_inc(v_a_4299_);
lean_dec(v___x_4279_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4299_);
lean_ctor_set(v_reuseFailAlloc_4306_, 1, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object* v_path_4308_, lean_object* v_ext_4309_, lean_object* v_text_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_){
_start:
{
uint8_t v_text_boxed_4314_; lean_object* v_res_4315_; 
v_text_boxed_4314_ = lean_unbox(v_text_4310_);
v_res_4315_ = l_Lake_computeArtifact___redArg(v_path_4308_, v_ext_4309_, v_text_boxed_4314_, v_a_4311_, v_a_4312_);
lean_dec_ref(v_a_4311_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object* v_path_4316_, lean_object* v_ext_4317_, uint8_t v_text_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Lake_computeArtifact___redArg(v_path_4316_, v_ext_4317_, v_text_4318_, v_a_4323_, v_a_4324_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object* v_path_4327_, lean_object* v_ext_4328_, lean_object* v_text_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_){
_start:
{
uint8_t v_text_boxed_4337_; lean_object* v_res_4338_; 
v_text_boxed_4337_ = lean_unbox(v_text_4329_);
v_res_4338_ = l_Lake_computeArtifact(v_path_4327_, v_ext_4328_, v_text_boxed_4337_, v_a_4330_, v_a_4331_, v_a_4332_, v_a_4333_, v_a_4334_, v_a_4335_);
lean_dec_ref(v_a_4334_);
lean_dec(v_a_4333_);
lean_dec(v_a_4332_);
lean_dec(v_a_4331_);
lean_dec_ref(v_a_4330_);
return v_res_4338_;
}
}
static lean_object* _init_l_Lake_restoreArtifact___closed__0(void){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = lean_mk_string_unchecked("restored artifact from cache to: ", 33, 33);
return v___x_4339_;
}
}
static lean_object* _init_l_Lake_restoreArtifact___closed__1(void){
_start:
{
lean_object* v___x_4340_; 
v___x_4340_ = lean_mk_string_unchecked("found artifact in cache: ", 25, 25);
return v___x_4340_;
}
}
static lean_object* _init_l_Lake_restoreArtifact___closed__2(void){
_start:
{
lean_object* v___x_4341_; 
v___x_4341_ = lean_mk_string_unchecked("could not hard link artifact, copying from cache instead; error: ", 65, 65);
return v___x_4341_;
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object* v_file_4342_, lean_object* v_art_4343_, uint8_t v_exe_4344_, lean_object* v_a_4345_){
_start:
{
lean_object* v___y_4348_; uint8_t v___x_4361_; 
v___x_4361_ = l_System_FilePath_pathExists(v_file_4342_);
if (v___x_4361_ == 0)
{
lean_object* v_descr_4362_; lean_object* v_path_4363_; lean_object* v___y_4365_; lean_object* v___x_4380_; lean_object* v___x_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v_descr_4362_ = lean_ctor_get(v_art_4343_, 0);
v_path_4363_ = lean_ctor_get(v_art_4343_, 1);
v___x_4380_ = lean_obj_once(&l_Lake_restoreArtifact___closed__1, &l_Lake_restoreArtifact___closed__1_once, _init_l_Lake_restoreArtifact___closed__1);
v___x_4381_ = lean_string_append(v___x_4380_, v_path_4363_);
v___x_4382_ = 0;
v___x_4383_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4383_, 0, v___x_4381_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*1, v___x_4382_);
v___x_4384_ = lean_array_push(v_a_4345_, v___x_4383_);
lean_inc_ref(v_file_4342_);
v___x_4385_ = l_Lake_createParentDirs(v_file_4342_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v___x_4386_; 
lean_dec_ref(v___x_4385_);
v___x_4386_ = lean_io_hard_link(v_path_4363_, v_file_4342_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_dec_ref(v___x_4386_);
v___y_4365_ = v___x_4384_;
goto v___jp_4364_;
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref(v___x_4386_);
v___x_4388_ = lean_obj_once(&l_Lake_restoreArtifact___closed__2, &l_Lake_restoreArtifact___closed__2_once, _init_l_Lake_restoreArtifact___closed__2);
v___x_4389_ = lean_io_error_to_string(v_a_4387_);
v___x_4390_ = lean_string_append(v___x_4388_, v___x_4389_);
lean_dec_ref(v___x_4389_);
v___x_4391_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4391_, 0, v___x_4390_);
lean_ctor_set_uint8(v___x_4391_, sizeof(void*)*1, v___x_4382_);
v___x_4392_ = lean_array_push(v___x_4384_, v___x_4391_);
v___x_4393_ = l_Lake_copyFile(v_path_4363_, v_file_4342_);
if (lean_obj_tag(v___x_4393_) == 0)
{
uint8_t v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; 
lean_dec_ref(v___x_4393_);
v___x_4394_ = 1;
v___x_4395_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4395_, 0, v___x_4394_);
lean_ctor_set_uint8(v___x_4395_, 1, v___x_4361_);
lean_ctor_set_uint8(v___x_4395_, 2, v_exe_4344_);
lean_inc_ref_n(v___x_4395_, 2);
v___x_4396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4395_);
lean_ctor_set(v___x_4396_, 1, v___x_4395_);
lean_ctor_set(v___x_4396_, 2, v___x_4395_);
v___x_4397_ = l_IO_setAccessRights(v_file_4342_, v___x_4396_);
lean_dec_ref(v___x_4396_);
if (lean_obj_tag(v___x_4397_) == 0)
{
lean_dec_ref(v___x_4397_);
v___y_4365_ = v___x_4392_;
goto v___jp_4364_;
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4399_; uint8_t v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
lean_dec_ref(v_art_4343_);
lean_dec_ref(v_file_4342_);
v_a_4398_ = lean_ctor_get(v___x_4397_, 0);
lean_inc(v_a_4398_);
lean_dec_ref(v___x_4397_);
v___x_4399_ = lean_io_error_to_string(v_a_4398_);
v___x_4400_ = 3;
v___x_4401_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4401_, 0, v___x_4399_);
lean_ctor_set_uint8(v___x_4401_, sizeof(void*)*1, v___x_4400_);
v___x_4402_ = lean_array_get_size(v___x_4392_);
v___x_4403_ = lean_array_push(v___x_4392_, v___x_4401_);
v___x_4404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4402_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
return v___x_4404_;
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4406_; uint8_t v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; 
lean_dec_ref(v_art_4343_);
lean_dec_ref(v_file_4342_);
v_a_4405_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4405_);
lean_dec_ref(v___x_4393_);
v___x_4406_ = lean_io_error_to_string(v_a_4405_);
v___x_4407_ = 3;
v___x_4408_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4408_, 0, v___x_4406_);
lean_ctor_set_uint8(v___x_4408_, sizeof(void*)*1, v___x_4407_);
v___x_4409_ = lean_array_get_size(v___x_4392_);
v___x_4410_ = lean_array_push(v___x_4392_, v___x_4408_);
v___x_4411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4409_);
lean_ctor_set(v___x_4411_, 1, v___x_4410_);
return v___x_4411_;
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4413_; uint8_t v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; 
lean_dec_ref(v_art_4343_);
lean_dec_ref(v_file_4342_);
v_a_4412_ = lean_ctor_get(v___x_4385_, 0);
lean_inc(v_a_4412_);
lean_dec_ref(v___x_4385_);
v___x_4413_ = lean_io_error_to_string(v_a_4412_);
v___x_4414_ = 3;
v___x_4415_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4415_, 0, v___x_4413_);
lean_ctor_set_uint8(v___x_4415_, sizeof(void*)*1, v___x_4414_);
v___x_4416_ = lean_array_get_size(v___x_4384_);
v___x_4417_ = lean_array_push(v___x_4384_, v___x_4415_);
v___x_4418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4418_, 0, v___x_4416_);
lean_ctor_set(v___x_4418_, 1, v___x_4417_);
return v___x_4418_;
}
v___jp_4364_:
{
uint64_t v_hash_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; uint8_t v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v_hash_4366_ = lean_ctor_get_uint64(v_descr_4362_, sizeof(void*)*1);
v___x_4367_ = lean_obj_once(&l_Lake_restoreArtifact___closed__0, &l_Lake_restoreArtifact___closed__0_once, _init_l_Lake_restoreArtifact___closed__0);
v___x_4368_ = lean_string_append(v___x_4367_, v_file_4342_);
v___x_4369_ = 0;
v___x_4370_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4370_, 0, v___x_4368_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*1, v___x_4369_);
v___x_4371_ = lean_array_push(v___y_4365_, v___x_4370_);
lean_inc_ref(v_file_4342_);
v___x_4372_ = l_Lake_writeFileHash(v_file_4342_, v_hash_4366_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_dec_ref(v___x_4372_);
v___y_4348_ = v___x_4371_;
goto v___jp_4347_;
}
else
{
lean_object* v_a_4373_; lean_object* v___x_4374_; uint8_t v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
lean_dec_ref(v_art_4343_);
lean_dec_ref(v_file_4342_);
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
lean_inc(v_a_4373_);
lean_dec_ref(v___x_4372_);
v___x_4374_ = lean_io_error_to_string(v_a_4373_);
v___x_4375_ = 3;
v___x_4376_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4376_, 0, v___x_4374_);
lean_ctor_set_uint8(v___x_4376_, sizeof(void*)*1, v___x_4375_);
v___x_4377_ = lean_array_get_size(v___x_4371_);
v___x_4378_ = lean_array_push(v___x_4371_, v___x_4376_);
v___x_4379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4377_);
lean_ctor_set(v___x_4379_, 1, v___x_4378_);
return v___x_4379_;
}
}
}
else
{
v___y_4348_ = v_a_4345_;
goto v___jp_4347_;
}
v___jp_4347_:
{
lean_object* v_descr_4349_; lean_object* v_mtime_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4358_; 
v_descr_4349_ = lean_ctor_get(v_art_4343_, 0);
v_mtime_4350_ = lean_ctor_get(v_art_4343_, 3);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_art_4343_);
if (v_isSharedCheck_4358_ == 0)
{
lean_object* v_unused_4359_; lean_object* v_unused_4360_; 
v_unused_4359_ = lean_ctor_get(v_art_4343_, 2);
lean_dec(v_unused_4359_);
v_unused_4360_ = lean_ctor_get(v_art_4343_, 1);
lean_dec(v_unused_4360_);
v___x_4352_ = v_art_4343_;
v_isShared_4353_ = v_isSharedCheck_4358_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_mtime_4350_);
lean_inc(v_descr_4349_);
lean_dec(v_art_4343_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4358_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
lean_inc_ref(v_file_4342_);
if (v_isShared_4353_ == 0)
{
lean_ctor_set(v___x_4352_, 2, v_file_4342_);
lean_ctor_set(v___x_4352_, 1, v_file_4342_);
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_descr_4349_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_file_4342_);
lean_ctor_set(v_reuseFailAlloc_4357_, 2, v_file_4342_);
lean_ctor_set(v_reuseFailAlloc_4357_, 3, v_mtime_4350_);
v___x_4355_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
lean_object* v___x_4356_; 
v___x_4356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4356_, 0, v___x_4355_);
lean_ctor_set(v___x_4356_, 1, v___y_4348_);
return v___x_4356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object* v_file_4419_, lean_object* v_art_4420_, lean_object* v_exe_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_){
_start:
{
uint8_t v_exe_boxed_4424_; lean_object* v_res_4425_; 
v_exe_boxed_4424_ = lean_unbox(v_exe_4421_);
v_res_4425_ = l_Lake_restoreArtifact(v_file_4419_, v_art_4420_, v_exe_boxed_4424_, v_a_4422_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(lean_object* v_val_4426_, lean_object* v_a_x3f_4427_, lean_object* v___y_4428_){
_start:
{
lean_object* v___x_4430_; lean_object* v_log_4431_; uint8_t v_action_4432_; uint8_t v_wantsRebuild_4433_; lean_object* v_trace_4434_; lean_object* v_buildTime_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4446_; 
v___x_4430_ = lean_io_mono_ms_now();
v_log_4431_ = lean_ctor_get(v___y_4428_, 0);
v_action_4432_ = lean_ctor_get_uint8(v___y_4428_, sizeof(void*)*3);
v_wantsRebuild_4433_ = lean_ctor_get_uint8(v___y_4428_, sizeof(void*)*3 + 1);
v_trace_4434_ = lean_ctor_get(v___y_4428_, 1);
v_buildTime_4435_ = lean_ctor_get(v___y_4428_, 2);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___y_4428_);
if (v_isSharedCheck_4446_ == 0)
{
v___x_4437_ = v___y_4428_;
v_isShared_4438_ = v_isSharedCheck_4446_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_buildTime_4435_);
lean_inc(v_trace_4434_);
lean_inc(v_log_4431_);
lean_dec(v___y_4428_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4446_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4443_; 
v___x_4439_ = lean_nat_sub(v___x_4430_, v_val_4426_);
lean_dec(v___x_4430_);
v___x_4440_ = lean_box(0);
v___x_4441_ = lean_nat_add(v_buildTime_4435_, v___x_4439_);
lean_dec(v___x_4439_);
lean_dec(v_buildTime_4435_);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 2, v___x_4441_);
v___x_4443_ = v___x_4437_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v_log_4431_);
lean_ctor_set(v_reuseFailAlloc_4445_, 1, v_trace_4434_);
lean_ctor_set(v_reuseFailAlloc_4445_, 2, v___x_4441_);
lean_ctor_set_uint8(v_reuseFailAlloc_4445_, sizeof(void*)*3, v_action_4432_);
lean_ctor_set_uint8(v_reuseFailAlloc_4445_, sizeof(void*)*3 + 1, v_wantsRebuild_4433_);
v___x_4443_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
lean_object* v___x_4444_; 
v___x_4444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4440_);
lean_ctor_set(v___x_4444_, 1, v___x_4443_);
return v___x_4444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0___boxed(lean_object* v_val_4447_, lean_object* v_a_x3f_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v_val_4447_, v_a_x3f_4448_, v___y_4449_);
lean_dec(v_a_x3f_4448_);
lean_dec(v_val_4447_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(lean_object* v_build_4452_, lean_object* v_traceFile_4453_, lean_object* v_file_4454_, lean_object* v_ext_4455_, uint8_t v_text_4456_, lean_object* v_a_4457_, lean_object* v_depTrace_4458_, lean_object* v_traceFile_4459_, uint8_t v_action_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_){
_start:
{
lean_object* v_a_4468_; lean_object* v_a_4469_; lean_object* v_log_4472_; uint8_t v_action_4473_; uint8_t v_wantsRebuild_4474_; lean_object* v_trace_4475_; lean_object* v_buildTime_4476_; lean_object* v_toBuildConfig_4482_; lean_object* v_log_4483_; uint8_t v_action_4484_; uint8_t v_wantsRebuild_4485_; lean_object* v_trace_4486_; lean_object* v_buildTime_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4671_; 
v_toBuildConfig_4482_ = lean_ctor_get(v_a_4464_, 0);
v_log_4483_ = lean_ctor_get(v_a_4465_, 0);
v_action_4484_ = lean_ctor_get_uint8(v_a_4465_, sizeof(void*)*3);
v_wantsRebuild_4485_ = lean_ctor_get_uint8(v_a_4465_, sizeof(void*)*3 + 1);
v_trace_4486_ = lean_ctor_get(v_a_4465_, 1);
v_buildTime_4487_ = lean_ctor_get(v_a_4465_, 2);
v_isSharedCheck_4671_ = !lean_is_exclusive(v_a_4465_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4489_ = v_a_4465_;
v_isShared_4490_ = v_isSharedCheck_4671_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_buildTime_4487_);
lean_inc(v_trace_4486_);
lean_inc(v_log_4483_);
lean_dec(v_a_4465_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4671_;
goto v_resetjp_4488_;
}
v___jp_4467_:
{
lean_object* v___x_4470_; 
v___x_4470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4470_, 0, v_a_4468_);
lean_ctor_set(v___x_4470_, 1, v_a_4469_);
return v___x_4470_;
}
v___jp_4471_:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4477_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__1, &l_Lake_buildAction___redArg___closed__1_once, _init_l_Lake_buildAction___redArg___closed__1);
v___x_4478_ = lean_array_get_size(v_log_4472_);
v___x_4479_ = lean_array_push(v_log_4472_, v___x_4477_);
v___x_4480_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4480_, 0, v___x_4479_);
lean_ctor_set(v___x_4480_, 1, v_trace_4475_);
lean_ctor_set(v___x_4480_, 2, v_buildTime_4476_);
lean_ctor_set_uint8(v___x_4480_, sizeof(void*)*3, v_action_4473_);
lean_ctor_set_uint8(v___x_4480_, sizeof(void*)*3 + 1, v_wantsRebuild_4474_);
v___x_4481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4478_);
lean_ctor_set(v___x_4481_, 1, v___x_4480_);
return v___x_4481_;
}
v_resetjp_4488_:
{
uint8_t v_noBuild_4491_; uint8_t v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v_noBuild_4491_ = lean_ctor_get_uint8(v_toBuildConfig_4482_, sizeof(void*)*2 + 2);
v___x_4492_ = l_Lake_JobAction_merge(v_action_4484_, v_action_4460_);
v___x_4493_ = lean_obj_once(&l_Lake_buildAction___redArg___closed__2, &l_Lake_buildAction___redArg___closed__2_once, _init_l_Lake_buildAction___redArg___closed__2);
lean_inc_ref(v_traceFile_4459_);
v___x_4494_ = l_System_FilePath_addExtension(v_traceFile_4459_, v___x_4493_);
if (v_noBuild_4491_ == 0)
{
lean_object* v___x_4495_; lean_object* v_a_4497_; lean_object* v_a_4498_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v_val_4505_; lean_object* v___y_4563_; lean_object* v___y_4564_; lean_object* v___y_4565_; lean_object* v___y_4566_; lean_object* v___y_4567_; lean_object* v___y_4568_; lean_object* v___x_4580_; 
v___x_4495_ = lean_io_mono_ms_now();
v___x_4580_ = l_Lake_removeFileIfExists(v_file_4454_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v___x_4582_; 
lean_dec_ref(v___x_4580_);
lean_inc_ref(v_log_4483_);
if (v_isShared_4490_ == 0)
{
v___x_4582_ = v___x_4489_;
goto v_reusejp_4581_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_log_4483_);
lean_ctor_set(v_reuseFailAlloc_4646_, 1, v_trace_4486_);
lean_ctor_set(v_reuseFailAlloc_4646_, 2, v_buildTime_4487_);
lean_ctor_set_uint8(v_reuseFailAlloc_4646_, sizeof(void*)*3 + 1, v_wantsRebuild_4485_);
v___x_4582_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4581_;
}
v_reusejp_4581_:
{
lean_object* v___x_4583_; 
lean_ctor_set_uint8(v___x_4582_, sizeof(void*)*3, v___x_4492_);
lean_inc_ref(v_a_4464_);
lean_inc(v_a_4463_);
lean_inc(v_a_4462_);
lean_inc(v_a_4461_);
v___x_4583_ = lean_apply_7(v_build_4452_, v_a_4457_, v_a_4461_, v_a_4462_, v_a_4463_, v_a_4464_, v___x_4582_, lean_box(0));
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v_log_4585_; uint8_t v_action_4586_; uint8_t v_wantsRebuild_4587_; lean_object* v_trace_4588_; lean_object* v_buildTime_4589_; lean_object* v___x_4590_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 1);
lean_inc(v_a_4584_);
lean_dec_ref(v___x_4583_);
v_log_4585_ = lean_ctor_get(v_a_4584_, 0);
v_action_4586_ = lean_ctor_get_uint8(v_a_4584_, sizeof(void*)*3);
v_wantsRebuild_4587_ = lean_ctor_get_uint8(v_a_4584_, sizeof(void*)*3 + 1);
v_trace_4588_ = lean_ctor_get(v_a_4584_, 1);
v_buildTime_4589_ = lean_ctor_get(v_a_4584_, 2);
lean_inc_ref(v_file_4454_);
v___x_4590_ = l_Lake_clearFileHash(v_file_4454_);
if (lean_obj_tag(v___x_4590_) == 0)
{
lean_object* v___x_4591_; 
lean_dec_ref(v___x_4590_);
v___x_4591_ = l_Lake_removeFileIfExists(v_traceFile_4453_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v___x_4592_; 
lean_dec_ref(v___x_4591_);
v___x_4592_ = l_Lake_computeArtifact___redArg(v_file_4454_, v_ext_4455_, v_text_4456_, v_a_4464_, v_a_4584_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v_a_4594_; lean_object* v_descr_4595_; lean_object* v_log_4596_; uint64_t v_hash_4597_; lean_object* v_ext_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; uint8_t v___x_4604_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 1);
lean_inc(v_a_4593_);
v_a_4594_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4594_);
lean_dec_ref(v___x_4592_);
v_descr_4595_ = lean_ctor_get(v_a_4594_, 0);
v_log_4596_ = lean_ctor_get(v_a_4593_, 0);
lean_inc_ref(v_log_4596_);
v_hash_4597_ = lean_ctor_get_uint64(v_descr_4595_, sizeof(void*)*1);
v_ext_4598_ = lean_ctor_get(v_descr_4595_, 0);
v___x_4599_ = lean_array_get_size(v_log_4483_);
lean_dec_ref(v_log_4483_);
v___x_4600_ = lean_array_get_size(v_log_4596_);
v___x_4601_ = l_Array_extract___redArg(v_log_4596_, v___x_4599_, v___x_4600_);
v___x_4602_ = lean_string_utf8_byte_size(v_ext_4598_);
v___x_4603_ = lean_unsigned_to_nat(0u);
v___x_4604_ = lean_nat_dec_eq(v___x_4602_, v___x_4603_);
if (v___x_4604_ == 0)
{
lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4605_ = l_Lake_lowerHexUInt64(v_hash_4597_);
v___x_4606_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_4607_ = lean_string_append(v___x_4605_, v___x_4606_);
v___x_4608_ = lean_string_append(v___x_4607_, v_ext_4598_);
v___y_4563_ = v_log_4596_;
v___y_4564_ = v___x_4600_;
v___y_4565_ = v_a_4594_;
v___y_4566_ = v_a_4593_;
v___y_4567_ = v___x_4601_;
v___y_4568_ = v___x_4608_;
goto v___jp_4562_;
}
else
{
lean_object* v___x_4609_; 
v___x_4609_ = l_Lake_lowerHexUInt64(v_hash_4597_);
v___y_4563_ = v_log_4596_;
v___y_4564_ = v___x_4600_;
v___y_4565_ = v_a_4594_;
v___y_4566_ = v_a_4593_;
v___y_4567_ = v___x_4601_;
v___y_4568_ = v___x_4609_;
goto v___jp_4562_;
}
}
else
{
lean_object* v_a_4610_; lean_object* v_a_4611_; 
lean_dec_ref(v___x_4494_);
lean_dec_ref(v_log_4483_);
lean_dec_ref(v_traceFile_4459_);
v_a_4610_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4610_);
v_a_4611_ = lean_ctor_get(v___x_4592_, 1);
lean_inc(v_a_4611_);
lean_dec_ref(v___x_4592_);
v_a_4497_ = v_a_4610_;
v_a_4498_ = v_a_4611_;
goto v___jp_4496_;
}
}
else
{
lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4624_; 
lean_inc(v_buildTime_4589_);
lean_inc_ref(v_trace_4588_);
lean_inc_ref(v_log_4585_);
lean_dec_ref(v___x_4494_);
lean_dec_ref(v_log_4483_);
lean_dec_ref(v_traceFile_4459_);
lean_dec_ref(v_ext_4455_);
lean_dec_ref(v_file_4454_);
v_isSharedCheck_4624_ = !lean_is_exclusive(v_a_4584_);
if (v_isSharedCheck_4624_ == 0)
{
lean_object* v_unused_4625_; lean_object* v_unused_4626_; lean_object* v_unused_4627_; 
v_unused_4625_ = lean_ctor_get(v_a_4584_, 2);
lean_dec(v_unused_4625_);
v_unused_4626_ = lean_ctor_get(v_a_4584_, 1);
lean_dec(v_unused_4626_);
v_unused_4627_ = lean_ctor_get(v_a_4584_, 0);
lean_dec(v_unused_4627_);
v___x_4613_ = v_a_4584_;
v_isShared_4614_ = v_isSharedCheck_4624_;
goto v_resetjp_4612_;
}
else
{
lean_dec(v_a_4584_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4624_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v_a_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4622_; 
v_a_4615_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4615_);
lean_dec_ref(v___x_4591_);
v___x_4616_ = lean_io_error_to_string(v_a_4615_);
v___x_4617_ = 3;
v___x_4618_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4618_, 0, v___x_4616_);
lean_ctor_set_uint8(v___x_4618_, sizeof(void*)*1, v___x_4617_);
v___x_4619_ = lean_array_get_size(v_log_4585_);
v___x_4620_ = lean_array_push(v_log_4585_, v___x_4618_);
if (v_isShared_4614_ == 0)
{
lean_ctor_set(v___x_4613_, 0, v___x_4620_);
v___x_4622_ = v___x_4613_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4623_; 
v_reuseFailAlloc_4623_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4623_, 0, v___x_4620_);
lean_ctor_set(v_reuseFailAlloc_4623_, 1, v_trace_4588_);
lean_ctor_set(v_reuseFailAlloc_4623_, 2, v_buildTime_4589_);
lean_ctor_set_uint8(v_reuseFailAlloc_4623_, sizeof(void*)*3, v_action_4586_);
lean_ctor_set_uint8(v_reuseFailAlloc_4623_, sizeof(void*)*3 + 1, v_wantsRebuild_4587_);
v___x_4622_ = v_reuseFailAlloc_4623_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
v_a_4497_ = v___x_4619_;
v_a_4498_ = v___x_4622_;
goto v___jp_4496_;
}
}
}
}
else
{
lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4640_; 
lean_inc(v_buildTime_4589_);
lean_inc_ref(v_trace_4588_);
lean_inc_ref(v_log_4585_);
lean_dec_ref(v___x_4494_);
lean_dec_ref(v_log_4483_);
lean_dec_ref(v_traceFile_4459_);
lean_dec_ref(v_ext_4455_);
lean_dec_ref(v_file_4454_);
v_isSharedCheck_4640_ = !lean_is_exclusive(v_a_4584_);
if (v_isSharedCheck_4640_ == 0)
{
lean_object* v_unused_4641_; lean_object* v_unused_4642_; lean_object* v_unused_4643_; 
v_unused_4641_ = lean_ctor_get(v_a_4584_, 2);
lean_dec(v_unused_4641_);
v_unused_4642_ = lean_ctor_get(v_a_4584_, 1);
lean_dec(v_unused_4642_);
v_unused_4643_ = lean_ctor_get(v_a_4584_, 0);
lean_dec(v_unused_4643_);
v___x_4629_ = v_a_4584_;
v_isShared_4630_ = v_isSharedCheck_4640_;
goto v_resetjp_4628_;
}
else
{
lean_dec(v_a_4584_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4640_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
lean_object* v_a_4631_; lean_object* v___x_4632_; uint8_t v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4638_; 
v_a_4631_ = lean_ctor_get(v___x_4590_, 0);
lean_inc(v_a_4631_);
lean_dec_ref(v___x_4590_);
v___x_4632_ = lean_io_error_to_string(v_a_4631_);
v___x_4633_ = 3;
v___x_4634_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4634_, 0, v___x_4632_);
lean_ctor_set_uint8(v___x_4634_, sizeof(void*)*1, v___x_4633_);
v___x_4635_ = lean_array_get_size(v_log_4585_);
v___x_4636_ = lean_array_push(v_log_4585_, v___x_4634_);
if (v_isShared_4630_ == 0)
{
lean_ctor_set(v___x_4629_, 0, v___x_4636_);
v___x_4638_ = v___x_4629_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v___x_4636_);
lean_ctor_set(v_reuseFailAlloc_4639_, 1, v_trace_4588_);
lean_ctor_set(v_reuseFailAlloc_4639_, 2, v_buildTime_4589_);
lean_ctor_set_uint8(v_reuseFailAlloc_4639_, sizeof(void*)*3, v_action_4586_);
lean_ctor_set_uint8(v_reuseFailAlloc_4639_, sizeof(void*)*3 + 1, v_wantsRebuild_4587_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
v_a_4497_ = v___x_4635_;
v_a_4498_ = v___x_4638_;
goto v___jp_4496_;
}
}
}
}
else
{
lean_object* v_a_4644_; lean_object* v_a_4645_; 
lean_dec_ref(v___x_4494_);
lean_dec_ref(v_log_4483_);
lean_dec_ref(v_traceFile_4459_);
lean_dec_ref(v_ext_4455_);
lean_dec_ref(v_file_4454_);
v_a_4644_ = lean_ctor_get(v___x_4583_, 0);
lean_inc(v_a_4644_);
v_a_4645_ = lean_ctor_get(v___x_4583_, 1);
lean_inc(v_a_4645_);
lean_dec_ref(v___x_4583_);
v_a_4497_ = v_a_4644_;
v_a_4498_ = v_a_4645_;
goto v___jp_4496_;
}
}
}
else
{
lean_object* v_a_4647_; lean_object* v___x_4648_; uint8_t v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4654_; 
lean_dec_ref(v___x_4494_);
lean_dec_ref(v_traceFile_4459_);
lean_dec_ref(v_a_4457_);
lean_dec_ref(v_ext_4455_);
lean_dec_ref(v_file_4454_);
lean_dec_ref(v_build_4452_);
v_a_4647_ = lean_ctor_get(v___x_4580_, 0);
lean_inc(v_a_4647_);
lean_dec_ref(v___x_4580_);
v___x_4648_ = lean_io_error_to_string(v_a_4647_);
v___x_4649_ = 3;
v___x_4650_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4650_, 0, v___x_4648_);
lean_ctor_set_uint8(v___x_4650_, sizeof(void*)*1, v___x_4649_);
v___x_4651_ = lean_array_get_size(v_log_4483_);
v___x_4652_ = lean_array_push(v_log_4483_, v___x_4650_);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4652_);
v___x_4654_ = v___x_4489_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v___x_4652_);
lean_ctor_set(v_reuseFailAlloc_4655_, 1, v_trace_4486_);
lean_ctor_set(v_reuseFailAlloc_4655_, 2, v_buildTime_4487_);
lean_ctor_set_uint8(v_reuseFailAlloc_4655_, sizeof(void*)*3 + 1, v_wantsRebuild_4485_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
lean_ctor_set_uint8(v___x_4654_, sizeof(void*)*3, v___x_4492_);
v_a_4497_ = v___x_4651_;
v_a_4498_ = v___x_4654_;
goto v___jp_4496_;
}
}
v___jp_4496_:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v_a_4501_; 
v___x_4499_ = lean_box(0);
v___x_4500_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4495_, v___x_4499_, v_a_4498_);
lean_dec(v___x_4495_);
v_a_4501_ = lean_ctor_get(v___x_4500_, 1);
lean_inc(v_a_4501_);
lean_dec_ref(v___x_4500_);
v_a_4468_ = v_a_4497_;
v_a_4469_ = v_a_4501_;
goto v___jp_4467_;
}
v___jp_4502_:
{
if (lean_obj_tag(v_val_4505_) == 0)
{
uint8_t v_action_4506_; uint8_t v_wantsRebuild_4507_; lean_object* v_trace_4508_; lean_object* v_buildTime_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4546_; 
v_action_4506_ = lean_ctor_get_uint8(v___y_4504_, sizeof(void*)*3);
v_wantsRebuild_4507_ = lean_ctor_get_uint8(v___y_4504_, sizeof(void*)*3 + 1);
v_trace_4508_ = lean_ctor_get(v___y_4504_, 1);
v_buildTime_4509_ = lean_ctor_get(v___y_4504_, 2);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___y_4504_);
if (v_isSharedCheck_4546_ == 0)
{
lean_object* v_unused_4547_; 
v_unused_4547_ = lean_ctor_get(v___y_4504_, 0);
lean_dec(v_unused_4547_);
v___x_4511_ = v___y_4504_;
v_isShared_4512_ = v_isSharedCheck_4546_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_buildTime_4509_);
lean_inc(v_trace_4508_);
lean_dec(v___y_4504_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4546_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v_a_4513_; lean_object* v___x_4514_; 
v_a_4513_ = lean_ctor_get(v_val_4505_, 1);
lean_inc(v_a_4513_);
lean_dec_ref(v_val_4505_);
v___x_4514_ = l_Lake_removeFileIfExists(v___x_4494_);
lean_dec_ref(v___x_4494_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4535_; 
v_isSharedCheck_4535_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4535_ == 0)
{
lean_object* v_unused_4536_; 
v_unused_4536_ = lean_ctor_get(v___x_4514_, 0);
lean_dec(v_unused_4536_);
v___x_4516_ = v___x_4514_;
v_isShared_4517_ = v_isSharedCheck_4535_;
goto v_resetjp_4515_;
}
else
{
lean_dec(v___x_4514_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4535_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 0, v_a_4513_);
v___x_4519_ = v___x_4511_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4513_);
lean_ctor_set(v_reuseFailAlloc_4534_, 1, v_trace_4508_);
lean_ctor_set(v_reuseFailAlloc_4534_, 2, v_buildTime_4509_);
lean_ctor_set_uint8(v_reuseFailAlloc_4534_, sizeof(void*)*3, v_action_4506_);
lean_ctor_set_uint8(v_reuseFailAlloc_4534_, sizeof(void*)*3 + 1, v_wantsRebuild_4507_);
v___x_4519_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
lean_object* v___x_4521_; 
lean_inc_ref(v___y_4503_);
if (v_isShared_4517_ == 0)
{
lean_ctor_set(v___x_4516_, 0, v___y_4503_);
v___x_4521_ = v___x_4516_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v___y_4503_);
v___x_4521_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v_a_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4531_; 
v___x_4522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4522_, 0, v___x_4521_);
v___x_4523_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4495_, v___x_4522_, v___x_4519_);
lean_dec_ref(v___x_4522_);
lean_dec(v___x_4495_);
v_a_4524_ = lean_ctor_get(v___x_4523_, 1);
v_isSharedCheck_4531_ = !lean_is_exclusive(v___x_4523_);
if (v_isSharedCheck_4531_ == 0)
{
lean_object* v_unused_4532_; 
v_unused_4532_ = lean_ctor_get(v___x_4523_, 0);
lean_dec(v_unused_4532_);
v___x_4526_ = v___x_4523_;
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_a_4524_);
lean_dec(v___x_4523_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4529_; 
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 0, v___y_4503_);
v___x_4529_ = v___x_4526_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v___y_4503_);
lean_ctor_set(v_reuseFailAlloc_4530_, 1, v_a_4524_);
v___x_4529_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
return v___x_4529_;
}
}
}
}
}
}
else
{
lean_object* v_a_4537_; lean_object* v___x_4538_; uint8_t v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4544_; 
lean_dec_ref(v___y_4503_);
v_a_4537_ = lean_ctor_get(v___x_4514_, 0);
lean_inc(v_a_4537_);
lean_dec_ref(v___x_4514_);
v___x_4538_ = lean_io_error_to_string(v_a_4537_);
v___x_4539_ = 3;
v___x_4540_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4540_, 0, v___x_4538_);
lean_ctor_set_uint8(v___x_4540_, sizeof(void*)*1, v___x_4539_);
v___x_4541_ = lean_array_get_size(v_a_4513_);
v___x_4542_ = lean_array_push(v_a_4513_, v___x_4540_);
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 0, v___x_4542_);
v___x_4544_ = v___x_4511_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v___x_4542_);
lean_ctor_set(v_reuseFailAlloc_4545_, 1, v_trace_4508_);
lean_ctor_set(v_reuseFailAlloc_4545_, 2, v_buildTime_4509_);
lean_ctor_set_uint8(v_reuseFailAlloc_4545_, sizeof(void*)*3, v_action_4506_);
lean_ctor_set_uint8(v_reuseFailAlloc_4545_, sizeof(void*)*3 + 1, v_wantsRebuild_4507_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
v_a_4497_ = v___x_4541_;
v_a_4498_ = v___x_4544_;
goto v___jp_4496_;
}
}
}
}
else
{
uint8_t v_action_4548_; uint8_t v_wantsRebuild_4549_; lean_object* v_trace_4550_; lean_object* v_buildTime_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4560_; 
lean_dec_ref(v___y_4503_);
lean_dec_ref(v___x_4494_);
v_action_4548_ = lean_ctor_get_uint8(v___y_4504_, sizeof(void*)*3);
v_wantsRebuild_4549_ = lean_ctor_get_uint8(v___y_4504_, sizeof(void*)*3 + 1);
v_trace_4550_ = lean_ctor_get(v___y_4504_, 1);
v_buildTime_4551_ = lean_ctor_get(v___y_4504_, 2);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___y_4504_);
if (v_isSharedCheck_4560_ == 0)
{
lean_object* v_unused_4561_; 
v_unused_4561_ = lean_ctor_get(v___y_4504_, 0);
lean_dec(v_unused_4561_);
v___x_4553_ = v___y_4504_;
v_isShared_4554_ = v_isSharedCheck_4560_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_buildTime_4551_);
lean_inc(v_trace_4550_);
lean_dec(v___y_4504_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4560_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v_a_4555_; lean_object* v_a_4556_; lean_object* v___x_4558_; 
v_a_4555_ = lean_ctor_get(v_val_4505_, 0);
lean_inc(v_a_4555_);
v_a_4556_ = lean_ctor_get(v_val_4505_, 1);
lean_inc(v_a_4556_);
lean_dec_ref(v_val_4505_);
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 0, v_a_4556_);
v___x_4558_ = v___x_4553_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4556_);
lean_ctor_set(v_reuseFailAlloc_4559_, 1, v_trace_4550_);
lean_ctor_set(v_reuseFailAlloc_4559_, 2, v_buildTime_4551_);
lean_ctor_set_uint8(v_reuseFailAlloc_4559_, sizeof(void*)*3, v_action_4548_);
lean_ctor_set_uint8(v_reuseFailAlloc_4559_, sizeof(void*)*3 + 1, v_wantsRebuild_4549_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
v_a_4497_ = v_a_4555_;
v_a_4498_ = v___x_4558_;
goto v___jp_4496_;
}
}
}
}
v___jp_4562_:
{
lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4569_, 0, v___y_4568_);
v___x_4570_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4458_, v___x_4569_, v___y_4567_);
v___x_4571_ = l_Lake_BuildMetadata_writeFile(v_traceFile_4459_, v___x_4570_);
if (lean_obj_tag(v___x_4571_) == 0)
{
lean_object* v_a_4572_; lean_object* v___x_4573_; 
lean_dec(v___y_4564_);
v_a_4572_ = lean_ctor_get(v___x_4571_, 0);
lean_inc(v_a_4572_);
lean_dec_ref(v___x_4571_);
v___x_4573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4573_, 0, v_a_4572_);
lean_ctor_set(v___x_4573_, 1, v___y_4563_);
v___y_4503_ = v___y_4565_;
v___y_4504_ = v___y_4566_;
v_val_4505_ = v___x_4573_;
goto v___jp_4502_;
}
else
{
lean_object* v_a_4574_; lean_object* v___x_4575_; uint8_t v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v_a_4574_ = lean_ctor_get(v___x_4571_, 0);
lean_inc(v_a_4574_);
lean_dec_ref(v___x_4571_);
v___x_4575_ = lean_io_error_to_string(v_a_4574_);
v___x_4576_ = 3;
v___x_4577_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4577_, 0, v___x_4575_);
lean_ctor_set_uint8(v___x_4577_, sizeof(void*)*1, v___x_4576_);
v___x_4578_ = lean_array_push(v___y_4563_, v___x_4577_);
v___x_4579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4579_, 0, v___y_4564_);
lean_ctor_set(v___x_4579_, 1, v___x_4578_);
v___y_4503_ = v___y_4565_;
v___y_4504_ = v___y_4566_;
v_val_4505_ = v___x_4579_;
goto v___jp_4502_;
}
}
}
else
{
uint8_t v___x_4656_; 
lean_dec_ref(v_a_4457_);
lean_dec_ref(v_ext_4455_);
lean_dec_ref(v_file_4454_);
lean_dec_ref(v_build_4452_);
v___x_4656_ = l_System_FilePath_pathExists(v_traceFile_4459_);
lean_dec_ref(v_traceFile_4459_);
if (v___x_4656_ == 0)
{
lean_dec_ref(v___x_4494_);
lean_del_object(v___x_4489_);
v_log_4472_ = v_log_4483_;
v_action_4473_ = v___x_4492_;
v_wantsRebuild_4474_ = v_noBuild_4491_;
v_trace_4475_ = v_trace_4486_;
v_buildTime_4476_ = v_buildTime_4487_;
goto v___jp_4471_;
}
else
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4657_ = lean_box(0);
v___x_4658_ = lean_obj_once(&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1, &l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_once, _init_l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1);
v___x_4659_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4458_, v___x_4657_, v___x_4658_);
v___x_4660_ = l_Lake_BuildMetadata_writeFile(v___x_4494_, v___x_4659_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_dec_ref(v___x_4660_);
lean_del_object(v___x_4489_);
v_log_4472_ = v_log_4483_;
v_action_4473_ = v___x_4492_;
v_wantsRebuild_4474_ = v_noBuild_4491_;
v_trace_4475_ = v_trace_4486_;
v_buildTime_4476_ = v_buildTime_4487_;
goto v___jp_4471_;
}
else
{
lean_object* v_a_4661_; lean_object* v___x_4662_; uint8_t v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4668_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref(v___x_4660_);
v___x_4662_ = lean_io_error_to_string(v_a_4661_);
v___x_4663_ = 3;
v___x_4664_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4664_, 0, v___x_4662_);
lean_ctor_set_uint8(v___x_4664_, sizeof(void*)*1, v___x_4663_);
v___x_4665_ = lean_array_get_size(v_log_4483_);
v___x_4666_ = lean_array_push(v_log_4483_, v___x_4664_);
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 0, v___x_4666_);
v___x_4668_ = v___x_4489_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4666_);
lean_ctor_set(v_reuseFailAlloc_4670_, 1, v_trace_4486_);
lean_ctor_set(v_reuseFailAlloc_4670_, 2, v_buildTime_4487_);
v___x_4668_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
lean_object* v___x_4669_; 
lean_ctor_set_uint8(v___x_4668_, sizeof(void*)*3, v___x_4492_);
lean_ctor_set_uint8(v___x_4668_, sizeof(void*)*3 + 1, v_noBuild_4491_);
v___x_4669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4665_);
lean_ctor_set(v___x_4669_, 1, v___x_4668_);
return v___x_4669_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___boxed(lean_object* v_build_4672_, lean_object* v_traceFile_4673_, lean_object* v_file_4674_, lean_object* v_ext_4675_, lean_object* v_text_4676_, lean_object* v_a_4677_, lean_object* v_depTrace_4678_, lean_object* v_traceFile_4679_, lean_object* v_action_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_){
_start:
{
uint8_t v_text_boxed_4687_; uint8_t v_action_boxed_4688_; lean_object* v_res_4689_; 
v_text_boxed_4687_ = lean_unbox(v_text_4676_);
v_action_boxed_4688_ = lean_unbox(v_action_4680_);
v_res_4689_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_build_4672_, v_traceFile_4673_, v_file_4674_, v_ext_4675_, v_text_boxed_4687_, v_a_4677_, v_depTrace_4678_, v_traceFile_4679_, v_action_boxed_4688_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_);
lean_dec_ref(v_a_4684_);
lean_dec(v_a_4683_);
lean_dec(v_a_4682_);
lean_dec(v_a_4681_);
lean_dec_ref(v_depTrace_4678_);
lean_dec_ref(v_traceFile_4673_);
return v_res_4689_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object* v_file_4690_, lean_object* v_build_4691_, uint8_t v_text_4692_, lean_object* v_ext_4693_, lean_object* v_depTrace_4694_, lean_object* v_traceFile_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_){
_start:
{
uint8_t v___x_4703_; lean_object* v___x_4704_; 
v___x_4703_ = 5;
lean_inc_ref(v_traceFile_4695_);
v___x_4704_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_build_4691_, v_traceFile_4695_, v_file_4690_, v_ext_4693_, v_text_4692_, v_a_4696_, v_depTrace_4694_, v_traceFile_4695_, v___x_4703_, v_a_4697_, v_a_4698_, v_a_4699_, v_a_4700_, v_a_4701_);
lean_dec_ref(v_traceFile_4695_);
return v___x_4704_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object* v_file_4705_, lean_object* v_build_4706_, lean_object* v_text_4707_, lean_object* v_ext_4708_, lean_object* v_depTrace_4709_, lean_object* v_traceFile_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_){
_start:
{
uint8_t v_text_boxed_4718_; lean_object* v_res_4719_; 
v_text_boxed_4718_ = lean_unbox(v_text_4707_);
v_res_4719_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_4705_, v_build_4706_, v_text_boxed_4718_, v_ext_4708_, v_depTrace_4709_, v_traceFile_4710_, v_a_4711_, v_a_4712_, v_a_4713_, v_a_4714_, v_a_4715_, v_a_4716_);
lean_dec_ref(v_a_4715_);
lean_dec(v_a_4714_);
lean_dec(v_a_4713_);
lean_dec(v_a_4712_);
lean_dec_ref(v_depTrace_4709_);
return v_res_4719_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0(void){
_start:
{
lean_object* v___x_4720_; 
v___x_4720_ = lean_mk_string_unchecked("failed to retrieve artifact modification time: ", 47, 47);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object* v_art_4721_, lean_object* v_traceFile_4722_, lean_object* v_a_4723_){
_start:
{
lean_object* v_log_4725_; uint8_t v_action_4726_; uint8_t v_wantsRebuild_4727_; lean_object* v_trace_4728_; lean_object* v_buildTime_4729_; lean_object* v___x_4730_; 
v_log_4725_ = lean_ctor_get(v_a_4723_, 0);
v_action_4726_ = lean_ctor_get_uint8(v_a_4723_, sizeof(void*)*3);
v_wantsRebuild_4727_ = lean_ctor_get_uint8(v_a_4723_, sizeof(void*)*3 + 1);
v_trace_4728_ = lean_ctor_get(v_a_4723_, 1);
v_buildTime_4729_ = lean_ctor_get(v_a_4723_, 2);
v___x_4730_ = lean_io_metadata(v_traceFile_4722_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v_modified_4732_; lean_object* v_descr_4733_; lean_object* v_path_4734_; lean_object* v_name_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4743_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
lean_inc(v_a_4731_);
lean_dec_ref(v___x_4730_);
v_modified_4732_ = lean_ctor_get(v_a_4731_, 1);
lean_inc_ref(v_modified_4732_);
lean_dec(v_a_4731_);
v_descr_4733_ = lean_ctor_get(v_art_4721_, 0);
v_path_4734_ = lean_ctor_get(v_art_4721_, 1);
v_name_4735_ = lean_ctor_get(v_art_4721_, 2);
v_isSharedCheck_4743_ = !lean_is_exclusive(v_art_4721_);
if (v_isSharedCheck_4743_ == 0)
{
lean_object* v_unused_4744_; 
v_unused_4744_ = lean_ctor_get(v_art_4721_, 3);
lean_dec(v_unused_4744_);
v___x_4737_ = v_art_4721_;
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_name_4735_);
lean_inc(v_path_4734_);
lean_inc(v_descr_4733_);
lean_dec(v_art_4721_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 3, v_modified_4732_);
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_descr_4733_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v_path_4734_);
lean_ctor_set(v_reuseFailAlloc_4742_, 2, v_name_4735_);
lean_ctor_set(v_reuseFailAlloc_4742_, 3, v_modified_4732_);
v___x_4740_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
lean_object* v___x_4741_; 
v___x_4741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4740_);
lean_ctor_set(v___x_4741_, 1, v_a_4723_);
return v___x_4741_;
}
}
}
else
{
lean_object* v_a_4745_; 
v_a_4745_ = lean_ctor_get(v___x_4730_, 0);
lean_inc(v_a_4745_);
lean_dec_ref(v___x_4730_);
if (lean_obj_tag(v_a_4745_) == 11)
{
lean_object* v___x_4746_; 
lean_dec_ref(v_a_4745_);
v___x_4746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4746_, 0, v_art_4721_);
lean_ctor_set(v___x_4746_, 1, v_a_4723_);
return v___x_4746_;
}
else
{
lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4761_; 
lean_inc(v_buildTime_4729_);
lean_inc_ref(v_trace_4728_);
lean_inc_ref(v_log_4725_);
lean_dec_ref(v_art_4721_);
v_isSharedCheck_4761_ = !lean_is_exclusive(v_a_4723_);
if (v_isSharedCheck_4761_ == 0)
{
lean_object* v_unused_4762_; lean_object* v_unused_4763_; lean_object* v_unused_4764_; 
v_unused_4762_ = lean_ctor_get(v_a_4723_, 2);
lean_dec(v_unused_4762_);
v_unused_4763_ = lean_ctor_get(v_a_4723_, 1);
lean_dec(v_unused_4763_);
v_unused_4764_ = lean_ctor_get(v_a_4723_, 0);
lean_dec(v_unused_4764_);
v___x_4748_ = v_a_4723_;
v_isShared_4749_ = v_isSharedCheck_4761_;
goto v_resetjp_4747_;
}
else
{
lean_dec(v_a_4723_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4761_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4758_; 
v___x_4750_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0);
v___x_4751_ = lean_io_error_to_string(v_a_4745_);
v___x_4752_ = lean_string_append(v___x_4750_, v___x_4751_);
lean_dec_ref(v___x_4751_);
v___x_4753_ = 3;
v___x_4754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4754_, 0, v___x_4752_);
lean_ctor_set_uint8(v___x_4754_, sizeof(void*)*1, v___x_4753_);
v___x_4755_ = lean_array_get_size(v_log_4725_);
v___x_4756_ = lean_array_push(v_log_4725_, v___x_4754_);
if (v_isShared_4749_ == 0)
{
lean_ctor_set(v___x_4748_, 0, v___x_4756_);
v___x_4758_ = v___x_4748_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4756_);
lean_ctor_set(v_reuseFailAlloc_4760_, 1, v_trace_4728_);
lean_ctor_set(v_reuseFailAlloc_4760_, 2, v_buildTime_4729_);
lean_ctor_set_uint8(v_reuseFailAlloc_4760_, sizeof(void*)*3, v_action_4726_);
lean_ctor_set_uint8(v_reuseFailAlloc_4760_, sizeof(void*)*3 + 1, v_wantsRebuild_4727_);
v___x_4758_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
lean_object* v___x_4759_; 
v___x_4759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4759_, 0, v___x_4755_);
lean_ctor_set(v___x_4759_, 1, v___x_4758_);
return v___x_4759_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object* v_art_4765_, lean_object* v_traceFile_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_){
_start:
{
lean_object* v_res_4769_; 
v_res_4769_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4765_, v_traceFile_4766_, v_a_4767_);
lean_dec_ref(v_traceFile_4766_);
return v_res_4769_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object* v_art_4770_, lean_object* v_traceFile_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_, lean_object* v_a_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_){
_start:
{
lean_object* v___x_4779_; 
v___x_4779_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4770_, v_traceFile_4771_, v_a_4777_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object* v_art_4780_, lean_object* v_traceFile_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_){
_start:
{
lean_object* v_res_4789_; 
v_res_4789_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(v_art_4780_, v_traceFile_4781_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_, v_a_4786_, v_a_4787_);
lean_dec_ref(v_a_4786_);
lean_dec(v_a_4785_);
lean_dec(v_a_4784_);
lean_dec(v_a_4783_);
lean_dec_ref(v_a_4782_);
lean_dec_ref(v_traceFile_4781_);
return v_res_4789_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(lean_object* v_a_4790_, lean_object* v_____r_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_){
_start:
{
lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
v___x_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4799_, 0, v_a_4790_);
v___x_4800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4799_);
v___x_4801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4800_);
lean_ctor_set(v___x_4801_, 1, v___y_4797_);
return v___x_4801_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0___boxed(lean_object* v_a_4802_, lean_object* v_____r_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4802_, v_____r_4803_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_, v___y_4809_);
lean_dec_ref(v___y_4808_);
lean_dec(v___y_4807_);
lean_dec(v___y_4806_);
lean_dec(v___y_4805_);
lean_dec_ref(v___y_4804_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t v_exe_4812_, lean_object* v___y_4813_, uint64_t v_inputHash_4814_, lean_object* v_savedTrace_4815_, lean_object* v_pkg_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_, lean_object* v_a_4821_){
_start:
{
lean_object* v___y_4824_; lean_object* v_a_4828_; lean_object* v_a_4829_; lean_object* v___y_4844_; 
if (lean_obj_tag(v_savedTrace_4815_) == 2)
{
lean_object* v_data_4859_; uint64_t v_depHash_4860_; lean_object* v_outputs_x3f_4861_; uint8_t v___x_4862_; 
v_data_4859_ = lean_ctor_get(v_savedTrace_4815_, 0);
lean_inc_ref(v_data_4859_);
lean_dec_ref(v_savedTrace_4815_);
v_depHash_4860_ = lean_ctor_get_uint64(v_data_4859_, sizeof(void*)*3);
v_outputs_x3f_4861_ = lean_ctor_get(v_data_4859_, 1);
lean_inc(v_outputs_x3f_4861_);
lean_dec_ref(v_data_4859_);
v___x_4862_ = lean_uint64_dec_eq(v_depHash_4860_, v_inputHash_4814_);
if (v___x_4862_ == 0)
{
lean_dec(v_outputs_x3f_4861_);
lean_dec_ref(v_pkg_4816_);
lean_dec_ref(v___y_4813_);
v___y_4824_ = v_a_4821_;
goto v___jp_4823_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_4861_) == 1)
{
lean_object* v_val_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v_val_4863_ = lean_ctor_get(v_outputs_x3f_4861_, 0);
lean_inc_n(v_val_4863_, 2);
lean_dec_ref(v_outputs_x3f_4861_);
v___x_4864_ = lean_box(0);
v___x_4865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4865_, 0, v_val_4863_);
lean_ctor_set(v___x_4865_, 1, v___x_4864_);
lean_ctor_set(v___x_4865_, 2, v___x_4864_);
lean_inc_ref(v___y_4813_);
v___x_4866_ = l_Lake_resolveArtifactOutput(v___x_4865_, v_exe_4812_, v___y_4813_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_);
if (lean_obj_tag(v___x_4866_) == 0)
{
lean_object* v_config_4867_; lean_object* v_a_4868_; lean_object* v_a_4869_; lean_object* v_enableArtifactCache_x3f_4870_; lean_object* v_a_4872_; uint8_t v_a_4876_; lean_object* v_a_4877_; 
v_config_4867_ = lean_ctor_get(v_pkg_4816_, 6);
v_a_4868_ = lean_ctor_get(v___x_4866_, 0);
lean_inc(v_a_4868_);
v_a_4869_ = lean_ctor_get(v___x_4866_, 1);
lean_inc(v_a_4869_);
lean_dec_ref(v___x_4866_);
v_enableArtifactCache_x3f_4870_ = lean_ctor_get(v_config_4867_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4870_) == 0)
{
lean_object* v_toContext_4908_; lean_object* v_lakeEnv_4909_; lean_object* v_enableArtifactCache_x3f_4910_; 
v_toContext_4908_ = lean_ctor_get(v_a_4820_, 1);
v_lakeEnv_4909_ = lean_ctor_get(v_toContext_4908_, 0);
v_enableArtifactCache_x3f_4910_ = lean_ctor_get(v_lakeEnv_4909_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_4910_) == 0)
{
lean_object* v_packages_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v_config_4914_; lean_object* v_enableArtifactCache_x3f_4915_; 
v_packages_4911_ = lean_ctor_get(v_toContext_4908_, 4);
v___x_4912_ = lean_unsigned_to_nat(0u);
v___x_4913_ = lean_array_fget_borrowed(v_packages_4911_, v___x_4912_);
v_config_4914_ = lean_ctor_get(v___x_4913_, 6);
v_enableArtifactCache_x3f_4915_ = lean_ctor_get(v_config_4914_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4915_) == 0)
{
lean_dec(v_val_4863_);
lean_dec_ref(v_pkg_4816_);
v_a_4872_ = v_a_4869_;
goto v___jp_4871_;
}
else
{
lean_object* v_val_4916_; uint8_t v___x_4917_; 
v_val_4916_ = lean_ctor_get(v_enableArtifactCache_x3f_4915_, 0);
v___x_4917_ = lean_unbox(v_val_4916_);
v_a_4876_ = v___x_4917_;
v_a_4877_ = v_a_4869_;
goto v___jp_4875_;
}
}
else
{
lean_object* v_val_4918_; uint8_t v___x_4919_; 
v_val_4918_ = lean_ctor_get(v_enableArtifactCache_x3f_4910_, 0);
v___x_4919_ = lean_unbox(v_val_4918_);
v_a_4876_ = v___x_4919_;
v_a_4877_ = v_a_4869_;
goto v___jp_4875_;
}
}
else
{
lean_object* v_val_4920_; uint8_t v___x_4921_; 
v_val_4920_ = lean_ctor_get(v_enableArtifactCache_x3f_4870_, 0);
v___x_4921_ = lean_unbox(v_val_4920_);
v_a_4876_ = v___x_4921_;
v_a_4877_ = v_a_4869_;
goto v___jp_4875_;
}
v___jp_4871_:
{
lean_object* v___x_4873_; lean_object* v___x_4874_; 
v___x_4873_ = lean_box(0);
v___x_4874_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4868_, v___x_4873_, v___y_4813_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4872_);
lean_dec_ref(v___y_4813_);
v___y_4844_ = v___x_4874_;
goto v___jp_4843_;
}
v___jp_4875_:
{
if (v_a_4876_ == 0)
{
lean_dec(v_val_4863_);
lean_dec_ref(v_pkg_4816_);
v_a_4872_ = v_a_4877_;
goto v___jp_4871_;
}
else
{
lean_object* v_toContext_4878_; lean_object* v_log_4879_; uint8_t v_action_4880_; uint8_t v_wantsRebuild_4881_; lean_object* v_trace_4882_; lean_object* v_buildTime_4883_; lean_object* v_lakeCache_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v_toContext_4878_ = lean_ctor_get(v_a_4820_, 1);
v_log_4879_ = lean_ctor_get(v_a_4877_, 0);
v_action_4880_ = lean_ctor_get_uint8(v_a_4877_, sizeof(void*)*3);
v_wantsRebuild_4881_ = lean_ctor_get_uint8(v_a_4877_, sizeof(void*)*3 + 1);
v_trace_4882_ = lean_ctor_get(v_a_4877_, 1);
v_buildTime_4883_ = lean_ctor_get(v_a_4877_, 2);
v_lakeCache_4884_ = lean_ctor_get(v_toContext_4878_, 2);
v___x_4885_ = l_Lake_Package_cacheScope(v_pkg_4816_);
lean_inc_ref(v_lakeCache_4884_);
v___x_4886_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_4884_, v___x_4885_, v_inputHash_4814_, v_val_4863_, v___x_4864_, v___x_4864_);
if (lean_obj_tag(v___x_4886_) == 0)
{
lean_object* v___x_4887_; lean_object* v___x_4888_; 
lean_dec_ref(v___x_4886_);
v___x_4887_ = lean_box(0);
v___x_4888_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4868_, v___x_4887_, v___y_4813_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4877_);
lean_dec_ref(v___y_4813_);
v___y_4844_ = v___x_4888_;
goto v___jp_4843_;
}
else
{
lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4904_; 
lean_inc(v_buildTime_4883_);
lean_inc_ref(v_trace_4882_);
lean_inc_ref(v_log_4879_);
v_isSharedCheck_4904_ = !lean_is_exclusive(v_a_4877_);
if (v_isSharedCheck_4904_ == 0)
{
lean_object* v_unused_4905_; lean_object* v_unused_4906_; lean_object* v_unused_4907_; 
v_unused_4905_ = lean_ctor_get(v_a_4877_, 2);
lean_dec(v_unused_4905_);
v_unused_4906_ = lean_ctor_get(v_a_4877_, 1);
lean_dec(v_unused_4906_);
v_unused_4907_ = lean_ctor_get(v_a_4877_, 0);
lean_dec(v_unused_4907_);
v___x_4890_ = v_a_4877_;
v_isShared_4891_ = v_isSharedCheck_4904_;
goto v_resetjp_4889_;
}
else
{
lean_dec(v_a_4877_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4904_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v_a_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; uint8_t v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4901_; 
v_a_4892_ = lean_ctor_get(v___x_4886_, 0);
lean_inc(v_a_4892_);
lean_dec_ref(v___x_4886_);
v___x_4893_ = lean_obj_once(&l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0, &l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_once, _init_l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0);
v___x_4894_ = lean_io_error_to_string(v_a_4892_);
v___x_4895_ = lean_string_append(v___x_4893_, v___x_4894_);
lean_dec_ref(v___x_4894_);
v___x_4896_ = 2;
v___x_4897_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4897_, 0, v___x_4895_);
lean_ctor_set_uint8(v___x_4897_, sizeof(void*)*1, v___x_4896_);
v___x_4898_ = lean_box(0);
v___x_4899_ = lean_array_push(v_log_4879_, v___x_4897_);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 0, v___x_4899_);
v___x_4901_ = v___x_4890_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v___x_4899_);
lean_ctor_set(v_reuseFailAlloc_4903_, 1, v_trace_4882_);
lean_ctor_set(v_reuseFailAlloc_4903_, 2, v_buildTime_4883_);
lean_ctor_set_uint8(v_reuseFailAlloc_4903_, sizeof(void*)*3, v_action_4880_);
lean_ctor_set_uint8(v_reuseFailAlloc_4903_, sizeof(void*)*3 + 1, v_wantsRebuild_4881_);
v___x_4901_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
lean_object* v___x_4902_; 
v___x_4902_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4868_, v___x_4898_, v___y_4813_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v___x_4901_);
lean_dec_ref(v___y_4813_);
v___y_4844_ = v___x_4902_;
goto v___jp_4843_;
}
}
}
}
}
}
else
{
lean_object* v_a_4922_; lean_object* v_a_4923_; 
lean_dec(v_val_4863_);
lean_dec_ref(v_pkg_4816_);
lean_dec_ref(v___y_4813_);
v_a_4922_ = lean_ctor_get(v___x_4866_, 0);
lean_inc(v_a_4922_);
v_a_4923_ = lean_ctor_get(v___x_4866_, 1);
lean_inc(v_a_4923_);
lean_dec_ref(v___x_4866_);
v_a_4828_ = v_a_4922_;
v_a_4829_ = v_a_4923_;
goto v___jp_4827_;
}
}
else
{
lean_dec(v_outputs_x3f_4861_);
lean_dec_ref(v_pkg_4816_);
lean_dec_ref(v___y_4813_);
v___y_4824_ = v_a_4821_;
goto v___jp_4823_;
}
}
}
else
{
lean_dec_ref(v_pkg_4816_);
lean_dec(v_savedTrace_4815_);
lean_dec_ref(v___y_4813_);
v___y_4824_ = v_a_4821_;
goto v___jp_4823_;
}
v___jp_4823_:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4825_ = lean_box(0);
v___x_4826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4826_, 0, v___x_4825_);
lean_ctor_set(v___x_4826_, 1, v___y_4824_);
return v___x_4826_;
}
v___jp_4827_:
{
lean_object* v_log_4830_; uint8_t v_action_4831_; uint8_t v_wantsRebuild_4832_; lean_object* v_trace_4833_; lean_object* v_buildTime_4834_; lean_object* v___x_4836_; uint8_t v_isShared_4837_; uint8_t v_isSharedCheck_4842_; 
v_log_4830_ = lean_ctor_get(v_a_4829_, 0);
v_action_4831_ = lean_ctor_get_uint8(v_a_4829_, sizeof(void*)*3);
v_wantsRebuild_4832_ = lean_ctor_get_uint8(v_a_4829_, sizeof(void*)*3 + 1);
v_trace_4833_ = lean_ctor_get(v_a_4829_, 1);
v_buildTime_4834_ = lean_ctor_get(v_a_4829_, 2);
v_isSharedCheck_4842_ = !lean_is_exclusive(v_a_4829_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4836_ = v_a_4829_;
v_isShared_4837_ = v_isSharedCheck_4842_;
goto v_resetjp_4835_;
}
else
{
lean_inc(v_buildTime_4834_);
lean_inc(v_trace_4833_);
lean_inc(v_log_4830_);
lean_dec(v_a_4829_);
v___x_4836_ = lean_box(0);
v_isShared_4837_ = v_isSharedCheck_4842_;
goto v_resetjp_4835_;
}
v_resetjp_4835_:
{
lean_object* v___x_4838_; lean_object* v___x_4840_; 
v___x_4838_ = l_Array_shrink___redArg(v_log_4830_, v_a_4828_);
lean_dec(v_a_4828_);
if (v_isShared_4837_ == 0)
{
lean_ctor_set(v___x_4836_, 0, v___x_4838_);
v___x_4840_ = v___x_4836_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v___x_4838_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v_trace_4833_);
lean_ctor_set(v_reuseFailAlloc_4841_, 2, v_buildTime_4834_);
lean_ctor_set_uint8(v_reuseFailAlloc_4841_, sizeof(void*)*3, v_action_4831_);
lean_ctor_set_uint8(v_reuseFailAlloc_4841_, sizeof(void*)*3 + 1, v_wantsRebuild_4832_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
v___y_4824_ = v___x_4840_;
goto v___jp_4823_;
}
}
}
v___jp_4843_:
{
if (lean_obj_tag(v___y_4844_) == 0)
{
lean_object* v_a_4845_; 
v_a_4845_ = lean_ctor_get(v___y_4844_, 0);
if (lean_obj_tag(v_a_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v___x_4848_; uint8_t v_isShared_4849_; uint8_t v_isSharedCheck_4854_; 
lean_inc_ref(v_a_4845_);
v_a_4846_ = lean_ctor_get(v___y_4844_, 1);
v_isSharedCheck_4854_ = !lean_is_exclusive(v___y_4844_);
if (v_isSharedCheck_4854_ == 0)
{
lean_object* v_unused_4855_; 
v_unused_4855_ = lean_ctor_get(v___y_4844_, 0);
lean_dec(v_unused_4855_);
v___x_4848_ = v___y_4844_;
v_isShared_4849_ = v_isSharedCheck_4854_;
goto v_resetjp_4847_;
}
else
{
lean_inc(v_a_4846_);
lean_dec(v___y_4844_);
v___x_4848_ = lean_box(0);
v_isShared_4849_ = v_isSharedCheck_4854_;
goto v_resetjp_4847_;
}
v_resetjp_4847_:
{
lean_object* v_a_4850_; lean_object* v___x_4852_; 
v_a_4850_ = lean_ctor_get(v_a_4845_, 0);
lean_inc(v_a_4850_);
lean_dec_ref(v_a_4845_);
if (v_isShared_4849_ == 0)
{
lean_ctor_set(v___x_4848_, 0, v_a_4850_);
v___x_4852_ = v___x_4848_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v_a_4850_);
lean_ctor_set(v_reuseFailAlloc_4853_, 1, v_a_4846_);
v___x_4852_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
return v___x_4852_;
}
}
}
else
{
lean_object* v_a_4856_; 
v_a_4856_ = lean_ctor_get(v___y_4844_, 1);
lean_inc(v_a_4856_);
lean_dec_ref(v___y_4844_);
v___y_4824_ = v_a_4856_;
goto v___jp_4823_;
}
}
else
{
lean_object* v_a_4857_; lean_object* v_a_4858_; 
v_a_4857_ = lean_ctor_get(v___y_4844_, 0);
lean_inc(v_a_4857_);
v_a_4858_ = lean_ctor_get(v___y_4844_, 1);
lean_inc(v_a_4858_);
lean_dec_ref(v___y_4844_);
v_a_4828_ = v_a_4857_;
v_a_4829_ = v_a_4858_;
goto v___jp_4827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object* v_exe_4924_, lean_object* v___y_4925_, lean_object* v_inputHash_4926_, lean_object* v_savedTrace_4927_, lean_object* v_pkg_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_){
_start:
{
uint8_t v_exe_boxed_4935_; uint64_t v_inputHash_boxed_4936_; lean_object* v_res_4937_; 
v_exe_boxed_4935_ = lean_unbox(v_exe_4924_);
v_inputHash_boxed_4936_ = lean_unbox_uint64(v_inputHash_4926_);
lean_dec_ref(v_inputHash_4926_);
v_res_4937_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_boxed_4935_, v___y_4925_, v_inputHash_boxed_4936_, v_savedTrace_4927_, v_pkg_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_);
lean_dec_ref(v_a_4932_);
lean_dec(v_a_4931_);
lean_dec(v_a_4930_);
lean_dec(v_a_4929_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(lean_object* v_as_4938_, size_t v_i_4939_, size_t v_stop_4940_, lean_object* v_b_4941_){
_start:
{
uint8_t v___x_4942_; 
v___x_4942_ = lean_usize_dec_eq(v_i_4939_, v_stop_4940_);
if (v___x_4942_ == 0)
{
lean_object* v___x_4943_; lean_object* v_message_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; size_t v___x_4948_; size_t v___x_4949_; 
v___x_4943_ = lean_array_uget_borrowed(v_as_4938_, v_i_4939_);
v_message_4944_ = lean_ctor_get(v___x_4943_, 0);
v___x_4945_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0);
v___x_4946_ = lean_string_append(v_b_4941_, v___x_4945_);
v___x_4947_ = lean_string_append(v___x_4946_, v_message_4944_);
v___x_4948_ = ((size_t)1ULL);
v___x_4949_ = lean_usize_add(v_i_4939_, v___x_4948_);
v_i_4939_ = v___x_4949_;
v_b_4941_ = v___x_4947_;
goto _start;
}
else
{
return v_b_4941_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0___boxed(lean_object* v_as_4951_, lean_object* v_i_4952_, lean_object* v_stop_4953_, lean_object* v_b_4954_){
_start:
{
size_t v_i_boxed_4955_; size_t v_stop_boxed_4956_; lean_object* v_res_4957_; 
v_i_boxed_4955_ = lean_unbox_usize(v_i_4952_);
lean_dec(v_i_4952_);
v_stop_boxed_4956_ = lean_unbox_usize(v_stop_4953_);
lean_dec(v_stop_4953_);
v_res_4957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v_as_4951_, v_i_boxed_4955_, v_stop_boxed_4956_, v_b_4954_);
lean_dec_ref(v_as_4951_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t v_exe_4958_, lean_object* v___y_4959_, uint64_t v_inputHash_4960_, lean_object* v_pkg_4961_, lean_object* v_a_4962_, lean_object* v_a_4963_, lean_object* v_a_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_){
_start:
{
lean_object* v_toContext_4968_; lean_object* v_log_4969_; uint8_t v_action_4970_; uint8_t v_wantsRebuild_4971_; lean_object* v_trace_4972_; lean_object* v_buildTime_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_5066_; 
v_toContext_4968_ = lean_ctor_get(v_a_4965_, 1);
v_log_4969_ = lean_ctor_get(v_a_4966_, 0);
v_action_4970_ = lean_ctor_get_uint8(v_a_4966_, sizeof(void*)*3);
v_wantsRebuild_4971_ = lean_ctor_get_uint8(v_a_4966_, sizeof(void*)*3 + 1);
v_trace_4972_ = lean_ctor_get(v_a_4966_, 1);
v_buildTime_4973_ = lean_ctor_get(v_a_4966_, 2);
v_isSharedCheck_5066_ = !lean_is_exclusive(v_a_4966_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_4975_ = v_a_4966_;
v_isShared_4976_ = v_isSharedCheck_5066_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_buildTime_4973_);
lean_inc(v_trace_4972_);
lean_inc(v_log_4969_);
lean_dec(v_a_4966_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_5066_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v_lakeCache_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v_lakeCache_4977_ = lean_ctor_get(v_toContext_4968_, 2);
v___x_4978_ = l_Lake_Package_cacheScope(v_pkg_4961_);
lean_inc_ref(v_lakeCache_4977_);
v___x_4979_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_4977_, v___x_4978_, v_inputHash_4960_, v_log_4969_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_5053_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
v_a_4981_ = lean_ctor_get(v___x_4979_, 1);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_4983_ = v___x_4979_;
v_isShared_4984_ = v_isSharedCheck_5053_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_inc(v_a_4980_);
lean_dec(v___x_4979_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_5053_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4986_; 
if (v_isShared_4976_ == 0)
{
lean_ctor_set(v___x_4975_, 0, v_a_4981_);
v___x_4986_ = v___x_4975_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_a_4981_);
lean_ctor_set(v_reuseFailAlloc_5052_, 1, v_trace_4972_);
lean_ctor_set(v_reuseFailAlloc_5052_, 2, v_buildTime_4973_);
lean_ctor_set_uint8(v_reuseFailAlloc_5052_, sizeof(void*)*3, v_action_4970_);
lean_ctor_set_uint8(v_reuseFailAlloc_5052_, sizeof(void*)*3 + 1, v_wantsRebuild_4971_);
v___x_4986_ = v_reuseFailAlloc_5052_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
if (lean_obj_tag(v_a_4980_) == 1)
{
lean_object* v_val_4987_; lean_object* v___x_4989_; uint8_t v_isShared_4990_; uint8_t v_isSharedCheck_5047_; 
v_val_4987_ = lean_ctor_get(v_a_4980_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v_a_4980_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_4989_ = v_a_4980_;
v_isShared_4990_ = v_isSharedCheck_5047_;
goto v_resetjp_4988_;
}
else
{
lean_inc(v_val_4987_);
lean_dec(v_a_4980_);
v___x_4989_ = lean_box(0);
v_isShared_4990_ = v_isSharedCheck_5047_;
goto v_resetjp_4988_;
}
v_resetjp_4988_:
{
lean_object* v___x_4991_; lean_object* v_r_4993_; lean_object* v___y_4994_; 
v___x_4991_ = l_Lake_resolveArtifactOutput(v_val_4987_, v_exe_4958_, v___y_4959_, v_a_4962_, v_a_4963_, v_a_4964_, v_a_4965_, v___x_4986_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4998_; lean_object* v_a_4999_; lean_object* v___x_5001_; 
v_a_4998_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_4998_);
v_a_4999_ = lean_ctor_get(v___x_4991_, 1);
lean_inc(v_a_4999_);
lean_dec_ref(v___x_4991_);
if (v_isShared_4990_ == 0)
{
lean_ctor_set(v___x_4989_, 0, v_a_4998_);
v___x_5001_ = v___x_4989_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v_a_4998_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
v_r_4993_ = v___x_5001_;
v___y_4994_ = v_a_4999_;
goto v___jp_4992_;
}
}
else
{
lean_object* v_a_5003_; lean_object* v_a_5004_; lean_object* v_log_5005_; uint8_t v_action_5006_; uint8_t v_wantsRebuild_5007_; lean_object* v_trace_5008_; lean_object* v_buildTime_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5046_; 
lean_del_object(v___x_4989_);
v_a_5003_ = lean_ctor_get(v___x_4991_, 1);
lean_inc(v_a_5003_);
v_a_5004_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_5004_);
lean_dec_ref(v___x_4991_);
v_log_5005_ = lean_ctor_get(v_a_5003_, 0);
v_action_5006_ = lean_ctor_get_uint8(v_a_5003_, sizeof(void*)*3);
v_wantsRebuild_5007_ = lean_ctor_get_uint8(v_a_5003_, sizeof(void*)*3 + 1);
v_trace_5008_ = lean_ctor_get(v_a_5003_, 1);
v_buildTime_5009_ = lean_ctor_get(v_a_5003_, 2);
v_isSharedCheck_5046_ = !lean_is_exclusive(v_a_5003_);
if (v_isSharedCheck_5046_ == 0)
{
v___x_5011_ = v_a_5003_;
v_isShared_5012_ = v_isSharedCheck_5046_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_buildTime_5009_);
lean_inc(v_trace_5008_);
lean_inc(v_log_5005_);
lean_dec(v_a_5003_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5046_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___y_5017_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; uint8_t v___x_5038_; 
v___x_5013_ = lean_array_get_size(v_log_5005_);
lean_inc(v_a_5004_);
v___x_5014_ = l_Array_extract___redArg(v_log_5005_, v_a_5004_, v___x_5013_);
v___x_5015_ = l_Array_shrink___redArg(v_log_5005_, v_a_5004_);
lean_dec(v_a_5004_);
v___x_5025_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0);
v___x_5026_ = l_Lake_lowerHexUInt64(v_inputHash_4960_);
v___x_5027_ = lean_unsigned_to_nat(7u);
v___x_5028_ = lean_unsigned_to_nat(0u);
v___x_5029_ = lean_string_utf8_byte_size(v___x_5026_);
lean_inc_ref(v___x_5026_);
v___x_5030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5030_, 0, v___x_5026_);
lean_ctor_set(v___x_5030_, 1, v___x_5028_);
lean_ctor_set(v___x_5030_, 2, v___x_5029_);
v___x_5031_ = l_String_Slice_Pos_nextn(v___x_5030_, v___x_5028_, v___x_5027_);
lean_dec_ref(v___x_5030_);
v___x_5032_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5032_, 0, v___x_5026_);
lean_ctor_set(v___x_5032_, 1, v___x_5028_);
lean_ctor_set(v___x_5032_, 2, v___x_5031_);
v___x_5033_ = l_String_Slice_toString(v___x_5032_);
lean_dec_ref(v___x_5032_);
v___x_5034_ = lean_string_append(v___x_5025_, v___x_5033_);
lean_dec_ref(v___x_5033_);
v___x_5035_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1, &l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_once, _init_l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1);
v___x_5036_ = lean_string_append(v___x_5034_, v___x_5035_);
v___x_5037_ = lean_array_get_size(v___x_5014_);
v___x_5038_ = lean_nat_dec_lt(v___x_5028_, v___x_5037_);
if (v___x_5038_ == 0)
{
lean_dec_ref(v___x_5014_);
v___y_5017_ = v___x_5036_;
goto v___jp_5016_;
}
else
{
uint8_t v___x_5039_; 
v___x_5039_ = lean_nat_dec_le(v___x_5037_, v___x_5037_);
if (v___x_5039_ == 0)
{
if (v___x_5038_ == 0)
{
lean_dec_ref(v___x_5014_);
v___y_5017_ = v___x_5036_;
goto v___jp_5016_;
}
else
{
size_t v___x_5040_; size_t v___x_5041_; lean_object* v___x_5042_; 
v___x_5040_ = ((size_t)0ULL);
v___x_5041_ = lean_usize_of_nat(v___x_5037_);
v___x_5042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_5014_, v___x_5040_, v___x_5041_, v___x_5036_);
lean_dec_ref(v___x_5014_);
v___y_5017_ = v___x_5042_;
goto v___jp_5016_;
}
}
else
{
size_t v___x_5043_; size_t v___x_5044_; lean_object* v___x_5045_; 
v___x_5043_ = ((size_t)0ULL);
v___x_5044_ = lean_usize_of_nat(v___x_5037_);
v___x_5045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_5014_, v___x_5043_, v___x_5044_, v___x_5036_);
lean_dec_ref(v___x_5014_);
v___y_5017_ = v___x_5045_;
goto v___jp_5016_;
}
}
v___jp_5016_:
{
uint8_t v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5022_; 
v___x_5018_ = 2;
v___x_5019_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5019_, 0, v___y_5017_);
lean_ctor_set_uint8(v___x_5019_, sizeof(void*)*1, v___x_5018_);
v___x_5020_ = lean_array_push(v___x_5015_, v___x_5019_);
if (v_isShared_5012_ == 0)
{
lean_ctor_set(v___x_5011_, 0, v___x_5020_);
v___x_5022_ = v___x_5011_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v___x_5020_);
lean_ctor_set(v_reuseFailAlloc_5024_, 1, v_trace_5008_);
lean_ctor_set(v_reuseFailAlloc_5024_, 2, v_buildTime_5009_);
lean_ctor_set_uint8(v_reuseFailAlloc_5024_, sizeof(void*)*3, v_action_5006_);
lean_ctor_set_uint8(v_reuseFailAlloc_5024_, sizeof(void*)*3 + 1, v_wantsRebuild_5007_);
v___x_5022_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
lean_object* v___x_5023_; 
v___x_5023_ = lean_box(0);
v_r_4993_ = v___x_5023_;
v___y_4994_ = v___x_5022_;
goto v___jp_4992_;
}
}
}
}
v___jp_4992_:
{
lean_object* v___x_4996_; 
if (v_isShared_4984_ == 0)
{
lean_ctor_set(v___x_4983_, 1, v___y_4994_);
lean_ctor_set(v___x_4983_, 0, v_r_4993_);
v___x_4996_ = v___x_4983_;
goto v_reusejp_4995_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v_r_4993_);
lean_ctor_set(v_reuseFailAlloc_4997_, 1, v___y_4994_);
v___x_4996_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4995_;
}
v_reusejp_4995_:
{
return v___x_4996_;
}
}
}
}
else
{
lean_object* v___x_5048_; lean_object* v___x_5050_; 
lean_dec(v_a_4980_);
lean_dec_ref(v___y_4959_);
v___x_5048_ = lean_box(0);
if (v_isShared_4984_ == 0)
{
lean_ctor_set(v___x_4983_, 1, v___x_4986_);
lean_ctor_set(v___x_4983_, 0, v___x_5048_);
v___x_5050_ = v___x_4983_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v___x_5048_);
lean_ctor_set(v_reuseFailAlloc_5051_, 1, v___x_4986_);
v___x_5050_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
return v___x_5050_;
}
}
}
}
}
else
{
lean_object* v_a_5054_; lean_object* v_a_5055_; lean_object* v___x_5057_; uint8_t v_isShared_5058_; uint8_t v_isSharedCheck_5065_; 
lean_dec_ref(v___y_4959_);
v_a_5054_ = lean_ctor_get(v___x_4979_, 0);
v_a_5055_ = lean_ctor_get(v___x_4979_, 1);
v_isSharedCheck_5065_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5065_ == 0)
{
v___x_5057_ = v___x_4979_;
v_isShared_5058_ = v_isSharedCheck_5065_;
goto v_resetjp_5056_;
}
else
{
lean_inc(v_a_5055_);
lean_inc(v_a_5054_);
lean_dec(v___x_4979_);
v___x_5057_ = lean_box(0);
v_isShared_5058_ = v_isSharedCheck_5065_;
goto v_resetjp_5056_;
}
v_resetjp_5056_:
{
lean_object* v___x_5060_; 
if (v_isShared_4976_ == 0)
{
lean_ctor_set(v___x_4975_, 0, v_a_5055_);
v___x_5060_ = v___x_4975_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5064_; 
v_reuseFailAlloc_5064_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5064_, 0, v_a_5055_);
lean_ctor_set(v_reuseFailAlloc_5064_, 1, v_trace_4972_);
lean_ctor_set(v_reuseFailAlloc_5064_, 2, v_buildTime_4973_);
lean_ctor_set_uint8(v_reuseFailAlloc_5064_, sizeof(void*)*3, v_action_4970_);
lean_ctor_set_uint8(v_reuseFailAlloc_5064_, sizeof(void*)*3 + 1, v_wantsRebuild_4971_);
v___x_5060_ = v_reuseFailAlloc_5064_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
lean_object* v___x_5062_; 
if (v_isShared_5058_ == 0)
{
lean_ctor_set(v___x_5057_, 1, v___x_5060_);
v___x_5062_ = v___x_5057_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v_a_5054_);
lean_ctor_set(v_reuseFailAlloc_5063_, 1, v___x_5060_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
return v___x_5062_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object* v_exe_5067_, lean_object* v___y_5068_, lean_object* v_inputHash_5069_, lean_object* v_pkg_5070_, lean_object* v_a_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_){
_start:
{
uint8_t v_exe_boxed_5077_; uint64_t v_inputHash_boxed_5078_; lean_object* v_res_5079_; 
v_exe_boxed_5077_ = lean_unbox(v_exe_5067_);
v_inputHash_boxed_5078_ = lean_unbox_uint64(v_inputHash_5069_);
lean_dec_ref(v_inputHash_5069_);
v_res_5079_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_boxed_5077_, v___y_5068_, v_inputHash_boxed_5078_, v_pkg_5070_, v_a_5071_, v_a_5072_, v_a_5073_, v_a_5074_, v_a_5075_);
lean_dec_ref(v_a_5074_);
lean_dec(v_a_5073_);
lean_dec(v_a_5072_);
lean_dec(v_a_5071_);
return v_res_5079_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(uint8_t v_exe_5080_, uint64_t v_hash_5081_, lean_object* v_val_5082_, lean_object* v_file_5083_, lean_object* v___x_5084_, lean_object* v_a_5085_, uint8_t v_restore_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_){
_start:
{
lean_object* v_a_5095_; lean_object* v___y_5099_; lean_object* v___y_5100_; lean_object* v___y_5101_; lean_object* v___y_5139_; uint8_t v___y_5140_; lean_object* v___y_5141_; lean_object* v___y_5142_; uint8_t v___y_5143_; lean_object* v___y_5144_; lean_object* v___y_5145_; lean_object* v___y_5146_; lean_object* v_a_5160_; lean_object* v_val_5161_; lean_object* v_a_5162_; lean_object* v___y_5216_; lean_object* v_a_5222_; lean_object* v___y_5223_; lean_object* v___x_5225_; 
lean_inc_ref(v_val_5082_);
lean_inc_ref(v___y_5087_);
v___x_5225_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_5080_, v___y_5087_, v_hash_5081_, v_val_5082_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_);
if (lean_obj_tag(v___x_5225_) == 0)
{
lean_object* v_a_5226_; 
v_a_5226_ = lean_ctor_get(v___x_5225_, 0);
lean_inc(v_a_5226_);
if (lean_obj_tag(v_a_5226_) == 1)
{
lean_object* v_a_5227_; lean_object* v_val_5228_; 
lean_dec_ref(v___y_5087_);
lean_dec_ref(v_val_5082_);
v_a_5227_ = lean_ctor_get(v___x_5225_, 1);
lean_inc(v_a_5227_);
lean_dec_ref(v___x_5225_);
v_val_5228_ = lean_ctor_get(v_a_5226_, 0);
lean_inc(v_val_5228_);
lean_dec_ref(v_a_5226_);
v_a_5222_ = v_val_5228_;
v___y_5223_ = v_a_5227_;
goto v___jp_5221_;
}
else
{
lean_object* v_a_5229_; lean_object* v___x_5230_; lean_object* v_a_5231_; 
lean_dec(v_a_5226_);
v_a_5229_ = lean_ctor_get(v___x_5225_, 1);
lean_inc(v_a_5229_);
lean_dec_ref(v___x_5225_);
lean_inc(v_a_5085_);
v___x_5230_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_5080_, v___y_5087_, v_hash_5081_, v_a_5085_, v_val_5082_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v_a_5229_);
v_a_5231_ = lean_ctor_get(v___x_5230_, 0);
lean_inc(v_a_5231_);
if (lean_obj_tag(v_a_5231_) == 1)
{
lean_object* v_a_5232_; lean_object* v_val_5233_; 
v_a_5232_ = lean_ctor_get(v___x_5230_, 1);
lean_inc(v_a_5232_);
lean_dec_ref(v___x_5230_);
v_val_5233_ = lean_ctor_get(v_a_5231_, 0);
lean_inc(v_val_5233_);
lean_dec_ref(v_a_5231_);
v_a_5222_ = v_val_5233_;
v___y_5223_ = v_a_5232_;
goto v___jp_5221_;
}
else
{
lean_object* v_a_5234_; 
lean_dec(v_a_5231_);
lean_dec(v_a_5085_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_file_5083_);
v_a_5234_ = lean_ctor_get(v___x_5230_, 1);
lean_inc(v_a_5234_);
lean_dec_ref(v___x_5230_);
v_a_5095_ = v_a_5234_;
goto v___jp_5094_;
}
}
}
else
{
lean_dec_ref(v___y_5087_);
lean_dec_ref(v_val_5082_);
v___y_5216_ = v___x_5225_;
goto v___jp_5215_;
}
v___jp_5094_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; 
v___x_5096_ = lean_box(0);
v___x_5097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5096_);
lean_ctor_set(v___x_5097_, 1, v_a_5095_);
return v___x_5097_;
}
v___jp_5098_:
{
if (v_restore_5086_ == 0)
{
lean_object* v___x_5102_; 
lean_dec_ref(v___y_5100_);
lean_dec_ref(v_file_5083_);
v___x_5102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___y_5099_);
lean_ctor_set(v___x_5102_, 1, v___y_5101_);
return v___x_5102_;
}
else
{
lean_object* v_log_5103_; uint8_t v_action_5104_; uint8_t v_wantsRebuild_5105_; lean_object* v_trace_5106_; lean_object* v_buildTime_5107_; lean_object* v___x_5109_; uint8_t v_isShared_5110_; uint8_t v_isSharedCheck_5137_; 
lean_dec(v___y_5099_);
v_log_5103_ = lean_ctor_get(v___y_5101_, 0);
v_action_5104_ = lean_ctor_get_uint8(v___y_5101_, sizeof(void*)*3);
v_wantsRebuild_5105_ = lean_ctor_get_uint8(v___y_5101_, sizeof(void*)*3 + 1);
v_trace_5106_ = lean_ctor_get(v___y_5101_, 1);
v_buildTime_5107_ = lean_ctor_get(v___y_5101_, 2);
v_isSharedCheck_5137_ = !lean_is_exclusive(v___y_5101_);
if (v_isSharedCheck_5137_ == 0)
{
v___x_5109_ = v___y_5101_;
v_isShared_5110_ = v_isSharedCheck_5137_;
goto v_resetjp_5108_;
}
else
{
lean_inc(v_buildTime_5107_);
lean_inc(v_trace_5106_);
lean_inc(v_log_5103_);
lean_dec(v___y_5101_);
v___x_5109_ = lean_box(0);
v_isShared_5110_ = v_isSharedCheck_5137_;
goto v_resetjp_5108_;
}
v_resetjp_5108_:
{
lean_object* v___x_5111_; 
v___x_5111_ = l_Lake_restoreArtifact(v_file_5083_, v___y_5100_, v_exe_5080_, v_log_5103_);
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5112_; lean_object* v_a_5113_; lean_object* v___x_5115_; uint8_t v_isShared_5116_; uint8_t v_isSharedCheck_5124_; 
v_a_5112_ = lean_ctor_get(v___x_5111_, 0);
v_a_5113_ = lean_ctor_get(v___x_5111_, 1);
v_isSharedCheck_5124_ = !lean_is_exclusive(v___x_5111_);
if (v_isSharedCheck_5124_ == 0)
{
v___x_5115_ = v___x_5111_;
v_isShared_5116_ = v_isSharedCheck_5124_;
goto v_resetjp_5114_;
}
else
{
lean_inc(v_a_5113_);
lean_inc(v_a_5112_);
lean_dec(v___x_5111_);
v___x_5115_ = lean_box(0);
v_isShared_5116_ = v_isSharedCheck_5124_;
goto v_resetjp_5114_;
}
v_resetjp_5114_:
{
lean_object* v___x_5118_; 
if (v_isShared_5110_ == 0)
{
lean_ctor_set(v___x_5109_, 0, v_a_5113_);
v___x_5118_ = v___x_5109_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_a_5113_);
lean_ctor_set(v_reuseFailAlloc_5123_, 1, v_trace_5106_);
lean_ctor_set(v_reuseFailAlloc_5123_, 2, v_buildTime_5107_);
lean_ctor_set_uint8(v_reuseFailAlloc_5123_, sizeof(void*)*3, v_action_5104_);
lean_ctor_set_uint8(v_reuseFailAlloc_5123_, sizeof(void*)*3 + 1, v_wantsRebuild_5105_);
v___x_5118_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
lean_object* v___x_5119_; lean_object* v___x_5121_; 
v___x_5119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5119_, 0, v_a_5112_);
if (v_isShared_5116_ == 0)
{
lean_ctor_set(v___x_5115_, 1, v___x_5118_);
lean_ctor_set(v___x_5115_, 0, v___x_5119_);
v___x_5121_ = v___x_5115_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v___x_5119_);
lean_ctor_set(v_reuseFailAlloc_5122_, 1, v___x_5118_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
else
{
lean_object* v_a_5125_; lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5136_; 
v_a_5125_ = lean_ctor_get(v___x_5111_, 0);
v_a_5126_ = lean_ctor_get(v___x_5111_, 1);
v_isSharedCheck_5136_ = !lean_is_exclusive(v___x_5111_);
if (v_isSharedCheck_5136_ == 0)
{
v___x_5128_ = v___x_5111_;
v_isShared_5129_ = v_isSharedCheck_5136_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_inc(v_a_5125_);
lean_dec(v___x_5111_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5136_;
goto v_resetjp_5127_;
}
v_resetjp_5127_:
{
lean_object* v___x_5131_; 
if (v_isShared_5110_ == 0)
{
lean_ctor_set(v___x_5109_, 0, v_a_5126_);
v___x_5131_ = v___x_5109_;
goto v_reusejp_5130_;
}
else
{
lean_object* v_reuseFailAlloc_5135_; 
v_reuseFailAlloc_5135_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5135_, 0, v_a_5126_);
lean_ctor_set(v_reuseFailAlloc_5135_, 1, v_trace_5106_);
lean_ctor_set(v_reuseFailAlloc_5135_, 2, v_buildTime_5107_);
lean_ctor_set_uint8(v_reuseFailAlloc_5135_, sizeof(void*)*3, v_action_5104_);
lean_ctor_set_uint8(v_reuseFailAlloc_5135_, sizeof(void*)*3 + 1, v_wantsRebuild_5105_);
v___x_5131_ = v_reuseFailAlloc_5135_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
lean_object* v___x_5133_; 
if (v_isShared_5129_ == 0)
{
lean_ctor_set(v___x_5128_, 1, v___x_5131_);
v___x_5133_ = v___x_5128_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v_a_5125_);
lean_ctor_set(v_reuseFailAlloc_5134_, 1, v___x_5131_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
return v___x_5133_;
}
}
}
}
}
}
}
v___jp_5138_:
{
lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; 
v___x_5147_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5147_, 0, v___y_5146_);
v___x_5148_ = l_Lake_BuildMetadata_ofFetch(v_hash_5081_, v___x_5147_);
v___x_5149_ = l_Lake_BuildMetadata_writeFile(v___x_5084_, v___x_5148_);
if (lean_obj_tag(v___x_5149_) == 0)
{
lean_object* v___x_5150_; 
lean_dec_ref(v___x_5149_);
v___x_5150_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5150_, 0, v___y_5145_);
lean_ctor_set(v___x_5150_, 1, v___y_5139_);
lean_ctor_set(v___x_5150_, 2, v___y_5144_);
lean_ctor_set_uint8(v___x_5150_, sizeof(void*)*3, v___y_5143_);
lean_ctor_set_uint8(v___x_5150_, sizeof(void*)*3 + 1, v___y_5140_);
v___y_5099_ = v___y_5141_;
v___y_5100_ = v___y_5142_;
v___y_5101_ = v___x_5150_;
goto v___jp_5098_;
}
else
{
lean_object* v_a_5151_; lean_object* v___x_5152_; uint8_t v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; 
lean_dec_ref(v___y_5142_);
lean_dec(v___y_5141_);
lean_dec_ref(v_file_5083_);
v_a_5151_ = lean_ctor_get(v___x_5149_, 0);
lean_inc(v_a_5151_);
lean_dec_ref(v___x_5149_);
v___x_5152_ = lean_io_error_to_string(v_a_5151_);
v___x_5153_ = 3;
v___x_5154_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5154_, 0, v___x_5152_);
lean_ctor_set_uint8(v___x_5154_, sizeof(void*)*1, v___x_5153_);
v___x_5155_ = lean_array_get_size(v___y_5145_);
v___x_5156_ = lean_array_push(v___y_5145_, v___x_5154_);
v___x_5157_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5157_, 0, v___x_5156_);
lean_ctor_set(v___x_5157_, 1, v___y_5139_);
lean_ctor_set(v___x_5157_, 2, v___y_5144_);
lean_ctor_set_uint8(v___x_5157_, sizeof(void*)*3, v___y_5143_);
lean_ctor_set_uint8(v___x_5157_, sizeof(void*)*3 + 1, v___y_5140_);
v___x_5158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5158_, 0, v___x_5155_);
lean_ctor_set(v___x_5158_, 1, v___x_5157_);
return v___x_5158_;
}
}
v___jp_5159_:
{
lean_object* v___x_5163_; 
v___x_5163_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_hash_5081_, v_a_5085_, v_a_5162_);
lean_dec(v_a_5085_);
if (lean_obj_tag(v___x_5163_) == 0)
{
lean_object* v_a_5164_; uint8_t v___x_5165_; 
v_a_5164_ = lean_ctor_get(v___x_5163_, 0);
lean_inc(v_a_5164_);
v___x_5165_ = lean_unbox(v_a_5164_);
lean_dec(v_a_5164_);
if (v___x_5165_ == 0)
{
lean_object* v_a_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5203_; 
v_a_5166_ = lean_ctor_get(v___x_5163_, 1);
v_isSharedCheck_5203_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5203_ == 0)
{
lean_object* v_unused_5204_; 
v_unused_5204_ = lean_ctor_get(v___x_5163_, 0);
lean_dec(v_unused_5204_);
v___x_5168_ = v___x_5163_;
v_isShared_5169_ = v_isSharedCheck_5203_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_a_5166_);
lean_dec(v___x_5163_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5203_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
lean_object* v_log_5170_; uint8_t v_action_5171_; uint8_t v_wantsRebuild_5172_; lean_object* v_trace_5173_; lean_object* v_buildTime_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5202_; 
v_log_5170_ = lean_ctor_get(v_a_5166_, 0);
v_action_5171_ = lean_ctor_get_uint8(v_a_5166_, sizeof(void*)*3);
v_wantsRebuild_5172_ = lean_ctor_get_uint8(v_a_5166_, sizeof(void*)*3 + 1);
v_trace_5173_ = lean_ctor_get(v_a_5166_, 1);
v_buildTime_5174_ = lean_ctor_get(v_a_5166_, 2);
v_isSharedCheck_5202_ = !lean_is_exclusive(v_a_5166_);
if (v_isSharedCheck_5202_ == 0)
{
v___x_5176_ = v_a_5166_;
v_isShared_5177_ = v_isSharedCheck_5202_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_buildTime_5174_);
lean_inc(v_trace_5173_);
lean_inc(v_log_5170_);
lean_dec(v_a_5166_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5202_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5178_; 
v___x_5178_ = l_Lake_removeFileIfExists(v_file_5083_);
if (lean_obj_tag(v___x_5178_) == 0)
{
lean_object* v_descr_5179_; uint64_t v_hash_5180_; lean_object* v_ext_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; uint8_t v___x_5184_; 
lean_dec_ref(v___x_5178_);
lean_del_object(v___x_5176_);
lean_del_object(v___x_5168_);
v_descr_5179_ = lean_ctor_get(v_val_5161_, 0);
v_hash_5180_ = lean_ctor_get_uint64(v_descr_5179_, sizeof(void*)*1);
v_ext_5181_ = lean_ctor_get(v_descr_5179_, 0);
v___x_5182_ = lean_string_utf8_byte_size(v_ext_5181_);
v___x_5183_ = lean_unsigned_to_nat(0u);
v___x_5184_ = lean_nat_dec_eq(v___x_5182_, v___x_5183_);
if (v___x_5184_ == 0)
{
lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5185_ = l_Lake_lowerHexUInt64(v_hash_5180_);
v___x_5186_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_5187_ = lean_string_append(v___x_5185_, v___x_5186_);
v___x_5188_ = lean_string_append(v___x_5187_, v_ext_5181_);
v___y_5139_ = v_trace_5173_;
v___y_5140_ = v_wantsRebuild_5172_;
v___y_5141_ = v_a_5160_;
v___y_5142_ = v_val_5161_;
v___y_5143_ = v_action_5171_;
v___y_5144_ = v_buildTime_5174_;
v___y_5145_ = v_log_5170_;
v___y_5146_ = v___x_5188_;
goto v___jp_5138_;
}
else
{
lean_object* v___x_5189_; 
v___x_5189_ = l_Lake_lowerHexUInt64(v_hash_5180_);
v___y_5139_ = v_trace_5173_;
v___y_5140_ = v_wantsRebuild_5172_;
v___y_5141_ = v_a_5160_;
v___y_5142_ = v_val_5161_;
v___y_5143_ = v_action_5171_;
v___y_5144_ = v_buildTime_5174_;
v___y_5145_ = v_log_5170_;
v___y_5146_ = v___x_5189_;
goto v___jp_5138_;
}
}
else
{
lean_object* v_a_5190_; lean_object* v___x_5191_; uint8_t v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5197_; 
lean_dec_ref(v_val_5161_);
lean_dec(v_a_5160_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_file_5083_);
v_a_5190_ = lean_ctor_get(v___x_5178_, 0);
lean_inc(v_a_5190_);
lean_dec_ref(v___x_5178_);
v___x_5191_ = lean_io_error_to_string(v_a_5190_);
v___x_5192_ = 3;
v___x_5193_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5193_, 0, v___x_5191_);
lean_ctor_set_uint8(v___x_5193_, sizeof(void*)*1, v___x_5192_);
v___x_5194_ = lean_array_get_size(v_log_5170_);
v___x_5195_ = lean_array_push(v_log_5170_, v___x_5193_);
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 0, v___x_5195_);
v___x_5197_ = v___x_5176_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v___x_5195_);
lean_ctor_set(v_reuseFailAlloc_5201_, 1, v_trace_5173_);
lean_ctor_set(v_reuseFailAlloc_5201_, 2, v_buildTime_5174_);
lean_ctor_set_uint8(v_reuseFailAlloc_5201_, sizeof(void*)*3, v_action_5171_);
lean_ctor_set_uint8(v_reuseFailAlloc_5201_, sizeof(void*)*3 + 1, v_wantsRebuild_5172_);
v___x_5197_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5199_; 
if (v_isShared_5169_ == 0)
{
lean_ctor_set_tag(v___x_5168_, 1);
lean_ctor_set(v___x_5168_, 1, v___x_5197_);
lean_ctor_set(v___x_5168_, 0, v___x_5194_);
v___x_5199_ = v___x_5168_;
goto v_reusejp_5198_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v___x_5194_);
lean_ctor_set(v_reuseFailAlloc_5200_, 1, v___x_5197_);
v___x_5199_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5198_;
}
v_reusejp_5198_:
{
return v___x_5199_;
}
}
}
}
}
}
else
{
lean_object* v_a_5205_; 
lean_dec_ref(v___x_5084_);
v_a_5205_ = lean_ctor_get(v___x_5163_, 1);
lean_inc(v_a_5205_);
lean_dec_ref(v___x_5163_);
v___y_5099_ = v_a_5160_;
v___y_5100_ = v_val_5161_;
v___y_5101_ = v_a_5205_;
goto v___jp_5098_;
}
}
else
{
lean_object* v_a_5206_; lean_object* v_a_5207_; lean_object* v___x_5209_; uint8_t v_isShared_5210_; uint8_t v_isSharedCheck_5214_; 
lean_dec_ref(v_val_5161_);
lean_dec(v_a_5160_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_file_5083_);
v_a_5206_ = lean_ctor_get(v___x_5163_, 0);
v_a_5207_ = lean_ctor_get(v___x_5163_, 1);
v_isSharedCheck_5214_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5209_ = v___x_5163_;
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
else
{
lean_inc(v_a_5207_);
lean_inc(v_a_5206_);
lean_dec(v___x_5163_);
v___x_5209_ = lean_box(0);
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
v_resetjp_5208_:
{
lean_object* v___x_5212_; 
if (v_isShared_5210_ == 0)
{
v___x_5212_ = v___x_5209_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v_a_5206_);
lean_ctor_set(v_reuseFailAlloc_5213_, 1, v_a_5207_);
v___x_5212_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
return v___x_5212_;
}
}
}
}
v___jp_5215_:
{
if (lean_obj_tag(v___y_5216_) == 0)
{
lean_object* v_a_5217_; 
v_a_5217_ = lean_ctor_get(v___y_5216_, 0);
if (lean_obj_tag(v_a_5217_) == 1)
{
lean_object* v_a_5218_; lean_object* v_val_5219_; 
lean_inc_ref(v_a_5217_);
v_a_5218_ = lean_ctor_get(v___y_5216_, 1);
lean_inc(v_a_5218_);
lean_dec_ref(v___y_5216_);
v_val_5219_ = lean_ctor_get(v_a_5217_, 0);
lean_inc(v_val_5219_);
v_a_5160_ = v_a_5217_;
v_val_5161_ = v_val_5219_;
v_a_5162_ = v_a_5218_;
goto v___jp_5159_;
}
else
{
lean_object* v_a_5220_; 
lean_dec(v_a_5085_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_file_5083_);
v_a_5220_ = lean_ctor_get(v___y_5216_, 1);
lean_inc(v_a_5220_);
lean_dec_ref(v___y_5216_);
v_a_5095_ = v_a_5220_;
goto v___jp_5094_;
}
}
else
{
lean_dec(v_a_5085_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_file_5083_);
return v___y_5216_;
}
}
v___jp_5221_:
{
lean_object* v___x_5224_; 
lean_inc_ref(v_a_5222_);
v___x_5224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5224_, 0, v_a_5222_);
v_a_5160_ = v___x_5224_;
v_val_5161_ = v_a_5222_;
v_a_5162_ = v___y_5223_;
goto v___jp_5159_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object* v_exe_5235_, lean_object* v_hash_5236_, lean_object* v_val_5237_, lean_object* v_file_5238_, lean_object* v___x_5239_, lean_object* v_a_5240_, lean_object* v_restore_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_){
_start:
{
uint8_t v_exe_boxed_5249_; uint64_t v_hash_boxed_5250_; uint8_t v_restore_boxed_5251_; lean_object* v_res_5252_; 
v_exe_boxed_5249_ = lean_unbox(v_exe_5235_);
v_hash_boxed_5250_ = lean_unbox_uint64(v_hash_5236_);
lean_dec_ref(v_hash_5236_);
v_restore_boxed_5251_ = lean_unbox(v_restore_5241_);
v_res_5252_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_boxed_5249_, v_hash_boxed_5250_, v_val_5237_, v_file_5238_, v___x_5239_, v_a_5240_, v_restore_boxed_5251_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_, v___y_5246_, v___y_5247_);
lean_dec_ref(v___y_5246_);
lean_dec(v___y_5245_);
lean_dec(v___y_5244_);
lean_dec(v___y_5243_);
return v_res_5252_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t v_a_5253_, lean_object* v_file_5254_, lean_object* v_ext_5255_, uint8_t v_text_5256_, uint8_t v_exe_5257_, uint8_t v___y_5258_, lean_object* v_val_5259_, uint64_t v_hash_5260_, lean_object* v_____r_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
uint8_t v___x_5269_; uint8_t v___x_5270_; 
v___x_5269_ = 1;
v___x_5270_ = l_Lake_instDecidableEqOutputStatus(v_a_5253_, v___x_5269_);
if (v___x_5270_ == 0)
{
lean_object* v_toContext_5271_; lean_object* v_log_5272_; uint8_t v_action_5273_; uint8_t v_wantsRebuild_5274_; lean_object* v_trace_5275_; lean_object* v_buildTime_5276_; lean_object* v_lakeCache_5277_; lean_object* v___x_5278_; 
v_toContext_5271_ = lean_ctor_get(v___y_5266_, 1);
v_log_5272_ = lean_ctor_get(v___y_5267_, 0);
v_action_5273_ = lean_ctor_get_uint8(v___y_5267_, sizeof(void*)*3);
v_wantsRebuild_5274_ = lean_ctor_get_uint8(v___y_5267_, sizeof(void*)*3 + 1);
v_trace_5275_ = lean_ctor_get(v___y_5267_, 1);
v_buildTime_5276_ = lean_ctor_get(v___y_5267_, 2);
v_lakeCache_5277_ = lean_ctor_get(v_toContext_5271_, 2);
lean_inc_ref(v_lakeCache_5277_);
v___x_5278_ = l_Lake_Cache_saveArtifact(v_lakeCache_5277_, v_file_5254_, v_ext_5255_, v_text_5256_, v_exe_5257_, v___y_5258_);
if (lean_obj_tag(v___x_5278_) == 0)
{
lean_object* v_a_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5320_; 
v_a_5279_ = lean_ctor_get(v___x_5278_, 0);
v_isSharedCheck_5320_ = !lean_is_exclusive(v___x_5278_);
if (v_isSharedCheck_5320_ == 0)
{
v___x_5281_ = v___x_5278_;
v_isShared_5282_ = v_isSharedCheck_5320_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_a_5279_);
lean_dec(v___x_5278_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5320_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v_descr_5283_; uint64_t v_hash_5284_; lean_object* v_ext_5285_; lean_object* v___x_5286_; lean_object* v___y_5288_; lean_object* v___x_5312_; lean_object* v___x_5313_; uint8_t v___x_5314_; 
v_descr_5283_ = lean_ctor_get(v_a_5279_, 0);
v_hash_5284_ = lean_ctor_get_uint64(v_descr_5283_, sizeof(void*)*1);
v_ext_5285_ = lean_ctor_get(v_descr_5283_, 0);
v___x_5286_ = l_Lake_Package_cacheScope(v_val_5259_);
v___x_5312_ = lean_string_utf8_byte_size(v_ext_5285_);
v___x_5313_ = lean_unsigned_to_nat(0u);
v___x_5314_ = lean_nat_dec_eq(v___x_5312_, v___x_5313_);
if (v___x_5314_ == 0)
{
lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; 
v___x_5315_ = l_Lake_lowerHexUInt64(v_hash_5284_);
v___x_5316_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_5317_ = lean_string_append(v___x_5315_, v___x_5316_);
v___x_5318_ = lean_string_append(v___x_5317_, v_ext_5285_);
v___y_5288_ = v___x_5318_;
goto v___jp_5287_;
}
else
{
lean_object* v___x_5319_; 
v___x_5319_ = l_Lake_lowerHexUInt64(v_hash_5284_);
v___y_5288_ = v___x_5319_;
goto v___jp_5287_;
}
v___jp_5287_:
{
lean_object* v___x_5290_; 
if (v_isShared_5282_ == 0)
{
lean_ctor_set_tag(v___x_5281_, 3);
lean_ctor_set(v___x_5281_, 0, v___y_5288_);
v___x_5290_ = v___x_5281_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v___y_5288_);
v___x_5290_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; 
v___x_5291_ = lean_box(0);
lean_inc_ref(v_lakeCache_5277_);
v___x_5292_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_5277_, v___x_5286_, v_hash_5260_, v___x_5290_, v___x_5291_, v___x_5291_);
if (lean_obj_tag(v___x_5292_) == 0)
{
lean_object* v___x_5293_; 
lean_dec_ref(v___x_5292_);
v___x_5293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5293_, 0, v_a_5279_);
lean_ctor_set(v___x_5293_, 1, v___y_5267_);
return v___x_5293_;
}
else
{
lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5307_; 
lean_inc(v_buildTime_5276_);
lean_inc_ref(v_trace_5275_);
lean_inc_ref(v_log_5272_);
lean_dec(v_a_5279_);
v_isSharedCheck_5307_ = !lean_is_exclusive(v___y_5267_);
if (v_isSharedCheck_5307_ == 0)
{
lean_object* v_unused_5308_; lean_object* v_unused_5309_; lean_object* v_unused_5310_; 
v_unused_5308_ = lean_ctor_get(v___y_5267_, 2);
lean_dec(v_unused_5308_);
v_unused_5309_ = lean_ctor_get(v___y_5267_, 1);
lean_dec(v_unused_5309_);
v_unused_5310_ = lean_ctor_get(v___y_5267_, 0);
lean_dec(v_unused_5310_);
v___x_5295_ = v___y_5267_;
v_isShared_5296_ = v_isSharedCheck_5307_;
goto v_resetjp_5294_;
}
else
{
lean_dec(v___y_5267_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5307_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v_a_5297_; lean_object* v___x_5298_; uint8_t v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5304_; 
v_a_5297_ = lean_ctor_get(v___x_5292_, 0);
lean_inc(v_a_5297_);
lean_dec_ref(v___x_5292_);
v___x_5298_ = lean_io_error_to_string(v_a_5297_);
v___x_5299_ = 3;
v___x_5300_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5300_, 0, v___x_5298_);
lean_ctor_set_uint8(v___x_5300_, sizeof(void*)*1, v___x_5299_);
v___x_5301_ = lean_array_get_size(v_log_5272_);
v___x_5302_ = lean_array_push(v_log_5272_, v___x_5300_);
if (v_isShared_5296_ == 0)
{
lean_ctor_set(v___x_5295_, 0, v___x_5302_);
v___x_5304_ = v___x_5295_;
goto v_reusejp_5303_;
}
else
{
lean_object* v_reuseFailAlloc_5306_; 
v_reuseFailAlloc_5306_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5306_, 0, v___x_5302_);
lean_ctor_set(v_reuseFailAlloc_5306_, 1, v_trace_5275_);
lean_ctor_set(v_reuseFailAlloc_5306_, 2, v_buildTime_5276_);
lean_ctor_set_uint8(v_reuseFailAlloc_5306_, sizeof(void*)*3, v_action_5273_);
lean_ctor_set_uint8(v_reuseFailAlloc_5306_, sizeof(void*)*3 + 1, v_wantsRebuild_5274_);
v___x_5304_ = v_reuseFailAlloc_5306_;
goto v_reusejp_5303_;
}
v_reusejp_5303_:
{
lean_object* v___x_5305_; 
v___x_5305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5305_, 0, v___x_5301_);
lean_ctor_set(v___x_5305_, 1, v___x_5304_);
return v___x_5305_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5334_; 
lean_inc(v_buildTime_5276_);
lean_inc_ref(v_trace_5275_);
lean_inc_ref(v_log_5272_);
lean_dec_ref(v_val_5259_);
v_isSharedCheck_5334_ = !lean_is_exclusive(v___y_5267_);
if (v_isSharedCheck_5334_ == 0)
{
lean_object* v_unused_5335_; lean_object* v_unused_5336_; lean_object* v_unused_5337_; 
v_unused_5335_ = lean_ctor_get(v___y_5267_, 2);
lean_dec(v_unused_5335_);
v_unused_5336_ = lean_ctor_get(v___y_5267_, 1);
lean_dec(v_unused_5336_);
v_unused_5337_ = lean_ctor_get(v___y_5267_, 0);
lean_dec(v_unused_5337_);
v___x_5322_ = v___y_5267_;
v_isShared_5323_ = v_isSharedCheck_5334_;
goto v_resetjp_5321_;
}
else
{
lean_dec(v___y_5267_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5334_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
lean_object* v_a_5324_; lean_object* v___x_5325_; uint8_t v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5331_; 
v_a_5324_ = lean_ctor_get(v___x_5278_, 0);
lean_inc(v_a_5324_);
lean_dec_ref(v___x_5278_);
v___x_5325_ = lean_io_error_to_string(v_a_5324_);
v___x_5326_ = 3;
v___x_5327_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5327_, 0, v___x_5325_);
lean_ctor_set_uint8(v___x_5327_, sizeof(void*)*1, v___x_5326_);
v___x_5328_ = lean_array_get_size(v_log_5272_);
v___x_5329_ = lean_array_push(v_log_5272_, v___x_5327_);
if (v_isShared_5323_ == 0)
{
lean_ctor_set(v___x_5322_, 0, v___x_5329_);
v___x_5331_ = v___x_5322_;
goto v_reusejp_5330_;
}
else
{
lean_object* v_reuseFailAlloc_5333_; 
v_reuseFailAlloc_5333_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5333_, 0, v___x_5329_);
lean_ctor_set(v_reuseFailAlloc_5333_, 1, v_trace_5275_);
lean_ctor_set(v_reuseFailAlloc_5333_, 2, v_buildTime_5276_);
lean_ctor_set_uint8(v_reuseFailAlloc_5333_, sizeof(void*)*3, v_action_5273_);
lean_ctor_set_uint8(v_reuseFailAlloc_5333_, sizeof(void*)*3 + 1, v_wantsRebuild_5274_);
v___x_5331_ = v_reuseFailAlloc_5333_;
goto v_reusejp_5330_;
}
v_reusejp_5330_:
{
lean_object* v___x_5332_; 
v___x_5332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5328_);
lean_ctor_set(v___x_5332_, 1, v___x_5331_);
return v___x_5332_;
}
}
}
}
else
{
lean_object* v___x_5338_; 
lean_dec_ref(v_val_5259_);
v___x_5338_ = l_Lake_computeArtifact___redArg(v_file_5254_, v_ext_5255_, v_text_5256_, v___y_5266_, v___y_5267_);
return v___x_5338_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object* v_a_5339_, lean_object* v_file_5340_, lean_object* v_ext_5341_, lean_object* v_text_5342_, lean_object* v_exe_5343_, lean_object* v___y_5344_, lean_object* v_val_5345_, lean_object* v_hash_5346_, lean_object* v_____r_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_){
_start:
{
uint8_t v_a_276186__boxed_5355_; uint8_t v_text_boxed_5356_; uint8_t v_exe_boxed_5357_; uint8_t v___y_276187__boxed_5358_; uint64_t v_hash_boxed_5359_; lean_object* v_res_5360_; 
v_a_276186__boxed_5355_ = lean_unbox(v_a_5339_);
v_text_boxed_5356_ = lean_unbox(v_text_5342_);
v_exe_boxed_5357_ = lean_unbox(v_exe_5343_);
v___y_276187__boxed_5358_ = lean_unbox(v___y_5344_);
v_hash_boxed_5359_ = lean_unbox_uint64(v_hash_5346_);
lean_dec_ref(v_hash_5346_);
v_res_5360_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v_a_276186__boxed_5355_, v_file_5340_, v_ext_5341_, v_text_boxed_5356_, v_exe_boxed_5357_, v___y_276187__boxed_5358_, v_val_5345_, v_hash_boxed_5359_, v_____r_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_, v___y_5352_, v___y_5353_);
lean_dec_ref(v___y_5352_);
lean_dec(v___y_5351_);
lean_dec(v___y_5350_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object* v_file_5361_, lean_object* v_build_5362_, uint8_t v_text_5363_, lean_object* v_ext_5364_, uint8_t v_restore_5365_, uint8_t v_exe_5366_, uint8_t v_platformIndependent_5367_, lean_object* v_a_5368_, lean_object* v_a_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_, lean_object* v_a_5372_, lean_object* v_a_5373_){
_start:
{
lean_object* v_log_5375_; uint8_t v_action_5376_; uint8_t v_wantsRebuild_5377_; lean_object* v_trace_5378_; lean_object* v_buildTime_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5632_; 
v_log_5375_ = lean_ctor_get(v_a_5373_, 0);
v_action_5376_ = lean_ctor_get_uint8(v_a_5373_, sizeof(void*)*3);
v_wantsRebuild_5377_ = lean_ctor_get_uint8(v_a_5373_, sizeof(void*)*3 + 1);
v_trace_5378_ = lean_ctor_get(v_a_5373_, 1);
v_buildTime_5379_ = lean_ctor_get(v_a_5373_, 2);
v_isSharedCheck_5632_ = !lean_is_exclusive(v_a_5373_);
if (v_isSharedCheck_5632_ == 0)
{
v___x_5381_ = v_a_5373_;
v_isShared_5382_ = v_isSharedCheck_5632_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_buildTime_5379_);
lean_inc(v_trace_5378_);
lean_inc(v_log_5375_);
lean_dec(v_a_5373_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5632_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v_art_5386_; lean_object* v___y_5387_; lean_object* v___y_5403_; lean_object* v_log_5404_; uint8_t v_action_5405_; uint8_t v_wantsRebuild_5406_; lean_object* v_buildTime_5407_; lean_object* v___x_5413_; 
v___x_5383_ = lean_obj_once(&l_Lake_buildFileUnlessUpToDate_x27___closed__0, &l_Lake_buildFileUnlessUpToDate_x27___closed__0_once, _init_l_Lake_buildFileUnlessUpToDate_x27___closed__0);
lean_inc_ref(v_file_5361_);
v___x_5384_ = lean_string_append(v_file_5361_, v___x_5383_);
lean_inc_ref(v___x_5384_);
v___x_5413_ = l_Lake_readTraceFile(v___x_5384_, v_log_5375_);
if (lean_obj_tag(v___x_5413_) == 0)
{
if (lean_obj_tag(v_a_5369_) == 1)
{
lean_object* v_a_5414_; lean_object* v_a_5415_; lean_object* v_val_5416_; uint64_t v_hash_5417_; lean_object* v_mtime_5418_; lean_object* v___y_5420_; uint8_t v___y_5421_; lean_object* v___y_5422_; lean_object* v___y_5423_; lean_object* v___y_5424_; lean_object* v___y_5425_; uint8_t v___y_5426_; lean_object* v___y_5427_; lean_object* v_wsIdx_5431_; lean_object* v_config_5432_; lean_object* v_a_5434_; lean_object* v_a_5435_; lean_object* v___y_5464_; lean_object* v_enableArtifactCache_x3f_5467_; lean_object* v_restoreAllArtifacts_x3f_5468_; uint8_t v___y_5470_; lean_object* v_a_5471_; uint8_t v___y_5488_; uint8_t v_a_5489_; lean_object* v_a_5490_; lean_object* v_a_5493_; lean_object* v___y_5525_; uint8_t v___y_5526_; uint8_t v___y_5565_; uint8_t v_a_5566_; lean_object* v_a_5567_; uint8_t v_a_5569_; lean_object* v_a_5570_; lean_object* v___x_5582_; 
v_a_5414_ = lean_ctor_get(v___x_5413_, 0);
lean_inc(v_a_5414_);
v_a_5415_ = lean_ctor_get(v___x_5413_, 1);
lean_inc(v_a_5415_);
lean_dec_ref(v___x_5413_);
v_val_5416_ = lean_ctor_get(v_a_5369_, 0);
v_hash_5417_ = lean_ctor_get_uint64(v_trace_5378_, sizeof(void*)*3);
v_mtime_5418_ = lean_ctor_get(v_trace_5378_, 2);
v_wsIdx_5431_ = lean_ctor_get(v_val_5416_, 0);
v_config_5432_ = lean_ctor_get(v_val_5416_, 6);
v_enableArtifactCache_x3f_5467_ = lean_ctor_get(v_config_5432_, 24);
v_restoreAllArtifacts_x3f_5468_ = lean_ctor_get(v_config_5432_, 25);
lean_inc_ref(v_trace_5378_);
v___x_5582_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5582_, 0, v_a_5415_);
lean_ctor_set(v___x_5582_, 1, v_trace_5378_);
lean_ctor_set(v___x_5582_, 2, v_buildTime_5379_);
lean_ctor_set_uint8(v___x_5582_, sizeof(void*)*3, v_action_5376_);
lean_ctor_set_uint8(v___x_5582_, sizeof(void*)*3 + 1, v_wantsRebuild_5377_);
if (lean_obj_tag(v_enableArtifactCache_x3f_5467_) == 0)
{
lean_object* v_toContext_5583_; lean_object* v_lakeEnv_5584_; lean_object* v_enableArtifactCache_x3f_5585_; 
v_toContext_5583_ = lean_ctor_get(v_a_5372_, 1);
v_lakeEnv_5584_ = lean_ctor_get(v_toContext_5583_, 0);
v_enableArtifactCache_x3f_5585_ = lean_ctor_get(v_lakeEnv_5584_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5585_) == 0)
{
lean_object* v_packages_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v_config_5589_; lean_object* v_enableArtifactCache_x3f_5590_; 
v_packages_5586_ = lean_ctor_get(v_toContext_5583_, 4);
v___x_5587_ = lean_unsigned_to_nat(0u);
v___x_5588_ = lean_array_fget_borrowed(v_packages_5586_, v___x_5587_);
v_config_5589_ = lean_ctor_get(v___x_5588_, 6);
v_enableArtifactCache_x3f_5590_ = lean_ctor_get(v_config_5589_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5590_) == 0)
{
v_a_5493_ = v___x_5582_;
goto v___jp_5492_;
}
else
{
lean_object* v_val_5591_; uint8_t v___x_5592_; 
v_val_5591_ = lean_ctor_get(v_enableArtifactCache_x3f_5590_, 0);
v___x_5592_ = lean_unbox(v_val_5591_);
v_a_5569_ = v___x_5592_;
v_a_5570_ = v___x_5582_;
goto v___jp_5568_;
}
}
else
{
lean_object* v_val_5593_; uint8_t v___x_5594_; 
v_val_5593_ = lean_ctor_get(v_enableArtifactCache_x3f_5585_, 0);
v___x_5594_ = lean_unbox(v_val_5593_);
v_a_5569_ = v___x_5594_;
v_a_5570_ = v___x_5582_;
goto v___jp_5568_;
}
}
else
{
lean_object* v_val_5595_; uint8_t v___x_5596_; 
v_val_5595_ = lean_ctor_get(v_enableArtifactCache_x3f_5467_, 0);
v___x_5596_ = lean_unbox(v_val_5595_);
v_a_5569_ = v___x_5596_;
v_a_5570_ = v___x_5582_;
goto v___jp_5568_;
}
v___jp_5419_:
{
lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; 
v___x_5428_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5428_, 0, v___y_5427_);
v___x_5429_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_hash_5417_, v___x_5428_, v___y_5424_, v_platformIndependent_5367_);
v___x_5430_ = lean_st_ref_set(v___y_5423_, v___x_5429_);
v___y_5403_ = v___y_5420_;
v_log_5404_ = v___y_5425_;
v_action_5405_ = v___y_5421_;
v_wantsRebuild_5406_ = v___y_5426_;
v_buildTime_5407_ = v___y_5422_;
goto v___jp_5402_;
}
v___jp_5433_:
{
lean_object* v___x_5436_; uint8_t v___x_5437_; 
v___x_5436_ = lean_unsigned_to_nat(0u);
v___x_5437_ = lean_nat_dec_eq(v_wsIdx_5431_, v___x_5436_);
if (v___x_5437_ == 0)
{
lean_object* v_log_5438_; uint8_t v_action_5439_; uint8_t v_wantsRebuild_5440_; lean_object* v_buildTime_5441_; 
v_log_5438_ = lean_ctor_get(v_a_5435_, 0);
lean_inc_ref(v_log_5438_);
v_action_5439_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3);
v_wantsRebuild_5440_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3 + 1);
v_buildTime_5441_ = lean_ctor_get(v_a_5435_, 2);
lean_inc(v_buildTime_5441_);
lean_dec_ref(v_a_5435_);
v___y_5403_ = v_a_5434_;
v_log_5404_ = v_log_5438_;
v_action_5405_ = v_action_5439_;
v_wantsRebuild_5406_ = v_wantsRebuild_5440_;
v_buildTime_5407_ = v_buildTime_5441_;
goto v___jp_5402_;
}
else
{
lean_object* v_outputsRef_x3f_5442_; 
v_outputsRef_x3f_5442_ = lean_ctor_get(v_a_5372_, 4);
if (lean_obj_tag(v_outputsRef_x3f_5442_) == 1)
{
lean_object* v_log_5443_; uint8_t v_action_5444_; uint8_t v_wantsRebuild_5445_; lean_object* v_buildTime_5446_; lean_object* v_val_5447_; lean_object* v___x_5448_; lean_object* v_descr_5449_; uint64_t v_hash_5450_; lean_object* v_ext_5451_; lean_object* v___x_5452_; uint8_t v___x_5453_; 
v_log_5443_ = lean_ctor_get(v_a_5435_, 0);
lean_inc_ref(v_log_5443_);
v_action_5444_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3);
v_wantsRebuild_5445_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3 + 1);
v_buildTime_5446_ = lean_ctor_get(v_a_5435_, 2);
lean_inc(v_buildTime_5446_);
lean_dec_ref(v_a_5435_);
v_val_5447_ = lean_ctor_get(v_outputsRef_x3f_5442_, 0);
v___x_5448_ = lean_st_ref_take(v_val_5447_);
v_descr_5449_ = lean_ctor_get(v_a_5434_, 0);
v_hash_5450_ = lean_ctor_get_uint64(v_descr_5449_, sizeof(void*)*1);
v_ext_5451_ = lean_ctor_get(v_descr_5449_, 0);
v___x_5452_ = lean_string_utf8_byte_size(v_ext_5451_);
v___x_5453_ = lean_nat_dec_eq(v___x_5452_, v___x_5436_);
if (v___x_5453_ == 0)
{
lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; 
v___x_5454_ = l_Lake_lowerHexUInt64(v_hash_5450_);
v___x_5455_ = lean_obj_once(&l_Lake_instToOutputJsonArtifact___lam__0___closed__0, &l_Lake_instToOutputJsonArtifact___lam__0___closed__0_once, _init_l_Lake_instToOutputJsonArtifact___lam__0___closed__0);
v___x_5456_ = lean_string_append(v___x_5454_, v___x_5455_);
v___x_5457_ = lean_string_append(v___x_5456_, v_ext_5451_);
v___y_5420_ = v_a_5434_;
v___y_5421_ = v_action_5444_;
v___y_5422_ = v_buildTime_5446_;
v___y_5423_ = v_val_5447_;
v___y_5424_ = v___x_5448_;
v___y_5425_ = v_log_5443_;
v___y_5426_ = v_wantsRebuild_5445_;
v___y_5427_ = v___x_5457_;
goto v___jp_5419_;
}
else
{
lean_object* v___x_5458_; 
v___x_5458_ = l_Lake_lowerHexUInt64(v_hash_5450_);
v___y_5420_ = v_a_5434_;
v___y_5421_ = v_action_5444_;
v___y_5422_ = v_buildTime_5446_;
v___y_5423_ = v_val_5447_;
v___y_5424_ = v___x_5448_;
v___y_5425_ = v_log_5443_;
v___y_5426_ = v_wantsRebuild_5445_;
v___y_5427_ = v___x_5458_;
goto v___jp_5419_;
}
}
else
{
lean_object* v_log_5459_; uint8_t v_action_5460_; uint8_t v_wantsRebuild_5461_; lean_object* v_buildTime_5462_; 
v_log_5459_ = lean_ctor_get(v_a_5435_, 0);
lean_inc_ref(v_log_5459_);
v_action_5460_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3);
v_wantsRebuild_5461_ = lean_ctor_get_uint8(v_a_5435_, sizeof(void*)*3 + 1);
v_buildTime_5462_ = lean_ctor_get(v_a_5435_, 2);
lean_inc(v_buildTime_5462_);
lean_dec_ref(v_a_5435_);
v___y_5403_ = v_a_5434_;
v_log_5404_ = v_log_5459_;
v_action_5405_ = v_action_5460_;
v_wantsRebuild_5406_ = v_wantsRebuild_5461_;
v_buildTime_5407_ = v_buildTime_5462_;
goto v___jp_5402_;
}
}
}
v___jp_5463_:
{
if (lean_obj_tag(v___y_5464_) == 0)
{
lean_object* v_a_5465_; lean_object* v_a_5466_; 
v_a_5465_ = lean_ctor_get(v___y_5464_, 0);
lean_inc(v_a_5465_);
v_a_5466_ = lean_ctor_get(v___y_5464_, 1);
lean_inc(v_a_5466_);
lean_dec_ref(v___y_5464_);
v_a_5434_ = v_a_5465_;
v_a_5435_ = v_a_5466_;
goto v___jp_5433_;
}
else
{
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
return v___y_5464_;
}
}
v___jp_5469_:
{
lean_object* v___x_5472_; 
lean_inc_ref(v_a_5368_);
lean_inc_ref(v___x_5384_);
lean_inc_ref(v_file_5361_);
lean_inc(v_val_5416_);
v___x_5472_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5366_, v_hash_5417_, v_val_5416_, v_file_5361_, v___x_5384_, v_a_5414_, v___y_5470_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5471_);
if (lean_obj_tag(v___x_5472_) == 0)
{
lean_object* v_a_5473_; 
v_a_5473_ = lean_ctor_get(v___x_5472_, 0);
lean_inc(v_a_5473_);
if (lean_obj_tag(v_a_5473_) == 1)
{
lean_object* v_a_5474_; lean_object* v_val_5475_; 
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5474_ = lean_ctor_get(v___x_5472_, 1);
lean_inc(v_a_5474_);
lean_dec_ref(v___x_5472_);
v_val_5475_ = lean_ctor_get(v_a_5473_, 0);
lean_inc(v_val_5475_);
lean_dec_ref(v_a_5473_);
v_a_5434_ = v_val_5475_;
v_a_5435_ = v_a_5474_;
goto v___jp_5433_;
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5477_; 
lean_dec(v_a_5473_);
v_a_5476_ = lean_ctor_get(v___x_5472_, 1);
lean_inc(v_a_5476_);
lean_dec_ref(v___x_5472_);
lean_inc_ref(v___x_5384_);
v___x_5477_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5361_, v_build_5362_, v_text_5363_, v_ext_5364_, v_trace_5378_, v___x_5384_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5476_);
lean_dec_ref(v_trace_5378_);
v___y_5464_ = v___x_5477_;
goto v___jp_5463_;
}
}
else
{
lean_object* v_a_5478_; lean_object* v_a_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5486_; 
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5478_ = lean_ctor_get(v___x_5472_, 0);
v_a_5479_ = lean_ctor_get(v___x_5472_, 1);
v_isSharedCheck_5486_ = !lean_is_exclusive(v___x_5472_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5481_ = v___x_5472_;
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_a_5479_);
lean_inc(v_a_5478_);
lean_dec(v___x_5472_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v___x_5484_; 
if (v_isShared_5482_ == 0)
{
v___x_5484_ = v___x_5481_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_a_5478_);
lean_ctor_set(v_reuseFailAlloc_5485_, 1, v_a_5479_);
v___x_5484_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
return v___x_5484_;
}
}
}
}
v___jp_5487_:
{
if (v_a_5489_ == 0)
{
lean_object* v___x_5491_; 
lean_dec(v_a_5414_);
lean_inc_ref(v___x_5384_);
v___x_5491_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5361_, v_build_5362_, v_text_5363_, v_ext_5364_, v_trace_5378_, v___x_5384_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5490_);
lean_dec_ref(v_trace_5378_);
v___y_5464_ = v___x_5491_;
goto v___jp_5463_;
}
else
{
v___y_5470_ = v___y_5488_;
v_a_5471_ = v_a_5490_;
goto v___jp_5469_;
}
}
v___jp_5492_:
{
lean_object* v___x_5494_; 
lean_inc(v_a_5414_);
v___x_5494_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5368_, v_file_5361_, v_trace_5378_, v_a_5414_, v_mtime_5418_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5493_);
if (lean_obj_tag(v___x_5494_) == 0)
{
lean_object* v_a_5495_; lean_object* v_a_5496_; uint8_t v___x_5497_; uint8_t v___x_5498_; uint8_t v___x_5499_; 
v_a_5495_ = lean_ctor_get(v___x_5494_, 0);
lean_inc(v_a_5495_);
v_a_5496_ = lean_ctor_get(v___x_5494_, 1);
lean_inc(v_a_5496_);
lean_dec_ref(v___x_5494_);
v___x_5497_ = 0;
v___x_5498_ = lean_unbox(v_a_5495_);
lean_dec(v_a_5495_);
v___x_5499_ = l_Lake_instDecidableEqOutputStatus(v___x_5498_, v___x_5497_);
if (v___x_5499_ == 0)
{
lean_object* v___x_5500_; 
lean_dec(v_a_5414_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_build_5362_);
v___x_5500_ = l_Lake_computeArtifact___redArg(v_file_5361_, v_ext_5364_, v_text_5363_, v_a_5372_, v_a_5496_);
v___y_5464_ = v___x_5500_;
goto v___jp_5463_;
}
else
{
if (lean_obj_tag(v_enableArtifactCache_x3f_5467_) == 0)
{
lean_object* v_toContext_5501_; lean_object* v_lakeEnv_5502_; lean_object* v_enableArtifactCache_x3f_5503_; 
v_toContext_5501_ = lean_ctor_get(v_a_5372_, 1);
v_lakeEnv_5502_ = lean_ctor_get(v_toContext_5501_, 0);
v_enableArtifactCache_x3f_5503_ = lean_ctor_get(v_lakeEnv_5502_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5503_) == 0)
{
lean_object* v_packages_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v_config_5507_; lean_object* v_enableArtifactCache_x3f_5508_; 
v_packages_5504_ = lean_ctor_get(v_toContext_5501_, 4);
v___x_5505_ = lean_unsigned_to_nat(0u);
v___x_5506_ = lean_array_fget_borrowed(v_packages_5504_, v___x_5505_);
v_config_5507_ = lean_ctor_get(v___x_5506_, 6);
v_enableArtifactCache_x3f_5508_ = lean_ctor_get(v_config_5507_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5508_) == 0)
{
v___y_5470_ = v___x_5499_;
v_a_5471_ = v_a_5496_;
goto v___jp_5469_;
}
else
{
lean_object* v_val_5509_; uint8_t v___x_5510_; 
v_val_5509_ = lean_ctor_get(v_enableArtifactCache_x3f_5508_, 0);
v___x_5510_ = lean_unbox(v_val_5509_);
v___y_5488_ = v___x_5499_;
v_a_5489_ = v___x_5510_;
v_a_5490_ = v_a_5496_;
goto v___jp_5487_;
}
}
else
{
lean_object* v_val_5511_; uint8_t v___x_5512_; 
v_val_5511_ = lean_ctor_get(v_enableArtifactCache_x3f_5503_, 0);
v___x_5512_ = lean_unbox(v_val_5511_);
v___y_5488_ = v___x_5499_;
v_a_5489_ = v___x_5512_;
v_a_5490_ = v_a_5496_;
goto v___jp_5487_;
}
}
else
{
lean_object* v_val_5513_; uint8_t v___x_5514_; 
v_val_5513_ = lean_ctor_get(v_enableArtifactCache_x3f_5467_, 0);
v___x_5514_ = lean_unbox(v_val_5513_);
v___y_5488_ = v___x_5499_;
v_a_5489_ = v___x_5514_;
v_a_5490_ = v_a_5496_;
goto v___jp_5487_;
}
}
}
else
{
lean_object* v_a_5515_; lean_object* v_a_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5523_; 
lean_dec(v_a_5414_);
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5515_ = lean_ctor_get(v___x_5494_, 0);
v_a_5516_ = lean_ctor_get(v___x_5494_, 1);
v_isSharedCheck_5523_ = !lean_is_exclusive(v___x_5494_);
if (v_isSharedCheck_5523_ == 0)
{
v___x_5518_ = v___x_5494_;
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_a_5516_);
lean_inc(v_a_5515_);
lean_dec(v___x_5494_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5521_; 
if (v_isShared_5519_ == 0)
{
v___x_5521_ = v___x_5518_;
goto v_reusejp_5520_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_a_5515_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v_a_5516_);
v___x_5521_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5520_;
}
v_reusejp_5520_:
{
return v___x_5521_;
}
}
}
}
v___jp_5524_:
{
lean_object* v___x_5527_; 
lean_inc_ref(v_a_5368_);
lean_inc(v_a_5414_);
lean_inc_ref(v___x_5384_);
lean_inc_ref(v_file_5361_);
lean_inc(v_val_5416_);
v___x_5527_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5366_, v_hash_5417_, v_val_5416_, v_file_5361_, v___x_5384_, v_a_5414_, v___y_5526_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v___y_5525_);
if (lean_obj_tag(v___x_5527_) == 0)
{
lean_object* v_a_5528_; 
v_a_5528_ = lean_ctor_get(v___x_5527_, 0);
lean_inc(v_a_5528_);
if (lean_obj_tag(v_a_5528_) == 1)
{
lean_object* v_a_5529_; lean_object* v_val_5530_; 
lean_dec(v_a_5414_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5529_ = lean_ctor_get(v___x_5527_, 1);
lean_inc(v_a_5529_);
lean_dec_ref(v___x_5527_);
v_val_5530_ = lean_ctor_get(v_a_5528_, 0);
lean_inc(v_val_5530_);
lean_dec_ref(v_a_5528_);
v_a_5434_ = v_val_5530_;
v_a_5435_ = v_a_5529_;
goto v___jp_5433_;
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5532_; 
lean_dec(v_a_5528_);
v_a_5531_ = lean_ctor_get(v___x_5527_, 1);
lean_inc(v_a_5531_);
lean_dec_ref(v___x_5527_);
v___x_5532_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5368_, v_file_5361_, v_trace_5378_, v_a_5414_, v_mtime_5418_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5531_);
if (lean_obj_tag(v___x_5532_) == 0)
{
lean_object* v_a_5533_; lean_object* v_a_5534_; uint8_t v___x_5535_; uint8_t v___x_5536_; uint8_t v___x_5537_; 
v_a_5533_ = lean_ctor_get(v___x_5532_, 0);
lean_inc(v_a_5533_);
v_a_5534_ = lean_ctor_get(v___x_5532_, 1);
lean_inc(v_a_5534_);
lean_dec_ref(v___x_5532_);
v___x_5535_ = 0;
v___x_5536_ = lean_unbox(v_a_5533_);
v___x_5537_ = l_Lake_instDecidableEqOutputStatus(v___x_5536_, v___x_5535_);
if (v___x_5537_ == 0)
{
lean_object* v___x_5538_; uint8_t v___x_5539_; lean_object* v___x_5540_; 
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_build_5362_);
v___x_5538_ = lean_box(0);
v___x_5539_ = lean_unbox(v_a_5533_);
lean_dec(v_a_5533_);
lean_inc(v_val_5416_);
v___x_5540_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5539_, v_file_5361_, v_ext_5364_, v_text_5363_, v_exe_5366_, v___y_5526_, v_val_5416_, v_hash_5417_, v___x_5538_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5534_);
lean_dec_ref(v_a_5368_);
v___y_5464_ = v___x_5540_;
goto v___jp_5463_;
}
else
{
lean_object* v___x_5541_; 
lean_inc_ref(v_a_5368_);
lean_inc_ref(v___x_5384_);
lean_inc_ref(v_ext_5364_);
lean_inc_ref(v_file_5361_);
v___x_5541_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5361_, v_build_5362_, v_text_5363_, v_ext_5364_, v_trace_5378_, v___x_5384_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5534_);
lean_dec_ref(v_trace_5378_);
if (lean_obj_tag(v___x_5541_) == 0)
{
lean_object* v_a_5542_; lean_object* v___x_5543_; uint8_t v___x_5544_; lean_object* v___x_5545_; 
v_a_5542_ = lean_ctor_get(v___x_5541_, 1);
lean_inc(v_a_5542_);
lean_dec_ref(v___x_5541_);
v___x_5543_ = lean_box(0);
v___x_5544_ = lean_unbox(v_a_5533_);
lean_dec(v_a_5533_);
lean_inc(v_val_5416_);
v___x_5545_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5544_, v_file_5361_, v_ext_5364_, v_text_5363_, v_exe_5366_, v___y_5526_, v_val_5416_, v_hash_5417_, v___x_5543_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5542_);
lean_dec_ref(v_a_5368_);
v___y_5464_ = v___x_5545_;
goto v___jp_5463_;
}
else
{
lean_dec(v_a_5533_);
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_file_5361_);
return v___x_5541_;
}
}
}
else
{
lean_object* v_a_5546_; lean_object* v_a_5547_; lean_object* v___x_5549_; uint8_t v_isShared_5550_; uint8_t v_isSharedCheck_5554_; 
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5546_ = lean_ctor_get(v___x_5532_, 0);
v_a_5547_ = lean_ctor_get(v___x_5532_, 1);
v_isSharedCheck_5554_ = !lean_is_exclusive(v___x_5532_);
if (v_isSharedCheck_5554_ == 0)
{
v___x_5549_ = v___x_5532_;
v_isShared_5550_ = v_isSharedCheck_5554_;
goto v_resetjp_5548_;
}
else
{
lean_inc(v_a_5547_);
lean_inc(v_a_5546_);
lean_dec(v___x_5532_);
v___x_5549_ = lean_box(0);
v_isShared_5550_ = v_isSharedCheck_5554_;
goto v_resetjp_5548_;
}
v_resetjp_5548_:
{
lean_object* v___x_5552_; 
if (v_isShared_5550_ == 0)
{
v___x_5552_ = v___x_5549_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v_a_5546_);
lean_ctor_set(v_reuseFailAlloc_5553_, 1, v_a_5547_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
return v___x_5552_;
}
}
}
}
}
else
{
lean_object* v_a_5555_; lean_object* v_a_5556_; lean_object* v___x_5558_; uint8_t v_isShared_5559_; uint8_t v_isSharedCheck_5563_; 
lean_dec(v_a_5414_);
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5555_ = lean_ctor_get(v___x_5527_, 0);
v_a_5556_ = lean_ctor_get(v___x_5527_, 1);
v_isSharedCheck_5563_ = !lean_is_exclusive(v___x_5527_);
if (v_isSharedCheck_5563_ == 0)
{
v___x_5558_ = v___x_5527_;
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
else
{
lean_inc(v_a_5556_);
lean_inc(v_a_5555_);
lean_dec(v___x_5527_);
v___x_5558_ = lean_box(0);
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
v_resetjp_5557_:
{
lean_object* v___x_5561_; 
if (v_isShared_5559_ == 0)
{
v___x_5561_ = v___x_5558_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5562_; 
v_reuseFailAlloc_5562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5562_, 0, v_a_5555_);
lean_ctor_set(v_reuseFailAlloc_5562_, 1, v_a_5556_);
v___x_5561_ = v_reuseFailAlloc_5562_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
return v___x_5561_;
}
}
}
}
v___jp_5564_:
{
if (v_restore_5365_ == 0)
{
v___y_5525_ = v_a_5567_;
v___y_5526_ = v_a_5566_;
goto v___jp_5524_;
}
else
{
v___y_5525_ = v_a_5567_;
v___y_5526_ = v___y_5565_;
goto v___jp_5524_;
}
}
v___jp_5568_:
{
if (v_a_5569_ == 0)
{
v_a_5493_ = v_a_5570_;
goto v___jp_5492_;
}
else
{
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5468_) == 0)
{
lean_object* v_toContext_5571_; lean_object* v_packages_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v_config_5575_; lean_object* v_restoreAllArtifacts_x3f_5576_; 
v_toContext_5571_ = lean_ctor_get(v_a_5372_, 1);
v_packages_5572_ = lean_ctor_get(v_toContext_5571_, 4);
v___x_5573_ = lean_unsigned_to_nat(0u);
v___x_5574_ = lean_array_fget_borrowed(v_packages_5572_, v___x_5573_);
v_config_5575_ = lean_ctor_get(v___x_5574_, 6);
v_restoreAllArtifacts_x3f_5576_ = lean_ctor_get(v_config_5575_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5576_) == 0)
{
uint8_t v___x_5577_; 
v___x_5577_ = 0;
v___y_5565_ = v_a_5569_;
v_a_5566_ = v___x_5577_;
v_a_5567_ = v_a_5570_;
goto v___jp_5564_;
}
else
{
lean_object* v_val_5578_; uint8_t v___x_5579_; 
v_val_5578_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5576_, 0);
v___x_5579_ = lean_unbox(v_val_5578_);
v___y_5565_ = v_a_5569_;
v_a_5566_ = v___x_5579_;
v_a_5567_ = v_a_5570_;
goto v___jp_5564_;
}
}
else
{
lean_object* v_val_5580_; uint8_t v___x_5581_; 
v_val_5580_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5468_, 0);
v___x_5581_ = lean_unbox(v_val_5580_);
v___y_5565_ = v_a_5569_;
v_a_5566_ = v___x_5581_;
v_a_5567_ = v_a_5570_;
goto v___jp_5564_;
}
}
}
}
else
{
lean_object* v_a_5597_; lean_object* v_a_5598_; lean_object* v_mtime_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; 
lean_del_object(v___x_5381_);
v_a_5597_ = lean_ctor_get(v___x_5413_, 0);
lean_inc(v_a_5597_);
v_a_5598_ = lean_ctor_get(v___x_5413_, 1);
lean_inc(v_a_5598_);
lean_dec_ref(v___x_5413_);
v_mtime_5599_ = lean_ctor_get(v_trace_5378_, 2);
lean_inc_ref(v_trace_5378_);
v___x_5600_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5600_, 0, v_a_5598_);
lean_ctor_set(v___x_5600_, 1, v_trace_5378_);
lean_ctor_set(v___x_5600_, 2, v_buildTime_5379_);
lean_ctor_set_uint8(v___x_5600_, sizeof(void*)*3, v_action_5376_);
lean_ctor_set_uint8(v___x_5600_, sizeof(void*)*3 + 1, v_wantsRebuild_5377_);
v___x_5601_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5368_, v_file_5361_, v_trace_5378_, v_a_5597_, v_mtime_5599_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v___x_5600_);
if (lean_obj_tag(v___x_5601_) == 0)
{
lean_object* v_a_5602_; lean_object* v_a_5603_; uint8_t v___x_5604_; uint8_t v___x_5605_; uint8_t v___x_5606_; 
v_a_5602_ = lean_ctor_get(v___x_5601_, 0);
lean_inc(v_a_5602_);
v_a_5603_ = lean_ctor_get(v___x_5601_, 1);
lean_inc(v_a_5603_);
lean_dec_ref(v___x_5601_);
v___x_5604_ = 0;
v___x_5605_ = lean_unbox(v_a_5602_);
lean_dec(v_a_5602_);
v___x_5606_ = l_Lake_instDecidableEqOutputStatus(v___x_5605_, v___x_5604_);
if (v___x_5606_ == 0)
{
lean_object* v___x_5607_; 
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_build_5362_);
v___x_5607_ = l_Lake_computeArtifact___redArg(v_file_5361_, v_ext_5364_, v_text_5363_, v_a_5372_, v_a_5603_);
if (lean_obj_tag(v___x_5607_) == 0)
{
lean_object* v_a_5608_; lean_object* v_a_5609_; 
v_a_5608_ = lean_ctor_get(v___x_5607_, 0);
lean_inc(v_a_5608_);
v_a_5609_ = lean_ctor_get(v___x_5607_, 1);
lean_inc(v_a_5609_);
lean_dec_ref(v___x_5607_);
v_art_5386_ = v_a_5608_;
v___y_5387_ = v_a_5609_;
goto v___jp_5385_;
}
else
{
lean_dec_ref(v___x_5384_);
return v___x_5607_;
}
}
else
{
lean_object* v___x_5610_; 
lean_inc_ref(v___x_5384_);
v___x_5610_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5361_, v_build_5362_, v_text_5363_, v_ext_5364_, v_trace_5378_, v___x_5384_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5603_);
lean_dec_ref(v_trace_5378_);
if (lean_obj_tag(v___x_5610_) == 0)
{
lean_object* v_a_5611_; lean_object* v_a_5612_; 
v_a_5611_ = lean_ctor_get(v___x_5610_, 0);
lean_inc(v_a_5611_);
v_a_5612_ = lean_ctor_get(v___x_5610_, 1);
lean_inc(v_a_5612_);
lean_dec_ref(v___x_5610_);
v_art_5386_ = v_a_5611_;
v___y_5387_ = v_a_5612_;
goto v___jp_5385_;
}
else
{
lean_dec_ref(v___x_5384_);
return v___x_5610_;
}
}
}
else
{
lean_object* v_a_5613_; lean_object* v_a_5614_; lean_object* v___x_5616_; uint8_t v_isShared_5617_; uint8_t v_isSharedCheck_5621_; 
lean_dec_ref(v___x_5384_);
lean_dec_ref(v_trace_5378_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5613_ = lean_ctor_get(v___x_5601_, 0);
v_a_5614_ = lean_ctor_get(v___x_5601_, 1);
v_isSharedCheck_5621_ = !lean_is_exclusive(v___x_5601_);
if (v_isSharedCheck_5621_ == 0)
{
v___x_5616_ = v___x_5601_;
v_isShared_5617_ = v_isSharedCheck_5621_;
goto v_resetjp_5615_;
}
else
{
lean_inc(v_a_5614_);
lean_inc(v_a_5613_);
lean_dec(v___x_5601_);
v___x_5616_ = lean_box(0);
v_isShared_5617_ = v_isSharedCheck_5621_;
goto v_resetjp_5615_;
}
v_resetjp_5615_:
{
lean_object* v___x_5619_; 
if (v_isShared_5617_ == 0)
{
v___x_5619_ = v___x_5616_;
goto v_reusejp_5618_;
}
else
{
lean_object* v_reuseFailAlloc_5620_; 
v_reuseFailAlloc_5620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5620_, 0, v_a_5613_);
lean_ctor_set(v_reuseFailAlloc_5620_, 1, v_a_5614_);
v___x_5619_ = v_reuseFailAlloc_5620_;
goto v_reusejp_5618_;
}
v_reusejp_5618_:
{
return v___x_5619_;
}
}
}
}
}
else
{
lean_object* v_a_5622_; lean_object* v_a_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5631_; 
lean_dec_ref(v___x_5384_);
lean_del_object(v___x_5381_);
lean_dec_ref(v_a_5368_);
lean_dec_ref(v_ext_5364_);
lean_dec_ref(v_build_5362_);
lean_dec_ref(v_file_5361_);
v_a_5622_ = lean_ctor_get(v___x_5413_, 0);
v_a_5623_ = lean_ctor_get(v___x_5413_, 1);
v_isSharedCheck_5631_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5631_ == 0)
{
v___x_5625_ = v___x_5413_;
v_isShared_5626_ = v_isSharedCheck_5631_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_a_5623_);
lean_inc(v_a_5622_);
lean_dec(v___x_5413_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5631_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5627_; lean_object* v___x_5629_; 
v___x_5627_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5627_, 0, v_a_5623_);
lean_ctor_set(v___x_5627_, 1, v_trace_5378_);
lean_ctor_set(v___x_5627_, 2, v_buildTime_5379_);
lean_ctor_set_uint8(v___x_5627_, sizeof(void*)*3, v_action_5376_);
lean_ctor_set_uint8(v___x_5627_, sizeof(void*)*3 + 1, v_wantsRebuild_5377_);
if (v_isShared_5626_ == 0)
{
lean_ctor_set(v___x_5625_, 1, v___x_5627_);
v___x_5629_ = v___x_5625_;
goto v_reusejp_5628_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v_a_5622_);
lean_ctor_set(v_reuseFailAlloc_5630_, 1, v___x_5627_);
v___x_5629_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5628_;
}
v_reusejp_5628_:
{
return v___x_5629_;
}
}
}
v___jp_5385_:
{
lean_object* v_log_5388_; uint8_t v_action_5389_; uint8_t v_wantsRebuild_5390_; lean_object* v_buildTime_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5400_; 
v_log_5388_ = lean_ctor_get(v___y_5387_, 0);
v_action_5389_ = lean_ctor_get_uint8(v___y_5387_, sizeof(void*)*3);
v_wantsRebuild_5390_ = lean_ctor_get_uint8(v___y_5387_, sizeof(void*)*3 + 1);
v_buildTime_5391_ = lean_ctor_get(v___y_5387_, 2);
v_isSharedCheck_5400_ = !lean_is_exclusive(v___y_5387_);
if (v_isSharedCheck_5400_ == 0)
{
lean_object* v_unused_5401_; 
v_unused_5401_ = lean_ctor_get(v___y_5387_, 1);
lean_dec(v_unused_5401_);
v___x_5393_ = v___y_5387_;
v_isShared_5394_ = v_isSharedCheck_5400_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_buildTime_5391_);
lean_inc(v_log_5388_);
lean_dec(v___y_5387_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5400_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5395_; lean_object* v___x_5397_; 
v___x_5395_ = l_Lake_Artifact_trace(v_art_5386_);
if (v_isShared_5394_ == 0)
{
lean_ctor_set(v___x_5393_, 1, v___x_5395_);
v___x_5397_ = v___x_5393_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v_log_5388_);
lean_ctor_set(v_reuseFailAlloc_5399_, 1, v___x_5395_);
lean_ctor_set(v_reuseFailAlloc_5399_, 2, v_buildTime_5391_);
lean_ctor_set_uint8(v_reuseFailAlloc_5399_, sizeof(void*)*3, v_action_5389_);
lean_ctor_set_uint8(v_reuseFailAlloc_5399_, sizeof(void*)*3 + 1, v_wantsRebuild_5390_);
v___x_5397_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
lean_object* v___x_5398_; 
v___x_5398_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_5386_, v___x_5384_, v___x_5397_);
lean_dec_ref(v___x_5384_);
return v___x_5398_;
}
}
}
v___jp_5402_:
{
lean_object* v___x_5408_; lean_object* v___x_5410_; 
v___x_5408_ = l_Lake_Artifact_trace(v___y_5403_);
if (v_isShared_5382_ == 0)
{
lean_ctor_set(v___x_5381_, 2, v_buildTime_5407_);
lean_ctor_set(v___x_5381_, 1, v___x_5408_);
lean_ctor_set(v___x_5381_, 0, v_log_5404_);
v___x_5410_ = v___x_5381_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5412_; 
v_reuseFailAlloc_5412_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5412_, 0, v_log_5404_);
lean_ctor_set(v_reuseFailAlloc_5412_, 1, v___x_5408_);
lean_ctor_set(v_reuseFailAlloc_5412_, 2, v_buildTime_5407_);
v___x_5410_ = v_reuseFailAlloc_5412_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
lean_object* v___x_5411_; 
lean_ctor_set_uint8(v___x_5410_, sizeof(void*)*3, v_action_5405_);
lean_ctor_set_uint8(v___x_5410_, sizeof(void*)*3 + 1, v_wantsRebuild_5406_);
v___x_5411_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v___y_5403_, v___x_5384_, v___x_5410_);
lean_dec_ref(v___x_5384_);
return v___x_5411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object* v_file_5633_, lean_object* v_build_5634_, lean_object* v_text_5635_, lean_object* v_ext_5636_, lean_object* v_restore_5637_, lean_object* v_exe_5638_, lean_object* v_platformIndependent_5639_, lean_object* v_a_5640_, lean_object* v_a_5641_, lean_object* v_a_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_, lean_object* v_a_5646_){
_start:
{
uint8_t v_text_boxed_5647_; uint8_t v_restore_boxed_5648_; uint8_t v_exe_boxed_5649_; uint8_t v_platformIndependent_boxed_5650_; lean_object* v_res_5651_; 
v_text_boxed_5647_ = lean_unbox(v_text_5635_);
v_restore_boxed_5648_ = lean_unbox(v_restore_5637_);
v_exe_boxed_5649_ = lean_unbox(v_exe_5638_);
v_platformIndependent_boxed_5650_ = lean_unbox(v_platformIndependent_5639_);
v_res_5651_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5633_, v_build_5634_, v_text_boxed_5647_, v_ext_5636_, v_restore_boxed_5648_, v_exe_boxed_5649_, v_platformIndependent_boxed_5650_, v_a_5640_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_);
lean_dec_ref(v_a_5644_);
lean_dec(v_a_5643_);
lean_dec(v_a_5642_);
lean_dec(v_a_5641_);
return v_res_5651_;
}
}
static lean_object* _init_l_Lake_buildFileAfterDep___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5652_; 
v___x_5652_ = lean_mk_string_unchecked("art", 3, 3);
return v___x_5652_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object* v_extraDepTrace_5653_, lean_object* v_build_5654_, lean_object* v_file_5655_, uint8_t v_text_5656_, lean_object* v_depInfo_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_, lean_object* v___y_5660_, lean_object* v___y_5661_, lean_object* v___y_5662_, lean_object* v___y_5663_){
_start:
{
lean_object* v___x_5665_; 
lean_inc_ref(v___y_5662_);
lean_inc(v___y_5661_);
lean_inc(v___y_5660_);
lean_inc(v___y_5659_);
lean_inc_ref(v___y_5658_);
v___x_5665_ = lean_apply_7(v_extraDepTrace_5653_, v___y_5658_, v___y_5659_, v___y_5660_, v___y_5661_, v___y_5662_, v___y_5663_, lean_box(0));
if (lean_obj_tag(v___x_5665_) == 0)
{
lean_object* v_a_5666_; lean_object* v_a_5667_; lean_object* v_log_5668_; uint8_t v_action_5669_; uint8_t v_wantsRebuild_5670_; lean_object* v_trace_5671_; lean_object* v_buildTime_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5703_; 
v_a_5666_ = lean_ctor_get(v___x_5665_, 1);
lean_inc(v_a_5666_);
v_a_5667_ = lean_ctor_get(v___x_5665_, 0);
lean_inc(v_a_5667_);
lean_dec_ref(v___x_5665_);
v_log_5668_ = lean_ctor_get(v_a_5666_, 0);
v_action_5669_ = lean_ctor_get_uint8(v_a_5666_, sizeof(void*)*3);
v_wantsRebuild_5670_ = lean_ctor_get_uint8(v_a_5666_, sizeof(void*)*3 + 1);
v_trace_5671_ = lean_ctor_get(v_a_5666_, 1);
v_buildTime_5672_ = lean_ctor_get(v_a_5666_, 2);
v_isSharedCheck_5703_ = !lean_is_exclusive(v_a_5666_);
if (v_isSharedCheck_5703_ == 0)
{
v___x_5674_ = v_a_5666_;
v_isShared_5675_ = v_isSharedCheck_5703_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_buildTime_5672_);
lean_inc(v_trace_5671_);
lean_inc(v_log_5668_);
lean_dec(v_a_5666_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5703_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___x_5676_; lean_object* v___x_5678_; 
v___x_5676_ = l_Lake_BuildTrace_mix(v_trace_5671_, v_a_5667_);
if (v_isShared_5675_ == 0)
{
lean_ctor_set(v___x_5674_, 1, v___x_5676_);
v___x_5678_ = v___x_5674_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5702_; 
v_reuseFailAlloc_5702_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5702_, 0, v_log_5668_);
lean_ctor_set(v_reuseFailAlloc_5702_, 1, v___x_5676_);
lean_ctor_set(v_reuseFailAlloc_5702_, 2, v_buildTime_5672_);
lean_ctor_set_uint8(v_reuseFailAlloc_5702_, sizeof(void*)*3, v_action_5669_);
lean_ctor_set_uint8(v_reuseFailAlloc_5702_, sizeof(void*)*3 + 1, v_wantsRebuild_5670_);
v___x_5678_ = v_reuseFailAlloc_5702_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
lean_object* v___x_5679_; lean_object* v___x_5680_; uint8_t v___x_5681_; lean_object* v___x_5682_; 
v___x_5679_ = lean_apply_1(v_build_5654_, v_depInfo_5657_);
v___x_5680_ = lean_obj_once(&l_Lake_buildFileAfterDep___redArg___lam__0___closed__0, &l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_once, _init_l_Lake_buildFileAfterDep___redArg___lam__0___closed__0);
v___x_5681_ = 0;
v___x_5682_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5655_, v___x_5679_, v_text_5656_, v___x_5680_, v___x_5681_, v___x_5681_, v___x_5681_, v___y_5658_, v___y_5659_, v___y_5660_, v___y_5661_, v___y_5662_, v___x_5678_);
if (lean_obj_tag(v___x_5682_) == 0)
{
lean_object* v_a_5683_; lean_object* v_a_5684_; lean_object* v___x_5686_; uint8_t v_isShared_5687_; uint8_t v_isSharedCheck_5692_; 
v_a_5683_ = lean_ctor_get(v___x_5682_, 0);
v_a_5684_ = lean_ctor_get(v___x_5682_, 1);
v_isSharedCheck_5692_ = !lean_is_exclusive(v___x_5682_);
if (v_isSharedCheck_5692_ == 0)
{
v___x_5686_ = v___x_5682_;
v_isShared_5687_ = v_isSharedCheck_5692_;
goto v_resetjp_5685_;
}
else
{
lean_inc(v_a_5684_);
lean_inc(v_a_5683_);
lean_dec(v___x_5682_);
v___x_5686_ = lean_box(0);
v_isShared_5687_ = v_isSharedCheck_5692_;
goto v_resetjp_5685_;
}
v_resetjp_5685_:
{
lean_object* v_path_5688_; lean_object* v___x_5690_; 
v_path_5688_ = lean_ctor_get(v_a_5683_, 1);
lean_inc_ref(v_path_5688_);
lean_dec(v_a_5683_);
if (v_isShared_5687_ == 0)
{
lean_ctor_set(v___x_5686_, 0, v_path_5688_);
v___x_5690_ = v___x_5686_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5691_; 
v_reuseFailAlloc_5691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5691_, 0, v_path_5688_);
lean_ctor_set(v_reuseFailAlloc_5691_, 1, v_a_5684_);
v___x_5690_ = v_reuseFailAlloc_5691_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
return v___x_5690_;
}
}
}
else
{
lean_object* v_a_5693_; lean_object* v_a_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5701_; 
v_a_5693_ = lean_ctor_get(v___x_5682_, 0);
v_a_5694_ = lean_ctor_get(v___x_5682_, 1);
v_isSharedCheck_5701_ = !lean_is_exclusive(v___x_5682_);
if (v_isSharedCheck_5701_ == 0)
{
v___x_5696_ = v___x_5682_;
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_a_5694_);
lean_inc(v_a_5693_);
lean_dec(v___x_5682_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v___x_5699_; 
if (v_isShared_5697_ == 0)
{
v___x_5699_ = v___x_5696_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v_a_5693_);
lean_ctor_set(v_reuseFailAlloc_5700_, 1, v_a_5694_);
v___x_5699_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
return v___x_5699_;
}
}
}
}
}
}
else
{
lean_object* v_a_5704_; lean_object* v_a_5705_; lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5712_; 
lean_dec_ref(v___y_5658_);
lean_dec(v_depInfo_5657_);
lean_dec_ref(v_file_5655_);
lean_dec_ref(v_build_5654_);
v_a_5704_ = lean_ctor_get(v___x_5665_, 0);
v_a_5705_ = lean_ctor_get(v___x_5665_, 1);
v_isSharedCheck_5712_ = !lean_is_exclusive(v___x_5665_);
if (v_isSharedCheck_5712_ == 0)
{
v___x_5707_ = v___x_5665_;
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
else
{
lean_inc(v_a_5705_);
lean_inc(v_a_5704_);
lean_dec(v___x_5665_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5712_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v___x_5710_; 
if (v_isShared_5708_ == 0)
{
v___x_5710_ = v___x_5707_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_a_5704_);
lean_ctor_set(v_reuseFailAlloc_5711_, 1, v_a_5705_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object* v_extraDepTrace_5713_, lean_object* v_build_5714_, lean_object* v_file_5715_, lean_object* v_text_5716_, lean_object* v_depInfo_5717_, lean_object* v___y_5718_, lean_object* v___y_5719_, lean_object* v___y_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_){
_start:
{
uint8_t v_text_boxed_5725_; lean_object* v_res_5726_; 
v_text_boxed_5725_ = lean_unbox(v_text_5716_);
v_res_5726_ = l_Lake_buildFileAfterDep___redArg___lam__0(v_extraDepTrace_5713_, v_build_5714_, v_file_5715_, v_text_boxed_5725_, v_depInfo_5717_, v___y_5718_, v___y_5719_, v___y_5720_, v___y_5721_, v___y_5722_, v___y_5723_);
lean_dec_ref(v___y_5722_);
lean_dec(v___y_5721_);
lean_dec(v___y_5720_);
lean_dec(v___y_5719_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object* v_file_5727_, lean_object* v_dep_5728_, lean_object* v_build_5729_, lean_object* v_extraDepTrace_5730_, uint8_t v_text_5731_, lean_object* v_a_5732_, lean_object* v_a_5733_, lean_object* v_a_5734_, lean_object* v_a_5735_, lean_object* v_a_5736_, lean_object* v_a_5737_){
_start:
{
lean_object* v___x_5739_; lean_object* v___f_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; uint8_t v___x_5743_; lean_object* v___x_5744_; 
v___x_5739_ = lean_box(v_text_5731_);
v___f_5740_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5740_, 0, v_extraDepTrace_5730_);
lean_closure_set(v___f_5740_, 1, v_build_5729_);
lean_closure_set(v___f_5740_, 2, v_file_5727_);
lean_closure_set(v___f_5740_, 3, v___x_5739_);
v___x_5741_ = l_Lake_instDataKindFilePath;
v___x_5742_ = lean_unsigned_to_nat(0u);
v___x_5743_ = 0;
v___x_5744_ = l_Lake_Job_mapM___redArg(v___x_5741_, v_dep_5728_, v___f_5740_, v___x_5742_, v___x_5743_, v_a_5732_, v_a_5733_, v_a_5734_, v_a_5735_, v_a_5736_, v_a_5737_);
return v___x_5744_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object* v_file_5745_, lean_object* v_dep_5746_, lean_object* v_build_5747_, lean_object* v_extraDepTrace_5748_, lean_object* v_text_5749_, lean_object* v_a_5750_, lean_object* v_a_5751_, lean_object* v_a_5752_, lean_object* v_a_5753_, lean_object* v_a_5754_, lean_object* v_a_5755_, lean_object* v_a_5756_){
_start:
{
uint8_t v_text_boxed_5757_; lean_object* v_res_5758_; 
v_text_boxed_5757_ = lean_unbox(v_text_5749_);
v_res_5758_ = l_Lake_buildFileAfterDep___redArg(v_file_5745_, v_dep_5746_, v_build_5747_, v_extraDepTrace_5748_, v_text_boxed_5757_, v_a_5750_, v_a_5751_, v_a_5752_, v_a_5753_, v_a_5754_, v_a_5755_);
lean_dec_ref(v_a_5755_);
lean_dec_ref(v_a_5754_);
lean_dec(v_a_5753_);
lean_dec(v_a_5752_);
lean_dec(v_a_5751_);
return v_res_5758_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object* v_00_u03b1_5759_, lean_object* v_file_5760_, lean_object* v_dep_5761_, lean_object* v_build_5762_, lean_object* v_extraDepTrace_5763_, uint8_t v_text_5764_, lean_object* v_a_5765_, lean_object* v_a_5766_, lean_object* v_a_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_){
_start:
{
lean_object* v___x_5772_; lean_object* v___f_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; uint8_t v___x_5776_; lean_object* v___x_5777_; 
v___x_5772_ = lean_box(v_text_5764_);
v___f_5773_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5773_, 0, v_extraDepTrace_5763_);
lean_closure_set(v___f_5773_, 1, v_build_5762_);
lean_closure_set(v___f_5773_, 2, v_file_5760_);
lean_closure_set(v___f_5773_, 3, v___x_5772_);
v___x_5774_ = l_Lake_instDataKindFilePath;
v___x_5775_ = lean_unsigned_to_nat(0u);
v___x_5776_ = 0;
v___x_5777_ = l_Lake_Job_mapM___redArg(v___x_5774_, v_dep_5761_, v___f_5773_, v___x_5775_, v___x_5776_, v_a_5765_, v_a_5766_, v_a_5767_, v_a_5768_, v_a_5769_, v_a_5770_);
return v___x_5777_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object* v_00_u03b1_5778_, lean_object* v_file_5779_, lean_object* v_dep_5780_, lean_object* v_build_5781_, lean_object* v_extraDepTrace_5782_, lean_object* v_text_5783_, lean_object* v_a_5784_, lean_object* v_a_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_, lean_object* v_a_5788_, lean_object* v_a_5789_, lean_object* v_a_5790_){
_start:
{
uint8_t v_text_boxed_5791_; lean_object* v_res_5792_; 
v_text_boxed_5791_ = lean_unbox(v_text_5783_);
v_res_5792_ = l_Lake_buildFileAfterDep(v_00_u03b1_5778_, v_file_5779_, v_dep_5780_, v_build_5781_, v_extraDepTrace_5782_, v_text_boxed_5791_, v_a_5784_, v_a_5785_, v_a_5786_, v_a_5787_, v_a_5788_, v_a_5789_);
lean_dec_ref(v_a_5789_);
lean_dec_ref(v_a_5788_);
lean_dec(v_a_5787_);
lean_dec(v_a_5786_);
lean_dec(v_a_5785_);
return v_res_5792_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object* v_info_5793_){
_start:
{
lean_object* v___x_5795_; 
v___x_5795_ = l_Lake_computeBinFileHash(v_info_5793_);
if (lean_obj_tag(v___x_5795_) == 0)
{
lean_object* v_a_5796_; lean_object* v___x_5797_; 
v_a_5796_ = lean_ctor_get(v___x_5795_, 0);
lean_inc(v_a_5796_);
lean_dec_ref(v___x_5795_);
v___x_5797_ = lean_io_metadata(v_info_5793_);
if (lean_obj_tag(v___x_5797_) == 0)
{
lean_object* v_a_5798_; lean_object* v___x_5800_; uint8_t v_isShared_5801_; uint8_t v_isSharedCheck_5809_; 
v_a_5798_ = lean_ctor_get(v___x_5797_, 0);
v_isSharedCheck_5809_ = !lean_is_exclusive(v___x_5797_);
if (v_isSharedCheck_5809_ == 0)
{
v___x_5800_ = v___x_5797_;
v_isShared_5801_ = v_isSharedCheck_5809_;
goto v_resetjp_5799_;
}
else
{
lean_inc(v_a_5798_);
lean_dec(v___x_5797_);
v___x_5800_ = lean_box(0);
v_isShared_5801_ = v_isSharedCheck_5809_;
goto v_resetjp_5799_;
}
v_resetjp_5799_:
{
lean_object* v_modified_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; uint64_t v___x_5805_; lean_object* v___x_5807_; 
v_modified_5802_ = lean_ctor_get(v_a_5798_, 1);
lean_inc_ref(v_modified_5802_);
lean_dec(v_a_5798_);
v___x_5803_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_5804_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5804_, 0, v_info_5793_);
lean_ctor_set(v___x_5804_, 1, v___x_5803_);
lean_ctor_set(v___x_5804_, 2, v_modified_5802_);
v___x_5805_ = lean_unbox_uint64(v_a_5796_);
lean_dec(v_a_5796_);
lean_ctor_set_uint64(v___x_5804_, sizeof(void*)*3, v___x_5805_);
if (v_isShared_5801_ == 0)
{
lean_ctor_set(v___x_5800_, 0, v___x_5804_);
v___x_5807_ = v___x_5800_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v___x_5804_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
return v___x_5807_;
}
}
}
else
{
lean_object* v_a_5810_; lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5817_; 
lean_dec(v_a_5796_);
lean_dec_ref(v_info_5793_);
v_a_5810_ = lean_ctor_get(v___x_5797_, 0);
v_isSharedCheck_5817_ = !lean_is_exclusive(v___x_5797_);
if (v_isSharedCheck_5817_ == 0)
{
v___x_5812_ = v___x_5797_;
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
else
{
lean_inc(v_a_5810_);
lean_dec(v___x_5797_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
lean_object* v___x_5815_; 
if (v_isShared_5813_ == 0)
{
v___x_5815_ = v___x_5812_;
goto v_reusejp_5814_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v_a_5810_);
v___x_5815_ = v_reuseFailAlloc_5816_;
goto v_reusejp_5814_;
}
v_reusejp_5814_:
{
return v___x_5815_;
}
}
}
}
else
{
lean_object* v_a_5818_; lean_object* v___x_5820_; uint8_t v_isShared_5821_; uint8_t v_isSharedCheck_5825_; 
lean_dec_ref(v_info_5793_);
v_a_5818_ = lean_ctor_get(v___x_5795_, 0);
v_isSharedCheck_5825_ = !lean_is_exclusive(v___x_5795_);
if (v_isSharedCheck_5825_ == 0)
{
v___x_5820_ = v___x_5795_;
v_isShared_5821_ = v_isSharedCheck_5825_;
goto v_resetjp_5819_;
}
else
{
lean_inc(v_a_5818_);
lean_dec(v___x_5795_);
v___x_5820_ = lean_box(0);
v_isShared_5821_ = v_isSharedCheck_5825_;
goto v_resetjp_5819_;
}
v_resetjp_5819_:
{
lean_object* v___x_5823_; 
if (v_isShared_5821_ == 0)
{
v___x_5823_ = v___x_5820_;
goto v_reusejp_5822_;
}
else
{
lean_object* v_reuseFailAlloc_5824_; 
v_reuseFailAlloc_5824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5824_, 0, v_a_5818_);
v___x_5823_ = v_reuseFailAlloc_5824_;
goto v_reusejp_5822_;
}
v_reusejp_5822_:
{
return v___x_5823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object* v_info_5826_, lean_object* v_a_5827_){
_start:
{
lean_object* v_res_5828_; 
v_res_5828_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_info_5826_);
return v_res_5828_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object* v_path_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_){
_start:
{
lean_object* v_log_5837_; uint8_t v_action_5838_; uint8_t v_wantsRebuild_5839_; lean_object* v_trace_5840_; lean_object* v_buildTime_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5861_; 
v_log_5837_ = lean_ctor_get(v___y_5835_, 0);
v_action_5838_ = lean_ctor_get_uint8(v___y_5835_, sizeof(void*)*3);
v_wantsRebuild_5839_ = lean_ctor_get_uint8(v___y_5835_, sizeof(void*)*3 + 1);
v_trace_5840_ = lean_ctor_get(v___y_5835_, 1);
v_buildTime_5841_ = lean_ctor_get(v___y_5835_, 2);
v_isSharedCheck_5861_ = !lean_is_exclusive(v___y_5835_);
if (v_isSharedCheck_5861_ == 0)
{
v___x_5843_ = v___y_5835_;
v_isShared_5844_ = v_isSharedCheck_5861_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_buildTime_5841_);
lean_inc(v_trace_5840_);
lean_inc(v_log_5837_);
lean_dec(v___y_5835_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5861_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v___x_5845_; 
lean_inc_ref(v_path_5829_);
v___x_5845_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_path_5829_);
if (lean_obj_tag(v___x_5845_) == 0)
{
lean_object* v_a_5846_; lean_object* v___x_5848_; 
lean_dec_ref(v_trace_5840_);
v_a_5846_ = lean_ctor_get(v___x_5845_, 0);
lean_inc(v_a_5846_);
lean_dec_ref(v___x_5845_);
if (v_isShared_5844_ == 0)
{
lean_ctor_set(v___x_5843_, 1, v_a_5846_);
v___x_5848_ = v___x_5843_;
goto v_reusejp_5847_;
}
else
{
lean_object* v_reuseFailAlloc_5850_; 
v_reuseFailAlloc_5850_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5850_, 0, v_log_5837_);
lean_ctor_set(v_reuseFailAlloc_5850_, 1, v_a_5846_);
lean_ctor_set(v_reuseFailAlloc_5850_, 2, v_buildTime_5841_);
lean_ctor_set_uint8(v_reuseFailAlloc_5850_, sizeof(void*)*3, v_action_5838_);
lean_ctor_set_uint8(v_reuseFailAlloc_5850_, sizeof(void*)*3 + 1, v_wantsRebuild_5839_);
v___x_5848_ = v_reuseFailAlloc_5850_;
goto v_reusejp_5847_;
}
v_reusejp_5847_:
{
lean_object* v___x_5849_; 
v___x_5849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5849_, 0, v_path_5829_);
lean_ctor_set(v___x_5849_, 1, v___x_5848_);
return v___x_5849_;
}
}
else
{
lean_object* v_a_5851_; lean_object* v___x_5852_; uint8_t v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5858_; 
lean_dec_ref(v_path_5829_);
v_a_5851_ = lean_ctor_get(v___x_5845_, 0);
lean_inc(v_a_5851_);
lean_dec_ref(v___x_5845_);
v___x_5852_ = lean_io_error_to_string(v_a_5851_);
v___x_5853_ = 3;
v___x_5854_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5854_, 0, v___x_5852_);
lean_ctor_set_uint8(v___x_5854_, sizeof(void*)*1, v___x_5853_);
v___x_5855_ = lean_array_get_size(v_log_5837_);
v___x_5856_ = lean_array_push(v_log_5837_, v___x_5854_);
if (v_isShared_5844_ == 0)
{
lean_ctor_set(v___x_5843_, 0, v___x_5856_);
v___x_5858_ = v___x_5843_;
goto v_reusejp_5857_;
}
else
{
lean_object* v_reuseFailAlloc_5860_; 
v_reuseFailAlloc_5860_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5860_, 0, v___x_5856_);
lean_ctor_set(v_reuseFailAlloc_5860_, 1, v_trace_5840_);
lean_ctor_set(v_reuseFailAlloc_5860_, 2, v_buildTime_5841_);
lean_ctor_set_uint8(v_reuseFailAlloc_5860_, sizeof(void*)*3, v_action_5838_);
lean_ctor_set_uint8(v_reuseFailAlloc_5860_, sizeof(void*)*3 + 1, v_wantsRebuild_5839_);
v___x_5858_ = v_reuseFailAlloc_5860_;
goto v_reusejp_5857_;
}
v_reusejp_5857_:
{
lean_object* v___x_5859_; 
v___x_5859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5859_, 0, v___x_5855_);
lean_ctor_set(v___x_5859_, 1, v___x_5858_);
return v___x_5859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object* v_path_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_){
_start:
{
lean_object* v_res_5870_; 
v_res_5870_ = l_Lake_inputBinFile___redArg___lam__0(v_path_5862_, v___y_5863_, v___y_5864_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
lean_dec_ref(v___y_5867_);
lean_dec(v___y_5866_);
lean_dec(v___y_5865_);
lean_dec(v___y_5864_);
lean_dec_ref(v___y_5863_);
return v_res_5870_;
}
}
static lean_object* _init_l_Lake_inputBinFile___redArg___closed__0(void){
_start:
{
lean_object* v___x_5871_; 
v___x_5871_ = lean_mk_string_unchecked("", 0, 0);
return v___x_5871_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object* v_path_5872_, lean_object* v_a_5873_, lean_object* v_a_5874_, lean_object* v_a_5875_, lean_object* v_a_5876_, lean_object* v_a_5877_){
_start:
{
lean_object* v___f_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; 
v___f_5879_ = lean_alloc_closure((void*)(l_Lake_inputBinFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5879_, 0, v_path_5872_);
v___x_5880_ = l_Lake_instDataKindFilePath;
v___x_5881_ = lean_unsigned_to_nat(0u);
v___x_5882_ = lean_obj_once(&l_Lake_inputBinFile___redArg___closed__0, &l_Lake_inputBinFile___redArg___closed__0_once, _init_l_Lake_inputBinFile___redArg___closed__0);
v___x_5883_ = l_Lake_Job_async___redArg(v___x_5880_, v___f_5879_, v___x_5881_, v___x_5882_, v_a_5873_, v_a_5874_, v_a_5875_, v_a_5876_, v_a_5877_);
return v___x_5883_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object* v_path_5884_, lean_object* v_a_5885_, lean_object* v_a_5886_, lean_object* v_a_5887_, lean_object* v_a_5888_, lean_object* v_a_5889_, lean_object* v_a_5890_){
_start:
{
lean_object* v_res_5891_; 
v_res_5891_ = l_Lake_inputBinFile___redArg(v_path_5884_, v_a_5885_, v_a_5886_, v_a_5887_, v_a_5888_, v_a_5889_);
lean_dec_ref(v_a_5889_);
lean_dec(v_a_5888_);
lean_dec(v_a_5887_);
lean_dec(v_a_5886_);
return v_res_5891_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object* v_path_5892_, lean_object* v_a_5893_, lean_object* v_a_5894_, lean_object* v_a_5895_, lean_object* v_a_5896_, lean_object* v_a_5897_, lean_object* v_a_5898_){
_start:
{
lean_object* v___x_5900_; 
v___x_5900_ = l_Lake_inputBinFile___redArg(v_path_5892_, v_a_5893_, v_a_5894_, v_a_5895_, v_a_5896_, v_a_5897_);
return v___x_5900_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object* v_path_5901_, lean_object* v_a_5902_, lean_object* v_a_5903_, lean_object* v_a_5904_, lean_object* v_a_5905_, lean_object* v_a_5906_, lean_object* v_a_5907_, lean_object* v_a_5908_){
_start:
{
lean_object* v_res_5909_; 
v_res_5909_ = l_Lake_inputBinFile(v_path_5901_, v_a_5902_, v_a_5903_, v_a_5904_, v_a_5905_, v_a_5906_, v_a_5907_);
lean_dec_ref(v_a_5907_);
lean_dec_ref(v_a_5906_);
lean_dec(v_a_5905_);
lean_dec(v_a_5904_);
lean_dec(v_a_5903_);
return v_res_5909_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object* v_info_5910_){
_start:
{
lean_object* v___x_5912_; 
v___x_5912_ = l_Lake_computeTextFileHash(v_info_5910_);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5914_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
lean_inc(v_a_5913_);
lean_dec_ref(v___x_5912_);
v___x_5914_ = lean_io_metadata(v_info_5910_);
if (lean_obj_tag(v___x_5914_) == 0)
{
lean_object* v_a_5915_; lean_object* v___x_5917_; uint8_t v_isShared_5918_; uint8_t v_isSharedCheck_5926_; 
v_a_5915_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5926_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5926_ == 0)
{
v___x_5917_ = v___x_5914_;
v_isShared_5918_ = v_isSharedCheck_5926_;
goto v_resetjp_5916_;
}
else
{
lean_inc(v_a_5915_);
lean_dec(v___x_5914_);
v___x_5917_ = lean_box(0);
v_isShared_5918_ = v_isSharedCheck_5926_;
goto v_resetjp_5916_;
}
v_resetjp_5916_:
{
lean_object* v_modified_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; uint64_t v___x_5922_; lean_object* v___x_5924_; 
v_modified_5919_ = lean_ctor_get(v_a_5915_, 1);
lean_inc_ref(v_modified_5919_);
lean_dec(v_a_5915_);
v___x_5920_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_5921_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5921_, 0, v_info_5910_);
lean_ctor_set(v___x_5921_, 1, v___x_5920_);
lean_ctor_set(v___x_5921_, 2, v_modified_5919_);
v___x_5922_ = lean_unbox_uint64(v_a_5913_);
lean_dec(v_a_5913_);
lean_ctor_set_uint64(v___x_5921_, sizeof(void*)*3, v___x_5922_);
if (v_isShared_5918_ == 0)
{
lean_ctor_set(v___x_5917_, 0, v___x_5921_);
v___x_5924_ = v___x_5917_;
goto v_reusejp_5923_;
}
else
{
lean_object* v_reuseFailAlloc_5925_; 
v_reuseFailAlloc_5925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5925_, 0, v___x_5921_);
v___x_5924_ = v_reuseFailAlloc_5925_;
goto v_reusejp_5923_;
}
v_reusejp_5923_:
{
return v___x_5924_;
}
}
}
else
{
lean_object* v_a_5927_; lean_object* v___x_5929_; uint8_t v_isShared_5930_; uint8_t v_isSharedCheck_5934_; 
lean_dec(v_a_5913_);
lean_dec_ref(v_info_5910_);
v_a_5927_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5934_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5934_ == 0)
{
v___x_5929_ = v___x_5914_;
v_isShared_5930_ = v_isSharedCheck_5934_;
goto v_resetjp_5928_;
}
else
{
lean_inc(v_a_5927_);
lean_dec(v___x_5914_);
v___x_5929_ = lean_box(0);
v_isShared_5930_ = v_isSharedCheck_5934_;
goto v_resetjp_5928_;
}
v_resetjp_5928_:
{
lean_object* v___x_5932_; 
if (v_isShared_5930_ == 0)
{
v___x_5932_ = v___x_5929_;
goto v_reusejp_5931_;
}
else
{
lean_object* v_reuseFailAlloc_5933_; 
v_reuseFailAlloc_5933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5933_, 0, v_a_5927_);
v___x_5932_ = v_reuseFailAlloc_5933_;
goto v_reusejp_5931_;
}
v_reusejp_5931_:
{
return v___x_5932_;
}
}
}
}
else
{
lean_object* v_a_5935_; lean_object* v___x_5937_; uint8_t v_isShared_5938_; uint8_t v_isSharedCheck_5942_; 
lean_dec_ref(v_info_5910_);
v_a_5935_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5942_ == 0)
{
v___x_5937_ = v___x_5912_;
v_isShared_5938_ = v_isSharedCheck_5942_;
goto v_resetjp_5936_;
}
else
{
lean_inc(v_a_5935_);
lean_dec(v___x_5912_);
v___x_5937_ = lean_box(0);
v_isShared_5938_ = v_isSharedCheck_5942_;
goto v_resetjp_5936_;
}
v_resetjp_5936_:
{
lean_object* v___x_5940_; 
if (v_isShared_5938_ == 0)
{
v___x_5940_ = v___x_5937_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_a_5935_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
return v___x_5940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object* v_info_5943_, lean_object* v_a_5944_){
_start:
{
lean_object* v_res_5945_; 
v_res_5945_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_info_5943_);
return v_res_5945_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object* v_path_5946_, lean_object* v___y_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_, lean_object* v___y_5951_, lean_object* v___y_5952_){
_start:
{
lean_object* v_log_5954_; uint8_t v_action_5955_; uint8_t v_wantsRebuild_5956_; lean_object* v_trace_5957_; lean_object* v_buildTime_5958_; lean_object* v___x_5960_; uint8_t v_isShared_5961_; uint8_t v_isSharedCheck_5978_; 
v_log_5954_ = lean_ctor_get(v___y_5952_, 0);
v_action_5955_ = lean_ctor_get_uint8(v___y_5952_, sizeof(void*)*3);
v_wantsRebuild_5956_ = lean_ctor_get_uint8(v___y_5952_, sizeof(void*)*3 + 1);
v_trace_5957_ = lean_ctor_get(v___y_5952_, 1);
v_buildTime_5958_ = lean_ctor_get(v___y_5952_, 2);
v_isSharedCheck_5978_ = !lean_is_exclusive(v___y_5952_);
if (v_isSharedCheck_5978_ == 0)
{
v___x_5960_ = v___y_5952_;
v_isShared_5961_ = v_isSharedCheck_5978_;
goto v_resetjp_5959_;
}
else
{
lean_inc(v_buildTime_5958_);
lean_inc(v_trace_5957_);
lean_inc(v_log_5954_);
lean_dec(v___y_5952_);
v___x_5960_ = lean_box(0);
v_isShared_5961_ = v_isSharedCheck_5978_;
goto v_resetjp_5959_;
}
v_resetjp_5959_:
{
lean_object* v___x_5962_; 
lean_inc_ref(v_path_5946_);
v___x_5962_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_path_5946_);
if (lean_obj_tag(v___x_5962_) == 0)
{
lean_object* v_a_5963_; lean_object* v___x_5965_; 
lean_dec_ref(v_trace_5957_);
v_a_5963_ = lean_ctor_get(v___x_5962_, 0);
lean_inc(v_a_5963_);
lean_dec_ref(v___x_5962_);
if (v_isShared_5961_ == 0)
{
lean_ctor_set(v___x_5960_, 1, v_a_5963_);
v___x_5965_ = v___x_5960_;
goto v_reusejp_5964_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v_log_5954_);
lean_ctor_set(v_reuseFailAlloc_5967_, 1, v_a_5963_);
lean_ctor_set(v_reuseFailAlloc_5967_, 2, v_buildTime_5958_);
lean_ctor_set_uint8(v_reuseFailAlloc_5967_, sizeof(void*)*3, v_action_5955_);
lean_ctor_set_uint8(v_reuseFailAlloc_5967_, sizeof(void*)*3 + 1, v_wantsRebuild_5956_);
v___x_5965_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5964_;
}
v_reusejp_5964_:
{
lean_object* v___x_5966_; 
v___x_5966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5966_, 0, v_path_5946_);
lean_ctor_set(v___x_5966_, 1, v___x_5965_);
return v___x_5966_;
}
}
else
{
lean_object* v_a_5968_; lean_object* v___x_5969_; uint8_t v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5975_; 
lean_dec_ref(v_path_5946_);
v_a_5968_ = lean_ctor_get(v___x_5962_, 0);
lean_inc(v_a_5968_);
lean_dec_ref(v___x_5962_);
v___x_5969_ = lean_io_error_to_string(v_a_5968_);
v___x_5970_ = 3;
v___x_5971_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5971_, 0, v___x_5969_);
lean_ctor_set_uint8(v___x_5971_, sizeof(void*)*1, v___x_5970_);
v___x_5972_ = lean_array_get_size(v_log_5954_);
v___x_5973_ = lean_array_push(v_log_5954_, v___x_5971_);
if (v_isShared_5961_ == 0)
{
lean_ctor_set(v___x_5960_, 0, v___x_5973_);
v___x_5975_ = v___x_5960_;
goto v_reusejp_5974_;
}
else
{
lean_object* v_reuseFailAlloc_5977_; 
v_reuseFailAlloc_5977_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5977_, 0, v___x_5973_);
lean_ctor_set(v_reuseFailAlloc_5977_, 1, v_trace_5957_);
lean_ctor_set(v_reuseFailAlloc_5977_, 2, v_buildTime_5958_);
lean_ctor_set_uint8(v_reuseFailAlloc_5977_, sizeof(void*)*3, v_action_5955_);
lean_ctor_set_uint8(v_reuseFailAlloc_5977_, sizeof(void*)*3 + 1, v_wantsRebuild_5956_);
v___x_5975_ = v_reuseFailAlloc_5977_;
goto v_reusejp_5974_;
}
v_reusejp_5974_:
{
lean_object* v___x_5976_; 
v___x_5976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5976_, 0, v___x_5972_);
lean_ctor_set(v___x_5976_, 1, v___x_5975_);
return v___x_5976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object* v_path_5979_, lean_object* v___y_5980_, lean_object* v___y_5981_, lean_object* v___y_5982_, lean_object* v___y_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_){
_start:
{
lean_object* v_res_5987_; 
v_res_5987_ = l_Lake_inputTextFile___redArg___lam__0(v_path_5979_, v___y_5980_, v___y_5981_, v___y_5982_, v___y_5983_, v___y_5984_, v___y_5985_);
lean_dec_ref(v___y_5984_);
lean_dec(v___y_5983_);
lean_dec(v___y_5982_);
lean_dec(v___y_5981_);
lean_dec_ref(v___y_5980_);
return v_res_5987_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object* v_path_5988_, lean_object* v_a_5989_, lean_object* v_a_5990_, lean_object* v_a_5991_, lean_object* v_a_5992_, lean_object* v_a_5993_){
_start:
{
lean_object* v___f_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___f_5995_ = lean_alloc_closure((void*)(l_Lake_inputTextFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5995_, 0, v_path_5988_);
v___x_5996_ = l_Lake_instDataKindFilePath;
v___x_5997_ = lean_unsigned_to_nat(0u);
v___x_5998_ = lean_obj_once(&l_Lake_inputBinFile___redArg___closed__0, &l_Lake_inputBinFile___redArg___closed__0_once, _init_l_Lake_inputBinFile___redArg___closed__0);
v___x_5999_ = l_Lake_Job_async___redArg(v___x_5996_, v___f_5995_, v___x_5997_, v___x_5998_, v_a_5989_, v_a_5990_, v_a_5991_, v_a_5992_, v_a_5993_);
return v___x_5999_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object* v_path_6000_, lean_object* v_a_6001_, lean_object* v_a_6002_, lean_object* v_a_6003_, lean_object* v_a_6004_, lean_object* v_a_6005_, lean_object* v_a_6006_){
_start:
{
lean_object* v_res_6007_; 
v_res_6007_ = l_Lake_inputTextFile___redArg(v_path_6000_, v_a_6001_, v_a_6002_, v_a_6003_, v_a_6004_, v_a_6005_);
lean_dec_ref(v_a_6005_);
lean_dec(v_a_6004_);
lean_dec(v_a_6003_);
lean_dec(v_a_6002_);
return v_res_6007_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object* v_path_6008_, lean_object* v_a_6009_, lean_object* v_a_6010_, lean_object* v_a_6011_, lean_object* v_a_6012_, lean_object* v_a_6013_, lean_object* v_a_6014_){
_start:
{
lean_object* v___x_6016_; 
v___x_6016_ = l_Lake_inputTextFile___redArg(v_path_6008_, v_a_6009_, v_a_6010_, v_a_6011_, v_a_6012_, v_a_6013_);
return v___x_6016_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object* v_path_6017_, lean_object* v_a_6018_, lean_object* v_a_6019_, lean_object* v_a_6020_, lean_object* v_a_6021_, lean_object* v_a_6022_, lean_object* v_a_6023_, lean_object* v_a_6024_){
_start:
{
lean_object* v_res_6025_; 
v_res_6025_ = l_Lake_inputTextFile(v_path_6017_, v_a_6018_, v_a_6019_, v_a_6020_, v_a_6021_, v_a_6022_, v_a_6023_);
lean_dec_ref(v_a_6023_);
lean_dec_ref(v_a_6022_);
lean_dec(v_a_6021_);
lean_dec(v_a_6020_);
lean_dec(v_a_6019_);
return v_res_6025_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object* v_path_6026_, uint8_t v_text_6027_, lean_object* v_a_6028_, lean_object* v_a_6029_, lean_object* v_a_6030_, lean_object* v_a_6031_, lean_object* v_a_6032_){
_start:
{
if (v_text_6027_ == 0)
{
lean_object* v___x_6034_; 
v___x_6034_ = l_Lake_inputBinFile___redArg(v_path_6026_, v_a_6028_, v_a_6029_, v_a_6030_, v_a_6031_, v_a_6032_);
return v___x_6034_;
}
else
{
lean_object* v___x_6035_; 
v___x_6035_ = l_Lake_inputTextFile___redArg(v_path_6026_, v_a_6028_, v_a_6029_, v_a_6030_, v_a_6031_, v_a_6032_);
return v___x_6035_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object* v_path_6036_, lean_object* v_text_6037_, lean_object* v_a_6038_, lean_object* v_a_6039_, lean_object* v_a_6040_, lean_object* v_a_6041_, lean_object* v_a_6042_, lean_object* v_a_6043_){
_start:
{
uint8_t v_text_boxed_6044_; lean_object* v_res_6045_; 
v_text_boxed_6044_ = lean_unbox(v_text_6037_);
v_res_6045_ = l_Lake_inputFile___redArg(v_path_6036_, v_text_boxed_6044_, v_a_6038_, v_a_6039_, v_a_6040_, v_a_6041_, v_a_6042_);
lean_dec_ref(v_a_6042_);
lean_dec(v_a_6041_);
lean_dec(v_a_6040_);
lean_dec(v_a_6039_);
return v_res_6045_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object* v_path_6046_, uint8_t v_text_6047_, lean_object* v_a_6048_, lean_object* v_a_6049_, lean_object* v_a_6050_, lean_object* v_a_6051_, lean_object* v_a_6052_, lean_object* v_a_6053_){
_start:
{
if (v_text_6047_ == 0)
{
lean_object* v___x_6055_; 
v___x_6055_ = l_Lake_inputBinFile___redArg(v_path_6046_, v_a_6048_, v_a_6049_, v_a_6050_, v_a_6051_, v_a_6052_);
return v___x_6055_;
}
else
{
lean_object* v___x_6056_; 
v___x_6056_ = l_Lake_inputTextFile___redArg(v_path_6046_, v_a_6048_, v_a_6049_, v_a_6050_, v_a_6051_, v_a_6052_);
return v___x_6056_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object* v_path_6057_, lean_object* v_text_6058_, lean_object* v_a_6059_, lean_object* v_a_6060_, lean_object* v_a_6061_, lean_object* v_a_6062_, lean_object* v_a_6063_, lean_object* v_a_6064_, lean_object* v_a_6065_){
_start:
{
uint8_t v_text_boxed_6066_; lean_object* v_res_6067_; 
v_text_boxed_6066_ = lean_unbox(v_text_6058_);
v_res_6067_ = l_Lake_inputFile(v_path_6057_, v_text_boxed_6066_, v_a_6059_, v_a_6060_, v_a_6061_, v_a_6062_, v_a_6063_, v_a_6064_);
lean_dec_ref(v_a_6064_);
lean_dec_ref(v_a_6063_);
lean_dec(v_a_6062_);
lean_dec(v_a_6061_);
lean_dec(v_a_6060_);
return v_res_6067_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object* v_x_6068_){
_start:
{
uint8_t v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; 
v___x_6070_ = 1;
v___x_6071_ = lean_box(v___x_6070_);
v___x_6072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6072_, 0, v___x_6071_);
return v___x_6072_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object* v_x_6073_, lean_object* v___y_6074_){
_start:
{
lean_object* v_res_6075_; 
v_res_6075_ = l_Lake_inputDir___lam__0(v_x_6073_);
lean_dec_ref(v_x_6073_);
return v_res_6075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(lean_object* v_hi_6076_, lean_object* v_pivot_6077_, lean_object* v_as_6078_, lean_object* v_i_6079_, lean_object* v_k_6080_){
_start:
{
uint8_t v___x_6081_; 
v___x_6081_ = lean_nat_dec_lt(v_k_6080_, v_hi_6076_);
if (v___x_6081_ == 0)
{
lean_object* v___x_6082_; lean_object* v___x_6083_; 
lean_dec(v_k_6080_);
v___x_6082_ = lean_array_fswap(v_as_6078_, v_i_6079_, v_hi_6076_);
v___x_6083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6083_, 0, v_i_6079_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
return v___x_6083_;
}
else
{
lean_object* v___x_6084_; uint8_t v___x_6085_; 
v___x_6084_ = lean_array_fget_borrowed(v_as_6078_, v_k_6080_);
v___x_6085_ = lean_string_dec_lt(v___x_6084_, v_pivot_6077_);
if (v___x_6085_ == 0)
{
lean_object* v___x_6086_; lean_object* v___x_6087_; 
v___x_6086_ = lean_unsigned_to_nat(1u);
v___x_6087_ = lean_nat_add(v_k_6080_, v___x_6086_);
lean_dec(v_k_6080_);
v_k_6080_ = v___x_6087_;
goto _start;
}
else
{
lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6089_ = lean_array_fswap(v_as_6078_, v_i_6079_, v_k_6080_);
v___x_6090_ = lean_unsigned_to_nat(1u);
v___x_6091_ = lean_nat_add(v_i_6079_, v___x_6090_);
lean_dec(v_i_6079_);
v___x_6092_ = lean_nat_add(v_k_6080_, v___x_6090_);
lean_dec(v_k_6080_);
v_as_6078_ = v___x_6089_;
v_i_6079_ = v___x_6091_;
v_k_6080_ = v___x_6092_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg___boxed(lean_object* v_hi_6094_, lean_object* v_pivot_6095_, lean_object* v_as_6096_, lean_object* v_i_6097_, lean_object* v_k_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6094_, v_pivot_6095_, v_as_6096_, v_i_6097_, v_k_6098_);
lean_dec_ref(v_pivot_6095_);
lean_dec(v_hi_6094_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object* v_n_6100_, lean_object* v_as_6101_, lean_object* v_lo_6102_, lean_object* v_hi_6103_){
_start:
{
lean_object* v___y_6105_; uint8_t v___x_6115_; 
v___x_6115_ = lean_nat_dec_lt(v_lo_6102_, v_hi_6103_);
if (v___x_6115_ == 0)
{
lean_dec(v_lo_6102_);
return v_as_6101_;
}
else
{
lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v_mid_6118_; lean_object* v___y_6120_; lean_object* v___y_6126_; lean_object* v___x_6131_; lean_object* v___x_6132_; uint8_t v___x_6133_; 
v___x_6116_ = lean_nat_add(v_lo_6102_, v_hi_6103_);
v___x_6117_ = lean_unsigned_to_nat(1u);
v_mid_6118_ = lean_nat_shiftr(v___x_6116_, v___x_6117_);
lean_dec(v___x_6116_);
v___x_6131_ = lean_array_fget_borrowed(v_as_6101_, v_mid_6118_);
v___x_6132_ = lean_array_fget_borrowed(v_as_6101_, v_lo_6102_);
v___x_6133_ = lean_string_dec_lt(v___x_6131_, v___x_6132_);
if (v___x_6133_ == 0)
{
v___y_6126_ = v_as_6101_;
goto v___jp_6125_;
}
else
{
lean_object* v___x_6134_; 
v___x_6134_ = lean_array_fswap(v_as_6101_, v_lo_6102_, v_mid_6118_);
v___y_6126_ = v___x_6134_;
goto v___jp_6125_;
}
v___jp_6119_:
{
lean_object* v___x_6121_; lean_object* v___x_6122_; uint8_t v___x_6123_; 
v___x_6121_ = lean_array_fget_borrowed(v___y_6120_, v_mid_6118_);
v___x_6122_ = lean_array_fget_borrowed(v___y_6120_, v_hi_6103_);
v___x_6123_ = lean_string_dec_lt(v___x_6121_, v___x_6122_);
if (v___x_6123_ == 0)
{
lean_dec(v_mid_6118_);
v___y_6105_ = v___y_6120_;
goto v___jp_6104_;
}
else
{
lean_object* v___x_6124_; 
v___x_6124_ = lean_array_fswap(v___y_6120_, v_mid_6118_, v_hi_6103_);
lean_dec(v_mid_6118_);
v___y_6105_ = v___x_6124_;
goto v___jp_6104_;
}
}
v___jp_6125_:
{
lean_object* v___x_6127_; lean_object* v___x_6128_; uint8_t v___x_6129_; 
v___x_6127_ = lean_array_fget_borrowed(v___y_6126_, v_hi_6103_);
v___x_6128_ = lean_array_fget_borrowed(v___y_6126_, v_lo_6102_);
v___x_6129_ = lean_string_dec_lt(v___x_6127_, v___x_6128_);
if (v___x_6129_ == 0)
{
v___y_6120_ = v___y_6126_;
goto v___jp_6119_;
}
else
{
lean_object* v___x_6130_; 
v___x_6130_ = lean_array_fswap(v___y_6126_, v_lo_6102_, v_hi_6103_);
v___y_6120_ = v___x_6130_;
goto v___jp_6119_;
}
}
}
v___jp_6104_:
{
lean_object* v_pivot_6106_; lean_object* v___x_6107_; lean_object* v_fst_6108_; lean_object* v_snd_6109_; uint8_t v___x_6110_; 
v_pivot_6106_ = lean_array_fget(v___y_6105_, v_hi_6103_);
lean_inc_n(v_lo_6102_, 2);
v___x_6107_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6103_, v_pivot_6106_, v___y_6105_, v_lo_6102_, v_lo_6102_);
lean_dec(v_pivot_6106_);
v_fst_6108_ = lean_ctor_get(v___x_6107_, 0);
lean_inc(v_fst_6108_);
v_snd_6109_ = lean_ctor_get(v___x_6107_, 1);
lean_inc(v_snd_6109_);
lean_dec_ref(v___x_6107_);
v___x_6110_ = lean_nat_dec_le(v_hi_6103_, v_fst_6108_);
if (v___x_6110_ == 0)
{
lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; 
v___x_6111_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6100_, v_snd_6109_, v_lo_6102_, v_fst_6108_);
v___x_6112_ = lean_unsigned_to_nat(1u);
v___x_6113_ = lean_nat_add(v_fst_6108_, v___x_6112_);
lean_dec(v_fst_6108_);
v_as_6101_ = v___x_6111_;
v_lo_6102_ = v___x_6113_;
goto _start;
}
else
{
lean_dec(v_fst_6108_);
lean_dec(v_lo_6102_);
return v_snd_6109_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object* v_n_6135_, lean_object* v_as_6136_, lean_object* v_lo_6137_, lean_object* v_hi_6138_){
_start:
{
lean_object* v_res_6139_; 
v_res_6139_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6135_, v_as_6136_, v_lo_6137_, v_hi_6138_);
lean_dec(v_hi_6138_);
lean_dec(v_n_6135_);
return v_res_6139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object* v_filter_6140_, lean_object* v_as_6141_, size_t v_i_6142_, size_t v_stop_6143_, lean_object* v_b_6144_, lean_object* v___y_6145_){
_start:
{
lean_object* v_a_6148_; lean_object* v_a_6149_; uint8_t v___x_6153_; 
v___x_6153_ = lean_usize_dec_eq(v_i_6142_, v_stop_6143_);
if (v___x_6153_ == 0)
{
lean_object* v___x_6154_; uint8_t v___x_6155_; 
v___x_6154_ = lean_array_uget_borrowed(v_as_6141_, v_i_6142_);
v___x_6155_ = l_System_FilePath_isDir(v___x_6154_);
if (v___x_6155_ == 0)
{
lean_object* v___x_6156_; uint8_t v___x_6157_; 
lean_inc_ref(v_filter_6140_);
lean_inc(v___x_6154_);
v___x_6156_ = lean_apply_1(v_filter_6140_, v___x_6154_);
v___x_6157_ = lean_unbox(v___x_6156_);
if (v___x_6157_ == 0)
{
v_a_6148_ = v_b_6144_;
v_a_6149_ = v___y_6145_;
goto v___jp_6147_;
}
else
{
lean_object* v___x_6158_; 
lean_inc(v___x_6154_);
v___x_6158_ = lean_array_push(v_b_6144_, v___x_6154_);
v_a_6148_ = v___x_6158_;
v_a_6149_ = v___y_6145_;
goto v___jp_6147_;
}
}
else
{
v_a_6148_ = v_b_6144_;
v_a_6149_ = v___y_6145_;
goto v___jp_6147_;
}
}
else
{
lean_object* v___x_6159_; 
lean_dec_ref(v_filter_6140_);
v___x_6159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6159_, 0, v_b_6144_);
lean_ctor_set(v___x_6159_, 1, v___y_6145_);
return v___x_6159_;
}
v___jp_6147_:
{
size_t v___x_6150_; size_t v___x_6151_; 
v___x_6150_ = ((size_t)1ULL);
v___x_6151_ = lean_usize_add(v_i_6142_, v___x_6150_);
v_i_6142_ = v___x_6151_;
v_b_6144_ = v_a_6148_;
v___y_6145_ = v_a_6149_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object* v_filter_6160_, lean_object* v_as_6161_, lean_object* v_i_6162_, lean_object* v_stop_6163_, lean_object* v_b_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_){
_start:
{
size_t v_i_boxed_6167_; size_t v_stop_boxed_6168_; lean_object* v_res_6169_; 
v_i_boxed_6167_ = lean_unbox_usize(v_i_6162_);
lean_dec(v_i_6162_);
v_stop_boxed_6168_ = lean_unbox_usize(v_stop_6163_);
lean_dec(v_stop_6163_);
v_res_6169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6160_, v_as_6161_, v_i_boxed_6167_, v_stop_boxed_6168_, v_b_6164_, v___y_6165_);
lean_dec_ref(v_as_6161_);
return v_res_6169_;
}
}
static lean_object* _init_l_Lake_inputDir___lam__1___closed__0(void){
_start:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; 
v___x_6170_ = lean_unsigned_to_nat(0u);
v___x_6171_ = lean_mk_empty_array_with_capacity(v___x_6170_);
return v___x_6171_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(lean_object* v_path_6172_, lean_object* v___f_6173_, lean_object* v_filter_6174_, lean_object* v___y_6175_, lean_object* v___y_6176_, lean_object* v___y_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_){
_start:
{
lean_object* v___y_6183_; lean_object* v___y_6184_; lean_object* v___y_6187_; lean_object* v___y_6188_; lean_object* v___y_6189_; lean_object* v___y_6190_; lean_object* v___y_6191_; lean_object* v___y_6194_; lean_object* v___y_6195_; lean_object* v___y_6196_; lean_object* v___y_6197_; lean_object* v___y_6198_; lean_object* v___y_6201_; lean_object* v_a_6202_; lean_object* v_a_6203_; lean_object* v___y_6210_; lean_object* v___y_6211_; lean_object* v_log_6214_; uint8_t v_action_6215_; uint8_t v_wantsRebuild_6216_; lean_object* v_trace_6217_; lean_object* v_buildTime_6218_; lean_object* v___x_6219_; 
v_log_6214_ = lean_ctor_get(v___y_6180_, 0);
v_action_6215_ = lean_ctor_get_uint8(v___y_6180_, sizeof(void*)*3);
v_wantsRebuild_6216_ = lean_ctor_get_uint8(v___y_6180_, sizeof(void*)*3 + 1);
v_trace_6217_ = lean_ctor_get(v___y_6180_, 1);
v_buildTime_6218_ = lean_ctor_get(v___y_6180_, 2);
v___x_6219_ = l_System_FilePath_walkDir(v_path_6172_, v___f_6173_);
if (lean_obj_tag(v___x_6219_) == 0)
{
lean_object* v_a_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; uint8_t v___x_6224_; 
v_a_6220_ = lean_ctor_get(v___x_6219_, 0);
lean_inc(v_a_6220_);
lean_dec_ref(v___x_6219_);
v___x_6221_ = lean_unsigned_to_nat(0u);
v___x_6222_ = lean_array_get_size(v_a_6220_);
v___x_6223_ = lean_obj_once(&l_Lake_inputDir___lam__1___closed__0, &l_Lake_inputDir___lam__1___closed__0_once, _init_l_Lake_inputDir___lam__1___closed__0);
v___x_6224_ = lean_nat_dec_lt(v___x_6221_, v___x_6222_);
if (v___x_6224_ == 0)
{
lean_dec(v_a_6220_);
lean_dec_ref(v_filter_6174_);
v___y_6201_ = v___x_6221_;
v_a_6202_ = v___x_6223_;
v_a_6203_ = v___y_6180_;
goto v___jp_6200_;
}
else
{
uint8_t v___x_6225_; 
v___x_6225_ = lean_nat_dec_le(v___x_6222_, v___x_6222_);
if (v___x_6225_ == 0)
{
if (v___x_6224_ == 0)
{
lean_dec(v_a_6220_);
lean_dec_ref(v_filter_6174_);
v___y_6201_ = v___x_6221_;
v_a_6202_ = v___x_6223_;
v_a_6203_ = v___y_6180_;
goto v___jp_6200_;
}
else
{
size_t v___x_6226_; size_t v___x_6227_; lean_object* v___x_6228_; 
v___x_6226_ = ((size_t)0ULL);
v___x_6227_ = lean_usize_of_nat(v___x_6222_);
v___x_6228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6174_, v_a_6220_, v___x_6226_, v___x_6227_, v___x_6223_, v___y_6180_);
lean_dec(v_a_6220_);
v___y_6210_ = v___x_6221_;
v___y_6211_ = v___x_6228_;
goto v___jp_6209_;
}
}
else
{
size_t v___x_6229_; size_t v___x_6230_; lean_object* v___x_6231_; 
v___x_6229_ = ((size_t)0ULL);
v___x_6230_ = lean_usize_of_nat(v___x_6222_);
v___x_6231_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6174_, v_a_6220_, v___x_6229_, v___x_6230_, v___x_6223_, v___y_6180_);
lean_dec(v_a_6220_);
v___y_6210_ = v___x_6221_;
v___y_6211_ = v___x_6231_;
goto v___jp_6209_;
}
}
}
else
{
lean_object* v___x_6233_; uint8_t v_isShared_6234_; uint8_t v_isSharedCheck_6245_; 
lean_inc(v_buildTime_6218_);
lean_inc_ref(v_trace_6217_);
lean_inc_ref(v_log_6214_);
lean_dec_ref(v_filter_6174_);
v_isSharedCheck_6245_ = !lean_is_exclusive(v___y_6180_);
if (v_isSharedCheck_6245_ == 0)
{
lean_object* v_unused_6246_; lean_object* v_unused_6247_; lean_object* v_unused_6248_; 
v_unused_6246_ = lean_ctor_get(v___y_6180_, 2);
lean_dec(v_unused_6246_);
v_unused_6247_ = lean_ctor_get(v___y_6180_, 1);
lean_dec(v_unused_6247_);
v_unused_6248_ = lean_ctor_get(v___y_6180_, 0);
lean_dec(v_unused_6248_);
v___x_6233_ = v___y_6180_;
v_isShared_6234_ = v_isSharedCheck_6245_;
goto v_resetjp_6232_;
}
else
{
lean_dec(v___y_6180_);
v___x_6233_ = lean_box(0);
v_isShared_6234_ = v_isSharedCheck_6245_;
goto v_resetjp_6232_;
}
v_resetjp_6232_:
{
lean_object* v_a_6235_; lean_object* v___x_6236_; uint8_t v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; lean_object* v___x_6242_; 
v_a_6235_ = lean_ctor_get(v___x_6219_, 0);
lean_inc(v_a_6235_);
lean_dec_ref(v___x_6219_);
v___x_6236_ = lean_io_error_to_string(v_a_6235_);
v___x_6237_ = 3;
v___x_6238_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6238_, 0, v___x_6236_);
lean_ctor_set_uint8(v___x_6238_, sizeof(void*)*1, v___x_6237_);
v___x_6239_ = lean_array_get_size(v_log_6214_);
v___x_6240_ = lean_array_push(v_log_6214_, v___x_6238_);
if (v_isShared_6234_ == 0)
{
lean_ctor_set(v___x_6233_, 0, v___x_6240_);
v___x_6242_ = v___x_6233_;
goto v_reusejp_6241_;
}
else
{
lean_object* v_reuseFailAlloc_6244_; 
v_reuseFailAlloc_6244_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6244_, 0, v___x_6240_);
lean_ctor_set(v_reuseFailAlloc_6244_, 1, v_trace_6217_);
lean_ctor_set(v_reuseFailAlloc_6244_, 2, v_buildTime_6218_);
lean_ctor_set_uint8(v_reuseFailAlloc_6244_, sizeof(void*)*3, v_action_6215_);
lean_ctor_set_uint8(v_reuseFailAlloc_6244_, sizeof(void*)*3 + 1, v_wantsRebuild_6216_);
v___x_6242_ = v_reuseFailAlloc_6244_;
goto v_reusejp_6241_;
}
v_reusejp_6241_:
{
lean_object* v___x_6243_; 
v___x_6243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6243_, 0, v___x_6239_);
lean_ctor_set(v___x_6243_, 1, v___x_6242_);
return v___x_6243_;
}
}
}
v___jp_6182_:
{
lean_object* v___x_6185_; 
v___x_6185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6185_, 0, v___y_6184_);
lean_ctor_set(v___x_6185_, 1, v___y_6183_);
return v___x_6185_;
}
v___jp_6186_:
{
lean_object* v___x_6192_; 
v___x_6192_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v___y_6188_, v___y_6189_, v___y_6187_, v___y_6191_);
lean_dec(v___y_6191_);
lean_dec(v___y_6188_);
v___y_6183_ = v___y_6190_;
v___y_6184_ = v___x_6192_;
goto v___jp_6182_;
}
v___jp_6193_:
{
uint8_t v___x_6199_; 
v___x_6199_ = lean_nat_dec_le(v___y_6198_, v___y_6197_);
if (v___x_6199_ == 0)
{
lean_dec(v___y_6197_);
lean_inc(v___y_6198_);
v___y_6187_ = v___y_6198_;
v___y_6188_ = v___y_6194_;
v___y_6189_ = v___y_6195_;
v___y_6190_ = v___y_6196_;
v___y_6191_ = v___y_6198_;
goto v___jp_6186_;
}
else
{
v___y_6187_ = v___y_6198_;
v___y_6188_ = v___y_6194_;
v___y_6189_ = v___y_6195_;
v___y_6190_ = v___y_6196_;
v___y_6191_ = v___y_6197_;
goto v___jp_6186_;
}
}
v___jp_6200_:
{
lean_object* v___x_6204_; uint8_t v___x_6205_; 
v___x_6204_ = lean_array_get_size(v_a_6202_);
v___x_6205_ = lean_nat_dec_eq(v___x_6204_, v___y_6201_);
if (v___x_6205_ == 0)
{
lean_object* v___x_6206_; lean_object* v___x_6207_; uint8_t v___x_6208_; 
v___x_6206_ = lean_unsigned_to_nat(1u);
v___x_6207_ = lean_nat_sub(v___x_6204_, v___x_6206_);
v___x_6208_ = lean_nat_dec_le(v___y_6201_, v___x_6207_);
if (v___x_6208_ == 0)
{
lean_dec(v___y_6201_);
lean_inc(v___x_6207_);
v___y_6194_ = v___x_6204_;
v___y_6195_ = v_a_6202_;
v___y_6196_ = v_a_6203_;
v___y_6197_ = v___x_6207_;
v___y_6198_ = v___x_6207_;
goto v___jp_6193_;
}
else
{
v___y_6194_ = v___x_6204_;
v___y_6195_ = v_a_6202_;
v___y_6196_ = v_a_6203_;
v___y_6197_ = v___x_6207_;
v___y_6198_ = v___y_6201_;
goto v___jp_6193_;
}
}
else
{
lean_dec(v___y_6201_);
v___y_6183_ = v_a_6203_;
v___y_6184_ = v_a_6202_;
goto v___jp_6182_;
}
}
v___jp_6209_:
{
if (lean_obj_tag(v___y_6211_) == 0)
{
lean_object* v_a_6212_; lean_object* v_a_6213_; 
v_a_6212_ = lean_ctor_get(v___y_6211_, 0);
lean_inc(v_a_6212_);
v_a_6213_ = lean_ctor_get(v___y_6211_, 1);
lean_inc(v_a_6213_);
lean_dec_ref(v___y_6211_);
v___y_6201_ = v___y_6210_;
v_a_6202_ = v_a_6212_;
v_a_6203_ = v_a_6213_;
goto v___jp_6200_;
}
else
{
lean_dec(v___y_6210_);
return v___y_6211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object* v_path_6249_, lean_object* v___f_6250_, lean_object* v_filter_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_, lean_object* v___y_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_){
_start:
{
lean_object* v_res_6259_; 
v_res_6259_ = l_Lake_inputDir___lam__1(v_path_6249_, v___f_6250_, v_filter_6251_, v___y_6252_, v___y_6253_, v___y_6254_, v___y_6255_, v___y_6256_, v___y_6257_);
lean_dec_ref(v___y_6256_);
lean_dec(v___y_6255_);
lean_dec(v___y_6254_);
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
return v_res_6259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t v_text_6260_, size_t v_sz_6261_, size_t v_i_6262_, lean_object* v_bs_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_){
_start:
{
uint8_t v___x_6271_; 
v___x_6271_ = lean_usize_dec_lt(v_i_6262_, v_sz_6261_);
if (v___x_6271_ == 0)
{
lean_object* v___x_6272_; 
lean_dec_ref(v___y_6264_);
v___x_6272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6272_, 0, v_bs_6263_);
lean_ctor_set(v___x_6272_, 1, v___y_6269_);
return v___x_6272_;
}
else
{
lean_object* v_v_6273_; lean_object* v___x_6274_; lean_object* v_bs_x27_6275_; lean_object* v___y_6277_; 
v_v_6273_ = lean_array_uget(v_bs_6263_, v_i_6262_);
v___x_6274_ = lean_unsigned_to_nat(0u);
v_bs_x27_6275_ = lean_array_uset(v_bs_6263_, v_i_6262_, v___x_6274_);
if (v_text_6260_ == 0)
{
lean_object* v___x_6282_; 
lean_inc_ref(v___y_6264_);
v___x_6282_ = l_Lake_inputBinFile___redArg(v_v_6273_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_, v___y_6268_);
v___y_6277_ = v___x_6282_;
goto v___jp_6276_;
}
else
{
lean_object* v___x_6283_; 
lean_inc_ref(v___y_6264_);
v___x_6283_ = l_Lake_inputTextFile___redArg(v_v_6273_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_, v___y_6268_);
v___y_6277_ = v___x_6283_;
goto v___jp_6276_;
}
v___jp_6276_:
{
size_t v___x_6278_; size_t v___x_6279_; lean_object* v___x_6280_; 
v___x_6278_ = ((size_t)1ULL);
v___x_6279_ = lean_usize_add(v_i_6262_, v___x_6278_);
v___x_6280_ = lean_array_uset(v_bs_x27_6275_, v_i_6262_, v___y_6277_);
v_i_6262_ = v___x_6279_;
v_bs_6263_ = v___x_6280_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object* v_text_6284_, lean_object* v_sz_6285_, lean_object* v_i_6286_, lean_object* v_bs_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_, lean_object* v___y_6293_, lean_object* v___y_6294_){
_start:
{
uint8_t v_text_boxed_6295_; size_t v_sz_boxed_6296_; size_t v_i_boxed_6297_; lean_object* v_res_6298_; 
v_text_boxed_6295_ = lean_unbox(v_text_6284_);
v_sz_boxed_6296_ = lean_unbox_usize(v_sz_6285_);
lean_dec(v_sz_6285_);
v_i_boxed_6297_ = lean_unbox_usize(v_i_6286_);
lean_dec(v_i_6286_);
v_res_6298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_boxed_6295_, v_sz_boxed_6296_, v_i_boxed_6297_, v_bs_6287_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_, v___y_6292_, v___y_6293_);
lean_dec_ref(v___y_6292_);
lean_dec(v___y_6291_);
lean_dec(v___y_6290_);
lean_dec(v___y_6289_);
return v_res_6298_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(uint8_t v_text_6299_, lean_object* v_path_6300_, lean_object* v_ps_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_, lean_object* v___y_6305_, lean_object* v___y_6306_, lean_object* v___y_6307_){
_start:
{
size_t v_sz_6309_; size_t v___x_6310_; lean_object* v___x_6311_; 
v_sz_6309_ = lean_array_size(v_ps_6301_);
v___x_6310_ = ((size_t)0ULL);
v___x_6311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_6299_, v_sz_6309_, v___x_6310_, v_ps_6301_, v___y_6302_, v___y_6303_, v___y_6304_, v___y_6305_, v___y_6306_, v___y_6307_);
if (lean_obj_tag(v___x_6311_) == 0)
{
lean_object* v_a_6312_; lean_object* v_a_6313_; lean_object* v___x_6315_; uint8_t v_isShared_6316_; uint8_t v_isSharedCheck_6321_; 
v_a_6312_ = lean_ctor_get(v___x_6311_, 0);
v_a_6313_ = lean_ctor_get(v___x_6311_, 1);
v_isSharedCheck_6321_ = !lean_is_exclusive(v___x_6311_);
if (v_isSharedCheck_6321_ == 0)
{
v___x_6315_ = v___x_6311_;
v_isShared_6316_ = v_isSharedCheck_6321_;
goto v_resetjp_6314_;
}
else
{
lean_inc(v_a_6313_);
lean_inc(v_a_6312_);
lean_dec(v___x_6311_);
v___x_6315_ = lean_box(0);
v_isShared_6316_ = v_isSharedCheck_6321_;
goto v_resetjp_6314_;
}
v_resetjp_6314_:
{
lean_object* v___x_6317_; lean_object* v___x_6319_; 
v___x_6317_ = l_Lake_Job_collectArray___redArg(v_a_6312_, v_path_6300_);
lean_dec(v_a_6312_);
if (v_isShared_6316_ == 0)
{
lean_ctor_set(v___x_6315_, 0, v___x_6317_);
v___x_6319_ = v___x_6315_;
goto v_reusejp_6318_;
}
else
{
lean_object* v_reuseFailAlloc_6320_; 
v_reuseFailAlloc_6320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6320_, 0, v___x_6317_);
lean_ctor_set(v_reuseFailAlloc_6320_, 1, v_a_6313_);
v___x_6319_ = v_reuseFailAlloc_6320_;
goto v_reusejp_6318_;
}
v_reusejp_6318_:
{
return v___x_6319_;
}
}
}
else
{
lean_object* v_a_6322_; lean_object* v_a_6323_; lean_object* v___x_6325_; uint8_t v_isShared_6326_; uint8_t v_isSharedCheck_6330_; 
lean_dec_ref(v_path_6300_);
v_a_6322_ = lean_ctor_get(v___x_6311_, 0);
v_a_6323_ = lean_ctor_get(v___x_6311_, 1);
v_isSharedCheck_6330_ = !lean_is_exclusive(v___x_6311_);
if (v_isSharedCheck_6330_ == 0)
{
v___x_6325_ = v___x_6311_;
v_isShared_6326_ = v_isSharedCheck_6330_;
goto v_resetjp_6324_;
}
else
{
lean_inc(v_a_6323_);
lean_inc(v_a_6322_);
lean_dec(v___x_6311_);
v___x_6325_ = lean_box(0);
v_isShared_6326_ = v_isSharedCheck_6330_;
goto v_resetjp_6324_;
}
v_resetjp_6324_:
{
lean_object* v___x_6328_; 
if (v_isShared_6326_ == 0)
{
v___x_6328_ = v___x_6325_;
goto v_reusejp_6327_;
}
else
{
lean_object* v_reuseFailAlloc_6329_; 
v_reuseFailAlloc_6329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6329_, 0, v_a_6322_);
lean_ctor_set(v_reuseFailAlloc_6329_, 1, v_a_6323_);
v___x_6328_ = v_reuseFailAlloc_6329_;
goto v_reusejp_6327_;
}
v_reusejp_6327_:
{
return v___x_6328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object* v_text_6331_, lean_object* v_path_6332_, lean_object* v_ps_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_, lean_object* v___y_6339_, lean_object* v___y_6340_){
_start:
{
uint8_t v_text_boxed_6341_; lean_object* v_res_6342_; 
v_text_boxed_6341_ = lean_unbox(v_text_6331_);
v_res_6342_ = l_Lake_inputDir___lam__2(v_text_boxed_6341_, v_path_6332_, v_ps_6333_, v___y_6334_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_, v___y_6339_);
lean_dec_ref(v___y_6338_);
lean_dec(v___y_6337_);
lean_dec(v___y_6336_);
lean_dec(v___y_6335_);
return v_res_6342_;
}
}
static lean_object* _init_l_Lake_inputDir___closed__0(void){
_start:
{
lean_object* v___f_6343_; 
v___f_6343_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__0___boxed), 2, 0);
return v___f_6343_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object* v_path_6344_, uint8_t v_text_6345_, lean_object* v_filter_6346_, lean_object* v_a_6347_, lean_object* v_a_6348_, lean_object* v_a_6349_, lean_object* v_a_6350_, lean_object* v_a_6351_, lean_object* v_a_6352_){
_start:
{
lean_object* v___f_6354_; lean_object* v___f_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; lean_object* v___f_6361_; uint8_t v___x_6362_; lean_object* v___x_6363_; 
v___f_6354_ = lean_obj_once(&l_Lake_inputDir___closed__0, &l_Lake_inputDir___closed__0_once, _init_l_Lake_inputDir___closed__0);
lean_inc_ref(v_path_6344_);
v___f_6355_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__1___boxed), 10, 3);
lean_closure_set(v___f_6355_, 0, v_path_6344_);
lean_closure_set(v___f_6355_, 1, v___f_6354_);
lean_closure_set(v___f_6355_, 2, v_filter_6346_);
v___x_6356_ = lean_box(0);
v___x_6357_ = lean_unsigned_to_nat(0u);
v___x_6358_ = lean_obj_once(&l_Lake_inputBinFile___redArg___closed__0, &l_Lake_inputBinFile___redArg___closed__0_once, _init_l_Lake_inputBinFile___redArg___closed__0);
lean_inc_ref(v_a_6347_);
v___x_6359_ = l_Lake_Job_async___redArg(v___x_6356_, v___f_6355_, v___x_6357_, v___x_6358_, v_a_6347_, v_a_6348_, v_a_6349_, v_a_6350_, v_a_6351_);
v___x_6360_ = lean_box(v_text_6345_);
v___f_6361_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__2___boxed), 10, 2);
lean_closure_set(v___f_6361_, 0, v___x_6360_);
lean_closure_set(v___f_6361_, 1, v_path_6344_);
v___x_6362_ = 0;
v___x_6363_ = l_Lake_Job_bindM___redArg(v___x_6356_, v___x_6359_, v___f_6361_, v___x_6357_, v___x_6362_, v_a_6347_, v_a_6348_, v_a_6349_, v_a_6350_, v_a_6351_, v_a_6352_);
return v___x_6363_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object* v_path_6364_, lean_object* v_text_6365_, lean_object* v_filter_6366_, lean_object* v_a_6367_, lean_object* v_a_6368_, lean_object* v_a_6369_, lean_object* v_a_6370_, lean_object* v_a_6371_, lean_object* v_a_6372_, lean_object* v_a_6373_){
_start:
{
uint8_t v_text_boxed_6374_; lean_object* v_res_6375_; 
v_text_boxed_6374_ = lean_unbox(v_text_6365_);
v_res_6375_ = l_Lake_inputDir(v_path_6364_, v_text_boxed_6374_, v_filter_6366_, v_a_6367_, v_a_6368_, v_a_6369_, v_a_6370_, v_a_6371_, v_a_6372_);
lean_dec_ref(v_a_6372_);
lean_dec_ref(v_a_6371_);
lean_dec(v_a_6370_);
lean_dec(v_a_6369_);
lean_dec(v_a_6368_);
return v_res_6375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object* v_n_6376_, lean_object* v_as_6377_, lean_object* v_lo_6378_, lean_object* v_hi_6379_, lean_object* v_w_6380_, lean_object* v_hlo_6381_, lean_object* v_hhi_6382_){
_start:
{
lean_object* v___x_6383_; 
v___x_6383_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6376_, v_as_6377_, v_lo_6378_, v_hi_6379_);
return v___x_6383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object* v_n_6384_, lean_object* v_as_6385_, lean_object* v_lo_6386_, lean_object* v_hi_6387_, lean_object* v_w_6388_, lean_object* v_hlo_6389_, lean_object* v_hhi_6390_){
_start:
{
lean_object* v_res_6391_; 
v_res_6391_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(v_n_6384_, v_as_6385_, v_lo_6386_, v_hi_6387_, v_w_6388_, v_hlo_6389_, v_hhi_6390_);
lean_dec(v_hi_6387_);
lean_dec(v_n_6384_);
return v_res_6391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object* v_filter_6392_, lean_object* v_as_6393_, size_t v_i_6394_, size_t v_stop_6395_, lean_object* v_b_6396_, lean_object* v___y_6397_, lean_object* v___y_6398_, lean_object* v___y_6399_, lean_object* v___y_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_){
_start:
{
lean_object* v___x_6404_; 
v___x_6404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6392_, v_as_6393_, v_i_6394_, v_stop_6395_, v_b_6396_, v___y_6402_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object* v_filter_6405_, lean_object* v_as_6406_, lean_object* v_i_6407_, lean_object* v_stop_6408_, lean_object* v_b_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_, lean_object* v___y_6412_, lean_object* v___y_6413_, lean_object* v___y_6414_, lean_object* v___y_6415_, lean_object* v___y_6416_){
_start:
{
size_t v_i_boxed_6417_; size_t v_stop_boxed_6418_; lean_object* v_res_6419_; 
v_i_boxed_6417_ = lean_unbox_usize(v_i_6407_);
lean_dec(v_i_6407_);
v_stop_boxed_6418_ = lean_unbox_usize(v_stop_6408_);
lean_dec(v_stop_6408_);
v_res_6419_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(v_filter_6405_, v_as_6406_, v_i_boxed_6417_, v_stop_boxed_6418_, v_b_6409_, v___y_6410_, v___y_6411_, v___y_6412_, v___y_6413_, v___y_6414_, v___y_6415_);
lean_dec_ref(v___y_6414_);
lean_dec(v___y_6413_);
lean_dec(v___y_6412_);
lean_dec(v___y_6411_);
lean_dec_ref(v___y_6410_);
lean_dec_ref(v_as_6406_);
return v_res_6419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(lean_object* v_n_6420_, lean_object* v_lo_6421_, lean_object* v_hi_6422_, lean_object* v_hhi_6423_, lean_object* v_pivot_6424_, lean_object* v_as_6425_, lean_object* v_i_6426_, lean_object* v_k_6427_, lean_object* v_ilo_6428_, lean_object* v_ik_6429_, lean_object* v_w_6430_){
_start:
{
lean_object* v___x_6431_; 
v___x_6431_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6422_, v_pivot_6424_, v_as_6425_, v_i_6426_, v_k_6427_);
return v___x_6431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___boxed(lean_object* v_n_6432_, lean_object* v_lo_6433_, lean_object* v_hi_6434_, lean_object* v_hhi_6435_, lean_object* v_pivot_6436_, lean_object* v_as_6437_, lean_object* v_i_6438_, lean_object* v_k_6439_, lean_object* v_ilo_6440_, lean_object* v_ik_6441_, lean_object* v_w_6442_){
_start:
{
lean_object* v_res_6443_; 
v_res_6443_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(v_n_6432_, v_lo_6433_, v_hi_6434_, v_hhi_6435_, v_pivot_6436_, v_as_6437_, v_i_6438_, v_k_6439_, v_ilo_6440_, v_ik_6441_, v_w_6442_);
lean_dec_ref(v_pivot_6436_);
lean_dec(v_hi_6434_);
lean_dec(v_lo_6433_);
lean_dec(v_n_6432_);
return v_res_6443_;
}
}
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t v_ts_6444_, lean_object* v_t_6445_){
_start:
{
uint64_t v___x_6446_; uint64_t v___x_6447_; uint64_t v___x_6448_; uint64_t v___x_6449_; 
v___x_6446_ = l_Lake_Hash_nil;
v___x_6447_ = lean_string_hash(v_t_6445_);
v___x_6448_ = lean_uint64_mix_hash(v___x_6446_, v___x_6447_);
v___x_6449_ = lean_uint64_mix_hash(v_ts_6444_, v___x_6448_);
return v___x_6449_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object* v_ts_6450_, lean_object* v_t_6451_){
_start:
{
uint64_t v_ts_boxed_6452_; uint64_t v_res_6453_; lean_object* v_r_6454_; 
v_ts_boxed_6452_ = lean_unbox_uint64(v_ts_6450_);
lean_dec_ref(v_ts_6450_);
v_res_6453_ = l_Lake_buildO___lam__0(v_ts_boxed_6452_, v_t_6451_);
lean_dec_ref(v_t_6451_);
v_r_6454_ = lean_box_uint64(v_res_6453_);
return v_r_6454_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object* v_oFile_6455_, lean_object* v_srcFile_6456_, lean_object* v___x_6457_, lean_object* v_compiler_6458_, lean_object* v___y_6459_, lean_object* v___y_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_){
_start:
{
lean_object* v_log_6466_; uint8_t v_action_6467_; uint8_t v_wantsRebuild_6468_; lean_object* v_trace_6469_; lean_object* v_buildTime_6470_; lean_object* v___x_6472_; uint8_t v_isShared_6473_; uint8_t v_isSharedCheck_6499_; 
v_log_6466_ = lean_ctor_get(v___y_6464_, 0);
v_action_6467_ = lean_ctor_get_uint8(v___y_6464_, sizeof(void*)*3);
v_wantsRebuild_6468_ = lean_ctor_get_uint8(v___y_6464_, sizeof(void*)*3 + 1);
v_trace_6469_ = lean_ctor_get(v___y_6464_, 1);
v_buildTime_6470_ = lean_ctor_get(v___y_6464_, 2);
v_isSharedCheck_6499_ = !lean_is_exclusive(v___y_6464_);
if (v_isSharedCheck_6499_ == 0)
{
v___x_6472_ = v___y_6464_;
v_isShared_6473_ = v_isSharedCheck_6499_;
goto v_resetjp_6471_;
}
else
{
lean_inc(v_buildTime_6470_);
lean_inc(v_trace_6469_);
lean_inc(v_log_6466_);
lean_dec(v___y_6464_);
v___x_6472_ = lean_box(0);
v_isShared_6473_ = v_isSharedCheck_6499_;
goto v_resetjp_6471_;
}
v_resetjp_6471_:
{
lean_object* v___x_6474_; 
v___x_6474_ = l_Lake_compileO(v_oFile_6455_, v_srcFile_6456_, v___x_6457_, v_compiler_6458_, v_log_6466_);
if (lean_obj_tag(v___x_6474_) == 0)
{
lean_object* v_a_6475_; lean_object* v_a_6476_; lean_object* v___x_6478_; uint8_t v_isShared_6479_; uint8_t v_isSharedCheck_6486_; 
v_a_6475_ = lean_ctor_get(v___x_6474_, 0);
v_a_6476_ = lean_ctor_get(v___x_6474_, 1);
v_isSharedCheck_6486_ = !lean_is_exclusive(v___x_6474_);
if (v_isSharedCheck_6486_ == 0)
{
v___x_6478_ = v___x_6474_;
v_isShared_6479_ = v_isSharedCheck_6486_;
goto v_resetjp_6477_;
}
else
{
lean_inc(v_a_6476_);
lean_inc(v_a_6475_);
lean_dec(v___x_6474_);
v___x_6478_ = lean_box(0);
v_isShared_6479_ = v_isSharedCheck_6486_;
goto v_resetjp_6477_;
}
v_resetjp_6477_:
{
lean_object* v___x_6481_; 
if (v_isShared_6473_ == 0)
{
lean_ctor_set(v___x_6472_, 0, v_a_6476_);
v___x_6481_ = v___x_6472_;
goto v_reusejp_6480_;
}
else
{
lean_object* v_reuseFailAlloc_6485_; 
v_reuseFailAlloc_6485_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6485_, 0, v_a_6476_);
lean_ctor_set(v_reuseFailAlloc_6485_, 1, v_trace_6469_);
lean_ctor_set(v_reuseFailAlloc_6485_, 2, v_buildTime_6470_);
lean_ctor_set_uint8(v_reuseFailAlloc_6485_, sizeof(void*)*3, v_action_6467_);
lean_ctor_set_uint8(v_reuseFailAlloc_6485_, sizeof(void*)*3 + 1, v_wantsRebuild_6468_);
v___x_6481_ = v_reuseFailAlloc_6485_;
goto v_reusejp_6480_;
}
v_reusejp_6480_:
{
lean_object* v___x_6483_; 
if (v_isShared_6479_ == 0)
{
lean_ctor_set(v___x_6478_, 1, v___x_6481_);
v___x_6483_ = v___x_6478_;
goto v_reusejp_6482_;
}
else
{
lean_object* v_reuseFailAlloc_6484_; 
v_reuseFailAlloc_6484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6484_, 0, v_a_6475_);
lean_ctor_set(v_reuseFailAlloc_6484_, 1, v___x_6481_);
v___x_6483_ = v_reuseFailAlloc_6484_;
goto v_reusejp_6482_;
}
v_reusejp_6482_:
{
return v___x_6483_;
}
}
}
}
else
{
lean_object* v_a_6487_; lean_object* v_a_6488_; lean_object* v___x_6490_; uint8_t v_isShared_6491_; uint8_t v_isSharedCheck_6498_; 
v_a_6487_ = lean_ctor_get(v___x_6474_, 0);
v_a_6488_ = lean_ctor_get(v___x_6474_, 1);
v_isSharedCheck_6498_ = !lean_is_exclusive(v___x_6474_);
if (v_isSharedCheck_6498_ == 0)
{
v___x_6490_ = v___x_6474_;
v_isShared_6491_ = v_isSharedCheck_6498_;
goto v_resetjp_6489_;
}
else
{
lean_inc(v_a_6488_);
lean_inc(v_a_6487_);
lean_dec(v___x_6474_);
v___x_6490_ = lean_box(0);
v_isShared_6491_ = v_isSharedCheck_6498_;
goto v_resetjp_6489_;
}
v_resetjp_6489_:
{
lean_object* v___x_6493_; 
if (v_isShared_6473_ == 0)
{
lean_ctor_set(v___x_6472_, 0, v_a_6488_);
v___x_6493_ = v___x_6472_;
goto v_reusejp_6492_;
}
else
{
lean_object* v_reuseFailAlloc_6497_; 
v_reuseFailAlloc_6497_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6497_, 0, v_a_6488_);
lean_ctor_set(v_reuseFailAlloc_6497_, 1, v_trace_6469_);
lean_ctor_set(v_reuseFailAlloc_6497_, 2, v_buildTime_6470_);
lean_ctor_set_uint8(v_reuseFailAlloc_6497_, sizeof(void*)*3, v_action_6467_);
lean_ctor_set_uint8(v_reuseFailAlloc_6497_, sizeof(void*)*3 + 1, v_wantsRebuild_6468_);
v___x_6493_ = v_reuseFailAlloc_6497_;
goto v_reusejp_6492_;
}
v_reusejp_6492_:
{
lean_object* v___x_6495_; 
if (v_isShared_6491_ == 0)
{
lean_ctor_set(v___x_6490_, 1, v___x_6493_);
v___x_6495_ = v___x_6490_;
goto v_reusejp_6494_;
}
else
{
lean_object* v_reuseFailAlloc_6496_; 
v_reuseFailAlloc_6496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6496_, 0, v_a_6487_);
lean_ctor_set(v_reuseFailAlloc_6496_, 1, v___x_6493_);
v___x_6495_ = v_reuseFailAlloc_6496_;
goto v_reusejp_6494_;
}
v_reusejp_6494_:
{
return v___x_6495_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object* v_oFile_6500_, lean_object* v_srcFile_6501_, lean_object* v___x_6502_, lean_object* v_compiler_6503_, lean_object* v___y_6504_, lean_object* v___y_6505_, lean_object* v___y_6506_, lean_object* v___y_6507_, lean_object* v___y_6508_, lean_object* v___y_6509_, lean_object* v___y_6510_){
_start:
{
lean_object* v_res_6511_; 
v_res_6511_ = l_Lake_buildO___lam__1(v_oFile_6500_, v_srcFile_6501_, v___x_6502_, v_compiler_6503_, v___y_6504_, v___y_6505_, v___y_6506_, v___y_6507_, v___y_6508_, v___y_6509_);
lean_dec_ref(v___y_6508_);
lean_dec(v___y_6507_);
lean_dec(v___y_6506_);
lean_dec(v___y_6505_);
lean_dec_ref(v___y_6504_);
lean_dec_ref(v___x_6502_);
return v_res_6511_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___closed__0(void){
_start:
{
lean_object* v___x_6512_; 
v___x_6512_ = lean_mk_string_unchecked("traceArgs: ", 11, 11);
return v___x_6512_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___closed__1(void){
_start:
{
lean_object* v___x_6513_; 
v___x_6513_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_6513_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___closed__2(void){
_start:
{
lean_object* v___x_6514_; 
v___x_6514_ = lean_mk_string_unchecked("o", 1, 1);
return v___x_6514_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___boxed__const__1(void){
_start:
{
uint64_t v___x_6515_; lean_object* v___x_6516_; 
v___x_6515_ = l_Lake_Hash_nil;
v___x_6516_ = lean_box_uint64(v___x_6515_);
return v___x_6516_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object* v_traceArgs_6517_, lean_object* v___f_6518_, lean_object* v_extraDepTrace_6519_, lean_object* v_weakArgs_6520_, lean_object* v_oFile_6521_, lean_object* v_compiler_6522_, lean_object* v___x_6523_, lean_object* v___f_6524_, lean_object* v_srcFile_6525_, lean_object* v___y_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_){
_start:
{
lean_object* v_log_6533_; uint8_t v_action_6534_; uint8_t v_wantsRebuild_6535_; lean_object* v_trace_6536_; lean_object* v_buildTime_6537_; lean_object* v___x_6539_; uint8_t v_isShared_6540_; uint8_t v_isSharedCheck_6622_; 
v_log_6533_ = lean_ctor_get(v___y_6531_, 0);
v_action_6534_ = lean_ctor_get_uint8(v___y_6531_, sizeof(void*)*3);
v_wantsRebuild_6535_ = lean_ctor_get_uint8(v___y_6531_, sizeof(void*)*3 + 1);
v_trace_6536_ = lean_ctor_get(v___y_6531_, 1);
v_buildTime_6537_ = lean_ctor_get(v___y_6531_, 2);
v_isSharedCheck_6622_ = !lean_is_exclusive(v___y_6531_);
if (v_isSharedCheck_6622_ == 0)
{
v___x_6539_ = v___y_6531_;
v_isShared_6540_ = v_isSharedCheck_6622_;
goto v_resetjp_6538_;
}
else
{
lean_inc(v_buildTime_6537_);
lean_inc(v_trace_6536_);
lean_inc(v_log_6533_);
lean_dec(v___y_6531_);
v___x_6539_ = lean_box(0);
v_isShared_6540_ = v_isSharedCheck_6622_;
goto v_resetjp_6538_;
}
v_resetjp_6538_:
{
lean_object* v___x_6541_; lean_object* v___x_6542_; uint64_t v___y_6544_; uint64_t v___x_6607_; lean_object* v___x_6608_; lean_object* v___x_6609_; uint8_t v___x_6610_; 
v___x_6541_ = l_Lake_platformTrace;
v___x_6542_ = l_Lake_BuildTrace_mix(v_trace_6536_, v___x_6541_);
v___x_6607_ = l_Lake_Hash_nil;
v___x_6608_ = lean_unsigned_to_nat(0u);
v___x_6609_ = lean_array_get_size(v_traceArgs_6517_);
v___x_6610_ = lean_nat_dec_lt(v___x_6608_, v___x_6609_);
if (v___x_6610_ == 0)
{
lean_dec_ref(v___f_6524_);
lean_dec_ref(v___x_6523_);
v___y_6544_ = v___x_6607_;
goto v___jp_6543_;
}
else
{
uint8_t v___x_6611_; 
v___x_6611_ = lean_nat_dec_le(v___x_6609_, v___x_6609_);
if (v___x_6611_ == 0)
{
if (v___x_6610_ == 0)
{
lean_dec_ref(v___f_6524_);
lean_dec_ref(v___x_6523_);
v___y_6544_ = v___x_6607_;
goto v___jp_6543_;
}
else
{
size_t v___x_6612_; size_t v___x_6613_; lean_object* v___x_6614_; lean_object* v___x_6615_; uint64_t v___x_6616_; 
v___x_6612_ = ((size_t)0ULL);
v___x_6613_ = lean_usize_of_nat(v___x_6609_);
v___x_6614_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6517_);
v___x_6615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6523_, v___f_6524_, v_traceArgs_6517_, v___x_6612_, v___x_6613_, v___x_6614_);
v___x_6616_ = lean_unbox_uint64(v___x_6615_);
lean_dec(v___x_6615_);
v___y_6544_ = v___x_6616_;
goto v___jp_6543_;
}
}
else
{
size_t v___x_6617_; size_t v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; uint64_t v___x_6621_; 
v___x_6617_ = ((size_t)0ULL);
v___x_6618_ = lean_usize_of_nat(v___x_6609_);
v___x_6619_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6517_);
v___x_6620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6523_, v___f_6524_, v_traceArgs_6517_, v___x_6617_, v___x_6618_, v___x_6619_);
v___x_6621_ = lean_unbox_uint64(v___x_6620_);
lean_dec(v___x_6620_);
v___y_6544_ = v___x_6621_;
goto v___jp_6543_;
}
}
v___jp_6543_:
{
lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6556_; 
v___x_6545_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__0, &l_Lake_buildO___lam__2___closed__0_once, _init_l_Lake_buildO___lam__2___closed__0);
v___x_6546_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__1, &l_Lake_buildO___lam__2___closed__1_once, _init_l_Lake_buildO___lam__2___closed__1);
lean_inc_ref(v_traceArgs_6517_);
v___x_6547_ = lean_array_to_list(v_traceArgs_6517_);
v___x_6548_ = l_List_toString___redArg(v___f_6518_, v___x_6547_);
v___x_6549_ = lean_string_append(v___x_6546_, v___x_6548_);
lean_dec_ref(v___x_6548_);
v___x_6550_ = lean_string_append(v___x_6545_, v___x_6549_);
lean_dec_ref(v___x_6549_);
v___x_6551_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_6552_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6553_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6553_, 0, v___x_6550_);
lean_ctor_set(v___x_6553_, 1, v___x_6551_);
lean_ctor_set(v___x_6553_, 2, v___x_6552_);
lean_ctor_set_uint64(v___x_6553_, sizeof(void*)*3, v___y_6544_);
v___x_6554_ = l_Lake_BuildTrace_mix(v___x_6542_, v___x_6553_);
if (v_isShared_6540_ == 0)
{
lean_ctor_set(v___x_6539_, 1, v___x_6554_);
v___x_6556_ = v___x_6539_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6606_; 
v_reuseFailAlloc_6606_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6606_, 0, v_log_6533_);
lean_ctor_set(v_reuseFailAlloc_6606_, 1, v___x_6554_);
lean_ctor_set(v_reuseFailAlloc_6606_, 2, v_buildTime_6537_);
lean_ctor_set_uint8(v_reuseFailAlloc_6606_, sizeof(void*)*3, v_action_6534_);
lean_ctor_set_uint8(v_reuseFailAlloc_6606_, sizeof(void*)*3 + 1, v_wantsRebuild_6535_);
v___x_6556_ = v_reuseFailAlloc_6606_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
lean_object* v___x_6557_; 
lean_inc_ref(v___y_6530_);
lean_inc(v___y_6529_);
lean_inc(v___y_6528_);
lean_inc(v___y_6527_);
lean_inc_ref(v___y_6526_);
v___x_6557_ = lean_apply_7(v_extraDepTrace_6519_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___x_6556_, lean_box(0));
if (lean_obj_tag(v___x_6557_) == 0)
{
lean_object* v_a_6558_; lean_object* v_a_6559_; lean_object* v_log_6560_; uint8_t v_action_6561_; uint8_t v_wantsRebuild_6562_; lean_object* v_trace_6563_; lean_object* v_buildTime_6564_; lean_object* v___x_6566_; uint8_t v_isShared_6567_; uint8_t v_isSharedCheck_6596_; 
v_a_6558_ = lean_ctor_get(v___x_6557_, 1);
lean_inc(v_a_6558_);
v_a_6559_ = lean_ctor_get(v___x_6557_, 0);
lean_inc(v_a_6559_);
lean_dec_ref(v___x_6557_);
v_log_6560_ = lean_ctor_get(v_a_6558_, 0);
v_action_6561_ = lean_ctor_get_uint8(v_a_6558_, sizeof(void*)*3);
v_wantsRebuild_6562_ = lean_ctor_get_uint8(v_a_6558_, sizeof(void*)*3 + 1);
v_trace_6563_ = lean_ctor_get(v_a_6558_, 1);
v_buildTime_6564_ = lean_ctor_get(v_a_6558_, 2);
v_isSharedCheck_6596_ = !lean_is_exclusive(v_a_6558_);
if (v_isSharedCheck_6596_ == 0)
{
v___x_6566_ = v_a_6558_;
v_isShared_6567_ = v_isSharedCheck_6596_;
goto v_resetjp_6565_;
}
else
{
lean_inc(v_buildTime_6564_);
lean_inc(v_trace_6563_);
lean_inc(v_log_6560_);
lean_dec(v_a_6558_);
v___x_6566_ = lean_box(0);
v_isShared_6567_ = v_isSharedCheck_6596_;
goto v_resetjp_6565_;
}
v_resetjp_6565_:
{
lean_object* v___x_6568_; lean_object* v___x_6570_; 
v___x_6568_ = l_Lake_BuildTrace_mix(v_trace_6563_, v_a_6559_);
if (v_isShared_6567_ == 0)
{
lean_ctor_set(v___x_6566_, 1, v___x_6568_);
v___x_6570_ = v___x_6566_;
goto v_reusejp_6569_;
}
else
{
lean_object* v_reuseFailAlloc_6595_; 
v_reuseFailAlloc_6595_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6595_, 0, v_log_6560_);
lean_ctor_set(v_reuseFailAlloc_6595_, 1, v___x_6568_);
lean_ctor_set(v_reuseFailAlloc_6595_, 2, v_buildTime_6564_);
lean_ctor_set_uint8(v_reuseFailAlloc_6595_, sizeof(void*)*3, v_action_6561_);
lean_ctor_set_uint8(v_reuseFailAlloc_6595_, sizeof(void*)*3 + 1, v_wantsRebuild_6562_);
v___x_6570_ = v_reuseFailAlloc_6595_;
goto v_reusejp_6569_;
}
v_reusejp_6569_:
{
lean_object* v___x_6571_; lean_object* v___f_6572_; uint8_t v___x_6573_; lean_object* v___x_6574_; lean_object* v___x_6575_; 
v___x_6571_ = l_Array_append___redArg(v_weakArgs_6520_, v_traceArgs_6517_);
lean_dec_ref(v_traceArgs_6517_);
lean_inc_ref(v_oFile_6521_);
v___f_6572_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__1___boxed), 11, 4);
lean_closure_set(v___f_6572_, 0, v_oFile_6521_);
lean_closure_set(v___f_6572_, 1, v_srcFile_6525_);
lean_closure_set(v___f_6572_, 2, v___x_6571_);
lean_closure_set(v___f_6572_, 3, v_compiler_6522_);
v___x_6573_ = 0;
v___x_6574_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__2, &l_Lake_buildO___lam__2___closed__2_once, _init_l_Lake_buildO___lam__2___closed__2);
v___x_6575_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6521_, v___f_6572_, v___x_6573_, v___x_6574_, v___x_6573_, v___x_6573_, v___x_6573_, v___y_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___x_6570_);
if (lean_obj_tag(v___x_6575_) == 0)
{
lean_object* v_a_6576_; lean_object* v_a_6577_; lean_object* v___x_6579_; uint8_t v_isShared_6580_; uint8_t v_isSharedCheck_6585_; 
v_a_6576_ = lean_ctor_get(v___x_6575_, 0);
v_a_6577_ = lean_ctor_get(v___x_6575_, 1);
v_isSharedCheck_6585_ = !lean_is_exclusive(v___x_6575_);
if (v_isSharedCheck_6585_ == 0)
{
v___x_6579_ = v___x_6575_;
v_isShared_6580_ = v_isSharedCheck_6585_;
goto v_resetjp_6578_;
}
else
{
lean_inc(v_a_6577_);
lean_inc(v_a_6576_);
lean_dec(v___x_6575_);
v___x_6579_ = lean_box(0);
v_isShared_6580_ = v_isSharedCheck_6585_;
goto v_resetjp_6578_;
}
v_resetjp_6578_:
{
lean_object* v_path_6581_; lean_object* v___x_6583_; 
v_path_6581_ = lean_ctor_get(v_a_6576_, 1);
lean_inc_ref(v_path_6581_);
lean_dec(v_a_6576_);
if (v_isShared_6580_ == 0)
{
lean_ctor_set(v___x_6579_, 0, v_path_6581_);
v___x_6583_ = v___x_6579_;
goto v_reusejp_6582_;
}
else
{
lean_object* v_reuseFailAlloc_6584_; 
v_reuseFailAlloc_6584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6584_, 0, v_path_6581_);
lean_ctor_set(v_reuseFailAlloc_6584_, 1, v_a_6577_);
v___x_6583_ = v_reuseFailAlloc_6584_;
goto v_reusejp_6582_;
}
v_reusejp_6582_:
{
return v___x_6583_;
}
}
}
else
{
lean_object* v_a_6586_; lean_object* v_a_6587_; lean_object* v___x_6589_; uint8_t v_isShared_6590_; uint8_t v_isSharedCheck_6594_; 
v_a_6586_ = lean_ctor_get(v___x_6575_, 0);
v_a_6587_ = lean_ctor_get(v___x_6575_, 1);
v_isSharedCheck_6594_ = !lean_is_exclusive(v___x_6575_);
if (v_isSharedCheck_6594_ == 0)
{
v___x_6589_ = v___x_6575_;
v_isShared_6590_ = v_isSharedCheck_6594_;
goto v_resetjp_6588_;
}
else
{
lean_inc(v_a_6587_);
lean_inc(v_a_6586_);
lean_dec(v___x_6575_);
v___x_6589_ = lean_box(0);
v_isShared_6590_ = v_isSharedCheck_6594_;
goto v_resetjp_6588_;
}
v_resetjp_6588_:
{
lean_object* v___x_6592_; 
if (v_isShared_6590_ == 0)
{
v___x_6592_ = v___x_6589_;
goto v_reusejp_6591_;
}
else
{
lean_object* v_reuseFailAlloc_6593_; 
v_reuseFailAlloc_6593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6593_, 0, v_a_6586_);
lean_ctor_set(v_reuseFailAlloc_6593_, 1, v_a_6587_);
v___x_6592_ = v_reuseFailAlloc_6593_;
goto v_reusejp_6591_;
}
v_reusejp_6591_:
{
return v___x_6592_;
}
}
}
}
}
}
else
{
lean_object* v_a_6597_; lean_object* v_a_6598_; lean_object* v___x_6600_; uint8_t v_isShared_6601_; uint8_t v_isSharedCheck_6605_; 
lean_dec_ref(v___y_6526_);
lean_dec_ref(v_srcFile_6525_);
lean_dec_ref(v_compiler_6522_);
lean_dec_ref(v_oFile_6521_);
lean_dec_ref(v_weakArgs_6520_);
lean_dec_ref(v_traceArgs_6517_);
v_a_6597_ = lean_ctor_get(v___x_6557_, 0);
v_a_6598_ = lean_ctor_get(v___x_6557_, 1);
v_isSharedCheck_6605_ = !lean_is_exclusive(v___x_6557_);
if (v_isSharedCheck_6605_ == 0)
{
v___x_6600_ = v___x_6557_;
v_isShared_6601_ = v_isSharedCheck_6605_;
goto v_resetjp_6599_;
}
else
{
lean_inc(v_a_6598_);
lean_inc(v_a_6597_);
lean_dec(v___x_6557_);
v___x_6600_ = lean_box(0);
v_isShared_6601_ = v_isSharedCheck_6605_;
goto v_resetjp_6599_;
}
v_resetjp_6599_:
{
lean_object* v___x_6603_; 
if (v_isShared_6601_ == 0)
{
v___x_6603_ = v___x_6600_;
goto v_reusejp_6602_;
}
else
{
lean_object* v_reuseFailAlloc_6604_; 
v_reuseFailAlloc_6604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6604_, 0, v_a_6597_);
lean_ctor_set(v_reuseFailAlloc_6604_, 1, v_a_6598_);
v___x_6603_ = v_reuseFailAlloc_6604_;
goto v_reusejp_6602_;
}
v_reusejp_6602_:
{
return v___x_6603_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object* v_traceArgs_6623_, lean_object* v___f_6624_, lean_object* v_extraDepTrace_6625_, lean_object* v_weakArgs_6626_, lean_object* v_oFile_6627_, lean_object* v_compiler_6628_, lean_object* v___x_6629_, lean_object* v___f_6630_, lean_object* v_srcFile_6631_, lean_object* v___y_6632_, lean_object* v___y_6633_, lean_object* v___y_6634_, lean_object* v___y_6635_, lean_object* v___y_6636_, lean_object* v___y_6637_, lean_object* v___y_6638_){
_start:
{
lean_object* v_res_6639_; 
v_res_6639_ = l_Lake_buildO___lam__2(v_traceArgs_6623_, v___f_6624_, v_extraDepTrace_6625_, v_weakArgs_6626_, v_oFile_6627_, v_compiler_6628_, v___x_6629_, v___f_6630_, v_srcFile_6631_, v___y_6632_, v___y_6633_, v___y_6634_, v___y_6635_, v___y_6636_, v___y_6637_);
lean_dec_ref(v___y_6636_);
lean_dec(v___y_6635_);
lean_dec(v___y_6634_);
lean_dec(v___y_6633_);
return v_res_6639_;
}
}
static lean_object* _init_l_Lake_buildO___closed__0(void){
_start:
{
lean_object* v___f_6640_; 
v___f_6640_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__0___boxed), 2, 0);
return v___f_6640_;
}
}
static lean_object* _init_l_Lake_buildO___closed__1(void){
_start:
{
lean_object* v___f_6641_; 
v___f_6641_ = lean_alloc_closure((void*)(l_instToStringString___lam__0___boxed), 1, 0);
return v___f_6641_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object* v_oFile_6642_, lean_object* v_srcJob_6643_, lean_object* v_weakArgs_6644_, lean_object* v_traceArgs_6645_, lean_object* v_compiler_6646_, lean_object* v_extraDepTrace_6647_, lean_object* v_a_6648_, lean_object* v_a_6649_, lean_object* v_a_6650_, lean_object* v_a_6651_, lean_object* v_a_6652_, lean_object* v_a_6653_){
_start:
{
lean_object* v___f_6655_; lean_object* v___x_6656_; lean_object* v___f_6657_; lean_object* v___x_6658_; lean_object* v___f_6659_; lean_object* v___x_6660_; uint8_t v___x_6661_; lean_object* v___x_6662_; 
v___f_6655_ = lean_obj_once(&l_Lake_buildO___closed__0, &l_Lake_buildO___closed__0_once, _init_l_Lake_buildO___closed__0);
v___x_6656_ = l_Lake_instDataKindFilePath;
v___f_6657_ = lean_obj_once(&l_Lake_buildO___closed__1, &l_Lake_buildO___closed__1_once, _init_l_Lake_buildO___closed__1);
v___x_6658_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__9, &l_Lake_instMonadWorkspaceJobM___closed__9_once, _init_l_Lake_instMonadWorkspaceJobM___closed__9);
v___f_6659_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__2___boxed), 16, 8);
lean_closure_set(v___f_6659_, 0, v_traceArgs_6645_);
lean_closure_set(v___f_6659_, 1, v___f_6657_);
lean_closure_set(v___f_6659_, 2, v_extraDepTrace_6647_);
lean_closure_set(v___f_6659_, 3, v_weakArgs_6644_);
lean_closure_set(v___f_6659_, 4, v_oFile_6642_);
lean_closure_set(v___f_6659_, 5, v_compiler_6646_);
lean_closure_set(v___f_6659_, 6, v___x_6658_);
lean_closure_set(v___f_6659_, 7, v___f_6655_);
v___x_6660_ = lean_unsigned_to_nat(0u);
v___x_6661_ = 0;
v___x_6662_ = l_Lake_Job_mapM___redArg(v___x_6656_, v_srcJob_6643_, v___f_6659_, v___x_6660_, v___x_6661_, v_a_6648_, v_a_6649_, v_a_6650_, v_a_6651_, v_a_6652_, v_a_6653_);
return v___x_6662_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object* v_oFile_6663_, lean_object* v_srcJob_6664_, lean_object* v_weakArgs_6665_, lean_object* v_traceArgs_6666_, lean_object* v_compiler_6667_, lean_object* v_extraDepTrace_6668_, lean_object* v_a_6669_, lean_object* v_a_6670_, lean_object* v_a_6671_, lean_object* v_a_6672_, lean_object* v_a_6673_, lean_object* v_a_6674_, lean_object* v_a_6675_){
_start:
{
lean_object* v_res_6676_; 
v_res_6676_ = l_Lake_buildO(v_oFile_6663_, v_srcJob_6664_, v_weakArgs_6665_, v_traceArgs_6666_, v_compiler_6667_, v_extraDepTrace_6668_, v_a_6669_, v_a_6670_, v_a_6671_, v_a_6672_, v_a_6673_, v_a_6674_);
lean_dec_ref(v_a_6674_);
lean_dec_ref(v_a_6673_);
lean_dec(v_a_6672_);
lean_dec(v_a_6671_);
lean_dec(v_a_6670_);
return v_res_6676_;
}
}
static lean_object* _init_l_Lake_buildLeanO___lam__0___closed__0(void){
_start:
{
lean_object* v___x_6677_; 
v___x_6677_ = lean_mk_string_unchecked("-I", 2, 2);
return v___x_6677_;
}
}
static lean_object* _init_l_Lake_buildLeanO___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; 
v___x_6678_ = lean_obj_once(&l_Lake_buildLeanO___lam__0___closed__0, &l_Lake_buildLeanO___lam__0___closed__0_once, _init_l_Lake_buildLeanO___lam__0___closed__0);
v___x_6679_ = lean_unsigned_to_nat(2u);
v___x_6680_ = lean_mk_empty_array_with_capacity(v___x_6679_);
v___x_6681_ = lean_array_push(v___x_6680_, v___x_6678_);
return v___x_6681_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0(lean_object* v_weakArgs_6682_, lean_object* v_traceArgs_6683_, lean_object* v_oFile_6684_, lean_object* v_srcFile_6685_, lean_object* v_leanIncludeDir_x3f_6686_, lean_object* v___y_6687_, lean_object* v___y_6688_, lean_object* v___y_6689_, lean_object* v___y_6690_, lean_object* v___y_6691_, lean_object* v___y_6692_){
_start:
{
lean_object* v_toContext_6694_; lean_object* v_lakeEnv_6695_; lean_object* v_log_6696_; uint8_t v_action_6697_; uint8_t v_wantsRebuild_6698_; lean_object* v_trace_6699_; lean_object* v_buildTime_6700_; lean_object* v___x_6702_; uint8_t v_isShared_6703_; uint8_t v_isSharedCheck_6741_; 
v_toContext_6694_ = lean_ctor_get(v___y_6691_, 1);
v_lakeEnv_6695_ = lean_ctor_get(v_toContext_6694_, 0);
v_log_6696_ = lean_ctor_get(v___y_6692_, 0);
v_action_6697_ = lean_ctor_get_uint8(v___y_6692_, sizeof(void*)*3);
v_wantsRebuild_6698_ = lean_ctor_get_uint8(v___y_6692_, sizeof(void*)*3 + 1);
v_trace_6699_ = lean_ctor_get(v___y_6692_, 1);
v_buildTime_6700_ = lean_ctor_get(v___y_6692_, 2);
v_isSharedCheck_6741_ = !lean_is_exclusive(v___y_6692_);
if (v_isSharedCheck_6741_ == 0)
{
v___x_6702_ = v___y_6692_;
v_isShared_6703_ = v_isSharedCheck_6741_;
goto v_resetjp_6701_;
}
else
{
lean_inc(v_buildTime_6700_);
lean_inc(v_trace_6699_);
lean_inc(v_log_6696_);
lean_dec(v___y_6692_);
v___x_6702_ = lean_box(0);
v_isShared_6703_ = v_isSharedCheck_6741_;
goto v_resetjp_6701_;
}
v_resetjp_6701_:
{
lean_object* v_lean_6704_; lean_object* v___y_6706_; 
v_lean_6704_ = lean_ctor_get(v_lakeEnv_6695_, 1);
if (lean_obj_tag(v_leanIncludeDir_x3f_6686_) == 0)
{
lean_object* v_includeDir_6739_; 
v_includeDir_6739_ = lean_ctor_get(v_lean_6704_, 4);
lean_inc_ref(v_includeDir_6739_);
v___y_6706_ = v_includeDir_6739_;
goto v___jp_6705_;
}
else
{
lean_object* v_val_6740_; 
v_val_6740_ = lean_ctor_get(v_leanIncludeDir_x3f_6686_, 0);
lean_inc(v_val_6740_);
lean_dec_ref(v_leanIncludeDir_x3f_6686_);
v___y_6706_ = v_val_6740_;
goto v___jp_6705_;
}
v___jp_6705_:
{
lean_object* v_cc_6707_; lean_object* v_ccFlags_6708_; lean_object* v___x_6709_; lean_object* v___x_6710_; lean_object* v___x_6711_; lean_object* v___x_6712_; lean_object* v___x_6713_; lean_object* v___x_6714_; 
v_cc_6707_ = lean_ctor_get(v_lean_6704_, 14);
v_ccFlags_6708_ = lean_ctor_get(v_lean_6704_, 18);
v___x_6709_ = lean_obj_once(&l_Lake_buildLeanO___lam__0___closed__1, &l_Lake_buildLeanO___lam__0___closed__1_once, _init_l_Lake_buildLeanO___lam__0___closed__1);
v___x_6710_ = lean_array_push(v___x_6709_, v___y_6706_);
v___x_6711_ = l_Array_append___redArg(v___x_6710_, v_ccFlags_6708_);
v___x_6712_ = l_Array_append___redArg(v___x_6711_, v_weakArgs_6682_);
v___x_6713_ = l_Array_append___redArg(v___x_6712_, v_traceArgs_6683_);
lean_inc_ref(v_cc_6707_);
v___x_6714_ = l_Lake_compileO(v_oFile_6684_, v_srcFile_6685_, v___x_6713_, v_cc_6707_, v_log_6696_);
lean_dec_ref(v___x_6713_);
if (lean_obj_tag(v___x_6714_) == 0)
{
lean_object* v_a_6715_; lean_object* v_a_6716_; lean_object* v___x_6718_; uint8_t v_isShared_6719_; uint8_t v_isSharedCheck_6726_; 
v_a_6715_ = lean_ctor_get(v___x_6714_, 0);
v_a_6716_ = lean_ctor_get(v___x_6714_, 1);
v_isSharedCheck_6726_ = !lean_is_exclusive(v___x_6714_);
if (v_isSharedCheck_6726_ == 0)
{
v___x_6718_ = v___x_6714_;
v_isShared_6719_ = v_isSharedCheck_6726_;
goto v_resetjp_6717_;
}
else
{
lean_inc(v_a_6716_);
lean_inc(v_a_6715_);
lean_dec(v___x_6714_);
v___x_6718_ = lean_box(0);
v_isShared_6719_ = v_isSharedCheck_6726_;
goto v_resetjp_6717_;
}
v_resetjp_6717_:
{
lean_object* v___x_6721_; 
if (v_isShared_6703_ == 0)
{
lean_ctor_set(v___x_6702_, 0, v_a_6716_);
v___x_6721_ = v___x_6702_;
goto v_reusejp_6720_;
}
else
{
lean_object* v_reuseFailAlloc_6725_; 
v_reuseFailAlloc_6725_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6725_, 0, v_a_6716_);
lean_ctor_set(v_reuseFailAlloc_6725_, 1, v_trace_6699_);
lean_ctor_set(v_reuseFailAlloc_6725_, 2, v_buildTime_6700_);
lean_ctor_set_uint8(v_reuseFailAlloc_6725_, sizeof(void*)*3, v_action_6697_);
lean_ctor_set_uint8(v_reuseFailAlloc_6725_, sizeof(void*)*3 + 1, v_wantsRebuild_6698_);
v___x_6721_ = v_reuseFailAlloc_6725_;
goto v_reusejp_6720_;
}
v_reusejp_6720_:
{
lean_object* v___x_6723_; 
if (v_isShared_6719_ == 0)
{
lean_ctor_set(v___x_6718_, 1, v___x_6721_);
v___x_6723_ = v___x_6718_;
goto v_reusejp_6722_;
}
else
{
lean_object* v_reuseFailAlloc_6724_; 
v_reuseFailAlloc_6724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6724_, 0, v_a_6715_);
lean_ctor_set(v_reuseFailAlloc_6724_, 1, v___x_6721_);
v___x_6723_ = v_reuseFailAlloc_6724_;
goto v_reusejp_6722_;
}
v_reusejp_6722_:
{
return v___x_6723_;
}
}
}
}
else
{
lean_object* v_a_6727_; lean_object* v_a_6728_; lean_object* v___x_6730_; uint8_t v_isShared_6731_; uint8_t v_isSharedCheck_6738_; 
v_a_6727_ = lean_ctor_get(v___x_6714_, 0);
v_a_6728_ = lean_ctor_get(v___x_6714_, 1);
v_isSharedCheck_6738_ = !lean_is_exclusive(v___x_6714_);
if (v_isSharedCheck_6738_ == 0)
{
v___x_6730_ = v___x_6714_;
v_isShared_6731_ = v_isSharedCheck_6738_;
goto v_resetjp_6729_;
}
else
{
lean_inc(v_a_6728_);
lean_inc(v_a_6727_);
lean_dec(v___x_6714_);
v___x_6730_ = lean_box(0);
v_isShared_6731_ = v_isSharedCheck_6738_;
goto v_resetjp_6729_;
}
v_resetjp_6729_:
{
lean_object* v___x_6733_; 
if (v_isShared_6703_ == 0)
{
lean_ctor_set(v___x_6702_, 0, v_a_6728_);
v___x_6733_ = v___x_6702_;
goto v_reusejp_6732_;
}
else
{
lean_object* v_reuseFailAlloc_6737_; 
v_reuseFailAlloc_6737_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6737_, 0, v_a_6728_);
lean_ctor_set(v_reuseFailAlloc_6737_, 1, v_trace_6699_);
lean_ctor_set(v_reuseFailAlloc_6737_, 2, v_buildTime_6700_);
lean_ctor_set_uint8(v_reuseFailAlloc_6737_, sizeof(void*)*3, v_action_6697_);
lean_ctor_set_uint8(v_reuseFailAlloc_6737_, sizeof(void*)*3 + 1, v_wantsRebuild_6698_);
v___x_6733_ = v_reuseFailAlloc_6737_;
goto v_reusejp_6732_;
}
v_reusejp_6732_:
{
lean_object* v___x_6735_; 
if (v_isShared_6731_ == 0)
{
lean_ctor_set(v___x_6730_, 1, v___x_6733_);
v___x_6735_ = v___x_6730_;
goto v_reusejp_6734_;
}
else
{
lean_object* v_reuseFailAlloc_6736_; 
v_reuseFailAlloc_6736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6736_, 0, v_a_6727_);
lean_ctor_set(v_reuseFailAlloc_6736_, 1, v___x_6733_);
v___x_6735_ = v_reuseFailAlloc_6736_;
goto v_reusejp_6734_;
}
v_reusejp_6734_:
{
return v___x_6735_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0___boxed(lean_object* v_weakArgs_6742_, lean_object* v_traceArgs_6743_, lean_object* v_oFile_6744_, lean_object* v_srcFile_6745_, lean_object* v_leanIncludeDir_x3f_6746_, lean_object* v___y_6747_, lean_object* v___y_6748_, lean_object* v___y_6749_, lean_object* v___y_6750_, lean_object* v___y_6751_, lean_object* v___y_6752_, lean_object* v___y_6753_){
_start:
{
lean_object* v_res_6754_; 
v_res_6754_ = l_Lake_buildLeanO___lam__0(v_weakArgs_6742_, v_traceArgs_6743_, v_oFile_6744_, v_srcFile_6745_, v_leanIncludeDir_x3f_6746_, v___y_6747_, v___y_6748_, v___y_6749_, v___y_6750_, v___y_6751_, v___y_6752_);
lean_dec_ref(v___y_6751_);
lean_dec(v___y_6750_);
lean_dec(v___y_6749_);
lean_dec(v___y_6748_);
lean_dec_ref(v___y_6747_);
lean_dec_ref(v_traceArgs_6743_);
lean_dec_ref(v_weakArgs_6742_);
return v_res_6754_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(lean_object* v_as_6755_, size_t v_i_6756_, size_t v_stop_6757_, uint64_t v_b_6758_){
_start:
{
uint8_t v___x_6759_; 
v___x_6759_ = lean_usize_dec_eq(v_i_6756_, v_stop_6757_);
if (v___x_6759_ == 0)
{
lean_object* v___x_6760_; uint64_t v___x_6761_; uint64_t v___x_6762_; uint64_t v___x_6763_; uint64_t v___x_6764_; size_t v___x_6765_; size_t v___x_6766_; 
v___x_6760_ = lean_array_uget_borrowed(v_as_6755_, v_i_6756_);
v___x_6761_ = l_Lake_Hash_nil;
v___x_6762_ = lean_string_hash(v___x_6760_);
v___x_6763_ = lean_uint64_mix_hash(v___x_6761_, v___x_6762_);
v___x_6764_ = lean_uint64_mix_hash(v_b_6758_, v___x_6763_);
v___x_6765_ = ((size_t)1ULL);
v___x_6766_ = lean_usize_add(v_i_6756_, v___x_6765_);
v_i_6756_ = v___x_6766_;
v_b_6758_ = v___x_6764_;
goto _start;
}
else
{
return v_b_6758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1___boxed(lean_object* v_as_6768_, lean_object* v_i_6769_, lean_object* v_stop_6770_, lean_object* v_b_6771_){
_start:
{
size_t v_i_boxed_6772_; size_t v_stop_boxed_6773_; uint64_t v_b_boxed_6774_; uint64_t v_res_6775_; lean_object* v_r_6776_; 
v_i_boxed_6772_ = lean_unbox_usize(v_i_6769_);
lean_dec(v_i_6769_);
v_stop_boxed_6773_ = lean_unbox_usize(v_stop_6770_);
lean_dec(v_stop_6770_);
v_b_boxed_6774_ = lean_unbox_uint64(v_b_6771_);
lean_dec_ref(v_b_6771_);
v_res_6775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_as_6768_, v_i_boxed_6772_, v_stop_boxed_6773_, v_b_boxed_6774_);
lean_dec_ref(v_as_6768_);
v_r_6776_ = lean_box_uint64(v_res_6775_);
return v_r_6776_;
}
}
static lean_object* _init_l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_6777_; 
v___x_6777_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_6777_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(lean_object* v_x_6778_, lean_object* v_x_6779_){
_start:
{
if (lean_obj_tag(v_x_6779_) == 0)
{
return v_x_6778_;
}
else
{
lean_object* v_head_6780_; lean_object* v_tail_6781_; lean_object* v___x_6782_; lean_object* v___x_6783_; lean_object* v___x_6784_; 
v_head_6780_ = lean_ctor_get(v_x_6779_, 0);
v_tail_6781_ = lean_ctor_get(v_x_6779_, 1);
v___x_6782_ = lean_obj_once(&l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0, &l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0_once, _init_l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0);
v___x_6783_ = lean_string_append(v_x_6778_, v___x_6782_);
v___x_6784_ = lean_string_append(v___x_6783_, v_head_6780_);
v_x_6778_ = v___x_6784_;
v_x_6779_ = v_tail_6781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___boxed(lean_object* v_x_6786_, lean_object* v_x_6787_){
_start:
{
lean_object* v_res_6788_; 
v_res_6788_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v_x_6786_, v_x_6787_);
lean_dec(v_x_6787_);
return v_res_6788_;
}
}
static lean_object* _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0(void){
_start:
{
lean_object* v___x_6789_; 
v___x_6789_ = lean_mk_string_unchecked("[]", 2, 2);
return v___x_6789_;
}
}
static lean_object* _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1(void){
_start:
{
lean_object* v___x_6790_; 
v___x_6790_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_6790_;
}
}
static lean_object* _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2(void){
_start:
{
lean_object* v___x_6791_; 
v___x_6791_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_6791_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0(lean_object* v_x_6792_){
_start:
{
if (lean_obj_tag(v_x_6792_) == 0)
{
lean_object* v___x_6793_; 
v___x_6793_ = lean_obj_once(&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0, &l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0_once, _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0);
return v___x_6793_;
}
else
{
lean_object* v_tail_6794_; 
v_tail_6794_ = lean_ctor_get(v_x_6792_, 1);
if (lean_obj_tag(v_tail_6794_) == 0)
{
lean_object* v_head_6795_; lean_object* v___x_6796_; lean_object* v___x_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; 
v_head_6795_ = lean_ctor_get(v_x_6792_, 0);
v___x_6796_ = lean_obj_once(&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1, &l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1_once, _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1);
v___x_6797_ = lean_string_append(v___x_6796_, v_head_6795_);
v___x_6798_ = lean_obj_once(&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2, &l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2_once, _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2);
v___x_6799_ = lean_string_append(v___x_6797_, v___x_6798_);
return v___x_6799_;
}
else
{
lean_object* v_head_6800_; lean_object* v___x_6801_; lean_object* v___x_6802_; lean_object* v___x_6803_; uint32_t v___x_6804_; lean_object* v___x_6805_; 
v_head_6800_ = lean_ctor_get(v_x_6792_, 0);
v___x_6801_ = lean_obj_once(&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1, &l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1_once, _init_l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1);
v___x_6802_ = lean_string_append(v___x_6801_, v_head_6800_);
v___x_6803_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v___x_6802_, v_tail_6794_);
v___x_6804_ = 93;
v___x_6805_ = lean_string_push(v___x_6803_, v___x_6804_);
return v___x_6805_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___boxed(lean_object* v_x_6806_){
_start:
{
lean_object* v_res_6807_; 
v_res_6807_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v_x_6806_);
lean_dec(v_x_6806_);
return v_res_6807_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1(lean_object* v_weakArgs_6808_, lean_object* v_traceArgs_6809_, lean_object* v_oFile_6810_, lean_object* v_leanIncludeDir_x3f_6811_, lean_object* v_srcFile_6812_, lean_object* v___y_6813_, lean_object* v___y_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_, lean_object* v___y_6817_, lean_object* v___y_6818_){
_start:
{
lean_object* v_log_6820_; uint8_t v_action_6821_; uint8_t v_wantsRebuild_6822_; lean_object* v_trace_6823_; lean_object* v_buildTime_6824_; lean_object* v___x_6826_; uint8_t v_isShared_6827_; uint8_t v_isSharedCheck_6881_; 
v_log_6820_ = lean_ctor_get(v___y_6818_, 0);
v_action_6821_ = lean_ctor_get_uint8(v___y_6818_, sizeof(void*)*3);
v_wantsRebuild_6822_ = lean_ctor_get_uint8(v___y_6818_, sizeof(void*)*3 + 1);
v_trace_6823_ = lean_ctor_get(v___y_6818_, 1);
v_buildTime_6824_ = lean_ctor_get(v___y_6818_, 2);
v_isSharedCheck_6881_ = !lean_is_exclusive(v___y_6818_);
if (v_isSharedCheck_6881_ == 0)
{
v___x_6826_ = v___y_6818_;
v_isShared_6827_ = v_isSharedCheck_6881_;
goto v_resetjp_6825_;
}
else
{
lean_inc(v_buildTime_6824_);
lean_inc(v_trace_6823_);
lean_inc(v_log_6820_);
lean_dec(v___y_6818_);
v___x_6826_ = lean_box(0);
v_isShared_6827_ = v_isSharedCheck_6881_;
goto v_resetjp_6825_;
}
v_resetjp_6825_:
{
lean_object* v_leanTrace_6828_; lean_object* v___f_6829_; lean_object* v___x_6830_; uint64_t v___y_6832_; uint64_t v___x_6870_; lean_object* v___x_6871_; lean_object* v___x_6872_; uint8_t v___x_6873_; 
v_leanTrace_6828_ = lean_ctor_get(v___y_6817_, 2);
lean_inc_ref(v_oFile_6810_);
lean_inc_ref(v_traceArgs_6809_);
v___f_6829_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__0___boxed), 12, 5);
lean_closure_set(v___f_6829_, 0, v_weakArgs_6808_);
lean_closure_set(v___f_6829_, 1, v_traceArgs_6809_);
lean_closure_set(v___f_6829_, 2, v_oFile_6810_);
lean_closure_set(v___f_6829_, 3, v_srcFile_6812_);
lean_closure_set(v___f_6829_, 4, v_leanIncludeDir_x3f_6811_);
lean_inc_ref(v_leanTrace_6828_);
v___x_6830_ = l_Lake_BuildTrace_mix(v_trace_6823_, v_leanTrace_6828_);
v___x_6870_ = l_Lake_Hash_nil;
v___x_6871_ = lean_unsigned_to_nat(0u);
v___x_6872_ = lean_array_get_size(v_traceArgs_6809_);
v___x_6873_ = lean_nat_dec_lt(v___x_6871_, v___x_6872_);
if (v___x_6873_ == 0)
{
v___y_6832_ = v___x_6870_;
goto v___jp_6831_;
}
else
{
uint8_t v___x_6874_; 
v___x_6874_ = lean_nat_dec_le(v___x_6872_, v___x_6872_);
if (v___x_6874_ == 0)
{
if (v___x_6873_ == 0)
{
v___y_6832_ = v___x_6870_;
goto v___jp_6831_;
}
else
{
size_t v___x_6875_; size_t v___x_6876_; uint64_t v___x_6877_; 
v___x_6875_ = ((size_t)0ULL);
v___x_6876_ = lean_usize_of_nat(v___x_6872_);
v___x_6877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6809_, v___x_6875_, v___x_6876_, v___x_6870_);
v___y_6832_ = v___x_6877_;
goto v___jp_6831_;
}
}
else
{
size_t v___x_6878_; size_t v___x_6879_; uint64_t v___x_6880_; 
v___x_6878_ = ((size_t)0ULL);
v___x_6879_ = lean_usize_of_nat(v___x_6872_);
v___x_6880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6809_, v___x_6878_, v___x_6879_, v___x_6870_);
v___y_6832_ = v___x_6880_;
goto v___jp_6831_;
}
}
v___jp_6831_:
{
lean_object* v___x_6833_; lean_object* v___x_6834_; lean_object* v___x_6835_; lean_object* v___x_6836_; lean_object* v___x_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; lean_object* v___x_6844_; lean_object* v___x_6846_; 
v___x_6833_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__0, &l_Lake_buildO___lam__2___closed__0_once, _init_l_Lake_buildO___lam__2___closed__0);
v___x_6834_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__1, &l_Lake_buildO___lam__2___closed__1_once, _init_l_Lake_buildO___lam__2___closed__1);
v___x_6835_ = lean_array_to_list(v_traceArgs_6809_);
v___x_6836_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_6835_);
lean_dec(v___x_6835_);
v___x_6837_ = lean_string_append(v___x_6834_, v___x_6836_);
lean_dec_ref(v___x_6836_);
v___x_6838_ = lean_string_append(v___x_6833_, v___x_6837_);
lean_dec_ref(v___x_6837_);
v___x_6839_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_6840_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6841_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6841_, 0, v___x_6838_);
lean_ctor_set(v___x_6841_, 1, v___x_6839_);
lean_ctor_set(v___x_6841_, 2, v___x_6840_);
lean_ctor_set_uint64(v___x_6841_, sizeof(void*)*3, v___y_6832_);
v___x_6842_ = l_Lake_BuildTrace_mix(v___x_6830_, v___x_6841_);
v___x_6843_ = l_Lake_platformTrace;
v___x_6844_ = l_Lake_BuildTrace_mix(v___x_6842_, v___x_6843_);
if (v_isShared_6827_ == 0)
{
lean_ctor_set(v___x_6826_, 1, v___x_6844_);
v___x_6846_ = v___x_6826_;
goto v_reusejp_6845_;
}
else
{
lean_object* v_reuseFailAlloc_6869_; 
v_reuseFailAlloc_6869_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6869_, 0, v_log_6820_);
lean_ctor_set(v_reuseFailAlloc_6869_, 1, v___x_6844_);
lean_ctor_set(v_reuseFailAlloc_6869_, 2, v_buildTime_6824_);
lean_ctor_set_uint8(v_reuseFailAlloc_6869_, sizeof(void*)*3, v_action_6821_);
lean_ctor_set_uint8(v_reuseFailAlloc_6869_, sizeof(void*)*3 + 1, v_wantsRebuild_6822_);
v___x_6846_ = v_reuseFailAlloc_6869_;
goto v_reusejp_6845_;
}
v_reusejp_6845_:
{
uint8_t v___x_6847_; lean_object* v___x_6848_; lean_object* v___x_6849_; 
v___x_6847_ = 0;
v___x_6848_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__2, &l_Lake_buildO___lam__2___closed__2_once, _init_l_Lake_buildO___lam__2___closed__2);
v___x_6849_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6810_, v___f_6829_, v___x_6847_, v___x_6848_, v___x_6847_, v___x_6847_, v___x_6847_, v___y_6813_, v___y_6814_, v___y_6815_, v___y_6816_, v___y_6817_, v___x_6846_);
if (lean_obj_tag(v___x_6849_) == 0)
{
lean_object* v_a_6850_; lean_object* v_a_6851_; lean_object* v___x_6853_; uint8_t v_isShared_6854_; uint8_t v_isSharedCheck_6859_; 
v_a_6850_ = lean_ctor_get(v___x_6849_, 0);
v_a_6851_ = lean_ctor_get(v___x_6849_, 1);
v_isSharedCheck_6859_ = !lean_is_exclusive(v___x_6849_);
if (v_isSharedCheck_6859_ == 0)
{
v___x_6853_ = v___x_6849_;
v_isShared_6854_ = v_isSharedCheck_6859_;
goto v_resetjp_6852_;
}
else
{
lean_inc(v_a_6851_);
lean_inc(v_a_6850_);
lean_dec(v___x_6849_);
v___x_6853_ = lean_box(0);
v_isShared_6854_ = v_isSharedCheck_6859_;
goto v_resetjp_6852_;
}
v_resetjp_6852_:
{
lean_object* v_path_6855_; lean_object* v___x_6857_; 
v_path_6855_ = lean_ctor_get(v_a_6850_, 1);
lean_inc_ref(v_path_6855_);
lean_dec(v_a_6850_);
if (v_isShared_6854_ == 0)
{
lean_ctor_set(v___x_6853_, 0, v_path_6855_);
v___x_6857_ = v___x_6853_;
goto v_reusejp_6856_;
}
else
{
lean_object* v_reuseFailAlloc_6858_; 
v_reuseFailAlloc_6858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6858_, 0, v_path_6855_);
lean_ctor_set(v_reuseFailAlloc_6858_, 1, v_a_6851_);
v___x_6857_ = v_reuseFailAlloc_6858_;
goto v_reusejp_6856_;
}
v_reusejp_6856_:
{
return v___x_6857_;
}
}
}
else
{
lean_object* v_a_6860_; lean_object* v_a_6861_; lean_object* v___x_6863_; uint8_t v_isShared_6864_; uint8_t v_isSharedCheck_6868_; 
v_a_6860_ = lean_ctor_get(v___x_6849_, 0);
v_a_6861_ = lean_ctor_get(v___x_6849_, 1);
v_isSharedCheck_6868_ = !lean_is_exclusive(v___x_6849_);
if (v_isSharedCheck_6868_ == 0)
{
v___x_6863_ = v___x_6849_;
v_isShared_6864_ = v_isSharedCheck_6868_;
goto v_resetjp_6862_;
}
else
{
lean_inc(v_a_6861_);
lean_inc(v_a_6860_);
lean_dec(v___x_6849_);
v___x_6863_ = lean_box(0);
v_isShared_6864_ = v_isSharedCheck_6868_;
goto v_resetjp_6862_;
}
v_resetjp_6862_:
{
lean_object* v___x_6866_; 
if (v_isShared_6864_ == 0)
{
v___x_6866_ = v___x_6863_;
goto v_reusejp_6865_;
}
else
{
lean_object* v_reuseFailAlloc_6867_; 
v_reuseFailAlloc_6867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6867_, 0, v_a_6860_);
lean_ctor_set(v_reuseFailAlloc_6867_, 1, v_a_6861_);
v___x_6866_ = v_reuseFailAlloc_6867_;
goto v_reusejp_6865_;
}
v_reusejp_6865_:
{
return v___x_6866_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1___boxed(lean_object* v_weakArgs_6882_, lean_object* v_traceArgs_6883_, lean_object* v_oFile_6884_, lean_object* v_leanIncludeDir_x3f_6885_, lean_object* v_srcFile_6886_, lean_object* v___y_6887_, lean_object* v___y_6888_, lean_object* v___y_6889_, lean_object* v___y_6890_, lean_object* v___y_6891_, lean_object* v___y_6892_, lean_object* v___y_6893_){
_start:
{
lean_object* v_res_6894_; 
v_res_6894_ = l_Lake_buildLeanO___lam__1(v_weakArgs_6882_, v_traceArgs_6883_, v_oFile_6884_, v_leanIncludeDir_x3f_6885_, v_srcFile_6886_, v___y_6887_, v___y_6888_, v___y_6889_, v___y_6890_, v___y_6891_, v___y_6892_);
lean_dec_ref(v___y_6891_);
lean_dec(v___y_6890_);
lean_dec(v___y_6889_);
lean_dec(v___y_6888_);
return v_res_6894_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object* v_oFile_6895_, lean_object* v_srcJob_6896_, lean_object* v_weakArgs_6897_, lean_object* v_traceArgs_6898_, lean_object* v_leanIncludeDir_x3f_6899_, lean_object* v_a_6900_, lean_object* v_a_6901_, lean_object* v_a_6902_, lean_object* v_a_6903_, lean_object* v_a_6904_, lean_object* v_a_6905_){
_start:
{
lean_object* v___f_6907_; lean_object* v___x_6908_; lean_object* v___x_6909_; uint8_t v___x_6910_; lean_object* v___x_6911_; 
v___f_6907_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__1___boxed), 12, 4);
lean_closure_set(v___f_6907_, 0, v_weakArgs_6897_);
lean_closure_set(v___f_6907_, 1, v_traceArgs_6898_);
lean_closure_set(v___f_6907_, 2, v_oFile_6895_);
lean_closure_set(v___f_6907_, 3, v_leanIncludeDir_x3f_6899_);
v___x_6908_ = l_Lake_instDataKindFilePath;
v___x_6909_ = lean_unsigned_to_nat(0u);
v___x_6910_ = 0;
v___x_6911_ = l_Lake_Job_mapM___redArg(v___x_6908_, v_srcJob_6896_, v___f_6907_, v___x_6909_, v___x_6910_, v_a_6900_, v_a_6901_, v_a_6902_, v_a_6903_, v_a_6904_, v_a_6905_);
return v___x_6911_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object* v_oFile_6912_, lean_object* v_srcJob_6913_, lean_object* v_weakArgs_6914_, lean_object* v_traceArgs_6915_, lean_object* v_leanIncludeDir_x3f_6916_, lean_object* v_a_6917_, lean_object* v_a_6918_, lean_object* v_a_6919_, lean_object* v_a_6920_, lean_object* v_a_6921_, lean_object* v_a_6922_, lean_object* v_a_6923_){
_start:
{
lean_object* v_res_6924_; 
v_res_6924_ = l_Lake_buildLeanO(v_oFile_6912_, v_srcJob_6913_, v_weakArgs_6914_, v_traceArgs_6915_, v_leanIncludeDir_x3f_6916_, v_a_6917_, v_a_6918_, v_a_6919_, v_a_6920_, v_a_6921_, v_a_6922_);
lean_dec_ref(v_a_6922_);
lean_dec_ref(v_a_6921_);
lean_dec(v_a_6920_);
lean_dec(v_a_6919_);
lean_dec(v_a_6918_);
return v_res_6924_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object* v_libFile_6925_, lean_object* v_oFiles_6926_, uint8_t v_thin_6927_, lean_object* v___y_6928_, lean_object* v___y_6929_, lean_object* v___y_6930_, lean_object* v___y_6931_, lean_object* v___y_6932_, lean_object* v___y_6933_){
_start:
{
lean_object* v_toContext_6935_; lean_object* v_lakeEnv_6936_; lean_object* v_lean_6937_; lean_object* v_log_6938_; uint8_t v_action_6939_; uint8_t v_wantsRebuild_6940_; lean_object* v_trace_6941_; lean_object* v_buildTime_6942_; lean_object* v___x_6944_; uint8_t v_isShared_6945_; uint8_t v_isSharedCheck_6972_; 
v_toContext_6935_ = lean_ctor_get(v___y_6932_, 1);
v_lakeEnv_6936_ = lean_ctor_get(v_toContext_6935_, 0);
v_lean_6937_ = lean_ctor_get(v_lakeEnv_6936_, 1);
v_log_6938_ = lean_ctor_get(v___y_6933_, 0);
v_action_6939_ = lean_ctor_get_uint8(v___y_6933_, sizeof(void*)*3);
v_wantsRebuild_6940_ = lean_ctor_get_uint8(v___y_6933_, sizeof(void*)*3 + 1);
v_trace_6941_ = lean_ctor_get(v___y_6933_, 1);
v_buildTime_6942_ = lean_ctor_get(v___y_6933_, 2);
v_isSharedCheck_6972_ = !lean_is_exclusive(v___y_6933_);
if (v_isSharedCheck_6972_ == 0)
{
v___x_6944_ = v___y_6933_;
v_isShared_6945_ = v_isSharedCheck_6972_;
goto v_resetjp_6943_;
}
else
{
lean_inc(v_buildTime_6942_);
lean_inc(v_trace_6941_);
lean_inc(v_log_6938_);
lean_dec(v___y_6933_);
v___x_6944_ = lean_box(0);
v_isShared_6945_ = v_isSharedCheck_6972_;
goto v_resetjp_6943_;
}
v_resetjp_6943_:
{
lean_object* v_ar_6946_; lean_object* v___x_6947_; 
v_ar_6946_ = lean_ctor_get(v_lean_6937_, 13);
lean_inc_ref(v_ar_6946_);
v___x_6947_ = l_Lake_compileStaticLib(v_libFile_6925_, v_oFiles_6926_, v_ar_6946_, v_thin_6927_, v_log_6938_);
if (lean_obj_tag(v___x_6947_) == 0)
{
lean_object* v_a_6948_; lean_object* v_a_6949_; lean_object* v___x_6951_; uint8_t v_isShared_6952_; uint8_t v_isSharedCheck_6959_; 
v_a_6948_ = lean_ctor_get(v___x_6947_, 0);
v_a_6949_ = lean_ctor_get(v___x_6947_, 1);
v_isSharedCheck_6959_ = !lean_is_exclusive(v___x_6947_);
if (v_isSharedCheck_6959_ == 0)
{
v___x_6951_ = v___x_6947_;
v_isShared_6952_ = v_isSharedCheck_6959_;
goto v_resetjp_6950_;
}
else
{
lean_inc(v_a_6949_);
lean_inc(v_a_6948_);
lean_dec(v___x_6947_);
v___x_6951_ = lean_box(0);
v_isShared_6952_ = v_isSharedCheck_6959_;
goto v_resetjp_6950_;
}
v_resetjp_6950_:
{
lean_object* v___x_6954_; 
if (v_isShared_6945_ == 0)
{
lean_ctor_set(v___x_6944_, 0, v_a_6949_);
v___x_6954_ = v___x_6944_;
goto v_reusejp_6953_;
}
else
{
lean_object* v_reuseFailAlloc_6958_; 
v_reuseFailAlloc_6958_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6958_, 0, v_a_6949_);
lean_ctor_set(v_reuseFailAlloc_6958_, 1, v_trace_6941_);
lean_ctor_set(v_reuseFailAlloc_6958_, 2, v_buildTime_6942_);
lean_ctor_set_uint8(v_reuseFailAlloc_6958_, sizeof(void*)*3, v_action_6939_);
lean_ctor_set_uint8(v_reuseFailAlloc_6958_, sizeof(void*)*3 + 1, v_wantsRebuild_6940_);
v___x_6954_ = v_reuseFailAlloc_6958_;
goto v_reusejp_6953_;
}
v_reusejp_6953_:
{
lean_object* v___x_6956_; 
if (v_isShared_6952_ == 0)
{
lean_ctor_set(v___x_6951_, 1, v___x_6954_);
v___x_6956_ = v___x_6951_;
goto v_reusejp_6955_;
}
else
{
lean_object* v_reuseFailAlloc_6957_; 
v_reuseFailAlloc_6957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6957_, 0, v_a_6948_);
lean_ctor_set(v_reuseFailAlloc_6957_, 1, v___x_6954_);
v___x_6956_ = v_reuseFailAlloc_6957_;
goto v_reusejp_6955_;
}
v_reusejp_6955_:
{
return v___x_6956_;
}
}
}
}
else
{
lean_object* v_a_6960_; lean_object* v_a_6961_; lean_object* v___x_6963_; uint8_t v_isShared_6964_; uint8_t v_isSharedCheck_6971_; 
v_a_6960_ = lean_ctor_get(v___x_6947_, 0);
v_a_6961_ = lean_ctor_get(v___x_6947_, 1);
v_isSharedCheck_6971_ = !lean_is_exclusive(v___x_6947_);
if (v_isSharedCheck_6971_ == 0)
{
v___x_6963_ = v___x_6947_;
v_isShared_6964_ = v_isSharedCheck_6971_;
goto v_resetjp_6962_;
}
else
{
lean_inc(v_a_6961_);
lean_inc(v_a_6960_);
lean_dec(v___x_6947_);
v___x_6963_ = lean_box(0);
v_isShared_6964_ = v_isSharedCheck_6971_;
goto v_resetjp_6962_;
}
v_resetjp_6962_:
{
lean_object* v___x_6966_; 
if (v_isShared_6945_ == 0)
{
lean_ctor_set(v___x_6944_, 0, v_a_6961_);
v___x_6966_ = v___x_6944_;
goto v_reusejp_6965_;
}
else
{
lean_object* v_reuseFailAlloc_6970_; 
v_reuseFailAlloc_6970_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6970_, 0, v_a_6961_);
lean_ctor_set(v_reuseFailAlloc_6970_, 1, v_trace_6941_);
lean_ctor_set(v_reuseFailAlloc_6970_, 2, v_buildTime_6942_);
lean_ctor_set_uint8(v_reuseFailAlloc_6970_, sizeof(void*)*3, v_action_6939_);
lean_ctor_set_uint8(v_reuseFailAlloc_6970_, sizeof(void*)*3 + 1, v_wantsRebuild_6940_);
v___x_6966_ = v_reuseFailAlloc_6970_;
goto v_reusejp_6965_;
}
v_reusejp_6965_:
{
lean_object* v___x_6968_; 
if (v_isShared_6964_ == 0)
{
lean_ctor_set(v___x_6963_, 1, v___x_6966_);
v___x_6968_ = v___x_6963_;
goto v_reusejp_6967_;
}
else
{
lean_object* v_reuseFailAlloc_6969_; 
v_reuseFailAlloc_6969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6969_, 0, v_a_6960_);
lean_ctor_set(v_reuseFailAlloc_6969_, 1, v___x_6966_);
v___x_6968_ = v_reuseFailAlloc_6969_;
goto v_reusejp_6967_;
}
v_reusejp_6967_:
{
return v___x_6968_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object* v_libFile_6973_, lean_object* v_oFiles_6974_, lean_object* v_thin_6975_, lean_object* v___y_6976_, lean_object* v___y_6977_, lean_object* v___y_6978_, lean_object* v___y_6979_, lean_object* v___y_6980_, lean_object* v___y_6981_, lean_object* v___y_6982_){
_start:
{
uint8_t v_thin_boxed_6983_; lean_object* v_res_6984_; 
v_thin_boxed_6983_ = lean_unbox(v_thin_6975_);
v_res_6984_ = l_Lake_buildStaticLib___lam__0(v_libFile_6973_, v_oFiles_6974_, v_thin_boxed_6983_, v___y_6976_, v___y_6977_, v___y_6978_, v___y_6979_, v___y_6980_, v___y_6981_);
lean_dec_ref(v___y_6980_);
lean_dec(v___y_6979_);
lean_dec(v___y_6978_);
lean_dec(v___y_6977_);
lean_dec_ref(v___y_6976_);
return v_res_6984_;
}
}
static lean_object* _init_l_Lake_buildStaticLib___lam__1___closed__0(void){
_start:
{
lean_object* v___x_6985_; 
v___x_6985_ = lean_mk_string_unchecked("a", 1, 1);
return v___x_6985_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object* v_libFile_6986_, uint8_t v_thin_6987_, lean_object* v_oFiles_6988_, lean_object* v___y_6989_, lean_object* v___y_6990_, lean_object* v___y_6991_, lean_object* v___y_6992_, lean_object* v___y_6993_, lean_object* v___y_6994_){
_start:
{
lean_object* v___x_6996_; lean_object* v___f_6997_; uint8_t v___x_6998_; lean_object* v___x_6999_; uint8_t v___x_7000_; lean_object* v___x_7001_; 
v___x_6996_ = lean_box(v_thin_6987_);
lean_inc_ref(v_libFile_6986_);
v___f_6997_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6997_, 0, v_libFile_6986_);
lean_closure_set(v___f_6997_, 1, v_oFiles_6988_);
lean_closure_set(v___f_6997_, 2, v___x_6996_);
v___x_6998_ = 0;
v___x_6999_ = lean_obj_once(&l_Lake_buildStaticLib___lam__1___closed__0, &l_Lake_buildStaticLib___lam__1___closed__0_once, _init_l_Lake_buildStaticLib___lam__1___closed__0);
v___x_7000_ = 1;
v___x_7001_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_6986_, v___f_6997_, v___x_6998_, v___x_6999_, v___x_7000_, v___x_6998_, v___x_6998_, v___y_6989_, v___y_6990_, v___y_6991_, v___y_6992_, v___y_6993_, v___y_6994_);
if (lean_obj_tag(v___x_7001_) == 0)
{
lean_object* v_a_7002_; lean_object* v_a_7003_; lean_object* v___x_7005_; uint8_t v_isShared_7006_; uint8_t v_isSharedCheck_7011_; 
v_a_7002_ = lean_ctor_get(v___x_7001_, 0);
v_a_7003_ = lean_ctor_get(v___x_7001_, 1);
v_isSharedCheck_7011_ = !lean_is_exclusive(v___x_7001_);
if (v_isSharedCheck_7011_ == 0)
{
v___x_7005_ = v___x_7001_;
v_isShared_7006_ = v_isSharedCheck_7011_;
goto v_resetjp_7004_;
}
else
{
lean_inc(v_a_7003_);
lean_inc(v_a_7002_);
lean_dec(v___x_7001_);
v___x_7005_ = lean_box(0);
v_isShared_7006_ = v_isSharedCheck_7011_;
goto v_resetjp_7004_;
}
v_resetjp_7004_:
{
lean_object* v_path_7007_; lean_object* v___x_7009_; 
v_path_7007_ = lean_ctor_get(v_a_7002_, 1);
lean_inc_ref(v_path_7007_);
lean_dec(v_a_7002_);
if (v_isShared_7006_ == 0)
{
lean_ctor_set(v___x_7005_, 0, v_path_7007_);
v___x_7009_ = v___x_7005_;
goto v_reusejp_7008_;
}
else
{
lean_object* v_reuseFailAlloc_7010_; 
v_reuseFailAlloc_7010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7010_, 0, v_path_7007_);
lean_ctor_set(v_reuseFailAlloc_7010_, 1, v_a_7003_);
v___x_7009_ = v_reuseFailAlloc_7010_;
goto v_reusejp_7008_;
}
v_reusejp_7008_:
{
return v___x_7009_;
}
}
}
else
{
lean_object* v_a_7012_; lean_object* v_a_7013_; lean_object* v___x_7015_; uint8_t v_isShared_7016_; uint8_t v_isSharedCheck_7020_; 
v_a_7012_ = lean_ctor_get(v___x_7001_, 0);
v_a_7013_ = lean_ctor_get(v___x_7001_, 1);
v_isSharedCheck_7020_ = !lean_is_exclusive(v___x_7001_);
if (v_isSharedCheck_7020_ == 0)
{
v___x_7015_ = v___x_7001_;
v_isShared_7016_ = v_isSharedCheck_7020_;
goto v_resetjp_7014_;
}
else
{
lean_inc(v_a_7013_);
lean_inc(v_a_7012_);
lean_dec(v___x_7001_);
v___x_7015_ = lean_box(0);
v_isShared_7016_ = v_isSharedCheck_7020_;
goto v_resetjp_7014_;
}
v_resetjp_7014_:
{
lean_object* v___x_7018_; 
if (v_isShared_7016_ == 0)
{
v___x_7018_ = v___x_7015_;
goto v_reusejp_7017_;
}
else
{
lean_object* v_reuseFailAlloc_7019_; 
v_reuseFailAlloc_7019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7019_, 0, v_a_7012_);
lean_ctor_set(v_reuseFailAlloc_7019_, 1, v_a_7013_);
v___x_7018_ = v_reuseFailAlloc_7019_;
goto v_reusejp_7017_;
}
v_reusejp_7017_:
{
return v___x_7018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object* v_libFile_7021_, lean_object* v_thin_7022_, lean_object* v_oFiles_7023_, lean_object* v___y_7024_, lean_object* v___y_7025_, lean_object* v___y_7026_, lean_object* v___y_7027_, lean_object* v___y_7028_, lean_object* v___y_7029_, lean_object* v___y_7030_){
_start:
{
uint8_t v_thin_boxed_7031_; lean_object* v_res_7032_; 
v_thin_boxed_7031_ = lean_unbox(v_thin_7022_);
v_res_7032_ = l_Lake_buildStaticLib___lam__1(v_libFile_7021_, v_thin_boxed_7031_, v_oFiles_7023_, v___y_7024_, v___y_7025_, v___y_7026_, v___y_7027_, v___y_7028_, v___y_7029_);
lean_dec_ref(v___y_7028_);
lean_dec(v___y_7027_);
lean_dec(v___y_7026_);
lean_dec(v___y_7025_);
return v_res_7032_;
}
}
static lean_object* _init_l_Lake_buildStaticLib___closed__0(void){
_start:
{
lean_object* v___x_7033_; 
v___x_7033_ = lean_mk_string_unchecked("objs", 4, 4);
return v___x_7033_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object* v_libFile_7034_, lean_object* v_oFileJobs_7035_, uint8_t v_thin_7036_, lean_object* v_a_7037_, lean_object* v_a_7038_, lean_object* v_a_7039_, lean_object* v_a_7040_, lean_object* v_a_7041_, lean_object* v_a_7042_){
_start:
{
lean_object* v___x_7044_; lean_object* v___f_7045_; lean_object* v___x_7046_; lean_object* v___x_7047_; lean_object* v___x_7048_; lean_object* v___x_7049_; uint8_t v___x_7050_; lean_object* v___x_7051_; 
v___x_7044_ = lean_box(v_thin_7036_);
v___f_7045_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__1___boxed), 10, 2);
lean_closure_set(v___f_7045_, 0, v_libFile_7034_);
lean_closure_set(v___f_7045_, 1, v___x_7044_);
v___x_7046_ = l_Lake_instDataKindFilePath;
v___x_7047_ = lean_obj_once(&l_Lake_buildStaticLib___closed__0, &l_Lake_buildStaticLib___closed__0_once, _init_l_Lake_buildStaticLib___closed__0);
v___x_7048_ = l_Lake_Job_collectArray___redArg(v_oFileJobs_7035_, v___x_7047_);
v___x_7049_ = lean_unsigned_to_nat(0u);
v___x_7050_ = 0;
v___x_7051_ = l_Lake_Job_mapM___redArg(v___x_7046_, v___x_7048_, v___f_7045_, v___x_7049_, v___x_7050_, v_a_7037_, v_a_7038_, v_a_7039_, v_a_7040_, v_a_7041_, v_a_7042_);
return v___x_7051_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object* v_libFile_7052_, lean_object* v_oFileJobs_7053_, lean_object* v_thin_7054_, lean_object* v_a_7055_, lean_object* v_a_7056_, lean_object* v_a_7057_, lean_object* v_a_7058_, lean_object* v_a_7059_, lean_object* v_a_7060_, lean_object* v_a_7061_){
_start:
{
uint8_t v_thin_boxed_7062_; lean_object* v_res_7063_; 
v_thin_boxed_7062_ = lean_unbox(v_thin_7054_);
v_res_7063_ = l_Lake_buildStaticLib(v_libFile_7052_, v_oFileJobs_7053_, v_thin_boxed_7062_, v_a_7055_, v_a_7056_, v_a_7057_, v_a_7058_, v_a_7059_, v_a_7060_);
lean_dec_ref(v_a_7060_);
lean_dec_ref(v_a_7059_);
lean_dec(v_a_7058_);
lean_dec(v_a_7057_);
lean_dec(v_a_7056_);
lean_dec_ref(v_oFileJobs_7053_);
return v_res_7063_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0(void){
_start:
{
lean_object* v___x_7064_; 
v___x_7064_ = lean_mk_string_unchecked("-l", 2, 2);
return v___x_7064_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1(void){
_start:
{
lean_object* v___x_7065_; 
v___x_7065_ = lean_mk_string_unchecked("-L", 2, 2);
return v___x_7065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object* v_as_7066_, size_t v_sz_7067_, size_t v_i_7068_, lean_object* v_b_7069_){
_start:
{
uint8_t v___x_7070_; 
v___x_7070_ = lean_usize_dec_lt(v_i_7068_, v_sz_7067_);
if (v___x_7070_ == 0)
{
return v_b_7069_;
}
else
{
lean_object* v_a_7071_; lean_object* v_args_7073_; lean_object* v___x_7081_; 
v_a_7071_ = lean_array_uget_borrowed(v_as_7066_, v_i_7068_);
lean_inc(v_a_7071_);
v___x_7081_ = l_Lake_Dynlib_dir_x3f(v_a_7071_);
if (lean_obj_tag(v___x_7081_) == 1)
{
lean_object* v_val_7082_; lean_object* v___x_7083_; lean_object* v___x_7084_; lean_object* v___x_7085_; 
v_val_7082_ = lean_ctor_get(v___x_7081_, 0);
lean_inc(v_val_7082_);
lean_dec_ref(v___x_7081_);
v___x_7083_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1);
v___x_7084_ = lean_string_append(v___x_7083_, v_val_7082_);
lean_dec(v_val_7082_);
v___x_7085_ = lean_array_push(v_b_7069_, v___x_7084_);
v_args_7073_ = v___x_7085_;
goto v___jp_7072_;
}
else
{
lean_dec(v___x_7081_);
v_args_7073_ = v_b_7069_;
goto v___jp_7072_;
}
v___jp_7072_:
{
lean_object* v_name_7074_; lean_object* v___x_7075_; lean_object* v___x_7076_; lean_object* v___x_7077_; size_t v___x_7078_; size_t v___x_7079_; 
v_name_7074_ = lean_ctor_get(v_a_7071_, 1);
v___x_7075_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0);
v___x_7076_ = lean_string_append(v___x_7075_, v_name_7074_);
v___x_7077_ = lean_array_push(v_args_7073_, v___x_7076_);
v___x_7078_ = ((size_t)1ULL);
v___x_7079_ = lean_usize_add(v_i_7068_, v___x_7078_);
v_i_7068_ = v___x_7079_;
v_b_7069_ = v___x_7077_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object* v_as_7086_, lean_object* v_sz_7087_, lean_object* v_i_7088_, lean_object* v_b_7089_){
_start:
{
size_t v_sz_boxed_7090_; size_t v_i_boxed_7091_; lean_object* v_res_7092_; 
v_sz_boxed_7090_ = lean_unbox_usize(v_sz_7087_);
lean_dec(v_sz_7087_);
v_i_boxed_7091_ = lean_unbox_usize(v_i_7088_);
lean_dec(v_i_7088_);
v_res_7092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_as_7086_, v_sz_boxed_7090_, v_i_boxed_7091_, v_b_7089_);
lean_dec_ref(v_as_7086_);
return v_res_7092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object* v_as_7093_, size_t v_sz_7094_, size_t v_i_7095_, lean_object* v_b_7096_){
_start:
{
uint8_t v___x_7097_; 
v___x_7097_ = lean_usize_dec_lt(v_i_7095_, v_sz_7094_);
if (v___x_7097_ == 0)
{
return v_b_7096_;
}
else
{
lean_object* v_a_7098_; lean_object* v___x_7099_; size_t v___x_7100_; size_t v___x_7101_; 
v_a_7098_ = lean_array_uget_borrowed(v_as_7093_, v_i_7095_);
lean_inc(v_a_7098_);
v___x_7099_ = lean_array_push(v_b_7096_, v_a_7098_);
v___x_7100_ = ((size_t)1ULL);
v___x_7101_ = lean_usize_add(v_i_7095_, v___x_7100_);
v_i_7095_ = v___x_7101_;
v_b_7096_ = v___x_7099_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object* v_as_7103_, lean_object* v_sz_7104_, lean_object* v_i_7105_, lean_object* v_b_7106_){
_start:
{
size_t v_sz_boxed_7107_; size_t v_i_boxed_7108_; lean_object* v_res_7109_; 
v_sz_boxed_7107_ = lean_unbox_usize(v_sz_7104_);
lean_dec(v_sz_7104_);
v_i_boxed_7108_ = lean_unbox_usize(v_i_7105_);
lean_dec(v_i_7105_);
v_res_7109_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_as_7103_, v_sz_boxed_7107_, v_i_boxed_7108_, v_b_7106_);
lean_dec_ref(v_as_7103_);
return v_res_7109_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object* v_objs_7110_, lean_object* v_libs_7111_){
_start:
{
lean_object* v_args_7112_; size_t v_sz_7113_; size_t v___x_7114_; lean_object* v___x_7115_; size_t v_sz_7116_; lean_object* v___x_7117_; 
v_args_7112_ = lean_obj_once(&l_Lake_inputDir___lam__1___closed__0, &l_Lake_inputDir___lam__1___closed__0_once, _init_l_Lake_inputDir___lam__1___closed__0);
v_sz_7113_ = lean_array_size(v_objs_7110_);
v___x_7114_ = ((size_t)0ULL);
v___x_7115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_objs_7110_, v_sz_7113_, v___x_7114_, v_args_7112_);
v_sz_7116_ = lean_array_size(v_libs_7111_);
v___x_7117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_libs_7111_, v_sz_7116_, v___x_7114_, v___x_7115_);
return v___x_7117_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object* v_objs_7118_, lean_object* v_libs_7119_){
_start:
{
lean_object* v_res_7120_; 
v_res_7120_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7118_, v_libs_7119_);
lean_dec_ref(v_libs_7119_);
lean_dec_ref(v_objs_7118_);
return v_res_7120_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object* v_a_7121_, lean_object* v_x_7122_){
_start:
{
if (lean_obj_tag(v_x_7122_) == 0)
{
uint8_t v___x_7123_; 
v___x_7123_ = 0;
return v___x_7123_;
}
else
{
lean_object* v_head_7124_; lean_object* v_tail_7125_; uint8_t v___x_7126_; 
v_head_7124_ = lean_ctor_get(v_x_7122_, 0);
v_tail_7125_ = lean_ctor_get(v_x_7122_, 1);
v___x_7126_ = lean_string_dec_eq(v_a_7121_, v_head_7124_);
if (v___x_7126_ == 0)
{
v_x_7122_ = v_tail_7125_;
goto _start;
}
else
{
return v___x_7126_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object* v_a_7128_, lean_object* v_x_7129_){
_start:
{
uint8_t v_res_7130_; lean_object* v_r_7131_; 
v_res_7130_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_a_7128_, v_x_7129_);
lean_dec(v_x_7129_);
lean_dec_ref(v_a_7128_);
v_r_7131_ = lean_box(v_res_7130_);
return v_r_7131_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object* v_k_7132_, lean_object* v_v_7133_, lean_object* v_t_7134_){
_start:
{
if (lean_obj_tag(v_t_7134_) == 0)
{
lean_object* v_size_7135_; lean_object* v_k_7136_; lean_object* v_v_7137_; lean_object* v_l_7138_; lean_object* v_r_7139_; lean_object* v___x_7141_; uint8_t v_isShared_7142_; uint8_t v_isSharedCheck_7420_; 
v_size_7135_ = lean_ctor_get(v_t_7134_, 0);
v_k_7136_ = lean_ctor_get(v_t_7134_, 1);
v_v_7137_ = lean_ctor_get(v_t_7134_, 2);
v_l_7138_ = lean_ctor_get(v_t_7134_, 3);
v_r_7139_ = lean_ctor_get(v_t_7134_, 4);
v_isSharedCheck_7420_ = !lean_is_exclusive(v_t_7134_);
if (v_isSharedCheck_7420_ == 0)
{
v___x_7141_ = v_t_7134_;
v_isShared_7142_ = v_isSharedCheck_7420_;
goto v_resetjp_7140_;
}
else
{
lean_inc(v_r_7139_);
lean_inc(v_l_7138_);
lean_inc(v_v_7137_);
lean_inc(v_k_7136_);
lean_inc(v_size_7135_);
lean_dec(v_t_7134_);
v___x_7141_ = lean_box(0);
v_isShared_7142_ = v_isSharedCheck_7420_;
goto v_resetjp_7140_;
}
v_resetjp_7140_:
{
uint8_t v___x_7143_; 
v___x_7143_ = lean_string_dec_lt(v_k_7132_, v_k_7136_);
if (v___x_7143_ == 0)
{
uint8_t v___x_7144_; 
v___x_7144_ = lean_string_dec_eq(v_k_7132_, v_k_7136_);
if (v___x_7144_ == 0)
{
lean_object* v_impl_7145_; lean_object* v___x_7146_; 
lean_dec(v_size_7135_);
v_impl_7145_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7132_, v_v_7133_, v_r_7139_);
v___x_7146_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_7138_) == 0)
{
lean_object* v_size_7147_; lean_object* v_size_7148_; lean_object* v_k_7149_; lean_object* v_v_7150_; lean_object* v_l_7151_; lean_object* v_r_7152_; lean_object* v___x_7153_; lean_object* v___x_7154_; uint8_t v___x_7155_; 
v_size_7147_ = lean_ctor_get(v_l_7138_, 0);
v_size_7148_ = lean_ctor_get(v_impl_7145_, 0);
lean_inc(v_size_7148_);
v_k_7149_ = lean_ctor_get(v_impl_7145_, 1);
lean_inc(v_k_7149_);
v_v_7150_ = lean_ctor_get(v_impl_7145_, 2);
lean_inc(v_v_7150_);
v_l_7151_ = lean_ctor_get(v_impl_7145_, 3);
lean_inc(v_l_7151_);
v_r_7152_ = lean_ctor_get(v_impl_7145_, 4);
lean_inc(v_r_7152_);
v___x_7153_ = lean_unsigned_to_nat(3u);
v___x_7154_ = lean_nat_mul(v___x_7153_, v_size_7147_);
v___x_7155_ = lean_nat_dec_lt(v___x_7154_, v_size_7148_);
lean_dec(v___x_7154_);
if (v___x_7155_ == 0)
{
lean_object* v___x_7156_; lean_object* v___x_7157_; lean_object* v___x_7159_; 
lean_dec(v_r_7152_);
lean_dec(v_l_7151_);
lean_dec(v_v_7150_);
lean_dec(v_k_7149_);
v___x_7156_ = lean_nat_add(v___x_7146_, v_size_7147_);
v___x_7157_ = lean_nat_add(v___x_7156_, v_size_7148_);
lean_dec(v_size_7148_);
lean_dec(v___x_7156_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_impl_7145_);
lean_ctor_set(v___x_7141_, 0, v___x_7157_);
v___x_7159_ = v___x_7141_;
goto v_reusejp_7158_;
}
else
{
lean_object* v_reuseFailAlloc_7160_; 
v_reuseFailAlloc_7160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7160_, 0, v___x_7157_);
lean_ctor_set(v_reuseFailAlloc_7160_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7160_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7160_, 3, v_l_7138_);
lean_ctor_set(v_reuseFailAlloc_7160_, 4, v_impl_7145_);
v___x_7159_ = v_reuseFailAlloc_7160_;
goto v_reusejp_7158_;
}
v_reusejp_7158_:
{
return v___x_7159_;
}
}
else
{
lean_object* v___x_7162_; uint8_t v_isShared_7163_; uint8_t v_isSharedCheck_7224_; 
v_isSharedCheck_7224_ = !lean_is_exclusive(v_impl_7145_);
if (v_isSharedCheck_7224_ == 0)
{
lean_object* v_unused_7225_; lean_object* v_unused_7226_; lean_object* v_unused_7227_; lean_object* v_unused_7228_; lean_object* v_unused_7229_; 
v_unused_7225_ = lean_ctor_get(v_impl_7145_, 4);
lean_dec(v_unused_7225_);
v_unused_7226_ = lean_ctor_get(v_impl_7145_, 3);
lean_dec(v_unused_7226_);
v_unused_7227_ = lean_ctor_get(v_impl_7145_, 2);
lean_dec(v_unused_7227_);
v_unused_7228_ = lean_ctor_get(v_impl_7145_, 1);
lean_dec(v_unused_7228_);
v_unused_7229_ = lean_ctor_get(v_impl_7145_, 0);
lean_dec(v_unused_7229_);
v___x_7162_ = v_impl_7145_;
v_isShared_7163_ = v_isSharedCheck_7224_;
goto v_resetjp_7161_;
}
else
{
lean_dec(v_impl_7145_);
v___x_7162_ = lean_box(0);
v_isShared_7163_ = v_isSharedCheck_7224_;
goto v_resetjp_7161_;
}
v_resetjp_7161_:
{
lean_object* v_size_7164_; lean_object* v_k_7165_; lean_object* v_v_7166_; lean_object* v_l_7167_; lean_object* v_r_7168_; lean_object* v_size_7169_; lean_object* v___x_7170_; lean_object* v___x_7171_; uint8_t v___x_7172_; 
v_size_7164_ = lean_ctor_get(v_l_7151_, 0);
v_k_7165_ = lean_ctor_get(v_l_7151_, 1);
v_v_7166_ = lean_ctor_get(v_l_7151_, 2);
v_l_7167_ = lean_ctor_get(v_l_7151_, 3);
v_r_7168_ = lean_ctor_get(v_l_7151_, 4);
v_size_7169_ = lean_ctor_get(v_r_7152_, 0);
v___x_7170_ = lean_unsigned_to_nat(2u);
v___x_7171_ = lean_nat_mul(v___x_7170_, v_size_7169_);
v___x_7172_ = lean_nat_dec_lt(v_size_7164_, v___x_7171_);
lean_dec(v___x_7171_);
if (v___x_7172_ == 0)
{
lean_object* v___x_7174_; uint8_t v_isShared_7175_; uint8_t v_isSharedCheck_7200_; 
lean_inc(v_r_7168_);
lean_inc(v_l_7167_);
lean_inc(v_v_7166_);
lean_inc(v_k_7165_);
v_isSharedCheck_7200_ = !lean_is_exclusive(v_l_7151_);
if (v_isSharedCheck_7200_ == 0)
{
lean_object* v_unused_7201_; lean_object* v_unused_7202_; lean_object* v_unused_7203_; lean_object* v_unused_7204_; lean_object* v_unused_7205_; 
v_unused_7201_ = lean_ctor_get(v_l_7151_, 4);
lean_dec(v_unused_7201_);
v_unused_7202_ = lean_ctor_get(v_l_7151_, 3);
lean_dec(v_unused_7202_);
v_unused_7203_ = lean_ctor_get(v_l_7151_, 2);
lean_dec(v_unused_7203_);
v_unused_7204_ = lean_ctor_get(v_l_7151_, 1);
lean_dec(v_unused_7204_);
v_unused_7205_ = lean_ctor_get(v_l_7151_, 0);
lean_dec(v_unused_7205_);
v___x_7174_ = v_l_7151_;
v_isShared_7175_ = v_isSharedCheck_7200_;
goto v_resetjp_7173_;
}
else
{
lean_dec(v_l_7151_);
v___x_7174_ = lean_box(0);
v_isShared_7175_ = v_isSharedCheck_7200_;
goto v_resetjp_7173_;
}
v_resetjp_7173_:
{
lean_object* v___x_7176_; lean_object* v___x_7177_; lean_object* v___y_7179_; lean_object* v___y_7180_; lean_object* v___y_7181_; lean_object* v___y_7190_; 
v___x_7176_ = lean_nat_add(v___x_7146_, v_size_7147_);
v___x_7177_ = lean_nat_add(v___x_7176_, v_size_7148_);
lean_dec(v_size_7148_);
if (lean_obj_tag(v_l_7167_) == 0)
{
lean_object* v_size_7198_; 
v_size_7198_ = lean_ctor_get(v_l_7167_, 0);
lean_inc(v_size_7198_);
v___y_7190_ = v_size_7198_;
goto v___jp_7189_;
}
else
{
lean_object* v___x_7199_; 
v___x_7199_ = lean_unsigned_to_nat(0u);
v___y_7190_ = v___x_7199_;
goto v___jp_7189_;
}
v___jp_7178_:
{
lean_object* v___x_7182_; lean_object* v___x_7184_; 
v___x_7182_ = lean_nat_add(v___y_7179_, v___y_7181_);
lean_dec(v___y_7181_);
lean_dec(v___y_7179_);
if (v_isShared_7175_ == 0)
{
lean_ctor_set(v___x_7174_, 4, v_r_7152_);
lean_ctor_set(v___x_7174_, 3, v_r_7168_);
lean_ctor_set(v___x_7174_, 2, v_v_7150_);
lean_ctor_set(v___x_7174_, 1, v_k_7149_);
lean_ctor_set(v___x_7174_, 0, v___x_7182_);
v___x_7184_ = v___x_7174_;
goto v_reusejp_7183_;
}
else
{
lean_object* v_reuseFailAlloc_7188_; 
v_reuseFailAlloc_7188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7188_, 0, v___x_7182_);
lean_ctor_set(v_reuseFailAlloc_7188_, 1, v_k_7149_);
lean_ctor_set(v_reuseFailAlloc_7188_, 2, v_v_7150_);
lean_ctor_set(v_reuseFailAlloc_7188_, 3, v_r_7168_);
lean_ctor_set(v_reuseFailAlloc_7188_, 4, v_r_7152_);
v___x_7184_ = v_reuseFailAlloc_7188_;
goto v_reusejp_7183_;
}
v_reusejp_7183_:
{
lean_object* v___x_7186_; 
if (v_isShared_7163_ == 0)
{
lean_ctor_set(v___x_7162_, 4, v___x_7184_);
lean_ctor_set(v___x_7162_, 3, v___y_7180_);
lean_ctor_set(v___x_7162_, 2, v_v_7166_);
lean_ctor_set(v___x_7162_, 1, v_k_7165_);
lean_ctor_set(v___x_7162_, 0, v___x_7177_);
v___x_7186_ = v___x_7162_;
goto v_reusejp_7185_;
}
else
{
lean_object* v_reuseFailAlloc_7187_; 
v_reuseFailAlloc_7187_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7187_, 0, v___x_7177_);
lean_ctor_set(v_reuseFailAlloc_7187_, 1, v_k_7165_);
lean_ctor_set(v_reuseFailAlloc_7187_, 2, v_v_7166_);
lean_ctor_set(v_reuseFailAlloc_7187_, 3, v___y_7180_);
lean_ctor_set(v_reuseFailAlloc_7187_, 4, v___x_7184_);
v___x_7186_ = v_reuseFailAlloc_7187_;
goto v_reusejp_7185_;
}
v_reusejp_7185_:
{
return v___x_7186_;
}
}
}
v___jp_7189_:
{
lean_object* v___x_7191_; lean_object* v___x_7193_; 
v___x_7191_ = lean_nat_add(v___x_7176_, v___y_7190_);
lean_dec(v___y_7190_);
lean_dec(v___x_7176_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_l_7167_);
lean_ctor_set(v___x_7141_, 0, v___x_7191_);
v___x_7193_ = v___x_7141_;
goto v_reusejp_7192_;
}
else
{
lean_object* v_reuseFailAlloc_7197_; 
v_reuseFailAlloc_7197_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7197_, 0, v___x_7191_);
lean_ctor_set(v_reuseFailAlloc_7197_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7197_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7197_, 3, v_l_7138_);
lean_ctor_set(v_reuseFailAlloc_7197_, 4, v_l_7167_);
v___x_7193_ = v_reuseFailAlloc_7197_;
goto v_reusejp_7192_;
}
v_reusejp_7192_:
{
lean_object* v___x_7194_; 
v___x_7194_ = lean_nat_add(v___x_7146_, v_size_7169_);
if (lean_obj_tag(v_r_7168_) == 0)
{
lean_object* v_size_7195_; 
v_size_7195_ = lean_ctor_get(v_r_7168_, 0);
lean_inc(v_size_7195_);
v___y_7179_ = v___x_7194_;
v___y_7180_ = v___x_7193_;
v___y_7181_ = v_size_7195_;
goto v___jp_7178_;
}
else
{
lean_object* v___x_7196_; 
v___x_7196_ = lean_unsigned_to_nat(0u);
v___y_7179_ = v___x_7194_;
v___y_7180_ = v___x_7193_;
v___y_7181_ = v___x_7196_;
goto v___jp_7178_;
}
}
}
}
}
else
{
lean_object* v___x_7206_; lean_object* v___x_7207_; lean_object* v___x_7208_; lean_object* v___x_7210_; 
lean_del_object(v___x_7141_);
v___x_7206_ = lean_nat_add(v___x_7146_, v_size_7147_);
v___x_7207_ = lean_nat_add(v___x_7206_, v_size_7148_);
lean_dec(v_size_7148_);
v___x_7208_ = lean_nat_add(v___x_7206_, v_size_7164_);
lean_dec(v___x_7206_);
lean_inc_ref(v_l_7138_);
if (v_isShared_7163_ == 0)
{
lean_ctor_set(v___x_7162_, 4, v_l_7151_);
lean_ctor_set(v___x_7162_, 3, v_l_7138_);
lean_ctor_set(v___x_7162_, 2, v_v_7137_);
lean_ctor_set(v___x_7162_, 1, v_k_7136_);
lean_ctor_set(v___x_7162_, 0, v___x_7208_);
v___x_7210_ = v___x_7162_;
goto v_reusejp_7209_;
}
else
{
lean_object* v_reuseFailAlloc_7223_; 
v_reuseFailAlloc_7223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7223_, 0, v___x_7208_);
lean_ctor_set(v_reuseFailAlloc_7223_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7223_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7223_, 3, v_l_7138_);
lean_ctor_set(v_reuseFailAlloc_7223_, 4, v_l_7151_);
v___x_7210_ = v_reuseFailAlloc_7223_;
goto v_reusejp_7209_;
}
v_reusejp_7209_:
{
lean_object* v___x_7212_; uint8_t v_isShared_7213_; uint8_t v_isSharedCheck_7217_; 
v_isSharedCheck_7217_ = !lean_is_exclusive(v_l_7138_);
if (v_isSharedCheck_7217_ == 0)
{
lean_object* v_unused_7218_; lean_object* v_unused_7219_; lean_object* v_unused_7220_; lean_object* v_unused_7221_; lean_object* v_unused_7222_; 
v_unused_7218_ = lean_ctor_get(v_l_7138_, 4);
lean_dec(v_unused_7218_);
v_unused_7219_ = lean_ctor_get(v_l_7138_, 3);
lean_dec(v_unused_7219_);
v_unused_7220_ = lean_ctor_get(v_l_7138_, 2);
lean_dec(v_unused_7220_);
v_unused_7221_ = lean_ctor_get(v_l_7138_, 1);
lean_dec(v_unused_7221_);
v_unused_7222_ = lean_ctor_get(v_l_7138_, 0);
lean_dec(v_unused_7222_);
v___x_7212_ = v_l_7138_;
v_isShared_7213_ = v_isSharedCheck_7217_;
goto v_resetjp_7211_;
}
else
{
lean_dec(v_l_7138_);
v___x_7212_ = lean_box(0);
v_isShared_7213_ = v_isSharedCheck_7217_;
goto v_resetjp_7211_;
}
v_resetjp_7211_:
{
lean_object* v___x_7215_; 
if (v_isShared_7213_ == 0)
{
lean_ctor_set(v___x_7212_, 4, v_r_7152_);
lean_ctor_set(v___x_7212_, 3, v___x_7210_);
lean_ctor_set(v___x_7212_, 2, v_v_7150_);
lean_ctor_set(v___x_7212_, 1, v_k_7149_);
lean_ctor_set(v___x_7212_, 0, v___x_7207_);
v___x_7215_ = v___x_7212_;
goto v_reusejp_7214_;
}
else
{
lean_object* v_reuseFailAlloc_7216_; 
v_reuseFailAlloc_7216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7216_, 0, v___x_7207_);
lean_ctor_set(v_reuseFailAlloc_7216_, 1, v_k_7149_);
lean_ctor_set(v_reuseFailAlloc_7216_, 2, v_v_7150_);
lean_ctor_set(v_reuseFailAlloc_7216_, 3, v___x_7210_);
lean_ctor_set(v_reuseFailAlloc_7216_, 4, v_r_7152_);
v___x_7215_ = v_reuseFailAlloc_7216_;
goto v_reusejp_7214_;
}
v_reusejp_7214_:
{
return v___x_7215_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7230_; 
v_l_7230_ = lean_ctor_get(v_impl_7145_, 3);
lean_inc(v_l_7230_);
if (lean_obj_tag(v_l_7230_) == 0)
{
lean_object* v_r_7231_; lean_object* v_k_7232_; lean_object* v_v_7233_; lean_object* v___x_7235_; uint8_t v_isShared_7236_; uint8_t v_isSharedCheck_7256_; 
v_r_7231_ = lean_ctor_get(v_impl_7145_, 4);
v_k_7232_ = lean_ctor_get(v_impl_7145_, 1);
v_v_7233_ = lean_ctor_get(v_impl_7145_, 2);
v_isSharedCheck_7256_ = !lean_is_exclusive(v_impl_7145_);
if (v_isSharedCheck_7256_ == 0)
{
lean_object* v_unused_7257_; lean_object* v_unused_7258_; 
v_unused_7257_ = lean_ctor_get(v_impl_7145_, 3);
lean_dec(v_unused_7257_);
v_unused_7258_ = lean_ctor_get(v_impl_7145_, 0);
lean_dec(v_unused_7258_);
v___x_7235_ = v_impl_7145_;
v_isShared_7236_ = v_isSharedCheck_7256_;
goto v_resetjp_7234_;
}
else
{
lean_inc(v_r_7231_);
lean_inc(v_v_7233_);
lean_inc(v_k_7232_);
lean_dec(v_impl_7145_);
v___x_7235_ = lean_box(0);
v_isShared_7236_ = v_isSharedCheck_7256_;
goto v_resetjp_7234_;
}
v_resetjp_7234_:
{
lean_object* v_k_7237_; lean_object* v_v_7238_; lean_object* v___x_7240_; uint8_t v_isShared_7241_; uint8_t v_isSharedCheck_7252_; 
v_k_7237_ = lean_ctor_get(v_l_7230_, 1);
v_v_7238_ = lean_ctor_get(v_l_7230_, 2);
v_isSharedCheck_7252_ = !lean_is_exclusive(v_l_7230_);
if (v_isSharedCheck_7252_ == 0)
{
lean_object* v_unused_7253_; lean_object* v_unused_7254_; lean_object* v_unused_7255_; 
v_unused_7253_ = lean_ctor_get(v_l_7230_, 4);
lean_dec(v_unused_7253_);
v_unused_7254_ = lean_ctor_get(v_l_7230_, 3);
lean_dec(v_unused_7254_);
v_unused_7255_ = lean_ctor_get(v_l_7230_, 0);
lean_dec(v_unused_7255_);
v___x_7240_ = v_l_7230_;
v_isShared_7241_ = v_isSharedCheck_7252_;
goto v_resetjp_7239_;
}
else
{
lean_inc(v_v_7238_);
lean_inc(v_k_7237_);
lean_dec(v_l_7230_);
v___x_7240_ = lean_box(0);
v_isShared_7241_ = v_isSharedCheck_7252_;
goto v_resetjp_7239_;
}
v_resetjp_7239_:
{
lean_object* v___x_7242_; lean_object* v___x_7244_; 
v___x_7242_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_7231_, 2);
if (v_isShared_7241_ == 0)
{
lean_ctor_set(v___x_7240_, 4, v_r_7231_);
lean_ctor_set(v___x_7240_, 3, v_r_7231_);
lean_ctor_set(v___x_7240_, 2, v_v_7137_);
lean_ctor_set(v___x_7240_, 1, v_k_7136_);
lean_ctor_set(v___x_7240_, 0, v___x_7146_);
v___x_7244_ = v___x_7240_;
goto v_reusejp_7243_;
}
else
{
lean_object* v_reuseFailAlloc_7251_; 
v_reuseFailAlloc_7251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7251_, 0, v___x_7146_);
lean_ctor_set(v_reuseFailAlloc_7251_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7251_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7251_, 3, v_r_7231_);
lean_ctor_set(v_reuseFailAlloc_7251_, 4, v_r_7231_);
v___x_7244_ = v_reuseFailAlloc_7251_;
goto v_reusejp_7243_;
}
v_reusejp_7243_:
{
lean_object* v___x_7246_; 
lean_inc(v_r_7231_);
if (v_isShared_7236_ == 0)
{
lean_ctor_set(v___x_7235_, 3, v_r_7231_);
lean_ctor_set(v___x_7235_, 0, v___x_7146_);
v___x_7246_ = v___x_7235_;
goto v_reusejp_7245_;
}
else
{
lean_object* v_reuseFailAlloc_7250_; 
v_reuseFailAlloc_7250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7250_, 0, v___x_7146_);
lean_ctor_set(v_reuseFailAlloc_7250_, 1, v_k_7232_);
lean_ctor_set(v_reuseFailAlloc_7250_, 2, v_v_7233_);
lean_ctor_set(v_reuseFailAlloc_7250_, 3, v_r_7231_);
lean_ctor_set(v_reuseFailAlloc_7250_, 4, v_r_7231_);
v___x_7246_ = v_reuseFailAlloc_7250_;
goto v_reusejp_7245_;
}
v_reusejp_7245_:
{
lean_object* v___x_7248_; 
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v___x_7246_);
lean_ctor_set(v___x_7141_, 3, v___x_7244_);
lean_ctor_set(v___x_7141_, 2, v_v_7238_);
lean_ctor_set(v___x_7141_, 1, v_k_7237_);
lean_ctor_set(v___x_7141_, 0, v___x_7242_);
v___x_7248_ = v___x_7141_;
goto v_reusejp_7247_;
}
else
{
lean_object* v_reuseFailAlloc_7249_; 
v_reuseFailAlloc_7249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7249_, 0, v___x_7242_);
lean_ctor_set(v_reuseFailAlloc_7249_, 1, v_k_7237_);
lean_ctor_set(v_reuseFailAlloc_7249_, 2, v_v_7238_);
lean_ctor_set(v_reuseFailAlloc_7249_, 3, v___x_7244_);
lean_ctor_set(v_reuseFailAlloc_7249_, 4, v___x_7246_);
v___x_7248_ = v_reuseFailAlloc_7249_;
goto v_reusejp_7247_;
}
v_reusejp_7247_:
{
return v___x_7248_;
}
}
}
}
}
}
else
{
lean_object* v_r_7259_; 
v_r_7259_ = lean_ctor_get(v_impl_7145_, 4);
lean_inc(v_r_7259_);
if (lean_obj_tag(v_r_7259_) == 0)
{
lean_object* v_k_7260_; lean_object* v_v_7261_; lean_object* v___x_7263_; uint8_t v_isShared_7264_; uint8_t v_isSharedCheck_7272_; 
v_k_7260_ = lean_ctor_get(v_impl_7145_, 1);
v_v_7261_ = lean_ctor_get(v_impl_7145_, 2);
v_isSharedCheck_7272_ = !lean_is_exclusive(v_impl_7145_);
if (v_isSharedCheck_7272_ == 0)
{
lean_object* v_unused_7273_; lean_object* v_unused_7274_; lean_object* v_unused_7275_; 
v_unused_7273_ = lean_ctor_get(v_impl_7145_, 4);
lean_dec(v_unused_7273_);
v_unused_7274_ = lean_ctor_get(v_impl_7145_, 3);
lean_dec(v_unused_7274_);
v_unused_7275_ = lean_ctor_get(v_impl_7145_, 0);
lean_dec(v_unused_7275_);
v___x_7263_ = v_impl_7145_;
v_isShared_7264_ = v_isSharedCheck_7272_;
goto v_resetjp_7262_;
}
else
{
lean_inc(v_v_7261_);
lean_inc(v_k_7260_);
lean_dec(v_impl_7145_);
v___x_7263_ = lean_box(0);
v_isShared_7264_ = v_isSharedCheck_7272_;
goto v_resetjp_7262_;
}
v_resetjp_7262_:
{
lean_object* v___x_7265_; lean_object* v___x_7267_; 
v___x_7265_ = lean_unsigned_to_nat(3u);
if (v_isShared_7264_ == 0)
{
lean_ctor_set(v___x_7263_, 4, v_l_7230_);
lean_ctor_set(v___x_7263_, 2, v_v_7137_);
lean_ctor_set(v___x_7263_, 1, v_k_7136_);
lean_ctor_set(v___x_7263_, 0, v___x_7146_);
v___x_7267_ = v___x_7263_;
goto v_reusejp_7266_;
}
else
{
lean_object* v_reuseFailAlloc_7271_; 
v_reuseFailAlloc_7271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7271_, 0, v___x_7146_);
lean_ctor_set(v_reuseFailAlloc_7271_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7271_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7271_, 3, v_l_7230_);
lean_ctor_set(v_reuseFailAlloc_7271_, 4, v_l_7230_);
v___x_7267_ = v_reuseFailAlloc_7271_;
goto v_reusejp_7266_;
}
v_reusejp_7266_:
{
lean_object* v___x_7269_; 
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_r_7259_);
lean_ctor_set(v___x_7141_, 3, v___x_7267_);
lean_ctor_set(v___x_7141_, 2, v_v_7261_);
lean_ctor_set(v___x_7141_, 1, v_k_7260_);
lean_ctor_set(v___x_7141_, 0, v___x_7265_);
v___x_7269_ = v___x_7141_;
goto v_reusejp_7268_;
}
else
{
lean_object* v_reuseFailAlloc_7270_; 
v_reuseFailAlloc_7270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7270_, 0, v___x_7265_);
lean_ctor_set(v_reuseFailAlloc_7270_, 1, v_k_7260_);
lean_ctor_set(v_reuseFailAlloc_7270_, 2, v_v_7261_);
lean_ctor_set(v_reuseFailAlloc_7270_, 3, v___x_7267_);
lean_ctor_set(v_reuseFailAlloc_7270_, 4, v_r_7259_);
v___x_7269_ = v_reuseFailAlloc_7270_;
goto v_reusejp_7268_;
}
v_reusejp_7268_:
{
return v___x_7269_;
}
}
}
}
else
{
lean_object* v___x_7276_; lean_object* v___x_7278_; 
v___x_7276_ = lean_unsigned_to_nat(2u);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_impl_7145_);
lean_ctor_set(v___x_7141_, 3, v_r_7259_);
lean_ctor_set(v___x_7141_, 0, v___x_7276_);
v___x_7278_ = v___x_7141_;
goto v_reusejp_7277_;
}
else
{
lean_object* v_reuseFailAlloc_7279_; 
v_reuseFailAlloc_7279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7279_, 0, v___x_7276_);
lean_ctor_set(v_reuseFailAlloc_7279_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7279_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7279_, 3, v_r_7259_);
lean_ctor_set(v_reuseFailAlloc_7279_, 4, v_impl_7145_);
v___x_7278_ = v_reuseFailAlloc_7279_;
goto v_reusejp_7277_;
}
v_reusejp_7277_:
{
return v___x_7278_;
}
}
}
}
}
else
{
lean_object* v___x_7281_; 
lean_dec(v_v_7137_);
lean_dec(v_k_7136_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 2, v_v_7133_);
lean_ctor_set(v___x_7141_, 1, v_k_7132_);
v___x_7281_ = v___x_7141_;
goto v_reusejp_7280_;
}
else
{
lean_object* v_reuseFailAlloc_7282_; 
v_reuseFailAlloc_7282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7282_, 0, v_size_7135_);
lean_ctor_set(v_reuseFailAlloc_7282_, 1, v_k_7132_);
lean_ctor_set(v_reuseFailAlloc_7282_, 2, v_v_7133_);
lean_ctor_set(v_reuseFailAlloc_7282_, 3, v_l_7138_);
lean_ctor_set(v_reuseFailAlloc_7282_, 4, v_r_7139_);
v___x_7281_ = v_reuseFailAlloc_7282_;
goto v_reusejp_7280_;
}
v_reusejp_7280_:
{
return v___x_7281_;
}
}
}
else
{
lean_object* v_impl_7283_; lean_object* v___x_7284_; 
lean_dec(v_size_7135_);
v_impl_7283_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7132_, v_v_7133_, v_l_7138_);
v___x_7284_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_7139_) == 0)
{
lean_object* v_size_7285_; lean_object* v_size_7286_; lean_object* v_k_7287_; lean_object* v_v_7288_; lean_object* v_l_7289_; lean_object* v_r_7290_; lean_object* v___x_7291_; lean_object* v___x_7292_; uint8_t v___x_7293_; 
v_size_7285_ = lean_ctor_get(v_r_7139_, 0);
v_size_7286_ = lean_ctor_get(v_impl_7283_, 0);
lean_inc(v_size_7286_);
v_k_7287_ = lean_ctor_get(v_impl_7283_, 1);
lean_inc(v_k_7287_);
v_v_7288_ = lean_ctor_get(v_impl_7283_, 2);
lean_inc(v_v_7288_);
v_l_7289_ = lean_ctor_get(v_impl_7283_, 3);
lean_inc(v_l_7289_);
v_r_7290_ = lean_ctor_get(v_impl_7283_, 4);
lean_inc(v_r_7290_);
v___x_7291_ = lean_unsigned_to_nat(3u);
v___x_7292_ = lean_nat_mul(v___x_7291_, v_size_7285_);
v___x_7293_ = lean_nat_dec_lt(v___x_7292_, v_size_7286_);
lean_dec(v___x_7292_);
if (v___x_7293_ == 0)
{
lean_object* v___x_7294_; lean_object* v___x_7295_; lean_object* v___x_7297_; 
lean_dec(v_r_7290_);
lean_dec(v_l_7289_);
lean_dec(v_v_7288_);
lean_dec(v_k_7287_);
v___x_7294_ = lean_nat_add(v___x_7284_, v_size_7286_);
lean_dec(v_size_7286_);
v___x_7295_ = lean_nat_add(v___x_7294_, v_size_7285_);
lean_dec(v___x_7294_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 3, v_impl_7283_);
lean_ctor_set(v___x_7141_, 0, v___x_7295_);
v___x_7297_ = v___x_7141_;
goto v_reusejp_7296_;
}
else
{
lean_object* v_reuseFailAlloc_7298_; 
v_reuseFailAlloc_7298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7298_, 0, v___x_7295_);
lean_ctor_set(v_reuseFailAlloc_7298_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7298_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7298_, 3, v_impl_7283_);
lean_ctor_set(v_reuseFailAlloc_7298_, 4, v_r_7139_);
v___x_7297_ = v_reuseFailAlloc_7298_;
goto v_reusejp_7296_;
}
v_reusejp_7296_:
{
return v___x_7297_;
}
}
else
{
lean_object* v___x_7300_; uint8_t v_isShared_7301_; uint8_t v_isSharedCheck_7364_; 
v_isSharedCheck_7364_ = !lean_is_exclusive(v_impl_7283_);
if (v_isSharedCheck_7364_ == 0)
{
lean_object* v_unused_7365_; lean_object* v_unused_7366_; lean_object* v_unused_7367_; lean_object* v_unused_7368_; lean_object* v_unused_7369_; 
v_unused_7365_ = lean_ctor_get(v_impl_7283_, 4);
lean_dec(v_unused_7365_);
v_unused_7366_ = lean_ctor_get(v_impl_7283_, 3);
lean_dec(v_unused_7366_);
v_unused_7367_ = lean_ctor_get(v_impl_7283_, 2);
lean_dec(v_unused_7367_);
v_unused_7368_ = lean_ctor_get(v_impl_7283_, 1);
lean_dec(v_unused_7368_);
v_unused_7369_ = lean_ctor_get(v_impl_7283_, 0);
lean_dec(v_unused_7369_);
v___x_7300_ = v_impl_7283_;
v_isShared_7301_ = v_isSharedCheck_7364_;
goto v_resetjp_7299_;
}
else
{
lean_dec(v_impl_7283_);
v___x_7300_ = lean_box(0);
v_isShared_7301_ = v_isSharedCheck_7364_;
goto v_resetjp_7299_;
}
v_resetjp_7299_:
{
lean_object* v_size_7302_; lean_object* v_size_7303_; lean_object* v_k_7304_; lean_object* v_v_7305_; lean_object* v_l_7306_; lean_object* v_r_7307_; lean_object* v___x_7308_; lean_object* v___x_7309_; uint8_t v___x_7310_; 
v_size_7302_ = lean_ctor_get(v_l_7289_, 0);
v_size_7303_ = lean_ctor_get(v_r_7290_, 0);
v_k_7304_ = lean_ctor_get(v_r_7290_, 1);
v_v_7305_ = lean_ctor_get(v_r_7290_, 2);
v_l_7306_ = lean_ctor_get(v_r_7290_, 3);
v_r_7307_ = lean_ctor_get(v_r_7290_, 4);
v___x_7308_ = lean_unsigned_to_nat(2u);
v___x_7309_ = lean_nat_mul(v___x_7308_, v_size_7302_);
v___x_7310_ = lean_nat_dec_lt(v_size_7303_, v___x_7309_);
lean_dec(v___x_7309_);
if (v___x_7310_ == 0)
{
lean_object* v___x_7312_; uint8_t v_isShared_7313_; uint8_t v_isSharedCheck_7339_; 
lean_inc(v_r_7307_);
lean_inc(v_l_7306_);
lean_inc(v_v_7305_);
lean_inc(v_k_7304_);
v_isSharedCheck_7339_ = !lean_is_exclusive(v_r_7290_);
if (v_isSharedCheck_7339_ == 0)
{
lean_object* v_unused_7340_; lean_object* v_unused_7341_; lean_object* v_unused_7342_; lean_object* v_unused_7343_; lean_object* v_unused_7344_; 
v_unused_7340_ = lean_ctor_get(v_r_7290_, 4);
lean_dec(v_unused_7340_);
v_unused_7341_ = lean_ctor_get(v_r_7290_, 3);
lean_dec(v_unused_7341_);
v_unused_7342_ = lean_ctor_get(v_r_7290_, 2);
lean_dec(v_unused_7342_);
v_unused_7343_ = lean_ctor_get(v_r_7290_, 1);
lean_dec(v_unused_7343_);
v_unused_7344_ = lean_ctor_get(v_r_7290_, 0);
lean_dec(v_unused_7344_);
v___x_7312_ = v_r_7290_;
v_isShared_7313_ = v_isSharedCheck_7339_;
goto v_resetjp_7311_;
}
else
{
lean_dec(v_r_7290_);
v___x_7312_ = lean_box(0);
v_isShared_7313_ = v_isSharedCheck_7339_;
goto v_resetjp_7311_;
}
v_resetjp_7311_:
{
lean_object* v___x_7314_; lean_object* v___x_7315_; lean_object* v___y_7317_; lean_object* v___y_7318_; lean_object* v___y_7319_; lean_object* v___x_7327_; lean_object* v___y_7329_; 
v___x_7314_ = lean_nat_add(v___x_7284_, v_size_7286_);
lean_dec(v_size_7286_);
v___x_7315_ = lean_nat_add(v___x_7314_, v_size_7285_);
lean_dec(v___x_7314_);
v___x_7327_ = lean_nat_add(v___x_7284_, v_size_7302_);
if (lean_obj_tag(v_l_7306_) == 0)
{
lean_object* v_size_7337_; 
v_size_7337_ = lean_ctor_get(v_l_7306_, 0);
lean_inc(v_size_7337_);
v___y_7329_ = v_size_7337_;
goto v___jp_7328_;
}
else
{
lean_object* v___x_7338_; 
v___x_7338_ = lean_unsigned_to_nat(0u);
v___y_7329_ = v___x_7338_;
goto v___jp_7328_;
}
v___jp_7316_:
{
lean_object* v___x_7320_; lean_object* v___x_7322_; 
v___x_7320_ = lean_nat_add(v___y_7318_, v___y_7319_);
lean_dec(v___y_7319_);
lean_dec(v___y_7318_);
if (v_isShared_7313_ == 0)
{
lean_ctor_set(v___x_7312_, 4, v_r_7139_);
lean_ctor_set(v___x_7312_, 3, v_r_7307_);
lean_ctor_set(v___x_7312_, 2, v_v_7137_);
lean_ctor_set(v___x_7312_, 1, v_k_7136_);
lean_ctor_set(v___x_7312_, 0, v___x_7320_);
v___x_7322_ = v___x_7312_;
goto v_reusejp_7321_;
}
else
{
lean_object* v_reuseFailAlloc_7326_; 
v_reuseFailAlloc_7326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7326_, 0, v___x_7320_);
lean_ctor_set(v_reuseFailAlloc_7326_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7326_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7326_, 3, v_r_7307_);
lean_ctor_set(v_reuseFailAlloc_7326_, 4, v_r_7139_);
v___x_7322_ = v_reuseFailAlloc_7326_;
goto v_reusejp_7321_;
}
v_reusejp_7321_:
{
lean_object* v___x_7324_; 
if (v_isShared_7301_ == 0)
{
lean_ctor_set(v___x_7300_, 4, v___x_7322_);
lean_ctor_set(v___x_7300_, 3, v___y_7317_);
lean_ctor_set(v___x_7300_, 2, v_v_7305_);
lean_ctor_set(v___x_7300_, 1, v_k_7304_);
lean_ctor_set(v___x_7300_, 0, v___x_7315_);
v___x_7324_ = v___x_7300_;
goto v_reusejp_7323_;
}
else
{
lean_object* v_reuseFailAlloc_7325_; 
v_reuseFailAlloc_7325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7325_, 0, v___x_7315_);
lean_ctor_set(v_reuseFailAlloc_7325_, 1, v_k_7304_);
lean_ctor_set(v_reuseFailAlloc_7325_, 2, v_v_7305_);
lean_ctor_set(v_reuseFailAlloc_7325_, 3, v___y_7317_);
lean_ctor_set(v_reuseFailAlloc_7325_, 4, v___x_7322_);
v___x_7324_ = v_reuseFailAlloc_7325_;
goto v_reusejp_7323_;
}
v_reusejp_7323_:
{
return v___x_7324_;
}
}
}
v___jp_7328_:
{
lean_object* v___x_7330_; lean_object* v___x_7332_; 
v___x_7330_ = lean_nat_add(v___x_7327_, v___y_7329_);
lean_dec(v___y_7329_);
lean_dec(v___x_7327_);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_l_7306_);
lean_ctor_set(v___x_7141_, 3, v_l_7289_);
lean_ctor_set(v___x_7141_, 2, v_v_7288_);
lean_ctor_set(v___x_7141_, 1, v_k_7287_);
lean_ctor_set(v___x_7141_, 0, v___x_7330_);
v___x_7332_ = v___x_7141_;
goto v_reusejp_7331_;
}
else
{
lean_object* v_reuseFailAlloc_7336_; 
v_reuseFailAlloc_7336_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7336_, 0, v___x_7330_);
lean_ctor_set(v_reuseFailAlloc_7336_, 1, v_k_7287_);
lean_ctor_set(v_reuseFailAlloc_7336_, 2, v_v_7288_);
lean_ctor_set(v_reuseFailAlloc_7336_, 3, v_l_7289_);
lean_ctor_set(v_reuseFailAlloc_7336_, 4, v_l_7306_);
v___x_7332_ = v_reuseFailAlloc_7336_;
goto v_reusejp_7331_;
}
v_reusejp_7331_:
{
lean_object* v___x_7333_; 
v___x_7333_ = lean_nat_add(v___x_7284_, v_size_7285_);
if (lean_obj_tag(v_r_7307_) == 0)
{
lean_object* v_size_7334_; 
v_size_7334_ = lean_ctor_get(v_r_7307_, 0);
lean_inc(v_size_7334_);
v___y_7317_ = v___x_7332_;
v___y_7318_ = v___x_7333_;
v___y_7319_ = v_size_7334_;
goto v___jp_7316_;
}
else
{
lean_object* v___x_7335_; 
v___x_7335_ = lean_unsigned_to_nat(0u);
v___y_7317_ = v___x_7332_;
v___y_7318_ = v___x_7333_;
v___y_7319_ = v___x_7335_;
goto v___jp_7316_;
}
}
}
}
}
else
{
lean_object* v___x_7345_; lean_object* v___x_7346_; lean_object* v___x_7347_; lean_object* v___x_7348_; lean_object* v___x_7350_; 
lean_del_object(v___x_7141_);
v___x_7345_ = lean_nat_add(v___x_7284_, v_size_7286_);
lean_dec(v_size_7286_);
v___x_7346_ = lean_nat_add(v___x_7345_, v_size_7285_);
lean_dec(v___x_7345_);
v___x_7347_ = lean_nat_add(v___x_7284_, v_size_7285_);
v___x_7348_ = lean_nat_add(v___x_7347_, v_size_7303_);
lean_dec(v___x_7347_);
lean_inc_ref(v_r_7139_);
if (v_isShared_7301_ == 0)
{
lean_ctor_set(v___x_7300_, 4, v_r_7139_);
lean_ctor_set(v___x_7300_, 3, v_r_7290_);
lean_ctor_set(v___x_7300_, 2, v_v_7137_);
lean_ctor_set(v___x_7300_, 1, v_k_7136_);
lean_ctor_set(v___x_7300_, 0, v___x_7348_);
v___x_7350_ = v___x_7300_;
goto v_reusejp_7349_;
}
else
{
lean_object* v_reuseFailAlloc_7363_; 
v_reuseFailAlloc_7363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7363_, 0, v___x_7348_);
lean_ctor_set(v_reuseFailAlloc_7363_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7363_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7363_, 3, v_r_7290_);
lean_ctor_set(v_reuseFailAlloc_7363_, 4, v_r_7139_);
v___x_7350_ = v_reuseFailAlloc_7363_;
goto v_reusejp_7349_;
}
v_reusejp_7349_:
{
lean_object* v___x_7352_; uint8_t v_isShared_7353_; uint8_t v_isSharedCheck_7357_; 
v_isSharedCheck_7357_ = !lean_is_exclusive(v_r_7139_);
if (v_isSharedCheck_7357_ == 0)
{
lean_object* v_unused_7358_; lean_object* v_unused_7359_; lean_object* v_unused_7360_; lean_object* v_unused_7361_; lean_object* v_unused_7362_; 
v_unused_7358_ = lean_ctor_get(v_r_7139_, 4);
lean_dec(v_unused_7358_);
v_unused_7359_ = lean_ctor_get(v_r_7139_, 3);
lean_dec(v_unused_7359_);
v_unused_7360_ = lean_ctor_get(v_r_7139_, 2);
lean_dec(v_unused_7360_);
v_unused_7361_ = lean_ctor_get(v_r_7139_, 1);
lean_dec(v_unused_7361_);
v_unused_7362_ = lean_ctor_get(v_r_7139_, 0);
lean_dec(v_unused_7362_);
v___x_7352_ = v_r_7139_;
v_isShared_7353_ = v_isSharedCheck_7357_;
goto v_resetjp_7351_;
}
else
{
lean_dec(v_r_7139_);
v___x_7352_ = lean_box(0);
v_isShared_7353_ = v_isSharedCheck_7357_;
goto v_resetjp_7351_;
}
v_resetjp_7351_:
{
lean_object* v___x_7355_; 
if (v_isShared_7353_ == 0)
{
lean_ctor_set(v___x_7352_, 4, v___x_7350_);
lean_ctor_set(v___x_7352_, 3, v_l_7289_);
lean_ctor_set(v___x_7352_, 2, v_v_7288_);
lean_ctor_set(v___x_7352_, 1, v_k_7287_);
lean_ctor_set(v___x_7352_, 0, v___x_7346_);
v___x_7355_ = v___x_7352_;
goto v_reusejp_7354_;
}
else
{
lean_object* v_reuseFailAlloc_7356_; 
v_reuseFailAlloc_7356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7356_, 0, v___x_7346_);
lean_ctor_set(v_reuseFailAlloc_7356_, 1, v_k_7287_);
lean_ctor_set(v_reuseFailAlloc_7356_, 2, v_v_7288_);
lean_ctor_set(v_reuseFailAlloc_7356_, 3, v_l_7289_);
lean_ctor_set(v_reuseFailAlloc_7356_, 4, v___x_7350_);
v___x_7355_ = v_reuseFailAlloc_7356_;
goto v_reusejp_7354_;
}
v_reusejp_7354_:
{
return v___x_7355_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7370_; 
v_l_7370_ = lean_ctor_get(v_impl_7283_, 3);
lean_inc(v_l_7370_);
if (lean_obj_tag(v_l_7370_) == 0)
{
lean_object* v_r_7371_; lean_object* v_k_7372_; lean_object* v_v_7373_; lean_object* v___x_7375_; uint8_t v_isShared_7376_; uint8_t v_isSharedCheck_7384_; 
v_r_7371_ = lean_ctor_get(v_impl_7283_, 4);
v_k_7372_ = lean_ctor_get(v_impl_7283_, 1);
v_v_7373_ = lean_ctor_get(v_impl_7283_, 2);
v_isSharedCheck_7384_ = !lean_is_exclusive(v_impl_7283_);
if (v_isSharedCheck_7384_ == 0)
{
lean_object* v_unused_7385_; lean_object* v_unused_7386_; 
v_unused_7385_ = lean_ctor_get(v_impl_7283_, 3);
lean_dec(v_unused_7385_);
v_unused_7386_ = lean_ctor_get(v_impl_7283_, 0);
lean_dec(v_unused_7386_);
v___x_7375_ = v_impl_7283_;
v_isShared_7376_ = v_isSharedCheck_7384_;
goto v_resetjp_7374_;
}
else
{
lean_inc(v_r_7371_);
lean_inc(v_v_7373_);
lean_inc(v_k_7372_);
lean_dec(v_impl_7283_);
v___x_7375_ = lean_box(0);
v_isShared_7376_ = v_isSharedCheck_7384_;
goto v_resetjp_7374_;
}
v_resetjp_7374_:
{
lean_object* v___x_7377_; lean_object* v___x_7379_; 
v___x_7377_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_7371_);
if (v_isShared_7376_ == 0)
{
lean_ctor_set(v___x_7375_, 3, v_r_7371_);
lean_ctor_set(v___x_7375_, 2, v_v_7137_);
lean_ctor_set(v___x_7375_, 1, v_k_7136_);
lean_ctor_set(v___x_7375_, 0, v___x_7284_);
v___x_7379_ = v___x_7375_;
goto v_reusejp_7378_;
}
else
{
lean_object* v_reuseFailAlloc_7383_; 
v_reuseFailAlloc_7383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7383_, 0, v___x_7284_);
lean_ctor_set(v_reuseFailAlloc_7383_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7383_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7383_, 3, v_r_7371_);
lean_ctor_set(v_reuseFailAlloc_7383_, 4, v_r_7371_);
v___x_7379_ = v_reuseFailAlloc_7383_;
goto v_reusejp_7378_;
}
v_reusejp_7378_:
{
lean_object* v___x_7381_; 
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v___x_7379_);
lean_ctor_set(v___x_7141_, 3, v_l_7370_);
lean_ctor_set(v___x_7141_, 2, v_v_7373_);
lean_ctor_set(v___x_7141_, 1, v_k_7372_);
lean_ctor_set(v___x_7141_, 0, v___x_7377_);
v___x_7381_ = v___x_7141_;
goto v_reusejp_7380_;
}
else
{
lean_object* v_reuseFailAlloc_7382_; 
v_reuseFailAlloc_7382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7382_, 0, v___x_7377_);
lean_ctor_set(v_reuseFailAlloc_7382_, 1, v_k_7372_);
lean_ctor_set(v_reuseFailAlloc_7382_, 2, v_v_7373_);
lean_ctor_set(v_reuseFailAlloc_7382_, 3, v_l_7370_);
lean_ctor_set(v_reuseFailAlloc_7382_, 4, v___x_7379_);
v___x_7381_ = v_reuseFailAlloc_7382_;
goto v_reusejp_7380_;
}
v_reusejp_7380_:
{
return v___x_7381_;
}
}
}
}
else
{
lean_object* v_r_7387_; 
v_r_7387_ = lean_ctor_get(v_impl_7283_, 4);
lean_inc(v_r_7387_);
if (lean_obj_tag(v_r_7387_) == 0)
{
lean_object* v_k_7388_; lean_object* v_v_7389_; lean_object* v___x_7391_; uint8_t v_isShared_7392_; uint8_t v_isSharedCheck_7412_; 
v_k_7388_ = lean_ctor_get(v_impl_7283_, 1);
v_v_7389_ = lean_ctor_get(v_impl_7283_, 2);
v_isSharedCheck_7412_ = !lean_is_exclusive(v_impl_7283_);
if (v_isSharedCheck_7412_ == 0)
{
lean_object* v_unused_7413_; lean_object* v_unused_7414_; lean_object* v_unused_7415_; 
v_unused_7413_ = lean_ctor_get(v_impl_7283_, 4);
lean_dec(v_unused_7413_);
v_unused_7414_ = lean_ctor_get(v_impl_7283_, 3);
lean_dec(v_unused_7414_);
v_unused_7415_ = lean_ctor_get(v_impl_7283_, 0);
lean_dec(v_unused_7415_);
v___x_7391_ = v_impl_7283_;
v_isShared_7392_ = v_isSharedCheck_7412_;
goto v_resetjp_7390_;
}
else
{
lean_inc(v_v_7389_);
lean_inc(v_k_7388_);
lean_dec(v_impl_7283_);
v___x_7391_ = lean_box(0);
v_isShared_7392_ = v_isSharedCheck_7412_;
goto v_resetjp_7390_;
}
v_resetjp_7390_:
{
lean_object* v_k_7393_; lean_object* v_v_7394_; lean_object* v___x_7396_; uint8_t v_isShared_7397_; uint8_t v_isSharedCheck_7408_; 
v_k_7393_ = lean_ctor_get(v_r_7387_, 1);
v_v_7394_ = lean_ctor_get(v_r_7387_, 2);
v_isSharedCheck_7408_ = !lean_is_exclusive(v_r_7387_);
if (v_isSharedCheck_7408_ == 0)
{
lean_object* v_unused_7409_; lean_object* v_unused_7410_; lean_object* v_unused_7411_; 
v_unused_7409_ = lean_ctor_get(v_r_7387_, 4);
lean_dec(v_unused_7409_);
v_unused_7410_ = lean_ctor_get(v_r_7387_, 3);
lean_dec(v_unused_7410_);
v_unused_7411_ = lean_ctor_get(v_r_7387_, 0);
lean_dec(v_unused_7411_);
v___x_7396_ = v_r_7387_;
v_isShared_7397_ = v_isSharedCheck_7408_;
goto v_resetjp_7395_;
}
else
{
lean_inc(v_v_7394_);
lean_inc(v_k_7393_);
lean_dec(v_r_7387_);
v___x_7396_ = lean_box(0);
v_isShared_7397_ = v_isSharedCheck_7408_;
goto v_resetjp_7395_;
}
v_resetjp_7395_:
{
lean_object* v___x_7398_; lean_object* v___x_7400_; 
v___x_7398_ = lean_unsigned_to_nat(3u);
if (v_isShared_7397_ == 0)
{
lean_ctor_set(v___x_7396_, 4, v_l_7370_);
lean_ctor_set(v___x_7396_, 3, v_l_7370_);
lean_ctor_set(v___x_7396_, 2, v_v_7389_);
lean_ctor_set(v___x_7396_, 1, v_k_7388_);
lean_ctor_set(v___x_7396_, 0, v___x_7284_);
v___x_7400_ = v___x_7396_;
goto v_reusejp_7399_;
}
else
{
lean_object* v_reuseFailAlloc_7407_; 
v_reuseFailAlloc_7407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7407_, 0, v___x_7284_);
lean_ctor_set(v_reuseFailAlloc_7407_, 1, v_k_7388_);
lean_ctor_set(v_reuseFailAlloc_7407_, 2, v_v_7389_);
lean_ctor_set(v_reuseFailAlloc_7407_, 3, v_l_7370_);
lean_ctor_set(v_reuseFailAlloc_7407_, 4, v_l_7370_);
v___x_7400_ = v_reuseFailAlloc_7407_;
goto v_reusejp_7399_;
}
v_reusejp_7399_:
{
lean_object* v___x_7402_; 
if (v_isShared_7392_ == 0)
{
lean_ctor_set(v___x_7391_, 4, v_l_7370_);
lean_ctor_set(v___x_7391_, 2, v_v_7137_);
lean_ctor_set(v___x_7391_, 1, v_k_7136_);
lean_ctor_set(v___x_7391_, 0, v___x_7284_);
v___x_7402_ = v___x_7391_;
goto v_reusejp_7401_;
}
else
{
lean_object* v_reuseFailAlloc_7406_; 
v_reuseFailAlloc_7406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7406_, 0, v___x_7284_);
lean_ctor_set(v_reuseFailAlloc_7406_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7406_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7406_, 3, v_l_7370_);
lean_ctor_set(v_reuseFailAlloc_7406_, 4, v_l_7370_);
v___x_7402_ = v_reuseFailAlloc_7406_;
goto v_reusejp_7401_;
}
v_reusejp_7401_:
{
lean_object* v___x_7404_; 
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v___x_7402_);
lean_ctor_set(v___x_7141_, 3, v___x_7400_);
lean_ctor_set(v___x_7141_, 2, v_v_7394_);
lean_ctor_set(v___x_7141_, 1, v_k_7393_);
lean_ctor_set(v___x_7141_, 0, v___x_7398_);
v___x_7404_ = v___x_7141_;
goto v_reusejp_7403_;
}
else
{
lean_object* v_reuseFailAlloc_7405_; 
v_reuseFailAlloc_7405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7405_, 0, v___x_7398_);
lean_ctor_set(v_reuseFailAlloc_7405_, 1, v_k_7393_);
lean_ctor_set(v_reuseFailAlloc_7405_, 2, v_v_7394_);
lean_ctor_set(v_reuseFailAlloc_7405_, 3, v___x_7400_);
lean_ctor_set(v_reuseFailAlloc_7405_, 4, v___x_7402_);
v___x_7404_ = v_reuseFailAlloc_7405_;
goto v_reusejp_7403_;
}
v_reusejp_7403_:
{
return v___x_7404_;
}
}
}
}
}
}
else
{
lean_object* v___x_7416_; lean_object* v___x_7418_; 
v___x_7416_ = lean_unsigned_to_nat(2u);
if (v_isShared_7142_ == 0)
{
lean_ctor_set(v___x_7141_, 4, v_r_7387_);
lean_ctor_set(v___x_7141_, 3, v_impl_7283_);
lean_ctor_set(v___x_7141_, 0, v___x_7416_);
v___x_7418_ = v___x_7141_;
goto v_reusejp_7417_;
}
else
{
lean_object* v_reuseFailAlloc_7419_; 
v_reuseFailAlloc_7419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7419_, 0, v___x_7416_);
lean_ctor_set(v_reuseFailAlloc_7419_, 1, v_k_7136_);
lean_ctor_set(v_reuseFailAlloc_7419_, 2, v_v_7137_);
lean_ctor_set(v_reuseFailAlloc_7419_, 3, v_impl_7283_);
lean_ctor_set(v_reuseFailAlloc_7419_, 4, v_r_7387_);
v___x_7418_ = v_reuseFailAlloc_7419_;
goto v_reusejp_7417_;
}
v_reusejp_7417_:
{
return v___x_7418_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_7421_; lean_object* v___x_7422_; 
v___x_7421_ = lean_unsigned_to_nat(1u);
v___x_7422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_7422_, 0, v___x_7421_);
lean_ctor_set(v___x_7422_, 1, v_k_7132_);
lean_ctor_set(v___x_7422_, 2, v_v_7133_);
lean_ctor_set(v___x_7422_, 3, v_t_7134_);
lean_ctor_set(v___x_7422_, 4, v_t_7134_);
return v___x_7422_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object* v_k_7423_, lean_object* v_t_7424_){
_start:
{
if (lean_obj_tag(v_t_7424_) == 0)
{
lean_object* v_k_7425_; lean_object* v_l_7426_; lean_object* v_r_7427_; uint8_t v___x_7428_; 
v_k_7425_ = lean_ctor_get(v_t_7424_, 1);
v_l_7426_ = lean_ctor_get(v_t_7424_, 3);
v_r_7427_ = lean_ctor_get(v_t_7424_, 4);
v___x_7428_ = lean_string_dec_lt(v_k_7423_, v_k_7425_);
if (v___x_7428_ == 0)
{
uint8_t v___x_7429_; 
v___x_7429_ = lean_string_dec_eq(v_k_7423_, v_k_7425_);
if (v___x_7429_ == 0)
{
v_t_7424_ = v_r_7427_;
goto _start;
}
else
{
return v___x_7429_;
}
}
else
{
v_t_7424_ = v_l_7426_;
goto _start;
}
}
else
{
uint8_t v___x_7432_; 
v___x_7432_ = 0;
return v___x_7432_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object* v_k_7433_, lean_object* v_t_7434_){
_start:
{
uint8_t v_res_7435_; lean_object* v_r_7436_; 
v_res_7435_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7433_, v_t_7434_);
lean_dec(v_t_7434_);
lean_dec_ref(v_k_7433_);
v_r_7436_ = lean_box(v_res_7435_);
return v_r_7436_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object* v_lib_7437_, lean_object* v_ps_7438_, lean_object* v_v_7439_, lean_object* v_o_7440_){
_start:
{
lean_object* v_name_7441_; lean_object* v_deps_7442_; lean_object* v_o_7443_; uint8_t v___x_7444_; 
v_name_7441_ = lean_ctor_get(v_lib_7437_, 1);
lean_inc_ref(v_name_7441_);
v_deps_7442_ = lean_ctor_get(v_lib_7437_, 2);
lean_inc_ref(v_deps_7442_);
v_o_7443_ = lean_array_push(v_o_7440_, v_lib_7437_);
v___x_7444_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_name_7441_, v_v_7439_);
if (v___x_7444_ == 0)
{
uint8_t v___x_7445_; 
v___x_7445_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_name_7441_, v_ps_7438_);
if (v___x_7445_ == 0)
{
lean_object* v_ps_7446_; lean_object* v___y_7448_; 
lean_inc_ref(v_name_7441_);
v_ps_7446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_ps_7446_, 0, v_name_7441_);
lean_ctor_set(v_ps_7446_, 1, v_ps_7438_);
if (v___x_7444_ == 0)
{
lean_object* v___x_7462_; lean_object* v___x_7463_; 
v___x_7462_ = lean_box(0);
v___x_7463_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_name_7441_, v___x_7462_, v_v_7439_);
v___y_7448_ = v___x_7463_;
goto v___jp_7447_;
}
else
{
lean_dec_ref(v_name_7441_);
v___y_7448_ = v_v_7439_;
goto v___jp_7447_;
}
v___jp_7447_:
{
lean_object* v___x_7449_; lean_object* v___x_7450_; lean_object* v___x_7451_; uint8_t v___x_7452_; 
v___x_7449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7449_, 0, v___y_7448_);
lean_ctor_set(v___x_7449_, 1, v_o_7443_);
v___x_7450_ = lean_unsigned_to_nat(0u);
v___x_7451_ = lean_array_get_size(v_deps_7442_);
v___x_7452_ = lean_nat_dec_lt(v___x_7450_, v___x_7451_);
if (v___x_7452_ == 0)
{
lean_object* v___x_7453_; 
lean_dec_ref(v_ps_7446_);
lean_dec_ref(v_deps_7442_);
v___x_7453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7453_, 0, v___x_7449_);
return v___x_7453_;
}
else
{
uint8_t v___x_7454_; 
v___x_7454_ = lean_nat_dec_le(v___x_7451_, v___x_7451_);
if (v___x_7454_ == 0)
{
if (v___x_7452_ == 0)
{
lean_object* v___x_7455_; 
lean_dec_ref(v_ps_7446_);
lean_dec_ref(v_deps_7442_);
v___x_7455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7455_, 0, v___x_7449_);
return v___x_7455_;
}
else
{
size_t v___x_7456_; size_t v___x_7457_; lean_object* v___x_7458_; 
v___x_7456_ = ((size_t)0ULL);
v___x_7457_ = lean_usize_of_nat(v___x_7451_);
v___x_7458_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7446_, v_deps_7442_, v___x_7456_, v___x_7457_, v___x_7449_);
lean_dec_ref(v_deps_7442_);
return v___x_7458_;
}
}
else
{
size_t v___x_7459_; size_t v___x_7460_; lean_object* v___x_7461_; 
v___x_7459_ = ((size_t)0ULL);
v___x_7460_ = lean_usize_of_nat(v___x_7451_);
v___x_7461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7446_, v_deps_7442_, v___x_7459_, v___x_7460_, v___x_7449_);
lean_dec_ref(v_deps_7442_);
return v___x_7461_;
}
}
}
}
else
{
lean_object* v___x_7464_; lean_object* v___x_7465_; 
lean_dec_ref(v_o_7443_);
lean_dec_ref(v_deps_7442_);
lean_dec(v_v_7439_);
v___x_7464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7464_, 0, v_name_7441_);
lean_ctor_set(v___x_7464_, 1, v_ps_7438_);
v___x_7465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7465_, 0, v___x_7464_);
return v___x_7465_;
}
}
else
{
lean_object* v___x_7466_; lean_object* v___x_7467_; 
lean_dec_ref(v_deps_7442_);
lean_dec_ref(v_name_7441_);
lean_dec(v_ps_7438_);
v___x_7466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7466_, 0, v_v_7439_);
lean_ctor_set(v___x_7466_, 1, v_o_7443_);
v___x_7467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7467_, 0, v___x_7466_);
return v___x_7467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object* v_ps_7468_, lean_object* v_as_7469_, size_t v_i_7470_, size_t v_stop_7471_, lean_object* v_b_7472_){
_start:
{
uint8_t v___x_7473_; 
v___x_7473_ = lean_usize_dec_eq(v_i_7470_, v_stop_7471_);
if (v___x_7473_ == 0)
{
lean_object* v_fst_7474_; lean_object* v_snd_7475_; lean_object* v___x_7476_; lean_object* v___x_7477_; 
v_fst_7474_ = lean_ctor_get(v_b_7472_, 0);
lean_inc(v_fst_7474_);
v_snd_7475_ = lean_ctor_get(v_b_7472_, 1);
lean_inc(v_snd_7475_);
lean_dec_ref(v_b_7472_);
v___x_7476_ = lean_array_uget_borrowed(v_as_7469_, v_i_7470_);
lean_inc(v_ps_7468_);
lean_inc(v___x_7476_);
v___x_7477_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7476_, v_ps_7468_, v_fst_7474_, v_snd_7475_);
if (lean_obj_tag(v___x_7477_) == 0)
{
lean_dec(v_ps_7468_);
return v___x_7477_;
}
else
{
lean_object* v_a_7478_; size_t v___x_7479_; size_t v___x_7480_; 
v_a_7478_ = lean_ctor_get(v___x_7477_, 0);
lean_inc(v_a_7478_);
lean_dec_ref(v___x_7477_);
v___x_7479_ = ((size_t)1ULL);
v___x_7480_ = lean_usize_add(v_i_7470_, v___x_7479_);
v_i_7470_ = v___x_7480_;
v_b_7472_ = v_a_7478_;
goto _start;
}
}
else
{
lean_object* v___x_7482_; 
lean_dec(v_ps_7468_);
v___x_7482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7482_, 0, v_b_7472_);
return v___x_7482_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object* v_ps_7483_, lean_object* v_as_7484_, lean_object* v_i_7485_, lean_object* v_stop_7486_, lean_object* v_b_7487_){
_start:
{
size_t v_i_boxed_7488_; size_t v_stop_boxed_7489_; lean_object* v_res_7490_; 
v_i_boxed_7488_ = lean_unbox_usize(v_i_7485_);
lean_dec(v_i_7485_);
v_stop_boxed_7489_ = lean_unbox_usize(v_stop_7486_);
lean_dec(v_stop_7486_);
v_res_7490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7483_, v_as_7484_, v_i_boxed_7488_, v_stop_boxed_7489_, v_b_7487_);
lean_dec_ref(v_as_7484_);
return v_res_7490_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object* v_00_u03b2_7491_, lean_object* v_k_7492_, lean_object* v_t_7493_){
_start:
{
uint8_t v___x_7494_; 
v___x_7494_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7492_, v_t_7493_);
return v___x_7494_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object* v_00_u03b2_7495_, lean_object* v_k_7496_, lean_object* v_t_7497_){
_start:
{
uint8_t v_res_7498_; lean_object* v_r_7499_; 
v_res_7498_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(v_00_u03b2_7495_, v_k_7496_, v_t_7497_);
lean_dec(v_t_7497_);
lean_dec_ref(v_k_7496_);
v_r_7499_ = lean_box(v_res_7498_);
return v_r_7499_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object* v_00_u03b2_7500_, lean_object* v_k_7501_, lean_object* v_v_7502_, lean_object* v_t_7503_, lean_object* v_hl_7504_){
_start:
{
lean_object* v___x_7505_; 
v___x_7505_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7501_, v_v_7502_, v_t_7503_);
return v___x_7505_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_7506_; 
v___x_7506_ = lean_mk_string_unchecked("  ", 2, 2);
return v___x_7506_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(lean_object* v_a_7507_, lean_object* v_a_7508_){
_start:
{
if (lean_obj_tag(v_a_7507_) == 0)
{
lean_object* v___x_7509_; 
v___x_7509_ = l_List_reverse___redArg(v_a_7508_);
return v___x_7509_;
}
else
{
lean_object* v_head_7510_; lean_object* v_tail_7511_; lean_object* v___x_7513_; uint8_t v_isShared_7514_; uint8_t v_isSharedCheck_7521_; 
v_head_7510_ = lean_ctor_get(v_a_7507_, 0);
v_tail_7511_ = lean_ctor_get(v_a_7507_, 1);
v_isSharedCheck_7521_ = !lean_is_exclusive(v_a_7507_);
if (v_isSharedCheck_7521_ == 0)
{
v___x_7513_ = v_a_7507_;
v_isShared_7514_ = v_isSharedCheck_7521_;
goto v_resetjp_7512_;
}
else
{
lean_inc(v_tail_7511_);
lean_inc(v_head_7510_);
lean_dec(v_a_7507_);
v___x_7513_ = lean_box(0);
v_isShared_7514_ = v_isSharedCheck_7521_;
goto v_resetjp_7512_;
}
v_resetjp_7512_:
{
lean_object* v___x_7515_; lean_object* v___x_7516_; lean_object* v___x_7518_; 
v___x_7515_ = lean_obj_once(&l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0, &l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0_once, _init_l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0);
v___x_7516_ = lean_string_append(v___x_7515_, v_head_7510_);
lean_dec(v_head_7510_);
if (v_isShared_7514_ == 0)
{
lean_ctor_set(v___x_7513_, 1, v_a_7508_);
lean_ctor_set(v___x_7513_, 0, v___x_7516_);
v___x_7518_ = v___x_7513_;
goto v_reusejp_7517_;
}
else
{
lean_object* v_reuseFailAlloc_7520_; 
v_reuseFailAlloc_7520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7520_, 0, v___x_7516_);
lean_ctor_set(v_reuseFailAlloc_7520_, 1, v_a_7508_);
v___x_7518_ = v_reuseFailAlloc_7520_;
goto v_reusejp_7517_;
}
v_reusejp_7517_:
{
v_a_7507_ = v_tail_7511_;
v_a_7508_ = v___x_7518_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(lean_object* v_cycle_7522_){
_start:
{
lean_object* v___x_7523_; lean_object* v___x_7524_; lean_object* v___x_7525_; lean_object* v___x_7526_; 
v___x_7523_ = lean_obj_once(&l_Lake_resolveArtifactOutput___closed__1, &l_Lake_resolveArtifactOutput___closed__1_once, _init_l_Lake_resolveArtifactOutput___closed__1);
v___x_7524_ = lean_box(0);
v___x_7525_ = l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(v_cycle_7522_, v___x_7524_);
v___x_7526_ = l_String_intercalate(v___x_7523_, v___x_7525_);
return v___x_7526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(lean_object* v_as_7527_, size_t v_i_7528_, size_t v_stop_7529_, lean_object* v_b_7530_){
_start:
{
uint8_t v___x_7531_; 
v___x_7531_ = lean_usize_dec_eq(v_i_7528_, v_stop_7529_);
if (v___x_7531_ == 0)
{
lean_object* v_fst_7532_; lean_object* v_snd_7533_; lean_object* v___x_7534_; lean_object* v___x_7535_; lean_object* v___x_7536_; 
v_fst_7532_ = lean_ctor_get(v_b_7530_, 0);
lean_inc(v_fst_7532_);
v_snd_7533_ = lean_ctor_get(v_b_7530_, 1);
lean_inc(v_snd_7533_);
lean_dec_ref(v_b_7530_);
v___x_7534_ = lean_array_uget_borrowed(v_as_7527_, v_i_7528_);
v___x_7535_ = lean_box(0);
lean_inc(v___x_7534_);
v___x_7536_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7534_, v___x_7535_, v_fst_7532_, v_snd_7533_);
if (lean_obj_tag(v___x_7536_) == 0)
{
return v___x_7536_;
}
else
{
lean_object* v_a_7537_; size_t v___x_7538_; size_t v___x_7539_; 
v_a_7537_ = lean_ctor_get(v___x_7536_, 0);
lean_inc(v_a_7537_);
lean_dec_ref(v___x_7536_);
v___x_7538_ = ((size_t)1ULL);
v___x_7539_ = lean_usize_add(v_i_7528_, v___x_7538_);
v_i_7528_ = v___x_7539_;
v_b_7530_ = v_a_7537_;
goto _start;
}
}
else
{
lean_object* v___x_7541_; 
v___x_7541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7541_, 0, v_b_7530_);
return v___x_7541_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1___boxed(lean_object* v_as_7542_, lean_object* v_i_7543_, lean_object* v_stop_7544_, lean_object* v_b_7545_){
_start:
{
size_t v_i_boxed_7546_; size_t v_stop_boxed_7547_; lean_object* v_res_7548_; 
v_i_boxed_7546_ = lean_unbox_usize(v_i_7543_);
lean_dec(v_i_7543_);
v_stop_boxed_7547_ = lean_unbox_usize(v_stop_7544_);
lean_dec(v_stop_7544_);
v_res_7548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_as_7542_, v_i_boxed_7546_, v_stop_boxed_7547_, v_b_7545_);
lean_dec_ref(v_as_7542_);
return v_res_7548_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0(void){
_start:
{
lean_object* v___x_7549_; 
v___x_7549_ = lean_mk_string_unchecked("library dependency cycle:\n", 26, 26);
return v___x_7549_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1(void){
_start:
{
lean_object* v___x_7550_; lean_object* v___x_7551_; 
v___x_7550_ = lean_unsigned_to_nat(0u);
v___x_7551_ = lean_mk_empty_array_with_capacity(v___x_7550_);
return v___x_7551_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2(void){
_start:
{
lean_object* v___x_7552_; lean_object* v___x_7553_; lean_object* v___x_7554_; 
v___x_7552_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1, &l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_once, _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1);
v___x_7553_ = lean_box(1);
v___x_7554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7554_, 0, v___x_7553_);
lean_ctor_set(v___x_7554_, 1, v___x_7552_);
return v___x_7554_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(lean_object* v_libs_7555_, lean_object* v_a_7556_){
_start:
{
lean_object* v_snd_7559_; lean_object* v___y_7562_; lean_object* v___x_7586_; lean_object* v___x_7587_; lean_object* v___x_7588_; uint8_t v___x_7589_; 
v___x_7586_ = lean_unsigned_to_nat(0u);
v___x_7587_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1, &l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_once, _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1);
v___x_7588_ = lean_array_get_size(v_libs_7555_);
v___x_7589_ = lean_nat_dec_lt(v___x_7586_, v___x_7588_);
if (v___x_7589_ == 0)
{
v_snd_7559_ = v___x_7587_;
goto v___jp_7558_;
}
else
{
lean_object* v___x_7590_; uint8_t v___x_7591_; 
v___x_7590_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2, &l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2_once, _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2);
v___x_7591_ = lean_nat_dec_le(v___x_7588_, v___x_7588_);
if (v___x_7591_ == 0)
{
if (v___x_7589_ == 0)
{
v_snd_7559_ = v___x_7587_;
goto v___jp_7558_;
}
else
{
size_t v___x_7592_; size_t v___x_7593_; lean_object* v___x_7594_; 
v___x_7592_ = ((size_t)0ULL);
v___x_7593_ = lean_usize_of_nat(v___x_7588_);
v___x_7594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7555_, v___x_7592_, v___x_7593_, v___x_7590_);
v___y_7562_ = v___x_7594_;
goto v___jp_7561_;
}
}
else
{
size_t v___x_7595_; size_t v___x_7596_; lean_object* v___x_7597_; 
v___x_7595_ = ((size_t)0ULL);
v___x_7596_ = lean_usize_of_nat(v___x_7588_);
v___x_7597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7555_, v___x_7595_, v___x_7596_, v___x_7590_);
v___y_7562_ = v___x_7597_;
goto v___jp_7561_;
}
}
v___jp_7558_:
{
lean_object* v___x_7560_; 
v___x_7560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7560_, 0, v_snd_7559_);
lean_ctor_set(v___x_7560_, 1, v_a_7556_);
return v___x_7560_;
}
v___jp_7561_:
{
if (lean_obj_tag(v___y_7562_) == 0)
{
lean_object* v_a_7563_; lean_object* v_log_7564_; uint8_t v_action_7565_; uint8_t v_wantsRebuild_7566_; lean_object* v_trace_7567_; lean_object* v_buildTime_7568_; lean_object* v___x_7570_; uint8_t v_isShared_7571_; uint8_t v_isSharedCheck_7583_; 
v_a_7563_ = lean_ctor_get(v___y_7562_, 0);
lean_inc(v_a_7563_);
lean_dec_ref(v___y_7562_);
v_log_7564_ = lean_ctor_get(v_a_7556_, 0);
v_action_7565_ = lean_ctor_get_uint8(v_a_7556_, sizeof(void*)*3);
v_wantsRebuild_7566_ = lean_ctor_get_uint8(v_a_7556_, sizeof(void*)*3 + 1);
v_trace_7567_ = lean_ctor_get(v_a_7556_, 1);
v_buildTime_7568_ = lean_ctor_get(v_a_7556_, 2);
v_isSharedCheck_7583_ = !lean_is_exclusive(v_a_7556_);
if (v_isSharedCheck_7583_ == 0)
{
v___x_7570_ = v_a_7556_;
v_isShared_7571_ = v_isSharedCheck_7583_;
goto v_resetjp_7569_;
}
else
{
lean_inc(v_buildTime_7568_);
lean_inc(v_trace_7567_);
lean_inc(v_log_7564_);
lean_dec(v_a_7556_);
v___x_7570_ = lean_box(0);
v_isShared_7571_ = v_isSharedCheck_7583_;
goto v_resetjp_7569_;
}
v_resetjp_7569_:
{
lean_object* v___x_7572_; lean_object* v___x_7573_; lean_object* v___x_7574_; uint8_t v___x_7575_; lean_object* v___x_7576_; lean_object* v___x_7577_; lean_object* v___x_7578_; lean_object* v___x_7580_; 
v___x_7572_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0);
v___x_7573_ = l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(v_a_7563_);
v___x_7574_ = lean_string_append(v___x_7572_, v___x_7573_);
lean_dec_ref(v___x_7573_);
v___x_7575_ = 3;
v___x_7576_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7576_, 0, v___x_7574_);
lean_ctor_set_uint8(v___x_7576_, sizeof(void*)*1, v___x_7575_);
v___x_7577_ = lean_array_get_size(v_log_7564_);
v___x_7578_ = lean_array_push(v_log_7564_, v___x_7576_);
if (v_isShared_7571_ == 0)
{
lean_ctor_set(v___x_7570_, 0, v___x_7578_);
v___x_7580_ = v___x_7570_;
goto v_reusejp_7579_;
}
else
{
lean_object* v_reuseFailAlloc_7582_; 
v_reuseFailAlloc_7582_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7582_, 0, v___x_7578_);
lean_ctor_set(v_reuseFailAlloc_7582_, 1, v_trace_7567_);
lean_ctor_set(v_reuseFailAlloc_7582_, 2, v_buildTime_7568_);
lean_ctor_set_uint8(v_reuseFailAlloc_7582_, sizeof(void*)*3, v_action_7565_);
lean_ctor_set_uint8(v_reuseFailAlloc_7582_, sizeof(void*)*3 + 1, v_wantsRebuild_7566_);
v___x_7580_ = v_reuseFailAlloc_7582_;
goto v_reusejp_7579_;
}
v_reusejp_7579_:
{
lean_object* v___x_7581_; 
v___x_7581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7581_, 0, v___x_7577_);
lean_ctor_set(v___x_7581_, 1, v___x_7580_);
return v___x_7581_;
}
}
}
else
{
lean_object* v_a_7584_; lean_object* v_snd_7585_; 
v_a_7584_ = lean_ctor_get(v___y_7562_, 0);
lean_inc(v_a_7584_);
lean_dec_ref(v___y_7562_);
v_snd_7585_ = lean_ctor_get(v_a_7584_, 1);
lean_inc(v_snd_7585_);
lean_dec(v_a_7584_);
v_snd_7559_ = v_snd_7585_;
goto v___jp_7558_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___boxed(lean_object* v_libs_7598_, lean_object* v_a_7599_, lean_object* v_a_7600_){
_start:
{
lean_object* v_res_7601_; 
v_res_7601_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7598_, v_a_7599_);
lean_dec_ref(v_libs_7598_);
return v_res_7601_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder(lean_object* v_libs_7602_, lean_object* v_a_7603_, lean_object* v_a_7604_, lean_object* v_a_7605_, lean_object* v_a_7606_, lean_object* v_a_7607_, lean_object* v_a_7608_){
_start:
{
lean_object* v___x_7610_; 
v___x_7610_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7602_, v_a_7608_);
return v___x_7610_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___boxed(lean_object* v_libs_7611_, lean_object* v_a_7612_, lean_object* v_a_7613_, lean_object* v_a_7614_, lean_object* v_a_7615_, lean_object* v_a_7616_, lean_object* v_a_7617_, lean_object* v_a_7618_){
_start:
{
lean_object* v_res_7619_; 
v_res_7619_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder(v_libs_7611_, v_a_7612_, v_a_7613_, v_a_7614_, v_a_7615_, v_a_7616_, v_a_7617_);
lean_dec_ref(v_a_7616_);
lean_dec(v_a_7615_);
lean_dec(v_a_7614_);
lean_dec(v_a_7613_);
lean_dec_ref(v_a_7612_);
lean_dec_ref(v_libs_7611_);
return v_res_7619_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object* v_objs_7620_, lean_object* v_weakArgs_7621_, lean_object* v_traceArgs_7622_, lean_object* v_libFile_7623_, lean_object* v_linker_7624_, lean_object* v_libs_7625_, lean_object* v___y_7626_, lean_object* v___y_7627_, lean_object* v___y_7628_, lean_object* v___y_7629_, lean_object* v___y_7630_, lean_object* v___y_7631_){
_start:
{
lean_object* v_log_7633_; uint8_t v_action_7634_; uint8_t v_wantsRebuild_7635_; lean_object* v_trace_7636_; lean_object* v_buildTime_7637_; lean_object* v___x_7639_; uint8_t v_isShared_7640_; uint8_t v_isSharedCheck_7669_; 
v_log_7633_ = lean_ctor_get(v___y_7631_, 0);
v_action_7634_ = lean_ctor_get_uint8(v___y_7631_, sizeof(void*)*3);
v_wantsRebuild_7635_ = lean_ctor_get_uint8(v___y_7631_, sizeof(void*)*3 + 1);
v_trace_7636_ = lean_ctor_get(v___y_7631_, 1);
v_buildTime_7637_ = lean_ctor_get(v___y_7631_, 2);
v_isSharedCheck_7669_ = !lean_is_exclusive(v___y_7631_);
if (v_isSharedCheck_7669_ == 0)
{
v___x_7639_ = v___y_7631_;
v_isShared_7640_ = v_isSharedCheck_7669_;
goto v_resetjp_7638_;
}
else
{
lean_inc(v_buildTime_7637_);
lean_inc(v_trace_7636_);
lean_inc(v_log_7633_);
lean_dec(v___y_7631_);
v___x_7639_ = lean_box(0);
v_isShared_7640_ = v_isSharedCheck_7669_;
goto v_resetjp_7638_;
}
v_resetjp_7638_:
{
lean_object* v___x_7641_; lean_object* v___x_7642_; lean_object* v___x_7643_; lean_object* v___x_7644_; 
v___x_7641_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7620_, v_libs_7625_);
v___x_7642_ = l_Array_append___redArg(v___x_7641_, v_weakArgs_7621_);
v___x_7643_ = l_Array_append___redArg(v___x_7642_, v_traceArgs_7622_);
v___x_7644_ = l_Lake_compileSharedLib(v_libFile_7623_, v___x_7643_, v_linker_7624_, v_log_7633_);
lean_dec_ref(v___x_7643_);
if (lean_obj_tag(v___x_7644_) == 0)
{
lean_object* v_a_7645_; lean_object* v_a_7646_; lean_object* v___x_7648_; uint8_t v_isShared_7649_; uint8_t v_isSharedCheck_7656_; 
v_a_7645_ = lean_ctor_get(v___x_7644_, 0);
v_a_7646_ = lean_ctor_get(v___x_7644_, 1);
v_isSharedCheck_7656_ = !lean_is_exclusive(v___x_7644_);
if (v_isSharedCheck_7656_ == 0)
{
v___x_7648_ = v___x_7644_;
v_isShared_7649_ = v_isSharedCheck_7656_;
goto v_resetjp_7647_;
}
else
{
lean_inc(v_a_7646_);
lean_inc(v_a_7645_);
lean_dec(v___x_7644_);
v___x_7648_ = lean_box(0);
v_isShared_7649_ = v_isSharedCheck_7656_;
goto v_resetjp_7647_;
}
v_resetjp_7647_:
{
lean_object* v___x_7651_; 
if (v_isShared_7640_ == 0)
{
lean_ctor_set(v___x_7639_, 0, v_a_7646_);
v___x_7651_ = v___x_7639_;
goto v_reusejp_7650_;
}
else
{
lean_object* v_reuseFailAlloc_7655_; 
v_reuseFailAlloc_7655_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7655_, 0, v_a_7646_);
lean_ctor_set(v_reuseFailAlloc_7655_, 1, v_trace_7636_);
lean_ctor_set(v_reuseFailAlloc_7655_, 2, v_buildTime_7637_);
lean_ctor_set_uint8(v_reuseFailAlloc_7655_, sizeof(void*)*3, v_action_7634_);
lean_ctor_set_uint8(v_reuseFailAlloc_7655_, sizeof(void*)*3 + 1, v_wantsRebuild_7635_);
v___x_7651_ = v_reuseFailAlloc_7655_;
goto v_reusejp_7650_;
}
v_reusejp_7650_:
{
lean_object* v___x_7653_; 
if (v_isShared_7649_ == 0)
{
lean_ctor_set(v___x_7648_, 1, v___x_7651_);
v___x_7653_ = v___x_7648_;
goto v_reusejp_7652_;
}
else
{
lean_object* v_reuseFailAlloc_7654_; 
v_reuseFailAlloc_7654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7654_, 0, v_a_7645_);
lean_ctor_set(v_reuseFailAlloc_7654_, 1, v___x_7651_);
v___x_7653_ = v_reuseFailAlloc_7654_;
goto v_reusejp_7652_;
}
v_reusejp_7652_:
{
return v___x_7653_;
}
}
}
}
else
{
lean_object* v_a_7657_; lean_object* v_a_7658_; lean_object* v___x_7660_; uint8_t v_isShared_7661_; uint8_t v_isSharedCheck_7668_; 
v_a_7657_ = lean_ctor_get(v___x_7644_, 0);
v_a_7658_ = lean_ctor_get(v___x_7644_, 1);
v_isSharedCheck_7668_ = !lean_is_exclusive(v___x_7644_);
if (v_isSharedCheck_7668_ == 0)
{
v___x_7660_ = v___x_7644_;
v_isShared_7661_ = v_isSharedCheck_7668_;
goto v_resetjp_7659_;
}
else
{
lean_inc(v_a_7658_);
lean_inc(v_a_7657_);
lean_dec(v___x_7644_);
v___x_7660_ = lean_box(0);
v_isShared_7661_ = v_isSharedCheck_7668_;
goto v_resetjp_7659_;
}
v_resetjp_7659_:
{
lean_object* v___x_7663_; 
if (v_isShared_7640_ == 0)
{
lean_ctor_set(v___x_7639_, 0, v_a_7658_);
v___x_7663_ = v___x_7639_;
goto v_reusejp_7662_;
}
else
{
lean_object* v_reuseFailAlloc_7667_; 
v_reuseFailAlloc_7667_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7667_, 0, v_a_7658_);
lean_ctor_set(v_reuseFailAlloc_7667_, 1, v_trace_7636_);
lean_ctor_set(v_reuseFailAlloc_7667_, 2, v_buildTime_7637_);
lean_ctor_set_uint8(v_reuseFailAlloc_7667_, sizeof(void*)*3, v_action_7634_);
lean_ctor_set_uint8(v_reuseFailAlloc_7667_, sizeof(void*)*3 + 1, v_wantsRebuild_7635_);
v___x_7663_ = v_reuseFailAlloc_7667_;
goto v_reusejp_7662_;
}
v_reusejp_7662_:
{
lean_object* v___x_7665_; 
if (v_isShared_7661_ == 0)
{
lean_ctor_set(v___x_7660_, 1, v___x_7663_);
v___x_7665_ = v___x_7660_;
goto v_reusejp_7664_;
}
else
{
lean_object* v_reuseFailAlloc_7666_; 
v_reuseFailAlloc_7666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7666_, 0, v_a_7657_);
lean_ctor_set(v_reuseFailAlloc_7666_, 1, v___x_7663_);
v___x_7665_ = v_reuseFailAlloc_7666_;
goto v_reusejp_7664_;
}
v_reusejp_7664_:
{
return v___x_7665_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object* v_objs_7670_, lean_object* v_weakArgs_7671_, lean_object* v_traceArgs_7672_, lean_object* v_libFile_7673_, lean_object* v_linker_7674_, lean_object* v_libs_7675_, lean_object* v___y_7676_, lean_object* v___y_7677_, lean_object* v___y_7678_, lean_object* v___y_7679_, lean_object* v___y_7680_, lean_object* v___y_7681_, lean_object* v___y_7682_){
_start:
{
lean_object* v_res_7683_; 
v_res_7683_ = l_Lake_buildSharedLib___lam__0(v_objs_7670_, v_weakArgs_7671_, v_traceArgs_7672_, v_libFile_7673_, v_linker_7674_, v_libs_7675_, v___y_7676_, v___y_7677_, v___y_7678_, v___y_7679_, v___y_7680_, v___y_7681_);
lean_dec_ref(v___y_7680_);
lean_dec(v___y_7679_);
lean_dec(v___y_7678_);
lean_dec(v___y_7677_);
lean_dec_ref(v___y_7676_);
lean_dec_ref(v_libs_7675_);
lean_dec_ref(v_traceArgs_7672_);
lean_dec_ref(v_weakArgs_7671_);
lean_dec_ref(v_objs_7670_);
return v_res_7683_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(uint8_t v_linkDeps_7684_, lean_object* v___x_7685_, lean_object* v___f_7686_, lean_object* v_libs_7687_, lean_object* v___y_7688_, lean_object* v___y_7689_, lean_object* v___y_7690_, lean_object* v___y_7691_, lean_object* v___y_7692_, lean_object* v___y_7693_){
_start:
{
if (v_linkDeps_7684_ == 0)
{
lean_object* v___x_7695_; lean_object* v___x_7696_; 
v___x_7695_ = lean_mk_empty_array_with_capacity(v___x_7685_);
lean_inc_ref(v___y_7692_);
lean_inc(v___y_7691_);
lean_inc(v___y_7690_);
lean_inc(v___y_7689_);
v___x_7696_ = lean_apply_8(v___f_7686_, v___x_7695_, v___y_7688_, v___y_7689_, v___y_7690_, v___y_7691_, v___y_7692_, v___y_7693_, lean_box(0));
return v___x_7696_;
}
else
{
lean_object* v___x_7697_; 
v___x_7697_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7687_, v___y_7693_);
if (lean_obj_tag(v___x_7697_) == 0)
{
lean_object* v_a_7698_; lean_object* v_a_7699_; lean_object* v___x_7700_; 
v_a_7698_ = lean_ctor_get(v___x_7697_, 0);
lean_inc(v_a_7698_);
v_a_7699_ = lean_ctor_get(v___x_7697_, 1);
lean_inc(v_a_7699_);
lean_dec_ref(v___x_7697_);
lean_inc_ref(v___y_7692_);
lean_inc(v___y_7691_);
lean_inc(v___y_7690_);
lean_inc(v___y_7689_);
v___x_7700_ = lean_apply_8(v___f_7686_, v_a_7698_, v___y_7688_, v___y_7689_, v___y_7690_, v___y_7691_, v___y_7692_, v_a_7699_, lean_box(0));
return v___x_7700_;
}
else
{
lean_object* v_a_7701_; lean_object* v_a_7702_; lean_object* v___x_7704_; uint8_t v_isShared_7705_; uint8_t v_isSharedCheck_7709_; 
lean_dec_ref(v___y_7688_);
lean_dec_ref(v___f_7686_);
v_a_7701_ = lean_ctor_get(v___x_7697_, 0);
v_a_7702_ = lean_ctor_get(v___x_7697_, 1);
v_isSharedCheck_7709_ = !lean_is_exclusive(v___x_7697_);
if (v_isSharedCheck_7709_ == 0)
{
v___x_7704_ = v___x_7697_;
v_isShared_7705_ = v_isSharedCheck_7709_;
goto v_resetjp_7703_;
}
else
{
lean_inc(v_a_7702_);
lean_inc(v_a_7701_);
lean_dec(v___x_7697_);
v___x_7704_ = lean_box(0);
v_isShared_7705_ = v_isSharedCheck_7709_;
goto v_resetjp_7703_;
}
v_resetjp_7703_:
{
lean_object* v___x_7707_; 
if (v_isShared_7705_ == 0)
{
v___x_7707_ = v___x_7704_;
goto v_reusejp_7706_;
}
else
{
lean_object* v_reuseFailAlloc_7708_; 
v_reuseFailAlloc_7708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7708_, 0, v_a_7701_);
lean_ctor_set(v_reuseFailAlloc_7708_, 1, v_a_7702_);
v___x_7707_ = v_reuseFailAlloc_7708_;
goto v_reusejp_7706_;
}
v_reusejp_7706_:
{
return v___x_7707_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object* v_linkDeps_7710_, lean_object* v___x_7711_, lean_object* v___f_7712_, lean_object* v_libs_7713_, lean_object* v___y_7714_, lean_object* v___y_7715_, lean_object* v___y_7716_, lean_object* v___y_7717_, lean_object* v___y_7718_, lean_object* v___y_7719_, lean_object* v___y_7720_){
_start:
{
uint8_t v_linkDeps_boxed_7721_; lean_object* v_res_7722_; 
v_linkDeps_boxed_7721_ = lean_unbox(v_linkDeps_7710_);
v_res_7722_ = l_Lake_buildSharedLib___lam__1(v_linkDeps_boxed_7721_, v___x_7711_, v___f_7712_, v_libs_7713_, v___y_7714_, v___y_7715_, v___y_7716_, v___y_7717_, v___y_7718_, v___y_7719_);
lean_dec_ref(v___y_7718_);
lean_dec(v___y_7717_);
lean_dec(v___y_7716_);
lean_dec(v___y_7715_);
lean_dec_ref(v_libs_7713_);
lean_dec(v___x_7711_);
return v_res_7722_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2(lean_object* v_traceArgs_7723_, lean_object* v_extraDepTrace_7724_, uint8_t v_linkDeps_7725_, lean_object* v___f_7726_, lean_object* v_libFile_7727_, lean_object* v_libName_7728_, uint8_t v_plugin_7729_, lean_object* v_libs_7730_, lean_object* v___y_7731_, lean_object* v___y_7732_, lean_object* v___y_7733_, lean_object* v___y_7734_, lean_object* v___y_7735_, lean_object* v___y_7736_){
_start:
{
uint64_t v___y_7739_; uint64_t v___x_7816_; lean_object* v___x_7817_; lean_object* v___x_7818_; uint8_t v___x_7819_; 
v___x_7816_ = l_Lake_Hash_nil;
v___x_7817_ = lean_unsigned_to_nat(0u);
v___x_7818_ = lean_array_get_size(v_traceArgs_7723_);
v___x_7819_ = lean_nat_dec_lt(v___x_7817_, v___x_7818_);
if (v___x_7819_ == 0)
{
v___y_7739_ = v___x_7816_;
goto v___jp_7738_;
}
else
{
uint8_t v___x_7820_; 
v___x_7820_ = lean_nat_dec_le(v___x_7818_, v___x_7818_);
if (v___x_7820_ == 0)
{
if (v___x_7819_ == 0)
{
v___y_7739_ = v___x_7816_;
goto v___jp_7738_;
}
else
{
size_t v___x_7821_; size_t v___x_7822_; uint64_t v___x_7823_; 
v___x_7821_ = ((size_t)0ULL);
v___x_7822_ = lean_usize_of_nat(v___x_7818_);
v___x_7823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7723_, v___x_7821_, v___x_7822_, v___x_7816_);
v___y_7739_ = v___x_7823_;
goto v___jp_7738_;
}
}
else
{
size_t v___x_7824_; size_t v___x_7825_; uint64_t v___x_7826_; 
v___x_7824_ = ((size_t)0ULL);
v___x_7825_ = lean_usize_of_nat(v___x_7818_);
v___x_7826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7723_, v___x_7824_, v___x_7825_, v___x_7816_);
v___y_7739_ = v___x_7826_;
goto v___jp_7738_;
}
}
v___jp_7738_:
{
lean_object* v_log_7740_; uint8_t v_action_7741_; uint8_t v_wantsRebuild_7742_; lean_object* v_trace_7743_; lean_object* v_buildTime_7744_; lean_object* v___x_7746_; uint8_t v_isShared_7747_; uint8_t v_isSharedCheck_7815_; 
v_log_7740_ = lean_ctor_get(v___y_7736_, 0);
v_action_7741_ = lean_ctor_get_uint8(v___y_7736_, sizeof(void*)*3);
v_wantsRebuild_7742_ = lean_ctor_get_uint8(v___y_7736_, sizeof(void*)*3 + 1);
v_trace_7743_ = lean_ctor_get(v___y_7736_, 1);
v_buildTime_7744_ = lean_ctor_get(v___y_7736_, 2);
v_isSharedCheck_7815_ = !lean_is_exclusive(v___y_7736_);
if (v_isSharedCheck_7815_ == 0)
{
v___x_7746_ = v___y_7736_;
v_isShared_7747_ = v_isSharedCheck_7815_;
goto v_resetjp_7745_;
}
else
{
lean_inc(v_buildTime_7744_);
lean_inc(v_trace_7743_);
lean_inc(v_log_7740_);
lean_dec(v___y_7736_);
v___x_7746_ = lean_box(0);
v_isShared_7747_ = v_isSharedCheck_7815_;
goto v_resetjp_7745_;
}
v_resetjp_7745_:
{
lean_object* v___x_7748_; lean_object* v___x_7749_; lean_object* v___x_7750_; lean_object* v___x_7751_; lean_object* v___x_7752_; lean_object* v___x_7753_; lean_object* v___x_7754_; lean_object* v___x_7755_; lean_object* v___x_7756_; lean_object* v___x_7757_; lean_object* v___x_7758_; lean_object* v___x_7759_; lean_object* v___x_7760_; lean_object* v___x_7762_; 
v___x_7748_ = lean_unsigned_to_nat(0u);
v___x_7749_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_7750_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__0, &l_Lake_buildO___lam__2___closed__0_once, _init_l_Lake_buildO___lam__2___closed__0);
v___x_7751_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__1, &l_Lake_buildO___lam__2___closed__1_once, _init_l_Lake_buildO___lam__2___closed__1);
v___x_7752_ = lean_array_to_list(v_traceArgs_7723_);
v___x_7753_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_7752_);
lean_dec(v___x_7752_);
v___x_7754_ = lean_string_append(v___x_7751_, v___x_7753_);
lean_dec_ref(v___x_7753_);
v___x_7755_ = lean_string_append(v___x_7750_, v___x_7754_);
lean_dec_ref(v___x_7754_);
v___x_7756_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7757_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7757_, 0, v___x_7755_);
lean_ctor_set(v___x_7757_, 1, v___x_7749_);
lean_ctor_set(v___x_7757_, 2, v___x_7756_);
lean_ctor_set_uint64(v___x_7757_, sizeof(void*)*3, v___y_7739_);
v___x_7758_ = l_Lake_BuildTrace_mix(v_trace_7743_, v___x_7757_);
v___x_7759_ = l_Lake_platformTrace;
v___x_7760_ = l_Lake_BuildTrace_mix(v___x_7758_, v___x_7759_);
if (v_isShared_7747_ == 0)
{
lean_ctor_set(v___x_7746_, 1, v___x_7760_);
v___x_7762_ = v___x_7746_;
goto v_reusejp_7761_;
}
else
{
lean_object* v_reuseFailAlloc_7814_; 
v_reuseFailAlloc_7814_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7814_, 0, v_log_7740_);
lean_ctor_set(v_reuseFailAlloc_7814_, 1, v___x_7760_);
lean_ctor_set(v_reuseFailAlloc_7814_, 2, v_buildTime_7744_);
lean_ctor_set_uint8(v_reuseFailAlloc_7814_, sizeof(void*)*3, v_action_7741_);
lean_ctor_set_uint8(v_reuseFailAlloc_7814_, sizeof(void*)*3 + 1, v_wantsRebuild_7742_);
v___x_7762_ = v_reuseFailAlloc_7814_;
goto v_reusejp_7761_;
}
v_reusejp_7761_:
{
lean_object* v___x_7763_; 
lean_inc_ref(v___y_7735_);
lean_inc(v___y_7734_);
lean_inc(v___y_7733_);
lean_inc(v___y_7732_);
lean_inc_ref(v___y_7731_);
v___x_7763_ = lean_apply_7(v_extraDepTrace_7724_, v___y_7731_, v___y_7732_, v___y_7733_, v___y_7734_, v___y_7735_, v___x_7762_, lean_box(0));
if (lean_obj_tag(v___x_7763_) == 0)
{
lean_object* v_a_7764_; lean_object* v_a_7765_; lean_object* v_log_7766_; uint8_t v_action_7767_; uint8_t v_wantsRebuild_7768_; lean_object* v_trace_7769_; lean_object* v_buildTime_7770_; lean_object* v___x_7772_; uint8_t v_isShared_7773_; uint8_t v_isSharedCheck_7804_; 
v_a_7764_ = lean_ctor_get(v___x_7763_, 1);
lean_inc(v_a_7764_);
v_a_7765_ = lean_ctor_get(v___x_7763_, 0);
lean_inc(v_a_7765_);
lean_dec_ref(v___x_7763_);
v_log_7766_ = lean_ctor_get(v_a_7764_, 0);
v_action_7767_ = lean_ctor_get_uint8(v_a_7764_, sizeof(void*)*3);
v_wantsRebuild_7768_ = lean_ctor_get_uint8(v_a_7764_, sizeof(void*)*3 + 1);
v_trace_7769_ = lean_ctor_get(v_a_7764_, 1);
v_buildTime_7770_ = lean_ctor_get(v_a_7764_, 2);
v_isSharedCheck_7804_ = !lean_is_exclusive(v_a_7764_);
if (v_isSharedCheck_7804_ == 0)
{
v___x_7772_ = v_a_7764_;
v_isShared_7773_ = v_isSharedCheck_7804_;
goto v_resetjp_7771_;
}
else
{
lean_inc(v_buildTime_7770_);
lean_inc(v_trace_7769_);
lean_inc(v_log_7766_);
lean_dec(v_a_7764_);
v___x_7772_ = lean_box(0);
v_isShared_7773_ = v_isSharedCheck_7804_;
goto v_resetjp_7771_;
}
v_resetjp_7771_:
{
lean_object* v___x_7774_; lean_object* v___y_7775_; lean_object* v___x_7776_; lean_object* v___x_7778_; 
v___x_7774_ = lean_box(v_linkDeps_7725_);
lean_inc_ref(v_libs_7730_);
v___y_7775_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__1___boxed), 11, 4);
lean_closure_set(v___y_7775_, 0, v___x_7774_);
lean_closure_set(v___y_7775_, 1, v___x_7748_);
lean_closure_set(v___y_7775_, 2, v___f_7726_);
lean_closure_set(v___y_7775_, 3, v_libs_7730_);
v___x_7776_ = l_Lake_BuildTrace_mix(v_trace_7769_, v_a_7765_);
if (v_isShared_7773_ == 0)
{
lean_ctor_set(v___x_7772_, 1, v___x_7776_);
v___x_7778_ = v___x_7772_;
goto v_reusejp_7777_;
}
else
{
lean_object* v_reuseFailAlloc_7803_; 
v_reuseFailAlloc_7803_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7803_, 0, v_log_7766_);
lean_ctor_set(v_reuseFailAlloc_7803_, 1, v___x_7776_);
lean_ctor_set(v_reuseFailAlloc_7803_, 2, v_buildTime_7770_);
lean_ctor_set_uint8(v_reuseFailAlloc_7803_, sizeof(void*)*3, v_action_7767_);
lean_ctor_set_uint8(v_reuseFailAlloc_7803_, sizeof(void*)*3 + 1, v_wantsRebuild_7768_);
v___x_7778_ = v_reuseFailAlloc_7803_;
goto v_reusejp_7777_;
}
v_reusejp_7777_:
{
uint8_t v___x_7779_; uint8_t v___x_7780_; lean_object* v___x_7781_; lean_object* v___x_7782_; 
v___x_7779_ = 1;
v___x_7780_ = 0;
v___x_7781_ = l_Lake_sharedLibExt;
v___x_7782_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7727_, v___y_7775_, v___x_7780_, v___x_7781_, v___x_7779_, v___x_7780_, v___x_7780_, v___y_7731_, v___y_7732_, v___y_7733_, v___y_7734_, v___y_7735_, v___x_7778_);
if (lean_obj_tag(v___x_7782_) == 0)
{
lean_object* v_a_7783_; lean_object* v_a_7784_; lean_object* v___x_7786_; uint8_t v_isShared_7787_; uint8_t v_isSharedCheck_7793_; 
v_a_7783_ = lean_ctor_get(v___x_7782_, 0);
v_a_7784_ = lean_ctor_get(v___x_7782_, 1);
v_isSharedCheck_7793_ = !lean_is_exclusive(v___x_7782_);
if (v_isSharedCheck_7793_ == 0)
{
v___x_7786_ = v___x_7782_;
v_isShared_7787_ = v_isSharedCheck_7793_;
goto v_resetjp_7785_;
}
else
{
lean_inc(v_a_7784_);
lean_inc(v_a_7783_);
lean_dec(v___x_7782_);
v___x_7786_ = lean_box(0);
v_isShared_7787_ = v_isSharedCheck_7793_;
goto v_resetjp_7785_;
}
v_resetjp_7785_:
{
lean_object* v_path_7788_; lean_object* v___x_7789_; lean_object* v___x_7791_; 
v_path_7788_ = lean_ctor_get(v_a_7783_, 1);
lean_inc_ref(v_path_7788_);
lean_dec(v_a_7783_);
v___x_7789_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7789_, 0, v_path_7788_);
lean_ctor_set(v___x_7789_, 1, v_libName_7728_);
lean_ctor_set(v___x_7789_, 2, v_libs_7730_);
lean_ctor_set_uint8(v___x_7789_, sizeof(void*)*3, v_plugin_7729_);
if (v_isShared_7787_ == 0)
{
lean_ctor_set(v___x_7786_, 0, v___x_7789_);
v___x_7791_ = v___x_7786_;
goto v_reusejp_7790_;
}
else
{
lean_object* v_reuseFailAlloc_7792_; 
v_reuseFailAlloc_7792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7792_, 0, v___x_7789_);
lean_ctor_set(v_reuseFailAlloc_7792_, 1, v_a_7784_);
v___x_7791_ = v_reuseFailAlloc_7792_;
goto v_reusejp_7790_;
}
v_reusejp_7790_:
{
return v___x_7791_;
}
}
}
else
{
lean_object* v_a_7794_; lean_object* v_a_7795_; lean_object* v___x_7797_; uint8_t v_isShared_7798_; uint8_t v_isSharedCheck_7802_; 
lean_dec_ref(v_libs_7730_);
lean_dec_ref(v_libName_7728_);
v_a_7794_ = lean_ctor_get(v___x_7782_, 0);
v_a_7795_ = lean_ctor_get(v___x_7782_, 1);
v_isSharedCheck_7802_ = !lean_is_exclusive(v___x_7782_);
if (v_isSharedCheck_7802_ == 0)
{
v___x_7797_ = v___x_7782_;
v_isShared_7798_ = v_isSharedCheck_7802_;
goto v_resetjp_7796_;
}
else
{
lean_inc(v_a_7795_);
lean_inc(v_a_7794_);
lean_dec(v___x_7782_);
v___x_7797_ = lean_box(0);
v_isShared_7798_ = v_isSharedCheck_7802_;
goto v_resetjp_7796_;
}
v_resetjp_7796_:
{
lean_object* v___x_7800_; 
if (v_isShared_7798_ == 0)
{
v___x_7800_ = v___x_7797_;
goto v_reusejp_7799_;
}
else
{
lean_object* v_reuseFailAlloc_7801_; 
v_reuseFailAlloc_7801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7801_, 0, v_a_7794_);
lean_ctor_set(v_reuseFailAlloc_7801_, 1, v_a_7795_);
v___x_7800_ = v_reuseFailAlloc_7801_;
goto v_reusejp_7799_;
}
v_reusejp_7799_:
{
return v___x_7800_;
}
}
}
}
}
}
else
{
lean_object* v_a_7805_; lean_object* v_a_7806_; lean_object* v___x_7808_; uint8_t v_isShared_7809_; uint8_t v_isSharedCheck_7813_; 
lean_dec_ref(v___y_7731_);
lean_dec_ref(v_libs_7730_);
lean_dec_ref(v_libName_7728_);
lean_dec_ref(v_libFile_7727_);
lean_dec_ref(v___f_7726_);
v_a_7805_ = lean_ctor_get(v___x_7763_, 0);
v_a_7806_ = lean_ctor_get(v___x_7763_, 1);
v_isSharedCheck_7813_ = !lean_is_exclusive(v___x_7763_);
if (v_isSharedCheck_7813_ == 0)
{
v___x_7808_ = v___x_7763_;
v_isShared_7809_ = v_isSharedCheck_7813_;
goto v_resetjp_7807_;
}
else
{
lean_inc(v_a_7806_);
lean_inc(v_a_7805_);
lean_dec(v___x_7763_);
v___x_7808_ = lean_box(0);
v_isShared_7809_ = v_isSharedCheck_7813_;
goto v_resetjp_7807_;
}
v_resetjp_7807_:
{
lean_object* v___x_7811_; 
if (v_isShared_7809_ == 0)
{
v___x_7811_ = v___x_7808_;
goto v_reusejp_7810_;
}
else
{
lean_object* v_reuseFailAlloc_7812_; 
v_reuseFailAlloc_7812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7812_, 0, v_a_7805_);
lean_ctor_set(v_reuseFailAlloc_7812_, 1, v_a_7806_);
v___x_7811_ = v_reuseFailAlloc_7812_;
goto v_reusejp_7810_;
}
v_reusejp_7810_:
{
return v___x_7811_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2___boxed(lean_object* v_traceArgs_7827_, lean_object* v_extraDepTrace_7828_, lean_object* v_linkDeps_7829_, lean_object* v___f_7830_, lean_object* v_libFile_7831_, lean_object* v_libName_7832_, lean_object* v_plugin_7833_, lean_object* v_libs_7834_, lean_object* v___y_7835_, lean_object* v___y_7836_, lean_object* v___y_7837_, lean_object* v___y_7838_, lean_object* v___y_7839_, lean_object* v___y_7840_, lean_object* v___y_7841_){
_start:
{
uint8_t v_linkDeps_boxed_7842_; uint8_t v_plugin_boxed_7843_; lean_object* v_res_7844_; 
v_linkDeps_boxed_7842_ = lean_unbox(v_linkDeps_7829_);
v_plugin_boxed_7843_ = lean_unbox(v_plugin_7833_);
v_res_7844_ = l_Lake_buildSharedLib___lam__2(v_traceArgs_7827_, v_extraDepTrace_7828_, v_linkDeps_boxed_7842_, v___f_7830_, v_libFile_7831_, v_libName_7832_, v_plugin_boxed_7843_, v_libs_7834_, v___y_7835_, v___y_7836_, v___y_7837_, v___y_7838_, v___y_7839_, v___y_7840_);
lean_dec_ref(v___y_7839_);
lean_dec(v___y_7838_);
lean_dec(v___y_7837_);
lean_dec(v___y_7836_);
return v_res_7844_;
}
}
static lean_object* _init_l_Lake_buildSharedLib___lam__3___closed__0(void){
_start:
{
lean_object* v___x_7845_; 
v___x_7845_ = lean_mk_string_unchecked("linkLibs", 8, 8);
return v___x_7845_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3(lean_object* v_weakArgs_7846_, lean_object* v_traceArgs_7847_, lean_object* v_libFile_7848_, lean_object* v_linker_7849_, lean_object* v_extraDepTrace_7850_, uint8_t v_linkDeps_7851_, lean_object* v_libName_7852_, uint8_t v_plugin_7853_, lean_object* v_linkLibs_7854_, lean_object* v___x_7855_, lean_object* v_objs_7856_, lean_object* v___y_7857_, lean_object* v___y_7858_, lean_object* v___y_7859_, lean_object* v___y_7860_, lean_object* v___y_7861_, lean_object* v___y_7862_){
_start:
{
lean_object* v_trace_7864_; lean_object* v___f_7865_; lean_object* v___x_7866_; lean_object* v___x_7867_; lean_object* v___f_7868_; lean_object* v___x_7869_; lean_object* v___x_7870_; lean_object* v___x_7871_; uint8_t v___x_7872_; lean_object* v___x_7873_; lean_object* v___x_7874_; 
v_trace_7864_ = lean_ctor_get(v___y_7862_, 1);
lean_inc_ref(v_libFile_7848_);
lean_inc_ref(v_traceArgs_7847_);
v___f_7865_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__0___boxed), 13, 5);
lean_closure_set(v___f_7865_, 0, v_objs_7856_);
lean_closure_set(v___f_7865_, 1, v_weakArgs_7846_);
lean_closure_set(v___f_7865_, 2, v_traceArgs_7847_);
lean_closure_set(v___f_7865_, 3, v_libFile_7848_);
lean_closure_set(v___f_7865_, 4, v_linker_7849_);
v___x_7866_ = lean_box(v_linkDeps_7851_);
v___x_7867_ = lean_box(v_plugin_7853_);
v___f_7868_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__2___boxed), 15, 7);
lean_closure_set(v___f_7868_, 0, v_traceArgs_7847_);
lean_closure_set(v___f_7868_, 1, v_extraDepTrace_7850_);
lean_closure_set(v___f_7868_, 2, v___x_7866_);
lean_closure_set(v___f_7868_, 3, v___f_7865_);
lean_closure_set(v___f_7868_, 4, v_libFile_7848_);
lean_closure_set(v___f_7868_, 5, v_libName_7852_);
lean_closure_set(v___f_7868_, 6, v___x_7867_);
v___x_7869_ = lean_obj_once(&l_Lake_buildSharedLib___lam__3___closed__0, &l_Lake_buildSharedLib___lam__3___closed__0_once, _init_l_Lake_buildSharedLib___lam__3___closed__0);
v___x_7870_ = l_Lake_Job_collectArray___redArg(v_linkLibs_7854_, v___x_7869_);
v___x_7871_ = lean_unsigned_to_nat(0u);
v___x_7872_ = 0;
v___x_7873_ = l_Lake_Job_mapM___redArg(v___x_7855_, v___x_7870_, v___f_7868_, v___x_7871_, v___x_7872_, v___y_7857_, v___y_7858_, v___y_7859_, v___y_7860_, v___y_7861_, v_trace_7864_);
v___x_7874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7874_, 0, v___x_7873_);
lean_ctor_set(v___x_7874_, 1, v___y_7862_);
return v___x_7874_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3___boxed(lean_object** _args){
lean_object* v_weakArgs_7875_ = _args[0];
lean_object* v_traceArgs_7876_ = _args[1];
lean_object* v_libFile_7877_ = _args[2];
lean_object* v_linker_7878_ = _args[3];
lean_object* v_extraDepTrace_7879_ = _args[4];
lean_object* v_linkDeps_7880_ = _args[5];
lean_object* v_libName_7881_ = _args[6];
lean_object* v_plugin_7882_ = _args[7];
lean_object* v_linkLibs_7883_ = _args[8];
lean_object* v___x_7884_ = _args[9];
lean_object* v_objs_7885_ = _args[10];
lean_object* v___y_7886_ = _args[11];
lean_object* v___y_7887_ = _args[12];
lean_object* v___y_7888_ = _args[13];
lean_object* v___y_7889_ = _args[14];
lean_object* v___y_7890_ = _args[15];
lean_object* v___y_7891_ = _args[16];
lean_object* v___y_7892_ = _args[17];
_start:
{
uint8_t v_linkDeps_boxed_7893_; uint8_t v_plugin_boxed_7894_; lean_object* v_res_7895_; 
v_linkDeps_boxed_7893_ = lean_unbox(v_linkDeps_7880_);
v_plugin_boxed_7894_ = lean_unbox(v_plugin_7882_);
v_res_7895_ = l_Lake_buildSharedLib___lam__3(v_weakArgs_7875_, v_traceArgs_7876_, v_libFile_7877_, v_linker_7878_, v_extraDepTrace_7879_, v_linkDeps_boxed_7893_, v_libName_7881_, v_plugin_boxed_7894_, v_linkLibs_7883_, v___x_7884_, v_objs_7885_, v___y_7886_, v___y_7887_, v___y_7888_, v___y_7889_, v___y_7890_, v___y_7891_);
lean_dec_ref(v___y_7890_);
lean_dec(v___y_7889_);
lean_dec(v___y_7888_);
lean_dec(v___y_7887_);
lean_dec_ref(v_linkLibs_7883_);
return v_res_7895_;
}
}
static lean_object* _init_l_Lake_buildSharedLib___closed__0(void){
_start:
{
lean_object* v___x_7896_; 
v___x_7896_ = lean_mk_string_unchecked("linkObjs", 8, 8);
return v___x_7896_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object* v_libName_7897_, lean_object* v_libFile_7898_, lean_object* v_linkObjs_7899_, lean_object* v_linkLibs_7900_, lean_object* v_weakArgs_7901_, lean_object* v_traceArgs_7902_, lean_object* v_linker_7903_, lean_object* v_extraDepTrace_7904_, uint8_t v_plugin_7905_, uint8_t v_linkDeps_7906_, lean_object* v_a_7907_, lean_object* v_a_7908_, lean_object* v_a_7909_, lean_object* v_a_7910_, lean_object* v_a_7911_, lean_object* v_a_7912_){
_start:
{
lean_object* v___x_7914_; lean_object* v___x_7915_; lean_object* v___x_7916_; lean_object* v___f_7917_; lean_object* v___x_7918_; lean_object* v___x_7919_; lean_object* v___x_7920_; uint8_t v___x_7921_; lean_object* v___x_7922_; 
v___x_7914_ = l_Lake_instDataKindDynlib;
v___x_7915_ = lean_box(v_linkDeps_7906_);
v___x_7916_ = lean_box(v_plugin_7905_);
v___f_7917_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__3___boxed), 18, 10);
lean_closure_set(v___f_7917_, 0, v_weakArgs_7901_);
lean_closure_set(v___f_7917_, 1, v_traceArgs_7902_);
lean_closure_set(v___f_7917_, 2, v_libFile_7898_);
lean_closure_set(v___f_7917_, 3, v_linker_7903_);
lean_closure_set(v___f_7917_, 4, v_extraDepTrace_7904_);
lean_closure_set(v___f_7917_, 5, v___x_7915_);
lean_closure_set(v___f_7917_, 6, v_libName_7897_);
lean_closure_set(v___f_7917_, 7, v___x_7916_);
lean_closure_set(v___f_7917_, 8, v_linkLibs_7900_);
lean_closure_set(v___f_7917_, 9, v___x_7914_);
v___x_7918_ = lean_obj_once(&l_Lake_buildSharedLib___closed__0, &l_Lake_buildSharedLib___closed__0_once, _init_l_Lake_buildSharedLib___closed__0);
v___x_7919_ = l_Lake_Job_collectArray___redArg(v_linkObjs_7899_, v___x_7918_);
v___x_7920_ = lean_unsigned_to_nat(0u);
v___x_7921_ = 1;
v___x_7922_ = l_Lake_Job_bindM___redArg(v___x_7914_, v___x_7919_, v___f_7917_, v___x_7920_, v___x_7921_, v_a_7907_, v_a_7908_, v_a_7909_, v_a_7910_, v_a_7911_, v_a_7912_);
return v___x_7922_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object** _args){
lean_object* v_libName_7923_ = _args[0];
lean_object* v_libFile_7924_ = _args[1];
lean_object* v_linkObjs_7925_ = _args[2];
lean_object* v_linkLibs_7926_ = _args[3];
lean_object* v_weakArgs_7927_ = _args[4];
lean_object* v_traceArgs_7928_ = _args[5];
lean_object* v_linker_7929_ = _args[6];
lean_object* v_extraDepTrace_7930_ = _args[7];
lean_object* v_plugin_7931_ = _args[8];
lean_object* v_linkDeps_7932_ = _args[9];
lean_object* v_a_7933_ = _args[10];
lean_object* v_a_7934_ = _args[11];
lean_object* v_a_7935_ = _args[12];
lean_object* v_a_7936_ = _args[13];
lean_object* v_a_7937_ = _args[14];
lean_object* v_a_7938_ = _args[15];
lean_object* v_a_7939_ = _args[16];
_start:
{
uint8_t v_plugin_boxed_7940_; uint8_t v_linkDeps_boxed_7941_; lean_object* v_res_7942_; 
v_plugin_boxed_7940_ = lean_unbox(v_plugin_7931_);
v_linkDeps_boxed_7941_ = lean_unbox(v_linkDeps_7932_);
v_res_7942_ = l_Lake_buildSharedLib(v_libName_7923_, v_libFile_7924_, v_linkObjs_7925_, v_linkLibs_7926_, v_weakArgs_7927_, v_traceArgs_7928_, v_linker_7929_, v_extraDepTrace_7930_, v_plugin_boxed_7940_, v_linkDeps_boxed_7941_, v_a_7933_, v_a_7934_, v_a_7935_, v_a_7936_, v_a_7937_, v_a_7938_);
lean_dec_ref(v_a_7938_);
lean_dec_ref(v_a_7937_);
lean_dec(v_a_7936_);
lean_dec(v_a_7935_);
lean_dec(v_a_7934_);
lean_dec_ref(v_linkObjs_7925_);
return v_res_7942_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLib___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7943_; lean_object* v___x_7944_; lean_object* v___x_7945_; lean_object* v___x_7946_; 
v___x_7943_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1);
v___x_7944_ = lean_unsigned_to_nat(2u);
v___x_7945_ = lean_mk_empty_array_with_capacity(v___x_7944_);
v___x_7946_ = lean_array_push(v___x_7945_, v___x_7943_);
return v___x_7946_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object* v_objs_7947_, lean_object* v_weakArgs_7948_, lean_object* v_traceArgs_7949_, lean_object* v_libFile_7950_, uint8_t v_linkDeps_7951_, lean_object* v_libs_7952_, lean_object* v___y_7953_, lean_object* v___y_7954_, lean_object* v___y_7955_, lean_object* v___y_7956_, lean_object* v___y_7957_, lean_object* v___y_7958_){
_start:
{
lean_object* v_toContext_7960_; lean_object* v_lakeEnv_7961_; lean_object* v_lean_7962_; lean_object* v_libs_7964_; lean_object* v___y_7965_; 
v_toContext_7960_ = lean_ctor_get(v___y_7957_, 1);
v_lakeEnv_7961_ = lean_ctor_get(v_toContext_7960_, 0);
v_lean_7962_ = lean_ctor_get(v_lakeEnv_7961_, 1);
if (v_linkDeps_7951_ == 0)
{
lean_object* v___x_8010_; 
v___x_8010_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1, &l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_once, _init_l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1);
v_libs_7964_ = v___x_8010_;
v___y_7965_ = v___y_7958_;
goto v___jp_7963_;
}
else
{
lean_object* v___x_8011_; 
v___x_8011_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7952_, v___y_7958_);
if (lean_obj_tag(v___x_8011_) == 0)
{
lean_object* v_a_8012_; lean_object* v_a_8013_; 
v_a_8012_ = lean_ctor_get(v___x_8011_, 0);
lean_inc(v_a_8012_);
v_a_8013_ = lean_ctor_get(v___x_8011_, 1);
lean_inc(v_a_8013_);
lean_dec_ref(v___x_8011_);
v_libs_7964_ = v_a_8012_;
v___y_7965_ = v_a_8013_;
goto v___jp_7963_;
}
else
{
lean_object* v_a_8014_; lean_object* v_a_8015_; lean_object* v___x_8017_; uint8_t v_isShared_8018_; uint8_t v_isSharedCheck_8022_; 
lean_dec_ref(v_libFile_7950_);
v_a_8014_ = lean_ctor_get(v___x_8011_, 0);
v_a_8015_ = lean_ctor_get(v___x_8011_, 1);
v_isSharedCheck_8022_ = !lean_is_exclusive(v___x_8011_);
if (v_isSharedCheck_8022_ == 0)
{
v___x_8017_ = v___x_8011_;
v_isShared_8018_ = v_isSharedCheck_8022_;
goto v_resetjp_8016_;
}
else
{
lean_inc(v_a_8015_);
lean_inc(v_a_8014_);
lean_dec(v___x_8011_);
v___x_8017_ = lean_box(0);
v_isShared_8018_ = v_isSharedCheck_8022_;
goto v_resetjp_8016_;
}
v_resetjp_8016_:
{
lean_object* v___x_8020_; 
if (v_isShared_8018_ == 0)
{
v___x_8020_ = v___x_8017_;
goto v_reusejp_8019_;
}
else
{
lean_object* v_reuseFailAlloc_8021_; 
v_reuseFailAlloc_8021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8021_, 0, v_a_8014_);
lean_ctor_set(v_reuseFailAlloc_8021_, 1, v_a_8015_);
v___x_8020_ = v_reuseFailAlloc_8021_;
goto v_reusejp_8019_;
}
v_reusejp_8019_:
{
return v___x_8020_;
}
}
}
}
v___jp_7963_:
{
lean_object* v_leanLibDir_7966_; lean_object* v_cc_7967_; lean_object* v_ccLinkSharedFlags_7968_; lean_object* v_log_7969_; uint8_t v_action_7970_; uint8_t v_wantsRebuild_7971_; lean_object* v_trace_7972_; lean_object* v_buildTime_7973_; lean_object* v___x_7975_; uint8_t v_isShared_7976_; uint8_t v_isSharedCheck_8009_; 
v_leanLibDir_7966_ = lean_ctor_get(v_lean_7962_, 3);
v_cc_7967_ = lean_ctor_get(v_lean_7962_, 14);
v_ccLinkSharedFlags_7968_ = lean_ctor_get(v_lean_7962_, 20);
v_log_7969_ = lean_ctor_get(v___y_7965_, 0);
v_action_7970_ = lean_ctor_get_uint8(v___y_7965_, sizeof(void*)*3);
v_wantsRebuild_7971_ = lean_ctor_get_uint8(v___y_7965_, sizeof(void*)*3 + 1);
v_trace_7972_ = lean_ctor_get(v___y_7965_, 1);
v_buildTime_7973_ = lean_ctor_get(v___y_7965_, 2);
v_isSharedCheck_8009_ = !lean_is_exclusive(v___y_7965_);
if (v_isSharedCheck_8009_ == 0)
{
v___x_7975_ = v___y_7965_;
v_isShared_7976_ = v_isSharedCheck_8009_;
goto v_resetjp_7974_;
}
else
{
lean_inc(v_buildTime_7973_);
lean_inc(v_trace_7972_);
lean_inc(v_log_7969_);
lean_dec(v___y_7965_);
v___x_7975_ = lean_box(0);
v_isShared_7976_ = v_isSharedCheck_8009_;
goto v_resetjp_7974_;
}
v_resetjp_7974_:
{
lean_object* v___x_7977_; lean_object* v___x_7978_; lean_object* v___x_7979_; lean_object* v___x_7980_; lean_object* v___x_7981_; lean_object* v___x_7982_; lean_object* v___x_7983_; lean_object* v___x_7984_; 
v___x_7977_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7947_, v_libs_7964_);
lean_dec_ref(v_libs_7964_);
v___x_7978_ = l_Array_append___redArg(v___x_7977_, v_weakArgs_7948_);
v___x_7979_ = l_Array_append___redArg(v___x_7978_, v_traceArgs_7949_);
v___x_7980_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
lean_inc_ref(v_leanLibDir_7966_);
v___x_7981_ = lean_array_push(v___x_7980_, v_leanLibDir_7966_);
v___x_7982_ = l_Array_append___redArg(v___x_7979_, v___x_7981_);
lean_dec_ref(v___x_7981_);
v___x_7983_ = l_Array_append___redArg(v___x_7982_, v_ccLinkSharedFlags_7968_);
lean_inc_ref(v_cc_7967_);
v___x_7984_ = l_Lake_compileSharedLib(v_libFile_7950_, v___x_7983_, v_cc_7967_, v_log_7969_);
lean_dec_ref(v___x_7983_);
if (lean_obj_tag(v___x_7984_) == 0)
{
lean_object* v_a_7985_; lean_object* v_a_7986_; lean_object* v___x_7988_; uint8_t v_isShared_7989_; uint8_t v_isSharedCheck_7996_; 
v_a_7985_ = lean_ctor_get(v___x_7984_, 0);
v_a_7986_ = lean_ctor_get(v___x_7984_, 1);
v_isSharedCheck_7996_ = !lean_is_exclusive(v___x_7984_);
if (v_isSharedCheck_7996_ == 0)
{
v___x_7988_ = v___x_7984_;
v_isShared_7989_ = v_isSharedCheck_7996_;
goto v_resetjp_7987_;
}
else
{
lean_inc(v_a_7986_);
lean_inc(v_a_7985_);
lean_dec(v___x_7984_);
v___x_7988_ = lean_box(0);
v_isShared_7989_ = v_isSharedCheck_7996_;
goto v_resetjp_7987_;
}
v_resetjp_7987_:
{
lean_object* v___x_7991_; 
if (v_isShared_7976_ == 0)
{
lean_ctor_set(v___x_7975_, 0, v_a_7986_);
v___x_7991_ = v___x_7975_;
goto v_reusejp_7990_;
}
else
{
lean_object* v_reuseFailAlloc_7995_; 
v_reuseFailAlloc_7995_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7995_, 0, v_a_7986_);
lean_ctor_set(v_reuseFailAlloc_7995_, 1, v_trace_7972_);
lean_ctor_set(v_reuseFailAlloc_7995_, 2, v_buildTime_7973_);
lean_ctor_set_uint8(v_reuseFailAlloc_7995_, sizeof(void*)*3, v_action_7970_);
lean_ctor_set_uint8(v_reuseFailAlloc_7995_, sizeof(void*)*3 + 1, v_wantsRebuild_7971_);
v___x_7991_ = v_reuseFailAlloc_7995_;
goto v_reusejp_7990_;
}
v_reusejp_7990_:
{
lean_object* v___x_7993_; 
if (v_isShared_7989_ == 0)
{
lean_ctor_set(v___x_7988_, 1, v___x_7991_);
v___x_7993_ = v___x_7988_;
goto v_reusejp_7992_;
}
else
{
lean_object* v_reuseFailAlloc_7994_; 
v_reuseFailAlloc_7994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7994_, 0, v_a_7985_);
lean_ctor_set(v_reuseFailAlloc_7994_, 1, v___x_7991_);
v___x_7993_ = v_reuseFailAlloc_7994_;
goto v_reusejp_7992_;
}
v_reusejp_7992_:
{
return v___x_7993_;
}
}
}
}
else
{
lean_object* v_a_7997_; lean_object* v_a_7998_; lean_object* v___x_8000_; uint8_t v_isShared_8001_; uint8_t v_isSharedCheck_8008_; 
v_a_7997_ = lean_ctor_get(v___x_7984_, 0);
v_a_7998_ = lean_ctor_get(v___x_7984_, 1);
v_isSharedCheck_8008_ = !lean_is_exclusive(v___x_7984_);
if (v_isSharedCheck_8008_ == 0)
{
v___x_8000_ = v___x_7984_;
v_isShared_8001_ = v_isSharedCheck_8008_;
goto v_resetjp_7999_;
}
else
{
lean_inc(v_a_7998_);
lean_inc(v_a_7997_);
lean_dec(v___x_7984_);
v___x_8000_ = lean_box(0);
v_isShared_8001_ = v_isSharedCheck_8008_;
goto v_resetjp_7999_;
}
v_resetjp_7999_:
{
lean_object* v___x_8003_; 
if (v_isShared_7976_ == 0)
{
lean_ctor_set(v___x_7975_, 0, v_a_7998_);
v___x_8003_ = v___x_7975_;
goto v_reusejp_8002_;
}
else
{
lean_object* v_reuseFailAlloc_8007_; 
v_reuseFailAlloc_8007_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8007_, 0, v_a_7998_);
lean_ctor_set(v_reuseFailAlloc_8007_, 1, v_trace_7972_);
lean_ctor_set(v_reuseFailAlloc_8007_, 2, v_buildTime_7973_);
lean_ctor_set_uint8(v_reuseFailAlloc_8007_, sizeof(void*)*3, v_action_7970_);
lean_ctor_set_uint8(v_reuseFailAlloc_8007_, sizeof(void*)*3 + 1, v_wantsRebuild_7971_);
v___x_8003_ = v_reuseFailAlloc_8007_;
goto v_reusejp_8002_;
}
v_reusejp_8002_:
{
lean_object* v___x_8005_; 
if (v_isShared_8001_ == 0)
{
lean_ctor_set(v___x_8000_, 1, v___x_8003_);
v___x_8005_ = v___x_8000_;
goto v_reusejp_8004_;
}
else
{
lean_object* v_reuseFailAlloc_8006_; 
v_reuseFailAlloc_8006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8006_, 0, v_a_7997_);
lean_ctor_set(v_reuseFailAlloc_8006_, 1, v___x_8003_);
v___x_8005_ = v_reuseFailAlloc_8006_;
goto v_reusejp_8004_;
}
v_reusejp_8004_:
{
return v___x_8005_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object* v_objs_8023_, lean_object* v_weakArgs_8024_, lean_object* v_traceArgs_8025_, lean_object* v_libFile_8026_, lean_object* v_linkDeps_8027_, lean_object* v_libs_8028_, lean_object* v___y_8029_, lean_object* v___y_8030_, lean_object* v___y_8031_, lean_object* v___y_8032_, lean_object* v___y_8033_, lean_object* v___y_8034_, lean_object* v___y_8035_){
_start:
{
uint8_t v_linkDeps_boxed_8036_; lean_object* v_res_8037_; 
v_linkDeps_boxed_8036_ = lean_unbox(v_linkDeps_8027_);
v_res_8037_ = l_Lake_buildLeanSharedLib___lam__0(v_objs_8023_, v_weakArgs_8024_, v_traceArgs_8025_, v_libFile_8026_, v_linkDeps_boxed_8036_, v_libs_8028_, v___y_8029_, v___y_8030_, v___y_8031_, v___y_8032_, v___y_8033_, v___y_8034_);
lean_dec_ref(v___y_8033_);
lean_dec(v___y_8032_);
lean_dec(v___y_8031_);
lean_dec(v___y_8030_);
lean_dec_ref(v___y_8029_);
lean_dec_ref(v_libs_8028_);
lean_dec_ref(v_traceArgs_8025_);
lean_dec_ref(v_weakArgs_8024_);
lean_dec_ref(v_objs_8023_);
return v_res_8037_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object* v_objs_8038_, lean_object* v_weakArgs_8039_, lean_object* v_traceArgs_8040_, lean_object* v_libFile_8041_, uint8_t v_linkDeps_8042_, lean_object* v_libName_8043_, uint8_t v_plugin_8044_, lean_object* v_libs_8045_, lean_object* v___y_8046_, lean_object* v___y_8047_, lean_object* v___y_8048_, lean_object* v___y_8049_, lean_object* v___y_8050_, lean_object* v___y_8051_){
_start:
{
lean_object* v_log_8053_; uint8_t v_action_8054_; uint8_t v_wantsRebuild_8055_; lean_object* v_trace_8056_; lean_object* v_buildTime_8057_; lean_object* v___x_8059_; uint8_t v_isShared_8060_; uint8_t v_isSharedCheck_8117_; 
v_log_8053_ = lean_ctor_get(v___y_8051_, 0);
v_action_8054_ = lean_ctor_get_uint8(v___y_8051_, sizeof(void*)*3);
v_wantsRebuild_8055_ = lean_ctor_get_uint8(v___y_8051_, sizeof(void*)*3 + 1);
v_trace_8056_ = lean_ctor_get(v___y_8051_, 1);
v_buildTime_8057_ = lean_ctor_get(v___y_8051_, 2);
v_isSharedCheck_8117_ = !lean_is_exclusive(v___y_8051_);
if (v_isSharedCheck_8117_ == 0)
{
v___x_8059_ = v___y_8051_;
v_isShared_8060_ = v_isSharedCheck_8117_;
goto v_resetjp_8058_;
}
else
{
lean_inc(v_buildTime_8057_);
lean_inc(v_trace_8056_);
lean_inc(v_log_8053_);
lean_dec(v___y_8051_);
v___x_8059_ = lean_box(0);
v_isShared_8060_ = v_isSharedCheck_8117_;
goto v_resetjp_8058_;
}
v_resetjp_8058_:
{
lean_object* v_leanTrace_8061_; lean_object* v___x_8062_; lean_object* v___f_8063_; lean_object* v___x_8064_; uint64_t v___y_8066_; uint64_t v___x_8106_; lean_object* v___x_8107_; lean_object* v___x_8108_; uint8_t v___x_8109_; 
v_leanTrace_8061_ = lean_ctor_get(v___y_8050_, 2);
v___x_8062_ = lean_box(v_linkDeps_8042_);
lean_inc_ref(v_libs_8045_);
lean_inc_ref(v_libFile_8041_);
lean_inc_ref(v_traceArgs_8040_);
v___f_8063_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8063_, 0, v_objs_8038_);
lean_closure_set(v___f_8063_, 1, v_weakArgs_8039_);
lean_closure_set(v___f_8063_, 2, v_traceArgs_8040_);
lean_closure_set(v___f_8063_, 3, v_libFile_8041_);
lean_closure_set(v___f_8063_, 4, v___x_8062_);
lean_closure_set(v___f_8063_, 5, v_libs_8045_);
lean_inc_ref(v_leanTrace_8061_);
v___x_8064_ = l_Lake_BuildTrace_mix(v_trace_8056_, v_leanTrace_8061_);
v___x_8106_ = l_Lake_Hash_nil;
v___x_8107_ = lean_unsigned_to_nat(0u);
v___x_8108_ = lean_array_get_size(v_traceArgs_8040_);
v___x_8109_ = lean_nat_dec_lt(v___x_8107_, v___x_8108_);
if (v___x_8109_ == 0)
{
v___y_8066_ = v___x_8106_;
goto v___jp_8065_;
}
else
{
uint8_t v___x_8110_; 
v___x_8110_ = lean_nat_dec_le(v___x_8108_, v___x_8108_);
if (v___x_8110_ == 0)
{
if (v___x_8109_ == 0)
{
v___y_8066_ = v___x_8106_;
goto v___jp_8065_;
}
else
{
size_t v___x_8111_; size_t v___x_8112_; uint64_t v___x_8113_; 
v___x_8111_ = ((size_t)0ULL);
v___x_8112_ = lean_usize_of_nat(v___x_8108_);
v___x_8113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8040_, v___x_8111_, v___x_8112_, v___x_8106_);
v___y_8066_ = v___x_8113_;
goto v___jp_8065_;
}
}
else
{
size_t v___x_8114_; size_t v___x_8115_; uint64_t v___x_8116_; 
v___x_8114_ = ((size_t)0ULL);
v___x_8115_ = lean_usize_of_nat(v___x_8108_);
v___x_8116_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8040_, v___x_8114_, v___x_8115_, v___x_8106_);
v___y_8066_ = v___x_8116_;
goto v___jp_8065_;
}
}
v___jp_8065_:
{
lean_object* v___x_8067_; lean_object* v___x_8068_; lean_object* v___x_8069_; lean_object* v___x_8070_; lean_object* v___x_8071_; lean_object* v___x_8072_; lean_object* v___x_8073_; lean_object* v___x_8074_; lean_object* v___x_8075_; lean_object* v___x_8076_; lean_object* v___x_8077_; lean_object* v___x_8078_; lean_object* v___x_8080_; 
v___x_8067_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__0, &l_Lake_buildO___lam__2___closed__0_once, _init_l_Lake_buildO___lam__2___closed__0);
v___x_8068_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__1, &l_Lake_buildO___lam__2___closed__1_once, _init_l_Lake_buildO___lam__2___closed__1);
v___x_8069_ = lean_array_to_list(v_traceArgs_8040_);
v___x_8070_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_8069_);
lean_dec(v___x_8069_);
v___x_8071_ = lean_string_append(v___x_8068_, v___x_8070_);
lean_dec_ref(v___x_8070_);
v___x_8072_ = lean_string_append(v___x_8067_, v___x_8071_);
lean_dec_ref(v___x_8071_);
v___x_8073_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_8074_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8075_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8075_, 0, v___x_8072_);
lean_ctor_set(v___x_8075_, 1, v___x_8073_);
lean_ctor_set(v___x_8075_, 2, v___x_8074_);
lean_ctor_set_uint64(v___x_8075_, sizeof(void*)*3, v___y_8066_);
v___x_8076_ = l_Lake_BuildTrace_mix(v___x_8064_, v___x_8075_);
v___x_8077_ = l_Lake_platformTrace;
v___x_8078_ = l_Lake_BuildTrace_mix(v___x_8076_, v___x_8077_);
if (v_isShared_8060_ == 0)
{
lean_ctor_set(v___x_8059_, 1, v___x_8078_);
v___x_8080_ = v___x_8059_;
goto v_reusejp_8079_;
}
else
{
lean_object* v_reuseFailAlloc_8105_; 
v_reuseFailAlloc_8105_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8105_, 0, v_log_8053_);
lean_ctor_set(v_reuseFailAlloc_8105_, 1, v___x_8078_);
lean_ctor_set(v_reuseFailAlloc_8105_, 2, v_buildTime_8057_);
lean_ctor_set_uint8(v_reuseFailAlloc_8105_, sizeof(void*)*3, v_action_8054_);
lean_ctor_set_uint8(v_reuseFailAlloc_8105_, sizeof(void*)*3 + 1, v_wantsRebuild_8055_);
v___x_8080_ = v_reuseFailAlloc_8105_;
goto v_reusejp_8079_;
}
v_reusejp_8079_:
{
uint8_t v___x_8081_; lean_object* v___x_8082_; uint8_t v___x_8083_; lean_object* v___x_8084_; 
v___x_8081_ = 0;
v___x_8082_ = l_Lake_sharedLibExt;
v___x_8083_ = 1;
v___x_8084_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_8041_, v___f_8063_, v___x_8081_, v___x_8082_, v___x_8083_, v___x_8081_, v___x_8081_, v___y_8046_, v___y_8047_, v___y_8048_, v___y_8049_, v___y_8050_, v___x_8080_);
if (lean_obj_tag(v___x_8084_) == 0)
{
lean_object* v_a_8085_; lean_object* v_a_8086_; lean_object* v___x_8088_; uint8_t v_isShared_8089_; uint8_t v_isSharedCheck_8095_; 
v_a_8085_ = lean_ctor_get(v___x_8084_, 0);
v_a_8086_ = lean_ctor_get(v___x_8084_, 1);
v_isSharedCheck_8095_ = !lean_is_exclusive(v___x_8084_);
if (v_isSharedCheck_8095_ == 0)
{
v___x_8088_ = v___x_8084_;
v_isShared_8089_ = v_isSharedCheck_8095_;
goto v_resetjp_8087_;
}
else
{
lean_inc(v_a_8086_);
lean_inc(v_a_8085_);
lean_dec(v___x_8084_);
v___x_8088_ = lean_box(0);
v_isShared_8089_ = v_isSharedCheck_8095_;
goto v_resetjp_8087_;
}
v_resetjp_8087_:
{
lean_object* v_path_8090_; lean_object* v___x_8091_; lean_object* v___x_8093_; 
v_path_8090_ = lean_ctor_get(v_a_8085_, 1);
lean_inc_ref(v_path_8090_);
lean_dec(v_a_8085_);
v___x_8091_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_8091_, 0, v_path_8090_);
lean_ctor_set(v___x_8091_, 1, v_libName_8043_);
lean_ctor_set(v___x_8091_, 2, v_libs_8045_);
lean_ctor_set_uint8(v___x_8091_, sizeof(void*)*3, v_plugin_8044_);
if (v_isShared_8089_ == 0)
{
lean_ctor_set(v___x_8088_, 0, v___x_8091_);
v___x_8093_ = v___x_8088_;
goto v_reusejp_8092_;
}
else
{
lean_object* v_reuseFailAlloc_8094_; 
v_reuseFailAlloc_8094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8094_, 0, v___x_8091_);
lean_ctor_set(v_reuseFailAlloc_8094_, 1, v_a_8086_);
v___x_8093_ = v_reuseFailAlloc_8094_;
goto v_reusejp_8092_;
}
v_reusejp_8092_:
{
return v___x_8093_;
}
}
}
else
{
lean_object* v_a_8096_; lean_object* v_a_8097_; lean_object* v___x_8099_; uint8_t v_isShared_8100_; uint8_t v_isSharedCheck_8104_; 
lean_dec_ref(v_libs_8045_);
lean_dec_ref(v_libName_8043_);
v_a_8096_ = lean_ctor_get(v___x_8084_, 0);
v_a_8097_ = lean_ctor_get(v___x_8084_, 1);
v_isSharedCheck_8104_ = !lean_is_exclusive(v___x_8084_);
if (v_isSharedCheck_8104_ == 0)
{
v___x_8099_ = v___x_8084_;
v_isShared_8100_ = v_isSharedCheck_8104_;
goto v_resetjp_8098_;
}
else
{
lean_inc(v_a_8097_);
lean_inc(v_a_8096_);
lean_dec(v___x_8084_);
v___x_8099_ = lean_box(0);
v_isShared_8100_ = v_isSharedCheck_8104_;
goto v_resetjp_8098_;
}
v_resetjp_8098_:
{
lean_object* v___x_8102_; 
if (v_isShared_8100_ == 0)
{
v___x_8102_ = v___x_8099_;
goto v_reusejp_8101_;
}
else
{
lean_object* v_reuseFailAlloc_8103_; 
v_reuseFailAlloc_8103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8103_, 0, v_a_8096_);
lean_ctor_set(v_reuseFailAlloc_8103_, 1, v_a_8097_);
v___x_8102_ = v_reuseFailAlloc_8103_;
goto v_reusejp_8101_;
}
v_reusejp_8101_:
{
return v___x_8102_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object* v_objs_8118_, lean_object* v_weakArgs_8119_, lean_object* v_traceArgs_8120_, lean_object* v_libFile_8121_, lean_object* v_linkDeps_8122_, lean_object* v_libName_8123_, lean_object* v_plugin_8124_, lean_object* v_libs_8125_, lean_object* v___y_8126_, lean_object* v___y_8127_, lean_object* v___y_8128_, lean_object* v___y_8129_, lean_object* v___y_8130_, lean_object* v___y_8131_, lean_object* v___y_8132_){
_start:
{
uint8_t v_linkDeps_boxed_8133_; uint8_t v_plugin_boxed_8134_; lean_object* v_res_8135_; 
v_linkDeps_boxed_8133_ = lean_unbox(v_linkDeps_8122_);
v_plugin_boxed_8134_ = lean_unbox(v_plugin_8124_);
v_res_8135_ = l_Lake_buildLeanSharedLib___lam__1(v_objs_8118_, v_weakArgs_8119_, v_traceArgs_8120_, v_libFile_8121_, v_linkDeps_boxed_8133_, v_libName_8123_, v_plugin_boxed_8134_, v_libs_8125_, v___y_8126_, v___y_8127_, v___y_8128_, v___y_8129_, v___y_8130_, v___y_8131_);
lean_dec_ref(v___y_8130_);
lean_dec(v___y_8129_);
lean_dec(v___y_8128_);
lean_dec(v___y_8127_);
return v_res_8135_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2(lean_object* v_weakArgs_8136_, lean_object* v_traceArgs_8137_, lean_object* v_libFile_8138_, uint8_t v_linkDeps_8139_, lean_object* v_libName_8140_, uint8_t v_plugin_8141_, lean_object* v_linkLibs_8142_, lean_object* v___x_8143_, lean_object* v_objs_8144_, lean_object* v___y_8145_, lean_object* v___y_8146_, lean_object* v___y_8147_, lean_object* v___y_8148_, lean_object* v___y_8149_, lean_object* v___y_8150_){
_start:
{
lean_object* v_trace_8152_; lean_object* v___x_8153_; lean_object* v___x_8154_; lean_object* v___f_8155_; lean_object* v___x_8156_; lean_object* v___x_8157_; lean_object* v___x_8158_; uint8_t v___x_8159_; lean_object* v___x_8160_; lean_object* v___x_8161_; 
v_trace_8152_ = lean_ctor_get(v___y_8150_, 1);
v___x_8153_ = lean_box(v_linkDeps_8139_);
v___x_8154_ = lean_box(v_plugin_8141_);
v___f_8155_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__1___boxed), 15, 7);
lean_closure_set(v___f_8155_, 0, v_objs_8144_);
lean_closure_set(v___f_8155_, 1, v_weakArgs_8136_);
lean_closure_set(v___f_8155_, 2, v_traceArgs_8137_);
lean_closure_set(v___f_8155_, 3, v_libFile_8138_);
lean_closure_set(v___f_8155_, 4, v___x_8153_);
lean_closure_set(v___f_8155_, 5, v_libName_8140_);
lean_closure_set(v___f_8155_, 6, v___x_8154_);
v___x_8156_ = lean_obj_once(&l_Lake_buildSharedLib___lam__3___closed__0, &l_Lake_buildSharedLib___lam__3___closed__0_once, _init_l_Lake_buildSharedLib___lam__3___closed__0);
v___x_8157_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8142_, v___x_8156_);
v___x_8158_ = lean_unsigned_to_nat(0u);
v___x_8159_ = 0;
v___x_8160_ = l_Lake_Job_mapM___redArg(v___x_8143_, v___x_8157_, v___f_8155_, v___x_8158_, v___x_8159_, v___y_8145_, v___y_8146_, v___y_8147_, v___y_8148_, v___y_8149_, v_trace_8152_);
v___x_8161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8161_, 0, v___x_8160_);
lean_ctor_set(v___x_8161_, 1, v___y_8150_);
return v___x_8161_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2___boxed(lean_object* v_weakArgs_8162_, lean_object* v_traceArgs_8163_, lean_object* v_libFile_8164_, lean_object* v_linkDeps_8165_, lean_object* v_libName_8166_, lean_object* v_plugin_8167_, lean_object* v_linkLibs_8168_, lean_object* v___x_8169_, lean_object* v_objs_8170_, lean_object* v___y_8171_, lean_object* v___y_8172_, lean_object* v___y_8173_, lean_object* v___y_8174_, lean_object* v___y_8175_, lean_object* v___y_8176_, lean_object* v___y_8177_){
_start:
{
uint8_t v_linkDeps_boxed_8178_; uint8_t v_plugin_boxed_8179_; lean_object* v_res_8180_; 
v_linkDeps_boxed_8178_ = lean_unbox(v_linkDeps_8165_);
v_plugin_boxed_8179_ = lean_unbox(v_plugin_8167_);
v_res_8180_ = l_Lake_buildLeanSharedLib___lam__2(v_weakArgs_8162_, v_traceArgs_8163_, v_libFile_8164_, v_linkDeps_boxed_8178_, v_libName_8166_, v_plugin_boxed_8179_, v_linkLibs_8168_, v___x_8169_, v_objs_8170_, v___y_8171_, v___y_8172_, v___y_8173_, v___y_8174_, v___y_8175_, v___y_8176_);
lean_dec_ref(v___y_8175_);
lean_dec(v___y_8174_);
lean_dec(v___y_8173_);
lean_dec(v___y_8172_);
lean_dec_ref(v_linkLibs_8168_);
return v_res_8180_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object* v_libName_8181_, lean_object* v_libFile_8182_, lean_object* v_linkObjs_8183_, lean_object* v_linkLibs_8184_, lean_object* v_weakArgs_8185_, lean_object* v_traceArgs_8186_, uint8_t v_plugin_8187_, uint8_t v_linkDeps_8188_, lean_object* v_a_8189_, lean_object* v_a_8190_, lean_object* v_a_8191_, lean_object* v_a_8192_, lean_object* v_a_8193_, lean_object* v_a_8194_){
_start:
{
lean_object* v___x_8196_; lean_object* v___x_8197_; lean_object* v___x_8198_; lean_object* v___f_8199_; lean_object* v___x_8200_; lean_object* v___x_8201_; lean_object* v___x_8202_; uint8_t v___x_8203_; lean_object* v___x_8204_; 
v___x_8196_ = l_Lake_instDataKindDynlib;
v___x_8197_ = lean_box(v_linkDeps_8188_);
v___x_8198_ = lean_box(v_plugin_8187_);
v___f_8199_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__2___boxed), 16, 8);
lean_closure_set(v___f_8199_, 0, v_weakArgs_8185_);
lean_closure_set(v___f_8199_, 1, v_traceArgs_8186_);
lean_closure_set(v___f_8199_, 2, v_libFile_8182_);
lean_closure_set(v___f_8199_, 3, v___x_8197_);
lean_closure_set(v___f_8199_, 4, v_libName_8181_);
lean_closure_set(v___f_8199_, 5, v___x_8198_);
lean_closure_set(v___f_8199_, 6, v_linkLibs_8184_);
lean_closure_set(v___f_8199_, 7, v___x_8196_);
v___x_8200_ = lean_obj_once(&l_Lake_buildSharedLib___closed__0, &l_Lake_buildSharedLib___closed__0_once, _init_l_Lake_buildSharedLib___closed__0);
v___x_8201_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8183_, v___x_8200_);
v___x_8202_ = lean_unsigned_to_nat(0u);
v___x_8203_ = 1;
v___x_8204_ = l_Lake_Job_bindM___redArg(v___x_8196_, v___x_8201_, v___f_8199_, v___x_8202_, v___x_8203_, v_a_8189_, v_a_8190_, v_a_8191_, v_a_8192_, v_a_8193_, v_a_8194_);
return v___x_8204_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object* v_libName_8205_, lean_object* v_libFile_8206_, lean_object* v_linkObjs_8207_, lean_object* v_linkLibs_8208_, lean_object* v_weakArgs_8209_, lean_object* v_traceArgs_8210_, lean_object* v_plugin_8211_, lean_object* v_linkDeps_8212_, lean_object* v_a_8213_, lean_object* v_a_8214_, lean_object* v_a_8215_, lean_object* v_a_8216_, lean_object* v_a_8217_, lean_object* v_a_8218_, lean_object* v_a_8219_){
_start:
{
uint8_t v_plugin_boxed_8220_; uint8_t v_linkDeps_boxed_8221_; lean_object* v_res_8222_; 
v_plugin_boxed_8220_ = lean_unbox(v_plugin_8211_);
v_linkDeps_boxed_8221_ = lean_unbox(v_linkDeps_8212_);
v_res_8222_ = l_Lake_buildLeanSharedLib(v_libName_8205_, v_libFile_8206_, v_linkObjs_8207_, v_linkLibs_8208_, v_weakArgs_8209_, v_traceArgs_8210_, v_plugin_boxed_8220_, v_linkDeps_boxed_8221_, v_a_8213_, v_a_8214_, v_a_8215_, v_a_8216_, v_a_8217_, v_a_8218_);
lean_dec_ref(v_a_8218_);
lean_dec_ref(v_a_8217_);
lean_dec(v_a_8216_);
lean_dec(v_a_8215_);
lean_dec(v_a_8214_);
lean_dec_ref(v_linkObjs_8207_);
return v_res_8222_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object* v_libs_8223_, lean_object* v_objs_8224_, lean_object* v_weakArgs_8225_, lean_object* v_traceArgs_8226_, uint8_t v_sharedLean_8227_, lean_object* v_exeFile_8228_, lean_object* v___y_8229_, lean_object* v___y_8230_, lean_object* v___y_8231_, lean_object* v___y_8232_, lean_object* v___y_8233_, lean_object* v___y_8234_){
_start:
{
lean_object* v___x_8236_; 
v___x_8236_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_8223_, v___y_8234_);
if (lean_obj_tag(v___x_8236_) == 0)
{
lean_object* v_toContext_8237_; lean_object* v_lakeEnv_8238_; lean_object* v_lean_8239_; lean_object* v_a_8240_; lean_object* v_a_8241_; lean_object* v_leanLibDir_8242_; lean_object* v_cc_8243_; lean_object* v_log_8244_; uint8_t v_action_8245_; uint8_t v_wantsRebuild_8246_; lean_object* v_trace_8247_; lean_object* v_buildTime_8248_; lean_object* v___x_8250_; uint8_t v_isShared_8251_; uint8_t v_isSharedCheck_8287_; 
v_toContext_8237_ = lean_ctor_get(v___y_8233_, 1);
v_lakeEnv_8238_ = lean_ctor_get(v_toContext_8237_, 0);
v_lean_8239_ = lean_ctor_get(v_lakeEnv_8238_, 1);
v_a_8240_ = lean_ctor_get(v___x_8236_, 1);
lean_inc(v_a_8240_);
v_a_8241_ = lean_ctor_get(v___x_8236_, 0);
lean_inc(v_a_8241_);
lean_dec_ref(v___x_8236_);
v_leanLibDir_8242_ = lean_ctor_get(v_lean_8239_, 3);
v_cc_8243_ = lean_ctor_get(v_lean_8239_, 14);
v_log_8244_ = lean_ctor_get(v_a_8240_, 0);
v_action_8245_ = lean_ctor_get_uint8(v_a_8240_, sizeof(void*)*3);
v_wantsRebuild_8246_ = lean_ctor_get_uint8(v_a_8240_, sizeof(void*)*3 + 1);
v_trace_8247_ = lean_ctor_get(v_a_8240_, 1);
v_buildTime_8248_ = lean_ctor_get(v_a_8240_, 2);
v_isSharedCheck_8287_ = !lean_is_exclusive(v_a_8240_);
if (v_isSharedCheck_8287_ == 0)
{
v___x_8250_ = v_a_8240_;
v_isShared_8251_ = v_isSharedCheck_8287_;
goto v_resetjp_8249_;
}
else
{
lean_inc(v_buildTime_8248_);
lean_inc(v_trace_8247_);
lean_inc(v_log_8244_);
lean_dec(v_a_8240_);
v___x_8250_ = lean_box(0);
v_isShared_8251_ = v_isSharedCheck_8287_;
goto v_resetjp_8249_;
}
v_resetjp_8249_:
{
lean_object* v___x_8252_; lean_object* v___x_8253_; lean_object* v___x_8254_; lean_object* v___x_8255_; lean_object* v___x_8256_; lean_object* v___x_8257_; lean_object* v___x_8258_; lean_object* v___x_8259_; lean_object* v___x_8260_; lean_object* v___x_8261_; lean_object* v___x_8262_; 
v___x_8252_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_8224_, v_a_8241_);
lean_dec(v_a_8241_);
v___x_8253_ = l_Array_append___redArg(v___x_8252_, v_weakArgs_8225_);
v___x_8254_ = l_Array_append___redArg(v___x_8253_, v_traceArgs_8226_);
v___x_8255_ = lean_unsigned_to_nat(2u);
v___x_8256_ = lean_mk_empty_array_with_capacity(v___x_8255_);
lean_dec_ref(v___x_8256_);
v___x_8257_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
lean_inc_ref(v_leanLibDir_8242_);
v___x_8258_ = lean_array_push(v___x_8257_, v_leanLibDir_8242_);
v___x_8259_ = l_Array_append___redArg(v___x_8254_, v___x_8258_);
lean_dec_ref(v___x_8258_);
v___x_8260_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_8227_, v_lean_8239_);
v___x_8261_ = l_Array_append___redArg(v___x_8259_, v___x_8260_);
lean_dec_ref(v___x_8260_);
lean_inc_ref(v_cc_8243_);
v___x_8262_ = l_Lake_compileExe(v_exeFile_8228_, v___x_8261_, v_cc_8243_, v_log_8244_);
lean_dec_ref(v___x_8261_);
if (lean_obj_tag(v___x_8262_) == 0)
{
lean_object* v_a_8263_; lean_object* v_a_8264_; lean_object* v___x_8266_; uint8_t v_isShared_8267_; uint8_t v_isSharedCheck_8274_; 
v_a_8263_ = lean_ctor_get(v___x_8262_, 0);
v_a_8264_ = lean_ctor_get(v___x_8262_, 1);
v_isSharedCheck_8274_ = !lean_is_exclusive(v___x_8262_);
if (v_isSharedCheck_8274_ == 0)
{
v___x_8266_ = v___x_8262_;
v_isShared_8267_ = v_isSharedCheck_8274_;
goto v_resetjp_8265_;
}
else
{
lean_inc(v_a_8264_);
lean_inc(v_a_8263_);
lean_dec(v___x_8262_);
v___x_8266_ = lean_box(0);
v_isShared_8267_ = v_isSharedCheck_8274_;
goto v_resetjp_8265_;
}
v_resetjp_8265_:
{
lean_object* v___x_8269_; 
if (v_isShared_8251_ == 0)
{
lean_ctor_set(v___x_8250_, 0, v_a_8264_);
v___x_8269_ = v___x_8250_;
goto v_reusejp_8268_;
}
else
{
lean_object* v_reuseFailAlloc_8273_; 
v_reuseFailAlloc_8273_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8273_, 0, v_a_8264_);
lean_ctor_set(v_reuseFailAlloc_8273_, 1, v_trace_8247_);
lean_ctor_set(v_reuseFailAlloc_8273_, 2, v_buildTime_8248_);
lean_ctor_set_uint8(v_reuseFailAlloc_8273_, sizeof(void*)*3, v_action_8245_);
lean_ctor_set_uint8(v_reuseFailAlloc_8273_, sizeof(void*)*3 + 1, v_wantsRebuild_8246_);
v___x_8269_ = v_reuseFailAlloc_8273_;
goto v_reusejp_8268_;
}
v_reusejp_8268_:
{
lean_object* v___x_8271_; 
if (v_isShared_8267_ == 0)
{
lean_ctor_set(v___x_8266_, 1, v___x_8269_);
v___x_8271_ = v___x_8266_;
goto v_reusejp_8270_;
}
else
{
lean_object* v_reuseFailAlloc_8272_; 
v_reuseFailAlloc_8272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8272_, 0, v_a_8263_);
lean_ctor_set(v_reuseFailAlloc_8272_, 1, v___x_8269_);
v___x_8271_ = v_reuseFailAlloc_8272_;
goto v_reusejp_8270_;
}
v_reusejp_8270_:
{
return v___x_8271_;
}
}
}
}
else
{
lean_object* v_a_8275_; lean_object* v_a_8276_; lean_object* v___x_8278_; uint8_t v_isShared_8279_; uint8_t v_isSharedCheck_8286_; 
v_a_8275_ = lean_ctor_get(v___x_8262_, 0);
v_a_8276_ = lean_ctor_get(v___x_8262_, 1);
v_isSharedCheck_8286_ = !lean_is_exclusive(v___x_8262_);
if (v_isSharedCheck_8286_ == 0)
{
v___x_8278_ = v___x_8262_;
v_isShared_8279_ = v_isSharedCheck_8286_;
goto v_resetjp_8277_;
}
else
{
lean_inc(v_a_8276_);
lean_inc(v_a_8275_);
lean_dec(v___x_8262_);
v___x_8278_ = lean_box(0);
v_isShared_8279_ = v_isSharedCheck_8286_;
goto v_resetjp_8277_;
}
v_resetjp_8277_:
{
lean_object* v___x_8281_; 
if (v_isShared_8251_ == 0)
{
lean_ctor_set(v___x_8250_, 0, v_a_8276_);
v___x_8281_ = v___x_8250_;
goto v_reusejp_8280_;
}
else
{
lean_object* v_reuseFailAlloc_8285_; 
v_reuseFailAlloc_8285_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8285_, 0, v_a_8276_);
lean_ctor_set(v_reuseFailAlloc_8285_, 1, v_trace_8247_);
lean_ctor_set(v_reuseFailAlloc_8285_, 2, v_buildTime_8248_);
lean_ctor_set_uint8(v_reuseFailAlloc_8285_, sizeof(void*)*3, v_action_8245_);
lean_ctor_set_uint8(v_reuseFailAlloc_8285_, sizeof(void*)*3 + 1, v_wantsRebuild_8246_);
v___x_8281_ = v_reuseFailAlloc_8285_;
goto v_reusejp_8280_;
}
v_reusejp_8280_:
{
lean_object* v___x_8283_; 
if (v_isShared_8279_ == 0)
{
lean_ctor_set(v___x_8278_, 1, v___x_8281_);
v___x_8283_ = v___x_8278_;
goto v_reusejp_8282_;
}
else
{
lean_object* v_reuseFailAlloc_8284_; 
v_reuseFailAlloc_8284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8284_, 0, v_a_8275_);
lean_ctor_set(v_reuseFailAlloc_8284_, 1, v___x_8281_);
v___x_8283_ = v_reuseFailAlloc_8284_;
goto v_reusejp_8282_;
}
v_reusejp_8282_:
{
return v___x_8283_;
}
}
}
}
}
}
else
{
lean_object* v_a_8288_; lean_object* v_a_8289_; lean_object* v___x_8291_; uint8_t v_isShared_8292_; uint8_t v_isSharedCheck_8296_; 
lean_dec_ref(v_exeFile_8228_);
v_a_8288_ = lean_ctor_get(v___x_8236_, 0);
v_a_8289_ = lean_ctor_get(v___x_8236_, 1);
v_isSharedCheck_8296_ = !lean_is_exclusive(v___x_8236_);
if (v_isSharedCheck_8296_ == 0)
{
v___x_8291_ = v___x_8236_;
v_isShared_8292_ = v_isSharedCheck_8296_;
goto v_resetjp_8290_;
}
else
{
lean_inc(v_a_8289_);
lean_inc(v_a_8288_);
lean_dec(v___x_8236_);
v___x_8291_ = lean_box(0);
v_isShared_8292_ = v_isSharedCheck_8296_;
goto v_resetjp_8290_;
}
v_resetjp_8290_:
{
lean_object* v___x_8294_; 
if (v_isShared_8292_ == 0)
{
v___x_8294_ = v___x_8291_;
goto v_reusejp_8293_;
}
else
{
lean_object* v_reuseFailAlloc_8295_; 
v_reuseFailAlloc_8295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8295_, 0, v_a_8288_);
lean_ctor_set(v_reuseFailAlloc_8295_, 1, v_a_8289_);
v___x_8294_ = v_reuseFailAlloc_8295_;
goto v_reusejp_8293_;
}
v_reusejp_8293_:
{
return v___x_8294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object* v_libs_8297_, lean_object* v_objs_8298_, lean_object* v_weakArgs_8299_, lean_object* v_traceArgs_8300_, lean_object* v_sharedLean_8301_, lean_object* v_exeFile_8302_, lean_object* v___y_8303_, lean_object* v___y_8304_, lean_object* v___y_8305_, lean_object* v___y_8306_, lean_object* v___y_8307_, lean_object* v___y_8308_, lean_object* v___y_8309_){
_start:
{
uint8_t v_sharedLean_boxed_8310_; lean_object* v_res_8311_; 
v_sharedLean_boxed_8310_ = lean_unbox(v_sharedLean_8301_);
v_res_8311_ = l_Lake_buildLeanExe___lam__0(v_libs_8297_, v_objs_8298_, v_weakArgs_8299_, v_traceArgs_8300_, v_sharedLean_boxed_8310_, v_exeFile_8302_, v___y_8303_, v___y_8304_, v___y_8305_, v___y_8306_, v___y_8307_, v___y_8308_);
lean_dec_ref(v___y_8307_);
lean_dec(v___y_8306_);
lean_dec(v___y_8305_);
lean_dec(v___y_8304_);
lean_dec_ref(v___y_8303_);
lean_dec_ref(v_traceArgs_8300_);
lean_dec_ref(v_weakArgs_8299_);
lean_dec_ref(v_objs_8298_);
lean_dec_ref(v_libs_8297_);
return v_res_8311_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object* v_objs_8312_, lean_object* v_weakArgs_8313_, lean_object* v_traceArgs_8314_, uint8_t v_sharedLean_8315_, lean_object* v_exeFile_8316_, lean_object* v_libs_8317_, lean_object* v___y_8318_, lean_object* v___y_8319_, lean_object* v___y_8320_, lean_object* v___y_8321_, lean_object* v___y_8322_, lean_object* v___y_8323_){
_start:
{
lean_object* v_log_8325_; uint8_t v_action_8326_; uint8_t v_wantsRebuild_8327_; lean_object* v_trace_8328_; lean_object* v_buildTime_8329_; lean_object* v___x_8331_; uint8_t v_isShared_8332_; uint8_t v_isSharedCheck_8388_; 
v_log_8325_ = lean_ctor_get(v___y_8323_, 0);
v_action_8326_ = lean_ctor_get_uint8(v___y_8323_, sizeof(void*)*3);
v_wantsRebuild_8327_ = lean_ctor_get_uint8(v___y_8323_, sizeof(void*)*3 + 1);
v_trace_8328_ = lean_ctor_get(v___y_8323_, 1);
v_buildTime_8329_ = lean_ctor_get(v___y_8323_, 2);
v_isSharedCheck_8388_ = !lean_is_exclusive(v___y_8323_);
if (v_isSharedCheck_8388_ == 0)
{
v___x_8331_ = v___y_8323_;
v_isShared_8332_ = v_isSharedCheck_8388_;
goto v_resetjp_8330_;
}
else
{
lean_inc(v_buildTime_8329_);
lean_inc(v_trace_8328_);
lean_inc(v_log_8325_);
lean_dec(v___y_8323_);
v___x_8331_ = lean_box(0);
v_isShared_8332_ = v_isSharedCheck_8388_;
goto v_resetjp_8330_;
}
v_resetjp_8330_:
{
lean_object* v_leanTrace_8333_; lean_object* v___x_8334_; lean_object* v___f_8335_; lean_object* v___x_8336_; uint64_t v___y_8338_; uint64_t v___x_8377_; lean_object* v___x_8378_; lean_object* v___x_8379_; uint8_t v___x_8380_; 
v_leanTrace_8333_ = lean_ctor_get(v___y_8322_, 2);
v___x_8334_ = lean_box(v_sharedLean_8315_);
lean_inc_ref(v_exeFile_8316_);
lean_inc_ref(v_traceArgs_8314_);
v___f_8335_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8335_, 0, v_libs_8317_);
lean_closure_set(v___f_8335_, 1, v_objs_8312_);
lean_closure_set(v___f_8335_, 2, v_weakArgs_8313_);
lean_closure_set(v___f_8335_, 3, v_traceArgs_8314_);
lean_closure_set(v___f_8335_, 4, v___x_8334_);
lean_closure_set(v___f_8335_, 5, v_exeFile_8316_);
lean_inc_ref(v_leanTrace_8333_);
v___x_8336_ = l_Lake_BuildTrace_mix(v_trace_8328_, v_leanTrace_8333_);
v___x_8377_ = l_Lake_Hash_nil;
v___x_8378_ = lean_unsigned_to_nat(0u);
v___x_8379_ = lean_array_get_size(v_traceArgs_8314_);
v___x_8380_ = lean_nat_dec_lt(v___x_8378_, v___x_8379_);
if (v___x_8380_ == 0)
{
v___y_8338_ = v___x_8377_;
goto v___jp_8337_;
}
else
{
uint8_t v___x_8381_; 
v___x_8381_ = lean_nat_dec_le(v___x_8379_, v___x_8379_);
if (v___x_8381_ == 0)
{
if (v___x_8380_ == 0)
{
v___y_8338_ = v___x_8377_;
goto v___jp_8337_;
}
else
{
size_t v___x_8382_; size_t v___x_8383_; uint64_t v___x_8384_; 
v___x_8382_ = ((size_t)0ULL);
v___x_8383_ = lean_usize_of_nat(v___x_8379_);
v___x_8384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8314_, v___x_8382_, v___x_8383_, v___x_8377_);
v___y_8338_ = v___x_8384_;
goto v___jp_8337_;
}
}
else
{
size_t v___x_8385_; size_t v___x_8386_; uint64_t v___x_8387_; 
v___x_8385_ = ((size_t)0ULL);
v___x_8386_ = lean_usize_of_nat(v___x_8379_);
v___x_8387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8314_, v___x_8385_, v___x_8386_, v___x_8377_);
v___y_8338_ = v___x_8387_;
goto v___jp_8337_;
}
}
v___jp_8337_:
{
lean_object* v___x_8339_; lean_object* v___x_8340_; lean_object* v___x_8341_; lean_object* v___x_8342_; lean_object* v___x_8343_; lean_object* v___x_8344_; lean_object* v___x_8345_; lean_object* v___x_8346_; lean_object* v___x_8347_; lean_object* v___x_8348_; lean_object* v___x_8349_; lean_object* v___x_8350_; lean_object* v___x_8352_; 
v___x_8339_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__0, &l_Lake_buildO___lam__2___closed__0_once, _init_l_Lake_buildO___lam__2___closed__0);
v___x_8340_ = lean_obj_once(&l_Lake_buildO___lam__2___closed__1, &l_Lake_buildO___lam__2___closed__1_once, _init_l_Lake_buildO___lam__2___closed__1);
v___x_8341_ = lean_array_to_list(v_traceArgs_8314_);
v___x_8342_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_8341_);
lean_dec(v___x_8341_);
v___x_8343_ = lean_string_append(v___x_8340_, v___x_8342_);
lean_dec_ref(v___x_8342_);
v___x_8344_ = lean_string_append(v___x_8339_, v___x_8343_);
lean_dec_ref(v___x_8343_);
v___x_8345_ = lean_obj_once(&l_Lake_platformTrace___closed__2, &l_Lake_platformTrace___closed__2_once, _init_l_Lake_platformTrace___closed__2);
v___x_8346_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8347_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8347_, 0, v___x_8344_);
lean_ctor_set(v___x_8347_, 1, v___x_8345_);
lean_ctor_set(v___x_8347_, 2, v___x_8346_);
lean_ctor_set_uint64(v___x_8347_, sizeof(void*)*3, v___y_8338_);
v___x_8348_ = l_Lake_BuildTrace_mix(v___x_8336_, v___x_8347_);
v___x_8349_ = l_Lake_platformTrace;
v___x_8350_ = l_Lake_BuildTrace_mix(v___x_8348_, v___x_8349_);
if (v_isShared_8332_ == 0)
{
lean_ctor_set(v___x_8331_, 1, v___x_8350_);
v___x_8352_ = v___x_8331_;
goto v_reusejp_8351_;
}
else
{
lean_object* v_reuseFailAlloc_8376_; 
v_reuseFailAlloc_8376_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8376_, 0, v_log_8325_);
lean_ctor_set(v_reuseFailAlloc_8376_, 1, v___x_8350_);
lean_ctor_set(v_reuseFailAlloc_8376_, 2, v_buildTime_8329_);
lean_ctor_set_uint8(v_reuseFailAlloc_8376_, sizeof(void*)*3, v_action_8326_);
lean_ctor_set_uint8(v_reuseFailAlloc_8376_, sizeof(void*)*3 + 1, v_wantsRebuild_8327_);
v___x_8352_ = v_reuseFailAlloc_8376_;
goto v_reusejp_8351_;
}
v_reusejp_8351_:
{
uint8_t v___x_8353_; lean_object* v___x_8354_; uint8_t v___x_8355_; lean_object* v___x_8356_; 
v___x_8353_ = 0;
v___x_8354_ = l_System_FilePath_exeExtension;
v___x_8355_ = 1;
v___x_8356_ = l_Lake_buildArtifactUnlessUpToDate(v_exeFile_8316_, v___f_8335_, v___x_8353_, v___x_8354_, v___x_8355_, v___x_8355_, v___x_8353_, v___y_8318_, v___y_8319_, v___y_8320_, v___y_8321_, v___y_8322_, v___x_8352_);
if (lean_obj_tag(v___x_8356_) == 0)
{
lean_object* v_a_8357_; lean_object* v_a_8358_; lean_object* v___x_8360_; uint8_t v_isShared_8361_; uint8_t v_isSharedCheck_8366_; 
v_a_8357_ = lean_ctor_get(v___x_8356_, 0);
v_a_8358_ = lean_ctor_get(v___x_8356_, 1);
v_isSharedCheck_8366_ = !lean_is_exclusive(v___x_8356_);
if (v_isSharedCheck_8366_ == 0)
{
v___x_8360_ = v___x_8356_;
v_isShared_8361_ = v_isSharedCheck_8366_;
goto v_resetjp_8359_;
}
else
{
lean_inc(v_a_8358_);
lean_inc(v_a_8357_);
lean_dec(v___x_8356_);
v___x_8360_ = lean_box(0);
v_isShared_8361_ = v_isSharedCheck_8366_;
goto v_resetjp_8359_;
}
v_resetjp_8359_:
{
lean_object* v_path_8362_; lean_object* v___x_8364_; 
v_path_8362_ = lean_ctor_get(v_a_8357_, 1);
lean_inc_ref(v_path_8362_);
lean_dec(v_a_8357_);
if (v_isShared_8361_ == 0)
{
lean_ctor_set(v___x_8360_, 0, v_path_8362_);
v___x_8364_ = v___x_8360_;
goto v_reusejp_8363_;
}
else
{
lean_object* v_reuseFailAlloc_8365_; 
v_reuseFailAlloc_8365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8365_, 0, v_path_8362_);
lean_ctor_set(v_reuseFailAlloc_8365_, 1, v_a_8358_);
v___x_8364_ = v_reuseFailAlloc_8365_;
goto v_reusejp_8363_;
}
v_reusejp_8363_:
{
return v___x_8364_;
}
}
}
else
{
lean_object* v_a_8367_; lean_object* v_a_8368_; lean_object* v___x_8370_; uint8_t v_isShared_8371_; uint8_t v_isSharedCheck_8375_; 
v_a_8367_ = lean_ctor_get(v___x_8356_, 0);
v_a_8368_ = lean_ctor_get(v___x_8356_, 1);
v_isSharedCheck_8375_ = !lean_is_exclusive(v___x_8356_);
if (v_isSharedCheck_8375_ == 0)
{
v___x_8370_ = v___x_8356_;
v_isShared_8371_ = v_isSharedCheck_8375_;
goto v_resetjp_8369_;
}
else
{
lean_inc(v_a_8368_);
lean_inc(v_a_8367_);
lean_dec(v___x_8356_);
v___x_8370_ = lean_box(0);
v_isShared_8371_ = v_isSharedCheck_8375_;
goto v_resetjp_8369_;
}
v_resetjp_8369_:
{
lean_object* v___x_8373_; 
if (v_isShared_8371_ == 0)
{
v___x_8373_ = v___x_8370_;
goto v_reusejp_8372_;
}
else
{
lean_object* v_reuseFailAlloc_8374_; 
v_reuseFailAlloc_8374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8374_, 0, v_a_8367_);
lean_ctor_set(v_reuseFailAlloc_8374_, 1, v_a_8368_);
v___x_8373_ = v_reuseFailAlloc_8374_;
goto v_reusejp_8372_;
}
v_reusejp_8372_:
{
return v___x_8373_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object* v_objs_8389_, lean_object* v_weakArgs_8390_, lean_object* v_traceArgs_8391_, lean_object* v_sharedLean_8392_, lean_object* v_exeFile_8393_, lean_object* v_libs_8394_, lean_object* v___y_8395_, lean_object* v___y_8396_, lean_object* v___y_8397_, lean_object* v___y_8398_, lean_object* v___y_8399_, lean_object* v___y_8400_, lean_object* v___y_8401_){
_start:
{
uint8_t v_sharedLean_boxed_8402_; lean_object* v_res_8403_; 
v_sharedLean_boxed_8402_ = lean_unbox(v_sharedLean_8392_);
v_res_8403_ = l_Lake_buildLeanExe___lam__1(v_objs_8389_, v_weakArgs_8390_, v_traceArgs_8391_, v_sharedLean_boxed_8402_, v_exeFile_8393_, v_libs_8394_, v___y_8395_, v___y_8396_, v___y_8397_, v___y_8398_, v___y_8399_, v___y_8400_);
lean_dec_ref(v___y_8399_);
lean_dec(v___y_8398_);
lean_dec(v___y_8397_);
lean_dec(v___y_8396_);
return v_res_8403_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2(lean_object* v_weakArgs_8404_, lean_object* v_traceArgs_8405_, uint8_t v_sharedLean_8406_, lean_object* v_exeFile_8407_, lean_object* v_linkLibs_8408_, lean_object* v___x_8409_, lean_object* v_objs_8410_, lean_object* v___y_8411_, lean_object* v___y_8412_, lean_object* v___y_8413_, lean_object* v___y_8414_, lean_object* v___y_8415_, lean_object* v___y_8416_){
_start:
{
lean_object* v_trace_8418_; lean_object* v___x_8419_; lean_object* v___f_8420_; lean_object* v___x_8421_; lean_object* v___x_8422_; lean_object* v___x_8423_; uint8_t v___x_8424_; lean_object* v___x_8425_; lean_object* v___x_8426_; 
v_trace_8418_ = lean_ctor_get(v___y_8416_, 1);
v___x_8419_ = lean_box(v_sharedLean_8406_);
v___f_8420_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__1___boxed), 13, 5);
lean_closure_set(v___f_8420_, 0, v_objs_8410_);
lean_closure_set(v___f_8420_, 1, v_weakArgs_8404_);
lean_closure_set(v___f_8420_, 2, v_traceArgs_8405_);
lean_closure_set(v___f_8420_, 3, v___x_8419_);
lean_closure_set(v___f_8420_, 4, v_exeFile_8407_);
v___x_8421_ = lean_obj_once(&l_Lake_buildSharedLib___lam__3___closed__0, &l_Lake_buildSharedLib___lam__3___closed__0_once, _init_l_Lake_buildSharedLib___lam__3___closed__0);
v___x_8422_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8408_, v___x_8421_);
v___x_8423_ = lean_unsigned_to_nat(0u);
v___x_8424_ = 0;
v___x_8425_ = l_Lake_Job_mapM___redArg(v___x_8409_, v___x_8422_, v___f_8420_, v___x_8423_, v___x_8424_, v___y_8411_, v___y_8412_, v___y_8413_, v___y_8414_, v___y_8415_, v_trace_8418_);
v___x_8426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8426_, 0, v___x_8425_);
lean_ctor_set(v___x_8426_, 1, v___y_8416_);
return v___x_8426_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2___boxed(lean_object* v_weakArgs_8427_, lean_object* v_traceArgs_8428_, lean_object* v_sharedLean_8429_, lean_object* v_exeFile_8430_, lean_object* v_linkLibs_8431_, lean_object* v___x_8432_, lean_object* v_objs_8433_, lean_object* v___y_8434_, lean_object* v___y_8435_, lean_object* v___y_8436_, lean_object* v___y_8437_, lean_object* v___y_8438_, lean_object* v___y_8439_, lean_object* v___y_8440_){
_start:
{
uint8_t v_sharedLean_boxed_8441_; lean_object* v_res_8442_; 
v_sharedLean_boxed_8441_ = lean_unbox(v_sharedLean_8429_);
v_res_8442_ = l_Lake_buildLeanExe___lam__2(v_weakArgs_8427_, v_traceArgs_8428_, v_sharedLean_boxed_8441_, v_exeFile_8430_, v_linkLibs_8431_, v___x_8432_, v_objs_8433_, v___y_8434_, v___y_8435_, v___y_8436_, v___y_8437_, v___y_8438_, v___y_8439_);
lean_dec_ref(v___y_8438_);
lean_dec(v___y_8437_);
lean_dec(v___y_8436_);
lean_dec(v___y_8435_);
lean_dec_ref(v_linkLibs_8431_);
return v_res_8442_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object* v_exeFile_8443_, lean_object* v_linkObjs_8444_, lean_object* v_linkLibs_8445_, lean_object* v_weakArgs_8446_, lean_object* v_traceArgs_8447_, uint8_t v_sharedLean_8448_, lean_object* v_a_8449_, lean_object* v_a_8450_, lean_object* v_a_8451_, lean_object* v_a_8452_, lean_object* v_a_8453_, lean_object* v_a_8454_){
_start:
{
lean_object* v___x_8456_; lean_object* v___x_8457_; lean_object* v___f_8458_; lean_object* v___x_8459_; lean_object* v___x_8460_; lean_object* v___x_8461_; uint8_t v___x_8462_; lean_object* v___x_8463_; 
v___x_8456_ = l_Lake_instDataKindFilePath;
v___x_8457_ = lean_box(v_sharedLean_8448_);
v___f_8458_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__2___boxed), 14, 6);
lean_closure_set(v___f_8458_, 0, v_weakArgs_8446_);
lean_closure_set(v___f_8458_, 1, v_traceArgs_8447_);
lean_closure_set(v___f_8458_, 2, v___x_8457_);
lean_closure_set(v___f_8458_, 3, v_exeFile_8443_);
lean_closure_set(v___f_8458_, 4, v_linkLibs_8445_);
lean_closure_set(v___f_8458_, 5, v___x_8456_);
v___x_8459_ = lean_obj_once(&l_Lake_buildSharedLib___closed__0, &l_Lake_buildSharedLib___closed__0_once, _init_l_Lake_buildSharedLib___closed__0);
v___x_8460_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8444_, v___x_8459_);
v___x_8461_ = lean_unsigned_to_nat(0u);
v___x_8462_ = 1;
v___x_8463_ = l_Lake_Job_bindM___redArg(v___x_8456_, v___x_8460_, v___f_8458_, v___x_8461_, v___x_8462_, v_a_8449_, v_a_8450_, v_a_8451_, v_a_8452_, v_a_8453_, v_a_8454_);
return v___x_8463_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object* v_exeFile_8464_, lean_object* v_linkObjs_8465_, lean_object* v_linkLibs_8466_, lean_object* v_weakArgs_8467_, lean_object* v_traceArgs_8468_, lean_object* v_sharedLean_8469_, lean_object* v_a_8470_, lean_object* v_a_8471_, lean_object* v_a_8472_, lean_object* v_a_8473_, lean_object* v_a_8474_, lean_object* v_a_8475_, lean_object* v_a_8476_){
_start:
{
uint8_t v_sharedLean_boxed_8477_; lean_object* v_res_8478_; 
v_sharedLean_boxed_8477_ = lean_unbox(v_sharedLean_8469_);
v_res_8478_ = l_Lake_buildLeanExe(v_exeFile_8464_, v_linkObjs_8465_, v_linkLibs_8466_, v_weakArgs_8467_, v_traceArgs_8468_, v_sharedLean_boxed_8477_, v_a_8470_, v_a_8471_, v_a_8472_, v_a_8473_, v_a_8474_, v_a_8475_);
lean_dec_ref(v_a_8475_);
lean_dec_ref(v_a_8474_);
lean_dec(v_a_8473_);
lean_dec(v_a_8472_);
lean_dec(v_a_8471_);
lean_dec_ref(v_linkObjs_8465_);
return v_res_8478_;
}
}
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instMonadWorkspaceJobM = _init_l_Lake_instMonadWorkspaceJobM();
lean_mark_persistent(l_Lake_instMonadWorkspaceJobM);
l_Lake_platformTrace = _init_l_Lake_platformTrace();
lean_mark_persistent(l_Lake_platformTrace);
l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion = _init_l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion();
lean_mark_persistent(l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion);
l_Lake_instToJsonBuildMetadata = _init_l_Lake_instToJsonBuildMetadata();
lean_mark_persistent(l_Lake_instToJsonBuildMetadata);
l_Lake_instFromJsonBuildMetadata = _init_l_Lake_instFromJsonBuildMetadata();
lean_mark_persistent(l_Lake_instFromJsonBuildMetadata);
l_Lake_instToOutputJsonPUnit = _init_l_Lake_instToOutputJsonPUnit();
lean_mark_persistent(l_Lake_instToOutputJsonPUnit);
l_Lake_instToOutputJsonArtifact = _init_l_Lake_instToOutputJsonArtifact();
lean_mark_persistent(l_Lake_instToOutputJsonArtifact);
l_Lake_buildO___lam__2___boxed__const__1 = _init_l_Lake_buildO___lam__2___boxed__const__1();
lean_mark_persistent(l_Lake_buildO___lam__2___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Common(builtin);
}
#ifdef __cplusplus
}
#endif
