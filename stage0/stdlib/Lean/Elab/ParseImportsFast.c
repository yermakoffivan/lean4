// Lean compiler output
// Module: Lean.Elab.ParseImportsFast
// Imports: public import Lean.Parser.Module
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
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_String_toFileMap(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_instToJsonModuleHeader_toJson(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
static lean_once_cell_t l_Lean_ParseImports_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_ParseImports_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_ParseImports_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_instInhabitedParser;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_State_mkEOIError___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_State_mkEOIError___closed__0;
static lean_once_cell_t l_Lean_ParseImports_State_mkEOIError___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_State_mkEOIError___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_instAndThenParser___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_instAndThenParser___closed__0;
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser;
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_whitespace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_whitespace___closed__0;
static lean_once_cell_t l_Lean_ParseImports_whitespace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_whitespace___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_keyword___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_keyword___lam__0___closed__0;
static lean_once_cell_t l_Lean_ParseImports_keyword___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_keyword___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_moduleIdent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_moduleIdent___closed__0;
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_manyImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___closed__0;
static lean_once_cell_t l_Lean_ParseImports_manyImports___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0;
static lean_once_cell_t l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1;
static lean_once_cell_t l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2;
static lean_once_cell_t l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ParseImports_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_main___closed__0;
static lean_once_cell_t l_Lean_ParseImports_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParseImports_main___closed__1;
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseImports_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseImports_x27___closed__0;
static lean_once_cell_t l_Lean_parseImports_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseImports_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object*);
static lean_once_cell_t l_Lean_instToJsonPrintImportResult_toJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__0;
static lean_once_cell_t l_Lean_instToJsonPrintImportResult_toJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__1;
static lean_once_cell_t l_Lean_instToJsonPrintImportResult_toJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__2;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object*);
static lean_once_cell_t l_Lean_instToJsonPrintImportResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportResult___closed__0;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object*);
static lean_once_cell_t l_Lean_instToJsonPrintImportsResult_toJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportsResult_toJson___closed__0;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object*);
static lean_once_cell_t l_Lean_instToJsonPrintImportsResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToJsonPrintImportsResult___closed__0;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lean_ParseImports_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_ParseImports_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_3_ = lean_box(0);
v___x_4_ = 0;
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_obj_once(&l_Lean_ParseImports_instInhabitedState_default___closed__0, &l_Lean_ParseImports_instInhabitedState_default___closed__0_once, _init_l_Lean_ParseImports_instInhabitedState_default___closed__0);
v___x_7_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
lean_ctor_set(v___x_7_, 2, v___x_3_);
lean_ctor_set_uint8(v___x_7_, sizeof(void*)*3, v___x_4_);
lean_ctor_set_uint8(v___x_7_, sizeof(void*)*3 + 1, v___x_4_);
lean_ctor_set_uint8(v___x_7_, sizeof(void*)*3 + 2, v___x_4_);
lean_ctor_set_uint8(v___x_7_, sizeof(void*)*3 + 3, v___x_4_);
lean_ctor_set_uint8(v___x_7_, sizeof(void*)*3 + 4, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_ParseImports_instInhabitedState_default(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lean_ParseImports_instInhabitedState_default___closed__1, &l_Lean_ParseImports_instInhabitedState_default___closed__1_once, _init_l_Lean_ParseImports_instInhabitedState_default___closed__1);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_ParseImports_instInhabitedState(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_ParseImports_instInhabitedState_default;
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object* v_s_10_){
_start:
{
lean_inc_ref(v_s_10_);
return v_s_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object* v_s_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParseImports_skip___redArg(v_s_11_);
lean_dec_ref(v_s_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object* v_x_13_, lean_object* v_s_14_){
_start:
{
lean_inc_ref(v_s_14_);
return v_s_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object* v_x_15_, lean_object* v_s_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParseImports_skip(v_x_15_, v_s_16_);
lean_dec_ref(v_s_16_);
lean_dec_ref(v_x_15_);
return v_res_17_;
}
}
static lean_object* _init_l_Lean_ParseImports_instInhabitedParser(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_closure((void*)(l_Lean_ParseImports_skip___boxed), 2, 0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object* v_s_19_, lean_object* v_pos_20_){
_start:
{
lean_object* v_imports_21_; uint8_t v_badModifier_22_; lean_object* v_error_x3f_23_; uint8_t v_isModule_24_; uint8_t v_isMeta_25_; uint8_t v_isExported_26_; uint8_t v_importAll_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
v_imports_21_ = lean_ctor_get(v_s_19_, 0);
v_badModifier_22_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3);
v_error_x3f_23_ = lean_ctor_get(v_s_19_, 2);
v_isModule_24_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 1);
v_isMeta_25_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 2);
v_isExported_26_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 3);
v_importAll_27_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 4);
v_isSharedCheck_34_ = !lean_is_exclusive(v_s_19_);
if (v_isSharedCheck_34_ == 0)
{
lean_object* v_unused_35_; 
v_unused_35_ = lean_ctor_get(v_s_19_, 1);
lean_dec(v_unused_35_);
v___x_29_ = v_s_19_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_error_x3f_23_);
lean_inc(v_imports_21_);
lean_dec(v_s_19_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 1, v_pos_20_);
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_imports_21_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v_pos_20_);
lean_ctor_set(v_reuseFailAlloc_33_, 2, v_error_x3f_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3, v_badModifier_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 1, v_isModule_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 2, v_isMeta_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 3, v_isExported_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 4, v_importAll_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object* v_s_36_, lean_object* v_msg_37_){
_start:
{
lean_object* v_imports_38_; lean_object* v_pos_39_; uint8_t v_badModifier_40_; uint8_t v_isModule_41_; uint8_t v_isMeta_42_; uint8_t v_isExported_43_; uint8_t v_importAll_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_imports_38_ = lean_ctor_get(v_s_36_, 0);
v_pos_39_ = lean_ctor_get(v_s_36_, 1);
v_badModifier_40_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3);
v_isModule_41_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 1);
v_isMeta_42_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 2);
v_isExported_43_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 3);
v_importAll_44_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 4);
v_isSharedCheck_52_ = !lean_is_exclusive(v_s_36_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_s_36_, 2);
lean_dec(v_unused_53_);
v___x_46_ = v_s_36_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_pos_39_);
lean_inc(v_imports_38_);
lean_dec(v_s_36_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_48_, 0, v_msg_37_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_imports_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_pos_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v___x_48_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3, v_badModifier_40_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 1, v_isModule_41_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 2, v_isMeta_42_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 3, v_isExported_43_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 4, v_importAll_44_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
static lean_object* _init_l_Lean_ParseImports_State_mkEOIError___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("unexpected end of input", 23, 23);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_ParseImports_State_mkEOIError___closed__1(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_ParseImports_State_mkEOIError___closed__0, &l_Lean_ParseImports_State_mkEOIError___closed__0_once, _init_l_Lean_ParseImports_State_mkEOIError___closed__0);
v___x_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object* v_s_57_){
_start:
{
lean_object* v_imports_58_; lean_object* v_pos_59_; uint8_t v_badModifier_60_; uint8_t v_isModule_61_; uint8_t v_isMeta_62_; uint8_t v_isExported_63_; uint8_t v_importAll_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_72_; 
v_imports_58_ = lean_ctor_get(v_s_57_, 0);
v_pos_59_ = lean_ctor_get(v_s_57_, 1);
v_badModifier_60_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3);
v_isModule_61_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 1);
v_isMeta_62_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 2);
v_isExported_63_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 3);
v_importAll_64_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 4);
v_isSharedCheck_72_ = !lean_is_exclusive(v_s_57_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; 
v_unused_73_ = lean_ctor_get(v_s_57_, 2);
lean_dec(v_unused_73_);
v___x_66_ = v_s_57_;
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_pos_59_);
lean_inc(v_imports_58_);
lean_dec(v_s_57_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_Lean_ParseImports_State_mkEOIError___closed__1, &l_Lean_ParseImports_State_mkEOIError___closed__1_once, _init_l_Lean_ParseImports_State_mkEOIError___closed__1);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 2, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_imports_58_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_pos_59_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_68_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3, v_badModifier_60_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 1, v_isModule_61_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 2, v_isMeta_62_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 3, v_isExported_63_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 4, v_importAll_64_);
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
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object* v_s_74_){
_start:
{
lean_object* v_imports_75_; lean_object* v_pos_76_; uint8_t v_isModule_77_; uint8_t v_isMeta_78_; uint8_t v_isExported_79_; uint8_t v_importAll_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_89_; 
v_imports_75_ = lean_ctor_get(v_s_74_, 0);
v_pos_76_ = lean_ctor_get(v_s_74_, 1);
v_isModule_77_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 1);
v_isMeta_78_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 2);
v_isExported_79_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 3);
v_importAll_80_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 4);
v_isSharedCheck_89_ = !lean_is_exclusive(v_s_74_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_s_74_, 2);
lean_dec(v_unused_90_);
v___x_82_ = v_s_74_;
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_pos_76_);
lean_inc(v_imports_75_);
lean_dec(v_s_74_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_84_ = 0;
v___x_85_ = lean_box(0);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 2, v___x_85_);
v___x_87_ = v___x_82_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_imports_75_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_pos_76_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v___x_85_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 1, v_isModule_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 2, v_isMeta_78_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 3, v_isExported_79_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 4, v_importAll_80_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*3, v___x_84_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object* v_s_91_, lean_object* v_input_92_, lean_object* v_pos_93_){
_start:
{
lean_object* v_imports_94_; uint8_t v_badModifier_95_; lean_object* v_error_x3f_96_; uint8_t v_isModule_97_; uint8_t v_isMeta_98_; uint8_t v_isExported_99_; uint8_t v_importAll_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_108_; 
v_imports_94_ = lean_ctor_get(v_s_91_, 0);
v_badModifier_95_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3);
v_error_x3f_96_ = lean_ctor_get(v_s_91_, 2);
v_isModule_97_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 1);
v_isMeta_98_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 2);
v_isExported_99_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 3);
v_importAll_100_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 4);
v_isSharedCheck_108_ = !lean_is_exclusive(v_s_91_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; 
v_unused_109_ = lean_ctor_get(v_s_91_, 1);
lean_dec(v_unused_109_);
v___x_102_ = v_s_91_;
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_error_x3f_96_);
lean_inc(v_imports_94_);
lean_dec(v_s_91_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = lean_string_utf8_next(v_input_92_, v_pos_93_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_104_);
v___x_106_ = v___x_102_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_imports_94_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_error_x3f_96_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3, v_badModifier_95_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 1, v_isModule_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 2, v_isMeta_98_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 3, v_isExported_99_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 4, v_importAll_100_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object* v_s_110_, lean_object* v_input_111_, lean_object* v_pos_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_ParseImports_State_next(v_s_110_, v_input_111_, v_pos_112_);
lean_dec(v_pos_112_);
lean_dec_ref(v_input_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object* v_s_114_, lean_object* v_input_115_, lean_object* v_pos_116_){
_start:
{
lean_object* v_imports_117_; uint8_t v_badModifier_118_; lean_object* v_error_x3f_119_; uint8_t v_isModule_120_; uint8_t v_isMeta_121_; uint8_t v_isExported_122_; uint8_t v_importAll_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_imports_117_ = lean_ctor_get(v_s_114_, 0);
v_badModifier_118_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3);
v_error_x3f_119_ = lean_ctor_get(v_s_114_, 2);
v_isModule_120_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 1);
v_isMeta_121_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 2);
v_isExported_122_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 3);
v_importAll_123_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 4);
v_isSharedCheck_131_ = !lean_is_exclusive(v_s_114_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v_s_114_, 1);
lean_dec(v_unused_132_);
v___x_125_ = v_s_114_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_error_x3f_119_);
lean_inc(v_imports_117_);
lean_dec(v_s_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_string_utf8_next_fast(v_input_115_, v_pos_116_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_imports_117_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_130_, 2, v_error_x3f_119_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3, v_badModifier_118_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 1, v_isModule_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 2, v_isMeta_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 3, v_isExported_122_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 4, v_importAll_123_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object* v_s_133_, lean_object* v_input_134_, lean_object* v_pos_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_ParseImports_State_next_x27___redArg(v_s_133_, v_input_134_, v_pos_135_);
lean_dec(v_pos_135_);
lean_dec_ref(v_input_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object* v_s_137_, lean_object* v_input_138_, lean_object* v_pos_139_, lean_object* v_h_140_){
_start:
{
lean_object* v_imports_141_; uint8_t v_badModifier_142_; lean_object* v_error_x3f_143_; uint8_t v_isModule_144_; uint8_t v_isMeta_145_; uint8_t v_isExported_146_; uint8_t v_importAll_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_imports_141_ = lean_ctor_get(v_s_137_, 0);
v_badModifier_142_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3);
v_error_x3f_143_ = lean_ctor_get(v_s_137_, 2);
v_isModule_144_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 1);
v_isMeta_145_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 2);
v_isExported_146_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 3);
v_importAll_147_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 4);
v_isSharedCheck_155_ = !lean_is_exclusive(v_s_137_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_s_137_, 1);
lean_dec(v_unused_156_);
v___x_149_ = v_s_137_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_error_x3f_143_);
lean_inc(v_imports_141_);
lean_dec(v_s_137_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_string_utf8_next_fast(v_input_138_, v_pos_139_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_imports_141_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_error_x3f_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3, v_badModifier_142_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 1, v_isModule_144_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 2, v_isMeta_145_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 3, v_isExported_146_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 4, v_importAll_147_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object* v_s_157_, lean_object* v_input_158_, lean_object* v_pos_159_, lean_object* v_h_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_ParseImports_State_next_x27(v_s_157_, v_input_158_, v_pos_159_, v_h_160_);
lean_dec(v_pos_159_);
lean_dec_ref(v_input_158_);
return v_res_161_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_mk_string_unchecked("unterminated comment", 20, 20);
return v___x_162_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0);
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object* v_s_165_){
_start:
{
lean_object* v_imports_166_; lean_object* v_pos_167_; uint8_t v_badModifier_168_; uint8_t v_isModule_169_; uint8_t v_isMeta_170_; uint8_t v_isExported_171_; uint8_t v_importAll_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_180_; 
v_imports_166_ = lean_ctor_get(v_s_165_, 0);
v_pos_167_ = lean_ctor_get(v_s_165_, 1);
v_badModifier_168_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3);
v_isModule_169_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 1);
v_isMeta_170_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 2);
v_isExported_171_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 3);
v_importAll_172_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 4);
v_isSharedCheck_180_ = !lean_is_exclusive(v_s_165_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v_s_165_, 2);
lean_dec(v_unused_181_);
v___x_174_ = v_s_165_;
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_pos_167_);
lean_inc(v_imports_166_);
lean_dec(v_s_165_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 2, v___x_176_);
v___x_178_ = v___x_174_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_imports_166_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_pos_167_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v___x_176_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3, v_badModifier_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 1, v_isModule_169_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 2, v_isMeta_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 3, v_isExported_171_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 4, v_importAll_172_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object* v_nesting_182_, lean_object* v_input_183_, lean_object* v_s_184_){
_start:
{
lean_object* v_imports_185_; lean_object* v_pos_186_; uint8_t v_badModifier_187_; lean_object* v_error_x3f_188_; uint8_t v_isModule_189_; uint8_t v_isMeta_190_; uint8_t v_isExported_191_; uint8_t v_importAll_192_; uint8_t v___x_193_; 
v_imports_185_ = lean_ctor_get(v_s_184_, 0);
v_pos_186_ = lean_ctor_get(v_s_184_, 1);
v_badModifier_187_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3);
v_error_x3f_188_ = lean_ctor_get(v_s_184_, 2);
v_isModule_189_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 1);
v_isMeta_190_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 2);
v_isExported_191_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 3);
v_importAll_192_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 4);
v___x_193_ = lean_string_utf8_at_end(v_input_183_, v_pos_186_);
if (v___x_193_ == 0)
{
uint32_t v_curr_194_; lean_object* v_i_195_; uint32_t v___x_196_; uint8_t v___x_197_; 
v_curr_194_ = lean_string_utf8_get_fast(v_input_183_, v_pos_186_);
v_i_195_ = lean_string_utf8_next_fast(v_input_183_, v_pos_186_);
v___x_196_ = 45;
v___x_197_ = lean_uint32_dec_eq(v_curr_194_, v___x_196_);
if (v___x_197_ == 0)
{
uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_198_ = 47;
v___x_199_ = lean_uint32_dec_eq(v_curr_194_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_207_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; lean_object* v_unused_210_; 
v_unused_208_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_209_);
v_unused_210_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_210_);
v___x_201_ = v_s_184_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_s_184_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_i_195_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v_s_184_ = v___x_204_;
goto _start;
}
}
}
else
{
uint8_t v___x_211_; 
v___x_211_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_211_ == 0)
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_228_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_228_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_231_);
v___x_213_ = v_s_184_;
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_s_184_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint32_t v_curr_215_; uint8_t v___x_216_; 
v_curr_215_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_216_ = lean_uint32_dec_eq(v_curr_215_, v___x_196_);
if (v___x_216_ == 0)
{
lean_object* v___x_218_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v_i_195_);
v___x_218_ = v___x_213_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_218_ = v_reuseFailAlloc_220_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_s_184_ = v___x_218_;
goto _start;
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_nesting_182_, v___x_221_);
lean_dec(v_nesting_182_);
v___x_223_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_223_);
v___x_225_ = v___x_213_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_nesting_182_ = v___x_222_;
v_s_184_ = v___x_225_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v_nesting_182_);
v___x_232_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_232_;
}
}
}
else
{
uint8_t v___x_233_; 
v___x_233_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_257_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_257_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_257_ == 0)
{
lean_object* v_unused_258_; lean_object* v_unused_259_; lean_object* v_unused_260_; 
v_unused_258_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_258_);
v_unused_259_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_259_);
v_unused_260_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_260_);
v___x_235_ = v_s_184_;
v_isShared_236_ = v_isSharedCheck_257_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_s_184_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_257_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
uint32_t v_curr_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v_curr_237_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_238_ = 47;
v___x_239_ = lean_uint32_dec_eq(v_curr_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_240_);
v___x_242_ = v___x_235_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
v_s_184_ = v___x_242_;
goto _start;
}
}
else
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_dec_eq(v_nesting_182_, v___x_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_247_ = lean_nat_sub(v_nesting_182_, v___x_245_);
lean_dec(v_nesting_182_);
v___x_248_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_248_);
v___x_250_ = v___x_235_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_252_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_252_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_252_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_252_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_252_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_252_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_250_ = v_reuseFailAlloc_252_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
v_nesting_182_ = v___x_247_;
v_s_184_ = v___x_250_;
goto _start;
}
}
else
{
lean_object* v___x_253_; lean_object* v___x_255_; 
lean_dec(v_nesting_182_);
v___x_253_ = lean_string_utf8_next(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_253_);
v___x_255_ = v___x_235_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_256_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
else
{
lean_object* v___x_261_; 
lean_dec(v_nesting_182_);
v___x_261_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_261_;
}
}
}
else
{
lean_object* v___x_262_; 
lean_dec(v_nesting_182_);
v___x_262_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object* v_nesting_263_, lean_object* v_input_264_, lean_object* v_s_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_ParseImports_finishCommentBlock(v_nesting_263_, v_input_264_, v_s_265_);
lean_dec_ref(v_input_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object* v_p_267_, lean_object* v_input_268_, lean_object* v_s_269_){
_start:
{
lean_object* v_imports_270_; lean_object* v_pos_271_; uint8_t v_badModifier_272_; lean_object* v_error_x3f_273_; uint8_t v_isModule_274_; uint8_t v_isMeta_275_; uint8_t v_isExported_276_; uint8_t v_importAll_277_; uint8_t v___x_278_; 
v_imports_270_ = lean_ctor_get(v_s_269_, 0);
v_pos_271_ = lean_ctor_get(v_s_269_, 1);
v_badModifier_272_ = lean_ctor_get_uint8(v_s_269_, sizeof(void*)*3);
v_error_x3f_273_ = lean_ctor_get(v_s_269_, 2);
v_isModule_274_ = lean_ctor_get_uint8(v_s_269_, sizeof(void*)*3 + 1);
v_isMeta_275_ = lean_ctor_get_uint8(v_s_269_, sizeof(void*)*3 + 2);
v_isExported_276_ = lean_ctor_get_uint8(v_s_269_, sizeof(void*)*3 + 3);
v_importAll_277_ = lean_ctor_get_uint8(v_s_269_, sizeof(void*)*3 + 4);
v___x_278_ = lean_string_utf8_at_end(v_input_268_, v_pos_271_);
if (v___x_278_ == 0)
{
uint32_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_279_ = lean_string_utf8_get_fast(v_input_268_, v_pos_271_);
v___x_280_ = lean_box_uint32(v___x_279_);
lean_inc_ref(v_p_267_);
v___x_281_ = lean_apply_1(v_p_267_, v___x_280_);
v___x_282_ = lean_unbox(v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_291_; 
lean_inc(v_error_x3f_273_);
lean_inc(v_pos_271_);
lean_inc_ref(v_imports_270_);
v_isSharedCheck_291_ = !lean_is_exclusive(v_s_269_);
if (v_isSharedCheck_291_ == 0)
{
lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; 
v_unused_292_ = lean_ctor_get(v_s_269_, 2);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_s_269_, 1);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_s_269_, 0);
lean_dec(v_unused_294_);
v___x_284_ = v_s_269_;
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
else
{
lean_dec(v_s_269_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_288_; 
v___x_286_ = lean_string_utf8_next_fast(v_input_268_, v_pos_271_);
lean_dec(v_pos_271_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___x_286_);
v___x_288_ = v___x_284_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_imports_270_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v___x_286_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_error_x3f_273_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3, v_badModifier_272_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 1, v_isModule_274_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 2, v_isMeta_275_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 3, v_isExported_276_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 4, v_importAll_277_);
v___x_288_ = v_reuseFailAlloc_290_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
v_s_269_ = v___x_288_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_p_267_);
return v_s_269_;
}
}
else
{
lean_dec_ref(v_p_267_);
return v_s_269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object* v_p_295_, lean_object* v_input_296_, lean_object* v_s_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_ParseImports_takeUntil(v_p_295_, v_input_296_, v_s_297_);
lean_dec_ref(v_input_296_);
return v_res_298_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object* v_p_299_, uint32_t v_c_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_301_ = lean_box_uint32(v_c_300_);
v___x_302_ = lean_apply_1(v_p_299_, v___x_301_);
v___x_303_ = lean_unbox(v___x_302_);
if (v___x_303_ == 0)
{
uint8_t v___x_304_; 
v___x_304_ = 1;
return v___x_304_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = 0;
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object* v_p_306_, lean_object* v_c_307_){
_start:
{
uint32_t v_c_boxed_308_; uint8_t v_res_309_; lean_object* v_r_310_; 
v_c_boxed_308_ = lean_unbox_uint32(v_c_307_);
lean_dec(v_c_307_);
v_res_309_ = l_Lean_ParseImports_takeWhile___lam__0(v_p_306_, v_c_boxed_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object* v_p_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v___f_314_; lean_object* v___x_315_; 
v___f_314_ = lean_alloc_closure((void*)(l_Lean_ParseImports_takeWhile___lam__0___boxed), 2, 1);
lean_closure_set(v___f_314_, 0, v_p_311_);
v___x_315_ = l_Lean_ParseImports_takeUntil(v___f_314_, v_a_312_, v_a_313_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object* v_p_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_ParseImports_takeWhile(v_p_316_, v_a_317_, v_a_318_);
lean_dec_ref(v_a_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object* v_p_320_, lean_object* v_q_321_, lean_object* v_input_322_, lean_object* v_s_323_){
_start:
{
lean_object* v_s_324_; lean_object* v_error_x3f_325_; 
lean_inc_ref(v_input_322_);
v_s_324_ = lean_apply_2(v_p_320_, v_input_322_, v_s_323_);
v_error_x3f_325_ = lean_ctor_get(v_s_324_, 2);
lean_inc(v_error_x3f_325_);
if (lean_obj_tag(v_error_x3f_325_) == 1)
{
lean_dec_ref(v_error_x3f_325_);
lean_dec_ref(v_input_322_);
lean_dec_ref(v_q_321_);
return v_s_324_;
}
else
{
lean_object* v___x_326_; 
lean_dec(v_error_x3f_325_);
v___x_326_ = lean_apply_2(v_q_321_, v_input_322_, v_s_324_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object* v_p_327_, lean_object* v_q_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_s_331_; lean_object* v_error_x3f_332_; 
lean_inc_ref(v___y_329_);
v_s_331_ = lean_apply_2(v_p_327_, v___y_329_, v___y_330_);
v_error_x3f_332_ = lean_ctor_get(v_s_331_, 2);
lean_inc(v_error_x3f_332_);
if (lean_obj_tag(v_error_x3f_332_) == 1)
{
lean_dec_ref(v_error_x3f_332_);
lean_dec_ref(v___y_329_);
lean_dec_ref(v_q_328_);
return v_s_331_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_error_x3f_332_);
v___x_333_ = lean_box(0);
v___x_334_ = lean_apply_3(v_q_328_, v___x_333_, v___y_329_, v_s_331_);
return v___x_334_;
}
}
}
static lean_object* _init_l_Lean_ParseImports_instAndThenParser___closed__0(void){
_start:
{
lean_object* v___f_335_; 
v___f_335_ = lean_alloc_closure((void*)(l_Lean_ParseImports_instAndThenParser___lam__0), 4, 0);
return v___f_335_;
}
}
static lean_object* _init_l_Lean_ParseImports_instAndThenParser(void){
_start:
{
lean_object* v___f_336_; 
v___f_336_ = lean_obj_once(&l_Lean_ParseImports_instAndThenParser___closed__0, &l_Lean_ParseImports_instAndThenParser___closed__0_once, _init_l_Lean_ParseImports_instAndThenParser___closed__0);
return v___f_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object* v_input_337_, lean_object* v_s_338_){
_start:
{
lean_object* v_imports_339_; lean_object* v_pos_340_; uint8_t v_badModifier_341_; lean_object* v_error_x3f_342_; uint8_t v_isModule_343_; uint8_t v_isMeta_344_; uint8_t v_isExported_345_; uint8_t v_importAll_346_; uint8_t v___x_347_; 
v_imports_339_ = lean_ctor_get(v_s_338_, 0);
v_pos_340_ = lean_ctor_get(v_s_338_, 1);
v_badModifier_341_ = lean_ctor_get_uint8(v_s_338_, sizeof(void*)*3);
v_error_x3f_342_ = lean_ctor_get(v_s_338_, 2);
v_isModule_343_ = lean_ctor_get_uint8(v_s_338_, sizeof(void*)*3 + 1);
v_isMeta_344_ = lean_ctor_get_uint8(v_s_338_, sizeof(void*)*3 + 2);
v_isExported_345_ = lean_ctor_get_uint8(v_s_338_, sizeof(void*)*3 + 3);
v_importAll_346_ = lean_ctor_get_uint8(v_s_338_, sizeof(void*)*3 + 4);
v___x_347_ = lean_string_utf8_at_end(v_input_337_, v_pos_340_);
if (v___x_347_ == 0)
{
uint32_t v___x_348_; uint32_t v___x_349_; uint8_t v___x_350_; 
v___x_348_ = lean_string_utf8_get_fast(v_input_337_, v_pos_340_);
v___x_349_ = 10;
v___x_350_ = lean_uint32_dec_eq(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_359_; 
lean_inc(v_error_x3f_342_);
lean_inc(v_pos_340_);
lean_inc_ref(v_imports_339_);
v_isSharedCheck_359_ = !lean_is_exclusive(v_s_338_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; lean_object* v_unused_361_; lean_object* v_unused_362_; 
v_unused_360_ = lean_ctor_get(v_s_338_, 2);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_s_338_, 1);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_s_338_, 0);
lean_dec(v_unused_362_);
v___x_352_ = v_s_338_;
v_isShared_353_ = v_isSharedCheck_359_;
goto v_resetjp_351_;
}
else
{
lean_dec(v_s_338_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_359_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_string_utf8_next_fast(v_input_337_, v_pos_340_);
lean_dec(v_pos_340_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 1, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_imports_339_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_error_x3f_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3, v_badModifier_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3 + 1, v_isModule_343_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3 + 2, v_isMeta_344_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3 + 3, v_isExported_345_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3 + 4, v_importAll_346_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
v_s_338_ = v___x_356_;
goto _start;
}
}
}
else
{
return v_s_338_;
}
}
else
{
return v_s_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object* v_input_363_, lean_object* v_s_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_363_, v_s_364_);
lean_dec_ref(v_input_363_);
return v_res_365_;
}
}
static lean_object* _init_l_Lean_ParseImports_whitespace___closed__0(void){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_mk_string_unchecked("tabs are not allowed; please configure your editor to expand them", 65, 65);
return v___x_366_;
}
}
static lean_object* _init_l_Lean_ParseImports_whitespace___closed__1(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_obj_once(&l_Lean_ParseImports_whitespace___closed__0, &l_Lean_ParseImports_whitespace___closed__0_once, _init_l_Lean_ParseImports_whitespace___closed__0);
v___x_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object* v_input_369_, lean_object* v_s_370_){
_start:
{
lean_object* v_imports_371_; lean_object* v_pos_372_; uint8_t v_badModifier_373_; lean_object* v_error_x3f_374_; uint8_t v_isModule_375_; uint8_t v_isMeta_376_; uint8_t v_isExported_377_; uint8_t v_importAll_378_; uint8_t v___x_383_; 
v_imports_371_ = lean_ctor_get(v_s_370_, 0);
v_pos_372_ = lean_ctor_get(v_s_370_, 1);
v_badModifier_373_ = lean_ctor_get_uint8(v_s_370_, sizeof(void*)*3);
v_error_x3f_374_ = lean_ctor_get(v_s_370_, 2);
v_isModule_375_ = lean_ctor_get_uint8(v_s_370_, sizeof(void*)*3 + 1);
v_isMeta_376_ = lean_ctor_get_uint8(v_s_370_, sizeof(void*)*3 + 2);
v_isExported_377_ = lean_ctor_get_uint8(v_s_370_, sizeof(void*)*3 + 3);
v_importAll_378_ = lean_ctor_get_uint8(v_s_370_, sizeof(void*)*3 + 4);
v___x_383_ = lean_string_utf8_at_end(v_input_369_, v_pos_372_);
if (v___x_383_ == 0)
{
uint32_t v_curr_384_; uint8_t v___y_386_; uint8_t v___y_432_; uint32_t v___x_437_; uint8_t v___x_438_; 
v_curr_384_ = lean_string_utf8_get_fast(v_input_369_, v_pos_372_);
v___x_437_ = 9;
v___x_438_ = lean_uint32_dec_eq(v_curr_384_, v___x_437_);
if (v___x_438_ == 0)
{
uint32_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = 32;
v___x_440_ = lean_uint32_dec_eq(v_curr_384_, v___x_439_);
if (v___x_440_ == 0)
{
v___y_432_ = v___x_438_;
goto v___jp_431_;
}
else
{
v___y_432_ = v___x_440_;
goto v___jp_431_;
}
}
else
{
lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_448_; 
lean_inc(v_pos_372_);
lean_inc_ref(v_imports_371_);
v_isSharedCheck_448_ = !lean_is_exclusive(v_s_370_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; lean_object* v_unused_450_; lean_object* v_unused_451_; 
v_unused_449_ = lean_ctor_get(v_s_370_, 2);
lean_dec(v_unused_449_);
v_unused_450_ = lean_ctor_get(v_s_370_, 1);
lean_dec(v_unused_450_);
v_unused_451_ = lean_ctor_get(v_s_370_, 0);
lean_dec(v_unused_451_);
v___x_442_ = v_s_370_;
v_isShared_443_ = v_isSharedCheck_448_;
goto v_resetjp_441_;
}
else
{
lean_dec(v_s_370_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_448_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_444_ = lean_obj_once(&l_Lean_ParseImports_whitespace___closed__1, &l_Lean_ParseImports_whitespace___closed__1_once, _init_l_Lean_ParseImports_whitespace___closed__1);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 2, v___x_444_);
v___x_446_ = v___x_442_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_imports_371_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_pos_372_);
lean_ctor_set(v_reuseFailAlloc_447_, 2, v___x_444_);
lean_ctor_set_uint8(v_reuseFailAlloc_447_, sizeof(void*)*3, v_badModifier_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_447_, sizeof(void*)*3 + 1, v_isModule_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_447_, sizeof(void*)*3 + 2, v_isMeta_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_447_, sizeof(void*)*3 + 3, v_isExported_377_);
lean_ctor_set_uint8(v_reuseFailAlloc_447_, sizeof(void*)*3 + 4, v_importAll_378_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
v___jp_385_:
{
if (v___y_386_ == 0)
{
uint32_t v___x_387_; uint8_t v___x_388_; 
v___x_387_ = 45;
v___x_388_ = lean_uint32_dec_eq(v_curr_384_, v___x_387_);
if (v___x_388_ == 0)
{
uint32_t v___x_389_; uint8_t v___x_390_; 
v___x_389_ = 47;
v___x_390_ = lean_uint32_dec_eq(v_curr_384_, v___x_389_);
if (v___x_390_ == 0)
{
return v_s_370_;
}
else
{
lean_object* v_i_391_; uint32_t v_curr_392_; uint8_t v___x_393_; 
v_i_391_ = lean_string_utf8_next_fast(v_input_369_, v_pos_372_);
v_curr_392_ = lean_string_utf8_get(v_input_369_, v_i_391_);
v___x_393_ = lean_uint32_dec_eq(v_curr_392_, v___x_387_);
if (v___x_393_ == 0)
{
return v_s_370_;
}
else
{
lean_object* v_i_394_; uint32_t v_curr_395_; uint8_t v___x_396_; 
v_i_394_ = lean_string_utf8_next(v_input_369_, v_i_391_);
v_curr_395_ = lean_string_utf8_get(v_input_369_, v_i_394_);
v___x_396_ = lean_uint32_dec_eq(v_curr_395_, v___x_387_);
if (v___x_396_ == 0)
{
uint32_t v___x_397_; uint8_t v___x_398_; 
v___x_397_ = 33;
v___x_398_ = lean_uint32_dec_eq(v_curr_395_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_410_; 
lean_inc(v_error_x3f_374_);
lean_inc_ref(v_imports_371_);
v_isSharedCheck_410_ = !lean_is_exclusive(v_s_370_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; lean_object* v_unused_412_; lean_object* v_unused_413_; 
v_unused_411_ = lean_ctor_get(v_s_370_, 2);
lean_dec(v_unused_411_);
v_unused_412_ = lean_ctor_get(v_s_370_, 1);
lean_dec(v_unused_412_);
v_unused_413_ = lean_ctor_get(v_s_370_, 0);
lean_dec(v_unused_413_);
v___x_400_ = v_s_370_;
v_isShared_401_ = v_isSharedCheck_410_;
goto v_resetjp_399_;
}
else
{
lean_dec(v_s_370_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_410_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_402_ = lean_unsigned_to_nat(1u);
v___x_403_ = lean_string_utf8_next(v_input_369_, v_i_394_);
lean_dec(v_i_394_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v___x_403_);
v___x_405_ = v___x_400_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_imports_371_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_error_x3f_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_409_, sizeof(void*)*3, v_badModifier_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_409_, sizeof(void*)*3 + 1, v_isModule_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_409_, sizeof(void*)*3 + 2, v_isMeta_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_409_, sizeof(void*)*3 + 3, v_isExported_377_);
lean_ctor_set_uint8(v_reuseFailAlloc_409_, sizeof(void*)*3 + 4, v_importAll_378_);
v___x_405_ = v_reuseFailAlloc_409_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v_s_406_; lean_object* v_error_x3f_407_; 
v_s_406_ = l_Lean_ParseImports_finishCommentBlock(v___x_402_, v_input_369_, v___x_405_);
v_error_x3f_407_ = lean_ctor_get(v_s_406_, 2);
lean_inc(v_error_x3f_407_);
if (lean_obj_tag(v_error_x3f_407_) == 1)
{
lean_dec_ref(v_error_x3f_407_);
return v_s_406_;
}
else
{
lean_dec(v_error_x3f_407_);
v_s_370_ = v_s_406_;
goto _start;
}
}
}
}
else
{
lean_dec(v_i_394_);
return v_s_370_;
}
}
else
{
lean_dec(v_i_394_);
return v_s_370_;
}
}
}
}
else
{
lean_object* v_i_414_; uint32_t v_curr_415_; uint8_t v___x_416_; 
v_i_414_ = lean_string_utf8_next_fast(v_input_369_, v_pos_372_);
v_curr_415_ = lean_string_utf8_get(v_input_369_, v_i_414_);
v___x_416_ = lean_uint32_dec_eq(v_curr_415_, v___x_387_);
if (v___x_416_ == 0)
{
return v_s_370_;
}
else
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_427_; 
lean_inc(v_error_x3f_374_);
lean_inc_ref(v_imports_371_);
v_isSharedCheck_427_ = !lean_is_exclusive(v_s_370_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; lean_object* v_unused_429_; lean_object* v_unused_430_; 
v_unused_428_ = lean_ctor_get(v_s_370_, 2);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_s_370_, 1);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_s_370_, 0);
lean_dec(v_unused_430_);
v___x_418_ = v_s_370_;
v_isShared_419_ = v_isSharedCheck_427_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_s_370_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_427_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_420_ = lean_string_utf8_next(v_input_369_, v_i_414_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_420_);
v___x_422_ = v___x_418_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_imports_371_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v_error_x3f_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_426_, sizeof(void*)*3, v_badModifier_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_426_, sizeof(void*)*3 + 1, v_isModule_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_426_, sizeof(void*)*3 + 2, v_isMeta_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_426_, sizeof(void*)*3 + 3, v_isExported_377_);
lean_ctor_set_uint8(v_reuseFailAlloc_426_, sizeof(void*)*3 + 4, v_importAll_378_);
v___x_422_ = v_reuseFailAlloc_426_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v_s_423_; lean_object* v_error_x3f_424_; 
v_s_423_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_369_, v___x_422_);
v_error_x3f_424_ = lean_ctor_get(v_s_423_, 2);
lean_inc(v_error_x3f_424_);
if (lean_obj_tag(v_error_x3f_424_) == 1)
{
lean_dec_ref(v_error_x3f_424_);
return v_s_423_;
}
else
{
lean_dec(v_error_x3f_424_);
v_s_370_ = v_s_423_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_error_x3f_374_);
lean_inc(v_pos_372_);
lean_inc_ref(v_imports_371_);
lean_dec_ref(v_s_370_);
goto v___jp_379_;
}
}
v___jp_431_:
{
if (v___y_432_ == 0)
{
uint32_t v___x_433_; uint8_t v___x_434_; 
v___x_433_ = 13;
v___x_434_ = lean_uint32_dec_eq(v_curr_384_, v___x_433_);
if (v___x_434_ == 0)
{
uint32_t v___x_435_; uint8_t v___x_436_; 
v___x_435_ = 10;
v___x_436_ = lean_uint32_dec_eq(v_curr_384_, v___x_435_);
v___y_386_ = v___x_436_;
goto v___jp_385_;
}
else
{
v___y_386_ = v___x_434_;
goto v___jp_385_;
}
}
else
{
lean_inc(v_error_x3f_374_);
lean_inc(v_pos_372_);
lean_inc_ref(v_imports_371_);
lean_dec_ref(v_s_370_);
goto v___jp_379_;
}
}
}
else
{
return v_s_370_;
}
v___jp_379_:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_string_utf8_next(v_input_369_, v_pos_372_);
lean_dec(v_pos_372_);
v___x_381_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_381_, 0, v_imports_371_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
lean_ctor_set(v___x_381_, 2, v_error_x3f_374_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*3, v_badModifier_373_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*3 + 1, v_isModule_375_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*3 + 2, v_isMeta_376_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*3 + 3, v_isExported_377_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*3 + 4, v_importAll_378_);
v_s_370_ = v___x_381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object* v_input_452_, lean_object* v_s_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_ParseImports_whitespace(v_input_452_, v_s_453_);
lean_dec_ref(v_input_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object* v_k_455_, lean_object* v_failure_456_, lean_object* v_success_457_, lean_object* v_input_458_, lean_object* v_s_459_, lean_object* v_i_460_, lean_object* v_j_461_){
_start:
{
uint8_t v___x_462_; 
v___x_462_ = lean_string_utf8_at_end(v_k_455_, v_i_460_);
if (v___x_462_ == 0)
{
uint8_t v___x_463_; 
v___x_463_ = lean_string_utf8_at_end(v_input_458_, v_j_461_);
if (v___x_463_ == 0)
{
uint32_t v_curr_u2081_464_; uint32_t v_curr_u2082_465_; uint8_t v___x_466_; 
v_curr_u2081_464_ = lean_string_utf8_get_fast(v_k_455_, v_i_460_);
v_curr_u2082_465_ = lean_string_utf8_get_fast(v_input_458_, v_j_461_);
v___x_466_ = lean_uint32_dec_eq(v_curr_u2081_464_, v_curr_u2082_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; 
lean_dec(v_j_461_);
lean_dec(v_i_460_);
lean_dec_ref(v_success_457_);
v___x_467_ = lean_apply_2(v_failure_456_, v_input_458_, v_s_459_);
return v___x_467_;
}
else
{
if (v___x_463_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_string_utf8_next_fast(v_k_455_, v_i_460_);
lean_dec(v_i_460_);
v___x_469_ = lean_string_utf8_next_fast(v_input_458_, v_j_461_);
lean_dec(v_j_461_);
v_i_460_ = v___x_468_;
v_j_461_ = v___x_469_;
goto _start;
}
else
{
lean_object* v___x_471_; 
lean_dec(v_j_461_);
lean_dec(v_i_460_);
lean_dec_ref(v_success_457_);
v___x_471_ = lean_apply_2(v_failure_456_, v_input_458_, v_s_459_);
return v___x_471_;
}
}
}
else
{
lean_object* v___x_472_; 
lean_dec(v_j_461_);
lean_dec(v_i_460_);
lean_dec_ref(v_success_457_);
v___x_472_ = lean_apply_2(v_failure_456_, v_input_458_, v_s_459_);
return v___x_472_;
}
}
else
{
lean_object* v_imports_473_; uint8_t v_badModifier_474_; lean_object* v_error_x3f_475_; uint8_t v_isModule_476_; uint8_t v_isMeta_477_; uint8_t v_isExported_478_; uint8_t v_importAll_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_488_; 
lean_dec(v_i_460_);
lean_dec_ref(v_failure_456_);
v_imports_473_ = lean_ctor_get(v_s_459_, 0);
v_badModifier_474_ = lean_ctor_get_uint8(v_s_459_, sizeof(void*)*3);
v_error_x3f_475_ = lean_ctor_get(v_s_459_, 2);
v_isModule_476_ = lean_ctor_get_uint8(v_s_459_, sizeof(void*)*3 + 1);
v_isMeta_477_ = lean_ctor_get_uint8(v_s_459_, sizeof(void*)*3 + 2);
v_isExported_478_ = lean_ctor_get_uint8(v_s_459_, sizeof(void*)*3 + 3);
v_importAll_479_ = lean_ctor_get_uint8(v_s_459_, sizeof(void*)*3 + 4);
v_isSharedCheck_488_ = !lean_is_exclusive(v_s_459_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; 
v_unused_489_ = lean_ctor_get(v_s_459_, 1);
lean_dec(v_unused_489_);
v___x_481_ = v_s_459_;
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_error_x3f_475_);
lean_inc(v_imports_473_);
lean_dec(v_s_459_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v_j_461_);
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_imports_473_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v_j_461_);
lean_ctor_set(v_reuseFailAlloc_487_, 2, v_error_x3f_475_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*3, v_badModifier_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*3 + 1, v_isModule_476_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*3 + 2, v_isMeta_477_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*3 + 3, v_isExported_478_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*3 + 4, v_importAll_479_);
v___x_484_ = v_reuseFailAlloc_487_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = l_Lean_ParseImports_whitespace(v_input_458_, v___x_484_);
v___x_486_ = lean_apply_2(v_success_457_, v_input_458_, v___x_485_);
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object* v_k_490_, lean_object* v_failure_491_, lean_object* v_success_492_, lean_object* v_input_493_, lean_object* v_s_494_, lean_object* v_i_495_, lean_object* v_j_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_490_, v_failure_491_, v_success_492_, v_input_493_, v_s_494_, v_i_495_, v_j_496_);
lean_dec_ref(v_k_490_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object* v_k_498_, lean_object* v_failure_499_, lean_object* v_success_500_, lean_object* v_input_501_, lean_object* v_s_502_){
_start:
{
lean_object* v_pos_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_pos_503_ = lean_ctor_get(v_s_502_, 1);
lean_inc(v_pos_503_);
v___x_504_ = lean_unsigned_to_nat(0u);
v___x_505_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_498_, v_failure_499_, v_success_500_, v_input_501_, v_s_502_, v___x_504_, v_pos_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object* v_k_506_, lean_object* v_failure_507_, lean_object* v_success_508_, lean_object* v_input_509_, lean_object* v_s_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_ParseImports_keywordCore(v_k_506_, v_failure_507_, v_success_508_, v_input_509_, v_s_510_);
lean_dec_ref(v_k_506_);
return v_res_511_;
}
}
static lean_object* _init_l_Lean_ParseImports_keyword___lam__0___closed__0(void){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_512_;
}
}
static lean_object* _init_l_Lean_ParseImports_keyword___lam__0___closed__1(void){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = lean_mk_string_unchecked("` expected", 10, 10);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object* v_k_514_, lean_object* v_x_515_, lean_object* v_s_516_){
_start:
{
lean_object* v_imports_517_; lean_object* v_pos_518_; uint8_t v_badModifier_519_; uint8_t v_isModule_520_; uint8_t v_isMeta_521_; uint8_t v_isExported_522_; uint8_t v_importAll_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_535_; 
v_imports_517_ = lean_ctor_get(v_s_516_, 0);
v_pos_518_ = lean_ctor_get(v_s_516_, 1);
v_badModifier_519_ = lean_ctor_get_uint8(v_s_516_, sizeof(void*)*3);
v_isModule_520_ = lean_ctor_get_uint8(v_s_516_, sizeof(void*)*3 + 1);
v_isMeta_521_ = lean_ctor_get_uint8(v_s_516_, sizeof(void*)*3 + 2);
v_isExported_522_ = lean_ctor_get_uint8(v_s_516_, sizeof(void*)*3 + 3);
v_importAll_523_ = lean_ctor_get_uint8(v_s_516_, sizeof(void*)*3 + 4);
v_isSharedCheck_535_ = !lean_is_exclusive(v_s_516_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; 
v_unused_536_ = lean_ctor_get(v_s_516_, 2);
lean_dec(v_unused_536_);
v___x_525_ = v_s_516_;
v_isShared_526_ = v_isSharedCheck_535_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_pos_518_);
lean_inc(v_imports_517_);
lean_dec(v_s_516_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_535_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_527_ = lean_obj_once(&l_Lean_ParseImports_keyword___lam__0___closed__0, &l_Lean_ParseImports_keyword___lam__0___closed__0_once, _init_l_Lean_ParseImports_keyword___lam__0___closed__0);
v___x_528_ = lean_string_append(v___x_527_, v_k_514_);
v___x_529_ = lean_obj_once(&l_Lean_ParseImports_keyword___lam__0___closed__1, &l_Lean_ParseImports_keyword___lam__0___closed__1_once, _init_l_Lean_ParseImports_keyword___lam__0___closed__1);
v___x_530_ = lean_string_append(v___x_528_, v___x_529_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 2, v___x_531_);
v___x_533_ = v___x_525_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_imports_517_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_pos_518_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v___x_531_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3, v_badModifier_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3 + 1, v_isModule_520_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3 + 2, v_isMeta_521_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3 + 3, v_isExported_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*3 + 4, v_importAll_523_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object* v_k_537_, lean_object* v_x_538_, lean_object* v_s_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_ParseImports_keyword___lam__0(v_k_537_, v_x_538_, v_s_539_);
lean_dec_ref(v_x_538_);
lean_dec_ref(v_k_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object* v_k_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_pos_544_; lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_pos_544_ = lean_ctor_get(v_a_543_, 1);
lean_inc(v_pos_544_);
lean_inc_ref(v_k_541_);
v___f_545_ = lean_alloc_closure((void*)(l_Lean_ParseImports_keyword___lam__0___boxed), 3, 1);
lean_closure_set(v___f_545_, 0, v_k_541_);
v___x_546_ = lean_alloc_closure((void*)(l_Lean_ParseImports_skip___boxed), 2, 0);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_541_, v___f_545_, v___x_546_, v_a_542_, v_a_543_, v___x_547_, v_pos_544_);
lean_dec_ref(v_k_541_);
return v___x_548_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object* v_input_549_, lean_object* v_s_550_){
_start:
{
lean_object* v_pos_551_; uint32_t v_curr_552_; uint32_t v___x_553_; uint8_t v___x_554_; 
v_pos_551_ = lean_ctor_get(v_s_550_, 1);
v_curr_552_ = lean_string_utf8_get(v_input_549_, v_pos_551_);
v___x_553_ = 46;
v___x_554_ = lean_uint32_dec_eq(v_curr_552_, v___x_553_);
if (v___x_554_ == 0)
{
return v___x_554_;
}
else
{
lean_object* v_i_555_; uint8_t v___x_556_; 
v_i_555_ = lean_string_utf8_next(v_input_549_, v_pos_551_);
v___x_556_ = lean_string_utf8_at_end(v_input_549_, v_i_555_);
if (v___x_556_ == 0)
{
uint32_t v_curr_557_; uint8_t v___y_559_; uint8_t v___y_563_; uint32_t v___x_572_; uint8_t v___x_573_; 
v_curr_557_ = lean_string_utf8_get_fast(v_input_549_, v_i_555_);
lean_dec(v_i_555_);
v___x_572_ = 65;
v___x_573_ = lean_uint32_dec_le(v___x_572_, v_curr_557_);
if (v___x_573_ == 0)
{
goto v___jp_567_;
}
else
{
uint32_t v___x_574_; uint8_t v___x_575_; 
v___x_574_ = 90;
v___x_575_ = lean_uint32_dec_le(v_curr_557_, v___x_574_);
if (v___x_575_ == 0)
{
goto v___jp_567_;
}
else
{
return v___x_554_;
}
}
v___jp_558_:
{
if (v___y_559_ == 0)
{
uint32_t v___x_560_; uint8_t v___x_561_; 
v___x_560_ = 171;
v___x_561_ = lean_uint32_dec_eq(v_curr_557_, v___x_560_);
return v___x_561_;
}
else
{
return v___x_554_;
}
}
v___jp_562_:
{
if (v___y_563_ == 0)
{
uint32_t v___x_564_; uint8_t v___x_565_; 
v___x_564_ = 95;
v___x_565_ = lean_uint32_dec_eq(v_curr_557_, v___x_564_);
if (v___x_565_ == 0)
{
uint8_t v___x_566_; 
v___x_566_ = l_Lean_isLetterLike(v_curr_557_);
v___y_559_ = v___x_566_;
goto v___jp_558_;
}
else
{
v___y_559_ = v___x_565_;
goto v___jp_558_;
}
}
else
{
return v___x_554_;
}
}
v___jp_567_:
{
uint32_t v___x_568_; uint8_t v___x_569_; 
v___x_568_ = 97;
v___x_569_ = lean_uint32_dec_le(v___x_568_, v_curr_557_);
if (v___x_569_ == 0)
{
v___y_563_ = v___x_569_;
goto v___jp_562_;
}
else
{
uint32_t v___x_570_; uint8_t v___x_571_; 
v___x_570_ = 122;
v___x_571_ = lean_uint32_dec_le(v_curr_557_, v___x_570_);
v___y_563_ = v___x_571_;
goto v___jp_562_;
}
}
}
else
{
uint8_t v___x_576_; 
lean_dec(v_i_555_);
v___x_576_ = 0;
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object* v_input_577_, lean_object* v_s_578_){
_start:
{
uint8_t v_res_579_; lean_object* v_r_580_; 
v_res_579_ = l_Lean_ParseImports_isIdCont(v_input_577_, v_s_578_);
lean_dec_ref(v_s_578_);
lean_dec_ref(v_input_577_);
v_r_580_ = lean_box(v_res_579_);
return v_r_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object* v_i_581_, lean_object* v_s_582_){
_start:
{
lean_object* v_imports_583_; lean_object* v_pos_584_; uint8_t v_badModifier_585_; lean_object* v_error_x3f_586_; uint8_t v_isModule_587_; uint8_t v_isMeta_588_; uint8_t v_isExported_589_; uint8_t v_importAll_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
v_imports_583_ = lean_ctor_get(v_s_582_, 0);
v_pos_584_ = lean_ctor_get(v_s_582_, 1);
v_badModifier_585_ = lean_ctor_get_uint8(v_s_582_, sizeof(void*)*3);
v_error_x3f_586_ = lean_ctor_get(v_s_582_, 2);
v_isModule_587_ = lean_ctor_get_uint8(v_s_582_, sizeof(void*)*3 + 1);
v_isMeta_588_ = lean_ctor_get_uint8(v_s_582_, sizeof(void*)*3 + 2);
v_isExported_589_ = lean_ctor_get_uint8(v_s_582_, sizeof(void*)*3 + 3);
v_importAll_590_ = lean_ctor_get_uint8(v_s_582_, sizeof(void*)*3 + 4);
v_isSharedCheck_598_ = !lean_is_exclusive(v_s_582_);
if (v_isSharedCheck_598_ == 0)
{
v___x_592_ = v_s_582_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_error_x3f_586_);
lean_inc(v_pos_584_);
lean_inc(v_imports_583_);
lean_dec(v_s_582_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = lean_array_push(v_imports_583_, v_i_581_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_594_);
v___x_596_ = v___x_592_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_pos_584_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_error_x3f_586_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*3, v_badModifier_585_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*3 + 1, v_isModule_587_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*3 + 2, v_isMeta_588_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*3 + 3, v_isExported_589_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*3 + 4, v_importAll_590_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t v_c_599_){
_start:
{
uint8_t v___y_601_; uint32_t v___x_608_; uint8_t v___x_609_; 
v___x_608_ = 95;
v___x_609_ = lean_uint32_dec_eq(v_c_599_, v___x_608_);
if (v___x_609_ == 0)
{
uint32_t v___x_610_; uint8_t v___x_611_; 
v___x_610_ = 39;
v___x_611_ = lean_uint32_dec_eq(v_c_599_, v___x_610_);
v___y_601_ = v___x_611_;
goto v___jp_600_;
}
else
{
v___y_601_ = v___x_609_;
goto v___jp_600_;
}
v___jp_600_:
{
if (v___y_601_ == 0)
{
uint32_t v___x_602_; uint8_t v___x_603_; 
v___x_602_ = 33;
v___x_603_ = lean_uint32_dec_eq(v_c_599_, v___x_602_);
if (v___x_603_ == 0)
{
uint32_t v___x_604_; uint8_t v___x_605_; 
v___x_604_ = 63;
v___x_605_ = lean_uint32_dec_eq(v_c_599_, v___x_604_);
if (v___x_605_ == 0)
{
uint8_t v___x_606_; 
v___x_606_ = l_Lean_isLetterLike(v_c_599_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; 
v___x_607_ = l_Lean_isSubScriptAlnum(v_c_599_);
return v___x_607_;
}
else
{
return v___x_606_;
}
}
else
{
return v___x_605_;
}
}
else
{
return v___x_603_;
}
}
else
{
return v___y_601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object* v_c_612_){
_start:
{
uint32_t v_c_boxed_613_; uint8_t v_res_614_; lean_object* v_r_615_; 
v_c_boxed_613_ = lean_unbox_uint32(v_c_612_);
lean_dec(v_c_612_);
v_res_614_ = l_Lean_ParseImports_isIdRestCold(v_c_boxed_613_);
v_r_615_ = lean_box(v_res_614_);
return v_r_615_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t v_c_616_){
_start:
{
uint8_t v___y_618_; uint8_t v___y_626_; uint8_t v___y_638_; uint32_t v___x_648_; uint8_t v___x_649_; 
v___x_648_ = 65;
v___x_649_ = lean_uint32_dec_le(v___x_648_, v_c_616_);
if (v___x_649_ == 0)
{
goto v___jp_643_;
}
else
{
uint32_t v___x_650_; uint8_t v___x_651_; 
v___x_650_ = 90;
v___x_651_ = lean_uint32_dec_le(v_c_616_, v___x_650_);
if (v___x_651_ == 0)
{
goto v___jp_643_;
}
else
{
return v___x_651_;
}
}
v___jp_617_:
{
if (v___y_618_ == 0)
{
uint32_t v___x_619_; uint8_t v___x_620_; 
v___x_619_ = 33;
v___x_620_ = lean_uint32_dec_eq(v_c_616_, v___x_619_);
if (v___x_620_ == 0)
{
uint32_t v___x_621_; uint8_t v___x_622_; 
v___x_621_ = 63;
v___x_622_ = lean_uint32_dec_eq(v_c_616_, v___x_621_);
if (v___x_622_ == 0)
{
uint8_t v___x_623_; 
v___x_623_ = l_Lean_isLetterLike(v_c_616_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; 
v___x_624_ = l_Lean_isSubScriptAlnum(v_c_616_);
return v___x_624_;
}
else
{
return v___x_623_;
}
}
else
{
return v___x_622_;
}
}
else
{
return v___x_620_;
}
}
else
{
return v___y_618_;
}
}
v___jp_625_:
{
if (v___y_626_ == 0)
{
uint32_t v___x_627_; uint8_t v___x_628_; 
v___x_627_ = 46;
v___x_628_ = lean_uint32_dec_eq(v_c_616_, v___x_627_);
if (v___x_628_ == 0)
{
uint32_t v___x_629_; uint8_t v___x_630_; 
v___x_629_ = 10;
v___x_630_ = lean_uint32_dec_eq(v_c_616_, v___x_629_);
if (v___x_630_ == 0)
{
uint32_t v___x_631_; uint8_t v___x_632_; 
v___x_631_ = 32;
v___x_632_ = lean_uint32_dec_eq(v_c_616_, v___x_631_);
if (v___x_632_ == 0)
{
uint32_t v___x_633_; uint8_t v___x_634_; 
v___x_633_ = 95;
v___x_634_ = lean_uint32_dec_eq(v_c_616_, v___x_633_);
if (v___x_634_ == 0)
{
uint32_t v___x_635_; uint8_t v___x_636_; 
v___x_635_ = 39;
v___x_636_ = lean_uint32_dec_eq(v_c_616_, v___x_635_);
v___y_618_ = v___x_636_;
goto v___jp_617_;
}
else
{
v___y_618_ = v___x_634_;
goto v___jp_617_;
}
}
else
{
return v___y_626_;
}
}
else
{
return v___y_626_;
}
}
else
{
return v___y_626_;
}
}
else
{
return v___y_626_;
}
}
v___jp_637_:
{
if (v___y_638_ == 0)
{
uint32_t v___x_639_; uint8_t v___x_640_; 
v___x_639_ = 48;
v___x_640_ = lean_uint32_dec_le(v___x_639_, v_c_616_);
if (v___x_640_ == 0)
{
v___y_626_ = v___x_640_;
goto v___jp_625_;
}
else
{
uint32_t v___x_641_; uint8_t v___x_642_; 
v___x_641_ = 57;
v___x_642_ = lean_uint32_dec_le(v_c_616_, v___x_641_);
v___y_626_ = v___x_642_;
goto v___jp_625_;
}
}
else
{
return v___y_638_;
}
}
v___jp_643_:
{
uint32_t v___x_644_; uint8_t v___x_645_; 
v___x_644_ = 97;
v___x_645_ = lean_uint32_dec_le(v___x_644_, v_c_616_);
if (v___x_645_ == 0)
{
v___y_638_ = v___x_645_;
goto v___jp_637_;
}
else
{
uint32_t v___x_646_; uint8_t v___x_647_; 
v___x_646_ = 122;
v___x_647_ = lean_uint32_dec_le(v_c_616_, v___x_646_);
v___y_638_ = v___x_647_;
goto v___jp_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object* v_c_652_){
_start:
{
uint32_t v_c_boxed_653_; uint8_t v_res_654_; lean_object* v_r_655_; 
v_c_boxed_653_ = lean_unbox_uint32(v_c_652_);
lean_dec(v_c_652_);
v_res_654_ = l_Lean_ParseImports_isIdRestFast(v_c_boxed_653_);
v_r_655_ = lean_box(v_res_654_);
return v_r_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t v___y_656_, uint32_t v_curr_657_, lean_object* v_input_658_, lean_object* v_s_659_){
_start:
{
lean_object* v_imports_660_; lean_object* v_pos_661_; uint8_t v_badModifier_662_; lean_object* v_error_x3f_663_; uint8_t v_isModule_664_; uint8_t v_isMeta_665_; uint8_t v_isExported_666_; uint8_t v_importAll_667_; uint8_t v___y_669_; uint8_t v___x_682_; 
v_imports_660_ = lean_ctor_get(v_s_659_, 0);
v_pos_661_ = lean_ctor_get(v_s_659_, 1);
v_badModifier_662_ = lean_ctor_get_uint8(v_s_659_, sizeof(void*)*3);
v_error_x3f_663_ = lean_ctor_get(v_s_659_, 2);
v_isModule_664_ = lean_ctor_get_uint8(v_s_659_, sizeof(void*)*3 + 1);
v_isMeta_665_ = lean_ctor_get_uint8(v_s_659_, sizeof(void*)*3 + 2);
v_isExported_666_ = lean_ctor_get_uint8(v_s_659_, sizeof(void*)*3 + 3);
v_importAll_667_ = lean_ctor_get_uint8(v_s_659_, sizeof(void*)*3 + 4);
v___x_682_ = lean_string_utf8_at_end(v_input_658_, v_pos_661_);
if (v___x_682_ == 0)
{
uint32_t v___x_683_; uint8_t v___x_684_; uint32_t v___x_685_; uint8_t v___y_687_; uint8_t v___y_695_; uint8_t v___y_707_; uint32_t v___x_717_; uint8_t v___x_718_; 
v___x_683_ = 171;
v___x_684_ = lean_uint32_dec_eq(v_curr_657_, v___x_683_);
v___x_685_ = lean_string_utf8_get_fast(v_input_658_, v_pos_661_);
v___x_717_ = 65;
v___x_718_ = lean_uint32_dec_le(v___x_717_, v___x_685_);
if (v___x_718_ == 0)
{
goto v___jp_712_;
}
else
{
uint32_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 90;
v___x_720_ = lean_uint32_dec_le(v___x_685_, v___x_719_);
if (v___x_720_ == 0)
{
goto v___jp_712_;
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
v___jp_686_:
{
if (v___y_687_ == 0)
{
uint32_t v___x_688_; uint8_t v___x_689_; 
v___x_688_ = 33;
v___x_689_ = lean_uint32_dec_eq(v___x_685_, v___x_688_);
if (v___x_689_ == 0)
{
uint32_t v___x_690_; uint8_t v___x_691_; 
v___x_690_ = 63;
v___x_691_ = lean_uint32_dec_eq(v___x_685_, v___x_690_);
if (v___x_691_ == 0)
{
uint8_t v___x_692_; 
v___x_692_ = l_Lean_isLetterLike(v___x_685_);
if (v___x_692_ == 0)
{
uint8_t v___x_693_; 
v___x_693_ = l_Lean_isSubScriptAlnum(v___x_685_);
if (v___x_693_ == 0)
{
v___y_669_ = v___y_656_;
goto v___jp_668_;
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
else
{
if (v___x_692_ == 0)
{
v___y_669_ = v___y_656_;
goto v___jp_668_;
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
}
else
{
if (v___x_691_ == 0)
{
v___y_669_ = v___y_656_;
goto v___jp_668_;
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
}
else
{
if (v___x_689_ == 0)
{
v___y_669_ = v___y_656_;
goto v___jp_668_;
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
v___jp_694_:
{
if (v___y_695_ == 0)
{
uint32_t v___x_696_; uint8_t v___x_697_; 
v___x_696_ = 46;
v___x_697_ = lean_uint32_dec_eq(v___x_685_, v___x_696_);
if (v___x_697_ == 0)
{
uint32_t v___x_698_; uint8_t v___x_699_; 
v___x_698_ = 10;
v___x_699_ = lean_uint32_dec_eq(v___x_685_, v___x_698_);
if (v___x_699_ == 0)
{
uint32_t v___x_700_; uint8_t v___x_701_; 
v___x_700_ = 32;
v___x_701_ = lean_uint32_dec_eq(v___x_685_, v___x_700_);
if (v___x_701_ == 0)
{
uint32_t v___x_702_; uint8_t v___x_703_; 
v___x_702_ = 95;
v___x_703_ = lean_uint32_dec_eq(v___x_685_, v___x_702_);
if (v___x_703_ == 0)
{
uint32_t v___x_704_; uint8_t v___x_705_; 
v___x_704_ = 39;
v___x_705_ = lean_uint32_dec_eq(v___x_685_, v___x_704_);
v___y_687_ = v___x_705_;
goto v___jp_686_;
}
else
{
v___y_687_ = v___x_703_;
goto v___jp_686_;
}
}
else
{
v___y_669_ = v___x_701_;
goto v___jp_668_;
}
}
else
{
v___y_669_ = v___x_699_;
goto v___jp_668_;
}
}
else
{
v___y_669_ = v___x_697_;
goto v___jp_668_;
}
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
v___jp_706_:
{
if (v___y_707_ == 0)
{
uint32_t v___x_708_; uint8_t v___x_709_; 
v___x_708_ = 48;
v___x_709_ = lean_uint32_dec_le(v___x_708_, v___x_685_);
if (v___x_709_ == 0)
{
v___y_695_ = v___x_709_;
goto v___jp_694_;
}
else
{
uint32_t v___x_710_; uint8_t v___x_711_; 
v___x_710_ = 57;
v___x_711_ = lean_uint32_dec_le(v___x_685_, v___x_710_);
v___y_695_ = v___x_711_;
goto v___jp_694_;
}
}
else
{
v___y_669_ = v___x_684_;
goto v___jp_668_;
}
}
v___jp_712_:
{
uint32_t v___x_713_; uint8_t v___x_714_; 
v___x_713_ = 97;
v___x_714_ = lean_uint32_dec_le(v___x_713_, v___x_685_);
if (v___x_714_ == 0)
{
v___y_707_ = v___x_714_;
goto v___jp_706_;
}
else
{
uint32_t v___x_715_; uint8_t v___x_716_; 
v___x_715_ = 122;
v___x_716_ = lean_uint32_dec_le(v___x_685_, v___x_715_);
v___y_707_ = v___x_716_;
goto v___jp_706_;
}
}
}
else
{
return v_s_659_;
}
v___jp_668_:
{
if (v___y_669_ == 0)
{
lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_678_; 
lean_inc(v_error_x3f_663_);
lean_inc(v_pos_661_);
lean_inc_ref(v_imports_660_);
v_isSharedCheck_678_ = !lean_is_exclusive(v_s_659_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; lean_object* v_unused_680_; lean_object* v_unused_681_; 
v_unused_679_ = lean_ctor_get(v_s_659_, 2);
lean_dec(v_unused_679_);
v_unused_680_ = lean_ctor_get(v_s_659_, 1);
lean_dec(v_unused_680_);
v_unused_681_ = lean_ctor_get(v_s_659_, 0);
lean_dec(v_unused_681_);
v___x_671_ = v_s_659_;
v_isShared_672_ = v_isSharedCheck_678_;
goto v_resetjp_670_;
}
else
{
lean_dec(v_s_659_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_678_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_string_utf8_next_fast(v_input_658_, v_pos_661_);
lean_dec(v_pos_661_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v___x_673_);
v___x_675_ = v___x_671_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_imports_660_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v_error_x3f_663_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*3, v_badModifier_662_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*3 + 1, v_isModule_664_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*3 + 2, v_isMeta_665_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*3 + 3, v_isExported_666_);
lean_ctor_set_uint8(v_reuseFailAlloc_677_, sizeof(void*)*3 + 4, v_importAll_667_);
v___x_675_ = v_reuseFailAlloc_677_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
v_s_659_ = v___x_675_;
goto _start;
}
}
}
else
{
return v_s_659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object* v___y_721_, lean_object* v_curr_722_, lean_object* v_input_723_, lean_object* v_s_724_){
_start:
{
uint8_t v___y_2235__boxed_725_; uint32_t v_curr_boxed_726_; lean_object* v_res_727_; 
v___y_2235__boxed_725_ = lean_unbox(v___y_721_);
v_curr_boxed_726_ = lean_unbox_uint32(v_curr_722_);
lean_dec(v_curr_722_);
v_res_727_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___y_2235__boxed_725_, v_curr_boxed_726_, v_input_723_, v_s_724_);
lean_dec_ref(v_input_723_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object* v_input_728_, lean_object* v_s_729_){
_start:
{
lean_object* v_imports_730_; lean_object* v_pos_731_; uint8_t v_badModifier_732_; lean_object* v_error_x3f_733_; uint8_t v_isModule_734_; uint8_t v_isMeta_735_; uint8_t v_isExported_736_; uint8_t v_importAll_737_; uint8_t v___x_738_; 
v_imports_730_ = lean_ctor_get(v_s_729_, 0);
v_pos_731_ = lean_ctor_get(v_s_729_, 1);
v_badModifier_732_ = lean_ctor_get_uint8(v_s_729_, sizeof(void*)*3);
v_error_x3f_733_ = lean_ctor_get(v_s_729_, 2);
v_isModule_734_ = lean_ctor_get_uint8(v_s_729_, sizeof(void*)*3 + 1);
v_isMeta_735_ = lean_ctor_get_uint8(v_s_729_, sizeof(void*)*3 + 2);
v_isExported_736_ = lean_ctor_get_uint8(v_s_729_, sizeof(void*)*3 + 3);
v_importAll_737_ = lean_ctor_get_uint8(v_s_729_, sizeof(void*)*3 + 4);
v___x_738_ = lean_string_utf8_at_end(v_input_728_, v_pos_731_);
if (v___x_738_ == 0)
{
uint32_t v___x_739_; uint32_t v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_string_utf8_get_fast(v_input_728_, v_pos_731_);
v___x_740_ = 187;
v___x_741_ = lean_uint32_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_750_; 
lean_inc(v_error_x3f_733_);
lean_inc(v_pos_731_);
lean_inc_ref(v_imports_730_);
v_isSharedCheck_750_ = !lean_is_exclusive(v_s_729_);
if (v_isSharedCheck_750_ == 0)
{
lean_object* v_unused_751_; lean_object* v_unused_752_; lean_object* v_unused_753_; 
v_unused_751_ = lean_ctor_get(v_s_729_, 2);
lean_dec(v_unused_751_);
v_unused_752_ = lean_ctor_get(v_s_729_, 1);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v_s_729_, 0);
lean_dec(v_unused_753_);
v___x_743_ = v_s_729_;
v_isShared_744_ = v_isSharedCheck_750_;
goto v_resetjp_742_;
}
else
{
lean_dec(v_s_729_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_750_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_745_ = lean_string_utf8_next_fast(v_input_728_, v_pos_731_);
lean_dec(v_pos_731_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_745_);
v___x_747_ = v___x_743_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_imports_730_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_749_, 2, v_error_x3f_733_);
lean_ctor_set_uint8(v_reuseFailAlloc_749_, sizeof(void*)*3, v_badModifier_732_);
lean_ctor_set_uint8(v_reuseFailAlloc_749_, sizeof(void*)*3 + 1, v_isModule_734_);
lean_ctor_set_uint8(v_reuseFailAlloc_749_, sizeof(void*)*3 + 2, v_isMeta_735_);
lean_ctor_set_uint8(v_reuseFailAlloc_749_, sizeof(void*)*3 + 3, v_isExported_736_);
lean_ctor_set_uint8(v_reuseFailAlloc_749_, sizeof(void*)*3 + 4, v_importAll_737_);
v___x_747_ = v_reuseFailAlloc_749_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
v_s_729_ = v___x_747_;
goto _start;
}
}
}
else
{
return v_s_729_;
}
}
else
{
return v_s_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object* v_input_754_, lean_object* v_s_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_754_, v_s_755_);
lean_dec_ref(v_input_754_);
return v_res_756_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0(void){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = lean_mk_string_unchecked("expected identifier", 19, 19);
return v___x_757_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0);
v___x_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2(void){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = lean_mk_string_unchecked("unterminated identifier escape", 30, 30);
return v___x_760_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2);
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object* v_input_763_, lean_object* v_finalize_764_, lean_object* v_module_765_, lean_object* v_s_766_){
_start:
{
uint8_t v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; uint8_t v___y_771_; uint8_t v___y_772_; uint8_t v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; uint8_t v___y_776_; lean_object* v___y_777_; uint8_t v___y_778_; lean_object* v_imports_783_; lean_object* v_pos_784_; uint8_t v_badModifier_785_; lean_object* v_error_x3f_786_; uint8_t v_isModule_787_; uint8_t v_isMeta_788_; uint8_t v_isExported_789_; uint8_t v_importAll_790_; uint8_t v___x_791_; 
v_imports_783_ = lean_ctor_get(v_s_766_, 0);
v_pos_784_ = lean_ctor_get(v_s_766_, 1);
v_badModifier_785_ = lean_ctor_get_uint8(v_s_766_, sizeof(void*)*3);
v_error_x3f_786_ = lean_ctor_get(v_s_766_, 2);
v_isModule_787_ = lean_ctor_get_uint8(v_s_766_, sizeof(void*)*3 + 1);
v_isMeta_788_ = lean_ctor_get_uint8(v_s_766_, sizeof(void*)*3 + 2);
v_isExported_789_ = lean_ctor_get_uint8(v_s_766_, sizeof(void*)*3 + 3);
v_importAll_790_ = lean_ctor_get_uint8(v_s_766_, sizeof(void*)*3 + 4);
v___x_791_ = lean_string_utf8_at_end(v_input_763_, v_pos_784_);
if (v___x_791_ == 0)
{
lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_947_; 
lean_inc(v_error_x3f_786_);
lean_inc(v_pos_784_);
lean_inc_ref(v_imports_783_);
v_isSharedCheck_947_ = !lean_is_exclusive(v_s_766_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; lean_object* v_unused_949_; lean_object* v_unused_950_; 
v_unused_948_ = lean_ctor_get(v_s_766_, 2);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_s_766_, 1);
lean_dec(v_unused_949_);
v_unused_950_ = lean_ctor_get(v_s_766_, 0);
lean_dec(v_unused_950_);
v___x_793_ = v_s_766_;
v_isShared_794_ = v_isSharedCheck_947_;
goto v_resetjp_792_;
}
else
{
lean_dec(v_s_766_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_947_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
uint32_t v_curr_795_; uint32_t v___x_796_; uint8_t v___y_798_; lean_object* v___y_799_; uint8_t v___y_800_; lean_object* v___y_801_; uint8_t v___y_802_; uint32_t v___y_803_; uint8_t v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; uint8_t v___y_807_; uint8_t v___y_808_; lean_object* v___y_809_; uint8_t v___y_810_; uint8_t v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; uint8_t v___y_816_; uint8_t v___y_817_; uint32_t v___y_818_; uint8_t v___y_819_; uint8_t v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; uint8_t v___y_823_; lean_object* v___y_824_; uint8_t v___y_825_; uint8_t v___y_830_; lean_object* v___y_831_; uint8_t v___y_832_; lean_object* v___y_833_; uint8_t v___y_834_; uint32_t v___y_835_; uint8_t v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; uint8_t v___y_839_; uint8_t v___y_840_; lean_object* v___y_841_; uint8_t v___x_846_; uint8_t v___y_848_; uint8_t v___y_875_; uint8_t v___y_879_; 
v_curr_795_ = lean_string_utf8_get_fast(v_input_763_, v_pos_784_);
v___x_796_ = 171;
v___x_846_ = lean_uint32_dec_eq(v_curr_795_, v___x_796_);
if (v___x_846_ == 0)
{
uint32_t v___x_888_; uint8_t v___x_889_; 
v___x_888_ = 65;
v___x_889_ = lean_uint32_dec_le(v___x_888_, v_curr_795_);
if (v___x_889_ == 0)
{
goto v___jp_883_;
}
else
{
uint32_t v___x_890_; uint8_t v___x_891_; 
v___x_890_ = 90;
v___x_891_ = lean_uint32_dec_le(v_curr_795_, v___x_890_);
if (v___x_891_ == 0)
{
goto v___jp_883_;
}
else
{
v___y_848_ = v___x_891_;
goto v___jp_847_;
}
}
}
else
{
lean_object* v_startPart_892_; lean_object* v___x_893_; lean_object* v_s_894_; lean_object* v_imports_895_; lean_object* v_pos_896_; uint8_t v_badModifier_897_; lean_object* v_error_x3f_898_; uint8_t v_isModule_899_; uint8_t v_isMeta_900_; uint8_t v_isExported_901_; uint8_t v_importAll_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_946_; 
lean_del_object(v___x_793_);
v_startPart_892_ = lean_string_utf8_next_fast(v_input_763_, v_pos_784_);
lean_dec(v_pos_784_);
v___x_893_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_893_, 0, v_imports_783_);
lean_ctor_set(v___x_893_, 1, v_startPart_892_);
lean_ctor_set(v___x_893_, 2, v_error_x3f_786_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*3, v_badModifier_785_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*3 + 1, v_isModule_787_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*3 + 2, v_isMeta_788_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*3 + 3, v_isExported_789_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*3 + 4, v_importAll_790_);
v_s_894_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_763_, v___x_893_);
v_imports_895_ = lean_ctor_get(v_s_894_, 0);
v_pos_896_ = lean_ctor_get(v_s_894_, 1);
v_badModifier_897_ = lean_ctor_get_uint8(v_s_894_, sizeof(void*)*3);
v_error_x3f_898_ = lean_ctor_get(v_s_894_, 2);
v_isModule_899_ = lean_ctor_get_uint8(v_s_894_, sizeof(void*)*3 + 1);
v_isMeta_900_ = lean_ctor_get_uint8(v_s_894_, sizeof(void*)*3 + 2);
v_isExported_901_ = lean_ctor_get_uint8(v_s_894_, sizeof(void*)*3 + 3);
v_importAll_902_ = lean_ctor_get_uint8(v_s_894_, sizeof(void*)*3 + 4);
v_isSharedCheck_946_ = !lean_is_exclusive(v_s_894_);
if (v_isSharedCheck_946_ == 0)
{
v___x_904_ = v_s_894_;
v_isShared_905_ = v_isSharedCheck_946_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_error_x3f_898_);
lean_inc(v_pos_896_);
lean_inc(v_imports_895_);
lean_dec(v_s_894_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_946_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
uint8_t v___x_906_; 
v___x_906_ = lean_string_utf8_at_end(v_input_763_, v_pos_896_);
if (v___x_906_ == 0)
{
lean_object* v_i_907_; lean_object* v_s_909_; 
v_i_907_ = lean_string_utf8_next_fast(v_input_763_, v_pos_896_);
lean_inc(v_error_x3f_898_);
lean_inc_ref(v_imports_895_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 1, v_i_907_);
v_s_909_ = v___x_904_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_imports_895_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_i_907_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v_error_x3f_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_941_, sizeof(void*)*3, v_badModifier_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_941_, sizeof(void*)*3 + 1, v_isModule_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_941_, sizeof(void*)*3 + 2, v_isMeta_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_941_, sizeof(void*)*3 + 3, v_isExported_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_941_, sizeof(void*)*3 + 4, v_importAll_902_);
v_s_909_ = v_reuseFailAlloc_941_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; lean_object* v_module_911_; uint8_t v___y_913_; uint32_t v_curr_918_; uint32_t v___x_919_; uint8_t v___x_920_; 
v___x_910_ = lean_string_utf8_extract(v_input_763_, v_startPart_892_, v_pos_896_);
lean_dec(v_pos_896_);
v_module_911_ = l_Lean_Name_str___override(v_module_765_, v___x_910_);
v_curr_918_ = lean_string_utf8_get(v_input_763_, v_i_907_);
v___x_919_ = 46;
v___x_920_ = lean_uint32_dec_eq(v_curr_918_, v___x_919_);
if (v___x_920_ == 0)
{
v___y_913_ = v___x_920_;
goto v___jp_912_;
}
else
{
lean_object* v_i_921_; uint8_t v___x_922_; 
v_i_921_ = lean_string_utf8_next(v_input_763_, v_i_907_);
v___x_922_ = lean_string_utf8_at_end(v_input_763_, v_i_921_);
if (v___x_922_ == 0)
{
uint32_t v_curr_923_; uint8_t v___y_925_; uint8_t v___y_928_; uint32_t v___x_937_; uint8_t v___x_938_; 
v_curr_923_ = lean_string_utf8_get_fast(v_input_763_, v_i_921_);
lean_dec(v_i_921_);
v___x_937_ = 65;
v___x_938_ = lean_uint32_dec_le(v___x_937_, v_curr_923_);
if (v___x_938_ == 0)
{
goto v___jp_932_;
}
else
{
uint32_t v___x_939_; uint8_t v___x_940_; 
v___x_939_ = 90;
v___x_940_ = lean_uint32_dec_le(v_curr_923_, v___x_939_);
if (v___x_940_ == 0)
{
goto v___jp_932_;
}
else
{
v___y_913_ = v___x_920_;
goto v___jp_912_;
}
}
v___jp_924_:
{
if (v___y_925_ == 0)
{
uint8_t v___x_926_; 
v___x_926_ = lean_uint32_dec_eq(v_curr_923_, v___x_796_);
v___y_913_ = v___x_926_;
goto v___jp_912_;
}
else
{
v___y_913_ = v___x_920_;
goto v___jp_912_;
}
}
v___jp_927_:
{
if (v___y_928_ == 0)
{
uint32_t v___x_929_; uint8_t v___x_930_; 
v___x_929_ = 95;
v___x_930_ = lean_uint32_dec_eq(v_curr_923_, v___x_929_);
if (v___x_930_ == 0)
{
uint8_t v___x_931_; 
v___x_931_ = l_Lean_isLetterLike(v_curr_923_);
v___y_925_ = v___x_931_;
goto v___jp_924_;
}
else
{
v___y_925_ = v___x_930_;
goto v___jp_924_;
}
}
else
{
v___y_913_ = v___x_920_;
goto v___jp_912_;
}
}
v___jp_932_:
{
uint32_t v___x_933_; uint8_t v___x_934_; 
v___x_933_ = 97;
v___x_934_ = lean_uint32_dec_le(v___x_933_, v_curr_923_);
if (v___x_934_ == 0)
{
v___y_928_ = v___x_934_;
goto v___jp_927_;
}
else
{
uint32_t v___x_935_; uint8_t v___x_936_; 
v___x_935_ = 122;
v___x_936_ = lean_uint32_dec_le(v_curr_923_, v___x_935_);
v___y_928_ = v___x_936_;
goto v___jp_927_;
}
}
}
else
{
lean_dec(v_i_921_);
v___y_913_ = v___x_906_;
goto v___jp_912_;
}
}
v___jp_912_:
{
if (v___y_913_ == 0)
{
lean_object* v___x_914_; 
lean_dec(v_error_x3f_898_);
lean_dec_ref(v_imports_895_);
v___x_914_ = lean_apply_3(v_finalize_764_, v_module_911_, v_input_763_, v_s_909_);
return v___x_914_;
}
else
{
lean_object* v___x_915_; lean_object* v_s_916_; 
lean_dec_ref(v_s_909_);
v___x_915_ = lean_string_utf8_next(v_input_763_, v_i_907_);
v_s_916_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_916_, 0, v_imports_895_);
lean_ctor_set(v_s_916_, 1, v___x_915_);
lean_ctor_set(v_s_916_, 2, v_error_x3f_898_);
lean_ctor_set_uint8(v_s_916_, sizeof(void*)*3, v_badModifier_897_);
lean_ctor_set_uint8(v_s_916_, sizeof(void*)*3 + 1, v_isModule_899_);
lean_ctor_set_uint8(v_s_916_, sizeof(void*)*3 + 2, v_isMeta_900_);
lean_ctor_set_uint8(v_s_916_, sizeof(void*)*3 + 3, v_isExported_901_);
lean_ctor_set_uint8(v_s_916_, sizeof(void*)*3 + 4, v_importAll_902_);
v_module_765_ = v_module_911_;
v_s_766_ = v_s_916_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_942_; lean_object* v___x_944_; 
lean_dec(v_error_x3f_898_);
lean_dec(v_module_765_);
lean_dec_ref(v_finalize_764_);
lean_dec_ref(v_input_763_);
v___x_942_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 2, v___x_942_);
v___x_944_ = v___x_904_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_imports_895_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_pos_896_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v___x_942_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3, v_badModifier_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3 + 1, v_isModule_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3 + 2, v_isMeta_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3 + 3, v_isExported_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3 + 4, v_importAll_902_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
v___jp_797_:
{
if (v___y_810_ == 0)
{
uint8_t v___x_811_; 
v___x_811_ = lean_uint32_dec_eq(v___y_803_, v___x_796_);
v___y_768_ = v___y_798_;
v___y_769_ = v___y_799_;
v___y_770_ = v___y_801_;
v___y_771_ = v___y_802_;
v___y_772_ = v___y_804_;
v___y_773_ = v___y_807_;
v___y_774_ = v___y_806_;
v___y_775_ = v___y_805_;
v___y_776_ = v___y_808_;
v___y_777_ = v___y_809_;
v___y_778_ = v___x_811_;
goto v___jp_767_;
}
else
{
v___y_768_ = v___y_798_;
v___y_769_ = v___y_799_;
v___y_770_ = v___y_801_;
v___y_771_ = v___y_802_;
v___y_772_ = v___y_804_;
v___y_773_ = v___y_807_;
v___y_774_ = v___y_806_;
v___y_775_ = v___y_805_;
v___y_776_ = v___y_808_;
v___y_777_ = v___y_809_;
v___y_778_ = v___y_800_;
goto v___jp_767_;
}
}
v___jp_812_:
{
if (v___y_825_ == 0)
{
uint32_t v___x_826_; uint8_t v___x_827_; 
v___x_826_ = 95;
v___x_827_ = lean_uint32_dec_eq(v___y_818_, v___x_826_);
if (v___x_827_ == 0)
{
uint8_t v___x_828_; 
v___x_828_ = l_Lean_isLetterLike(v___y_818_);
v___y_798_ = v___y_813_;
v___y_799_ = v___y_814_;
v___y_800_ = v___y_816_;
v___y_801_ = v___y_815_;
v___y_802_ = v___y_817_;
v___y_803_ = v___y_818_;
v___y_804_ = v___y_819_;
v___y_805_ = v___y_822_;
v___y_806_ = v___y_821_;
v___y_807_ = v___y_820_;
v___y_808_ = v___y_823_;
v___y_809_ = v___y_824_;
v___y_810_ = v___x_828_;
goto v___jp_797_;
}
else
{
v___y_798_ = v___y_813_;
v___y_799_ = v___y_814_;
v___y_800_ = v___y_816_;
v___y_801_ = v___y_815_;
v___y_802_ = v___y_817_;
v___y_803_ = v___y_818_;
v___y_804_ = v___y_819_;
v___y_805_ = v___y_822_;
v___y_806_ = v___y_821_;
v___y_807_ = v___y_820_;
v___y_808_ = v___y_823_;
v___y_809_ = v___y_824_;
v___y_810_ = v___x_827_;
goto v___jp_797_;
}
}
else
{
v___y_768_ = v___y_813_;
v___y_769_ = v___y_814_;
v___y_770_ = v___y_815_;
v___y_771_ = v___y_817_;
v___y_772_ = v___y_819_;
v___y_773_ = v___y_820_;
v___y_774_ = v___y_821_;
v___y_775_ = v___y_822_;
v___y_776_ = v___y_823_;
v___y_777_ = v___y_824_;
v___y_778_ = v___y_816_;
goto v___jp_767_;
}
}
v___jp_829_:
{
uint32_t v___x_842_; uint8_t v___x_843_; 
v___x_842_ = 97;
v___x_843_ = lean_uint32_dec_le(v___x_842_, v___y_835_);
if (v___x_843_ == 0)
{
v___y_813_ = v___y_830_;
v___y_814_ = v___y_831_;
v___y_815_ = v___y_833_;
v___y_816_ = v___y_832_;
v___y_817_ = v___y_834_;
v___y_818_ = v___y_835_;
v___y_819_ = v___y_836_;
v___y_820_ = v___y_839_;
v___y_821_ = v___y_838_;
v___y_822_ = v___y_837_;
v___y_823_ = v___y_840_;
v___y_824_ = v___y_841_;
v___y_825_ = v___x_843_;
goto v___jp_812_;
}
else
{
uint32_t v___x_844_; uint8_t v___x_845_; 
v___x_844_ = 122;
v___x_845_ = lean_uint32_dec_le(v___y_835_, v___x_844_);
v___y_813_ = v___y_830_;
v___y_814_ = v___y_831_;
v___y_815_ = v___y_833_;
v___y_816_ = v___y_832_;
v___y_817_ = v___y_834_;
v___y_818_ = v___y_835_;
v___y_819_ = v___y_836_;
v___y_820_ = v___y_839_;
v___y_821_ = v___y_838_;
v___y_822_ = v___y_837_;
v___y_823_ = v___y_840_;
v___y_824_ = v___y_841_;
v___y_825_ = v___x_845_;
goto v___jp_812_;
}
}
v___jp_847_:
{
lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_849_ = lean_string_utf8_next_fast(v_input_763_, v_pos_784_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 1, v___x_849_);
v___x_851_ = v___x_793_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_imports_783_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_873_, 2, v_error_x3f_786_);
lean_ctor_set_uint8(v_reuseFailAlloc_873_, sizeof(void*)*3, v_badModifier_785_);
lean_ctor_set_uint8(v_reuseFailAlloc_873_, sizeof(void*)*3 + 1, v_isModule_787_);
lean_ctor_set_uint8(v_reuseFailAlloc_873_, sizeof(void*)*3 + 2, v_isMeta_788_);
lean_ctor_set_uint8(v_reuseFailAlloc_873_, sizeof(void*)*3 + 3, v_isExported_789_);
lean_ctor_set_uint8(v_reuseFailAlloc_873_, sizeof(void*)*3 + 4, v_importAll_790_);
v___x_851_ = v_reuseFailAlloc_873_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v_s_852_; lean_object* v_imports_853_; lean_object* v_pos_854_; uint8_t v_badModifier_855_; lean_object* v_error_x3f_856_; uint8_t v_isModule_857_; uint8_t v_isMeta_858_; uint8_t v_isExported_859_; uint8_t v_importAll_860_; lean_object* v___x_861_; lean_object* v_module_862_; uint32_t v_curr_863_; uint32_t v___x_864_; uint8_t v___x_865_; 
v_s_852_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___y_848_, v_curr_795_, v_input_763_, v___x_851_);
v_imports_853_ = lean_ctor_get(v_s_852_, 0);
lean_inc_ref(v_imports_853_);
v_pos_854_ = lean_ctor_get(v_s_852_, 1);
lean_inc(v_pos_854_);
v_badModifier_855_ = lean_ctor_get_uint8(v_s_852_, sizeof(void*)*3);
v_error_x3f_856_ = lean_ctor_get(v_s_852_, 2);
lean_inc(v_error_x3f_856_);
v_isModule_857_ = lean_ctor_get_uint8(v_s_852_, sizeof(void*)*3 + 1);
v_isMeta_858_ = lean_ctor_get_uint8(v_s_852_, sizeof(void*)*3 + 2);
v_isExported_859_ = lean_ctor_get_uint8(v_s_852_, sizeof(void*)*3 + 3);
v_importAll_860_ = lean_ctor_get_uint8(v_s_852_, sizeof(void*)*3 + 4);
v___x_861_ = lean_string_utf8_extract(v_input_763_, v_pos_784_, v_pos_854_);
lean_dec(v_pos_784_);
v_module_862_ = l_Lean_Name_str___override(v_module_765_, v___x_861_);
v_curr_863_ = lean_string_utf8_get(v_input_763_, v_pos_854_);
v___x_864_ = 46;
v___x_865_ = lean_uint32_dec_eq(v_curr_863_, v___x_864_);
if (v___x_865_ == 0)
{
v___y_768_ = v_isMeta_858_;
v___y_769_ = v_pos_854_;
v___y_770_ = v_module_862_;
v___y_771_ = v_badModifier_855_;
v___y_772_ = v_importAll_860_;
v___y_773_ = v_isModule_857_;
v___y_774_ = v_imports_853_;
v___y_775_ = v_s_852_;
v___y_776_ = v_isExported_859_;
v___y_777_ = v_error_x3f_856_;
v___y_778_ = v___x_865_;
goto v___jp_767_;
}
else
{
lean_object* v_i_866_; uint8_t v___x_867_; 
v_i_866_ = lean_string_utf8_next(v_input_763_, v_pos_854_);
v___x_867_ = lean_string_utf8_at_end(v_input_763_, v_i_866_);
if (v___x_867_ == 0)
{
uint32_t v_curr_868_; uint32_t v___x_869_; uint8_t v___x_870_; 
v_curr_868_ = lean_string_utf8_get_fast(v_input_763_, v_i_866_);
lean_dec(v_i_866_);
v___x_869_ = 65;
v___x_870_ = lean_uint32_dec_le(v___x_869_, v_curr_868_);
if (v___x_870_ == 0)
{
v___y_830_ = v_isMeta_858_;
v___y_831_ = v_pos_854_;
v___y_832_ = v___x_865_;
v___y_833_ = v_module_862_;
v___y_834_ = v_badModifier_855_;
v___y_835_ = v_curr_868_;
v___y_836_ = v_importAll_860_;
v___y_837_ = v_s_852_;
v___y_838_ = v_imports_853_;
v___y_839_ = v_isModule_857_;
v___y_840_ = v_isExported_859_;
v___y_841_ = v_error_x3f_856_;
goto v___jp_829_;
}
else
{
uint32_t v___x_871_; uint8_t v___x_872_; 
v___x_871_ = 90;
v___x_872_ = lean_uint32_dec_le(v_curr_868_, v___x_871_);
if (v___x_872_ == 0)
{
v___y_830_ = v_isMeta_858_;
v___y_831_ = v_pos_854_;
v___y_832_ = v___x_865_;
v___y_833_ = v_module_862_;
v___y_834_ = v_badModifier_855_;
v___y_835_ = v_curr_868_;
v___y_836_ = v_importAll_860_;
v___y_837_ = v_s_852_;
v___y_838_ = v_imports_853_;
v___y_839_ = v_isModule_857_;
v___y_840_ = v_isExported_859_;
v___y_841_ = v_error_x3f_856_;
goto v___jp_829_;
}
else
{
v___y_768_ = v_isMeta_858_;
v___y_769_ = v_pos_854_;
v___y_770_ = v_module_862_;
v___y_771_ = v_badModifier_855_;
v___y_772_ = v_importAll_860_;
v___y_773_ = v_isModule_857_;
v___y_774_ = v_imports_853_;
v___y_775_ = v_s_852_;
v___y_776_ = v_isExported_859_;
v___y_777_ = v_error_x3f_856_;
v___y_778_ = v___x_865_;
goto v___jp_767_;
}
}
}
else
{
lean_dec(v_i_866_);
v___y_768_ = v_isMeta_858_;
v___y_769_ = v_pos_854_;
v___y_770_ = v_module_862_;
v___y_771_ = v_badModifier_855_;
v___y_772_ = v_importAll_860_;
v___y_773_ = v_isModule_857_;
v___y_774_ = v_imports_853_;
v___y_775_ = v_s_852_;
v___y_776_ = v_isExported_859_;
v___y_777_ = v_error_x3f_856_;
v___y_778_ = v___x_846_;
goto v___jp_767_;
}
}
}
}
v___jp_874_:
{
if (v___y_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; 
lean_del_object(v___x_793_);
lean_dec(v_error_x3f_786_);
lean_dec(v_module_765_);
lean_dec_ref(v_finalize_764_);
lean_dec_ref(v_input_763_);
v___x_876_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1);
v___x_877_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_877_, 0, v_imports_783_);
lean_ctor_set(v___x_877_, 1, v_pos_784_);
lean_ctor_set(v___x_877_, 2, v___x_876_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*3, v_badModifier_785_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*3 + 1, v_isModule_787_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*3 + 2, v_isMeta_788_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*3 + 3, v_isExported_789_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*3 + 4, v_importAll_790_);
return v___x_877_;
}
else
{
v___y_848_ = v___y_875_;
goto v___jp_847_;
}
}
v___jp_878_:
{
if (v___y_879_ == 0)
{
uint32_t v___x_880_; uint8_t v___x_881_; 
v___x_880_ = 95;
v___x_881_ = lean_uint32_dec_eq(v_curr_795_, v___x_880_);
if (v___x_881_ == 0)
{
uint8_t v___x_882_; 
v___x_882_ = l_Lean_isLetterLike(v_curr_795_);
v___y_875_ = v___x_882_;
goto v___jp_874_;
}
else
{
v___y_875_ = v___x_881_;
goto v___jp_874_;
}
}
else
{
v___y_848_ = v___y_879_;
goto v___jp_847_;
}
}
v___jp_883_:
{
uint32_t v___x_884_; uint8_t v___x_885_; 
v___x_884_ = 97;
v___x_885_ = lean_uint32_dec_le(v___x_884_, v_curr_795_);
if (v___x_885_ == 0)
{
v___y_879_ = v___x_885_;
goto v___jp_878_;
}
else
{
uint32_t v___x_886_; uint8_t v___x_887_; 
v___x_886_ = 122;
v___x_887_ = lean_uint32_dec_le(v_curr_795_, v___x_886_);
v___y_879_ = v___x_887_;
goto v___jp_878_;
}
}
}
}
else
{
lean_object* v___x_951_; 
lean_dec(v_module_765_);
lean_dec_ref(v_finalize_764_);
lean_dec_ref(v_input_763_);
v___x_951_ = l_Lean_ParseImports_State_mkEOIError(v_s_766_);
return v___x_951_;
}
v___jp_767_:
{
if (v___y_778_ == 0)
{
lean_object* v___x_779_; 
lean_dec(v___y_777_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_769_);
v___x_779_ = lean_apply_3(v_finalize_764_, v___y_770_, v_input_763_, v___y_775_);
return v___x_779_;
}
else
{
lean_object* v___x_780_; lean_object* v_s_781_; 
lean_dec_ref(v___y_775_);
v___x_780_ = lean_string_utf8_next(v_input_763_, v___y_769_);
lean_dec(v___y_769_);
v_s_781_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_781_, 0, v___y_774_);
lean_ctor_set(v_s_781_, 1, v___x_780_);
lean_ctor_set(v_s_781_, 2, v___y_777_);
lean_ctor_set_uint8(v_s_781_, sizeof(void*)*3, v___y_771_);
lean_ctor_set_uint8(v_s_781_, sizeof(void*)*3 + 1, v___y_773_);
lean_ctor_set_uint8(v_s_781_, sizeof(void*)*3 + 2, v___y_768_);
lean_ctor_set_uint8(v_s_781_, sizeof(void*)*3 + 3, v___y_776_);
lean_ctor_set_uint8(v_s_781_, sizeof(void*)*3 + 4, v___y_772_);
v_module_765_ = v___y_770_;
v_s_766_ = v_s_781_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object* v_module_952_, lean_object* v_input_953_, lean_object* v_s_954_){
_start:
{
uint8_t v_isMeta_955_; uint8_t v_isExported_956_; uint8_t v_importAll_957_; lean_object* v_imp_958_; lean_object* v___x_959_; lean_object* v_s_960_; lean_object* v_imports_961_; lean_object* v_pos_962_; uint8_t v_badModifier_963_; lean_object* v_error_x3f_964_; uint8_t v_isModule_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_977_; 
v_isMeta_955_ = lean_ctor_get_uint8(v_s_954_, sizeof(void*)*3 + 2);
v_isExported_956_ = lean_ctor_get_uint8(v_s_954_, sizeof(void*)*3 + 3);
v_importAll_957_ = lean_ctor_get_uint8(v_s_954_, sizeof(void*)*3 + 4);
v_imp_958_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_imp_958_, 0, v_module_952_);
lean_ctor_set_uint8(v_imp_958_, sizeof(void*)*1, v_importAll_957_);
lean_ctor_set_uint8(v_imp_958_, sizeof(void*)*1 + 1, v_isExported_956_);
lean_ctor_set_uint8(v_imp_958_, sizeof(void*)*1 + 2, v_isMeta_955_);
v___x_959_ = l_Lean_ParseImports_State_pushImport(v_imp_958_, v_s_954_);
v_s_960_ = l_Lean_ParseImports_whitespace(v_input_953_, v___x_959_);
v_imports_961_ = lean_ctor_get(v_s_960_, 0);
v_pos_962_ = lean_ctor_get(v_s_960_, 1);
v_badModifier_963_ = lean_ctor_get_uint8(v_s_960_, sizeof(void*)*3);
v_error_x3f_964_ = lean_ctor_get(v_s_960_, 2);
v_isModule_965_ = lean_ctor_get_uint8(v_s_960_, sizeof(void*)*3 + 1);
v_isSharedCheck_977_ = !lean_is_exclusive(v_s_960_);
if (v_isSharedCheck_977_ == 0)
{
v___x_967_ = v_s_960_;
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_error_x3f_964_);
lean_inc(v_pos_962_);
lean_inc(v_imports_961_);
lean_dec(v_s_960_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
uint8_t v___x_969_; 
v___x_969_ = 0;
if (v_isModule_965_ == 0)
{
uint8_t v___x_970_; lean_object* v___x_972_; 
v___x_970_ = 1;
if (v_isShared_968_ == 0)
{
v___x_972_ = v___x_967_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_imports_961_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_pos_962_);
lean_ctor_set(v_reuseFailAlloc_973_, 2, v_error_x3f_964_);
lean_ctor_set_uint8(v_reuseFailAlloc_973_, sizeof(void*)*3, v_badModifier_963_);
lean_ctor_set_uint8(v_reuseFailAlloc_973_, sizeof(void*)*3 + 1, v_isModule_965_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*3 + 2, v___x_969_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*3 + 3, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*3 + 4, v___x_969_);
return v___x_972_;
}
}
else
{
lean_object* v___x_975_; 
if (v_isShared_968_ == 0)
{
v___x_975_ = v___x_967_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_imports_961_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_pos_962_);
lean_ctor_set(v_reuseFailAlloc_976_, 2, v_error_x3f_964_);
lean_ctor_set_uint8(v_reuseFailAlloc_976_, sizeof(void*)*3, v_badModifier_963_);
lean_ctor_set_uint8(v_reuseFailAlloc_976_, sizeof(void*)*3 + 1, v_isModule_965_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*3 + 2, v___x_969_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*3 + 3, v___x_969_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*3 + 4, v___x_969_);
return v___x_975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object* v_module_978_, lean_object* v_input_979_, lean_object* v_s_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lean_ParseImports_moduleIdent___lam__0(v_module_978_, v_input_979_, v_s_980_);
lean_dec_ref(v_input_979_);
return v_res_981_;
}
}
static lean_object* _init_l_Lean_ParseImports_moduleIdent___closed__0(void){
_start:
{
lean_object* v_finalize_982_; 
v_finalize_982_ = lean_alloc_closure((void*)(l_Lean_ParseImports_moduleIdent___lam__0___boxed), 3, 0);
return v_finalize_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object* v_input_983_, lean_object* v_s_984_){
_start:
{
lean_object* v_finalize_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_finalize_985_ = lean_obj_once(&l_Lean_ParseImports_moduleIdent___closed__0, &l_Lean_ParseImports_moduleIdent___closed__0_once, _init_l_Lean_ParseImports_moduleIdent___closed__0);
v___x_986_ = lean_box(0);
v___x_987_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(v_input_983_, v_finalize_985_, v___x_986_, v_s_984_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object* v_p_988_, lean_object* v_input_989_, lean_object* v_s_990_){
_start:
{
lean_object* v_pos_991_; lean_object* v_s_992_; lean_object* v_error_x3f_993_; 
v_pos_991_ = lean_ctor_get(v_s_990_, 1);
lean_inc(v_pos_991_);
v_s_992_ = lean_apply_2(v_p_988_, v_input_989_, v_s_990_);
v_error_x3f_993_ = lean_ctor_get(v_s_992_, 2);
lean_inc(v_error_x3f_993_);
if (lean_obj_tag(v_error_x3f_993_) == 1)
{
lean_object* v_imports_994_; uint8_t v_badModifier_995_; uint8_t v_isModule_996_; uint8_t v_isMeta_997_; uint8_t v_isExported_998_; uint8_t v_importAll_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_imports_994_ = lean_ctor_get(v_s_992_, 0);
v_badModifier_995_ = lean_ctor_get_uint8(v_s_992_, sizeof(void*)*3);
v_isModule_996_ = lean_ctor_get_uint8(v_s_992_, sizeof(void*)*3 + 1);
v_isMeta_997_ = lean_ctor_get_uint8(v_s_992_, sizeof(void*)*3 + 2);
v_isExported_998_ = lean_ctor_get_uint8(v_s_992_, sizeof(void*)*3 + 3);
v_importAll_999_ = lean_ctor_get_uint8(v_s_992_, sizeof(void*)*3 + 4);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_s_992_);
if (v_isSharedCheck_1006_ == 0)
{
lean_object* v_unused_1007_; lean_object* v_unused_1008_; 
v_unused_1007_ = lean_ctor_get(v_s_992_, 2);
lean_dec(v_unused_1007_);
v_unused_1008_ = lean_ctor_get(v_s_992_, 1);
lean_dec(v_unused_1008_);
v___x_1001_ = v_s_992_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_imports_994_);
lean_dec(v_s_992_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 1, v_pos_991_);
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_imports_994_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_pos_991_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_error_x3f_993_);
lean_ctor_set_uint8(v_reuseFailAlloc_1005_, sizeof(void*)*3, v_badModifier_995_);
lean_ctor_set_uint8(v_reuseFailAlloc_1005_, sizeof(void*)*3 + 1, v_isModule_996_);
lean_ctor_set_uint8(v_reuseFailAlloc_1005_, sizeof(void*)*3 + 2, v_isMeta_997_);
lean_ctor_set_uint8(v_reuseFailAlloc_1005_, sizeof(void*)*3 + 3, v_isExported_998_);
lean_ctor_set_uint8(v_reuseFailAlloc_1005_, sizeof(void*)*3 + 4, v_importAll_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
lean_dec(v_error_x3f_993_);
lean_dec(v_pos_991_);
return v_s_992_;
}
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___closed__0(void){
_start:
{
lean_object* v_err_1009_; 
v_err_1009_ = lean_mk_string_unchecked("cannot use 'public', 'meta', or 'all' without 'module'", 54, 54);
return v_err_1009_;
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___closed__1(void){
_start:
{
lean_object* v_err_1010_; lean_object* v___x_1011_; 
v_err_1010_ = lean_obj_once(&l_Lean_ParseImports_manyImports___closed__0, &l_Lean_ParseImports_manyImports___closed__0_once, _init_l_Lean_ParseImports_manyImports___closed__0);
v___x_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1011_, 0, v_err_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object* v_p_1012_, lean_object* v_input_1013_, lean_object* v_s_1014_){
_start:
{
lean_object* v_pos_1015_; lean_object* v_s_1016_; lean_object* v_error_x3f_1017_; 
v_pos_1015_ = lean_ctor_get(v_s_1014_, 1);
lean_inc(v_pos_1015_);
lean_inc_ref(v_p_1012_);
lean_inc_ref(v_input_1013_);
v_s_1016_ = lean_apply_2(v_p_1012_, v_input_1013_, v_s_1014_);
v_error_x3f_1017_ = lean_ctor_get(v_s_1016_, 2);
lean_inc(v_error_x3f_1017_);
if (lean_obj_tag(v_error_x3f_1017_) == 1)
{
lean_object* v_imports_1018_; lean_object* v_pos_1019_; uint8_t v_isModule_1020_; uint8_t v_isMeta_1021_; uint8_t v_isExported_1022_; uint8_t v_importAll_1023_; uint8_t v___x_1024_; 
lean_dec_ref(v_error_x3f_1017_);
lean_dec_ref(v_input_1013_);
lean_dec_ref(v_p_1012_);
v_imports_1018_ = lean_ctor_get(v_s_1016_, 0);
lean_inc_ref(v_imports_1018_);
v_pos_1019_ = lean_ctor_get(v_s_1016_, 1);
lean_inc(v_pos_1019_);
v_isModule_1020_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 1);
v_isMeta_1021_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 2);
v_isExported_1022_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 3);
v_importAll_1023_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 4);
v___x_1024_ = lean_nat_dec_eq(v_pos_1019_, v_pos_1015_);
lean_dec(v_pos_1015_);
if (v___x_1024_ == 0)
{
lean_dec(v_pos_1019_);
lean_dec_ref(v_imports_1018_);
return v_s_1016_;
}
else
{
lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1033_; 
v_isSharedCheck_1033_ = !lean_is_exclusive(v_s_1016_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; lean_object* v_unused_1035_; lean_object* v_unused_1036_; 
v_unused_1034_ = lean_ctor_get(v_s_1016_, 2);
lean_dec(v_unused_1034_);
v_unused_1035_ = lean_ctor_get(v_s_1016_, 1);
lean_dec(v_unused_1035_);
v_unused_1036_ = lean_ctor_get(v_s_1016_, 0);
lean_dec(v_unused_1036_);
v___x_1026_ = v_s_1016_;
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
else
{
lean_dec(v_s_1016_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = 0;
v___x_1029_ = lean_box(0);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 2, v___x_1029_);
v___x_1031_ = v___x_1026_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_imports_1018_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v_pos_1019_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v___x_1029_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*3 + 1, v_isModule_1020_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*3 + 2, v_isMeta_1021_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*3 + 3, v_isExported_1022_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*3 + 4, v_importAll_1023_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_ctor_set_uint8(v___x_1031_, sizeof(void*)*3, v___x_1028_);
return v___x_1031_;
}
}
}
}
else
{
uint8_t v_badModifier_1037_; 
lean_dec(v_error_x3f_1017_);
v_badModifier_1037_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3);
if (v_badModifier_1037_ == 0)
{
lean_dec(v_pos_1015_);
v_s_1014_ = v_s_1016_;
goto _start;
}
else
{
lean_object* v_imports_1039_; uint8_t v_isModule_1040_; uint8_t v_isMeta_1041_; uint8_t v_isExported_1042_; uint8_t v_importAll_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1052_; 
lean_dec_ref(v_input_1013_);
lean_dec_ref(v_p_1012_);
v_imports_1039_ = lean_ctor_get(v_s_1016_, 0);
v_isModule_1040_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 1);
v_isMeta_1041_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 2);
v_isExported_1042_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 3);
v_importAll_1043_ = lean_ctor_get_uint8(v_s_1016_, sizeof(void*)*3 + 4);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_s_1016_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; lean_object* v_unused_1054_; 
v_unused_1053_ = lean_ctor_get(v_s_1016_, 2);
lean_dec(v_unused_1053_);
v_unused_1054_ = lean_ctor_get(v_s_1016_, 1);
lean_dec(v_unused_1054_);
v___x_1045_ = v_s_1016_;
v_isShared_1046_ = v_isSharedCheck_1052_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_imports_1039_);
lean_dec(v_s_1016_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1052_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
uint8_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1047_ = 0;
v___x_1048_ = lean_obj_once(&l_Lean_ParseImports_manyImports___closed__1, &l_Lean_ParseImports_manyImports___closed__1_once, _init_l_Lean_ParseImports_manyImports___closed__1);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 2, v___x_1048_);
lean_ctor_set(v___x_1045_, 1, v_pos_1015_);
v___x_1050_ = v___x_1045_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_imports_1039_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_pos_1015_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v___x_1048_);
lean_ctor_set_uint8(v_reuseFailAlloc_1051_, sizeof(void*)*3 + 1, v_isModule_1040_);
lean_ctor_set_uint8(v_reuseFailAlloc_1051_, sizeof(void*)*3 + 2, v_isMeta_1041_);
lean_ctor_set_uint8(v_reuseFailAlloc_1051_, sizeof(void*)*3 + 3, v_isExported_1042_);
lean_ctor_set_uint8(v_reuseFailAlloc_1051_, sizeof(void*)*3 + 4, v_importAll_1043_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_ctor_set_uint8(v___x_1050_, sizeof(void*)*3, v___x_1047_);
return v___x_1050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t v_isModule_1055_, lean_object* v_s_1056_){
_start:
{
if (v_isModule_1055_ == 0)
{
lean_object* v_imports_1057_; lean_object* v_pos_1058_; uint8_t v_badModifier_1059_; lean_object* v_error_x3f_1060_; uint8_t v_isMeta_1061_; uint8_t v_importAll_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1070_; 
v_imports_1057_ = lean_ctor_get(v_s_1056_, 0);
v_pos_1058_ = lean_ctor_get(v_s_1056_, 1);
v_badModifier_1059_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3);
v_error_x3f_1060_ = lean_ctor_get(v_s_1056_, 2);
v_isMeta_1061_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 2);
v_importAll_1062_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 4);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1064_ = v_s_1056_;
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_error_x3f_1060_);
lean_inc(v_pos_1058_);
lean_inc(v_imports_1057_);
lean_dec(v_s_1056_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
uint8_t v___x_1066_; lean_object* v___x_1068_; 
v___x_1066_ = 1;
if (v_isShared_1065_ == 0)
{
v___x_1068_ = v___x_1064_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_imports_1057_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_pos_1058_);
lean_ctor_set(v_reuseFailAlloc_1069_, 2, v_error_x3f_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1069_, sizeof(void*)*3, v_badModifier_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1069_, sizeof(void*)*3 + 2, v_isMeta_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1069_, sizeof(void*)*3 + 4, v_importAll_1062_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_ctor_set_uint8(v___x_1068_, sizeof(void*)*3 + 1, v_isModule_1055_);
lean_ctor_set_uint8(v___x_1068_, sizeof(void*)*3 + 3, v___x_1066_);
return v___x_1068_;
}
}
}
else
{
lean_object* v_imports_1071_; lean_object* v_pos_1072_; uint8_t v_badModifier_1073_; lean_object* v_error_x3f_1074_; uint8_t v_isMeta_1075_; uint8_t v_importAll_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1084_; 
v_imports_1071_ = lean_ctor_get(v_s_1056_, 0);
v_pos_1072_ = lean_ctor_get(v_s_1056_, 1);
v_badModifier_1073_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3);
v_error_x3f_1074_ = lean_ctor_get(v_s_1056_, 2);
v_isMeta_1075_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 2);
v_importAll_1076_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 4);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1078_ = v_s_1056_;
v_isShared_1079_ = v_isSharedCheck_1084_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_error_x3f_1074_);
lean_inc(v_pos_1072_);
lean_inc(v_imports_1071_);
lean_dec(v_s_1056_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1084_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
uint8_t v___x_1080_; lean_object* v___x_1082_; 
v___x_1080_ = 0;
if (v_isShared_1079_ == 0)
{
v___x_1082_ = v___x_1078_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_imports_1071_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_pos_1072_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_error_x3f_1074_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*3, v_badModifier_1073_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*3 + 2, v_isMeta_1075_);
lean_ctor_set_uint8(v_reuseFailAlloc_1083_, sizeof(void*)*3 + 4, v_importAll_1076_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
lean_ctor_set_uint8(v___x_1082_, sizeof(void*)*3 + 1, v_isModule_1055_);
lean_ctor_set_uint8(v___x_1082_, sizeof(void*)*3 + 3, v___x_1080_);
return v___x_1082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object* v_isModule_1085_, lean_object* v_s_1086_){
_start:
{
uint8_t v_isModule_boxed_1087_; lean_object* v_res_1088_; 
v_isModule_boxed_1087_ = lean_unbox(v_isModule_1085_);
v_res_1088_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_boxed_1087_, v_s_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t v_isModule_1089_, lean_object* v_x_1090_, lean_object* v_s_1091_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_1089_, v_s_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object* v_isModule_1093_, lean_object* v_x_1094_, lean_object* v_s_1095_){
_start:
{
uint8_t v_isModule_boxed_1096_; lean_object* v_res_1097_; 
v_isModule_boxed_1096_ = lean_unbox(v_isModule_1093_);
v_res_1097_ = l_Lean_ParseImports_setIsModule(v_isModule_boxed_1096_, v_x_1094_, v_s_1095_);
lean_dec_ref(v_x_1094_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object* v_s_1098_){
_start:
{
lean_object* v_imports_1099_; lean_object* v_pos_1100_; uint8_t v_badModifier_1101_; lean_object* v_error_x3f_1102_; uint8_t v_isModule_1103_; uint8_t v_isMeta_1104_; uint8_t v_isExported_1105_; uint8_t v_importAll_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1117_; 
v_imports_1099_ = lean_ctor_get(v_s_1098_, 0);
v_pos_1100_ = lean_ctor_get(v_s_1098_, 1);
v_badModifier_1101_ = lean_ctor_get_uint8(v_s_1098_, sizeof(void*)*3);
v_error_x3f_1102_ = lean_ctor_get(v_s_1098_, 2);
v_isModule_1103_ = lean_ctor_get_uint8(v_s_1098_, sizeof(void*)*3 + 1);
v_isMeta_1104_ = lean_ctor_get_uint8(v_s_1098_, sizeof(void*)*3 + 2);
v_isExported_1105_ = lean_ctor_get_uint8(v_s_1098_, sizeof(void*)*3 + 3);
v_importAll_1106_ = lean_ctor_get_uint8(v_s_1098_, sizeof(void*)*3 + 4);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_s_1098_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1108_ = v_s_1098_;
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_error_x3f_1102_);
lean_inc(v_pos_1100_);
lean_inc(v_imports_1099_);
lean_dec(v_s_1098_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
uint8_t v___x_1110_; 
v___x_1110_ = 1;
if (v_isModule_1103_ == 0)
{
lean_object* v___x_1112_; 
if (v_isShared_1109_ == 0)
{
v___x_1112_ = v___x_1108_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_imports_1099_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_pos_1100_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_error_x3f_1102_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*3 + 1, v_isModule_1103_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*3 + 2, v_isMeta_1104_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*3 + 3, v_isExported_1105_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*3 + 4, v_importAll_1106_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_ctor_set_uint8(v___x_1112_, sizeof(void*)*3, v___x_1110_);
return v___x_1112_;
}
}
else
{
lean_object* v___x_1115_; 
if (v_isShared_1109_ == 0)
{
v___x_1115_ = v___x_1108_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_imports_1099_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_pos_1100_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_error_x3f_1102_);
lean_ctor_set_uint8(v_reuseFailAlloc_1116_, sizeof(void*)*3, v_badModifier_1101_);
lean_ctor_set_uint8(v_reuseFailAlloc_1116_, sizeof(void*)*3 + 1, v_isModule_1103_);
lean_ctor_set_uint8(v_reuseFailAlloc_1116_, sizeof(void*)*3 + 3, v_isExported_1105_);
lean_ctor_set_uint8(v_reuseFailAlloc_1116_, sizeof(void*)*3 + 4, v_importAll_1106_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_ctor_set_uint8(v___x_1115_, sizeof(void*)*3 + 2, v___x_1110_);
return v___x_1115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object* v_x_1118_, lean_object* v_s_1119_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_Lean_ParseImports_setMeta___redArg(v_s_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object* v_x_1121_, lean_object* v_s_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_ParseImports_setMeta(v_x_1121_, v_s_1122_);
lean_dec_ref(v_x_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object* v_s_1124_){
_start:
{
lean_object* v_imports_1125_; lean_object* v_pos_1126_; uint8_t v_badModifier_1127_; lean_object* v_error_x3f_1128_; uint8_t v_isModule_1129_; uint8_t v_isMeta_1130_; uint8_t v_isExported_1131_; uint8_t v_importAll_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1143_; 
v_imports_1125_ = lean_ctor_get(v_s_1124_, 0);
v_pos_1126_ = lean_ctor_get(v_s_1124_, 1);
v_badModifier_1127_ = lean_ctor_get_uint8(v_s_1124_, sizeof(void*)*3);
v_error_x3f_1128_ = lean_ctor_get(v_s_1124_, 2);
v_isModule_1129_ = lean_ctor_get_uint8(v_s_1124_, sizeof(void*)*3 + 1);
v_isMeta_1130_ = lean_ctor_get_uint8(v_s_1124_, sizeof(void*)*3 + 2);
v_isExported_1131_ = lean_ctor_get_uint8(v_s_1124_, sizeof(void*)*3 + 3);
v_importAll_1132_ = lean_ctor_get_uint8(v_s_1124_, sizeof(void*)*3 + 4);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_s_1124_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1134_ = v_s_1124_;
v_isShared_1135_ = v_isSharedCheck_1143_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_error_x3f_1128_);
lean_inc(v_pos_1126_);
lean_inc(v_imports_1125_);
lean_dec(v_s_1124_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1143_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
uint8_t v___x_1136_; 
v___x_1136_ = 1;
if (v_isModule_1129_ == 0)
{
lean_object* v___x_1138_; 
if (v_isShared_1135_ == 0)
{
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_imports_1125_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_pos_1126_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v_error_x3f_1128_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*3 + 1, v_isModule_1129_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*3 + 2, v_isMeta_1130_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*3 + 3, v_isExported_1131_);
lean_ctor_set_uint8(v_reuseFailAlloc_1139_, sizeof(void*)*3 + 4, v_importAll_1132_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*3, v___x_1136_);
return v___x_1138_;
}
}
else
{
lean_object* v___x_1141_; 
if (v_isShared_1135_ == 0)
{
v___x_1141_ = v___x_1134_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_imports_1125_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_pos_1126_);
lean_ctor_set(v_reuseFailAlloc_1142_, 2, v_error_x3f_1128_);
lean_ctor_set_uint8(v_reuseFailAlloc_1142_, sizeof(void*)*3, v_badModifier_1127_);
lean_ctor_set_uint8(v_reuseFailAlloc_1142_, sizeof(void*)*3 + 1, v_isModule_1129_);
lean_ctor_set_uint8(v_reuseFailAlloc_1142_, sizeof(void*)*3 + 2, v_isMeta_1130_);
lean_ctor_set_uint8(v_reuseFailAlloc_1142_, sizeof(void*)*3 + 4, v_importAll_1132_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*3 + 3, v___x_1136_);
return v___x_1141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object* v_x_1144_, lean_object* v_s_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_ParseImports_setExported___redArg(v_s_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object* v_x_1147_, lean_object* v_s_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_ParseImports_setExported(v_x_1147_, v_s_1148_);
lean_dec_ref(v_x_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object* v_s_1150_){
_start:
{
lean_object* v_imports_1151_; lean_object* v_pos_1152_; uint8_t v_badModifier_1153_; lean_object* v_error_x3f_1154_; uint8_t v_isModule_1155_; uint8_t v_isMeta_1156_; uint8_t v_isExported_1157_; uint8_t v_importAll_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1169_; 
v_imports_1151_ = lean_ctor_get(v_s_1150_, 0);
v_pos_1152_ = lean_ctor_get(v_s_1150_, 1);
v_badModifier_1153_ = lean_ctor_get_uint8(v_s_1150_, sizeof(void*)*3);
v_error_x3f_1154_ = lean_ctor_get(v_s_1150_, 2);
v_isModule_1155_ = lean_ctor_get_uint8(v_s_1150_, sizeof(void*)*3 + 1);
v_isMeta_1156_ = lean_ctor_get_uint8(v_s_1150_, sizeof(void*)*3 + 2);
v_isExported_1157_ = lean_ctor_get_uint8(v_s_1150_, sizeof(void*)*3 + 3);
v_importAll_1158_ = lean_ctor_get_uint8(v_s_1150_, sizeof(void*)*3 + 4);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_s_1150_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1160_ = v_s_1150_;
v_isShared_1161_ = v_isSharedCheck_1169_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_error_x3f_1154_);
lean_inc(v_pos_1152_);
lean_inc(v_imports_1151_);
lean_dec(v_s_1150_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1169_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
uint8_t v___x_1162_; 
v___x_1162_ = 1;
if (v_isModule_1155_ == 0)
{
lean_object* v___x_1164_; 
if (v_isShared_1161_ == 0)
{
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_imports_1151_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_pos_1152_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_error_x3f_1154_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 1, v_isModule_1155_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 2, v_isMeta_1156_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 3, v_isExported_1157_);
lean_ctor_set_uint8(v_reuseFailAlloc_1165_, sizeof(void*)*3 + 4, v_importAll_1158_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3, v___x_1162_);
return v___x_1164_;
}
}
else
{
lean_object* v___x_1167_; 
if (v_isShared_1161_ == 0)
{
v___x_1167_ = v___x_1160_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_imports_1151_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_pos_1152_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v_error_x3f_1154_);
lean_ctor_set_uint8(v_reuseFailAlloc_1168_, sizeof(void*)*3, v_badModifier_1153_);
lean_ctor_set_uint8(v_reuseFailAlloc_1168_, sizeof(void*)*3 + 1, v_isModule_1155_);
lean_ctor_set_uint8(v_reuseFailAlloc_1168_, sizeof(void*)*3 + 2, v_isMeta_1156_);
lean_ctor_set_uint8(v_reuseFailAlloc_1168_, sizeof(void*)*3 + 3, v_isExported_1157_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*3 + 4, v___x_1162_);
return v___x_1167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object* v_x_1170_, lean_object* v_s_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lean_ParseImports_setImportAll___redArg(v_s_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object* v_x_1173_, lean_object* v_s_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lean_ParseImports_setImportAll(v_x_1173_, v_s_1174_);
lean_dec_ref(v_x_1173_);
return v_res_1175_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_mk_string_unchecked("Init", 4, 4);
return v___x_1176_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0);
v___x_1178_ = l_Lean_Name_mkStr1(v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object* v_k_1179_, lean_object* v_input_1180_, lean_object* v_s_1181_, lean_object* v_i_1182_, lean_object* v_j_1183_){
_start:
{
uint8_t v___x_1184_; 
v___x_1184_ = lean_string_utf8_at_end(v_k_1179_, v_i_1182_);
if (v___x_1184_ == 0)
{
uint8_t v___x_1185_; lean_object* v_s_1187_; uint8_t v___x_1193_; 
v___x_1185_ = 1;
v___x_1193_ = lean_string_utf8_at_end(v_input_1180_, v_j_1183_);
if (v___x_1193_ == 0)
{
uint32_t v_curr_u2081_1194_; uint32_t v_curr_u2082_1195_; uint8_t v___x_1196_; 
v_curr_u2081_1194_ = lean_string_utf8_get_fast(v_k_1179_, v_i_1182_);
v_curr_u2082_1195_ = lean_string_utf8_get_fast(v_input_1180_, v_j_1183_);
v___x_1196_ = lean_uint32_dec_eq(v_curr_u2081_1194_, v_curr_u2082_1195_);
if (v___x_1196_ == 0)
{
lean_dec(v_j_1183_);
lean_dec(v_i_1182_);
v_s_1187_ = v_s_1181_;
goto v___jp_1186_;
}
else
{
if (v___x_1193_ == 0)
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_string_utf8_next_fast(v_k_1179_, v_i_1182_);
lean_dec(v_i_1182_);
v___x_1198_ = lean_string_utf8_next_fast(v_input_1180_, v_j_1183_);
lean_dec(v_j_1183_);
v_i_1182_ = v___x_1197_;
v_j_1183_ = v___x_1198_;
goto _start;
}
else
{
lean_dec(v_j_1183_);
lean_dec(v_i_1182_);
v_s_1187_ = v_s_1181_;
goto v___jp_1186_;
}
}
}
else
{
lean_dec(v_j_1183_);
lean_dec(v_i_1182_);
v_s_1187_ = v_s_1181_;
goto v___jp_1186_;
}
v___jp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1188_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1);
v___x_1189_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*1, v___x_1184_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*1 + 1, v___x_1185_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*1 + 2, v___x_1185_);
v___x_1190_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set_uint8(v___x_1190_, sizeof(void*)*1, v___x_1184_);
lean_ctor_set_uint8(v___x_1190_, sizeof(void*)*1 + 1, v___x_1185_);
lean_ctor_set_uint8(v___x_1190_, sizeof(void*)*1 + 2, v___x_1184_);
v___x_1191_ = l_Lean_ParseImports_State_pushImport(v___x_1190_, v_s_1187_);
v___x_1192_ = l_Lean_ParseImports_State_pushImport(v___x_1189_, v___x_1191_);
return v___x_1192_;
}
}
else
{
lean_object* v_imports_1200_; uint8_t v_badModifier_1201_; lean_object* v_error_x3f_1202_; uint8_t v_isModule_1203_; uint8_t v_isMeta_1204_; uint8_t v_isExported_1205_; uint8_t v_importAll_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1214_; 
lean_dec(v_i_1182_);
v_imports_1200_ = lean_ctor_get(v_s_1181_, 0);
v_badModifier_1201_ = lean_ctor_get_uint8(v_s_1181_, sizeof(void*)*3);
v_error_x3f_1202_ = lean_ctor_get(v_s_1181_, 2);
v_isModule_1203_ = lean_ctor_get_uint8(v_s_1181_, sizeof(void*)*3 + 1);
v_isMeta_1204_ = lean_ctor_get_uint8(v_s_1181_, sizeof(void*)*3 + 2);
v_isExported_1205_ = lean_ctor_get_uint8(v_s_1181_, sizeof(void*)*3 + 3);
v_importAll_1206_ = lean_ctor_get_uint8(v_s_1181_, sizeof(void*)*3 + 4);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_s_1181_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; 
v_unused_1215_ = lean_ctor_get(v_s_1181_, 1);
lean_dec(v_unused_1215_);
v___x_1208_ = v_s_1181_;
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_error_x3f_1202_);
lean_inc(v_imports_1200_);
lean_dec(v_s_1181_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 1, v_j_1183_);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_imports_1200_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_j_1183_);
lean_ctor_set(v_reuseFailAlloc_1213_, 2, v_error_x3f_1202_);
lean_ctor_set_uint8(v_reuseFailAlloc_1213_, sizeof(void*)*3, v_badModifier_1201_);
lean_ctor_set_uint8(v_reuseFailAlloc_1213_, sizeof(void*)*3 + 1, v_isModule_1203_);
lean_ctor_set_uint8(v_reuseFailAlloc_1213_, sizeof(void*)*3 + 2, v_isMeta_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1213_, sizeof(void*)*3 + 3, v_isExported_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1213_, sizeof(void*)*3 + 4, v_importAll_1206_);
v___x_1211_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_ParseImports_whitespace(v_input_1180_, v___x_1211_);
return v___x_1212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object* v_k_1216_, lean_object* v_input_1217_, lean_object* v_s_1218_, lean_object* v_i_1219_, lean_object* v_j_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v_k_1216_, v_input_1217_, v_s_1218_, v_i_1219_, v_j_1220_);
lean_dec_ref(v_input_1217_);
lean_dec_ref(v_k_1216_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object* v_k_1222_, lean_object* v_input_1223_, lean_object* v_s_1224_, lean_object* v_i_1225_, lean_object* v_j_1226_){
_start:
{
uint8_t v___x_1227_; 
v___x_1227_ = lean_string_utf8_at_end(v_k_1222_, v_i_1225_);
if (v___x_1227_ == 0)
{
uint8_t v___x_1228_; 
v___x_1228_ = lean_string_utf8_at_end(v_input_1223_, v_j_1226_);
if (v___x_1228_ == 0)
{
uint32_t v_curr_u2081_1229_; uint32_t v_curr_u2082_1230_; uint8_t v___x_1231_; 
v_curr_u2081_1229_ = lean_string_utf8_get_fast(v_k_1222_, v_i_1225_);
v_curr_u2082_1230_ = lean_string_utf8_get_fast(v_input_1223_, v_j_1226_);
v___x_1231_ = lean_uint32_dec_eq(v_curr_u2081_1229_, v_curr_u2082_1230_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; 
lean_dec(v_j_1226_);
lean_dec(v_i_1225_);
v___x_1232_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1227_, v_s_1224_);
return v___x_1232_;
}
else
{
if (v___x_1228_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_string_utf8_next_fast(v_k_1222_, v_i_1225_);
lean_dec(v_i_1225_);
v___x_1234_ = lean_string_utf8_next_fast(v_input_1223_, v_j_1226_);
lean_dec(v_j_1226_);
v_i_1225_ = v___x_1233_;
v_j_1226_ = v___x_1234_;
goto _start;
}
else
{
lean_object* v___x_1236_; 
lean_dec(v_j_1226_);
lean_dec(v_i_1225_);
v___x_1236_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1227_, v_s_1224_);
return v___x_1236_;
}
}
}
else
{
lean_object* v___x_1237_; 
lean_dec(v_j_1226_);
lean_dec(v_i_1225_);
v___x_1237_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1227_, v_s_1224_);
return v___x_1237_;
}
}
else
{
lean_object* v_imports_1238_; uint8_t v_badModifier_1239_; lean_object* v_error_x3f_1240_; uint8_t v_isModule_1241_; uint8_t v_isMeta_1242_; uint8_t v_isExported_1243_; uint8_t v_importAll_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1253_; 
lean_dec(v_i_1225_);
v_imports_1238_ = lean_ctor_get(v_s_1224_, 0);
v_badModifier_1239_ = lean_ctor_get_uint8(v_s_1224_, sizeof(void*)*3);
v_error_x3f_1240_ = lean_ctor_get(v_s_1224_, 2);
v_isModule_1241_ = lean_ctor_get_uint8(v_s_1224_, sizeof(void*)*3 + 1);
v_isMeta_1242_ = lean_ctor_get_uint8(v_s_1224_, sizeof(void*)*3 + 2);
v_isExported_1243_ = lean_ctor_get_uint8(v_s_1224_, sizeof(void*)*3 + 3);
v_importAll_1244_ = lean_ctor_get_uint8(v_s_1224_, sizeof(void*)*3 + 4);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_s_1224_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v_s_1224_, 1);
lean_dec(v_unused_1254_);
v___x_1246_ = v_s_1224_;
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_error_x3f_1240_);
lean_inc(v_imports_1238_);
lean_dec(v_s_1224_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 1, v_j_1226_);
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_imports_1238_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_j_1226_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_error_x3f_1240_);
lean_ctor_set_uint8(v_reuseFailAlloc_1252_, sizeof(void*)*3, v_badModifier_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1252_, sizeof(void*)*3 + 1, v_isModule_1241_);
lean_ctor_set_uint8(v_reuseFailAlloc_1252_, sizeof(void*)*3 + 2, v_isMeta_1242_);
lean_ctor_set_uint8(v_reuseFailAlloc_1252_, sizeof(void*)*3 + 3, v_isExported_1243_);
lean_ctor_set_uint8(v_reuseFailAlloc_1252_, sizeof(void*)*3 + 4, v_importAll_1244_);
v___x_1249_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = l_Lean_ParseImports_whitespace(v_input_1223_, v___x_1249_);
v___x_1251_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1227_, v___x_1250_);
return v___x_1251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object* v_k_1255_, lean_object* v_input_1256_, lean_object* v_s_1257_, lean_object* v_i_1258_, lean_object* v_j_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v_k_1255_, v_input_1256_, v_s_1257_, v_i_1258_, v_j_1259_);
lean_dec_ref(v_input_1256_);
lean_dec_ref(v_k_1255_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object* v_k_1261_, lean_object* v_input_1262_, lean_object* v_s_1263_, lean_object* v_i_1264_, lean_object* v_j_1265_){
_start:
{
uint8_t v___x_1266_; 
v___x_1266_ = lean_string_utf8_at_end(v_k_1261_, v_i_1264_);
if (v___x_1266_ == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_string_utf8_at_end(v_input_1262_, v_j_1265_);
if (v___x_1267_ == 0)
{
uint32_t v_curr_u2081_1268_; uint32_t v_curr_u2082_1269_; uint8_t v___x_1270_; 
v_curr_u2081_1268_ = lean_string_utf8_get_fast(v_k_1261_, v_i_1264_);
v_curr_u2082_1269_ = lean_string_utf8_get_fast(v_input_1262_, v_j_1265_);
v___x_1270_ = lean_uint32_dec_eq(v_curr_u2081_1268_, v_curr_u2082_1269_);
if (v___x_1270_ == 0)
{
lean_dec(v_j_1265_);
lean_dec(v_i_1264_);
return v_s_1263_;
}
else
{
if (v___x_1267_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_string_utf8_next_fast(v_k_1261_, v_i_1264_);
lean_dec(v_i_1264_);
v___x_1272_ = lean_string_utf8_next_fast(v_input_1262_, v_j_1265_);
lean_dec(v_j_1265_);
v_i_1264_ = v___x_1271_;
v_j_1265_ = v___x_1272_;
goto _start;
}
else
{
lean_dec(v_j_1265_);
lean_dec(v_i_1264_);
return v_s_1263_;
}
}
}
else
{
lean_dec(v_j_1265_);
lean_dec(v_i_1264_);
return v_s_1263_;
}
}
else
{
lean_object* v_imports_1274_; uint8_t v_badModifier_1275_; lean_object* v_error_x3f_1276_; uint8_t v_isModule_1277_; uint8_t v_isMeta_1278_; uint8_t v_isExported_1279_; uint8_t v_importAll_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1289_; 
lean_dec(v_i_1264_);
v_imports_1274_ = lean_ctor_get(v_s_1263_, 0);
v_badModifier_1275_ = lean_ctor_get_uint8(v_s_1263_, sizeof(void*)*3);
v_error_x3f_1276_ = lean_ctor_get(v_s_1263_, 2);
v_isModule_1277_ = lean_ctor_get_uint8(v_s_1263_, sizeof(void*)*3 + 1);
v_isMeta_1278_ = lean_ctor_get_uint8(v_s_1263_, sizeof(void*)*3 + 2);
v_isExported_1279_ = lean_ctor_get_uint8(v_s_1263_, sizeof(void*)*3 + 3);
v_importAll_1280_ = lean_ctor_get_uint8(v_s_1263_, sizeof(void*)*3 + 4);
v_isSharedCheck_1289_ = !lean_is_exclusive(v_s_1263_);
if (v_isSharedCheck_1289_ == 0)
{
lean_object* v_unused_1290_; 
v_unused_1290_ = lean_ctor_get(v_s_1263_, 1);
lean_dec(v_unused_1290_);
v___x_1282_ = v_s_1263_;
v_isShared_1283_ = v_isSharedCheck_1289_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_error_x3f_1276_);
lean_inc(v_imports_1274_);
lean_dec(v_s_1263_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1289_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 1, v_j_1265_);
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_imports_1274_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v_j_1265_);
lean_ctor_set(v_reuseFailAlloc_1288_, 2, v_error_x3f_1276_);
lean_ctor_set_uint8(v_reuseFailAlloc_1288_, sizeof(void*)*3, v_badModifier_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1288_, sizeof(void*)*3 + 1, v_isModule_1277_);
lean_ctor_set_uint8(v_reuseFailAlloc_1288_, sizeof(void*)*3 + 2, v_isMeta_1278_);
lean_ctor_set_uint8(v_reuseFailAlloc_1288_, sizeof(void*)*3 + 3, v_isExported_1279_);
lean_ctor_set_uint8(v_reuseFailAlloc_1288_, sizeof(void*)*3 + 4, v_importAll_1280_);
v___x_1285_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = l_Lean_ParseImports_whitespace(v_input_1262_, v___x_1285_);
v___x_1287_ = l_Lean_ParseImports_setExported___redArg(v___x_1286_);
return v___x_1287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object* v_k_1291_, lean_object* v_input_1292_, lean_object* v_s_1293_, lean_object* v_i_1294_, lean_object* v_j_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v_k_1291_, v_input_1292_, v_s_1293_, v_i_1294_, v_j_1295_);
lean_dec_ref(v_input_1292_);
lean_dec_ref(v_k_1291_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object* v_k_1297_, lean_object* v_input_1298_, lean_object* v_s_1299_, lean_object* v_i_1300_, lean_object* v_j_1301_){
_start:
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_string_utf8_at_end(v_k_1297_, v_i_1300_);
if (v___x_1302_ == 0)
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_string_utf8_at_end(v_input_1298_, v_j_1301_);
if (v___x_1303_ == 0)
{
uint32_t v_curr_u2081_1304_; uint32_t v_curr_u2082_1305_; uint8_t v___x_1306_; 
v_curr_u2081_1304_ = lean_string_utf8_get_fast(v_k_1297_, v_i_1300_);
v_curr_u2082_1305_ = lean_string_utf8_get_fast(v_input_1298_, v_j_1301_);
v___x_1306_ = lean_uint32_dec_eq(v_curr_u2081_1304_, v_curr_u2082_1305_);
if (v___x_1306_ == 0)
{
lean_dec(v_j_1301_);
lean_dec(v_i_1300_);
return v_s_1299_;
}
else
{
if (v___x_1303_ == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = lean_string_utf8_next_fast(v_k_1297_, v_i_1300_);
lean_dec(v_i_1300_);
v___x_1308_ = lean_string_utf8_next_fast(v_input_1298_, v_j_1301_);
lean_dec(v_j_1301_);
v_i_1300_ = v___x_1307_;
v_j_1301_ = v___x_1308_;
goto _start;
}
else
{
lean_dec(v_j_1301_);
lean_dec(v_i_1300_);
return v_s_1299_;
}
}
}
else
{
lean_dec(v_j_1301_);
lean_dec(v_i_1300_);
return v_s_1299_;
}
}
else
{
lean_object* v_imports_1310_; uint8_t v_badModifier_1311_; lean_object* v_error_x3f_1312_; uint8_t v_isModule_1313_; uint8_t v_isMeta_1314_; uint8_t v_isExported_1315_; uint8_t v_importAll_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1325_; 
lean_dec(v_i_1300_);
v_imports_1310_ = lean_ctor_get(v_s_1299_, 0);
v_badModifier_1311_ = lean_ctor_get_uint8(v_s_1299_, sizeof(void*)*3);
v_error_x3f_1312_ = lean_ctor_get(v_s_1299_, 2);
v_isModule_1313_ = lean_ctor_get_uint8(v_s_1299_, sizeof(void*)*3 + 1);
v_isMeta_1314_ = lean_ctor_get_uint8(v_s_1299_, sizeof(void*)*3 + 2);
v_isExported_1315_ = lean_ctor_get_uint8(v_s_1299_, sizeof(void*)*3 + 3);
v_importAll_1316_ = lean_ctor_get_uint8(v_s_1299_, sizeof(void*)*3 + 4);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_s_1299_);
if (v_isSharedCheck_1325_ == 0)
{
lean_object* v_unused_1326_; 
v_unused_1326_ = lean_ctor_get(v_s_1299_, 1);
lean_dec(v_unused_1326_);
v___x_1318_ = v_s_1299_;
v_isShared_1319_ = v_isSharedCheck_1325_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_error_x3f_1312_);
lean_inc(v_imports_1310_);
lean_dec(v_s_1299_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1325_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 1, v_j_1301_);
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_imports_1310_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_j_1301_);
lean_ctor_set(v_reuseFailAlloc_1324_, 2, v_error_x3f_1312_);
lean_ctor_set_uint8(v_reuseFailAlloc_1324_, sizeof(void*)*3, v_badModifier_1311_);
lean_ctor_set_uint8(v_reuseFailAlloc_1324_, sizeof(void*)*3 + 1, v_isModule_1313_);
lean_ctor_set_uint8(v_reuseFailAlloc_1324_, sizeof(void*)*3 + 2, v_isMeta_1314_);
lean_ctor_set_uint8(v_reuseFailAlloc_1324_, sizeof(void*)*3 + 3, v_isExported_1315_);
lean_ctor_set_uint8(v_reuseFailAlloc_1324_, sizeof(void*)*3 + 4, v_importAll_1316_);
v___x_1321_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = l_Lean_ParseImports_whitespace(v_input_1298_, v___x_1321_);
v___x_1323_ = l_Lean_ParseImports_setMeta___redArg(v___x_1322_);
return v___x_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object* v_k_1327_, lean_object* v_input_1328_, lean_object* v_s_1329_, lean_object* v_i_1330_, lean_object* v_j_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v_k_1327_, v_input_1328_, v_s_1329_, v_i_1330_, v_j_1331_);
lean_dec_ref(v_input_1328_);
lean_dec_ref(v_k_1327_);
return v_res_1332_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_mk_string_unchecked("`import` expected", 17, 17);
return v___x_1333_;
}
}
static lean_object* _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0);
v___x_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object* v_k_1336_, lean_object* v_input_1337_, lean_object* v_s_1338_, lean_object* v_i_1339_, lean_object* v_j_1340_){
_start:
{
lean_object* v_s_1342_; uint8_t v___x_1359_; 
v___x_1359_ = lean_string_utf8_at_end(v_k_1336_, v_i_1339_);
if (v___x_1359_ == 0)
{
uint8_t v___x_1360_; 
v___x_1360_ = lean_string_utf8_at_end(v_input_1337_, v_j_1340_);
if (v___x_1360_ == 0)
{
uint32_t v_curr_u2081_1361_; uint32_t v_curr_u2082_1362_; uint8_t v___x_1363_; 
v_curr_u2081_1361_ = lean_string_utf8_get_fast(v_k_1336_, v_i_1339_);
v_curr_u2082_1362_ = lean_string_utf8_get_fast(v_input_1337_, v_j_1340_);
v___x_1363_ = lean_uint32_dec_eq(v_curr_u2081_1361_, v_curr_u2082_1362_);
if (v___x_1363_ == 0)
{
lean_dec(v_j_1340_);
lean_dec(v_i_1339_);
v_s_1342_ = v_s_1338_;
goto v___jp_1341_;
}
else
{
if (v___x_1360_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_string_utf8_next_fast(v_k_1336_, v_i_1339_);
lean_dec(v_i_1339_);
v___x_1365_ = lean_string_utf8_next_fast(v_input_1337_, v_j_1340_);
lean_dec(v_j_1340_);
v_i_1339_ = v___x_1364_;
v_j_1340_ = v___x_1365_;
goto _start;
}
else
{
lean_dec(v_j_1340_);
lean_dec(v_i_1339_);
v_s_1342_ = v_s_1338_;
goto v___jp_1341_;
}
}
}
else
{
lean_dec(v_j_1340_);
lean_dec(v_i_1339_);
v_s_1342_ = v_s_1338_;
goto v___jp_1341_;
}
}
else
{
lean_object* v_imports_1367_; uint8_t v_badModifier_1368_; lean_object* v_error_x3f_1369_; uint8_t v_isModule_1370_; uint8_t v_isMeta_1371_; uint8_t v_isExported_1372_; uint8_t v_importAll_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1381_; 
lean_dec(v_i_1339_);
v_imports_1367_ = lean_ctor_get(v_s_1338_, 0);
v_badModifier_1368_ = lean_ctor_get_uint8(v_s_1338_, sizeof(void*)*3);
v_error_x3f_1369_ = lean_ctor_get(v_s_1338_, 2);
v_isModule_1370_ = lean_ctor_get_uint8(v_s_1338_, sizeof(void*)*3 + 1);
v_isMeta_1371_ = lean_ctor_get_uint8(v_s_1338_, sizeof(void*)*3 + 2);
v_isExported_1372_ = lean_ctor_get_uint8(v_s_1338_, sizeof(void*)*3 + 3);
v_importAll_1373_ = lean_ctor_get_uint8(v_s_1338_, sizeof(void*)*3 + 4);
v_isSharedCheck_1381_ = !lean_is_exclusive(v_s_1338_);
if (v_isSharedCheck_1381_ == 0)
{
lean_object* v_unused_1382_; 
v_unused_1382_ = lean_ctor_get(v_s_1338_, 1);
lean_dec(v_unused_1382_);
v___x_1375_ = v_s_1338_;
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_error_x3f_1369_);
lean_inc(v_imports_1367_);
lean_dec(v_s_1338_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v_j_1340_);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_imports_1367_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_j_1340_);
lean_ctor_set(v_reuseFailAlloc_1380_, 2, v_error_x3f_1369_);
lean_ctor_set_uint8(v_reuseFailAlloc_1380_, sizeof(void*)*3, v_badModifier_1368_);
lean_ctor_set_uint8(v_reuseFailAlloc_1380_, sizeof(void*)*3 + 1, v_isModule_1370_);
lean_ctor_set_uint8(v_reuseFailAlloc_1380_, sizeof(void*)*3 + 2, v_isMeta_1371_);
lean_ctor_set_uint8(v_reuseFailAlloc_1380_, sizeof(void*)*3 + 3, v_isExported_1372_);
lean_ctor_set_uint8(v_reuseFailAlloc_1380_, sizeof(void*)*3 + 4, v_importAll_1373_);
v___x_1378_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Lean_ParseImports_whitespace(v_input_1337_, v___x_1378_);
return v___x_1379_;
}
}
}
v___jp_1341_:
{
lean_object* v_imports_1343_; lean_object* v_pos_1344_; uint8_t v_badModifier_1345_; uint8_t v_isModule_1346_; uint8_t v_isMeta_1347_; uint8_t v_isExported_1348_; uint8_t v_importAll_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1357_; 
v_imports_1343_ = lean_ctor_get(v_s_1342_, 0);
v_pos_1344_ = lean_ctor_get(v_s_1342_, 1);
v_badModifier_1345_ = lean_ctor_get_uint8(v_s_1342_, sizeof(void*)*3);
v_isModule_1346_ = lean_ctor_get_uint8(v_s_1342_, sizeof(void*)*3 + 1);
v_isMeta_1347_ = lean_ctor_get_uint8(v_s_1342_, sizeof(void*)*3 + 2);
v_isExported_1348_ = lean_ctor_get_uint8(v_s_1342_, sizeof(void*)*3 + 3);
v_importAll_1349_ = lean_ctor_get_uint8(v_s_1342_, sizeof(void*)*3 + 4);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_s_1342_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; 
v_unused_1358_ = lean_ctor_get(v_s_1342_, 2);
lean_dec(v_unused_1358_);
v___x_1351_ = v_s_1342_;
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_pos_1344_);
lean_inc(v_imports_1343_);
lean_dec(v_s_1342_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1353_ = lean_obj_once(&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1, &l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_once, _init_l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 2, v___x_1353_);
v___x_1355_ = v___x_1351_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_imports_1343_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_pos_1344_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v___x_1353_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3, v_badModifier_1345_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3 + 1, v_isModule_1346_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3 + 2, v_isMeta_1347_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3 + 3, v_isExported_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1356_, sizeof(void*)*3 + 4, v_importAll_1349_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object* v_k_1383_, lean_object* v_input_1384_, lean_object* v_s_1385_, lean_object* v_i_1386_, lean_object* v_j_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v_k_1383_, v_input_1384_, v_s_1385_, v_i_1386_, v_j_1387_);
lean_dec_ref(v_input_1384_);
lean_dec_ref(v_k_1383_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object* v_k_1389_, lean_object* v_input_1390_, lean_object* v_s_1391_, lean_object* v_i_1392_, lean_object* v_j_1393_){
_start:
{
uint8_t v___x_1394_; 
v___x_1394_ = lean_string_utf8_at_end(v_k_1389_, v_i_1392_);
if (v___x_1394_ == 0)
{
uint8_t v___x_1395_; 
v___x_1395_ = lean_string_utf8_at_end(v_input_1390_, v_j_1393_);
if (v___x_1395_ == 0)
{
uint32_t v_curr_u2081_1396_; uint32_t v_curr_u2082_1397_; uint8_t v___x_1398_; 
v_curr_u2081_1396_ = lean_string_utf8_get_fast(v_k_1389_, v_i_1392_);
v_curr_u2082_1397_ = lean_string_utf8_get_fast(v_input_1390_, v_j_1393_);
v___x_1398_ = lean_uint32_dec_eq(v_curr_u2081_1396_, v_curr_u2082_1397_);
if (v___x_1398_ == 0)
{
lean_dec(v_j_1393_);
lean_dec(v_i_1392_);
return v_s_1391_;
}
else
{
if (v___x_1395_ == 0)
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_string_utf8_next_fast(v_k_1389_, v_i_1392_);
lean_dec(v_i_1392_);
v___x_1400_ = lean_string_utf8_next_fast(v_input_1390_, v_j_1393_);
lean_dec(v_j_1393_);
v_i_1392_ = v___x_1399_;
v_j_1393_ = v___x_1400_;
goto _start;
}
else
{
lean_dec(v_j_1393_);
lean_dec(v_i_1392_);
return v_s_1391_;
}
}
}
else
{
lean_dec(v_j_1393_);
lean_dec(v_i_1392_);
return v_s_1391_;
}
}
else
{
lean_object* v_imports_1402_; uint8_t v_badModifier_1403_; lean_object* v_error_x3f_1404_; uint8_t v_isModule_1405_; uint8_t v_isMeta_1406_; uint8_t v_isExported_1407_; uint8_t v_importAll_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1417_; 
lean_dec(v_i_1392_);
v_imports_1402_ = lean_ctor_get(v_s_1391_, 0);
v_badModifier_1403_ = lean_ctor_get_uint8(v_s_1391_, sizeof(void*)*3);
v_error_x3f_1404_ = lean_ctor_get(v_s_1391_, 2);
v_isModule_1405_ = lean_ctor_get_uint8(v_s_1391_, sizeof(void*)*3 + 1);
v_isMeta_1406_ = lean_ctor_get_uint8(v_s_1391_, sizeof(void*)*3 + 2);
v_isExported_1407_ = lean_ctor_get_uint8(v_s_1391_, sizeof(void*)*3 + 3);
v_importAll_1408_ = lean_ctor_get_uint8(v_s_1391_, sizeof(void*)*3 + 4);
v_isSharedCheck_1417_ = !lean_is_exclusive(v_s_1391_);
if (v_isSharedCheck_1417_ == 0)
{
lean_object* v_unused_1418_; 
v_unused_1418_ = lean_ctor_get(v_s_1391_, 1);
lean_dec(v_unused_1418_);
v___x_1410_ = v_s_1391_;
v_isShared_1411_ = v_isSharedCheck_1417_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_error_x3f_1404_);
lean_inc(v_imports_1402_);
lean_dec(v_s_1391_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1417_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 1, v_j_1393_);
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_imports_1402_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_j_1393_);
lean_ctor_set(v_reuseFailAlloc_1416_, 2, v_error_x3f_1404_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*3, v_badModifier_1403_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*3 + 1, v_isModule_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*3 + 2, v_isMeta_1406_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*3 + 3, v_isExported_1407_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*3 + 4, v_importAll_1408_);
v___x_1413_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = l_Lean_ParseImports_whitespace(v_input_1390_, v___x_1413_);
v___x_1415_ = l_Lean_ParseImports_setImportAll___redArg(v___x_1414_);
return v___x_1415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object* v_k_1419_, lean_object* v_input_1420_, lean_object* v_s_1421_, lean_object* v_i_1422_, lean_object* v_j_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v_k_1419_, v_input_1420_, v_s_1421_, v_i_1422_, v_j_1423_);
lean_dec_ref(v_input_1420_);
lean_dec_ref(v_k_1419_);
return v_res_1424_;
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_mk_string_unchecked("all", 3, 3);
return v___x_1425_;
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_mk_string_unchecked("public", 6, 6);
return v___x_1426_;
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_mk_string_unchecked("meta", 4, 4);
return v___x_1427_;
}
}
static lean_object* _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3(void){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_mk_string_unchecked("import", 6, 6);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object* v_input_1429_, lean_object* v_s_1430_){
_start:
{
lean_object* v_pos_1431_; lean_object* v___y_1433_; lean_object* v_imports_1434_; lean_object* v_pos_1435_; uint8_t v_isModule_1436_; uint8_t v_isMeta_1437_; uint8_t v_isExported_1438_; uint8_t v_importAll_1439_; lean_object* v___y_1445_; lean_object* v___y_1472_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v_error_x3f_1504_; 
v_pos_1431_ = lean_ctor_get(v_s_1430_, 1);
lean_inc_n(v_pos_1431_, 2);
v___x_1501_ = lean_obj_once(&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1, &l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_once, _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1);
v___x_1502_ = lean_unsigned_to_nat(0u);
v___x_1503_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v___x_1501_, v_input_1429_, v_s_1430_, v___x_1502_, v_pos_1431_);
v_error_x3f_1504_ = lean_ctor_get(v___x_1503_, 2);
lean_inc(v_error_x3f_1504_);
if (lean_obj_tag(v_error_x3f_1504_) == 1)
{
lean_dec_ref(v_error_x3f_1504_);
v___y_1472_ = v___x_1503_;
goto v___jp_1471_;
}
else
{
lean_object* v_pos_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v_error_x3f_1508_; 
lean_dec(v_error_x3f_1504_);
v_pos_1505_ = lean_ctor_get(v___x_1503_, 1);
lean_inc(v_pos_1505_);
v___x_1506_ = lean_obj_once(&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2, &l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_once, _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2);
v___x_1507_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v___x_1506_, v_input_1429_, v___x_1503_, v___x_1502_, v_pos_1505_);
v_error_x3f_1508_ = lean_ctor_get(v___x_1507_, 2);
lean_inc(v_error_x3f_1508_);
if (lean_obj_tag(v_error_x3f_1508_) == 1)
{
lean_dec_ref(v_error_x3f_1508_);
v___y_1472_ = v___x_1507_;
goto v___jp_1471_;
}
else
{
lean_object* v_pos_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
lean_dec(v_error_x3f_1508_);
v_pos_1509_ = lean_ctor_get(v___x_1507_, 1);
lean_inc(v_pos_1509_);
v___x_1510_ = lean_obj_once(&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3, &l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_once, _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3);
v___x_1511_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v___x_1510_, v_input_1429_, v___x_1507_, v___x_1502_, v_pos_1509_);
v___y_1472_ = v___x_1511_;
goto v___jp_1471_;
}
}
v___jp_1432_:
{
uint8_t v___x_1440_; 
v___x_1440_ = lean_nat_dec_eq(v_pos_1435_, v_pos_1431_);
lean_dec(v_pos_1431_);
if (v___x_1440_ == 0)
{
lean_dec(v_pos_1435_);
lean_dec_ref(v_imports_1434_);
return v___y_1433_;
}
else
{
uint8_t v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v___y_1433_);
v___x_1441_ = 0;
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1443_, 0, v_imports_1434_);
lean_ctor_set(v___x_1443_, 1, v_pos_1435_);
lean_ctor_set(v___x_1443_, 2, v___x_1442_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3, v___x_1441_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3 + 1, v_isModule_1436_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3 + 2, v_isMeta_1437_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3 + 3, v_isExported_1438_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*3 + 4, v_importAll_1439_);
return v___x_1443_;
}
}
v___jp_1444_:
{
lean_object* v_error_x3f_1446_; 
v_error_x3f_1446_ = lean_ctor_get(v___y_1445_, 2);
if (lean_obj_tag(v_error_x3f_1446_) == 1)
{
lean_object* v_imports_1447_; lean_object* v_pos_1448_; uint8_t v_isModule_1449_; uint8_t v_isMeta_1450_; uint8_t v_isExported_1451_; uint8_t v_importAll_1452_; 
lean_dec_ref(v_input_1429_);
v_imports_1447_ = lean_ctor_get(v___y_1445_, 0);
lean_inc_ref(v_imports_1447_);
v_pos_1448_ = lean_ctor_get(v___y_1445_, 1);
lean_inc(v_pos_1448_);
v_isModule_1449_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 1);
v_isMeta_1450_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 2);
v_isExported_1451_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 3);
v_importAll_1452_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 4);
v___y_1433_ = v___y_1445_;
v_imports_1434_ = v_imports_1447_;
v_pos_1435_ = v_pos_1448_;
v_isModule_1436_ = v_isModule_1449_;
v_isMeta_1437_ = v_isMeta_1450_;
v_isExported_1438_ = v_isExported_1451_;
v_importAll_1439_ = v_importAll_1452_;
goto v___jp_1432_;
}
else
{
uint8_t v_badModifier_1453_; 
v_badModifier_1453_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3);
if (v_badModifier_1453_ == 0)
{
lean_dec(v_pos_1431_);
v_s_1430_ = v___y_1445_;
goto _start;
}
else
{
lean_object* v_imports_1455_; uint8_t v_isModule_1456_; uint8_t v_isMeta_1457_; uint8_t v_isExported_1458_; uint8_t v_importAll_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1468_; 
lean_dec_ref(v_input_1429_);
v_imports_1455_ = lean_ctor_get(v___y_1445_, 0);
v_isModule_1456_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 1);
v_isMeta_1457_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 2);
v_isExported_1458_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 3);
v_importAll_1459_ = lean_ctor_get_uint8(v___y_1445_, sizeof(void*)*3 + 4);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___y_1445_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; lean_object* v_unused_1470_; 
v_unused_1469_ = lean_ctor_get(v___y_1445_, 2);
lean_dec(v_unused_1469_);
v_unused_1470_ = lean_ctor_get(v___y_1445_, 1);
lean_dec(v_unused_1470_);
v___x_1461_ = v___y_1445_;
v_isShared_1462_ = v_isSharedCheck_1468_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_imports_1455_);
lean_dec(v___y_1445_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1468_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1463_ = 0;
v___x_1464_ = lean_obj_once(&l_Lean_ParseImports_manyImports___closed__1, &l_Lean_ParseImports_manyImports___closed__1_once, _init_l_Lean_ParseImports_manyImports___closed__1);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 2, v___x_1464_);
lean_ctor_set(v___x_1461_, 1, v_pos_1431_);
v___x_1466_ = v___x_1461_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_imports_1455_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_pos_1431_);
lean_ctor_set(v_reuseFailAlloc_1467_, 2, v___x_1464_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3 + 1, v_isModule_1456_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3 + 2, v_isMeta_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3 + 3, v_isExported_1458_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*3 + 4, v_importAll_1459_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_ctor_set_uint8(v___x_1466_, sizeof(void*)*3, v___x_1463_);
return v___x_1466_;
}
}
}
}
}
v___jp_1471_:
{
lean_object* v_error_x3f_1473_; 
v_error_x3f_1473_ = lean_ctor_get(v___y_1472_, 2);
if (lean_obj_tag(v_error_x3f_1473_) == 1)
{
lean_object* v_imports_1474_; uint8_t v_badModifier_1475_; uint8_t v_isModule_1476_; uint8_t v_isMeta_1477_; uint8_t v_isExported_1478_; uint8_t v_importAll_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_inc_ref(v_error_x3f_1473_);
lean_dec_ref(v_input_1429_);
v_imports_1474_ = lean_ctor_get(v___y_1472_, 0);
v_badModifier_1475_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3);
v_isModule_1476_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 1);
v_isMeta_1477_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 2);
v_isExported_1478_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 3);
v_importAll_1479_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 4);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___y_1472_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; lean_object* v_unused_1488_; 
v_unused_1487_ = lean_ctor_get(v___y_1472_, 2);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v___y_1472_, 1);
lean_dec(v_unused_1488_);
v___x_1481_ = v___y_1472_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_imports_1474_);
lean_dec(v___y_1472_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
lean_inc(v_pos_1431_);
lean_inc_ref(v_imports_1474_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 1, v_pos_1431_);
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_imports_1474_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_pos_1431_);
lean_ctor_set(v_reuseFailAlloc_1485_, 2, v_error_x3f_1473_);
lean_ctor_set_uint8(v_reuseFailAlloc_1485_, sizeof(void*)*3, v_badModifier_1475_);
lean_ctor_set_uint8(v_reuseFailAlloc_1485_, sizeof(void*)*3 + 1, v_isModule_1476_);
lean_ctor_set_uint8(v_reuseFailAlloc_1485_, sizeof(void*)*3 + 2, v_isMeta_1477_);
lean_ctor_set_uint8(v_reuseFailAlloc_1485_, sizeof(void*)*3 + 3, v_isExported_1478_);
lean_ctor_set_uint8(v_reuseFailAlloc_1485_, sizeof(void*)*3 + 4, v_importAll_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_inc(v_pos_1431_);
v___y_1433_ = v___x_1484_;
v_imports_1434_ = v_imports_1474_;
v_pos_1435_ = v_pos_1431_;
v_isModule_1436_ = v_isModule_1476_;
v_isMeta_1437_ = v_isMeta_1477_;
v_isExported_1438_ = v_isExported_1478_;
v_importAll_1439_ = v_importAll_1479_;
goto v___jp_1432_;
}
}
}
else
{
if (lean_obj_tag(v_error_x3f_1473_) == 1)
{
lean_object* v_imports_1489_; lean_object* v_pos_1490_; uint8_t v_isModule_1491_; uint8_t v_isMeta_1492_; uint8_t v_isExported_1493_; uint8_t v_importAll_1494_; 
lean_dec_ref(v_input_1429_);
v_imports_1489_ = lean_ctor_get(v___y_1472_, 0);
lean_inc_ref(v_imports_1489_);
v_pos_1490_ = lean_ctor_get(v___y_1472_, 1);
lean_inc(v_pos_1490_);
v_isModule_1491_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 1);
v_isMeta_1492_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 2);
v_isExported_1493_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 3);
v_importAll_1494_ = lean_ctor_get_uint8(v___y_1472_, sizeof(void*)*3 + 4);
v___y_1433_ = v___y_1472_;
v_imports_1434_ = v_imports_1489_;
v_pos_1435_ = v_pos_1490_;
v_isModule_1436_ = v_isModule_1491_;
v_isMeta_1437_ = v_isMeta_1492_;
v_isExported_1438_ = v_isExported_1493_;
v_importAll_1439_ = v_importAll_1494_;
goto v___jp_1432_;
}
else
{
lean_object* v_pos_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v_error_x3f_1499_; 
v_pos_1495_ = lean_ctor_get(v___y_1472_, 1);
lean_inc(v_pos_1495_);
v___x_1496_ = lean_obj_once(&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0, &l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_once, _init_l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0);
v___x_1497_ = lean_unsigned_to_nat(0u);
v___x_1498_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v___x_1496_, v_input_1429_, v___y_1472_, v___x_1497_, v_pos_1495_);
v_error_x3f_1499_ = lean_ctor_get(v___x_1498_, 2);
lean_inc(v_error_x3f_1499_);
if (lean_obj_tag(v_error_x3f_1499_) == 1)
{
lean_dec_ref(v_error_x3f_1499_);
v___y_1445_ = v___x_1498_;
goto v___jp_1444_;
}
else
{
lean_object* v___x_1500_; 
lean_dec(v_error_x3f_1499_);
lean_inc_ref(v_input_1429_);
v___x_1500_ = l_Lean_ParseImports_moduleIdent(v_input_1429_, v___x_1498_);
v___y_1445_ = v___x_1500_;
goto v___jp_1444_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_ParseImports_main___closed__0(void){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_mk_string_unchecked("module", 6, 6);
return v___x_1512_;
}
}
static lean_object* _init_l_Lean_ParseImports_main___closed__1(void){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_mk_string_unchecked("prelude", 7, 7);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object* v_a_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_pos_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v_s_1519_; lean_object* v_error_x3f_1520_; 
v_pos_1516_ = lean_ctor_get(v_a_1515_, 1);
lean_inc(v_pos_1516_);
v___x_1517_ = lean_obj_once(&l_Lean_ParseImports_main___closed__0, &l_Lean_ParseImports_main___closed__0_once, _init_l_Lean_ParseImports_main___closed__0);
v___x_1518_ = lean_unsigned_to_nat(0u);
v_s_1519_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v___x_1517_, v_a_1514_, v_a_1515_, v___x_1518_, v_pos_1516_);
v_error_x3f_1520_ = lean_ctor_get(v_s_1519_, 2);
lean_inc(v_error_x3f_1520_);
if (lean_obj_tag(v_error_x3f_1520_) == 1)
{
lean_dec_ref(v_error_x3f_1520_);
lean_dec_ref(v_a_1514_);
return v_s_1519_;
}
else
{
lean_object* v_pos_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v_error_x3f_1524_; 
lean_dec(v_error_x3f_1520_);
v_pos_1521_ = lean_ctor_get(v_s_1519_, 1);
lean_inc(v_pos_1521_);
v___x_1522_ = lean_obj_once(&l_Lean_ParseImports_main___closed__1, &l_Lean_ParseImports_main___closed__1_once, _init_l_Lean_ParseImports_main___closed__1);
v___x_1523_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v___x_1522_, v_a_1514_, v_s_1519_, v___x_1518_, v_pos_1521_);
v_error_x3f_1524_ = lean_ctor_get(v___x_1523_, 2);
lean_inc(v_error_x3f_1524_);
if (lean_obj_tag(v_error_x3f_1524_) == 1)
{
lean_dec_ref(v_error_x3f_1524_);
lean_dec_ref(v_a_1514_);
return v___x_1523_;
}
else
{
lean_object* v___x_1525_; 
lean_dec(v_error_x3f_1524_);
v___x_1525_ = l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(v_a_1514_, v___x_1523_);
return v___x_1525_;
}
}
}
}
static lean_object* _init_l_Lean_parseImports_x27___closed__0(void){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_1526_;
}
}
static lean_object* _init_l_Lean_parseImports_x27___closed__1(void){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_mk_string_unchecked(": ", 2, 2);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object* v_input_1528_, lean_object* v_fileName_1529_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v_s_1533_; lean_object* v_error_x3f_1534_; 
v___x_1531_ = lean_obj_once(&l_Lean_ParseImports_instInhabitedState_default___closed__1, &l_Lean_ParseImports_instInhabitedState_default___closed__1_once, _init_l_Lean_ParseImports_instInhabitedState_default___closed__1);
v___x_1532_ = l_Lean_ParseImports_whitespace(v_input_1528_, v___x_1531_);
lean_inc_ref(v_input_1528_);
v_s_1533_ = l_Lean_ParseImports_main(v_input_1528_, v___x_1532_);
v_error_x3f_1534_ = lean_ctor_get(v_s_1533_, 2);
lean_inc(v_error_x3f_1534_);
if (lean_obj_tag(v_error_x3f_1534_) == 1)
{
lean_object* v_pos_1535_; lean_object* v_val_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1558_; 
v_pos_1535_ = lean_ctor_get(v_s_1533_, 1);
lean_inc(v_pos_1535_);
lean_dec_ref(v_s_1533_);
v_val_1536_ = lean_ctor_get(v_error_x3f_1534_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_error_x3f_1534_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1538_ = v_error_x3f_1534_;
v_isShared_1539_ = v_isSharedCheck_1558_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_val_1536_);
lean_dec(v_error_x3f_1534_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1558_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v_fileMap_1540_; lean_object* v_pos_1541_; lean_object* v_line_1542_; lean_object* v_column_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v_fileMap_1540_ = l_String_toFileMap(v_input_1528_);
v_pos_1541_ = l_Lean_FileMap_toPosition(v_fileMap_1540_, v_pos_1535_);
lean_dec(v_pos_1535_);
v_line_1542_ = lean_ctor_get(v_pos_1541_, 0);
lean_inc(v_line_1542_);
v_column_1543_ = lean_ctor_get(v_pos_1541_, 1);
lean_inc(v_column_1543_);
lean_dec_ref(v_pos_1541_);
v___x_1544_ = lean_obj_once(&l_Lean_parseImports_x27___closed__0, &l_Lean_parseImports_x27___closed__0_once, _init_l_Lean_parseImports_x27___closed__0);
v___x_1545_ = lean_string_append(v_fileName_1529_, v___x_1544_);
v___x_1546_ = l_Nat_reprFast(v_line_1542_);
v___x_1547_ = lean_string_append(v___x_1545_, v___x_1546_);
lean_dec_ref(v___x_1546_);
v___x_1548_ = lean_string_append(v___x_1547_, v___x_1544_);
v___x_1549_ = l_Nat_reprFast(v_column_1543_);
v___x_1550_ = lean_string_append(v___x_1548_, v___x_1549_);
lean_dec_ref(v___x_1549_);
v___x_1551_ = lean_obj_once(&l_Lean_parseImports_x27___closed__1, &l_Lean_parseImports_x27___closed__1_once, _init_l_Lean_parseImports_x27___closed__1);
v___x_1552_ = lean_string_append(v___x_1550_, v___x_1551_);
v___x_1553_ = lean_string_append(v___x_1552_, v_val_1536_);
lean_dec(v_val_1536_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set_tag(v___x_1538_, 18);
lean_ctor_set(v___x_1538_, 0, v___x_1553_);
v___x_1555_ = v___x_1538_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
else
{
lean_object* v_imports_1559_; uint8_t v_isModule_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_dec(v_error_x3f_1534_);
lean_dec_ref(v_fileName_1529_);
lean_dec_ref(v_input_1528_);
v_imports_1559_ = lean_ctor_get(v_s_1533_, 0);
lean_inc_ref(v_imports_1559_);
v_isModule_1560_ = lean_ctor_get_uint8(v_s_1533_, sizeof(void*)*3 + 1);
lean_dec_ref(v_s_1533_);
v___x_1561_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1561_, 0, v_imports_1559_);
lean_ctor_set_uint8(v___x_1561_, sizeof(void*)*1, v_isModule_1560_);
v___x_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
return v___x_1562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object* v_input_1563_, lean_object* v_fileName_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_parseImports_x27(v_input_1563_, v_fileName_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object* v_k_1567_, lean_object* v_x_1568_){
_start:
{
if (lean_obj_tag(v_x_1568_) == 0)
{
lean_object* v___x_1569_; 
lean_dec_ref(v_k_1567_);
v___x_1569_ = lean_box(0);
return v___x_1569_;
}
else
{
lean_object* v_val_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v_val_1570_ = lean_ctor_get(v_x_1568_, 0);
lean_inc(v_val_1570_);
lean_dec_ref(v_x_1568_);
v___x_1571_ = l_Lean_instToJsonModuleHeader_toJson(v_val_1570_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_k_1567_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = lean_box(0);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
return v___x_1574_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
if (lean_obj_tag(v_a_1575_) == 0)
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_array_to_list(v_a_1576_);
return v___x_1577_;
}
else
{
lean_object* v_head_1578_; lean_object* v_tail_1579_; lean_object* v___x_1580_; 
v_head_1578_ = lean_ctor_get(v_a_1575_, 0);
lean_inc(v_head_1578_);
v_tail_1579_ = lean_ctor_get(v_a_1575_, 1);
lean_inc(v_tail_1579_);
lean_dec_ref(v_a_1575_);
v___x_1580_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1576_, v_head_1578_);
v_a_1575_ = v_tail_1579_;
v_a_1576_ = v___x_1580_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t v_sz_1582_, size_t v_i_1583_, lean_object* v_bs_1584_){
_start:
{
uint8_t v___x_1585_; 
v___x_1585_ = lean_usize_dec_lt(v_i_1583_, v_sz_1582_);
if (v___x_1585_ == 0)
{
return v_bs_1584_;
}
else
{
lean_object* v_v_1586_; lean_object* v___x_1587_; lean_object* v_bs_x27_1588_; lean_object* v___x_1589_; size_t v___x_1590_; size_t v___x_1591_; lean_object* v___x_1592_; 
v_v_1586_ = lean_array_uget(v_bs_1584_, v_i_1583_);
v___x_1587_ = lean_unsigned_to_nat(0u);
v_bs_x27_1588_ = lean_array_uset(v_bs_1584_, v_i_1583_, v___x_1587_);
v___x_1589_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_v_1586_);
v___x_1590_ = ((size_t)1ULL);
v___x_1591_ = lean_usize_add(v_i_1583_, v___x_1590_);
v___x_1592_ = lean_array_uset(v_bs_x27_1588_, v_i_1583_, v___x_1589_);
v_i_1583_ = v___x_1591_;
v_bs_1584_ = v___x_1592_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object* v_sz_1594_, lean_object* v_i_1595_, lean_object* v_bs_1596_){
_start:
{
size_t v_sz_boxed_1597_; size_t v_i_boxed_1598_; lean_object* v_res_1599_; 
v_sz_boxed_1597_ = lean_unbox_usize(v_sz_1594_);
lean_dec(v_sz_1594_);
v_i_boxed_1598_ = lean_unbox_usize(v_i_1595_);
lean_dec(v_i_1595_);
v_res_1599_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_boxed_1597_, v_i_boxed_1598_, v_bs_1596_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object* v_a_1600_){
_start:
{
size_t v_sz_1601_; size_t v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v_sz_1601_ = lean_array_size(v_a_1600_);
v___x_1602_ = ((size_t)0ULL);
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_1601_, v___x_1602_, v_a_1600_);
v___x_1604_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportResult_toJson___closed__0(void){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_mk_string_unchecked("result", 6, 6);
return v___x_1605_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportResult_toJson___closed__1(void){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_mk_string_unchecked("errors", 6, 6);
return v___x_1606_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportResult_toJson___closed__2(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = lean_unsigned_to_nat(0u);
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object* v_x_1609_){
_start:
{
lean_object* v_result_x3f_1610_; lean_object* v_errors_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1629_; 
v_result_x3f_1610_ = lean_ctor_get(v_x_1609_, 0);
v_errors_1611_ = lean_ctor_get(v_x_1609_, 1);
v_isSharedCheck_1629_ = !lean_is_exclusive(v_x_1609_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1613_ = v_x_1609_;
v_isShared_1614_ = v_isSharedCheck_1629_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_errors_1611_);
lean_inc(v_result_x3f_1610_);
lean_dec(v_x_1609_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1629_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1620_; 
v___x_1615_ = lean_obj_once(&l_Lean_instToJsonPrintImportResult_toJson___closed__0, &l_Lean_instToJsonPrintImportResult_toJson___closed__0_once, _init_l_Lean_instToJsonPrintImportResult_toJson___closed__0);
v___x_1616_ = l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(v___x_1615_, v_result_x3f_1610_);
v___x_1617_ = lean_obj_once(&l_Lean_instToJsonPrintImportResult_toJson___closed__1, &l_Lean_instToJsonPrintImportResult_toJson___closed__1_once, _init_l_Lean_instToJsonPrintImportResult_toJson___closed__1);
v___x_1618_ = l_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(v_errors_1611_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 1, v___x_1618_);
lean_ctor_set(v___x_1613_, 0, v___x_1617_);
v___x_1620_ = v___x_1613_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v___x_1621_);
v___x_1624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1616_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = lean_obj_once(&l_Lean_instToJsonPrintImportResult_toJson___closed__2, &l_Lean_instToJsonPrintImportResult_toJson___closed__2_once, _init_l_Lean_instToJsonPrintImportResult_toJson___closed__2);
v___x_1626_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1624_, v___x_1625_);
v___x_1627_ = l_Lean_Json_mkObj(v___x_1626_);
lean_dec(v___x_1626_);
return v___x_1627_;
}
}
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportResult___closed__0(void){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_alloc_closure((void*)(l_Lean_instToJsonPrintImportResult_toJson), 1, 0);
return v___x_1630_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportResult(void){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_obj_once(&l_Lean_instToJsonPrintImportResult___closed__0, &l_Lean_instToJsonPrintImportResult___closed__0_once, _init_l_Lean_instToJsonPrintImportResult___closed__0);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t v_sz_1632_, size_t v_i_1633_, lean_object* v_bs_1634_){
_start:
{
uint8_t v___x_1635_; 
v___x_1635_ = lean_usize_dec_lt(v_i_1633_, v_sz_1632_);
if (v___x_1635_ == 0)
{
return v_bs_1634_;
}
else
{
lean_object* v_v_1636_; lean_object* v___x_1637_; lean_object* v_bs_x27_1638_; lean_object* v___x_1639_; size_t v___x_1640_; size_t v___x_1641_; lean_object* v___x_1642_; 
v_v_1636_ = lean_array_uget(v_bs_1634_, v_i_1633_);
v___x_1637_ = lean_unsigned_to_nat(0u);
v_bs_x27_1638_ = lean_array_uset(v_bs_1634_, v_i_1633_, v___x_1637_);
v___x_1639_ = l_Lean_instToJsonPrintImportResult_toJson(v_v_1636_);
v___x_1640_ = ((size_t)1ULL);
v___x_1641_ = lean_usize_add(v_i_1633_, v___x_1640_);
v___x_1642_ = lean_array_uset(v_bs_x27_1638_, v_i_1633_, v___x_1639_);
v_i_1633_ = v___x_1641_;
v_bs_1634_ = v___x_1642_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1644_, lean_object* v_i_1645_, lean_object* v_bs_1646_){
_start:
{
size_t v_sz_boxed_1647_; size_t v_i_boxed_1648_; lean_object* v_res_1649_; 
v_sz_boxed_1647_ = lean_unbox_usize(v_sz_1644_);
lean_dec(v_sz_1644_);
v_i_boxed_1648_ = lean_unbox_usize(v_i_1645_);
lean_dec(v_i_1645_);
v_res_1649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_boxed_1647_, v_i_boxed_1648_, v_bs_1646_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object* v_a_1650_){
_start:
{
size_t v_sz_1651_; size_t v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_sz_1651_ = lean_array_size(v_a_1650_);
v___x_1652_ = ((size_t)0ULL);
v___x_1653_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_1651_, v___x_1652_, v_a_1650_);
v___x_1654_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportsResult_toJson___closed__0(void){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_mk_string_unchecked("imports", 7, 7);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object* v_x_1656_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1657_ = lean_obj_once(&l_Lean_instToJsonPrintImportsResult_toJson___closed__0, &l_Lean_instToJsonPrintImportsResult_toJson___closed__0_once, _init_l_Lean_instToJsonPrintImportsResult_toJson___closed__0);
v___x_1658_ = l_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(v_x_1656_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_box(0);
v___x_1661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___x_1660_);
v___x_1663_ = lean_obj_once(&l_Lean_instToJsonPrintImportResult_toJson___closed__2, &l_Lean_instToJsonPrintImportResult_toJson___closed__2_once, _init_l_Lean_instToJsonPrintImportResult_toJson___closed__2);
v___x_1664_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1662_, v___x_1663_);
v___x_1665_ = l_Lean_Json_mkObj(v___x_1664_);
lean_dec(v___x_1664_);
return v___x_1665_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportsResult___closed__0(void){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_alloc_closure((void*)(l_Lean_instToJsonPrintImportsResult_toJson), 1, 0);
return v___x_1666_;
}
}
static lean_object* _init_l_Lean_instToJsonPrintImportsResult(void){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_obj_once(&l_Lean_instToJsonPrintImportsResult___closed__0, &l_Lean_instToJsonPrintImportsResult___closed__0_once, _init_l_Lean_instToJsonPrintImportsResult___closed__0);
return v___x_1667_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_unsigned_to_nat(0u);
v___x_1669_ = lean_mk_empty_array_with_capacity(v___x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t v_sz_1670_, size_t v_i_1671_, lean_object* v_bs_1672_){
_start:
{
uint8_t v___x_1674_; 
v___x_1674_ = lean_usize_dec_lt(v_i_1671_, v_sz_1670_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_bs_1672_);
return v___x_1675_;
}
else
{
lean_object* v_v_1676_; lean_object* v___x_1677_; lean_object* v_bs_x27_1678_; lean_object* v_a_1680_; lean_object* v_a_1686_; lean_object* v___x_1693_; 
v_v_1676_ = lean_array_uget(v_bs_1672_, v_i_1671_);
v___x_1677_ = lean_unsigned_to_nat(0u);
v_bs_x27_1678_ = lean_array_uset(v_bs_1672_, v_i_1671_, v___x_1677_);
v___x_1693_ = l_IO_FS_readFile(v_v_1676_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1695_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref(v___x_1693_);
v___x_1695_ = l_Lean_parseImports_x27(v_a_1694_, v_v_1676_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1705_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1698_ = v___x_1695_;
v_isShared_1699_ = v_isSharedCheck_1705_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1705_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
lean_ctor_set_tag(v___x_1698_, 1);
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0);
v___x_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1701_);
lean_ctor_set(v___x_1703_, 1, v___x_1702_);
v_a_1680_ = v___x_1703_;
goto v___jp_1679_;
}
}
}
else
{
lean_object* v_a_1706_; 
v_a_1706_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1706_);
lean_dec_ref(v___x_1695_);
v_a_1686_ = v_a_1706_;
goto v___jp_1685_;
}
}
else
{
lean_object* v_a_1707_; 
lean_dec(v_v_1676_);
v_a_1707_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1707_);
lean_dec_ref(v___x_1693_);
v_a_1686_ = v_a_1707_;
goto v___jp_1685_;
}
v___jp_1679_:
{
size_t v___x_1681_; size_t v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = ((size_t)1ULL);
v___x_1682_ = lean_usize_add(v_i_1671_, v___x_1681_);
v___x_1683_ = lean_array_uset(v_bs_x27_1678_, v_i_1671_, v_a_1680_);
v_i_1671_ = v___x_1682_;
v_bs_1672_ = v___x_1683_;
goto _start;
}
v___jp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1687_ = lean_box(0);
v___x_1688_ = lean_io_error_to_string(v_a_1686_);
v___x_1689_ = lean_unsigned_to_nat(1u);
v___x_1690_ = lean_mk_empty_array_with_capacity(v___x_1689_);
v___x_1691_ = lean_array_push(v___x_1690_, v___x_1688_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1687_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v_a_1680_ = v___x_1692_;
goto v___jp_1679_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object* v_sz_1708_, lean_object* v_i_1709_, lean_object* v_bs_1710_, lean_object* v___y_1711_){
_start:
{
size_t v_sz_boxed_1712_; size_t v_i_boxed_1713_; lean_object* v_res_1714_; 
v_sz_boxed_1712_ = lean_unbox_usize(v_sz_1708_);
lean_dec(v_sz_1708_);
v_i_boxed_1713_ = lean_unbox_usize(v_i_1709_);
lean_dec(v_i_1709_);
v_res_1714_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_boxed_1712_, v_i_boxed_1713_, v_bs_1710_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object* v_s_1715_){
_start:
{
lean_object* v___x_1717_; lean_object* v_putStr_1718_; lean_object* v___x_1719_; 
v___x_1717_ = lean_get_stdout();
v_putStr_1718_ = lean_ctor_get(v___x_1717_, 4);
lean_inc_ref(v_putStr_1718_);
lean_dec_ref(v___x_1717_);
v___x_1719_ = lean_apply_2(v_putStr_1718_, v_s_1715_, lean_box(0));
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object* v_s_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v_s_1720_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object* v_s_1723_){
_start:
{
uint32_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = 10;
v___x_1726_ = lean_string_push(v_s_1723_, v___x_1725_);
v___x_1727_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object* v_s_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v_s_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object* v_fileNames_1731_){
_start:
{
size_t v_sz_1733_; size_t v___x_1734_; lean_object* v___x_1735_; 
v_sz_1733_ = lean_array_size(v_fileNames_1731_);
v___x_1734_ = ((size_t)0ULL);
v___x_1735_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_1733_, v___x_1734_, v_fileNames_1731_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref(v___x_1735_);
v___x_1737_ = l_Lean_instToJsonPrintImportsResult_toJson(v_a_1736_);
v___x_1738_ = l_Lean_Json_compress(v___x_1737_);
v___x_1739_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v___x_1738_);
return v___x_1739_;
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1735_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1735_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object* v_fileNames_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_printImportsJson(v_fileNames_1748_);
return v_res_1750_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ParseImports_instInhabitedState_default = _init_l_Lean_ParseImports_instInhabitedState_default();
lean_mark_persistent(l_Lean_ParseImports_instInhabitedState_default);
l_Lean_ParseImports_instInhabitedState = _init_l_Lean_ParseImports_instInhabitedState();
lean_mark_persistent(l_Lean_ParseImports_instInhabitedState);
l_Lean_ParseImports_instInhabitedParser = _init_l_Lean_ParseImports_instInhabitedParser();
lean_mark_persistent(l_Lean_ParseImports_instInhabitedParser);
l_Lean_ParseImports_instAndThenParser = _init_l_Lean_ParseImports_instAndThenParser();
lean_mark_persistent(l_Lean_ParseImports_instAndThenParser);
l_Lean_instToJsonPrintImportResult = _init_l_Lean_instToJsonPrintImportResult();
lean_mark_persistent(l_Lean_instToJsonPrintImportResult);
l_Lean_instToJsonPrintImportsResult = _init_l_Lean_instToJsonPrintImportsResult();
lean_mark_persistent(l_Lean_instToJsonPrintImportsResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ParseImportsFast(builtin);
}
#ifdef __cplusplus
}
#endif
